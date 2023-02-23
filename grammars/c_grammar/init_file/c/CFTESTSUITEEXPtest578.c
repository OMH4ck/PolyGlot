
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

static uint16_t x3 = UINT16_MAX;
int16_t x4 = INT16_MAX;
static int32_t x7 = -1;
static volatile uint32_t t2 = 124715605U;
int32_t x13 = INT32_MAX;
static volatile int64_t x21 = 321088762442074LL;
volatile int64_t x41 = 0LL;
volatile int8_t x48 = -1;
int64_t t9 = -874542474777LL;
int8_t x49 = -16;
static volatile uint16_t x72 = UINT16_MAX;
int8_t x76 = INT8_MIN;
uint32_t t14 = 2089413810U;
volatile int32_t x89 = INT32_MIN;
int64_t x90 = INT64_MIN;
static volatile uint64_t t16 = 18495710504LLU;
uint16_t x113 = UINT16_MAX;
static volatile int16_t x117 = -613;
volatile int8_t x119 = -1;
static int64_t x120 = -526728897453LL;
uint8_t x156 = 1U;
uint8_t x164 = UINT8_MAX;
int64_t x165 = INT64_MIN;
uint16_t x166 = 374U;
uint32_t x178 = 61718709U;
int64_t x183 = -1LL;
volatile int64_t t29 = -5LL;
uint64_t x189 = 898302742623026052LLU;
int8_t x204 = INT8_MIN;
volatile int64_t t34 = 1LL;
uint64_t t35 = 102954671052293382LLU;
volatile int16_t x217 = INT16_MAX;
uint32_t x221 = UINT32_MAX;
int8_t x232 = -61;
int16_t x233 = -1;
static uint64_t t40 = 260165978LLU;
int8_t x239 = -13;
int8_t x253 = INT8_MIN;
uint64_t x271 = 4262923725973LLU;
uint8_t x272 = UINT8_MAX;
uint64_t x280 = 24922LLU;
int16_t x290 = INT16_MIN;
uint8_t x292 = UINT8_MAX;
volatile uint64_t t52 = 1054444863240319LLU;
static int8_t x306 = -13;
static uint16_t x318 = 882U;
uint16_t x321 = 1246U;
volatile int16_t x334 = -150;
int16_t x338 = INT16_MAX;
static uint32_t x343 = 88467512U;
uint64_t t61 = 20727344141094LLU;
int32_t x354 = -1;
int16_t x355 = INT16_MIN;
uint8_t x357 = 1U;
static int8_t x367 = INT8_MAX;
volatile int64_t t64 = 3293LL;
int32_t x375 = INT32_MAX;
int64_t x376 = -1LL;
uint16_t x378 = 16781U;
static uint32_t x407 = UINT32_MAX;
volatile int64_t t72 = -23251LL;
uint16_t x413 = 9690U;
uint16_t x416 = UINT16_MAX;
uint32_t x423 = 264613U;
static int64_t x426 = -39622000LL;
static volatile int16_t x427 = INT16_MIN;
volatile int64_t t76 = 51753423LL;
static volatile int8_t x429 = -2;
uint64_t x430 = 179664617371331774LLU;
uint64_t x446 = UINT64_MAX;
int64_t x448 = INT64_MIN;
int16_t x453 = INT16_MIN;
int16_t x469 = 411;
static volatile int32_t x473 = -1;
uint32_t x476 = 4456370U;
uint32_t x491 = 57U;
int16_t x498 = 552;
static int16_t x500 = -1;
static volatile uint64_t x501 = UINT64_MAX;
int8_t x506 = INT8_MAX;
int64_t x512 = INT64_MIN;
volatile int64_t t92 = -5116395312955LL;
int64_t x532 = INT64_MIN;
static int8_t x537 = -5;
int32_t x539 = -1;
int64_t x541 = INT64_MAX;
static int8_t x545 = INT8_MIN;
int32_t x546 = 5;
static uint16_t x548 = UINT16_MAX;
int32_t t101 = -15398047;
int32_t x559 = INT32_MIN;
int16_t x561 = 10;
volatile int32_t t103 = 106868;
static int32_t x565 = INT32_MAX;
int8_t x566 = -7;
int16_t x569 = -1;
int32_t x571 = INT32_MIN;
static int8_t x584 = INT8_MIN;
static int64_t x588 = INT64_MAX;
int64_t x602 = -437708946LL;
uint64_t t112 = 73252170LLU;
int8_t x609 = -1;
volatile int64_t t114 = 11237LL;
int32_t x620 = INT32_MIN;
uint64_t t117 = 3204094561LLU;
int64_t x633 = INT64_MIN;
int64_t x635 = INT64_MAX;
uint64_t x645 = UINT64_MAX;
int16_t x648 = -2;
uint16_t x657 = 0U;
uint8_t x670 = 2U;
uint8_t x672 = UINT8_MAX;
int8_t x676 = INT8_MAX;
int16_t x680 = INT16_MAX;
int16_t x683 = -1;
uint32_t x685 = UINT32_MAX;
static int32_t x688 = -1;
int8_t x690 = INT8_MAX;
int16_t x692 = -1906;
int16_t x693 = INT16_MIN;
uint32_t x696 = UINT32_MAX;
int64_t t129 = 7990262129LL;
uint16_t x698 = 35U;
uint32_t x699 = UINT32_MAX;
volatile uint32_t t130 = 5539U;
volatile uint64_t t131 = 464087602LLU;
int16_t x707 = INT16_MIN;
int32_t x713 = 6;
int32_t x716 = -6712625;
int32_t x717 = INT32_MAX;
volatile int32_t t134 = -3821;
uint64_t x723 = UINT64_MAX;
static uint16_t x734 = 1U;
int16_t x744 = INT16_MAX;
uint32_t t141 = 0U;
volatile int16_t x762 = INT16_MIN;
uint32_t x763 = 95413U;
volatile uint64_t t143 = 746896120670000LLU;
uint32_t x765 = UINT32_MAX;
static uint64_t x775 = 56LLU;
int64_t x776 = INT64_MIN;
int8_t x784 = INT8_MIN;
int64_t x788 = -220810197154742227LL;
uint64_t t149 = 834990394LLU;
uint16_t x808 = 0U;
volatile int32_t t150 = 101;
volatile int32_t x829 = INT32_MIN;
int8_t x831 = -1;
volatile int32_t t153 = -15223845;
uint32_t x836 = 57989U;
int16_t x839 = INT16_MAX;
uint32_t x840 = 932U;
static int16_t x850 = INT16_MAX;
int16_t x851 = INT16_MIN;
int64_t x854 = 761LL;
int8_t x859 = 7;
int8_t x862 = -8;
uint32_t t160 = 906091U;
int8_t x865 = -30;
uint64_t t162 = 13LLU;
volatile int32_t x881 = -1;
static uint64_t x910 = UINT64_MAX;
static int64_t x912 = 4420489135LL;
static uint32_t x913 = 378045U;
int16_t x918 = 487;
int64_t x920 = -18952107122956158LL;
volatile int32_t x924 = -402;
int64_t x927 = 1240LL;
int16_t x933 = INT16_MIN;
int8_t x934 = INT8_MIN;
uint8_t x949 = 8U;
int32_t x952 = -1;
static int16_t x958 = -5;
int8_t x962 = INT8_MIN;
volatile int64_t t179 = 12120727LL;
static uint32_t x966 = 2658U;
uint64_t x970 = 0LLU;
int16_t x979 = -1;
int32_t x980 = INT32_MIN;
uint32_t t183 = 170555885U;
uint16_t x982 = 27U;
uint64_t x984 = UINT64_MAX;
volatile int16_t x999 = -5881;
uint32_t t186 = 480921536U;
static volatile uint8_t x1002 = 102U;
uint64_t t187 = 1151688772942LLU;
uint32_t t189 = 45129U;
static volatile int16_t x1028 = INT16_MIN;
volatile uint32_t x1032 = 325U;
int64_t x1041 = 0LL;
volatile uint64_t t195 = 345939891964LLU;
int8_t x1055 = INT8_MAX;
static int16_t x1076 = INT16_MIN;


