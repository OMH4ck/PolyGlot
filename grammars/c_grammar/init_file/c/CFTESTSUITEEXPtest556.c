
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

int32_t x1 = INT32_MAX;
uint16_t x7 = 7U;
int32_t x9 = 5813554;
int16_t x17 = INT16_MAX;
volatile uint32_t x25 = UINT32_MAX;
volatile uint16_t x26 = 147U;
uint8_t x32 = 3U;
static uint64_t x46 = 15497796362174285LLU;
int32_t t10 = -10;
volatile int32_t t12 = -370;
int8_t x71 = INT8_MIN;
volatile int32_t t13 = 5;
int64_t x84 = INT64_MAX;
uint64_t x90 = 57099LLU;
volatile int32_t t18 = 945713;
int16_t x105 = INT16_MAX;
int8_t x108 = -1;
uint8_t x112 = 1U;
uint64_t x115 = 47279386113LLU;
volatile int16_t x116 = -256;
int32_t t24 = 3;
uint64_t x127 = UINT64_MAX;
volatile int32_t t26 = -1139;
int32_t x129 = INT32_MIN;
uint32_t x131 = UINT32_MAX;
int8_t x140 = -1;
static uint8_t x143 = 1U;
int64_t x144 = -1LL;
static int32_t x153 = INT32_MIN;
int32_t x156 = INT32_MAX;
uint64_t x183 = 8LLU;
volatile int32_t t41 = 58213;
uint64_t x203 = UINT64_MAX;
int16_t x211 = INT16_MAX;
int8_t x224 = -1;
int64_t x240 = INT64_MAX;
volatile int32_t t47 = -53620;
int32_t x241 = INT32_MIN;
int8_t x243 = INT8_MAX;
static int32_t t48 = -137;
volatile int32_t t50 = -361;
int32_t x257 = -1;
uint64_t x264 = 492LLU;
uint32_t x267 = UINT32_MAX;
static volatile int16_t x271 = -1;
int32_t x273 = INT32_MIN;
uint16_t x274 = UINT16_MAX;
int32_t t56 = 8652;
uint8_t x280 = 65U;
static int16_t x289 = 2;
static int8_t x292 = -1;
int32_t x323 = -262013;
volatile int16_t x325 = -1;
int32_t x328 = -1;
int16_t x350 = -1;
int32_t x354 = 6;
static int32_t x365 = -1;
uint8_t x371 = UINT8_MAX;
volatile int32_t t75 = -1;
static int8_t x398 = -3;
volatile int32_t t78 = -7631;
int16_t x409 = 0;
uint16_t x411 = UINT16_MAX;
volatile int8_t x419 = INT8_MIN;
int32_t t82 = 1;
static int8_t x442 = -1;
volatile int32_t t85 = 55033362;
int32_t x452 = INT32_MIN;
volatile int16_t x455 = INT16_MAX;
int32_t x457 = INT32_MIN;
int8_t x462 = INT8_MIN;
int64_t x464 = 30265783082LL;
int32_t t89 = 361042823;
int8_t x508 = -31;
int8_t x512 = INT8_MIN;
volatile uint64_t x518 = 373386540053180165LLU;
static volatile int32_t x528 = INT32_MAX;
static int32_t x549 = INT32_MIN;
int64_t x552 = INT64_MAX;
volatile int32_t t103 = 113436;
static uint16_t x553 = 51U;
uint64_t x556 = UINT64_MAX;
uint32_t x557 = 112U;
volatile uint64_t x558 = 45367373277LLU;
uint64_t x559 = UINT64_MAX;
int16_t x560 = INT16_MAX;
int64_t x561 = -1LL;
static int8_t x578 = INT8_MAX;
volatile int32_t t108 = 1;
int16_t x587 = 832;
uint8_t x590 = 26U;
int32_t t111 = -18;
static int16_t x593 = -1;
int8_t x599 = INT8_MIN;
int32_t x602 = -1;
int16_t x607 = INT16_MAX;
int32_t x608 = -45330181;
static int8_t x609 = 0;
static uint64_t x613 = 80LLU;
static int8_t x620 = 1;
static uint32_t x629 = UINT32_MAX;
volatile int64_t x630 = -269348677404882LL;
uint64_t x632 = 13777360605950LLU;
static volatile int32_t t120 = -104;
int32_t t123 = -24386;
static volatile uint16_t x660 = 209U;
volatile uint64_t x664 = 18037298915954LLU;
uint32_t x679 = 1U;
static int16_t x684 = 0;
volatile int8_t x688 = -40;
int8_t x699 = 1;
int32_t x700 = INT32_MIN;
volatile int32_t t134 = -80;
static int32_t x704 = INT32_MIN;
volatile int32_t t135 = 1269;
volatile int32_t x705 = -2977;
int8_t x706 = INT8_MIN;
volatile int32_t t136 = 13212219;
int64_t x722 = 63932109826899LL;
volatile int8_t x726 = INT8_MIN;
volatile uint16_t x731 = 130U;
int32_t x732 = INT32_MAX;
volatile uint8_t x738 = 0U;
static volatile int32_t t141 = -13590972;
int8_t x742 = INT8_MIN;
static int32_t t142 = 26096;
static volatile int32_t t143 = -23364449;
static volatile uint32_t x752 = UINT32_MAX;
int32_t t144 = -72;
int16_t x753 = INT16_MAX;
int16_t x756 = INT16_MIN;
static uint16_t x760 = UINT16_MAX;
int8_t x767 = 8;
volatile int16_t x774 = 11669;
int32_t t149 = -36799421;
volatile uint8_t x785 = 0U;
volatile int16_t x786 = INT16_MAX;
volatile uint16_t x788 = 9U;
int32_t t152 = -88953;
int32_t t153 = -1907;
volatile int8_t x797 = 8;
int64_t x798 = 1946411LL;
int64_t x806 = -1LL;
volatile int16_t x808 = INT16_MIN;
static uint32_t x825 = UINT32_MAX;
static int32_t t161 = 1;
volatile int32_t t162 = 7933;
static volatile int32_t t163 = -31408;
uint16_t x853 = 161U;
static int8_t x873 = -50;
uint32_t x883 = 12091481U;
uint64_t x891 = 1010796LLU;
int8_t x892 = INT8_MIN;
int16_t x894 = -1;
int8_t x903 = 18;
volatile int64_t x908 = -427023912366151LL;
static uint64_t x913 = 3042028733LLU;
volatile int16_t x924 = INT16_MIN;
uint32_t x930 = 17339657U;
uint16_t x938 = 1U;
int32_t t182 = 334;
static int64_t x953 = INT64_MIN;
volatile int8_t x956 = -1;
uint32_t x976 = UINT32_MAX;
volatile int32_t t190 = -2206351;
int8_t x987 = -1;
uint64_t x988 = UINT64_MAX;
int32_t t192 = 1;
int64_t x998 = 5938060164129LL;
uint64_t x1006 = 13LLU;
static uint64_t x1010 = 4LLU;
static int64_t x1011 = 113393525774582056LL;


