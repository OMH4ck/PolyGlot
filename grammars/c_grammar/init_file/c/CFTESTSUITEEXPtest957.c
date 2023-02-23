
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

int8_t x2 = -9;
int64_t x13 = -1LL;
static volatile int8_t x21 = 1;
uint32_t x26 = 11U;
uint16_t x31 = UINT16_MAX;
uint32_t x32 = UINT32_MAX;
int64_t x42 = INT64_MAX;
volatile uint64_t t10 = 44298546LLU;
uint8_t x53 = 0U;
int64_t x59 = -11225LL;
int16_t x68 = 5740;
int64_t t16 = 3923LL;
int16_t x73 = INT16_MAX;
int32_t x79 = -947457456;
uint64_t t20 = 6879LLU;
int8_t x88 = -49;
uint8_t x91 = UINT8_MAX;
uint16_t x94 = 5936U;
volatile int16_t x95 = INT16_MAX;
int16_t x98 = -1;
int16_t x99 = INT16_MIN;
uint64_t x102 = UINT64_MAX;
uint32_t x103 = 222579889U;
int32_t x108 = -1546300;
static int64_t x109 = INT64_MIN;
static int16_t x111 = INT16_MIN;
int8_t x125 = 27;
uint64_t x132 = 82LLU;
static volatile int8_t x136 = 1;
int16_t x139 = INT16_MIN;
int16_t x142 = INT16_MIN;
volatile uint8_t x149 = 8U;
uint16_t x156 = UINT16_MAX;
volatile int32_t x165 = INT32_MIN;
int8_t x166 = -6;
int32_t x172 = 6728182;
volatile uint64_t t43 = 20LLU;
int16_t x177 = INT16_MIN;
static int16_t x178 = -71;
volatile uint64_t t44 = 2349575539LLU;
int64_t x181 = INT64_MIN;
int32_t x184 = -1;
int32_t x185 = -1;
static int64_t t48 = -181409522371LL;
int8_t x199 = 6;
static int8_t x205 = -1;
volatile int64_t t51 = -2131LL;
int64_t t53 = 11461725001LL;
uint32_t t57 = 55U;
int16_t x238 = INT16_MIN;
volatile int64_t t60 = -1LL;
uint32_t x251 = 54U;
uint16_t x252 = 35U;
volatile uint32_t t64 = 652U;
int32_t x266 = INT32_MIN;
static int16_t x268 = INT16_MAX;
int8_t x269 = -1;
int64_t x271 = INT64_MIN;
uint64_t t68 = 2LLU;
static int32_t x289 = -1;
uint64_t x292 = 461LLU;
int16_t x299 = INT16_MIN;
uint32_t x302 = 536790977U;
int64_t t77 = -34LL;
static int8_t x322 = INT8_MAX;
uint32_t x331 = 719621060U;
int64_t x332 = -1LL;
int32_t t82 = -48;
volatile uint16_t x337 = UINT16_MAX;
volatile uint8_t x340 = 44U;
static int32_t t85 = -377171810;
static volatile uint64_t x353 = 4434143LLU;
int16_t x354 = INT16_MIN;
volatile int64_t t88 = -56925477176LL;
uint64_t x364 = 23176172LLU;
static uint64_t t89 = 3LLU;
uint8_t x371 = 7U;
int8_t x372 = INT8_MIN;
volatile uint64_t t92 = 58711853LLU;
int16_t x383 = -1;
volatile uint64_t t96 = 612LLU;
int32_t t98 = -6;
int16_t x407 = -1;
uint8_t x415 = UINT8_MAX;
int32_t t101 = -115;
int32_t t102 = 5311;
uint32_t x426 = 3597112U;
uint32_t x427 = 4312074U;
uint32_t x434 = 645167U;
volatile int16_t x437 = -1;
static int16_t x438 = INT16_MIN;
int64_t x439 = INT64_MIN;
int64_t x443 = -10LL;
int16_t x444 = INT16_MIN;
int32_t x445 = INT32_MIN;
static volatile int8_t x446 = -6;
int8_t x460 = 11;
volatile int16_t x464 = 7;
uint8_t x465 = 3U;
volatile int32_t x468 = -1;
int16_t x471 = 5;
volatile int8_t x473 = INT8_MIN;
int16_t x475 = INT16_MAX;
uint32_t x477 = UINT32_MAX;
int64_t x491 = INT64_MAX;
int64_t t120 = 28LL;
volatile int16_t x500 = -1;
volatile uint64_t t123 = 1457352841893326LLU;
static int64_t x505 = -1LL;
int64_t x511 = INT64_MIN;
int64_t t125 = -10624806784LL;
volatile int16_t x519 = 6914;
static uint16_t x520 = UINT16_MAX;
int16_t x524 = 1;
int16_t x525 = INT16_MIN;
int32_t x527 = -1;
int64_t x528 = 607269432737954LL;
volatile int64_t t130 = 0LL;
int32_t x535 = INT32_MIN;
volatile int8_t x536 = INT8_MIN;
int16_t x541 = -65;
uint32_t x543 = UINT32_MAX;
uint64_t x547 = UINT64_MAX;
volatile uint8_t x548 = UINT8_MAX;
uint64_t t133 = 1333959LLU;
static int64_t t134 = 7942742LL;
int16_t x553 = INT16_MAX;
int8_t x555 = INT8_MIN;
int16_t x559 = INT16_MIN;
int64_t x561 = INT64_MIN;
uint16_t x570 = 7U;
int32_t x575 = -9166;
int64_t t141 = -190650855359250373LL;
int32_t x586 = -1;
volatile uint8_t x587 = 1U;
static int64_t x595 = INT64_MAX;
int64_t x597 = 4186LL;
int64_t x608 = -1LL;
volatile uint64_t x611 = 32306365890903613LLU;
int32_t x612 = INT32_MIN;
static uint64_t t148 = 10207989652LLU;
volatile int64_t t149 = -8375583639729283LL;
int8_t x624 = INT8_MAX;
uint32_t t151 = 33461U;
volatile int32_t x633 = INT32_MIN;
int8_t x642 = 1;
int64_t x650 = INT64_MIN;
int8_t x654 = INT8_MIN;
int32_t x655 = INT32_MIN;
static uint64_t t160 = 860287661280LLU;
uint32_t x663 = 260394183U;
volatile uint32_t t161 = 109746U;
int64_t x674 = INT64_MAX;
uint64_t x679 = 369270053939233251LLU;
int8_t x681 = INT8_MAX;
volatile int8_t x682 = -1;
int64_t x686 = -1LL;
volatile uint8_t x687 = 31U;
volatile int64_t t167 = -115LL;
int16_t x692 = INT16_MIN;
volatile uint16_t x693 = 53U;
int16_t x699 = 10761;
int64_t t170 = -51LL;
volatile uint64_t t172 = 35634615404437LLU;
int64_t x710 = -1LL;
static volatile int16_t x716 = 756;
uint64_t x717 = 56560538442181LLU;
uint16_t x721 = UINT16_MAX;
int16_t x731 = -1;
volatile int32_t t178 = 2807;
uint8_t x749 = UINT8_MAX;
volatile uint32_t x751 = UINT32_MAX;
int64_t x756 = INT64_MIN;
volatile uint64_t t184 = 64802775385LLU;
int32_t x758 = -17;
int64_t x761 = INT64_MIN;
volatile int64_t t186 = 358396950590LL;
int16_t x770 = -1;
volatile int32_t x771 = INT32_MAX;
uint64_t x773 = UINT64_MAX;
static uint8_t x782 = 0U;
int32_t x793 = 1;
uint16_t x794 = 0U;
int8_t x814 = -1;


