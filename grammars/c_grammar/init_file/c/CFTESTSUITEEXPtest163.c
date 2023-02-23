
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

volatile int8_t x8 = -1;
static volatile int32_t t1 = 0;
uint32_t x20 = 15U;
int32_t x21 = -1;
uint8_t x27 = 1U;
int32_t t4 = -66;
int32_t x41 = -1;
uint32_t x43 = 159920U;
volatile int16_t x48 = INT16_MAX;
int8_t x61 = -1;
static int16_t x65 = INT16_MAX;
int32_t x72 = INT32_MIN;
volatile uint32_t x79 = 1292166U;
volatile int32_t t17 = 732542;
int64_t x86 = INT64_MIN;
volatile int32_t t18 = -320132051;
uint32_t x92 = 2059983869U;
int32_t t19 = -431909;
volatile int8_t x96 = -1;
volatile uint8_t x97 = 7U;
volatile uint32_t x102 = 611U;
volatile int16_t x113 = INT16_MIN;
static int32_t t25 = 3748330;
static uint32_t x129 = UINT32_MAX;
static int8_t x134 = INT8_MAX;
int32_t x139 = INT32_MIN;
int32_t t29 = 51262651;
static uint64_t x141 = 234177730644712500LLU;
static uint8_t x142 = 0U;
volatile int16_t x143 = 461;
volatile int64_t x145 = INT64_MIN;
int8_t x146 = -1;
int64_t x150 = -1LL;
uint64_t x156 = UINT64_MAX;
int16_t x157 = -1;
int32_t x158 = -156;
int8_t x163 = INT8_MIN;
int32_t t36 = 608065514;
static int8_t x173 = INT8_MIN;
int32_t t40 = -193733942;
int8_t x185 = -1;
int8_t x192 = INT8_MIN;
int8_t x206 = 1;
static uint32_t x208 = 6U;
int8_t x209 = INT8_MIN;
uint16_t x217 = 101U;
uint32_t x222 = 1U;
uint16_t x227 = 19973U;
int32_t t50 = -109154893;
volatile int64_t x230 = INT64_MIN;
int64_t x236 = 194483093LL;
uint64_t x250 = 2786280567183420744LLU;
int8_t x260 = INT8_MIN;
int8_t x262 = INT8_MAX;
int32_t x270 = -1;
uint64_t x272 = 25030LLU;
int32_t t61 = -2265;
int32_t x274 = INT32_MIN;
int8_t x276 = 46;
int16_t x280 = -1;
int16_t x286 = -18;
uint64_t x287 = 13105675477LLU;
int32_t x290 = 217;
volatile int16_t x301 = INT16_MAX;
int8_t x303 = INT8_MIN;
static int8_t x305 = 3;
volatile int32_t x307 = INT32_MIN;
int8_t x319 = -1;
uint8_t x322 = 1U;
volatile int16_t x323 = INT16_MIN;
int32_t t73 = 3124570;
uint16_t x325 = UINT16_MAX;
int64_t x328 = INT64_MAX;
static int64_t x343 = -46817198LL;
uint16_t x345 = 2U;
int16_t x346 = 0;
static int8_t x349 = INT8_MIN;
uint32_t x351 = 563582644U;
volatile uint64_t x367 = 716641181246094926LLU;
int32_t x368 = -218969871;
volatile int64_t x372 = INT64_MIN;
int32_t t81 = 263779116;
static volatile int32_t t82 = 111;
uint64_t x377 = 23021607649LLU;
static int32_t x384 = 127;
int64_t x386 = -1LL;
int64_t x388 = 1889646276LL;
uint8_t x389 = UINT8_MAX;
int32_t x390 = 3;
int32_t x391 = -44;
int32_t x392 = INT32_MAX;
int64_t x393 = 7617550813467LL;
int32_t t88 = 7761;
static volatile int32_t x404 = INT32_MIN;
volatile int32_t t90 = -23468;
static int16_t x412 = -1;
uint32_t x415 = 17534760U;
int8_t x416 = 0;
int32_t t92 = 0;
int16_t x417 = 54;
uint32_t x418 = 491147254U;
int32_t t93 = 84;
volatile int32_t t94 = 3265;
int64_t x429 = -1LL;
volatile int32_t t98 = 1421;
volatile uint16_t x447 = UINT16_MAX;
volatile int16_t x451 = INT16_MIN;
int32_t t100 = 430200577;
int16_t x455 = 0;
int32_t t102 = -111;
int32_t x465 = 12111;
uint8_t x479 = 29U;
uint8_t x480 = 2U;
static volatile int32_t t106 = -3653234;
int16_t x488 = 12243;
int32_t t107 = 26361;
int8_t x492 = INT8_MIN;
int32_t t108 = -444;
uint32_t x493 = UINT32_MAX;
volatile int64_t x494 = -1LL;
volatile int32_t t109 = 1;
int64_t x500 = -158517505114LL;
uint32_t x502 = 255585510U;
uint8_t x506 = 5U;
int64_t x508 = INT64_MIN;
volatile int32_t x509 = INT32_MIN;
int8_t x513 = -43;
int64_t x518 = 89366079442549LL;
volatile uint16_t x520 = 0U;
static int32_t t116 = -148500;
volatile int8_t x529 = INT8_MIN;
uint64_t x538 = 24524437LLU;
volatile uint16_t x546 = 92U;
uint32_t x560 = 13893U;
static volatile int32_t x561 = 1972;
volatile int64_t x565 = INT64_MIN;
static uint16_t x567 = 406U;
static uint16_t x571 = 30176U;
static uint8_t x572 = 2U;
int32_t t128 = 4188057;
int8_t x586 = INT8_MIN;
volatile uint8_t x598 = 2U;
volatile uint16_t x611 = 12254U;
int32_t x612 = INT32_MIN;
int32_t t136 = -12486906;
int32_t t137 = -12354348;
int8_t x621 = INT8_MAX;
int32_t x622 = -7571;
uint32_t x623 = UINT32_MAX;
static volatile int32_t t138 = 195433;
volatile int8_t x626 = 1;
volatile uint32_t x632 = 11U;
uint64_t x640 = 20090579380LLU;
int32_t t143 = -84;
volatile int32_t t144 = -931405;
uint32_t x663 = 579U;
int16_t x671 = -1;
int32_t x677 = INT32_MIN;
volatile int16_t x679 = -1;
static int64_t x683 = 503026442727710LL;
int32_t x685 = INT32_MAX;
int8_t x690 = INT8_MAX;
volatile uint32_t x696 = 0U;
int64_t x699 = 19341107923654LL;
uint8_t x703 = 21U;
volatile int16_t x705 = INT16_MIN;
int16_t x709 = INT16_MIN;
static uint64_t x710 = 853802068238LLU;
static int32_t t158 = 365049;
volatile int32_t t159 = 117023904;
static uint64_t x721 = 9LLU;
uint16_t x723 = 5741U;
int64_t x730 = -1LL;
int16_t x738 = INT16_MAX;
int32_t t166 = -1;
uint16_t x749 = UINT16_MAX;
int32_t x750 = 1025969;
int32_t x752 = INT32_MIN;
volatile int32_t t167 = 6936124;
static volatile int8_t x760 = INT8_MIN;
int32_t t169 = -505313;
int32_t t170 = -208;
static int16_t x765 = -13;
uint8_t x768 = UINT8_MAX;
uint32_t x774 = UINT32_MAX;
static volatile int8_t x779 = INT8_MIN;
int32_t x780 = -28;
uint16_t x785 = 3U;
int16_t x788 = 196;
int8_t x798 = -1;
int16_t x799 = -206;
int64_t x801 = INT64_MIN;
uint32_t x802 = 57396064U;
uint8_t x807 = 2U;
int16_t x808 = INT16_MIN;
uint8_t x818 = 120U;
static volatile int32_t t184 = 8;
int32_t t186 = -584;
static int32_t t188 = -3;
uint16_t x841 = UINT16_MAX;
uint64_t x844 = UINT64_MAX;
int16_t x848 = 826;
volatile int64_t x854 = -1LL;
int32_t t193 = -3;
int8_t x876 = -1;
uint8_t x880 = 4U;
int16_t x888 = -510;


