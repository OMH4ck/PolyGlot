
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

uint64_t x1 = UINT64_MAX;
int16_t x8 = -1;
int32_t t1 = -36;
static int32_t t3 = 68;
uint64_t x31 = UINT64_MAX;
uint32_t x32 = UINT32_MAX;
volatile int32_t t8 = -6455;
uint16_t x57 = 114U;
volatile uint64_t x61 = UINT64_MAX;
int64_t x67 = -2446331LL;
uint32_t x69 = UINT32_MAX;
int32_t t13 = 329;
static int32_t x77 = INT32_MAX;
int8_t x90 = -1;
int16_t x99 = -1;
static volatile int8_t x105 = INT8_MIN;
int8_t x106 = INT8_MAX;
int64_t x107 = -760171573LL;
int32_t x113 = -1;
uint8_t x114 = 22U;
int8_t x121 = INT8_MAX;
int32_t t22 = 31576913;
int16_t x137 = -233;
volatile int32_t x139 = INT32_MIN;
volatile int16_t x143 = INT16_MAX;
int32_t x144 = INT32_MAX;
static volatile int32_t t26 = -468;
int8_t x150 = INT8_MIN;
static int16_t x151 = INT16_MIN;
int32_t x152 = INT32_MIN;
static volatile int32_t t28 = -693674;
int16_t x157 = 5;
uint16_t x161 = 2U;
volatile int64_t x169 = -1LL;
static uint64_t x180 = 4LLU;
int64_t x181 = INT64_MAX;
static volatile int32_t t34 = 4725801;
int8_t x200 = INT8_MIN;
uint64_t x205 = 3018229141246101278LLU;
int64_t x207 = -19220888750908LL;
uint16_t x221 = UINT16_MAX;
int32_t x222 = INT32_MIN;
static int32_t t41 = 60826;
int32_t t42 = -49604;
int16_t x231 = INT16_MIN;
int8_t x233 = INT8_MIN;
uint16_t x237 = 2U;
uint32_t x240 = 16U;
int32_t x241 = INT32_MIN;
int16_t x244 = INT16_MAX;
volatile int8_t x255 = INT8_MIN;
static uint8_t x261 = 2U;
volatile int32_t t50 = 11819456;
uint8_t x272 = 90U;
int16_t x279 = -1751;
uint32_t x281 = 9672U;
int64_t x284 = 322188329156LL;
static volatile int32_t t55 = 0;
int64_t x291 = -1LL;
volatile int32_t t56 = 118224;
int8_t x293 = INT8_MAX;
volatile uint64_t x295 = 4010418601LLU;
int8_t x308 = INT8_MAX;
uint64_t x317 = UINT64_MAX;
int32_t x318 = 3471;
volatile int16_t x321 = -851;
int8_t x323 = -15;
int32_t t63 = -52;
volatile int32_t x329 = 468827784;
static int32_t t65 = 45;
uint64_t x337 = 1957069290LLU;
static int64_t x339 = 45LL;
int32_t x340 = INT32_MIN;
volatile int16_t x344 = INT16_MIN;
uint8_t x352 = 9U;
int32_t t68 = 204199;
static volatile int32_t t70 = -33;
int8_t x372 = -1;
int8_t x383 = INT8_MAX;
int32_t x387 = -821;
uint64_t x398 = UINT64_MAX;
static uint8_t x400 = 16U;
uint64_t x403 = 861LLU;
int32_t x412 = 578772165;
volatile uint8_t x417 = 109U;
uint16_t x427 = 22U;
int8_t x435 = 0;
static int32_t x436 = INT32_MIN;
int32_t x441 = 112;
static int8_t x449 = -1;
int32_t t87 = 291;
int8_t x453 = -1;
static uint8_t x457 = 21U;
volatile int32_t t89 = 826160;
int64_t x467 = -1LL;
static volatile uint32_t x477 = 1U;
int32_t t93 = -8355477;
uint8_t x489 = 13U;
static int8_t x493 = -2;
static int32_t t97 = 0;
int8_t x511 = 0;
static volatile int64_t x512 = INT64_MIN;
volatile int32_t x516 = INT32_MIN;
static int32_t t99 = -4867154;
int8_t x519 = INT8_MIN;
uint32_t x522 = 4U;
volatile int32_t t101 = 71327575;
int16_t x525 = 39;
volatile int32_t t102 = 1987808;
static uint64_t x529 = 75116780022205LLU;
int32_t x530 = -1;
int8_t x535 = -12;
uint8_t x542 = 1U;
int16_t x558 = -4;
static volatile uint8_t x563 = 79U;
uint16_t x567 = UINT16_MAX;
int16_t x570 = -1;
volatile int16_t x592 = INT16_MIN;
int32_t x594 = INT32_MIN;
uint8_t x598 = 8U;
uint64_t x609 = 15LLU;
int32_t t116 = 82368250;
static int8_t x617 = 0;
volatile int32_t t118 = -182372239;
int16_t x622 = INT16_MAX;
int32_t x628 = INT32_MAX;
static int32_t x630 = -1;
uint32_t x632 = 7U;
uint8_t x637 = UINT8_MAX;
volatile int32_t t122 = -4925208;
static volatile int8_t x649 = -2;
int32_t x655 = INT32_MAX;
uint16_t x656 = UINT16_MAX;
volatile int32_t t125 = 1;
uint8_t x660 = 16U;
volatile int32_t t127 = 26;
uint64_t x667 = 1LLU;
volatile int32_t t128 = 427664;
uint16_t x669 = 3U;
int8_t x671 = -1;
static volatile int32_t t130 = -634;
volatile uint16_t x683 = 0U;
int8_t x692 = -61;
int64_t x694 = 75052LL;
static int64_t x699 = 39834684223262947LL;
volatile int32_t t135 = -1931943;
volatile int16_t x702 = -1;
volatile int32_t t136 = 478372;
int32_t t138 = -15656;
uint32_t x717 = UINT32_MAX;
int64_t x719 = -1LL;
volatile int8_t x720 = -2;
int16_t x724 = INT16_MIN;
int32_t t140 = -1;
static int64_t x739 = INT64_MAX;
static uint32_t x745 = UINT32_MAX;
uint16_t x756 = 2293U;
volatile int8_t x761 = INT8_MAX;
volatile int32_t t147 = -724603;
volatile int32_t t148 = -55;
volatile int16_t x783 = -6016;
volatile int16_t x791 = -2458;
volatile int32_t t152 = 104382;
uint16_t x801 = 14U;
int8_t x802 = -1;
volatile int32_t t154 = -1;
int8_t x822 = INT8_MIN;
int32_t x826 = -1;
volatile uint8_t x834 = 69U;
uint8_t x836 = 53U;
uint8_t x850 = UINT8_MAX;
int32_t t162 = -31;
int32_t t167 = -26762;
int32_t t168 = -477;
uint32_t x894 = 1U;
uint8_t x907 = 25U;
int64_t x910 = -2023682LL;
int16_t x911 = 15930;
uint16_t x912 = UINT16_MAX;
int64_t x925 = -1LL;
static int32_t x928 = INT32_MIN;
uint32_t x941 = 3584709U;
int32_t t178 = 1471;
volatile int64_t x964 = -1LL;
volatile int32_t t184 = 1;
static uint64_t x997 = 268069474526865252LLU;
uint64_t x999 = 484894183LLU;
int16_t x1002 = -1;
int8_t x1013 = INT8_MAX;
static int64_t x1016 = INT64_MAX;
static int16_t x1021 = INT16_MIN;
uint16_t x1027 = UINT16_MAX;
int16_t x1028 = INT16_MIN;
volatile uint64_t x1033 = 29517LLU;
uint32_t x1038 = 112983386U;
int64_t x1039 = 1335419068LL;
int8_t x1041 = INT8_MIN;
volatile int32_t t192 = 84;
int64_t x1048 = 181646434701591LL;
static volatile int32_t t193 = -7113;
uint8_t x1050 = 23U;
static int16_t x1065 = INT16_MIN;
volatile uint64_t x1066 = UINT64_MAX;
int64_t x1075 = INT64_MAX;
static int32_t t199 = 82920185;


