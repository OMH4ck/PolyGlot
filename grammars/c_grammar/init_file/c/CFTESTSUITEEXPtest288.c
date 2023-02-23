
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

static volatile int32_t x6 = -1;
static int32_t t1 = 0;
static int8_t x10 = INT8_MIN;
int8_t x14 = INT8_MIN;
int64_t x19 = -1LL;
int8_t x25 = -1;
volatile int8_t x29 = INT8_MIN;
volatile uint32_t x37 = UINT32_MAX;
volatile int32_t x38 = INT32_MAX;
static volatile int8_t x46 = -1;
int64_t x48 = INT64_MIN;
int32_t x56 = -1;
int32_t t13 = -662049;
volatile int64_t x61 = 89LL;
static volatile uint16_t x67 = UINT16_MAX;
int64_t x68 = 509LL;
volatile int64_t x73 = INT64_MAX;
volatile uint8_t x76 = 10U;
int8_t x79 = INT8_MIN;
volatile uint16_t x80 = 1388U;
volatile int32_t t18 = 174271;
static int8_t x82 = INT8_MIN;
int32_t x85 = INT32_MIN;
volatile int32_t x90 = -2060;
static volatile int32_t x92 = INT32_MAX;
static int32_t x102 = INT32_MAX;
volatile int32_t t23 = 0;
volatile uint16_t x111 = 12637U;
uint16_t x115 = 22341U;
int32_t t26 = 777840298;
int32_t x117 = INT32_MIN;
static int32_t x118 = -1;
volatile int64_t x119 = 993463618883LL;
static int64_t x123 = INT64_MIN;
int32_t t29 = -12;
int64_t x134 = INT64_MIN;
volatile int64_t x135 = -1LL;
int8_t x140 = INT8_MIN;
int32_t t32 = 391;
volatile uint8_t x159 = UINT8_MAX;
int8_t x168 = -16;
volatile int8_t x169 = -11;
static int32_t t39 = 3751;
int32_t t41 = 67;
static int16_t x182 = INT16_MIN;
uint64_t x187 = UINT64_MAX;
static int8_t x190 = 0;
int16_t x192 = INT16_MIN;
int32_t t44 = -2178666;
static volatile int32_t x200 = 110;
volatile uint8_t x204 = 27U;
uint32_t x208 = 23037U;
uint64_t x209 = 64808592917132LLU;
int8_t x214 = -1;
int64_t x225 = INT64_MAX;
int16_t x231 = INT16_MAX;
int32_t t53 = -18768389;
int16_t x237 = -4415;
uint16_t x238 = UINT16_MAX;
volatile int8_t x240 = INT8_MIN;
volatile int32_t t55 = 74;
static int32_t t56 = -194;
uint64_t x246 = UINT64_MAX;
int16_t x249 = INT16_MAX;
uint32_t x251 = UINT32_MAX;
int32_t x268 = -1;
volatile int64_t x280 = INT64_MIN;
uint8_t x297 = 26U;
uint16_t x302 = 169U;
uint32_t x305 = 1361794988U;
uint32_t x308 = 1280518365U;
int64_t x314 = -1LL;
int32_t x315 = INT32_MIN;
uint16_t x317 = UINT16_MAX;
uint8_t x318 = 89U;
int8_t x326 = INT8_MIN;
int32_t t74 = -8364235;
int16_t x330 = INT16_MIN;
static uint32_t x334 = UINT32_MAX;
int64_t x336 = -48202472792705035LL;
int8_t x341 = -1;
uint8_t x351 = 26U;
static int32_t x358 = -1;
uint64_t x359 = 0LLU;
volatile int8_t x360 = -1;
int16_t x363 = INT16_MAX;
volatile int32_t t83 = -821596;
static int16_t x367 = -2;
static volatile int32_t t86 = 1;
int32_t x388 = -11809;
int8_t x389 = -5;
uint16_t x390 = 1U;
int64_t x392 = INT64_MAX;
static int32_t t91 = 43;
uint64_t x404 = UINT64_MAX;
int32_t x406 = -9072;
int32_t t93 = 2;
int64_t x427 = -154LL;
volatile int32_t t96 = -4608553;
volatile uint8_t x447 = UINT8_MAX;
uint64_t x449 = 8704420526516741LLU;
volatile uint32_t x451 = 1795497U;
int64_t x453 = INT64_MIN;
int8_t x454 = INT8_MIN;
volatile int32_t t102 = -3672731;
int64_t x462 = INT64_MIN;
volatile int32_t t103 = -11383393;
int32_t t106 = 7706;
uint16_t x482 = 53U;
int16_t x490 = INT16_MAX;
int16_t x501 = INT16_MIN;
int8_t x511 = -1;
uint16_t x522 = 140U;
int64_t x526 = -1LL;
uint64_t x528 = 0LLU;
uint8_t x535 = UINT8_MAX;
int32_t t119 = -81;
int16_t x556 = -14657;
int32_t t122 = 289469;
int16_t x563 = INT16_MAX;
uint8_t x565 = 73U;
static int32_t x568 = -458;
int64_t x569 = -1LL;
int32_t x580 = -1;
volatile int32_t t127 = -3;
volatile int32_t x601 = 2;
uint8_t x603 = UINT8_MAX;
int8_t x612 = -1;
volatile int32_t t132 = 29832;
int32_t x613 = -14745786;
uint8_t x615 = 4U;
static int32_t t133 = -1;
int8_t x617 = 1;
volatile int32_t t134 = -7;
static uint32_t x623 = UINT32_MAX;
volatile int32_t t135 = -25;
uint16_t x635 = UINT16_MAX;
static int64_t x638 = 34974870206LL;
volatile int8_t x639 = -1;
volatile int32_t t139 = 3000098;
int64_t x647 = INT64_MIN;
volatile int8_t x654 = -1;
static int32_t x655 = 1063331079;
int8_t x658 = INT8_MIN;
int16_t x661 = 2040;
uint16_t x669 = UINT16_MAX;
volatile int64_t x671 = -1LL;
int8_t x676 = INT8_MIN;
int32_t t146 = 1;
int32_t x679 = 10519708;
int16_t x680 = -1;
int8_t x682 = -11;
uint32_t x690 = 1648208U;
static int32_t x693 = INT32_MIN;
int64_t x706 = -3049215489809852440LL;
uint8_t x710 = UINT8_MAX;
uint8_t x713 = 1U;
uint64_t x715 = UINT64_MAX;
int32_t x721 = -42029083;
int32_t t155 = -1690;
int32_t x739 = 0;
uint8_t x740 = 50U;
int32_t t157 = 2207128;
static uint32_t x743 = UINT32_MAX;
int32_t x744 = INT32_MAX;
int32_t t158 = 115;
static uint16_t x753 = UINT16_MAX;
int32_t t161 = 4833806;
uint64_t x761 = 294675937654567LLU;
static uint32_t x763 = 1153669U;
int8_t x764 = -1;
int64_t x767 = 4151467579963006114LL;
int64_t x775 = INT64_MIN;
int16_t x776 = INT16_MAX;
uint32_t x780 = UINT32_MAX;
int32_t x785 = -1;
volatile int16_t x787 = INT16_MIN;
static volatile int32_t t166 = -443703834;
uint8_t x793 = 3U;
int8_t x802 = INT8_MIN;
volatile int32_t x809 = 271044006;
volatile int32_t x811 = INT32_MAX;
int32_t x818 = INT32_MAX;
static int32_t x820 = -1;
volatile int32_t t173 = -18241667;
uint64_t x825 = 66459007LLU;
int8_t x827 = -2;
uint64_t x830 = 15378394LLU;
volatile int64_t x838 = -7877029207LL;
volatile int8_t x839 = 7;
int32_t x840 = -1;
static int32_t t178 = -210;
int32_t x849 = INT32_MIN;
volatile int32_t t180 = -34;
volatile uint64_t x872 = 7723LLU;
int64_t x873 = INT64_MIN;
int32_t x878 = INT32_MIN;
int64_t x880 = -81LL;
int32_t t187 = -228601;
volatile int16_t x886 = 1;
static uint32_t x887 = 41U;
volatile int64_t x892 = -57782737851LL;
static uint8_t x899 = 90U;
int32_t t192 = 90;
int32_t x913 = 469;
uint64_t x920 = UINT64_MAX;
volatile int32_t x928 = -526;
volatile int32_t t199 = 4949155;


