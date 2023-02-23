
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

uint32_t x1 = UINT32_MAX;
uint64_t x12 = 6416121LLU;
int8_t x13 = INT8_MAX;
int64_t x16 = -1LL;
static volatile int32_t x20 = INT32_MIN;
static int32_t t3 = -41;
int16_t x22 = -11509;
int32_t x23 = -1;
static uint8_t x30 = 92U;
uint32_t x36 = 2426U;
uint32_t x40 = 5U;
static uint32_t t8 = 28373U;
static volatile int32_t t9 = 115985;
static int16_t x46 = -1;
uint64_t x49 = UINT64_MAX;
volatile uint64_t t11 = 22747806508LLU;
static int16_t x53 = INT16_MIN;
volatile int64_t t13 = -1LL;
uint32_t x66 = 210261596U;
uint32_t t15 = 2900U;
uint32_t x75 = 3299U;
uint64_t x79 = UINT64_MAX;
int8_t x82 = INT8_MIN;
uint8_t x93 = 29U;
static int64_t x95 = INT64_MIN;
int8_t x97 = INT8_MIN;
uint32_t x98 = UINT32_MAX;
volatile uint32_t t22 = 14918U;
volatile int32_t t23 = 157748;
volatile uint64_t x111 = 9053398882019LLU;
static int16_t x113 = -3;
int32_t x115 = -80430513;
int16_t x116 = -845;
static uint32_t x123 = 3658U;
int32_t x124 = 17910;
int16_t x138 = INT16_MIN;
uint32_t x149 = 434298342U;
volatile int32_t t34 = -71561;
volatile int16_t x162 = INT16_MIN;
int32_t x163 = -27918185;
uint64_t t36 = 18436LLU;
uint16_t x165 = UINT16_MAX;
int16_t x173 = INT16_MAX;
int32_t x184 = -1;
int32_t t42 = 1963760;
int32_t x192 = 63;
volatile int64_t x196 = -40620LL;
int64_t x204 = INT64_MAX;
int16_t x206 = 3;
int32_t t47 = -2;
static uint32_t x214 = 11U;
static int32_t x218 = 24089;
static int8_t x219 = -16;
static int64_t x221 = INT64_MIN;
static uint32_t x223 = UINT32_MAX;
int16_t x228 = INT16_MIN;
int16_t x231 = -1;
volatile int32_t x236 = INT32_MIN;
int16_t x243 = -1;
int16_t x264 = INT16_MAX;
volatile int8_t x274 = INT8_MIN;
volatile int64_t x276 = 147LL;
int64_t t61 = -232LL;
uint8_t x281 = 7U;
static uint32_t t63 = 1951819U;
volatile int16_t x286 = 2;
static volatile uint32_t t64 = 929187455U;
volatile int32_t t67 = -69550;
volatile uint32_t t68 = 6307552U;
static int8_t x308 = INT8_MIN;
static int32_t x311 = -1;
uint64_t t70 = 32857789897393LLU;
int16_t x328 = 147;
int16_t x329 = -300;
uint8_t x334 = 1U;
uint8_t x338 = 6U;
uint64_t x342 = 1243830LLU;
int32_t x345 = INT32_MIN;
uint32_t x346 = 1515577884U;
volatile int64_t x350 = INT64_MIN;
uint64_t x351 = 1789546349657417784LLU;
int32_t x357 = INT32_MIN;
int16_t x358 = INT16_MIN;
volatile int64_t t82 = 21176692474LL;
int8_t x372 = INT8_MIN;
volatile int64_t x378 = INT64_MAX;
uint64_t x388 = 38036298126522LLU;
static uint64_t t86 = 124LLU;
volatile uint32_t x389 = 57805600U;
uint32_t x390 = UINT32_MAX;
uint32_t x391 = UINT32_MAX;
volatile int8_t x394 = INT8_MIN;
int64_t x398 = -7559LL;
static int32_t x403 = -1;
volatile uint32_t x417 = UINT32_MAX;
int8_t x419 = INT8_MIN;
volatile uint32_t x425 = 3191U;
int32_t x433 = INT32_MAX;
static uint32_t x438 = 502U;
volatile int64_t x443 = INT64_MIN;
int32_t x461 = INT32_MIN;
int8_t x466 = 1;
int8_t x474 = INT8_MIN;
int64_t t106 = -2168368540540017LL;
static volatile uint32_t x478 = 73160697U;
uint16_t x485 = 419U;
static int64_t x488 = INT64_MAX;
static int32_t x495 = -99;
volatile int8_t x497 = 2;
int64_t x507 = INT64_MIN;
static uint8_t x510 = 113U;
uint32_t x527 = UINT32_MAX;
volatile uint64_t x528 = 150808LLU;
static uint8_t x530 = 123U;
uint64_t t121 = 2564022LLU;
int64_t x541 = -1LL;
uint8_t x551 = 8U;
static int64_t x564 = INT64_MIN;
int8_t x569 = INT8_MIN;
int16_t x577 = INT16_MIN;
static uint8_t x579 = UINT8_MAX;
volatile int32_t x582 = INT32_MIN;
uint8_t x585 = 1U;
volatile int32_t x588 = -4482;
volatile int32_t t133 = -11202329;
uint64_t t136 = 3801602323066165751LLU;
int8_t x604 = INT8_MAX;
int32_t t138 = 1757;
static uint8_t x610 = 3U;
uint32_t x613 = UINT32_MAX;
volatile int64_t x615 = -2737937361382LL;
int64_t x618 = -1LL;
int16_t x620 = INT16_MIN;
int16_t x622 = INT16_MIN;
static int64_t x623 = INT64_MAX;
int16_t x624 = INT16_MAX;
volatile int32_t x628 = -64;
uint32_t x629 = UINT32_MAX;
volatile int64_t x632 = -1LL;
volatile int64_t t144 = -1174029252007LL;
volatile uint64_t t146 = 12446LLU;
uint32_t x646 = 2035U;
static int16_t x647 = INT16_MAX;
static uint32_t t148 = 304390U;
int64_t x652 = -150530917372656330LL;
int16_t x660 = -4968;
int32_t t154 = 1;
volatile int8_t x675 = -1;
int64_t x686 = -1LL;
volatile int64_t t158 = 126118394LL;
int8_t x690 = INT8_MIN;
volatile uint16_t x692 = 1U;
static uint32_t x700 = 5643823U;
uint32_t t161 = 2U;
int64_t x703 = -14634LL;
volatile int64_t t162 = 2LL;
int64_t x710 = 1964106LL;
static uint32_t x712 = 180002318U;
uint8_t x714 = 2U;
uint8_t x718 = 4U;
int32_t x719 = INT32_MAX;
static uint32_t x728 = 1363913089U;
uint32_t x729 = 971370U;
uint32_t x747 = 7715524U;
volatile uint64_t t171 = 3390808776LLU;
uint8_t x753 = 8U;
static uint64_t x758 = 107338074283770436LLU;
int32_t x762 = 3946829;
int64_t x763 = -1LL;
static int16_t x767 = INT16_MIN;
int8_t x768 = 37;
int64_t x774 = INT64_MIN;
volatile int32_t x780 = INT32_MAX;
uint16_t x781 = UINT16_MAX;
volatile uint8_t x783 = UINT8_MAX;
int8_t x784 = INT8_MIN;
int32_t x787 = 1309288;
int16_t x803 = -1;
volatile int32_t x809 = INT32_MIN;
uint16_t x814 = UINT16_MAX;
int32_t x822 = INT32_MIN;
static uint64_t x835 = 3744162LLU;
int32_t x836 = INT32_MAX;
uint64_t t190 = 6090LLU;
uint64_t x842 = 22900204335756822LLU;
volatile int64_t x843 = -1LL;
uint64_t t192 = 95800893318329574LLU;
static int32_t x856 = -1;
uint32_t t193 = 121971485U;
static int16_t x871 = -1;
volatile uint8_t x884 = 73U;
uint32_t t199 = 5602U;


