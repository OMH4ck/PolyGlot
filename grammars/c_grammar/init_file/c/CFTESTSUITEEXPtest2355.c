
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

uint32_t x12 = 1869569410U;
volatile uint32_t t1 = 43U;
volatile int16_t x23 = 162;
int16_t x24 = INT16_MIN;
int8_t x27 = INT8_MAX;
uint16_t x33 = UINT16_MAX;
static uint8_t x38 = 0U;
uint8_t x42 = 6U;
int16_t x54 = 12;
uint32_t x56 = UINT32_MAX;
uint32_t x62 = UINT32_MAX;
uint64_t x78 = 2149854004350LLU;
static int32_t x86 = -32426;
static volatile int64_t t11 = -26911854006LL;
volatile int64_t x91 = -1LL;
int8_t x107 = -1;
int64_t x115 = INT64_MAX;
int16_t x121 = -1;
int16_t x123 = -220;
volatile int32_t x133 = INT32_MIN;
int32_t x134 = 3674499;
int8_t x145 = -1;
static uint64_t t23 = 3891741034414739675LLU;
uint8_t x150 = UINT8_MAX;
int16_t x151 = -1;
int16_t x152 = -6513;
static volatile uint16_t x157 = UINT16_MAX;
static uint64_t x158 = UINT64_MAX;
static int32_t x174 = INT32_MAX;
volatile uint64_t x176 = 6508447882981LLU;
int64_t x177 = -1LL;
static int16_t x192 = -2606;
int16_t x193 = 174;
static volatile int32_t x194 = INT32_MIN;
uint16_t x196 = 5270U;
int8_t x198 = 26;
static uint16_t x201 = 2468U;
uint64_t x202 = 5LLU;
volatile int8_t x214 = INT8_MIN;
uint64_t x216 = 285122402767654200LLU;
volatile int16_t x217 = -1;
int16_t x220 = -1;
int64_t x223 = INT64_MIN;
volatile uint64_t t39 = 743498LLU;
static int16_t x230 = INT16_MIN;
int32_t x249 = -1;
int32_t x252 = -1;
int64_t x258 = -1LL;
uint8_t x286 = 0U;
uint8_t x288 = UINT8_MAX;
volatile uint64_t x290 = 7999LLU;
static uint64_t t53 = 561423985507LLU;
uint64_t t54 = 5LLU;
int16_t x303 = -1;
int32_t x309 = -3;
uint8_t x321 = 4U;
volatile int64_t t57 = 52LL;
volatile uint64_t x346 = UINT64_MAX;
volatile int64_t x350 = INT64_MIN;
volatile int64_t t62 = 41829LL;
static uint16_t x368 = UINT16_MAX;
volatile uint64_t x372 = 1901LLU;
int64_t x374 = INT64_MIN;
uint16_t x377 = 0U;
int8_t x397 = -1;
int32_t x400 = -1;
int64_t x420 = -81222143329216LL;
int16_t x425 = INT16_MIN;
int32_t t73 = -17089;
int64_t x430 = -1LL;
int32_t x434 = -1;
int8_t x441 = INT8_MIN;
int64_t x449 = -418LL;
uint64_t x450 = UINT64_MAX;
static uint8_t x459 = UINT8_MAX;
int16_t x460 = -1;
uint32_t x472 = 3U;
int64_t x478 = -1LL;
volatile int64_t x485 = -4182425998LL;
uint8_t x486 = UINT8_MAX;
int8_t x488 = INT8_MIN;
int32_t x510 = -1;
int64_t x512 = -88786009LL;
int32_t x515 = 551;
uint64_t t90 = 6LLU;
uint32_t x529 = 230979U;
static int8_t x534 = -22;
static volatile uint64_t x541 = 408029125386008865LLU;
volatile uint64_t t93 = 135146847506LLU;
int16_t x548 = 2706;
uint64_t t95 = 17770LLU;
static uint16_t x556 = 41U;
int64_t x558 = INT64_MIN;
int64_t t99 = -825LL;
uint32_t x588 = 17U;
static uint64_t x593 = 37378614344222932LLU;
volatile uint64_t t101 = 496LLU;
uint32_t x597 = 444727U;
int64_t x598 = -1LL;
volatile uint64_t t103 = 251LLU;
static volatile uint32_t t104 = 13936028U;
int64_t x609 = -1LL;
int32_t x610 = INT32_MAX;
uint32_t x613 = 1609U;
int32_t x614 = INT32_MIN;
volatile uint64_t t106 = 941164582365592LLU;
static uint32_t x621 = 59220970U;
int64_t x626 = 13155618LL;
volatile int8_t x662 = -1;
static int64_t x663 = 5525295932731LL;
volatile int64_t t112 = 1122725641928LL;
static uint8_t x665 = UINT8_MAX;
int32_t x672 = INT32_MIN;
volatile int64_t x695 = -1LL;
int8_t x697 = -52;
static volatile int32_t t117 = 21344;
uint32_t x705 = 14053U;
int8_t x714 = INT8_MIN;
int32_t x722 = INT32_MAX;
static volatile int16_t x723 = INT16_MAX;
int8_t x739 = -1;
int16_t x763 = INT16_MIN;
uint64_t t128 = 3855934931LLU;
int32_t x766 = 71955;
static volatile int64_t t129 = -503034977LL;
uint64_t x777 = 2LLU;
uint8_t x778 = 2U;
volatile int64_t x779 = INT64_MAX;
int64_t x781 = 849895399172709LL;
uint16_t x782 = 114U;
uint16_t x794 = 7304U;
uint8_t x797 = UINT8_MAX;
static volatile int32_t t134 = 77530;
uint64_t x804 = UINT64_MAX;
int64_t x805 = INT64_MIN;
static uint16_t x809 = UINT16_MAX;
static volatile int64_t t137 = 60157248LL;
volatile int32_t x819 = INT32_MAX;
volatile uint64_t t139 = 2052510533669LLU;
uint64_t x829 = 11122240619120LLU;
static uint64_t x830 = 1LLU;
int64_t x857 = -1LL;
int64_t x859 = -1LL;
int8_t x869 = -1;
static volatile uint32_t x876 = 38584U;
volatile uint64_t t148 = 76LLU;
uint64_t x879 = UINT64_MAX;
uint32_t x895 = 1117U;
int32_t x899 = INT32_MIN;
volatile int32_t x900 = INT32_MIN;
int8_t x903 = INT8_MAX;
int32_t x904 = -20;
static int64_t x916 = 8098272LL;
volatile uint16_t x918 = UINT16_MAX;
volatile int8_t x920 = INT8_MIN;
volatile uint64_t t157 = 440727839940121790LLU;
uint64_t x928 = UINT64_MAX;
uint64_t t159 = 14418418905581LLU;
static int64_t x930 = -1LL;
uint64_t x936 = 32038593523863147LLU;
static uint64_t t162 = 1994788405LLU;
volatile uint32_t t163 = 18209U;
static int32_t x958 = INT32_MIN;
static uint64_t x967 = 19608LLU;
uint8_t x971 = UINT8_MAX;
uint8_t x978 = UINT8_MAX;
int16_t x988 = -854;
uint64_t x989 = UINT64_MAX;
int64_t x991 = -2932201845719145LL;
int16_t x998 = 3;
static int64_t x1027 = INT64_MIN;
int8_t x1032 = 0;
static uint64_t t178 = 818599498LLU;
static int64_t x1043 = -2858LL;
int64_t t179 = 8LL;
uint16_t x1050 = UINT16_MAX;
static int32_t x1055 = INT32_MIN;
int32_t t181 = -1;
int32_t x1059 = -3349493;
static int64_t t182 = -79077943723LL;
volatile int16_t x1081 = INT16_MIN;
int16_t x1084 = -1;
volatile uint64_t t185 = 4384297401582LLU;
int16_t x1108 = INT16_MIN;
static int64_t x1111 = 356828472673544LL;
int8_t x1116 = INT8_MIN;
uint8_t x1117 = UINT8_MAX;
static volatile uint32_t x1123 = UINT32_MAX;
int32_t x1137 = -2694177;
int64_t t197 = 413LL;
int32_t x1150 = -1;
static volatile uint64_t x1152 = UINT64_MAX;
volatile uint64_t t199 = 17411954487770LLU;