void f0(void) {
    	uint8_t x2 = 4U;
	uint64_t x3 = 92LLU;
	static uint8_t x4 = 29U;
	int32_t t0 = 35098709;

    t0 = (x1<=((x2*x3)&x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	volatile uint32_t x6 = UINT32_MAX;
	int8_t x8 = -4;
	volatile int32_t t1 = 6504960;

    t1 = (x5<=((x6*x7)&x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x10 = 129324LL;
	volatile int16_t x11 = 326;
	int16_t x12 = INT16_MIN;
	int32_t t2 = -69;

    t2 = (x9<=((x10*x11)&x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x18 = INT64_MAX;
	volatile int64_t x19 = -1LL;
	int16_t x20 = INT16_MAX;
	static int32_t t3 = 64;

    t3 = (x17<=((x18*x19)&x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 87904253386LLU;
	int8_t x22 = -1;
	uint64_t x23 = 2LLU;
	static volatile int16_t x24 = -1;
	int32_t t4 = -6666;

    t4 = (x21<=((x22*x23)&x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x27 = 0U;
	int8_t x28 = INT8_MAX;
	static volatile int32_t t5 = 999358;

    t5 = (x25<=((x26*x27)&x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x29 = INT64_MIN;
	static uint64_t x30 = 2342524LLU;
	uint32_t x31 = UINT32_MAX;
	volatile int32_t t6 = -191789120;

    t6 = (x29<=((x30*x31)&x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x33 = INT16_MAX;
	uint64_t x34 = 1223061LLU;
	int16_t x35 = 20;
	volatile int8_t x36 = INT8_MIN;
	int32_t t7 = -65451013;

    t7 = (x33<=((x34*x35)&x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = UINT32_MAX;
	volatile uint64_t x38 = 46446281LLU;
	int32_t x39 = INT32_MIN;
	static volatile uint32_t x40 = 2U;
	volatile int32_t t8 = 8144;

    t8 = (x37<=((x38*x39)&x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = -214;
	int32_t x47 = INT32_MAX;
	int8_t x48 = 11;
	volatile int32_t t9 = 4;

    t9 = (x45<=((x46*x47)&x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x57 = INT32_MAX;
	int64_t x58 = -1LL;
	static int32_t x59 = INT32_MIN;
	int64_t x60 = -1LL;

    t10 = (x57<=((x58*x59)&x60));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x61 = INT8_MAX;
	uint16_t x62 = UINT16_MAX;
	uint64_t x63 = 8413782693LLU;
	uint32_t x64 = 8600244U;
	volatile int32_t t11 = 19148;

    t11 = (x61<=((x62*x63)&x64));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x65 = INT64_MIN;
	static int8_t x66 = 1;
	volatile int16_t x67 = INT16_MIN;
	int16_t x68 = 811;

    t12 = (x65<=((x66*x67)&x68));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x69 = 1;
	uint64_t x70 = 7265791248278123LLU;
	uint64_t x72 = 375392475513250704LLU;

    t13 = (x69<=((x70*x71)&x72));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x73 = 1U;
	static uint64_t x74 = UINT64_MAX;
	int64_t x75 = -1LL;
	uint32_t x76 = 2350U;
	volatile int32_t t14 = -114412802;

    t14 = (x73<=((x74*x75)&x76));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x77 = 0LLU;
	volatile uint16_t x78 = 206U;
	static int16_t x79 = -1;
	int64_t x80 = INT64_MIN;
	volatile int32_t t15 = 41845;

    t15 = (x77<=((x78*x79)&x80));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x81 = INT64_MIN;
	uint64_t x82 = 65714808LLU;
	int8_t x83 = -1;
	volatile int32_t t16 = 4790;

    t16 = (x81<=((x82*x83)&x84));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x85 = INT16_MAX;
	uint64_t x86 = UINT64_MAX;
	static int16_t x87 = INT16_MIN;
	uint64_t x88 = 117172LLU;
	volatile int32_t t17 = -11;

    t17 = (x85<=((x86*x87)&x88));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x89 = UINT64_MAX;
	uint16_t x91 = UINT16_MAX;
	volatile int64_t x92 = -1LL;

    t18 = (x89<=((x90*x91)&x92));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x97 = INT32_MIN;
	static uint16_t x98 = UINT16_MAX;
	uint64_t x99 = 33056836402032LLU;
	int32_t x100 = 1720929;
	int32_t t19 = -987542398;

    t19 = (x97<=((x98*x99)&x100));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = INT32_MIN;
	static int16_t x102 = INT16_MIN;
	static uint32_t x103 = 12U;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t20 = 30663;

    t20 = (x101<=((x102*x103)&x104));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x106 = UINT32_MAX;
	volatile uint8_t x107 = 127U;
	volatile int32_t t21 = -42062032;

    t21 = (x105<=((x106*x107)&x108));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x109 = INT8_MAX;
	int8_t x110 = INT8_MIN;
	static volatile uint16_t x111 = 480U;
	volatile int32_t t22 = -14;

    t22 = (x109<=((x110*x111)&x112));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x113 = INT32_MAX;
	static int32_t x114 = -1;
	int32_t t23 = -227253095;

    t23 = (x113<=((x114*x115)&x116));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x117 = 9;
	static uint64_t x118 = 5894421219281LLU;
	int8_t x119 = 1;
	int64_t x120 = 1LL;

    t24 = (x117<=((x118*x119)&x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = -1LL;
	uint64_t x122 = 1LLU;
	uint16_t x123 = 942U;
	int64_t x124 = 281792337311131575LL;
	volatile int32_t t25 = -509094021;

    t25 = (x121<=((x122*x123)&x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x125 = 3U;
	int64_t x126 = 39493703811LL;
	uint8_t x128 = 7U;

    t26 = (x125<=((x126*x127)&x128));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x130 = INT8_MIN;
	int32_t x132 = INT32_MIN;
	static int32_t t27 = 250803564;

    t27 = (x129<=((x130*x131)&x132));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x133 = -1;
	int16_t x134 = INT16_MAX;
	uint16_t x135 = 369U;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t28 = -22;

    t28 = (x133<=((x134*x135)&x136));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x137 = 15688942712LL;
	volatile uint8_t x138 = 1U;
	volatile uint16_t x139 = 1U;
	int32_t t29 = 113829452;

    t29 = (x137<=((x138*x139)&x140));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x141 = 9333U;
	int64_t x142 = -127218738LL;
	int32_t t30 = -1;

    t30 = (x141<=((x142*x143)&x144));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x145 = 1028LLU;
	int8_t x146 = -1;
	uint64_t x147 = UINT64_MAX;
	int8_t x148 = -6;
	static int32_t t31 = 28894;

    t31 = (x145<=((x146*x147)&x148));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x149 = INT16_MIN;
	uint16_t x150 = 115U;
	int8_t x151 = -1;
	static int64_t x152 = INT64_MIN;
	static volatile int32_t t32 = -13163;

    t32 = (x149<=((x150*x151)&x152));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint32_t x154 = UINT32_MAX;
	uint64_t x155 = 9002924758LLU;
	volatile int32_t t33 = 3875;

    t33 = (x153<=((x154*x155)&x156));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x157 = INT64_MIN;
	int8_t x158 = -1;
	uint64_t x159 = UINT64_MAX;
	int32_t x160 = INT32_MIN;
	static int32_t t34 = -87323391;

    t34 = (x157<=((x158*x159)&x160));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x165 = INT16_MAX;
	uint16_t x166 = 229U;
	uint32_t x167 = 115146U;
	int16_t x168 = 6;
	int32_t t35 = -50143;

    t35 = (x165<=((x166*x167)&x168));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x169 = -1;
	uint32_t x170 = 311987300U;
	int8_t x171 = -1;
	int64_t x172 = -979808223LL;
	static volatile int32_t t36 = -42410;

    t36 = (x169<=((x170*x171)&x172));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x173 = 110U;
	uint16_t x174 = 1U;
	volatile int16_t x175 = -12706;
	volatile int8_t x176 = -1;
	static volatile int32_t t37 = -140344982;

    t37 = (x173<=((x174*x175)&x176));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x177 = INT8_MIN;
	int8_t x178 = -26;
	int8_t x179 = INT8_MAX;
	static uint32_t x180 = 1044558985U;
	int32_t t38 = -451;

    t38 = (x177<=((x178*x179)&x180));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x181 = -1640LL;
	int64_t x182 = INT64_MAX;
	int16_t x184 = INT16_MIN;
	volatile int32_t t39 = -1484;

    t39 = (x181<=((x182*x183)&x184));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x185 = UINT64_MAX;
	int16_t x186 = 0;
	int8_t x187 = -1;
	int32_t x188 = INT32_MIN;
	volatile int32_t t40 = 33901335;

    t40 = (x185<=((x186*x187)&x188));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x193 = INT16_MIN;
	volatile uint64_t x194 = UINT64_MAX;
	int32_t x195 = INT32_MIN;
	static uint8_t x196 = UINT8_MAX;

    t41 = (x193<=((x194*x195)&x196));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x201 = -1;
	int32_t x202 = INT32_MIN;
	static uint64_t x204 = 16070629205LLU;
	int32_t t42 = 188;

    t42 = (x201<=((x202*x203)&x204));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x209 = 15595935020LL;
	uint64_t x210 = UINT64_MAX;
	volatile int8_t x212 = -1;
	volatile int32_t t43 = 20882558;

    t43 = (x209<=((x210*x211)&x212));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x221 = -1;
	int8_t x222 = INT8_MAX;
	volatile uint16_t x223 = 1602U;
	static volatile int32_t t44 = -831;

    t44 = (x221<=((x222*x223)&x224));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x229 = INT8_MIN;
	uint16_t x230 = UINT16_MAX;
	int8_t x231 = INT8_MIN;
	int32_t x232 = -10;
	int32_t t45 = -1;

    t45 = (x229<=((x230*x231)&x232));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x233 = INT64_MIN;
	uint16_t x234 = 16U;
	static uint16_t x235 = 37U;
	int32_t x236 = 998285;
	int32_t t46 = -17397374;

    t46 = (x233<=((x234*x235)&x236));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x237 = 6;
	int8_t x238 = INT8_MAX;
	uint64_t x239 = 37386LLU;

    t47 = (x237<=((x238*x239)&x240));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x242 = 41;
	uint32_t x244 = 5173U;

    t48 = (x241<=((x242*x243)&x244));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x245 = -20;
	static volatile int8_t x246 = INT8_MIN;
	int32_t x247 = 12545;
	uint8_t x248 = 0U;
	static int32_t t49 = 1;

    t49 = (x245<=((x246*x247)&x248));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x249 = INT8_MAX;
	uint64_t x250 = 6946574666520LLU;
	static int64_t x251 = INT64_MIN;
	volatile int32_t x252 = INT32_MAX;

    t50 = (x249<=((x250*x251)&x252));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x253 = -60536823717527LL;
	int64_t x254 = INT64_MIN;
	static uint64_t x255 = 4LLU;
	int8_t x256 = INT8_MIN;
	int32_t t51 = 1;

    t51 = (x253<=((x254*x255)&x256));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x258 = 17U;
	uint16_t x259 = 947U;
	uint32_t x260 = 44U;
	int32_t t52 = -376;

    t52 = (x257<=((x258*x259)&x260));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x261 = -1;
	int8_t x262 = 0;
	int64_t x263 = INT64_MAX;
	volatile int32_t t53 = 2;

    t53 = (x261<=((x262*x263)&x264));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x265 = INT64_MIN;
	uint64_t x266 = 977826976613904630LLU;
	uint64_t x268 = 387LLU;
	int32_t t54 = -23706;

    t54 = (x265<=((x266*x267)&x268));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x269 = -1;
	int16_t x270 = INT16_MIN;
	volatile int8_t x272 = -7;
	int32_t t55 = 1;

    t55 = (x269<=((x270*x271)&x272));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x275 = INT8_MIN;
	volatile int8_t x276 = 0;

    t56 = (x273<=((x274*x275)&x276));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x277 = UINT8_MAX;
	int16_t x278 = 366;
	volatile int64_t x279 = -1LL;
	volatile int32_t t57 = 16;

    t57 = (x277<=((x278*x279)&x280));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x285 = UINT64_MAX;
	uint16_t x286 = 4386U;
	uint32_t x287 = 174446U;
	uint8_t x288 = 5U;
	volatile int32_t t58 = 210;

    t58 = (x285<=((x286*x287)&x288));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x290 = UINT32_MAX;
	volatile uint8_t x291 = UINT8_MAX;
	int32_t t59 = 186703;

    t59 = (x289<=((x290*x291)&x292));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x293 = 3;
	volatile int16_t x294 = -1;
	uint64_t x295 = UINT64_MAX;
	int16_t x296 = INT16_MIN;
	static volatile int32_t t60 = 1;

    t60 = (x293<=((x294*x295)&x296));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x297 = -50;
	int8_t x298 = -1;
	uint32_t x299 = UINT32_MAX;
	int64_t x300 = INT64_MIN;
	int32_t t61 = 5843;

    t61 = (x297<=((x298*x299)&x300));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint8_t x305 = 1U;
	static uint32_t x306 = 70U;
	volatile uint32_t x307 = UINT32_MAX;
	static int64_t x308 = -8265902443LL;
	int32_t t62 = -408;

    t62 = (x305<=((x306*x307)&x308));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x309 = -1;
	int64_t x310 = -389792957267LL;
	volatile int16_t x311 = INT16_MIN;
	static int8_t x312 = INT8_MIN;
	volatile int32_t t63 = 8404794;

    t63 = (x309<=((x310*x311)&x312));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x321 = -1;
	int8_t x322 = 1;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t64 = 774982803;

    t64 = (x321<=((x322*x323)&x324));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x326 = 658U;
	static uint16_t x327 = 7419U;
	int32_t t65 = 115607;

    t65 = (x325<=((x326*x327)&x328));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x337 = 19U;
	uint8_t x338 = 60U;
	int8_t x339 = INT8_MIN;
	uint32_t x340 = 1122487U;
	static volatile int32_t t66 = 3;

    t66 = (x337<=((x338*x339)&x340));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x341 = 20862669895132531LLU;
	uint32_t x342 = 1U;
	int8_t x343 = -1;
	int16_t x344 = INT16_MAX;
	int32_t t67 = -11;

    t67 = (x341<=((x342*x343)&x344));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint8_t x349 = 86U;
	int64_t x351 = -1LL;
	uint32_t x352 = UINT32_MAX;
	volatile int32_t t68 = -30;

    t68 = (x349<=((x350*x351)&x352));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x353 = INT32_MAX;
	int8_t x355 = -7;
	static int16_t x356 = INT16_MIN;
	volatile int32_t t69 = 189;

    t69 = (x353<=((x354*x355)&x356));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x361 = -1;
	int8_t x362 = -34;
	int32_t x363 = 1;
	volatile int64_t x364 = 280691337884783960LL;
	volatile int32_t t70 = -78;

    t70 = (x361<=((x362*x363)&x364));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x366 = 50U;
	int16_t x367 = INT16_MIN;
	volatile uint64_t x368 = 42LLU;
	static volatile int32_t t71 = 1152;

    t71 = (x365<=((x366*x367)&x368));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x369 = -1;
	static uint8_t x370 = 34U;
	int64_t x372 = INT64_MIN;
	volatile int32_t t72 = -5098;

    t72 = (x369<=((x370*x371)&x372));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x377 = 1;
	uint16_t x378 = 3607U;
	static uint8_t x379 = 0U;
	uint32_t x380 = 75056458U;
	int32_t t73 = 1;

    t73 = (x377<=((x378*x379)&x380));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x385 = INT64_MAX;
	int8_t x386 = -1;
	volatile int32_t x387 = -1;
	int8_t x388 = INT8_MIN;
	volatile int32_t t74 = -4;

    t74 = (x385<=((x386*x387)&x388));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x393 = -72605404246801595LL;
	static int8_t x394 = INT8_MAX;
	int8_t x395 = -1;
	volatile int32_t x396 = -1447881;

    t75 = (x393<=((x394*x395)&x396));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x397 = -1;
	static uint8_t x399 = 74U;
	int8_t x400 = INT8_MIN;
	int32_t t76 = -16423957;

    t76 = (x397<=((x398*x399)&x400));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x401 = 0U;
	static volatile int16_t x402 = INT16_MIN;
	int8_t x403 = -1;
	int16_t x404 = -1;
	volatile int32_t t77 = -1426786;

    t77 = (x401<=((x402*x403)&x404));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x405 = UINT8_MAX;
	static volatile uint16_t x406 = UINT16_MAX;
	int64_t x407 = -1LL;
	static int16_t x408 = INT16_MIN;

    t78 = (x405<=((x406*x407)&x408));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x410 = UINT64_MAX;
	static volatile int16_t x412 = INT16_MIN;
	static volatile int32_t t79 = -8806427;

    t79 = (x409<=((x410*x411)&x412));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x417 = 62U;
	int16_t x418 = INT16_MIN;
	int8_t x420 = 0;
	static int32_t t80 = 30477749;

    t80 = (x417<=((x418*x419)&x420));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x421 = INT32_MIN;
	int8_t x422 = INT8_MIN;
	int16_t x423 = 1600;
	int64_t x424 = INT64_MAX;
	int32_t t81 = -3650;

    t81 = (x421<=((x422*x423)&x424));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x425 = INT16_MIN;
	uint32_t x426 = 2U;
	uint16_t x427 = UINT16_MAX;
	uint64_t x428 = UINT64_MAX;

    t82 = (x425<=((x426*x427)&x428));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x433 = INT32_MIN;
	int8_t x434 = -3;
	static uint32_t x435 = 0U;
	uint32_t x436 = 59U;
	volatile int32_t t83 = 0;

    t83 = (x433<=((x434*x435)&x436));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x437 = INT64_MIN;
	uint16_t x438 = UINT16_MAX;
	int16_t x439 = -1;
	uint8_t x440 = 92U;
	static volatile int32_t t84 = 5;

    t84 = (x437<=((x438*x439)&x440));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x441 = UINT32_MAX;
	volatile int16_t x443 = -94;
	uint8_t x444 = UINT8_MAX;

    t85 = (x441<=((x442*x443)&x444));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x449 = UINT32_MAX;
	volatile int64_t x450 = -1LL;
	uint8_t x451 = UINT8_MAX;
	volatile int32_t t86 = 36;

    t86 = (x449<=((x450*x451)&x452));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x453 = 14989288LLU;
	uint8_t x454 = 1U;
	uint64_t x456 = UINT64_MAX;
	volatile int32_t t87 = 4800437;

    t87 = (x453<=((x454*x455)&x456));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x458 = -1;
	int8_t x459 = INT8_MIN;
	int16_t x460 = INT16_MIN;
	volatile int32_t t88 = 219;

    t88 = (x457<=((x458*x459)&x460));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x461 = INT8_MAX;
	static int64_t x463 = -33321LL;

    t89 = (x461<=((x462*x463)&x464));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x465 = 19539287392678005LLU;
	uint64_t x466 = 334133LLU;
	int32_t x467 = INT32_MIN;
	static int16_t x468 = -6263;
	int32_t t90 = -10007637;

    t90 = (x465<=((x466*x467)&x468));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x481 = UINT64_MAX;
	uint64_t x482 = 1010648297264867LLU;
	int32_t x483 = -3;
	int16_t x484 = -1;
	int32_t t91 = -176;

    t91 = (x481<=((x482*x483)&x484));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x501 = INT16_MAX;
	int8_t x502 = INT8_MIN;
	static uint32_t x503 = UINT32_MAX;
	int16_t x504 = 1;
	int32_t t92 = 65;

    t92 = (x501<=((x502*x503)&x504));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x505 = INT8_MAX;
	uint64_t x506 = 15585677490804323LLU;
	int16_t x507 = INT16_MIN;
	volatile int32_t t93 = 173;

    t93 = (x505<=((x506*x507)&x508));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x509 = INT64_MIN;
	uint64_t x510 = 368581476130LLU;
	static uint8_t x511 = UINT8_MAX;
	volatile int32_t t94 = -191368457;

    t94 = (x509<=((x510*x511)&x512));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x513 = -1;
	int8_t x514 = INT8_MIN;
	static uint16_t x515 = UINT16_MAX;
	int64_t x516 = INT64_MAX;
	volatile int32_t t95 = 28329211;

    t95 = (x513<=((x514*x515)&x516));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x517 = 5;
	uint8_t x519 = 29U;
	int16_t x520 = -13;
	volatile int32_t t96 = 42508606;

    t96 = (x517<=((x518*x519)&x520));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x521 = -725315LL;
	volatile int16_t x522 = -3;
	int8_t x523 = -1;
	int64_t x524 = -1LL;
	int32_t t97 = 74;

    t97 = (x521<=((x522*x523)&x524));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x525 = -1;
	static volatile uint64_t x526 = 2LLU;
	volatile int16_t x527 = INT16_MIN;
	volatile int32_t t98 = 0;

    t98 = (x525<=((x526*x527)&x528));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x533 = INT16_MAX;
	int8_t x534 = INT8_MAX;
	int8_t x535 = 1;
	volatile int16_t x536 = INT16_MAX;
	volatile int32_t t99 = 728214638;

    t99 = (x533<=((x534*x535)&x536));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x537 = INT16_MIN;
	static int32_t x538 = -1;
	int8_t x539 = INT8_MIN;
	int32_t x540 = 413721;
	int32_t t100 = 13;

    t100 = (x537<=((x538*x539)&x540));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x541 = UINT16_MAX;
	static volatile int8_t x542 = -2;
	uint64_t x543 = 116389LLU;
	static int16_t x544 = -1;
	volatile int32_t t101 = -6954;

    t101 = (x541<=((x542*x543)&x544));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x545 = UINT32_MAX;
	int32_t x546 = -1;
	int32_t x547 = -1;
	int8_t x548 = INT8_MIN;
	volatile int32_t t102 = -159842574;

    t102 = (x545<=((x546*x547)&x548));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x550 = 4631972;
	int8_t x551 = INT8_MIN;

    t103 = (x549<=((x550*x551)&x552));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x554 = UINT64_MAX;
	int16_t x555 = -1;
	volatile int32_t t104 = -18;

    t104 = (x553<=((x554*x555)&x556));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t t105 = 0;

    t105 = (x557<=((x558*x559)&x560));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x562 = -1;
	volatile int64_t x563 = -19405813401LL;
	int8_t x564 = -1;
	static int32_t t106 = -140901;

    t106 = (x561<=((x562*x563)&x564));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x569 = 560418965U;
	uint8_t x570 = 0U;
	uint64_t x571 = UINT64_MAX;
	uint8_t x572 = 0U;
	static int32_t t107 = 665;

    t107 = (x569<=((x570*x571)&x572));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x577 = -323412LL;
	uint8_t x579 = 2U;
	int32_t x580 = -1;

    t108 = (x577<=((x578*x579)&x580));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x581 = INT8_MAX;
	int16_t x582 = INT16_MAX;
	int64_t x583 = -114153454LL;
	volatile uint64_t x584 = 30187154780015LLU;
	volatile int32_t t109 = -31923090;

    t109 = (x581<=((x582*x583)&x584));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint16_t x585 = 2244U;
	int64_t x586 = -3234536LL;
	static uint32_t x588 = UINT32_MAX;
	volatile int32_t t110 = -25996;

    t110 = (x585<=((x586*x587)&x588));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x589 = 806077396LLU;
	volatile int64_t x591 = -1LL;
	volatile uint32_t x592 = UINT32_MAX;

    t111 = (x589<=((x590*x591)&x592));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x594 = UINT16_MAX;
	int16_t x595 = -11245;
	int8_t x596 = 2;
	int32_t t112 = 9625877;

    t112 = (x593<=((x594*x595)&x596));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x597 = 118;
	volatile int8_t x598 = INT8_MAX;
	int32_t x600 = -1;
	int32_t t113 = 114343;

    t113 = (x597<=((x598*x599)&x600));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x601 = 6U;
	static int8_t x603 = -1;
	static int32_t x604 = INT32_MAX;
	int32_t t114 = 3;

    t114 = (x601<=((x602*x603)&x604));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x605 = 0LL;
	static int8_t x606 = -11;
	volatile int32_t t115 = 227210;

    t115 = (x605<=((x606*x607)&x608));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x610 = 934186LLU;
	int16_t x611 = INT16_MIN;
	int32_t x612 = -14545956;
	static int32_t t116 = -225;

    t116 = (x609<=((x610*x611)&x612));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x614 = 898U;
	uint16_t x615 = 2379U;
	volatile int64_t x616 = -1LL;
	int32_t t117 = 100174;

    t117 = (x613<=((x614*x615)&x616));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x617 = INT16_MAX;
	uint64_t x618 = 412811391736352LLU;
	int8_t x619 = INT8_MIN;
	static int32_t t118 = 0;

    t118 = (x617<=((x618*x619)&x620));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x621 = UINT32_MAX;
	uint64_t x622 = 203LLU;
	volatile int32_t x623 = INT32_MAX;
	int64_t x624 = 18374LL;
	static volatile int32_t t119 = 171194;

    t119 = (x621<=((x622*x623)&x624));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x631 = 6976LL;

    t120 = (x629<=((x630*x631)&x632));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x633 = UINT64_MAX;
	int8_t x634 = -1;
	uint8_t x635 = 54U;
	static int64_t x636 = INT64_MAX;
	int32_t t121 = -1942002;

    t121 = (x633<=((x634*x635)&x636));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x637 = -50;
	uint32_t x638 = 1987757888U;
	volatile int16_t x639 = -12;
	static int8_t x640 = -7;
	int32_t t122 = -502374646;

    t122 = (x637<=((x638*x639)&x640));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x649 = 24600U;
	uint32_t x650 = UINT32_MAX;
	int8_t x651 = INT8_MAX;
	int64_t x652 = -1LL;

    t123 = (x649<=((x650*x651)&x652));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x653 = 2988702855LLU;
	int32_t x654 = 84897;
	int64_t x655 = -1LL;
	static volatile int8_t x656 = INT8_MAX;
	volatile int32_t t124 = -20767137;

    t124 = (x653<=((x654*x655)&x656));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x657 = -1;
	volatile uint8_t x658 = 6U;
	int64_t x659 = -248LL;
	volatile int32_t t125 = 1354996;

    t125 = (x657<=((x658*x659)&x660));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x661 = -9641802;
	uint32_t x662 = 642805U;
	uint64_t x663 = UINT64_MAX;
	int32_t t126 = -250;

    t126 = (x661<=((x662*x663)&x664));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x665 = 178;
	uint32_t x666 = 124503740U;
	int64_t x667 = 2LL;
	int64_t x668 = -6447923855LL;
	int32_t t127 = -3333;

    t127 = (x665<=((x666*x667)&x668));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x669 = 708739930LL;
	static int8_t x670 = INT8_MAX;
	int16_t x671 = INT16_MIN;
	uint32_t x672 = 460U;
	volatile int32_t t128 = -30070315;

    t128 = (x669<=((x670*x671)&x672));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x673 = 103U;
	uint8_t x674 = UINT8_MAX;
	uint8_t x675 = 27U;
	volatile int32_t x676 = 327;
	int32_t t129 = -2;

    t129 = (x673<=((x674*x675)&x676));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x677 = 11466U;
	int32_t x678 = INT32_MIN;
	volatile uint16_t x680 = 1315U;
	int32_t t130 = -3605;

    t130 = (x677<=((x678*x679)&x680));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x681 = -86888105LL;
	uint64_t x682 = 65190703374LLU;
	volatile uint64_t x683 = UINT64_MAX;
	int32_t t131 = 5785;

    t131 = (x681<=((x682*x683)&x684));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x685 = INT32_MAX;
	volatile int64_t x686 = 5399001309788802LL;
	int16_t x687 = -1;
	static volatile int32_t t132 = -1059393179;

    t132 = (x685<=((x686*x687)&x688));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x693 = -3;
	uint64_t x694 = 582913956LLU;
	static int64_t x695 = 8561276021220LL;
	uint16_t x696 = UINT16_MAX;
	volatile int32_t t133 = 13320160;

    t133 = (x693<=((x694*x695)&x696));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x697 = INT8_MIN;
	uint16_t x698 = 1U;

    t134 = (x697<=((x698*x699)&x700));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x701 = INT8_MIN;
	int32_t x702 = 580530;
	static uint64_t x703 = UINT64_MAX;

    t135 = (x701<=((x702*x703)&x704));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x707 = INT16_MIN;
	int64_t x708 = 631829LL;

    t136 = (x705<=((x706*x707)&x708));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x713 = INT32_MAX;
	static uint64_t x714 = 63217153040LLU;
	int32_t x715 = -1;
	volatile int16_t x716 = 25;
	volatile int32_t t137 = 0;

    t137 = (x713<=((x714*x715)&x716));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x721 = UINT64_MAX;
	uint16_t x723 = 4102U;
	int64_t x724 = INT64_MIN;
	int32_t t138 = 59413;

    t138 = (x721<=((x722*x723)&x724));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x725 = -431322;
	static volatile int16_t x727 = INT16_MAX;
	static int32_t x728 = INT32_MIN;
	static int32_t t139 = -95990;

    t139 = (x725<=((x726*x727)&x728));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x729 = 1LLU;
	volatile int64_t x730 = -1LL;
	int32_t t140 = -185;

    t140 = (x729<=((x730*x731)&x732));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x737 = 518U;
	int64_t x739 = INT64_MIN;
	int8_t x740 = -1;

    t141 = (x737<=((x738*x739)&x740));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x741 = INT16_MIN;
	int8_t x743 = -1;
	static int8_t x744 = INT8_MIN;

    t142 = (x741<=((x742*x743)&x744));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x745 = 202U;
	int32_t x746 = -4660;
	uint8_t x747 = 26U;
	static volatile int8_t x748 = INT8_MIN;

    t143 = (x745<=((x746*x747)&x748));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x749 = 0;
	int64_t x750 = -104698087350518LL;
	static int8_t x751 = -1;

    t144 = (x749<=((x750*x751)&x752));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x754 = 4070256LLU;
	static uint64_t x755 = 24281326943LLU;
	int32_t t145 = 11330583;

    t145 = (x753<=((x754*x755)&x756));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int64_t x757 = INT64_MAX;
	int8_t x758 = INT8_MAX;
	uint64_t x759 = UINT64_MAX;
	volatile int32_t t146 = 2968527;

    t146 = (x757<=((x758*x759)&x760));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x765 = UINT32_MAX;
	volatile int64_t x766 = 16844657770807LL;
	static uint32_t x768 = UINT32_MAX;
	int32_t t147 = 5390;

    t147 = (x765<=((x766*x767)&x768));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x769 = INT32_MIN;
	static volatile int8_t x770 = INT8_MIN;
	uint16_t x771 = UINT16_MAX;
	uint64_t x772 = 1824825348LLU;
	volatile int32_t t148 = 1;

    t148 = (x769<=((x770*x771)&x772));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x773 = INT8_MAX;
	int16_t x775 = INT16_MIN;
	int16_t x776 = 6465;

    t149 = (x773<=((x774*x775)&x776));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x777 = -1042326615147216LL;
	volatile int8_t x778 = INT8_MAX;
	static int64_t x779 = -3LL;
	uint64_t x780 = UINT64_MAX;
	int32_t t150 = 86;

    t150 = (x777<=((x778*x779)&x780));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int8_t x781 = -3;
	uint64_t x782 = 18643932307LLU;
	int16_t x783 = INT16_MIN;
	volatile uint8_t x784 = UINT8_MAX;
	static int32_t t151 = -5930199;

    t151 = (x781<=((x782*x783)&x784));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x787 = 23267U;

    t152 = (x785<=((x786*x787)&x788));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x789 = INT16_MIN;
	volatile int16_t x790 = -4;
	uint16_t x791 = 98U;
	static uint8_t x792 = 71U;

    t153 = (x789<=((x790*x791)&x792));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x793 = -1;
	int32_t x794 = -2986;
	volatile uint64_t x795 = UINT64_MAX;
	volatile int8_t x796 = INT8_MIN;
	static int32_t t154 = -49516;

    t154 = (x793<=((x794*x795)&x796));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x799 = -20;
	volatile int64_t x800 = -15291594282267LL;
	int32_t t155 = -4566;

    t155 = (x797<=((x798*x799)&x800));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x801 = -26;
	int8_t x802 = 0;
	int64_t x803 = -1LL;
	static uint8_t x804 = 26U;
	volatile int32_t t156 = 5299112;

    t156 = (x801<=((x802*x803)&x804));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x805 = -1;
	static uint64_t x807 = 15211604466278LLU;
	int32_t t157 = -29329;

    t157 = (x805<=((x806*x807)&x808));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x809 = INT8_MIN;
	volatile int64_t x810 = -1LL;
	static int8_t x811 = -1;
	int8_t x812 = INT8_MIN;
	int32_t t158 = 37;

    t158 = (x809<=((x810*x811)&x812));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x821 = INT32_MIN;
	int16_t x822 = -1;
	int16_t x823 = INT16_MIN;
	int16_t x824 = INT16_MAX;
	static int32_t t159 = 55688;

    t159 = (x821<=((x822*x823)&x824));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x826 = -1LL;
	static uint16_t x827 = 279U;
	static int64_t x828 = INT64_MIN;
	volatile int32_t t160 = -1853;

    t160 = (x825<=((x826*x827)&x828));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x829 = INT8_MIN;
	static int64_t x830 = 138698715466732LL;
	int16_t x831 = -1;
	uint64_t x832 = 9LLU;

    t161 = (x829<=((x830*x831)&x832));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x841 = -1;
	volatile int16_t x842 = 1;
	static int8_t x843 = 21;
	uint64_t x844 = 54LLU;

    t162 = (x841<=((x842*x843)&x844));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x845 = 0;
	volatile int16_t x846 = -485;
	volatile int8_t x847 = -5;
	static int64_t x848 = INT64_MIN;

    t163 = (x845<=((x846*x847)&x848));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x849 = -24;
	uint64_t x850 = UINT64_MAX;
	int64_t x851 = -110422407362074LL;
	int64_t x852 = INT64_MIN;
	volatile int32_t t164 = -41;

    t164 = (x849<=((x850*x851)&x852));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x854 = UINT64_MAX;
	uint32_t x855 = 108807U;
	volatile uint32_t x856 = 19153U;
	int32_t t165 = -20;

    t165 = (x853<=((x854*x855)&x856));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x857 = 1U;
	static int32_t x858 = -1;
	static volatile int16_t x859 = -11781;
	volatile int16_t x860 = 1;
	volatile int32_t t166 = 7175;

    t166 = (x857<=((x858*x859)&x860));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x865 = UINT8_MAX;
	uint16_t x866 = 0U;
	volatile int64_t x867 = -1LL;
	uint8_t x868 = 0U;
	int32_t t167 = 1;

    t167 = (x865<=((x866*x867)&x868));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x869 = INT8_MAX;
	int8_t x870 = -1;
	static int64_t x871 = 0LL;
	int8_t x872 = INT8_MAX;
	volatile int32_t t168 = -1178;

    t168 = (x869<=((x870*x871)&x872));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x874 = 29;
	volatile int16_t x875 = 3;
	static int16_t x876 = -1;
	volatile int32_t t169 = -33;

    t169 = (x873<=((x874*x875)&x876));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x881 = 37U;
	static int16_t x882 = -1;
	volatile int16_t x884 = -2001;
	volatile int32_t t170 = -31946467;

    t170 = (x881<=((x882*x883)&x884));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x885 = -1LL;
	uint32_t x886 = 64243781U;
	uint64_t x887 = 29336LLU;
	int8_t x888 = INT8_MIN;
	int32_t t171 = 649092738;

    t171 = (x885<=((x886*x887)&x888));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x889 = 47U;
	int64_t x890 = INT64_MAX;
	int32_t t172 = 21971019;

    t172 = (x889<=((x890*x891)&x892));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x893 = 18021U;
	static uint64_t x895 = 23199927826310983LLU;
	int32_t x896 = -1;
	int32_t t173 = -6;

    t173 = (x893<=((x894*x895)&x896));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x901 = UINT32_MAX;
	static volatile uint8_t x902 = 2U;
	static int16_t x904 = 1;
	int32_t t174 = -3;

    t174 = (x901<=((x902*x903)&x904));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x905 = -1;
	int16_t x906 = -10;
	static int8_t x907 = -2;
	int32_t t175 = -22440;

    t175 = (x905<=((x906*x907)&x908));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x909 = INT64_MIN;
	int16_t x910 = 1;
	uint32_t x911 = UINT32_MAX;
	int8_t x912 = INT8_MIN;
	int32_t t176 = -2401240;

    t176 = (x909<=((x910*x911)&x912));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x914 = INT8_MIN;
	uint32_t x915 = 1U;
	int16_t x916 = 2;
	static volatile int32_t t177 = -1;

    t177 = (x913<=((x914*x915)&x916));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x921 = -1;
	static uint64_t x922 = 286034453638922LLU;
	int16_t x923 = INT16_MIN;
	int32_t t178 = -587172474;

    t178 = (x921<=((x922*x923)&x924));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x925 = -1;
	static int8_t x926 = -7;
	static volatile uint16_t x927 = 2U;
	int16_t x928 = -1;
	int32_t t179 = 6;

    t179 = (x925<=((x926*x927)&x928));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x929 = INT64_MIN;
	volatile int16_t x931 = 6939;
	uint8_t x932 = 7U;
	volatile int32_t t180 = -3539297;

    t180 = (x929<=((x930*x931)&x932));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x933 = INT64_MAX;
	int16_t x934 = -1;
	uint32_t x935 = 2U;
	static int8_t x936 = -16;
	volatile int32_t t181 = 1218565;

    t181 = (x933<=((x934*x935)&x936));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x937 = UINT32_MAX;
	static int8_t x939 = INT8_MIN;
	volatile int16_t x940 = -1;

    t182 = (x937<=((x938*x939)&x940));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x941 = -1;
	int64_t x942 = INT64_MAX;
	uint64_t x943 = 83375852989055994LLU;
	int8_t x944 = -7;
	int32_t t183 = 1054;

    t183 = (x941<=((x942*x943)&x944));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x945 = INT64_MIN;
	int64_t x946 = -1LL;
	static int16_t x947 = INT16_MIN;
	int32_t x948 = INT32_MIN;
	static volatile int32_t t184 = -1;

    t184 = (x945<=((x946*x947)&x948));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x954 = INT64_MIN;
	uint8_t x955 = 1U;
	static int32_t t185 = 2985;

    t185 = (x953<=((x954*x955)&x956));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x957 = UINT8_MAX;
	static uint16_t x958 = 1692U;
	static int16_t x959 = -1;
	uint16_t x960 = 1935U;
	int32_t t186 = -66720;

    t186 = (x957<=((x958*x959)&x960));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x961 = 2;
	static volatile int16_t x962 = -1;
	volatile int16_t x963 = -1;
	int32_t x964 = -1;
	volatile int32_t t187 = -34;

    t187 = (x961<=((x962*x963)&x964));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x965 = INT32_MIN;
	uint8_t x966 = 9U;
	int64_t x967 = -10207714661900282LL;
	int32_t x968 = 255;
	static volatile int32_t t188 = 3;

    t188 = (x965<=((x966*x967)&x968));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x969 = INT64_MIN;
	int16_t x970 = -2;
	int8_t x971 = INT8_MAX;
	int16_t x972 = 61;
	volatile int32_t t189 = 203472035;

    t189 = (x969<=((x970*x971)&x972));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x973 = 12;
	int32_t x974 = -255654680;
	volatile int64_t x975 = -13471424LL;

    t190 = (x973<=((x974*x975)&x976));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x981 = UINT8_MAX;
	uint8_t x982 = UINT8_MAX;
	int16_t x983 = INT16_MIN;
	int8_t x984 = -1;
	int32_t t191 = 949;

    t191 = (x981<=((x982*x983)&x984));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x985 = 2U;
	uint16_t x986 = 6075U;

    t192 = (x985<=((x986*x987)&x988));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x989 = 24LL;
	int32_t x990 = INT32_MIN;
	volatile int64_t x991 = -1LL;
	static volatile uint8_t x992 = 27U;
	int32_t t193 = -908;

    t193 = (x989<=((x990*x991)&x992));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x997 = INT8_MAX;
	int8_t x999 = -1;
	volatile uint16_t x1000 = UINT16_MAX;
	static int32_t t194 = 1;

    t194 = (x997<=((x998*x999)&x1000));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1001 = INT64_MAX;
	uint64_t x1002 = UINT64_MAX;
	uint32_t x1003 = UINT32_MAX;
	uint16_t x1004 = UINT16_MAX;
	volatile int32_t t195 = 278326195;

    t195 = (x1001<=((x1002*x1003)&x1004));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1005 = 6448U;
	uint64_t x1007 = UINT64_MAX;
	int8_t x1008 = 3;
	int32_t t196 = -6;

    t196 = (x1005<=((x1006*x1007)&x1008));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1009 = INT16_MIN;
	uint32_t x1012 = 217715U;
	volatile int32_t t197 = -123080932;

    t197 = (x1009<=((x1010*x1011)&x1012));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1013 = 18315U;
	uint64_t x1014 = UINT64_MAX;
	static int32_t x1015 = INT32_MAX;
	int16_t x1016 = INT16_MIN;
	volatile int32_t t198 = 195;

    t198 = (x1013<=((x1014*x1015)&x1016));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1017 = INT16_MAX;
	static int8_t x1018 = INT8_MIN;
	uint8_t x1019 = 28U;
	uint8_t x1020 = 0U;
	volatile int32_t t199 = -18;

    t199 = (x1017<=((x1018*x1019)&x1020));

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

