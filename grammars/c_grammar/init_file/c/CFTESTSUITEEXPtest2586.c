
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

uint16_t x12 = UINT16_MAX;
int32_t t1 = 26817;
int8_t x18 = 14;
uint64_t x24 = UINT64_MAX;
int64_t x42 = INT64_MAX;
int64_t x43 = INT64_MIN;
static volatile int64_t x46 = -1LL;
int64_t x53 = -1LL;
int64_t x57 = INT64_MAX;
static int32_t x66 = INT32_MAX;
int16_t x67 = -91;
int32_t t13 = 134095606;
int8_t x73 = -1;
int16_t x74 = INT16_MAX;
int64_t x92 = INT64_MIN;
int8_t x93 = -1;
int8_t x95 = INT8_MIN;
volatile int32_t x97 = INT32_MIN;
int32_t t19 = 3;
static uint64_t x113 = UINT64_MAX;
volatile int32_t t22 = 1;
int16_t x124 = INT16_MAX;
int64_t x129 = 11730LL;
int16_t x137 = -151;
int64_t x138 = -1LL;
uint64_t x139 = UINT64_MAX;
volatile int64_t x145 = -70LL;
static uint64_t x146 = 770024949958LLU;
static volatile int32_t x148 = INT32_MIN;
volatile int32_t t28 = 969;
int16_t x153 = INT16_MIN;
volatile int16_t x156 = INT16_MIN;
uint64_t x161 = 5692423524203888LLU;
volatile uint8_t x164 = UINT8_MAX;
uint16_t x174 = UINT16_MAX;
volatile int32_t t35 = 54351848;
int8_t x191 = -41;
int16_t x192 = INT16_MIN;
volatile uint8_t x201 = 81U;
volatile uint8_t x204 = 3U;
static uint16_t x209 = UINT16_MAX;
static int32_t t40 = -13;
static int16_t x216 = INT16_MIN;
static volatile int32_t t43 = -5770820;
volatile int32_t t45 = 3475125;
volatile int32_t t47 = 4234779;
volatile int8_t x247 = INT8_MAX;
static int16_t x251 = INT16_MAX;
int32_t t49 = -52712276;
volatile uint64_t x258 = 13LLU;
int16_t x262 = -1;
uint16_t x279 = UINT16_MAX;
volatile int8_t x280 = INT8_MAX;
uint16_t x283 = 28500U;
int64_t x286 = 2013LL;
int8_t x287 = INT8_MIN;
int32_t t59 = 19;
uint32_t x304 = 219902050U;
int64_t x307 = INT64_MIN;
uint8_t x315 = 1U;
static uint16_t x316 = 91U;
uint32_t x322 = 391967960U;
static int16_t x323 = -78;
volatile int32_t t70 = -122514;
volatile int8_t x365 = -3;
volatile int32_t t71 = 3326;
int8_t x371 = -1;
static int16_t x379 = INT16_MIN;
volatile int32_t t73 = -30036;
int32_t x397 = INT32_MIN;
int64_t x405 = -1LL;
static uint64_t x407 = 627114975312LLU;
int8_t x412 = INT8_MIN;
uint32_t x414 = 174U;
volatile int32_t x416 = INT32_MIN;
uint8_t x417 = 5U;
int8_t x420 = INT8_MIN;
static uint64_t x424 = 21854492LLU;
static int32_t x427 = 23545;
uint64_t x428 = 4479524500LLU;
static int8_t x429 = -1;
volatile uint16_t x433 = UINT16_MAX;
uint64_t x434 = 17159362603538583LLU;
static uint64_t x441 = 1LLU;
int16_t x451 = INT16_MIN;
volatile int32_t t89 = 5918499;
volatile int8_t x469 = INT8_MIN;
int8_t x477 = 9;
static uint64_t x481 = 7163210LLU;
uint16_t x482 = 0U;
int32_t x483 = -1;
volatile int32_t t94 = 39;
uint8_t x501 = UINT8_MAX;
int64_t x502 = 11207LL;
volatile int16_t x520 = -69;
static uint64_t x525 = 89LLU;
int32_t t102 = 15710699;
volatile int32_t t105 = 10945211;
static int8_t x561 = 28;
int64_t x565 = -1LL;
volatile int32_t t111 = 1539;
static uint32_t x590 = UINT32_MAX;
int16_t x592 = -1;
int32_t x600 = -1;
int32_t t114 = 72580;
int8_t x604 = -1;
int32_t x608 = -1;
volatile int16_t x620 = INT16_MIN;
uint8_t x623 = UINT8_MAX;
int32_t t119 = -1100;
static uint64_t x634 = 90668012LLU;
uint64_t x640 = 15820930361LLU;
int8_t x644 = -13;
volatile uint16_t x677 = 1U;
volatile uint32_t x679 = 24947U;
int64_t x686 = -1LL;
int8_t x699 = INT8_MIN;
int32_t x709 = 596134;
int32_t t131 = -9103;
uint8_t x713 = 10U;
int64_t x714 = -1LL;
uint32_t x715 = 345951070U;
volatile int32_t x719 = -1;
int8_t x728 = -1;
volatile int32_t t135 = 4;
uint16_t x729 = 7U;
uint64_t x736 = 1620178LLU;
int16_t x755 = -1;
int8_t x756 = INT8_MAX;
volatile int32_t t142 = 60671333;
uint8_t x762 = 15U;
static volatile int64_t x785 = 3LL;
int16_t x787 = INT16_MAX;
static uint32_t x793 = UINT32_MAX;
int8_t x794 = 14;
int8_t x809 = 2;
volatile int32_t t149 = -5698;
int16_t x816 = 1;
int8_t x820 = -1;
int32_t t151 = 124;
static volatile int8_t x826 = INT8_MAX;
static volatile int32_t t154 = 718653;
static int8_t x833 = -1;
int64_t x835 = 3430276432LL;
static volatile int32_t t155 = 0;
int32_t t156 = 0;
uint8_t x841 = UINT8_MAX;
uint32_t x855 = 1180820U;
volatile int32_t t159 = 158027;
uint16_t x867 = 7U;
int32_t t162 = 5016452;
volatile int16_t x887 = 11572;
static int8_t x892 = -1;
int32_t x903 = -2;
int64_t x905 = -1LL;
static int8_t x906 = INT8_MIN;
static uint8_t x910 = 15U;
static uint64_t x911 = 2LLU;
static int32_t x914 = INT32_MIN;
uint8_t x918 = 11U;
int32_t t171 = -44841;
volatile int32_t t172 = 172580;
static int64_t x929 = INT64_MAX;
int8_t x932 = INT8_MIN;
volatile int32_t t173 = 671977;
int32_t t174 = -523148866;
volatile int16_t x950 = INT16_MIN;
int32_t t177 = -114;
int32_t x954 = 1817;
int32_t x965 = -1;
volatile uint16_t x967 = 245U;
volatile uint16_t x974 = 25U;
volatile int64_t x975 = 82908LL;
volatile uint16_t x978 = UINT16_MAX;
volatile int32_t x980 = 1;
int8_t x984 = INT8_MIN;
static volatile int32_t t184 = -12;
static int32_t x1001 = -1;
int32_t x1003 = INT32_MIN;
int64_t x1017 = -216958554232LL;
uint32_t x1021 = 447889U;
int64_t x1023 = -1LL;
static int32_t t194 = 48;
static volatile uint32_t x1041 = 2146520U;
volatile int32_t t195 = 61;
volatile uint32_t x1051 = 50U;
int16_t x1053 = INT16_MIN;
int32_t t198 = -37086495;
static uint8_t x1057 = 27U;


