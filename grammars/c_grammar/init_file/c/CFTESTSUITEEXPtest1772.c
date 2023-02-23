
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

static volatile int8_t x1 = -1;
int64_t x2 = -1LL;
uint8_t x3 = 2U;
int32_t x4 = -1;
uint64_t x17 = 7494320LLU;
uint64_t x18 = 6969248800LLU;
volatile int64_t x19 = INT64_MAX;
volatile int32_t t4 = -329702;
uint8_t x21 = 0U;
static int32_t t5 = -499592031;
volatile int8_t x27 = -1;
volatile uint16_t x39 = UINT16_MAX;
int32_t x50 = INT32_MAX;
int64_t x54 = INT64_MIN;
volatile int32_t t13 = 952;
int16_t x57 = -1;
int8_t x63 = INT8_MIN;
int16_t x64 = -1;
int32_t x67 = -1;
int16_t x68 = -1777;
volatile int8_t x70 = INT8_MIN;
static volatile uint16_t x72 = 3U;
uint8_t x74 = 27U;
int64_t x80 = INT64_MIN;
int16_t x87 = INT16_MIN;
uint32_t x95 = UINT32_MAX;
int64_t x97 = -838208375714388LL;
static uint8_t x101 = UINT8_MAX;
int64_t x105 = INT64_MAX;
volatile int32_t t26 = 55;
volatile uint16_t x110 = 31U;
int32_t x112 = -251;
int64_t x113 = INT64_MIN;
static int8_t x117 = INT8_MAX;
volatile int8_t x129 = INT8_MIN;
int32_t x153 = INT32_MIN;
static uint16_t x155 = UINT16_MAX;
int16_t x158 = INT16_MIN;
static int8_t x160 = 14;
uint8_t x167 = 2U;
int16_t x171 = -1;
int8_t x178 = -2;
static int32_t x179 = INT32_MIN;
int64_t x182 = -5629655LL;
int64_t x188 = -1LL;
static volatile int64_t x208 = -13LL;
volatile int64_t x215 = INT64_MIN;
uint8_t x216 = 23U;
int32_t x218 = -1;
int16_t x231 = 2272;
int16_t x232 = 23;
volatile uint64_t x233 = 265823582631925041LLU;
int8_t x237 = INT8_MIN;
static volatile int32_t t56 = -144;
volatile uint16_t x241 = 24U;
int8_t x244 = INT8_MIN;
int64_t x247 = INT64_MAX;
static int8_t x256 = 29;
int32_t t61 = -39;
int64_t x268 = INT64_MAX;
int32_t x275 = -68;
int32_t x277 = -756276364;
static uint16_t x280 = 16U;
volatile int32_t x283 = INT32_MIN;
int8_t x287 = INT8_MIN;
static int8_t x295 = INT8_MAX;
int16_t x296 = INT16_MIN;
volatile int16_t x313 = 60;
uint16_t x315 = 3863U;
int64_t x318 = 1367581760014110673LL;
int64_t x320 = -113024580759349196LL;
int32_t t73 = 117844120;
int32_t x323 = INT32_MAX;
static uint8_t x325 = UINT8_MAX;
static volatile int64_t x329 = INT64_MIN;
int8_t x330 = 10;
volatile int32_t t77 = 354338;
int32_t x345 = 1;
int16_t x348 = INT16_MIN;
int32_t x350 = INT32_MIN;
static int64_t x356 = INT64_MAX;
int16_t x359 = -1;
int16_t x369 = INT16_MIN;
int64_t x374 = -46537949325104143LL;
static int32_t x381 = -1;
int8_t x386 = INT8_MIN;
volatile int32_t t89 = -8241;
static volatile int8_t x390 = INT8_MIN;
int32_t t90 = -981933245;
static int32_t t91 = -457;
static volatile uint32_t x401 = UINT32_MAX;
int16_t x403 = -1;
int64_t x405 = INT64_MAX;
static volatile uint64_t x406 = 107983671468451LLU;
static volatile uint32_t x407 = 982U;
uint8_t x411 = 85U;
uint32_t x413 = 262U;
int16_t x414 = INT16_MIN;
uint32_t x415 = UINT32_MAX;
static int64_t x418 = 6799309981LL;
int32_t t97 = 2421;
uint8_t x421 = 8U;
volatile int64_t x427 = INT64_MIN;
int64_t x432 = -1LL;
static int64_t x433 = INT64_MAX;
volatile int32_t t101 = -2;
int16_t x442 = INT16_MIN;
static int16_t x453 = INT16_MIN;
volatile int8_t x454 = 0;
int8_t x462 = INT8_MIN;
volatile int8_t x467 = INT8_MIN;
int64_t x478 = INT64_MIN;
volatile int32_t x481 = INT32_MIN;
int8_t x483 = -1;
int8_t x499 = -2;
volatile uint16_t x504 = 12809U;
static int8_t x505 = -1;
int32_t x508 = -1;
int64_t x510 = INT64_MAX;
int32_t x514 = -104;
volatile uint64_t x528 = 391535928LLU;
int32_t t122 = -887138161;
static int16_t x533 = INT16_MIN;
int16_t x534 = -418;
int64_t x540 = INT64_MAX;
static uint64_t x542 = 229535451845277177LLU;
volatile uint32_t x558 = 750U;
static int8_t x562 = 4;
int16_t x571 = INT16_MIN;
uint16_t x578 = 37U;
int64_t x585 = INT64_MAX;
uint16_t x591 = UINT16_MAX;
int8_t x593 = INT8_MIN;
int32_t x594 = -42939388;
int16_t x597 = 16383;
int8_t x598 = 1;
int32_t x601 = -1;
int32_t x608 = -17076441;
volatile int32_t t141 = 181;
static uint8_t x615 = UINT8_MAX;
volatile uint8_t x623 = UINT8_MAX;
uint32_t x626 = UINT32_MAX;
uint16_t x629 = 998U;
uint8_t x630 = 1U;
int16_t x633 = 14520;
int32_t x636 = -1;
static uint8_t x638 = 40U;
static int32_t x645 = -1;
uint8_t x650 = 2U;
int32_t x652 = -1;
static int8_t x655 = INT8_MIN;
volatile uint8_t x664 = 5U;
uint16_t x665 = 32U;
static int64_t x670 = -28LL;
int16_t x678 = 382;
static int8_t x679 = -1;
int16_t x680 = INT16_MIN;
static int64_t x682 = -1LL;
uint16_t x683 = 227U;
int8_t x692 = -1;
static int32_t t162 = 19221;
static int32_t x693 = INT32_MIN;
static int64_t x695 = INT64_MAX;
uint32_t x706 = UINT32_MAX;
uint64_t x709 = 1LLU;
uint16_t x710 = 6U;
int64_t x711 = -69956LL;
int32_t t167 = -6076;
uint16_t x719 = 1U;
uint64_t x732 = 1441198253251824LLU;
int32_t x734 = INT32_MIN;
int8_t x738 = INT8_MIN;
static int16_t x746 = INT16_MAX;
volatile int64_t x749 = INT64_MIN;
int64_t x751 = INT64_MIN;
int8_t x760 = 47;
int32_t x763 = INT32_MIN;
int32_t x764 = -1;
int32_t t179 = 488977190;
volatile int32_t t180 = -113;
volatile int64_t x769 = INT64_MIN;
int32_t x771 = INT32_MIN;
int32_t t182 = -6;
int16_t x779 = INT16_MIN;
int32_t t183 = 266125200;
int16_t x789 = INT16_MAX;
uint8_t x798 = 1U;
uint64_t x799 = UINT64_MAX;
int8_t x802 = 3;
int8_t x803 = 1;
int32_t t190 = 630540979;
int8_t x812 = INT8_MIN;
static volatile int8_t x820 = -1;
static int32_t x832 = 8201;
int64_t x834 = INT64_MAX;
volatile uint64_t x835 = 4184676822LLU;
static volatile int32_t t196 = -7;
static volatile int8_t x850 = INT8_MIN;
static volatile int64_t x852 = -7552276607986331LL;
int64_t x855 = 368767274725LL;


