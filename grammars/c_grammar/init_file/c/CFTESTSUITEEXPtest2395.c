
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

int16_t x3 = INT16_MIN;
uint32_t x7 = 69U;
static uint32_t t1 = 7700U;
int16_t x12 = INT16_MIN;
static uint16_t x14 = UINT16_MAX;
int8_t x15 = INT8_MIN;
int64_t x17 = -1LL;
volatile int8_t x20 = -10;
static volatile int64_t t4 = 1LL;
int32_t x21 = -53;
static volatile int64_t x24 = 58959482450559764LL;
volatile uint32_t x30 = 93641441U;
static volatile int64_t t7 = -7109292033161LL;
int8_t x35 = 3;
static uint64_t x42 = 28639270LLU;
int64_t t11 = -71068186599762207LL;
volatile int64_t x50 = -1LL;
int64_t x51 = INT64_MIN;
uint32_t x53 = 6U;
uint8_t x55 = 32U;
uint32_t x57 = UINT32_MAX;
int64_t x61 = 27066825078LL;
uint64_t x80 = 11LLU;
volatile int8_t x81 = INT8_MAX;
static int8_t x84 = INT8_MAX;
volatile int32_t t20 = -2512598;
static int8_t x91 = -23;
int16_t x96 = 3878;
int8_t x97 = INT8_MIN;
int16_t x100 = 4;
volatile uint16_t x102 = 31U;
int64_t x104 = INT64_MAX;
uint32_t x105 = 31120310U;
static int16_t x106 = INT16_MIN;
static int32_t x107 = -18724;
static uint32_t x109 = 2939441U;
static volatile int8_t x111 = INT8_MIN;
int32_t t30 = -37776143;
volatile int32_t x125 = 189841;
int64_t t32 = 2562743906421606739LL;
static int32_t t33 = -3045782;
int8_t x141 = 0;
static volatile int16_t x144 = INT16_MIN;
int8_t x153 = 3;
uint16_t x157 = 93U;
int64_t x161 = INT64_MAX;
int64_t x164 = INT64_MIN;
int8_t x171 = 2;
int64_t x174 = INT64_MAX;
static int16_t x175 = -54;
uint64_t x180 = UINT64_MAX;
int8_t x184 = 13;
uint16_t x186 = UINT16_MAX;
uint16_t x191 = 1U;
static int32_t x195 = -1;
uint16_t x199 = 66U;
int16_t x211 = INT16_MAX;
int64_t x214 = 64463433730LL;
int8_t x220 = -1;
static uint64_t t54 = 5LLU;
int64_t t55 = -1746748466724600LL;
int32_t x225 = 376174674;
volatile int32_t x228 = -228314;
uint64_t x230 = 137343LLU;
int64_t x236 = 18112098526LL;
uint64_t t61 = 963671LLU;
int8_t x262 = -1;
int64_t x263 = INT64_MIN;
volatile uint16_t x271 = 2852U;
uint32_t x272 = 118U;
static uint32_t t66 = 60114U;
int16_t x276 = INT16_MIN;
static int8_t x277 = INT8_MIN;
int8_t x280 = 1;
volatile int16_t x285 = -63;
volatile int32_t t70 = 6832848;
uint32_t x289 = 337314U;
int64_t x294 = INT64_MIN;
volatile uint64_t t72 = 1342392652349LLU;
int64_t x298 = INT64_MAX;
int64_t t73 = -195406934443152LL;
int32_t x302 = INT32_MAX;
volatile int64_t t77 = -1111515924335243LL;
int16_t x317 = INT16_MIN;
int8_t x318 = 0;
volatile int8_t x319 = INT8_MAX;
int64_t t78 = 24235755309114294LL;
static int64_t t82 = 1606323841421153580LL;
static uint8_t x339 = 11U;
int8_t x340 = INT8_MIN;
int32_t x341 = INT32_MIN;
uint16_t x342 = UINT16_MAX;
int8_t x343 = INT8_MIN;
static int32_t x348 = INT32_MIN;
uint16_t x350 = 589U;
volatile int16_t x352 = INT16_MIN;
static uint32_t t86 = 1649919U;
int32_t x357 = -1;
int16_t x358 = -14;
uint32_t x360 = UINT32_MAX;
int64_t t89 = 253549918099176LL;
int8_t x366 = 0;
uint8_t x371 = UINT8_MAX;
uint16_t x372 = 365U;
static int32_t x380 = INT32_MIN;
int64_t x382 = INT64_MIN;
uint32_t x391 = UINT32_MAX;
int64_t x408 = -1LL;
volatile uint8_t x412 = UINT8_MAX;
volatile uint64_t t101 = 776774933LLU;
int32_t x417 = -1;
static int32_t t107 = -924;
int64_t t108 = 98750605LL;
uint64_t x443 = 1067919455LLU;
int8_t x444 = INT8_MIN;
uint64_t x459 = 410275842488LLU;
uint16_t x468 = 354U;
uint32_t x469 = UINT32_MAX;
uint32_t x471 = 2U;
volatile uint32_t t115 = 74U;
int64_t x475 = INT64_MAX;
uint64_t x480 = 6787473LLU;
volatile uint64_t t117 = 866LLU;
int64_t t118 = 35244896637LL;
int64_t x487 = -1LL;
uint32_t x488 = 1U;
static int8_t x489 = -1;
static volatile int64_t t120 = -476369222702708LL;
int32_t x493 = -53808188;
uint64_t x502 = UINT64_MAX;
int16_t x505 = -3;
int32_t x511 = INT32_MIN;
volatile uint8_t x531 = 6U;
int8_t x534 = -49;
volatile int8_t x543 = 19;
int32_t x553 = INT32_MIN;
int64_t x559 = -1LL;
int32_t x564 = INT32_MAX;
int16_t x565 = -1;
uint64_t t137 = 440100447867LLU;
static int64_t x569 = -771533692261497LL;
volatile int64_t x571 = INT64_MAX;
static volatile int32_t t139 = 2526;
static uint8_t x579 = UINT8_MAX;
int8_t x583 = INT8_MAX;
static uint64_t x592 = UINT64_MAX;
uint16_t x605 = 9U;
static int64_t x610 = -1LL;
int16_t x615 = INT16_MIN;
int8_t x617 = -1;
volatile uint16_t x620 = 5995U;
volatile int32_t t149 = 14431;
int8_t x621 = INT8_MAX;
volatile int16_t x624 = INT16_MAX;
int8_t x627 = -3;
int16_t x628 = INT16_MIN;
volatile uint8_t x630 = 12U;
int8_t x633 = INT8_MIN;
volatile int32_t x639 = -1;
uint8_t x645 = 6U;
volatile uint64_t t156 = 967732726237LLU;
int64_t x651 = INT64_MIN;
int16_t x658 = 1;
int32_t x660 = -1;
volatile int16_t x661 = -1;
volatile int8_t x673 = -1;
int8_t x675 = INT8_MIN;
volatile int16_t x679 = 57;
static uint32_t t163 = 18438U;
int8_t x681 = -1;
static int16_t x688 = INT16_MIN;
uint64_t x691 = 369LLU;
static volatile int8_t x692 = INT8_MIN;
int8_t x696 = -1;
volatile int16_t x697 = 3459;
int16_t x700 = 1;
static int8_t x708 = INT8_MAX;
static volatile int16_t x712 = -2023;
uint32_t x715 = 90338U;
int16_t x718 = 1;
volatile uint32_t x719 = 60U;
static uint8_t x720 = 1U;
static uint32_t x721 = 6370539U;
static int64_t x725 = INT64_MIN;
static int16_t x730 = -1;
int64_t x731 = -138938146800027713LL;
int8_t x741 = INT8_MAX;
int64_t x743 = -157LL;
int32_t x744 = -1;
int64_t t178 = 1701042336123671888LL;
uint8_t x745 = UINT8_MAX;
static int32_t t179 = -63;
int64_t x757 = -868LL;
static int8_t x762 = -13;
int8_t x766 = INT8_MAX;
int64_t x769 = INT64_MAX;
int8_t x772 = INT8_MIN;
int64_t t185 = INT64_MAX;
static volatile uint16_t x773 = 0U;
int8_t x789 = INT8_MAX;
uint8_t x790 = UINT8_MAX;
int8_t x795 = INT8_MAX;
int64_t x805 = -1LL;
volatile uint32_t x806 = 83514U;
int64_t x813 = 137796637580709329LL;
int8_t x815 = INT8_MIN;
volatile int32_t x817 = 105996;
int8_t x823 = INT8_MIN;
static uint16_t x829 = 101U;
int32_t x830 = INT32_MAX;
static uint16_t x831 = 9U;