void f0(void) {
    	static uint16_t x5 = 28U;
	int16_t x6 = INT16_MAX;
	volatile int8_t x7 = 1;
	int16_t x8 = 0;
	volatile int32_t t0 = -45458641;

    t0 = (x5*((x6|x7)+x8));

    if (t0 != 917476) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x9 = -1;
	int16_t x10 = INT16_MAX;
	volatile uint8_t x11 = 53U;

    t1 = (x9*((x10|x11)+x12));

    if (t1 != 2425365119U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = 192U;
	static volatile int64_t x14 = 116LL;
	uint64_t x15 = 990643395743639LLU;
	volatile uint16_t x16 = 28445U;
	volatile uint64_t t2 = 212610057043401190LLU;

    t2 = (x13*((x14|x15)+x16));

    if (t2 != 190203531988258560LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = 13564LL;
	static uint8_t x22 = UINT8_MAX;
	volatile int64_t t3 = 2LL;

    t3 = (x21*((x22|x23)+x24));

    if (t3 != -441006332LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x25 = -1;
	int16_t x26 = INT16_MAX;
	int8_t x28 = INT8_MAX;
	volatile int32_t t4 = -20835447;

    t4 = (x25*((x26|x27)+x28));

    if (t4 != -32894) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x34 = INT8_MIN;
	int16_t x35 = -1;
	int64_t x36 = 77LL;
	int64_t t5 = -1872117LL;

    t5 = (x33*((x34|x35)+x36));

    if (t5 != 4980660LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x37 = 864975382016708LLU;
	int32_t x39 = 14;
	uint32_t x40 = 15662942U;
	volatile uint64_t t6 = 432802LLU;

    t6 = (x37*((x38|x39)+x40));

    if (t6 != 8161199508077782704LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x41 = -1;
	volatile uint64_t x43 = 11LLU;
	int8_t x44 = -1;
	volatile uint64_t t7 = 1918396LLU;

    t7 = (x41*((x42|x43)+x44));

    if (t7 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x53 = UINT32_MAX;
	static int16_t x55 = INT16_MAX;
	static volatile uint32_t t8 = 55833U;

    t8 = (x53*((x54|x55)+x56));

    if (t8 != 4294934530U) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x61 = INT64_MAX;
	static int32_t x63 = INT32_MIN;
	uint64_t x64 = 10518533204LLU;
	uint64_t t9 = 483LLU;

    t9 = (x61*((x62|x63)+x64));

    if (t9 != 9223372022041275309LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x77 = INT16_MIN;
	uint64_t x79 = UINT64_MAX;
	volatile int32_t x80 = -4104322;
	uint64_t t10 = 883715220947862592LLU;

    t10 = (x77*((x78|x79)+x80));

    if (t10 != 134490456064LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x85 = -36464236LL;
	int8_t x87 = 24;
	static uint16_t x88 = UINT16_MAX;

    t11 = (x85*((x86|x87)+x88));

    if (t11 != -1207586103612LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x89 = 4555505934LL;
	static volatile int32_t x90 = INT32_MAX;
	uint8_t x92 = UINT8_MAX;
	static int64_t t12 = 2069150633883LL;

    t12 = (x89*((x90|x91)+x92));

    if (t12 != 1157098507236LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x93 = INT8_MIN;
	uint16_t x94 = UINT16_MAX;
	static int32_t x95 = 3939;
	static volatile uint64_t x96 = 461LLU;
	volatile uint64_t t13 = 5497937756298671LLU;

    t13 = (x93*((x94|x95)+x96));

    if (t13 != 18446744073701104128LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x97 = -1;
	int16_t x98 = INT16_MIN;
	uint32_t x99 = 257188U;
	int16_t x100 = -1;
	uint32_t t14 = 2753913U;

    t14 = (x97*((x98|x99)+x100));

    if (t14 != 4957U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x101 = INT8_MIN;
	int16_t x102 = 1156;
	int8_t x103 = -25;
	static int32_t x104 = -429;
	volatile int32_t t15 = -1;

    t15 = (x101*((x102|x103)+x104));

    if (t15 != 58112) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x105 = INT32_MIN;
	int64_t x106 = INT64_MAX;
	uint64_t x108 = 256625019160LLU;
	uint64_t t16 = 3731902865735464LLU;

    t16 = (x105*((x106|x107)+x108));

    if (t16 != 2304289899647336448LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x109 = INT8_MIN;
	int32_t x110 = 179762859;
	int8_t x111 = INT8_MIN;
	volatile int64_t x112 = -1LL;
	volatile int64_t t17 = -27731893LL;

    t17 = (x109*((x110|x111)+x112));

    if (t17 != 11008LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x113 = -1LL;
	int16_t x114 = INT16_MIN;
	int32_t x116 = INT32_MIN;
	int64_t t18 = -13717LL;

    t18 = (x113*((x114|x115)+x116));

    if (t18 != 2147483649LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x122 = INT32_MIN;
	static uint32_t x124 = 176410U;
	static volatile uint32_t t19 = 4114729U;

    t19 = (x121*((x122|x123)+x124));

    if (t19 != 4294791106U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x125 = UINT8_MAX;
	int8_t x126 = -1;
	uint8_t x127 = 4U;
	int8_t x128 = INT8_MAX;
	int32_t t20 = -295;

    t20 = (x125*((x126|x127)+x128));

    if (t20 != 32130) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x135 = UINT16_MAX;
	uint64_t x136 = 5971LLU;
	volatile uint64_t t21 = 151927628828071519LLU;

    t21 = (x133*((x134|x135)+x136));

    if (t21 != 18438709216395919360LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x137 = UINT64_MAX;
	int64_t x138 = INT64_MIN;
	int32_t x139 = -1;
	int32_t x140 = -62093057;
	volatile uint64_t t22 = 2095876021923104LLU;

    t22 = (x137*((x138|x139)+x140));

    if (t22 != 62093058LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x146 = -15;
	static uint64_t x147 = UINT64_MAX;
	volatile uint32_t x148 = 121098U;

    t23 = (x145*((x146|x147)+x148));

    if (t23 != 18446744073709430519LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x149 = -1;
	int32_t t24 = -12556;

    t24 = (x149*((x150|x151)+x152));

    if (t24 != 6514) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x153 = 75LLU;
	volatile int8_t x154 = -1;
	int32_t x155 = 1;
	static int32_t x156 = -2154094;
	static volatile uint64_t t25 = 69103399LLU;

    t25 = (x153*((x154|x155)+x156));

    if (t25 != 18446744073547994491LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x159 = 12;
	static uint64_t x160 = 588LLU;
	volatile uint64_t t26 = 8033406243LLU;

    t26 = (x157*((x158|x159)+x160));

    if (t26 != 38469045LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x161 = -1;
	uint8_t x162 = UINT8_MAX;
	int8_t x163 = -1;
	static uint32_t x164 = UINT32_MAX;
	volatile uint32_t t27 = 11U;

    t27 = (x161*((x162|x163)+x164));

    if (t27 != 2U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x173 = 980370136LLU;
	int8_t x175 = INT8_MIN;
	volatile uint64_t t28 = 2166LLU;

    t28 = (x173*((x174|x175)+x176));

    if (t28 != 16561230756219377760LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x178 = INT64_MIN;
	int16_t x179 = INT16_MIN;
	static int16_t x180 = -1;
	volatile int64_t t29 = -265113148011748304LL;

    t29 = (x177*((x178|x179)+x180));

    if (t29 != 32769LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x181 = 13744U;
	static int16_t x182 = -1;
	int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MAX;
	int32_t t30 = 7550;

    t30 = (x181*((x182|x183)+x184));

    if (t30 != 450335904) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x185 = -1;
	volatile uint64_t x186 = 12567665941222436LLU;
	uint8_t x187 = UINT8_MAX;
	int16_t x188 = 4035;
	static uint64_t t31 = 15928856836081974LLU;

    t31 = (x185*((x186|x187)+x188));

    if (t31 != 18434176407768324926LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MIN;
	volatile uint64_t x191 = 1LLU;
	static uint64_t t32 = 23405528LLU;

    t32 = (x189*((x190|x191)+x192));

    if (t32 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x195 = INT16_MIN;
	volatile int32_t t33 = -2276;

    t33 = (x193*((x194|x195)+x196));

    if (t33 != -4784652) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x197 = 9434440519LL;
	int64_t x199 = -1LL;
	static uint64_t x200 = 1001241094LLU;
	volatile uint64_t t34 = 1737604058LLU;

    t34 = (x197*((x198|x199)+x200));

    if (t34 != 9446149537087047267LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x203 = 6908U;
	int16_t x204 = INT16_MIN;
	static uint64_t t35 = 2873LLU;

    t35 = (x201*((x202|x203)+x204));

    if (t35 != 18446744073645731604LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint64_t x205 = 1162LLU;
	static int8_t x206 = -7;
	static int8_t x207 = INT8_MAX;
	static uint8_t x208 = 1U;
	uint64_t t36 = 357768409LLU;

    t36 = (x205*((x206|x207)+x208));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x213 = -15;
	uint16_t x215 = UINT16_MAX;
	volatile uint64_t t37 = 270855741926LLU;

    t37 = (x213*((x214|x215)+x216));

    if (t37 != 14169908032194738631LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x218 = -9;
	int16_t x219 = -1;
	volatile int32_t t38 = -861762;

    t38 = (x217*((x218|x219)+x220));

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint64_t x221 = 7325LLU;
	int8_t x222 = -8;
	uint64_t x224 = 31601427LLU;

    t39 = (x221*((x222|x223)+x224));

    if (t39 != 231480394175LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x225 = UINT16_MAX;
	static int64_t x226 = INT64_MIN;
	volatile int32_t x227 = -1;
	int32_t x228 = INT32_MIN;
	int64_t t40 = -37167299857402LL;

    t40 = (x225*((x226|x227)+x228));

    if (t40 != -140735340937215LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x229 = UINT32_MAX;
	volatile int16_t x231 = INT16_MIN;
	int16_t x232 = 78;
	volatile uint32_t t41 = 429646192U;

    t41 = (x229*((x230|x231)+x232));

    if (t41 != 32690U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x233 = -1;
	int16_t x234 = INT16_MIN;
	volatile int16_t x235 = INT16_MIN;
	int16_t x236 = -65;
	volatile int32_t t42 = 2;

    t42 = (x233*((x234|x235)+x236));

    if (t42 != 32833) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x237 = -1LL;
	volatile int16_t x238 = INT16_MAX;
	volatile uint64_t x239 = 116622831LLU;
	int16_t x240 = INT16_MIN;
	uint64_t t43 = 30689930LLU;

    t43 = (x237*((x238|x239)+x240));

    if (t43 != 18446744073592930305LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x241 = 12;
	volatile int8_t x242 = 10;
	uint8_t x243 = 10U;
	int16_t x244 = INT16_MIN;
	volatile int32_t t44 = -14315054;

    t44 = (x241*((x242|x243)+x244));

    if (t44 != -393096) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x245 = INT8_MAX;
	int8_t x246 = -1;
	volatile uint32_t x247 = UINT32_MAX;
	int16_t x248 = 3505;
	uint32_t t45 = 8784678U;

    t45 = (x245*((x246|x247)+x248));

    if (t45 != 445008U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x250 = INT16_MAX;
	uint64_t x251 = UINT64_MAX;
	volatile uint64_t t46 = 70863105411739689LLU;

    t46 = (x249*((x250|x251)+x252));

    if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x253 = INT16_MIN;
	int8_t x254 = -2;
	static uint64_t x255 = UINT64_MAX;
	int64_t x256 = INT64_MIN;
	volatile uint64_t t47 = 4360375137629867LLU;

    t47 = (x253*((x254|x255)+x256));

    if (t47 != 32768LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x257 = INT16_MIN;
	volatile int8_t x259 = INT8_MAX;
	static uint32_t x260 = 12289U;
	int64_t t48 = -3474163962023133LL;

    t48 = (x257*((x258|x259)+x260));

    if (t48 != -402653184LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x269 = 212LLU;
	static uint16_t x270 = UINT16_MAX;
	int32_t x271 = 25;
	static int8_t x272 = INT8_MAX;
	uint64_t t49 = 9421309033866LLU;

    t49 = (x269*((x270|x271)+x272));

    if (t49 != 13920344LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x273 = INT32_MAX;
	uint32_t x274 = UINT32_MAX;
	volatile int64_t x275 = INT64_MAX;
	int64_t x276 = INT64_MIN;
	volatile int64_t t50 = -249427LL;

    t50 = (x273*((x274|x275)+x276));

    if (t50 != -2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x277 = INT32_MIN;
	int64_t x278 = INT64_MIN;
	int64_t x279 = -1LL;
	int16_t x280 = INT16_MIN;
	volatile int64_t t51 = 44837616520LL;

    t51 = (x277*((x278|x279)+x280));

    if (t51 != 70370891661312LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x285 = INT64_MIN;
	static uint64_t x287 = 3387502LLU;
	uint64_t t52 = 43430179525938LLU;

    t52 = (x285*((x286|x287)+x288));

    if (t52 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x289 = 161423719;
	int64_t x291 = INT64_MAX;
	uint8_t x292 = 76U;

    t53 = (x289*((x290|x291)+x292));

    if (t53 != 9223372048961554733LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x297 = UINT64_MAX;
	int8_t x298 = -1;
	uint32_t x299 = 13066U;
	uint64_t x300 = UINT64_MAX;

    t54 = (x297*((x298|x299)+x300));

    if (t54 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x301 = 13549;
	int32_t x302 = -1211;
	int8_t x304 = INT8_MAX;
	int32_t t55 = -87225618;

    t55 = (x301*((x302|x303)+x304));

    if (t55 != 1707174) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x310 = INT8_MAX;
	uint64_t x311 = 4350755685455489969LLU;
	static volatile int32_t x312 = INT32_MAX;
	uint64_t t56 = 2726022LLU;

    t56 = (x309*((x310|x311)+x312));

    if (t56 != 5394477010900630534LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x322 = INT64_MAX;
	int32_t x323 = -1;
	int32_t x324 = 0;

    t57 = (x321*((x322|x323)+x324));

    if (t57 != -4LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x325 = UINT16_MAX;
	volatile int8_t x326 = -45;
	int8_t x327 = INT8_MAX;
	volatile int8_t x328 = INT8_MIN;
	int32_t t58 = 191316;

    t58 = (x325*((x326|x327)+x328));

    if (t58 != -8454015) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x329 = -9;
	static int64_t x330 = -32208LL;
	volatile int32_t x331 = INT32_MAX;
	volatile uint32_t x332 = 6462305U;
	volatile int64_t t59 = -3215396273269612LL;

    t59 = (x329*((x330|x331)+x332));

    if (t59 != -58160736LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x341 = -1;
	int32_t x342 = INT32_MAX;
	int8_t x343 = 7;
	static int64_t x344 = 42726LL;
	int64_t t60 = 414842LL;

    t60 = (x341*((x342|x343)+x344));

    if (t60 != -2147526373LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x345 = -1;
	volatile int32_t x347 = INT32_MAX;
	volatile uint16_t x348 = UINT16_MAX;
	uint64_t t61 = 3743LLU;

    t61 = (x345*((x346|x347)+x348));

    if (t61 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x349 = 196U;
	int32_t x351 = -1;
	int8_t x352 = -1;

    t62 = (x349*((x350|x351)+x352));

    if (t62 != -392LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x357 = 35;
	static int16_t x358 = INT16_MIN;
	static int8_t x359 = INT8_MAX;
	uint64_t x360 = 58932875188LLU;
	volatile uint64_t t63 = 52967133LLU;

    t63 = (x357*((x358|x359)+x360));

    if (t63 != 2062649489145LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint64_t x365 = 12586343627700879LLU;
	volatile uint64_t x366 = UINT64_MAX;
	uint64_t x367 = UINT64_MAX;
	volatile uint64_t t64 = 14755437LLU;

    t64 = (x365*((x366|x367)+x368));

    if (t64 != 13176704054529133282LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x369 = INT8_MIN;
	uint8_t x370 = UINT8_MAX;
	int16_t x371 = INT16_MIN;
	uint64_t t65 = 41881708760LLU;

    t65 = (x369*((x370|x371)+x372));

    if (t65 != 3918336LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x373 = -7856LL;
	int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MAX;
	int64_t t66 = 19968636037897957LL;

    t66 = (x373*((x374|x375)+x376));

    if (t66 != 16870630540976LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x378 = INT64_MIN;
	static volatile uint16_t x379 = UINT16_MAX;
	int64_t x380 = 477634302136LL;
	volatile int64_t t67 = -51227513708LL;

    t67 = (x377*((x378|x379)+x380));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x398 = 0;
	uint32_t x399 = UINT32_MAX;
	volatile uint32_t t68 = 4U;

    t68 = (x397*((x398|x399)+x400));

    if (t68 != 2U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x405 = UINT8_MAX;
	static int64_t x406 = INT64_MIN;
	static volatile int32_t x407 = -1;
	int16_t x408 = -198;
	volatile int64_t t69 = 124561322LL;

    t69 = (x405*((x406|x407)+x408));

    if (t69 != -50745LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x409 = INT16_MIN;
	uint8_t x410 = 0U;
	int16_t x411 = INT16_MIN;
	static int32_t x412 = -270;
	static volatile int32_t t70 = -86667668;

    t70 = (x409*((x410|x411)+x412));

    if (t70 != 1082589184) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x417 = -1;
	int8_t x418 = INT8_MIN;
	int8_t x419 = 59;
	volatile int64_t t71 = -681090650LL;

    t71 = (x417*((x418|x419)+x420));

    if (t71 != 81222143329285LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x421 = 9U;
	volatile int16_t x422 = INT16_MIN;
	int32_t x423 = INT32_MIN;
	int16_t x424 = -274;
	volatile int32_t t72 = 23;

    t72 = (x421*((x422|x423)+x424));

    if (t72 != -297378) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x426 = 1;
	int16_t x427 = INT16_MIN;
	uint8_t x428 = UINT8_MAX;

    t73 = (x425*((x426|x427)+x428));

    if (t73 != 1065353216) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x429 = -1;
	int8_t x431 = 0;
	uint8_t x432 = 0U;
	volatile int64_t t74 = 24LL;

    t74 = (x429*((x430|x431)+x432));

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x433 = UINT64_MAX;
	int64_t x435 = 4124728674317993LL;
	uint16_t x436 = 27U;
	uint64_t t75 = 3262596375606LLU;

    t75 = (x433*((x434|x435)+x436));

    if (t75 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x442 = 3;
	int32_t x443 = -1;
	static int16_t x444 = -22;
	volatile int32_t t76 = -12484947;

    t76 = (x441*((x442|x443)+x444));

    if (t76 != 2944) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x451 = 70U;
	uint16_t x452 = 22408U;
	static volatile uint64_t t77 = 31196127691LLU;

    t77 = (x449*((x450|x451)+x452));

    if (t77 != 18446744073700185490LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x453 = INT32_MIN;
	uint8_t x454 = 0U;
	int32_t x455 = INT32_MAX;
	volatile uint32_t x456 = 85U;
	uint32_t t78 = 54U;

    t78 = (x453*((x454|x455)+x456));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x457 = INT8_MAX;
	uint8_t x458 = 4U;
	volatile int32_t t79 = 15;

    t79 = (x457*((x458|x459)+x460));

    if (t79 != 32258) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x461 = -1;
	uint32_t x462 = UINT32_MAX;
	uint32_t x463 = 27983U;
	volatile int64_t x464 = -1LL;
	int64_t t80 = 1773218755LL;

    t80 = (x461*((x462|x463)+x464));

    if (t80 != -4294967294LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x469 = -29032774;
	int64_t x470 = 354733954626LL;
	uint64_t x471 = 3643183646779LLU;
	uint64_t t81 = 8450255223LLU;

    t81 = (x469*((x470|x471)+x472));

    if (t81 != 4596390920863001484LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x473 = -1;
	int16_t x474 = -1;
	int8_t x475 = 30;
	int8_t x476 = -1;
	int32_t t82 = 714584;

    t82 = (x473*((x474|x475)+x476));

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x477 = -1;
	volatile int64_t x479 = INT64_MIN;
	int64_t x480 = INT64_MAX;
	static int64_t t83 = 399911077316951LL;

    t83 = (x477*((x478|x479)+x480));

    if (t83 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x481 = INT64_MIN;
	int32_t x482 = INT32_MIN;
	static uint16_t x483 = 20001U;
	volatile uint64_t x484 = UINT64_MAX;
	static volatile uint64_t t84 = 424916107382055761LLU;

    t84 = (x481*((x482|x483)+x484));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x487 = 932345LLU;
	volatile uint64_t t85 = 509643552135LLU;

    t85 = (x485*((x486|x487)+x488));

    if (t85 != 18442845119998418062LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x489 = 83U;
	static int8_t x490 = -1;
	int8_t x491 = -1;
	uint16_t x492 = UINT16_MAX;
	int32_t t86 = -153261456;

    t86 = (x489*((x490|x491)+x492));

    if (t86 != 5439322) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x509 = 8U;
	uint32_t x511 = 5502728U;
	int64_t t87 = -72548LL;

    t87 = (x509*((x510|x511)+x512));

    if (t87 != 33649450288LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x513 = INT8_MAX;
	int32_t x514 = 700110;
	static uint8_t x516 = UINT8_MAX;
	volatile int32_t t88 = -608;

    t88 = (x513*((x514|x515)+x516));

    if (t88 != 88950546) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x521 = INT8_MIN;
	int8_t x522 = INT8_MIN;
	uint32_t x523 = 507240U;
	volatile uint32_t x524 = 5577659U;
	volatile uint32_t t89 = 1219U;

    t89 = (x521*((x522|x523)+x524));

    if (t89 != 3581030016U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x525 = INT16_MIN;
	uint64_t x526 = 43810883LLU;
	static uint8_t x527 = 3U;
	int8_t x528 = 0;

    t90 = (x525*((x526|x527)+x528));

    if (t90 != 18446742638114537472LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x530 = INT8_MIN;
	static volatile int16_t x531 = INT16_MAX;
	int8_t x532 = INT8_MAX;
	static uint32_t t91 = 51733U;

    t91 = (x529*((x530|x531)+x532));

    if (t91 != 29103354U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x533 = 310U;
	int16_t x535 = 76;
	uint32_t x536 = 205313073U;
	uint32_t t92 = 71030661U;

    t92 = (x533*((x534|x535)+x536));

    if (t92 != 3517504906U) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x542 = UINT16_MAX;
	int16_t x543 = -1;
	uint64_t x544 = 4975LLU;

    t93 = (x541*((x542|x543)+x544));

    if (t93 != 395021561957416750LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x545 = 5512537U;
	int64_t x546 = -1490625LL;
	int64_t x547 = 252280478607511LL;
	int64_t t94 = 25181943932698LL;

    t94 = (x545*((x546|x547)+x548));

    if (t94 != -5796801995479LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x549 = -1;
	uint64_t x550 = 918436769LLU;
	int32_t x551 = INT32_MIN;
	int16_t x552 = -1;

    t95 = (x549*((x550|x551)+x552));

    if (t95 != 1229046880LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x553 = 6927U;
	int64_t x554 = 30LL;
	uint32_t x555 = 105281514U;
	int64_t t96 = -4337LL;

    t96 = (x553*((x554|x555)+x556));

    if (t96 != 729285470025LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x557 = 116749U;
	static int32_t x559 = -8690150;
	int64_t x560 = 97649007LL;
	int64_t t97 = -92267LL;

    t97 = (x557*((x558|x559)+x560));

    if (t97 != 10385857595893LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x561 = -1;
	int16_t x562 = -52;
	int16_t x563 = INT16_MIN;
	uint8_t x564 = 32U;
	static int32_t t98 = -7879;

    t98 = (x561*((x562|x563)+x564));

    if (t98 != 20) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x565 = UINT32_MAX;
	volatile int64_t x566 = -1LL;
	volatile int32_t x567 = 1622294;
	uint8_t x568 = 2U;

    t99 = (x565*((x566|x567)+x568));

    if (t99 != 4294967295LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x585 = INT8_MIN;
	static volatile int16_t x586 = 3;
	uint32_t x587 = 74U;
	uint32_t t100 = 11506933U;

    t100 = (x585*((x586|x587)+x588));

    if (t100 != 4294955520U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x594 = INT32_MAX;
	volatile int64_t x595 = INT64_MIN;
	uint64_t x596 = 950662019957178149LLU;

    t101 = (x593*((x594|x595)+x596));

    if (t101 != 17454130943696792016LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x599 = INT64_MIN;
	int8_t x600 = INT8_MIN;
	static int64_t t102 = -1023809841905614343LL;

    t102 = (x597*((x598|x599)+x600));

    if (t102 != -57369783LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x601 = INT16_MAX;
	volatile uint16_t x602 = UINT16_MAX;
	volatile int32_t x603 = INT32_MIN;
	volatile uint64_t x604 = 80327993516LLU;

    t103 = (x601*((x602|x603)+x604));

    if (t103 != 2561742914230101LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x605 = INT16_MIN;
	volatile uint32_t x606 = 44U;
	int8_t x607 = -1;
	uint8_t x608 = UINT8_MAX;

    t104 = (x605*((x606|x607)+x608));

    if (t104 != 4286644224U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x611 = -4;
	uint64_t x612 = 301904LLU;
	volatile uint64_t t105 = 6986117995735395430LLU;

    t105 = (x609*((x610|x611)+x612));

    if (t105 != 18446744073709249713LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x615 = 7006284948724LLU;
	int16_t x616 = 81;

    t106 = (x613*((x614|x615)+x616));

    if (t106 != 18446742538410409645LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x622 = 7;
	static int8_t x623 = INT8_MAX;
	int16_t x624 = INT16_MIN;
	volatile uint32_t t107 = 162571881U;

    t107 = (x621*((x622|x623)+x624));

    if (t107 != 3998568726U) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x625 = 17372104345LLU;
	volatile int8_t x627 = -1;
	static uint8_t x628 = 0U;
	volatile uint64_t t108 = 152634872589409372LLU;

    t108 = (x625*((x626|x627)+x628));

    if (t108 != 18446744056337447271LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x637 = -1;
	static int64_t x638 = INT64_MIN;
	uint64_t x639 = 15485572LLU;
	volatile int32_t x640 = INT32_MIN;
	volatile uint64_t t109 = 33106291430LLU;

    t109 = (x637*((x638|x639)+x640));

    if (t109 != 9223372038986773884LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x641 = INT8_MIN;
	volatile uint8_t x642 = UINT8_MAX;
	int64_t x643 = -691770673LL;
	volatile int32_t x644 = -11625279;
	volatile int64_t t110 = 5LL;

    t110 = (x641*((x642|x643)+x644));

    if (t110 != 90034675712LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x657 = -1LL;
	volatile uint32_t x658 = 6702768U;
	uint32_t x659 = 219U;
	int16_t x660 = INT16_MAX;
	int64_t t111 = -126480LL;

    t111 = (x657*((x658|x659)+x660));

    if (t111 != -6735610LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x661 = -1LL;
	int16_t x664 = -1738;

    t112 = (x661*((x662|x663)+x664));

    if (t112 != 1739LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x666 = INT64_MIN;
	int64_t x667 = INT64_MAX;
	static uint64_t x668 = UINT64_MAX;
	volatile uint64_t t113 = 32134471166283417LLU;

    t113 = (x665*((x666|x667)+x668));

    if (t113 != 18446744073709551106LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x669 = 2;
	int64_t x670 = 45LL;
	uint64_t x671 = 1764687LLU;
	volatile uint64_t t114 = 620097481LLU;

    t114 = (x669*((x670|x671)+x672));

    if (t114 != 18446744069418113758LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x685 = 480U;
	static int16_t x686 = INT16_MAX;
	int32_t x687 = INT32_MIN;
	int32_t x688 = INT32_MAX;
	int32_t t115 = -9;

    t115 = (x685*((x686|x687)+x688));

    if (t115 != 15727680) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x693 = UINT8_MAX;
	volatile int8_t x694 = INT8_MAX;
	int8_t x696 = -1;
	volatile int64_t t116 = 1106381181341889LL;

    t116 = (x693*((x694|x695)+x696));

    if (t116 != -510LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x698 = -630;
	volatile int8_t x699 = 1;
	int16_t x700 = -1;

    t117 = (x697*((x698|x699)+x700));

    if (t117 != 32760) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x701 = 0U;
	uint64_t x702 = 5435LLU;
	int64_t x703 = -1LL;
	int64_t x704 = -1LL;
	volatile uint64_t t118 = 3883062383242817LLU;

    t118 = (x701*((x702|x703)+x704));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x706 = UINT64_MAX;
	int32_t x707 = -1;
	uint8_t x708 = 92U;
	uint64_t t119 = 57830688678055493LLU;

    t119 = (x705*((x706|x707)+x708));

    if (t119 != 1278823LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x709 = 3U;
	int32_t x710 = -43;
	int16_t x711 = INT16_MIN;
	int32_t x712 = 538;
	int32_t t120 = 2190;

    t120 = (x709*((x710|x711)+x712));

    if (t120 != 1485) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x713 = 247U;
	volatile uint32_t x715 = UINT32_MAX;
	volatile int32_t x716 = -1;
	uint32_t t121 = 3736436U;

    t121 = (x713*((x714|x715)+x716));

    if (t121 != 4294966802U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x721 = 10736;
	uint64_t x724 = UINT64_MAX;
	volatile uint64_t t122 = 185716LLU;

    t122 = (x721*((x722|x723)+x724));

    if (t122 != 23055384423456LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x737 = -1;
	int64_t x738 = -784292849308648389LL;
	static volatile uint64_t x740 = 1297LLU;
	volatile uint64_t t123 = 820169LLU;

    t123 = (x737*((x738|x739)+x740));

    if (t123 != 18446744073709550320LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x741 = INT16_MIN;
	int16_t x742 = INT16_MIN;
	static int16_t x743 = INT16_MAX;
	static volatile uint16_t x744 = UINT16_MAX;
	int32_t t124 = -92;

    t124 = (x741*((x742|x743)+x744));

    if (t124 != -2147418112) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x745 = INT32_MIN;
	volatile int32_t x746 = -1251808;
	uint64_t x747 = 425LLU;
	volatile int8_t x748 = INT8_MAX;
	uint64_t t125 = 2128245715623997LLU;

    t125 = (x745*((x746|x747)+x748));

    if (t125 != 2687120518938624LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x749 = 3;
	uint32_t x750 = 6509280U;
	static int32_t x751 = -45367181;
	int16_t x752 = 222;
	volatile uint32_t t126 = 1850766U;

    t126 = (x749*((x750|x751)+x752));

    if (t126 != 4165172083U) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x757 = -5416081;
	volatile int16_t x758 = INT16_MAX;
	int16_t x759 = INT16_MIN;
	static volatile uint16_t x760 = 63U;
	int32_t t127 = 64546;

    t127 = (x757*((x758|x759)+x760));

    if (t127 != -335797022) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x761 = 21060305871042LLU;
	volatile int64_t x762 = -11437887LL;
	static volatile int32_t x764 = INT32_MIN;

    t128 = (x761*((x762|x763)+x764));

    if (t128 != 4714921927338058306LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x765 = -10LL;
	uint16_t x767 = 9U;
	int64_t x768 = -1LL;

    t129 = (x765*((x766|x767)+x768));

    if (t129 != -719620LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x780 = -1;
	volatile uint64_t t130 = 779334871780513LLU;

    t130 = (x777*((x778|x779)+x780));

    if (t130 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x783 = 18815386828782766LLU;
	volatile int64_t x784 = INT64_MIN;
	uint64_t t131 = 14865988LLU;

    t131 = (x781*((x782|x783)+x784));

    if (t131 != 14891681473758444598LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x789 = -13287;
	volatile int64_t x790 = -496608537291LL;
	static volatile int16_t x791 = -1;
	static int32_t x792 = INT32_MIN;
	static volatile int64_t t132 = 834452834017163LL;

    t132 = (x789*((x790|x791)+x792));

    if (t132 != 28533615244263LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x793 = INT16_MIN;
	int64_t x795 = -325293681LL;
	uint64_t x796 = 5803360LLU;
	volatile uint64_t t133 = 1LLU;

    t133 = (x793*((x794|x795)+x796));

    if (t133 != 10468891066368LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x798 = INT16_MIN;
	int16_t x799 = -31;
	volatile int8_t x800 = INT8_MIN;

    t134 = (x797*((x798|x799)+x800));

    if (t134 != -40545) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x801 = -504449026LL;
	uint64_t x802 = UINT64_MAX;
	volatile int8_t x803 = INT8_MAX;
	static uint64_t t135 = 385LLU;

    t135 = (x801*((x802|x803)+x804));

    if (t135 != 1008898052LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x806 = INT32_MAX;
	uint64_t x807 = 11218453438LLU;
	int8_t x808 = 44;
	uint64_t t136 = 59LLU;

    t136 = (x805*((x806|x807)+x808));

    if (t136 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x810 = -1;
	volatile int64_t x811 = INT64_MAX;
	static uint32_t x812 = UINT32_MAX;

    t137 = (x809*((x810|x811)+x812));

    if (t137 != 281470681612290LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x817 = 3530092716LLU;
	int16_t x818 = -1;
	int8_t x820 = -1;
	uint64_t t138 = 25LLU;

    t138 = (x817*((x818|x819)+x820));

    if (t138 != 18446744066649366184LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint64_t x821 = 223372070LLU;
	int32_t x822 = 5;
	volatile uint64_t x823 = UINT64_MAX;
	uint8_t x824 = UINT8_MAX;

    t139 = (x821*((x822|x823)+x824));

    if (t139 != 56736505780LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x825 = INT32_MIN;
	uint8_t x826 = 28U;
	uint32_t x827 = 2U;
	uint16_t x828 = UINT16_MAX;
	static volatile uint32_t t140 = 580888369U;

    t140 = (x825*((x826|x827)+x828));

    if (t140 != 2147483648U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x831 = -1;
	volatile uint32_t x832 = UINT32_MAX;
	volatile uint64_t t141 = 2334375097894LLU;

    t141 = (x829*((x830|x831)+x832));

    if (t141 != 11039288284681927456LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x841 = -1LL;
	volatile int8_t x842 = INT8_MIN;
	int8_t x843 = INT8_MIN;
	volatile int16_t x844 = 18;
	int64_t t142 = -4525723694051433030LL;

    t142 = (x841*((x842|x843)+x844));

    if (t142 != 110LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x849 = 1U;
	static uint8_t x850 = 1U;
	int16_t x851 = 10396;
	int8_t x852 = 31;
	int32_t t143 = 1;

    t143 = (x849*((x850|x851)+x852));

    if (t143 != 10428) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x853 = -1;
	int64_t x854 = INT64_MAX;
	int16_t x855 = -1;
	int32_t x856 = 65164;
	int64_t t144 = 2LL;

    t144 = (x853*((x854|x855)+x856));

    if (t144 != -65163LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x858 = INT64_MIN;
	uint64_t x860 = 247LLU;
	volatile uint64_t t145 = 1920518681836082LLU;

    t145 = (x857*((x858|x859)+x860));

    if (t145 != 18446744073709551370LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x865 = 1U;
	int8_t x866 = -1;
	volatile uint8_t x867 = 1U;
	int64_t x868 = -540782159LL;
	int64_t t146 = -123LL;

    t146 = (x865*((x866|x867)+x868));

    if (t146 != -540782160LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x870 = INT8_MAX;
	uint64_t x871 = UINT64_MAX;
	int64_t x872 = -67LL;
	static uint64_t t147 = 20491554940381LLU;

    t147 = (x869*((x870|x871)+x872));

    if (t147 != 68LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x873 = UINT64_MAX;
	uint32_t x874 = 1U;
	volatile uint8_t x875 = 2U;

    t148 = (x873*((x874|x875)+x876));

    if (t148 != 18446744073709513029LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x877 = -1;
	int16_t x878 = -1;
	int8_t x880 = INT8_MIN;
	volatile uint64_t t149 = 13720LLU;

    t149 = (x877*((x878|x879)+x880));

    if (t149 != 129LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x885 = 26U;
	uint64_t x886 = UINT64_MAX;
	static int32_t x887 = -4;
	int8_t x888 = INT8_MAX;
	volatile uint64_t t150 = 99LLU;

    t150 = (x885*((x886|x887)+x888));

    if (t150 != 3276LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x889 = 29U;
	int8_t x890 = INT8_MAX;
	uint8_t x891 = 25U;
	int8_t x892 = INT8_MAX;
	volatile uint32_t t151 = 1159614U;

    t151 = (x889*((x890|x891)+x892));

    if (t151 != 7366U) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x893 = -1LL;
	static int32_t x894 = -8274758;
	int32_t x896 = INT32_MIN;
	int64_t t152 = -92899LL;

    t152 = (x893*((x894|x895)+x896));

    if (t152 != -2139208959LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x897 = INT16_MAX;
	uint64_t x898 = 3897885070LLU;
	uint64_t t153 = 412020909866LLU;

    t153 = (x897*((x898|x899)+x900));

    if (t153 != 18446660695919558258LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x901 = INT16_MIN;
	volatile int64_t x902 = -2271664464LL;
	volatile int64_t t154 = -130199567102276LL;

    t154 = (x901*((x902|x903)+x904));

    if (t154 != 74437899223040LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x909 = INT16_MAX;
	uint8_t x910 = 15U;
	int16_t x911 = 18;
	int32_t x912 = 241;
	volatile int32_t t155 = 1;

    t155 = (x909*((x910|x911)+x912));

    if (t155 != 8912624) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x913 = 103U;
	uint8_t x914 = UINT8_MAX;
	int16_t x915 = -1;
	int64_t t156 = 4832372127LL;

    t156 = (x913*((x914|x915)+x916));

    if (t156 != 834121913LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x917 = 4955969614654218LLU;
	int64_t x919 = INT64_MIN;

    t157 = (x917*((x918|x919)+x920));

    if (t157 != 10560455332626059254LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x921 = UINT64_MAX;
	static uint64_t x922 = 261633246LLU;
	static uint8_t x923 = UINT8_MAX;
	static int32_t x924 = INT32_MIN;
	static volatile uint64_t t158 = 135116005956992152LLU;

    t158 = (x921*((x922|x923)+x924));

    if (t158 != 1885850369LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x925 = 19515710U;
	int16_t x926 = -3;
	int8_t x927 = INT8_MAX;

    t159 = (x925*((x926|x927)+x928));

    if (t159 != 18446744073670520196LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x929 = 1418U;
	int16_t x931 = -1;
	int64_t x932 = -1LL;
	volatile int64_t t160 = 342602096013LL;

    t160 = (x929*((x930|x931)+x932));

    if (t160 != -2836LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x933 = INT16_MIN;
	uint64_t x934 = 3034LLU;
	int16_t x935 = INT16_MAX;
	uint64_t t161 = 297135209977268LLU;

    t161 = (x933*((x934|x935)+x936));

    if (t161 != 1623779610423132160LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x945 = 2377948599LLU;
	int64_t x946 = INT64_MAX;
	int8_t x947 = -34;
	uint8_t x948 = UINT8_MAX;

    t162 = (x945*((x946|x947)+x948));

    if (t162 != 603998944146LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x949 = -1;
	volatile int8_t x950 = -1;
	uint32_t x951 = 99119U;
	int16_t x952 = -1;

    t163 = (x949*((x950|x951)+x952));

    if (t163 != 2U) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint8_t x953 = 8U;
	static int8_t x954 = INT8_MIN;
	int64_t x955 = INT64_MAX;
	int16_t x956 = INT16_MAX;
	int64_t t164 = 979495961184978LL;

    t164 = (x953*((x954|x955)+x956));

    if (t164 != 262128LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x957 = -1;
	int32_t x959 = INT32_MIN;
	int8_t x960 = 56;
	volatile int32_t t165 = 3511;

    t165 = (x957*((x958|x959)+x960));

    if (t165 != 2147483592) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x965 = INT64_MIN;
	uint16_t x966 = 20U;
	volatile int16_t x968 = INT16_MIN;
	volatile uint64_t t166 = 0LLU;

    t166 = (x965*((x966|x967)+x968));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x969 = -4872192LL;
	uint64_t x970 = 9898967929766LLU;
	int64_t x972 = INT64_MIN;
	uint64_t t167 = 11479224979115568LLU;

    t167 = (x969*((x970|x971)+x972));

    if (t167 != 7110559865032562688LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x977 = INT16_MAX;
	static int16_t x979 = -1;
	uint32_t x980 = UINT32_MAX;
	volatile uint32_t t168 = 17545187U;

    t168 = (x977*((x978|x979)+x980));

    if (t168 != 4294901762U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x981 = INT32_MIN;
	static int16_t x982 = INT16_MIN;
	int64_t x983 = -1LL;
	int32_t x984 = INT32_MAX;
	int64_t t169 = -135858648LL;

    t169 = (x981*((x982|x983)+x984));

    if (t169 != -4611686014132420608LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x985 = -41;
	static uint32_t x986 = 624011447U;
	static int8_t x987 = -1;
	static uint32_t t170 = 1826235239U;

    t170 = (x985*((x986|x987)+x988));

    if (t170 != 35055U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x990 = 880364840LL;
	int32_t x992 = -1;
	uint64_t t171 = 913029LLU;

    t171 = (x989*((x990|x991)+x992));

    if (t171 != 2932201033596994LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x993 = INT16_MIN;
	static volatile int8_t x994 = -1;
	static uint64_t x995 = 114207LLU;
	static int64_t x996 = -2305960877005068LL;
	volatile uint64_t t172 = 1622415980009LLU;

    t172 = (x993*((x994|x995)+x996));

    if (t172 != 1774749722863894528LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x997 = INT8_MIN;
	int8_t x999 = INT8_MAX;
	uint32_t x1000 = 3342U;
	volatile uint32_t t173 = 0U;

    t173 = (x997*((x998|x999)+x1000));

    if (t173 != 4294523264U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1001 = INT32_MAX;
	volatile int64_t x1002 = -1LL;
	int32_t x1003 = INT32_MIN;
	int8_t x1004 = -1;
	volatile int64_t t174 = 532469080083LL;

    t174 = (x1001*((x1002|x1003)+x1004));

    if (t174 != -4294967294LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1025 = -1;
	int8_t x1026 = -1;
	static int8_t x1028 = INT8_MIN;
	volatile int64_t t175 = 17067258843164LL;

    t175 = (x1025*((x1026|x1027)+x1028));

    if (t175 != 129LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x1029 = -1LL;
	uint32_t x1030 = 410U;
	uint64_t x1031 = 685222455537407LLU;
	volatile uint64_t t176 = 412714872341LLU;

    t176 = (x1029*((x1030|x1031)+x1032));

    if (t176 != 18446058851254013953LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1033 = INT16_MIN;
	uint32_t x1034 = 105794U;
	int8_t x1035 = 1;
	int16_t x1036 = INT16_MAX;
	volatile uint32_t t177 = 16209257U;

    t177 = (x1033*((x1034|x1035)+x1036));

    if (t177 != 4049534976U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1037 = INT16_MIN;
	static volatile uint16_t x1038 = UINT16_MAX;
	uint64_t x1039 = 993697099088510485LLU;
	static volatile int16_t x1040 = -1;

    t178 = (x1037*((x1038|x1039)+x1040));

    if (t178 != 15483491238203686912LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1041 = -14;
	uint16_t x1042 = 7U;
	int8_t x1044 = -2;

    t179 = (x1041*((x1042|x1043)+x1044));

    if (t179 != 40026LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1049 = -227LL;
	volatile uint16_t x1051 = 1788U;
	volatile int8_t x1052 = -1;
	volatile int64_t t180 = 10153873076LL;

    t180 = (x1049*((x1050|x1051)+x1052));

    if (t180 != -14876218LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1053 = INT8_MAX;
	int32_t x1054 = -1;
	int16_t x1056 = INT16_MIN;

    t181 = (x1053*((x1054|x1055)+x1056));

    if (t181 != -4161663) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1057 = INT16_MIN;
	int64_t x1058 = -26717501LL;
	volatile int8_t x1060 = INT8_MAX;

    t182 = (x1057*((x1058|x1059)+x1060));

    if (t182 != 40875261952LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1065 = -37;
	int8_t x1066 = 13;
	int8_t x1067 = -10;
	volatile uint8_t x1068 = 15U;
	static int32_t t183 = -17197;

    t183 = (x1065*((x1066|x1067)+x1068));

    if (t183 != -518) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1077 = UINT64_MAX;
	int32_t x1078 = -575;
	int64_t x1079 = 688LL;
	static int8_t x1080 = -7;
	static uint64_t t184 = 175LLU;

    t184 = (x1077*((x1078|x1079)+x1080));

    if (t184 != 22LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1082 = 46341336150LLU;
	int16_t x1083 = -1;

    t185 = (x1081*((x1082|x1083)+x1084));

    if (t185 != 65536LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1093 = -191LL;
	static uint16_t x1094 = 118U;
	volatile int8_t x1095 = -12;
	int32_t x1096 = INT32_MAX;
	static int64_t t186 = 4211620528LL;

    t186 = (x1093*((x1094|x1095)+x1096));

    if (t186 != -410169374667LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1097 = 5U;
	volatile uint32_t x1098 = 889693152U;
	uint8_t x1099 = 0U;
	volatile int16_t x1100 = 3;
	static volatile uint32_t t187 = 64964975U;

    t187 = (x1097*((x1098|x1099)+x1100));

    if (t187 != 153498479U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x1101 = -1LL;
	int32_t x1102 = 131021830;
	int16_t x1103 = INT16_MIN;
	static int16_t x1104 = -1;
	volatile int64_t t188 = -1854481LL;

    t188 = (x1101*((x1102|x1103)+x1104));

    if (t188 != 17403LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x1105 = -1;
	static uint8_t x1106 = 3U;
	int8_t x1107 = -27;
	volatile int32_t t189 = 34166283;

    t189 = (x1105*((x1106|x1107)+x1108));

    if (t189 != 32793) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x1109 = 3120169587049LLU;
	static int8_t x1110 = 1;
	static uint16_t x1112 = UINT16_MAX;
	uint64_t t190 = 2LLU;

    t190 = (x1109*((x1110|x1111)+x1112));

    if (t190 != 8800768256274634824LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1113 = 17858446616120LLU;
	int16_t x1114 = -166;
	int8_t x1115 = INT8_MIN;
	uint64_t t191 = 28158776416LLU;

    t191 = (x1113*((x1114|x1115)+x1116));

    if (t191 != 18443779571571275696LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1118 = -1LL;
	volatile uint8_t x1119 = 11U;
	int16_t x1120 = -1;
	static volatile int64_t t192 = 1LL;

    t192 = (x1117*((x1118|x1119)+x1120));

    if (t192 != -510LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x1121 = 3;
	int16_t x1122 = -1;
	static uint8_t x1124 = 1U;
	uint32_t t193 = 112U;

    t193 = (x1121*((x1122|x1123)+x1124));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1125 = INT64_MAX;
	uint64_t x1126 = UINT64_MAX;
	static uint32_t x1127 = 52706U;
	int64_t x1128 = INT64_MAX;
	uint64_t t194 = 8LLU;

    t194 = (x1125*((x1126|x1127)+x1128));

    if (t194 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1129 = INT16_MIN;
	uint16_t x1130 = 23U;
	volatile int32_t x1131 = 42715;
	volatile uint32_t x1132 = 54830333U;
	volatile uint32_t t195 = 39836806U;

    t195 = (x1129*((x1130|x1131)+x1132));

    if (t195 != 1511129088U) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x1138 = 101U;
	int64_t x1139 = -5733LL;
	int16_t x1140 = 16187;
	static int64_t t196 = 257019922LL;

    t196 = (x1137*((x1138|x1139)+x1140));

    if (t196 != -28434344058LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1141 = 21U;
	uint16_t x1142 = 370U;
	int64_t x1143 = -12694009873LL;
	static int16_t x1144 = -4;

    t197 = (x1141*((x1142|x1143)+x1144));

    if (t197 != -266574207081LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x1145 = 0;
	volatile int8_t x1146 = -1;
	uint16_t x1147 = UINT16_MAX;
	volatile uint16_t x1148 = 50U;
	int32_t t198 = -46;

    t198 = (x1145*((x1146|x1147)+x1148));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1149 = UINT32_MAX;
	uint32_t x1151 = 149572U;

    t199 = (x1149*((x1150|x1151)+x1152));

    if (t199 != 18446744060824649730LLU) { NG(); } else { ; }
	
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

