
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

int8_t x8 = 1;
int64_t x20 = INT64_MIN;
int64_t x24 = INT64_MIN;
uint64_t t5 = 36015633590LLU;
volatile int32_t x27 = -16310542;
static int8_t x34 = INT8_MIN;
static volatile int32_t t8 = -338807;
uint32_t x39 = 1337632U;
static volatile int32_t x42 = -85;
volatile uint32_t t10 = UINT32_MAX;
static volatile int64_t t12 = 163LL;
int32_t x53 = -1;
int16_t x56 = INT16_MIN;
uint16_t x63 = 1U;
uint64_t x64 = UINT64_MAX;
static int64_t x68 = INT64_MIN;
uint8_t x72 = 2U;
int16_t x83 = INT16_MIN;
volatile uint8_t x85 = 4U;
int8_t x88 = INT8_MIN;
int32_t x92 = -1;
static int8_t x94 = 0;
uint8_t x97 = UINT8_MAX;
int16_t x102 = INT16_MIN;
static int16_t x106 = -1;
static int64_t x107 = 11822547027713977LL;
volatile int32_t t26 = 12;
uint64_t x114 = 12460742127602431LLU;
volatile int32_t t29 = 403817;
uint64_t x121 = 288888006LLU;
int32_t x124 = INT32_MAX;
int64_t x135 = -1LL;
volatile int64_t t33 = -469576LL;
uint64_t x144 = 3464903420LLU;
uint64_t t35 = 2714LLU;
volatile int16_t x147 = INT16_MIN;
int16_t x149 = -1;
static volatile int64_t t39 = -41510393319022LL;
static volatile uint64_t t40 = UINT64_MAX;
volatile uint16_t x165 = UINT16_MAX;
int16_t x170 = INT16_MIN;
int8_t x180 = 2;
int16_t x185 = INT16_MIN;
int32_t x186 = 18330;
int8_t x187 = -1;
volatile uint16_t x190 = 573U;
int8_t x198 = INT8_MIN;
int8_t x199 = 0;
uint8_t x205 = UINT8_MAX;
int16_t x212 = 336;
static int32_t t52 = -2;
uint32_t x215 = UINT32_MAX;
int32_t t53 = -1348;
int32_t x220 = INT32_MIN;
uint16_t x230 = 627U;
int8_t x231 = INT8_MIN;
uint64_t x235 = 34779039927340LLU;
uint32_t x237 = 12U;
volatile uint8_t x250 = UINT8_MAX;
uint8_t x255 = 0U;
int32_t x258 = -3308476;
int8_t x260 = INT8_MIN;
int16_t x265 = INT16_MIN;
static uint16_t x268 = UINT16_MAX;
uint8_t x275 = UINT8_MAX;
static int16_t x276 = INT16_MAX;
int64_t t68 = INT64_MAX;
int8_t x278 = 9;
static volatile uint16_t x279 = UINT16_MAX;
volatile int32_t t69 = -1;
int64_t x281 = -30343006971074479LL;
volatile uint64_t x284 = UINT64_MAX;
int16_t x290 = INT16_MIN;
static int64_t x294 = INT64_MIN;
volatile int32_t x303 = INT32_MIN;
volatile int32_t t76 = -32583;
uint64_t x313 = UINT64_MAX;
static uint32_t x314 = 1672576891U;
uint16_t x315 = 28U;
int64_t x318 = 35113575514LL;
volatile int32_t x321 = INT32_MIN;
int64_t x336 = INT64_MAX;
int16_t x337 = -1;
static int64_t x342 = -47836LL;
uint16_t x343 = 43U;
int16_t x346 = -1;
int16_t x347 = -1;
int64_t x349 = INT64_MIN;
int16_t x350 = INT16_MAX;
uint64_t x352 = 262803LLU;
volatile uint8_t x357 = 18U;
uint16_t x370 = 3880U;
uint64_t x378 = 1102LLU;
uint16_t x382 = 7995U;
volatile int32_t t96 = -3455;
volatile int32_t t98 = 292;
int32_t x397 = 12;
volatile int8_t x398 = INT8_MIN;
uint16_t x404 = UINT16_MAX;
int32_t t100 = 6;
int16_t x408 = -1;
volatile uint64_t t101 = UINT64_MAX;
uint16_t x420 = UINT16_MAX;
uint8_t x427 = UINT8_MAX;
volatile int32_t t108 = 0;
int32_t x443 = INT32_MIN;
static volatile uint8_t x447 = 2U;
int16_t x452 = INT16_MAX;
volatile uint32_t t113 = UINT32_MAX;
uint8_t x458 = UINT8_MAX;
int64_t x460 = INT64_MAX;
uint32_t x466 = 321602608U;
int32_t x467 = 1;
int32_t t116 = 3388;
int64_t x472 = INT64_MIN;
static uint64_t t117 = 734846237854328LLU;
int32_t x475 = INT32_MAX;
uint64_t x478 = 13LLU;
volatile int8_t x479 = 4;
int16_t x486 = INT16_MIN;
volatile uint64_t x487 = UINT64_MAX;
int64_t x489 = -339LL;
static volatile int64_t x492 = INT64_MIN;
volatile int64_t t122 = 24102434LL;
int16_t x501 = INT16_MIN;
static volatile int16_t x503 = -2;
static uint16_t x506 = 18U;
int8_t x509 = INT8_MAX;
uint8_t x511 = 0U;
uint64_t x518 = UINT64_MAX;
volatile int8_t x519 = -1;
static int16_t x520 = 1989;
uint32_t t130 = UINT32_MAX;
static int32_t x525 = INT32_MIN;
uint32_t x528 = 68321U;
int64_t x539 = INT64_MIN;
int32_t x544 = 1;
int64_t x545 = INT64_MAX;
uint16_t x547 = 2U;
uint32_t x553 = 1012427306U;
int8_t x554 = INT8_MAX;
uint64_t x555 = UINT64_MAX;
static int16_t x571 = INT16_MIN;
static volatile uint64_t t142 = UINT64_MAX;
int64_t x576 = INT64_MAX;
static int64_t t143 = 26079886411LL;
static volatile uint32_t x578 = 5327U;
int8_t x579 = 4;
int64_t x581 = INT64_MAX;
int64_t t145 = INT64_MAX;
uint64_t t146 = 1285930888154LLU;
uint32_t x590 = UINT32_MAX;
int8_t x593 = -1;
volatile int32_t t148 = -1;
volatile uint32_t x597 = 5524976U;
volatile uint32_t t149 = UINT32_MAX;
static int32_t x601 = INT32_MAX;
int32_t x603 = INT32_MIN;
uint64_t x607 = 6538LLU;
int8_t x610 = INT8_MAX;
volatile uint64_t x611 = 12566273300LLU;
int8_t x612 = -1;
static int64_t x619 = -61060LL;
int64_t t155 = -526008297LL;
int32_t x631 = INT32_MAX;
volatile int64_t t157 = INT64_MAX;
uint16_t x634 = 1U;
int64_t x642 = INT64_MIN;
uint64_t x644 = 14473226125726142LLU;
volatile uint32_t t162 = 5545U;
volatile int32_t t163 = -17856913;
volatile int64_t x658 = 223085LL;
uint8_t x663 = 0U;
int32_t t165 = -31;
uint16_t x666 = 161U;
static volatile int64_t t166 = -14143914520427LL;
uint8_t x671 = 13U;
uint8_t x686 = UINT8_MAX;
int16_t x687 = INT16_MIN;
volatile int8_t x688 = INT8_MAX;
int32_t x695 = 161;
int8_t x696 = -1;
static volatile uint32_t x699 = 26625609U;
uint64_t t174 = UINT64_MAX;
volatile uint8_t x702 = 8U;
volatile int32_t t175 = -277632;
volatile int32_t t176 = -3;
uint16_t x713 = UINT16_MAX;
volatile int64_t x716 = INT64_MIN;
int64_t x717 = -462582339955630906LL;
int64_t t179 = 15935145167906LL;
volatile uint8_t x721 = 1U;
volatile uint32_t x731 = 59U;
volatile int64_t x735 = 1071748781626445LL;
int32_t t183 = 20395;
int32_t x747 = -1;
uint16_t x748 = 6U;
int64_t t189 = 11423481906865LL;
uint64_t x762 = 170725136LLU;
volatile int16_t x769 = -1;
uint16_t x774 = 42U;
static int64_t x777 = INT64_MIN;
volatile int16_t x778 = INT16_MIN;
static uint8_t x795 = UINT8_MAX;