void f0(void) {
    	static uint64_t x1 = UINT64_MAX;
	static uint32_t x2 = 571368879U;
	int64_t x3 = 279304468869LL;
	uint8_t x4 = 14U;
	volatile int32_t t0 = -3;

    t0 = (x1==((x2-x3)!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 3LLU;
	int32_t x7 = 655786;
	uint16_t x8 = 87U;

    t1 = (x5==((x6-x7)!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	volatile int32_t x11 = 11583576;
	static int64_t x12 = -1LL;
	static volatile int32_t t2 = 710220043;

    t2 = (x9==((x10-x11)!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	static volatile uint32_t x15 = 195138271U;
	uint8_t x16 = 34U;
	int32_t t3 = 437966;

    t3 = (x13==((x14-x15)!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 9U;
	int32_t x18 = -1;
	static int32_t x20 = INT32_MIN;
	int32_t t4 = -6131;

    t4 = (x17==((x18-x19)!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	int64_t x22 = -1LL;
	static volatile int8_t x23 = INT8_MAX;
	int32_t x24 = INT32_MIN;
	static int32_t t5 = 1311986;

    t5 = (x21==((x22-x23)!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x26 = 32485660U;
	static uint8_t x27 = 1U;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -1486;

    t6 = (x25==((x26-x27)!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x30 = 2U;
	int8_t x31 = 0;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -2953;

    t7 = (x29==((x30-x31)!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = 319LLU;
	int8_t x34 = 6;
	int32_t x35 = INT32_MAX;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -41696489;

    t8 = (x33==((x34-x35)!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x39 = UINT16_MAX;
	static int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 11364983;

    t9 = (x37==((x38-x39)!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 7LLU;
	uint8_t x42 = 31U;
	int16_t x43 = INT16_MAX;
	int8_t x44 = -1;
	int32_t t10 = -339;

    t10 = (x41==((x42-x43)!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = 0;
	int8_t x47 = -23;
	static int32_t t11 = 3372616;

    t11 = (x45==((x46-x47)!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	int8_t x50 = INT8_MIN;
	int16_t x51 = INT16_MAX;
	static volatile uint8_t x52 = 123U;
	volatile int32_t t12 = -57140;

    t12 = (x49==((x50-x51)!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x53 = INT8_MAX;
	static int64_t x54 = INT64_MIN;
	static uint64_t x55 = UINT64_MAX;

    t13 = (x53==((x54-x55)!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	int8_t x58 = -13;
	uint16_t x59 = 1U;
	int16_t x60 = 4832;
	static volatile int32_t t14 = -512707415;

    t14 = (x57==((x58-x59)!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x62 = INT8_MIN;
	int8_t x63 = INT8_MAX;
	volatile int16_t x64 = -528;
	static int32_t t15 = 55;

    t15 = (x61==((x62-x63)!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	int8_t x66 = -1;
	int32_t t16 = -4;

    t16 = (x65==((x66-x67)!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x74 = 0U;
	volatile int32_t x75 = INT32_MAX;
	int32_t t17 = -7192;

    t17 = (x73==((x74-x75)!=x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = 51;
	int32_t x78 = 7;

    t18 = (x77==((x78-x79)!=x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MIN;
	volatile int64_t x83 = -2490411280822LL;
	int32_t x84 = -1;
	int32_t t19 = -2900;

    t19 = (x81==((x82-x83)!=x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x86 = -1;
	volatile int8_t x87 = INT8_MIN;
	static volatile uint16_t x88 = 643U;
	int32_t t20 = 4737;

    t20 = (x85==((x86-x87)!=x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x89 = 200235852U;
	static int16_t x91 = INT16_MIN;
	static volatile int32_t t21 = -4007470;

    t21 = (x89==((x90-x91)!=x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x93 = INT64_MIN;
	static int8_t x94 = 1;
	int8_t x95 = INT8_MIN;
	static uint8_t x96 = UINT8_MAX;
	int32_t t22 = -23124;

    t22 = (x93==((x94-x95)!=x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x101 = UINT64_MAX;
	uint64_t x103 = 8688978111LLU;
	int16_t x104 = INT16_MIN;

    t23 = (x101==((x102-x103)!=x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x105 = 15199908;
	int8_t x106 = INT8_MIN;
	static uint16_t x107 = 10168U;
	int8_t x108 = INT8_MAX;
	static int32_t t24 = -191163026;

    t24 = (x105==((x106-x107)!=x108));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x109 = INT16_MIN;
	int8_t x110 = -1;
	int64_t x112 = -20803366LL;
	static int32_t t25 = 37357;

    t25 = (x109==((x110-x111)!=x112));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = -1;
	int16_t x114 = INT16_MAX;
	volatile int8_t x116 = -39;

    t26 = (x113==((x114-x115)!=x116));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x120 = UINT32_MAX;
	static volatile int32_t t27 = 148227723;

    t27 = (x117==((x118-x119)!=x120));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = -1;
	int32_t x122 = -1;
	volatile uint32_t x124 = 1706U;
	static volatile int32_t t28 = 3846145;

    t28 = (x121==((x122-x123)!=x124));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = INT16_MIN;
	int64_t x126 = -385821075018LL;
	static int8_t x127 = -1;
	uint32_t x128 = UINT32_MAX;

    t29 = (x125==((x126-x127)!=x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x129 = 4716056LLU;
	int64_t x130 = -64727579947LL;
	static uint32_t x131 = 622U;
	int32_t x132 = -105;
	int32_t t30 = -977820254;

    t30 = (x129==((x130-x131)!=x132));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x133 = 6U;
	uint8_t x136 = UINT8_MAX;
	int32_t t31 = 2;

    t31 = (x133==((x134-x135)!=x136));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = INT32_MAX;
	int64_t x138 = INT64_MAX;
	uint8_t x139 = 3U;

    t32 = (x137==((x138-x139)!=x140));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x141 = INT64_MIN;
	volatile int64_t x142 = INT64_MIN;
	int16_t x143 = -401;
	volatile int16_t x144 = INT16_MAX;
	volatile int32_t t33 = 7818;

    t33 = (x141==((x142-x143)!=x144));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = -1LL;
	static int32_t x146 = INT32_MIN;
	static int32_t x147 = -1;
	uint64_t x148 = 97125827355791350LLU;
	static int32_t t34 = -106;

    t34 = (x145==((x146-x147)!=x148));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x153 = -1;
	int8_t x154 = INT8_MIN;
	uint16_t x155 = UINT16_MAX;
	uint32_t x156 = 26999U;
	int32_t t35 = 29740;

    t35 = (x153==((x154-x155)!=x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x157 = UINT32_MAX;
	uint32_t x158 = 271U;
	volatile int64_t x160 = 9LL;
	volatile int32_t t36 = 0;

    t36 = (x157==((x158-x159)!=x160));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x161 = INT64_MIN;
	uint16_t x162 = 21U;
	int64_t x163 = 204351529086LL;
	int64_t x164 = -1LL;
	static int32_t t37 = -3544;

    t37 = (x161==((x162-x163)!=x164));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x165 = INT8_MIN;
	volatile int16_t x166 = INT16_MIN;
	int32_t x167 = -8934;
	volatile int32_t t38 = 429;

    t38 = (x165==((x166-x167)!=x168));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x170 = UINT64_MAX;
	static uint32_t x171 = 71896721U;
	int8_t x172 = 0;

    t39 = (x169==((x170-x171)!=x172));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x173 = UINT64_MAX;
	int64_t x174 = INT64_MIN;
	int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;
	volatile int32_t t40 = 206294304;

    t40 = (x173==((x174-x175)!=x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x177 = 2U;
	uint16_t x178 = 3U;
	static volatile uint16_t x179 = 809U;
	static uint32_t x180 = 148336U;

    t41 = (x177==((x178-x179)!=x180));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = INT8_MIN;
	uint32_t x183 = 150103053U;
	volatile int16_t x184 = -351;
	volatile int32_t t42 = 12910445;

    t42 = (x181==((x182-x183)!=x184));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x185 = INT8_MIN;
	uint8_t x186 = UINT8_MAX;
	uint64_t x188 = UINT64_MAX;
	int32_t t43 = 14395;

    t43 = (x185==((x186-x187)!=x188));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x189 = UINT16_MAX;
	volatile uint64_t x191 = UINT64_MAX;

    t44 = (x189==((x190-x191)!=x192));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x197 = INT8_MAX;
	static uint8_t x198 = UINT8_MAX;
	uint32_t x199 = UINT32_MAX;
	volatile int32_t t45 = 49216154;

    t45 = (x197==((x198-x199)!=x200));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x201 = -1LL;
	volatile int32_t x202 = -1;
	static int16_t x203 = 1;
	int32_t t46 = -535;

    t46 = (x201==((x202-x203)!=x204));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x205 = INT8_MAX;
	int8_t x206 = INT8_MIN;
	static int32_t x207 = INT32_MIN;
	int32_t t47 = 0;

    t47 = (x205==((x206-x207)!=x208));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MIN;
	int8_t x212 = INT8_MIN;
	int32_t t48 = -72270;

    t48 = (x209==((x210-x211)!=x212));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x213 = 4386U;
	uint16_t x215 = UINT16_MAX;
	uint8_t x216 = 1U;
	volatile int32_t t49 = 130;

    t49 = (x213==((x214-x215)!=x216));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x217 = UINT16_MAX;
	static uint64_t x218 = 1LLU;
	int64_t x219 = -1LL;
	uint8_t x220 = 35U;
	int32_t t50 = 7758227;

    t50 = (x217==((x218-x219)!=x220));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x221 = 15316U;
	int8_t x222 = -1;
	int8_t x223 = INT8_MIN;
	uint64_t x224 = 8426212863551400LLU;
	static int32_t t51 = -88384122;

    t51 = (x221==((x222-x223)!=x224));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x226 = -114418;
	uint16_t x227 = UINT16_MAX;
	int16_t x228 = INT16_MIN;
	int32_t t52 = 38660363;

    t52 = (x225==((x226-x227)!=x228));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x229 = INT8_MAX;
	volatile int32_t x230 = -1;
	volatile uint32_t x232 = UINT32_MAX;

    t53 = (x229==((x230-x231)!=x232));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x233 = -1;
	uint16_t x234 = 120U;
	uint16_t x235 = 3884U;
	int64_t x236 = 29502950599459909LL;
	int32_t t54 = -7;

    t54 = (x233==((x234-x235)!=x236));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x239 = 56LL;

    t55 = (x237==((x238-x239)!=x240));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x241 = 215875452232LLU;
	int32_t x242 = -3252;
	int32_t x243 = 84;
	uint64_t x244 = 1417464LLU;

    t56 = (x241==((x242-x243)!=x244));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x245 = 56U;
	volatile uint8_t x247 = 77U;
	static int64_t x248 = 9585732081LL;
	volatile int32_t t57 = 1899;

    t57 = (x245==((x246-x247)!=x248));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x250 = -762;
	uint32_t x252 = 5869U;
	int32_t t58 = 14622;

    t58 = (x249==((x250-x251)!=x252));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x253 = UINT32_MAX;
	int16_t x254 = -1;
	int64_t x255 = -1LL;
	int8_t x256 = 17;
	int32_t t59 = 186023;

    t59 = (x253==((x254-x255)!=x256));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x257 = INT32_MIN;
	int64_t x258 = -1LL;
	int16_t x259 = INT16_MIN;
	uint16_t x260 = 4U;
	int32_t t60 = 221048;

    t60 = (x257==((x258-x259)!=x260));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x261 = 249;
	static int32_t x262 = -1;
	int8_t x263 = INT8_MAX;
	int32_t x264 = 30482;
	static int32_t t61 = 3;

    t61 = (x261==((x262-x263)!=x264));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x265 = INT16_MAX;
	static int8_t x266 = INT8_MAX;
	uint32_t x267 = UINT32_MAX;
	int32_t t62 = -3;

    t62 = (x265==((x266-x267)!=x268));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x269 = INT16_MIN;
	static int64_t x270 = 11401370LL;
	int64_t x271 = 312758299254LL;
	static int8_t x272 = INT8_MAX;
	static volatile int32_t t63 = -46029690;

    t63 = (x269==((x270-x271)!=x272));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x273 = -1;
	volatile uint32_t x274 = 53850616U;
	volatile uint64_t x275 = UINT64_MAX;
	static volatile uint32_t x276 = 12316386U;
	static volatile int32_t t64 = -47;

    t64 = (x273==((x274-x275)!=x276));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x277 = -1LL;
	int16_t x278 = 2;
	uint8_t x279 = 3U;
	volatile int32_t t65 = 15320684;

    t65 = (x277==((x278-x279)!=x280));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x285 = INT64_MIN;
	uint32_t x286 = UINT32_MAX;
	static volatile int8_t x287 = -1;
	int32_t x288 = INT32_MIN;
	int32_t t66 = -5510;

    t66 = (x285==((x286-x287)!=x288));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x298 = -153LL;
	uint16_t x299 = 33U;
	int64_t x300 = INT64_MAX;
	static int32_t t67 = 162969145;

    t67 = (x297==((x298-x299)!=x300));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x301 = 164LL;
	int16_t x303 = -1;
	int64_t x304 = INT64_MIN;
	volatile int32_t t68 = 45072371;

    t68 = (x301==((x302-x303)!=x304));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x306 = INT64_MAX;
	uint16_t x307 = UINT16_MAX;
	volatile int32_t t69 = -113;

    t69 = (x305==((x306-x307)!=x308));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x309 = -1LL;
	volatile uint64_t x310 = 13648LLU;
	static int64_t x311 = -145453LL;
	int8_t x312 = -3;
	int32_t t70 = 737522;

    t70 = (x309==((x310-x311)!=x312));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x313 = INT32_MAX;
	uint16_t x316 = UINT16_MAX;
	int32_t t71 = -11;

    t71 = (x313==((x314-x315)!=x316));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x319 = -66009557;
	uint16_t x320 = 18475U;
	int32_t t72 = -458549;

    t72 = (x317==((x318-x319)!=x320));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x321 = INT16_MAX;
	volatile int32_t x322 = INT32_MIN;
	uint64_t x323 = 370472328LLU;
	int8_t x324 = -1;
	volatile int32_t t73 = 895;

    t73 = (x321==((x322-x323)!=x324));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x325 = 156;
	int32_t x327 = -1358;
	uint64_t x328 = 170689807065162593LLU;

    t74 = (x325==((x326-x327)!=x328));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x329 = 7974LLU;
	static volatile int32_t x331 = INT32_MIN;
	uint16_t x332 = UINT16_MAX;
	int32_t t75 = 7528610;

    t75 = (x329==((x330-x331)!=x332));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x333 = 1;
	int64_t x335 = INT64_MAX;
	volatile int32_t t76 = -13055;

    t76 = (x333==((x334-x335)!=x336));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x337 = INT16_MIN;
	uint32_t x338 = UINT32_MAX;
	static uint8_t x339 = 1U;
	int16_t x340 = INT16_MIN;
	int32_t t77 = -2152792;

    t77 = (x337==((x338-x339)!=x340));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x342 = INT8_MAX;
	static uint64_t x343 = UINT64_MAX;
	int64_t x344 = INT64_MIN;
	static volatile int32_t t78 = -30;

    t78 = (x341==((x342-x343)!=x344));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x345 = INT32_MAX;
	uint8_t x346 = 0U;
	int32_t x347 = 80;
	uint16_t x348 = 3641U;
	volatile int32_t t79 = 3408;

    t79 = (x345==((x346-x347)!=x348));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x349 = INT64_MAX;
	int32_t x350 = 605424;
	int8_t x352 = 0;
	int32_t t80 = -943;

    t80 = (x349==((x350-x351)!=x352));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x353 = UINT32_MAX;
	int64_t x354 = INT64_MIN;
	static int16_t x355 = -1;
	int16_t x356 = INT16_MIN;
	int32_t t81 = 1;

    t81 = (x353==((x354-x355)!=x356));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x357 = INT32_MAX;
	static volatile int32_t t82 = 1835156;

    t82 = (x357==((x358-x359)!=x360));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x361 = -1;
	uint8_t x362 = 12U;
	uint8_t x364 = UINT8_MAX;

    t83 = (x361==((x362-x363)!=x364));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x365 = INT32_MIN;
	int32_t x366 = INT32_MIN;
	static int16_t x368 = INT16_MIN;
	int32_t t84 = 260667;

    t84 = (x365==((x366-x367)!=x368));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x369 = -14977381LL;
	int8_t x370 = -1;
	uint64_t x371 = 185489LLU;
	int32_t x372 = 699090;
	int32_t t85 = -56733;

    t85 = (x369==((x370-x371)!=x372));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x377 = -1;
	int8_t x378 = -1;
	static volatile uint64_t x379 = UINT64_MAX;
	static int32_t x380 = 44;

    t86 = (x377==((x378-x379)!=x380));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x381 = INT64_MIN;
	int64_t x382 = -1LL;
	int64_t x383 = -1258344LL;
	uint8_t x384 = 9U;
	volatile int32_t t87 = -100;

    t87 = (x381==((x382-x383)!=x384));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x385 = 16587153954LL;
	int64_t x386 = INT64_MIN;
	static int64_t x387 = -1LL;
	volatile int32_t t88 = -239;

    t88 = (x385==((x386-x387)!=x388));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x391 = 6668;
	int32_t t89 = -3818272;

    t89 = (x389==((x390-x391)!=x392));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x393 = INT16_MIN;
	int64_t x394 = -1LL;
	static volatile int16_t x395 = -1;
	uint16_t x396 = 1U;
	int32_t t90 = 164198549;

    t90 = (x393==((x394-x395)!=x396));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x397 = UINT8_MAX;
	uint32_t x398 = 813U;
	int64_t x399 = INT64_MAX;
	volatile uint64_t x400 = UINT64_MAX;

    t91 = (x397==((x398-x399)!=x400));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x401 = 1;
	int64_t x402 = -1LL;
	static int16_t x403 = -1;
	volatile int32_t t92 = 253996715;

    t92 = (x401==((x402-x403)!=x404));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x405 = 49097588465LLU;
	int64_t x407 = -99455602619326LL;
	static uint32_t x408 = 19585U;

    t93 = (x405==((x406-x407)!=x408));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x413 = 24842963U;
	int64_t x414 = -1LL;
	int64_t x415 = 15139LL;
	uint16_t x416 = 5853U;
	static int32_t t94 = -10488797;

    t94 = (x413==((x414-x415)!=x416));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x421 = 94U;
	uint16_t x422 = 3U;
	int64_t x423 = -316627117LL;
	static int64_t x424 = -1LL;
	volatile int32_t t95 = 50;

    t95 = (x421==((x422-x423)!=x424));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x425 = INT32_MAX;
	uint8_t x426 = 20U;
	uint16_t x428 = UINT16_MAX;

    t96 = (x425==((x426-x427)!=x428));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x429 = 46;
	static int64_t x430 = -1LL;
	static volatile int64_t x431 = INT64_MIN;
	int16_t x432 = INT16_MIN;
	int32_t t97 = -98099673;

    t97 = (x429==((x430-x431)!=x432));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x437 = -3;
	int64_t x438 = 28703545403811LL;
	static volatile int32_t x439 = INT32_MAX;
	volatile int8_t x440 = -41;
	volatile int32_t t98 = -6;

    t98 = (x437==((x438-x439)!=x440));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int16_t x441 = INT16_MIN;
	volatile int16_t x442 = INT16_MIN;
	int32_t x443 = -1;
	uint64_t x444 = 1896386LLU;
	volatile int32_t t99 = -1;

    t99 = (x441==((x442-x443)!=x444));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x445 = 279973835247LLU;
	uint16_t x446 = UINT16_MAX;
	static int8_t x448 = 0;
	volatile int32_t t100 = -33420009;

    t100 = (x445==((x446-x447)!=x448));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x450 = -20476;
	int8_t x452 = -17;
	int32_t t101 = 979288;

    t101 = (x449==((x450-x451)!=x452));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x455 = INT8_MIN;
	int8_t x456 = 4;

    t102 = (x453==((x454-x455)!=x456));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x461 = -1LL;
	int64_t x463 = -1LL;
	static int8_t x464 = 0;

    t103 = (x461==((x462-x463)!=x464));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x469 = 48U;
	static int32_t x470 = INT32_MIN;
	uint64_t x471 = UINT64_MAX;
	volatile int8_t x472 = INT8_MIN;
	int32_t t104 = -483046524;

    t104 = (x469==((x470-x471)!=x472));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x473 = INT64_MIN;
	uint32_t x474 = 7U;
	int8_t x475 = INT8_MIN;
	int16_t x476 = -6;
	volatile int32_t t105 = 958462745;

    t105 = (x473==((x474-x475)!=x476));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x477 = INT32_MIN;
	static uint32_t x478 = UINT32_MAX;
	int64_t x479 = -14897312494LL;
	int8_t x480 = INT8_MAX;

    t106 = (x477==((x478-x479)!=x480));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x481 = INT64_MIN;
	static int32_t x483 = 6;
	volatile int64_t x484 = -1LL;
	int32_t t107 = -9838956;

    t107 = (x481==((x482-x483)!=x484));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x485 = INT64_MIN;
	volatile uint64_t x486 = UINT64_MAX;
	static volatile int32_t x487 = -475776627;
	int32_t x488 = -342527;
	int32_t t108 = -41;

    t108 = (x485==((x486-x487)!=x488));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x489 = -1;
	uint8_t x491 = UINT8_MAX;
	int8_t x492 = INT8_MIN;
	int32_t t109 = 0;

    t109 = (x489==((x490-x491)!=x492));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x493 = 7;
	uint32_t x494 = 12539977U;
	static uint64_t x495 = 20LLU;
	uint32_t x496 = 2U;
	volatile int32_t t110 = 0;

    t110 = (x493==((x494-x495)!=x496));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x497 = 107U;
	static int16_t x498 = INT16_MIN;
	volatile int32_t x499 = -28235;
	static int16_t x500 = INT16_MAX;
	static volatile int32_t t111 = 16425650;

    t111 = (x497==((x498-x499)!=x500));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x502 = UINT64_MAX;
	volatile uint8_t x503 = 30U;
	volatile int32_t x504 = INT32_MIN;
	volatile int32_t t112 = -11441709;

    t112 = (x501==((x502-x503)!=x504));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x509 = 1193915093LLU;
	int16_t x510 = -6587;
	int8_t x512 = INT8_MIN;
	int32_t t113 = -1;

    t113 = (x509==((x510-x511)!=x512));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x521 = 97108U;
	volatile uint32_t x523 = 25349549U;
	int8_t x524 = -1;
	volatile int32_t t114 = 53101;

    t114 = (x521==((x522-x523)!=x524));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x525 = INT16_MIN;
	int32_t x527 = INT32_MIN;
	volatile int32_t t115 = 0;

    t115 = (x525==((x526-x527)!=x528));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x529 = INT16_MAX;
	int64_t x530 = INT64_MIN;
	int32_t x531 = INT32_MIN;
	static volatile uint32_t x532 = UINT32_MAX;
	static int32_t t116 = 25348;

    t116 = (x529==((x530-x531)!=x532));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x533 = -1;
	volatile int16_t x534 = 14416;
	volatile int64_t x536 = INT64_MIN;
	volatile int32_t t117 = 0;

    t117 = (x533==((x534-x535)!=x536));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x541 = INT16_MAX;
	int64_t x542 = INT64_MAX;
	int64_t x543 = 408678236514LL;
	int8_t x544 = -1;
	volatile int32_t t118 = -120765;

    t118 = (x541==((x542-x543)!=x544));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x545 = UINT16_MAX;
	int64_t x546 = INT64_MIN;
	int16_t x547 = INT16_MIN;
	static int32_t x548 = 28;

    t119 = (x545==((x546-x547)!=x548));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x549 = UINT8_MAX;
	uint32_t x550 = UINT32_MAX;
	int8_t x551 = -32;
	int8_t x552 = INT8_MIN;
	static int32_t t120 = 413722314;

    t120 = (x549==((x550-x551)!=x552));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x553 = INT64_MIN;
	volatile int8_t x554 = -1;
	int8_t x555 = INT8_MAX;
	int32_t t121 = 1515943;

    t121 = (x553==((x554-x555)!=x556));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x557 = 439890730;
	int16_t x558 = INT16_MIN;
	int16_t x559 = INT16_MIN;
	volatile int64_t x560 = -1LL;

    t122 = (x557==((x558-x559)!=x560));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x561 = 160;
	static int64_t x562 = INT64_MAX;
	volatile int64_t x564 = INT64_MIN;
	int32_t t123 = 32249;

    t123 = (x561==((x562-x563)!=x564));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x566 = INT16_MAX;
	int16_t x567 = INT16_MIN;
	int32_t t124 = 0;

    t124 = (x565==((x566-x567)!=x568));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x570 = -1;
	int64_t x571 = -36LL;
	volatile uint32_t x572 = UINT32_MAX;
	static int32_t t125 = -833;

    t125 = (x569==((x570-x571)!=x572));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint8_t x573 = 101U;
	volatile uint32_t x574 = UINT32_MAX;
	uint8_t x575 = 20U;
	volatile int16_t x576 = INT16_MAX;
	int32_t t126 = -481;

    t126 = (x573==((x574-x575)!=x576));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x577 = UINT8_MAX;
	volatile int32_t x578 = INT32_MIN;
	uint64_t x579 = 2631101879LLU;

    t127 = (x577==((x578-x579)!=x580));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x589 = UINT16_MAX;
	uint8_t x590 = 4U;
	int16_t x591 = -1667;
	volatile int64_t x592 = INT64_MAX;
	volatile int32_t t128 = -14;

    t128 = (x589==((x590-x591)!=x592));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x593 = 30678U;
	uint64_t x594 = 19695463LLU;
	int32_t x595 = -7205;
	static int16_t x596 = INT16_MIN;
	static volatile int32_t t129 = 6;

    t129 = (x593==((x594-x595)!=x596));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x597 = 14872;
	static uint64_t x598 = 61617257252LLU;
	int8_t x599 = 3;
	volatile int8_t x600 = -1;
	static volatile int32_t t130 = -1453;

    t130 = (x597==((x598-x599)!=x600));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x602 = UINT16_MAX;
	volatile int32_t x604 = 35;
	volatile int32_t t131 = -21;

    t131 = (x601==((x602-x603)!=x604));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x609 = INT64_MIN;
	int8_t x610 = -46;
	volatile uint32_t x611 = 2299U;

    t132 = (x609==((x610-x611)!=x612));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x614 = 434U;
	uint32_t x616 = 1275U;

    t133 = (x613==((x614-x615)!=x616));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x618 = INT16_MIN;
	static volatile uint32_t x619 = 769170U;
	volatile uint8_t x620 = 0U;

    t134 = (x617==((x618-x619)!=x620));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x621 = INT64_MIN;
	int32_t x622 = 0;
	uint64_t x624 = 251650LLU;

    t135 = (x621==((x622-x623)!=x624));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x625 = 1535LL;
	uint16_t x626 = 61U;
	uint32_t x627 = UINT32_MAX;
	static volatile uint32_t x628 = 5069248U;
	static int32_t t136 = 7477;

    t136 = (x625==((x626-x627)!=x628));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x629 = INT8_MIN;
	uint32_t x630 = 11U;
	static int64_t x631 = -1LL;
	volatile uint32_t x632 = 596743U;
	volatile int32_t t137 = 76644;

    t137 = (x629==((x630-x631)!=x632));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x633 = 1;
	int32_t x634 = -1;
	static int8_t x636 = INT8_MAX;
	volatile int32_t t138 = -23;

    t138 = (x633==((x634-x635)!=x636));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint16_t x637 = 12U;
	int32_t x640 = INT32_MIN;

    t139 = (x637==((x638-x639)!=x640));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x645 = 3232U;
	int16_t x646 = INT16_MIN;
	uint32_t x648 = 19589596U;
	int32_t t140 = 727;

    t140 = (x645==((x646-x647)!=x648));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x649 = INT32_MIN;
	uint32_t x650 = 1542842U;
	static uint8_t x651 = 1U;
	int64_t x652 = -186213166066937101LL;
	int32_t t141 = -3944218;

    t141 = (x649==((x650-x651)!=x652));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x653 = -1392;
	uint32_t x656 = 77U;
	static int32_t t142 = 57658;

    t142 = (x653==((x654-x655)!=x656));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x657 = 10613970LL;
	static uint16_t x659 = UINT16_MAX;
	int64_t x660 = INT64_MAX;
	volatile int32_t t143 = 0;

    t143 = (x657==((x658-x659)!=x660));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x662 = 719LLU;
	int8_t x663 = INT8_MIN;
	uint64_t x664 = UINT64_MAX;
	volatile int32_t t144 = 0;

    t144 = (x661==((x662-x663)!=x664));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x670 = -1;
	static volatile int32_t x672 = 9576026;
	int32_t t145 = 2098433;

    t145 = (x669==((x670-x671)!=x672));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x673 = 263419U;
	int8_t x674 = -1;
	static int16_t x675 = INT16_MIN;

    t146 = (x673==((x674-x675)!=x676));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x677 = INT8_MAX;
	uint32_t x678 = 22127284U;
	int32_t t147 = 32927;

    t147 = (x677==((x678-x679)!=x680));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x681 = INT32_MAX;
	uint16_t x683 = 13151U;
	uint8_t x684 = 8U;
	volatile int32_t t148 = 2709;

    t148 = (x681==((x682-x683)!=x684));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x689 = 17;
	int32_t x691 = -1;
	int64_t x692 = -16LL;
	int32_t t149 = -47629;

    t149 = (x689==((x690-x691)!=x692));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x694 = 13763012577916735LLU;
	int8_t x695 = -7;
	int8_t x696 = INT8_MIN;
	static int32_t t150 = -1;

    t150 = (x693==((x694-x695)!=x696));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x697 = -1;
	uint64_t x698 = 318191521030132831LLU;
	uint64_t x699 = 24936233346635048LLU;
	int16_t x700 = INT16_MIN;
	int32_t t151 = 1;

    t151 = (x697==((x698-x699)!=x700));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x705 = 1;
	int32_t x707 = INT32_MIN;
	static uint16_t x708 = 1097U;
	volatile int32_t t152 = 107;

    t152 = (x705==((x706-x707)!=x708));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x709 = 1823006180U;
	volatile int64_t x711 = 221LL;
	volatile uint32_t x712 = 62U;
	static volatile int32_t t153 = 80738088;

    t153 = (x709==((x710-x711)!=x712));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x714 = 1106U;
	static volatile uint16_t x716 = UINT16_MAX;
	int32_t t154 = 237;

    t154 = (x713==((x714-x715)!=x716));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x722 = INT8_MAX;
	int16_t x723 = INT16_MAX;
	int64_t x724 = -1LL;

    t155 = (x721==((x722-x723)!=x724));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x729 = INT16_MAX;
	volatile uint16_t x730 = 41U;
	int16_t x731 = -1;
	int32_t x732 = INT32_MIN;
	static volatile int32_t t156 = -417739;

    t156 = (x729==((x730-x731)!=x732));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x737 = 0;
	static int64_t x738 = -805609952314692153LL;

    t157 = (x737==((x738-x739)!=x740));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x741 = 1;
	static int64_t x742 = 506150700337LL;

    t158 = (x741==((x742-x743)!=x744));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x745 = INT8_MIN;
	volatile uint8_t x746 = 3U;
	int16_t x747 = INT16_MAX;
	static volatile int64_t x748 = INT64_MAX;
	static volatile int32_t t159 = 723023393;

    t159 = (x745==((x746-x747)!=x748));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x749 = 111855824U;
	volatile int8_t x750 = -1;
	static volatile int8_t x751 = -1;
	uint16_t x752 = 14U;
	volatile int32_t t160 = -1;

    t160 = (x749==((x750-x751)!=x752));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x754 = -1LL;
	static int16_t x755 = -97;
	int64_t x756 = INT64_MIN;

    t161 = (x753==((x754-x755)!=x756));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x762 = INT8_MIN;
	volatile int32_t t162 = 1394725;

    t162 = (x761==((x762-x763)!=x764));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x765 = 98475LLU;
	volatile int32_t x766 = -12942;
	uint64_t x768 = 905541959740865234LLU;
	volatile int32_t t163 = 235150527;

    t163 = (x765==((x766-x767)!=x768));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x773 = 13U;
	int64_t x774 = INT64_MIN;
	int32_t t164 = 217932927;

    t164 = (x773==((x774-x775)!=x776));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x777 = INT16_MAX;
	static int64_t x778 = -1LL;
	int8_t x779 = INT8_MIN;
	int32_t t165 = 207;

    t165 = (x777==((x778-x779)!=x780));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x786 = 136860320411376LLU;
	volatile uint16_t x788 = UINT16_MAX;

    t166 = (x785==((x786-x787)!=x788));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x794 = INT8_MIN;
	uint8_t x795 = 58U;
	int64_t x796 = -235400768882761LL;
	int32_t t167 = -75808638;

    t167 = (x793==((x794-x795)!=x796));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x797 = 0U;
	int16_t x798 = 331;
	volatile uint64_t x799 = 99776971941115923LLU;
	static int8_t x800 = 12;
	int32_t t168 = 72656929;

    t168 = (x797==((x798-x799)!=x800));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x801 = INT32_MIN;
	static volatile uint8_t x803 = 63U;
	volatile int32_t x804 = INT32_MIN;
	static int32_t t169 = -143;

    t169 = (x801==((x802-x803)!=x804));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x805 = 3;
	uint64_t x806 = UINT64_MAX;
	uint64_t x807 = 703439965583321LLU;
	static volatile uint16_t x808 = 13U;
	static volatile int32_t t170 = -3;

    t170 = (x805==((x806-x807)!=x808));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x810 = INT8_MAX;
	int32_t x812 = INT32_MIN;
	volatile int32_t t171 = -3139801;

    t171 = (x809==((x810-x811)!=x812));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x813 = 1031U;
	int8_t x814 = 1;
	uint32_t x815 = 66412U;
	int32_t x816 = 1;
	volatile int32_t t172 = -19260469;

    t172 = (x813==((x814-x815)!=x816));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x817 = 46710593LLU;
	uint16_t x819 = 14933U;

    t173 = (x817==((x818-x819)!=x820));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x821 = UINT16_MAX;
	int16_t x822 = INT16_MIN;
	int64_t x823 = -38089833559LL;
	static int64_t x824 = INT64_MIN;
	volatile int32_t t174 = 343625790;

    t174 = (x821==((x822-x823)!=x824));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x826 = INT8_MAX;
	static volatile int16_t x828 = 2183;
	int32_t t175 = 834;

    t175 = (x825==((x826-x827)!=x828));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x829 = 25U;
	uint32_t x831 = UINT32_MAX;
	uint16_t x832 = 1U;
	volatile int32_t t176 = -9;

    t176 = (x829==((x830-x831)!=x832));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x833 = INT16_MIN;
	static uint64_t x834 = 369839LLU;
	volatile int8_t x835 = -1;
	volatile int16_t x836 = -1;
	int32_t t177 = 22;

    t177 = (x833==((x834-x835)!=x836));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x837 = UINT16_MAX;

    t178 = (x837==((x838-x839)!=x840));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x841 = INT16_MIN;
	uint32_t x842 = 1412U;
	volatile int8_t x843 = INT8_MIN;
	int32_t x844 = INT32_MAX;
	static int32_t t179 = -53325;

    t179 = (x841==((x842-x843)!=x844));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x850 = 449590649426090288LL;
	uint32_t x851 = 312762599U;
	static int8_t x852 = -28;

    t180 = (x849==((x850-x851)!=x852));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x853 = 1;
	static volatile uint32_t x854 = UINT32_MAX;
	static volatile uint8_t x855 = 7U;
	int32_t x856 = -13402;
	int32_t t181 = -71921148;

    t181 = (x853==((x854-x855)!=x856));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x857 = INT32_MIN;
	uint64_t x858 = UINT64_MAX;
	static int8_t x859 = -55;
	int8_t x860 = INT8_MAX;
	static int32_t t182 = -47901;

    t182 = (x857==((x858-x859)!=x860));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x861 = -102;
	uint32_t x862 = 13600U;
	uint8_t x863 = 4U;
	uint16_t x864 = 5476U;
	static int32_t t183 = 142609;

    t183 = (x861==((x862-x863)!=x864));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x865 = -1LL;
	int64_t x866 = -161529810507983LL;
	int16_t x867 = 18;
	uint64_t x868 = UINT64_MAX;
	int32_t t184 = -1084;

    t184 = (x865==((x866-x867)!=x868));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x869 = INT32_MIN;
	uint64_t x870 = 1738863632775498LLU;
	int64_t x871 = 29399LL;
	volatile int32_t t185 = -3;

    t185 = (x869==((x870-x871)!=x872));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x874 = -106166LL;
	int8_t x875 = -30;
	int16_t x876 = INT16_MIN;
	int32_t t186 = -1374476;

    t186 = (x873==((x874-x875)!=x876));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x877 = -11;
	uint32_t x879 = 6166U;

    t187 = (x877==((x878-x879)!=x880));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x881 = INT8_MIN;
	uint8_t x882 = 1U;
	static int64_t x883 = -2464236207253123LL;
	static uint16_t x884 = 4945U;
	volatile int32_t t188 = 12807190;

    t188 = (x881==((x882-x883)!=x884));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x885 = INT16_MAX;
	int8_t x888 = INT8_MIN;
	volatile int32_t t189 = -22713;

    t189 = (x885==((x886-x887)!=x888));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x889 = UINT64_MAX;
	uint32_t x890 = 1156070U;
	int16_t x891 = 2;
	int32_t t190 = 3405;

    t190 = (x889==((x890-x891)!=x892));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x893 = UINT16_MAX;
	volatile int64_t x894 = INT64_MIN;
	int16_t x895 = INT16_MIN;
	static int32_t x896 = INT32_MAX;
	volatile int32_t t191 = -27361446;

    t191 = (x893==((x894-x895)!=x896));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x897 = 57;
	static volatile int8_t x898 = -31;
	volatile int64_t x900 = INT64_MIN;

    t192 = (x897==((x898-x899)!=x900));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x901 = 1871U;
	int64_t x902 = INT64_MIN;
	int8_t x903 = INT8_MIN;
	volatile uint32_t x904 = 2966U;
	static volatile int32_t t193 = 1504110;

    t193 = (x901==((x902-x903)!=x904));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x909 = 241944226996057156LLU;
	uint16_t x910 = 3593U;
	uint32_t x911 = UINT32_MAX;
	int64_t x912 = 28LL;
	static volatile int32_t t194 = 928566;

    t194 = (x909==((x910-x911)!=x912));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x914 = -7;
	volatile int8_t x915 = 1;
	static int32_t x916 = 106210;
	volatile int32_t t195 = 8390645;

    t195 = (x913==((x914-x915)!=x916));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x917 = -10;
	uint32_t x918 = 401639128U;
	int32_t x919 = INT32_MIN;
	volatile int32_t t196 = -7;

    t196 = (x917==((x918-x919)!=x920));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x921 = -7;
	int16_t x922 = -1;
	volatile int64_t x923 = INT64_MIN;
	int64_t x924 = 25LL;
	int32_t t197 = -685;

    t197 = (x921==((x922-x923)!=x924));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x925 = -1;
	int16_t x926 = INT16_MIN;
	static uint16_t x927 = UINT16_MAX;
	int32_t t198 = -198899;

    t198 = (x925==((x926-x927)!=x928));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x929 = 5;
	volatile uint16_t x930 = UINT16_MAX;
	volatile uint8_t x931 = 0U;
	int32_t x932 = -351000;

    t199 = (x929==((x930-x931)!=x932));

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