void f0(void) {
    	uint32_t x2 = 287530547U;
	static volatile uint16_t x3 = 6753U;
	static int64_t x4 = -1LL;
	volatile int64_t t0 = -60476364502300604LL;

    t0 = (x1%((x2%x3)+x4));

    if (t0 != 159LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x9 = INT64_MAX;
	uint32_t x10 = UINT32_MAX;
	uint64_t x11 = 5063122LLU;
	uint64_t t1 = 118080826423436LLU;

    t1 = (x9%((x10%x11)+x12));

    if (t1 != 4873687LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x14 = -1LL;
	uint8_t x15 = UINT8_MAX;
	int64_t t2 = 75859584357LL;

    t2 = (x13%((x14%x15)+x16));

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x17 = 2U;
	uint16_t x18 = 127U;
	int8_t x19 = 23;

    t3 = (x17%((x18%x19)+x20));

    if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = 3647235801085440LL;
	int64_t x24 = INT64_MIN;
	volatile int64_t t4 = 50299LL;

    t4 = (x21%((x22%x23)+x24));

    if (t4 != 3647235801085440LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	int8_t x26 = -2;
	int16_t x27 = INT16_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t5 = 12;

    t5 = (x25%((x26%x27)+x28));

    if (t5 != -8) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = 2705;
	static int32_t x31 = INT32_MAX;
	volatile int32_t x32 = 0;
	static int32_t t6 = -229388659;

    t6 = (x29%((x30%x31)+x32));

    if (t6 != 37) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = 164U;
	int8_t x34 = INT8_MAX;
	uint16_t x35 = UINT16_MAX;
	uint32_t t7 = 129U;

    t7 = (x33%((x34%x35)+x36));

    if (t7 != 164U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = 63;
	int16_t x38 = -6192;
	int16_t x39 = -409;

    t8 = (x37%((x38%x39)+x40));

    if (t8 != 63U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MAX;
	uint16_t x42 = 37U;
	static int8_t x43 = INT8_MAX;
	static volatile int8_t x44 = -1;

    t9 = (x41%((x42%x43)+x44));

    if (t9 != 19) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x45 = UINT32_MAX;
	int8_t x47 = -1;
	volatile int16_t x48 = INT16_MAX;
	uint32_t t10 = 74U;

    t10 = (x45%((x46%x47)+x48));

    if (t10 != 3U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x50 = 9U;
	uint16_t x51 = 47U;
	static int32_t x52 = -44335;

    t11 = (x49%((x50%x51)+x52));

    if (t11 != 44325LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x54 = 43U;
	uint32_t x55 = 265846536U;
	int64_t x56 = INT64_MIN;
	int64_t t12 = 1688846838LL;

    t12 = (x53%((x54%x55)+x56));

    if (t12 != -32768LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x57 = INT8_MAX;
	static int16_t x58 = INT16_MIN;
	uint8_t x59 = UINT8_MAX;
	int64_t x60 = -1LL;

    t13 = (x57%((x58%x59)+x60));

    if (t13 != 127LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = -1;
	int8_t x62 = -1;
	int16_t x63 = INT16_MIN;
	int32_t x64 = -1;
	static volatile int32_t t14 = -119;

    t14 = (x61%((x62%x63)+x64));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = 89U;
	uint32_t x67 = 1662389332U;
	volatile uint8_t x68 = 0U;

    t15 = (x65%((x66%x67)+x68));

    if (t15 != 89U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x69 = INT16_MIN;
	static volatile uint64_t x70 = 61659LLU;
	uint8_t x71 = 1U;
	static int64_t x72 = -8458496736914LL;
	uint64_t t16 = 3565856LLU;

    t16 = (x69%((x70%x71)+x72));

    if (t16 != 8458496704146LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = 1;
	uint64_t x74 = UINT64_MAX;
	int32_t x76 = -54;
	volatile uint64_t t17 = 27562LLU;

    t17 = (x73%((x74%x75)+x76));

    if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MIN;
	volatile int64_t x80 = -886320081641571LL;
	uint64_t t18 = 17389847467514065LLU;

    t18 = (x77%((x78%x79)+x80));

    if (t18 != 1772638015799494LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = INT32_MIN;
	static int16_t x83 = -1;
	volatile int16_t x84 = INT16_MAX;
	int32_t t19 = -4365208;

    t19 = (x81%((x82%x83)+x84));

    if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x85 = 113;
	int8_t x86 = INT8_MAX;
	static int8_t x87 = INT8_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t20 = -24;

    t20 = (x85%((x86%x87)+x88));

    if (t20 != 113) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x94 = INT32_MAX;
	volatile int16_t x96 = -1;
	int64_t t21 = -116LL;

    t21 = (x93%((x94%x95)+x96));

    if (t21 != 29LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x99 = -1;
	int8_t x100 = -1;

    t22 = (x97%((x98%x99)+x100));

    if (t22 != 4294967168U) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x101 = INT8_MIN;
	volatile int32_t x102 = INT32_MAX;
	int16_t x103 = -1;
	uint16_t x104 = 42U;

    t23 = (x101%((x102%x103)+x104));

    if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x109 = 14U;
	int32_t x110 = INT32_MAX;
	volatile int64_t x112 = -1LL;
	static uint64_t t24 = 1824729442374898LLU;

    t24 = (x109%((x110%x111)+x112));

    if (t24 != 14LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x114 = -27;
	static int32_t t25 = -51755016;

    t25 = (x113%((x114%x115)+x116));

    if (t25 != -3) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = 12;
	uint16_t x118 = 337U;
	int32_t x119 = INT32_MAX;
	int64_t x120 = INT64_MIN;
	static int64_t t26 = -12461616368LL;

    t26 = (x117%((x118%x119)+x120));

    if (t26 != 12LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x121 = 29;
	int16_t x122 = INT16_MIN;
	volatile uint32_t t27 = 5U;

    t27 = (x121%((x122%x123)+x124));

    if (t27 != 29U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x125 = INT8_MIN;
	int64_t x126 = INT64_MAX;
	int64_t x127 = 57LL;
	static volatile uint64_t x128 = 34174272827LLU;
	uint64_t t28 = 0LLU;

    t28 = (x125%((x126%x127)+x128));

    if (t28 != 8787525854LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x129 = INT16_MIN;
	uint32_t x130 = UINT32_MAX;
	int8_t x131 = -1;
	int32_t x132 = -2495;
	uint32_t t29 = 66426U;

    t29 = (x129%((x130%x131)+x132));

    if (t29 != 4294934528U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x133 = UINT32_MAX;
	int64_t x134 = -27807545433LL;
	int8_t x135 = 61;
	uint32_t x136 = UINT32_MAX;
	volatile int64_t t30 = -34LL;

    t30 = (x133%((x134%x135)+x136));

    if (t30 != 33LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x137 = -21;
	int32_t x139 = INT32_MAX;
	static int16_t x140 = 8671;
	int32_t t31 = -30911;

    t31 = (x137%((x138%x139)+x140));

    if (t31 != -21) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x145 = 258101;
	volatile int16_t x146 = INT16_MIN;
	static uint8_t x147 = 23U;
	int32_t x148 = 291014;
	volatile int32_t t32 = 312;

    t32 = (x145%((x146%x147)+x148));

    if (t32 != 258101) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x150 = 2129908729596LL;
	static volatile int16_t x151 = -1;
	int32_t x152 = -1;
	static volatile int64_t t33 = 2381LL;

    t33 = (x149%((x150%x151)+x152));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x153 = 1;
	int16_t x154 = INT16_MIN;
	volatile uint16_t x155 = UINT16_MAX;
	int16_t x156 = 63;

    t34 = (x153%((x154%x155)+x156));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x157 = UINT32_MAX;
	static uint8_t x158 = 25U;
	static int32_t x159 = INT32_MIN;
	int16_t x160 = -816;
	volatile uint32_t t35 = 266U;

    t35 = (x157%((x158%x159)+x160));

    if (t35 != 790U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x161 = UINT64_MAX;
	int8_t x164 = INT8_MIN;

    t36 = (x161%((x162%x163)+x164));

    if (t36 != 32895LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x166 = 0U;
	int32_t x167 = -295869320;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t37 = 21700538;

    t37 = (x165%((x166%x167)+x168));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x169 = 1775130877U;
	int16_t x170 = INT16_MIN;
	static volatile uint32_t x171 = 7390U;
	uint16_t x172 = 77U;
	uint32_t t38 = 681794406U;

    t38 = (x169%((x170%x171)+x172));

    if (t38 != 6172U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x174 = INT32_MAX;
	volatile int16_t x175 = 1;
	uint64_t x176 = UINT64_MAX;
	uint64_t t39 = 83354484172LLU;

    t39 = (x173%((x174%x175)+x176));

    if (t39 != 32767LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x177 = INT64_MAX;
	int16_t x178 = 1;
	int32_t x179 = INT32_MAX;
	uint64_t x180 = 22448905LLU;
	uint64_t t40 = 8300969747339541LLU;

    t40 = (x177%((x178%x179)+x180));

    if (t40 != 9714513LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x181 = 0;
	uint64_t x182 = UINT64_MAX;
	int8_t x183 = -1;
	volatile uint64_t t41 = 270735433764LLU;

    t41 = (x181%((x182%x183)+x184));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x185 = 83202;
	int16_t x186 = -1;
	volatile int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MIN;

    t42 = (x185%((x186%x187)+x188));

    if (t42 != 17664) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x189 = INT32_MAX;
	static int8_t x190 = INT8_MAX;
	static int16_t x191 = 7;
	volatile int32_t t43 = 809921505;

    t43 = (x189%((x190%x191)+x192));

    if (t43 != 63) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x193 = UINT16_MAX;
	int32_t x194 = -3129;
	uint64_t x195 = 7825632LLU;
	volatile uint64_t t44 = 35438682948089LLU;

    t44 = (x193%((x194%x195)+x196));

    if (t44 != 65535LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MIN;
	uint16_t x203 = 2U;
	volatile int64_t t45 = 8LL;

    t45 = (x201%((x202%x203)+x204));

    if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x205 = -654;
	uint8_t x207 = UINT8_MAX;
	int32_t x208 = INT32_MIN;
	static volatile int32_t t46 = -7373889;

    t46 = (x205%((x206%x207)+x208));

    if (t46 != -654) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = -1;
	int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MAX;
	uint8_t x212 = 15U;

    t47 = (x209%((x210%x211)+x212));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x213 = -14265LL;
	static volatile int8_t x215 = 1;
	static int8_t x216 = INT8_MAX;
	int64_t t48 = 67596384456637LL;

    t48 = (x213%((x214%x215)+x216));

    if (t48 != -41LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x217 = UINT32_MAX;
	uint32_t x220 = 7U;
	static volatile uint32_t t49 = 342805U;

    t49 = (x217%((x218%x219)+x220));

    if (t49 != 15U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x222 = 1U;
	int32_t x224 = INT32_MIN;
	volatile int64_t t50 = 156888131471091646LL;

    t50 = (x221%((x222%x223)+x224));

    if (t50 != -2LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x225 = UINT32_MAX;
	static volatile int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MIN;
	static uint32_t t51 = 92U;

    t51 = (x225%((x226%x227)+x228));

    if (t51 != 32767U) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x229 = -1;
	uint32_t x230 = 7U;
	volatile int32_t x232 = -287528;
	uint32_t t52 = 9U;

    t52 = (x229%((x230%x231)+x232));

    if (t52 != 287520U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x233 = UINT16_MAX;
	volatile int64_t x234 = -6952040456259556LL;
	static int32_t x235 = -3;
	volatile int64_t t53 = -64770LL;

    t53 = (x233%((x234%x235)+x236));

    if (t53 != 65535LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x241 = 4U;
	int8_t x242 = INT8_MAX;
	volatile int8_t x244 = INT8_MIN;
	volatile int32_t t54 = -21639;

    t54 = (x241%((x242%x243)+x244));

    if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x245 = INT8_MIN;
	int32_t x246 = -1;
	int64_t x247 = INT64_MIN;
	static uint32_t x248 = 25660U;
	static int64_t t55 = 4522794526LL;

    t55 = (x245%((x246%x247)+x248));

    if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x249 = UINT16_MAX;
	volatile uint16_t x250 = 35U;
	static int16_t x251 = -15080;
	int64_t x252 = 1298562366LL;
	int64_t t56 = -959LL;

    t56 = (x249%((x250%x251)+x252));

    if (t56 != 65535LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x253 = INT8_MIN;
	static uint16_t x254 = UINT16_MAX;
	int8_t x255 = INT8_MAX;
	int8_t x256 = INT8_MIN;
	int32_t t57 = -52996;

    t57 = (x253%((x254%x255)+x256));

    if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x261 = INT16_MIN;
	int32_t x262 = INT32_MIN;
	int64_t x263 = -1LL;
	static volatile int64_t t58 = -308046LL;

    t58 = (x261%((x262%x263)+x264));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x265 = -1;
	int16_t x266 = INT16_MAX;
	int16_t x267 = -1;
	static int16_t x268 = 5;
	volatile int32_t t59 = 0;

    t59 = (x265%((x266%x267)+x268));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x269 = INT16_MIN;
	volatile uint8_t x270 = 2U;
	int32_t x271 = -356;
	uint32_t x272 = 1471045U;
	uint32_t t60 = 159U;

    t60 = (x269%((x270%x271)+x272));

    if (t60 != 948335U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x273 = -131311360805367918LL;
	uint8_t x275 = 4U;

    t61 = (x273%((x274%x275)+x276));

    if (t61 != -84LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x277 = -2061774;
	int8_t x278 = INT8_MAX;
	int8_t x279 = -3;
	static uint64_t x280 = 3435999LLU;
	uint64_t t62 = 0LLU;

    t62 = (x277%((x278%x279)+x280));

    if (t62 != 2329842LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x282 = 5437U;
	uint32_t x283 = 37668U;
	uint16_t x284 = 84U;

    t63 = (x281%((x282%x283)+x284));

    if (t63 != 7U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x285 = UINT32_MAX;
	int32_t x287 = -199845708;
	volatile int32_t x288 = -1;

    t64 = (x285%((x286%x287)+x288));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x289 = INT32_MIN;
	static int16_t x290 = INT16_MAX;
	int32_t x291 = INT32_MIN;
	uint64_t x292 = 48233903529716510LLU;
	uint64_t t65 = 841223887LLU;

    t65 = (x289%((x290%x291)+x292));

    if (t65 != 21392923197844154LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x293 = INT64_MIN;
	static int64_t x294 = INT64_MIN;
	int64_t x295 = INT64_MIN;
	uint32_t x296 = 1027123245U;
	int64_t t66 = -17468LL;

    t66 = (x293%((x294%x295)+x296));

    if (t66 != -291344498LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x297 = INT8_MIN;
	static int32_t x298 = -1;
	int8_t x299 = INT8_MIN;
	int8_t x300 = -1;

    t67 = (x297%((x298%x299)+x300));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MIN;
	static uint32_t x303 = 27U;
	int32_t x304 = INT32_MAX;

    t68 = (x301%((x302%x303)+x304));

    if (t68 != 65535U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x305 = UINT16_MAX;
	static uint16_t x306 = 7669U;
	static volatile int32_t x307 = 6;
	int32_t t69 = -88;

    t69 = (x305%((x306%x307)+x308));

    if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint16_t x309 = UINT16_MAX;
	volatile uint64_t x310 = 127551LLU;
	int64_t x312 = -1LL;

    t70 = (x309%((x310%x311)+x312));

    if (t70 != 65535LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x313 = INT8_MIN;
	static int8_t x314 = -1;
	volatile int8_t x315 = INT8_MAX;
	int16_t x316 = INT16_MIN;
	static int32_t t71 = -356454;

    t71 = (x313%((x314%x315)+x316));

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x317 = 47LLU;
	uint32_t x318 = UINT32_MAX;
	volatile int8_t x319 = 6;
	int16_t x320 = -1;
	volatile uint64_t t72 = 7664193958637403867LLU;

    t72 = (x317%((x318%x319)+x320));

    if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x321 = -1499017;
	volatile int32_t x322 = INT32_MIN;
	int64_t x323 = INT64_MIN;
	int32_t x324 = INT32_MIN;
	int64_t t73 = 422879LL;

    t73 = (x321%((x322%x323)+x324));

    if (t73 != -1499017LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x325 = INT32_MIN;
	int64_t x326 = -3790740LL;
	uint8_t x327 = 1U;
	int64_t t74 = -648765LL;

    t74 = (x325%((x326%x327)+x328));

    if (t74 != -44LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x330 = 1;
	uint32_t x331 = 1919553586U;
	uint8_t x332 = 12U;
	volatile uint32_t t75 = 167067U;

    t75 = (x329%((x330%x331)+x332));

    if (t75 != 8U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x333 = 4069415350LLU;
	int16_t x335 = INT16_MIN;
	static int64_t x336 = -3983035LL;
	volatile uint64_t t76 = 29565295226LLU;

    t76 = (x333%((x334%x335)+x336));

    if (t76 != 4069415350LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x337 = INT8_MIN;
	int16_t x339 = INT16_MIN;
	int16_t x340 = 993;
	int32_t t77 = 7;

    t77 = (x337%((x338%x339)+x340));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x341 = 113436655LLU;
	static volatile int16_t x343 = -1;
	int8_t x344 = INT8_MAX;
	volatile uint64_t t78 = 2818705518033277913LLU;

    t78 = (x341%((x342%x343)+x344));

    if (t78 != 236568LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x347 = -1;
	volatile int16_t x348 = INT16_MAX;
	uint32_t t79 = 486U;

    t79 = (x345%((x346%x347)+x348));

    if (t79 != 631872997U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x349 = INT32_MAX;
	uint32_t x352 = UINT32_MAX;
	uint64_t t80 = 5194111486LLU;

    t80 = (x349%((x350%x351)+x352));

    if (t80 != 2147483647LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x359 = 1U;
	int16_t x360 = -570;
	static volatile int32_t t81 = -190;

    t81 = (x357%((x358%x359)+x360));

    if (t81 != -98) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x361 = 8;
	int8_t x362 = INT8_MIN;
	int64_t x363 = INT64_MIN;
	int16_t x364 = INT16_MIN;

    t82 = (x361%((x362%x363)+x364));

    if (t82 != 8LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x369 = INT64_MIN;
	uint32_t x370 = 1337122987U;
	volatile uint8_t x371 = UINT8_MAX;
	volatile int64_t t83 = -11512425LL;

    t83 = (x369%((x370%x371)+x372));

    if (t83 != -8LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x373 = UINT8_MAX;
	int64_t x374 = 5LL;
	int16_t x375 = INT16_MIN;
	static int32_t x376 = 18334;
	static volatile int64_t t84 = -1463625909LL;

    t84 = (x373%((x374%x375)+x376));

    if (t84 != 255LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x377 = UINT32_MAX;
	volatile int8_t x379 = INT8_MIN;
	int16_t x380 = 93;
	int64_t t85 = 11869099956786259LL;

    t85 = (x377%((x378%x379)+x380));

    if (t85 != 135LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x385 = -33;
	int64_t x386 = INT64_MIN;
	int32_t x387 = 214580067;

    t86 = (x385%((x386%x387)+x388));

    if (t86 != 1635356140610LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x392 = INT64_MIN;
	int64_t t87 = 1608457248864533187LL;

    t87 = (x389%((x390%x391)+x392));

    if (t87 != 57805600LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x393 = -5;
	int16_t x395 = -7;
	uint8_t x396 = 22U;
	int32_t t88 = -30610293;

    t88 = (x393%((x394%x395)+x396));

    if (t88 != -5) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x397 = -45;
	volatile uint32_t x399 = 6216078U;
	int32_t x400 = INT32_MIN;
	volatile int64_t t89 = 3626706366286LL;

    t89 = (x397%((x398%x399)+x400));

    if (t89 != -45LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x401 = 479662U;
	volatile uint16_t x402 = 7830U;
	volatile uint16_t x404 = UINT16_MAX;
	uint32_t t90 = 1443501U;

    t90 = (x401%((x402%x403)+x404));

    if (t90 != 20917U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x409 = -1;
	int64_t x410 = -64937633LL;
	volatile uint64_t x411 = 793773023198849582LLU;
	static uint32_t x412 = 195732781U;
	uint64_t t91 = 7532933979750037LLU;

    t91 = (x409%((x410%x411)+x412));

    if (t91 != 20183667829332949LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x413 = 8590U;
	int16_t x414 = INT16_MIN;
	uint64_t x415 = UINT64_MAX;
	volatile int64_t x416 = -1LL;
	static volatile uint64_t t92 = 427260820902535LLU;

    t92 = (x413%((x414%x415)+x416));

    if (t92 != 8590LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x418 = INT32_MIN;
	volatile int64_t x420 = 161LL;
	static int64_t t93 = -575LL;

    t93 = (x417%((x418%x419)+x420));

    if (t93 != 80LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x426 = INT32_MAX;
	int8_t x427 = INT8_MIN;
	int32_t x428 = -1;
	volatile uint32_t t94 = 409550U;

    t94 = (x425%((x426%x427)+x428));

    if (t94 != 41U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x429 = UINT32_MAX;
	int16_t x430 = INT16_MAX;
	volatile uint16_t x431 = UINT16_MAX;
	int64_t x432 = INT64_MIN;
	volatile int64_t t95 = -10995468LL;

    t95 = (x429%((x430%x431)+x432));

    if (t95 != 4294967295LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x434 = 13LL;
	static uint16_t x435 = 21105U;
	int32_t x436 = INT32_MIN;
	int64_t t96 = 58071443092402925LL;

    t96 = (x433%((x434%x435)+x436));

    if (t96 != 12LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x437 = INT64_MAX;
	uint16_t x439 = UINT16_MAX;
	static uint32_t x440 = UINT32_MAX;
	volatile int64_t t97 = 13344499459007636LL;

    t97 = (x437%((x438%x439)+x440));

    if (t97 != 274LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x441 = INT16_MIN;
	int8_t x442 = -1;
	uint32_t x444 = 3539U;
	volatile int64_t t98 = 231852959949706481LL;

    t98 = (x441%((x442%x443)+x444));

    if (t98 != -926LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x445 = UINT32_MAX;
	int64_t x446 = INT64_MIN;
	volatile int32_t x447 = -465;
	int8_t x448 = -3;
	int64_t t99 = 2396705339581LL;

    t99 = (x445%((x446%x447)+x448));

    if (t99 != 3LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x449 = -1;
	int64_t x450 = INT64_MIN;
	volatile int8_t x451 = INT8_MIN;
	int32_t x452 = -1;
	int64_t t100 = -25308595LL;

    t100 = (x449%((x450%x451)+x452));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x453 = 12974U;
	static int64_t x454 = INT64_MAX;
	volatile uint64_t x455 = 59158741825LLU;
	static uint16_t x456 = UINT16_MAX;
	volatile uint64_t t101 = 6168123511170644247LLU;

    t101 = (x453%((x454%x455)+x456));

    if (t101 != 12974LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x457 = -474;
	uint64_t x458 = 701656LLU;
	uint32_t x459 = 1U;
	uint32_t x460 = 14169U;
	uint64_t t102 = 1044LLU;

    t102 = (x457%((x458%x459)+x460));

    if (t102 != 4123LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x462 = 12704192981LL;
	int8_t x463 = INT8_MIN;
	int32_t x464 = INT32_MAX;
	int64_t t103 = 2054355381108449382LL;

    t103 = (x461%((x462%x463)+x464));

    if (t103 != -2147483648LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x465 = -342;
	int16_t x467 = -112;
	uint8_t x468 = 5U;
	int32_t t104 = -29838;

    t104 = (x465%((x466%x467)+x468));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x469 = -1LL;
	int32_t x470 = 8;
	uint64_t x471 = UINT64_MAX;
	volatile int32_t x472 = INT32_MIN;
	uint64_t t105 = 2737973353189LLU;

    t105 = (x469%((x470%x471)+x472));

    if (t105 != 2147483639LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x473 = 267;
	int32_t x475 = 133766005;
	int64_t x476 = -1LL;

    t106 = (x473%((x474%x475)+x476));

    if (t106 != 9LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x477 = INT16_MIN;
	volatile int8_t x479 = INT8_MIN;
	int16_t x480 = INT16_MIN;
	volatile uint32_t t107 = 10834460U;

    t107 = (x477%((x478%x479)+x480));

    if (t107 != 53514646U) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x481 = 55;
	int16_t x482 = INT16_MAX;
	static volatile int64_t x483 = -1523110371607LL;
	int32_t x484 = 1983057;
	static int64_t t108 = -6765466688465LL;

    t108 = (x481%((x482%x483)+x484));

    if (t108 != 55LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x486 = UINT16_MAX;
	int32_t x487 = -1;
	int64_t t109 = -2LL;

    t109 = (x485%((x486%x487)+x488));

    if (t109 != 419LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	volatile uint8_t x490 = UINT8_MAX;
	static int8_t x491 = INT8_MAX;
	volatile int16_t x492 = INT16_MAX;
	static volatile uint64_t t110 = 56705570858LLU;

    t110 = (x489%((x490%x491)+x492));

    if (t110 != 32767LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x493 = 108U;
	uint8_t x494 = UINT8_MAX;
	int16_t x496 = -1;
	int32_t t111 = -6;

    t111 = (x493%((x494%x495)+x496));

    if (t111 != 52) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x498 = 2;
	uint32_t x499 = 16U;
	static int32_t x500 = INT32_MIN;
	uint32_t t112 = 129457U;

    t112 = (x497%((x498%x499)+x500));

    if (t112 != 2U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x501 = INT8_MAX;
	int64_t x502 = INT64_MIN;
	static uint8_t x503 = 1U;
	uint8_t x504 = 15U;
	volatile int64_t t113 = -61354560163834351LL;

    t113 = (x501%((x502%x503)+x504));

    if (t113 != 7LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x505 = 3;
	volatile uint8_t x506 = 11U;
	int8_t x508 = -1;
	int64_t t114 = 9877768LL;

    t114 = (x505%((x506%x507)+x508));

    if (t114 != 3LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x509 = 24587U;
	static volatile int32_t x511 = INT32_MIN;
	uint16_t x512 = 332U;
	int32_t t115 = -234446;

    t115 = (x509%((x510%x511)+x512));

    if (t115 != 112) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x513 = -1LL;
	uint32_t x514 = 114870U;
	int64_t x515 = INT64_MIN;
	static int16_t x516 = -1630;
	int64_t t116 = -9LL;

    t116 = (x513%((x514%x515)+x516));

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x517 = -10;
	static int16_t x518 = INT16_MAX;
	int16_t x519 = 1;
	int64_t x520 = INT64_MIN;
	volatile int64_t t117 = 325977759235306LL;

    t117 = (x517%((x518%x519)+x520));

    if (t117 != -10LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x521 = 0LL;
	static int32_t x522 = -1;
	int8_t x523 = 30;
	static int8_t x524 = INT8_MIN;
	int64_t t118 = -17991520326618227LL;

    t118 = (x521%((x522%x523)+x524));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x525 = -8325583395868LL;
	int16_t x526 = INT16_MAX;
	uint64_t t119 = 93297LLU;

    t119 = (x525%((x526%x527)+x528));

    if (t119 != 1573LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x529 = INT64_MAX;
	volatile int16_t x531 = INT16_MIN;
	int8_t x532 = 43;
	static volatile int64_t t120 = -2057522610946LL;

    t120 = (x529%((x530%x531)+x532));

    if (t120 != 17LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x533 = 3U;
	uint16_t x534 = 107U;
	uint64_t x535 = 12343264LLU;
	static int16_t x536 = INT16_MAX;

    t121 = (x533%((x534%x535)+x536));

    if (t121 != 3LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x542 = INT8_MIN;
	volatile int8_t x543 = INT8_MIN;
	volatile int64_t x544 = INT64_MAX;
	volatile int64_t t122 = 83LL;

    t122 = (x541%((x542%x543)+x544));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x545 = INT16_MIN;
	volatile int8_t x546 = -26;
	volatile uint16_t x547 = UINT16_MAX;
	int16_t x548 = INT16_MIN;
	int32_t t123 = -59456944;

    t123 = (x545%((x546%x547)+x548));

    if (t123 != -32768) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x549 = UINT32_MAX;
	static int16_t x550 = INT16_MAX;
	static volatile int8_t x552 = -1;
	uint32_t t124 = 59342U;

    t124 = (x549%((x550%x551)+x552));

    if (t124 != 3U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x553 = UINT8_MAX;
	int8_t x554 = INT8_MAX;
	int32_t x555 = INT32_MAX;
	int32_t x556 = INT32_MIN;
	int32_t t125 = -2802896;

    t125 = (x553%((x554%x555)+x556));

    if (t125 != 255) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x557 = -45;
	volatile uint64_t x558 = 3982LLU;
	volatile int64_t x559 = INT64_MIN;
	volatile int32_t x560 = INT32_MAX;
	uint64_t t126 = 14LLU;

    t126 = (x557%((x558%x559)+x560));

    if (t126 != 63393399LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x561 = 1361423U;
	volatile int8_t x562 = INT8_MAX;
	uint8_t x563 = 1U;
	volatile int64_t t127 = 183011652LL;

    t127 = (x561%((x562%x563)+x564));

    if (t127 != 1361423LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x565 = INT8_MIN;
	static uint32_t x566 = 4096762U;
	volatile uint64_t x567 = 76597617LLU;
	volatile int64_t x568 = INT64_MIN;
	static volatile uint64_t t128 = 72198LLU;

    t128 = (x565%((x566%x567)+x568));

    if (t128 != 9223372036850678918LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int8_t x570 = INT8_MIN;
	int16_t x571 = INT16_MIN;
	static uint32_t x572 = 428U;
	volatile uint32_t t129 = 1593716470U;

    t129 = (x569%((x570%x571)+x572));

    if (t129 != 68U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x573 = 33U;
	int8_t x574 = -1;
	int64_t x575 = INT64_MIN;
	int32_t x576 = INT32_MIN;
	static volatile int64_t t130 = 16573401489556LL;

    t130 = (x573%((x574%x575)+x576));

    if (t130 != 33LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x578 = 5U;
	uint16_t x580 = UINT16_MAX;
	volatile int32_t t131 = -38639;

    t131 = (x577%((x578%x579)+x580));

    if (t131 != -32768) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x581 = -1;
	int32_t x583 = -1;
	static int8_t x584 = INT8_MIN;
	int32_t t132 = -113;

    t132 = (x581%((x582%x583)+x584));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x586 = INT32_MAX;
	int8_t x587 = 1;

    t133 = (x585%((x586%x587)+x588));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x589 = 1;
	volatile uint32_t x590 = 457553U;
	volatile int32_t x591 = INT32_MIN;
	int32_t x592 = -1319;
	static volatile uint32_t t134 = 2043U;

    t134 = (x589%((x590%x591)+x592));

    if (t134 != 1U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x593 = 198;
	int64_t x594 = INT64_MAX;
	volatile int64_t x595 = 391789168LL;
	int32_t x596 = 7;
	int64_t t135 = 1158645908684LL;

    t135 = (x593%((x594%x595)+x596));

    if (t135 != 198LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x597 = UINT64_MAX;
	volatile int8_t x598 = INT8_MAX;
	volatile int16_t x599 = -1;
	int16_t x600 = -1;

    t136 = (x597%((x598%x599)+x600));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x601 = INT64_MIN;
	int16_t x602 = INT16_MAX;
	int8_t x603 = INT8_MIN;
	volatile int64_t t137 = 3031LL;

    t137 = (x601%((x602%x603)+x604));

    if (t137 != -128LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x605 = INT32_MIN;
	uint8_t x606 = UINT8_MAX;
	volatile int16_t x607 = INT16_MIN;
	volatile uint8_t x608 = 99U;

    t138 = (x605%((x606%x607)+x608));

    if (t138 != -350) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x609 = INT16_MAX;
	volatile uint16_t x611 = 1752U;
	int64_t x612 = -6625312680LL;
	static volatile int64_t t139 = -42011LL;

    t139 = (x609%((x610%x611)+x612));

    if (t139 != 32767LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x614 = 47915U;
	int16_t x616 = 14;
	volatile int64_t t140 = 375707211557004LL;

    t140 = (x613%((x614%x615)+x616));

    if (t140 != 1676LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x617 = INT64_MIN;
	static volatile int8_t x619 = -3;
	int64_t t141 = 1387LL;

    t141 = (x617%((x618%x619)+x620));

    if (t141 != -8LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x621 = UINT64_MAX;
	uint64_t t142 = 0LLU;

    t142 = (x621%((x622%x623)+x624));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x625 = INT16_MIN;
	volatile int32_t x626 = INT32_MIN;
	int64_t x627 = INT64_MIN;
	static int64_t t143 = -3LL;

    t143 = (x625%((x626%x627)+x628));

    if (t143 != -32768LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x630 = 8625022;
	uint8_t x631 = 38U;

    t144 = (x629%((x630%x631)+x632));

    if (t144 != 3LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x633 = 16827057U;
	int32_t x634 = 44946;
	int8_t x635 = 4;
	uint64_t x636 = 3779153LLU;
	uint64_t t145 = 7604699531LLU;

    t145 = (x633%((x634%x635)+x636));

    if (t145 != 1710437LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x637 = 1169237916LLU;
	int16_t x638 = INT16_MIN;
	static int16_t x639 = INT16_MIN;
	volatile uint64_t x640 = UINT64_MAX;

    t146 = (x637%((x638%x639)+x640));

    if (t146 != 1169237916LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x641 = INT32_MIN;
	volatile int64_t x642 = -2150567074LL;
	int16_t x643 = INT16_MAX;
	uint16_t x644 = 101U;
	volatile int64_t t147 = -269648008038253801LL;

    t147 = (x641%((x642%x643)+x644));

    if (t147 != -1679LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x645 = 0;
	uint16_t x648 = 20312U;

    t148 = (x645%((x646%x647)+x648));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x649 = INT8_MIN;
	uint8_t x650 = UINT8_MAX;
	volatile int32_t x651 = 54349;
	int64_t t149 = 8006857LL;

    t149 = (x649%((x650%x651)+x652));

    if (t149 != -128LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x653 = 7;
	volatile uint16_t x654 = 1U;
	volatile int16_t x655 = -1;
	volatile uint16_t x656 = 13U;
	volatile int32_t t150 = -14562;

    t150 = (x653%((x654%x655)+x656));

    if (t150 != 7) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x657 = -10LL;
	static int8_t x658 = INT8_MIN;
	volatile int16_t x659 = -1;
	int64_t t151 = 7LL;

    t151 = (x657%((x658%x659)+x660));

    if (t151 != -10LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x661 = -42LL;
	volatile int32_t x662 = INT32_MAX;
	volatile int64_t x663 = 1610LL;
	static int64_t x664 = INT64_MIN;
	int64_t t152 = 690693559LL;

    t152 = (x661%((x662%x663)+x664));

    if (t152 != -42LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x665 = INT16_MIN;
	int32_t x666 = 36780;
	static int8_t x667 = INT8_MIN;
	uint32_t x668 = 841609U;
	static uint32_t t153 = 51U;

    t153 = (x665%((x666%x667)+x668));

    if (t153 != 820922U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x669 = -1;
	int8_t x670 = INT8_MIN;
	uint8_t x671 = 9U;
	int32_t x672 = -127314071;

    t154 = (x669%((x670%x671)+x672));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x673 = 1461382U;
	int16_t x674 = INT16_MIN;
	int8_t x676 = INT8_MAX;
	uint32_t t155 = 202847294U;

    t155 = (x673%((x674%x675)+x676));

    if (t155 != 120U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x677 = 21564581;
	int8_t x678 = 13;
	volatile int64_t x679 = 935LL;
	uint8_t x680 = 122U;
	static int64_t t156 = 136439725484LL;

    t156 = (x677%((x678%x679)+x680));

    if (t156 != 86LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x681 = INT16_MAX;
	volatile int64_t x682 = INT64_MIN;
	int32_t x683 = INT32_MAX;
	int8_t x684 = -1;
	int64_t t157 = 2066522244599LL;

    t157 = (x681%((x682%x683)+x684));

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x685 = -1;
	int16_t x687 = 13;
	int16_t x688 = INT16_MAX;

    t158 = (x685%((x686%x687)+x688));

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x689 = UINT16_MAX;
	int16_t x691 = -1;
	int32_t t159 = -929830061;

    t159 = (x689%((x690%x691)+x692));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x693 = 1;
	static uint8_t x694 = 6U;
	uint16_t x695 = 215U;
	volatile int8_t x696 = -1;
	int32_t t160 = 6248696;

    t160 = (x693%((x694%x695)+x696));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x697 = INT8_MIN;
	int8_t x698 = -1;
	uint16_t x699 = UINT16_MAX;

    t161 = (x697%((x698%x699)+x700));

    if (t161 != 18626U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x701 = -1;
	uint16_t x702 = 364U;
	volatile int16_t x704 = -1;

    t162 = (x701%((x702%x703)+x704));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x709 = INT32_MAX;
	static int16_t x711 = -1;
	volatile int64_t t163 = 16015898LL;

    t163 = (x709%((x710%x711)+x712));

    if (t163 != 167458149LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x713 = 22U;
	volatile uint32_t x715 = UINT32_MAX;
	int32_t x716 = 343103493;
	volatile uint32_t t164 = 58U;

    t164 = (x713%((x714%x715)+x716));

    if (t164 != 22U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x717 = -7075085352919LL;
	static volatile uint8_t x720 = 94U;
	int64_t t165 = -11870817116LL;

    t165 = (x717%((x718%x719)+x720));

    if (t165 != -17LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x721 = -1;
	uint16_t x722 = UINT16_MAX;
	uint64_t x723 = 110915224550LLU;
	static int32_t x724 = INT32_MAX;
	static uint64_t t166 = 426370LLU;

    t166 = (x721%((x722%x723)+x724));

    if (t166 != 2145976349LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x725 = INT16_MIN;
	uint64_t x726 = 7675635465LLU;
	int64_t x727 = -1LL;
	static uint64_t t167 = 3763250229039499500LLU;

    t167 = (x725%((x726%x727)+x728));

    if (t167 != 1724052426LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x730 = INT8_MAX;
	uint64_t x731 = 15710770579176LLU;
	uint64_t x732 = 51330193397468607LLU;
	volatile uint64_t t168 = 51176421169181843LLU;

    t168 = (x729%((x730%x731)+x732));

    if (t168 != 971370LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x737 = 79708357036784766LL;
	uint32_t x738 = 37U;
	uint32_t x739 = UINT32_MAX;
	volatile uint32_t x740 = 3374875U;
	volatile int64_t t169 = -28466579489749190LL;

    t169 = (x737%((x738%x739)+x740));

    if (t169 != 3082110LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x745 = INT32_MIN;
	int64_t x746 = INT64_MAX;
	int8_t x748 = INT8_MIN;
	volatile int64_t t170 = -162801127025875393LL;

    t170 = (x745%((x746%x747)+x748));

    if (t170 != -6488042LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x749 = -3111;
	uint64_t x750 = 73251370516962LLU;
	uint64_t x751 = 4155566LLU;
	uint32_t x752 = UINT32_MAX;

    t171 = (x749%((x750%x751)+x752));

    if (t171 != 3639269619LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x754 = INT8_MIN;
	uint16_t x755 = 679U;
	uint32_t x756 = UINT32_MAX;
	uint32_t t172 = 3U;

    t172 = (x753%((x754%x755)+x756));

    if (t172 != 8U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x757 = 50U;
	volatile int8_t x759 = -1;
	uint64_t x760 = 153301516238156LLU;
	uint64_t t173 = 7390498LLU;

    t173 = (x757%((x758%x759)+x760));

    if (t173 != 50LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x761 = INT32_MIN;
	static int8_t x764 = INT8_MIN;
	volatile int64_t t174 = -2527079233943370LL;

    t174 = (x761%((x762%x763)+x764));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x765 = 22;
	int64_t x766 = -1LL;
	int64_t t175 = -132969257LL;

    t175 = (x765%((x766%x767)+x768));

    if (t175 != 22LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x773 = UINT8_MAX;
	int64_t x775 = -1LL;
	int16_t x776 = 4973;
	volatile int64_t t176 = 94754551595LL;

    t176 = (x773%((x774%x775)+x776));

    if (t176 != 255LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x777 = UINT64_MAX;
	int64_t x778 = INT64_MIN;
	int64_t x779 = INT64_MIN;
	uint64_t t177 = 13LLU;

    t177 = (x777%((x778%x779)+x780));

    if (t177 != 3LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x782 = -1;
	int32_t t178 = -234765;

    t178 = (x781%((x782%x783)+x784));

    if (t178 != 3) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x785 = INT16_MIN;
	uint16_t x786 = UINT16_MAX;
	int8_t x788 = 23;
	volatile int32_t t179 = -1793110;

    t179 = (x785%((x786%x787)+x788));

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x789 = -59;
	uint64_t x790 = UINT64_MAX;
	static int64_t x791 = -1LL;
	uint16_t x792 = 14U;
	volatile uint64_t t180 = 1387446LLU;

    t180 = (x789%((x790%x791)+x792));

    if (t180 != 13LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x793 = INT16_MIN;
	volatile int32_t x794 = -1;
	uint32_t x795 = 78438U;
	static int32_t x796 = -1;
	static uint32_t t181 = 10746U;

    t181 = (x793%((x794%x795)+x796));

    if (t181 != 146U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x801 = INT16_MIN;
	static uint8_t x802 = UINT8_MAX;
	uint64_t x804 = UINT64_MAX;
	uint64_t t182 = 242484LLU;

    t182 = (x801%((x802%x803)+x804));

    if (t182 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x805 = INT16_MAX;
	uint8_t x806 = 66U;
	volatile int64_t x807 = INT64_MIN;
	int32_t x808 = INT32_MAX;
	static int64_t t183 = -5560455LL;

    t183 = (x805%((x806%x807)+x808));

    if (t183 != 32767LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x810 = -1;
	int16_t x811 = 159;
	volatile int32_t x812 = 2703541;
	volatile int32_t t184 = 7931;

    t184 = (x809%((x810%x811)+x812));

    if (t184 != -872888) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x813 = 11582U;
	volatile int16_t x815 = INT16_MAX;
	uint16_t x816 = 3U;
	static int32_t t185 = -936;

    t185 = (x813%((x814%x815)+x816));

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x817 = -1LL;
	int16_t x818 = INT16_MIN;
	static int64_t x819 = INT64_MIN;
	int32_t x820 = INT32_MIN;
	static int64_t t186 = 5LL;

    t186 = (x817%((x818%x819)+x820));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x821 = -1;
	int16_t x823 = INT16_MAX;
	uint16_t x824 = 8600U;
	static volatile int32_t t187 = -489;

    t187 = (x821%((x822%x823)+x824));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x825 = 951571412099LLU;
	int64_t x826 = INT64_MAX;
	volatile int64_t x827 = -1LL;
	volatile int32_t x828 = -80319466;
	volatile uint64_t t188 = 202255650367934782LLU;

    t188 = (x825%((x826%x827)+x828));

    if (t188 != 951571412099LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x833 = 1865U;
	static uint16_t x834 = 26827U;
	volatile uint64_t t189 = 16512727487906LLU;

    t189 = (x833%((x834%x835)+x836));

    if (t189 != 1865LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x837 = UINT8_MAX;
	int64_t x838 = INT64_MIN;
	uint64_t x839 = 1009457626884032751LLU;
	int32_t x840 = INT32_MAX;

    t190 = (x837%((x838%x839)+x840));

    if (t190 != 255LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x841 = 11536U;
	int32_t x844 = -7854;
	volatile uint64_t t191 = 238457153755371LLU;

    t191 = (x841%((x842%x843)+x844));

    if (t191 != 11536LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x845 = 5U;
	uint32_t x846 = UINT32_MAX;
	volatile uint16_t x847 = 22U;
	uint64_t x848 = 0LLU;

    t192 = (x845%((x846%x847)+x848));

    if (t192 != 2LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x853 = -1;
	uint8_t x854 = 34U;
	uint32_t x855 = UINT32_MAX;

    t193 = (x853%((x854%x855)+x856));

    if (t193 != 3U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x861 = -20772643;
	int32_t x862 = INT32_MAX;
	int64_t x863 = INT64_MIN;
	int16_t x864 = 84;
	int64_t t194 = -4398LL;

    t194 = (x861%((x862%x863)+x864));

    if (t194 != -20772643LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x865 = UINT8_MAX;
	int64_t x866 = -1LL;
	volatile uint32_t x867 = 290U;
	int8_t x868 = 0;
	static volatile int64_t t195 = -22980388LL;

    t195 = (x865%((x866%x867)+x868));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x869 = UINT8_MAX;
	int32_t x870 = INT32_MAX;
	int8_t x872 = INT8_MAX;
	volatile int32_t t196 = -224985;

    t196 = (x869%((x870%x871)+x872));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x873 = 634782858545920LL;
	int16_t x874 = -4;
	volatile uint32_t x875 = 6467U;
	int32_t x876 = INT32_MIN;
	int64_t t197 = 2LL;

    t197 = (x873%((x874%x875)+x876));

    if (t197 != 2025503080LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x877 = 20U;
	int32_t x878 = 912326845;
	uint32_t x879 = 44598U;
	int64_t x880 = INT64_MIN;
	int64_t t198 = -8385568642LL;

    t198 = (x877%((x878%x879)+x880));

    if (t198 != 20LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x881 = 9;
	static uint32_t x882 = UINT32_MAX;
	static int8_t x883 = INT8_MAX;

    t199 = (x881%((x882%x883)+x884));

    if (t199 != 9U) { NG(); } else { ; }
	
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