void f0(void) {
    	volatile int32_t t0 = -27;

    t0 = (x1==((x2<=x3)+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = INT64_MAX;
	uint8_t x6 = 54U;
	int16_t x7 = INT16_MIN;
	int16_t x8 = -8006;
	static volatile int32_t t1 = 3;

    t1 = (x5==((x6<=x7)+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -52;
	static int32_t x10 = INT32_MAX;
	static int32_t x11 = INT32_MIN;
	int16_t x12 = 29;
	volatile int32_t t2 = -101457522;

    t2 = (x9==((x10<=x11)+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -463229;
	static int32_t x14 = INT32_MAX;
	static int64_t x15 = -1LL;
	int64_t x16 = INT64_MIN;
	static int32_t t3 = -560426;

    t3 = (x13==((x14<=x15)+x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x20 = INT32_MIN;

    t4 = (x17==((x18<=x19)+x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MAX;
	int8_t x23 = INT8_MIN;
	int8_t x24 = INT8_MAX;

    t5 = (x21==((x22<=x23)+x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	int32_t x26 = -121;
	int64_t x28 = -1LL;
	volatile int32_t t6 = -54220582;

    t6 = (x25==((x26<=x27)+x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -69649638;
	static uint16_t x30 = 4640U;
	int8_t x31 = INT8_MAX;
	int32_t x32 = -2855;
	volatile int32_t t7 = 291006;

    t7 = (x29==((x30<=x31)+x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -611;
	volatile int32_t x34 = -36792;
	int16_t x35 = INT16_MIN;
	static volatile int32_t x36 = 105673;
	int32_t t8 = 2774;

    t8 = (x33==((x34<=x35)+x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 990LL;
	volatile int64_t x38 = -1LL;
	int64_t x40 = INT64_MIN;
	volatile int32_t t9 = -512032;

    t9 = (x37==((x38<=x39)+x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	static volatile int64_t x42 = -1LL;
	volatile uint32_t x43 = 3997503U;
	int64_t x44 = 38445797660793231LL;
	static int32_t t10 = 52772099;

    t10 = (x41==((x42<=x43)+x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = 220021;
	int64_t x46 = -1049045478209LL;
	int32_t x47 = INT32_MAX;
	int32_t x48 = 18796191;
	static int32_t t11 = 133;

    t11 = (x45==((x46<=x47)+x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 0;
	int16_t x51 = INT16_MAX;
	int16_t x52 = INT16_MAX;
	volatile int32_t t12 = 1;

    t12 = (x49==((x50<=x51)+x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = 5;
	static int64_t x55 = INT64_MAX;
	uint16_t x56 = 9664U;

    t13 = (x53==((x54<=x55)+x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = -3;
	uint8_t x59 = UINT8_MAX;
	uint64_t x60 = 11769655518LLU;
	int32_t t14 = -1;

    t14 = (x57==((x58<=x59)+x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = UINT16_MAX;
	static volatile int32_t x62 = -960842;
	int32_t t15 = 35458;

    t15 = (x61==((x62<=x63)+x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 84U;
	int64_t x66 = 7902348LL;
	volatile int32_t t16 = 335725945;

    t16 = (x65==((x66<=x67)+x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	static volatile int8_t x71 = INT8_MIN;
	int32_t t17 = 217760182;

    t17 = (x69==((x70<=x71)+x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = INT64_MIN;
	volatile uint32_t x75 = 509U;
	uint64_t x76 = UINT64_MAX;
	static volatile int32_t t18 = -2;

    t18 = (x73==((x74<=x75)+x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -1;
	static int32_t x78 = INT32_MIN;
	static int64_t x79 = INT64_MIN;
	static int32_t t19 = 9;

    t19 = (x77==((x78<=x79)+x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	volatile int16_t x82 = -1;
	int64_t x83 = INT64_MIN;
	uint32_t x84 = 93U;
	volatile int32_t t20 = 12496;

    t20 = (x81==((x82<=x83)+x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = -1;
	int64_t x86 = INT64_MAX;
	static uint32_t x88 = 17U;
	static volatile int32_t t21 = -1701;

    t21 = (x85==((x86<=x87)+x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x89 = 541U;
	volatile int16_t x90 = -1;
	volatile int32_t x91 = INT32_MIN;
	uint32_t x92 = 1822615U;
	int32_t t22 = -15967;

    t22 = (x89==((x90<=x91)+x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	volatile int32_t x94 = -22;
	uint64_t x96 = 25185284113LLU;
	static volatile int32_t t23 = 0;

    t23 = (x93==((x94<=x95)+x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = INT16_MAX;
	int64_t x99 = INT64_MAX;
	int64_t x100 = -1LL;
	volatile int32_t t24 = 16616518;

    t24 = (x97==((x98<=x99)+x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x102 = 117734181393283357LL;
	int16_t x103 = -1;
	int32_t x104 = -5;
	volatile int32_t t25 = -84671;

    t25 = (x101==((x102<=x103)+x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint16_t x106 = 6U;
	int32_t x107 = INT32_MAX;
	int8_t x108 = INT8_MIN;

    t26 = (x105==((x106<=x107)+x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 14;
	int32_t x111 = INT32_MIN;
	volatile int32_t t27 = 2;

    t27 = (x109==((x110<=x111)+x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint64_t x114 = UINT64_MAX;
	uint64_t x115 = 7001LLU;
	int16_t x116 = -97;
	volatile int32_t t28 = 208443;

    t28 = (x113==((x114<=x115)+x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x118 = INT16_MIN;
	uint8_t x119 = 0U;
	uint8_t x120 = 1U;
	volatile int32_t t29 = -248441;

    t29 = (x117==((x118<=x119)+x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	int16_t x122 = -15;
	int8_t x123 = INT8_MIN;
	static int32_t x124 = INT32_MIN;
	volatile int32_t t30 = 1;

    t30 = (x121==((x122<=x123)+x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -23;
	uint64_t x126 = 51381073602LLU;
	int64_t x127 = -54231082571111LL;
	static int64_t x128 = 271735823179538577LL;
	int32_t t31 = -610332113;

    t31 = (x125==((x126<=x127)+x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x130 = 282677405455LL;
	int8_t x131 = INT8_MAX;
	volatile int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = -307558;

    t32 = (x129==((x130<=x131)+x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -3;
	static volatile int32_t x134 = 4188908;
	static int8_t x135 = INT8_MAX;
	uint64_t x136 = UINT64_MAX;
	int32_t t33 = 6310;

    t33 = (x133==((x134<=x135)+x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 19089LLU;
	int32_t x138 = INT32_MIN;
	volatile int32_t x139 = INT32_MIN;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = 1;

    t34 = (x137==((x138<=x139)+x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 481U;
	int16_t x142 = 1;
	volatile int16_t x143 = INT16_MAX;
	volatile int64_t x144 = -1LL;
	static int32_t t35 = 36415;

    t35 = (x141==((x142<=x143)+x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x145 = UINT32_MAX;
	int64_t x146 = INT64_MIN;
	int16_t x147 = INT16_MAX;
	volatile int8_t x148 = 0;
	int32_t t36 = 2;

    t36 = (x145==((x146<=x147)+x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	int16_t x150 = -1;
	volatile uint16_t x151 = 1U;
	int32_t x152 = -1;
	int32_t t37 = -4586507;

    t37 = (x149==((x150<=x151)+x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = UINT64_MAX;
	uint32_t x156 = UINT32_MAX;
	int32_t t38 = 207;

    t38 = (x153==((x154<=x155)+x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = 15406LL;
	uint16_t x159 = UINT16_MAX;
	int32_t t39 = -69521455;

    t39 = (x157==((x158<=x159)+x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = -1;
	uint32_t x166 = 618590U;
	static uint64_t x168 = 47597467053689LLU;
	int32_t t40 = 417499;

    t40 = (x165==((x166<=x167)+x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x169 = -1LL;
	int8_t x170 = 0;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t41 = 328758893;

    t41 = (x169==((x170<=x171)+x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x173 = INT16_MAX;
	int64_t x174 = INT64_MAX;
	uint64_t x175 = 8LLU;
	static uint8_t x176 = 15U;
	volatile int32_t t42 = -671758173;

    t42 = (x173==((x174<=x175)+x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = INT32_MIN;
	uint16_t x180 = 0U;
	int32_t t43 = -6001868;

    t43 = (x177==((x178<=x179)+x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x181 = INT32_MAX;
	int8_t x183 = 19;
	int8_t x184 = -1;
	static int32_t t44 = -49730;

    t44 = (x181==((x182<=x183)+x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x185 = INT32_MIN;
	int32_t x186 = INT32_MIN;
	int64_t x187 = INT64_MIN;
	volatile int32_t t45 = 311902;

    t45 = (x185==((x186<=x187)+x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x189 = 605LL;
	int32_t x190 = -1;
	int8_t x191 = 0;
	volatile int16_t x192 = -1;
	static volatile int32_t t46 = 31548649;

    t46 = (x189==((x190<=x191)+x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x193 = 204U;
	uint16_t x194 = 0U;
	int64_t x195 = INT64_MIN;
	static int64_t x196 = 241749359200380518LL;
	volatile int32_t t47 = -17024;

    t47 = (x193==((x194<=x195)+x196));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x201 = 275U;
	int8_t x202 = -2;
	int16_t x203 = INT16_MAX;
	uint64_t x204 = 31774054LLU;
	int32_t t48 = -427;

    t48 = (x201==((x202<=x203)+x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = INT32_MAX;
	static int8_t x206 = INT8_MIN;
	int64_t x207 = -1LL;
	volatile int32_t t49 = -1557;

    t49 = (x205==((x206<=x207)+x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x209 = INT64_MIN;
	uint16_t x210 = 58U;
	int32_t x211 = INT32_MIN;
	int8_t x212 = -18;
	int32_t t50 = -265483;

    t50 = (x209==((x210<=x211)+x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x213 = INT32_MIN;
	volatile int16_t x214 = INT16_MIN;
	volatile int32_t t51 = -27634705;

    t51 = (x213==((x214<=x215)+x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x217 = 35333406U;
	int8_t x219 = INT8_MIN;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t52 = 705862327;

    t52 = (x217==((x218<=x219)+x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x225 = 3704888LLU;
	uint64_t x226 = 1183132490374126394LLU;
	int64_t x227 = -1002809645935556LL;
	static int8_t x228 = 18;
	int32_t t53 = -6429;

    t53 = (x225==((x226<=x227)+x228));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = INT8_MAX;
	int32_t x230 = -1;
	volatile int32_t t54 = 117;

    t54 = (x229==((x230<=x231)+x232));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x234 = -1;
	static uint32_t x235 = UINT32_MAX;
	uint64_t x236 = 91089169656743LLU;
	int32_t t55 = 0;

    t55 = (x233==((x234<=x235)+x236));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x238 = INT16_MAX;
	uint16_t x239 = UINT16_MAX;
	int16_t x240 = -128;

    t56 = (x237==((x238<=x239)+x240));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x242 = -1;
	int64_t x243 = -1520054LL;
	int32_t t57 = -140523;

    t57 = (x241==((x242<=x243)+x244));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x245 = -1LL;
	volatile uint8_t x246 = UINT8_MAX;
	uint8_t x248 = 70U;
	static volatile int32_t t58 = 283496;

    t58 = (x245==((x246<=x247)+x248));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x249 = -1;
	uint16_t x250 = 3825U;
	int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MIN;
	int32_t t59 = 99566;

    t59 = (x249==((x250<=x251)+x252));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x253 = INT8_MIN;
	int8_t x254 = 0;
	uint16_t x255 = UINT16_MAX;
	volatile int32_t t60 = 1539286;

    t60 = (x253==((x254<=x255)+x256));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x257 = 3;
	static volatile int16_t x258 = -1;
	int8_t x259 = 0;
	int32_t x260 = -1;

    t61 = (x257==((x258<=x259)+x260));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x261 = UINT64_MAX;
	int32_t x262 = -62;
	uint8_t x263 = 32U;
	uint16_t x264 = UINT16_MAX;
	static int32_t t62 = -3750;

    t62 = (x261==((x262<=x263)+x264));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x265 = 2U;
	int64_t x266 = INT64_MAX;
	int8_t x267 = -1;
	volatile int32_t t63 = 4115906;

    t63 = (x265==((x266<=x267)+x268));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x273 = UINT16_MAX;
	static int32_t x274 = INT32_MAX;
	int64_t x276 = INT64_MIN;
	volatile int32_t t64 = 5323;

    t64 = (x273==((x274<=x275)+x276));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x278 = UINT64_MAX;
	int64_t x279 = -1LL;
	volatile int32_t t65 = 36;

    t65 = (x277==((x278<=x279)+x280));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x281 = 151442U;
	uint64_t x282 = 275LLU;
	static volatile uint32_t x284 = 38932U;
	int32_t t66 = 270882;

    t66 = (x281==((x282<=x283)+x284));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x285 = INT32_MIN;
	uint16_t x286 = 1067U;
	volatile int8_t x288 = INT8_MAX;
	static volatile int32_t t67 = 0;

    t67 = (x285==((x286<=x287)+x288));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x289 = UINT16_MAX;
	int8_t x290 = INT8_MAX;
	volatile int64_t x291 = -1082383LL;
	volatile uint8_t x292 = 3U;
	int32_t t68 = -62;

    t68 = (x289==((x290<=x291)+x292));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x293 = INT16_MIN;
	volatile int16_t x294 = 0;
	static volatile int32_t t69 = 7577;

    t69 = (x293==((x294<=x295)+x296));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x305 = INT32_MIN;
	int64_t x306 = INT64_MAX;
	static uint16_t x307 = 92U;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t70 = 7;

    t70 = (x305==((x306<=x307)+x308));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x309 = INT64_MAX;
	int8_t x310 = -1;
	int64_t x311 = 986769LL;
	int8_t x312 = INT8_MIN;
	volatile int32_t t71 = -243;

    t71 = (x309==((x310<=x311)+x312));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x314 = INT16_MIN;
	uint8_t x316 = 12U;
	int32_t t72 = -883706;

    t72 = (x313==((x314<=x315)+x316));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x317 = INT16_MIN;
	uint16_t x319 = 8867U;

    t73 = (x317==((x318<=x319)+x320));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x321 = INT64_MIN;
	volatile int32_t x322 = INT32_MIN;
	int32_t x324 = INT32_MIN;
	static volatile int32_t t74 = 39;

    t74 = (x321==((x322<=x323)+x324));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x326 = INT64_MIN;
	int64_t x327 = INT64_MAX;
	int8_t x328 = 10;
	volatile int32_t t75 = -27866160;

    t75 = (x325==((x326<=x327)+x328));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x331 = INT64_MIN;
	uint16_t x332 = UINT16_MAX;
	int32_t t76 = 3;

    t76 = (x329==((x330<=x331)+x332));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x337 = INT64_MAX;
	volatile int16_t x338 = INT16_MIN;
	volatile int8_t x339 = -22;
	uint8_t x340 = UINT8_MAX;

    t77 = (x337==((x338<=x339)+x340));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x341 = 24U;
	uint8_t x342 = UINT8_MAX;
	volatile int32_t x343 = -4559824;
	int32_t x344 = -7311893;
	volatile int32_t t78 = 143;

    t78 = (x341==((x342<=x343)+x344));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x346 = -2;
	int32_t x347 = -3311216;
	volatile int32_t t79 = 1;

    t79 = (x345==((x346<=x347)+x348));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x349 = -1;
	volatile uint64_t x351 = 14515601562138631LLU;
	int8_t x352 = INT8_MIN;
	int32_t t80 = -231120538;

    t80 = (x349==((x350<=x351)+x352));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x353 = 30U;
	uint8_t x354 = UINT8_MAX;
	static int16_t x355 = 1;
	volatile int32_t t81 = -146;

    t81 = (x353==((x354<=x355)+x356));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x357 = INT16_MAX;
	int16_t x358 = INT16_MIN;
	volatile int16_t x360 = -1;
	volatile int32_t t82 = -991988516;

    t82 = (x357==((x358<=x359)+x360));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x361 = INT8_MIN;
	static int8_t x362 = INT8_MAX;
	int64_t x363 = -165470662348059269LL;
	uint32_t x364 = UINT32_MAX;
	static volatile int32_t t83 = 35902610;

    t83 = (x361==((x362<=x363)+x364));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x365 = -400874996;
	int64_t x366 = -6190650518LL;
	int16_t x367 = INT16_MIN;
	int8_t x368 = -1;
	static int32_t t84 = -2031881;

    t84 = (x365==((x366<=x367)+x368));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x370 = UINT8_MAX;
	int16_t x371 = -7643;
	int16_t x372 = 1;
	int32_t t85 = -64603369;

    t85 = (x369==((x370<=x371)+x372));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x373 = UINT16_MAX;
	volatile int32_t x375 = 72879543;
	volatile int16_t x376 = INT16_MAX;
	static volatile int32_t t86 = -542286;

    t86 = (x373==((x374<=x375)+x376));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x377 = UINT64_MAX;
	int32_t x378 = 2523898;
	static uint32_t x379 = UINT32_MAX;
	uint16_t x380 = UINT16_MAX;
	int32_t t87 = 41015858;

    t87 = (x377==((x378<=x379)+x380));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x382 = UINT16_MAX;
	static int64_t x383 = INT64_MIN;
	volatile int32_t x384 = 11;
	volatile int32_t t88 = -9;

    t88 = (x381==((x382<=x383)+x384));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x385 = 104U;
	int8_t x387 = INT8_MIN;
	int64_t x388 = -1LL;

    t89 = (x385==((x386<=x387)+x388));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x389 = -76233055;
	int8_t x391 = 1;
	volatile uint8_t x392 = 4U;

    t90 = (x389==((x390<=x391)+x392));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x393 = INT32_MIN;
	uint16_t x394 = 3U;
	volatile uint8_t x395 = 65U;
	int16_t x396 = -1;

    t91 = (x393==((x394<=x395)+x396));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x397 = -1;
	uint32_t x398 = 13682124U;
	volatile int64_t x399 = -121706170319LL;
	static volatile int64_t x400 = INT64_MAX;
	int32_t t92 = 0;

    t92 = (x397==((x398<=x399)+x400));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x402 = -1;
	int32_t x404 = INT32_MIN;
	volatile int32_t t93 = -14610505;

    t93 = (x401==((x402<=x403)+x404));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x408 = 9007668641062124146LLU;
	int32_t t94 = 43;

    t94 = (x405==((x406<=x407)+x408));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x409 = INT8_MAX;
	int32_t x410 = INT32_MIN;
	volatile uint16_t x412 = 226U;
	int32_t t95 = -705;

    t95 = (x409==((x410<=x411)+x412));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x416 = INT64_MIN;
	static int32_t t96 = 457735;

    t96 = (x413==((x414<=x415)+x416));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x417 = INT32_MIN;
	volatile int8_t x419 = INT8_MAX;
	static int16_t x420 = INT16_MAX;

    t97 = (x417==((x418<=x419)+x420));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x422 = 1758;
	static uint16_t x423 = UINT16_MAX;
	int8_t x424 = -1;
	int32_t t98 = 29;

    t98 = (x421==((x422<=x423)+x424));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x425 = UINT16_MAX;
	static int16_t x426 = -1420;
	uint16_t x428 = UINT16_MAX;
	int32_t t99 = -2092;

    t99 = (x425==((x426<=x427)+x428));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x429 = 7462827653502LL;
	int32_t x430 = INT32_MIN;
	int64_t x431 = 17930966344810262LL;
	volatile int32_t t100 = -5;

    t100 = (x429==((x430<=x431)+x432));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x434 = INT32_MIN;
	int16_t x435 = -51;
	int64_t x436 = -5520108476497LL;

    t101 = (x433==((x434<=x435)+x436));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x441 = UINT16_MAX;
	int64_t x443 = -707100687LL;
	static int32_t x444 = INT32_MIN;
	int32_t t102 = 442247;

    t102 = (x441==((x442<=x443)+x444));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x445 = INT32_MIN;
	volatile int8_t x446 = 1;
	int64_t x447 = -2145527926767602088LL;
	int16_t x448 = INT16_MIN;
	int32_t t103 = 7766;

    t103 = (x445==((x446<=x447)+x448));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x449 = INT16_MAX;
	int16_t x450 = -1;
	uint32_t x451 = 2942U;
	int64_t x452 = INT64_MIN;
	int32_t t104 = 29829760;

    t104 = (x449==((x450<=x451)+x452));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x455 = -1401744LL;
	uint64_t x456 = UINT64_MAX;
	volatile int32_t t105 = -27;

    t105 = (x453==((x454<=x455)+x456));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x461 = INT32_MIN;
	volatile uint8_t x463 = UINT8_MAX;
	int32_t x464 = INT32_MIN;
	int32_t t106 = -1;

    t106 = (x461==((x462<=x463)+x464));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x465 = INT32_MAX;
	static uint16_t x466 = 36U;
	int64_t x468 = 32419868342120LL;
	int32_t t107 = 827731363;

    t107 = (x465==((x466<=x467)+x468));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x469 = -375LL;
	volatile uint16_t x470 = 1U;
	volatile uint32_t x471 = UINT32_MAX;
	volatile int16_t x472 = INT16_MIN;
	volatile int32_t t108 = 1448;

    t108 = (x469==((x470<=x471)+x472));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x473 = -1;
	volatile uint16_t x474 = UINT16_MAX;
	static int32_t x475 = -1;
	uint8_t x476 = UINT8_MAX;
	volatile int32_t t109 = 1399;

    t109 = (x473==((x474<=x475)+x476));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x477 = 4276U;
	static uint32_t x479 = UINT32_MAX;
	int16_t x480 = -129;
	static int32_t t110 = 28451;

    t110 = (x477==((x478<=x479)+x480));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x482 = INT16_MIN;
	static volatile uint16_t x484 = UINT16_MAX;
	volatile int32_t t111 = -10832063;

    t111 = (x481==((x482<=x483)+x484));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x485 = 1U;
	uint16_t x486 = 179U;
	int16_t x487 = INT16_MIN;
	uint32_t x488 = 489U;
	static volatile int32_t t112 = 63243;

    t112 = (x485==((x486<=x487)+x488));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x489 = 3U;
	static int64_t x490 = INT64_MIN;
	int64_t x491 = -1LL;
	int8_t x492 = 21;
	volatile int32_t t113 = -498309917;

    t113 = (x489==((x490<=x491)+x492));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x493 = INT64_MAX;
	int8_t x494 = -1;
	int64_t x495 = -1LL;
	int8_t x496 = INT8_MIN;
	static volatile int32_t t114 = 3537;

    t114 = (x493==((x494<=x495)+x496));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x497 = 12;
	volatile uint64_t x498 = 469812111622369339LLU;
	int8_t x500 = -1;
	volatile int32_t t115 = 264522378;

    t115 = (x497==((x498<=x499)+x500));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x501 = 0;
	uint64_t x502 = 5464991034LLU;
	uint16_t x503 = 14U;
	int32_t t116 = -345;

    t116 = (x501==((x502<=x503)+x504));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x506 = 0LLU;
	uint16_t x507 = 0U;
	int32_t t117 = -383484171;

    t117 = (x505==((x506<=x507)+x508));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x509 = INT64_MIN;
	volatile int16_t x511 = -8;
	int64_t x512 = -1LL;
	volatile int32_t t118 = 13;

    t118 = (x509==((x510<=x511)+x512));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x513 = INT64_MAX;
	int64_t x515 = -1LL;
	volatile int64_t x516 = -1LL;
	volatile int32_t t119 = 97;

    t119 = (x513==((x514<=x515)+x516));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x517 = INT8_MAX;
	uint64_t x518 = 29LLU;
	int64_t x519 = -1LL;
	static uint8_t x520 = 11U;
	int32_t t120 = -27;

    t120 = (x517==((x518<=x519)+x520));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x521 = -5771;
	int64_t x522 = 8241292491LL;
	uint8_t x523 = 26U;
	int8_t x524 = INT8_MIN;
	static volatile int32_t t121 = 1919;

    t121 = (x521==((x522<=x523)+x524));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x525 = INT16_MAX;
	int64_t x526 = INT64_MIN;
	uint16_t x527 = UINT16_MAX;

    t122 = (x525==((x526<=x527)+x528));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x529 = INT8_MIN;
	int32_t x530 = INT32_MIN;
	uint16_t x531 = 89U;
	static uint64_t x532 = UINT64_MAX;
	int32_t t123 = -1;

    t123 = (x529==((x530<=x531)+x532));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x535 = UINT16_MAX;
	int16_t x536 = INT16_MAX;
	static int32_t t124 = -257491;

    t124 = (x533==((x534<=x535)+x536));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x537 = -1;
	int8_t x538 = INT8_MAX;
	int16_t x539 = -9692;
	static volatile int32_t t125 = -15;

    t125 = (x537==((x538<=x539)+x540));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x541 = 39605570082LLU;
	static uint64_t x543 = UINT64_MAX;
	uint64_t x544 = UINT64_MAX;
	volatile int32_t t126 = 15003918;

    t126 = (x541==((x542<=x543)+x544));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x545 = 14;
	uint16_t x546 = 14230U;
	volatile uint16_t x547 = 210U;
	static int8_t x548 = 0;
	int32_t t127 = -195985;

    t127 = (x545==((x546<=x547)+x548));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x549 = 8133673417137LLU;
	uint16_t x550 = UINT16_MAX;
	uint16_t x551 = UINT16_MAX;
	uint32_t x552 = 63404507U;
	volatile int32_t t128 = -319445;

    t128 = (x549==((x550<=x551)+x552));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x553 = INT32_MIN;
	int64_t x554 = INT64_MAX;
	int16_t x555 = 652;
	int8_t x556 = INT8_MIN;
	volatile int32_t t129 = -4058003;

    t129 = (x553==((x554<=x555)+x556));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x557 = 3404U;
	int64_t x559 = -1LL;
	volatile int8_t x560 = 32;
	int32_t t130 = 3517;

    t130 = (x557==((x558<=x559)+x560));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x561 = INT64_MAX;
	static volatile int32_t x563 = 85707;
	int32_t x564 = -1;
	int32_t t131 = -3;

    t131 = (x561==((x562<=x563)+x564));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x569 = INT8_MIN;
	int32_t x570 = INT32_MAX;
	int64_t x572 = INT64_MAX;
	static int32_t t132 = -3132;

    t132 = (x569==((x570<=x571)+x572));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x573 = -1LL;
	volatile uint32_t x574 = UINT32_MAX;
	uint32_t x575 = UINT32_MAX;
	volatile uint8_t x576 = 2U;
	volatile int32_t t133 = 10002;

    t133 = (x573==((x574<=x575)+x576));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x577 = INT8_MAX;
	uint64_t x579 = UINT64_MAX;
	static int64_t x580 = INT64_MIN;
	volatile int32_t t134 = 0;

    t134 = (x577==((x578<=x579)+x580));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x581 = 12554576170LLU;
	static int32_t x582 = -1;
	int64_t x583 = INT64_MIN;
	volatile int32_t x584 = -658;
	volatile int32_t t135 = -26;

    t135 = (x581==((x582<=x583)+x584));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x586 = -7;
	int16_t x587 = -1;
	volatile int8_t x588 = -1;
	int32_t t136 = 632;

    t136 = (x585==((x586<=x587)+x588));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x589 = 13U;
	int16_t x590 = INT16_MAX;
	int8_t x592 = INT8_MIN;
	int32_t t137 = -27;

    t137 = (x589==((x590<=x591)+x592));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x595 = 13196U;
	int16_t x596 = -189;
	int32_t t138 = 24670861;

    t138 = (x593==((x594<=x595)+x596));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x599 = -6;
	static int16_t x600 = INT16_MIN;
	volatile int32_t t139 = -10675;

    t139 = (x597==((x598<=x599)+x600));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x602 = INT32_MIN;
	int8_t x603 = INT8_MIN;
	uint8_t x604 = 22U;
	volatile int32_t t140 = 7;

    t140 = (x601==((x602<=x603)+x604));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint16_t x605 = UINT16_MAX;
	int8_t x606 = INT8_MAX;
	static uint8_t x607 = UINT8_MAX;

    t141 = (x605==((x606<=x607)+x608));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x609 = INT16_MAX;
	int8_t x610 = INT8_MIN;
	uint64_t x611 = 1984420598330522LLU;
	int16_t x612 = INT16_MIN;
	static int32_t t142 = -7692;

    t142 = (x609==((x610<=x611)+x612));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x613 = INT8_MAX;
	volatile int32_t x614 = INT32_MAX;
	volatile int64_t x616 = -1LL;
	volatile int32_t t143 = 12;

    t143 = (x613==((x614<=x615)+x616));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x617 = INT8_MIN;
	uint32_t x618 = 4006U;
	uint64_t x619 = UINT64_MAX;
	uint64_t x620 = UINT64_MAX;
	volatile int32_t t144 = -2773;

    t144 = (x617==((x618<=x619)+x620));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x621 = -5449;
	int16_t x622 = -1;
	uint64_t x624 = UINT64_MAX;
	volatile int32_t t145 = 12121575;

    t145 = (x621==((x622<=x623)+x624));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x625 = INT64_MIN;
	static uint32_t x627 = 4U;
	uint8_t x628 = 1U;
	volatile int32_t t146 = -100;

    t146 = (x625==((x626<=x627)+x628));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x631 = 0;
	int32_t x632 = INT32_MIN;
	volatile int32_t t147 = -13246;

    t147 = (x629==((x630<=x631)+x632));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x634 = 595032030LL;
	uint16_t x635 = 20996U;
	volatile int32_t t148 = -662;

    t148 = (x633==((x634<=x635)+x636));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x637 = 12U;
	uint16_t x639 = UINT16_MAX;
	uint8_t x640 = 17U;
	static volatile int32_t t149 = 0;

    t149 = (x637==((x638<=x639)+x640));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x641 = -1LL;
	int64_t x642 = INT64_MIN;
	volatile int16_t x643 = -1;
	static uint16_t x644 = UINT16_MAX;
	volatile int32_t t150 = -987;

    t150 = (x641==((x642<=x643)+x644));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x646 = 0;
	uint64_t x647 = 1043452824765397LLU;
	int64_t x648 = 852230904765122697LL;
	static volatile int32_t t151 = 1958060;

    t151 = (x645==((x646<=x647)+x648));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x649 = -2;
	static int8_t x651 = INT8_MIN;
	int32_t t152 = -553;

    t152 = (x649==((x650<=x651)+x652));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x653 = INT8_MIN;
	uint8_t x654 = 1U;
	uint16_t x656 = UINT16_MAX;
	int32_t t153 = -829958533;

    t153 = (x653==((x654<=x655)+x656));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x657 = 27270LLU;
	int64_t x658 = INT64_MAX;
	int8_t x659 = 34;
	static int16_t x660 = 11719;
	static volatile int32_t t154 = 0;

    t154 = (x657==((x658<=x659)+x660));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x661 = UINT16_MAX;
	uint8_t x662 = UINT8_MAX;
	uint32_t x663 = 1027U;
	volatile int32_t t155 = 19593065;

    t155 = (x661==((x662<=x663)+x664));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x666 = 1;
	volatile int8_t x667 = -2;
	uint64_t x668 = 484326971411820LLU;
	volatile int32_t t156 = 219;

    t156 = (x665==((x666<=x667)+x668));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x669 = -50;
	uint16_t x671 = UINT16_MAX;
	int64_t x672 = INT64_MIN;
	static volatile int32_t t157 = -1775;

    t157 = (x669==((x670<=x671)+x672));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x673 = 11279637LL;
	uint16_t x674 = 78U;
	int32_t x675 = -27812176;
	volatile uint16_t x676 = 0U;
	int32_t t158 = 234817118;

    t158 = (x673==((x674<=x675)+x676));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x677 = INT8_MIN;
	volatile int32_t t159 = 0;

    t159 = (x677==((x678<=x679)+x680));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x681 = -10065804850359LL;
	uint16_t x684 = UINT16_MAX;
	volatile int32_t t160 = -361937;

    t160 = (x681==((x682<=x683)+x684));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x685 = 460805849384LL;
	volatile int64_t x686 = INT64_MAX;
	volatile int8_t x687 = INT8_MIN;
	int8_t x688 = INT8_MIN;
	volatile int32_t t161 = 125050;

    t161 = (x685==((x686<=x687)+x688));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x689 = INT32_MIN;
	static int64_t x690 = 25232826LL;
	volatile int32_t x691 = -1;

    t162 = (x689==((x690<=x691)+x692));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x694 = 75;
	int16_t x696 = INT16_MAX;
	int32_t t163 = -911863;

    t163 = (x693==((x694<=x695)+x696));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x697 = 10852927;
	int64_t x698 = -1LL;
	int16_t x699 = INT16_MIN;
	uint32_t x700 = UINT32_MAX;
	volatile int32_t t164 = 1;

    t164 = (x697==((x698<=x699)+x700));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x705 = UINT8_MAX;
	static uint16_t x707 = UINT16_MAX;
	int32_t x708 = -1;
	int32_t t165 = 1421078;

    t165 = (x705==((x706<=x707)+x708));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x712 = 7LLU;
	int32_t t166 = -14942860;

    t166 = (x709==((x710<=x711)+x712));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x713 = INT8_MAX;
	static uint8_t x714 = 6U;
	static volatile uint16_t x715 = 1346U;
	uint16_t x716 = 447U;

    t167 = (x713==((x714<=x715)+x716));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x717 = UINT16_MAX;
	int32_t x718 = INT32_MIN;
	uint8_t x720 = 19U;
	int32_t t168 = -4;

    t168 = (x717==((x718<=x719)+x720));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x721 = 9;
	int32_t x722 = INT32_MIN;
	int32_t x723 = -1;
	uint32_t x724 = UINT32_MAX;
	static volatile int32_t t169 = 93620;

    t169 = (x721==((x722<=x723)+x724));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x725 = 28605467483919LL;
	int64_t x726 = INT64_MAX;
	int8_t x727 = -54;
	int32_t x728 = 42;
	int32_t t170 = 249;

    t170 = (x725==((x726<=x727)+x728));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x729 = INT32_MIN;
	uint32_t x730 = UINT32_MAX;
	int32_t x731 = -1;
	static volatile int32_t t171 = 0;

    t171 = (x729==((x730<=x731)+x732));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x733 = 66230801204413227LLU;
	uint8_t x735 = 17U;
	volatile uint16_t x736 = UINT16_MAX;
	volatile int32_t t172 = 28568;

    t172 = (x733==((x734<=x735)+x736));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x737 = INT16_MIN;
	int16_t x739 = INT16_MIN;
	int16_t x740 = -10;
	int32_t t173 = -13;

    t173 = (x737==((x738<=x739)+x740));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x741 = 0;
	int32_t x742 = INT32_MAX;
	int32_t x743 = INT32_MAX;
	static int64_t x744 = 500170045194612LL;
	int32_t t174 = -620;

    t174 = (x741==((x742<=x743)+x744));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x745 = INT16_MIN;
	int16_t x747 = INT16_MIN;
	int32_t x748 = INT32_MIN;
	volatile int32_t t175 = 1;

    t175 = (x745==((x746<=x747)+x748));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x750 = UINT32_MAX;
	static uint64_t x752 = 2903297827556210LLU;
	volatile int32_t t176 = 155652;

    t176 = (x749==((x750<=x751)+x752));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x753 = -1;
	static int16_t x754 = INT16_MIN;
	int16_t x755 = -1;
	static uint8_t x756 = UINT8_MAX;
	volatile int32_t t177 = 6748;

    t177 = (x753==((x754<=x755)+x756));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x757 = 1U;
	int16_t x758 = -1;
	uint32_t x759 = 953231819U;
	volatile int32_t t178 = -116;

    t178 = (x757==((x758<=x759)+x760));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x761 = -178;
	uint64_t x762 = 24971819LLU;

    t179 = (x761==((x762<=x763)+x764));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x765 = 178;
	uint8_t x766 = UINT8_MAX;
	uint8_t x767 = UINT8_MAX;
	volatile int8_t x768 = INT8_MIN;

    t180 = (x765==((x766<=x767)+x768));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x770 = UINT32_MAX;
	int16_t x772 = -1;
	int32_t t181 = -27999615;

    t181 = (x769==((x770<=x771)+x772));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x773 = INT16_MIN;
	int32_t x774 = INT32_MIN;
	int16_t x775 = 17;
	volatile uint64_t x776 = UINT64_MAX;

    t182 = (x773==((x774<=x775)+x776));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x777 = INT64_MIN;
	int16_t x778 = INT16_MIN;
	int32_t x780 = -30;

    t183 = (x777==((x778<=x779)+x780));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x781 = INT64_MAX;
	static int64_t x782 = 7LL;
	uint32_t x783 = 41661U;
	volatile uint16_t x784 = 1U;
	int32_t t184 = 66740333;

    t184 = (x781==((x782<=x783)+x784));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x785 = INT8_MIN;
	int8_t x786 = -2;
	uint32_t x787 = UINT32_MAX;
	volatile int32_t x788 = -1;
	static int32_t t185 = 6403482;

    t185 = (x785==((x786<=x787)+x788));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x790 = 1811;
	int8_t x791 = INT8_MIN;
	int16_t x792 = -1;
	volatile int32_t t186 = -133;

    t186 = (x789==((x790<=x791)+x792));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x793 = -1;
	static int16_t x794 = INT16_MAX;
	static int32_t x795 = -8160;
	volatile int8_t x796 = INT8_MAX;
	volatile int32_t t187 = -132;

    t187 = (x793==((x794<=x795)+x796));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x797 = 476U;
	static uint64_t x800 = UINT64_MAX;
	int32_t t188 = 3067368;

    t188 = (x797==((x798<=x799)+x800));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x801 = INT64_MIN;
	int8_t x804 = INT8_MIN;
	int32_t t189 = -1372;

    t189 = (x801==((x802<=x803)+x804));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x805 = INT64_MIN;
	static uint64_t x806 = 3LLU;
	int16_t x807 = 76;
	int16_t x808 = INT16_MAX;

    t190 = (x805==((x806<=x807)+x808));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int32_t x809 = INT32_MIN;
	static int32_t x810 = -1;
	int32_t x811 = INT32_MIN;
	static int32_t t191 = -4;

    t191 = (x809==((x810<=x811)+x812));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x813 = 1U;
	uint32_t x814 = 1281129U;
	static int32_t x815 = 1;
	int32_t x816 = INT32_MAX;
	static volatile int32_t t192 = 149;

    t192 = (x813==((x814<=x815)+x816));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x817 = INT16_MAX;
	volatile uint8_t x818 = 27U;
	uint16_t x819 = 167U;
	volatile int32_t t193 = 301;

    t193 = (x817==((x818<=x819)+x820));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x821 = INT16_MAX;
	int16_t x822 = INT16_MIN;
	int8_t x823 = -1;
	volatile int16_t x824 = INT16_MIN;
	int32_t t194 = 12159679;

    t194 = (x821==((x822<=x823)+x824));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x829 = INT8_MAX;
	volatile int16_t x830 = INT16_MAX;
	uint16_t x831 = UINT16_MAX;
	volatile int32_t t195 = 53;

    t195 = (x829==((x830<=x831)+x832));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x833 = -1;
	int16_t x836 = INT16_MIN;

    t196 = (x833==((x834<=x835)+x836));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x837 = 430U;
	int8_t x838 = 9;
	int8_t x839 = INT8_MAX;
	volatile int32_t x840 = INT32_MIN;
	static int32_t t197 = 198568;

    t197 = (x837==((x838<=x839)+x840));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x849 = INT8_MIN;
	int64_t x851 = INT64_MIN;
	volatile int32_t t198 = -94658;

    t198 = (x849==((x850<=x851)+x852));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x853 = INT32_MIN;
	volatile uint64_t x854 = UINT64_MAX;
	static int16_t x856 = INT16_MIN;
	volatile int32_t t199 = 13778;

    t199 = (x853==((x854<=x855)+x856));

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