void f0(void) {
    	int64_t x2 = -1LL;
	static int16_t x3 = 1192;
	int32_t x4 = -1;
	static volatile int32_t t0 = -127;

    t0 = (x1<=((x2*x3)/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 0;
	volatile int64_t x6 = 402LL;
	int32_t x7 = INT32_MAX;

    t1 = (x5<=((x6*x7)/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = 136432LLU;
	volatile int16_t x10 = INT16_MAX;
	int32_t x11 = -12;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -41974329;

    t2 = (x9<=((x10*x11)/x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 2U;
	static int32_t x14 = 1811805;
	static int32_t x15 = -1;
	int64_t x16 = INT64_MAX;

    t3 = (x13<=((x14*x15)/x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x25 = -1;
	static int16_t x26 = 1;
	volatile uint32_t x27 = 19048662U;
	int32_t x28 = INT32_MIN;
	int32_t t4 = 7;

    t4 = (x25<=((x26*x27)/x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = -1;
	int64_t x30 = -1LL;
	volatile int32_t t5 = -30122;

    t5 = (x29<=((x30*x31)/x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x33 = 3U;
	int64_t x34 = 176839LL;
	uint32_t x35 = 0U;
	volatile int32_t x36 = INT32_MAX;
	int32_t t6 = 1407628;

    t6 = (x33<=((x34*x35)/x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x41 = UINT8_MAX;
	int16_t x42 = -1;
	static volatile int16_t x43 = 234;
	uint16_t x44 = 3303U;
	volatile int32_t t7 = 16;

    t7 = (x41<=((x42*x43)/x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x53 = 2;
	volatile uint64_t x54 = UINT64_MAX;
	int8_t x55 = 1;
	int32_t x56 = -1;

    t8 = (x53<=((x54*x55)/x56));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x58 = -355006494473LL;
	int16_t x59 = INT16_MIN;
	static int64_t x60 = -1LL;
	int32_t t9 = -12;

    t9 = (x57<=((x58*x59)/x60));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x62 = -1;
	volatile int32_t x63 = INT32_MAX;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t10 = -243014;

    t10 = (x61<=((x62*x63)/x64));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x65 = UINT8_MAX;
	int64_t x66 = -1LL;
	int8_t x68 = 11;
	int32_t t11 = -65821;

    t11 = (x65<=((x66*x67)/x68));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x70 = 0U;
	int32_t x71 = 5;
	int64_t x72 = -1LL;
	int32_t t12 = -6215467;

    t12 = (x69<=((x70*x71)/x72));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x73 = -1;
	int16_t x74 = -1;
	static int8_t x75 = -40;
	static uint16_t x76 = 2206U;

    t13 = (x73<=((x74*x75)/x76));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x78 = INT8_MIN;
	int8_t x79 = 14;
	static int8_t x80 = -1;
	volatile int32_t t14 = -1;

    t14 = (x77<=((x78*x79)/x80));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x85 = 38698646295223164LLU;
	volatile uint8_t x86 = 17U;
	int16_t x87 = 10567;
	volatile uint64_t x88 = 1161LLU;
	static int32_t t15 = 4;

    t15 = (x85<=((x86*x87)/x88));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x89 = UINT8_MAX;
	uint8_t x91 = UINT8_MAX;
	uint64_t x92 = 54LLU;
	int32_t t16 = 27203;

    t16 = (x89<=((x90*x91)/x92));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x97 = INT32_MIN;
	static volatile int64_t x98 = 55999739760LL;
	static int8_t x100 = 3;
	int32_t t17 = 508435333;

    t17 = (x97<=((x98*x99)/x100));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x108 = UINT8_MAX;
	volatile int32_t t18 = -1100;

    t18 = (x105<=((x106*x107)/x108));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x115 = UINT64_MAX;
	int8_t x116 = 2;
	volatile int32_t t19 = -39;

    t19 = (x113<=((x114*x115)/x116));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x117 = UINT16_MAX;
	int8_t x118 = INT8_MIN;
	volatile int8_t x119 = 1;
	uint16_t x120 = 1U;
	static int32_t t20 = 106;

    t20 = (x117<=((x118*x119)/x120));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x122 = 20235U;
	volatile int8_t x123 = INT8_MAX;
	volatile int16_t x124 = 131;
	volatile int32_t t21 = -14520;

    t21 = (x121<=((x122*x123)/x124));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x125 = -72LL;
	int16_t x126 = INT16_MIN;
	uint64_t x127 = UINT64_MAX;
	uint32_t x128 = 288248270U;

    t22 = (x125<=((x126*x127)/x128));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x129 = INT32_MIN;
	int16_t x130 = INT16_MIN;
	int8_t x131 = 7;
	static volatile uint16_t x132 = 3635U;
	volatile int32_t t23 = 1510715;

    t23 = (x129<=((x130*x131)/x132));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x133 = UINT64_MAX;
	volatile uint8_t x134 = 52U;
	static int8_t x135 = -1;
	int16_t x136 = INT16_MAX;
	volatile int32_t t24 = -33341243;

    t24 = (x133<=((x134*x135)/x136));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x138 = 7253556U;
	volatile int64_t x140 = INT64_MIN;
	volatile int32_t t25 = -3001714;

    t25 = (x137<=((x138*x139)/x140));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x141 = 3425;
	int64_t x142 = -184893084LL;

    t26 = (x141<=((x142*x143)/x144));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x145 = -2955LL;
	static uint64_t x146 = UINT64_MAX;
	int8_t x147 = INT8_MAX;
	static uint16_t x148 = UINT16_MAX;
	int32_t t27 = -168;

    t27 = (x145<=((x146*x147)/x148));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x149 = 0U;

    t28 = (x149<=((x150*x151)/x152));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x158 = -2;
	int8_t x159 = 3;
	uint16_t x160 = 9707U;
	volatile int32_t t29 = 103;

    t29 = (x157<=((x158*x159)/x160));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x162 = 1656819621U;
	static volatile uint64_t x163 = 526131054LLU;
	int16_t x164 = INT16_MIN;
	volatile int32_t t30 = -447968;

    t30 = (x161<=((x162*x163)/x164));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x170 = -177LL;
	int32_t x171 = INT32_MIN;
	int32_t x172 = -2314;
	volatile int32_t t31 = -947084;

    t31 = (x169<=((x170*x171)/x172));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x177 = UINT8_MAX;
	static volatile int32_t x178 = INT32_MIN;
	static int64_t x179 = -1LL;
	volatile int32_t t32 = 3484;

    t32 = (x177<=((x178*x179)/x180));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x182 = INT8_MAX;
	static uint32_t x183 = UINT32_MAX;
	uint16_t x184 = UINT16_MAX;
	int32_t t33 = -10413709;

    t33 = (x181<=((x182*x183)/x184));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int16_t x185 = INT16_MIN;
	uint32_t x186 = 5216U;
	volatile int8_t x187 = INT8_MIN;
	int64_t x188 = 632104918LL;

    t34 = (x185<=((x186*x187)/x188));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x189 = -12461;
	int8_t x190 = -1;
	int16_t x191 = 586;
	volatile int16_t x192 = -1;
	volatile int32_t t35 = 1164;

    t35 = (x189<=((x190*x191)/x192));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x193 = -1LL;
	uint64_t x194 = 8614861LLU;
	int64_t x195 = -1LL;
	uint16_t x196 = 13659U;
	volatile int32_t t36 = -105156;

    t36 = (x193<=((x194*x195)/x196));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x197 = UINT32_MAX;
	uint16_t x198 = 0U;
	uint32_t x199 = 8001U;
	static volatile int32_t t37 = -11660275;

    t37 = (x197<=((x198*x199)/x200));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x201 = INT64_MAX;
	static volatile uint64_t x202 = 131105LLU;
	uint8_t x203 = 8U;
	int32_t x204 = INT32_MIN;
	int32_t t38 = -28918;

    t38 = (x201<=((x202*x203)/x204));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x206 = INT16_MIN;
	volatile uint32_t x208 = UINT32_MAX;
	volatile int32_t t39 = -15820608;

    t39 = (x205<=((x206*x207)/x208));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x209 = UINT16_MAX;
	volatile int16_t x210 = INT16_MIN;
	uint64_t x211 = 125664995LLU;
	uint32_t x212 = UINT32_MAX;
	int32_t t40 = -250;

    t40 = (x209<=((x210*x211)/x212));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x223 = 1U;
	volatile int32_t x224 = INT32_MIN;

    t41 = (x221<=((x222*x223)/x224));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x225 = 2910815194450LLU;
	volatile int64_t x226 = -1LL;
	uint64_t x227 = 215793LLU;
	int64_t x228 = -2230026266923LL;

    t42 = (x225<=((x226*x227)/x228));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x229 = UINT32_MAX;
	int8_t x230 = INT8_MAX;
	int16_t x232 = INT16_MIN;
	int32_t t43 = -58;

    t43 = (x229<=((x230*x231)/x232));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x234 = 221448769LL;
	int16_t x235 = INT16_MAX;
	int16_t x236 = -1;
	int32_t t44 = -375684;

    t44 = (x233<=((x234*x235)/x236));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x238 = INT8_MAX;
	int8_t x239 = -1;
	int32_t t45 = -2;

    t45 = (x237<=((x238*x239)/x240));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x242 = 29U;
	volatile int32_t x243 = 4694116;
	static int32_t t46 = 309;

    t46 = (x241<=((x242*x243)/x244));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x249 = -8188;
	int8_t x250 = INT8_MIN;
	volatile int16_t x251 = -1;
	int32_t x252 = -11669;
	int32_t t47 = -1113219;

    t47 = (x249<=((x250*x251)/x252));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x253 = -596698378419119933LL;
	static int8_t x254 = -1;
	uint64_t x256 = UINT64_MAX;
	volatile int32_t t48 = 287;

    t48 = (x253<=((x254*x255)/x256));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x262 = 6785;
	int16_t x263 = 6;
	static int8_t x264 = INT8_MAX;
	volatile int32_t t49 = 61893924;

    t49 = (x261<=((x262*x263)/x264));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x265 = 1617514585LLU;
	static uint8_t x266 = 14U;
	int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MIN;

    t50 = (x265<=((x266*x267)/x268));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x269 = -1;
	volatile int16_t x270 = INT16_MIN;
	static int64_t x271 = 373408LL;
	static volatile int32_t t51 = 59991779;

    t51 = (x269<=((x270*x271)/x272));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x273 = -2804786LL;
	uint8_t x274 = 2U;
	uint16_t x275 = UINT16_MAX;
	int16_t x276 = -1;
	int32_t t52 = 52433006;

    t52 = (x273<=((x274*x275)/x276));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x277 = -863716180714LL;
	static int16_t x278 = INT16_MIN;
	uint64_t x280 = 198214LLU;
	static volatile int32_t t53 = 22333141;

    t53 = (x277<=((x278*x279)/x280));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x282 = -1;
	int16_t x283 = INT16_MIN;
	int32_t t54 = -76215;

    t54 = (x281<=((x282*x283)/x284));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x285 = INT8_MIN;
	int32_t x286 = -1;
	int16_t x287 = INT16_MIN;
	uint16_t x288 = 346U;

    t55 = (x285<=((x286*x287)/x288));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x289 = -1;
	uint64_t x290 = 955892854LLU;
	int8_t x292 = -1;

    t56 = (x289<=((x290*x291)/x292));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x294 = -1;
	volatile uint32_t x296 = 482884338U;
	int32_t t57 = -754345176;

    t57 = (x293<=((x294*x295)/x296));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x297 = 33U;
	int16_t x298 = -3457;
	static int8_t x299 = INT8_MIN;
	uint8_t x300 = UINT8_MAX;
	static volatile int32_t t58 = -563;

    t58 = (x297<=((x298*x299)/x300));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x301 = INT64_MIN;
	static int8_t x302 = 0;
	int64_t x303 = -1LL;
	static volatile int64_t x304 = -1LL;
	volatile int32_t t59 = 4861;

    t59 = (x301<=((x302*x303)/x304));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x305 = -1;
	int64_t x306 = INT64_MIN;
	uint64_t x307 = 3767487760LLU;
	static volatile int32_t t60 = 257034;

    t60 = (x305<=((x306*x307)/x308));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x309 = UINT8_MAX;
	uint8_t x310 = 10U;
	volatile uint64_t x311 = 594192574777334LLU;
	uint32_t x312 = 68U;
	int32_t t61 = 172015368;

    t61 = (x309<=((x310*x311)/x312));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x319 = -1;
	int32_t x320 = INT32_MAX;
	volatile int32_t t62 = -108;

    t62 = (x317<=((x318*x319)/x320));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x322 = UINT16_MAX;
	static int32_t x324 = -1;

    t63 = (x321<=((x322*x323)/x324));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x330 = UINT32_MAX;
	int32_t x331 = -1;
	static volatile uint16_t x332 = 49U;
	volatile int32_t t64 = -210237844;

    t64 = (x329<=((x330*x331)/x332));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x333 = 32651U;
	int8_t x334 = 8;
	int8_t x335 = -12;
	int8_t x336 = INT8_MIN;

    t65 = (x333<=((x334*x335)/x336));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x338 = 11735U;
	volatile int32_t t66 = 1490668;

    t66 = (x337<=((x338*x339)/x340));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x341 = INT16_MAX;
	int16_t x342 = -1;
	uint32_t x343 = UINT32_MAX;
	static int32_t t67 = -848067902;

    t67 = (x341<=((x342*x343)/x344));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x349 = 0U;
	int16_t x350 = -1;
	int16_t x351 = INT16_MIN;

    t68 = (x349<=((x350*x351)/x352));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x353 = 3228;
	int16_t x354 = INT16_MIN;
	static uint32_t x355 = UINT32_MAX;
	static uint8_t x356 = 77U;
	static int32_t t69 = -468442;

    t69 = (x353<=((x354*x355)/x356));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x361 = INT64_MAX;
	int8_t x362 = INT8_MIN;
	int32_t x363 = 111848;
	int64_t x364 = INT64_MAX;

    t70 = (x361<=((x362*x363)/x364));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x369 = -1;
	int64_t x370 = -56LL;
	volatile int64_t x371 = -1LL;
	int32_t t71 = 164000;

    t71 = (x369<=((x370*x371)/x372));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x373 = INT64_MAX;
	int16_t x374 = INT16_MIN;
	static uint8_t x375 = 15U;
	uint16_t x376 = 793U;
	int32_t t72 = -54;

    t72 = (x373<=((x374*x375)/x376));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x377 = -1;
	volatile int16_t x378 = 18;
	volatile uint16_t x379 = UINT16_MAX;
	static uint64_t x380 = UINT64_MAX;
	volatile int32_t t73 = 273762;

    t73 = (x377<=((x378*x379)/x380));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x381 = INT32_MAX;
	uint8_t x382 = 25U;
	static volatile uint16_t x384 = 1546U;
	static int32_t t74 = 107971104;

    t74 = (x381<=((x382*x383)/x384));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x385 = INT16_MIN;
	uint64_t x386 = 14392LLU;
	static int8_t x388 = -35;
	volatile int32_t t75 = 0;

    t75 = (x385<=((x386*x387)/x388));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x397 = INT8_MAX;
	static int32_t x399 = INT32_MAX;
	int32_t t76 = 0;

    t76 = (x397<=((x398*x399)/x400));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x401 = 831573975785LLU;
	uint8_t x402 = 15U;
	int64_t x404 = 1568249LL;
	volatile int32_t t77 = -1;

    t77 = (x401<=((x402*x403)/x404));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x405 = UINT32_MAX;
	volatile uint32_t x406 = 26408U;
	int32_t x407 = 16736;
	int8_t x408 = -1;
	volatile int32_t t78 = 2383;

    t78 = (x405<=((x406*x407)/x408));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint8_t x409 = 3U;
	static uint16_t x410 = UINT16_MAX;
	int8_t x411 = 0;
	static int32_t t79 = -614006882;

    t79 = (x409<=((x410*x411)/x412));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x418 = -1;
	static uint16_t x419 = 2710U;
	static volatile int16_t x420 = INT16_MIN;
	int32_t t80 = -884;

    t80 = (x417<=((x418*x419)/x420));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x421 = INT16_MIN;
	static volatile int64_t x422 = 9025793LL;
	volatile int32_t x423 = -1;
	int32_t x424 = 2252;
	volatile int32_t t81 = -1517048;

    t81 = (x421<=((x422*x423)/x424));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint8_t x425 = 2U;
	uint64_t x426 = 222911305752110LLU;
	int16_t x428 = INT16_MIN;
	volatile int32_t t82 = 87;

    t82 = (x425<=((x426*x427)/x428));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x429 = INT32_MIN;
	int16_t x430 = INT16_MAX;
	int64_t x431 = -1LL;
	uint32_t x432 = UINT32_MAX;
	volatile int32_t t83 = -49;

    t83 = (x429<=((x430*x431)/x432));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x433 = 2U;
	uint32_t x434 = UINT32_MAX;
	static int32_t t84 = 892;

    t84 = (x433<=((x434*x435)/x436));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x442 = INT16_MAX;
	uint16_t x443 = UINT16_MAX;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t85 = -145;

    t85 = (x441<=((x442*x443)/x444));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint32_t x445 = UINT32_MAX;
	int32_t x446 = -4;
	uint64_t x447 = 2LLU;
	static int8_t x448 = -17;
	volatile int32_t t86 = 229201;

    t86 = (x445<=((x446*x447)/x448));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x450 = -1;
	volatile uint8_t x451 = UINT8_MAX;
	int32_t x452 = INT32_MIN;

    t87 = (x449<=((x450*x451)/x452));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x454 = -1;
	volatile int32_t x455 = -132273;
	int64_t x456 = INT64_MAX;
	int32_t t88 = 257610582;

    t88 = (x453<=((x454*x455)/x456));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x458 = UINT32_MAX;
	static int16_t x459 = 17;
	static volatile uint64_t x460 = UINT64_MAX;

    t89 = (x457<=((x458*x459)/x460));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x461 = -1;
	uint16_t x462 = 340U;
	int16_t x463 = -1;
	int32_t x464 = INT32_MIN;
	static volatile int32_t t90 = 3;

    t90 = (x461<=((x462*x463)/x464));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x465 = -1;
	uint8_t x466 = 3U;
	volatile int16_t x468 = INT16_MIN;
	volatile int32_t t91 = -1;

    t91 = (x465<=((x466*x467)/x468));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x469 = 40LLU;
	uint64_t x470 = 22285LLU;
	uint8_t x471 = 23U;
	int32_t x472 = INT32_MIN;
	volatile int32_t t92 = 223633;

    t92 = (x469<=((x470*x471)/x472));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x478 = 27U;
	int8_t x479 = INT8_MIN;
	int32_t x480 = 1018042;

    t93 = (x477<=((x478*x479)/x480));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x490 = 1U;
	int32_t x491 = INT32_MIN;
	int16_t x492 = INT16_MIN;
	int32_t t94 = 10990;

    t94 = (x489<=((x490*x491)/x492));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x494 = 6733U;
	int16_t x495 = INT16_MIN;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t95 = 9295565;

    t95 = (x493<=((x494*x495)/x496));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x501 = INT32_MIN;
	uint8_t x502 = 109U;
	int16_t x503 = -1;
	static int64_t x504 = INT64_MAX;
	volatile int32_t t96 = 104;

    t96 = (x501<=((x502*x503)/x504));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x505 = -717;
	static int16_t x506 = INT16_MIN;
	static int16_t x507 = -1;
	int16_t x508 = -552;

    t97 = (x505<=((x506*x507)/x508));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x509 = 6650LL;
	volatile uint16_t x510 = UINT16_MAX;
	volatile int32_t t98 = 1;

    t98 = (x509<=((x510*x511)/x512));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x513 = -9015200418459469LL;
	static int8_t x514 = -1;
	int64_t x515 = -14644127LL;

    t99 = (x513<=((x514*x515)/x516));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x517 = UINT16_MAX;
	uint16_t x518 = UINT16_MAX;
	uint8_t x520 = 9U;
	static int32_t t100 = 24;

    t100 = (x517<=((x518*x519)/x520));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x521 = -2304;
	int32_t x523 = INT32_MIN;
	uint16_t x524 = 243U;

    t101 = (x521<=((x522*x523)/x524));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x526 = INT16_MIN;
	int8_t x527 = INT8_MIN;
	volatile int8_t x528 = -23;

    t102 = (x525<=((x526*x527)/x528));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x531 = -1;
	int8_t x532 = INT8_MIN;
	static int32_t t103 = -1307;

    t103 = (x529<=((x530*x531)/x532));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x533 = -1;
	int8_t x534 = INT8_MIN;
	int16_t x536 = INT16_MIN;
	static volatile int32_t t104 = -274;

    t104 = (x533<=((x534*x535)/x536));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x537 = INT32_MIN;
	uint16_t x538 = UINT16_MAX;
	uint32_t x539 = 966245592U;
	int16_t x540 = INT16_MIN;
	static volatile int32_t t105 = -1852;

    t105 = (x537<=((x538*x539)/x540));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x541 = 776;
	uint16_t x543 = 15U;
	int64_t x544 = -47925LL;
	volatile int32_t t106 = 7;

    t106 = (x541<=((x542*x543)/x544));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x553 = -783;
	int16_t x554 = INT16_MIN;
	uint32_t x555 = 0U;
	int8_t x556 = INT8_MIN;
	volatile int32_t t107 = -30162601;

    t107 = (x553<=((x554*x555)/x556));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x557 = INT8_MAX;
	uint16_t x559 = 5364U;
	static int8_t x560 = INT8_MAX;
	volatile int32_t t108 = -1;

    t108 = (x557<=((x558*x559)/x560));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x561 = INT32_MIN;
	uint64_t x562 = UINT64_MAX;
	volatile int8_t x564 = INT8_MIN;
	int32_t t109 = -105;

    t109 = (x561<=((x562*x563)/x564));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x565 = 0;
	uint16_t x566 = 1830U;
	static uint32_t x568 = 361922U;
	int32_t t110 = -322108;

    t110 = (x565<=((x566*x567)/x568));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x569 = 32;
	int16_t x571 = INT16_MIN;
	static int8_t x572 = INT8_MAX;
	volatile int32_t t111 = 306524472;

    t111 = (x569<=((x570*x571)/x572));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x589 = 96U;
	int32_t x590 = -72726;
	int64_t x591 = -1LL;
	int32_t t112 = 7574;

    t112 = (x589<=((x590*x591)/x592));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x593 = 4;
	volatile uint32_t x595 = 7974078U;
	volatile uint64_t x596 = 1LLU;
	static volatile int32_t t113 = 10;

    t113 = (x593<=((x594*x595)/x596));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x597 = -41;
	volatile int8_t x599 = -1;
	volatile uint32_t x600 = UINT32_MAX;
	int32_t t114 = 40887227;

    t114 = (x597<=((x598*x599)/x600));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x605 = -1LL;
	uint16_t x606 = 0U;
	int64_t x607 = -2LL;
	int32_t x608 = INT32_MAX;
	volatile int32_t t115 = 3971;

    t115 = (x605<=((x606*x607)/x608));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x610 = INT8_MIN;
	static uint64_t x611 = 1195839548112831LLU;
	static uint8_t x612 = 1U;

    t116 = (x609<=((x610*x611)/x612));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x613 = INT16_MIN;
	volatile uint32_t x614 = UINT32_MAX;
	uint64_t x615 = 237568234114LLU;
	int32_t x616 = INT32_MIN;
	volatile int32_t t117 = -1;

    t117 = (x613<=((x614*x615)/x616));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x618 = 2883U;
	uint64_t x619 = 13080LLU;
	uint16_t x620 = 1365U;

    t118 = (x617<=((x618*x619)/x620));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x621 = -1;
	int64_t x623 = 8927LL;
	uint64_t x624 = 1525LLU;
	volatile int32_t t119 = -566980204;

    t119 = (x621<=((x622*x623)/x624));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x625 = INT32_MAX;
	int8_t x626 = -1;
	static uint16_t x627 = 59U;
	volatile int32_t t120 = -973165895;

    t120 = (x625<=((x626*x627)/x628));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x629 = 4U;
	volatile int16_t x631 = -1;
	int32_t t121 = -1;

    t121 = (x629<=((x630*x631)/x632));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x638 = 36870533352288603LL;
	static volatile int16_t x639 = -1;
	uint16_t x640 = 1822U;

    t122 = (x637<=((x638*x639)/x640));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x641 = 54;
	int8_t x642 = INT8_MIN;
	uint8_t x643 = UINT8_MAX;
	int8_t x644 = INT8_MAX;
	int32_t t123 = -1028770302;

    t123 = (x641<=((x642*x643)/x644));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x650 = INT16_MIN;
	int16_t x651 = INT16_MIN;
	static int16_t x652 = -5459;
	volatile int32_t t124 = 1;

    t124 = (x649<=((x650*x651)/x652));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x653 = -1;
	int64_t x654 = -63280539LL;

    t125 = (x653<=((x654*x655)/x656));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x657 = INT64_MIN;
	static int16_t x658 = INT16_MIN;
	static volatile int32_t x659 = 104;
	static volatile int32_t t126 = -30840910;

    t126 = (x657<=((x658*x659)/x660));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x661 = 434LLU;
	static volatile int64_t x662 = -122956628LL;
	uint16_t x663 = 618U;
	uint64_t x664 = UINT64_MAX;

    t127 = (x661<=((x662*x663)/x664));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x665 = 0U;
	volatile int16_t x666 = INT16_MIN;
	int64_t x668 = -1LL;

    t128 = (x665<=((x666*x667)/x668));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x670 = INT8_MIN;
	static volatile int16_t x672 = -1;
	static volatile int32_t t129 = -8228992;

    t129 = (x669<=((x670*x671)/x672));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x673 = 3;
	volatile int16_t x674 = INT16_MIN;
	uint64_t x675 = UINT64_MAX;
	int32_t x676 = INT32_MIN;

    t130 = (x673<=((x674*x675)/x676));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x681 = 131U;
	static volatile int16_t x682 = INT16_MAX;
	static volatile int8_t x684 = INT8_MAX;
	int32_t t131 = 0;

    t131 = (x681<=((x682*x683)/x684));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x685 = INT16_MAX;
	int64_t x686 = -2061715961104776LL;
	int16_t x687 = 59;
	volatile int64_t x688 = 31441634231367891LL;
	int32_t t132 = 54937;

    t132 = (x685<=((x686*x687)/x688));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x689 = INT8_MAX;
	static int8_t x690 = -3;
	volatile int32_t x691 = 54;
	static volatile int32_t t133 = -88;

    t133 = (x689<=((x690*x691)/x692));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x693 = -15166LL;
	static int16_t x695 = -1;
	uint64_t x696 = UINT64_MAX;
	int32_t t134 = -15;

    t134 = (x693<=((x694*x695)/x696));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x697 = -1LL;
	static volatile int32_t x698 = -11;
	uint32_t x700 = 14057U;

    t135 = (x697<=((x698*x699)/x700));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x701 = -1;
	int8_t x703 = INT8_MIN;
	static uint64_t x704 = 231369LLU;

    t136 = (x701<=((x702*x703)/x704));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x705 = 52LL;
	int8_t x706 = -1;
	int8_t x707 = INT8_MAX;
	uint8_t x708 = 13U;
	int32_t t137 = -1259;

    t137 = (x705<=((x706*x707)/x708));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x709 = -1LL;
	volatile int16_t x710 = -1;
	volatile int64_t x711 = -1LL;
	int64_t x712 = INT64_MIN;

    t138 = (x709<=((x710*x711)/x712));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x718 = INT32_MIN;
	volatile int32_t t139 = 293;

    t139 = (x717<=((x718*x719)/x720));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x721 = UINT64_MAX;
	static volatile int16_t x722 = -1;
	uint32_t x723 = 866310U;

    t140 = (x721<=((x722*x723)/x724));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x737 = -27;
	int32_t x738 = -1;
	static int64_t x740 = INT64_MIN;
	volatile int32_t t141 = -13;

    t141 = (x737<=((x738*x739)/x740));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x746 = -1;
	int64_t x747 = -1LL;
	int64_t x748 = INT64_MAX;
	volatile int32_t t142 = -127;

    t142 = (x745<=((x746*x747)/x748));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x753 = INT8_MIN;
	volatile uint32_t x754 = 193264U;
	uint32_t x755 = 795919U;
	static volatile int32_t t143 = -13534002;

    t143 = (x753<=((x754*x755)/x756));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x757 = -4914LL;
	int8_t x758 = INT8_MIN;
	int8_t x759 = -1;
	uint64_t x760 = 16626738497912LLU;
	int32_t t144 = -295;

    t144 = (x757<=((x758*x759)/x760));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x762 = 4543U;
	uint32_t x763 = 3697076U;
	int8_t x764 = -1;
	int32_t t145 = 522581;

    t145 = (x761<=((x762*x763)/x764));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x765 = INT8_MIN;
	volatile int8_t x766 = -1;
	uint32_t x767 = UINT32_MAX;
	int32_t x768 = 126412;
	int32_t t146 = 10527729;

    t146 = (x765<=((x766*x767)/x768));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x769 = 23306208519853LL;
	int32_t x770 = -1;
	uint64_t x771 = 3544127067LLU;
	int16_t x772 = INT16_MIN;

    t147 = (x769<=((x770*x771)/x772));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x773 = 532626575U;
	int32_t x774 = 739;
	uint8_t x775 = 5U;
	int8_t x776 = 51;

    t148 = (x773<=((x774*x775)/x776));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x777 = INT16_MIN;
	int16_t x778 = INT16_MIN;
	uint32_t x779 = 0U;
	static int8_t x780 = INT8_MIN;
	volatile int32_t t149 = -40;

    t149 = (x777<=((x778*x779)/x780));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x781 = INT16_MIN;
	int16_t x782 = 7415;
	uint32_t x784 = 137U;
	static int32_t t150 = 2065;

    t150 = (x781<=((x782*x783)/x784));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x785 = INT32_MIN;
	int16_t x786 = 37;
	volatile int16_t x787 = INT16_MIN;
	volatile uint64_t x788 = UINT64_MAX;
	volatile int32_t t151 = -305296290;

    t151 = (x785<=((x786*x787)/x788));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x789 = INT8_MIN;
	volatile uint16_t x790 = 2U;
	int8_t x792 = INT8_MAX;

    t152 = (x789<=((x790*x791)/x792));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x793 = -1;
	static int16_t x794 = INT16_MIN;
	static uint16_t x795 = 625U;
	int16_t x796 = INT16_MAX;
	static volatile int32_t t153 = 4042005;

    t153 = (x793<=((x794*x795)/x796));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x803 = INT32_MAX;
	int32_t x804 = -1;

    t154 = (x801<=((x802*x803)/x804));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x817 = 0U;
	uint8_t x818 = 6U;
	volatile uint16_t x819 = UINT16_MAX;
	int8_t x820 = INT8_MIN;
	volatile int32_t t155 = 13863;

    t155 = (x817<=((x818*x819)/x820));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x821 = -1708;
	int8_t x823 = 5;
	uint32_t x824 = 2566U;
	static int32_t t156 = 5;

    t156 = (x821<=((x822*x823)/x824));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x825 = 2392;
	int64_t x827 = -237466963LL;
	int32_t x828 = -1;
	int32_t t157 = -148235;

    t157 = (x825<=((x826*x827)/x828));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x829 = -1LL;
	static uint32_t x830 = 47811U;
	int16_t x831 = INT16_MAX;
	int64_t x832 = -5824LL;
	volatile int32_t t158 = 303;

    t158 = (x829<=((x830*x831)/x832));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x833 = INT16_MIN;
	uint8_t x835 = 3U;
	volatile int32_t t159 = -33028;

    t159 = (x833<=((x834*x835)/x836));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint32_t x841 = 196U;
	int16_t x842 = INT16_MAX;
	int8_t x843 = INT8_MIN;
	int16_t x844 = INT16_MIN;
	volatile int32_t t160 = -463;

    t160 = (x841<=((x842*x843)/x844));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x845 = UINT8_MAX;
	volatile int64_t x846 = 62436126900088850LL;
	volatile uint64_t x847 = 125784815LLU;
	int8_t x848 = INT8_MIN;
	int32_t t161 = 1;

    t161 = (x845<=((x846*x847)/x848));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x849 = -1;
	int32_t x851 = -2611120;
	int8_t x852 = -1;

    t162 = (x849<=((x850*x851)/x852));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x853 = INT32_MIN;
	volatile int16_t x854 = INT16_MIN;
	int8_t x855 = INT8_MAX;
	int8_t x856 = -1;
	static volatile int32_t t163 = -33;

    t163 = (x853<=((x854*x855)/x856));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x857 = INT8_MIN;
	static uint8_t x858 = 1U;
	int8_t x859 = 1;
	volatile int8_t x860 = 9;
	volatile int32_t t164 = -330957;

    t164 = (x857<=((x858*x859)/x860));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x861 = -536925;
	int64_t x862 = -229130350366942LL;
	uint8_t x863 = 0U;
	static int8_t x864 = -1;
	volatile int32_t t165 = 490;

    t165 = (x861<=((x862*x863)/x864));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x869 = -1;
	int8_t x870 = -1;
	volatile uint32_t x871 = UINT32_MAX;
	static int16_t x872 = -13;
	int32_t t166 = -166796591;

    t166 = (x869<=((x870*x871)/x872));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x877 = INT64_MIN;
	uint32_t x878 = 48042U;
	volatile uint16_t x879 = 15U;
	int16_t x880 = INT16_MIN;

    t167 = (x877<=((x878*x879)/x880));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x889 = 122U;
	volatile int8_t x890 = 2;
	static uint8_t x891 = UINT8_MAX;
	int64_t x892 = -1027892803237319704LL;

    t168 = (x889<=((x890*x891)/x892));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x893 = INT16_MIN;
	volatile uint32_t x895 = 198091U;
	uint32_t x896 = UINT32_MAX;
	int32_t t169 = -17283878;

    t169 = (x893<=((x894*x895)/x896));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x901 = 8164;
	uint32_t x902 = 184334726U;
	int8_t x903 = INT8_MAX;
	volatile int16_t x904 = INT16_MIN;
	static volatile int32_t t170 = 9554;

    t170 = (x901<=((x902*x903)/x904));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x905 = 1867911879078LLU;
	int32_t x906 = -1;
	uint16_t x908 = 3U;
	volatile int32_t t171 = -43884752;

    t171 = (x905<=((x906*x907)/x908));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x909 = 953270LL;
	int32_t t172 = -16025877;

    t172 = (x909<=((x910*x911)/x912));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x917 = -1;
	volatile uint8_t x918 = 2U;
	volatile uint8_t x919 = 29U;
	int16_t x920 = INT16_MAX;
	static int32_t t173 = -43348;

    t173 = (x917<=((x918*x919)/x920));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x926 = UINT32_MAX;
	volatile int16_t x927 = 0;
	volatile int32_t t174 = -3;

    t174 = (x925<=((x926*x927)/x928));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x933 = 56U;
	uint8_t x934 = 0U;
	uint64_t x935 = UINT64_MAX;
	int8_t x936 = INT8_MIN;
	static volatile int32_t t175 = -8;

    t175 = (x933<=((x934*x935)/x936));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x937 = 10726350061040LL;
	int32_t x938 = -1;
	uint16_t x939 = 948U;
	uint32_t x940 = 6708153U;
	int32_t t176 = -57463;

    t176 = (x937<=((x938*x939)/x940));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x942 = 4471718LLU;
	static int32_t x943 = INT32_MIN;
	static int64_t x944 = INT64_MIN;
	static volatile int32_t t177 = -24;

    t177 = (x941<=((x942*x943)/x944));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x945 = INT8_MAX;
	uint32_t x946 = UINT32_MAX;
	int32_t x947 = 127134370;
	static int64_t x948 = INT64_MIN;

    t178 = (x945<=((x946*x947)/x948));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x953 = INT32_MIN;
	static int32_t x954 = -20347;
	int16_t x955 = -2239;
	uint64_t x956 = 7741732776LLU;
	volatile int32_t t179 = 1;

    t179 = (x953<=((x954*x955)/x956));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x961 = -1;
	uint16_t x962 = UINT16_MAX;
	int8_t x963 = -59;
	int32_t t180 = 11138;

    t180 = (x961<=((x962*x963)/x964));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x977 = 64U;
	int64_t x978 = -1LL;
	static volatile uint32_t x979 = UINT32_MAX;
	int64_t x980 = INT64_MIN;
	volatile int32_t t181 = -177094;

    t181 = (x977<=((x978*x979)/x980));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x981 = INT64_MAX;
	int32_t x982 = -1429821;
	static uint32_t x983 = 1329U;
	int32_t x984 = 28401;
	int32_t t182 = -1073720;

    t182 = (x981<=((x982*x983)/x984));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x989 = 5188U;
	int32_t x990 = 2041199;
	uint16_t x991 = 2U;
	int64_t x992 = -1LL;
	int32_t t183 = 40091;

    t183 = (x989<=((x990*x991)/x992));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x993 = 28LLU;
	uint8_t x994 = 18U;
	int16_t x995 = -1;
	int16_t x996 = 3435;

    t184 = (x993<=((x994*x995)/x996));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x998 = 14;
	uint32_t x1000 = 746593855U;
	int32_t t185 = 21004829;

    t185 = (x997<=((x998*x999)/x1000));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1001 = UINT64_MAX;
	int16_t x1003 = -1;
	uint8_t x1004 = UINT8_MAX;
	int32_t t186 = -329;

    t186 = (x1001<=((x1002*x1003)/x1004));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1014 = -1;
	int8_t x1015 = -1;
	int32_t t187 = 31800866;

    t187 = (x1013<=((x1014*x1015)/x1016));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1022 = INT32_MIN;
	static uint16_t x1023 = 0U;
	volatile int64_t x1024 = INT64_MIN;
	volatile int32_t t188 = 0;

    t188 = (x1021<=((x1022*x1023)/x1024));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1025 = INT32_MIN;
	int16_t x1026 = INT16_MIN;
	volatile int32_t t189 = -26;

    t189 = (x1025<=((x1026*x1027)/x1028));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1034 = UINT16_MAX;
	uint32_t x1035 = 637U;
	static uint16_t x1036 = 50U;
	volatile int32_t t190 = -66;

    t190 = (x1033<=((x1034*x1035)/x1036));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1037 = -728069696;
	int64_t x1040 = -1LL;
	int32_t t191 = -14315;

    t191 = (x1037<=((x1038*x1039)/x1040));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1042 = UINT64_MAX;
	int64_t x1043 = -1LL;
	int8_t x1044 = -1;

    t192 = (x1041<=((x1042*x1043)/x1044));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1045 = -1;
	uint64_t x1046 = UINT64_MAX;
	int8_t x1047 = -14;

    t193 = (x1045<=((x1046*x1047)/x1048));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x1049 = 4322U;
	static int8_t x1051 = INT8_MAX;
	uint64_t x1052 = 70215LLU;
	int32_t t194 = 140914;

    t194 = (x1049<=((x1050*x1051)/x1052));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1053 = 4384382LLU;
	volatile int8_t x1054 = INT8_MIN;
	int8_t x1055 = INT8_MAX;
	uint16_t x1056 = UINT16_MAX;
	int32_t t195 = -912963794;

    t195 = (x1053<=((x1054*x1055)/x1056));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1057 = INT64_MIN;
	static int16_t x1058 = 486;
	volatile int16_t x1059 = 136;
	int16_t x1060 = INT16_MIN;
	volatile int32_t t196 = -385769;

    t196 = (x1057<=((x1058*x1059)/x1060));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1061 = INT16_MIN;
	static int8_t x1062 = INT8_MAX;
	volatile int16_t x1063 = -6886;
	volatile uint64_t x1064 = 4924LLU;
	static int32_t t197 = 2726;

    t197 = (x1061<=((x1062*x1063)/x1064));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1067 = -1;
	volatile int32_t x1068 = INT32_MIN;
	static int32_t t198 = 172356962;

    t198 = (x1065<=((x1066*x1067)/x1068));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1073 = 3U;
	int16_t x1074 = -1;
	uint64_t x1076 = 12LLU;

    t199 = (x1073<=((x1074*x1075)/x1076));

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