void f0(void) {
    	volatile int64_t x9 = -1799354378116794LL;
	int16_t x10 = INT16_MAX;
	int8_t x11 = -1;
	volatile int32_t t0 = 0;

    t0 = (x9<=((x10^x11)*x12));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x13 = -1;
	int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MIN;
	static uint64_t x16 = 2143219830865354LLU;

    t1 = (x13<=((x14^x15)*x16));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x17 = 7U;
	uint32_t x19 = 2918U;
	uint16_t x20 = UINT16_MAX;
	static int32_t t2 = -8;

    t2 = (x17<=((x18^x19)*x20));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x21 = INT8_MAX;
	int32_t x22 = INT32_MIN;
	int32_t x23 = INT32_MIN;
	volatile int32_t t3 = -1857693;

    t3 = (x21<=((x22^x23)*x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x29 = 1;
	int8_t x30 = -1;
	uint8_t x31 = 0U;
	uint64_t x32 = UINT64_MAX;
	volatile int32_t t4 = -3395138;

    t4 = (x29<=((x30^x31)*x32));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x33 = INT16_MIN;
	static int32_t x34 = INT32_MIN;
	static int16_t x35 = INT16_MIN;
	uint64_t x36 = 0LLU;
	volatile int32_t t5 = 4263995;

    t5 = (x33<=((x34^x35)*x36));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x37 = INT64_MAX;
	int32_t x38 = INT32_MIN;
	volatile int8_t x39 = -1;
	uint8_t x40 = 1U;
	int32_t t6 = 2;

    t6 = (x37<=((x38^x39)*x40));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x41 = -507841063749LL;
	int64_t x44 = INT64_MAX;
	int32_t t7 = 486;

    t7 = (x41<=((x42^x43)*x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x45 = UINT64_MAX;
	int32_t x47 = INT32_MIN;
	volatile int8_t x48 = 1;
	int32_t t8 = -4718;

    t8 = (x45<=((x46^x47)*x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x49 = 33358952843202484LL;
	static int32_t x50 = -13254;
	uint8_t x51 = 2U;
	static uint8_t x52 = 15U;
	int32_t t9 = 48283312;

    t9 = (x49<=((x50^x51)*x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x54 = 3;
	int16_t x55 = -1;
	uint32_t x56 = 106U;
	static int32_t t10 = 91001552;

    t10 = (x53<=((x54^x55)*x56));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x58 = 1023031156202LLU;
	uint64_t x59 = 4162LLU;
	int16_t x60 = INT16_MIN;
	int32_t t11 = -8045;

    t11 = (x57<=((x58^x59)*x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = 28;
	uint16_t x62 = 9663U;
	static int32_t x63 = 14;
	int16_t x64 = INT16_MIN;
	volatile int32_t t12 = -15192;

    t12 = (x61<=((x62^x63)*x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x65 = 6U;
	uint32_t x68 = 321U;

    t13 = (x65<=((x66^x67)*x68));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x75 = -1LL;
	static uint8_t x76 = 0U;
	static int32_t t14 = -85;

    t14 = (x73<=((x74^x75)*x76));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x81 = 6U;
	int16_t x82 = -1092;
	int64_t x83 = -589128250069018LL;
	volatile uint64_t x84 = UINT64_MAX;
	static int32_t t15 = -204574053;

    t15 = (x81<=((x82^x83)*x84));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x89 = 0U;
	static int8_t x90 = INT8_MIN;
	int8_t x91 = INT8_MIN;
	int32_t t16 = 149891291;

    t16 = (x89<=((x90^x91)*x92));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x94 = 1014709299LLU;
	static int32_t x96 = INT32_MAX;
	volatile int32_t t17 = -127706209;

    t17 = (x93<=((x94^x95)*x96));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x98 = INT8_MAX;
	static int64_t x99 = INT64_MIN;
	int8_t x100 = -1;
	volatile int32_t t18 = 70349798;

    t18 = (x97<=((x98^x99)*x100));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x101 = INT32_MIN;
	static volatile uint32_t x102 = 3065U;
	int8_t x103 = INT8_MAX;
	static volatile int32_t x104 = 15992255;

    t19 = (x101<=((x102^x103)*x104));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x105 = -1;
	int32_t x106 = -1;
	uint64_t x107 = 110026345LLU;
	uint64_t x108 = UINT64_MAX;
	static volatile int32_t t20 = -654;

    t20 = (x105<=((x106^x107)*x108));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x114 = 1783602LLU;
	static int8_t x115 = 15;
	int8_t x116 = INT8_MIN;
	int32_t t21 = -76;

    t21 = (x113<=((x114^x115)*x116));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x117 = -1;
	int64_t x118 = INT64_MAX;
	static uint64_t x119 = UINT64_MAX;
	volatile int32_t x120 = -1;

    t22 = (x117<=((x118^x119)*x120));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x121 = 55684LL;
	int64_t x122 = -1LL;
	int32_t x123 = INT32_MAX;
	static int32_t t23 = 76;

    t23 = (x121<=((x122^x123)*x124));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x130 = INT8_MIN;
	static uint16_t x131 = UINT16_MAX;
	int16_t x132 = -1;
	volatile int32_t t24 = 563;

    t24 = (x129<=((x130^x131)*x132));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x140 = 1U;
	static int32_t t25 = -459;

    t25 = (x137<=((x138^x139)*x140));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x141 = INT8_MAX;
	volatile int16_t x142 = 5483;
	int32_t x143 = INT32_MAX;
	uint64_t x144 = 2764493557163LLU;
	volatile int32_t t26 = 478889875;

    t26 = (x141<=((x142^x143)*x144));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x147 = -1811668;
	int32_t t27 = -58;

    t27 = (x145<=((x146^x147)*x148));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x149 = 2;
	int16_t x150 = -3400;
	static int16_t x151 = -635;
	uint16_t x152 = 1U;

    t28 = (x149<=((x150^x151)*x152));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x154 = UINT32_MAX;
	int64_t x155 = 3445641LL;
	static volatile int32_t t29 = -1120525;

    t29 = (x153<=((x154^x155)*x156));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x162 = INT8_MAX;
	uint64_t x163 = 141983413489334349LLU;
	static volatile int32_t t30 = -2;

    t30 = (x161<=((x162^x163)*x164));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x169 = -1;
	int64_t x170 = INT64_MAX;
	int64_t x171 = INT64_MIN;
	volatile uint32_t x172 = UINT32_MAX;
	volatile int32_t t31 = 479;

    t31 = (x169<=((x170^x171)*x172));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x173 = -7LL;
	volatile uint32_t x175 = 1323540969U;
	static int32_t x176 = 2537047;
	int32_t t32 = 8080;

    t32 = (x173<=((x174^x175)*x176));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x177 = 1862036694187LL;
	int32_t x178 = INT32_MIN;
	uint64_t x179 = 25LLU;
	static volatile uint32_t x180 = UINT32_MAX;
	int32_t t33 = -12;

    t33 = (x177<=((x178^x179)*x180));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x181 = -3342511957083LL;
	uint64_t x182 = 69927LLU;
	uint32_t x183 = 256239U;
	int64_t x184 = INT64_MIN;
	volatile int32_t t34 = -42152146;

    t34 = (x181<=((x182^x183)*x184));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x185 = -1;
	static int16_t x186 = -1;
	int16_t x187 = INT16_MIN;
	uint16_t x188 = UINT16_MAX;

    t35 = (x185<=((x186^x187)*x188));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x189 = -1;
	uint16_t x190 = 0U;
	int32_t t36 = -24049;

    t36 = (x189<=((x190^x191)*x192));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x193 = 4573269LLU;
	int64_t x194 = INT64_MAX;
	volatile int8_t x195 = INT8_MAX;
	volatile uint64_t x196 = UINT64_MAX;
	volatile int32_t t37 = 273690618;

    t37 = (x193<=((x194^x195)*x196));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x197 = 208167615238LLU;
	uint64_t x198 = 13LLU;
	int16_t x199 = INT16_MIN;
	static uint32_t x200 = UINT32_MAX;
	int32_t t38 = -371573;

    t38 = (x197<=((x198^x199)*x200));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x202 = INT32_MIN;
	uint32_t x203 = 3U;
	volatile int32_t t39 = -459068160;

    t39 = (x201<=((x202^x203)*x204));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x210 = UINT8_MAX;
	volatile uint8_t x211 = 1U;
	int8_t x212 = -6;

    t40 = (x209<=((x210^x211)*x212));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x213 = -8;
	uint64_t x214 = UINT64_MAX;
	uint16_t x215 = 0U;
	volatile int32_t t41 = 506;

    t41 = (x213<=((x214^x215)*x216));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x217 = INT32_MIN;
	int32_t x218 = -1;
	volatile int64_t x219 = INT64_MIN;
	volatile uint32_t x220 = 1U;
	int32_t t42 = -5247493;

    t42 = (x217<=((x218^x219)*x220));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x221 = INT64_MIN;
	uint16_t x222 = 7478U;
	static uint64_t x223 = UINT64_MAX;
	uint32_t x224 = 127238U;

    t43 = (x221<=((x222^x223)*x224));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x225 = -3;
	int8_t x226 = -1;
	static int64_t x227 = -1LL;
	int8_t x228 = INT8_MIN;
	volatile int32_t t44 = 961690;

    t44 = (x225<=((x226^x227)*x228));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MIN;
	static int16_t x231 = INT16_MAX;
	volatile uint8_t x232 = 1U;

    t45 = (x229<=((x230^x231)*x232));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x233 = INT8_MAX;
	static uint64_t x234 = 339890878LLU;
	uint64_t x235 = UINT64_MAX;
	int64_t x236 = 485018LL;
	static int32_t t46 = 28;

    t46 = (x233<=((x234^x235)*x236));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x237 = 251978183420674469LL;
	uint16_t x238 = 1U;
	int64_t x239 = 0LL;
	static int16_t x240 = INT16_MAX;

    t47 = (x237<=((x238^x239)*x240));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x245 = -1;
	int32_t x246 = INT32_MIN;
	static volatile int64_t x248 = -170761863LL;
	static int32_t t48 = -27711;

    t48 = (x245<=((x246^x247)*x248));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x249 = UINT16_MAX;
	int64_t x250 = 4026732LL;
	int8_t x252 = INT8_MIN;

    t49 = (x249<=((x250^x251)*x252));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x253 = -1LL;
	uint8_t x254 = 33U;
	volatile uint16_t x255 = 2859U;
	uint16_t x256 = 5465U;
	volatile int32_t t50 = -482686489;

    t50 = (x253<=((x254^x255)*x256));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x257 = UINT32_MAX;
	volatile int16_t x259 = -9;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t51 = 4;

    t51 = (x257<=((x258^x259)*x260));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x261 = 63;
	uint16_t x263 = UINT16_MAX;
	int16_t x264 = -1;
	volatile int32_t t52 = 1;

    t52 = (x261<=((x262^x263)*x264));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x273 = -1;
	volatile uint32_t x274 = 164996U;
	volatile int64_t x275 = 11508127826LL;
	int64_t x276 = -1LL;
	static volatile int32_t t53 = 6255;

    t53 = (x273<=((x274^x275)*x276));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x277 = -466;
	static uint64_t x278 = 2044LLU;
	volatile int32_t t54 = -14367260;

    t54 = (x277<=((x278^x279)*x280));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x281 = INT32_MIN;
	uint8_t x282 = UINT8_MAX;
	volatile int64_t x284 = -1LL;
	int32_t t55 = -23468;

    t55 = (x281<=((x282^x283)*x284));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x285 = INT16_MAX;
	int8_t x288 = INT8_MAX;
	int32_t t56 = 6589;

    t56 = (x285<=((x286^x287)*x288));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x289 = INT8_MIN;
	int64_t x290 = 1LL;
	volatile int8_t x291 = INT8_MIN;
	int32_t x292 = INT32_MAX;
	int32_t t57 = 3;

    t57 = (x289<=((x290^x291)*x292));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x293 = INT64_MAX;
	volatile uint64_t x294 = 766LLU;
	static uint32_t x295 = 558U;
	static int64_t x296 = INT64_MIN;
	volatile int32_t t58 = -552241221;

    t58 = (x293<=((x294^x295)*x296));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x297 = 125U;
	int64_t x298 = -3203366015079857LL;
	int8_t x299 = 53;
	static int8_t x300 = INT8_MIN;

    t59 = (x297<=((x298^x299)*x300));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x301 = INT16_MIN;
	volatile int8_t x302 = -1;
	static volatile uint32_t x303 = 285739U;
	static int32_t t60 = 14741046;

    t60 = (x301<=((x302^x303)*x304));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x305 = -51;
	uint64_t x306 = UINT64_MAX;
	uint64_t x308 = 77355LLU;
	volatile int32_t t61 = -24754569;

    t61 = (x305<=((x306^x307)*x308));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x309 = 4U;
	int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MIN;
	int8_t x312 = INT8_MIN;
	volatile int32_t t62 = -3124597;

    t62 = (x309<=((x310^x311)*x312));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x313 = INT64_MAX;
	int64_t x314 = -1LL;
	volatile int32_t t63 = 816;

    t63 = (x313<=((x314^x315)*x316));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x321 = -1;
	int16_t x324 = -1;
	static volatile int32_t t64 = -1550401;

    t64 = (x321<=((x322^x323)*x324));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x325 = -1LL;
	uint32_t x326 = 1440464733U;
	uint8_t x327 = 105U;
	static volatile uint8_t x328 = 58U;
	static int32_t t65 = 1726760;

    t65 = (x325<=((x326^x327)*x328));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x329 = INT64_MIN;
	int32_t x330 = INT32_MIN;
	int32_t x331 = 73573595;
	uint32_t x332 = 744404312U;
	int32_t t66 = 150228;

    t66 = (x329<=((x330^x331)*x332));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x341 = -1;
	int32_t x342 = INT32_MIN;
	int8_t x343 = 2;
	uint32_t x344 = 239559U;
	static volatile int32_t t67 = 84177604;

    t67 = (x341<=((x342^x343)*x344));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x349 = UINT8_MAX;
	volatile int64_t x350 = -1LL;
	volatile int16_t x351 = -71;
	uint64_t x352 = UINT64_MAX;
	int32_t t68 = 168;

    t68 = (x349<=((x350^x351)*x352));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x353 = 568U;
	static uint16_t x354 = UINT16_MAX;
	uint8_t x355 = 6U;
	int8_t x356 = INT8_MIN;
	volatile int32_t t69 = -4;

    t69 = (x353<=((x354^x355)*x356));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x357 = INT32_MIN;
	int64_t x358 = INT64_MIN;
	static int64_t x359 = INT64_MAX;
	volatile int16_t x360 = INT16_MIN;

    t70 = (x357<=((x358^x359)*x360));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x366 = 84500LLU;
	int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MAX;

    t71 = (x365<=((x366^x367)*x368));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x369 = -1;
	static volatile int16_t x370 = -1;
	uint8_t x372 = UINT8_MAX;
	int32_t t72 = 1411606;

    t72 = (x369<=((x370^x371)*x372));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x377 = INT32_MAX;
	int32_t x378 = -2090;
	volatile int32_t x380 = -1;

    t73 = (x377<=((x378^x379)*x380));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x398 = INT16_MIN;
	volatile uint16_t x399 = 1U;
	volatile uint64_t x400 = 104750LLU;
	volatile int32_t t74 = 0;

    t74 = (x397<=((x398^x399)*x400));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x401 = INT32_MIN;
	int64_t x402 = INT64_MIN;
	int32_t x403 = INT32_MIN;
	static int16_t x404 = -1;
	int32_t t75 = 1;

    t75 = (x401<=((x402^x403)*x404));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x406 = 6U;
	static uint32_t x408 = UINT32_MAX;
	static int32_t t76 = -1;

    t76 = (x405<=((x406^x407)*x408));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x409 = -1LL;
	int8_t x410 = -1;
	static int16_t x411 = INT16_MAX;
	static volatile int32_t t77 = 92258744;

    t77 = (x409<=((x410^x411)*x412));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x413 = -1LL;
	uint32_t x415 = UINT32_MAX;
	static int32_t t78 = -739;

    t78 = (x413<=((x414^x415)*x416));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x418 = -1788;
	int16_t x419 = INT16_MIN;
	volatile int32_t t79 = 4982;

    t79 = (x417<=((x418^x419)*x420));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x421 = 3;
	uint8_t x422 = 1U;
	uint64_t x423 = 2184LLU;
	int32_t t80 = 185334;

    t80 = (x421<=((x422^x423)*x424));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x425 = 1346802045132864658LL;
	static volatile int8_t x426 = -13;
	volatile int32_t t81 = -3361;

    t81 = (x425<=((x426^x427)*x428));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x430 = INT8_MAX;
	int16_t x431 = INT16_MIN;
	int16_t x432 = INT16_MAX;
	static volatile int32_t t82 = -6953529;

    t82 = (x429<=((x430^x431)*x432));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x435 = -10;
	static uint64_t x436 = 640874189542LLU;
	volatile int32_t t83 = 107;

    t83 = (x433<=((x434^x435)*x436));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x442 = -1;
	static uint64_t x443 = UINT64_MAX;
	int8_t x444 = INT8_MAX;
	int32_t t84 = 29387565;

    t84 = (x441<=((x442^x443)*x444));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x445 = 28;
	int8_t x446 = INT8_MAX;
	static uint64_t x447 = 527048890709894LLU;
	int8_t x448 = INT8_MAX;
	int32_t t85 = -1196;

    t85 = (x445<=((x446^x447)*x448));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x449 = UINT8_MAX;
	int8_t x450 = 14;
	int8_t x452 = -1;
	volatile int32_t t86 = 14172;

    t86 = (x449<=((x450^x451)*x452));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x453 = INT8_MIN;
	volatile int32_t x454 = INT32_MIN;
	uint32_t x455 = 30U;
	int32_t x456 = INT32_MIN;
	int32_t t87 = -1;

    t87 = (x453<=((x454^x455)*x456));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x461 = INT16_MIN;
	int64_t x462 = -1LL;
	volatile int8_t x463 = 27;
	uint64_t x464 = UINT64_MAX;
	int32_t t88 = 1;

    t88 = (x461<=((x462^x463)*x464));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x465 = 1U;
	uint64_t x466 = UINT64_MAX;
	int32_t x467 = INT32_MIN;
	uint8_t x468 = 1U;

    t89 = (x465<=((x466^x467)*x468));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x470 = 680767143U;
	volatile uint64_t x471 = UINT64_MAX;
	static int64_t x472 = -1LL;
	volatile int32_t t90 = -23989636;

    t90 = (x469<=((x470^x471)*x472));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x473 = UINT64_MAX;
	volatile uint64_t x474 = UINT64_MAX;
	int32_t x475 = -323;
	int16_t x476 = INT16_MAX;
	int32_t t91 = 32342017;

    t91 = (x473<=((x474^x475)*x476));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x478 = -1;
	int16_t x479 = INT16_MIN;
	uint8_t x480 = 63U;
	static int32_t t92 = -884946;

    t92 = (x477<=((x478^x479)*x480));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x484 = 86;
	int32_t t93 = -189247;

    t93 = (x481<=((x482^x483)*x484));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x489 = INT16_MIN;
	int16_t x490 = -1;
	int16_t x491 = INT16_MAX;
	uint8_t x492 = 9U;

    t94 = (x489<=((x490^x491)*x492));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x493 = UINT8_MAX;
	volatile int8_t x494 = -1;
	volatile int8_t x495 = 0;
	int16_t x496 = INT16_MIN;
	volatile int32_t t95 = -80111224;

    t95 = (x493<=((x494^x495)*x496));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x497 = 1U;
	volatile int32_t x498 = -4;
	int8_t x499 = INT8_MIN;
	static int32_t x500 = -1;
	volatile int32_t t96 = -321483813;

    t96 = (x497<=((x498^x499)*x500));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x503 = UINT16_MAX;
	int16_t x504 = INT16_MAX;
	volatile int32_t t97 = -133458;

    t97 = (x501<=((x502^x503)*x504));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x509 = 427581LLU;
	static uint8_t x510 = 2U;
	int8_t x511 = -7;
	int64_t x512 = -9LL;
	volatile int32_t t98 = -149;

    t98 = (x509<=((x510^x511)*x512));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x517 = INT32_MAX;
	uint32_t x518 = 8174U;
	int8_t x519 = INT8_MIN;
	int32_t t99 = -195721;

    t99 = (x517<=((x518^x519)*x520));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x526 = 97437607674074LLU;
	int32_t x527 = -1;
	int16_t x528 = -1522;
	int32_t t100 = 5;

    t100 = (x525<=((x526^x527)*x528));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x529 = 254504561007284441LL;
	int16_t x530 = INT16_MAX;
	static volatile int32_t x531 = -1;
	volatile int64_t x532 = -281219191388LL;
	volatile int32_t t101 = -541514613;

    t101 = (x529<=((x530^x531)*x532));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x533 = INT32_MIN;
	int8_t x534 = INT8_MAX;
	volatile int32_t x535 = 711148;
	int16_t x536 = -1;

    t102 = (x533<=((x534^x535)*x536));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x537 = UINT32_MAX;
	uint32_t x538 = 1546817767U;
	int32_t x539 = INT32_MIN;
	static int32_t x540 = INT32_MIN;
	static int32_t t103 = 1784;

    t103 = (x537<=((x538^x539)*x540));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x541 = 0U;
	volatile int8_t x542 = 0;
	static int32_t x543 = -13693627;
	volatile uint32_t x544 = 1898478U;
	volatile int32_t t104 = 9;

    t104 = (x541<=((x542^x543)*x544));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x557 = -1;
	static int8_t x558 = INT8_MIN;
	int16_t x559 = INT16_MIN;
	uint32_t x560 = 68496U;

    t105 = (x557<=((x558^x559)*x560));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x562 = 360936U;
	int64_t x563 = INT64_MIN;
	static volatile uint64_t x564 = UINT64_MAX;
	volatile int32_t t106 = -6625647;

    t106 = (x561<=((x562^x563)*x564));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x566 = -1;
	static int8_t x567 = INT8_MAX;
	int8_t x568 = INT8_MIN;
	volatile int32_t t107 = 94;

    t107 = (x565<=((x566^x567)*x568));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x573 = 4U;
	static int16_t x574 = 373;
	int16_t x575 = INT16_MIN;
	uint32_t x576 = 27063806U;
	static volatile int32_t t108 = 15896;

    t108 = (x573<=((x574^x575)*x576));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x577 = 71U;
	int32_t x578 = INT32_MIN;
	int32_t x579 = INT32_MAX;
	uint64_t x580 = UINT64_MAX;
	volatile int32_t t109 = 59154776;

    t109 = (x577<=((x578^x579)*x580));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x581 = -17;
	static volatile int64_t x582 = INT64_MIN;
	volatile int32_t x583 = INT32_MAX;
	int8_t x584 = -1;
	volatile int32_t t110 = 174045646;

    t110 = (x581<=((x582^x583)*x584));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x585 = -323892154;
	int32_t x586 = -4055;
	int32_t x587 = -922682;
	volatile uint32_t x588 = 109495U;

    t111 = (x585<=((x586^x587)*x588));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x589 = INT16_MIN;
	int64_t x591 = INT64_MAX;
	int32_t t112 = -96329;

    t112 = (x589<=((x590^x591)*x592));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x593 = INT64_MIN;
	volatile int8_t x594 = INT8_MIN;
	uint8_t x595 = 2U;
	int16_t x596 = -9;
	static volatile int32_t t113 = -2;

    t113 = (x593<=((x594^x595)*x596));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x597 = UINT16_MAX;
	uint8_t x598 = 0U;
	int64_t x599 = -1LL;

    t114 = (x597<=((x598^x599)*x600));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x601 = 4U;
	static int64_t x602 = -1LL;
	static uint64_t x603 = UINT64_MAX;
	volatile int32_t t115 = 1544;

    t115 = (x601<=((x602^x603)*x604));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x605 = INT64_MIN;
	volatile uint64_t x606 = 1418565845496LLU;
	int8_t x607 = -1;
	int32_t t116 = 12;

    t116 = (x605<=((x606^x607)*x608));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x617 = 4259LL;
	uint8_t x618 = UINT8_MAX;
	int16_t x619 = INT16_MAX;
	int32_t t117 = -7219;

    t117 = (x617<=((x618^x619)*x620));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x621 = 81U;
	int16_t x622 = INT16_MAX;
	static int16_t x624 = INT16_MIN;
	int32_t t118 = -2010;

    t118 = (x621<=((x622^x623)*x624));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x629 = -6318;
	uint64_t x630 = UINT64_MAX;
	uint16_t x631 = 2302U;
	volatile int64_t x632 = INT64_MIN;

    t119 = (x629<=((x630^x631)*x632));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x633 = 1236140LLU;
	int32_t x635 = 403457875;
	volatile int16_t x636 = INT16_MIN;
	int32_t t120 = 2;

    t120 = (x633<=((x634^x635)*x636));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x637 = 2877LLU;
	static uint64_t x638 = 60319022632LLU;
	volatile int64_t x639 = INT64_MAX;
	int32_t t121 = 1288;

    t121 = (x637<=((x638^x639)*x640));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x641 = 1;
	volatile uint32_t x642 = 264U;
	int16_t x643 = -1;
	int32_t t122 = -39891155;

    t122 = (x641<=((x642^x643)*x644));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x665 = INT16_MIN;
	static int64_t x666 = 1LL;
	static int32_t x667 = INT32_MIN;
	volatile uint16_t x668 = 883U;
	static int32_t t123 = -202;

    t123 = (x665<=((x666^x667)*x668));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x669 = 4U;
	volatile uint64_t x670 = UINT64_MAX;
	int8_t x671 = INT8_MAX;
	static uint32_t x672 = UINT32_MAX;
	volatile int32_t t124 = 580;

    t124 = (x669<=((x670^x671)*x672));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x673 = INT8_MIN;
	static int16_t x674 = -1;
	uint8_t x675 = 0U;
	static uint8_t x676 = 8U;
	int32_t t125 = -176103757;

    t125 = (x673<=((x674^x675)*x676));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x678 = 1252LLU;
	uint32_t x680 = 109U;
	volatile int32_t t126 = -3171;

    t126 = (x677<=((x678^x679)*x680));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x681 = 559;
	uint64_t x682 = 166LLU;
	int8_t x683 = INT8_MIN;
	uint64_t x684 = UINT64_MAX;
	int32_t t127 = -8197;

    t127 = (x681<=((x682^x683)*x684));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x685 = INT64_MAX;
	int32_t x687 = INT32_MIN;
	static int32_t x688 = INT32_MIN;
	int32_t t128 = -31;

    t128 = (x685<=((x686^x687)*x688));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x697 = 10;
	uint16_t x698 = 20821U;
	static volatile int8_t x700 = INT8_MIN;
	volatile int32_t t129 = 166;

    t129 = (x697<=((x698^x699)*x700));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x705 = -341783;
	volatile int32_t x706 = INT32_MAX;
	volatile int64_t x707 = INT64_MAX;
	int16_t x708 = -1;
	volatile int32_t t130 = 3678;

    t130 = (x705<=((x706^x707)*x708));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x710 = INT32_MAX;
	int16_t x711 = 492;
	static uint64_t x712 = UINT64_MAX;

    t131 = (x709<=((x710^x711)*x712));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x716 = -1;
	volatile int32_t t132 = 40;

    t132 = (x713<=((x714^x715)*x716));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x717 = 6U;
	volatile int16_t x718 = INT16_MIN;
	volatile int16_t x720 = -3;
	int32_t t133 = 3258616;

    t133 = (x717<=((x718^x719)*x720));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x721 = INT16_MIN;
	uint32_t x722 = 401U;
	int32_t x723 = 4;
	int64_t x724 = 60153622LL;
	volatile int32_t t134 = -14677;

    t134 = (x721<=((x722^x723)*x724));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x725 = INT8_MIN;
	static uint16_t x726 = UINT16_MAX;
	int16_t x727 = -1;

    t135 = (x725<=((x726^x727)*x728));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int8_t x730 = -1;
	static volatile uint64_t x731 = 55869LLU;
	int8_t x732 = -1;
	int32_t t136 = 811638;

    t136 = (x729<=((x730^x731)*x732));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x733 = INT64_MIN;
	volatile int16_t x734 = INT16_MAX;
	uint8_t x735 = 1U;
	volatile int32_t t137 = -155661;

    t137 = (x733<=((x734^x735)*x736));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x737 = INT8_MAX;
	volatile int16_t x738 = 1;
	uint32_t x739 = UINT32_MAX;
	int32_t x740 = -145221;
	int32_t t138 = -1;

    t138 = (x737<=((x738^x739)*x740));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x741 = INT8_MAX;
	static uint32_t x742 = 623U;
	static int16_t x743 = 365;
	int16_t x744 = 0;
	volatile int32_t t139 = 19;

    t139 = (x741<=((x742^x743)*x744));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x745 = INT8_MIN;
	int32_t x746 = -1;
	int64_t x747 = INT64_MIN;
	int16_t x748 = -1;
	int32_t t140 = 1;

    t140 = (x745<=((x746^x747)*x748));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x749 = 252368503U;
	static int8_t x750 = INT8_MAX;
	int64_t x751 = INT64_MIN;
	int64_t x752 = -1LL;
	volatile int32_t t141 = -2;

    t141 = (x749<=((x750^x751)*x752));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x753 = 688797910953LL;
	static volatile int8_t x754 = INT8_MAX;

    t142 = (x753<=((x754^x755)*x756));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x757 = INT16_MIN;
	static int8_t x758 = INT8_MIN;
	int64_t x759 = INT64_MIN;
	int8_t x760 = -1;
	volatile int32_t t143 = -8663;

    t143 = (x757<=((x758^x759)*x760));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x761 = INT64_MAX;
	static volatile int8_t x763 = INT8_MIN;
	int8_t x764 = -1;
	volatile int32_t t144 = -789138590;

    t144 = (x761<=((x762^x763)*x764));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x781 = INT8_MAX;
	volatile int16_t x782 = INT16_MIN;
	int32_t x783 = INT32_MIN;
	int16_t x784 = -1;
	volatile int32_t t145 = 410;

    t145 = (x781<=((x782^x783)*x784));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x786 = 0LL;
	volatile int64_t x788 = 11341456580LL;
	volatile int32_t t146 = -1;

    t146 = (x785<=((x786^x787)*x788));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x795 = -987767623;
	uint64_t x796 = 64644008593504LLU;
	volatile int32_t t147 = -4;

    t147 = (x793<=((x794^x795)*x796));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x797 = INT64_MIN;
	int32_t x798 = -107;
	int8_t x799 = 31;
	uint64_t x800 = 248LLU;
	volatile int32_t t148 = 1;

    t148 = (x797<=((x798^x799)*x800));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x810 = 7030LLU;
	volatile int32_t x811 = INT32_MAX;
	int32_t x812 = INT32_MAX;

    t149 = (x809<=((x810^x811)*x812));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x813 = INT8_MIN;
	uint16_t x814 = 3U;
	int32_t x815 = 2710;
	static volatile int32_t t150 = 152279;

    t150 = (x813<=((x814^x815)*x816));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x817 = 9137389353429LLU;
	static int64_t x818 = 74853763725LL;
	int16_t x819 = INT16_MIN;

    t151 = (x817<=((x818^x819)*x820));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x821 = 33;
	int8_t x822 = -1;
	int16_t x823 = INT16_MIN;
	int16_t x824 = INT16_MIN;
	int32_t t152 = 322276;

    t152 = (x821<=((x822^x823)*x824));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x825 = 23U;
	volatile uint32_t x827 = 87U;
	int8_t x828 = -1;
	volatile int32_t t153 = -33;

    t153 = (x825<=((x826^x827)*x828));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x829 = 300685;
	uint8_t x830 = 0U;
	int8_t x831 = -1;
	static int32_t x832 = INT32_MAX;

    t154 = (x829<=((x830^x831)*x832));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x834 = INT32_MIN;
	static int8_t x836 = -33;

    t155 = (x833<=((x834^x835)*x836));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x837 = -11;
	static volatile uint32_t x838 = UINT32_MAX;
	uint32_t x839 = UINT32_MAX;
	static int8_t x840 = -1;

    t156 = (x837<=((x838^x839)*x840));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x842 = -229;
	static int64_t x843 = INT64_MAX;
	uint32_t x844 = 0U;
	volatile int32_t t157 = 104420;

    t157 = (x841<=((x842^x843)*x844));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x853 = -6707LL;
	uint32_t x854 = 233U;
	static uint8_t x856 = 23U;
	volatile int32_t t158 = -349454;

    t158 = (x853<=((x854^x855)*x856));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x857 = INT64_MAX;
	int32_t x858 = -58;
	int16_t x859 = -1;
	static int32_t x860 = 91;

    t159 = (x857<=((x858^x859)*x860));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x865 = 7684039021111LLU;
	uint16_t x866 = 86U;
	int8_t x868 = INT8_MAX;
	volatile int32_t t160 = 264646;

    t160 = (x865<=((x866^x867)*x868));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x869 = UINT32_MAX;
	volatile uint16_t x870 = UINT16_MAX;
	static volatile int32_t x871 = 8991310;
	uint8_t x872 = 14U;
	volatile int32_t t161 = 4152161;

    t161 = (x869<=((x870^x871)*x872));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x873 = INT16_MAX;
	int64_t x874 = INT64_MIN;
	int32_t x875 = INT32_MAX;
	static int16_t x876 = -1;

    t162 = (x873<=((x874^x875)*x876));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x881 = 135U;
	int32_t x882 = INT32_MIN;
	int32_t x883 = INT32_MAX;
	uint64_t x884 = 14874068491140949LLU;
	static int32_t t163 = 130800;

    t163 = (x881<=((x882^x883)*x884));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x885 = 176853192U;
	uint8_t x886 = 79U;
	static uint64_t x888 = 33614337LLU;
	volatile int32_t t164 = 15840027;

    t164 = (x885<=((x886^x887)*x888));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x889 = -1LL;
	int64_t x890 = INT64_MIN;
	static volatile int32_t x891 = -1;
	int32_t t165 = -511273;

    t165 = (x889<=((x890^x891)*x892));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x893 = 1698948LLU;
	int8_t x894 = 0;
	int8_t x895 = 0;
	int32_t x896 = -383;
	volatile int32_t t166 = -23053690;

    t166 = (x893<=((x894^x895)*x896));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x901 = INT8_MIN;
	static volatile uint64_t x902 = 108LLU;
	int64_t x904 = -1LL;
	volatile int32_t t167 = -14;

    t167 = (x901<=((x902^x903)*x904));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x907 = INT32_MAX;
	uint32_t x908 = 1460U;
	volatile int32_t t168 = 7606;

    t168 = (x905<=((x906^x907)*x908));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x909 = INT16_MIN;
	uint8_t x912 = 0U;
	int32_t t169 = -301;

    t169 = (x909<=((x910^x911)*x912));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x913 = INT32_MAX;
	static volatile uint32_t x915 = 1991774U;
	int16_t x916 = 275;
	int32_t t170 = 0;

    t170 = (x913<=((x914^x915)*x916));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x917 = UINT8_MAX;
	uint32_t x919 = UINT32_MAX;
	uint32_t x920 = 27352U;

    t171 = (x917<=((x918^x919)*x920));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x925 = INT32_MIN;
	uint32_t x926 = UINT32_MAX;
	volatile int32_t x927 = -2;
	volatile uint8_t x928 = 50U;

    t172 = (x925<=((x926^x927)*x928));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x930 = INT8_MAX;
	int16_t x931 = -3114;

    t173 = (x929<=((x930^x931)*x932));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x933 = INT64_MIN;
	int8_t x934 = INT8_MIN;
	uint32_t x935 = 0U;
	volatile int32_t x936 = INT32_MIN;

    t174 = (x933<=((x934^x935)*x936));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x941 = INT64_MIN;
	int8_t x942 = INT8_MIN;
	int16_t x943 = -3;
	int32_t x944 = -225;
	int32_t t175 = 564744;

    t175 = (x941<=((x942^x943)*x944));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x945 = 29U;
	uint64_t x946 = 3990LLU;
	volatile int32_t x947 = -1;
	int16_t x948 = INT16_MIN;
	int32_t t176 = -952;

    t176 = (x945<=((x946^x947)*x948));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x949 = 20721180U;
	int8_t x951 = INT8_MAX;
	uint32_t x952 = 751U;

    t177 = (x949<=((x950^x951)*x952));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x953 = 212964484LL;
	static volatile int16_t x955 = INT16_MIN;
	static uint64_t x956 = 30LLU;
	volatile int32_t t178 = 114909;

    t178 = (x953<=((x954^x955)*x956));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x957 = 0U;
	uint8_t x958 = 0U;
	int8_t x959 = INT8_MIN;
	uint32_t x960 = 1508930U;
	static int32_t t179 = -1044;

    t179 = (x957<=((x958^x959)*x960));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x966 = -5;
	uint8_t x968 = 3U;
	volatile int32_t t180 = -986847862;

    t180 = (x965<=((x966^x967)*x968));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x973 = -15;
	int8_t x976 = INT8_MIN;
	int32_t t181 = -241235632;

    t181 = (x973<=((x974^x975)*x976));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x977 = INT16_MIN;
	uint8_t x979 = UINT8_MAX;
	static int32_t t182 = 224902;

    t182 = (x977<=((x978^x979)*x980));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x981 = 14;
	static volatile int16_t x982 = INT16_MAX;
	int32_t x983 = -1;
	volatile int32_t t183 = 2333;

    t183 = (x981<=((x982^x983)*x984));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x989 = 1;
	volatile int32_t x990 = -1;
	volatile uint16_t x991 = 15U;
	uint8_t x992 = 0U;

    t184 = (x989<=((x990^x991)*x992));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x997 = -1;
	volatile uint8_t x998 = UINT8_MAX;
	uint16_t x999 = UINT16_MAX;
	volatile uint8_t x1000 = 20U;
	int32_t t185 = -238429599;

    t185 = (x997<=((x998^x999)*x1000));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1002 = INT32_MAX;
	uint64_t x1004 = 8LLU;
	int32_t t186 = -1713943;

    t186 = (x1001<=((x1002^x1003)*x1004));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1005 = INT64_MAX;
	int16_t x1006 = -4084;
	static uint64_t x1007 = 1369171LLU;
	uint8_t x1008 = 3U;
	static volatile int32_t t187 = 11421558;

    t187 = (x1005<=((x1006^x1007)*x1008));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1009 = -1;
	int16_t x1010 = 1;
	uint16_t x1011 = 16U;
	uint16_t x1012 = UINT16_MAX;
	int32_t t188 = -148370;

    t188 = (x1009<=((x1010^x1011)*x1012));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x1013 = 572U;
	static int8_t x1014 = -5;
	static int32_t x1015 = -3916;
	int8_t x1016 = INT8_MAX;
	int32_t t189 = -62977848;

    t189 = (x1013<=((x1014^x1015)*x1016));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1018 = UINT8_MAX;
	int16_t x1019 = -1;
	static int8_t x1020 = INT8_MIN;
	int32_t t190 = -19805;

    t190 = (x1017<=((x1018^x1019)*x1020));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1022 = INT32_MAX;
	uint8_t x1024 = 28U;
	static volatile int32_t t191 = -3388646;

    t191 = (x1021<=((x1022^x1023)*x1024));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1025 = UINT32_MAX;
	int8_t x1026 = INT8_MIN;
	volatile uint32_t x1027 = UINT32_MAX;
	static volatile int8_t x1028 = INT8_MIN;
	volatile int32_t t192 = 1;

    t192 = (x1025<=((x1026^x1027)*x1028));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1029 = INT64_MIN;
	int64_t x1030 = -1LL;
	volatile int16_t x1031 = INT16_MAX;
	int64_t x1032 = 763462721LL;
	volatile int32_t t193 = -825369046;

    t193 = (x1029<=((x1030^x1031)*x1032));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x1033 = 30LLU;
	uint64_t x1034 = 10382912814645LLU;
	int32_t x1035 = -509392;
	volatile int32_t x1036 = INT32_MIN;

    t194 = (x1033<=((x1034^x1035)*x1036));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1042 = 44U;
	uint8_t x1043 = 0U;
	int32_t x1044 = -1;

    t195 = (x1041<=((x1042^x1043)*x1044));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x1045 = INT32_MAX;
	static int64_t x1046 = -117276LL;
	uint16_t x1047 = 295U;
	static int8_t x1048 = INT8_MAX;
	static volatile int32_t t196 = -3371;

    t196 = (x1045<=((x1046^x1047)*x1048));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1049 = UINT32_MAX;
	volatile uint32_t x1050 = 3U;
	volatile int32_t x1052 = -38554;
	int32_t t197 = -81;

    t197 = (x1049<=((x1050^x1051)*x1052));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1054 = 1;
	int64_t x1055 = 107648288012LL;
	uint64_t x1056 = UINT64_MAX;

    t198 = (x1053<=((x1054^x1055)*x1056));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1058 = INT16_MIN;
	int8_t x1059 = INT8_MAX;
	int8_t x1060 = 5;
	volatile int32_t t199 = 61035808;

    t199 = (x1057<=((x1058^x1059)*x1060));

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

