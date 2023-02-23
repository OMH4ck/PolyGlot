
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

int16_t x5 = INT16_MIN;
int16_t x6 = INT16_MIN;
static int64_t t1 = 8LL;
int64_t x9 = INT64_MAX;
int64_t x10 = -17972094753076090LL;
int64_t x11 = -94489370922LL;
uint16_t x12 = UINT16_MAX;
volatile int64_t x13 = 23629LL;
volatile int8_t x18 = 1;
volatile uint16_t x19 = 656U;
int64_t t4 = -84919324240868LL;
int16_t x21 = -1;
volatile int32_t t5 = -67708;
static int8_t x27 = INT8_MIN;
int32_t t6 = 211;
uint8_t x31 = UINT8_MAX;
int16_t x33 = -1;
volatile uint64_t x36 = 5LLU;
volatile int16_t x39 = INT16_MAX;
int32_t t9 = -2226345;
int32_t x47 = 5751305;
uint32_t x57 = UINT32_MAX;
static uint8_t x61 = 50U;
int16_t x65 = INT16_MAX;
uint16_t x71 = UINT16_MAX;
volatile int32_t t19 = 480284;
uint16_t x81 = 6U;
volatile uint64_t t20 = 204940102440LLU;
volatile int64_t x93 = INT64_MAX;
volatile int64_t x99 = INT64_MIN;
static volatile uint32_t x105 = UINT32_MAX;
int8_t x106 = INT8_MAX;
uint32_t x111 = 1161U;
static int8_t x112 = INT8_MIN;
static volatile int16_t x114 = INT16_MIN;
uint64_t t28 = 99LLU;
static int8_t x117 = 7;
static int32_t x120 = -1;
volatile int32_t t29 = 249016;
int8_t x124 = -1;
int64_t x128 = -4239823811804529805LL;
int32_t x130 = -1;
uint64_t x133 = UINT64_MAX;
static uint16_t x141 = UINT16_MAX;
uint64_t x144 = 27066674889329076LLU;
uint32_t x147 = UINT32_MAX;
int16_t x149 = INT16_MAX;
int8_t x162 = INT8_MIN;
int64_t x163 = -1LL;
uint32_t x171 = 1441676U;
int32_t x174 = INT32_MIN;
int64_t x193 = INT64_MIN;
int32_t x196 = -1;
volatile uint64_t x199 = 98713153LLU;
static uint16_t x215 = 342U;
int16_t x219 = -1;
int32_t x223 = -38213440;
volatile uint8_t x225 = 7U;
volatile uint32_t x228 = 119790217U;
volatile uint32_t t55 = 165U;
static int32_t x231 = INT32_MAX;
int32_t x237 = -672055;
int64_t x245 = -555904936LL;
static uint64_t x257 = UINT64_MAX;
uint16_t x259 = 419U;
static int8_t x262 = INT8_MIN;
uint8_t x263 = 3U;
static volatile int32_t t64 = -206938;
volatile uint64_t x274 = 3129849933873LLU;
static volatile int8_t x277 = INT8_MIN;
uint64_t x280 = 2737422LLU;
int32_t x282 = INT32_MIN;
int32_t x283 = 174;
uint32_t x287 = 84251081U;
volatile int64_t t70 = -733120715LL;
int32_t x302 = -1;
uint64_t x303 = 12446325049284788LLU;
int8_t x308 = INT8_MIN;
int32_t x310 = INT32_MAX;
int32_t x312 = INT32_MIN;
int16_t x313 = -9;
uint32_t t76 = 1592941U;
static volatile uint32_t x317 = 64489372U;
uint64_t x320 = 533LLU;
static uint64_t t77 = 489963732LLU;
volatile uint8_t x322 = 16U;
volatile int64_t x334 = INT64_MAX;
static volatile int32_t x336 = INT32_MIN;
int64_t t81 = -463406362282694579LL;
volatile int16_t x353 = -342;
static int8_t x362 = INT8_MIN;
uint32_t t88 = 822U;
static int32_t x365 = INT32_MIN;
int8_t x370 = INT8_MIN;
int16_t x371 = -1;
uint64_t t90 = 69956759192986138LLU;
volatile int8_t x374 = -1;
int16_t x376 = -875;
uint16_t x383 = 42U;
int8_t x390 = INT8_MIN;
int64_t x391 = 1LL;
int32_t x400 = -1;
int32_t t97 = -952;
uint32_t x405 = UINT32_MAX;
int32_t x408 = -1;
volatile int8_t x414 = INT8_MIN;
int16_t x422 = -1;
static uint64_t t102 = UINT64_MAX;
uint64_t x433 = 1LLU;
uint8_t x442 = UINT8_MAX;
int64_t x443 = INT64_MIN;
static int64_t x445 = INT64_MAX;
int64_t x452 = INT64_MIN;
static int64_t t108 = -3675LL;
int32_t x454 = INT32_MIN;
volatile uint8_t x456 = UINT8_MAX;
static uint16_t x460 = 2U;
static int64_t x467 = -1LL;
static int8_t x468 = -4;
uint16_t x471 = 3U;
int8_t x473 = INT8_MIN;
volatile int64_t x478 = 814383LL;
static int64_t t116 = 292075851176542902LL;
static int32_t x486 = 90946367;
int32_t x488 = INT32_MIN;
volatile uint8_t x493 = 75U;
uint16_t x495 = UINT16_MAX;
volatile uint8_t x496 = 23U;
static int64_t t121 = -2243928868113922071LL;
int32_t t124 = 127537;
int8_t x526 = 1;
uint16_t x527 = 75U;
int32_t x528 = INT32_MAX;
static int8_t x529 = -1;
int32_t x530 = 4067905;
static int32_t t128 = 129235030;
static int32_t x556 = -192470945;
volatile int64_t t134 = 120069210355LL;
int16_t x563 = INT16_MAX;
volatile int32_t x565 = -1;
uint64_t x571 = 14815857079LLU;
int32_t x574 = INT32_MAX;
int8_t x577 = INT8_MAX;
int64_t x578 = INT64_MAX;
volatile uint64_t x588 = 194LLU;
static uint64_t t141 = 111260382514426573LLU;
volatile uint64_t x589 = 22LLU;
int16_t x593 = INT16_MIN;
volatile uint16_t x595 = 208U;
volatile uint16_t x596 = 1861U;
volatile int32_t t143 = 255779;
int16_t x600 = INT16_MAX;
int64_t t144 = -4183539883885LL;
int64_t x607 = INT64_MAX;
volatile int64_t t146 = -964517952413733860LL;
volatile uint16_t x614 = UINT16_MAX;
int32_t x616 = -1;
int32_t t148 = 331478;
volatile int8_t x622 = -1;
uint32_t x625 = UINT32_MAX;
static uint8_t x629 = 49U;
static int8_t x632 = INT8_MIN;
uint64_t x639 = 7LLU;
static volatile int32_t x644 = -467304;
static int32_t x654 = INT32_MIN;
uint16_t x666 = UINT16_MAX;
volatile int32_t x669 = INT32_MIN;
int64_t x675 = INT64_MIN;
static uint64_t x677 = 2457LLU;
uint8_t x680 = 1U;
int8_t x683 = 6;
volatile uint64_t t165 = 1082073922361LLU;
int8_t x686 = INT8_MIN;
int16_t x697 = -1;
uint16_t x698 = 258U;
static int16_t x699 = -9;
int32_t x700 = -1;
volatile int32_t t169 = 0;
int16_t x703 = -14;
static int64_t x704 = INT64_MIN;
int8_t x708 = INT8_MIN;
int32_t x709 = -30202353;
int64_t x711 = INT64_MIN;
int64_t t172 = 261196476725040LL;
uint8_t x715 = 92U;
volatile int8_t x724 = -1;
volatile uint32_t t175 = 209U;
volatile int32_t x729 = 1;
int32_t x741 = INT32_MAX;
int32_t x742 = 45563935;
int64_t x746 = 16873141599007938LL;
int32_t x754 = -34754309;
uint16_t x756 = 1690U;
volatile int16_t x758 = INT16_MIN;
int16_t x759 = -5102;
int16_t x761 = -1;
uint64_t x762 = UINT64_MAX;
static int16_t x764 = INT16_MAX;
int8_t x765 = INT8_MIN;
static int8_t x771 = -1;
int8_t x774 = INT8_MAX;
uint16_t x780 = 2U;
uint64_t t188 = 388370524676LLU;
int8_t x784 = INT8_MIN;
volatile uint32_t t189 = 56237U;
static uint16_t x789 = UINT16_MAX;
volatile int64_t x791 = INT64_MIN;
int16_t x792 = -6;
uint64_t x797 = 1LLU;
int8_t x801 = INT8_MIN;
int32_t x803 = -8207060;
static int16_t x805 = -63;
volatile int32_t t195 = 1;
uint8_t x811 = UINT8_MAX;
uint8_t x817 = UINT8_MAX;
volatile int16_t x820 = INT16_MIN;
int8_t x822 = INT8_MIN;