void f0(void) {
    	uint64_t x1 = 254293LLU;
	int32_t x3 = 594926827;
	volatile int8_t x4 = INT8_MAX;
	static volatile uint64_t t0 = 406927784LLU;

    t0 = (x1%((x2%x3)|x4));

    if (t0 != 254293LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 408;
	int8_t x6 = INT8_MIN;
	volatile uint16_t x7 = 1U;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -31536363;

    t1 = (x5%((x6%x7)|x8));

    if (t1 != 24) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 25U;
	int32_t x10 = INT32_MIN;
	static uint64_t x11 = UINT64_MAX;
	int64_t x12 = INT64_MAX;
	uint64_t t2 = 23081191668265335LLU;

    t2 = (x9%((x10%x11)|x12));

    if (t2 != 25LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int8_t x14 = -52;
	int8_t x15 = 3;
	int16_t x16 = -1;
	int64_t t3 = 28242023397946306LL;

    t3 = (x13%((x14%x15)|x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MAX;
	volatile int16_t x18 = INT16_MIN;
	volatile int8_t x19 = -13;
	int16_t x20 = -2;
	static volatile int64_t t4 = -98193LL;

    t4 = (x17%((x18%x19)|x20));

    if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = -1;
	int16_t x23 = 1041;
	int32_t x24 = 26;
	volatile int32_t t5 = 923360;

    t5 = (x21%((x22%x23)|x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	uint32_t x27 = 2123473401U;
	uint16_t x28 = 32461U;
	uint32_t t6 = 6U;

    t6 = (x25%((x26%x27)|x28));

    if (t6 != 15006U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 7944U;
	int32_t x30 = -192;
	uint32_t t7 = 5832U;

    t7 = (x29%((x30%x31)|x32));

    if (t7 != 7944U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = INT8_MAX;
	int32_t x34 = INT32_MIN;
	static int8_t x35 = INT8_MIN;
	int32_t x36 = 848481354;
	int32_t t8 = -407771;

    t8 = (x33%((x34%x35)|x36));

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	int8_t x38 = -1;
	static int16_t x39 = -286;
	static uint8_t x40 = 56U;
	int32_t t9 = 1;

    t9 = (x37%((x38%x39)|x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	int64_t x43 = 49528719083LL;
	static volatile uint64_t x44 = 104708174335343LLU;

    t10 = (x41%((x42%x43)|x44));

    if (t10 != 2147483647LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x45 = 76U;
	static int32_t x46 = INT32_MIN;
	static int16_t x47 = 119;
	int16_t x48 = INT16_MIN;
	static int32_t t11 = 96715877;

    t11 = (x45%((x46%x47)|x48));

    if (t11 != 4) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = INT64_MIN;
	int16_t x50 = -1;
	int8_t x51 = INT8_MIN;
	uint8_t x52 = 14U;
	volatile int64_t t12 = -796293426466339LL;

    t12 = (x49%((x50%x51)|x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x54 = INT8_MAX;
	static int64_t x55 = INT64_MIN;
	uint64_t x56 = 4422817299224413348LLU;
	volatile uint64_t t13 = 21484196LLU;

    t13 = (x53%((x54%x55)|x56));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = -1848944472770649463LL;
	uint32_t x58 = 749U;
	int8_t x60 = INT8_MIN;
	static int64_t t14 = 16742992867054LL;

    t14 = (x57%((x58%x59)|x60));

    if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -1;
	int64_t x62 = -2LL;
	int8_t x63 = 51;
	uint64_t x64 = UINT64_MAX;
	static uint64_t t15 = 690374743840329LLU;

    t15 = (x61%((x62%x63)|x64));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x65 = UINT8_MAX;
	int64_t x66 = 94075522LL;
	uint8_t x67 = UINT8_MAX;

    t16 = (x65%((x66%x67)|x68));

    if (t16 != 255LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = -1856LL;
	volatile int32_t x70 = INT32_MIN;
	volatile uint8_t x71 = UINT8_MAX;
	uint8_t x72 = 3U;
	volatile int64_t t17 = 184965182722LL;

    t17 = (x69%((x70%x71)|x72));

    if (t17 != -106LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x74 = INT32_MAX;
	uint64_t x75 = 1831891749705558LLU;
	int16_t x76 = -56;
	static uint64_t t18 = 17407280LLU;

    t18 = (x73%((x74%x75)|x76));

    if (t18 != 32767LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	int8_t x78 = -59;
	uint32_t x80 = 6122329U;
	uint32_t t19 = 55261312U;

    t19 = (x77%((x78%x79)|x80));

    if (t19 != 4294967168U) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	int64_t x82 = INT64_MAX;
	uint64_t x83 = 3633LLU;
	int64_t x84 = -1LL;

    t20 = (x81%((x82%x83)|x84));

    if (t20 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = UINT16_MAX;
	int16_t x86 = INT16_MAX;
	int8_t x87 = INT8_MIN;
	int32_t t21 = -750721;

    t21 = (x85%((x86%x87)|x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 159LLU;
	uint32_t x90 = UINT32_MAX;
	volatile int8_t x92 = -1;
	volatile uint64_t t22 = 5LLU;

    t22 = (x89%((x90%x91)|x92));

    if (t22 != 159LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = INT16_MAX;
	int64_t x96 = INT64_MIN;
	volatile int64_t t23 = -515092854022333867LL;

    t23 = (x93%((x94%x95)|x96));

    if (t23 != 32767LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	static int64_t x100 = INT64_MIN;
	volatile int64_t t24 = 516480331LL;

    t24 = (x97%((x98%x99)|x100));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = UINT16_MAX;
	int16_t x104 = -12;
	static uint64_t t25 = 104835557LLU;

    t25 = (x101%((x102%x103)|x104));

    if (t25 != 65535LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 120904691LLU;
	int64_t x106 = -354LL;
	int32_t x107 = INT32_MIN;
	volatile uint64_t t26 = 2083728191LLU;

    t26 = (x105%((x106%x107)|x108));

    if (t26 != 120904691LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x110 = -1LL;
	volatile uint8_t x112 = 0U;
	static volatile int64_t t27 = 2404439452922LL;

    t27 = (x109%((x110%x111)|x112));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MAX;
	uint16_t x114 = UINT16_MAX;
	int64_t x115 = INT64_MAX;
	volatile int64_t x116 = 13150536195968LL;
	volatile int64_t t28 = -94632020507LL;

    t28 = (x113%((x114%x115)|x116));

    if (t28 != 6760326411191LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MAX;
	static int16_t x120 = INT16_MIN;
	uint64_t t29 = 120167317997LLU;

    t29 = (x117%((x118%x119)|x120));

    if (t29 != 32767LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MAX;
	volatile int32_t x124 = 414521;
	uint32_t t30 = 1U;

    t30 = (x121%((x122%x123)|x124));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = INT16_MIN;
	static int16_t x127 = -3375;
	int64_t x128 = 2998626031014910LL;
	volatile int64_t t31 = -1239506210277887566LL;

    t31 = (x125%((x126%x127)|x128));

    if (t31 != 27LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 13U;
	static int32_t x130 = INT32_MIN;
	int16_t x131 = INT16_MIN;
	volatile uint64_t t32 = 1LLU;

    t32 = (x129%((x130%x131)|x132));

    if (t32 != 13LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = -1;
	int64_t x134 = -1LL;
	uint64_t x135 = 6326438882646527178LLU;
	uint64_t t33 = 31178371867LLU;

    t33 = (x133%((x134%x135)|x136));

    if (t33 != 1065145148460059838LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 0LLU;
	uint16_t x138 = UINT16_MAX;
	int32_t x140 = INT32_MIN;
	static volatile uint64_t t34 = 2018LLU;

    t34 = (x137%((x138%x139)|x140));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = -51406LL;
	volatile int32_t x143 = INT32_MIN;
	uint16_t x144 = 0U;
	int64_t t35 = 106LL;

    t35 = (x141%((x142%x143)|x144));

    if (t35 != -18638LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x145 = 947U;
	volatile int32_t x146 = -3104;
	volatile int32_t x147 = 57131052;
	uint64_t x148 = 2410922986439LLU;
	static uint64_t t36 = 358994661783763LLU;

    t36 = (x145%((x146%x147)|x148));

    if (t36 != 947LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = 2085050078LL;
	volatile int8_t x151 = INT8_MAX;
	static int64_t x152 = INT64_MAX;
	int64_t t37 = 31186235283168LL;

    t37 = (x149%((x150%x151)|x152));

    if (t37 != 8LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	int32_t x154 = INT32_MAX;
	static volatile uint32_t x155 = 6U;
	volatile uint32_t t38 = 120452U;

    t38 = (x153%((x154%x155)|x156));

    if (t38 != 32768U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 30;
	int64_t x158 = 120790LL;
	int64_t x159 = INT64_MIN;
	volatile uint32_t x160 = 2055631508U;
	static int64_t t39 = 1426999LL;

    t39 = (x157%((x158%x159)|x160));

    if (t39 != 30LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x161 = 7168089376811LLU;
	uint32_t x162 = 17U;
	int8_t x163 = INT8_MIN;
	volatile int16_t x164 = 261;
	static uint64_t t40 = 18LLU;

    t40 = (x161%((x162%x163)|x164));

    if (t40 != 182LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x167 = -1;
	uint64_t x168 = 130639LLU;
	uint64_t t41 = 5996071LLU;

    t41 = (x165%((x166%x167)|x168));

    if (t41 != 20156LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x169 = 32U;
	volatile int32_t x170 = INT32_MIN;
	static int16_t x171 = 15010;
	volatile int32_t t42 = 422;

    t42 = (x169%((x170%x171)|x172));

    if (t42 != 32) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	uint8_t x174 = 23U;
	int32_t x175 = INT32_MIN;
	int16_t x176 = INT16_MIN;

    t43 = (x173%((x174%x175)|x176));

    if (t43 != 32744LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x179 = 128902604039202922LLU;
	int16_t x180 = -1;

    t44 = (x177%((x178%x179)|x180));

    if (t44 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x182 = INT16_MIN;
	uint64_t x183 = 195525353352474LLU;
	volatile uint64_t t45 = 0LLU;

    t45 = (x181%((x182%x183)|x184));

    if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x186 = -1LL;
	int64_t x187 = -117LL;
	uint16_t x188 = 21U;
	static volatile int64_t t46 = 581LL;

    t46 = (x185%((x186%x187)|x188));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x189 = INT32_MIN;
	volatile int64_t x190 = 31128791LL;
	int8_t x191 = 15;
	int64_t x192 = INT64_MIN;
	volatile int64_t t47 = -437LL;

    t47 = (x189%((x190%x191)|x192));

    if (t47 != -2147483648LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MIN;
	static int64_t x194 = INT64_MAX;
	uint16_t x195 = 42U;
	int32_t x196 = INT32_MAX;

    t48 = (x193%((x194%x195)|x196));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 315581U;
	static volatile int8_t x198 = INT8_MIN;
	int8_t x200 = -1;
	static uint32_t t49 = 998207674U;

    t49 = (x197%((x198%x199)|x200));

    if (t49 != 315581U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = -348LL;
	int64_t x202 = -1LL;
	static int16_t x203 = 12550;
	int32_t x204 = 56648467;
	int64_t t50 = 29232845979LL;

    t50 = (x201%((x202%x203)|x204));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x206 = -7207;
	int64_t x207 = INT64_MIN;
	volatile int16_t x208 = 1;

    t51 = (x205%((x206%x207)|x208));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1804289505190209125LL;
	volatile int8_t x210 = -1;
	volatile int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MIN;
	volatile int64_t t52 = -2639302835LL;

    t52 = (x209%((x210%x211)|x212));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x213 = 22U;
	volatile uint8_t x214 = 43U;
	static int64_t x215 = -8853LL;
	int8_t x216 = INT8_MAX;

    t53 = (x213%((x214%x215)|x216));

    if (t53 != 22LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -1;
	uint32_t x218 = UINT32_MAX;
	uint8_t x219 = 4U;
	static volatile int64_t x220 = 75481962232848LL;
	static volatile int64_t t54 = -1828LL;

    t54 = (x217%((x218%x219)|x220));

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 106841313030LLU;
	int16_t x222 = -212;
	uint8_t x223 = UINT8_MAX;
	static volatile int64_t x224 = -2658014820137646LL;
	uint64_t t55 = 998027263949LLU;

    t55 = (x221%((x222%x223)|x224));

    if (t55 != 106841313030LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x229 = 4652959922488364174LLU;
	int32_t x230 = -1;
	uint64_t x231 = 264561LLU;
	int8_t x232 = INT8_MIN;
	uint64_t t56 = 7425558334LLU;

    t56 = (x229%((x230%x231)|x232));

    if (t56 != 4652959922488364174LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x233 = -1;
	int16_t x234 = 11;
	static volatile uint32_t x235 = 16627071U;
	int16_t x236 = -9455;

    t57 = (x233%((x234%x235)|x236));

    if (t57 != 9444U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x237 = 7U;
	int8_t x239 = -1;
	int64_t x240 = INT64_MIN;
	int64_t t58 = 3344036LL;

    t58 = (x237%((x238%x239)|x240));

    if (t58 != 7LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x241 = -1;
	int32_t x242 = INT32_MAX;
	int64_t x243 = -1LL;
	int64_t x244 = INT64_MIN;
	int64_t t59 = 152781298019991LL;

    t59 = (x241%((x242%x243)|x244));

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x245 = UINT32_MAX;
	int64_t x246 = 12LL;
	int8_t x247 = INT8_MIN;
	int32_t x248 = 35706;

    t60 = (x245%((x246%x247)|x248));

    if (t60 != 18465LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x249 = INT16_MIN;
	uint16_t x250 = UINT16_MAX;
	volatile uint32_t t61 = 3604U;

    t61 = (x249%((x250%x251)|x252));

    if (t61 != 3U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x253 = INT8_MAX;
	static volatile uint8_t x254 = 2U;
	uint32_t x255 = 6554867U;
	uint16_t x256 = UINT16_MAX;
	uint32_t t62 = 45U;

    t62 = (x253%((x254%x255)|x256));

    if (t62 != 127U) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x257 = INT32_MAX;
	int16_t x258 = -1;
	static int32_t x259 = -1;
	static int8_t x260 = -30;
	int32_t t63 = 1039003846;

    t63 = (x257%((x258%x259)|x260));

    if (t63 != 7) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x261 = INT32_MAX;
	volatile uint8_t x262 = 7U;
	static int16_t x263 = INT16_MIN;
	uint32_t x264 = UINT32_MAX;

    t64 = (x261%((x262%x263)|x264));

    if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x265 = UINT64_MAX;
	int32_t x267 = INT32_MIN;
	uint64_t t65 = 3811076248966429859LLU;

    t65 = (x265%((x266%x267)|x268));

    if (t65 != 15LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x270 = INT8_MIN;
	uint16_t x272 = UINT16_MAX;
	volatile int64_t t66 = -1141LL;

    t66 = (x269%((x270%x271)|x272));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x273 = 2;
	static volatile int64_t x274 = 22426LL;
	uint32_t x275 = 902531361U;
	int32_t x276 = INT32_MIN;
	int64_t t67 = 60064810973526484LL;

    t67 = (x273%((x274%x275)|x276));

    if (t67 != 2LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x277 = 0;
	static volatile uint64_t x278 = 313466525569888LLU;
	static int32_t x279 = -11;
	static int8_t x280 = INT8_MIN;

    t68 = (x277%((x278%x279)|x280));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x281 = INT64_MIN;
	uint16_t x282 = 22664U;
	int32_t x283 = INT32_MIN;
	uint8_t x284 = 12U;
	volatile int64_t t69 = -10707187374836LL;

    t69 = (x281%((x282%x283)|x284));

    if (t69 != -16472LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x285 = UINT64_MAX;
	volatile int64_t x286 = INT64_MAX;
	static int8_t x287 = INT8_MAX;
	volatile uint64_t x288 = 7LLU;
	static uint64_t t70 = 8067999092641LLU;

    t70 = (x285%((x286%x287)|x288));

    if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x290 = INT16_MIN;
	int8_t x291 = -1;
	uint64_t t71 = 2120089311LLU;

    t71 = (x289%((x290%x291)|x292));

    if (t71 != 369LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x293 = INT8_MAX;
	volatile int8_t x294 = -9;
	uint32_t x295 = UINT32_MAX;
	static uint16_t x296 = 7U;
	uint32_t t72 = 12128612U;

    t72 = (x293%((x294%x295)|x296));

    if (t72 != 127U) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int16_t x297 = 2904;
	uint32_t x298 = 0U;
	uint16_t x300 = UINT16_MAX;
	uint32_t t73 = 32U;

    t73 = (x297%((x298%x299)|x300));

    if (t73 != 2904U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x301 = INT64_MIN;
	static int16_t x303 = INT16_MIN;
	static int64_t x304 = 63479LL;
	int64_t t74 = -408629LL;

    t74 = (x301%((x302%x303)|x304));

    if (t74 != -191534000LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x305 = -1;
	uint8_t x306 = 7U;
	static int32_t x307 = -1;
	static int32_t x308 = INT32_MAX;
	volatile int32_t t75 = 60;

    t75 = (x305%((x306%x307)|x308));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x309 = -100812894;
	volatile int32_t x310 = INT32_MIN;
	static int8_t x311 = -2;
	static int16_t x312 = -1;
	int32_t t76 = -818;

    t76 = (x309%((x310%x311)|x312));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x313 = INT16_MIN;
	int32_t x314 = INT32_MIN;
	volatile uint8_t x315 = 5U;
	volatile int64_t x316 = -694498954930029849LL;

    t77 = (x313%((x314%x315)|x316));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x317 = INT64_MAX;
	int32_t x318 = 790144175;
	uint64_t x319 = 2072796990LLU;
	volatile int8_t x320 = -3;
	volatile uint64_t t78 = 2272740416656401582LLU;

    t78 = (x317%((x318%x319)|x320));

    if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x321 = INT32_MIN;
	int8_t x323 = INT8_MAX;
	static int64_t x324 = -257458497409006LL;
	int64_t t79 = 684293029079012LL;

    t79 = (x321%((x322%x323)|x324));

    if (t79 != -2147483648LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x325 = 75153U;
	uint64_t x326 = 6056553683LLU;
	uint64_t x327 = 695599989LLU;
	int8_t x328 = INT8_MIN;
	static volatile uint64_t t80 = 29626993LLU;

    t80 = (x325%((x326%x327)|x328));

    if (t80 != 75153LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x329 = -1183860462773LL;
	volatile int16_t x330 = -1;
	volatile int64_t t81 = -846997573694LL;

    t81 = (x329%((x330%x331)|x332));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x333 = -1;
	int32_t x334 = -8025;
	int32_t x335 = -1;
	static uint16_t x336 = UINT16_MAX;

    t82 = (x333%((x334%x335)|x336));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x338 = INT8_MIN;
	uint32_t x339 = UINT32_MAX;
	volatile uint32_t t83 = 1903597U;

    t83 = (x337%((x338%x339)|x340));

    if (t83 != 65535U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x341 = 4U;
	static int16_t x342 = INT16_MAX;
	volatile int32_t x343 = INT32_MAX;
	int32_t x344 = -75448475;
	int32_t t84 = 474250;

    t84 = (x341%((x342%x343)|x344));

    if (t84 != 4) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x345 = -1;
	volatile int32_t x346 = INT32_MIN;
	int32_t x347 = INT32_MIN;
	static volatile int8_t x348 = -1;

    t85 = (x345%((x346%x347)|x348));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x349 = INT64_MAX;
	int8_t x350 = 63;
	int64_t x351 = INT64_MIN;
	int32_t x352 = INT32_MAX;
	volatile int64_t t86 = 50LL;

    t86 = (x349%((x350%x351)|x352));

    if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x355 = 230U;
	volatile int64_t x356 = 6003078257894763LL;
	volatile uint64_t t87 = 178741875953LLU;

    t87 = (x353%((x354%x355)|x356));

    if (t87 != 4434143LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x357 = 1;
	int64_t x358 = INT64_MIN;
	int8_t x359 = INT8_MIN;
	static volatile int8_t x360 = INT8_MIN;

    t88 = (x357%((x358%x359)|x360));

    if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x361 = UINT32_MAX;
	int8_t x362 = -1;
	int64_t x363 = -1LL;

    t89 = (x361%((x362%x363)|x364));

    if (t89 != 7375475LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x365 = UINT16_MAX;
	int16_t x366 = -1;
	int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MIN;
	static int64_t t90 = 805115781963LL;

    t90 = (x365%((x366%x367)|x368));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x369 = INT16_MAX;
	int8_t x370 = 12;
	int32_t t91 = -5245;

    t91 = (x369%((x370%x371)|x372));

    if (t91 != 49) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x373 = 2535486932LLU;
	static uint8_t x374 = UINT8_MAX;
	volatile int8_t x375 = -1;
	volatile uint64_t x376 = 197217LLU;

    t92 = (x373%((x374%x375)|x376));

    if (t92 != 65180LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x377 = 0;
	volatile int64_t x378 = 7436892704LL;
	uint32_t x379 = 3392577U;
	uint8_t x380 = UINT8_MAX;
	int64_t t93 = -155562063779LL;

    t93 = (x377%((x378%x379)|x380));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x381 = -9487;
	volatile uint32_t x382 = 266U;
	uint32_t x384 = 5566703U;
	static uint32_t t94 = 523795884U;

    t94 = (x381%((x382%x383)|x384));

    if (t94 != 2832420U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x385 = -3;
	uint64_t x386 = 8LLU;
	int32_t x387 = 28;
	int64_t x388 = INT64_MIN;
	uint64_t t95 = 12704317469LLU;

    t95 = (x385%((x386%x387)|x388));

    if (t95 != 9223372036854775797LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x389 = UINT64_MAX;
	int8_t x390 = -34;
	volatile uint64_t x391 = 480776212711815LLU;
	int32_t x392 = INT32_MAX;

    t96 = (x389%((x390%x391)|x392));

    if (t96 != 178430121402249LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x397 = 1;
	int64_t x398 = -1LL;
	int64_t x399 = -1LL;
	volatile int16_t x400 = INT16_MAX;
	static int64_t t97 = -872283983672367LL;

    t97 = (x397%((x398%x399)|x400));

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x401 = -1;
	int8_t x402 = INT8_MAX;
	uint16_t x403 = 3U;
	int8_t x404 = INT8_MAX;

    t98 = (x401%((x402%x403)|x404));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x405 = 3949705U;
	int32_t x406 = INT32_MAX;
	static uint16_t x408 = 8304U;
	uint32_t t99 = 2U;

    t99 = (x405%((x406%x407)|x408));

    if (t99 != 5305U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x409 = INT16_MIN;
	static uint16_t x410 = 19158U;
	static int16_t x411 = 437;
	uint32_t x412 = UINT32_MAX;
	uint32_t t100 = 3U;

    t100 = (x409%((x410%x411)|x412));

    if (t100 != 4294934528U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x413 = 3U;
	int16_t x414 = INT16_MAX;
	int16_t x416 = INT16_MAX;

    t101 = (x413%((x414%x415)|x416));

    if (t101 != 3) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x417 = UINT8_MAX;
	int32_t x418 = -1;
	uint16_t x419 = 7U;
	volatile int32_t x420 = INT32_MAX;

    t102 = (x417%((x418%x419)|x420));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x421 = INT64_MIN;
	volatile int64_t x422 = INT64_MIN;
	int16_t x423 = INT16_MIN;
	static uint64_t x424 = UINT64_MAX;
	volatile uint64_t t103 = 1569543LLU;

    t103 = (x421%((x422%x423)|x424));

    if (t103 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x425 = 6561329236007707LLU;
	static int32_t x428 = -9725;
	uint64_t t104 = 24687LLU;

    t104 = (x425%((x426%x427)|x428));

    if (t104 != 4052483857LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x429 = 0U;
	int16_t x430 = INT16_MIN;
	int64_t x431 = -2663816LL;
	int32_t x432 = INT32_MAX;
	static int64_t t105 = 120668617681LL;

    t105 = (x429%((x430%x431)|x432));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x433 = -2;
	int64_t x435 = INT64_MIN;
	volatile uint32_t x436 = 13U;
	volatile int64_t t106 = -11212LL;

    t106 = (x433%((x434%x435)|x436));

    if (t106 != -2LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x440 = 7U;
	static volatile int64_t t107 = 1LL;

    t107 = (x437%((x438%x439)|x440));

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x441 = -2;
	static uint64_t x442 = 91650311270LLU;
	volatile uint64_t t108 = 2145LLU;

    t108 = (x441%((x442%x443)|x444));

    if (t108 != 15256LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x447 = INT32_MIN;
	uint64_t x448 = 57185551574151LLU;
	uint64_t t109 = 5943376873537833LLU;

    t109 = (x445%((x446%x447)|x448));

    if (t109 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x449 = UINT16_MAX;
	uint8_t x450 = 37U;
	int8_t x451 = -1;
	uint8_t x452 = 3U;
	volatile int32_t t110 = 0;

    t110 = (x449%((x450%x451)|x452));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x453 = 25;
	int16_t x454 = -5026;
	uint64_t x455 = 122333LLU;
	int16_t x456 = INT16_MIN;
	volatile uint64_t t111 = 17714785431039LLU;

    t111 = (x453%((x454%x455)|x456));

    if (t111 != 25LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x457 = INT16_MAX;
	volatile int64_t x458 = -98918854392686LL;
	int8_t x459 = INT8_MIN;
	volatile int64_t t112 = 1679409935238537714LL;

    t112 = (x457%((x458%x459)|x460));

    if (t112 != 43LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x461 = -1;
	int8_t x462 = -63;
	volatile int64_t x463 = INT64_MIN;
	int64_t t113 = 2075140029672024LL;

    t113 = (x461%((x462%x463)|x464));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x466 = -1;
	static int64_t x467 = INT64_MIN;
	int64_t t114 = 247224LL;

    t114 = (x465%((x466%x467)|x468));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x469 = 5287U;
	int16_t x470 = INT16_MIN;
	static int64_t x472 = -1LL;
	int64_t t115 = -1081307220595012LL;

    t115 = (x469%((x470%x471)|x472));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x474 = INT64_MIN;
	int64_t x476 = INT64_MAX;
	int64_t t116 = 213110582052885LL;

    t116 = (x473%((x474%x475)|x476));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x478 = -347226333710890LL;
	int8_t x479 = 19;
	int64_t x480 = -1LL;
	volatile int64_t t117 = 1079726514786LL;

    t117 = (x477%((x478%x479)|x480));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x481 = -26;
	int8_t x482 = -1;
	uint64_t x483 = 127LLU;
	uint64_t x484 = UINT64_MAX;
	static volatile uint64_t t118 = 1LLU;

    t118 = (x481%((x482%x483)|x484));

    if (t118 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int32_t x485 = INT32_MIN;
	uint32_t x486 = 58U;
	int32_t x487 = INT32_MIN;
	int32_t x488 = 56766577;
	volatile uint32_t t119 = 233096U;

    t119 = (x485%((x486%x487)|x488));

    if (t119 != 47119929U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x489 = 10U;
	static volatile int64_t x490 = -1LL;
	int64_t x492 = -1LL;

    t120 = (x489%((x490%x491)|x492));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x493 = -1;
	int64_t x494 = INT64_MIN;
	int32_t x495 = -1;
	volatile uint32_t x496 = UINT32_MAX;
	volatile int64_t t121 = 0LL;

    t121 = (x493%((x494%x495)|x496));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x497 = 3329515LLU;
	static int8_t x498 = 3;
	volatile int32_t x499 = INT32_MAX;
	static uint64_t t122 = 282LLU;

    t122 = (x497%((x498%x499)|x500));

    if (t122 != 3329515LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x501 = 0;
	int32_t x502 = INT32_MIN;
	int32_t x503 = -1;
	uint64_t x504 = 7407784296517777016LLU;

    t123 = (x501%((x502%x503)|x504));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x506 = 22U;
	int16_t x507 = INT16_MIN;
	static int64_t x508 = INT64_MIN;
	volatile int64_t t124 = -2899LL;

    t124 = (x505%((x506%x507)|x508));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x509 = INT16_MIN;
	static uint32_t x510 = 66587U;
	int32_t x512 = -62;

    t125 = (x509%((x510%x511)|x512));

    if (t125 != -23LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x513 = -1;
	uint32_t x514 = 1515382U;
	int32_t x515 = 88642421;
	volatile uint32_t x516 = 98U;
	uint32_t t126 = 1322U;

    t126 = (x513%((x514%x515)|x516));

    if (t126 != 374707U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x517 = 330797;
	int8_t x518 = INT8_MAX;
	volatile int32_t t127 = -243216;

    t127 = (x517%((x518%x519)|x520));

    if (t127 != 3122) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x521 = INT8_MAX;
	uint16_t x522 = UINT16_MAX;
	volatile int32_t x523 = INT32_MIN;
	int32_t t128 = -140;

    t128 = (x521%((x522%x523)|x524));

    if (t128 != 127) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int8_t x526 = INT8_MIN;
	int64_t t129 = -33011232LL;

    t129 = (x525%((x526%x527)|x528));

    if (t129 != -32768LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x529 = -1;
	int64_t x530 = INT64_MIN;
	int64_t x531 = INT64_MAX;
	int64_t x532 = 3761960121LL;

    t130 = (x529%((x530%x531)|x532));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x533 = -115963244052LL;
	uint32_t x534 = 11095553U;
	static volatile int64_t t131 = 370248124416940533LL;

    t131 = (x533%((x534%x535)|x536));

    if (t131 != -4294097658LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x542 = INT32_MIN;
	volatile int8_t x544 = INT8_MAX;
	volatile uint32_t t132 = 3U;

    t132 = (x541%((x542%x543)|x544));

    if (t132 != 2147483456U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x545 = INT64_MIN;
	int8_t x546 = -5;

    t133 = (x545%((x546%x547)|x548));

    if (t133 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x549 = INT16_MIN;
	static volatile uint16_t x550 = UINT16_MAX;
	static uint32_t x551 = 29245557U;
	int64_t x552 = INT64_MIN;

    t134 = (x549%((x550%x551)|x552));

    if (t134 != -32768LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x554 = 0;
	uint32_t x556 = 250225U;
	uint32_t t135 = 117365U;

    t135 = (x553%((x554%x555)|x556));

    if (t135 != 32767U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x557 = UINT32_MAX;
	int16_t x558 = -1;
	int16_t x560 = INT16_MAX;
	volatile uint32_t t136 = 6U;

    t136 = (x557%((x558%x559)|x560));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x562 = INT8_MIN;
	uint8_t x563 = 82U;
	static int64_t x564 = INT64_MIN;
	int64_t t137 = -35698970999971073LL;

    t137 = (x561%((x562%x563)|x564));

    if (t137 != -26LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x565 = UINT8_MAX;
	int8_t x566 = 1;
	int64_t x567 = -14760380859LL;
	int8_t x568 = INT8_MIN;
	int64_t t138 = 1595794859LL;

    t138 = (x565%((x566%x567)|x568));

    if (t138 != 1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x569 = INT64_MIN;
	int32_t x571 = -1;
	int64_t x572 = INT64_MIN;
	int64_t t139 = -270060LL;

    t139 = (x569%((x570%x571)|x572));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x573 = 229LLU;
	uint32_t x574 = 4110328U;
	int8_t x576 = 14;
	volatile uint64_t t140 = 3328905024119309LLU;

    t140 = (x573%((x574%x575)|x576));

    if (t140 != 229LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x581 = -1LL;
	volatile int32_t x582 = INT32_MIN;
	int32_t x583 = INT32_MAX;
	int16_t x584 = -12645;

    t141 = (x581%((x582%x583)|x584));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x585 = 127U;
	static uint32_t x588 = UINT32_MAX;
	static uint32_t t142 = 1001093239U;

    t142 = (x585%((x586%x587)|x588));

    if (t142 != 127U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x589 = -1LL;
	static int32_t x590 = INT32_MIN;
	uint64_t x591 = UINT64_MAX;
	static uint8_t x592 = 0U;
	volatile uint64_t t143 = 3324590681195932140LLU;

    t143 = (x589%((x590%x591)|x592));

    if (t143 != 2147483647LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x593 = 25U;
	static int32_t x594 = INT32_MAX;
	int64_t x596 = -21068990443434908LL;
	volatile int64_t t144 = -11457LL;

    t144 = (x593%((x594%x595)|x596));

    if (t144 != 25LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x598 = -41;
	static int8_t x599 = -1;
	uint64_t x600 = UINT64_MAX;
	uint64_t t145 = 22586651406LLU;

    t145 = (x597%((x598%x599)|x600));

    if (t145 != 4186LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x601 = 0;
	int16_t x602 = INT16_MIN;
	static uint64_t x603 = 26021250360LLU;
	int32_t x604 = INT32_MIN;
	volatile uint64_t t146 = 804474851212669LLU;

    t146 = (x601%((x602%x603)|x604));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x605 = 176;
	uint8_t x606 = 2U;
	int64_t x607 = 59976LL;
	int64_t t147 = -135642233657219LL;

    t147 = (x605%((x606%x607)|x608));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x609 = UINT8_MAX;
	int16_t x610 = 1;

    t148 = (x609%((x610%x611)|x612));

    if (t148 != 255LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x613 = 1U;
	static int8_t x614 = INT8_MIN;
	uint8_t x615 = UINT8_MAX;
	int64_t x616 = INT64_MIN;

    t149 = (x613%((x614%x615)|x616));

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int16_t x617 = INT16_MIN;
	int64_t x618 = INT64_MIN;
	int16_t x619 = -7;
	static volatile int8_t x620 = INT8_MAX;
	volatile int64_t t150 = 6378808LL;

    t150 = (x617%((x618%x619)|x620));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x621 = -15635772;
	static volatile int8_t x622 = INT8_MAX;
	static uint32_t x623 = UINT32_MAX;

    t151 = (x621%((x622%x623)|x624));

    if (t151 != 103U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x625 = INT32_MIN;
	int64_t x626 = INT64_MIN;
	int16_t x627 = INT16_MAX;
	static volatile int16_t x628 = INT16_MIN;
	volatile int64_t t152 = -247236775382024400LL;

    t152 = (x625%((x626%x627)|x628));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x629 = INT32_MIN;
	uint16_t x630 = 22852U;
	int8_t x631 = 1;
	static volatile uint32_t x632 = 236545464U;
	volatile uint32_t t153 = 186300178U;

    t153 = (x629%((x630%x631)|x632));

    if (t153 != 18574472U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x634 = INT64_MIN;
	uint8_t x635 = UINT8_MAX;
	volatile int8_t x636 = INT8_MIN;
	static int64_t t154 = 0LL;

    t154 = (x633%((x634%x635)|x636));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x637 = 3892;
	uint64_t x638 = 40517841396LLU;
	int64_t x639 = INT64_MAX;
	int32_t x640 = INT32_MAX;
	uint64_t t155 = 645LLU;

    t155 = (x637%((x638%x639)|x640));

    if (t155 != 3892LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x641 = -1;
	int8_t x643 = -3;
	int16_t x644 = -1;
	volatile int32_t t156 = 361306161;

    t156 = (x641%((x642%x643)|x644));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x645 = INT8_MAX;
	uint16_t x646 = 1435U;
	int16_t x647 = 64;
	int8_t x648 = 8;
	int32_t t157 = 2513;

    t157 = (x645%((x646%x647)|x648));

    if (t157 != 19) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x649 = INT64_MAX;
	int32_t x651 = INT32_MIN;
	int16_t x652 = INT16_MIN;
	volatile int64_t t158 = -478663640LL;

    t158 = (x649%((x650%x651)|x652));

    if (t158 != 32767LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x653 = INT64_MAX;
	int8_t x656 = INT8_MIN;
	int64_t t159 = 3006003664022323906LL;

    t159 = (x653%((x654%x655)|x656));

    if (t159 != 127LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x657 = 442;
	static int32_t x658 = -1640202;
	uint32_t x659 = 33920921U;
	volatile uint64_t x660 = 341231759639698LLU;

    t160 = (x657%((x658%x659)|x660));

    if (t160 != 442LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x661 = -3216;
	static uint8_t x662 = 38U;
	uint16_t x664 = 2U;

    t161 = (x661%((x662%x663)|x664));

    if (t161 != 20U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x665 = INT32_MAX;
	int64_t x666 = -1862195499763LL;
	uint16_t x667 = UINT16_MAX;
	int16_t x668 = -386;
	static int64_t t162 = -1670792752679LL;

    t162 = (x665%((x666%x667)|x668));

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x669 = UINT16_MAX;
	int64_t x670 = INT64_MIN;
	int8_t x671 = -10;
	static int64_t x672 = -24694030156LL;
	int64_t t163 = -455692034610514159LL;

    t163 = (x669%((x670%x671)|x672));

    if (t163 != 3LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x673 = 16U;
	uint8_t x675 = 2U;
	int16_t x676 = -1;
	volatile int64_t t164 = 147LL;

    t164 = (x673%((x674%x675)|x676));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x677 = 212;
	int64_t x678 = INT64_MIN;
	uint16_t x680 = UINT16_MAX;
	uint64_t t165 = 6512850896126171808LLU;

    t165 = (x677%((x678%x679)|x680));

    if (t165 != 212LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x683 = -1;
	int8_t x684 = INT8_MAX;
	int32_t t166 = 11;

    t166 = (x681%((x682%x683)|x684));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x685 = INT16_MIN;
	static int16_t x688 = -1;

    t167 = (x685%((x686%x687)|x688));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x689 = INT64_MAX;
	volatile int64_t x690 = INT64_MIN;
	int32_t x691 = INT32_MIN;
	int64_t t168 = -3006663148207205481LL;

    t168 = (x689%((x690%x691)|x692));

    if (t168 != 32767LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x694 = INT64_MAX;
	uint16_t x695 = UINT16_MAX;
	static int16_t x696 = INT16_MIN;
	int64_t t169 = -31LL;

    t169 = (x693%((x694%x695)|x696));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x697 = 1U;
	static int64_t x698 = -226793802759371815LL;
	int32_t x700 = INT32_MIN;

    t170 = (x697%((x698%x699)|x700));

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x701 = INT32_MAX;
	volatile uint8_t x702 = 16U;
	int8_t x703 = INT8_MIN;
	static uint8_t x704 = 80U;
	static volatile int32_t t171 = 5;

    t171 = (x701%((x702%x703)|x704));

    if (t171 != 47) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x705 = -4006118;
	uint64_t x706 = 22863957113877339LLU;
	int16_t x707 = 1174;
	static uint8_t x708 = UINT8_MAX;

    t172 = (x705%((x706%x707)|x708));

    if (t172 != 459LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x709 = INT32_MAX;
	int32_t x711 = -30;
	volatile int16_t x712 = INT16_MAX;
	static int64_t t173 = 125976LL;

    t173 = (x709%((x710%x711)|x712));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x713 = INT32_MIN;
	static int32_t x714 = INT32_MIN;
	volatile int32_t x715 = INT32_MIN;
	volatile int32_t t174 = 1;

    t174 = (x713%((x714%x715)|x716));

    if (t174 != -632) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x718 = INT16_MIN;
	int64_t x719 = INT64_MIN;
	int16_t x720 = 176;
	uint64_t t175 = 7LLU;

    t175 = (x717%((x718%x719)|x720));

    if (t175 != 56560538442181LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x722 = UINT16_MAX;
	int32_t x723 = INT32_MAX;
	static int16_t x724 = -6;
	int32_t t176 = -20712;

    t176 = (x721%((x722%x723)|x724));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x725 = 194U;
	int8_t x726 = -1;
	uint64_t x727 = 17938894785524LLU;
	int16_t x728 = INT16_MIN;
	uint64_t t177 = 3599862LLU;

    t177 = (x725%((x726%x727)|x728));

    if (t177 != 194LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x729 = INT8_MAX;
	volatile int8_t x730 = -1;
	static int32_t x732 = INT32_MAX;

    t178 = (x729%((x730%x731)|x732));

    if (t178 != 127) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x733 = 1868025U;
	int16_t x734 = INT16_MIN;
	static int8_t x735 = -1;
	int64_t x736 = 180706LL;
	int64_t t179 = -933182874210576LL;

    t179 = (x733%((x734%x735)|x736));

    if (t179 != 60965LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x737 = -18744;
	static uint32_t x738 = 2102909272U;
	static uint16_t x739 = 28U;
	int32_t x740 = 65822687;
	volatile uint32_t t180 = 519136862U;

    t180 = (x737%((x738%x739)|x740));

    if (t180 != 16473897U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x741 = INT16_MIN;
	uint8_t x742 = 0U;
	int32_t x743 = -199571;
	int16_t x744 = INT16_MIN;
	static volatile int32_t t181 = 67062;

    t181 = (x741%((x742%x743)|x744));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x745 = 141503LLU;
	int8_t x746 = INT8_MAX;
	int64_t x747 = INT64_MIN;
	uint64_t x748 = UINT64_MAX;
	uint64_t t182 = 3LLU;

    t182 = (x745%((x746%x747)|x748));

    if (t182 != 141503LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x750 = -1LL;
	uint16_t x752 = 11568U;
	int64_t t183 = 8338LL;

    t183 = (x749%((x750%x751)|x752));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x753 = 8142328005373419LLU;
	int16_t x754 = INT16_MAX;
	int8_t x755 = INT8_MIN;

    t184 = (x753%((x754%x755)|x756));

    if (t184 != 8142328005373419LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x757 = -1LL;
	int16_t x759 = INT16_MIN;
	uint64_t x760 = UINT64_MAX;
	uint64_t t185 = 174893595LLU;

    t185 = (x757%((x758%x759)|x760));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x762 = -60792501204771LL;
	volatile int64_t x763 = 189248LL;
	int16_t x764 = -1;

    t186 = (x761%((x762%x763)|x764));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x765 = 10U;
	volatile uint32_t x766 = 2940140U;
	uint8_t x767 = 4U;
	int64_t x768 = INT64_MIN;
	volatile int64_t t187 = -3601588788611838848LL;

    t187 = (x765%((x766%x767)|x768));

    if (t187 != 10LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x769 = 2U;
	int32_t x772 = INT32_MAX;
	int32_t t188 = 7;

    t188 = (x769%((x770%x771)|x772));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x774 = -1;
	int64_t x775 = INT64_MIN;
	int32_t x776 = -1;
	uint64_t t189 = 10653698LLU;

    t189 = (x773%((x774%x775)|x776));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x777 = -64322681;
	uint64_t x778 = 389471658883LLU;
	static uint32_t x779 = UINT32_MAX;
	volatile uint32_t x780 = 62136U;
	uint64_t t190 = 1605426026235LLU;

    t190 = (x777%((x778%x779)|x780));

    if (t190 != 871064823LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x781 = 43361679067371LLU;
	volatile int16_t x783 = INT16_MAX;
	int16_t x784 = -1;
	static uint64_t t191 = 1055804270187444757LLU;

    t191 = (x781%((x782%x783)|x784));

    if (t191 != 43361679067371LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x785 = -1;
	int32_t x786 = INT32_MIN;
	volatile int64_t x787 = INT64_MAX;
	uint64_t x788 = 1849647550222013929LLU;
	volatile uint64_t t192 = 642927367LLU;

    t192 = (x785%((x786%x787)|x788));

    if (t192 != 1498966550LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x789 = UINT32_MAX;
	uint8_t x790 = 7U;
	int8_t x791 = -1;
	volatile uint32_t x792 = 1696712899U;
	uint32_t t193 = 84U;

    t193 = (x789%((x790%x791)|x792));

    if (t193 != 901541497U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x795 = INT16_MIN;
	static int16_t x796 = -1;
	volatile int32_t t194 = 834734;

    t194 = (x793%((x794%x795)|x796));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x797 = INT64_MAX;
	int8_t x798 = -51;
	volatile uint16_t x799 = 2485U;
	static volatile uint32_t x800 = 5941U;
	volatile int64_t t195 = 77085854007LL;

    t195 = (x797%((x798%x799)|x800));

    if (t195 != 2147483650LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x801 = 59520U;
	static uint64_t x802 = UINT64_MAX;
	volatile int8_t x803 = -1;
	int64_t x804 = INT64_MAX;
	static volatile uint64_t t196 = 6317563947LLU;

    t196 = (x801%((x802%x803)|x804));

    if (t196 != 59520LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x805 = INT64_MAX;
	int32_t x806 = 171869;
	volatile uint32_t x807 = UINT32_MAX;
	int8_t x808 = INT8_MIN;
	static int64_t t197 = 432373460LL;

    t197 = (x805%((x806%x807)|x808));

    if (t197 != 2147484242LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x809 = 73U;
	uint8_t x810 = 90U;
	volatile int16_t x811 = INT16_MAX;
	int16_t x812 = -1;
	volatile int32_t t198 = 202;

    t198 = (x809%((x810%x811)|x812));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x813 = UINT32_MAX;
	static int32_t x815 = INT32_MIN;
	volatile int16_t x816 = 7870;
	volatile uint32_t t199 = 841871385U;

    t199 = (x813%((x814%x815)|x816));

    if (t199 != 0U) { NG(); } else { ; }
	
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