void f0(void) {
    	int8_t x1 = 1;
	uint8_t x2 = 113U;
	static int32_t t0 = 4163;

    t0 = (x1/((x2*x3)^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int64_t x6 = -1LL;
	uint64_t x8 = 632334928511048LLU;
	uint64_t t1 = 11238506LLU;

    t1 = (x5/((x6*x7)^x8));

    if (t1 != 29172LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 2;
	static int16_t x10 = -1;
	uint32_t x11 = UINT32_MAX;
	int16_t x12 = INT16_MIN;

    t2 = (x9/((x10*x11)^x12));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = -1;
	int64_t x15 = 658055798LL;
	static volatile int16_t x16 = INT16_MIN;
	int64_t t3 = -25951679953665LL;

    t3 = (x13/((x14*x15)^x16));

    if (t3 != 3LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	volatile int16_t x18 = -232;
	int8_t x19 = -1;
	uint32_t x20 = UINT32_MAX;
	volatile uint32_t t4 = 30411U;

    t4 = (x17/((x18*x19)^x20));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x22 = INT8_MIN;
	uint16_t x23 = 1547U;
	int8_t x24 = 1;
	volatile int64_t t5 = 3275LL;

    t5 = (x21/((x22*x23)^x24));

    if (t5 != -1621537572LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	int8_t x26 = INT8_MAX;
	int32_t x27 = -1;
	static int32_t x28 = INT32_MAX;
	volatile int32_t t6 = -29963;

    t6 = (x25/((x26*x27)^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = UINT8_MAX;
	volatile int16_t x34 = INT16_MAX;
	int16_t x35 = -1;
	int16_t x36 = INT16_MIN;
	int32_t t7 = 286;

    t7 = (x33/((x34*x35)^x36));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x42 = INT32_MAX;
	int64_t x43 = -1LL;
	uint64_t x44 = 381182349996300LLU;
	volatile uint64_t t8 = 27991452LLU;

    t8 = (x41/((x42*x43)^x44));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = INT8_MIN;
	static volatile int64_t x46 = INT64_MAX;
	int8_t x47 = 1;

    t9 = (x45/((x46*x47)^x48));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x50 = -1;
	int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MIN;
	volatile int32_t t10 = 17;

    t10 = (x49/((x50*x51)^x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x65 = -1;
	int32_t x66 = -1;
	volatile int16_t x67 = INT16_MAX;
	uint16_t x68 = 120U;
	static int32_t t11 = -75863;

    t11 = (x65/((x66*x67)^x68));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x69 = INT32_MIN;
	uint8_t x70 = 63U;
	int64_t x71 = 884LL;
	int64_t t12 = 12182LL;

    t12 = (x69/((x70*x71)^x72));

    if (t12 != -218173LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x73 = 0;
	int8_t x74 = INT8_MIN;
	int16_t x75 = -1;
	volatile int32_t t13 = 110194414;

    t13 = (x73/((x74*x75)^x76));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x77 = INT8_MIN;
	uint8_t x78 = 1U;
	uint32_t x79 = UINT32_MAX;
	static int16_t x80 = INT16_MIN;

    t14 = (x77/((x78*x79)^x80));

    if (t14 != 131075U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x91 = 1U;
	uint64_t x92 = 90LLU;
	static volatile uint64_t t15 = 49404296LLU;

    t15 = (x89/((x90*x91)^x92));

    if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x109 = -1;
	volatile int16_t x110 = -7;
	uint64_t x111 = 994362048224347471LLU;
	static int64_t x112 = -1LL;

    t16 = (x109/((x110*x111)^x112));

    if (t16 != 2LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x114 = -1;
	int64_t x115 = -1LL;
	uint16_t x116 = 7U;
	static int64_t t17 = 29120980889631LL;

    t17 = (x113/((x114*x115)^x116));

    if (t17 != 10922LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x118 = -5;
	static int64_t t18 = 350737LL;

    t18 = (x117/((x118*x119)^x120));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MIN;
	uint64_t x123 = 1978916789301LLU;
	volatile int16_t x124 = -1;
	static uint64_t t19 = 1652560382LLU;

    t19 = (x121/((x122*x123)^x124));

    if (t19 != 36412LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x125 = -96173LL;
	uint32_t x126 = UINT32_MAX;
	int16_t x127 = -1;
	int64_t x128 = INT64_MIN;
	int64_t t20 = 1847319162LL;

    t20 = (x125/((x126*x127)^x128));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x133 = INT8_MAX;
	uint32_t x134 = UINT32_MAX;
	static volatile int8_t x135 = INT8_MIN;
	uint8_t x136 = 54U;
	static uint32_t t21 = 2818U;

    t21 = (x133/((x134*x135)^x136));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x153 = UINT64_MAX;
	uint32_t x154 = UINT32_MAX;
	static int8_t x155 = INT8_MIN;
	uint64_t t22 = 4240812718852LLU;

    t22 = (x153/((x154*x155)^x156));

    if (t22 != 142998016075267841LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x157 = -1LL;
	static int8_t x158 = INT8_MIN;
	int64_t x159 = -4207759806LL;
	volatile int64_t x160 = 15780939LL;
	static int64_t t23 = 3LL;

    t23 = (x157/((x158*x159)^x160));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x161 = -1;
	int16_t x162 = -1;
	int16_t x163 = INT16_MAX;
	int32_t t24 = -512779538;

    t24 = (x161/((x162*x163)^x164));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x167 = 3U;
	volatile uint16_t x168 = UINT16_MAX;
	volatile int64_t t25 = -1LL;

    t25 = (x165/((x166*x167)^x168));

    if (t25 != -143191157636731LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x169 = 50U;
	int32_t x170 = INT32_MIN;
	int8_t x171 = 0;
	int16_t x172 = 190;
	volatile int32_t t26 = -412781808;

    t26 = (x169/((x170*x171)^x172));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x173 = 4;
	int16_t x174 = -1;
	int64_t x175 = -1LL;
	int64_t x176 = -31208LL;
	volatile int64_t t27 = -1LL;

    t27 = (x173/((x174*x175)^x176));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x177 = -1;
	volatile int16_t x179 = 583;
	int64_t x180 = -1LL;
	int64_t t28 = 141075752LL;

    t28 = (x177/((x178*x179)^x180));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x181 = 201034559U;
	int64_t x182 = -1LL;
	volatile int16_t x184 = INT16_MIN;

    t29 = (x181/((x182*x183)^x184));

    if (t29 != -6135LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x185 = 39U;
	int16_t x186 = -1286;
	int16_t x187 = 1747;
	int64_t x188 = 3951932875LL;
	int64_t t30 = -34LL;

    t30 = (x185/((x186*x187)^x188));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x190 = INT8_MAX;
	int16_t x191 = -1;
	uint32_t x192 = UINT32_MAX;
	static uint64_t t31 = 215824708LLU;

    t31 = (x189/((x190*x191)^x192));

    if (t31 != 7129386846214492LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x193 = -107;
	int8_t x194 = -5;
	static int16_t x195 = INT16_MIN;
	int64_t x196 = 146LL;
	static volatile int64_t t32 = 201217671235921LL;

    t32 = (x193/((x194*x195)^x196));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x197 = INT32_MIN;
	uint8_t x198 = 14U;
	int8_t x199 = INT8_MIN;
	uint64_t x200 = UINT64_MAX;
	static uint64_t t33 = 490452643681LLU;

    t33 = (x197/((x198*x199)^x200));

    if (t33 != 10299689598862126LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x201 = -67660789825LL;
	static volatile int8_t x202 = INT8_MAX;
	int16_t x203 = 68;

    t34 = (x201/((x202*x203)^x204));

    if (t34 != 7827486LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x205 = 911U;
	uint8_t x206 = 43U;
	uint64_t x207 = UINT64_MAX;
	volatile uint32_t x208 = 776337U;

    t35 = (x205/((x206*x207)^x208));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x213 = UINT64_MAX;
	static uint64_t x214 = 126225349620LLU;
	volatile uint8_t x215 = 11U;
	volatile int8_t x216 = 1;
	volatile uint64_t t36 = 161LLU;

    t36 = (x213/((x214*x215)^x216));

    if (t36 != 13285578LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x218 = INT32_MIN;
	uint32_t x219 = 6416U;
	int16_t x220 = 119;
	static uint32_t t37 = 2919568U;

    t37 = (x217/((x218*x219)^x220));

    if (t37 != 275U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x222 = UINT16_MAX;
	volatile uint8_t x223 = 24U;
	uint32_t x224 = 1810U;
	uint32_t t38 = 30U;

    t38 = (x221/((x222*x223)^x224));

    if (t38 != 2733U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x229 = INT64_MIN;
	int16_t x230 = INT16_MAX;
	int16_t x231 = -1;
	int64_t t39 = 53LL;

    t39 = (x229/((x230*x231)^x232));

    if (t39 != -282008562247134LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x234 = UINT64_MAX;
	uint64_t x235 = 536LLU;
	static int32_t x236 = INT32_MIN;

    t40 = (x233/((x234*x235)^x236));

    if (t40 != 8589936736LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x237 = INT8_MAX;
	static volatile uint64_t x238 = UINT64_MAX;
	int16_t x240 = -1;
	uint64_t t41 = 1633681269645342LLU;

    t41 = (x237/((x238*x239)^x240));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x249 = 27;
	int16_t x250 = INT16_MAX;
	volatile uint32_t x251 = 124U;
	volatile int8_t x252 = INT8_MIN;
	uint32_t t42 = 212U;

    t42 = (x249/((x250*x251)^x252));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x254 = -26;
	uint16_t x255 = UINT16_MAX;
	volatile int64_t x256 = INT64_MAX;
	volatile int64_t t43 = 1042153LL;

    t43 = (x253/((x254*x255)^x256));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x257 = -1LL;
	uint8_t x258 = 51U;
	static int16_t x259 = INT16_MAX;
	static uint64_t x260 = UINT64_MAX;
	static uint64_t t44 = 5668182320444977LLU;

    t44 = (x257/((x258*x259)^x260));

    if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x261 = -1;
	volatile int64_t x262 = -334LL;
	static int32_t x263 = INT32_MIN;
	uint8_t x264 = UINT8_MAX;
	static volatile int64_t t45 = 3592372550152LL;

    t45 = (x261/((x262*x263)^x264));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x269 = UINT32_MAX;
	volatile int32_t x270 = INT32_MIN;
	static volatile uint64_t t46 = 73361829093810LLU;

    t46 = (x269/((x270*x271)^x272));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x273 = UINT16_MAX;
	int16_t x274 = -98;
	uint64_t x275 = 1309LLU;
	uint64_t x276 = 218330165682439LLU;
	static volatile uint64_t t47 = 103416603395046LLU;

    t47 = (x273/((x274*x275)^x276));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x277 = INT32_MAX;
	static int32_t x278 = -15446084;
	int16_t x279 = 86;
	static volatile uint64_t t48 = 107758LLU;

    t48 = (x277/((x278*x279)^x280));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x281 = 2368557LLU;
	uint16_t x282 = 2U;
	volatile int16_t x283 = 1;
	static uint8_t x284 = UINT8_MAX;
	uint64_t t49 = 1507459333856932LLU;

    t49 = (x281/((x282*x283)^x284));

    if (t49 != 9361LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x285 = 0U;
	int64_t x286 = 606511901LL;
	static int32_t x287 = -1;
	int32_t x288 = 458852384;
	static int64_t t50 = 460553284LL;

    t50 = (x285/((x286*x287)^x288));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x289 = -199LL;
	int32_t x291 = -367;
	int64_t t51 = -118023LL;

    t51 = (x289/((x290*x291)^x292));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x301 = -1;
	static uint64_t x302 = UINT64_MAX;
	static volatile int32_t x303 = -1;
	int32_t x304 = INT32_MIN;

    t52 = (x301/((x302*x303)^x304));

    if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x305 = 60874149100LL;
	int8_t x307 = 0;
	static volatile int16_t x308 = INT16_MAX;
	int64_t t53 = -930439563918652257LL;

    t53 = (x305/((x306*x307)^x308));

    if (t53 != 1857788LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x309 = 155U;
	int32_t x310 = -1;
	volatile uint64_t x311 = UINT64_MAX;
	uint16_t x312 = 1934U;
	uint64_t t54 = 102793748LLU;

    t54 = (x309/((x310*x311)^x312));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x313 = INT64_MIN;
	static volatile int32_t x314 = 100737;
	int32_t x315 = -1;
	uint16_t x316 = 96U;
	volatile int64_t t55 = -511719LL;

    t55 = (x313/((x314*x315)^x316));

    if (t55 != 91471760602727LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x317 = 39;
	uint64_t x319 = UINT64_MAX;
	uint64_t x320 = 3907101250560406LLU;
	uint64_t t56 = 5516699348792LLU;

    t56 = (x317/((x318*x319)^x320));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x322 = INT32_MIN;
	uint32_t x323 = UINT32_MAX;
	int64_t x324 = INT64_MIN;
	volatile int64_t t57 = -2122137648456757LL;

    t57 = (x321/((x322*x323)^x324));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x333 = 8120U;
	int16_t x335 = INT16_MAX;
	volatile int32_t x336 = -4046633;
	int32_t t58 = -137917542;

    t58 = (x333/((x334*x335)^x336));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x337 = INT64_MAX;
	int8_t x339 = 35;
	static volatile int32_t x340 = 21;
	volatile int64_t t59 = 760LL;

    t59 = (x337/((x338*x339)^x340));

    if (t59 != 8042534893632LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x341 = -11912;
	int32_t x342 = 18531;
	int64_t x344 = INT64_MIN;
	int64_t t60 = -3873068859520LL;

    t60 = (x341/((x342*x343)^x344));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x345 = -603LL;
	uint64_t x346 = 82129717069LLU;
	uint64_t x347 = UINT64_MAX;
	volatile int64_t x348 = INT64_MIN;

    t61 = (x345/((x346*x347)^x348));

    if (t61 != 2LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x353 = -1;
	int8_t x356 = 55;
	int32_t t62 = -88;

    t62 = (x353/((x354*x355)^x356));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x358 = INT8_MAX;
	uint16_t x359 = 5489U;
	int8_t x360 = -1;
	int32_t t63 = 14;

    t63 = (x357/((x358*x359)^x360));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x365 = 148U;
	int8_t x366 = INT8_MIN;
	int64_t x368 = -1LL;

    t64 = (x365/((x366*x367)^x368));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x369 = INT8_MAX;
	int64_t x370 = -1LL;
	volatile int32_t x371 = 460;
	int64_t x372 = INT64_MAX;
	static volatile int64_t t65 = 21010833129198578LL;

    t65 = (x369/((x370*x371)^x372));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x373 = INT32_MIN;
	uint64_t x374 = 1555124951541042401LLU;
	volatile uint64_t t66 = 3330974133474LLU;

    t66 = (x373/((x374*x375)^x376));

    if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x377 = INT32_MIN;
	int16_t x379 = 2;
	static uint32_t x380 = 70U;
	uint32_t t67 = 452333U;

    t67 = (x377/((x378*x379)^x380));

    if (t67 != 63859U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x381 = INT16_MAX;
	int8_t x382 = INT8_MAX;
	volatile uint64_t x383 = UINT64_MAX;
	int16_t x384 = INT16_MIN;
	volatile uint64_t t68 = 31LLU;

    t68 = (x381/((x382*x383)^x384));

    if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x385 = 110U;
	volatile int32_t x386 = -169357785;
	uint32_t x387 = UINT32_MAX;
	static int16_t x388 = 313;
	uint32_t t69 = 3705110U;

    t69 = (x385/((x386*x387)^x388));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x389 = -1;
	uint32_t x390 = UINT32_MAX;
	static volatile int16_t x391 = -1;
	uint32_t x392 = 199107774U;
	static uint32_t t70 = 3622900U;

    t70 = (x389/((x390*x391)^x392));

    if (t70 != 21U) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x401 = 3452U;
	static int8_t x402 = INT8_MAX;
	volatile int8_t x403 = -1;
	static int8_t x404 = -1;
	volatile int32_t t71 = 2005;

    t71 = (x401/((x402*x403)^x404));

    if (t71 != 27) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x405 = INT16_MAX;
	int16_t x406 = -1;
	int64_t x408 = INT64_MIN;

    t72 = (x405/((x406*x407)^x408));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x414 = 123U;
	static int8_t x415 = INT8_MIN;
	int32_t t73 = -282513;

    t73 = (x413/((x414*x415)^x416));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x417 = -1;
	int16_t x418 = 867;
	int32_t x419 = 127695;
	int32_t x420 = -1;
	int32_t t74 = 31468;

    t74 = (x417/((x418*x419)^x420));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x421 = 54807113577LLU;
	int16_t x422 = INT16_MAX;
	int16_t x424 = INT16_MIN;
	uint64_t t75 = 762614190LLU;

    t75 = (x421/((x422*x423)^x424));

    if (t75 != 13LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x425 = INT16_MIN;
	int32_t x428 = -1;

    t76 = (x425/((x426*x427)^x428));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x431 = 33;
	int32_t x432 = -19208585;
	volatile uint64_t t77 = 13668461331LLU;

    t77 = (x429/((x430*x431)^x432));

    if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x433 = INT8_MIN;
	int32_t x434 = -1;
	int32_t x435 = 30;
	volatile int16_t x436 = INT16_MAX;
	int32_t t78 = -7;

    t78 = (x433/((x434*x435)^x436));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x437 = 93U;
	uint32_t x438 = UINT32_MAX;
	static volatile int32_t x439 = INT32_MIN;
	static uint64_t x440 = 257019065999341781LLU;
	volatile uint64_t t79 = 184LLU;

    t79 = (x437/((x438*x439)^x440));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x445 = INT8_MIN;
	int16_t x447 = -1;
	static uint64_t t80 = 3256528LLU;

    t80 = (x445/((x446*x447)^x448));

    if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x449 = -436029317524261485LL;
	int32_t x450 = 4;
	volatile int32_t x451 = 6;
	uint8_t x452 = 3U;
	static int64_t t81 = -116118LL;

    t81 = (x449/((x450*x451)^x452));

    if (t81 != -16149233982380055LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x454 = INT32_MAX;
	int64_t x455 = 1458LL;
	int8_t x456 = -1;
	static int64_t t82 = 1513149918LL;

    t82 = (x453/((x454*x455)^x456));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x457 = 147U;
	int8_t x458 = 34;
	int8_t x459 = 20;
	static volatile int64_t x460 = -45258775290918LL;
	int64_t t83 = 666LL;

    t83 = (x457/((x458*x459)^x460));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x470 = INT16_MIN;
	int16_t x471 = INT16_MIN;
	uint32_t x472 = UINT32_MAX;
	volatile uint32_t t84 = 124U;

    t84 = (x469/((x470*x471)^x472));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x474 = -708;
	int8_t x475 = 58;
	uint32_t t85 = 76U;

    t85 = (x473/((x474*x475)^x476));

    if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x477 = INT16_MIN;
	int64_t x478 = INT64_MIN;
	int32_t x479 = 1;
	int8_t x480 = -1;
	static volatile int64_t t86 = 278LL;

    t86 = (x477/((x478*x479)^x480));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint64_t x481 = 225737480903697495LLU;
	int16_t x482 = INT16_MIN;
	uint16_t x483 = 2379U;
	volatile int8_t x484 = INT8_MAX;
	uint64_t t87 = 59220352911LLU;

    t87 = (x481/((x482*x483)^x484));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x489 = 228461114U;
	static int8_t x490 = INT8_MIN;
	int32_t x492 = INT32_MAX;
	volatile uint32_t t88 = 10914U;

    t88 = (x489/((x490*x491)^x492));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x497 = INT8_MIN;
	uint16_t x499 = UINT16_MAX;
	static int32_t t89 = 10569181;

    t89 = (x497/((x498*x499)^x500));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x502 = -1;
	static int8_t x503 = 12;
	volatile int8_t x504 = -1;
	static uint64_t t90 = 2707479468603699363LLU;

    t90 = (x501/((x502*x503)^x504));

    if (t90 != 1676976733973595601LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x505 = UINT32_MAX;
	int8_t x507 = 3;
	uint16_t x508 = UINT16_MAX;
	uint32_t t91 = 17614940U;

    t91 = (x505/((x506*x507)^x508));

    if (t91 != 65920U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x509 = INT64_MAX;
	int16_t x510 = 14846;
	volatile int32_t x511 = -411;

    t92 = (x509/((x510*x511)^x512));

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x517 = UINT8_MAX;
	static int8_t x518 = INT8_MAX;
	static int8_t x519 = 3;
	volatile uint16_t x520 = 54U;
	int32_t t93 = 533607478;

    t93 = (x517/((x518*x519)^x520));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x525 = -1;
	int64_t x526 = 81496388925655214LL;
	uint64_t x527 = UINT64_MAX;
	int16_t x528 = -313;
	static volatile uint64_t t94 = 1683522320985LLU;

    t94 = (x525/((x526*x527)^x528));

    if (t94 != 226LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x529 = 0U;
	uint32_t x530 = 22099U;
	int32_t x531 = INT32_MIN;
	volatile int64_t t95 = -3010670LL;

    t95 = (x529/((x530*x531)^x532));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x533 = INT32_MAX;
	uint32_t x534 = 1034320U;
	int32_t x535 = INT32_MIN;
	int32_t x536 = INT32_MIN;
	uint32_t t96 = 13344U;

    t96 = (x533/((x534*x535)^x536));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x538 = UINT64_MAX;
	uint16_t x540 = 2315U;
	static uint64_t t97 = 946254560LLU;

    t97 = (x537/((x538*x539)^x540));

    if (t97 != 7971799513271197LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x542 = -11432826;
	volatile int16_t x543 = -1;
	uint64_t x544 = 378599LLU;
	uint64_t t98 = 26792285966LLU;

    t98 = (x541/((x542*x543)^x544));

    if (t98 != 819625869776LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x547 = 3205533209215358LLU;
	uint64_t t99 = 2504121LLU;

    t99 = (x545/((x546*x547)^x548));

    if (t99 != 1150LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x549 = UINT16_MAX;
	volatile int8_t x550 = -2;
	static int16_t x551 = 229;
	int8_t x552 = INT8_MIN;
	int32_t t100 = -55316;

    t100 = (x549/((x550*x551)^x552));

    if (t100 != 149) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x553 = 120;
	int16_t x554 = INT16_MIN;
	int16_t x555 = INT16_MIN;
	int32_t x556 = INT32_MIN;

    t101 = (x553/((x554*x555)^x556));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x557 = 16;
	int8_t x558 = 0;
	int32_t x560 = INT32_MAX;
	int32_t t102 = 61791;

    t102 = (x557/((x558*x559)^x560));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x562 = -5;
	int32_t x563 = -1;
	volatile int8_t x564 = -8;

    t103 = (x561/((x562*x563)^x564));

    if (t103 != -3) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x567 = -1;
	volatile int16_t x568 = -2;
	volatile int32_t t104 = -12715;

    t104 = (x565/((x566*x567)^x568));

    if (t104 != -306783378) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x570 = 3363LL;
	int16_t x572 = INT16_MIN;
	int64_t t105 = 241186999954LL;

    t105 = (x569/((x570*x571)^x572));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x573 = -3917301477LL;
	volatile uint16_t x574 = 11U;
	int16_t x575 = INT16_MIN;
	volatile uint64_t x576 = 3225LLU;
	uint64_t t106 = 20958LLU;

    t106 = (x573/((x574*x575)^x576));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x577 = INT64_MAX;
	volatile uint16_t x578 = 25460U;
	static uint16_t x579 = 439U;
	uint8_t x580 = 0U;
	volatile int64_t t107 = 53018730314LL;

    t107 = (x577/((x578*x579)^x580));

    if (t107 != 825214417976LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x581 = -1LL;
	int8_t x582 = -1;
	int8_t x583 = -1;
	volatile int64_t t108 = -287531510596865634LL;

    t108 = (x581/((x582*x583)^x584));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x585 = 7U;
	uint8_t x586 = UINT8_MAX;
	int16_t x587 = -6;
	volatile int64_t t109 = 7807087931384175LL;

    t109 = (x585/((x586*x587)^x588));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x589 = -1;
	static int16_t x590 = -1;
	uint64_t x591 = 34310557LLU;
	int16_t x592 = INT16_MIN;
	uint64_t t110 = 244315721741LLU;

    t110 = (x589/((x590*x591)^x592));

    if (t110 != 537204484253LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x597 = -1;
	int32_t x598 = -1;
	uint32_t x599 = 1U;
	volatile int16_t x600 = 13779;
	uint32_t t111 = 169351332U;

    t111 = (x597/((x598*x599)^x600));

    if (t111 != 1U) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x601 = 87U;
	uint32_t x603 = 7558U;
	volatile uint64_t x604 = UINT64_MAX;

    t112 = (x601/((x602*x603)^x604));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x610 = 58053U;
	static int32_t x611 = -30694;
	volatile uint64_t x612 = 12344538LLU;
	uint64_t t113 = 523LLU;

    t113 = (x609/((x610*x611)^x612));

    if (t113 != 7356337118LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x613 = -707003984263LL;
	volatile int16_t x614 = 5089;
	uint32_t x615 = 558U;
	int64_t x616 = 8928657LL;

    t114 = (x613/((x614*x615)^x616));

    if (t114 != -66016LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x617 = 2;
	static volatile int64_t x618 = 2780609LL;
	uint16_t x619 = 74U;
	int64_t t115 = 1LL;

    t115 = (x617/((x618*x619)^x620));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x625 = INT32_MIN;
	int16_t x626 = -14092;
	int64_t x627 = -14369348LL;
	uint32_t x628 = 749U;
	volatile int64_t t116 = -5600613533502LL;

    t116 = (x625/((x626*x627)^x628));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x629 = -1LL;
	uint64_t x630 = 35941LLU;
	static int16_t x631 = INT16_MIN;
	static uint64_t x632 = 130319LLU;

    t117 = (x629/((x630*x631)^x632));

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x634 = -1;
	volatile int32_t x636 = -1;
	volatile int64_t t118 = 4357777691371196855LL;

    t118 = (x633/((x634*x635)^x636));

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x641 = -17;
	uint32_t x642 = 55530U;
	int64_t x643 = -652092541585LL;
	static volatile uint64_t x644 = UINT64_MAX;
	volatile uint64_t t119 = 3506868568191LLU;

    t119 = (x641/((x642*x643)^x644));

    if (t119 != 509LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x646 = INT8_MIN;
	int64_t x647 = -1LL;
	volatile uint64_t t120 = 22292718177601LLU;

    t120 = (x645/((x646*x647)^x648));

    if (t120 != 1LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x653 = INT16_MAX;
	int16_t x654 = -1;
	int8_t x655 = -1;
	volatile uint8_t x656 = 14U;
	volatile int32_t t121 = -455760;

    t121 = (x653/((x654*x655)^x656));

    if (t121 != 2184) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x658 = INT8_MAX;
	volatile uint64_t x659 = 233904LLU;
	int32_t x660 = INT32_MAX;
	volatile uint64_t t122 = 2484985329657282575LLU;

    t122 = (x657/((x658*x659)^x660));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x669 = 17;
	static uint32_t x671 = 2027021096U;
	static uint32_t t123 = 14724U;

    t123 = (x669/((x670*x671)^x672));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x673 = -1;
	volatile int64_t x674 = -1LL;
	uint8_t x675 = UINT8_MAX;
	int64_t t124 = 3552063223156859LL;

    t124 = (x673/((x674*x675)^x676));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x677 = INT64_MIN;
	volatile int16_t x678 = -1;
	static uint16_t x679 = UINT16_MAX;
	int64_t t125 = -127590991379053412LL;

    t125 = (x677/((x678*x679)^x680));

    if (t125 != 281457797889984LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x681 = -1;
	uint64_t x682 = UINT64_MAX;
	int64_t x684 = INT64_MIN;
	uint64_t t126 = 665316LLU;

    t126 = (x681/((x682*x683)^x684));

    if (t126 != 1LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x686 = UINT16_MAX;
	uint64_t x687 = 958687468073940LLU;
	volatile uint64_t t127 = 7601041LLU;

    t127 = (x685/((x686*x687)^x688));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x689 = INT64_MAX;
	uint16_t x691 = 7080U;
	volatile int64_t t128 = 1188267600097880516LL;

    t128 = (x689/((x690*x691)^x692));

    if (t128 != -10237885014479LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x694 = -212845196175293LL;
	static int16_t x695 = -377;

    t129 = (x693/((x694*x695)^x696));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x697 = UINT8_MAX;
	volatile int32_t x700 = -261710603;

    t130 = (x697/((x698*x699)^x700));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x701 = -1;
	int8_t x702 = -1;
	int32_t x703 = -8089;
	static uint64_t x704 = UINT64_MAX;

    t131 = (x701/((x702*x703)^x704));

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x705 = 188362U;
	uint64_t x706 = UINT64_MAX;
	volatile uint16_t x708 = UINT16_MAX;
	volatile uint64_t t132 = 3112763870348970LLU;

    t132 = (x705/((x706*x707)^x708));

    if (t132 != 5LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x714 = -249725;
	volatile int8_t x715 = -1;
	volatile int32_t t133 = 1580;

    t133 = (x713/((x714*x715)^x716));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x718 = 1U;
	static int8_t x719 = 0;
	int8_t x720 = -3;

    t134 = (x717/((x718*x719)^x720));

    if (t134 != -715827882) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x721 = UINT32_MAX;
	int16_t x722 = -1;
	int8_t x724 = INT8_MIN;
	uint64_t t135 = 7344636LLU;

    t135 = (x721/((x722*x723)^x724));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x725 = INT32_MIN;
	uint64_t x726 = 4108512511LLU;
	static volatile int16_t x727 = -1068;
	volatile int32_t x728 = INT32_MIN;
	uint64_t t136 = 5718442189050LLU;

    t136 = (x725/((x726*x727)^x728));

    if (t136 != 4203069LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x729 = 3330320070LLU;
	static uint64_t x730 = 14141827057162LLU;
	static volatile uint64_t x731 = 53231619LLU;
	static int16_t x732 = 0;
	static uint64_t t137 = 263689089349LLU;

    t137 = (x729/((x730*x731)^x732));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x733 = -60;
	int8_t x735 = INT8_MIN;
	int16_t x736 = INT16_MAX;
	volatile int32_t t138 = 369747143;

    t138 = (x733/((x734*x735)^x736));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x741 = 1970U;
	int32_t x742 = INT32_MAX;
	int8_t x743 = 0;
	static volatile uint32_t t139 = 23U;

    t139 = (x741/((x742*x743)^x744));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x745 = UINT32_MAX;
	int8_t x746 = INT8_MIN;
	int8_t x747 = INT8_MIN;
	uint8_t x748 = 1U;
	uint32_t t140 = 3U;

    t140 = (x745/((x746*x747)^x748));

    if (t140 != 262128U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x753 = INT16_MIN;
	static volatile uint32_t x754 = 62817028U;
	volatile int16_t x755 = -1;
	int8_t x756 = INT8_MIN;

    t141 = (x753/((x754*x755)^x756));

    if (t141 != 68U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x757 = 6;
	int8_t x758 = INT8_MIN;
	static int32_t x759 = 15283;
	uint8_t x760 = 1U;
	volatile int32_t t142 = 26279776;

    t142 = (x757/((x758*x759)^x760));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x761 = INT8_MIN;
	volatile uint64_t x764 = 32920959LLU;

    t143 = (x761/((x762*x763)^x764));

    if (t143 != 16091793302LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x766 = -1;
	volatile int32_t x767 = 28043;
	uint32_t x768 = UINT32_MAX;
	uint32_t t144 = 3U;

    t144 = (x765/((x766*x767)^x768));

    if (t144 != 153161U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x769 = 159128929308161LLU;
	static int16_t x770 = INT16_MAX;
	uint64_t x771 = UINT64_MAX;
	uint32_t x772 = UINT32_MAX;
	static uint64_t t145 = 10958702555LLU;

    t145 = (x769/((x770*x771)^x772));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x773 = 16889147;
	int64_t x774 = -14526573754145165LL;
	uint64_t t146 = 420047799470LLU;

    t146 = (x773/((x774*x775)^x776));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x781 = INT8_MIN;
	volatile int16_t x782 = 0;
	volatile int16_t x783 = -44;
	volatile int32_t t147 = 1090140;

    t147 = (x781/((x782*x783)^x784));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x785 = -37;
	uint32_t x786 = 52181U;
	int8_t x787 = INT8_MIN;
	volatile int64_t t148 = 1865725LL;

    t148 = (x785/((x786*x787)^x788));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x789 = 1U;
	uint64_t x790 = UINT64_MAX;
	int32_t x791 = 544531;
	int32_t x792 = 452;

    t149 = (x789/((x790*x791)^x792));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x805 = 1U;
	static volatile uint8_t x806 = 47U;
	int8_t x807 = 2;

    t150 = (x805/((x806*x807)^x808));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x809 = -1;
	uint16_t x810 = UINT16_MAX;
	uint64_t x811 = 602325925576LLU;
	int32_t x812 = INT32_MIN;
	volatile uint64_t t151 = 66224598LLU;

    t151 = (x809/((x810*x811)^x812));

    if (t151 != 1LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x817 = 2952U;
	volatile uint32_t x818 = UINT32_MAX;
	uint64_t x819 = UINT64_MAX;
	uint32_t x820 = UINT32_MAX;
	volatile uint64_t t152 = 343286021785LLU;

    t152 = (x817/((x818*x819)^x820));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x830 = 2293;
	static int32_t x832 = INT32_MIN;

    t153 = (x829/((x830*x831)^x832));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x833 = 9597023645654074LLU;
	int64_t x834 = -1LL;
	volatile uint32_t x835 = UINT32_MAX;
	uint64_t t154 = 105574288LLU;

    t154 = (x833/((x834*x835)^x836));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x837 = -1;
	volatile int16_t x838 = INT16_MIN;
	volatile uint32_t t155 = 4816305U;

    t155 = (x837/((x838*x839)^x840));

    if (t155 != 1U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x841 = INT8_MAX;
	volatile int16_t x842 = INT16_MAX;
	static uint16_t x843 = 3U;
	int8_t x844 = INT8_MAX;
	volatile int32_t t156 = 3297;

    t156 = (x841/((x842*x843)^x844));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x849 = UINT32_MAX;
	volatile uint16_t x852 = 346U;
	static volatile uint32_t t157 = 1446285176U;

    t157 = (x849/((x850*x851)^x852));

    if (t157 != 1U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x853 = 1199;
	volatile uint32_t x855 = UINT32_MAX;
	volatile int16_t x856 = 7;
	volatile int64_t t158 = 4994026265663LL;

    t158 = (x853/((x854*x855)^x856));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x857 = 13U;
	uint64_t x858 = UINT64_MAX;
	int16_t x860 = -11098;
	volatile uint64_t t159 = 108362510753LLU;

    t159 = (x857/((x858*x859)^x860));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x861 = 449U;
	static int8_t x863 = -8;
	volatile int32_t x864 = INT32_MIN;

    t160 = (x861/((x862*x863)^x864));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x866 = INT8_MIN;
	uint32_t x867 = 797267U;
	static int8_t x868 = INT8_MAX;
	volatile uint32_t t161 = 198U;

    t161 = (x865/((x866*x867)^x868));

    if (t161 != 1U) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x869 = 23;
	int64_t x870 = -1LL;
	static int8_t x871 = INT8_MIN;
	volatile uint64_t x872 = 1937461920460710873LLU;

    t162 = (x869/((x870*x871)^x872));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x873 = 82513906U;
	static uint64_t x874 = 27381414360LLU;
	uint16_t x875 = UINT16_MAX;
	static uint16_t x876 = 198U;
	volatile uint64_t t163 = 484322429700LLU;

    t163 = (x873/((x874*x875)^x876));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x877 = 5494810130LL;
	int64_t x878 = -1184LL;
	static uint32_t x879 = 54553U;
	int32_t x880 = INT32_MAX;
	volatile int64_t t164 = -10LL;

    t164 = (x877/((x878*x879)^x880));

    if (t164 != -2LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x882 = -1LL;
	int16_t x883 = -1;
	int64_t x884 = INT64_MIN;
	int64_t t165 = -269475504320LL;

    t165 = (x881/((x882*x883)^x884));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x885 = INT64_MIN;
	uint16_t x886 = 15U;
	static int16_t x887 = 5772;
	uint64_t x888 = UINT64_MAX;
	volatile uint64_t t166 = 5494673940106874LLU;

    t166 = (x885/((x886*x887)^x888));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x889 = INT8_MAX;
	uint16_t x890 = UINT16_MAX;
	int16_t x891 = INT16_MAX;
	int16_t x892 = INT16_MIN;
	volatile int32_t t167 = -3339;

    t167 = (x889/((x890*x891)^x892));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x905 = INT8_MIN;
	uint8_t x906 = 0U;
	int32_t x907 = INT32_MAX;
	int8_t x908 = INT8_MAX;
	volatile int32_t t168 = -801434207;

    t168 = (x905/((x906*x907)^x908));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x909 = -1;
	int16_t x911 = INT16_MIN;
	uint64_t t169 = 1157LLU;

    t169 = (x909/((x910*x911)^x912));

    if (t169 != 4172978774LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x914 = 94694LLU;
	int32_t x915 = INT32_MAX;
	int8_t x916 = -61;
	uint64_t t170 = 3LLU;

    t170 = (x913/((x914*x915)^x916));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x917 = 0;
	uint16_t x919 = 7U;
	static int64_t t171 = 118236525LL;

    t171 = (x917/((x918*x919)^x920));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x921 = INT32_MIN;
	int8_t x922 = INT8_MIN;
	int8_t x923 = -15;
	static int32_t t172 = 7354;

    t172 = (x921/((x922*x923)^x924));

    if (t172 != 1381907) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x925 = INT32_MAX;
	volatile uint16_t x926 = 3U;
	volatile int16_t x928 = INT16_MIN;
	volatile int64_t t173 = 2001865749126348585LL;

    t173 = (x925/((x926*x927)^x928));

    if (t173 != -73928LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x929 = 57199640U;
	uint16_t x930 = UINT16_MAX;
	uint64_t x931 = UINT64_MAX;
	static int8_t x932 = INT8_MAX;
	volatile uint64_t t174 = 7735545LLU;

    t174 = (x929/((x930*x931)^x932));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x935 = 2008;
	volatile uint8_t x936 = 7U;
	static int32_t t175 = -4012666;

    t175 = (x933/((x934*x935)^x936));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x937 = INT16_MAX;
	int32_t x938 = INT32_MIN;
	uint32_t x939 = UINT32_MAX;
	uint32_t x940 = 21U;
	uint32_t t176 = 971U;

    t176 = (x937/((x938*x939)^x940));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x950 = 52257860148812023LLU;
	uint64_t x951 = UINT64_MAX;
	uint64_t t177 = 11108LLU;

    t177 = (x949/((x950*x951)^x952));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x957 = -1;
	int8_t x959 = INT8_MIN;
	static int8_t x960 = INT8_MIN;
	volatile int32_t t178 = -595553;

    t178 = (x957/((x958*x959)^x960));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x961 = 11U;
	uint32_t x963 = 167U;
	int64_t x964 = INT64_MIN;

    t179 = (x961/((x962*x963)^x964));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x965 = UINT16_MAX;
	int32_t x967 = INT32_MIN;
	int64_t x968 = INT64_MIN;
	int64_t t180 = -28614LL;

    t180 = (x965/((x966*x967)^x968));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x969 = 185U;
	int64_t x971 = -1LL;
	uint16_t x972 = 42U;
	static uint64_t t181 = 14060LLU;

    t181 = (x969/((x970*x971)^x972));

    if (t181 != 4LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x973 = INT8_MAX;
	int16_t x974 = -6208;
	int8_t x975 = INT8_MAX;
	volatile int8_t x976 = 5;
	static volatile int32_t t182 = -1284;

    t182 = (x973/((x974*x975)^x976));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x977 = 803;
	volatile uint32_t x978 = 1U;

    t183 = (x977/((x978*x979)^x980));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x981 = 26933U;
	volatile int16_t x983 = INT16_MIN;
	static volatile uint64_t t184 = 838928810LLU;

    t184 = (x981/((x982*x983)^x984));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x985 = UINT8_MAX;
	volatile int8_t x986 = -3;
	static volatile uint64_t x987 = 5100191957371LLU;
	int8_t x988 = INT8_MIN;
	volatile uint64_t t185 = 1221909045473190LLU;

    t185 = (x985/((x986*x987)^x988));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x997 = 103U;
	volatile uint8_t x998 = UINT8_MAX;
	uint16_t x1000 = UINT16_MAX;

    t186 = (x997/((x998*x999)^x1000));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1001 = -84;
	int32_t x1003 = -1;
	uint64_t x1004 = UINT64_MAX;

    t187 = (x1001/((x1002*x1003)^x1004));

    if (t187 != 182641030432767836LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1005 = -1193117287LL;
	int32_t x1006 = -1;
	static int16_t x1007 = -12;
	static int64_t x1008 = INT64_MAX;
	volatile int64_t t188 = 1551550655604LL;

    t188 = (x1005/((x1006*x1007)^x1008));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1009 = 0U;
	uint32_t x1010 = 2571U;
	static int8_t x1011 = INT8_MIN;
	int8_t x1012 = INT8_MIN;

    t189 = (x1009/((x1010*x1011)^x1012));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1013 = INT32_MIN;
	int64_t x1014 = -7460778950329LL;
	int32_t x1015 = -1;
	volatile int16_t x1016 = 6139;
	volatile int64_t t190 = 509367LL;

    t190 = (x1013/((x1014*x1015)^x1016));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1025 = INT32_MIN;
	volatile int8_t x1026 = INT8_MIN;
	int8_t x1027 = 1;
	volatile int32_t t191 = 2;

    t191 = (x1025/((x1026*x1027)^x1028));

    if (t191 != -65793) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint8_t x1029 = UINT8_MAX;
	uint16_t x1030 = UINT16_MAX;
	uint8_t x1031 = 4U;
	uint32_t t192 = 8U;

    t192 = (x1029/((x1030*x1031)^x1032));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1033 = INT32_MAX;
	int32_t x1034 = -1;
	volatile int16_t x1035 = INT16_MIN;
	static uint64_t x1036 = 3702LLU;
	uint64_t t193 = 21114768349LLU;

    t193 = (x1033/((x1034*x1035)^x1036));

    if (t193 != 58883LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1042 = 348833590U;
	uint64_t x1043 = 35457051651465039LLU;
	int64_t x1044 = INT64_MAX;
	volatile uint64_t t194 = 932651383442970319LLU;

    t194 = (x1041/((x1042*x1043)^x1044));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1045 = -1;
	int8_t x1046 = -1;
	static int8_t x1047 = INT8_MIN;
	uint64_t x1048 = 257040LLU;

    t195 = (x1045/((x1046*x1047)^x1048));

    if (t195 != 71730324432703LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1053 = 103U;
	int64_t x1054 = 1LL;
	int16_t x1056 = -1;
	int64_t t196 = -201231133220280LL;

    t196 = (x1053/((x1054*x1055)^x1056));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1057 = 13867;
	int16_t x1058 = -1;
	int8_t x1059 = INT8_MIN;
	static uint8_t x1060 = 48U;
	int32_t t197 = 423035;

    t197 = (x1057/((x1058*x1059)^x1060));

    if (t197 != 78) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1061 = UINT32_MAX;
	int32_t x1062 = -1;
	int32_t x1063 = 0;
	int64_t x1064 = INT64_MIN;
	volatile int64_t t198 = -125906157214353LL;

    t198 = (x1061/((x1062*x1063)^x1064));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1073 = INT8_MIN;
	int64_t x1074 = -1LL;
	uint16_t x1075 = 3382U;
	int64_t t199 = 205879332122659531LL;

    t199 = (x1073/((x1074*x1075)^x1076));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

