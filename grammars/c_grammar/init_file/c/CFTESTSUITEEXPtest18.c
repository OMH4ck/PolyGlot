
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

static uint32_t x6 = 8U;
static int8_t x9 = 0;
static int16_t x10 = -184;
int8_t x11 = INT8_MIN;
static uint32_t x16 = 14U;
static int64_t x20 = -1LL;
static uint64_t x30 = 471900746714LLU;
volatile int8_t x33 = -10;
static uint64_t x35 = 1465412508278LLU;
static volatile uint64_t t7 = 85191098100927LLU;
static int64_t x38 = -1LL;
int32_t x39 = -61659716;
volatile int32_t t10 = -41741840;
int16_t x56 = 46;
volatile int16_t x59 = INT16_MIN;
int8_t x62 = INT8_MIN;
uint32_t x71 = 0U;
uint64_t x79 = 17608694148LLU;
uint32_t x85 = 29552973U;
uint8_t x87 = UINT8_MAX;
int8_t x88 = INT8_MAX;
uint32_t t18 = 3097610U;
int32_t x90 = INT32_MIN;
uint32_t x109 = 3U;
int16_t x111 = INT16_MIN;
uint8_t x114 = 2U;
volatile int32_t t23 = 1;
static int64_t t24 = -2042607LL;
int8_t x122 = INT8_MAX;
int8_t x125 = -1;
static int32_t x126 = INT32_MIN;
int32_t x134 = INT32_MIN;
volatile int8_t x136 = -1;
volatile int16_t x140 = INT16_MAX;
int64_t x163 = -4155569473035816574LL;
uint16_t x165 = 15146U;
static int8_t x177 = INT8_MAX;
volatile uint32_t x181 = 3909U;
int32_t x182 = -1;
uint64_t x183 = 1725850LLU;
static int8_t x188 = -1;
volatile uint32_t x196 = 28658U;
int32_t t41 = 8138118;
int8_t x202 = INT8_MIN;
int32_t x207 = INT32_MAX;
uint64_t t44 = 11029675074421406LLU;
uint32_t x221 = 431355U;
uint32_t x222 = 4272345U;
uint16_t x225 = 99U;
uint32_t x231 = 603U;
uint32_t x235 = UINT32_MAX;
int16_t x246 = INT16_MAX;
volatile int64_t t53 = 122LL;
uint16_t x265 = 7695U;
static int64_t x266 = INT64_MIN;
static int64_t t54 = -17777677636802662LL;
int8_t x269 = INT8_MIN;
int64_t x277 = INT64_MIN;
volatile int64_t x287 = 0LL;
uint32_t x290 = 25203181U;
int8_t x292 = INT8_MIN;
volatile uint64_t t60 = 8612369720451LLU;
volatile int64_t x297 = 2740559LL;
int8_t x299 = -1;
int16_t x308 = -1;
uint64_t t62 = 2420105702LLU;
static uint32_t x311 = 1467086U;
int16_t x334 = INT16_MIN;
uint8_t x336 = 13U;
static int32_t x339 = INT32_MAX;
uint32_t x344 = 1389737336U;
uint32_t x359 = UINT32_MAX;
volatile int32_t x364 = INT32_MAX;
static int64_t x367 = -1LL;
int16_t x368 = INT16_MAX;
static int8_t x372 = INT8_MAX;
uint64_t x373 = 1016349414LLU;
volatile int8_t x376 = -19;
volatile uint64_t t75 = 22813904330684722LLU;
int64_t x387 = INT64_MIN;
int64_t t78 = -3676892LL;
uint16_t x394 = 0U;
int16_t x395 = INT16_MIN;
static volatile int8_t x398 = INT8_MAX;
volatile int64_t x400 = -1LL;
int64_t x405 = INT64_MIN;
int16_t x419 = -1;
static volatile uint64_t t83 = 1227797877963754LLU;
int16_t x427 = -1;
volatile uint64_t t85 = 103000372409452616LLU;
int16_t x436 = 44;
volatile uint16_t x445 = UINT16_MAX;
int8_t x448 = INT8_MIN;
static volatile uint64_t t90 = 3794571857906LLU;
int64_t x453 = INT64_MIN;
volatile int64_t t91 = -29LL;
volatile int64_t x461 = INT64_MIN;
int32_t x465 = -1;
int64_t x468 = -39655497198LL;
static uint8_t x472 = UINT8_MAX;
int64_t t94 = 2340240265LL;
static uint32_t t95 = 231058260U;
static uint32_t x481 = 6899U;
int16_t x482 = -1;
static int16_t x491 = 1129;
volatile uint64_t x498 = 4221296841718LLU;
int32_t t102 = -2173844;
volatile int32_t t105 = 145535608;
int8_t x521 = -1;
uint32_t x525 = 1594U;
volatile int32_t x527 = 1574032;
static int32_t x529 = -1659749;
int32_t t109 = 48475396;
static int32_t x552 = 7;
volatile int32_t t113 = 11;
volatile int64_t x561 = INT64_MAX;
static volatile int64_t t115 = 29412045273LL;
int8_t x580 = INT8_MAX;
uint64_t x582 = UINT64_MAX;
volatile uint64_t t119 = 1739910189977562948LLU;
static int16_t x587 = INT16_MIN;
int32_t x594 = INT32_MIN;
volatile uint16_t x602 = 7966U;
uint64_t x603 = 92342LLU;
int16_t x604 = 11999;
volatile uint64_t x614 = UINT64_MAX;
int32_t x615 = INT32_MIN;
volatile int8_t x616 = 1;
static uint16_t x627 = 23482U;
int16_t x629 = INT16_MAX;
uint64_t x632 = 42868LLU;
uint16_t x640 = UINT16_MAX;
static volatile int64_t x652 = -77184110546363749LL;
int16_t x659 = INT16_MIN;
int8_t x662 = INT8_MAX;
volatile int16_t x664 = -1;
uint64_t x686 = UINT64_MAX;
uint8_t x688 = UINT8_MAX;
int32_t x696 = -1;
volatile int64_t t142 = -420627076013105187LL;
int64_t x701 = INT64_MIN;
int64_t t143 = -12501LL;
volatile int8_t x708 = INT8_MIN;
int64_t x709 = INT64_MAX;
static int8_t x711 = -14;
volatile int16_t x713 = INT16_MIN;
volatile int64_t t147 = 1303409LL;
volatile int32_t x724 = -199;
uint64_t x731 = UINT64_MAX;
volatile int16_t x732 = INT16_MIN;
int8_t x739 = INT8_MIN;
uint16_t x741 = 17U;
int8_t x747 = 0;
int32_t x748 = -1;
volatile int64_t t154 = -45416LL;
int16_t x752 = -13;
uint16_t x753 = UINT16_MAX;
int8_t x755 = INT8_MAX;
int32_t x756 = 81;
int32_t x763 = 234;
int16_t x764 = -1;
volatile int64_t t158 = 414194LL;
uint32_t x780 = UINT32_MAX;
int16_t x782 = -3;
int16_t x786 = INT16_MAX;
volatile uint32_t t164 = 12477U;
uint8_t x789 = UINT8_MAX;
volatile int16_t x798 = INT16_MAX;
volatile int8_t x811 = INT8_MAX;
volatile int64_t t169 = 458041371431385LL;
int64_t x817 = INT64_MIN;
volatile int64_t t170 = 271930LL;
static uint64_t x822 = 317798203LLU;
volatile int64_t t172 = -1644802668290431LL;
uint8_t x845 = UINT8_MAX;
int32_t t173 = 13204;
int32_t t175 = 63422216;
volatile uint64_t t176 = 1076494874768626LLU;
static uint16_t x873 = UINT16_MAX;
static uint16_t x876 = 511U;
int64_t x881 = INT64_MAX;
int64_t x889 = INT64_MIN;
volatile int8_t x890 = INT8_MIN;
volatile int16_t x891 = -1;
int16_t x902 = 1391;
static uint8_t x907 = 1U;
volatile uint64_t t184 = 3647LLU;
volatile uint64_t x910 = 1LLU;
volatile uint8_t x911 = UINT8_MAX;
uint64_t x914 = 209382451296654LLU;
uint8_t x917 = UINT8_MAX;
int64_t x922 = -1LL;
int64_t x938 = 119195784619920LL;
static int32_t x940 = INT32_MAX;
static volatile int16_t x948 = -1;
volatile int32_t t192 = -139792;
uint64_t x952 = UINT64_MAX;
volatile uint64_t t193 = 208826669LLU;
int8_t x959 = INT8_MIN;
volatile uint64_t t198 = 1324768990940LLU;
int64_t x987 = -1LL;
volatile uint32_t x988 = 1324U;


