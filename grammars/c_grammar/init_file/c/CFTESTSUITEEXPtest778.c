
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

volatile int64_t x3 = INT64_MIN;
int16_t x8 = INT16_MAX;
uint32_t x10 = 465U;
volatile int16_t x11 = INT16_MIN;
int32_t t2 = 257;
int16_t x13 = 0;
int8_t x19 = INT8_MAX;
int8_t x27 = -1;
uint32_t x29 = 516405935U;
int16_t x30 = INT16_MIN;
volatile uint64_t x31 = 17110298616880LLU;
int32_t x36 = -1;
int16_t x38 = INT16_MIN;
volatile int32_t t10 = -580;
int8_t x55 = -1;
static int16_t x58 = -1;
int8_t x62 = 61;
int32_t t14 = -4131978;
int8_t x65 = 3;
static int32_t x68 = -1;
static int32_t x71 = INT32_MIN;
int32_t t17 = -2389;
volatile uint8_t x77 = 9U;
volatile int16_t x81 = INT16_MAX;
int32_t x86 = INT32_MIN;
uint64_t x88 = UINT64_MAX;
int32_t t20 = 7484311;
uint16_t x89 = 0U;
uint64_t x92 = 26LLU;
int16_t x93 = 4129;
int64_t x96 = INT64_MIN;
static int64_t x104 = INT64_MAX;
static uint32_t x110 = 1626581410U;
static volatile int8_t x116 = INT8_MAX;
int16_t x117 = 1;
int32_t t28 = 827081915;
int8_t x128 = INT8_MAX;
volatile int64_t x149 = INT64_MIN;
uint16_t x155 = 98U;
int8_t x156 = -1;
int8_t x163 = INT8_MAX;
volatile int32_t t37 = 344;
int64_t x168 = -1LL;
int16_t x172 = INT16_MAX;
volatile uint8_t x178 = 3U;
volatile int32_t t41 = -34;
uint16_t x187 = 1U;
static int32_t t43 = -14272599;
volatile int64_t x191 = 403056136518853124LL;
int32_t t44 = -83706;
volatile int32_t x195 = -1763974;
int32_t x205 = INT32_MIN;
static int16_t x208 = -1;
volatile int64_t x213 = INT64_MAX;
int16_t x221 = INT16_MIN;
int8_t x224 = INT8_MIN;
int64_t x236 = INT64_MAX;
static uint16_t x238 = UINT16_MAX;
volatile uint64_t x240 = 3070868794029689LLU;
static int64_t x241 = -1LL;
int32_t x242 = 1230439;
int8_t x243 = INT8_MAX;
int8_t x250 = INT8_MAX;
int32_t x256 = INT32_MAX;
static volatile int32_t t59 = -2;
static int32_t x259 = -18841;
int32_t x271 = -1;
uint64_t x273 = 7277221844089059921LLU;
int64_t x279 = 26045LL;
int8_t x283 = -15;
int32_t t66 = -1337;
static uint32_t x285 = UINT32_MAX;
int64_t x295 = 90730LL;
int16_t x299 = INT16_MAX;
int64_t x305 = 1331581602993127881LL;
uint64_t x307 = UINT64_MAX;
volatile int32_t t72 = 489;
uint64_t x311 = 269739744598732LLU;
uint8_t x313 = UINT8_MAX;
int16_t x314 = -1;
uint64_t x334 = 202751144672171LLU;
int64_t x348 = 534226858137855LL;
static int64_t x349 = INT64_MIN;
static uint32_t x350 = UINT32_MAX;
volatile uint8_t x352 = UINT8_MAX;
int16_t x358 = 161;
int16_t x359 = -11946;
static uint16_t x362 = UINT16_MAX;
int32_t t86 = 12387;
int64_t x381 = INT64_MAX;
uint8_t x382 = 0U;
uint8_t x386 = 4U;
int32_t t92 = -871201628;
volatile int32_t t94 = -889233;
uint32_t x400 = 95361U;
static uint16_t x404 = 3318U;
int32_t x410 = 7;
int16_t x414 = -2;
static volatile int32_t t99 = 35;
int64_t x419 = INT64_MIN;
volatile uint64_t x422 = 98292373LLU;
int8_t x424 = INT8_MIN;
static int32_t x432 = -1;
volatile uint16_t x435 = 20U;
int32_t t104 = 13879;
int32_t x449 = INT32_MIN;
uint64_t x454 = 2425LLU;
static int16_t x456 = INT16_MAX;
int32_t t109 = 2909019;
volatile uint16_t x460 = 2002U;
static int64_t x467 = -1LL;
int32_t t111 = 297001847;
int8_t x469 = INT8_MAX;
static uint16_t x470 = 465U;
static volatile int32_t x471 = -1;
int8_t x473 = -1;
int8_t x481 = 14;
int64_t x483 = -254LL;
int32_t t116 = 405;
volatile int32_t t117 = -6006012;
int32_t t118 = 1574280;
volatile int32_t x499 = INT32_MIN;
volatile uint32_t x501 = 6U;
int64_t x502 = INT64_MIN;
uint16_t x506 = 436U;
int16_t x508 = -1;
volatile int32_t t121 = -378668;
int8_t x514 = INT8_MIN;
int8_t x516 = 0;
volatile int32_t t124 = 143;
uint32_t x528 = 1224940921U;
int32_t x530 = INT32_MAX;
int32_t x536 = -25;
uint16_t x541 = UINT16_MAX;
uint32_t x555 = UINT32_MAX;
int32_t x556 = INT32_MIN;
int32_t x558 = INT32_MIN;
static uint16_t x560 = UINT16_MAX;
int32_t x566 = -1;
volatile uint64_t x568 = UINT64_MAX;
volatile int32_t t135 = 26735913;
int8_t x571 = INT8_MIN;
int16_t x575 = INT16_MAX;
static int8_t x578 = 16;
int16_t x586 = -1;
uint8_t x588 = 3U;
int8_t x592 = INT8_MIN;
volatile int32_t t142 = 75821;
volatile int32_t x597 = INT32_MIN;
uint8_t x603 = 53U;
uint32_t x605 = 1U;
int32_t x608 = INT32_MIN;
int16_t x615 = INT16_MIN;
int16_t x618 = -1;
int32_t t149 = -1698;
volatile int32_t x626 = INT32_MIN;
volatile int32_t t150 = 38881166;
static uint8_t x638 = UINT8_MAX;
int16_t x644 = INT16_MIN;
int32_t t153 = -541781;
volatile int32_t t154 = 150471513;
int32_t x655 = INT32_MIN;
int64_t x657 = INT64_MAX;
int32_t t156 = 29297773;
static uint8_t x664 = 3U;
uint64_t x666 = 433847471253928605LLU;
static volatile uint16_t x669 = 14U;
volatile int32_t t160 = -989;
int16_t x683 = -1;
volatile int32_t t162 = 104666060;
int16_t x685 = 3;
int16_t x686 = INT16_MIN;
int32_t t164 = 22304092;
uint32_t x693 = UINT32_MAX;
int64_t x696 = INT64_MAX;
volatile int16_t x697 = INT16_MIN;
int32_t x698 = INT32_MIN;
volatile int64_t x708 = INT64_MIN;
int32_t t168 = 443;
volatile uint32_t x725 = UINT32_MAX;
static int32_t x727 = INT32_MIN;
uint8_t x729 = 100U;
volatile uint16_t x730 = 1U;
static int64_t x732 = INT64_MIN;
volatile int32_t t174 = -182127;
static uint32_t x734 = UINT32_MAX;
int8_t x735 = INT8_MIN;
int8_t x736 = -1;
volatile int32_t t176 = -31;
static int16_t x743 = INT16_MAX;
static uint32_t x757 = 39244U;
int64_t x760 = INT64_MIN;
volatile int32_t t180 = -1;
volatile int8_t x767 = -1;
static volatile int32_t t182 = 0;
static int32_t x771 = -1;
uint16_t x772 = 2U;
static int16_t x773 = -16340;
volatile int32_t x775 = INT32_MIN;
uint32_t x777 = UINT32_MAX;
static volatile int8_t x785 = 6;
int16_t x787 = -7188;
int16_t x789 = INT16_MIN;
int8_t x790 = INT8_MAX;
static uint16_t x794 = 335U;
uint64_t x800 = UINT64_MAX;
static volatile int32_t t191 = -1691;
static int64_t x808 = INT64_MAX;
static int32_t t192 = -474;
uint32_t x811 = 23318U;
uint64_t x813 = 25LLU;
int8_t x816 = -1;
volatile uint32_t x823 = UINT32_MAX;
int64_t x835 = INT64_MIN;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	static uint32_t x2 = 3U;
	static int32_t x4 = 997;
	volatile int32_t t0 = -1;

    t0 = (x1==((x2/x3)^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -100632900731004214LL;
	int64_t x6 = INT64_MIN;
	uint32_t x7 = 9U;
	int32_t t1 = 263751820;

    t1 = (x5==((x6/x7)^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = 343LL;
	uint16_t x12 = UINT16_MAX;

    t2 = (x9==((x10/x11)^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = INT16_MIN;
	uint16_t x15 = 25U;
	int64_t x16 = INT64_MIN;
	int32_t t3 = -5;

    t3 = (x13==((x14/x15)^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x17 = 547U;
	int16_t x18 = INT16_MIN;
	uint16_t x20 = 53U;
	volatile int32_t t4 = 1;

    t4 = (x17==((x18/x19)^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x21 = 894421U;
	volatile uint8_t x22 = UINT8_MAX;
	uint32_t x23 = 7U;
	uint8_t x24 = 5U;
	int32_t t5 = -20;

    t5 = (x21==((x22/x23)^x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = 1;
	int16_t x26 = INT16_MAX;
	static int32_t x28 = INT32_MAX;
	volatile int32_t t6 = -82656;

    t6 = (x25==((x26/x27)^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x32 = UINT32_MAX;
	int32_t t7 = 3460;

    t7 = (x29==((x30/x31)^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 12U;
	int64_t x34 = INT64_MIN;
	volatile uint64_t x35 = UINT64_MAX;
	int32_t t8 = 0;

    t8 = (x33==((x34/x35)^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 0U;
	int16_t x39 = INT16_MAX;
	static int64_t x40 = -6352LL;
	static int32_t t9 = -10;

    t9 = (x37==((x38/x39)^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = 1926;
	int8_t x46 = INT8_MIN;
	uint16_t x47 = 4U;
	static int8_t x48 = INT8_MAX;

    t10 = (x45==((x46/x47)^x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = -1LL;
	uint64_t x50 = 86813991158006603LLU;
	int8_t x51 = -1;
	uint64_t x52 = 60LLU;
	volatile int32_t t11 = -555557;

    t11 = (x49==((x50/x51)^x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x53 = 54;
	uint8_t x54 = 2U;
	static int8_t x56 = INT8_MIN;
	static int32_t t12 = -3039;

    t12 = (x53==((x54/x55)^x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -16982617;
	static int8_t x59 = 5;
	static volatile int8_t x60 = INT8_MAX;
	volatile int32_t t13 = -102047507;

    t13 = (x57==((x58/x59)^x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = -1;
	uint8_t x63 = 6U;
	static int8_t x64 = -1;

    t14 = (x61==((x62/x63)^x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x66 = INT64_MIN;
	volatile int16_t x67 = INT16_MIN;
	int32_t t15 = 6;

    t15 = (x65==((x66/x67)^x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = 3U;
	static int32_t x70 = -44966210;
	static int32_t x72 = -3647814;
	static int32_t t16 = 335244817;

    t16 = (x69==((x70/x71)^x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = 3910099110795LL;
	int64_t x74 = INT64_MAX;
	volatile uint8_t x75 = UINT8_MAX;
	int8_t x76 = INT8_MIN;

    t17 = (x73==((x74/x75)^x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x78 = INT64_MIN;
	int16_t x79 = INT16_MIN;
	uint64_t x80 = UINT64_MAX;
	volatile int32_t t18 = -53179;

    t18 = (x77==((x78/x79)^x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x82 = INT8_MAX;
	uint32_t x83 = UINT32_MAX;
	static int32_t x84 = INT32_MIN;
	int32_t t19 = 460;

    t19 = (x81==((x82/x83)^x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x85 = -14;
	int64_t x87 = -1LL;

    t20 = (x85==((x86/x87)^x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x90 = -9;
	volatile int32_t x91 = -1;
	int32_t t21 = -143659;

    t21 = (x89==((x90/x91)^x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x94 = INT8_MIN;
	volatile int64_t x95 = -1LL;
	int32_t t22 = 25372;

    t22 = (x93==((x94/x95)^x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x97 = 41009973LLU;
	uint16_t x98 = 0U;
	uint64_t x99 = 36826135728617186LLU;
	uint32_t x100 = 7045U;
	int32_t t23 = 3646966;

    t23 = (x97==((x98/x99)^x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = INT16_MAX;
	int16_t x102 = INT16_MAX;
	uint64_t x103 = 223906004LLU;
	int32_t t24 = -8118;

    t24 = (x101==((x102/x103)^x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x105 = 52U;
	int8_t x106 = INT8_MIN;
	int32_t x107 = -1;
	int8_t x108 = INT8_MIN;
	volatile int32_t t25 = -22;

    t25 = (x105==((x106/x107)^x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x109 = -1;
	volatile uint32_t x111 = 118893479U;
	uint32_t x112 = UINT32_MAX;
	int32_t t26 = 2;

    t26 = (x109==((x110/x111)^x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x113 = 1U;
	static volatile int8_t x114 = INT8_MIN;
	int16_t x115 = -1;
	volatile int32_t t27 = -20;

    t27 = (x113==((x114/x115)^x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x118 = -51;
	uint8_t x119 = 2U;
	volatile uint16_t x120 = UINT16_MAX;

    t28 = (x117==((x118/x119)^x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MAX;
	int64_t x127 = -1LL;
	static int32_t t29 = -1475944;

    t29 = (x125==((x126/x127)^x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	int16_t x131 = INT16_MAX;
	uint64_t x132 = UINT64_MAX;
	int32_t t30 = -5067316;

    t30 = (x129==((x130/x131)^x132));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = -5;
	static int64_t x134 = INT64_MAX;
	static int8_t x135 = -1;
	int32_t x136 = INT32_MAX;
	int32_t t31 = -27164644;

    t31 = (x133==((x134/x135)^x136));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x137 = 6U;
	uint64_t x138 = 82462434LLU;
	int32_t x139 = -1;
	uint16_t x140 = 10U;
	static int32_t t32 = 1417;

    t32 = (x137==((x138/x139)^x140));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x141 = 21572U;
	volatile uint64_t x142 = UINT64_MAX;
	volatile int16_t x143 = INT16_MAX;
	int32_t x144 = INT32_MAX;
	int32_t t33 = -10932098;

    t33 = (x141==((x142/x143)^x144));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x150 = 502U;
	volatile int8_t x151 = 1;
	static int64_t x152 = INT64_MIN;
	int32_t t34 = -385;

    t34 = (x149==((x150/x151)^x152));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x153 = UINT64_MAX;
	static uint16_t x154 = UINT16_MAX;
	volatile int32_t t35 = 486233209;

    t35 = (x153==((x154/x155)^x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x157 = INT32_MAX;
	static uint16_t x158 = UINT16_MAX;
	int8_t x159 = INT8_MAX;
	int8_t x160 = -1;
	static int32_t t36 = 5506;

    t36 = (x157==((x158/x159)^x160));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x161 = INT32_MIN;
	int8_t x162 = INT8_MIN;
	static int32_t x164 = 16571919;

    t37 = (x161==((x162/x163)^x164));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = INT32_MIN;
	static uint32_t x166 = 2155437U;
	int16_t x167 = -1;
	volatile int32_t t38 = 672520;

    t38 = (x165==((x166/x167)^x168));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x169 = UINT32_MAX;
	volatile int8_t x170 = INT8_MIN;
	int64_t x171 = 1445595LL;
	volatile int32_t t39 = -1;

    t39 = (x169==((x170/x171)^x172));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x173 = INT32_MIN;
	int64_t x174 = 21274426LL;
	int32_t x175 = -25;
	volatile uint16_t x176 = 75U;
	volatile int32_t t40 = 7;

    t40 = (x173==((x174/x175)^x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x177 = 15U;
	static volatile int8_t x179 = INT8_MAX;
	uint16_t x180 = 2U;

    t41 = (x177==((x178/x179)^x180));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x181 = INT16_MAX;
	uint32_t x182 = UINT32_MAX;
	uint8_t x183 = UINT8_MAX;
	static int16_t x184 = INT16_MIN;
	static volatile int32_t t42 = -3680;

    t42 = (x181==((x182/x183)^x184));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x185 = 10U;
	int64_t x186 = INT64_MIN;
	volatile int8_t x188 = INT8_MIN;

    t43 = (x185==((x186/x187)^x188));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x189 = 5U;
	volatile uint64_t x190 = UINT64_MAX;
	uint64_t x192 = UINT64_MAX;

    t44 = (x189==((x190/x191)^x192));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x193 = 115U;
	uint32_t x194 = UINT32_MAX;
	uint64_t x196 = 834LLU;
	int32_t t45 = -23;

    t45 = (x193==((x194/x195)^x196));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x197 = 968193521608545022LLU;
	uint8_t x198 = 117U;
	uint32_t x199 = 1052791U;
	static uint8_t x200 = UINT8_MAX;
	volatile int32_t t46 = 209509;

    t46 = (x197==((x198/x199)^x200));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x206 = UINT8_MAX;
	int8_t x207 = 28;
	int32_t t47 = -3346;

    t47 = (x205==((x206/x207)^x208));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x209 = UINT64_MAX;
	volatile int16_t x210 = -47;
	int16_t x211 = 2452;
	volatile uint8_t x212 = 31U;
	volatile int32_t t48 = 517401034;

    t48 = (x209==((x210/x211)^x212));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x214 = -3942023;
	volatile int16_t x215 = INT16_MIN;
	static uint64_t x216 = 779223317908819812LLU;
	static volatile int32_t t49 = -7853;

    t49 = (x213==((x214/x215)^x216));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x217 = INT16_MIN;
	int64_t x218 = 13LL;
	static int64_t x219 = INT64_MIN;
	int16_t x220 = 25;
	volatile int32_t t50 = 0;

    t50 = (x217==((x218/x219)^x220));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x222 = INT32_MAX;
	static uint16_t x223 = 6U;
	volatile int32_t t51 = -40;

    t51 = (x221==((x222/x223)^x224));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x225 = -488214905047350029LL;
	uint64_t x226 = 91500037613672LLU;
	volatile int32_t x227 = -38;
	uint64_t x228 = 0LLU;
	volatile int32_t t52 = -115;

    t52 = (x225==((x226/x227)^x228));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x229 = 0U;
	uint8_t x230 = 0U;
	static int32_t x231 = -62216571;
	uint32_t x232 = 22506U;
	int32_t t53 = 1;

    t53 = (x229==((x230/x231)^x232));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x233 = 15020U;
	volatile uint16_t x234 = UINT16_MAX;
	int64_t x235 = -1LL;
	volatile int32_t t54 = 21656;

    t54 = (x233==((x234/x235)^x236));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x237 = -1;
	uint32_t x239 = UINT32_MAX;
	volatile int32_t t55 = 17748;

    t55 = (x237==((x238/x239)^x240));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x244 = 82786212LL;
	volatile int32_t t56 = -117;

    t56 = (x241==((x242/x243)^x244));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x245 = 1;
	volatile int64_t x246 = INT64_MIN;
	int32_t x247 = INT32_MAX;
	int16_t x248 = INT16_MAX;
	static int32_t t57 = -5308;

    t57 = (x245==((x246/x247)^x248));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x249 = INT64_MIN;
	uint32_t x251 = UINT32_MAX;
	volatile uint32_t x252 = 2U;
	volatile int32_t t58 = -2287019;

    t58 = (x249==((x250/x251)^x252));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x253 = -1752265663LL;
	uint64_t x254 = 2911348527521724LLU;
	static uint8_t x255 = UINT8_MAX;

    t59 = (x253==((x254/x255)^x256));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x257 = 22;
	static uint32_t x258 = 4791U;
	uint32_t x260 = 148630U;
	static int32_t t60 = 1908;

    t60 = (x257==((x258/x259)^x260));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x261 = INT16_MIN;
	int8_t x262 = -54;
	int32_t x263 = 111065483;
	static volatile uint64_t x264 = 12056748064046496LLU;
	int32_t t61 = 162;

    t61 = (x261==((x262/x263)^x264));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x265 = UINT64_MAX;
	int16_t x266 = INT16_MIN;
	uint8_t x267 = 1U;
	volatile int16_t x268 = -1;
	int32_t t62 = 971;

    t62 = (x265==((x266/x267)^x268));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x269 = UINT32_MAX;
	int16_t x270 = 8;
	static int64_t x272 = -1LL;
	volatile int32_t t63 = 133731554;

    t63 = (x269==((x270/x271)^x272));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x274 = 499;
	int8_t x275 = INT8_MAX;
	int32_t x276 = INT32_MIN;
	int32_t t64 = -1812019;

    t64 = (x273==((x274/x275)^x276));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x277 = 8201227;
	volatile uint16_t x278 = 1U;
	int32_t x280 = INT32_MAX;
	int32_t t65 = -117;

    t65 = (x277==((x278/x279)^x280));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x281 = INT64_MIN;
	int32_t x282 = -74651456;
	int32_t x284 = -266344308;

    t66 = (x281==((x282/x283)^x284));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x286 = 56361;
	int16_t x287 = -1;
	static uint64_t x288 = 1941839275830LLU;
	static int32_t t67 = -96957;

    t67 = (x285==((x286/x287)^x288));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x289 = INT64_MIN;
	int32_t x290 = 14960627;
	int8_t x291 = INT8_MIN;
	int8_t x292 = INT8_MIN;
	static int32_t t68 = 64817;

    t68 = (x289==((x290/x291)^x292));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x293 = 1168658445197LLU;
	int8_t x294 = -4;
	volatile int16_t x296 = INT16_MAX;
	int32_t t69 = 1;

    t69 = (x293==((x294/x295)^x296));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x297 = -1;
	int16_t x298 = 0;
	uint16_t x300 = 37U;
	volatile int32_t t70 = 118;

    t70 = (x297==((x298/x299)^x300));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x301 = 6U;
	int8_t x302 = INT8_MIN;
	static volatile uint16_t x303 = UINT16_MAX;
	static uint16_t x304 = 0U;
	int32_t t71 = -414287295;

    t71 = (x301==((x302/x303)^x304));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x306 = 12373;
	static int32_t x308 = INT32_MAX;

    t72 = (x305==((x306/x307)^x308));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x309 = 218620U;
	uint8_t x310 = 0U;
	uint8_t x312 = 8U;
	volatile int32_t t73 = 66882662;

    t73 = (x309==((x310/x311)^x312));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x315 = 3U;
	int32_t x316 = -1;
	volatile int32_t t74 = -123;

    t74 = (x313==((x314/x315)^x316));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x317 = INT32_MAX;
	static int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	int32_t x320 = 36704;
	volatile int32_t t75 = 2;

    t75 = (x317==((x318/x319)^x320));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int32_t x321 = -3084;
	int64_t x322 = INT64_MAX;
	uint32_t x323 = UINT32_MAX;
	static volatile uint64_t x324 = UINT64_MAX;
	volatile int32_t t76 = -831;

    t76 = (x321==((x322/x323)^x324));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x325 = 57763LLU;
	int16_t x326 = INT16_MAX;
	uint64_t x327 = UINT64_MAX;
	uint8_t x328 = UINT8_MAX;
	static volatile int32_t t77 = -29837622;

    t77 = (x325==((x326/x327)^x328));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x329 = 1U;
	uint64_t x330 = 34121177068653LLU;
	int8_t x331 = INT8_MAX;
	uint32_t x332 = 607U;
	volatile int32_t t78 = -1;

    t78 = (x329==((x330/x331)^x332));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x333 = -29;
	static uint64_t x335 = UINT64_MAX;
	static int32_t x336 = INT32_MIN;
	int32_t t79 = -89;

    t79 = (x333==((x334/x335)^x336));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x337 = -1;
	int32_t x338 = -1;
	int16_t x339 = -1;
	int32_t x340 = INT32_MIN;
	volatile int32_t t80 = 21;

    t80 = (x337==((x338/x339)^x340));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x341 = INT64_MIN;
	int16_t x342 = -254;
	static int64_t x343 = 59232977241LL;
	int16_t x344 = 5363;
	int32_t t81 = -34353819;

    t81 = (x341==((x342/x343)^x344));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x345 = INT32_MIN;
	uint16_t x346 = 1735U;
	static uint16_t x347 = UINT16_MAX;
	volatile int32_t t82 = 46436706;

    t82 = (x345==((x346/x347)^x348));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x351 = 1U;
	volatile int32_t t83 = 1;

    t83 = (x349==((x350/x351)^x352));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x353 = 8306U;
	int64_t x354 = 1883862151LL;
	int32_t x355 = 493673412;
	int64_t x356 = -1732268765643072LL;
	int32_t t84 = 907562;

    t84 = (x353==((x354/x355)^x356));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x357 = UINT64_MAX;
	int64_t x360 = INT64_MIN;
	static volatile int32_t t85 = -116815209;

    t85 = (x357==((x358/x359)^x360));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x361 = INT64_MIN;
	int64_t x363 = INT64_MIN;
	static int32_t x364 = INT32_MIN;

    t86 = (x361==((x362/x363)^x364));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x365 = INT32_MAX;
	int64_t x366 = INT64_MAX;
	static uint64_t x367 = UINT64_MAX;
	static int32_t x368 = 7893;
	int32_t t87 = 226619;

    t87 = (x365==((x366/x367)^x368));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x369 = 77U;
	int32_t x370 = 120580;
	static uint16_t x371 = 5225U;
	uint32_t x372 = 59583U;
	volatile int32_t t88 = 6;

    t88 = (x369==((x370/x371)^x372));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x373 = -4436;
	static uint16_t x374 = 9311U;
	static int8_t x375 = INT8_MAX;
	static uint64_t x376 = 1599786179489580794LLU;
	int32_t t89 = 1267;

    t89 = (x373==((x374/x375)^x376));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x377 = -1;
	static uint64_t x378 = UINT64_MAX;
	uint32_t x379 = UINT32_MAX;
	int16_t x380 = -1;
	int32_t t90 = -96;

    t90 = (x377==((x378/x379)^x380));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x383 = 239899U;
	int64_t x384 = -53417671LL;
	static int32_t t91 = -647628;

    t91 = (x381==((x382/x383)^x384));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x385 = INT32_MAX;
	static int64_t x387 = 8877996461LL;
	uint16_t x388 = 21563U;

    t92 = (x385==((x386/x387)^x388));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x389 = -1;
	int16_t x390 = -1;
	static int32_t x391 = INT32_MIN;
	static int16_t x392 = INT16_MAX;
	int32_t t93 = -30417984;

    t93 = (x389==((x390/x391)^x392));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x393 = 8;
	volatile uint8_t x394 = 107U;
	uint8_t x395 = 55U;
	static int16_t x396 = INT16_MIN;

    t94 = (x393==((x394/x395)^x396));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x397 = UINT64_MAX;
	static int8_t x398 = -3;
	int32_t x399 = -1;
	volatile int32_t t95 = -652988;

    t95 = (x397==((x398/x399)^x400));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x401 = 1U;
	static uint64_t x402 = 20LLU;
	int16_t x403 = -4;
	int32_t t96 = 0;

    t96 = (x401==((x402/x403)^x404));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x405 = INT16_MIN;
	int32_t x406 = INT32_MAX;
	uint64_t x407 = UINT64_MAX;
	uint64_t x408 = 35781272LLU;
	volatile int32_t t97 = -1834675;

    t97 = (x405==((x406/x407)^x408));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x409 = INT32_MIN;
	volatile int8_t x411 = INT8_MIN;
	uint8_t x412 = 0U;
	int32_t t98 = 51667;

    t98 = (x409==((x410/x411)^x412));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x413 = 11627U;
	volatile int16_t x415 = INT16_MIN;
	volatile int32_t x416 = 830338;

    t99 = (x413==((x414/x415)^x416));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x417 = 2;
	volatile int8_t x418 = INT8_MIN;
	static uint8_t x420 = UINT8_MAX;
	volatile int32_t t100 = -1;

    t100 = (x417==((x418/x419)^x420));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x421 = -1;
	static volatile int64_t x423 = INT64_MIN;
	static volatile int32_t t101 = 173672;

    t101 = (x421==((x422/x423)^x424));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x425 = 2;
	uint16_t x426 = 9298U;
	int32_t x427 = INT32_MIN;
	int8_t x428 = -1;
	static volatile int32_t t102 = 21884917;

    t102 = (x425==((x426/x427)^x428));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x429 = 73U;
	int64_t x430 = -7663127LL;
	int64_t x431 = -1LL;
	volatile int32_t t103 = 337;

    t103 = (x429==((x430/x431)^x432));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x433 = INT8_MAX;
	int64_t x434 = -1LL;
	int64_t x436 = INT64_MAX;

    t104 = (x433==((x434/x435)^x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x437 = INT64_MIN;
	static int16_t x438 = INT16_MAX;
	static uint64_t x439 = UINT64_MAX;
	uint64_t x440 = 109972838LLU;
	static int32_t t105 = 4323;

    t105 = (x437==((x438/x439)^x440));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x441 = INT32_MIN;
	int64_t x442 = INT64_MAX;
	int32_t x443 = INT32_MAX;
	static int8_t x444 = -1;
	volatile int32_t t106 = 8209;

    t106 = (x441==((x442/x443)^x444));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x445 = -16;
	uint16_t x446 = 371U;
	uint8_t x447 = UINT8_MAX;
	static int32_t x448 = INT32_MIN;
	static int32_t t107 = 108;

    t107 = (x445==((x446/x447)^x448));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x450 = 3518U;
	int64_t x451 = -1LL;
	volatile uint8_t x452 = 5U;
	static int32_t t108 = -463252;

    t108 = (x449==((x450/x451)^x452));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x453 = 271581060U;
	uint64_t x455 = UINT64_MAX;

    t109 = (x453==((x454/x455)^x456));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x457 = INT8_MIN;
	uint32_t x458 = 6696080U;
	uint8_t x459 = 16U;
	volatile int32_t t110 = 28;

    t110 = (x457==((x458/x459)^x460));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x465 = UINT64_MAX;
	int32_t x466 = -1;
	int16_t x468 = -1;

    t111 = (x465==((x466/x467)^x468));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x472 = INT8_MAX;
	static volatile int32_t t112 = -847;

    t112 = (x469==((x470/x471)^x472));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint8_t x474 = 1U;
	int16_t x475 = INT16_MIN;
	int64_t x476 = INT64_MIN;
	volatile int32_t t113 = 1246285;

    t113 = (x473==((x474/x475)^x476));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x477 = -593853LL;
	int8_t x478 = -1;
	static int32_t x479 = 58;
	volatile int32_t x480 = 2771094;
	volatile int32_t t114 = 23496328;

    t114 = (x477==((x478/x479)^x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x482 = INT32_MAX;
	int16_t x484 = -1;
	int32_t t115 = -323;

    t115 = (x481==((x482/x483)^x484));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x485 = -1;
	int16_t x486 = INT16_MIN;
	int32_t x487 = INT32_MIN;
	static int16_t x488 = 1;

    t116 = (x485==((x486/x487)^x488));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x489 = INT32_MIN;
	int32_t x490 = INT32_MIN;
	volatile int32_t x491 = -29331;
	uint64_t x492 = 70156LLU;

    t117 = (x489==((x490/x491)^x492));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x493 = 1591541LLU;
	uint16_t x494 = 10U;
	int8_t x495 = INT8_MAX;
	uint8_t x496 = 2U;

    t118 = (x493==((x494/x495)^x496));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x497 = INT64_MIN;
	static int32_t x498 = -1;
	int32_t x500 = INT32_MIN;
	volatile int32_t t119 = -2897213;

    t119 = (x497==((x498/x499)^x500));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x503 = -6147452641226LL;
	int64_t x504 = INT64_MAX;
	int32_t t120 = -968572;

    t120 = (x501==((x502/x503)^x504));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x505 = INT64_MAX;
	int16_t x507 = INT16_MIN;

    t121 = (x505==((x506/x507)^x508));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x509 = INT32_MAX;
	static uint32_t x510 = UINT32_MAX;
	int64_t x511 = INT64_MAX;
	uint8_t x512 = 35U;
	int32_t t122 = 0;

    t122 = (x509==((x510/x511)^x512));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x513 = 105345860U;
	int32_t x515 = INT32_MAX;
	int32_t t123 = 144;

    t123 = (x513==((x514/x515)^x516));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x517 = -324090;
	volatile uint64_t x518 = UINT64_MAX;
	static volatile int32_t x519 = -2755;
	int32_t x520 = -1;

    t124 = (x517==((x518/x519)^x520));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x521 = -1LL;
	int8_t x522 = 1;
	volatile uint64_t x523 = 46948LLU;
	uint32_t x524 = 23541U;
	int32_t t125 = 1595;

    t125 = (x521==((x522/x523)^x524));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x525 = 3820;
	static volatile int64_t x526 = INT64_MIN;
	int64_t x527 = INT64_MIN;
	volatile int32_t t126 = 127;

    t126 = (x525==((x526/x527)^x528));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x529 = 169206U;
	volatile uint32_t x531 = 1602U;
	static int8_t x532 = -1;
	volatile int32_t t127 = -251;

    t127 = (x529==((x530/x531)^x532));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x533 = 1;
	uint8_t x534 = 5U;
	int8_t x535 = -1;
	volatile int32_t t128 = -774;

    t128 = (x533==((x534/x535)^x536));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x537 = INT64_MIN;
	int64_t x538 = -1LL;
	static int64_t x539 = INT64_MIN;
	static int8_t x540 = -1;
	int32_t t129 = 172;

    t129 = (x537==((x538/x539)^x540));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x542 = -40236414LL;
	int64_t x543 = INT64_MIN;
	static int8_t x544 = INT8_MIN;
	int32_t t130 = -675600;

    t130 = (x541==((x542/x543)^x544));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x549 = UINT32_MAX;
	static int16_t x550 = INT16_MIN;
	static int32_t x551 = INT32_MAX;
	uint16_t x552 = 202U;
	volatile int32_t t131 = -1;

    t131 = (x549==((x550/x551)^x552));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x553 = 0U;
	int32_t x554 = INT32_MIN;
	int32_t t132 = 74581;

    t132 = (x553==((x554/x555)^x556));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x557 = INT8_MAX;
	static volatile int32_t x559 = -126669802;
	volatile int32_t t133 = 28910;

    t133 = (x557==((x558/x559)^x560));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x561 = -1LL;
	uint32_t x562 = UINT32_MAX;
	int16_t x563 = INT16_MIN;
	int8_t x564 = INT8_MIN;
	int32_t t134 = 2015132;

    t134 = (x561==((x562/x563)^x564));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x565 = 163557094309551492LLU;
	int64_t x567 = -1LL;

    t135 = (x565==((x566/x567)^x568));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x569 = 68U;
	static volatile int64_t x570 = -5988352383LL;
	int8_t x572 = -1;
	volatile int32_t t136 = -1787;

    t136 = (x569==((x570/x571)^x572));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x573 = 2;
	int32_t x574 = INT32_MIN;
	int32_t x576 = INT32_MAX;
	volatile int32_t t137 = -2062102;

    t137 = (x573==((x574/x575)^x576));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x577 = UINT8_MAX;
	static volatile int8_t x579 = -4;
	volatile int8_t x580 = -1;
	int32_t t138 = -1039163;

    t138 = (x577==((x578/x579)^x580));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x581 = INT32_MIN;
	int8_t x582 = 0;
	volatile int32_t x583 = -2;
	static int32_t x584 = 1;
	int32_t t139 = 1;

    t139 = (x581==((x582/x583)^x584));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	int32_t x587 = INT32_MAX;
	volatile int32_t t140 = 5;

    t140 = (x585==((x586/x587)^x588));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x589 = 98963U;
	int64_t x590 = -1LL;
	volatile int8_t x591 = -1;
	volatile int32_t t141 = 63;

    t141 = (x589==((x590/x591)^x592));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x593 = 83U;
	uint8_t x594 = 2U;
	volatile uint16_t x595 = 11U;
	static uint64_t x596 = UINT64_MAX;

    t142 = (x593==((x594/x595)^x596));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x598 = 14;
	uint16_t x599 = 3414U;
	int64_t x600 = INT64_MIN;
	volatile int32_t t143 = 4211501;

    t143 = (x597==((x598/x599)^x600));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x601 = 1538;
	static int8_t x602 = INT8_MIN;
	static int64_t x604 = INT64_MIN;
	volatile int32_t t144 = -9176;

    t144 = (x601==((x602/x603)^x604));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x606 = INT32_MIN;
	uint16_t x607 = 6U;
	volatile int32_t t145 = 17515517;

    t145 = (x605==((x606/x607)^x608));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x609 = 117889012U;
	int64_t x610 = INT64_MIN;
	static uint32_t x611 = 22073999U;
	static int32_t x612 = INT32_MAX;
	volatile int32_t t146 = -13895968;

    t146 = (x609==((x610/x611)^x612));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x613 = 625973937004721LLU;
	uint64_t x614 = UINT64_MAX;
	static int32_t x616 = INT32_MIN;
	static int32_t t147 = 23;

    t147 = (x613==((x614/x615)^x616));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x617 = INT16_MIN;
	uint64_t x619 = 45012946LLU;
	int64_t x620 = 54602001LL;
	volatile int32_t t148 = -3;

    t148 = (x617==((x618/x619)^x620));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x621 = 202U;
	int64_t x622 = -1LL;
	volatile int64_t x623 = INT64_MIN;
	static int64_t x624 = 1LL;

    t149 = (x621==((x622/x623)^x624));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x625 = UINT32_MAX;
	uint8_t x627 = 5U;
	static int8_t x628 = INT8_MIN;

    t150 = (x625==((x626/x627)^x628));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x629 = UINT64_MAX;
	int32_t x630 = INT32_MIN;
	static uint8_t x631 = 2U;
	static uint8_t x632 = 65U;
	volatile int32_t t151 = -2067015;

    t151 = (x629==((x630/x631)^x632));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x637 = INT64_MIN;
	static int8_t x639 = INT8_MAX;
	int64_t x640 = 6756692115LL;
	static volatile int32_t t152 = 3090;

    t152 = (x637==((x638/x639)^x640));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x641 = -22;
	int8_t x642 = -1;
	int8_t x643 = INT8_MAX;

    t153 = (x641==((x642/x643)^x644));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x645 = 2391425239651825435LLU;
	uint8_t x646 = 72U;
	int8_t x647 = 9;
	volatile int64_t x648 = -333994302LL;

    t154 = (x645==((x646/x647)^x648));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x653 = UINT16_MAX;
	uint8_t x654 = UINT8_MAX;
	static int32_t x656 = -128211;
	static volatile int32_t t155 = -13796;

    t155 = (x653==((x654/x655)^x656));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x658 = 0U;
	uint64_t x659 = 6595149LLU;
	uint64_t x660 = 2133866315206870LLU;

    t156 = (x657==((x658/x659)^x660));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x661 = INT16_MAX;
	static int16_t x662 = -1;
	uint64_t x663 = UINT64_MAX;
	volatile int32_t t157 = -7;

    t157 = (x661==((x662/x663)^x664));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x665 = -1;
	static volatile int32_t x667 = -1;
	uint16_t x668 = 179U;
	int32_t t158 = -920;

    t158 = (x665==((x666/x667)^x668));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x670 = -1LL;
	volatile int32_t x671 = -207;
	int32_t x672 = INT32_MAX;
	volatile int32_t t159 = -148071;

    t159 = (x669==((x670/x671)^x672));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x673 = 19U;
	uint8_t x674 = 4U;
	int64_t x675 = INT64_MAX;
	volatile int32_t x676 = INT32_MAX;

    t160 = (x673==((x674/x675)^x676));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x677 = INT32_MIN;
	uint32_t x678 = 7220737U;
	int8_t x679 = 1;
	int32_t x680 = -2848708;
	int32_t t161 = 3939268;

    t161 = (x677==((x678/x679)^x680));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x681 = 13U;
	int16_t x682 = -1;
	int64_t x684 = INT64_MAX;

    t162 = (x681==((x682/x683)^x684));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x687 = INT16_MAX;
	int8_t x688 = 2;
	int32_t t163 = 4498;

    t163 = (x685==((x686/x687)^x688));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x689 = INT64_MIN;
	int32_t x690 = INT32_MIN;
	volatile uint8_t x691 = 41U;
	uint32_t x692 = 176281U;

    t164 = (x689==((x690/x691)^x692));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x694 = INT8_MIN;
	uint64_t x695 = 15719LLU;
	volatile int32_t t165 = -60;

    t165 = (x693==((x694/x695)^x696));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x699 = 4U;
	volatile int16_t x700 = INT16_MIN;
	volatile int32_t t166 = -3328136;

    t166 = (x697==((x698/x699)^x700));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x701 = 2U;
	uint32_t x702 = 29611826U;
	int8_t x703 = INT8_MIN;
	int8_t x704 = -1;
	volatile int32_t t167 = 1506102;

    t167 = (x701==((x702/x703)^x704));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x705 = 10507979574LL;
	int16_t x706 = 6368;
	volatile int64_t x707 = -34028843355719LL;

    t168 = (x705==((x706/x707)^x708));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x709 = 113203151816156300LLU;
	static int8_t x710 = 29;
	uint64_t x711 = UINT64_MAX;
	int32_t x712 = 1852;
	int32_t t169 = 859677093;

    t169 = (x709==((x710/x711)^x712));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x713 = 1170U;
	int8_t x714 = INT8_MIN;
	volatile int16_t x715 = -1;
	uint8_t x716 = UINT8_MAX;
	volatile int32_t t170 = -28009321;

    t170 = (x713==((x714/x715)^x716));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x717 = INT64_MIN;
	int16_t x718 = 175;
	static volatile int16_t x719 = -1;
	int16_t x720 = -1;
	static volatile int32_t t171 = -79;

    t171 = (x717==((x718/x719)^x720));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x721 = 41U;
	uint16_t x722 = UINT16_MAX;
	volatile int64_t x723 = 5LL;
	int64_t x724 = INT64_MIN;
	volatile int32_t t172 = 0;

    t172 = (x721==((x722/x723)^x724));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x726 = -1LL;
	static int8_t x728 = INT8_MAX;
	static volatile int32_t t173 = 7;

    t173 = (x725==((x726/x727)^x728));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x731 = 85U;

    t174 = (x729==((x730/x731)^x732));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x733 = 4182139;
	volatile int32_t t175 = 222381;

    t175 = (x733==((x734/x735)^x736));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x737 = INT64_MIN;
	int64_t x738 = INT64_MAX;
	int16_t x739 = -1;
	int8_t x740 = INT8_MAX;

    t176 = (x737==((x738/x739)^x740));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x741 = INT8_MIN;
	int8_t x742 = INT8_MAX;
	int64_t x744 = INT64_MAX;
	volatile int32_t t177 = 241761;

    t177 = (x741==((x742/x743)^x744));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x745 = INT8_MIN;
	static volatile uint64_t x746 = UINT64_MAX;
	uint16_t x747 = 28U;
	volatile uint8_t x748 = 16U;
	volatile int32_t t178 = 3063;

    t178 = (x745==((x746/x747)^x748));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x753 = -1;
	uint16_t x754 = 924U;
	uint32_t x755 = UINT32_MAX;
	int16_t x756 = -602;
	volatile int32_t t179 = 0;

    t179 = (x753==((x754/x755)^x756));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x758 = UINT32_MAX;
	int16_t x759 = 14;

    t180 = (x757==((x758/x759)^x760));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x761 = -1;
	uint16_t x762 = 2372U;
	static int8_t x763 = INT8_MIN;
	uint8_t x764 = 0U;
	static volatile int32_t t181 = 62706;

    t181 = (x761==((x762/x763)^x764));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x765 = 1LLU;
	int32_t x766 = -1;
	int64_t x768 = 15647535687LL;

    t182 = (x765==((x766/x767)^x768));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x769 = INT32_MIN;
	static int16_t x770 = INT16_MAX;
	int32_t t183 = 7778;

    t183 = (x769==((x770/x771)^x772));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x774 = INT8_MAX;
	int16_t x776 = -1;
	volatile int32_t t184 = -5;

    t184 = (x773==((x774/x775)^x776));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x778 = UINT16_MAX;
	uint16_t x779 = 5U;
	static int16_t x780 = INT16_MIN;
	int32_t t185 = -7830;

    t185 = (x777==((x778/x779)^x780));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x781 = 5998;
	uint32_t x782 = 20U;
	int32_t x783 = -521;
	int64_t x784 = INT64_MIN;
	int32_t t186 = -61026;

    t186 = (x781==((x782/x783)^x784));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x786 = INT64_MIN;
	volatile int16_t x788 = INT16_MIN;
	volatile int32_t t187 = -124324;

    t187 = (x785==((x786/x787)^x788));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x791 = INT8_MIN;
	static int16_t x792 = INT16_MIN;
	static volatile int32_t t188 = -15672095;

    t188 = (x789==((x790/x791)^x792));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x793 = 77;
	static int64_t x795 = -8892534LL;
	static uint16_t x796 = 175U;
	static volatile int32_t t189 = -192586882;

    t189 = (x793==((x794/x795)^x796));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x797 = 167229199U;
	uint8_t x798 = 0U;
	uint8_t x799 = 92U;
	int32_t t190 = 451;

    t190 = (x797==((x798/x799)^x800));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x801 = -1;
	uint64_t x802 = 12962506518411983LLU;
	static uint16_t x803 = 10931U;
	volatile uint32_t x804 = 3414U;

    t191 = (x801==((x802/x803)^x804));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x805 = INT64_MAX;
	int32_t x806 = INT32_MIN;
	volatile int32_t x807 = -52144;

    t192 = (x805==((x806/x807)^x808));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x809 = 52632LL;
	uint32_t x810 = 830721397U;
	int16_t x812 = INT16_MAX;
	volatile int32_t t193 = -16076670;

    t193 = (x809==((x810/x811)^x812));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x814 = 821413U;
	int64_t x815 = INT64_MIN;
	int32_t t194 = 127322135;

    t194 = (x813==((x814/x815)^x816));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x817 = -54;
	int16_t x818 = INT16_MAX;
	static int64_t x819 = 267138223LL;
	static uint16_t x820 = UINT16_MAX;
	volatile int32_t t195 = -44;

    t195 = (x817==((x818/x819)^x820));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x821 = 2;
	volatile int64_t x822 = -1LL;
	uint16_t x824 = 13830U;
	volatile int32_t t196 = 29881984;

    t196 = (x821==((x822/x823)^x824));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x825 = 2214180334903LL;
	int64_t x826 = INT64_MIN;
	int8_t x827 = INT8_MIN;
	uint8_t x828 = 15U;
	int32_t t197 = -2609;

    t197 = (x825==((x826/x827)^x828));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x829 = INT8_MIN;
	static uint32_t x830 = UINT32_MAX;
	int8_t x831 = -40;
	int64_t x832 = INT64_MIN;
	static volatile int32_t t198 = 240423;

    t198 = (x829==((x830/x831)^x832));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int64_t x833 = INT64_MIN;
	int32_t x834 = 0;
	static int16_t x836 = INT16_MIN;
	volatile int32_t t199 = 407;

    t199 = (x833==((x834/x835)^x836));

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