void f0(void) {
    	static uint64_t x5 = UINT64_MAX;
	volatile int32_t x6 = -1;
	int32_t x7 = 78;
	static volatile int32_t t0 = 76530;

    t0 = (x5>((x6+x7)&x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x13 = INT32_MAX;
	volatile uint16_t x14 = 7U;
	static volatile uint64_t x15 = 863378278LLU;
	int8_t x16 = -1;

    t1 = (x13>((x14+x15)&x16));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x17 = -1LL;
	volatile uint8_t x18 = 5U;
	int64_t x19 = -434321716LL;
	int32_t t2 = -486174;

    t2 = (x17>((x18+x19)&x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x22 = -1;
	int32_t x23 = -1;
	static volatile int32_t x24 = 35127;
	volatile int32_t t3 = -2014138;

    t3 = (x21>((x22+x23)&x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x25 = INT32_MAX;
	int32_t x26 = 17682;
	int64_t x28 = -1LL;

    t4 = (x25>((x26+x27)&x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = 0;
	uint32_t x30 = 21849U;
	static uint8_t x31 = 8U;
	int8_t x32 = INT8_MIN;
	volatile int32_t t5 = -48680526;

    t5 = (x29>((x30+x31)&x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = INT32_MIN;
	static int32_t x34 = INT32_MIN;
	uint8_t x35 = UINT8_MAX;
	volatile int8_t x36 = INT8_MIN;
	static int32_t t6 = -19664374;

    t6 = (x33>((x34+x35)&x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x37 = 1133U;
	int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MAX;
	int16_t x40 = INT16_MIN;
	static int32_t t7 = 26156;

    t7 = (x37>((x38+x39)&x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x42 = INT8_MIN;
	volatile int16_t x44 = INT16_MAX;
	int32_t t8 = 135;

    t8 = (x41>((x42+x43)&x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x45 = INT32_MAX;
	uint64_t x46 = 342LLU;
	uint8_t x47 = UINT8_MAX;
	int32_t t9 = -1011;

    t9 = (x45>((x46+x47)&x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x49 = 27U;
	static int16_t x50 = INT16_MAX;
	uint16_t x51 = 14U;
	int8_t x52 = 14;
	int32_t t10 = 53;

    t10 = (x49>((x50+x51)&x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x53 = -1;
	int16_t x54 = -329;
	static int64_t x55 = 2666838LL;
	static uint64_t x56 = 2185789LLU;
	static int32_t t11 = 654024;

    t11 = (x53>((x54+x55)&x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x62 = 55;
	int32_t x63 = INT32_MIN;
	static int16_t x64 = 861;
	volatile int32_t t12 = -26733347;

    t12 = (x61>((x62+x63)&x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x66 = UINT64_MAX;
	int32_t x67 = -1;
	int64_t x68 = INT64_MIN;
	int32_t t13 = 8137177;

    t13 = (x65>((x66+x67)&x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x69 = UINT8_MAX;
	static volatile uint8_t x70 = 40U;
	volatile int64_t x71 = INT64_MIN;
	int32_t t14 = 7;

    t14 = (x69>((x70+x71)&x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x73 = -1;
	int16_t x74 = INT16_MIN;
	volatile int16_t x75 = -1;
	uint32_t x76 = 12601U;
	static volatile int32_t t15 = 30326;

    t15 = (x73>((x74+x75)&x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x77 = UINT32_MAX;
	uint8_t x78 = 1U;
	uint32_t x80 = 0U;
	volatile int32_t t16 = -111;

    t16 = (x77>((x78+x79)&x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x81 = INT8_MIN;
	int32_t x82 = -1;
	int64_t x83 = 9532LL;
	uint32_t x84 = 181117706U;

    t17 = (x81>((x82+x83)&x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x85 = UINT64_MAX;
	uint32_t x87 = 897366388U;
	int8_t x88 = INT8_MIN;

    t18 = (x85>((x86+x87)&x88));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x89 = 4U;
	volatile int8_t x90 = -3;
	int64_t x91 = -984078047LL;

    t19 = (x89>((x90+x91)&x92));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x93 = 96U;
	uint8_t x94 = UINT8_MAX;
	static uint16_t x95 = UINT16_MAX;
	static int32_t t20 = 1;

    t20 = (x93>((x94+x95)&x96));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x98 = 113389U;
	int8_t x99 = INT8_MIN;
	volatile int32_t x100 = 1426;
	int32_t t21 = 97358325;

    t21 = (x97>((x98+x99)&x100));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x101 = 125U;
	static int16_t x103 = -1;
	static uint8_t x104 = UINT8_MAX;
	int32_t t22 = -330326;

    t22 = (x101>((x102+x103)&x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x109 = INT32_MAX;
	int64_t x110 = INT64_MIN;
	uint16_t x111 = 6U;
	uint16_t x112 = 3U;
	volatile int32_t t23 = -3583;

    t23 = (x109>((x110+x111)&x112));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x114 = INT32_MAX;
	uint64_t x115 = UINT64_MAX;
	uint8_t x116 = 0U;
	static int32_t t24 = 382;

    t24 = (x113>((x114+x115)&x116));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = INT64_MIN;
	int32_t x122 = INT32_MAX;
	int32_t x123 = INT32_MIN;
	int16_t x124 = INT16_MIN;

    t25 = (x121>((x122+x123)&x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x125 = -1;
	static uint64_t x126 = UINT64_MAX;
	int32_t x127 = 227658;
	uint16_t x128 = UINT16_MAX;
	int32_t t26 = 0;

    t26 = (x125>((x126+x127)&x128));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x130 = -1LL;
	int16_t x131 = -3;
	int64_t x132 = INT64_MAX;
	volatile int32_t t27 = 1186433;

    t27 = (x129>((x130+x131)&x132));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x133 = 4;
	static int64_t x135 = -1LL;
	int32_t x136 = -1;
	volatile int32_t t28 = 98005;

    t28 = (x133>((x134+x135)&x136));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x137 = 1U;
	int64_t x138 = -1LL;
	static uint8_t x140 = UINT8_MAX;

    t29 = (x137>((x138+x139)&x140));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x144 = -1;
	volatile int32_t t30 = 135;

    t30 = (x141>((x142+x143)&x144));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x147 = -1;
	uint32_t x148 = 147096305U;
	static volatile int32_t t31 = 5972641;

    t31 = (x145>((x146+x147)&x148));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x149 = -1;
	volatile int16_t x151 = INT16_MIN;
	uint32_t x152 = 39U;
	volatile int32_t t32 = 124328381;

    t32 = (x149>((x150+x151)&x152));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x153 = UINT32_MAX;
	uint32_t x154 = 2532569U;
	uint16_t x155 = 0U;
	volatile int32_t t33 = 18542;

    t33 = (x153>((x154+x155)&x156));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x159 = -1;
	uint8_t x160 = 11U;
	int32_t t34 = 237635324;

    t34 = (x157>((x158+x159)&x160));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x161 = 0;
	int32_t x162 = -1;
	volatile uint16_t x164 = 5U;
	int32_t t35 = -1859878;

    t35 = (x161>((x162+x163)&x164));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x165 = 3473777236886794LLU;
	int32_t x166 = 41;
	static uint64_t x167 = 9748LLU;
	static uint32_t x168 = 3742354U;

    t36 = (x165>((x166+x167)&x168));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x169 = 14177371951LLU;
	int32_t x170 = INT32_MIN;
	volatile uint16_t x171 = 244U;
	int32_t x172 = INT32_MIN;
	volatile int32_t t37 = 460;

    t37 = (x169>((x170+x171)&x172));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x174 = 6;
	uint8_t x175 = 71U;
	int8_t x176 = INT8_MIN;
	volatile int32_t t38 = 347066172;

    t38 = (x173>((x174+x175)&x176));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x177 = 3U;
	int8_t x178 = INT8_MIN;
	uint64_t x179 = 21451233730LLU;
	volatile int64_t x180 = INT64_MIN;
	static int32_t t39 = 536151380;

    t39 = (x177>((x178+x179)&x180));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x181 = 90;
	int8_t x182 = INT8_MAX;
	static uint32_t x183 = UINT32_MAX;
	static int32_t x184 = -748910664;

    t40 = (x181>((x182+x183)&x184));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x186 = 0U;
	int8_t x187 = INT8_MIN;
	static volatile uint8_t x188 = 3U;
	volatile int32_t t41 = 48512;

    t41 = (x185>((x186+x187)&x188));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x189 = -233;
	uint16_t x190 = 26U;
	static int8_t x191 = INT8_MIN;
	int32_t t42 = 3;

    t42 = (x189>((x190+x191)&x192));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x197 = 495974510U;
	uint64_t x198 = 1309133LLU;
	volatile int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	int32_t t43 = -19630479;

    t43 = (x197>((x198+x199)&x200));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x201 = INT16_MIN;
	static volatile int8_t x202 = INT8_MAX;
	static int8_t x203 = 4;
	uint16_t x204 = UINT16_MAX;
	int32_t t44 = 1406;

    t44 = (x201>((x202+x203)&x204));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x205 = -1;
	int8_t x207 = INT8_MIN;
	volatile int32_t t45 = -43;

    t45 = (x205>((x206+x207)&x208));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x210 = INT8_MIN;
	int16_t x211 = INT16_MAX;
	int32_t x212 = 898325670;
	volatile int32_t t46 = 8315908;

    t46 = (x209>((x210+x211)&x212));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x213 = 850U;
	int16_t x214 = INT16_MIN;
	int64_t x215 = INT64_MAX;
	int32_t x216 = INT32_MAX;
	static int32_t t47 = 11;

    t47 = (x213>((x214+x215)&x216));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x218 = -1;
	int16_t x219 = 36;
	int8_t x220 = INT8_MIN;
	volatile int32_t t48 = 13;

    t48 = (x217>((x218+x219)&x220));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x221 = INT64_MIN;
	static uint16_t x223 = 8762U;
	int32_t x224 = INT32_MAX;
	static int32_t t49 = -2149;

    t49 = (x221>((x222+x223)&x224));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x225 = 25523161941052182LL;
	uint32_t x226 = 117U;
	uint16_t x228 = UINT16_MAX;

    t50 = (x225>((x226+x227)&x228));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x229 = INT8_MIN;
	uint8_t x231 = 2U;
	static volatile uint32_t x232 = 130848268U;
	volatile int32_t t51 = 81950338;

    t51 = (x229>((x230+x231)&x232));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x233 = 38;
	volatile uint16_t x234 = 1376U;
	int8_t x235 = INT8_MAX;
	volatile int32_t t52 = -1;

    t52 = (x233>((x234+x235)&x236));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x237 = 9U;
	uint16_t x238 = UINT16_MAX;
	int16_t x239 = INT16_MIN;
	uint16_t x240 = UINT16_MAX;
	int32_t t53 = 4283;

    t53 = (x237>((x238+x239)&x240));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x241 = 111213;
	int64_t x242 = INT64_MIN;
	int32_t x243 = INT32_MAX;
	int64_t x244 = -608LL;
	volatile int32_t t54 = 18223461;

    t54 = (x241>((x242+x243)&x244));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x245 = INT8_MAX;
	uint8_t x246 = 1U;
	static volatile int64_t x247 = INT64_MIN;
	volatile int16_t x248 = INT16_MIN;
	volatile int32_t t55 = -2;

    t55 = (x245>((x246+x247)&x248));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x249 = -11;
	uint16_t x251 = UINT16_MAX;
	int64_t x252 = INT64_MAX;
	int32_t t56 = 906612;

    t56 = (x249>((x250+x251)&x252));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x253 = INT8_MIN;
	uint8_t x254 = UINT8_MAX;
	int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MIN;
	static int32_t t57 = 1134;

    t57 = (x253>((x254+x255)&x256));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x257 = INT16_MIN;
	uint32_t x258 = 151535670U;
	int16_t x259 = -4141;
	static int32_t t58 = -20087;

    t58 = (x257>((x258+x259)&x260));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x261 = INT16_MIN;
	uint8_t x263 = 1U;
	int64_t x264 = -2232LL;
	int32_t t59 = 13273271;

    t59 = (x261>((x262+x263)&x264));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x265 = UINT16_MAX;
	uint32_t x266 = UINT32_MAX;
	int16_t x267 = INT16_MAX;
	static int32_t x268 = -1;
	static int32_t t60 = 1933514;

    t60 = (x265>((x266+x267)&x268));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x269 = 7U;
	static int16_t x271 = -1;

    t61 = (x269>((x270+x271)&x272));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x273 = 0;
	int8_t x275 = INT8_MAX;
	volatile int32_t t62 = 27;

    t62 = (x273>((x274+x275)&x276));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x277 = INT16_MIN;
	static uint16_t x278 = UINT16_MAX;
	uint8_t x279 = UINT8_MAX;
	int32_t t63 = 1018535517;

    t63 = (x277>((x278+x279)&x280));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x281 = 6655;
	static uint32_t x282 = UINT32_MAX;
	uint64_t x283 = 24203LLU;
	static int8_t x284 = 0;
	int32_t t64 = -1;

    t64 = (x281>((x282+x283)&x284));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x285 = INT32_MIN;
	uint32_t x288 = 24252U;
	int32_t t65 = -199661;

    t65 = (x285>((x286+x287)&x288));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x289 = 5314;
	int64_t x291 = -1LL;
	volatile int32_t x292 = -1;
	int32_t t66 = -771302;

    t66 = (x289>((x290+x291)&x292));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x297 = 28U;
	static int32_t x298 = -439595847;
	static uint8_t x299 = UINT8_MAX;
	int64_t x300 = 66763077LL;
	int32_t t67 = 3;

    t67 = (x297>((x298+x299)&x300));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x302 = INT16_MIN;
	uint16_t x304 = 8220U;
	static int32_t t68 = 124;

    t68 = (x301>((x302+x303)&x304));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x306 = UINT32_MAX;
	int16_t x308 = INT16_MAX;
	int32_t t69 = 0;

    t69 = (x305>((x306+x307)&x308));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x309 = -190;
	uint8_t x310 = 17U;
	static volatile uint64_t x311 = 7128998064558061LLU;
	int64_t x312 = -171731596726LL;
	volatile int32_t t70 = -5804842;

    t70 = (x309>((x310+x311)&x312));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x313 = INT32_MAX;
	int16_t x314 = INT16_MIN;
	int64_t x315 = INT64_MAX;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t71 = 1;

    t71 = (x313>((x314+x315)&x316));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x317 = -1LL;
	uint64_t x318 = 870792976758566025LLU;
	static int16_t x320 = -1;
	static int32_t t72 = 1;

    t72 = (x317>((x318+x319)&x320));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x321 = INT16_MIN;
	uint16_t x324 = UINT16_MAX;

    t73 = (x321>((x322+x323)&x324));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x326 = INT8_MIN;
	int64_t x327 = -2487LL;
	int32_t t74 = 9511;

    t74 = (x325>((x326+x327)&x328));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x333 = -1;
	int8_t x334 = INT8_MIN;
	volatile int8_t x335 = INT8_MIN;
	uint64_t x336 = UINT64_MAX;
	static volatile int32_t t75 = 9148655;

    t75 = (x333>((x334+x335)&x336));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x341 = 6U;
	uint32_t x342 = 50102U;
	int32_t x344 = 4632;
	static volatile int32_t t76 = -1420;

    t76 = (x341>((x342+x343)&x344));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x347 = 11U;
	volatile int32_t x348 = INT32_MAX;
	int32_t t77 = 15;

    t77 = (x345>((x346+x347)&x348));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x350 = -37;
	static int32_t x352 = -1;
	int32_t t78 = -61;

    t78 = (x349>((x350+x351)&x352));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x357 = UINT8_MAX;
	uint32_t x358 = 0U;
	int64_t x359 = 2579LL;
	volatile int8_t x360 = -1;
	volatile int32_t t79 = 6;

    t79 = (x357>((x358+x359)&x360));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x365 = -1;
	int32_t x366 = -1;
	int32_t t80 = 5599;

    t80 = (x365>((x366+x367)&x368));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x369 = 1687U;
	uint16_t x370 = 5411U;
	int8_t x371 = -1;

    t81 = (x369>((x370+x371)&x372));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x373 = 2433188U;
	static uint32_t x374 = UINT32_MAX;
	uint32_t x375 = UINT32_MAX;
	volatile uint16_t x376 = 11122U;

    t82 = (x373>((x374+x375)&x376));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x378 = -33;
	int8_t x379 = 58;
	volatile uint16_t x380 = 42U;
	volatile int32_t t83 = -446301;

    t83 = (x377>((x378+x379)&x380));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x381 = 7351U;
	uint64_t x382 = 22289060932794341LLU;
	uint32_t x383 = 32071U;
	int32_t t84 = -124;

    t84 = (x381>((x382+x383)&x384));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x385 = INT16_MAX;
	int32_t x387 = -193104479;
	static volatile int32_t t85 = 12768770;

    t85 = (x385>((x386+x387)&x388));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t t86 = -4;

    t86 = (x389>((x390+x391)&x392));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x394 = -1;
	static int8_t x395 = INT8_MIN;
	int32_t x396 = -6;
	static int32_t t87 = -214;

    t87 = (x393>((x394+x395)&x396));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x397 = -1;
	volatile int8_t x398 = INT8_MAX;
	int8_t x399 = 34;
	int32_t x400 = INT32_MAX;

    t88 = (x397>((x398+x399)&x400));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x401 = UINT32_MAX;
	static uint32_t x402 = 145476U;
	int8_t x403 = -3;
	static int32_t t89 = 14;

    t89 = (x401>((x402+x403)&x404));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x405 = INT16_MAX;
	int8_t x406 = -1;
	volatile int32_t x407 = 3507;
	volatile int8_t x408 = -1;

    t90 = (x405>((x406+x407)&x408));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x409 = INT64_MIN;
	int16_t x410 = 2;
	int16_t x411 = INT16_MIN;
	static volatile int32_t t91 = -407;

    t91 = (x409>((x410+x411)&x412));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x413 = -1;
	uint64_t x414 = 442350311LLU;

    t92 = (x413>((x414+x415)&x416));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x419 = 9535LL;
	int16_t x420 = INT16_MAX;

    t93 = (x417>((x418+x419)&x420));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x421 = 1055515U;
	int64_t x422 = 3848154836550LL;
	int16_t x423 = INT16_MIN;
	uint8_t x424 = 9U;

    t94 = (x421>((x422+x423)&x424));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x425 = 1;
	static int8_t x426 = 13;
	int8_t x427 = INT8_MIN;
	int64_t x428 = INT64_MIN;
	static int32_t t95 = 38;

    t95 = (x425>((x426+x427)&x428));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x430 = -1;
	volatile uint64_t x431 = UINT64_MAX;
	static int16_t x432 = 0;
	volatile int32_t t96 = 1995;

    t96 = (x429>((x430+x431)&x432));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x437 = -109;
	int8_t x438 = INT8_MIN;
	static volatile int64_t x439 = -1203LL;
	int8_t x440 = 1;
	int32_t t97 = 1495995;

    t97 = (x437>((x438+x439)&x440));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x441 = INT8_MAX;
	volatile int16_t x442 = 1;
	static volatile uint16_t x443 = UINT16_MAX;
	static uint64_t x444 = UINT64_MAX;

    t98 = (x441>((x442+x443)&x444));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x445 = UINT64_MAX;
	uint32_t x446 = 15168U;
	int8_t x448 = INT8_MIN;
	int32_t t99 = 1067;

    t99 = (x445>((x446+x447)&x448));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x449 = INT8_MAX;
	uint16_t x450 = UINT16_MAX;
	volatile int32_t x452 = -75641247;

    t100 = (x449>((x450+x451)&x452));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int32_t x453 = INT32_MIN;
	static volatile uint64_t x454 = UINT64_MAX;
	volatile int64_t x456 = INT64_MIN;
	static int32_t t101 = 1794;

    t101 = (x453>((x454+x455)&x456));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x457 = INT64_MAX;
	int64_t x458 = INT64_MIN;
	static int32_t x459 = INT32_MAX;
	uint64_t x460 = UINT64_MAX;

    t102 = (x457>((x458+x459)&x460));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x461 = INT32_MAX;
	static int64_t x462 = -1LL;
	static uint64_t x463 = UINT64_MAX;
	int64_t x464 = INT64_MIN;
	int32_t t103 = 10275172;

    t103 = (x461>((x462+x463)&x464));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x466 = -1;
	int32_t x467 = 27677707;
	int8_t x468 = INT8_MAX;
	int32_t t104 = 140;

    t104 = (x465>((x466+x467)&x468));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x473 = 740U;
	int64_t x474 = 4187LL;
	int16_t x475 = 3;
	volatile int8_t x476 = INT8_MIN;
	int32_t t105 = 63;

    t105 = (x473>((x474+x475)&x476));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x477 = UINT32_MAX;
	int64_t x478 = INT64_MIN;

    t106 = (x477>((x478+x479)&x480));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x485 = 4014902530LL;
	static int64_t x486 = -1LL;
	static volatile int16_t x487 = INT16_MAX;

    t107 = (x485>((x486+x487)&x488));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x489 = -12457LL;
	static volatile uint16_t x490 = 0U;
	volatile uint64_t x491 = 3679249228638LLU;

    t108 = (x489>((x490+x491)&x492));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x495 = INT32_MIN;
	int32_t x496 = -6433363;

    t109 = (x493>((x494+x495)&x496));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x497 = INT16_MAX;
	volatile int32_t x498 = INT32_MIN;
	volatile uint32_t x499 = UINT32_MAX;
	int32_t t110 = -5122;

    t110 = (x497>((x498+x499)&x500));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint16_t x501 = UINT16_MAX;
	static int8_t x503 = -1;
	int8_t x504 = INT8_MIN;
	volatile int32_t t111 = 10;

    t111 = (x501>((x502+x503)&x504));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x505 = UINT8_MAX;
	int32_t x507 = INT32_MIN;
	static int32_t t112 = -16179965;

    t112 = (x505>((x506+x507)&x508));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x510 = 515U;
	uint64_t x511 = UINT64_MAX;
	static uint32_t x512 = 250U;
	volatile int32_t t113 = 28;

    t113 = (x509>((x510+x511)&x512));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x514 = UINT32_MAX;
	int32_t x515 = INT32_MIN;
	uint8_t x516 = 2U;
	int32_t t114 = -44;

    t114 = (x513>((x514+x515)&x516));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x517 = -181;
	uint32_t x519 = 9512549U;
	static int32_t t115 = -65013911;

    t115 = (x517>((x518+x519)&x520));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x521 = 255391744518726053LL;
	uint32_t x522 = UINT32_MAX;
	volatile int64_t x523 = -1LL;
	int8_t x524 = INT8_MAX;

    t116 = (x521>((x522+x523)&x524));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x530 = 33591067774317781LLU;
	volatile int64_t x531 = -2086426840LL;
	int16_t x532 = -1;
	volatile int32_t t117 = 411398755;

    t117 = (x529>((x530+x531)&x532));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x533 = 1;
	static uint16_t x534 = UINT16_MAX;
	uint8_t x535 = 1U;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t118 = 60124;

    t118 = (x533>((x534+x535)&x536));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x537 = INT32_MAX;
	volatile int32_t x539 = INT32_MAX;
	volatile uint8_t x540 = 5U;
	static int32_t t119 = 2959;

    t119 = (x537>((x538+x539)&x540));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x541 = INT16_MAX;
	int32_t x542 = -1;
	uint16_t x543 = 298U;
	volatile uint32_t x544 = UINT32_MAX;
	int32_t t120 = 31271;

    t120 = (x541>((x542+x543)&x544));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x545 = 24171LL;
	int8_t x547 = 1;
	uint32_t x548 = 2443174U;
	int32_t t121 = 639;

    t121 = (x545>((x546+x547)&x548));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x549 = UINT16_MAX;
	int64_t x550 = INT64_MIN;
	uint64_t x551 = 16105788LLU;
	int16_t x552 = INT16_MAX;
	volatile int32_t t122 = -29;

    t122 = (x549>((x550+x551)&x552));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x557 = INT8_MIN;
	uint8_t x558 = 79U;
	uint8_t x559 = 0U;
	volatile int32_t t123 = 1;

    t123 = (x557>((x558+x559)&x560));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x562 = 1;
	int8_t x563 = 1;
	static int16_t x564 = 85;
	int32_t t124 = -2915478;

    t124 = (x561>((x562+x563)&x564));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x566 = INT32_MIN;
	int32_t x568 = INT32_MIN;
	int32_t t125 = 0;

    t125 = (x565>((x566+x567)&x568));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x569 = 3U;
	volatile int16_t x570 = -196;
	volatile int32_t t126 = 35;

    t126 = (x569>((x570+x571)&x572));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x573 = 1;
	uint8_t x574 = 62U;
	static uint32_t x575 = UINT32_MAX;
	int8_t x576 = -1;
	volatile int32_t t127 = -9815;

    t127 = (x573>((x574+x575)&x576));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x577 = INT64_MAX;
	int64_t x578 = INT64_MAX;
	int32_t x579 = INT32_MIN;
	int32_t x580 = -83;

    t128 = (x577>((x578+x579)&x580));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x581 = 21U;
	uint8_t x582 = UINT8_MAX;
	static int8_t x583 = 1;
	static int16_t x584 = INT16_MIN;
	static volatile int32_t t129 = 9713;

    t129 = (x581>((x582+x583)&x584));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x585 = UINT8_MAX;
	static volatile int64_t x587 = -2063066138946LL;
	int64_t x588 = 0LL;
	int32_t t130 = -1039040;

    t130 = (x585>((x586+x587)&x588));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x589 = 1;
	uint32_t x590 = UINT32_MAX;
	static volatile int8_t x591 = INT8_MIN;
	uint8_t x592 = 13U;
	int32_t t131 = 1024339213;

    t131 = (x589>((x590+x591)&x592));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x593 = INT16_MIN;
	static uint16_t x594 = 15U;
	int32_t x595 = INT32_MIN;
	int32_t x596 = -97233045;
	int32_t t132 = -4;

    t132 = (x593>((x594+x595)&x596));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x597 = -1;
	int8_t x599 = 0;
	static int16_t x600 = 23;
	int32_t t133 = -11;

    t133 = (x597>((x598+x599)&x600));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x605 = 0U;
	uint32_t x606 = 53154476U;
	static volatile int16_t x607 = -1;
	int32_t x608 = -50336;
	static int32_t t134 = 30;

    t134 = (x605>((x606+x607)&x608));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x609 = 8U;
	int16_t x610 = INT16_MAX;
	int32_t t135 = 0;

    t135 = (x609>((x610+x611)&x612));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x613 = -1;
	int16_t x614 = 6737;
	int8_t x615 = 1;
	volatile int32_t x616 = INT32_MIN;

    t136 = (x613>((x614+x615)&x616));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x617 = UINT64_MAX;
	uint32_t x618 = 229U;
	volatile int64_t x619 = -1LL;
	int64_t x620 = -1LL;

    t137 = (x617>((x618+x619)&x620));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x624 = INT32_MIN;

    t138 = (x621>((x622+x623)&x624));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x625 = 51620U;
	int64_t x627 = INT64_MIN;
	uint16_t x628 = UINT16_MAX;
	int32_t t139 = -497999310;

    t139 = (x625>((x626+x627)&x628));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x629 = 120584471LL;
	static int8_t x630 = INT8_MIN;
	uint64_t x631 = 24LLU;
	static int32_t t140 = 273293841;

    t140 = (x629>((x630+x631)&x632));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x633 = INT64_MIN;
	uint64_t x634 = 34LLU;
	int16_t x635 = -240;
	int32_t x636 = INT32_MIN;
	static int32_t t141 = -219;

    t141 = (x633>((x634+x635)&x636));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x637 = UINT8_MAX;
	volatile int32_t x638 = -1;
	static int64_t x639 = INT64_MAX;
	volatile int32_t t142 = -22253;

    t142 = (x637>((x638+x639)&x640));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x641 = -177615LL;
	static int8_t x642 = 20;
	int64_t x643 = -1LL;
	int16_t x644 = -810;

    t143 = (x641>((x642+x643)&x644));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x645 = INT16_MAX;
	int8_t x646 = -1;
	static int64_t x647 = 7221493LL;
	static int8_t x648 = -3;

    t144 = (x645>((x646+x647)&x648));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x649 = 11624U;
	int64_t x650 = -638304196635354370LL;
	int16_t x651 = INT16_MIN;
	static int64_t x652 = INT64_MIN;
	static int32_t t145 = -65459066;

    t145 = (x649>((x650+x651)&x652));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x657 = 6;
	uint64_t x658 = UINT64_MAX;
	int64_t x659 = INT64_MIN;
	int8_t x660 = INT8_MAX;
	volatile int32_t t146 = -2675213;

    t146 = (x657>((x658+x659)&x660));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x661 = -202;
	int16_t x662 = INT16_MAX;
	int64_t x664 = 353825448042396LL;
	static volatile int32_t t147 = 3561;

    t147 = (x661>((x662+x663)&x664));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x669 = INT64_MIN;
	static volatile int64_t x670 = -1511LL;
	uint16_t x672 = 0U;
	static int32_t t148 = -935955;

    t148 = (x669>((x670+x671)&x672));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x673 = UINT32_MAX;
	int64_t x674 = INT64_MIN;
	int16_t x675 = 0;
	int8_t x676 = -16;
	volatile int32_t t149 = -5921033;

    t149 = (x673>((x674+x675)&x676));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x678 = UINT32_MAX;
	static int32_t x680 = -390379;
	static volatile int32_t t150 = 77980;

    t150 = (x677>((x678+x679)&x680));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x681 = 226065335U;
	uint16_t x682 = 344U;
	int16_t x684 = INT16_MAX;
	int32_t t151 = 144070;

    t151 = (x681>((x682+x683)&x684));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x686 = INT8_MIN;
	static int64_t x687 = 4053505LL;
	volatile int8_t x688 = INT8_MIN;
	int32_t t152 = -1223;

    t152 = (x685>((x686+x687)&x688));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x689 = INT32_MIN;
	int8_t x691 = 1;
	int16_t x692 = -1;
	volatile int32_t t153 = 0;

    t153 = (x689>((x690+x691)&x692));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x693 = INT32_MAX;
	uint64_t x694 = UINT64_MAX;
	int8_t x695 = 1;
	int32_t t154 = 261031;

    t154 = (x693>((x694+x695)&x696));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x697 = 5488;
	uint8_t x698 = 3U;
	volatile int32_t x700 = -1;
	int32_t t155 = 3;

    t155 = (x697>((x698+x699)&x700));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x701 = -1LL;
	int16_t x702 = 1;
	uint32_t x704 = UINT32_MAX;
	volatile int32_t t156 = -97;

    t156 = (x701>((x702+x703)&x704));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x706 = -2;
	int16_t x707 = -1;
	int16_t x708 = INT16_MIN;
	volatile int32_t t157 = -7;

    t157 = (x705>((x706+x707)&x708));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x711 = 7575U;
	uint32_t x712 = UINT32_MAX;

    t158 = (x709>((x710+x711)&x712));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x713 = -1LL;
	uint16_t x714 = 0U;
	int8_t x715 = INT8_MAX;
	int32_t x716 = INT32_MIN;

    t159 = (x713>((x714+x715)&x716));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x722 = 792276U;
	int16_t x724 = INT16_MIN;
	int32_t t160 = -664;

    t160 = (x721>((x722+x723)&x724));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x725 = 2U;
	int8_t x726 = INT8_MAX;
	static int64_t x727 = -5LL;
	int32_t x728 = 1633;
	volatile int32_t t161 = 27219;

    t161 = (x725>((x726+x727)&x728));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x729 = 0;
	volatile int32_t x731 = 238941601;
	static uint32_t x732 = 16422U;
	int32_t t162 = 99207;

    t162 = (x729>((x730+x731)&x732));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x733 = UINT64_MAX;
	uint8_t x734 = 9U;
	int32_t x735 = INT32_MIN;
	uint8_t x736 = 106U;
	volatile int32_t t163 = 1763;

    t163 = (x733>((x734+x735)&x736));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x737 = 145;
	uint16_t x739 = UINT16_MAX;
	uint64_t x740 = 1943361416657295LLU;
	int32_t t164 = 322425191;

    t164 = (x737>((x738+x739)&x740));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x741 = INT32_MAX;
	int8_t x742 = INT8_MIN;
	int8_t x743 = 23;
	uint64_t x744 = 3507403956958155359LLU;
	int32_t t165 = -59850;

    t165 = (x741>((x742+x743)&x744));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint8_t x745 = 1U;
	uint8_t x746 = 0U;
	volatile int16_t x747 = INT16_MIN;
	static uint32_t x748 = 28401U;

    t166 = (x745>((x746+x747)&x748));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x751 = 1;

    t167 = (x749>((x750+x751)&x752));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x753 = 8061712;
	uint16_t x754 = 19U;
	int32_t x755 = 0;
	uint8_t x756 = 63U;
	volatile int32_t t168 = 1964;

    t168 = (x753>((x754+x755)&x756));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x757 = 14;
	uint64_t x758 = 120920061154139186LLU;
	int64_t x759 = INT64_MIN;

    t169 = (x757>((x758+x759)&x760));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x761 = UINT64_MAX;
	int16_t x762 = INT16_MIN;
	static volatile uint16_t x763 = UINT16_MAX;
	uint32_t x764 = UINT32_MAX;

    t170 = (x761>((x762+x763)&x764));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x766 = -1;
	static int8_t x767 = -1;
	int32_t t171 = -1015864437;

    t171 = (x765>((x766+x767)&x768));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x769 = INT64_MAX;
	static volatile int8_t x770 = 1;
	int16_t x771 = -27;
	int8_t x772 = INT8_MIN;
	int32_t t172 = 38;

    t172 = (x769>((x770+x771)&x772));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x773 = UINT32_MAX;
	static volatile int32_t x775 = -146269;
	int8_t x776 = INT8_MIN;
	int32_t t173 = 71;

    t173 = (x773>((x774+x775)&x776));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x777 = -1;
	volatile int64_t x778 = 15LL;
	volatile int32_t t174 = 4619;

    t174 = (x777>((x778+x779)&x780));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x781 = 61U;
	int16_t x782 = 8128;
	static int8_t x783 = -13;
	int32_t x784 = 363;
	int32_t t175 = 95;

    t175 = (x781>((x782+x783)&x784));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x786 = 1612301LL;
	int32_t x787 = INT32_MAX;
	volatile int32_t t176 = 400;

    t176 = (x785>((x786+x787)&x788));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x789 = 2781231608242287LLU;
	int16_t x790 = INT16_MIN;
	int64_t x791 = INT64_MAX;
	volatile int32_t x792 = -4498;
	int32_t t177 = -383196;

    t177 = (x789>((x790+x791)&x792));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x793 = -1;
	uint8_t x794 = UINT8_MAX;
	int32_t x795 = INT32_MIN;
	int32_t x796 = INT32_MIN;
	volatile int32_t t178 = 12981;

    t178 = (x793>((x794+x795)&x796));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x797 = 149U;
	uint16_t x800 = 2198U;
	static volatile int32_t t179 = 111;

    t179 = (x797>((x798+x799)&x800));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x803 = 3464U;
	int16_t x804 = INT16_MIN;
	volatile int32_t t180 = 70;

    t180 = (x801>((x802+x803)&x804));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x805 = -1;
	int32_t x806 = -134236960;
	int32_t t181 = 0;

    t181 = (x805>((x806+x807)&x808));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x809 = INT32_MIN;
	uint64_t x810 = 263373975LLU;
	uint64_t x811 = 1LLU;
	int32_t x812 = 6889;
	int32_t t182 = 1;

    t182 = (x809>((x810+x811)&x812));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x817 = INT8_MIN;
	volatile int64_t x819 = 459570904130788LL;
	volatile int32_t x820 = -4749508;
	int32_t t183 = 7;

    t183 = (x817>((x818+x819)&x820));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x821 = UINT8_MAX;
	uint8_t x822 = 27U;
	uint64_t x823 = UINT64_MAX;
	uint32_t x824 = UINT32_MAX;

    t184 = (x821>((x822+x823)&x824));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x825 = INT32_MIN;
	int16_t x826 = INT16_MIN;
	static int32_t x827 = INT32_MAX;
	static uint8_t x828 = 29U;
	int32_t t185 = -217786;

    t185 = (x825>((x826+x827)&x828));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x829 = INT64_MIN;
	volatile int8_t x830 = 1;
	int16_t x831 = 4;
	int16_t x832 = -9344;

    t186 = (x829>((x830+x831)&x832));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x833 = INT16_MAX;
	int8_t x834 = INT8_MIN;
	volatile uint32_t x835 = UINT32_MAX;
	static int16_t x836 = INT16_MIN;
	volatile int32_t t187 = 2;

    t187 = (x833>((x834+x835)&x836));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x837 = INT16_MIN;
	static volatile uint32_t x838 = 2301820U;
	static int16_t x839 = INT16_MIN;
	volatile int64_t x840 = 542169546506167LL;

    t188 = (x837>((x838+x839)&x840));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x842 = -452811662;
	int16_t x843 = 478;
	static int32_t t189 = -15555;

    t189 = (x841>((x842+x843)&x844));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x845 = UINT32_MAX;
	volatile int64_t x846 = 100698767834404782LL;
	int32_t x847 = -1;
	volatile int32_t t190 = 83;

    t190 = (x845>((x846+x847)&x848));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x849 = 116016;
	int16_t x850 = -1;
	int8_t x851 = -32;
	int8_t x852 = INT8_MIN;
	volatile int32_t t191 = 21645291;

    t191 = (x849>((x850+x851)&x852));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x853 = -1951;
	int16_t x855 = -1;
	static volatile int16_t x856 = -1;
	volatile int32_t t192 = -1;

    t192 = (x853>((x854+x855)&x856));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x857 = 0U;
	uint8_t x858 = 96U;
	int32_t x859 = -72739317;
	int32_t x860 = INT32_MAX;

    t193 = (x857>((x858+x859)&x860));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x861 = -19085;
	static int8_t x862 = -1;
	int32_t x863 = -14106;
	int64_t x864 = INT64_MIN;
	int32_t t194 = -31;

    t194 = (x861>((x862+x863)&x864));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x865 = -5314;
	int64_t x866 = 485430315LL;
	uint64_t x867 = 5146720260LLU;
	int32_t x868 = 2724381;
	static volatile int32_t t195 = 49130424;

    t195 = (x865>((x866+x867)&x868));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x869 = INT64_MAX;
	uint16_t x870 = 411U;
	uint32_t x871 = UINT32_MAX;
	static int32_t x872 = 11;
	int32_t t196 = -756435;

    t196 = (x869>((x870+x871)&x872));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x873 = INT64_MIN;
	volatile int8_t x874 = INT8_MAX;
	static int8_t x875 = INT8_MAX;
	volatile int32_t t197 = -1534;

    t197 = (x873>((x874+x875)&x876));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x877 = -1;
	int16_t x878 = INT16_MIN;
	uint64_t x879 = 831483LLU;
	int32_t t198 = -375847790;

    t198 = (x877>((x878+x879)&x880));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x885 = INT64_MIN;
	static volatile int32_t x886 = INT32_MAX;
	uint32_t x887 = UINT32_MAX;
	volatile int32_t t199 = -9751990;

    t199 = (x885>((x886+x887)&x888));

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