void f0(void) {
    	int64_t x1 = -617698LL;
	uint16_t x2 = 214U;
	uint16_t x4 = UINT16_MAX;
	volatile int64_t t0 = 1229719LL;

    t0 = (x1+((x2|x3)/x4));

    if (t0 != -617698LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = 8;
	int16_t x6 = -1;
	volatile uint16_t x8 = 23826U;

    t1 = (x5+((x6|x7)/x8));

    if (t1 != 180271U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -437689597;
	volatile uint64_t x10 = UINT64_MAX;
	int16_t x11 = -1;
	uint64_t t2 = 13917LLU;

    t2 = (x9+((x10|x11)/x12));

    if (t2 != 18446744073271862020LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	volatile uint32_t x16 = 3U;
	uint32_t t3 = 15463U;

    t3 = (x13+((x14|x15)/x16));

    if (t3 != 3579139413U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = 2U;
	int32_t x19 = INT32_MAX;

    t4 = (x17+((x18|x19)/x20));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x22 = UINT16_MAX;
	int16_t x23 = INT16_MIN;
	volatile int64_t t5 = 983306376949271LL;

    t5 = (x21+((x22|x23)/x24));

    if (t5 != -53LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 14469U;
	int8_t x26 = -1;
	int8_t x27 = -11;
	int8_t x28 = 2;
	static int32_t t6 = 30;

    t6 = (x25+((x26|x27)/x28));

    if (t6 != 14469) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	volatile int64_t x31 = -1LL;
	uint32_t x32 = UINT32_MAX;

    t7 = (x29+((x30|x31)/x32));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = INT32_MIN;
	static uint32_t x34 = 171U;
	static uint64_t x36 = UINT64_MAX;
	uint64_t t8 = 8873780616077LLU;

    t8 = (x33+((x34|x35)/x36));

    if (t8 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 5228548375905119LLU;
	uint64_t x38 = 16399773957289059LLU;
	int16_t x39 = INT16_MAX;
	int64_t x40 = INT64_MIN;
	uint64_t t9 = 1952261LLU;

    t9 = (x37+((x38|x39)/x40));

    if (t9 != 5228548375905119LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	uint8_t x43 = UINT8_MAX;
	uint64_t x44 = 44462470192LLU;
	volatile uint64_t t10 = 0LLU;

    t10 = (x41+((x42|x43)/x44));

    if (t10 != 65535LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x45 = INT64_MIN;
	volatile int16_t x46 = -270;
	uint32_t x47 = UINT32_MAX;
	uint16_t x48 = UINT16_MAX;

    t11 = (x45+((x46|x47)/x48));

    if (t11 != -9223372036854710271LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint8_t x49 = UINT8_MAX;
	int8_t x52 = INT8_MAX;
	volatile int64_t t12 = 11056159889696928LL;

    t12 = (x49+((x50|x51)/x52));

    if (t12 != 255LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x54 = 18U;
	int64_t x56 = -34367358222628026LL;
	int64_t t13 = -4023894149706818813LL;

    t13 = (x53+((x54|x55)/x56));

    if (t13 != 6LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x58 = 771412135150221615LLU;
	volatile uint8_t x59 = 2U;
	int64_t x60 = INT64_MAX;
	uint64_t t14 = 5320122LLU;

    t14 = (x57+((x58|x59)/x60));

    if (t14 != 4294967295LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x62 = UINT8_MAX;
	int64_t x63 = INT64_MIN;
	uint8_t x64 = 3U;
	volatile int64_t t15 = 30LL;

    t15 = (x61+((x62|x63)/x64));

    if (t15 != -3074457318551433439LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x65 = INT32_MIN;
	static int64_t x66 = INT64_MIN;
	int16_t x67 = INT16_MIN;
	volatile int64_t x68 = -166LL;
	int64_t t16 = 14LL;

    t16 = (x65+((x66|x67)/x68));

    if (t16 != -2147483451LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	volatile int8_t x70 = INT8_MIN;
	int16_t x71 = -9;
	int8_t x72 = INT8_MIN;
	volatile int64_t t17 = INT64_MIN;

    t17 = (x69+((x70|x71)/x72));

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	static int16_t x74 = INT16_MAX;
	int8_t x75 = 0;
	int64_t x76 = 885130372LL;
	static volatile int64_t t18 = 12718888616LL;

    t18 = (x73+((x74|x75)/x76));

    if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	uint8_t x78 = UINT8_MAX;
	int64_t x79 = INT64_MIN;
	volatile uint64_t t19 = 44352228742774LLU;

    t19 = (x77+((x78|x79)/x80));

    if (t19 != 10061860403841573630LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x82 = 20U;
	volatile int32_t x83 = INT32_MAX;

    t20 = (x81+((x82|x83)/x84));

    if (t20 != 16909447) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -836LL;
	uint8_t x86 = UINT8_MAX;
	int32_t x87 = -59;
	static int32_t x88 = 6;
	int64_t t21 = 999LL;

    t21 = (x85+((x86|x87)/x88));

    if (t21 != -836LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -1LL;
	uint16_t x90 = 1U;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t22 = UINT64_MAX;

    t22 = (x89+((x90|x91)/x92));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = -12;
	int64_t x94 = INT64_MIN;
	volatile int8_t x95 = INT8_MAX;
	int64_t t23 = -2596LL;

    t23 = (x93+((x94|x95)/x96));

    if (t23 != -2378383712443223LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x98 = INT32_MIN;
	int32_t x99 = INT32_MAX;
	volatile int32_t t24 = -1990;

    t24 = (x97+((x98|x99)/x100));

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x101 = INT8_MAX;
	uint8_t x103 = UINT8_MAX;
	volatile int64_t t25 = -1307130380587304LL;

    t25 = (x101+((x102|x103)/x104));

    if (t25 != 127LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x108 = INT64_MIN;
	int64_t t26 = 54833661240LL;

    t26 = (x105+((x106|x107)/x108));

    if (t26 != 31120310LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x110 = -1;
	int16_t x112 = 12487;
	volatile uint32_t t27 = 125840936U;

    t27 = (x109+((x110|x111)/x112));

    if (t27 != 2939441U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x113 = 50631699314433LLU;
	int8_t x114 = INT8_MAX;
	int8_t x115 = INT8_MIN;
	uint64_t x116 = 3701428363552LLU;
	uint64_t t28 = 19741390LLU;

    t28 = (x113+((x114|x115)/x116));

    if (t28 != 50631704298115LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x117 = INT16_MAX;
	volatile uint32_t x118 = 13496423U;
	int64_t x119 = 1103430618543816092LL;
	static volatile int16_t x120 = 1;
	static volatile int64_t t29 = 15253116718LL;

    t29 = (x117+((x118|x119)/x120));

    if (t29 != 1103430618548567550LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = 1747;
	static uint8_t x122 = 7U;
	static uint16_t x123 = UINT16_MAX;
	static int32_t x124 = INT32_MIN;

    t30 = (x121+((x122|x123)/x124));

    if (t30 != 1747) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x126 = INT8_MAX;
	static int32_t x127 = -1;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = 14890781;

    t31 = (x125+((x126|x127)/x128));

    if (t31 != 189841) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x129 = UINT16_MAX;
	int64_t x130 = -34462533471005LL;
	int8_t x131 = -1;
	uint16_t x132 = 5U;

    t32 = (x129+((x130|x131)/x132));

    if (t32 != 65535LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = -171;
	uint8_t x134 = 0U;
	static int16_t x135 = -1;
	uint8_t x136 = UINT8_MAX;

    t33 = (x133+((x134|x135)/x136));

    if (t33 != -171) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = 4;
	int32_t x138 = INT32_MAX;
	uint64_t x139 = 114550067LLU;
	int16_t x140 = INT16_MIN;
	static volatile uint64_t t34 = 75986LLU;

    t34 = (x137+((x138|x139)/x140));

    if (t34 != 4LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x142 = 7675787793LLU;
	volatile uint16_t x143 = UINT16_MAX;
	volatile uint64_t t35 = 6479303170068860LLU;

    t35 = (x141+((x142|x143)/x144));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x145 = UINT16_MAX;
	static int32_t x146 = INT32_MIN;
	static uint16_t x147 = 7052U;
	int64_t x148 = 1012918LL;
	int64_t t36 = -1LL;

    t36 = (x145+((x146|x147)/x148));

    if (t36 != 63415LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	volatile int32_t x150 = -35111;
	static int64_t x151 = -5717LL;
	int8_t x152 = INT8_MAX;
	int64_t t37 = -18868602LL;

    t37 = (x149+((x150|x151)/x152));

    if (t37 != 32767LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x154 = 118U;
	uint32_t x155 = 2062679855U;
	int16_t x156 = 1864;
	volatile uint32_t t38 = 785026492U;

    t38 = (x153+((x154|x155)/x156));

    if (t38 != 1106590U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x158 = 12900;
	int32_t x159 = INT32_MAX;
	int32_t x160 = INT32_MAX;
	static volatile int32_t t39 = -18;

    t39 = (x157+((x158|x159)/x160));

    if (t39 != 94) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x162 = -83482143;
	uint16_t x163 = 323U;
	int64_t t40 = INT64_MAX;

    t40 = (x161+((x162|x163)/x164));

    if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -2683068949560620LL;
	static int64_t x166 = INT64_MIN;
	volatile int16_t x167 = 12249;
	uint8_t x168 = 11U;
	static volatile int64_t t41 = -65239LL;

    t41 = (x165+((x166|x167)/x168));

    if (t41 != -841171435936357307LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x169 = 20717291222058LLU;
	int64_t x170 = INT64_MIN;
	volatile int8_t x172 = INT8_MIN;
	uint64_t t42 = 7538791265LLU;

    t42 = (x169+((x170|x171)/x172));

    if (t42 != 72078311329149993LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x173 = 1295U;
	int8_t x176 = -1;
	volatile int64_t t43 = 619704417LL;

    t43 = (x173+((x174|x175)/x176));

    if (t43 != 1296LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = UINT32_MAX;
	static uint16_t x178 = UINT16_MAX;
	static volatile int8_t x179 = INT8_MIN;
	static uint64_t t44 = 19807641964896439LLU;

    t44 = (x177+((x178|x179)/x180));

    if (t44 != 4294967296LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MAX;
	int16_t x183 = INT16_MIN;
	static volatile int32_t t45 = 0;

    t45 = (x181+((x182|x183)/x184));

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = INT32_MAX;
	volatile int64_t x187 = -53992599297793923LL;
	static uint8_t x188 = UINT8_MAX;
	volatile int64_t t46 = 40293871361LL;

    t46 = (x185+((x186|x187)/x188));

    if (t46 != -211733536037081LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	int32_t x190 = INT32_MIN;
	int8_t x192 = -30;
	volatile int32_t t47 = -481437179;

    t47 = (x189+((x190|x191)/x192));

    if (t47 != 71550020) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x193 = 105U;
	int64_t x194 = -62LL;
	uint8_t x196 = 2U;
	int64_t t48 = -55736892442LL;

    t48 = (x193+((x194|x195)/x196));

    if (t48 != 105LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x197 = 301950888;
	volatile int8_t x198 = INT8_MAX;
	static int16_t x200 = INT16_MAX;
	static int32_t t49 = 1065960265;

    t49 = (x197+((x198|x199)/x200));

    if (t49 != 301950888) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 21LLU;
	int64_t x202 = INT64_MIN;
	volatile uint64_t x203 = 27LLU;
	static volatile int16_t x204 = INT16_MAX;
	volatile uint64_t t50 = 205168996158924LLU;

    t50 = (x201+((x202|x203)/x204));

    if (t50 != 281483566907421LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -1LL;
	uint64_t x206 = UINT64_MAX;
	volatile uint64_t x207 = 27056039493LLU;
	int8_t x208 = INT8_MAX;
	volatile uint64_t t51 = 1256134LLU;

    t51 = (x205+((x206|x207)/x208));

    if (t51 != 145249953336295681LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x209 = -1;
	static int64_t x210 = INT64_MIN;
	uint32_t x212 = 22539306U;
	int64_t t52 = -495084661281256LL;

    t52 = (x209+((x210|x211)/x212));

    if (t52 != -409212778640LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = 1;
	uint64_t x215 = 6734601775176LLU;
	int16_t x216 = -3;
	uint64_t t53 = 423602736LLU;

    t53 = (x213+((x214|x215)/x216));

    if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 1307949822256LLU;
	static volatile int8_t x218 = INT8_MIN;
	volatile int64_t x219 = 112729093001732LL;

    t54 = (x217+((x218|x219)/x220));

    if (t54 != 1307949822380LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 7U;
	int32_t x222 = INT32_MAX;
	int64_t x223 = 1194521LL;
	int16_t x224 = -6571;

    t55 = (x221+((x222|x223)/x224));

    if (t55 != -326805LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x226 = INT64_MAX;
	int32_t x227 = -1;
	int64_t t56 = 1026229052174LL;

    t56 = (x225+((x226|x227)/x228));

    if (t56 != 376174674LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 2U;
	int16_t x231 = -1;
	static int64_t x232 = -115481340LL;
	volatile uint64_t t57 = 2487026309LLU;

    t57 = (x229+((x230|x231)/x232));

    if (t57 != 3LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x233 = 1U;
	static int16_t x234 = INT16_MIN;
	int64_t x235 = 18869288154225331LL;
	volatile int64_t t58 = 5976567146LL;

    t58 = (x233+((x234|x235)/x236));

    if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x237 = -249;
	int64_t x238 = INT64_MAX;
	int64_t x239 = INT64_MIN;
	int64_t x240 = INT64_MIN;
	int64_t t59 = -437209855753325LL;

    t59 = (x237+((x238|x239)/x240));

    if (t59 != -249LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MAX;
	volatile int8_t x242 = -16;
	uint8_t x243 = UINT8_MAX;
	int16_t x244 = 42;
	volatile int32_t t60 = INT32_MAX;

    t60 = (x241+((x242|x243)/x244));

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 1471994013709LLU;
	int8_t x246 = INT8_MIN;
	volatile int8_t x247 = INT8_MIN;
	volatile uint16_t x248 = UINT16_MAX;

    t61 = (x245+((x246|x247)/x248));

    if (t61 != 1471994013709LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 14U;
	int32_t x250 = INT32_MIN;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = -19470;
	static uint32_t t62 = 420666U;

    t62 = (x249+((x250|x251)/x252));

    if (t62 != 15U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x257 = 1697531150355959098LL;
	static int32_t x258 = INT32_MIN;
	static volatile uint8_t x259 = UINT8_MAX;
	int32_t x260 = INT32_MIN;
	volatile int64_t t63 = -1791546083098252LL;

    t63 = (x257+((x258|x259)/x260));

    if (t63 != 1697531150355959098LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x261 = UINT64_MAX;
	int8_t x264 = INT8_MAX;
	volatile uint64_t t64 = UINT64_MAX;

    t64 = (x261+((x262|x263)/x264));

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x265 = 0LLU;
	int8_t x266 = 7;
	int16_t x267 = -1;
	int64_t x268 = -41798LL;
	static uint64_t t65 = 19487540LLU;

    t65 = (x265+((x266|x267)/x268));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = -1;
	static int8_t x270 = INT8_MAX;

    t66 = (x269+((x270|x271)/x272));

    if (t66 != 23U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x273 = INT8_MIN;
	volatile uint32_t x274 = 1U;
	static int16_t x275 = -1;
	uint32_t t67 = 18U;

    t67 = (x273+((x274|x275)/x276));

    if (t67 != 4294967169U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x278 = 232231884205LLU;
	uint8_t x279 = 2U;
	volatile uint64_t t68 = 7098666668183129LLU;

    t68 = (x277+((x278|x279)/x280));

    if (t68 != 232231884079LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x281 = -211;
	uint64_t x282 = 28603468972281LLU;
	volatile uint8_t x283 = 116U;
	uint32_t x284 = 4705926U;
	static uint64_t t69 = 34LLU;

    t69 = (x281+((x282|x283)/x284));

    if (t69 != 6077969LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x286 = INT16_MIN;
	int8_t x287 = INT8_MIN;
	int8_t x288 = INT8_MIN;

    t70 = (x285+((x286|x287)/x288));

    if (t70 != -62) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x290 = 10U;
	volatile int16_t x291 = -464;
	static uint16_t x292 = 3818U;
	volatile uint32_t t71 = 1944934673U;

    t71 = (x289+((x290|x291)/x292));

    if (t71 != 337314U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x293 = UINT16_MAX;
	int64_t x295 = INT64_MAX;
	volatile uint64_t x296 = 536561436125446LLU;

    t72 = (x293+((x294|x295)/x296));

    if (t72 != 99914LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x297 = 59U;
	int8_t x299 = INT8_MAX;
	static volatile int8_t x300 = INT8_MIN;

    t73 = (x297+((x298|x299)/x300));

    if (t73 != -72057594037927876LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x301 = UINT32_MAX;
	int16_t x303 = INT16_MIN;
	uint8_t x304 = 112U;
	static uint32_t t74 = UINT32_MAX;

    t74 = (x301+((x302|x303)/x304));

    if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = -37230;
	int8_t x306 = -19;
	static volatile uint32_t x307 = 41162954U;
	uint8_t x308 = 24U;
	volatile uint32_t t75 = 4U;

    t75 = (x305+((x306|x307)/x308));

    if (t75 != 178919739U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x309 = INT16_MIN;
	uint8_t x310 = 3U;
	static uint64_t x311 = 170334LLU;
	volatile int64_t x312 = INT64_MIN;
	volatile uint64_t t76 = 3678782068LLU;

    t76 = (x309+((x310|x311)/x312));

    if (t76 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x313 = INT8_MAX;
	int16_t x314 = INT16_MIN;
	static int64_t x315 = INT64_MAX;
	static int32_t x316 = INT32_MIN;

    t77 = (x313+((x314|x315)/x316));

    if (t77 != 127LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x320 = -18997LL;

    t78 = (x317+((x318|x319)/x320));

    if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x321 = 4U;
	uint16_t x322 = 8951U;
	uint16_t x323 = 6068U;
	int8_t x324 = INT8_MIN;
	volatile int32_t t79 = 14409183;

    t79 = (x321+((x322|x323)/x324));

    if (t79 != -107) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x325 = 22107961067993LLU;
	int32_t x326 = INT32_MAX;
	int64_t x327 = -147LL;
	static volatile uint32_t x328 = 73022U;
	volatile uint64_t t80 = 308215908LLU;

    t80 = (x325+((x326|x327)/x328));

    if (t80 != 22107961067993LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x329 = 8;
	volatile uint16_t x330 = UINT16_MAX;
	int32_t x331 = 4;
	int64_t x332 = INT64_MAX;
	int64_t t81 = -411414582711LL;

    t81 = (x329+((x330|x331)/x332));

    if (t81 != 8LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x333 = 4022;
	volatile int64_t x334 = 256894141039LL;
	volatile uint16_t x335 = UINT16_MAX;
	int32_t x336 = INT32_MIN;

    t82 = (x333+((x334|x335)/x336));

    if (t82 != 3903LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x337 = -1;
	int64_t x338 = INT64_MIN;
	int64_t t83 = -2014576826014460LL;

    t83 = (x337+((x338|x339)/x340));

    if (t83 != 72057594037927934LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x344 = 19211238094095476LLU;
	uint64_t t84 = 10172157697308LLU;

    t84 = (x341+((x342|x343)/x344));

    if (t84 != 18446744071562068928LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x345 = INT16_MIN;
	int64_t x346 = -1LL;
	int64_t x347 = INT64_MIN;
	int64_t t85 = -32570050893249572LL;

    t85 = (x345+((x346|x347)/x348));

    if (t85 != -32768LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x349 = 45550534U;
	int8_t x351 = 0;

    t86 = (x349+((x350|x351)/x352));

    if (t86 != 45550534U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x353 = 1728751U;
	int16_t x354 = -379;
	int16_t x355 = INT16_MAX;
	int8_t x356 = 12;
	uint32_t t87 = 28188U;

    t87 = (x353+((x354|x355)/x356));

    if (t87 != 1728751U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x359 = UINT64_MAX;
	uint64_t t88 = 132144841169048737LLU;

    t88 = (x357+((x358|x359)/x360));

    if (t88 != 4294967296LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x361 = UINT32_MAX;
	int64_t x362 = -1LL;
	uint16_t x363 = 117U;
	static int64_t x364 = -10LL;

    t89 = (x361+((x362|x363)/x364));

    if (t89 != 4294967295LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x365 = -2;
	static int32_t x367 = INT32_MIN;
	int16_t x368 = INT16_MIN;
	int32_t t90 = 150862;

    t90 = (x365+((x366|x367)/x368));

    if (t90 != 65534) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x369 = INT16_MAX;
	int8_t x370 = INT8_MIN;
	volatile int32_t t91 = -87606147;

    t91 = (x369+((x370|x371)/x372));

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x373 = INT8_MAX;
	int64_t x374 = INT64_MIN;
	int8_t x375 = 25;
	static int16_t x376 = -21;
	static int64_t t92 = 0LL;

    t92 = (x373+((x374|x375)/x376));

    if (t92 != 439208192231179926LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint16_t x377 = UINT16_MAX;
	uint16_t x378 = 10U;
	static uint32_t x379 = 54U;
	uint32_t t93 = 391U;

    t93 = (x377+((x378|x379)/x380));

    if (t93 != 65535U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x381 = 0U;
	int32_t x383 = -1;
	int32_t x384 = 1;
	int64_t t94 = 889104366375230LL;

    t94 = (x381+((x382|x383)/x384));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x385 = INT16_MIN;
	int8_t x386 = -1;
	uint32_t x387 = UINT32_MAX;
	uint8_t x388 = UINT8_MAX;
	volatile uint32_t t95 = 2U;

    t95 = (x385+((x386|x387)/x388));

    if (t95 != 16810241U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x389 = 2914842359LLU;
	int32_t x390 = INT32_MAX;
	volatile uint64_t x392 = 27251165LLU;
	uint64_t t96 = 824LLU;

    t96 = (x389+((x390|x391)/x392));

    if (t96 != 2914842516LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x393 = 146;
	static int32_t x394 = INT32_MAX;
	static volatile uint8_t x395 = UINT8_MAX;
	uint8_t x396 = UINT8_MAX;
	int32_t t97 = 1700633;

    t97 = (x393+((x394|x395)/x396));

    if (t97 != 8421650) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x397 = INT64_MIN;
	int16_t x398 = INT16_MAX;
	int16_t x399 = INT16_MIN;
	volatile uint8_t x400 = 20U;
	int64_t t98 = INT64_MIN;

    t98 = (x397+((x398|x399)/x400));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x401 = 228530U;
	static uint8_t x402 = 2U;
	int32_t x403 = -1;
	static uint16_t x404 = UINT16_MAX;
	volatile uint32_t t99 = 473U;

    t99 = (x401+((x402|x403)/x404));

    if (t99 != 228530U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x405 = 6012LL;
	uint32_t x406 = 2704U;
	uint64_t x407 = 22674842LLU;
	volatile uint64_t t100 = 344502812647LLU;

    t100 = (x405+((x406|x407)/x408));

    if (t100 != 6012LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x409 = UINT64_MAX;
	static uint64_t x410 = 9057081787968103370LLU;
	int64_t x411 = INT64_MIN;

    t101 = (x409+((x410|x411)/x412));

    if (t101 != 71688054214991682LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x413 = 0U;
	static int64_t x414 = INT64_MIN;
	volatile uint8_t x415 = 3U;
	uint64_t x416 = 2902429612718163LLU;
	static uint64_t t102 = 50098884881383LLU;

    t102 = (x413+((x414|x415)/x416));

    if (t102 != 3177LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x418 = -1;
	static int64_t x419 = 247849934226069LL;
	static uint32_t x420 = 429030U;
	volatile int64_t t103 = -13LL;

    t103 = (x417+((x418|x419)/x420));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x421 = 211343583LLU;
	volatile uint64_t x422 = 2819067453LLU;
	uint32_t x423 = 1156730U;
	volatile int64_t x424 = INT64_MAX;
	static uint64_t t104 = 1046404743LLU;

    t104 = (x421+((x422|x423)/x424));

    if (t104 != 211343583LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x425 = 12322;
	int64_t x426 = -1LL;
	static uint16_t x427 = 118U;
	int16_t x428 = INT16_MIN;
	int64_t t105 = -47422460555009LL;

    t105 = (x425+((x426|x427)/x428));

    if (t105 != 12322LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x429 = INT16_MAX;
	volatile int64_t x430 = INT64_MIN;
	int64_t x431 = INT64_MAX;
	int8_t x432 = INT8_MIN;
	static volatile int64_t t106 = 9778171LL;

    t106 = (x429+((x430|x431)/x432));

    if (t106 != 32767LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x433 = INT16_MIN;
	int8_t x434 = INT8_MAX;
	int32_t x435 = 26483;
	int8_t x436 = INT8_MIN;

    t107 = (x433+((x434|x435)/x436));

    if (t107 != -32974) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x437 = 1;
	int64_t x438 = 648679254307LL;
	static uint8_t x439 = 4U;
	int16_t x440 = INT16_MIN;

    t108 = (x437+((x438|x439)/x440));

    if (t108 != -19796118LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x441 = INT8_MIN;
	volatile int16_t x442 = INT16_MAX;
	static uint64_t t109 = 5384049LLU;

    t109 = (x441+((x442|x443)/x444));

    if (t109 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x445 = INT32_MIN;
	static int8_t x446 = -3;
	int16_t x447 = -1;
	int8_t x448 = -1;
	int32_t t110 = -26809;

    t110 = (x445+((x446|x447)/x448));

    if (t110 != -2147483647) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x449 = UINT8_MAX;
	int64_t x450 = INT64_MIN;
	int8_t x451 = -3;
	volatile int32_t x452 = -1;
	static volatile int64_t t111 = 443581LL;

    t111 = (x449+((x450|x451)/x452));

    if (t111 != 258LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x457 = -393LL;
	static int32_t x458 = -829921;
	int8_t x460 = INT8_MAX;
	volatile uint64_t t112 = 68109LLU;

    t112 = (x457+((x458|x459)/x460));

    if (t112 != 145249953336293159LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x461 = UINT64_MAX;
	uint32_t x462 = 115394354U;
	int32_t x463 = -3;
	uint8_t x464 = UINT8_MAX;
	volatile uint64_t t113 = 38130769LLU;

    t113 = (x461+((x462|x463)/x464));

    if (t113 != 16843008LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x465 = INT8_MIN;
	int64_t x466 = INT64_MAX;
	uint16_t x467 = 337U;
	int64_t t114 = 441526691616LL;

    t114 = (x465+((x466|x467)/x468));

    if (t114 != 26054723267951216LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x470 = UINT32_MAX;
	static int16_t x472 = INT16_MIN;

    t115 = (x469+((x470|x471)/x472));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x473 = INT64_MIN;
	static int16_t x474 = 55;
	volatile uint16_t x476 = 4U;
	int64_t t116 = 68968LL;

    t116 = (x473+((x474|x475)/x476));

    if (t116 != -6917529027641081857LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x477 = UINT16_MAX;
	static uint8_t x478 = 4U;
	int16_t x479 = -7;

    t117 = (x477+((x478|x479)/x480));

    if (t117 != 2717763226244LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x481 = -1LL;
	uint16_t x482 = 3U;
	static int8_t x483 = INT8_MIN;
	uint16_t x484 = 6425U;

    t118 = (x481+((x482|x483)/x484));

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x485 = INT8_MAX;
	static int64_t x486 = -1LL;
	volatile int64_t t119 = 4068LL;

    t119 = (x485+((x486|x487)/x488));

    if (t119 != 126LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x490 = INT16_MIN;
	static int16_t x491 = INT16_MIN;
	volatile int64_t x492 = -1LL;

    t120 = (x489+((x490|x491)/x492));

    if (t120 != 32767LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x494 = INT8_MIN;
	int64_t x495 = INT64_MIN;
	static int32_t x496 = 5248611;
	int64_t t121 = 1532676LL;

    t121 = (x493+((x494|x495)/x496));

    if (t121 != -53808188LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x501 = 54925317U;
	uint8_t x503 = 2U;
	int32_t x504 = INT32_MAX;
	uint64_t t122 = 3450091274LLU;

    t122 = (x501+((x502|x503)/x504));

    if (t122 != 8644859913LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x506 = INT64_MIN;
	static int16_t x507 = -13807;
	int16_t x508 = INT16_MIN;
	int64_t t123 = -3632939LL;

    t123 = (x505+((x506|x507)/x508));

    if (t123 != -3LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x509 = INT64_MAX;
	int32_t x510 = INT32_MIN;
	int64_t x512 = -404849450108942LL;
	int64_t t124 = INT64_MAX;

    t124 = (x509+((x510|x511)/x512));

    if (t124 != INT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x517 = 983;
	static int64_t x518 = INT64_MIN;
	volatile int32_t x519 = -453192844;
	volatile uint8_t x520 = UINT8_MAX;
	int64_t t125 = 2499753408863LL;

    t125 = (x517+((x518|x519)/x520));

    if (t125 != -1776243LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x521 = INT32_MAX;
	int64_t x522 = -1LL;
	int32_t x523 = -1;
	uint16_t x524 = 5U;
	volatile int64_t t126 = 4197138312726LL;

    t126 = (x521+((x522|x523)/x524));

    if (t126 != 2147483647LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x525 = 124803394U;
	int64_t x526 = -3258317664396LL;
	int32_t x527 = INT32_MAX;
	static uint64_t x528 = 38656848485LLU;
	uint64_t t127 = 5565490LLU;

    t127 = (x525+((x526|x527)/x528));

    if (t127 != 601995445LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x529 = 37922833902528LL;
	static uint32_t x530 = 3214343U;
	int8_t x532 = -1;
	int64_t t128 = 752355852758783380LL;

    t128 = (x529+((x530|x531)/x532));

    if (t128 != 37922833902528LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x533 = INT16_MAX;
	int8_t x535 = 1;
	uint8_t x536 = UINT8_MAX;
	int32_t t129 = 1;

    t129 = (x533+((x534|x535)/x536));

    if (t129 != 32767) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x537 = -11;
	int8_t x538 = -1;
	volatile int64_t x539 = 1628174241LL;
	int32_t x540 = INT32_MIN;
	static volatile int64_t t130 = 17LL;

    t130 = (x537+((x538|x539)/x540));

    if (t130 != -11LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x541 = -1;
	uint8_t x542 = 55U;
	int16_t x544 = INT16_MIN;
	static int32_t t131 = -1;

    t131 = (x541+((x542|x543)/x544));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x545 = UINT64_MAX;
	static volatile int8_t x546 = INT8_MIN;
	int32_t x547 = 2;
	int32_t x548 = -35984516;
	volatile uint64_t t132 = UINT64_MAX;

    t132 = (x545+((x546|x547)/x548));

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x549 = INT64_MAX;
	volatile uint16_t x550 = UINT16_MAX;
	uint32_t x551 = 1U;
	volatile uint64_t x552 = 607280076LLU;
	static uint64_t t133 = 280LLU;

    t133 = (x549+((x550|x551)/x552));

    if (t133 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x554 = 1U;
	uint64_t x555 = 1918LLU;
	int16_t x556 = 129;
	volatile uint64_t t134 = 5589LLU;

    t134 = (x553+((x554|x555)/x556));

    if (t134 != 18446744071562067982LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x557 = UINT8_MAX;
	uint64_t x558 = 193665030LLU;
	int32_t x560 = 1314;
	static volatile uint64_t t135 = 3297LLU;

    t135 = (x557+((x558|x559)/x560));

    if (t135 != 14038618016521983LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x561 = INT8_MIN;
	int16_t x562 = -83;
	int16_t x563 = INT16_MAX;
	int32_t t136 = -45719980;

    t136 = (x561+((x562|x563)/x564));

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x566 = UINT64_MAX;
	static int32_t x567 = 982736395;
	int32_t x568 = -1;

    t137 = (x565+((x566|x567)/x568));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x570 = 95;
	static uint16_t x572 = 77U;
	int64_t t138 = 11LL;

    t138 = (x569+((x570|x571)/x572));

    if (t138 != 119012518734423903LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x573 = 0;
	int8_t x574 = 15;
	int8_t x575 = INT8_MIN;
	uint16_t x576 = UINT16_MAX;

    t139 = (x573+((x574|x575)/x576));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x577 = UINT16_MAX;
	static int16_t x578 = INT16_MIN;
	int32_t x580 = -1;
	volatile int32_t t140 = -590367;

    t140 = (x577+((x578|x579)/x580));

    if (t140 != 98048) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x581 = -405763;
	uint64_t x582 = 294LLU;
	static int8_t x584 = 25;
	uint64_t t141 = 62982LLU;

    t141 = (x581+((x582|x583)/x584));

    if (t141 != 18446744073709145868LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x585 = 34243195U;
	static int32_t x586 = 964307;
	static int64_t x587 = INT64_MIN;
	uint8_t x588 = 20U;
	static volatile int64_t t142 = 24507321237241LL;

    t142 = (x585+((x586|x587)/x588));

    if (t142 != -461168601808447380LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x589 = UINT16_MAX;
	volatile int16_t x590 = -329;
	static int32_t x591 = INT32_MAX;
	uint64_t t143 = 6401737666LLU;

    t143 = (x589+((x590|x591)/x592));

    if (t143 != 65536LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x593 = UINT32_MAX;
	int32_t x594 = -165;
	volatile int8_t x595 = -1;
	uint8_t x596 = 71U;
	uint32_t t144 = UINT32_MAX;

    t144 = (x593+((x594|x595)/x596));

    if (t144 != UINT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x597 = 852676834;
	int8_t x598 = INT8_MIN;
	uint32_t x599 = 116213U;
	static uint64_t x600 = 4465454LLU;
	uint64_t t145 = 425067750224312717LLU;

    t145 = (x597+((x598|x599)/x600));

    if (t145 != 852677795LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x606 = 89198661720031383LLU;
	int64_t x607 = INT64_MIN;
	int16_t x608 = INT16_MIN;
	uint64_t t146 = 811214150352LLU;

    t146 = (x605+((x606|x607)/x608));

    if (t146 != 9LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x609 = 2U;
	int64_t x611 = INT64_MIN;
	volatile int32_t x612 = INT32_MIN;
	int64_t t147 = 3049218931534LL;

    t147 = (x609+((x610|x611)/x612));

    if (t147 != 2LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x613 = -1;
	uint8_t x614 = UINT8_MAX;
	uint16_t x616 = 20U;
	static volatile int32_t t148 = -54334;

    t148 = (x613+((x614|x615)/x616));

    if (t148 != -1626) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x618 = 2U;
	int16_t x619 = 8009;

    t149 = (x617+((x618|x619)/x620));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x622 = UINT32_MAX;
	volatile uint16_t x623 = 8U;
	volatile uint32_t t150 = 81706U;

    t150 = (x621+((x622|x623)/x624));

    if (t150 != 131203U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x625 = INT32_MIN;
	int16_t x626 = 1333;
	volatile int32_t t151 = INT32_MIN;

    t151 = (x625+((x626|x627)/x628));

    if (t151 != INT32_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x629 = 3994992LLU;
	int8_t x631 = -1;
	static volatile uint64_t x632 = 133451961626897080LLU;
	volatile uint64_t t152 = 23956LLU;

    t152 = (x629+((x630|x631)/x632));

    if (t152 != 3995130LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x634 = INT32_MAX;
	int32_t x635 = INT32_MIN;
	int16_t x636 = -1;
	int32_t t153 = 2;

    t153 = (x633+((x634|x635)/x636));

    if (t153 != -127) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x637 = 12U;
	int16_t x638 = -1;
	int8_t x640 = -5;
	uint32_t t154 = 72U;

    t154 = (x637+((x638|x639)/x640));

    if (t154 != 12U) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x641 = -1;
	int16_t x642 = INT16_MIN;
	uint16_t x643 = 2U;
	uint8_t x644 = UINT8_MAX;
	static int32_t t155 = -3246;

    t155 = (x641+((x642|x643)/x644));

    if (t155 != -129) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x646 = INT16_MIN;
	uint64_t x647 = 44LLU;
	static int64_t x648 = INT64_MAX;

    t156 = (x645+((x646|x647)/x648));

    if (t156 != 7LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x649 = INT64_MIN;
	volatile int32_t x650 = -39;
	int16_t x652 = 823;
	volatile int64_t t157 = INT64_MIN;

    t157 = (x649+((x650|x651)/x652));

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x653 = INT32_MIN;
	static int64_t x654 = -63670383888067LL;
	uint8_t x655 = UINT8_MAX;
	static int32_t x656 = INT32_MIN;
	static int64_t t158 = -190813024737LL;

    t158 = (x653+((x654|x655)/x656));

    if (t158 != -2147454000LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x657 = INT8_MAX;
	int8_t x659 = 40;
	volatile int32_t t159 = 3587958;

    t159 = (x657+((x658|x659)/x660));

    if (t159 != 86) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x662 = UINT16_MAX;
	int8_t x663 = INT8_MIN;
	int16_t x664 = INT16_MAX;
	volatile int32_t t160 = -81239708;

    t160 = (x661+((x662|x663)/x664));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x669 = 6969652807LLU;
	uint64_t x670 = 259477LLU;
	static volatile int8_t x671 = 3;
	uint8_t x672 = 19U;
	uint64_t t161 = 4007125274335938824LLU;

    t161 = (x669+((x670|x671)/x672));

    if (t161 != 6969666463LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x674 = 17U;
	static int64_t x676 = -7LL;
	volatile int64_t t162 = 20274415276986LL;

    t162 = (x673+((x674|x675)/x676));

    if (t162 != 14LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x677 = 1U;
	volatile int16_t x678 = 1;
	uint16_t x680 = 97U;

    t163 = (x677+((x678|x679)/x680));

    if (t163 != 1U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x682 = INT16_MAX;
	uint8_t x683 = UINT8_MAX;
	volatile int32_t x684 = INT32_MIN;
	int32_t t164 = -86055;

    t164 = (x681+((x682|x683)/x684));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x685 = -6;
	volatile uint64_t x686 = UINT64_MAX;
	int64_t x687 = INT64_MAX;
	volatile uint64_t t165 = 203876602463482012LLU;

    t165 = (x685+((x686|x687)/x688));

    if (t165 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x689 = -1LL;
	int32_t x690 = INT32_MAX;
	static uint64_t t166 = UINT64_MAX;

    t166 = (x689+((x690|x691)/x692));

    if (t166 != UINT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x693 = INT8_MIN;
	int64_t x694 = -17220LL;
	static int8_t x695 = 13;
	static int64_t t167 = 35352882079286LL;

    t167 = (x693+((x694|x695)/x696));

    if (t167 != 17091LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x698 = 12U;
	uint64_t x699 = UINT64_MAX;
	volatile uint64_t t168 = 1774LLU;

    t168 = (x697+((x698|x699)/x700));

    if (t168 != 3458LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x705 = -3;
	uint32_t x706 = 3694178U;
	int8_t x707 = INT8_MIN;
	uint32_t t169 = 21U;

    t169 = (x705+((x706|x707)/x708));

    if (t169 != 33818636U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x709 = INT8_MIN;
	static uint64_t x710 = UINT64_MAX;
	static volatile int8_t x711 = -1;
	volatile uint64_t t170 = 176759LLU;

    t170 = (x709+((x710|x711)/x712));

    if (t170 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x713 = INT16_MIN;
	static uint32_t x714 = 1639U;
	uint64_t x716 = UINT64_MAX;
	volatile uint64_t t171 = 77LLU;

    t171 = (x713+((x714|x715)/x716));

    if (t171 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x717 = UINT64_MAX;
	volatile uint64_t t172 = 5736595962951LLU;

    t172 = (x717+((x718|x719)/x720));

    if (t172 != 60LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x722 = -1LL;
	int64_t x723 = INT64_MIN;
	int32_t x724 = -60460;
	volatile int64_t t173 = 1037365683LL;

    t173 = (x721+((x722|x723)/x724));

    if (t173 != 6370539LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x726 = 0U;
	static volatile uint8_t x727 = 92U;
	volatile int32_t x728 = INT32_MIN;
	static int64_t t174 = INT64_MIN;

    t174 = (x725+((x726|x727)/x728));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x729 = 47U;
	volatile int16_t x732 = INT16_MIN;
	static volatile int64_t t175 = 106933492479653LL;

    t175 = (x729+((x730|x731)/x732));

    if (t175 != 47LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x733 = 0U;
	int32_t x734 = INT32_MIN;
	volatile int8_t x735 = INT8_MAX;
	static volatile int32_t x736 = INT32_MIN;
	volatile int32_t t176 = -1584093;

    t176 = (x733+((x734|x735)/x736));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x737 = UINT8_MAX;
	int64_t x738 = -1LL;
	uint64_t x739 = 948892LLU;
	int64_t x740 = INT64_MAX;
	uint64_t t177 = 71913928568460718LLU;

    t177 = (x737+((x738|x739)/x740));

    if (t177 != 257LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x742 = 18525U;

    t178 = (x741+((x742|x743)/x744));

    if (t178 != 256LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x746 = UINT16_MAX;
	int8_t x747 = INT8_MIN;
	int32_t x748 = INT32_MIN;

    t179 = (x745+((x746|x747)/x748));

    if (t179 != 255) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x749 = INT32_MIN;
	uint16_t x750 = 0U;
	uint8_t x751 = 3U;
	volatile uint32_t x752 = 65976U;
	volatile uint32_t t180 = 44U;

    t180 = (x749+((x750|x751)/x752));

    if (t180 != 2147483648U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x753 = INT8_MIN;
	int64_t x754 = 23557887LL;
	int64_t x755 = -955851639859264LL;
	static volatile int8_t x756 = INT8_MIN;
	volatile int64_t t181 = -62LL;

    t181 = (x753+((x754|x755)/x756));

    if (t181 != 7467590754448LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x758 = INT16_MIN;
	static int32_t x759 = -7020;
	int8_t x760 = INT8_MIN;
	volatile int64_t t182 = 63LL;

    t182 = (x757+((x758|x759)/x760));

    if (t182 != -814LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x761 = -1;
	int16_t x763 = INT16_MIN;
	static int64_t x764 = -1LL;
	volatile int64_t t183 = 235030720805312LL;

    t183 = (x761+((x762|x763)/x764));

    if (t183 != 12LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x765 = INT16_MAX;
	int16_t x767 = INT16_MIN;
	int16_t x768 = INT16_MAX;
	int32_t t184 = -26371183;

    t184 = (x765+((x766|x767)/x768));

    if (t184 != 32767) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x770 = 165U;
	int8_t x771 = INT8_MIN;

    t185 = (x769+((x770|x771)/x772));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x774 = INT16_MIN;
	volatile int32_t x775 = -1;
	uint8_t x776 = 107U;
	volatile int32_t t186 = -904679155;

    t186 = (x773+((x774|x775)/x776));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x777 = INT8_MAX;
	volatile int8_t x778 = INT8_MIN;
	static uint32_t x779 = UINT32_MAX;
	static volatile int32_t x780 = -1;
	uint32_t t187 = 7079U;

    t187 = (x777+((x778|x779)/x780));

    if (t187 != 128U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x781 = 13108U;
	static int8_t x782 = INT8_MIN;
	uint16_t x783 = 0U;
	uint64_t x784 = 1LLU;
	volatile uint64_t t188 = 3LLU;

    t188 = (x781+((x782|x783)/x784));

    if (t188 != 12980LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x791 = INT16_MIN;
	int64_t x792 = -1LL;
	volatile int64_t t189 = -178759044263129731LL;

    t189 = (x789+((x790|x791)/x792));

    if (t189 != 32640LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x793 = -1067;
	int16_t x794 = -1;
	int64_t x796 = -10936772447925LL;
	volatile int64_t t190 = 1773804641021242073LL;

    t190 = (x793+((x794|x795)/x796));

    if (t190 != -1067LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x797 = INT8_MIN;
	uint64_t x798 = 12572703759721LLU;
	volatile int32_t x799 = INT32_MIN;
	int16_t x800 = -2;
	uint64_t t191 = 407790564LLU;

    t191 = (x797+((x798|x799)/x800));

    if (t191 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint64_t x801 = 1971839533055798924LLU;
	static uint32_t x802 = UINT32_MAX;
	static int32_t x803 = -46760306;
	uint16_t x804 = 12002U;
	uint64_t t192 = 8886280993095575LLU;

    t192 = (x801+((x802|x803)/x804));

    if (t192 != 1971839533056156778LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x807 = 89U;
	int32_t x808 = -1;
	volatile int64_t t193 = 40276LL;

    t193 = (x805+((x806|x807)/x808));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x809 = INT8_MIN;
	uint8_t x810 = UINT8_MAX;
	volatile int16_t x811 = 8433;
	uint16_t x812 = UINT16_MAX;
	volatile int32_t t194 = 124758327;

    t194 = (x809+((x810|x811)/x812));

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x814 = 0U;
	static uint16_t x816 = UINT16_MAX;
	volatile int64_t t195 = 3319696514954279148LL;

    t195 = (x813+((x814|x815)/x816));

    if (t195 != 137796637580709329LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x818 = 3668U;
	int8_t x819 = -1;
	int32_t x820 = -1;
	static int32_t t196 = 15334;

    t196 = (x817+((x818|x819)/x820));

    if (t196 != 105997) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x821 = -1;
	int32_t x822 = -1818144;
	int8_t x824 = 29;
	volatile int32_t t197 = 1413;

    t197 = (x821+((x822|x823)/x824));

    if (t197 != -2) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x825 = 53U;
	volatile int64_t x826 = INT64_MIN;
	uint64_t x827 = UINT64_MAX;
	uint64_t x828 = 1041611241437620LLU;
	volatile uint64_t t198 = 5LLU;

    t198 = (x825+((x826|x827)/x828));

    if (t198 != 17762LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x832 = UINT16_MAX;
	static volatile int32_t t199 = 82;

    t199 = (x829+((x830|x831)/x832));

    if (t199 != 32869) { NG(); } else { ; }
	
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

