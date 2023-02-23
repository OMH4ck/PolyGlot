
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

static uint32_t x1 = UINT32_MAX;
volatile uint32_t x5 = 74201U;
volatile uint8_t x6 = 93U;
static uint8_t x8 = 9U;
volatile uint64_t t3 = 2089LLU;
uint64_t t4 = 3101827838LLU;
uint16_t x22 = 5581U;
static int64_t t6 = -87LL;
uint64_t x30 = UINT64_MAX;
static int64_t t9 = -167897613986721321LL;
static volatile int8_t x41 = INT8_MAX;
uint64_t x45 = UINT64_MAX;
uint16_t x48 = UINT16_MAX;
static volatile uint64_t t11 = 164783889588LLU;
int64_t x49 = INT64_MIN;
uint16_t x53 = 1U;
static int8_t x57 = INT8_MIN;
volatile uint8_t x60 = 97U;
int64_t x62 = INT64_MIN;
int16_t x64 = -1;
int32_t x70 = INT32_MAX;
volatile int16_t x71 = INT16_MIN;
uint16_t x75 = 0U;
int32_t x78 = INT32_MIN;
uint32_t x79 = UINT32_MAX;
int16_t x82 = INT16_MIN;
int64_t x103 = -1LL;
static volatile int16_t x108 = -1;
static int16_t x122 = INT16_MAX;
static volatile uint32_t t30 = 608737U;
volatile uint64_t x129 = UINT64_MAX;
uint32_t t33 = 198U;
int8_t x137 = -1;
uint16_t x140 = 258U;
static int32_t t35 = -1;
static volatile uint32_t x158 = 30209U;
static volatile uint16_t x164 = 5U;
uint64_t t39 = 22192456718151579LLU;
int16_t x165 = INT16_MIN;
int16_t x166 = INT16_MAX;
uint8_t x182 = 0U;
int8_t x185 = INT8_MAX;
int8_t x188 = INT8_MIN;
uint32_t x195 = UINT32_MAX;
int64_t x196 = INT64_MIN;
volatile int64_t x197 = INT64_MAX;
static uint16_t x200 = 47U;
int64_t x203 = -1LL;
volatile int32_t x204 = INT32_MIN;
volatile int32_t t51 = 16203;
int32_t x223 = INT32_MIN;
int16_t x236 = INT16_MIN;
int16_t x244 = INT16_MIN;
volatile int32_t t59 = 21906;
static int16_t x246 = -1;
int16_t x247 = INT16_MIN;
int32_t x249 = INT32_MAX;
static int32_t t61 = -178;
uint8_t x253 = UINT8_MAX;
static uint8_t x258 = 7U;
int32_t t64 = -79;
uint64_t x273 = 607265637LLU;
volatile uint16_t x275 = UINT16_MAX;
uint16_t x279 = 1423U;
static uint64_t x281 = 489642070LLU;
volatile int64_t x284 = INT64_MIN;
static volatile int64_t x286 = INT64_MAX;
uint32_t x295 = 786U;
int16_t x299 = INT16_MIN;
volatile int32_t x302 = INT32_MIN;
int32_t t75 = 114700378;
uint8_t x319 = 3U;
volatile int8_t x320 = INT8_MIN;
uint32_t x323 = 328U;
uint64_t x326 = UINT64_MAX;
int16_t x338 = INT16_MIN;
uint16_t x340 = 35U;
int8_t x341 = INT8_MIN;
int8_t x345 = INT8_MIN;
uint16_t x346 = 119U;
uint64_t x351 = UINT64_MAX;
int64_t x355 = INT64_MIN;
int32_t x358 = -3791;
int32_t x361 = 1;
int16_t x371 = INT16_MIN;
int8_t x374 = INT8_MIN;
static uint16_t x378 = UINT16_MAX;
int16_t x385 = 181;
static int64_t x389 = 2LL;
int32_t x391 = INT32_MAX;
volatile int16_t x392 = -1;
static uint32_t x393 = 12555670U;
int64_t x394 = 217037LL;
int16_t x395 = 6013;
uint32_t t95 = 101558610U;
int16_t x397 = 4432;
uint32_t x402 = 3U;
uint64_t x404 = 3LLU;
volatile uint64_t t97 = 26347642525LLU;
int8_t x405 = INT8_MIN;
static volatile uint8_t x406 = UINT8_MAX;
volatile int32_t t100 = 14823331;
int16_t x417 = INT16_MAX;
int8_t x423 = INT8_MIN;
int8_t x429 = 7;
static int64_t x430 = -1LL;
volatile int32_t t104 = -512334;
int8_t x442 = -1;
int64_t x444 = -1LL;
int32_t t108 = 12468;
static int8_t x449 = INT8_MAX;
int64_t x452 = INT64_MAX;
volatile int64_t t110 = -307921097LL;
static int16_t x458 = INT16_MIN;
volatile uint16_t x459 = UINT16_MAX;
uint16_t x465 = 24793U;
volatile int64_t x473 = -7580218LL;
int8_t x476 = INT8_MIN;
volatile int64_t t115 = -17LL;
int32_t x479 = INT32_MAX;
static volatile int32_t x482 = INT32_MIN;
uint32_t t117 = 1U;
int32_t x486 = INT32_MAX;
uint64_t x491 = 7460383640761794858LLU;
static int32_t x492 = INT32_MAX;
int32_t x498 = INT32_MIN;
uint64_t x508 = UINT64_MAX;
uint32_t x520 = UINT32_MAX;
int32_t t127 = -2592152;
static int32_t x530 = 3297;
int32_t x532 = -9888825;
volatile int32_t t129 = 18291899;
int8_t x539 = 1;
volatile uint32_t x540 = UINT32_MAX;
volatile int64_t x543 = 77945901911865380LL;
uint32_t x544 = UINT32_MAX;
int8_t x549 = INT8_MAX;
uint64_t x550 = UINT64_MAX;
int8_t x557 = INT8_MIN;
volatile int32_t x560 = INT32_MIN;
int64_t x573 = INT64_MAX;
uint8_t x583 = 61U;
int8_t x586 = INT8_MAX;
int8_t x589 = -1;
volatile int64_t t145 = 1794552154LL;
int8_t x600 = INT8_MIN;
static uint64_t x606 = 43743014720038164LLU;
volatile int16_t x613 = -1;
uint16_t x614 = UINT16_MAX;
int8_t x616 = 3;
int32_t x624 = INT32_MAX;
static volatile uint16_t x634 = 687U;
uint32_t x639 = UINT32_MAX;
int8_t x641 = INT8_MAX;
int16_t x651 = 1;
volatile uint32_t t158 = 20631356U;
static int32_t x655 = -197735212;
volatile int32_t t159 = 56707;
int16_t x670 = INT16_MAX;
int8_t x675 = 0;
int32_t x676 = 100414;
int32_t t164 = 674701;
volatile int16_t x691 = INT16_MAX;
int8_t x700 = 29;
uint64_t x715 = 14420797867039LLU;
uint16_t x720 = 168U;
int8_t x733 = -2;
uint32_t x737 = 1349U;
int64_t x745 = INT64_MIN;
volatile int64_t x747 = INT64_MIN;
static volatile int64_t t182 = 15350291676180122LL;
static volatile int32_t x766 = INT32_MIN;
volatile int32_t t186 = 20;
int16_t x771 = INT16_MAX;
static uint32_t x772 = UINT32_MAX;
int32_t x773 = INT32_MIN;
volatile uint32_t t190 = 7U;
static int16_t x788 = INT16_MIN;
volatile int64_t t193 = -1054LL;
int64_t x799 = -298LL;
static uint32_t t194 = 0U;
uint8_t x806 = UINT8_MAX;
int8_t x808 = INT8_MIN;
int8_t x816 = -1;


