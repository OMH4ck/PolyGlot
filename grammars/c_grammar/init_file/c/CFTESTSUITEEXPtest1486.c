
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

static uint16_t x5 = UINT16_MAX;
static uint8_t x8 = UINT8_MAX;
static int32_t t1 = 3780643;
uint32_t x36 = 399019532U;
volatile int32_t t8 = 9;
int8_t x43 = INT8_MAX;
int8_t x46 = INT8_MIN;
int32_t t10 = 2061;
uint64_t t12 = 21LLU;
int32_t x59 = -46;
volatile uint32_t t14 = 32U;
uint8_t x72 = UINT8_MAX;
int16_t x74 = INT16_MIN;
volatile uint64_t x78 = 198519225563LLU;
static volatile int32_t x87 = 0;
static int16_t x88 = INT16_MIN;
uint32_t x93 = 3355U;
volatile int32_t t23 = 124913;
volatile int16_t x101 = INT16_MIN;
uint8_t x107 = 3U;
uint16_t x122 = UINT16_MAX;
volatile int32_t t29 = -1724;
int16_t x129 = INT16_MAX;
uint64_t x130 = 8354912556LLU;
uint32_t x131 = 30U;
int32_t t31 = -1889;
static int8_t x137 = -1;
volatile uint8_t x147 = 13U;
static uint8_t x150 = UINT8_MAX;
uint64_t x157 = UINT64_MAX;
volatile int8_t x160 = INT8_MIN;
uint32_t x165 = UINT32_MAX;
uint64_t x170 = UINT64_MAX;
uint64_t x171 = 41LLU;
static uint8_t x175 = 0U;
static uint64_t x178 = 0LLU;
uint16_t x180 = 237U;
static volatile int32_t x184 = INT32_MAX;
static volatile uint32_t x193 = 653U;
int32_t t47 = -7195;
volatile uint64_t x204 = 608267990977043811LLU;
int16_t x205 = -1;
int32_t t50 = 27048;
volatile int32_t x213 = INT32_MAX;
static uint32_t x221 = 228632280U;
volatile int32_t t54 = -1946097;
volatile int64_t x236 = INT64_MAX;
int32_t t60 = -1;
uint8_t x253 = UINT8_MAX;
uint32_t x255 = 165535223U;
volatile int32_t t61 = -5209941;
volatile int32_t x274 = -1;
volatile int8_t x279 = INT8_MIN;
volatile uint16_t x283 = 5U;
volatile int8_t x293 = INT8_MAX;
int16_t x294 = -1;
uint16_t x297 = 22U;
int8_t x304 = 2;
int32_t x317 = -1;
int32_t t75 = 16;
volatile int64_t x328 = -1LL;
volatile uint32_t t79 = UINT32_MAX;
int8_t x340 = INT8_MAX;
int64_t x342 = 3203603LL;
volatile int32_t t82 = -1;
volatile uint16_t x353 = 28U;
int32_t t84 = -43;
int64_t t86 = 166969LL;
uint64_t x367 = 249500359LLU;
uint64_t t87 = 1392LLU;
int8_t x375 = 14;
uint64_t x376 = UINT64_MAX;
volatile uint16_t x377 = UINT16_MAX;
static uint8_t x379 = 24U;
volatile int32_t t91 = 11;
static volatile int32_t t92 = -1;
static volatile uint8_t x394 = 0U;
uint8_t x404 = 2U;
int32_t x405 = -185853353;
int32_t x406 = INT32_MAX;
int8_t x408 = INT8_MIN;
volatile uint8_t x410 = 121U;
static int64_t x413 = 261LL;
uint16_t x415 = 0U;
int8_t x418 = 0;
static uint32_t x419 = UINT32_MAX;
int8_t x425 = 21;
volatile int32_t x436 = 591667;
static int64_t t103 = INT64_MAX;
uint16_t x441 = 7657U;
static int32_t t105 = 192667982;
int32_t x446 = INT32_MAX;
static int16_t x453 = -10;
int32_t x457 = -1;
volatile int8_t x463 = 0;
int32_t t111 = 8;
int16_t x482 = INT16_MAX;
int32_t x487 = INT32_MIN;
static volatile int32_t t116 = -37326;
uint64_t x492 = 613384263023122103LLU;
int16_t x494 = 491;
int32_t t118 = -9796254;
static int16_t x500 = 1;
static volatile int32_t x503 = INT32_MAX;
uint32_t x505 = UINT32_MAX;
int8_t x508 = INT8_MIN;
uint32_t t121 = 11442U;
static int16_t x512 = -1;
uint64_t x513 = UINT64_MAX;
int16_t x519 = 207;
volatile uint32_t t128 = 127U;
volatile int64_t x538 = INT64_MAX;
int32_t t131 = -1948165;
static int32_t x550 = -248218;
uint32_t t134 = 33892U;
int64_t x562 = 6101023LL;
uint8_t x566 = UINT8_MAX;
int64_t x567 = INT64_MIN;
int64_t x572 = 7243317303970LL;
int32_t x573 = -1;
int64_t x574 = INT64_MIN;
static uint64_t x587 = 774799438266031749LLU;
volatile uint32_t x594 = UINT32_MAX;
int16_t x607 = INT16_MIN;
uint32_t x611 = UINT32_MAX;
static int32_t t147 = 11;
volatile int8_t x613 = -28;
int32_t x616 = INT32_MIN;
int32_t x619 = INT32_MIN;
int64_t t149 = 1538230347486LL;
int16_t x624 = -2;
static volatile uint32_t x630 = UINT32_MAX;
int64_t x636 = INT64_MAX;
int8_t x637 = -10;
int32_t x642 = INT32_MIN;
static int16_t x643 = INT16_MIN;
uint16_t x649 = 2884U;
volatile int64_t x652 = -1LL;
int16_t x655 = INT16_MIN;
static volatile int64_t t158 = INT64_MIN;
int32_t x670 = 1;
int32_t t162 = -363092;
static volatile uint32_t x678 = UINT32_MAX;
int16_t x680 = 0;
uint32_t x683 = UINT32_MAX;
int8_t x685 = INT8_MIN;
uint16_t x687 = 3U;
int64_t x688 = INT64_MIN;
static volatile int32_t t166 = 130728;
int64_t x691 = 3LL;
uint16_t x693 = 958U;
uint16_t x698 = UINT16_MAX;
int16_t x700 = -4019;
int32_t x701 = INT32_MAX;
int64_t x704 = -1LL;
volatile int32_t t171 = INT32_MAX;
static int8_t x711 = INT8_MIN;
int8_t x720 = INT8_MAX;
volatile uint64_t t174 = 3317380482028LLU;
uint64_t x731 = 2126643846211LLU;
volatile int32_t t177 = 34140;
static int16_t x734 = -1;
int32_t t179 = -3497955;
uint32_t x763 = 435299801U;
int64_t x768 = INT64_MAX;
static int32_t x774 = -26;
uint16_t x783 = 1U;
uint64_t t189 = 2437LLU;
uint64_t x786 = UINT64_MAX;
uint16_t x787 = UINT16_MAX;
uint64_t x788 = 7406964LLU;
int8_t x791 = INT8_MIN;
int16_t x799 = 1;
static volatile int64_t x801 = 112771393999672LL;
int8_t x803 = INT8_MIN;
int64_t x804 = INT64_MAX;
uint64_t x811 = 883070LLU;
static volatile int32_t t196 = -61851;
int8_t x813 = INT8_MIN;
int8_t x816 = INT8_MAX;
int32_t t197 = 0;
int16_t x821 = -1;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int32_t x2 = -1033578669;
	uint64_t x3 = UINT64_MAX;
	static int32_t x4 = INT32_MAX;
	int32_t t0 = 523247;

    t0 = (x1-((x2==x3)>x4));

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = 1;
	int16_t x7 = -14;

    t1 = (x5-((x6==x7)>x8));

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	uint64_t x10 = 88296977927459141LLU;
	int16_t x11 = -1;
	int8_t x12 = 37;
	int64_t t2 = INT64_MIN;

    t2 = (x9-((x10==x11)>x12));

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 58997LLU;
	uint32_t x18 = 224583405U;
	uint32_t x19 = UINT32_MAX;
	uint8_t x20 = 10U;
	volatile uint64_t t3 = 25010763332929075LLU;

    t3 = (x17-((x18==x19)>x20));

    if (t3 != 58997LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 1899LLU;
	int32_t x22 = -114704882;
	uint32_t x23 = 17187U;
	int16_t x24 = INT16_MIN;
	static uint64_t t4 = 25626711325286683LLU;

    t4 = (x21-((x22==x23)>x24));

    if (t4 != 1898LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MIN;
	uint32_t x26 = 158520436U;
	int16_t x27 = -1;
	static int8_t x28 = INT8_MAX;
	static volatile int32_t t5 = -40621990;

    t5 = (x25-((x26==x27)>x28));

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x29 = -1;
	uint16_t x30 = 4U;
	int32_t x31 = INT32_MAX;
	int8_t x32 = INT8_MIN;
	volatile int32_t t6 = 10675;

    t6 = (x29-((x30==x31)>x32));

    if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = 1636261;
	uint32_t x34 = 2790U;
	int16_t x35 = 1093;
	volatile int32_t t7 = 5518862;

    t7 = (x33-((x34==x35)>x36));

    if (t7 != 1636261) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = 4;
	volatile int64_t x38 = INT64_MIN;
	int64_t x39 = -1LL;
	int32_t x40 = 89;

    t8 = (x37-((x38==x39)>x40));

    if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = -1;
	static int8_t x42 = INT8_MAX;
	int32_t x44 = -24955;
	int32_t t9 = -1;

    t9 = (x41-((x42==x43)>x44));

    if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = -1;
	int64_t x47 = -1LL;
	uint8_t x48 = 24U;

    t10 = (x45-((x46==x47)>x48));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = -1LL;
	int16_t x50 = INT16_MIN;
	int8_t x51 = 0;
	volatile int8_t x52 = -1;
	volatile int64_t t11 = 53LL;

    t11 = (x49-((x50==x51)>x52));

    if (t11 != -2LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x53 = 180317786865LLU;
	int32_t x54 = -1;
	volatile int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MIN;

    t12 = (x53-((x54==x55)>x56));

    if (t12 != 180317786864LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = 577873361505536763LL;
	uint16_t x58 = UINT16_MAX;
	uint8_t x60 = UINT8_MAX;
	volatile int64_t t13 = 687664434LL;

    t13 = (x57-((x58==x59)>x60));

    if (t13 != 577873361505536763LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x61 = 249U;
	volatile int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MAX;
	int8_t x64 = INT8_MAX;

    t14 = (x61-((x62==x63)>x64));

    if (t14 != 249U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x65 = 229978023040242LL;
	int32_t x66 = INT32_MAX;
	int32_t x67 = INT32_MIN;
	volatile uint8_t x68 = UINT8_MAX;
	volatile int64_t t15 = 10229791012120LL;

    t15 = (x65-((x66==x67)>x68));

    if (t15 != 229978023040242LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x69 = -1;
	uint8_t x70 = 2U;
	int32_t x71 = INT32_MIN;
	int32_t t16 = 6327242;

    t16 = (x69-((x70==x71)>x72));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x73 = 17;
	int64_t x75 = INT64_MIN;
	static uint32_t x76 = UINT32_MAX;
	volatile int32_t t17 = -129;

    t17 = (x73-((x74==x75)>x76));

    if (t17 != 17) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x77 = INT16_MIN;
	uint32_t x79 = 405U;
	volatile int64_t x80 = INT64_MIN;
	volatile int32_t t18 = 467971;

    t18 = (x77-((x78==x79)>x80));

    if (t18 != -32769) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int8_t x81 = -1;
	int8_t x82 = INT8_MIN;
	static uint64_t x83 = UINT64_MAX;
	static uint16_t x84 = UINT16_MAX;
	int32_t t19 = -6764522;

    t19 = (x81-((x82==x83)>x84));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x85 = 0;
	uint8_t x86 = 0U;
	static int32_t t20 = -501805;

    t20 = (x85-((x86==x87)>x88));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = -357306925;
	static volatile int16_t x90 = INT16_MAX;
	volatile int64_t x91 = 4420985328964180LL;
	uint8_t x92 = 0U;
	int32_t t21 = 3447582;

    t21 = (x89-((x90==x91)>x92));

    if (t21 != -357306925) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x94 = -1929348127436414442LL;
	static int16_t x95 = INT16_MIN;
	static int8_t x96 = -1;
	uint32_t t22 = 3905330U;

    t22 = (x93-((x94==x95)>x96));

    if (t22 != 3354U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = INT8_MIN;
	volatile int16_t x98 = 0;
	int8_t x99 = 39;
	static int8_t x100 = INT8_MAX;

    t23 = (x97-((x98==x99)>x100));

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x102 = INT16_MIN;
	uint32_t x103 = UINT32_MAX;
	int8_t x104 = INT8_MIN;
	static volatile int32_t t24 = -433145;

    t24 = (x101-((x102==x103)>x104));

    if (t24 != -32769) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = INT8_MIN;
	uint8_t x106 = UINT8_MAX;
	int64_t x108 = INT64_MIN;
	int32_t t25 = 3777789;

    t25 = (x105-((x106==x107)>x108));

    if (t25 != -129) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x109 = 47197105LLU;
	static uint32_t x110 = 1055U;
	static uint8_t x111 = 3U;
	static int8_t x112 = INT8_MIN;
	volatile uint64_t t26 = 1677316788441817044LLU;

    t26 = (x109-((x110==x111)>x112));

    if (t26 != 47197104LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x113 = INT8_MAX;
	uint8_t x114 = 25U;
	static uint32_t x115 = UINT32_MAX;
	int16_t x116 = 39;
	static int32_t t27 = -271351;

    t27 = (x113-((x114==x115)>x116));

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x117 = -1;
	static int64_t x118 = INT64_MIN;
	static uint32_t x119 = UINT32_MAX;
	uint16_t x120 = UINT16_MAX;
	int32_t t28 = 635620;

    t28 = (x117-((x118==x119)>x120));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = INT16_MAX;
	uint8_t x123 = 38U;
	static uint64_t x124 = 3881LLU;

    t29 = (x121-((x122==x123)>x124));

    if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = INT8_MIN;
	static int16_t x126 = INT16_MAX;
	int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MIN;
	volatile int32_t t30 = 5386990;

    t30 = (x125-((x126==x127)>x128));

    if (t30 != -129) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x132 = 467550612584304LLU;

    t31 = (x129-((x130==x131)>x132));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x138 = -270847383;
	int32_t x139 = 699;
	static volatile int64_t x140 = -1LL;
	volatile int32_t t32 = 14269172;

    t32 = (x137-((x138==x139)>x140));

    if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x141 = UINT64_MAX;
	static volatile int32_t x142 = -1;
	volatile int32_t x143 = INT32_MIN;
	int8_t x144 = INT8_MIN;
	uint64_t t33 = 1998654752LLU;

    t33 = (x141-((x142==x143)>x144));

    if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x145 = INT16_MAX;
	int32_t x146 = INT32_MAX;
	uint16_t x148 = UINT16_MAX;
	static int32_t t34 = 1321632;

    t34 = (x145-((x146==x147)>x148));

    if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x149 = 3U;
	int32_t x151 = INT32_MAX;
	int64_t x152 = -1LL;
	uint32_t t35 = 23418565U;

    t35 = (x149-((x150==x151)>x152));

    if (t35 != 2U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x153 = 2068281LL;
	static volatile int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MIN;
	volatile uint64_t x156 = UINT64_MAX;
	int64_t t36 = 6367630305852620LL;

    t36 = (x153-((x154==x155)>x156));

    if (t36 != 2068281LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x158 = INT64_MAX;
	int16_t x159 = INT16_MIN;
	uint64_t t37 = 105267LLU;

    t37 = (x157-((x158==x159)>x160));

    if (t37 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x161 = -1;
	static int16_t x162 = INT16_MAX;
	int16_t x163 = INT16_MAX;
	int16_t x164 = INT16_MAX;
	int32_t t38 = 0;

    t38 = (x161-((x162==x163)>x164));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x166 = INT8_MAX;
	int32_t x167 = INT32_MIN;
	int32_t x168 = INT32_MAX;
	volatile uint32_t t39 = UINT32_MAX;

    t39 = (x165-((x166==x167)>x168));

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = -1;
	volatile int8_t x172 = -5;
	volatile int32_t t40 = -23008354;

    t40 = (x169-((x170==x171)>x172));

    if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MAX;
	int32_t x176 = INT32_MIN;
	static int32_t t41 = 10779;

    t41 = (x173-((x174==x175)>x176));

    if (t41 != -129) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x177 = 1920173818U;
	uint8_t x179 = 5U;
	uint32_t t42 = 248U;

    t42 = (x177-((x178==x179)>x180));

    if (t42 != 1920173818U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x181 = 130068552292605LLU;
	int32_t x182 = -1;
	int8_t x183 = INT8_MAX;
	uint64_t t43 = 5435LLU;

    t43 = (x181-((x182==x183)>x184));

    if (t43 != 130068552292605LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x185 = INT16_MAX;
	static int32_t x186 = INT32_MAX;
	uint16_t x187 = UINT16_MAX;
	volatile uint32_t x188 = UINT32_MAX;
	int32_t t44 = 65341;

    t44 = (x185-((x186==x187)>x188));

    if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x189 = 280U;
	uint8_t x190 = 1U;
	int64_t x191 = INT64_MAX;
	int64_t x192 = INT64_MIN;
	volatile uint32_t t45 = 25186997U;

    t45 = (x189-((x190==x191)>x192));

    if (t45 != 279U) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x194 = 122257691LL;
	int16_t x195 = 383;
	int8_t x196 = -1;
	volatile uint32_t t46 = 7369460U;

    t46 = (x193-((x194==x195)>x196));

    if (t46 != 652U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x197 = 13U;
	int64_t x198 = 57274390554LL;
	int32_t x199 = 2864710;
	static int32_t x200 = INT32_MIN;

    t47 = (x197-((x198==x199)>x200));

    if (t47 != 12) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x201 = INT32_MAX;
	static int64_t x202 = INT64_MIN;
	uint32_t x203 = UINT32_MAX;
	volatile int32_t t48 = INT32_MAX;

    t48 = (x201-((x202==x203)>x204));

    if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x206 = -1;
	volatile uint8_t x207 = 16U;
	uint16_t x208 = 1708U;
	volatile int32_t t49 = 16987262;

    t49 = (x205-((x206==x207)>x208));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x209 = INT8_MIN;
	int8_t x210 = -1;
	static int32_t x211 = INT32_MAX;
	int16_t x212 = INT16_MIN;

    t50 = (x209-((x210==x211)>x212));

    if (t50 != -129) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x214 = 45556343LL;
	int32_t x215 = -1;
	int32_t x216 = INT32_MIN;
	volatile int32_t t51 = -46;

    t51 = (x213-((x214==x215)>x216));

    if (t51 != 2147483646) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x217 = INT8_MIN;
	static int16_t x218 = 7140;
	int32_t x219 = -33;
	int32_t x220 = INT32_MIN;
	int32_t t52 = 796254;

    t52 = (x217-((x218==x219)>x220));

    if (t52 != -129) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x222 = 316856745LLU;
	int8_t x223 = -1;
	uint32_t x224 = 0U;
	static uint32_t t53 = 4897830U;

    t53 = (x221-((x222==x223)>x224));

    if (t53 != 228632280U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x225 = UINT16_MAX;
	static int16_t x226 = INT16_MAX;
	static int64_t x227 = INT64_MIN;
	int8_t x228 = 15;

    t54 = (x225-((x226==x227)>x228));

    if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x229 = UINT8_MAX;
	int16_t x230 = INT16_MIN;
	int64_t x231 = INT64_MAX;
	int32_t x232 = 128265;
	int32_t t55 = 0;

    t55 = (x229-((x230==x231)>x232));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x233 = 54U;
	int8_t x234 = -1;
	int8_t x235 = INT8_MIN;
	static volatile int32_t t56 = -6767515;

    t56 = (x233-((x234==x235)>x236));

    if (t56 != 54) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x237 = 117540760018803630LLU;
	int64_t x238 = INT64_MIN;
	volatile int32_t x239 = INT32_MIN;
	int32_t x240 = 121325;
	volatile uint64_t t57 = 169667707634LLU;

    t57 = (x237-((x238==x239)>x240));

    if (t57 != 117540760018803630LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = INT16_MIN;
	int32_t x242 = INT32_MIN;
	int32_t x243 = 3333;
	int64_t x244 = -372465417973LL;
	volatile int32_t t58 = 65;

    t58 = (x241-((x242==x243)>x244));

    if (t58 != -32769) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x245 = 5U;
	static int32_t x246 = -1;
	int16_t x247 = INT16_MAX;
	uint8_t x248 = 21U;
	int32_t t59 = 77051;

    t59 = (x245-((x246==x247)>x248));

    if (t59 != 5) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x249 = -9835342;
	int64_t x250 = INT64_MAX;
	uint16_t x251 = 15U;
	static uint16_t x252 = 13083U;

    t60 = (x249-((x250==x251)>x252));

    if (t60 != -9835342) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x254 = 78917750024348LLU;
	int32_t x256 = INT32_MIN;

    t61 = (x253-((x254==x255)>x256));

    if (t61 != 254) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x261 = UINT32_MAX;
	int32_t x262 = INT32_MIN;
	uint32_t x263 = 158U;
	int16_t x264 = -12;
	volatile uint32_t t62 = 2U;

    t62 = (x261-((x262==x263)>x264));

    if (t62 != 4294967294U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x265 = 4;
	int8_t x266 = -1;
	static int16_t x267 = INT16_MIN;
	int16_t x268 = INT16_MAX;
	static volatile int32_t t63 = -10989;

    t63 = (x265-((x266==x267)>x268));

    if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x269 = 1388;
	static int8_t x270 = INT8_MIN;
	int8_t x271 = INT8_MIN;
	int64_t x272 = INT64_MIN;
	volatile int32_t t64 = 3;

    t64 = (x269-((x270==x271)>x272));

    if (t64 != 1387) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x273 = 4;
	int32_t x275 = -3073826;
	int32_t x276 = INT32_MAX;
	int32_t t65 = 244;

    t65 = (x273-((x274==x275)>x276));

    if (t65 != 4) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x277 = -1LL;
	int32_t x278 = INT32_MAX;
	static uint32_t x280 = 397660U;
	int64_t t66 = -14LL;

    t66 = (x277-((x278==x279)>x280));

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x281 = 7U;
	int32_t x282 = INT32_MIN;
	uint8_t x284 = UINT8_MAX;
	volatile uint32_t t67 = 3837350U;

    t67 = (x281-((x282==x283)>x284));

    if (t67 != 7U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x289 = INT8_MIN;
	int8_t x290 = INT8_MIN;
	int32_t x291 = -1;
	uint8_t x292 = UINT8_MAX;
	int32_t t68 = 969;

    t68 = (x289-((x290==x291)>x292));

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x295 = -3;
	int16_t x296 = INT16_MIN;
	volatile int32_t t69 = -69;

    t69 = (x293-((x294==x295)>x296));

    if (t69 != 126) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x298 = -2LL;
	int64_t x299 = -1LL;
	uint32_t x300 = 311455U;
	volatile int32_t t70 = 6907;

    t70 = (x297-((x298==x299)>x300));

    if (t70 != 22) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x301 = INT32_MIN;
	static int64_t x302 = INT64_MIN;
	int16_t x303 = -14512;
	volatile int32_t t71 = INT32_MIN;

    t71 = (x301-((x302==x303)>x304));

    if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x305 = 2;
	uint64_t x306 = 736LLU;
	int16_t x307 = -1249;
	uint16_t x308 = UINT16_MAX;
	int32_t t72 = -73107;

    t72 = (x305-((x306==x307)>x308));

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x309 = INT8_MIN;
	int8_t x310 = INT8_MIN;
	static int32_t x311 = INT32_MIN;
	int8_t x312 = INT8_MAX;
	volatile int32_t t73 = -1098;

    t73 = (x309-((x310==x311)>x312));

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x313 = -105114867524958LL;
	int16_t x314 = -1;
	uint16_t x315 = 1U;
	static uint8_t x316 = 42U;
	volatile int64_t t74 = 7347871010167248LL;

    t74 = (x313-((x314==x315)>x316));

    if (t74 != -105114867524958LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x318 = 133766055U;
	int8_t x319 = INT8_MIN;
	int64_t x320 = -100LL;

    t75 = (x317-((x318==x319)>x320));

    if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x321 = 64952LL;
	int64_t x322 = -59083LL;
	int8_t x323 = INT8_MIN;
	int16_t x324 = -1;
	int64_t t76 = -4083635318LL;

    t76 = (x321-((x322==x323)>x324));

    if (t76 != 64951LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x325 = 91U;
	volatile uint64_t x326 = 17886329299LLU;
	volatile int16_t x327 = -1;
	volatile int32_t t77 = -1;

    t77 = (x325-((x326==x327)>x328));

    if (t77 != 90) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x329 = -1LL;
	volatile int16_t x330 = INT16_MAX;
	volatile uint8_t x331 = UINT8_MAX;
	uint16_t x332 = 7U;
	static volatile int64_t t78 = 1LL;

    t78 = (x329-((x330==x331)>x332));

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x333 = UINT32_MAX;
	volatile uint16_t x334 = 101U;
	int16_t x335 = 410;
	uint32_t x336 = 223313U;

    t79 = (x333-((x334==x335)>x336));

    if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x337 = -1;
	volatile int64_t x338 = -5LL;
	int16_t x339 = INT16_MAX;
	volatile int32_t t80 = 10892;

    t80 = (x337-((x338==x339)>x340));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint64_t x341 = UINT64_MAX;
	int8_t x343 = INT8_MAX;
	uint16_t x344 = 362U;
	volatile uint64_t t81 = UINT64_MAX;

    t81 = (x341-((x342==x343)>x344));

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x345 = UINT8_MAX;
	int32_t x346 = INT32_MAX;
	int16_t x347 = 1;
	int16_t x348 = INT16_MIN;

    t82 = (x345-((x346==x347)>x348));

    if (t82 != 254) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x349 = INT32_MIN;
	int8_t x350 = -3;
	static int16_t x351 = -20;
	uint32_t x352 = 28715319U;
	volatile int32_t t83 = INT32_MIN;

    t83 = (x349-((x350==x351)>x352));

    if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x354 = 36;
	int8_t x355 = INT8_MIN;
	uint16_t x356 = UINT16_MAX;

    t84 = (x353-((x354==x355)>x356));

    if (t84 != 28) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x357 = -1;
	volatile uint8_t x358 = 1U;
	int64_t x359 = INT64_MIN;
	int64_t x360 = INT64_MAX;
	int32_t t85 = -1685985;

    t85 = (x357-((x358==x359)>x360));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x361 = -1LL;
	static int8_t x362 = -32;
	uint64_t x363 = 1581LLU;
	int16_t x364 = INT16_MAX;

    t86 = (x361-((x362==x363)>x364));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x365 = UINT64_MAX;
	volatile int16_t x366 = INT16_MAX;
	static int64_t x368 = INT64_MIN;

    t87 = (x365-((x366==x367)>x368));

    if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x369 = UINT64_MAX;
	int8_t x370 = -44;
	static int64_t x371 = INT64_MAX;
	static int16_t x372 = INT16_MAX;
	static volatile uint64_t t88 = UINT64_MAX;

    t88 = (x369-((x370==x371)>x372));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x373 = UINT8_MAX;
	uint64_t x374 = 29LLU;
	int32_t t89 = 122;

    t89 = (x373-((x374==x375)>x376));

    if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x378 = UINT8_MAX;
	static int32_t x380 = INT32_MIN;
	int32_t t90 = -433211032;

    t90 = (x377-((x378==x379)>x380));

    if (t90 != 65534) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x381 = 0;
	volatile int8_t x382 = 5;
	static uint32_t x383 = 206043U;
	int16_t x384 = INT16_MAX;

    t91 = (x381-((x382==x383)>x384));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x385 = UINT8_MAX;
	int64_t x386 = -4400LL;
	uint16_t x387 = 640U;
	int16_t x388 = INT16_MIN;

    t92 = (x385-((x386==x387)>x388));

    if (t92 != 254) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x389 = INT32_MAX;
	volatile int8_t x390 = INT8_MAX;
	int8_t x391 = -7;
	static int8_t x392 = -1;
	static int32_t t93 = -123;

    t93 = (x389-((x390==x391)>x392));

    if (t93 != 2147483646) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x393 = INT8_MIN;
	int32_t x395 = INT32_MAX;
	int32_t x396 = -9;
	volatile int32_t t94 = -15;

    t94 = (x393-((x394==x395)>x396));

    if (t94 != -129) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x397 = 15;
	uint8_t x398 = 106U;
	int16_t x399 = -1;
	int16_t x400 = INT16_MIN;
	int32_t t95 = 997;

    t95 = (x397-((x398==x399)>x400));

    if (t95 != 14) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x401 = 1U;
	volatile int16_t x402 = 94;
	uint16_t x403 = UINT16_MAX;
	volatile int32_t t96 = 1864459;

    t96 = (x401-((x402==x403)>x404));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x407 = 12877U;
	volatile int32_t t97 = 64767;

    t97 = (x405-((x406==x407)>x408));

    if (t97 != -185853354) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x409 = -1LL;
	uint16_t x411 = 3U;
	static uint64_t x412 = UINT64_MAX;
	volatile int64_t t98 = 13LL;

    t98 = (x409-((x410==x411)>x412));

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x414 = 44U;
	int8_t x416 = -1;
	static int64_t t99 = 1202LL;

    t99 = (x413-((x414==x415)>x416));

    if (t99 != 260LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x417 = 27U;
	int64_t x420 = INT64_MAX;
	static int32_t t100 = -3;

    t100 = (x417-((x418==x419)>x420));

    if (t100 != 27) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x426 = INT32_MIN;
	int64_t x427 = -1LL;
	static int8_t x428 = INT8_MIN;
	volatile int32_t t101 = 11;

    t101 = (x425-((x426==x427)>x428));

    if (t101 != 20) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x429 = 6U;
	int64_t x430 = -1LL;
	static volatile uint16_t x431 = 272U;
	int8_t x432 = -1;
	int32_t t102 = -116071650;

    t102 = (x429-((x430==x431)>x432));

    if (t102 != 5) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x433 = INT64_MAX;
	int16_t x434 = INT16_MIN;
	volatile uint16_t x435 = 1908U;

    t103 = (x433-((x434==x435)>x436));

    if (t103 != INT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x437 = INT16_MAX;
	int64_t x438 = 503028437LL;
	int16_t x439 = INT16_MIN;
	static int64_t x440 = -1LL;
	volatile int32_t t104 = -1871;

    t104 = (x437-((x438==x439)>x440));

    if (t104 != 32766) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x442 = UINT16_MAX;
	int16_t x443 = 519;
	static volatile int8_t x444 = 1;

    t105 = (x441-((x442==x443)>x444));

    if (t105 != 7657) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x445 = UINT64_MAX;
	int8_t x447 = -4;
	uint8_t x448 = UINT8_MAX;
	volatile uint64_t t106 = UINT64_MAX;

    t106 = (x445-((x446==x447)>x448));

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x449 = -1;
	static volatile uint16_t x450 = UINT16_MAX;
	int16_t x451 = -59;
	uint8_t x452 = 3U;
	static volatile int32_t t107 = 395952053;

    t107 = (x449-((x450==x451)>x452));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x454 = INT8_MAX;
	int32_t x455 = -6038212;
	static uint32_t x456 = UINT32_MAX;
	volatile int32_t t108 = 1484828;

    t108 = (x453-((x454==x455)>x456));

    if (t108 != -10) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x458 = 1;
	int64_t x459 = INT64_MIN;
	int16_t x460 = INT16_MAX;
	int32_t t109 = -113;

    t109 = (x457-((x458==x459)>x460));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x461 = -1LL;
	int8_t x462 = -1;
	int8_t x464 = -12;
	volatile int64_t t110 = -56128905600LL;

    t110 = (x461-((x462==x463)>x464));

    if (t110 != -2LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x465 = INT8_MIN;
	int64_t x466 = INT64_MIN;
	uint8_t x467 = 7U;
	volatile uint32_t x468 = UINT32_MAX;

    t111 = (x465-((x466==x467)>x468));

    if (t111 != -128) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x469 = INT16_MIN;
	int8_t x470 = INT8_MAX;
	int8_t x471 = INT8_MIN;
	uint64_t x472 = 26702566695LLU;
	static volatile int32_t t112 = -711802887;

    t112 = (x469-((x470==x471)>x472));

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x473 = 240U;
	static int8_t x474 = INT8_MIN;
	int64_t x475 = 4138937043660203LL;
	volatile uint8_t x476 = 5U;
	static int32_t t113 = -797;

    t113 = (x473-((x474==x475)>x476));

    if (t113 != 240) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x477 = 6301U;
	static int8_t x478 = INT8_MIN;
	uint32_t x479 = 21173U;
	volatile int8_t x480 = -1;
	volatile uint32_t t114 = 4U;

    t114 = (x477-((x478==x479)>x480));

    if (t114 != 6300U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x481 = INT64_MIN;
	uint32_t x483 = 125U;
	uint64_t x484 = 19853598009036908LLU;
	int64_t t115 = INT64_MIN;

    t115 = (x481-((x482==x483)>x484));

    if (t115 != INT64_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x485 = -1;
	static int32_t x486 = INT32_MIN;
	volatile int32_t x488 = 666;

    t116 = (x485-((x486==x487)>x488));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x489 = UINT16_MAX;
	static int16_t x490 = -1;
	int16_t x491 = INT16_MAX;
	int32_t t117 = -17529;

    t117 = (x489-((x490==x491)>x492));

    if (t117 != 65535) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x493 = -1;
	static uint32_t x495 = 223U;
	uint16_t x496 = 1U;

    t118 = (x493-((x494==x495)>x496));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x497 = INT64_MIN;
	static int8_t x498 = -4;
	int64_t x499 = 7110863564LL;
	int64_t t119 = INT64_MIN;

    t119 = (x497-((x498==x499)>x500));

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x501 = INT8_MAX;
	int64_t x502 = INT64_MIN;
	uint8_t x504 = 7U;
	volatile int32_t t120 = 1121;

    t120 = (x501-((x502==x503)>x504));

    if (t120 != 127) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x506 = INT8_MIN;
	volatile int64_t x507 = INT64_MIN;

    t121 = (x505-((x506==x507)>x508));

    if (t121 != 4294967294U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x509 = -1LL;
	volatile int32_t x510 = INT32_MAX;
	volatile uint16_t x511 = UINT16_MAX;
	int64_t t122 = -5738321668LL;

    t122 = (x509-((x510==x511)>x512));

    if (t122 != -2LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x514 = INT8_MAX;
	int8_t x515 = 26;
	int16_t x516 = -1;
	uint64_t t123 = 705310988077LLU;

    t123 = (x513-((x514==x515)>x516));

    if (t123 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x517 = 29U;
	uint64_t x518 = 3041096164101146LLU;
	int32_t x520 = INT32_MAX;
	uint32_t t124 = 4U;

    t124 = (x517-((x518==x519)>x520));

    if (t124 != 29U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x521 = UINT32_MAX;
	static int32_t x522 = INT32_MIN;
	int8_t x523 = INT8_MIN;
	int8_t x524 = INT8_MAX;
	volatile uint32_t t125 = UINT32_MAX;

    t125 = (x521-((x522==x523)>x524));

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x525 = 9U;
	volatile int8_t x526 = INT8_MAX;
	int64_t x527 = INT64_MIN;
	int32_t x528 = 22;
	int32_t t126 = -500433493;

    t126 = (x525-((x526==x527)>x528));

    if (t126 != 9) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x529 = 23714662;
	volatile uint16_t x530 = 4042U;
	int64_t x531 = INT64_MAX;
	int32_t x532 = -1156;
	static int32_t t127 = 45;

    t127 = (x529-((x530==x531)>x532));

    if (t127 != 23714661) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x533 = 42195U;
	volatile int64_t x534 = -1LL;
	static int16_t x535 = -1;
	int32_t x536 = -1;

    t128 = (x533-((x534==x535)>x536));

    if (t128 != 42194U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x537 = UINT32_MAX;
	int8_t x539 = INT8_MIN;
	static uint8_t x540 = UINT8_MAX;
	volatile uint32_t t129 = UINT32_MAX;

    t129 = (x537-((x538==x539)>x540));

    if (t129 != UINT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x541 = 9U;
	int8_t x542 = -42;
	int16_t x543 = 12;
	volatile uint8_t x544 = UINT8_MAX;
	int32_t t130 = 4;

    t130 = (x541-((x542==x543)>x544));

    if (t130 != 9) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x545 = INT16_MIN;
	static uint64_t x546 = 11LLU;
	int8_t x547 = INT8_MIN;
	volatile int64_t x548 = INT64_MIN;

    t131 = (x545-((x546==x547)>x548));

    if (t131 != -32769) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x549 = 429826LLU;
	int64_t x551 = INT64_MIN;
	static uint16_t x552 = 25033U;
	uint64_t t132 = 5652017193LLU;

    t132 = (x549-((x550==x551)>x552));

    if (t132 != 429826LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x553 = INT16_MIN;
	int32_t x554 = INT32_MAX;
	int16_t x555 = INT16_MIN;
	static uint8_t x556 = 49U;
	int32_t t133 = 737254;

    t133 = (x553-((x554==x555)>x556));

    if (t133 != -32768) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x557 = UINT32_MAX;
	uint32_t x558 = UINT32_MAX;
	int16_t x559 = -1;
	int16_t x560 = -13710;

    t134 = (x557-((x558==x559)>x560));

    if (t134 != 4294967294U) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x561 = INT16_MIN;
	int16_t x563 = INT16_MIN;
	int8_t x564 = INT8_MIN;
	int32_t t135 = -6;

    t135 = (x561-((x562==x563)>x564));

    if (t135 != -32769) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x565 = UINT64_MAX;
	volatile uint16_t x568 = 24913U;
	uint64_t t136 = UINT64_MAX;

    t136 = (x565-((x566==x567)>x568));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x569 = INT8_MIN;
	uint16_t x570 = 8669U;
	static volatile uint8_t x571 = UINT8_MAX;
	int32_t t137 = 0;

    t137 = (x569-((x570==x571)>x572));

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x575 = INT8_MIN;
	int32_t x576 = INT32_MIN;
	int32_t t138 = 988559919;

    t138 = (x573-((x574==x575)>x576));

    if (t138 != -2) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x577 = -1;
	static volatile int8_t x578 = 1;
	volatile uint64_t x579 = UINT64_MAX;
	volatile int8_t x580 = INT8_MIN;
	static volatile int32_t t139 = 65524;

    t139 = (x577-((x578==x579)>x580));

    if (t139 != -2) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x581 = -1;
	int32_t x582 = 717360;
	static uint64_t x583 = 107740728091LLU;
	int64_t x584 = -544LL;
	int32_t t140 = -516;

    t140 = (x581-((x582==x583)>x584));

    if (t140 != -2) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x585 = INT16_MIN;
	int8_t x586 = INT8_MIN;
	uint8_t x588 = 1U;
	int32_t t141 = -12140260;

    t141 = (x585-((x586==x587)>x588));

    if (t141 != -32768) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x589 = 13LLU;
	static uint16_t x590 = 39U;
	int64_t x591 = INT64_MAX;
	uint64_t x592 = 11LLU;
	volatile uint64_t t142 = 3784940737111LLU;

    t142 = (x589-((x590==x591)>x592));

    if (t142 != 13LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x593 = INT16_MIN;
	int64_t x595 = -1LL;
	int64_t x596 = INT64_MIN;
	volatile int32_t t143 = 2877133;

    t143 = (x593-((x594==x595)>x596));

    if (t143 != -32769) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x597 = 4552;
	static volatile int8_t x598 = -1;
	int8_t x599 = -59;
	int64_t x600 = -104LL;
	volatile int32_t t144 = -3382;

    t144 = (x597-((x598==x599)>x600));

    if (t144 != 4551) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x601 = INT8_MAX;
	volatile int16_t x602 = -1;
	volatile int8_t x603 = 6;
	volatile uint8_t x604 = 28U;
	static volatile int32_t t145 = -12518;

    t145 = (x601-((x602==x603)>x604));

    if (t145 != 127) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x605 = 123U;
	int64_t x606 = -1LL;
	int8_t x608 = -1;
	int32_t t146 = 1;

    t146 = (x605-((x606==x607)>x608));

    if (t146 != 122) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x609 = -62;
	static uint8_t x610 = 5U;
	uint8_t x612 = 0U;

    t147 = (x609-((x610==x611)>x612));

    if (t147 != -62) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x614 = -924697001787668LL;
	int8_t x615 = INT8_MIN;
	volatile int32_t t148 = 87876537;

    t148 = (x613-((x614==x615)>x616));

    if (t148 != -29) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x617 = -1LL;
	int16_t x618 = INT16_MIN;
	static uint32_t x620 = 326928931U;

    t149 = (x617-((x618==x619)>x620));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x621 = 571212LLU;
	int16_t x622 = -1;
	int64_t x623 = -30840803126LL;
	uint64_t t150 = 31940038939639LLU;

    t150 = (x621-((x622==x623)>x624));

    if (t150 != 571211LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x625 = -15509435;
	volatile int64_t x626 = -4604728891LL;
	int8_t x627 = INT8_MIN;
	int8_t x628 = 31;
	volatile int32_t t151 = -61439020;

    t151 = (x625-((x626==x627)>x628));

    if (t151 != -15509435) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x629 = -1;
	static int32_t x631 = INT32_MIN;
	static int16_t x632 = -162;
	int32_t t152 = -5;

    t152 = (x629-((x630==x631)>x632));

    if (t152 != -2) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x633 = -1;
	int32_t x634 = 2191068;
	uint64_t x635 = UINT64_MAX;
	int32_t t153 = -8852;

    t153 = (x633-((x634==x635)>x636));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x638 = -260738735935058670LL;
	volatile int16_t x639 = 961;
	static int8_t x640 = INT8_MIN;
	static int32_t t154 = -59;

    t154 = (x637-((x638==x639)>x640));

    if (t154 != -11) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x641 = 4714U;
	int32_t x644 = 851259;
	int32_t t155 = -2330;

    t155 = (x641-((x642==x643)>x644));

    if (t155 != 4714) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x645 = INT8_MIN;
	uint32_t x646 = 6038871U;
	uint32_t x647 = 418U;
	uint16_t x648 = UINT16_MAX;
	volatile int32_t t156 = -79;

    t156 = (x645-((x646==x647)>x648));

    if (t156 != -128) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x650 = -1;
	int64_t x651 = 50934813010LL;
	int32_t t157 = 521822;

    t157 = (x649-((x650==x651)>x652));

    if (t157 != 2883) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x653 = INT64_MIN;
	volatile int64_t x654 = INT64_MIN;
	uint64_t x656 = 20734LLU;

    t158 = (x653-((x654==x655)>x656));

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x657 = 7;
	static volatile int64_t x658 = INT64_MAX;
	int32_t x659 = INT32_MIN;
	volatile int64_t x660 = 1475072142651932927LL;
	volatile int32_t t159 = -255745566;

    t159 = (x657-((x658==x659)>x660));

    if (t159 != 7) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x661 = INT16_MIN;
	volatile uint64_t x662 = 4132953502683918612LLU;
	int16_t x663 = INT16_MIN;
	static uint64_t x664 = UINT64_MAX;
	static volatile int32_t t160 = -105761986;

    t160 = (x661-((x662==x663)>x664));

    if (t160 != -32768) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x665 = -1568221772315833979LL;
	int16_t x666 = INT16_MAX;
	int8_t x667 = INT8_MIN;
	int8_t x668 = INT8_MAX;
	int64_t t161 = -793LL;

    t161 = (x665-((x666==x667)>x668));

    if (t161 != -1568221772315833979LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x669 = INT8_MIN;
	static int32_t x671 = -25356;
	uint16_t x672 = 4U;

    t162 = (x669-((x670==x671)>x672));

    if (t162 != -128) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x673 = 0;
	uint8_t x674 = UINT8_MAX;
	int8_t x675 = INT8_MIN;
	static volatile int32_t x676 = INT32_MAX;
	int32_t t163 = 0;

    t163 = (x673-((x674==x675)>x676));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x677 = INT8_MIN;
	uint64_t x679 = 2015226LLU;
	int32_t t164 = 631308520;

    t164 = (x677-((x678==x679)>x680));

    if (t164 != -128) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x681 = 267541446142047LLU;
	int16_t x682 = -1;
	int32_t x684 = INT32_MAX;
	static uint64_t t165 = 1256489LLU;

    t165 = (x681-((x682==x683)>x684));

    if (t165 != 267541446142047LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x686 = INT16_MAX;

    t166 = (x685-((x686==x687)>x688));

    if (t166 != -129) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x689 = 260855653716LLU;
	volatile int64_t x690 = -1LL;
	int8_t x692 = -1;
	static uint64_t t167 = 1382175044626LLU;

    t167 = (x689-((x690==x691)>x692));

    if (t167 != 260855653715LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x694 = 15U;
	uint32_t x695 = 41U;
	static int8_t x696 = 1;
	int32_t t168 = 32;

    t168 = (x693-((x694==x695)>x696));

    if (t168 != 958) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x697 = 51923782U;
	volatile uint64_t x699 = 4451143552705890305LLU;
	volatile uint32_t t169 = 355250189U;

    t169 = (x697-((x698==x699)>x700));

    if (t169 != 51923781U) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x702 = UINT8_MAX;
	uint8_t x703 = 0U;
	volatile int32_t t170 = 502;

    t170 = (x701-((x702==x703)>x704));

    if (t170 != 2147483646) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x705 = INT32_MAX;
	uint64_t x706 = UINT64_MAX;
	uint8_t x707 = UINT8_MAX;
	volatile uint8_t x708 = 14U;

    t171 = (x705-((x706==x707)>x708));

    if (t171 != INT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x709 = -882540584;
	int32_t x710 = 78;
	volatile int16_t x712 = -1;
	volatile int32_t t172 = -251;

    t172 = (x709-((x710==x711)>x712));

    if (t172 != -882540585) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint32_t x713 = UINT32_MAX;
	int8_t x714 = -1;
	int32_t x715 = -1;
	int8_t x716 = INT8_MAX;
	uint32_t t173 = UINT32_MAX;

    t173 = (x713-((x714==x715)>x716));

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint64_t x717 = 4229708090514LLU;
	static uint32_t x718 = 181220U;
	int64_t x719 = -1LL;

    t174 = (x717-((x718==x719)>x720));

    if (t174 != 4229708090514LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x721 = INT64_MAX;
	uint64_t x722 = UINT64_MAX;
	volatile int8_t x723 = -1;
	volatile int8_t x724 = INT8_MIN;
	int64_t t175 = 2020408519900807701LL;

    t175 = (x721-((x722==x723)>x724));

    if (t175 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x725 = 10946253405046934LL;
	uint64_t x726 = 3842LLU;
	uint8_t x727 = 4U;
	static uint16_t x728 = UINT16_MAX;
	static int64_t t176 = -2511LL;

    t176 = (x725-((x726==x727)>x728));

    if (t176 != 10946253405046934LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x729 = INT32_MAX;
	int16_t x730 = -8;
	int32_t x732 = INT32_MIN;

    t177 = (x729-((x730==x731)>x732));

    if (t177 != 2147483646) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x733 = 3726039419267851LLU;
	static int64_t x735 = -2671004976236291LL;
	uint32_t x736 = 111U;
	static uint64_t t178 = 0LLU;

    t178 = (x733-((x734==x735)>x736));

    if (t178 != 3726039419267851LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x737 = -2611;
	int16_t x738 = -1;
	volatile int64_t x739 = -15926647574511536LL;
	int64_t x740 = -213717382LL;

    t179 = (x737-((x738==x739)>x740));

    if (t179 != -2612) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x741 = INT16_MAX;
	uint32_t x742 = UINT32_MAX;
	int8_t x743 = -4;
	int32_t x744 = 1;
	volatile int32_t t180 = 19467;

    t180 = (x741-((x742==x743)>x744));

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x749 = UINT16_MAX;
	static int32_t x750 = -1;
	int32_t x751 = INT32_MAX;
	int8_t x752 = INT8_MIN;
	volatile int32_t t181 = -122;

    t181 = (x749-((x750==x751)>x752));

    if (t181 != 65534) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x753 = 27910298193808LLU;
	int64_t x754 = -116LL;
	volatile int32_t x755 = -287916;
	static int16_t x756 = -1254;
	volatile uint64_t t182 = 38569309935806LLU;

    t182 = (x753-((x754==x755)>x756));

    if (t182 != 27910298193807LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x757 = 1;
	int8_t x758 = 0;
	int16_t x759 = INT16_MIN;
	int32_t x760 = INT32_MIN;
	static int32_t t183 = 37984776;

    t183 = (x757-((x758==x759)>x760));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x761 = 145U;
	static uint64_t x762 = 292194286269897733LLU;
	int8_t x764 = -19;
	volatile uint32_t t184 = 532U;

    t184 = (x761-((x762==x763)>x764));

    if (t184 != 144U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x765 = 0U;
	uint16_t x766 = 2U;
	int64_t x767 = 1482964926199LL;
	uint32_t t185 = 1U;

    t185 = (x765-((x766==x767)>x768));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x769 = -86;
	uint64_t x770 = UINT64_MAX;
	int32_t x771 = -1;
	volatile int8_t x772 = INT8_MIN;
	int32_t t186 = 230;

    t186 = (x769-((x770==x771)>x772));

    if (t186 != -87) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x773 = INT8_MAX;
	int32_t x775 = 377;
	int64_t x776 = -1LL;
	static volatile int32_t t187 = 3;

    t187 = (x773-((x774==x775)>x776));

    if (t187 != 126) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x777 = INT64_MAX;
	uint8_t x778 = 0U;
	int16_t x779 = INT16_MIN;
	uint16_t x780 = UINT16_MAX;
	volatile int64_t t188 = INT64_MAX;

    t188 = (x777-((x778==x779)>x780));

    if (t188 != INT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x781 = 1428591338570LLU;
	int64_t x782 = INT64_MIN;
	int16_t x784 = -59;

    t189 = (x781-((x782==x783)>x784));

    if (t189 != 1428591338569LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x785 = -1LL;
	static int64_t t190 = 145456252LL;

    t190 = (x785-((x786==x787)>x788));

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x789 = -1;
	int64_t x790 = -352LL;
	static int32_t x792 = -1;
	int32_t t191 = -212257;

    t191 = (x789-((x790==x791)>x792));

    if (t191 != -2) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x793 = 38504U;
	uint16_t x794 = UINT16_MAX;
	static volatile int8_t x795 = 39;
	int32_t x796 = INT32_MIN;
	uint32_t t192 = 63U;

    t192 = (x793-((x794==x795)>x796));

    if (t192 != 38503U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x797 = -2;
	volatile uint32_t x798 = UINT32_MAX;
	int32_t x800 = INT32_MIN;
	volatile int32_t t193 = -109614922;

    t193 = (x797-((x798==x799)>x800));

    if (t193 != -3) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x802 = -1;
	volatile int64_t t194 = 436LL;

    t194 = (x801-((x802==x803)>x804));

    if (t194 != 112771393999672LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x805 = 4053U;
	uint16_t x806 = 511U;
	volatile int64_t x807 = 299320075441LL;
	uint16_t x808 = UINT16_MAX;
	uint32_t t195 = 11U;

    t195 = (x805-((x806==x807)>x808));

    if (t195 != 4053U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x809 = INT32_MAX;
	int64_t x810 = INT64_MAX;
	int64_t x812 = -24792995125395480LL;

    t196 = (x809-((x810==x811)>x812));

    if (t196 != 2147483646) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x814 = INT8_MAX;
	uint8_t x815 = 37U;

    t197 = (x813-((x814==x815)>x816));

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x817 = INT8_MAX;
	static int8_t x818 = -1;
	int32_t x819 = INT32_MIN;
	int32_t x820 = INT32_MAX;
	volatile int32_t t198 = 0;

    t198 = (x817-((x818==x819)>x820));

    if (t198 != 127) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x822 = INT8_MIN;
	int64_t x823 = INT64_MIN;
	int64_t x824 = INT64_MAX;
	int32_t t199 = -7487;

    t199 = (x821-((x822==x823)>x824));

    if (t199 != -1) { NG(); } else { ; }
	
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