void f0(void) {
    	volatile uint16_t x1 = 405U;
	static int32_t x2 = 15635799;
	int32_t x3 = INT32_MIN;
	static int16_t x4 = -1;
	int32_t t0 = -999952158;

    t0 = (x1^((x2^x3)%x4));

    if (t0 != 405) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x7 = INT64_MIN;
	int64_t x8 = -3784238500196963LL;

    t1 = (x5^((x6^x7)%x8));

    if (t1 != -1182811874732143LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t t2 = -35949669037LL;

    t2 = (x9^((x10^x11)%x12));

    if (t2 != 9223372036854755390LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = INT64_MAX;
	static int16_t x15 = INT16_MIN;
	int8_t x16 = -1;
	int64_t t3 = 447415667570137301LL;

    t3 = (x13^((x14^x15)%x16));

    if (t3 != 23629LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int64_t x20 = INT64_MIN;

    t4 = (x17^((x18^x19)%x20));

    if (t4 != -32111LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MAX;
	volatile int32_t x23 = 3189;
	int8_t x24 = INT8_MIN;

    t5 = (x21^((x22^x23)%x24));

    if (t5 != -11) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 1U;
	int32_t x26 = INT32_MIN;
	static int16_t x28 = INT16_MIN;

    t6 = (x25^((x26^x27)%x28));

    if (t6 != 32641) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x29 = 257647366561693866LLU;
	int64_t x30 = -27629217LL;
	static int16_t x32 = -1;
	uint64_t t7 = 45723186408456432LLU;

    t7 = (x29^((x30^x31)%x32));

    if (t7 != 257647366561693866LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x34 = INT32_MIN;
	uint16_t x35 = 5792U;
	static volatile uint64_t t8 = UINT64_MAX;

    t8 = (x33^((x34^x35)%x36));

    if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 2U;
	int8_t x38 = 1;
	int8_t x40 = INT8_MIN;

    t9 = (x37^((x38^x39)%x40));

    if (t9 != 124) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 8156411351752862847LLU;
	uint8_t x42 = UINT8_MAX;
	int16_t x43 = INT16_MAX;
	uint8_t x44 = 122U;
	uint64_t t10 = 95941150979914352LLU;

    t10 = (x41^((x42^x43)%x44));

    if (t10 != 8156411351752862787LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	int32_t x46 = 393911865;
	static int32_t x48 = 120889774;
	int32_t t11 = 4954;

    t11 = (x45^((x46^x47)%x48));

    if (t11 != -26179367) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	uint8_t x50 = 3U;
	volatile int16_t x51 = -384;
	static int64_t x52 = INT64_MAX;
	volatile uint64_t t12 = 3438079335LLU;

    t12 = (x49^((x50^x51)%x52));

    if (t12 != 380LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = INT64_MIN;
	uint32_t x54 = 4U;
	uint32_t x55 = 3747141U;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t13 = 3250639332263532LLU;

    t13 = (x53^((x54^x55)%x56));

    if (t13 != 9223372036858522945LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x58 = 404387553511817989LLU;
	int8_t x59 = -1;
	uint32_t x60 = UINT32_MAX;
	volatile uint64_t t14 = 85697026889889LLU;

    t14 = (x57^((x58^x59)%x60));

    if (t14 != 1682304859LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x62 = INT64_MAX;
	static int16_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	int64_t t15 = -494204893565LL;

    t15 = (x61^((x62^x63)%x64));

    if (t15 != -78LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x66 = 184373550770LLU;
	uint64_t x67 = 192274677396LLU;
	int32_t x68 = 15697897;
	static volatile uint64_t t16 = 4447LLU;

    t16 = (x65^((x66^x67)%x68));

    if (t16 != 7010399LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -2;
	static int16_t x70 = -7525;
	int32_t x72 = INT32_MAX;
	static volatile int32_t t17 = 1538713;

    t17 = (x69^((x70^x71)%x72));

    if (t17 != 58010) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 2834U;
	static int64_t x74 = INT64_MAX;
	uint8_t x75 = UINT8_MAX;
	int32_t x76 = INT32_MIN;
	volatile int64_t t18 = -115703900LL;

    t18 = (x73^((x74^x75)%x76));

    if (t18 != 2147480594LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = INT32_MAX;
	uint8_t x78 = 9U;
	int16_t x79 = INT16_MAX;
	int32_t x80 = INT32_MIN;

    t19 = (x77^((x78^x79)%x80));

    if (t19 != 2147450889) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = -1LL;
	int16_t x83 = 3;
	uint64_t x84 = UINT64_MAX;

    t20 = (x81^((x82^x83)%x84));

    if (t20 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	int16_t x86 = INT16_MIN;
	int64_t x87 = -1LL;
	uint8_t x88 = 7U;
	static volatile int64_t t21 = 29932447375793487LL;

    t21 = (x85^((x86^x87)%x88));

    if (t21 != -32768LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -1;
	int64_t x90 = 2033718LL;
	int8_t x91 = INT8_MAX;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t22 = 468457569511856LLU;

    t22 = (x89^((x90^x91)%x92));

    if (t22 != 18446744073707517878LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x94 = 0;
	static int32_t x95 = -3866991;
	int64_t x96 = -444987575097922LL;
	int64_t t23 = 132175999862LL;

    t23 = (x93^((x94^x95)%x96));

    if (t23 != -9223372036850908818LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -1LL;
	int64_t x98 = INT64_MIN;
	int16_t x100 = INT16_MIN;
	static volatile int64_t t24 = 12315LL;

    t24 = (x97^((x98^x99)%x100));

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x101 = INT16_MAX;
	volatile uint16_t x102 = 4U;
	static int32_t x103 = 1;
	uint8_t x104 = 20U;
	int32_t t25 = 0;

    t25 = (x101^((x102^x103)%x104));

    if (t25 != 32762) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x107 = 1242113004653388364LL;
	int8_t x108 = INT8_MIN;
	int64_t t26 = -242052562052LL;

    t26 = (x105^((x106^x107)%x108));

    if (t26 != 4294967244LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -64LL;
	int32_t x110 = -1;
	static volatile int64_t t27 = 13309667287128LL;

    t27 = (x109^((x110^x111)%x112));

    if (t27 != -4294966090LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x113 = 12703414573277515LLU;
	int16_t x115 = -195;
	volatile int8_t x116 = 25;

    t28 = (x113^((x114^x115)%x116));

    if (t28 != 12703414573277532LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x118 = 1;
	static volatile int8_t x119 = INT8_MIN;

    t29 = (x117^((x118^x119)%x120));

    if (t29 != 7) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = 0;
	int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MIN;
	static volatile int64_t t30 = 1094511451288555503LL;

    t30 = (x121^((x122^x123)%x124));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1;
	static volatile uint16_t x126 = 0U;
	int64_t x127 = INT64_MAX;
	int64_t t31 = -541936336364338LL;

    t31 = (x125^((x126^x127)%x128));

    if (t31 != -743724413245716198LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = INT8_MIN;
	volatile uint64_t x131 = UINT64_MAX;
	int64_t x132 = INT64_MAX;
	volatile uint64_t t32 = 17067518LLU;

    t32 = (x129^((x130^x131)%x132));

    if (t32 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x134 = -1LL;
	int64_t x135 = 1064LL;
	static int64_t x136 = INT64_MIN;
	uint64_t t33 = 585363234576727816LLU;

    t33 = (x133^((x134^x135)%x136));

    if (t33 != 1064LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	static volatile uint64_t x138 = UINT64_MAX;
	volatile uint32_t x139 = 272389015U;
	static uint8_t x140 = 2U;
	volatile uint64_t t34 = 4655LLU;

    t34 = (x137^((x138^x139)%x140));

    if (t34 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x142 = -1;
	int8_t x143 = INT8_MIN;
	uint64_t t35 = 2054056801142030960LLU;

    t35 = (x141^((x142^x143)%x144));

    if (t35 != 65408LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x145 = INT8_MAX;
	int8_t x146 = INT8_MIN;
	int16_t x148 = -1;
	volatile uint32_t t36 = 0U;

    t36 = (x145^((x146^x147)%x148));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x150 = INT64_MIN;
	static int16_t x151 = 1284;
	uint16_t x152 = 29641U;
	volatile int64_t t37 = -266338471937493LL;

    t37 = (x149^((x150^x151)%x152));

    if (t37 != -9206LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MAX;
	static uint64_t x154 = 464247485945993459LLU;
	static volatile uint32_t x155 = UINT32_MAX;
	int8_t x156 = INT8_MAX;
	uint64_t t38 = 6956376948044LLU;

    t38 = (x153^((x154^x155)%x156));

    if (t38 != 9223372036854775729LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x161 = 3217U;
	volatile uint8_t x164 = UINT8_MAX;
	static volatile int64_t t39 = -16460LL;

    t39 = (x161^((x162^x163)%x164));

    if (t39 != 3310LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x165 = INT16_MIN;
	volatile uint32_t x166 = UINT32_MAX;
	volatile int16_t x167 = INT16_MIN;
	static uint16_t x168 = UINT16_MAX;
	volatile uint32_t t40 = UINT32_MAX;

    t40 = (x165^((x166^x167)%x168));

    if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x169 = INT32_MAX;
	uint32_t x170 = 89804234U;
	int32_t x172 = INT32_MAX;
	static volatile uint32_t t41 = 0U;

    t41 = (x169^((x170^x171)%x172));

    if (t41 != 2058374585U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = -54;
	static volatile int32_t x175 = INT32_MAX;
	int16_t x176 = 6199;
	static int32_t t42 = 28933;

    t42 = (x173^((x174^x175)%x176));

    if (t42 != 53) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = -10;
	int16_t x178 = INT16_MIN;
	volatile int8_t x179 = INT8_MAX;
	int8_t x180 = INT8_MAX;
	int32_t t43 = -20;

    t43 = (x177^((x178^x179)%x180));

    if (t43 != 8) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x181 = 122014786058035LLU;
	static int16_t x182 = -7160;
	volatile uint32_t x183 = 124989U;
	int32_t x184 = INT32_MIN;
	uint64_t t44 = 1283853891295818765LLU;

    t44 = (x181^((x182^x183)%x184));

    if (t44 != 122014518278918LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x185 = 0;
	int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MAX;
	int16_t x188 = -1;
	volatile int32_t t45 = 19122;

    t45 = (x185^((x186^x187)%x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = INT16_MIN;
	int16_t x190 = INT16_MIN;
	static uint32_t x191 = UINT32_MAX;
	int32_t x192 = -7;
	static uint32_t t46 = UINT32_MAX;

    t46 = (x189^((x190^x191)%x192));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x194 = INT32_MAX;
	static int64_t x195 = -2541640031341481LL;
	static volatile int64_t t47 = INT64_MIN;

    t47 = (x193^((x194^x195)%x196));

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x197 = INT64_MIN;
	int64_t x198 = INT64_MIN;
	static volatile int16_t x200 = 1108;
	uint64_t t48 = 913381LLU;

    t48 = (x197^((x198^x199)%x200));

    if (t48 != 9223372036854776913LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = INT32_MIN;
	int32_t x202 = 1;
	static int16_t x203 = -1;
	int8_t x204 = -1;
	int32_t t49 = INT32_MIN;

    t49 = (x201^((x202^x203)%x204));

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x205 = 369U;
	static uint16_t x206 = 3U;
	int32_t x207 = 26346864;
	static int16_t x208 = INT16_MAX;
	volatile int32_t t50 = -190;

    t50 = (x205^((x206^x207)%x208));

    if (t50 != 2534) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x209 = 54702799U;
	int64_t x210 = -3684LL;
	static int16_t x211 = 296;
	int8_t x212 = -27;
	static int64_t t51 = -119550039103LL;

    t51 = (x209^((x210^x211)%x212));

    if (t51 != -54702800LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = -1LL;
	int16_t x214 = -1;
	int8_t x216 = INT8_MIN;
	int64_t t52 = -17930042465700044LL;

    t52 = (x213^((x214^x215)%x216));

    if (t52 != 86LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x217 = 236U;
	int32_t x218 = INT32_MIN;
	uint32_t x220 = UINT32_MAX;
	uint32_t t53 = 8U;

    t53 = (x217^((x218^x219)%x220));

    if (t53 != 2147483411U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x221 = 5;
	volatile int64_t x222 = -1LL;
	volatile uint32_t x224 = 23U;
	int64_t t54 = 55868327617822LL;

    t54 = (x221^((x222^x223)%x224));

    if (t54 != 17LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x226 = INT8_MAX;
	int16_t x227 = INT16_MIN;

    t55 = (x225^((x226^x227)%x228));

    if (t55 != 102277059U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x229 = 1515LL;
	volatile int16_t x230 = 81;
	uint8_t x232 = 49U;
	static volatile int64_t t56 = 96LL;

    t56 = (x229^((x230^x231)%x232));

    if (t56 != 1504LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x233 = 707136022362LL;
	volatile uint32_t x234 = 17U;
	static int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MIN;
	volatile int64_t t57 = -35355875369LL;

    t57 = (x233^((x234^x235)%x236));

    if (t57 != 705908238155LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x238 = INT16_MAX;
	int32_t x239 = 1069924;
	int64_t x240 = INT64_MIN;
	volatile int64_t t58 = -539709236LL;

    t58 = (x237^((x238^x239)%x240));

    if (t58 != -1732014LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x246 = INT32_MIN;
	int64_t x247 = INT64_MAX;
	int64_t x248 = -1LL;
	volatile int64_t t59 = -616LL;

    t59 = (x245^((x246^x247)%x248));

    if (t59 != -555904936LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x249 = -1;
	volatile int16_t x250 = INT16_MIN;
	uint16_t x251 = UINT16_MAX;
	static uint16_t x252 = 788U;
	volatile int32_t t60 = -161;

    t60 = (x249^((x250^x251)%x252));

    if (t60 != 460) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x253 = INT32_MAX;
	uint8_t x254 = UINT8_MAX;
	uint32_t x255 = UINT32_MAX;
	int16_t x256 = -1;
	uint32_t t61 = 164140645U;

    t61 = (x253^((x254^x255)%x256));

    if (t61 != 2147483903U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x258 = 67905481U;
	int8_t x260 = INT8_MAX;
	volatile uint64_t t62 = 53963414498LLU;

    t62 = (x257^((x258^x259)%x260));

    if (t62 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = INT32_MIN;
	int16_t x264 = INT16_MAX;
	int32_t t63 = 4183705;

    t63 = (x261^((x262^x263)%x264));

    if (t63 != 2147483523) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x265 = -1;
	volatile int8_t x266 = 3;
	int32_t x267 = INT32_MIN;
	int8_t x268 = 2;

    t64 = (x265^((x266^x267)%x268));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x269 = INT8_MIN;
	volatile uint64_t x270 = 3437704934566LLU;
	int8_t x271 = 0;
	static int32_t x272 = INT32_MAX;
	volatile uint64_t t65 = 35066932298684713LLU;

    t65 = (x269^((x270^x271)%x272));

    if (t65 != 18446744071978452326LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x273 = -167262082297597LL;
	volatile uint64_t x275 = 1LLU;
	int32_t x276 = -7359;
	uint64_t t66 = 134092LLU;

    t66 = (x273^((x274^x275)%x276));

    if (t66 != 18446573894129672499LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x278 = INT16_MAX;
	static uint16_t x279 = 3890U;
	static volatile uint64_t t67 = 162134475562911LLU;

    t67 = (x277^((x278^x279)%x280));

    if (t67 != 18446744073709522765LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x281 = -3916008;
	int32_t x284 = INT32_MIN;
	int32_t t68 = -120694017;

    t68 = (x281^((x282^x283)%x284));

    if (t68 != 2143567798) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x285 = 0;
	int16_t x286 = 1;
	int32_t x288 = -15;
	volatile uint32_t t69 = 81426U;

    t69 = (x285^((x286^x287)%x288));

    if (t69 != 84251080U) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x289 = INT64_MIN;
	volatile int8_t x290 = INT8_MIN;
	volatile int64_t x291 = -71105112271814507LL;
	static int32_t x292 = INT32_MAX;

    t70 = (x289^((x290^x291)%x292));

    if (t70 != -9223372036575446393LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x293 = 292;
	volatile uint16_t x294 = 44U;
	static volatile uint8_t x295 = 1U;
	volatile int32_t x296 = -1;
	int32_t t71 = 8369259;

    t71 = (x293^((x294^x295)%x296));

    if (t71 != 292) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x297 = INT64_MIN;
	uint16_t x298 = 6558U;
	volatile int32_t x299 = -24192;
	static int64_t x300 = INT64_MIN;
	volatile int64_t t72 = 4012086469626LL;

    t72 = (x297^((x298^x299)%x300));

    if (t72 != 9223372036854757406LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = INT32_MIN;
	int64_t x304 = -1LL;
	uint64_t t73 = 646LLU;

    t73 = (x301^((x302^x303)%x304));

    if (t73 != 12446323998304075LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = -1;
	uint8_t x306 = UINT8_MAX;
	int8_t x307 = INT8_MIN;
	volatile int32_t t74 = -104;

    t74 = (x305^((x306^x307)%x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x309 = 16LLU;
	static int16_t x311 = 0;
	volatile uint64_t t75 = 3LLU;

    t75 = (x309^((x310^x311)%x312));

    if (t75 != 2147483631LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x314 = 13306892U;
	int8_t x315 = -1;
	uint8_t x316 = 57U;

    t76 = (x313^((x314^x315)%x316));

    if (t76 != 4294967293U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x318 = UINT64_MAX;
	int16_t x319 = INT16_MIN;

    t77 = (x317^((x318^x319)%x320));

    if (t77 != 64489314LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x321 = INT32_MIN;
	uint32_t x323 = 114416167U;
	static int8_t x324 = -1;
	volatile uint32_t t78 = 194254207U;

    t78 = (x321^((x322^x323)%x324));

    if (t78 != 2261899831U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x325 = INT64_MAX;
	static volatile uint32_t x326 = 1592783883U;
	int8_t x327 = 1;
	static int8_t x328 = 20;
	int64_t t79 = 106815062939323454LL;

    t79 = (x325^((x326^x327)%x328));

    if (t79 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x329 = -1;
	int64_t x330 = -1LL;
	static uint8_t x331 = 1U;
	static int16_t x332 = INT16_MIN;
	static volatile int64_t t80 = -4877067LL;

    t80 = (x329^((x330^x331)%x332));

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x333 = 15029339;
	int32_t x335 = INT32_MIN;

    t81 = (x333^((x334^x335)%x336));

    if (t81 != -15029340LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x337 = UINT64_MAX;
	volatile int64_t x338 = 1875959263821705LL;
	int16_t x339 = -1;
	volatile int8_t x340 = INT8_MIN;
	uint64_t t82 = 159LLU;

    t82 = (x337^((x338^x339)%x340));

    if (t82 != 9LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x341 = INT8_MAX;
	static int16_t x342 = -313;
	static int8_t x343 = INT8_MAX;
	int16_t x344 = 1231;
	static volatile int32_t t83 = -10932;

    t83 = (x341^((x342^x343)%x344));

    if (t83 != -313) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x345 = 1931U;
	uint16_t x346 = 8867U;
	static int8_t x347 = -9;
	int16_t x348 = INT16_MAX;
	uint32_t t84 = 13310038U;

    t84 = (x345^((x346^x347)%x348));

    if (t84 != 4294957791U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x349 = 10U;
	int8_t x350 = 1;
	uint16_t x351 = 12255U;
	static int64_t x352 = -10816213503LL;
	int64_t t85 = -733LL;

    t85 = (x349^((x350^x351)%x352));

    if (t85 != 12244LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x354 = UINT64_MAX;
	uint8_t x355 = UINT8_MAX;
	uint64_t x356 = UINT64_MAX;
	uint64_t t86 = 1188146LLU;

    t86 = (x353^((x354^x355)%x356));

    if (t86 != 426LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x357 = 15749U;
	static int16_t x358 = -1;
	static uint16_t x359 = UINT16_MAX;
	static volatile int8_t x360 = 30;
	static volatile int32_t t87 = 119;

    t87 = (x357^((x358^x359)%x360));

    if (t87 != -15755) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x361 = INT8_MIN;
	int8_t x363 = INT8_MIN;
	uint32_t x364 = 14350U;

    t88 = (x361^((x362^x363)%x364));

    if (t88 != 4294967168U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x366 = 27539697254LLU;
	uint8_t x367 = 76U;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t89 = 0LLU;

    t89 = (x365^((x366^x367)%x368));

    if (t89 != 18446744047562157610LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x369 = 27335876317642LLU;
	int16_t x372 = -1;

    t90 = (x369^((x370^x371)%x372));

    if (t90 != 27335876317642LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x373 = 109289934205LLU;
	int64_t x375 = 89027740LL;
	static volatile uint64_t t91 = 14384963210966LLU;

    t91 = (x373^((x374^x375)%x376));

    if (t91 != 18446743964419617251LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x377 = -7461;
	uint8_t x378 = UINT8_MAX;
	uint32_t x379 = 10376U;
	int8_t x380 = INT8_MIN;
	volatile uint32_t t92 = 224703U;

    t92 = (x377^((x378^x379)%x380));

    if (t92 != 4294953644U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x381 = -36;
	uint64_t x382 = 1154LLU;
	int64_t x384 = -1101626149373181467LL;
	volatile uint64_t t93 = 29454823933894880LLU;

    t93 = (x381^((x382^x383)%x384));

    if (t93 != 18446744073709550452LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x385 = 11U;
	int16_t x386 = 1173;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;
	static int64_t t94 = 14330452662LL;

    t94 = (x385^((x386^x387)%x388));

    if (t94 != -98LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = INT64_MIN;
	int64_t x392 = -1LL;
	volatile int64_t t95 = INT64_MIN;

    t95 = (x389^((x390^x391)%x392));

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x393 = 101333623264191LLU;
	int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MIN;
	int32_t x396 = 1;
	static uint64_t t96 = 8LLU;

    t96 = (x393^((x394^x395)%x396));

    if (t96 != 101333623264191LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x397 = UINT8_MAX;
	int32_t x398 = INT32_MIN;
	static int8_t x399 = 12;

    t97 = (x397^((x398^x399)%x400));

    if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x406 = INT64_MAX;
	int8_t x407 = INT8_MIN;
	volatile int64_t t98 = -57026LL;

    t98 = (x405^((x406^x407)%x408));

    if (t98 != 4294967295LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x413 = -1086473009LL;
	int16_t x415 = INT16_MAX;
	int8_t x416 = INT8_MAX;
	static volatile int64_t t99 = 91LL;

    t99 = (x413^((x414^x415)%x416));

    if (t99 != 1086473009LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x417 = 300070043883LLU;
	int32_t x418 = INT32_MIN;
	uint16_t x419 = 188U;
	volatile int64_t x420 = INT64_MIN;
	volatile uint64_t t100 = 4077LLU;

    t100 = (x417^((x418^x419)%x420));

    if (t100 != 18446743774631657559LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x421 = 548914455LLU;
	int64_t x423 = INT64_MIN;
	uint64_t x424 = 1LLU;
	uint64_t t101 = 86337356LLU;

    t101 = (x421^((x422^x423)%x424));

    if (t101 != 548914455LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint64_t x425 = UINT64_MAX;
	static int16_t x426 = INT16_MIN;
	volatile uint16_t x427 = UINT16_MAX;
	uint8_t x428 = 1U;

    t102 = (x425^((x426^x427)%x428));

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x429 = 3292929U;
	int8_t x430 = -1;
	static uint16_t x431 = UINT16_MAX;
	volatile uint16_t x432 = 348U;
	uint32_t t103 = 43683075U;

    t103 = (x429^((x430^x431)%x432));

    if (t103 != 4291674257U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x434 = 42U;
	static uint64_t x435 = UINT64_MAX;
	static int8_t x436 = INT8_MIN;
	volatile uint64_t t104 = 1506701LLU;

    t104 = (x433^((x434^x435)%x436));

    if (t104 != 84LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x437 = -1;
	int64_t x438 = 1848495425387LL;
	int32_t x439 = 3509;
	volatile int64_t x440 = 39367225731340904LL;
	volatile int64_t t105 = 39367084403719LL;

    t105 = (x437^((x438^x439)%x440));

    if (t105 != -1848495426271LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x441 = 376;
	int64_t x444 = 185747294LL;
	static int64_t t106 = -10292249LL;

    t106 = (x441^((x442^x443)%x444));

    if (t106 != -92643821LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x446 = INT32_MIN;
	int32_t x447 = INT32_MIN;
	int32_t x448 = INT32_MIN;
	int64_t t107 = INT64_MAX;

    t107 = (x445^((x446^x447)%x448));

    if (t107 != INT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x449 = INT16_MIN;
	static int32_t x450 = -8;
	uint32_t x451 = 21246963U;

    t108 = (x449^((x450^x451)%x452));

    if (t108 != -4273714165LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x453 = UINT32_MAX;
	volatile int16_t x455 = INT16_MIN;
	volatile uint32_t t109 = UINT32_MAX;

    t109 = (x453^((x454^x455)%x456));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x457 = INT64_MIN;
	volatile int32_t x458 = 1;
	int32_t x459 = INT32_MIN;
	int64_t t110 = INT64_MAX;

    t110 = (x457^((x458^x459)%x460));

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x461 = 4209U;
	int64_t x462 = -396700000LL;
	volatile int64_t x463 = INT64_MIN;
	int32_t x464 = -55;
	volatile int64_t t111 = 12407725603848LL;

    t111 = (x461^((x462^x463)%x464));

    if (t111 != 4161LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x465 = INT32_MAX;
	static int64_t x466 = -2177146292LL;
	int64_t t112 = -438976810763648LL;

    t112 = (x465^((x466^x467)%x468));

    if (t112 != 2147483644LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x469 = INT32_MIN;
	static int16_t x470 = 898;
	int32_t x472 = INT32_MIN;
	int32_t t113 = 2;

    t113 = (x469^((x470^x471)%x472));

    if (t113 != -2147482751) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x474 = 9097898102LLU;
	int64_t x475 = -23072320982478LL;
	uint32_t x476 = 183U;
	uint64_t t114 = 2626592LLU;

    t114 = (x473^((x474^x475)%x476));

    if (t114 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x477 = INT64_MIN;
	int64_t x479 = INT64_MIN;
	int32_t x480 = 4;
	volatile int64_t t115 = INT64_MAX;

    t115 = (x477^((x478^x479)%x480));

    if (t115 != INT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x481 = 758;
	int64_t x482 = INT64_MIN;
	int32_t x483 = 57022975;
	int32_t x484 = -1;

    t116 = (x481^((x482^x483)%x484));

    if (t116 != 758LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x485 = INT32_MAX;
	int16_t x487 = -1;
	int32_t t117 = 422043;

    t117 = (x485^((x486^x487)%x488));

    if (t117 != -2056537281) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x489 = -251129070;
	int64_t x490 = -1LL;
	int8_t x491 = INT8_MIN;
	int64_t x492 = -1LL;
	int64_t t118 = 2292612277796988LL;

    t118 = (x489^((x490^x491)%x492));

    if (t118 != -251129070LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x494 = INT32_MIN;
	volatile int32_t t119 = -5;

    t119 = (x493^((x494^x495)%x496));

    if (t119 != -96) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x497 = 15U;
	uint64_t x498 = 2553902225947LLU;
	uint32_t x499 = 90505U;
	static volatile int8_t x500 = 42;
	uint64_t t120 = 417893LLU;

    t120 = (x497^((x498^x499)%x500));

    if (t120 != 31LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint32_t x501 = UINT32_MAX;
	int64_t x502 = INT64_MAX;
	int8_t x503 = INT8_MIN;
	int32_t x504 = INT32_MAX;

    t121 = (x501^((x502^x503)%x504));

    if (t121 != -2147483775LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x505 = 45;
	volatile int32_t x506 = INT32_MAX;
	static int8_t x507 = INT8_MIN;
	int64_t x508 = INT64_MIN;
	volatile int64_t t122 = -1242027474822LL;

    t122 = (x505^((x506^x507)%x508));

    if (t122 != -2147483566LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x509 = INT8_MIN;
	uint8_t x510 = 1U;
	uint8_t x511 = 27U;
	volatile int32_t x512 = INT32_MAX;
	volatile int32_t t123 = 97531;

    t123 = (x509^((x510^x511)%x512));

    if (t123 != -102) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x513 = INT8_MIN;
	int32_t x514 = INT32_MIN;
	int8_t x515 = INT8_MAX;
	int32_t x516 = -20437301;

    t124 = (x513^((x514^x515)%x516));

    if (t124 != 1566908) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x517 = INT8_MIN;
	static volatile int64_t x518 = -455295730146LL;
	int16_t x519 = -1;
	static uint8_t x520 = UINT8_MAX;
	volatile int64_t t125 = -302336754LL;

    t125 = (x517^((x518^x519)%x520));

    if (t125 != -244LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x521 = INT8_MIN;
	static volatile int16_t x522 = INT16_MAX;
	int8_t x523 = 0;
	int64_t x524 = -25050LL;
	int64_t t126 = -2132569847389465336LL;

    t126 = (x521^((x522^x523)%x524));

    if (t126 != -7771LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x525 = 0;
	static int32_t t127 = 286244305;

    t127 = (x525^((x526^x527)%x528));

    if (t127 != 74) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x531 = INT8_MAX;
	int8_t x532 = 2;

    t128 = (x529^((x530^x531)%x532));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x537 = UINT64_MAX;
	uint8_t x538 = UINT8_MAX;
	int32_t x539 = 316;
	int64_t x540 = INT64_MIN;
	uint64_t t129 = 17646201707307LLU;

    t129 = (x537^((x538^x539)%x540));

    if (t129 != 18446744073709551164LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x541 = 482U;
	int64_t x542 = INT64_MIN;
	int32_t x543 = 0;
	uint16_t x544 = UINT16_MAX;
	static int64_t t130 = -484922LL;

    t130 = (x541^((x542^x543)%x544));

    if (t130 != -32286LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x545 = 36U;
	volatile int8_t x546 = 14;
	static volatile int64_t x547 = INT64_MIN;
	volatile int8_t x548 = INT8_MIN;
	volatile int64_t t131 = -1956449308872259LL;

    t131 = (x545^((x546^x547)%x548));

    if (t131 != -86LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x549 = 60566U;
	volatile int32_t x550 = -30;
	volatile int16_t x551 = 984;
	int16_t x552 = INT16_MIN;
	static volatile uint32_t t132 = 1U;

    t132 = (x549^((x550^x551)%x552));

    if (t132 != 4294906028U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x553 = -11410252766104375LL;
	int32_t x554 = INT32_MAX;
	static int16_t x555 = 1;
	volatile int64_t t133 = -502423183LL;

    t133 = (x553^((x554^x555)%x556));

    if (t133 != -11410252769898278LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x557 = INT8_MIN;
	static volatile uint32_t x558 = 1U;
	static int64_t x559 = 1LL;
	int64_t x560 = INT64_MIN;

    t134 = (x557^((x558^x559)%x560));

    if (t134 != -128LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x561 = -1;
	uint16_t x562 = 222U;
	uint32_t x564 = 4U;
	uint32_t t135 = 3821530U;

    t135 = (x561^((x562^x563)%x564));

    if (t135 != 4294967294U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x566 = 32653667U;
	int64_t x567 = 20109362LL;
	static int32_t x568 = INT32_MAX;
	int64_t t136 = -97602287521094565LL;

    t136 = (x565^((x566^x567)%x568));

    if (t136 != -12622162LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x569 = 1357634713187LL;
	volatile uint8_t x570 = 0U;
	volatile int64_t x572 = 7LL;
	volatile uint64_t t137 = 317888LLU;

    t137 = (x569^((x570^x571)%x572));

    if (t137 != 1357634713185LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x573 = -1;
	int8_t x575 = INT8_MIN;
	volatile int8_t x576 = -7;
	volatile int32_t t138 = 2615;

    t138 = (x573^((x574^x575)%x576));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x579 = -1;
	volatile uint16_t x580 = 182U;
	int64_t t139 = -494409212315912LL;

    t139 = (x577^((x578^x579)%x580));

    if (t139 != -121LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x581 = 3;
	int8_t x582 = INT8_MIN;
	uint8_t x583 = UINT8_MAX;
	int64_t x584 = -1675543408954114LL;
	int64_t t140 = 2313093LL;

    t140 = (x581^((x582^x583)%x584));

    if (t140 != -132LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x585 = -1;
	int64_t x586 = 204211891LL;
	uint32_t x587 = 1626301U;

    t141 = (x585^((x586^x587)%x588));

    if (t141 != 18446744073709551469LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x590 = INT64_MAX;
	int8_t x591 = INT8_MIN;
	static int8_t x592 = INT8_MAX;
	uint64_t t142 = 205781305576827732LLU;

    t142 = (x589^((x590^x591)%x592));

    if (t142 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x594 = INT32_MIN;

    t143 = (x593^((x594^x595)%x596));

    if (t143 != 31668) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x597 = 1;
	int8_t x598 = -1;
	int64_t x599 = INT64_MAX;

    t144 = (x597^((x598^x599)%x600));

    if (t144 != -7LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x601 = INT32_MIN;
	volatile uint16_t x602 = UINT16_MAX;
	volatile uint64_t x603 = 13470808LLU;
	uint16_t x604 = 723U;
	static uint64_t t145 = 46269LLU;

    t145 = (x601^((x602^x603)%x604));

    if (t145 != 18446744071562068026LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x605 = -4592170610LL;
	int16_t x606 = 1;
	static int64_t x608 = INT64_MIN;

    t146 = (x605^((x606^x607)%x608));

    if (t146 != -9223372032262605200LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x609 = 704LLU;
	static uint16_t x610 = 216U;
	int64_t x611 = INT64_MIN;
	static int16_t x612 = INT16_MIN;
	static volatile uint64_t t147 = 904LLU;

    t147 = (x609^((x610^x611)%x612));

    if (t147 != 18446744073709519384LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x613 = 1U;
	int8_t x615 = INT8_MAX;

    t148 = (x613^((x614^x615)%x616));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x617 = -1;
	static int8_t x618 = INT8_MIN;
	volatile uint16_t x619 = UINT16_MAX;
	int8_t x620 = INT8_MAX;
	static int32_t t149 = -9;

    t149 = (x617^((x618^x619)%x620));

    if (t149 != 3) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x621 = INT16_MIN;
	int8_t x623 = INT8_MIN;
	uint32_t x624 = 44U;
	volatile uint32_t t150 = 4U;

    t150 = (x621^((x622^x623)%x624));

    if (t150 != 4294934567U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x626 = 354U;
	int64_t x627 = INT64_MAX;
	static uint8_t x628 = 118U;
	volatile int64_t t151 = -3681043529LL;

    t151 = (x625^((x626^x627)%x628));

    if (t151 != 4294967264LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x630 = INT32_MIN;
	int64_t x631 = -1LL;
	volatile int64_t t152 = 1790782824LL;

    t152 = (x629^((x630^x631)%x632));

    if (t152 != 78LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x633 = 10U;
	int8_t x634 = INT8_MAX;
	uint32_t x635 = 211517U;
	uint64_t x636 = 6565337865LLU;
	uint64_t t153 = 335640LLU;

    t153 = (x633^((x634^x635)%x636));

    if (t153 != 211528LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x637 = UINT64_MAX;
	uint16_t x638 = 962U;
	int32_t x640 = INT32_MIN;
	uint64_t t154 = 115402817513751LLU;

    t154 = (x637^((x638^x639)%x640));

    if (t154 != 18446744073709550650LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x641 = 177406325572LL;
	volatile uint32_t x642 = UINT32_MAX;
	int64_t x643 = INT64_MIN;
	int64_t t155 = 133663874LL;

    t155 = (x641^((x642^x643)%x644));

    if (t155 != -177406359005LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x645 = 1;
	uint64_t x646 = 32538256184LLU;
	int16_t x647 = INT16_MAX;
	int64_t x648 = INT64_MIN;
	uint64_t t156 = 90634755258LLU;

    t156 = (x645^((x646^x647)%x648));

    if (t156 != 32538238150LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x649 = INT8_MIN;
	static int8_t x650 = -1;
	int16_t x651 = INT16_MIN;
	volatile uint64_t x652 = 6187036LLU;
	uint64_t t157 = 2826942770258746LLU;

    t157 = (x649^((x650^x651)%x652));

    if (t157 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x653 = INT16_MAX;
	int16_t x655 = 1461;
	volatile int16_t x656 = 178;
	volatile int32_t t158 = -876446;

    t158 = (x653^((x654^x655)%x656));

    if (t158 != -32650) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x657 = -1;
	int32_t x658 = 7058245;
	uint16_t x659 = 65U;
	int32_t x660 = INT32_MIN;
	volatile int32_t t159 = -22005305;

    t159 = (x657^((x658^x659)%x660));

    if (t159 != -7058181) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x661 = INT16_MIN;
	uint32_t x662 = 30U;
	int8_t x663 = INT8_MIN;
	int16_t x664 = INT16_MAX;
	static volatile uint32_t t160 = 9U;

    t160 = (x661^((x662^x663)%x664));

    if (t160 != 4294967201U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x665 = 307U;
	int64_t x667 = 219210899LL;
	int8_t x668 = INT8_MAX;
	volatile int64_t t161 = 363149494923383LL;

    t161 = (x665^((x666^x667)%x668));

    if (t161 != 383LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x670 = INT64_MAX;
	volatile uint16_t x671 = 13218U;
	uint32_t x672 = 1133238U;
	volatile int64_t t162 = 163434544LL;

    t162 = (x669^((x670^x671)%x672));

    if (t162 != -2146537921LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x673 = INT8_MAX;
	volatile int8_t x674 = INT8_MIN;
	uint64_t x676 = 787110742430237LLU;
	uint64_t t163 = 10042LLU;

    t163 = (x673^((x674^x675)%x676));

    if (t163 != 8357057258605LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x678 = 104;
	int8_t x679 = -1;
	uint64_t t164 = 16377431831922224LLU;

    t164 = (x677^((x678^x679)%x680));

    if (t164 != 2457LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x681 = 5365995653420169797LLU;
	static int32_t x682 = INT32_MIN;
	int8_t x684 = -1;

    t165 = (x681^((x682^x683)%x684));

    if (t165 != 5365995653420169797LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x685 = 1U;
	int64_t x687 = -1LL;
	static uint16_t x688 = 3035U;
	int64_t t166 = -164964101587LL;

    t166 = (x685^((x686^x687)%x688));

    if (t166 != 126LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x689 = 1011U;
	int8_t x690 = INT8_MIN;
	uint32_t x691 = 230U;
	int16_t x692 = -149;
	static volatile uint32_t t167 = 1358249U;

    t167 = (x689^((x690^x691)%x692));

    if (t167 != 4294966421U) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x693 = 4LL;
	volatile uint32_t x694 = UINT32_MAX;
	static uint16_t x695 = 4557U;
	int16_t x696 = -14;
	int64_t t168 = 823322444130LL;

    t168 = (x693^((x694^x695)%x696));

    if (t168 != 4294962742LL) { NG(); } else { ; }
	
}

void f169(void) {
    

    t169 = (x697^((x698^x699)%x700));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x701 = 49501;
	uint64_t x702 = 174902134158LLU;
	static volatile uint64_t t170 = 2538012LLU;

    t170 = (x701^((x702^x703)%x704));

    if (t170 != 9223371861952690977LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x705 = INT64_MIN;
	volatile uint16_t x706 = 2U;
	uint16_t x707 = 29386U;
	static int64_t t171 = -87895LL;

    t171 = (x705^((x706^x707)%x708));

    if (t171 != -9223372036854775736LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x710 = INT8_MIN;
	volatile int16_t x712 = INT16_MIN;

    t172 = (x709^((x710^x711)%x712));

    if (t172 != -30189169LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x713 = 11866;
	uint64_t x714 = UINT64_MAX;
	static int32_t x716 = -1;
	volatile uint64_t t173 = 1149606748374212156LLU;

    t173 = (x713^((x714^x715)%x716));

    if (t173 != 18446744073709539833LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x717 = INT16_MIN;
	static int8_t x718 = -1;
	int32_t x719 = INT32_MIN;
	int32_t x720 = -1;
	int32_t t174 = -21;

    t174 = (x717^((x718^x719)%x720));

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x721 = 26247055U;
	int8_t x722 = -1;
	int16_t x723 = -3040;

    t175 = (x721^((x722^x723)%x724));

    if (t175 != 26247055U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x730 = 12;
	uint16_t x731 = UINT16_MAX;
	static uint16_t x732 = UINT16_MAX;
	static int32_t t176 = -6679786;

    t176 = (x729^((x730^x731)%x732));

    if (t176 != 65522) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x733 = INT64_MIN;
	int64_t x734 = INT64_MIN;
	int32_t x735 = INT32_MIN;
	uint16_t x736 = 181U;
	int64_t t177 = 702169765307LL;

    t177 = (x733^((x734^x735)%x736));

    if (t177 != -9223372036854775703LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x737 = INT64_MIN;
	int32_t x738 = 7667;
	uint16_t x739 = 1U;
	uint8_t x740 = 1U;
	volatile int64_t t178 = INT64_MIN;

    t178 = (x737^((x738^x739)%x740));

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x743 = INT64_MAX;
	int64_t x744 = INT64_MAX;
	static int64_t t179 = 70646717085759837LL;

    t179 = (x741^((x742^x743)%x744));

    if (t179 != 9223372034752856095LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x745 = -212;
	uint8_t x747 = 6U;
	uint16_t x748 = 2739U;
	volatile int64_t t180 = 697LL;

    t180 = (x745^((x746^x747)%x748));

    if (t180 != -316LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x749 = 63LLU;
	int64_t x750 = INT64_MIN;
	int64_t x751 = -1LL;
	int8_t x752 = INT8_MIN;
	volatile uint64_t t181 = 7842991957306024451LLU;

    t181 = (x749^((x750^x751)%x752));

    if (t181 != 64LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x753 = INT8_MIN;
	int32_t x755 = INT32_MIN;
	volatile int32_t t182 = 505248;

    t182 = (x753^((x754^x755)%x756));

    if (t182 != -1243) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x757 = -1LL;
	uint16_t x760 = 1U;
	static volatile int64_t t183 = -107394318906512725LL;

    t183 = (x757^((x758^x759)%x760));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x763 = 480340U;
	volatile uint64_t t184 = 1010075109004LLU;

    t184 = (x761^((x762^x763)%x764));

    if (t184 != 18446744073709540435LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x766 = 44U;
	int32_t x767 = INT32_MIN;
	static int8_t x768 = -1;
	static volatile int32_t t185 = 389972;

    t185 = (x765^((x766^x767)%x768));

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x769 = 7;
	uint16_t x770 = UINT16_MAX;
	int16_t x772 = -1;
	volatile int32_t t186 = -3461;

    t186 = (x769^((x770^x771)%x772));

    if (t186 != 7) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x773 = -138035636025LL;
	int16_t x775 = INT16_MAX;
	uint16_t x776 = UINT16_MAX;
	int64_t t187 = 443630779187921458LL;

    t187 = (x773^((x774^x775)%x776));

    if (t187 != -138035648697LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x777 = INT16_MIN;
	int16_t x778 = INT16_MIN;
	volatile uint64_t x779 = UINT64_MAX;

    t188 = (x777^((x778^x779)%x780));

    if (t188 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x781 = -1;
	uint32_t x782 = 29685537U;
	uint32_t x783 = UINT32_MAX;

    t189 = (x781^((x782^x783)%x784));

    if (t189 != 29685537U) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x785 = -1;
	int32_t x786 = INT32_MAX;
	int16_t x787 = INT16_MIN;
	int16_t x788 = -2694;
	volatile int32_t t190 = -1762;

    t190 = (x785^((x786^x787)%x788));

    if (t190 != 1518) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x790 = -1;
	volatile int64_t t191 = -545LL;

    t191 = (x789^((x790^x791)%x792));

    if (t191 != 65534LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x793 = UINT32_MAX;
	volatile uint16_t x794 = UINT16_MAX;
	static int16_t x795 = INT16_MAX;
	int8_t x796 = INT8_MIN;
	volatile uint32_t t192 = UINT32_MAX;

    t192 = (x793^((x794^x795)%x796));

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x798 = UINT16_MAX;
	int64_t x799 = -1LL;
	volatile int32_t x800 = INT32_MAX;
	static uint64_t t193 = 1006LLU;

    t193 = (x797^((x798^x799)%x800));

    if (t193 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x802 = INT8_MIN;
	static volatile int64_t x804 = -496951646375LL;
	volatile int64_t t194 = 67338029489075539LL;

    t194 = (x801^((x802^x803)%x804));

    if (t194 != -8207060LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x806 = 51U;
	int8_t x807 = INT8_MIN;
	int16_t x808 = INT16_MIN;

    t195 = (x805^((x806^x807)%x808));

    if (t195 != 114) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x809 = 473U;
	static int16_t x810 = INT16_MAX;
	volatile uint8_t x812 = UINT8_MAX;
	volatile uint32_t t196 = 100531U;

    t196 = (x809^((x810^x811)%x812));

    if (t196 != 422U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x813 = 233U;
	static volatile int8_t x814 = -1;
	int32_t x815 = INT32_MIN;
	static int64_t x816 = INT64_MIN;
	static int64_t t197 = -2633835282526800LL;

    t197 = (x813^((x814^x815)%x816));

    if (t197 != 2147483414LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x818 = 4U;
	int64_t x819 = -1LL;
	int64_t t198 = 659LL;

    t198 = (x817^((x818^x819)%x820));

    if (t198 != -252LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x821 = 1287434711735508LLU;
	uint32_t x823 = 4063406U;
	uint32_t x824 = 65532563U;
	volatile uint64_t t199 = 32LLU;

    t199 = (x821^((x822^x823)%x824));

    if (t199 != 1287434725194511LLU) { NG(); } else { ; }
	
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