void f0(void) {
    	uint8_t x2 = 0U;
	int64_t x3 = -657160403127716196LL;
	int16_t x4 = -654;
	uint32_t t0 = 4U;

    t0 = (x1&((x2==x3)%x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x7 = INT64_MIN;
	uint32_t t1 = 34594155U;

    t1 = (x5&((x6==x7)%x8));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MIN;
	volatile int16_t x10 = 7328;
	volatile int8_t x11 = INT8_MIN;
	volatile int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -65197;

    t2 = (x9&((x10==x11)%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 41LLU;
	int16_t x14 = -1;
	int64_t x15 = -945LL;
	int16_t x16 = -1617;

    t3 = (x13&((x14==x15)%x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 57637786LLU;
	int64_t x18 = INT64_MIN;
	int64_t x19 = -1LL;
	uint8_t x20 = UINT8_MAX;

    t4 = (x17&((x18==x19)%x20));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -10029LL;
	int64_t x23 = -803943907218236LL;
	uint32_t x24 = UINT32_MAX;
	static volatile int64_t t5 = -52106833770LL;

    t5 = (x21&((x22==x23)%x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int64_t x26 = INT64_MAX;
	static volatile uint16_t x27 = UINT16_MAX;
	int64_t x28 = -1LL;

    t6 = (x25&((x26==x27)%x28));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	volatile uint64_t x31 = 7625652404396LLU;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -871926;

    t7 = (x29&((x30==x31)%x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	uint32_t x34 = UINT32_MAX;
	int32_t x35 = -1;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 4677;

    t8 = (x33&((x34==x35)%x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	static uint32_t x38 = 12383U;
	int64_t x39 = -1LL;
	int32_t x40 = -1;

    t9 = (x37&((x38==x39)%x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x42 = 197557268LLU;
	static int32_t x43 = 1;
	int8_t x44 = INT8_MIN;
	int32_t t10 = -51712173;

    t10 = (x41&((x42==x43)%x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MIN;

    t11 = (x45&((x46==x47)%x48));

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x50 = 32216635U;
	int32_t x51 = INT32_MIN;
	uint16_t x52 = 1571U;
	int64_t t12 = -3659543LL;

    t12 = (x49&((x50==x51)%x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x54 = UINT16_MAX;
	static volatile int64_t x55 = INT64_MAX;
	static uint8_t x56 = 21U;
	static int32_t t13 = -1064310741;

    t13 = (x53&((x54==x55)%x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = INT64_MAX;
	uint64_t x59 = 25382880LLU;
	static int32_t t14 = 29562907;

    t14 = (x57&((x58==x59)%x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	int32_t x63 = 1640929;
	static volatile int32_t t15 = -330638;

    t15 = (x61&((x62==x63)%x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int32_t x66 = INT32_MAX;
	static uint8_t x67 = UINT8_MAX;
	static volatile int16_t x68 = INT16_MIN;
	int32_t t16 = -16225509;

    t16 = (x65&((x66==x67)%x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	static uint16_t x72 = 230U;
	int32_t t17 = -6;

    t17 = (x69&((x70==x71)%x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x73 = 84U;
	uint8_t x74 = 0U;
	uint8_t x76 = 4U;
	volatile int32_t t18 = -6668366;

    t18 = (x73&((x74==x75)%x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MAX;
	volatile int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -7929447;

    t19 = (x77&((x78==x79)%x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 705U;
	volatile uint8_t x83 = 52U;
	int8_t x84 = INT8_MAX;
	static volatile uint32_t t20 = 639264221U;

    t20 = (x81&((x82==x83)%x84));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x85 = 101LLU;
	int32_t x86 = -209774;
	static int16_t x87 = INT16_MIN;
	static int32_t x88 = -83929904;
	volatile uint64_t t21 = 2065623958LLU;

    t21 = (x85&((x86==x87)%x88));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	int32_t x90 = INT32_MIN;
	static int64_t x91 = -530112LL;
	static int32_t x92 = INT32_MAX;
	volatile int32_t t22 = -752;

    t22 = (x89&((x90==x91)%x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	int16_t x94 = 10;
	int32_t x95 = -1;
	static int64_t x96 = 157075LL;
	volatile int64_t t23 = 1157988LL;

    t23 = (x93&((x94==x95)%x96));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MAX;
	volatile uint32_t x98 = 213U;
	uint8_t x99 = 66U;
	static int8_t x100 = INT8_MIN;
	volatile int64_t t24 = 0LL;

    t24 = (x97&((x98==x99)%x100));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = -6;
	uint64_t x102 = 303809243592LLU;
	int16_t x104 = -107;
	int32_t t25 = 3;

    t25 = (x101&((x102==x103)%x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	int8_t x107 = -4;
	static volatile int32_t t26 = -88;

    t26 = (x105&((x106==x107)%x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -3810;
	volatile int64_t x110 = 6LL;
	int16_t x111 = 0;
	volatile int64_t x112 = 531406330LL;
	static volatile int64_t t27 = -19LL;

    t27 = (x109&((x110==x111)%x112));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x113 = 25U;
	volatile int16_t x114 = INT16_MIN;
	static int8_t x115 = INT8_MIN;
	static int16_t x116 = 6;
	volatile int32_t t28 = -13330;

    t28 = (x113&((x114==x115)%x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -1;
	int8_t x118 = 0;
	int64_t x119 = INT64_MIN;
	int64_t x120 = INT64_MAX;
	volatile int64_t t29 = 359025217759460571LL;

    t29 = (x117&((x118==x119)%x120));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	int32_t x123 = -1;
	static uint32_t x124 = 16176U;

    t30 = (x121&((x122==x123)%x124));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = 1;
	volatile uint16_t x126 = 82U;
	uint8_t x127 = UINT8_MAX;
	volatile int64_t x128 = INT64_MIN;
	int64_t t31 = -456504984183661438LL;

    t31 = (x125&((x126==x127)%x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x130 = 361045LLU;
	volatile int32_t x131 = INT32_MAX;
	int32_t x132 = INT32_MAX;
	static uint64_t t32 = 10201524914939LLU;

    t32 = (x129&((x130==x131)%x132));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -1;
	int16_t x134 = INT16_MIN;
	int16_t x135 = INT16_MAX;
	static uint32_t x136 = 29051U;

    t33 = (x133&((x134==x135)%x136));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x138 = 24U;
	int16_t x139 = INT16_MAX;
	volatile int32_t t34 = 498630647;

    t34 = (x137&((x138==x139)%x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MAX;
	int64_t x142 = -1LL;
	static int16_t x143 = INT16_MIN;
	static int8_t x144 = INT8_MIN;

    t35 = (x141&((x142==x143)%x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x145 = 496602U;
	int16_t x146 = -28;
	int64_t x147 = INT64_MAX;
	volatile uint8_t x148 = 4U;
	volatile uint32_t t36 = 5U;

    t36 = (x145&((x146==x147)%x148));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = 30516LL;
	int16_t x150 = INT16_MIN;
	uint64_t x151 = 12906219LLU;
	static int64_t x152 = -43501LL;
	volatile int64_t t37 = -23LL;

    t37 = (x149&((x150==x151)%x152));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x157 = 1U;
	static int32_t x159 = -126495917;
	int64_t x160 = INT64_MIN;
	volatile int64_t t38 = -3375866LL;

    t38 = (x157&((x158==x159)%x160));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x161 = 15282809844400245LLU;
	int16_t x162 = 78;
	int64_t x163 = 6213385537LL;

    t39 = (x161&((x162==x163)%x164));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x167 = INT16_MAX;
	int32_t x168 = INT32_MIN;
	static int32_t t40 = -965461;

    t40 = (x165&((x166==x167)%x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x169 = INT32_MIN;
	static int32_t x170 = 143;
	int16_t x171 = 744;
	int16_t x172 = -1;
	int32_t t41 = 30585659;

    t41 = (x169&((x170==x171)%x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x173 = -1145;
	int32_t x174 = -1;
	static int64_t x175 = -1LL;
	int32_t x176 = -2338374;
	static volatile int32_t t42 = -33;

    t42 = (x173&((x174==x175)%x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x177 = -63;
	uint8_t x178 = UINT8_MAX;
	int64_t x179 = 1302LL;
	int8_t x180 = 14;
	int32_t t43 = 4309109;

    t43 = (x177&((x178==x179)%x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x181 = INT32_MAX;
	int16_t x183 = 2919;
	volatile uint64_t x184 = 962103071032718LLU;
	volatile uint64_t t44 = 2189476417821800087LLU;

    t44 = (x181&((x182==x183)%x184));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x186 = 1421191LLU;
	uint16_t x187 = 22032U;
	volatile int32_t t45 = 154896518;

    t45 = (x185&((x186==x187)%x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x189 = 7486438LL;
	uint16_t x190 = UINT16_MAX;
	volatile int16_t x191 = 27;
	static int64_t x192 = INT64_MIN;
	volatile int64_t t46 = -1772311978167LL;

    t46 = (x189&((x190==x191)%x192));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x193 = 0;
	uint64_t x194 = 61411888350LLU;
	int64_t t47 = -8265910218531832LL;

    t47 = (x193&((x194==x195)%x196));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x198 = 2U;
	uint64_t x199 = UINT64_MAX;
	volatile int64_t t48 = -90544LL;

    t48 = (x197&((x198==x199)%x200));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x201 = -1;
	int8_t x202 = INT8_MIN;
	int32_t t49 = 0;

    t49 = (x201&((x202==x203)%x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x205 = -1;
	int64_t x206 = INT64_MAX;
	volatile int8_t x207 = -28;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t50 = -1944178;

    t50 = (x205&((x206==x207)%x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = -1;
	static int32_t x210 = INT32_MAX;
	volatile int16_t x211 = -1;
	int16_t x212 = 2;

    t51 = (x209&((x210==x211)%x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x213 = 30277U;
	volatile int8_t x214 = -1;
	int8_t x215 = INT8_MIN;
	int8_t x216 = INT8_MIN;
	volatile uint32_t t52 = 1838U;

    t52 = (x213&((x214==x215)%x216));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = -1LL;
	volatile int8_t x218 = INT8_MAX;
	uint16_t x219 = 1810U;
	volatile uint16_t x220 = 219U;
	static int64_t t53 = -23619644LL;

    t53 = (x217&((x218==x219)%x220));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x221 = UINT32_MAX;
	uint8_t x222 = 118U;
	volatile int16_t x224 = -1;
	volatile uint32_t t54 = 81384U;

    t54 = (x221&((x222==x223)%x224));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x225 = INT8_MIN;
	int8_t x226 = INT8_MIN;
	int16_t x227 = -1;
	uint64_t x228 = UINT64_MAX;
	uint64_t t55 = 4162114785627LLU;

    t55 = (x225&((x226==x227)%x228));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x229 = INT32_MAX;
	static volatile int64_t x230 = -1LL;
	int8_t x231 = -1;
	volatile int8_t x232 = 1;
	volatile int32_t t56 = -512408;

    t56 = (x229&((x230==x231)%x232));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x233 = 3LL;
	int8_t x234 = 0;
	volatile int32_t x235 = INT32_MIN;
	int64_t t57 = 13649074711LL;

    t57 = (x233&((x234==x235)%x236));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = INT64_MIN;
	int16_t x238 = INT16_MAX;
	static int16_t x239 = INT16_MAX;
	volatile int64_t x240 = INT64_MAX;
	volatile int64_t t58 = -16252LL;

    t58 = (x237&((x238==x239)%x240));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int32_t x241 = INT32_MAX;
	int16_t x242 = -1;
	int8_t x243 = 1;

    t59 = (x241&((x242==x243)%x244));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x245 = INT64_MIN;
	int16_t x248 = -14;
	volatile int64_t t60 = -8455LL;

    t60 = (x245&((x246==x247)%x248));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x250 = INT16_MIN;
	uint16_t x251 = 28U;
	int32_t x252 = INT32_MIN;

    t61 = (x249&((x250==x251)%x252));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x254 = 114182021994LLU;
	int64_t x255 = -4005LL;
	int16_t x256 = -1;
	volatile int32_t t62 = 98;

    t62 = (x253&((x254==x255)%x256));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x257 = 1U;
	static int16_t x259 = 45;
	int64_t x260 = INT64_MIN;
	static volatile int64_t t63 = 63LL;

    t63 = (x257&((x258==x259)%x260));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x261 = INT8_MIN;
	uint64_t x262 = 2952216LLU;
	volatile int64_t x263 = -21623088LL;
	volatile uint8_t x264 = UINT8_MAX;

    t64 = (x261&((x262==x263)%x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x265 = 746518;
	int16_t x266 = -43;
	uint64_t x267 = UINT64_MAX;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t65 = 2074;

    t65 = (x265&((x266==x267)%x268));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x269 = -5;
	uint64_t x270 = UINT64_MAX;
	int8_t x271 = -1;
	int32_t x272 = INT32_MIN;
	volatile int32_t t66 = 313333138;

    t66 = (x269&((x270==x271)%x272));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x274 = 115;
	static uint8_t x276 = 3U;
	uint64_t t67 = 802328677753LLU;

    t67 = (x273&((x274==x275)%x276));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x277 = 832820223203299LLU;
	int8_t x278 = INT8_MAX;
	int32_t x280 = -1;
	uint64_t t68 = 112264LLU;

    t68 = (x277&((x278==x279)%x280));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x282 = INT32_MAX;
	int8_t x283 = -1;
	static uint64_t t69 = 7314LLU;

    t69 = (x281&((x282==x283)%x284));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x285 = 48U;
	int64_t x287 = 30341401LL;
	int16_t x288 = INT16_MAX;
	int32_t t70 = 3055;

    t70 = (x285&((x286==x287)%x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x289 = 65000;
	int64_t x290 = 10873130945694917LL;
	int16_t x291 = -1;
	int16_t x292 = INT16_MAX;
	volatile int32_t t71 = -497;

    t71 = (x289&((x290==x291)%x292));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x293 = -1;
	uint64_t x294 = 2742667LLU;
	int64_t x296 = -1520LL;
	int64_t t72 = 4733959LL;

    t72 = (x293&((x294==x295)%x296));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x297 = -24;
	volatile uint32_t x298 = UINT32_MAX;
	uint32_t x300 = UINT32_MAX;
	volatile uint32_t t73 = 309883U;

    t73 = (x297&((x298==x299)%x300));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x301 = 57U;
	int8_t x303 = -1;
	int64_t x304 = -1LL;
	static volatile int64_t t74 = 50741LL;

    t74 = (x301&((x302==x303)%x304));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x313 = INT8_MIN;
	uint32_t x314 = 328U;
	int32_t x315 = -1;
	int32_t x316 = 61218;

    t75 = (x313&((x314==x315)%x316));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x317 = 84U;
	uint64_t x318 = 374486371449663465LLU;
	int32_t t76 = -6152;

    t76 = (x317&((x318==x319)%x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x321 = INT16_MIN;
	static int32_t x322 = INT32_MAX;
	volatile uint16_t x324 = UINT16_MAX;
	static volatile int32_t t77 = -901;

    t77 = (x321&((x322==x323)%x324));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x325 = -1LL;
	int8_t x327 = -7;
	int8_t x328 = INT8_MIN;
	int64_t t78 = 89092947420229085LL;

    t78 = (x325&((x326==x327)%x328));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x329 = INT32_MIN;
	uint32_t x330 = 5756018U;
	static int16_t x331 = INT16_MAX;
	int8_t x332 = INT8_MIN;
	volatile int32_t t79 = 2637114;

    t79 = (x329&((x330==x331)%x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x333 = UINT8_MAX;
	static int16_t x334 = 3;
	uint16_t x335 = 1U;
	uint64_t x336 = 207125922360LLU;
	volatile uint64_t t80 = 32118124LLU;

    t80 = (x333&((x334==x335)%x336));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x337 = INT16_MIN;
	uint32_t x339 = UINT32_MAX;
	volatile int32_t t81 = -239;

    t81 = (x337&((x338==x339)%x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x342 = INT16_MIN;
	uint8_t x343 = 7U;
	int32_t x344 = INT32_MIN;
	int32_t t82 = -838;

    t82 = (x341&((x342==x343)%x344));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x347 = 48U;
	static volatile int32_t x348 = -6299789;
	volatile int32_t t83 = 819;

    t83 = (x345&((x346==x347)%x348));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x349 = 121U;
	uint16_t x350 = 1853U;
	volatile uint16_t x352 = 9256U;
	int32_t t84 = -7;

    t84 = (x349&((x350==x351)%x352));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x353 = INT64_MIN;
	int32_t x354 = -1;
	uint64_t x356 = 946LLU;
	volatile uint64_t t85 = 2902993121028897LLU;

    t85 = (x353&((x354==x355)%x356));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x357 = INT64_MIN;
	static int64_t x359 = 0LL;
	int32_t x360 = -3866592;
	volatile int64_t t86 = -12LL;

    t86 = (x357&((x358==x359)%x360));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x362 = INT16_MIN;
	int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MIN;
	int32_t t87 = 39133;

    t87 = (x361&((x362==x363)%x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x365 = INT32_MAX;
	static volatile int16_t x366 = -1;
	int8_t x367 = -1;
	static int16_t x368 = INT16_MIN;
	static volatile int32_t t88 = 22;

    t88 = (x365&((x366==x367)%x368));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x369 = 2U;
	uint8_t x370 = 0U;
	volatile uint32_t x372 = UINT32_MAX;
	uint32_t t89 = 84903362U;

    t89 = (x369&((x370==x371)%x372));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x373 = INT32_MIN;
	int8_t x375 = INT8_MAX;
	volatile uint16_t x376 = 30060U;
	volatile int32_t t90 = 35110765;

    t90 = (x373&((x374==x375)%x376));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x377 = -1;
	static uint64_t x379 = 4977LLU;
	int32_t x380 = 1;
	volatile int32_t t91 = 1;

    t91 = (x377&((x378==x379)%x380));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x381 = 12474900U;
	int16_t x382 = INT16_MAX;
	uint16_t x383 = 0U;
	static int8_t x384 = -1;
	uint32_t t92 = 8867U;

    t92 = (x381&((x382==x383)%x384));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x386 = INT32_MAX;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MAX;
	int32_t t93 = 6;

    t93 = (x385&((x386==x387)%x388));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x390 = INT8_MIN;
	int64_t t94 = -3333347563LL;

    t94 = (x389&((x390==x391)%x392));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x396 = -369;

    t95 = (x393&((x394==x395)%x396));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x398 = 1;
	static volatile uint8_t x399 = 16U;
	int32_t x400 = INT32_MIN;
	static volatile int32_t t96 = -1;

    t96 = (x397&((x398==x399)%x400));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int64_t x401 = INT64_MAX;
	int64_t x403 = INT64_MIN;

    t97 = (x401&((x402==x403)%x404));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x407 = -10;
	uint32_t x408 = 1U;
	uint32_t t98 = 20782U;

    t98 = (x405&((x406==x407)%x408));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x409 = INT64_MIN;
	static int32_t x410 = INT32_MIN;
	static int16_t x411 = INT16_MAX;
	volatile uint16_t x412 = 1107U;
	volatile int64_t t99 = -770LL;

    t99 = (x409&((x410==x411)%x412));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x413 = 48U;
	volatile int8_t x414 = INT8_MIN;
	static int16_t x415 = INT16_MIN;
	volatile int16_t x416 = -1;

    t100 = (x413&((x414==x415)%x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x418 = 1U;
	int64_t x419 = -433608881LL;
	volatile int8_t x420 = 63;
	volatile int32_t t101 = 134589675;

    t101 = (x417&((x418==x419)%x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x421 = 1701;
	static int16_t x422 = INT16_MAX;
	volatile int64_t x424 = INT64_MIN;
	int64_t t102 = 255098LL;

    t102 = (x421&((x422==x423)%x424));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x425 = UINT64_MAX;
	volatile uint64_t x426 = 7629LLU;
	static int8_t x427 = INT8_MIN;
	volatile uint8_t x428 = UINT8_MAX;
	static uint64_t t103 = 895057948544663LLU;

    t103 = (x425&((x426==x427)%x428));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x431 = UINT8_MAX;
	volatile uint16_t x432 = UINT16_MAX;

    t104 = (x429&((x430==x431)%x432));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x433 = 0U;
	static int32_t x434 = 55574271;
	static uint32_t x435 = 2U;
	volatile uint16_t x436 = 2U;
	static int32_t t105 = 2;

    t105 = (x433&((x434==x435)%x436));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x437 = -1LL;
	int16_t x438 = INT16_MIN;
	uint16_t x439 = 144U;
	volatile uint32_t x440 = UINT32_MAX;
	volatile int64_t t106 = 19906125561153144LL;

    t106 = (x437&((x438==x439)%x440));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x441 = UINT64_MAX;
	int64_t x443 = INT64_MIN;
	uint64_t t107 = 11655573980LLU;

    t107 = (x441&((x442==x443)%x444));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x445 = INT32_MIN;
	int8_t x446 = -4;
	uint8_t x447 = UINT8_MAX;
	int8_t x448 = -1;

    t108 = (x445&((x446==x447)%x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x450 = INT32_MIN;
	int32_t x451 = -1855;
	static volatile int64_t t109 = 4LL;

    t109 = (x449&((x450==x451)%x452));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x453 = -1LL;
	int64_t x454 = INT64_MIN;
	int64_t x455 = 238035913LL;
	int16_t x456 = INT16_MIN;

    t110 = (x453&((x454==x455)%x456));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x457 = UINT8_MAX;
	static uint64_t x460 = 476LLU;
	volatile uint64_t t111 = 1860410067383LLU;

    t111 = (x457&((x458==x459)%x460));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x461 = INT16_MAX;
	static int32_t x462 = -1432;
	uint64_t x463 = 55097697522603LLU;
	int32_t x464 = -1;
	int32_t t112 = 1;

    t112 = (x461&((x462==x463)%x464));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x466 = 116731U;
	volatile int8_t x467 = -1;
	static uint64_t x468 = 18452813402643LLU;
	uint64_t t113 = 1943962164930LLU;

    t113 = (x465&((x466==x467)%x468));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x469 = INT32_MIN;
	int32_t x470 = 8;
	int32_t x471 = -160384796;
	int32_t x472 = INT32_MIN;
	static int32_t t114 = -3;

    t114 = (x469&((x470==x471)%x472));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x474 = INT64_MIN;
	static uint64_t x475 = 17385810915779465LLU;

    t115 = (x473&((x474==x475)%x476));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x477 = INT8_MIN;
	int64_t x478 = -1LL;
	volatile int8_t x480 = INT8_MIN;
	static volatile int32_t t116 = -24;

    t116 = (x477&((x478==x479)%x480));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x481 = 79973U;
	int32_t x483 = -1;
	volatile int8_t x484 = 5;

    t117 = (x481&((x482==x483)%x484));

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x485 = -1;
	uint16_t x487 = 1U;
	uint8_t x488 = UINT8_MAX;
	volatile int32_t t118 = -136097051;

    t118 = (x485&((x486==x487)%x488));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x489 = INT32_MIN;
	volatile int8_t x490 = INT8_MIN;
	volatile int32_t t119 = 242;

    t119 = (x489&((x490==x491)%x492));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x493 = INT8_MAX;
	int16_t x494 = INT16_MIN;
	int16_t x495 = INT16_MIN;
	volatile int16_t x496 = INT16_MIN;
	int32_t t120 = 0;

    t120 = (x493&((x494==x495)%x496));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x497 = UINT32_MAX;
	static int32_t x499 = -1;
	int16_t x500 = INT16_MIN;
	static volatile uint32_t t121 = 15973U;

    t121 = (x497&((x498==x499)%x500));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x501 = 511802755922LLU;
	uint8_t x502 = 4U;
	int64_t x503 = INT64_MIN;
	uint16_t x504 = UINT16_MAX;
	volatile uint64_t t122 = 19149LLU;

    t122 = (x501&((x502==x503)%x504));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x505 = INT32_MIN;
	int16_t x506 = -3010;
	uint32_t x507 = UINT32_MAX;
	volatile uint64_t t123 = 2014338730201428LLU;

    t123 = (x505&((x506==x507)%x508));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x509 = INT32_MIN;
	volatile int32_t x510 = INT32_MIN;
	int8_t x511 = INT8_MIN;
	int8_t x512 = -10;
	int32_t t124 = -21;

    t124 = (x509&((x510==x511)%x512));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x513 = 65U;
	int16_t x514 = -1;
	static int64_t x515 = INT64_MAX;
	int32_t x516 = INT32_MIN;
	volatile int32_t t125 = 9074027;

    t125 = (x513&((x514==x515)%x516));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x517 = -1;
	uint8_t x518 = UINT8_MAX;
	static uint8_t x519 = 58U;
	uint32_t t126 = 841615U;

    t126 = (x517&((x518==x519)%x520));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x521 = 7U;
	volatile uint64_t x522 = 29008133LLU;
	int64_t x523 = 1LL;
	int8_t x524 = -1;

    t127 = (x521&((x522==x523)%x524));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x525 = UINT64_MAX;
	int8_t x526 = -1;
	int64_t x527 = INT64_MIN;
	uint16_t x528 = UINT16_MAX;
	uint64_t t128 = 827LLU;

    t128 = (x525&((x526==x527)%x528));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x529 = INT8_MIN;
	int64_t x531 = INT64_MIN;

    t129 = (x529&((x530==x531)%x532));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x533 = UINT32_MAX;
	int8_t x534 = INT8_MIN;
	uint64_t x535 = 331725287859491546LLU;
	int8_t x536 = INT8_MAX;
	static volatile uint32_t t130 = 18U;

    t130 = (x533&((x534==x535)%x536));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x537 = 1369657152U;
	int32_t x538 = -1;
	volatile uint32_t t131 = 2057107645U;

    t131 = (x537&((x538==x539)%x540));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x541 = -1LL;
	int32_t x542 = INT32_MAX;
	volatile int64_t t132 = -16293LL;

    t132 = (x541&((x542==x543)%x544));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x545 = 1556U;
	int64_t x546 = -1LL;
	int32_t x547 = -1;
	volatile uint64_t x548 = UINT64_MAX;
	volatile uint64_t t133 = 4LLU;

    t133 = (x545&((x546==x547)%x548));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x551 = INT16_MIN;
	static int16_t x552 = 122;
	int32_t t134 = 3;

    t134 = (x549&((x550==x551)%x552));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x553 = INT64_MIN;
	int8_t x554 = INT8_MIN;
	volatile int32_t x555 = 3620201;
	volatile uint32_t x556 = 104658U;
	static volatile int64_t t135 = 18632622LL;

    t135 = (x553&((x554==x555)%x556));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x558 = 0;
	volatile int8_t x559 = INT8_MIN;
	static int32_t t136 = -446;

    t136 = (x557&((x558==x559)%x560));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x561 = INT32_MAX;
	uint64_t x562 = 2084827691749LLU;
	static uint64_t x563 = 1844882536LLU;
	int16_t x564 = -5745;
	static int32_t t137 = 13;

    t137 = (x561&((x562==x563)%x564));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x565 = 9930;
	int64_t x566 = INT64_MIN;
	uint32_t x567 = UINT32_MAX;
	volatile int32_t x568 = INT32_MIN;
	volatile int32_t t138 = 30812972;

    t138 = (x565&((x566==x567)%x568));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x569 = 1784212540358512LLU;
	uint16_t x570 = UINT16_MAX;
	int16_t x571 = INT16_MAX;
	int32_t x572 = INT32_MAX;
	uint64_t t139 = 1502LLU;

    t139 = (x569&((x570==x571)%x572));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x574 = 35992LLU;
	int32_t x575 = -1;
	int32_t x576 = -1;
	int64_t t140 = 34436196810770373LL;

    t140 = (x573&((x574==x575)%x576));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x577 = 7U;
	int64_t x578 = 625807446LL;
	int8_t x579 = -1;
	int16_t x580 = -1;
	static volatile int32_t t141 = -36529;

    t141 = (x577&((x578==x579)%x580));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x581 = 1U;
	int16_t x582 = INT16_MIN;
	static int64_t x584 = -34014718374LL;
	volatile int64_t t142 = -1LL;

    t142 = (x581&((x582==x583)%x584));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x585 = UINT64_MAX;
	uint32_t x587 = 267756829U;
	int8_t x588 = -2;
	static volatile uint64_t t143 = 295931023359438245LLU;

    t143 = (x585&((x586==x587)%x588));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x590 = -31LL;
	volatile int8_t x591 = INT8_MIN;
	volatile int16_t x592 = INT16_MIN;
	int32_t t144 = 2808;

    t144 = (x589&((x590==x591)%x592));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x593 = 11609U;
	uint32_t x594 = 59982713U;
	int8_t x595 = INT8_MIN;
	int64_t x596 = -1232796LL;

    t145 = (x593&((x594==x595)%x596));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x597 = INT16_MIN;
	uint64_t x598 = 501LLU;
	int16_t x599 = -1;
	static volatile int32_t t146 = -1;

    t146 = (x597&((x598==x599)%x600));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x601 = 255683U;
	uint8_t x602 = 1U;
	volatile int64_t x603 = INT64_MIN;
	int32_t x604 = -1;
	uint32_t t147 = 95141680U;

    t147 = (x601&((x602==x603)%x604));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x605 = INT64_MIN;
	int64_t x607 = -11895LL;
	static int16_t x608 = 1454;
	volatile int64_t t148 = -210407492543LL;

    t148 = (x605&((x606==x607)%x608));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x615 = INT16_MIN;
	int32_t t149 = 39133335;

    t149 = (x613&((x614==x615)%x616));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x617 = UINT64_MAX;
	uint16_t x618 = 5U;
	int16_t x619 = INT16_MIN;
	static volatile uint8_t x620 = UINT8_MAX;
	volatile uint64_t t150 = 173210425807LLU;

    t150 = (x617&((x618==x619)%x620));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x621 = UINT64_MAX;
	uint16_t x622 = 1028U;
	static uint32_t x623 = UINT32_MAX;
	uint64_t t151 = 9993127LLU;

    t151 = (x621&((x622==x623)%x624));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x625 = 58;
	uint8_t x626 = 42U;
	int16_t x627 = INT16_MIN;
	static int64_t x628 = INT64_MAX;
	int64_t t152 = -164996233610393257LL;

    t152 = (x625&((x626==x627)%x628));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x629 = UINT32_MAX;
	int32_t x630 = 469729297;
	volatile int64_t x631 = INT64_MIN;
	static int64_t x632 = -1055730804LL;
	static volatile int64_t t153 = -3927460396092508450LL;

    t153 = (x629&((x630==x631)%x632));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x633 = INT16_MIN;
	int32_t x635 = -1;
	int32_t x636 = -1;
	static int32_t t154 = 15614;

    t154 = (x633&((x634==x635)%x636));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x637 = UINT8_MAX;
	int32_t x638 = -5510;
	volatile int64_t x640 = -1LL;
	int64_t t155 = 357LL;

    t155 = (x637&((x638==x639)%x640));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint8_t x642 = UINT8_MAX;
	int8_t x643 = INT8_MAX;
	int16_t x644 = -3628;
	volatile int32_t t156 = 2016172;

    t156 = (x641&((x642==x643)%x644));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x645 = 12U;
	int16_t x646 = -4015;
	int8_t x647 = INT8_MAX;
	int32_t x648 = 4322;
	volatile int32_t t157 = -7315116;

    t157 = (x645&((x646==x647)%x648));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x649 = UINT32_MAX;
	volatile uint16_t x650 = 1U;
	int8_t x652 = INT8_MIN;

    t158 = (x649&((x650==x651)%x652));

    if (t158 != 1U) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x653 = 7;
	int32_t x654 = INT32_MAX;
	int32_t x656 = INT32_MIN;

    t159 = (x653&((x654==x655)%x656));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x657 = INT8_MAX;
	volatile int64_t x658 = INT64_MIN;
	volatile int64_t x659 = INT64_MAX;
	static int8_t x660 = 62;
	int32_t t160 = 22;

    t160 = (x657&((x658==x659)%x660));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x661 = INT64_MIN;
	static volatile int32_t x662 = 825633191;
	uint16_t x663 = 26U;
	int64_t x664 = -248432740LL;
	volatile int64_t t161 = 189973255997LL;

    t161 = (x661&((x662==x663)%x664));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x665 = -1;
	static uint32_t x666 = UINT32_MAX;
	uint32_t x667 = UINT32_MAX;
	int16_t x668 = INT16_MIN;
	int32_t t162 = -3574700;

    t162 = (x665&((x666==x667)%x668));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x669 = 61U;
	uint8_t x671 = UINT8_MAX;
	int64_t x672 = -663830682635LL;
	volatile int64_t t163 = -8415783551916000LL;

    t163 = (x669&((x670==x671)%x672));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x673 = 3;
	int64_t x674 = INT64_MIN;

    t164 = (x673&((x674==x675)%x676));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x677 = -1;
	volatile int64_t x678 = 83531737475623431LL;
	int64_t x679 = INT64_MAX;
	int32_t x680 = INT32_MIN;
	static volatile int32_t t165 = 994;

    t165 = (x677&((x678==x679)%x680));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x681 = 14479;
	static int8_t x682 = INT8_MAX;
	int64_t x683 = -1LL;
	int16_t x684 = INT16_MIN;
	static int32_t t166 = 704009709;

    t166 = (x681&((x682==x683)%x684));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x685 = -1;
	int8_t x686 = INT8_MAX;
	uint8_t x687 = 101U;
	int16_t x688 = -1;
	volatile int32_t t167 = -475560186;

    t167 = (x685&((x686==x687)%x688));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x689 = UINT8_MAX;
	volatile int32_t x690 = -1;
	int32_t x692 = -1;
	int32_t t168 = 142886;

    t168 = (x689&((x690==x691)%x692));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x693 = INT16_MIN;
	int8_t x694 = -1;
	int64_t x695 = INT64_MAX;
	static uint32_t x696 = 1U;
	volatile uint32_t t169 = 28379U;

    t169 = (x693&((x694==x695)%x696));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x697 = INT64_MIN;
	volatile uint16_t x698 = 16U;
	int64_t x699 = -42152LL;
	int64_t t170 = -1LL;

    t170 = (x697&((x698==x699)%x700));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x701 = UINT32_MAX;
	volatile int8_t x702 = INT8_MIN;
	int64_t x703 = 18715292084LL;
	static int8_t x704 = -1;
	uint32_t t171 = 175837764U;

    t171 = (x701&((x702==x703)%x704));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x705 = -1;
	int64_t x706 = -19309069250829LL;
	int64_t x707 = INT64_MIN;
	volatile uint16_t x708 = 7585U;
	int32_t t172 = -297343623;

    t172 = (x705&((x706==x707)%x708));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x709 = -3;
	int32_t x710 = INT32_MAX;
	uint32_t x711 = 673099518U;
	static volatile int32_t x712 = INT32_MIN;
	volatile int32_t t173 = 14544;

    t173 = (x709&((x710==x711)%x712));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint32_t x713 = 13316017U;
	uint8_t x714 = UINT8_MAX;
	int16_t x716 = INT16_MIN;
	volatile uint32_t t174 = 94U;

    t174 = (x713&((x714==x715)%x716));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x717 = INT8_MIN;
	uint64_t x718 = UINT64_MAX;
	static uint32_t x719 = 59U;
	volatile int32_t t175 = -6;

    t175 = (x717&((x718==x719)%x720));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x721 = INT16_MIN;
	int8_t x722 = INT8_MAX;
	static int8_t x723 = INT8_MIN;
	uint8_t x724 = 1U;
	volatile int32_t t176 = -18142792;

    t176 = (x721&((x722==x723)%x724));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x725 = 117LLU;
	int8_t x726 = -61;
	static int32_t x727 = 862;
	uint32_t x728 = 360518598U;
	uint64_t t177 = 14047056183993852LLU;

    t177 = (x725&((x726==x727)%x728));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x729 = UINT8_MAX;
	int16_t x730 = -1;
	int8_t x731 = INT8_MAX;
	static volatile int64_t x732 = INT64_MIN;
	int64_t t178 = -1LL;

    t178 = (x729&((x730==x731)%x732));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x734 = INT16_MIN;
	int8_t x735 = INT8_MIN;
	int16_t x736 = INT16_MIN;
	int32_t t179 = 26868;

    t179 = (x733&((x734==x735)%x736));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x738 = 1U;
	int8_t x739 = INT8_MIN;
	volatile uint16_t x740 = 1U;
	static volatile uint32_t t180 = 5115U;

    t180 = (x737&((x738==x739)%x740));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x741 = INT8_MIN;
	uint64_t x742 = 449481LLU;
	static int16_t x743 = INT16_MAX;
	volatile uint32_t x744 = UINT32_MAX;
	uint32_t t181 = 0U;

    t181 = (x741&((x742==x743)%x744));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x746 = 7908U;
	uint16_t x748 = 90U;

    t182 = (x745&((x746==x747)%x748));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x749 = INT8_MIN;
	volatile uint32_t x750 = UINT32_MAX;
	volatile int32_t x751 = INT32_MAX;
	uint64_t x752 = 28004115759LLU;
	volatile uint64_t t183 = 13006162LLU;

    t183 = (x749&((x750==x751)%x752));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x757 = INT32_MIN;
	int16_t x758 = INT16_MAX;
	int64_t x759 = INT64_MIN;
	int32_t x760 = INT32_MAX;
	int32_t t184 = -6141573;

    t184 = (x757&((x758==x759)%x760));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x761 = INT16_MIN;
	uint16_t x762 = 3U;
	int64_t x763 = -1LL;
	int32_t x764 = -1;
	volatile int32_t t185 = -181846152;

    t185 = (x761&((x762==x763)%x764));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x765 = 100U;
	static int64_t x767 = 128114835623110593LL;
	static int32_t x768 = INT32_MIN;

    t186 = (x765&((x766==x767)%x768));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x769 = -1;
	static uint16_t x770 = 178U;
	static volatile uint32_t t187 = 5280634U;

    t187 = (x769&((x770==x771)%x772));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x774 = INT8_MAX;
	int16_t x775 = INT16_MAX;
	int32_t x776 = 66991168;
	static volatile int32_t t188 = 6;

    t188 = (x773&((x774==x775)%x776));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x777 = INT16_MIN;
	int64_t x778 = INT64_MIN;
	volatile uint8_t x779 = 16U;
	uint8_t x780 = UINT8_MAX;
	static int32_t t189 = 9;

    t189 = (x777&((x778==x779)%x780));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x781 = UINT32_MAX;
	volatile int16_t x782 = INT16_MIN;
	uint32_t x783 = UINT32_MAX;
	int8_t x784 = INT8_MIN;

    t190 = (x781&((x782==x783)%x784));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x785 = INT16_MAX;
	static int32_t x786 = -3;
	int8_t x787 = -1;
	volatile int32_t t191 = -1969;

    t191 = (x785&((x786==x787)%x788));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x789 = 96U;
	uint8_t x790 = UINT8_MAX;
	int8_t x791 = INT8_MIN;
	int32_t x792 = INT32_MIN;
	int32_t t192 = 12469407;

    t192 = (x789&((x790==x791)%x792));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x793 = 6568U;
	int16_t x794 = INT16_MAX;
	volatile uint16_t x795 = 1U;
	int64_t x796 = INT64_MAX;

    t193 = (x793&((x794==x795)%x796));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x797 = UINT32_MAX;
	uint16_t x798 = 1905U;
	int32_t x800 = INT32_MIN;

    t194 = (x797&((x798==x799)%x800));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x801 = INT8_MAX;
	int8_t x802 = 3;
	volatile int16_t x803 = INT16_MIN;
	int32_t x804 = 13059531;
	volatile int32_t t195 = 759429;

    t195 = (x801&((x802==x803)%x804));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x805 = 3LLU;
	volatile int32_t x807 = INT32_MIN;
	volatile uint64_t t196 = 117181704705LLU;

    t196 = (x805&((x806==x807)%x808));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x809 = 306857590U;
	int8_t x810 = -5;
	uint8_t x811 = 3U;
	static int16_t x812 = 3;
	volatile uint32_t t197 = 117560172U;

    t197 = (x809&((x810==x811)%x812));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x813 = -1;
	uint32_t x814 = 3583U;
	int8_t x815 = INT8_MIN;
	volatile int32_t t198 = 2103;

    t198 = (x813&((x814==x815)%x816));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int32_t x817 = INT32_MIN;
	int32_t x818 = INT32_MIN;
	int64_t x819 = INT64_MIN;
	int32_t x820 = -1;
	int32_t t199 = -277261;

    t199 = (x817&((x818==x819)%x820));

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