void f0(void) {
    	uint64_t x1 = 2LLU;
	uint64_t x2 = UINT64_MAX;
	int64_t x3 = 1154854LL;
	volatile uint64_t x4 = UINT64_MAX;
	static volatile uint64_t t0 = UINT64_MAX;

    t0 = (x1|((x2==x3)^x4));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	volatile int32_t x6 = INT32_MIN;
	volatile uint16_t x7 = UINT16_MAX;
	volatile int64_t t1 = 9527768066LL;

    t1 = (x5|((x6==x7)^x8));

    if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	int16_t x10 = INT16_MAX;
	uint64_t x11 = 28618602LLU;
	int8_t x12 = INT8_MIN;
	volatile uint64_t t2 = UINT64_MAX;

    t2 = (x9|((x10==x11)^x12));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = 2U;
	volatile int16_t x14 = INT16_MIN;
	int8_t x15 = 9;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = -800457341;

    t3 = (x13|((x14==x15)^x16));

    if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	int64_t x18 = -1LL;
	int16_t x19 = 5;
	volatile int64_t t4 = -3489149559959334LL;

    t4 = (x17|((x18==x19)^x20));

    if (t4 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 878954LLU;
	int16_t x22 = -3153;
	int32_t x23 = -2017;

    t5 = (x21|((x22==x23)^x24));

    if (t5 != 9223372036855654762LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	uint16_t x26 = 1U;
	int16_t x28 = INT16_MIN;
	static int32_t t6 = -5;

    t6 = (x25|((x26==x27)^x28));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x29 = 84U;
	static int8_t x30 = -26;
	int8_t x31 = -1;
	volatile uint16_t x32 = 0U;
	volatile int32_t t7 = -19857033;

    t7 = (x29|((x30==x31)^x32));

    if (t7 != 84) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	uint8_t x35 = 0U;
	int16_t x36 = 1436;

    t8 = (x33|((x34==x35)^x36));

    if (t8 != -2147482212) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	volatile int16_t x38 = INT16_MIN;
	int32_t x40 = -1;
	int32_t t9 = 18657;

    t9 = (x37|((x38==x39)^x40));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	volatile int32_t x43 = 2352252;
	uint32_t x44 = 1611U;

    t10 = (x41|((x42==x43)^x44));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = -1;
	int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MAX;
	int32_t x48 = INT32_MIN;
	int32_t t11 = -489;

    t11 = (x45|((x46==x47)^x48));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MAX;
	int8_t x50 = INT8_MAX;
	uint32_t x51 = UINT32_MAX;
	static int64_t x52 = INT64_MIN;

    t12 = (x49|((x50==x51)^x52));

    if (t12 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x54 = -3;
	static int8_t x55 = -1;
	int32_t t13 = -747480608;

    t13 = (x53|((x54==x55)^x56));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = INT8_MAX;
	uint16_t x58 = 649U;
	volatile int8_t x59 = -1;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = 1557;

    t14 = (x57|((x58==x59)^x60));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x61 = 5606LLU;
	int32_t x62 = INT32_MAX;
	volatile uint64_t t15 = UINT64_MAX;

    t15 = (x61|((x62==x63)^x64));

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int16_t x65 = INT16_MIN;
	volatile int16_t x66 = INT16_MIN;
	static volatile int8_t x67 = 0;
	static volatile int64_t t16 = -2392245546816LL;

    t16 = (x65|((x66==x67)^x68));

    if (t16 != -32768LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = INT8_MAX;
	static int32_t x70 = INT32_MAX;
	uint32_t x71 = UINT32_MAX;
	volatile int32_t t17 = 6715281;

    t17 = (x69|((x70==x71)^x72));

    if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	int16_t x74 = -1;
	uint16_t x75 = 7U;
	int64_t x76 = INT64_MIN;
	volatile int64_t t18 = 236811945831612785LL;

    t18 = (x73|((x74==x75)^x76));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x77 = 11U;
	int8_t x78 = 16;
	volatile int8_t x79 = INT8_MAX;
	int32_t x80 = INT32_MIN;
	static volatile int32_t t19 = 496281;

    t19 = (x77|((x78==x79)^x80));

    if (t19 != -2147483637) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 10U;
	int64_t x82 = INT64_MIN;
	static int8_t x84 = -28;
	volatile int32_t t20 = 339420301;

    t20 = (x81|((x82==x83)^x84));

    if (t20 != -18) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x86 = 6333U;
	static int16_t x87 = -1;
	volatile int32_t t21 = 0;

    t21 = (x85|((x86==x87)^x88));

    if (t21 != -124) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x89 = 13543700U;
	int32_t x90 = -885361305;
	uint16_t x91 = 15U;
	uint32_t t22 = UINT32_MAX;

    t22 = (x89|((x90==x91)^x92));

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x93 = INT8_MIN;
	static int8_t x95 = -1;
	uint8_t x96 = 8U;
	int32_t t23 = 13997;

    t23 = (x93|((x94==x95)^x96));

    if (t23 != -120) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = INT32_MAX;
	volatile int32_t x99 = -1;
	uint8_t x100 = UINT8_MAX;
	int32_t t24 = 46152;

    t24 = (x97|((x98==x99)^x100));

    if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 3LLU;
	static uint16_t x103 = UINT16_MAX;
	uint8_t x104 = 86U;
	uint64_t t25 = 138156685LLU;

    t25 = (x101|((x102==x103)^x104));

    if (t25 != 87LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	uint16_t x108 = 2U;

    t26 = (x105|((x106==x107)^x108));

    if (t26 != -2147483646) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 17U;
	volatile int8_t x110 = -14;
	uint64_t x111 = 104613042380LLU;
	uint8_t x112 = 0U;
	uint32_t t27 = 0U;

    t27 = (x109|((x110==x111)^x112));

    if (t27 != 17U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	int32_t x115 = INT32_MAX;
	static int16_t x116 = 1;
	int32_t t28 = -1330665;

    t28 = (x113|((x114==x115)^x116));

    if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = -1;
	volatile int16_t x118 = -14708;
	int64_t x119 = INT64_MAX;
	static volatile int8_t x120 = INT8_MIN;

    t29 = (x117|((x118==x119)^x120));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x122 = INT16_MAX;
	int8_t x123 = 1;
	volatile uint64_t t30 = 280LLU;

    t30 = (x121|((x122==x123)^x124));

    if (t30 != 2147483647LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MAX;
	uint32_t x126 = 750U;
	volatile uint16_t x127 = UINT16_MAX;
	static volatile int64_t x128 = INT64_MIN;
	int64_t t31 = -1LL;

    t31 = (x125|((x126==x127)^x128));

    if (t31 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x129 = UINT16_MAX;
	static int16_t x130 = INT16_MAX;
	uint8_t x131 = UINT8_MAX;
	int64_t x132 = INT64_MAX;
	int64_t t32 = INT64_MAX;

    t32 = (x129|((x130==x131)^x132));

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x133 = UINT8_MAX;
	int16_t x134 = -3;
	int64_t x136 = INT64_MIN;

    t33 = (x133|((x134==x135)^x136));

    if (t33 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x137 = INT64_MAX;
	uint16_t x138 = UINT16_MAX;
	uint32_t x139 = 147626U;
	volatile int8_t x140 = -1;
	static int64_t t34 = -12965773125305224LL;

    t34 = (x137|((x138==x139)^x140));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	volatile int16_t x142 = INT16_MIN;
	int16_t x143 = 42;

    t35 = (x141|((x142==x143)^x144));

    if (t35 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = -1;
	int64_t x146 = INT64_MIN;
	uint8_t x148 = 1U;
	int32_t t36 = 154;

    t36 = (x145|((x146==x147)^x148));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x150 = 1938869842552181455LLU;
	static int64_t x151 = INT64_MAX;
	int8_t x152 = -1;
	int32_t t37 = -2;

    t37 = (x149|((x150==x151)^x152));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 1LLU;
	static uint16_t x154 = UINT16_MAX;
	volatile uint64_t x155 = 5653518896LLU;
	uint32_t x156 = UINT32_MAX;
	volatile uint64_t t38 = 98964914069305LLU;

    t38 = (x153|((x154==x155)^x156));

    if (t38 != 4294967295LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -48;
	int64_t x158 = INT64_MAX;
	int64_t x159 = -44682411110075373LL;
	static volatile int64_t x160 = INT64_MAX;

    t39 = (x157|((x158==x159)^x160));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x161 = UINT64_MAX;
	uint32_t x162 = 521498U;
	int8_t x163 = -47;
	static int64_t x164 = INT64_MIN;

    t40 = (x161|((x162==x163)^x164));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x166 = INT8_MAX;
	uint16_t x167 = 36U;
	int64_t x168 = INT64_MAX;
	volatile int64_t t41 = INT64_MAX;

    t41 = (x165|((x166==x167)^x168));

    if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = 25;
	volatile int32_t x171 = INT32_MAX;
	static int16_t x172 = INT16_MIN;
	int32_t t42 = -1;

    t42 = (x169|((x170==x171)^x172));

    if (t42 != -32743) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = -13;
	static uint32_t x174 = UINT32_MAX;
	int32_t x175 = -3;
	static int64_t x176 = INT64_MAX;
	int64_t t43 = 3LL;

    t43 = (x173|((x174==x175)^x176));

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = INT32_MIN;
	volatile uint8_t x178 = 23U;
	volatile int64_t x179 = INT64_MIN;
	static volatile int32_t t44 = -1;

    t44 = (x177|((x178==x179)^x180));

    if (t44 != -2147483646) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = UINT64_MAX;
	volatile int64_t x182 = INT64_MIN;
	uint16_t x183 = UINT16_MAX;
	int64_t x184 = INT64_MAX;
	uint64_t t45 = UINT64_MAX;

    t45 = (x181|((x182==x183)^x184));

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x188 = 11U;
	static int32_t t46 = 12995369;

    t46 = (x185|((x186==x187)^x188));

    if (t46 != -32757) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 2U;
	uint16_t x191 = UINT16_MAX;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 30;

    t47 = (x189|((x190==x191)^x192));

    if (t47 != -32766) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -1;
	uint32_t x194 = UINT32_MAX;
	int64_t x195 = -1LL;
	uint16_t x196 = 0U;
	volatile int32_t t48 = -15;

    t48 = (x193|((x194==x195)^x196));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 759U;
	int32_t x200 = -98;
	uint32_t t49 = UINT32_MAX;

    t49 = (x197|((x198==x199)^x200));

    if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = -1LL;
	volatile int16_t x202 = INT16_MIN;
	int16_t x203 = INT16_MIN;
	int64_t x204 = -1LL;
	volatile int64_t t50 = -1LL;

    t50 = (x201|((x202==x203)^x204));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x206 = 24466U;
	static int64_t x207 = INT64_MAX;
	int32_t x208 = -12341403;
	volatile int32_t t51 = 12333;

    t51 = (x205|((x206==x207)^x208));

    if (t51 != -12341249) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x209 = INT32_MIN;
	static int64_t x210 = 353866390503821985LL;
	uint32_t x211 = 306298389U;

    t52 = (x209|((x210==x211)^x212));

    if (t52 != -2147483312) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -1;
	uint32_t x214 = 14U;
	int32_t x216 = 1130500;

    t53 = (x213|((x214==x215)^x216));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	uint16_t x218 = UINT16_MAX;
	uint32_t x219 = 12U;
	volatile int64_t t54 = 7562835LL;

    t54 = (x217|((x218==x219)^x220));

    if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 142U;
	uint64_t x222 = 665578080203498591LLU;
	volatile int32_t x223 = -1;
	int16_t x224 = INT16_MIN;
	int32_t t55 = 3;

    t55 = (x221|((x222==x223)^x224));

    if (t55 != -32626) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x225 = 2288352109674333314LLU;
	static int8_t x226 = -26;
	int64_t x227 = -1LL;
	int64_t x228 = INT64_MIN;
	volatile uint64_t t56 = 6869LLU;

    t56 = (x225|((x226==x227)^x228));

    if (t56 != 11511724146529109122LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint32_t x229 = 92866574U;
	int64_t x232 = INT64_MAX;
	static volatile int64_t t57 = INT64_MAX;

    t57 = (x229|((x230==x231)^x232));

    if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = 0;
	int32_t x234 = -463854;
	int16_t x236 = INT16_MAX;
	static int32_t t58 = -29581;

    t58 = (x233|((x234==x235)^x236));

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = 43;
	uint16_t x239 = UINT16_MAX;
	int64_t x240 = INT64_MIN;
	int64_t t59 = 3353195107267963LL;

    t59 = (x237|((x238==x239)^x240));

    if (t59 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x241 = -1;
	uint8_t x242 = 4U;
	volatile int16_t x243 = INT16_MIN;
	int16_t x244 = -9929;
	volatile int32_t t60 = 2829;

    t60 = (x241|((x242==x243)^x244));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = 23271;
	int64_t x246 = -55LL;
	int32_t x247 = INT32_MIN;
	volatile int32_t x248 = INT32_MAX;
	volatile int32_t t61 = INT32_MAX;

    t61 = (x245|((x246==x247)^x248));

    if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = UINT32_MAX;
	volatile uint16_t x251 = UINT16_MAX;
	int64_t x252 = 2429696LL;
	int64_t t62 = -83157LL;

    t62 = (x249|((x250==x251)^x252));

    if (t62 != 4294967295LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = 218U;
	uint8_t x254 = UINT8_MAX;
	int64_t x256 = 367184313972LL;
	volatile int64_t t63 = 19LL;

    t63 = (x253|((x254==x255)^x256));

    if (t63 != 367184314110LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x257 = -1LL;
	int64_t x259 = INT64_MIN;
	volatile int64_t t64 = -689918211048046LL;

    t64 = (x257|((x258==x259)^x260));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	uint64_t x262 = 786161LLU;
	int32_t x263 = -22;
	uint32_t x264 = UINT32_MAX;
	uint32_t t65 = UINT32_MAX;

    t65 = (x261|((x262==x263)^x264));

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x266 = INT64_MIN;
	static int16_t x267 = INT16_MAX;
	volatile int32_t t66 = -2;

    t66 = (x265|((x266==x267)^x268));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x269 = 16860132829410LLU;
	volatile int16_t x270 = -1;
	int16_t x271 = -48;
	static uint8_t x272 = UINT8_MAX;
	volatile uint64_t t67 = 516800157174010911LLU;

    t67 = (x269|((x270==x271)^x272));

    if (t67 != 16860132829439LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MAX;
	int32_t x274 = 0;

    t68 = (x273|((x274==x275)^x276));

    if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -62;
	int8_t x280 = INT8_MIN;

    t69 = (x277|((x278==x279)^x280));

    if (t69 != -62) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x282 = -1856358227261092LL;
	volatile int8_t x283 = -1;
	uint64_t t70 = UINT64_MAX;

    t70 = (x281|((x282==x283)^x284));

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x285 = INT16_MAX;
	int64_t x286 = -98LL;
	uint8_t x287 = 0U;
	int64_t x288 = -1LL;
	static volatile int64_t t71 = 262LL;

    t71 = (x285|((x286==x287)^x288));

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -4469281036534LL;
	volatile int8_t x291 = -1;
	static volatile int16_t x292 = INT16_MIN;
	volatile int64_t t72 = -46757334292679116LL;

    t72 = (x289|((x290==x291)^x292));

    if (t72 != -6390LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = -14642;
	int16_t x295 = INT16_MIN;
	int16_t x296 = -19;
	int32_t t73 = 0;

    t73 = (x293|((x294==x295)^x296));

    if (t73 != -17) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -41;
	uint8_t x298 = UINT8_MAX;
	int32_t x299 = -535355880;
	int8_t x300 = INT8_MIN;
	int32_t t74 = -122;

    t74 = (x297|((x298==x299)^x300));

    if (t74 != -41) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 7563U;
	uint64_t x302 = UINT64_MAX;
	int64_t x304 = -1LL;
	volatile int64_t t75 = 502598LL;

    t75 = (x301|((x302==x303)^x304));

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -1;
	int8_t x306 = INT8_MAX;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MIN;

    t76 = (x305|((x306==x307)^x308));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x309 = -1;
	uint16_t x310 = UINT16_MAX;
	int8_t x311 = INT8_MIN;
	uint64_t x312 = 252591247481339LLU;
	uint64_t t77 = UINT64_MAX;

    t77 = (x309|((x310==x311)^x312));

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x316 = 58;
	uint64_t t78 = UINT64_MAX;

    t78 = (x313|((x314==x315)^x316));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	static volatile int32_t x319 = -1;
	int64_t x320 = INT64_MAX;
	volatile int64_t t79 = 45231326455058LL;

    t79 = (x317|((x318==x319)^x320));

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x322 = UINT64_MAX;
	uint64_t x323 = 471349984733804LLU;
	static int32_t x324 = INT32_MIN;
	volatile int32_t t80 = INT32_MIN;

    t80 = (x321|((x322==x323)^x324));

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MAX;
	int16_t x328 = -34;
	volatile int32_t t81 = 1;

    t81 = (x325|((x326==x327)^x328));

    if (t81 != -34) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = -1;
	uint64_t x330 = UINT64_MAX;
	int8_t x331 = 1;
	uint32_t x332 = UINT32_MAX;
	uint32_t t82 = UINT32_MAX;

    t82 = (x329|((x330==x331)^x332));

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x333 = 3U;
	uint16_t x334 = 21U;
	static int32_t x335 = 1867;
	volatile int64_t t83 = INT64_MAX;

    t83 = (x333|((x334==x335)^x336));

    if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x338 = 1;
	static int16_t x339 = -615;
	int8_t x340 = 39;
	static volatile int32_t t84 = 1488;

    t84 = (x337|((x338==x339)^x340));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x341 = INT8_MAX;
	int32_t x344 = INT32_MAX;
	int32_t t85 = INT32_MAX;

    t85 = (x341|((x342==x343)^x344));

    if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = -1;
	volatile int8_t x348 = -1;
	static volatile int32_t t86 = 97058622;

    t86 = (x345|((x346==x347)^x348));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x351 = -1;
	static volatile uint64_t t87 = 7LLU;

    t87 = (x349|((x350==x351)^x352));

    if (t87 != 9223372036855038611LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x353 = 37U;
	volatile int64_t x354 = -14065LL;
	static volatile uint8_t x355 = UINT8_MAX;
	int8_t x356 = INT8_MIN;
	volatile int32_t t88 = 2;

    t88 = (x353|((x354==x355)^x356));

    if (t88 != -91) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x358 = INT32_MIN;
	static int8_t x359 = -50;
	int64_t x360 = INT64_MIN;
	static int64_t t89 = -1129363189841581145LL;

    t89 = (x357|((x358==x359)^x360));

    if (t89 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -180001779;
	int8_t x362 = INT8_MAX;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t90 = UINT64_MAX;

    t90 = (x361|((x362==x363)^x364));

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 8211;
	volatile uint8_t x366 = UINT8_MAX;
	int16_t x367 = INT16_MIN;
	volatile int64_t x368 = -1320707249760LL;
	static volatile int64_t t91 = 2442LL;

    t91 = (x365|((x366==x367)^x368));

    if (t91 != -1320707249741LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x369 = 1159;
	volatile int16_t x371 = -1;
	int16_t x372 = INT16_MIN;
	int32_t t92 = 200196446;

    t92 = (x369|((x370==x371)^x372));

    if (t92 != -31609) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x373 = UINT8_MAX;
	uint32_t x374 = 1U;
	int8_t x375 = INT8_MIN;
	int8_t x376 = 9;
	volatile int32_t t93 = -15675813;

    t93 = (x373|((x374==x375)^x376));

    if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = 15279;
	int16_t x379 = INT16_MIN;
	uint16_t x380 = 27178U;
	int32_t t94 = -370293230;

    t94 = (x377|((x378==x379)^x380));

    if (t94 != 31663) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint32_t x381 = UINT32_MAX;
	uint64_t x383 = 27881LLU;
	static int64_t x384 = INT64_MAX;
	int64_t t95 = INT64_MAX;

    t95 = (x381|((x382==x383)^x384));

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MIN;
	volatile int8_t x386 = 16;
	int8_t x387 = INT8_MIN;
	static int32_t x388 = 9616;

    t96 = (x385|((x386==x387)^x388));

    if (t96 != -23152) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -1;
	uint16_t x390 = UINT16_MAX;
	int64_t x391 = INT64_MAX;
	int8_t x392 = INT8_MAX;
	volatile int32_t t97 = -318936;

    t97 = (x389|((x390==x391)^x392));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -157;
	int64_t x394 = INT64_MIN;
	uint32_t x395 = 270739U;
	uint16_t x396 = UINT16_MAX;

    t98 = (x393|((x394==x395)^x396));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x399 = -1;
	static volatile uint64_t x400 = UINT64_MAX;
	uint64_t t99 = UINT64_MAX;

    t99 = (x397|((x398==x399)^x400));

    if (t99 != UINT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x401 = -1;
	volatile uint8_t x402 = 53U;
	static int64_t x403 = INT64_MAX;

    t100 = (x401|((x402==x403)^x404));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 6237933LLU;
	uint64_t x406 = UINT64_MAX;
	int16_t x407 = 7062;

    t101 = (x405|((x406==x407)^x408));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	volatile int32_t x410 = 98;
	static uint16_t x411 = UINT16_MAX;
	volatile int64_t x412 = -1LL;
	volatile int64_t t102 = 2LL;

    t102 = (x409|((x410==x411)^x412));

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MAX;
	int8_t x414 = INT8_MIN;
	static volatile uint8_t x415 = 1U;
	static int64_t x416 = -1LL;
	int64_t t103 = 15453LL;

    t103 = (x413|((x414==x415)^x416));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 96U;
	static int32_t x418 = INT32_MIN;
	volatile uint8_t x419 = UINT8_MAX;
	static int32_t t104 = 295821;

    t104 = (x417|((x418==x419)^x420));

    if (t104 != 65535) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -13;
	int64_t x422 = -3383170370LL;
	uint64_t x423 = 16067687852667444LLU;
	int16_t x424 = -15412;
	static volatile int32_t t105 = -514606;

    t105 = (x421|((x422==x423)^x424));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 3949U;
	static int8_t x426 = INT8_MIN;
	volatile uint8_t x428 = 22U;
	int32_t t106 = -136222244;

    t106 = (x425|((x426==x427)^x428));

    if (t106 != 3967) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MIN;
	uint64_t x430 = 28796713303636599LLU;
	int8_t x431 = INT8_MIN;
	static uint32_t x432 = 7784U;
	uint32_t t107 = 163508719U;

    t107 = (x429|((x430==x431)^x432));

    if (t107 != 4294967272U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	uint64_t x434 = 3026557587LLU;
	static int32_t x435 = 3;
	volatile int8_t x436 = INT8_MIN;

    t108 = (x433|((x434==x435)^x436));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = INT8_MAX;
	int64_t x438 = -1LL;
	int8_t x439 = 1;
	volatile uint8_t x440 = 30U;
	volatile int32_t t109 = 216836;

    t109 = (x437|((x438==x439)^x440));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 41U;
	static int32_t x442 = INT32_MIN;
	uint32_t x444 = 2U;
	uint32_t t110 = 28929U;

    t110 = (x441|((x442==x443)^x444));

    if (t110 != 43U) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x445 = 0U;
	uint64_t x446 = 1802LLU;
	int16_t x448 = INT16_MIN;
	int32_t t111 = -1;

    t111 = (x445|((x446==x447)^x448));

    if (t111 != -32768) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = UINT16_MAX;
	int32_t x450 = INT32_MIN;
	static uint64_t x451 = 81016000LLU;
	int32_t t112 = -315;

    t112 = (x449|((x450==x451)^x452));

    if (t112 != 65535) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 4U;
	uint8_t x454 = 1U;
	int8_t x455 = INT8_MAX;
	uint32_t x456 = UINT32_MAX;

    t113 = (x453|((x454==x455)^x456));

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	int16_t x459 = -2071;
	int64_t t114 = -2993706LL;

    t114 = (x457|((x458==x459)^x460));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MAX;
	int16_t x462 = 52;
	uint32_t x463 = 13714216U;
	uint16_t x464 = UINT16_MAX;
	int64_t t115 = INT64_MAX;

    t115 = (x461|((x462==x463)^x464));

    if (t115 != INT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x465 = 0;
	int16_t x468 = INT16_MAX;

    t116 = (x465|((x466==x467)^x468));

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x469 = 1069195883LLU;
	uint8_t x470 = 1U;
	uint32_t x471 = 2U;

    t117 = (x469|((x470==x471)^x472));

    if (t117 != 9223372037923971691LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint32_t x473 = 25U;
	int16_t x474 = -1;
	volatile int32_t x476 = 0;
	volatile uint32_t t118 = 393877U;

    t118 = (x473|((x474==x475)^x476));

    if (t118 != 25U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x477 = INT32_MIN;
	int64_t x480 = -1LL;
	int64_t t119 = -118182LL;

    t119 = (x477|((x478==x479)^x480));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x481 = 1753253895U;
	volatile int16_t x482 = 1583;
	volatile int64_t x483 = -1LL;
	volatile int16_t x484 = -109;
	static volatile uint32_t t120 = 912U;

    t120 = (x481|((x482==x483)^x484));

    if (t120 != 4294967191U) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x485 = 220171095270LLU;
	uint16_t x488 = 0U;
	uint64_t t121 = 2129336833566LLU;

    t121 = (x485|((x486==x487)^x488));

    if (t121 != 220171095270LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x490 = 1U;
	int64_t x491 = 100381966LL;

    t122 = (x489|((x490==x491)^x492));

    if (t122 != -339LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = -1;
	int16_t x494 = INT16_MIN;
	volatile uint64_t x495 = UINT64_MAX;
	int8_t x496 = -1;
	int32_t t123 = 1439313;

    t123 = (x493|((x494==x495)^x496));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = INT8_MAX;
	static int8_t x498 = INT8_MAX;
	volatile uint32_t x499 = 1U;
	int8_t x500 = INT8_MAX;
	volatile int32_t t124 = 104964784;

    t124 = (x497|((x498==x499)^x500));

    if (t124 != 127) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x502 = 2368;
	uint32_t x504 = UINT32_MAX;
	volatile uint32_t t125 = UINT32_MAX;

    t125 = (x501|((x502==x503)^x504));

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 1U;
	volatile int16_t x507 = INT16_MIN;
	uint16_t x508 = UINT16_MAX;
	static volatile int32_t t126 = 1742;

    t126 = (x505|((x506==x507)^x508));

    if (t126 != 65535) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x510 = INT64_MIN;
	static uint8_t x512 = 0U;
	int32_t t127 = 211874793;

    t127 = (x509|((x510==x511)^x512));

    if (t127 != 127) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	uint8_t x514 = 18U;
	uint16_t x515 = 3U;
	int64_t x516 = INT64_MAX;
	static int64_t t128 = -8232237201LL;

    t128 = (x513|((x514==x515)^x516));

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = INT8_MIN;
	static int32_t t129 = 15666;

    t129 = (x517|((x518==x519)^x520));

    if (t129 != -60) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 12U;
	int8_t x522 = INT8_MIN;
	uint32_t x523 = 0U;
	uint32_t x524 = UINT32_MAX;

    t130 = (x521|((x522==x523)^x524));

    if (t130 != UINT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x526 = INT8_MAX;
	int64_t x527 = INT64_MIN;
	uint32_t t131 = 11577U;

    t131 = (x525|((x526==x527)^x528));

    if (t131 != 2147551969U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x529 = INT64_MAX;
	uint32_t x530 = 14U;
	int8_t x531 = -6;
	int16_t x532 = -1;
	volatile int64_t t132 = -20LL;

    t132 = (x529|((x530==x531)^x532));

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x533 = 3U;
	uint16_t x534 = 18U;
	volatile uint16_t x535 = UINT16_MAX;
	int64_t x536 = INT64_MAX;
	volatile int64_t t133 = INT64_MAX;

    t133 = (x533|((x534==x535)^x536));

    if (t133 != INT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MAX;
	int64_t x538 = INT64_MIN;
	int8_t x540 = INT8_MIN;
	volatile int32_t t134 = 1;

    t134 = (x537|((x538==x539)^x540));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	static int64_t x542 = -1LL;
	uint8_t x543 = 2U;
	int32_t t135 = 404500712;

    t135 = (x541|((x542==x543)^x544));

    if (t135 != -32767) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x546 = 3650U;
	uint32_t x548 = UINT32_MAX;
	volatile int64_t t136 = INT64_MAX;

    t136 = (x545|((x546==x547)^x548));

    if (t136 != INT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x549 = 5998U;
	int16_t x550 = -2;
	uint16_t x551 = UINT16_MAX;
	int64_t x552 = INT64_MIN;
	volatile int64_t t137 = -738LL;

    t137 = (x549|((x550==x551)^x552));

    if (t137 != -9223372036854769810LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x556 = -1;
	volatile uint32_t t138 = UINT32_MAX;

    t138 = (x553|((x554==x555)^x556));

    if (t138 != UINT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 95U;
	int8_t x558 = INT8_MIN;
	int64_t x559 = INT64_MIN;
	static uint8_t x560 = 1U;
	volatile int32_t t139 = 61;

    t139 = (x557|((x558==x559)^x560));

    if (t139 != 95) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MIN;
	volatile int16_t x562 = INT16_MIN;
	int16_t x563 = -1;
	int8_t x564 = INT8_MAX;
	volatile int32_t t140 = 1;

    t140 = (x561|((x562==x563)^x564));

    if (t140 != -32641) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -1;
	static volatile int32_t x566 = 2;
	volatile int64_t x567 = INT64_MIN;
	uint64_t x568 = 1760212432686603365LLU;
	volatile uint64_t t141 = UINT64_MAX;

    t141 = (x565|((x566==x567)^x568));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = UINT64_MAX;
	int32_t x570 = INT32_MIN;
	uint16_t x572 = 0U;

    t142 = (x569|((x570==x571)^x572));

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	int32_t x574 = -10772806;
	static int32_t x575 = INT32_MIN;

    t143 = (x573|((x574==x575)^x576));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -1;
	int32_t x580 = 2093876;
	volatile int32_t t144 = -33;

    t144 = (x577|((x578==x579)^x580));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x582 = INT16_MAX;
	static uint64_t x583 = UINT64_MAX;
	int8_t x584 = INT8_MAX;

    t145 = (x581|((x582==x583)^x584));

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x585 = UINT8_MAX;
	static int8_t x586 = INT8_MIN;
	int32_t x587 = -162;
	uint64_t x588 = 10001072899LLU;

    t146 = (x585|((x586==x587)^x588));

    if (t146 != 10001073151LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	static uint16_t x591 = 3897U;
	volatile int16_t x592 = INT16_MIN;
	int32_t t147 = -7786083;

    t147 = (x589|((x590==x591)^x592));

    if (t147 != -32768) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x594 = 61333930LL;
	int64_t x595 = -1LL;
	int16_t x596 = -1;

    t148 = (x593|((x594==x595)^x596));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x598 = -976221095;
	static uint8_t x599 = 2U;
	volatile int8_t x600 = -1;

    t149 = (x597|((x598==x599)^x600));

    if (t149 != UINT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint16_t x602 = 3U;
	int64_t x604 = INT64_MIN;
	int64_t t150 = 247158011482798LL;

    t150 = (x601|((x602==x603)^x604));

    if (t150 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 1196956009U;
	uint8_t x606 = 61U;
	static int32_t x608 = -1;
	uint32_t t151 = UINT32_MAX;

    t151 = (x605|((x606==x607)^x608));

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x609 = 31371921936499647LLU;
	uint64_t t152 = UINT64_MAX;

    t152 = (x609|((x610==x611)^x612));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	volatile uint32_t x614 = 12U;
	static uint16_t x615 = 927U;
	int8_t x616 = INT8_MIN;
	int32_t t153 = -1;

    t153 = (x613|((x614==x615)^x616));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x617 = -1;
	int8_t x618 = 4;
	uint8_t x620 = 3U;
	int32_t t154 = 3270462;

    t154 = (x617|((x618==x619)^x620));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x621 = 29U;
	volatile uint16_t x622 = UINT16_MAX;
	uint8_t x623 = 1U;
	volatile int64_t x624 = INT64_MIN;

    t155 = (x621|((x622==x623)^x624));

    if (t155 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -268;
	uint16_t x626 = 12U;
	volatile uint64_t x627 = UINT64_MAX;
	static volatile uint16_t x628 = 10268U;
	static int32_t t156 = -984826;

    t156 = (x625|((x626==x627)^x628));

    if (t156 != -260) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = 2840;
	static int64_t x630 = INT64_MIN;
	static int64_t x632 = INT64_MAX;

    t157 = (x629|((x630==x631)^x632));

    if (t157 != INT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	uint64_t x635 = 20LLU;
	int32_t x636 = -9;
	volatile int64_t t158 = -659566931302535LL;

    t158 = (x633|((x634==x635)^x636));

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 174U;
	static int16_t x638 = INT16_MAX;
	static int32_t x639 = -1;
	static int32_t x640 = INT32_MAX;
	volatile int32_t t159 = INT32_MAX;

    t159 = (x637|((x638==x639)^x640));

    if (t159 != INT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = UINT64_MAX;
	int8_t x643 = -1;
	uint64_t t160 = UINT64_MAX;

    t160 = (x641|((x642==x643)^x644));

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x645 = UINT64_MAX;
	int32_t x646 = INT32_MIN;
	volatile int8_t x647 = INT8_MAX;
	volatile int16_t x648 = 15;
	uint64_t t161 = UINT64_MAX;

    t161 = (x645|((x646==x647)^x648));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 3U;
	static uint16_t x650 = UINT16_MAX;
	int32_t x651 = INT32_MIN;
	uint32_t x652 = 492U;

    t162 = (x649|((x650==x651)^x652));

    if (t162 != 495U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x653 = -1;
	int32_t x654 = INT32_MIN;
	int32_t x655 = -364;
	int8_t x656 = 0;

    t163 = (x653|((x654==x655)^x656));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = 339;
	static uint32_t x659 = UINT32_MAX;
	volatile uint64_t x660 = 2329546727LLU;
	uint64_t t164 = 205936294LLU;

    t164 = (x657|((x658==x659)^x660));

    if (t164 != 2329546743LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = INT16_MAX;
	static int8_t x662 = INT8_MAX;
	volatile int16_t x664 = -1;

    t165 = (x661|((x662==x663)^x664));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MAX;
	static int32_t x667 = -344;
	int8_t x668 = -1;

    t166 = (x665|((x666==x667)^x668));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 4676785LLU;
	static int32_t x670 = INT32_MIN;
	uint8_t x672 = 52U;
	uint64_t t167 = 38929976LLU;

    t167 = (x669|((x670==x671)^x672));

    if (t167 != 4676789LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -3;
	int32_t x674 = INT32_MAX;
	uint8_t x675 = 63U;
	uint32_t x676 = 1146942U;
	volatile uint32_t t168 = UINT32_MAX;

    t168 = (x673|((x674==x675)^x676));

    if (t168 != UINT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = UINT8_MAX;
	static int8_t x678 = INT8_MAX;
	int64_t x679 = INT64_MAX;
	int8_t x680 = INT8_MIN;
	int32_t t169 = -561706189;

    t169 = (x677|((x678==x679)^x680));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	uint64_t x682 = UINT64_MAX;
	uint16_t x683 = UINT16_MAX;
	uint64_t x684 = UINT64_MAX;
	volatile uint64_t t170 = UINT64_MAX;

    t170 = (x681|((x682==x683)^x684));

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint8_t x685 = UINT8_MAX;
	static int32_t t171 = 0;

    t171 = (x685|((x686==x687)^x688));

    if (t171 != 255) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = -1;
	int16_t x690 = 22;
	int32_t x691 = INT32_MAX;
	int32_t x692 = 49603;
	volatile int32_t t172 = -11118357;

    t172 = (x689|((x690==x691)^x692));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MAX;
	static int64_t x694 = 2570796307584LL;
	int64_t t173 = 2414099888LL;

    t173 = (x693|((x694==x695)^x696));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	int32_t x698 = 1;
	uint64_t x700 = UINT64_MAX;

    t174 = (x697|((x698==x699)^x700));

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	static int8_t x703 = INT8_MIN;
	volatile uint16_t x704 = UINT16_MAX;

    t175 = (x701|((x702==x703)^x704));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MAX;
	uint16_t x706 = UINT16_MAX;
	uint16_t x707 = UINT16_MAX;
	volatile int32_t x708 = -104518263;

    t176 = (x705|((x706==x707)^x708));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = 390211517566LL;
	int16_t x710 = 0;
	static int16_t x711 = 51;
	int32_t x712 = -1;
	volatile int64_t t177 = -1LL;

    t177 = (x709|((x710==x711)^x712));

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x714 = -1;
	uint16_t x715 = 13U;
	volatile int64_t t178 = -17531125406867LL;

    t178 = (x713|((x714==x715)^x716));

    if (t178 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x718 = -7649;
	int16_t x719 = INT16_MAX;
	static int32_t x720 = -118;

    t179 = (x717|((x718==x719)^x720));

    if (t179 != -50LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x722 = 6334600236060338LL;
	int64_t x723 = INT64_MIN;
	static int8_t x724 = -26;
	int32_t t180 = 1;

    t180 = (x721|((x722==x723)^x724));

    if (t180 != -25) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = -1;
	uint32_t x726 = 235214072U;
	int32_t x727 = -75104;
	static int64_t x728 = 131LL;
	int64_t t181 = -234257LL;

    t181 = (x725|((x726==x727)^x728));

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -1;
	int32_t x730 = INT32_MAX;
	volatile int32_t x732 = INT32_MIN;
	int32_t t182 = -98;

    t182 = (x729|((x730==x731)^x732));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 126U;
	uint16_t x734 = 2535U;
	int8_t x736 = INT8_MIN;

    t183 = (x733|((x734==x735)^x736));

    if (t183 != -2) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	static volatile int8_t x738 = -1;
	int8_t x739 = 7;
	int8_t x740 = INT8_MIN;
	int32_t t184 = 57252;

    t184 = (x737|((x738==x739)^x740));

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MIN;
	int16_t x742 = INT16_MIN;
	int32_t x743 = INT32_MIN;
	int16_t x744 = -1;
	int32_t t185 = -1;

    t185 = (x741|((x742==x743)^x744));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = 90LL;
	volatile int32_t x746 = 4;
	int64_t t186 = 8915880615527555LL;

    t186 = (x745|((x746==x747)^x748));

    if (t186 != 94LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x749 = 7U;
	volatile int8_t x750 = -1;
	volatile uint64_t x751 = UINT64_MAX;
	uint32_t x752 = 3796U;
	static uint32_t t187 = 160U;

    t187 = (x749|((x750==x751)^x752));

    if (t187 != 3799U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = -1;
	volatile int32_t x754 = INT32_MIN;
	int64_t x755 = 2578035LL;
	volatile int32_t x756 = 493804;
	static volatile int32_t t188 = -1;

    t188 = (x753|((x754==x755)^x756));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x757 = -376228802300LL;
	uint16_t x758 = 1U;
	volatile int16_t x759 = -89;
	static volatile int64_t x760 = INT64_MAX;

    t189 = (x757|((x758==x759)^x760));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = UINT32_MAX;
	uint16_t x763 = 1101U;
	int16_t x764 = -1;
	static volatile uint32_t t190 = UINT32_MAX;

    t190 = (x761|((x762==x763)^x764));

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MAX;
	int8_t x766 = INT8_MIN;
	uint32_t x767 = 1766531234U;
	volatile int16_t x768 = INT16_MAX;
	int64_t t191 = INT64_MAX;

    t191 = (x765|((x766==x767)^x768));

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x770 = INT8_MIN;
	static uint16_t x771 = 45U;
	int8_t x772 = 29;
	volatile int32_t t192 = -351023711;

    t192 = (x769|((x770==x771)^x772));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -1;
	uint64_t x775 = 402718103489LLU;
	volatile int8_t x776 = -1;
	volatile int32_t t193 = -3411;

    t193 = (x773|((x774==x775)^x776));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x779 = 5U;
	static uint32_t x780 = UINT32_MAX;
	static int64_t t194 = 1301453871LL;

    t194 = (x777|((x778==x779)^x780));

    if (t194 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x781 = 669;
	int64_t x782 = INT64_MIN;
	volatile int32_t x783 = INT32_MAX;
	uint16_t x784 = 16U;
	volatile int32_t t195 = 5359040;

    t195 = (x781|((x782==x783)^x784));

    if (t195 != 669) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 1082922124736LLU;
	static uint64_t x786 = 1159496588469907LLU;
	int64_t x787 = INT64_MIN;
	int8_t x788 = INT8_MIN;
	volatile uint64_t t196 = 1158LLU;

    t196 = (x785|((x786==x787)^x788));

    if (t196 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = 0;
	static uint64_t x790 = UINT64_MAX;
	int64_t x791 = 59934945086180LL;
	volatile uint32_t x792 = 1U;
	uint32_t t197 = 6534U;

    t197 = (x789|((x790==x791)^x792));

    if (t197 != 1U) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = -1LL;
	volatile uint32_t x794 = 134U;
	uint32_t x796 = 189176331U;
	static int64_t t198 = 141489983574350396LL;

    t198 = (x793|((x794==x795)^x796));

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 420U;
	volatile int64_t x798 = -470684933772486LL;
	int16_t x799 = INT16_MIN;
	int64_t x800 = -78084LL;
	int64_t t199 = 57808LL;

    t199 = (x797|((x798==x799)^x800));

    if (t199 != -77828LL) { NG(); } else { ; }
	
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