void f0(void) {
    	int32_t x1 = -1;
	uint16_t x2 = 282U;
	uint8_t x3 = 13U;
	uint8_t x4 = 0U;
	volatile int32_t t0 = -6;

    t0 = (x1/((x2+x3)-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint64_t x5 = 113601546190480LLU;
	int32_t x7 = -1;
	volatile uint64_t x8 = 270609753357LLU;
	volatile uint64_t t1 = 110259104805008151LLU;

    t1 = (x5/((x6+x7)-x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 1447541LLU;

    t2 = (x9/((x10+x11)-x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x13 = UINT8_MAX;
	static int32_t x14 = -84230;
	int8_t x15 = INT8_MAX;
	uint32_t t3 = 45511U;

    t3 = (x13/((x14+x15)-x16));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = 0;
	volatile int32_t x18 = -1;
	int32_t x19 = 12;
	int64_t t4 = -7187377449LL;

    t4 = (x17/((x18+x19)-x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x25 = 1U;
	int16_t x26 = INT16_MAX;
	int64_t x27 = -1LL;
	uint16_t x28 = 23657U;
	volatile int64_t t5 = 6589309994362LL;

    t5 = (x25/((x26+x27)-x28));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int16_t x29 = -1;
	int16_t x31 = INT16_MIN;
	uint32_t x32 = 38249891U;
	volatile uint64_t t6 = 385121879074LLU;

    t6 = (x29/((x30+x31)-x32));

    if (t6 != 39093476LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x34 = INT16_MAX;
	uint32_t x36 = UINT32_MAX;

    t7 = (x33/((x34+x35)-x36));

    if (t7 != 12625092LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = INT8_MIN;
	volatile uint64_t x40 = 9061646634396327LLU;
	volatile uint64_t t8 = 2737651LLU;

    t8 = (x37/((x38+x39)-x40));

    if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x41 = INT64_MIN;
	uint16_t x42 = 6220U;
	uint32_t x43 = 2446216U;
	uint8_t x44 = 64U;
	int64_t t9 = -64554LL;

    t9 = (x41/((x42+x43)-x44));

    if (t9 != -3761000385281LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MAX;
	uint8_t x50 = UINT8_MAX;
	int16_t x51 = -1;
	int16_t x52 = -1;

    t10 = (x49/((x50+x51)-x52));

    if (t10 != 8421504) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x53 = -1;
	uint32_t x54 = UINT32_MAX;
	volatile uint8_t x55 = 32U;
	volatile uint32_t t11 = 484071931U;

    t11 = (x53/((x54+x55)-x56));

    if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x57 = INT8_MIN;
	static int16_t x58 = 6109;
	int8_t x60 = 0;
	int32_t t12 = 158741244;

    t12 = (x57/((x58+x59)-x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x61 = 823LLU;
	int16_t x63 = INT16_MIN;
	uint16_t x64 = 15162U;
	uint64_t t13 = 116LLU;

    t13 = (x61/((x62+x63)-x64));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x69 = UINT32_MAX;
	uint8_t x70 = 4U;
	static uint32_t x72 = 894U;
	volatile uint32_t t14 = 50949U;

    t14 = (x69/((x70+x71)-x72));

    if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = 25854365;
	int8_t x74 = INT8_MAX;
	int8_t x75 = INT8_MIN;
	uint32_t x76 = 39270806U;
	static uint32_t t15 = 50931U;

    t15 = (x73/((x74+x75)-x76));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = INT16_MIN;
	int32_t x78 = INT32_MAX;
	static int64_t x80 = INT64_MAX;
	static volatile uint64_t t16 = 647100LLU;

    t16 = (x77/((x78+x79)-x80));

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x81 = 1;
	int8_t x82 = INT8_MIN;
	uint64_t x83 = 9LLU;
	volatile uint32_t x84 = UINT32_MAX;
	volatile uint64_t t17 = 430617819840LLU;

    t17 = (x81/((x82+x83)-x84));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x86 = UINT16_MAX;

    t18 = (x85/((x86+x87)-x88));

    if (t18 != 450U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x89 = INT32_MIN;
	int8_t x91 = INT8_MAX;
	volatile uint16_t x92 = 56U;
	int32_t t19 = 0;

    t19 = (x89/((x90+x91)-x92));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = -403724LL;
	int16_t x94 = INT16_MAX;
	uint16_t x95 = 509U;
	volatile int16_t x96 = INT16_MIN;
	int64_t t20 = 289460748806650LL;

    t20 = (x93/((x94+x95)-x96));

    if (t20 != -6LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = -1;
	int16_t x102 = -1;
	int16_t x103 = -3366;
	uint16_t x104 = 11011U;
	int32_t t21 = 248039749;

    t21 = (x101/((x102+x103)-x104));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x110 = INT32_MAX;
	int8_t x112 = -27;
	volatile uint32_t t22 = 2U;

    t22 = (x109/((x110+x111)-x112));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x113 = 57U;
	int16_t x115 = -1873;
	int8_t x116 = INT8_MAX;

    t23 = (x113/((x114+x115)-x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x117 = 10871953LL;
	int64_t x118 = INT64_MIN;
	int8_t x119 = INT8_MAX;
	int8_t x120 = -1;

    t24 = (x117/((x118+x119)-x120));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x121 = UINT8_MAX;
	static uint32_t x123 = UINT32_MAX;
	static int16_t x124 = -607;
	uint32_t t25 = 0U;

    t25 = (x121/((x122+x123)-x124));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x127 = INT16_MAX;
	uint8_t x128 = 1U;
	int32_t t26 = 24;

    t26 = (x125/((x126+x127)-x128));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x129 = -653;
	static uint64_t x130 = 334159923LLU;
	uint32_t x131 = 897U;
	uint64_t x132 = 67972188206842LLU;
	uint64_t t27 = 16363971078874LLU;

    t27 = (x129/((x130+x131)-x132));

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x133 = 9281;
	uint16_t x135 = UINT16_MAX;
	volatile int32_t t28 = -2716091;

    t28 = (x133/((x134+x135)-x136));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x137 = 1015002493U;
	int64_t x138 = -1LL;
	uint64_t x139 = 469995194610686161LLU;
	static volatile uint64_t t29 = 24LLU;

    t29 = (x137/((x138+x139)-x140));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x141 = UINT8_MAX;
	volatile int32_t x142 = INT32_MAX;
	int8_t x143 = -8;
	int8_t x144 = INT8_MAX;
	static volatile int32_t t30 = 94810550;

    t30 = (x141/((x142+x143)-x144));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x145 = UINT8_MAX;
	uint64_t x146 = 1199880543049LLU;
	int8_t x147 = -1;
	int32_t x148 = INT32_MAX;
	uint64_t t31 = 227251LLU;

    t31 = (x145/((x146+x147)-x148));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x153 = -1LL;
	uint64_t x154 = UINT64_MAX;
	static volatile uint32_t x155 = UINT32_MAX;
	volatile uint64_t x156 = 790163047581LLU;
	uint64_t t32 = 623198070LLU;

    t32 = (x153/((x154+x155)-x156));

    if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x161 = 10U;
	int16_t x162 = 54;
	int64_t x164 = INT64_MIN;
	static int64_t t33 = -98365334LL;

    t33 = (x161/((x162+x163)-x164));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x166 = INT8_MAX;
	volatile int32_t x167 = 41916460;
	int64_t x168 = 197608275266LL;
	int64_t t34 = 1954226510LL;

    t34 = (x165/((x166+x167)-x168));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x169 = -8024824;
	static uint32_t x170 = UINT32_MAX;
	int8_t x171 = 16;
	uint32_t x172 = 168264918U;
	uint32_t t35 = 3U;

    t35 = (x169/((x170+x171)-x172));

    if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x173 = -1LL;
	uint64_t x174 = UINT64_MAX;
	int16_t x175 = INT16_MAX;
	int16_t x176 = 31;
	uint64_t t36 = 465848LLU;

    t36 = (x173/((x174+x175)-x176));

    if (t36 != 563517460629587LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x178 = -1LL;
	static volatile uint32_t x179 = 46800U;
	static int64_t x180 = -14161LL;
	int64_t t37 = 8172LL;

    t37 = (x177/((x178+x179)-x180));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x184 = 27;
	volatile uint64_t t38 = 8360LLU;

    t38 = (x181/((x182+x183)-x184));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x185 = 810;
	static int16_t x186 = -13;
	int32_t x187 = INT32_MAX;
	volatile int32_t t39 = 966533310;

    t39 = (x185/((x186+x187)-x188));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x193 = INT8_MIN;
	uint32_t x194 = UINT32_MAX;
	int64_t x195 = -64650663595045LL;
	int64_t t40 = 3355913097LL;

    t40 = (x193/((x194+x195)-x196));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x197 = 22U;
	int8_t x198 = 4;
	static int32_t x199 = -3094737;
	uint16_t x200 = 12U;

    t41 = (x197/((x198+x199)-x200));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x201 = 0;
	int8_t x203 = -1;
	uint16_t x204 = 0U;
	int32_t t42 = 988;

    t42 = (x201/((x202+x203)-x204));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x205 = 13;
	static uint32_t x206 = 5U;
	uint64_t x208 = 11630LLU;
	volatile uint64_t t43 = 33984113842LLU;

    t43 = (x205/((x206+x207)-x208));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x209 = -1LL;
	int8_t x210 = -1;
	uint64_t x211 = 564281598569LLU;
	uint64_t x212 = 73095424LLU;

    t44 = (x209/((x210+x211)-x212));

    if (t44 != 32694906LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x217 = 1U;
	uint32_t x218 = UINT32_MAX;
	int16_t x219 = -1;
	int64_t x220 = -17933LL;
	volatile int64_t t45 = -215255812284024LL;

    t45 = (x217/((x218+x219)-x220));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x223 = 38487U;
	static int32_t x224 = INT32_MAX;
	volatile uint32_t t46 = 7U;

    t46 = (x221/((x222+x223)-x224));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x226 = INT16_MAX;
	int16_t x227 = -2;
	int64_t x228 = 2140119777LL;
	int64_t t47 = 35LL;

    t47 = (x225/((x226+x227)-x228));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x229 = 4U;
	static volatile int16_t x230 = INT16_MAX;
	int64_t x232 = -126615LL;
	int64_t t48 = -951LL;

    t48 = (x229/((x230+x231)-x232));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x233 = 41541944;
	int64_t x234 = -1LL;
	static uint8_t x236 = 88U;
	volatile int64_t t49 = -115LL;

    t49 = (x233/((x234+x235)-x236));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x241 = INT32_MAX;
	static int64_t x242 = 1LL;
	int16_t x243 = INT16_MIN;
	int32_t x244 = INT32_MIN;
	int64_t t50 = 191046515614059LL;

    t50 = (x241/((x242+x243)-x244));

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x245 = INT8_MAX;
	int32_t x247 = -134460;
	volatile int32_t x248 = 82;
	static int32_t t51 = 90090487;

    t51 = (x245/((x246+x247)-x248));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x249 = 26U;
	uint16_t x250 = 45U;
	volatile int8_t x251 = INT8_MIN;
	int64_t x252 = INT64_MIN;
	volatile int64_t t52 = 0LL;

    t52 = (x249/((x250+x251)-x252));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x253 = 0U;
	volatile int32_t x254 = -43;
	int8_t x255 = INT8_MIN;
	int64_t x256 = -2925827543895267LL;

    t53 = (x253/((x254+x255)-x256));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x267 = 16U;
	int64_t x268 = -1LL;

    t54 = (x265/((x266+x267)-x268));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x270 = 60292386996LLU;
	volatile uint16_t x271 = 26724U;
	volatile int8_t x272 = 11;
	uint64_t t55 = 40912LLU;

    t55 = (x269/((x270+x271)-x272));

    if (t55 != 305954645LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x273 = UINT64_MAX;
	int16_t x274 = INT16_MIN;
	uint8_t x275 = UINT8_MAX;
	static int64_t x276 = INT64_MIN;
	uint64_t t56 = 62867436LLU;

    t56 = (x273/((x274+x275)-x276));

    if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x278 = INT8_MIN;
	int32_t x279 = 873;
	int8_t x280 = 35;
	static volatile int64_t t57 = -1497071535410841990LL;

    t57 = (x277/((x278+x279)-x280));

    if (t57 != -12990664840640529LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x281 = 18U;
	int64_t x282 = -1LL;
	static uint8_t x283 = UINT8_MAX;
	uint8_t x284 = 34U;
	int64_t t58 = -99743394068LL;

    t58 = (x281/((x282+x283)-x284));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x285 = UINT64_MAX;
	uint16_t x286 = 28U;
	static volatile uint64_t x288 = 48990913736521LLU;
	uint64_t t59 = 1694051016998693797LLU;

    t59 = (x285/((x286+x287)-x288));

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x289 = 3526660556564LLU;
	static int16_t x291 = -1380;

    t60 = (x289/((x290+x291)-x292));

    if (t60 != 139936LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x298 = UINT32_MAX;
	int8_t x300 = -4;
	int64_t t61 = 979195116639918831LL;

    t61 = (x297/((x298+x299)-x300));

    if (t61 != 1370279LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x305 = 80509001934962LLU;
	uint16_t x306 = UINT16_MAX;
	int32_t x307 = INT32_MIN;

    t62 = (x305/((x306+x307)-x308));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x309 = 12;
	uint8_t x310 = UINT8_MAX;
	int64_t x312 = -1LL;
	volatile int64_t t63 = 15055312359739554LL;

    t63 = (x309/((x310+x311)-x312));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x313 = -1LL;
	static volatile uint16_t x314 = 5347U;
	volatile int32_t x315 = 0;
	int64_t x316 = INT64_MAX;
	volatile int64_t t64 = 1947LL;

    t64 = (x313/((x314+x315)-x316));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x317 = -6LL;
	static uint64_t x318 = 6LLU;
	volatile int32_t x319 = INT32_MAX;
	volatile int8_t x320 = INT8_MIN;
	volatile uint64_t t65 = 61640372651831LLU;

    t65 = (x317/((x318+x319)-x320));

    if (t65 != 8589934060LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x321 = 104698620U;
	int64_t x322 = -1LL;
	int32_t x323 = INT32_MIN;
	int32_t x324 = 7;
	static volatile int64_t t66 = -210LL;

    t66 = (x321/((x322+x323)-x324));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x325 = UINT32_MAX;
	uint32_t x326 = 1740U;
	volatile int8_t x327 = INT8_MAX;
	static int8_t x328 = INT8_MIN;
	static uint32_t t67 = 15676211U;

    t67 = (x325/((x326+x327)-x328));

    if (t67 != 2152865U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x333 = INT8_MAX;
	int32_t x335 = 404073263;
	volatile int32_t t68 = 122;

    t68 = (x333/((x334+x335)-x336));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x337 = 21;
	uint64_t x338 = UINT64_MAX;
	static int8_t x340 = INT8_MIN;
	volatile uint64_t t69 = 461LLU;

    t69 = (x337/((x338+x339)-x340));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x341 = UINT16_MAX;
	int8_t x342 = -17;
	volatile uint8_t x343 = 2U;
	static volatile uint32_t t70 = 14190U;

    t70 = (x341/((x342+x343)-x344));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x357 = UINT16_MAX;
	static volatile uint32_t x358 = 97U;
	uint64_t x360 = UINT64_MAX;
	uint64_t t71 = 5328611742LLU;

    t71 = (x357/((x358+x359)-x360));

    if (t71 != 675LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x361 = 84U;
	volatile int32_t x362 = 25314;
	uint64_t x363 = 757LLU;
	uint64_t t72 = 2716409222217LLU;

    t72 = (x361/((x362+x363)-x364));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x365 = INT16_MAX;
	volatile uint8_t x366 = 54U;
	volatile int64_t t73 = 778863367807LL;

    t73 = (x365/((x366+x367)-x368));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x369 = INT32_MAX;
	uint16_t x370 = 298U;
	static int64_t x371 = INT64_MIN;
	int64_t t74 = 2LL;

    t74 = (x369/((x370+x371)-x372));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x374 = INT64_MIN;
	volatile uint8_t x375 = 5U;

    t75 = (x373/((x374+x375)-x376));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x377 = INT8_MIN;
	uint32_t x378 = 270383U;
	static int64_t x379 = INT64_MIN;
	int32_t x380 = 0;
	static volatile int64_t t76 = 26401LL;

    t76 = (x377/((x378+x379)-x380));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x381 = INT32_MAX;
	int16_t x382 = INT16_MIN;
	uint32_t x383 = 519011U;
	int8_t x384 = INT8_MIN;
	static volatile uint32_t t77 = 1U;

    t77 = (x381/((x382+x383)-x384));

    if (t77 != 4415U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x385 = -3;
	int8_t x386 = 29;
	volatile int16_t x388 = INT16_MIN;

    t78 = (x385/((x386+x387)-x388));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x393 = UINT16_MAX;
	int64_t x396 = 1LL;
	volatile int64_t t79 = 178305691300LL;

    t79 = (x393/((x394+x395)-x396));

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x397 = INT32_MIN;
	int64_t x399 = INT64_MIN;
	volatile int64_t t80 = 755279LL;

    t80 = (x397/((x398+x399)-x400));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x406 = UINT8_MAX;
	static uint16_t x407 = 2U;
	volatile int8_t x408 = INT8_MIN;
	volatile int64_t t81 = -230LL;

    t81 = (x405/((x406+x407)-x408));

    if (t81 != -23956810485337080LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x417 = INT8_MAX;
	uint64_t x418 = 4178367157800015LLU;
	int16_t x420 = INT16_MIN;
	volatile uint64_t t82 = 29737LLU;

    t82 = (x417/((x418+x419)-x420));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x421 = -1;
	volatile uint64_t x422 = 5639LLU;
	int8_t x423 = -4;
	int8_t x424 = INT8_MAX;

    t83 = (x421/((x422+x423)-x424));

    if (t83 != 3349082075836883LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x425 = INT64_MIN;
	static int16_t x426 = INT16_MIN;
	uint64_t x428 = 25667256308633LLU;
	volatile uint64_t t84 = 3460392080442969770LLU;

    t84 = (x425/((x426+x427)-x428));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x429 = INT16_MIN;
	static uint64_t x430 = UINT64_MAX;
	int64_t x431 = 323374LL;
	volatile int32_t x432 = INT32_MAX;

    t85 = (x429/((x430+x431)-x432));

    if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x433 = 1473715LLU;
	int8_t x434 = INT8_MIN;
	uint64_t x435 = 865293107954279LLU;
	volatile uint64_t t86 = 1LLU;

    t86 = (x433/((x434+x435)-x436));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x437 = 14;
	int64_t x438 = -32LL;
	uint16_t x439 = 104U;
	volatile uint8_t x440 = UINT8_MAX;
	volatile int64_t t87 = -1794194872613706LL;

    t87 = (x437/((x438+x439)-x440));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x441 = 3U;
	uint8_t x442 = UINT8_MAX;
	volatile uint64_t x443 = 1411086186561LLU;
	uint32_t x444 = 42500618U;
	uint64_t t88 = 5820LLU;

    t88 = (x441/((x442+x443)-x444));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x446 = -1;
	static uint32_t x447 = 769827916U;
	uint32_t t89 = 1U;

    t89 = (x445/((x446+x447)-x448));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x449 = 7708631890632993LLU;
	volatile uint32_t x450 = 153U;
	int64_t x451 = 1551983693504LL;
	static int64_t x452 = INT64_MAX;

    t90 = (x449/((x450+x451)-x452));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x454 = 181U;
	int16_t x455 = INT16_MIN;
	int32_t x456 = 1;

    t91 = (x453/((x454+x455)-x456));

    if (t91 != 283029705316520LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x462 = 108184477606993LLU;
	static int64_t x463 = -2996269692369669628LL;
	static int32_t x464 = INT32_MAX;
	uint64_t t92 = 29955931976154LLU;

    t92 = (x461/((x462+x463)-x464));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x466 = 102U;
	uint8_t x467 = 37U;
	int64_t t93 = -112647811813607LL;

    t93 = (x465/((x466+x467)-x468));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x469 = INT64_MIN;
	uint16_t x470 = UINT16_MAX;
	int64_t x471 = INT64_MIN;

    t94 = (x469/((x470+x471)-x472));

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x473 = -1;
	uint8_t x474 = 0U;
	uint32_t x475 = 2059467873U;
	int8_t x476 = INT8_MAX;

    t95 = (x473/((x474+x475)-x476));

    if (t95 != 2U) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x477 = INT32_MAX;
	int32_t x478 = -1;
	int32_t x479 = -1;
	int8_t x480 = INT8_MIN;
	int32_t t96 = -9;

    t96 = (x477/((x478+x479)-x480));

    if (t96 != 17043521) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x483 = INT8_MIN;
	volatile int32_t x484 = INT32_MIN;
	volatile uint32_t t97 = 143U;

    t97 = (x481/((x482+x483)-x484));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x485 = INT16_MAX;
	uint16_t x486 = 10560U;
	uint8_t x487 = 1U;
	int16_t x488 = INT16_MIN;
	int32_t t98 = 53991560;

    t98 = (x485/((x486+x487)-x488));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x489 = 1U;
	volatile uint16_t x490 = 7618U;
	uint8_t x492 = 0U;
	volatile int32_t t99 = -5069041;

    t99 = (x489/((x490+x491)-x492));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x493 = UINT8_MAX;
	static volatile int16_t x494 = INT16_MIN;
	int64_t x495 = -1LL;
	int32_t x496 = 78528247;
	int64_t t100 = 16LL;

    t100 = (x493/((x494+x495)-x496));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x497 = INT32_MAX;
	int64_t x499 = -9792261300546LL;
	int64_t x500 = -14089831945LL;
	volatile uint64_t t101 = 2066515787LLU;

    t101 = (x497/((x498+x499)-x500));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x501 = -1;
	static uint16_t x502 = 1U;
	int16_t x503 = -1;
	static int32_t x504 = 8;

    t102 = (x501/((x502+x503)-x504));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x505 = INT64_MIN;
	int16_t x506 = -1799;
	uint64_t x507 = UINT64_MAX;
	int32_t x508 = INT32_MIN;
	uint64_t t103 = 10967138033027772LLU;

    t103 = (x505/((x506+x507)-x508));

    if (t103 != 4294970896LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x509 = INT8_MIN;
	int64_t x510 = -1LL;
	uint32_t x511 = 3359U;
	int16_t x512 = INT16_MAX;
	int64_t t104 = -234411030638516461LL;

    t104 = (x509/((x510+x511)-x512));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x513 = INT16_MAX;
	int8_t x514 = INT8_MIN;
	volatile uint16_t x515 = 3614U;
	volatile int32_t x516 = INT32_MAX;

    t105 = (x513/((x514+x515)-x516));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x517 = 694;
	volatile uint64_t x518 = 3370705059830832391LLU;
	static int64_t x519 = INT64_MAX;
	int8_t x520 = -31;
	volatile uint64_t t106 = 144106989375LLU;

    t106 = (x517/((x518+x519)-x520));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x522 = -1;
	int32_t x523 = 1066798919;
	int16_t x524 = INT16_MAX;
	volatile int32_t t107 = 2419;

    t107 = (x521/((x522+x523)-x524));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x526 = INT32_MIN;
	static volatile uint8_t x528 = 1U;
	volatile uint32_t t108 = 1443U;

    t108 = (x525/((x526+x527)-x528));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x530 = INT8_MIN;
	static volatile uint8_t x531 = 98U;
	int16_t x532 = INT16_MIN;

    t109 = (x529/((x530+x531)-x532));

    if (t109 != -50) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x533 = -1;
	uint32_t x534 = 48648319U;
	static int16_t x535 = INT16_MAX;
	volatile uint16_t x536 = 0U;
	volatile uint32_t t110 = 609697703U;

    t110 = (x533/((x534+x535)-x536));

    if (t110 != 88U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x537 = UINT8_MAX;
	static volatile int32_t x538 = -1;
	int8_t x539 = -1;
	int32_t x540 = -2825;
	volatile int32_t t111 = 265156969;

    t111 = (x537/((x538+x539)-x540));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x545 = INT8_MAX;
	uint8_t x546 = UINT8_MAX;
	uint16_t x547 = UINT16_MAX;
	uint64_t x548 = 1211494025186LLU;
	volatile uint64_t t112 = 12558LLU;

    t112 = (x545/((x546+x547)-x548));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x549 = -3;
	uint8_t x550 = 66U;
	int32_t x551 = -1;

    t113 = (x549/((x550+x551)-x552));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x557 = -1;
	int32_t x558 = INT32_MIN;
	uint8_t x559 = 26U;
	int16_t x560 = 1;
	volatile int32_t t114 = 151028143;

    t114 = (x557/((x558+x559)-x560));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x562 = UINT16_MAX;
	volatile uint16_t x563 = 4U;
	int16_t x564 = 1;

    t115 = (x561/((x562+x563)-x564));

    if (t115 != 140733193519100LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x569 = INT8_MIN;
	uint8_t x570 = UINT8_MAX;
	int8_t x571 = INT8_MAX;
	int64_t x572 = INT64_MAX;
	int64_t t116 = -5LL;

    t116 = (x569/((x570+x571)-x572));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x573 = 1U;
	volatile int64_t x574 = -3823570578LL;
	volatile int64_t x575 = INT64_MAX;
	int8_t x576 = -1;
	int64_t t117 = -349765LL;

    t117 = (x573/((x574+x575)-x576));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x577 = INT32_MAX;
	int16_t x578 = 14653;
	uint64_t x579 = 1720691534441LLU;
	uint64_t t118 = 9676LLU;

    t118 = (x577/((x578+x579)-x580));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x581 = INT32_MAX;
	int32_t x583 = -11294053;
	static int8_t x584 = 1;

    t119 = (x581/((x582+x583)-x584));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x585 = INT16_MIN;
	static int32_t x586 = -592;
	int32_t x588 = INT32_MIN;
	int32_t t120 = -41780;

    t120 = (x585/((x586+x587)-x588));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x593 = 60LLU;
	static volatile int16_t x595 = 1838;
	uint32_t x596 = 475U;
	static uint64_t t121 = 5878LLU;

    t121 = (x593/((x594+x595)-x596));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x597 = INT32_MIN;
	volatile int64_t x598 = -1LL;
	uint16_t x599 = 1497U;
	static int32_t x600 = INT32_MIN;
	volatile int64_t t122 = -14244LL;

    t122 = (x597/((x598+x599)-x600));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x601 = INT16_MIN;
	volatile uint64_t t123 = 1LLU;

    t123 = (x601/((x602+x603)-x604));

    if (t123 != 208888607884921LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x609 = -1LL;
	int64_t x610 = INT64_MIN;
	volatile uint64_t x611 = UINT64_MAX;
	uint64_t x612 = 38004LLU;
	static uint64_t t124 = 246LLU;

    t124 = (x609/((x610+x611)-x612));

    if (t124 != 2LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x613 = 4;
	uint64_t t125 = 1553170042819LLU;

    t125 = (x613/((x614+x615)-x616));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x625 = 331509513U;
	int16_t x626 = INT16_MIN;
	static uint16_t x628 = UINT16_MAX;
	uint32_t t126 = 865U;

    t126 = (x625/((x626+x627)-x628));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x630 = INT16_MIN;
	uint64_t x631 = 3801LLU;
	uint64_t t127 = 5705080258LLU;

    t127 = (x629/((x630+x631)-x632));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x633 = INT16_MIN;
	int8_t x634 = INT8_MAX;
	uint8_t x635 = UINT8_MAX;
	uint16_t x636 = 60U;
	volatile int32_t t128 = -1;

    t128 = (x633/((x634+x635)-x636));

    if (t128 != -101) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x637 = INT16_MIN;
	uint32_t x638 = 15U;
	uint8_t x639 = 22U;
	uint32_t t129 = 120798865U;

    t129 = (x637/((x638+x639)-x640));

    if (t129 != 1U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x641 = 43U;
	int64_t x642 = INT64_MIN;
	volatile uint32_t x643 = 1U;
	volatile int32_t x644 = INT32_MIN;
	static volatile int64_t t130 = 86860554173143379LL;

    t130 = (x641/((x642+x643)-x644));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x645 = 119U;
	int8_t x646 = 0;
	static volatile int16_t x647 = 3837;
	uint8_t x648 = 105U;
	volatile int32_t t131 = -195586287;

    t131 = (x645/((x646+x647)-x648));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x649 = 2477U;
	int32_t x650 = -1;
	uint32_t x651 = UINT32_MAX;
	volatile int64_t t132 = 1905LL;

    t132 = (x649/((x650+x651)-x652));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x653 = -1;
	static uint16_t x654 = UINT16_MAX;
	int64_t x655 = INT64_MIN;
	volatile int16_t x656 = INT16_MAX;
	volatile int64_t t133 = -6042269152LL;

    t133 = (x653/((x654+x655)-x656));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x657 = UINT64_MAX;
	volatile uint16_t x658 = UINT16_MAX;
	int8_t x660 = -1;
	uint64_t t134 = 13871286LLU;

    t134 = (x657/((x658+x659)-x660));

    if (t134 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x661 = INT8_MIN;
	int64_t x663 = -45846734LL;
	int64_t t135 = 2948299LL;

    t135 = (x661/((x662+x663)-x664));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x665 = INT8_MAX;
	uint8_t x666 = 1U;
	volatile int64_t x667 = INT64_MIN;
	static int16_t x668 = -1;
	int64_t t136 = -135292049379LL;

    t136 = (x665/((x666+x667)-x668));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x669 = 796411620LL;
	static volatile int16_t x670 = 5;
	int8_t x671 = 60;
	int8_t x672 = -28;
	static int64_t t137 = -2442906789548954LL;

    t137 = (x669/((x670+x671)-x672));

    if (t137 != 8563565LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x673 = -108026;
	int16_t x674 = -2;
	static volatile uint32_t x675 = 11U;
	int64_t x676 = -1LL;
	volatile int64_t t138 = -497415809528636307LL;

    t138 = (x673/((x674+x675)-x676));

    if (t138 != -10802LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x677 = UINT32_MAX;
	static uint16_t x678 = 6U;
	volatile int64_t x679 = INT64_MIN;
	static int32_t x680 = INT32_MIN;
	static volatile int64_t t139 = -150LL;

    t139 = (x677/((x678+x679)-x680));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x681 = UINT16_MAX;
	int16_t x682 = 0;
	int16_t x683 = -1;
	volatile uint16_t x684 = 1744U;
	volatile int32_t t140 = 1;

    t140 = (x681/((x682+x683)-x684));

    if (t140 != -37) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x685 = 125;
	int8_t x687 = -3;
	uint64_t t141 = 441958LLU;

    t141 = (x685/((x686+x687)-x688));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x693 = INT64_MIN;
	int32_t x694 = -1;
	volatile int8_t x695 = INT8_MAX;

    t142 = (x693/((x694+x695)-x696));

    if (t142 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x702 = -465;
	int64_t x703 = 36746008941015237LL;
	static int8_t x704 = INT8_MAX;

    t143 = (x701/((x702+x703)-x704));

    if (t143 != -251LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint64_t x705 = 873530978258LLU;
	uint64_t x706 = 396294360107282584LLU;
	volatile int64_t x707 = -1LL;
	volatile uint64_t t144 = 21747637480LLU;

    t144 = (x705/((x706+x707)-x708));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x710 = -1LL;
	int16_t x712 = -1;
	volatile int64_t t145 = -12453201713331163LL;

    t145 = (x709/((x710+x711)-x712));

    if (t145 != -658812288346769700LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x714 = INT64_MIN;
	static uint32_t x715 = 8829920U;
	static int64_t x716 = INT64_MIN;
	int64_t t146 = -8174569599696463LL;

    t146 = (x713/((x714+x715)-x716));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x717 = 0LL;
	volatile int32_t x718 = 7771;
	static volatile int8_t x719 = INT8_MAX;
	static int16_t x720 = -1;

    t147 = (x717/((x718+x719)-x720));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x721 = -1LL;
	static uint64_t x722 = 79234882098103840LLU;
	static uint64_t x723 = 220317LLU;
	uint64_t t148 = 5556233LLU;

    t148 = (x721/((x722+x723)-x724));

    if (t148 != 232LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x725 = -19582205LL;
	int64_t x726 = -1LL;
	volatile int64_t x727 = -9LL;
	int8_t x728 = -1;
	int64_t t149 = -218653561020LL;

    t149 = (x725/((x726+x727)-x728));

    if (t149 != 2175800LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x729 = -6832591473064149LL;
	static int32_t x730 = 282221;
	uint64_t t150 = 11288128LLU;

    t150 = (x729/((x730+x731)-x732));

    if (t150 != 58541631688307LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x733 = INT32_MAX;
	int32_t x734 = INT32_MIN;
	static int64_t x735 = -1LL;
	int64_t x736 = -21588029108276LL;
	int64_t t151 = 2026269644350LL;

    t151 = (x733/((x734+x735)-x736));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x737 = -1;
	int8_t x738 = INT8_MIN;
	int32_t x740 = 1;
	volatile int32_t t152 = -164694;

    t152 = (x737/((x738+x739)-x740));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x742 = 93U;
	static int16_t x743 = -1;
	int64_t x744 = INT64_MAX;
	int64_t t153 = 17206618771412LL;

    t153 = (x741/((x742+x743)-x744));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x745 = -1LL;
	int16_t x746 = INT16_MAX;

    t154 = (x745/((x746+x747)-x748));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x749 = INT32_MIN;
	volatile uint16_t x750 = UINT16_MAX;
	int64_t x751 = -3LL;
	volatile int64_t t155 = 4182581263LL;

    t155 = (x749/((x750+x751)-x752));

    if (t155 != -32763LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x754 = UINT64_MAX;
	uint64_t t156 = 268535542539967LLU;

    t156 = (x753/((x754+x755)-x756));

    if (t156 != 1456LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x757 = 3;
	uint32_t x758 = 1U;
	uint64_t x759 = UINT64_MAX;
	volatile int16_t x760 = -1;
	volatile uint64_t t157 = 170523707032446LLU;

    t157 = (x757/((x758+x759)-x760));

    if (t157 != 3LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x761 = -1LL;
	int16_t x762 = -1;

    t158 = (x761/((x762+x763)-x764));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x765 = 839;
	int8_t x766 = INT8_MIN;
	int16_t x767 = -378;
	static int8_t x768 = 1;
	static int32_t t159 = 4;

    t159 = (x765/((x766+x767)-x768));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x769 = 0;
	uint16_t x770 = 872U;
	int8_t x771 = INT8_MIN;
	int8_t x772 = 8;
	volatile int32_t t160 = -199;

    t160 = (x769/((x770+x771)-x772));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x773 = 25513705;
	uint64_t x774 = 13937057003290LLU;
	static volatile int32_t x775 = -1;
	int16_t x776 = INT16_MAX;
	volatile uint64_t t161 = 2113LLU;

    t161 = (x773/((x774+x775)-x776));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x777 = 1663;
	int64_t x778 = INT64_MAX;
	int8_t x779 = -1;
	int64_t t162 = -110534551369550LL;

    t162 = (x777/((x778+x779)-x780));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x781 = INT32_MAX;
	int8_t x783 = 1;
	int32_t x784 = INT32_MIN;
	static int32_t t163 = -53842340;

    t163 = (x781/((x782+x783)-x784));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x785 = 89U;
	static volatile uint32_t x787 = 1620381U;
	int16_t x788 = -4;

    t164 = (x785/((x786+x787)-x788));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x790 = -10;
	volatile uint8_t x791 = 1U;
	volatile uint32_t x792 = 230183243U;
	volatile uint32_t t165 = 1005U;

    t165 = (x789/((x790+x791)-x792));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x793 = -53;
	static uint8_t x794 = 0U;
	int16_t x795 = INT16_MIN;
	int64_t x796 = -107082403205278599LL;
	volatile int64_t t166 = -245493955LL;

    t166 = (x793/((x794+x795)-x796));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x797 = 6U;
	uint8_t x799 = UINT8_MAX;
	int32_t x800 = 694;
	volatile uint32_t t167 = 112U;

    t167 = (x797/((x798+x799)-x800));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x809 = UINT16_MAX;
	int8_t x810 = INT8_MIN;
	int8_t x812 = 0;
	int32_t t168 = 6;

    t168 = (x809/((x810+x811)-x812));

    if (t168 != -65535) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x813 = 2;
	int16_t x814 = INT16_MAX;
	volatile int32_t x815 = 179082025;
	static int64_t x816 = INT64_MAX;

    t169 = (x813/((x814+x815)-x816));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x818 = 27559U;
	uint8_t x819 = 57U;
	static uint16_t x820 = 371U;

    t170 = (x817/((x818+x819)-x820));

    if (t170 != -338534484744165LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x821 = UINT32_MAX;
	uint64_t x823 = 4097419LLU;
	int8_t x824 = INT8_MAX;
	volatile uint64_t t171 = 145023189390395292LLU;

    t171 = (x821/((x822+x823)-x824));

    if (t171 != 13LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x833 = 0U;
	static uint8_t x834 = UINT8_MAX;
	int32_t x835 = -127353;
	int64_t x836 = INT64_MIN;

    t172 = (x833/((x834+x835)-x836));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x846 = INT16_MIN;
	int16_t x847 = 695;
	int8_t x848 = -1;

    t173 = (x845/((x846+x847)-x848));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x849 = -1;
	uint16_t x850 = UINT16_MAX;
	int64_t x851 = 24224700865LL;
	int32_t x852 = -1;
	volatile int64_t t174 = -527712388LL;

    t174 = (x849/((x850+x851)-x852));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x861 = INT16_MAX;
	uint8_t x862 = UINT8_MAX;
	int8_t x863 = INT8_MIN;
	int32_t x864 = -1;

    t175 = (x861/((x862+x863)-x864));

    if (t175 != 255) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x869 = INT32_MIN;
	int8_t x870 = -1;
	uint64_t x871 = 18832581LLU;
	static int64_t x872 = INT64_MIN;

    t176 = (x869/((x870+x871)-x872));

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x874 = -1;
	volatile int16_t x875 = -4;
	static int32_t t177 = 0;

    t177 = (x873/((x874+x875)-x876));

    if (t177 != -127) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x877 = 1;
	int16_t x878 = -2378;
	volatile int8_t x879 = -1;
	int64_t x880 = 3994928LL;
	int64_t t178 = 10303LL;

    t178 = (x877/((x878+x879)-x880));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x882 = INT16_MAX;
	int64_t x883 = INT64_MIN;
	volatile int64_t x884 = INT64_MIN;
	volatile int64_t t179 = -1564698046LL;

    t179 = (x881/((x882+x883)-x884));

    if (t179 != 281483566907400LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x885 = -2;
	uint64_t x886 = 1328911131783LLU;
	int32_t x887 = INT32_MAX;
	static int64_t x888 = -301550LL;
	uint64_t t180 = 624847489LLU;

    t180 = (x885/((x886+x887)-x888));

    if (t180 != 13858698LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x892 = INT32_MIN;
	int64_t t181 = -136357LL;

    t181 = (x889/((x890+x891)-x892));

    if (t181 != -4294967554LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x893 = -1;
	int16_t x894 = INT16_MIN;
	int64_t x895 = -1LL;
	int8_t x896 = INT8_MIN;
	volatile int64_t t182 = -677083132LL;

    t182 = (x893/((x894+x895)-x896));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x901 = INT32_MIN;
	uint16_t x903 = 491U;
	int16_t x904 = -3407;
	int32_t t183 = -1;

    t183 = (x901/((x902+x903)-x904));

    if (t183 != -406028) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x905 = UINT16_MAX;
	uint64_t x906 = 46107059197572575LLU;
	static volatile int32_t x908 = -1;

    t184 = (x905/((x906+x907)-x908));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x909 = -1;
	int32_t x912 = -3;
	volatile uint64_t t185 = 13688581069LLU;

    t185 = (x909/((x910+x911)-x912));

    if (t185 != 71222950091542670LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x913 = 3071U;
	static volatile int16_t x915 = INT16_MIN;
	int16_t x916 = -172;
	uint64_t t186 = 458034LLU;

    t186 = (x913/((x914+x915)-x916));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x918 = INT8_MIN;
	volatile int8_t x919 = INT8_MAX;
	int64_t x920 = INT64_MIN;
	int64_t t187 = 1639LL;

    t187 = (x917/((x918+x919)-x920));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x921 = UINT32_MAX;
	uint16_t x923 = UINT16_MAX;
	volatile int16_t x924 = INT16_MIN;
	static volatile int64_t t188 = 380948385LL;

    t188 = (x921/((x922+x923)-x924));

    if (t188 != 43691LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x925 = 1908;
	uint64_t x926 = 248019755267372850LLU;
	static volatile int8_t x927 = 13;
	uint64_t x928 = UINT64_MAX;
	static volatile uint64_t t189 = 11219985LLU;

    t189 = (x925/((x926+x927)-x928));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x929 = 224U;
	uint64_t x930 = UINT64_MAX;
	volatile uint16_t x931 = 0U;
	uint8_t x932 = UINT8_MAX;
	volatile uint64_t t190 = 296457962LLU;

    t190 = (x929/((x930+x931)-x932));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x937 = -220;
	uint16_t x939 = UINT16_MAX;
	static int64_t t191 = 3135875626072392111LL;

    t191 = (x937/((x938+x939)-x940));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x945 = -42477745;
	int16_t x946 = 897;
	int8_t x947 = INT8_MAX;

    t192 = (x945/((x946+x947)-x948));

    if (t192 != -41441) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int16_t x949 = INT16_MAX;
	volatile uint32_t x950 = 204927U;
	volatile uint32_t x951 = 103046U;

    t193 = (x949/((x950+x951)-x952));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x953 = INT32_MIN;
	int16_t x954 = INT16_MIN;
	int8_t x955 = INT8_MIN;
	uint8_t x956 = UINT8_MAX;
	int32_t t194 = -2;

    t194 = (x953/((x954+x955)-x956));

    if (t194 != 64778) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x957 = UINT32_MAX;
	uint64_t x958 = 624507LLU;
	int16_t x960 = INT16_MIN;
	uint64_t t195 = 1908161298LLU;

    t195 = (x957/((x958+x959)-x960));

    if (t195 != 6535LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x965 = 453658LL;
	int16_t x966 = 18;
	volatile uint32_t x967 = UINT32_MAX;
	uint32_t x968 = 72638U;
	static volatile int64_t t196 = 418944114008097091LL;

    t196 = (x965/((x966+x967)-x968));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x973 = -191023;
	int16_t x974 = INT16_MAX;
	uint32_t x975 = 12U;
	volatile uint8_t x976 = UINT8_MAX;
	uint32_t t197 = 30U;

    t197 = (x973/((x974+x975)-x976));

    if (t197 != 132049U) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int16_t x977 = INT16_MIN;
	static uint64_t x978 = 6416774639918102355LLU;
	uint8_t x979 = UINT8_MAX;
	volatile uint16_t x980 = 0U;

    t198 = (x977/((x978+x979)-x980));

    if (t198 != 2LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint64_t x985 = UINT64_MAX;
	uint32_t x986 = 123646242U;
	uint64_t t199 = 2236105254215894856LLU;

    t199 = (x985/((x986+x987)-x988));

    if (t199 != 149191285184LLU) { NG(); } else { ; }
	
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

