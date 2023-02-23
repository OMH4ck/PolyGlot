
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

int16_t x5 = 7;
uint16_t x14 = UINT16_MAX;
int8_t x15 = -17;
int32_t t5 = 1;
volatile int8_t x35 = -1;
uint32_t x38 = UINT32_MAX;
static volatile uint32_t x42 = 129574098U;
int8_t x43 = INT8_MAX;
uint16_t x55 = UINT16_MAX;
int16_t x56 = INT16_MIN;
static int16_t x58 = -12551;
int32_t x60 = INT32_MAX;
uint16_t x69 = UINT16_MAX;
int16_t x71 = INT16_MIN;
int32_t t14 = -1;
int64_t x76 = 757047265LL;
uint16_t x83 = 7U;
int32_t x84 = INT32_MIN;
int32_t x93 = -513000528;
volatile uint32_t x96 = 709U;
int64_t x98 = INT64_MAX;
int32_t t23 = 0;
uint16_t x113 = 26U;
volatile uint32_t x124 = UINT32_MAX;
uint32_t x133 = UINT32_MAX;
static volatile int64_t x138 = INT64_MIN;
static int32_t t31 = 0;
uint32_t x149 = 96653U;
int16_t x151 = INT16_MIN;
int32_t x152 = INT32_MIN;
uint8_t x153 = 2U;
volatile int32_t t33 = 320;
int32_t x159 = INT32_MAX;
int8_t x160 = INT8_MIN;
static volatile int64_t t34 = 7351LL;
int32_t x168 = 285815820;
volatile int32_t t36 = 119534515;
uint16_t x172 = 2U;
static int16_t x176 = 1475;
int64_t x183 = 482912247LL;
int16_t x189 = 171;
int32_t t43 = 1;
uint64_t x203 = 4372436746698LLU;
int64_t x207 = 437600213LL;
int32_t x209 = INT32_MIN;
int16_t x224 = 17;
volatile uint64_t t48 = 3LLU;
uint8_t x238 = 0U;
int8_t x239 = INT8_MAX;
int64_t x240 = INT64_MAX;
static uint8_t x243 = UINT8_MAX;
static int32_t t53 = -7385986;
static uint8_t x245 = UINT8_MAX;
static int8_t x249 = 0;
int32_t x255 = -1;
int16_t x257 = INT16_MIN;
static uint32_t x264 = 30U;
static volatile int64_t t58 = -1041025555633192358LL;
static int16_t x265 = INT16_MAX;
volatile int8_t x268 = INT8_MAX;
static volatile uint16_t x270 = 1U;
volatile uint8_t x278 = UINT8_MAX;
int8_t x279 = -21;
uint16_t x285 = 0U;
uint32_t x289 = 1U;
static uint16_t x291 = UINT16_MAX;
static int32_t x292 = INT32_MIN;
int8_t x293 = 48;
static int32_t t68 = -20085432;
volatile int32_t t71 = -4808667;
int32_t x322 = INT32_MIN;
volatile int64_t x323 = INT64_MIN;
int32_t x325 = INT32_MIN;
uint64_t x327 = 657111068LLU;
volatile int32_t x329 = 65418;
static uint8_t x331 = 59U;
volatile int16_t x334 = 39;
uint8_t x336 = 88U;
volatile uint16_t x338 = 218U;
static int64_t x344 = INT64_MIN;
volatile int32_t t78 = -1071225;
static uint8_t x345 = 4U;
uint16_t x351 = 121U;
int32_t x364 = INT32_MIN;
int64_t t83 = -52931180451LL;
int32_t x365 = -120878;
static uint32_t x370 = UINT32_MAX;
static int16_t x379 = INT16_MIN;
int16_t x400 = -42;
int64_t x401 = INT64_MIN;
uint64_t x402 = 14812304433LLU;
int64_t t93 = 27189382348751LL;
static int8_t x425 = INT8_MAX;
volatile int32_t t97 = 197673;
volatile int32_t x430 = -51915628;
static volatile uint64_t x431 = UINT64_MAX;
uint64_t x432 = 84601LLU;
int32_t x434 = INT32_MIN;
static int64_t x440 = 1LL;
int32_t x441 = INT32_MIN;
int32_t t101 = 179;
int32_t x448 = 2030113;
static volatile int8_t x451 = INT8_MIN;
int16_t x452 = -163;
static int16_t x459 = 6;
volatile int32_t t105 = -196358907;
int8_t x477 = 1;
uint32_t x482 = 2056027U;
int64_t x488 = INT64_MAX;
volatile int64_t x493 = 23150LL;
volatile uint8_t x497 = UINT8_MAX;
int16_t x498 = 0;
static volatile int16_t x499 = INT16_MIN;
int32_t x503 = INT32_MIN;
int64_t x504 = INT64_MIN;
uint16_t x515 = 3122U;
int8_t x520 = -1;
int8_t x525 = -9;
static volatile int64_t x528 = -1LL;
int8_t x531 = -1;
int16_t x532 = INT16_MIN;
int16_t x536 = -1;
uint32_t x545 = 985416980U;
static volatile uint32_t t124 = 657488155U;
int32_t x552 = 456436;
volatile uint64_t t125 = 1966897777LLU;
uint16_t x555 = 29572U;
int16_t x558 = -60;
int64_t x560 = INT64_MIN;
volatile int32_t x571 = INT32_MIN;
int8_t x574 = INT8_MIN;
static uint16_t x579 = 6U;
static int16_t x580 = INT16_MAX;
volatile int32_t t132 = 1506213;
volatile int32_t t133 = -307839;
int64_t x590 = -128421988LL;
int64_t x595 = -1LL;
static int8_t x597 = INT8_MAX;
int16_t x608 = 0;
volatile int32_t t138 = 19421;
int64_t x610 = INT64_MIN;
volatile uint64_t x615 = UINT64_MAX;
static volatile uint16_t x616 = 10861U;
int8_t x621 = INT8_MIN;
uint64_t x622 = 11993308LLU;
int32_t x631 = INT32_MAX;
int16_t x637 = INT16_MIN;
uint32_t x641 = 31333800U;
int8_t x642 = INT8_MIN;
int16_t x643 = INT16_MIN;
static int64_t x648 = -1LL;
volatile uint32_t x649 = 572668646U;
volatile int32_t x655 = INT32_MAX;
volatile int32_t t148 = -40;
volatile int32_t x658 = -1;
int8_t x659 = INT8_MIN;
int32_t x667 = -1;
uint32_t x668 = 3802673U;
volatile int64_t x670 = -1LL;
volatile int8_t x677 = -1;
int16_t x686 = 3661;
static int64_t x700 = 279895047899671189LL;
int64_t x707 = -1LL;
int64_t x726 = -717078318LL;
static int16_t x728 = 12077;
int64_t x730 = -1LL;
volatile int8_t x732 = INT8_MIN;
int64_t x738 = 32625944LL;
volatile int32_t x741 = INT32_MIN;
volatile int32_t t166 = 0;
uint16_t x749 = 35U;
static volatile int32_t t168 = -149;
volatile int32_t x762 = -354395;
int32_t t169 = -2;
volatile int16_t x768 = INT16_MIN;
int8_t x774 = INT8_MIN;
static int32_t x778 = -1;
static uint8_t x779 = UINT8_MAX;
int64_t x785 = INT64_MIN;
static uint16_t x798 = UINT16_MAX;
uint64_t x804 = UINT64_MAX;
uint64_t x807 = UINT64_MAX;
uint16_t x808 = 41U;
volatile int32_t x830 = 37453688;
int16_t x831 = INT16_MIN;
int32_t x835 = INT32_MAX;
volatile uint8_t x839 = 14U;
volatile int64_t x849 = 107568LL;
volatile uint8_t x854 = UINT8_MAX;
int64_t x855 = INT64_MAX;
volatile int32_t t189 = 1747222;
static int16_t x863 = -391;
static volatile int32_t t190 = 31592337;
volatile int32_t x866 = INT32_MAX;
int32_t x870 = 14674;
int32_t t192 = 3370088;
int8_t x875 = INT8_MIN;
int32_t x876 = 821575;
int16_t x877 = INT16_MIN;
volatile uint32_t x878 = UINT32_MAX;
int32_t t194 = -22118923;
uint64_t x885 = UINT64_MAX;
int32_t x888 = INT32_MAX;
int32_t x894 = -195006;
volatile int64_t x899 = -5473LL;
int32_t x900 = INT32_MIN;
volatile int64_t x902 = -1LL;
uint64_t x904 = 2525354443LLU;


void f0(void) {
    	int64_t x6 = -11666LL;
	static volatile uint16_t x7 = UINT16_MAX;
	volatile int32_t x8 = INT32_MIN;
	static int32_t t0 = 2124064;

    t0 = (x5+((x6/x7)!=x8));

    if (t0 != 8) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = -776;
	volatile int16_t x10 = INT16_MIN;
	int64_t x11 = -1LL;
	uint64_t x12 = 268727920LLU;
	volatile int32_t t1 = -47190;

    t1 = (x9+((x10/x11)!=x12));

    if (t1 != -775) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = -1;
	uint32_t x16 = 450U;
	static volatile int32_t t2 = -3328190;

    t2 = (x13+((x14/x15)!=x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x17 = 505346U;
	static volatile int64_t x18 = INT64_MIN;
	static int64_t x19 = INT64_MIN;
	int32_t x20 = 220563;
	uint32_t t3 = 5U;

    t3 = (x17+((x18/x19)!=x20));

    if (t3 != 505347U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x25 = -8146LL;
	int32_t x26 = -76879;
	uint32_t x27 = 460774U;
	int8_t x28 = -2;
	volatile int64_t t4 = 3012869905262LL;

    t4 = (x25+((x26/x27)!=x28));

    if (t4 != -8145LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x29 = INT8_MIN;
	volatile uint16_t x30 = UINT16_MAX;
	int8_t x31 = -17;
	uint64_t x32 = 58683677925680LLU;

    t5 = (x29+((x30/x31)!=x32));

    if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x33 = INT8_MAX;
	int16_t x34 = INT16_MIN;
	uint64_t x36 = 4772110116LLU;
	volatile int32_t t6 = 170124;

    t6 = (x33+((x34/x35)!=x36));

    if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = -1;
	int16_t x39 = INT16_MIN;
	volatile int16_t x40 = INT16_MIN;
	volatile int32_t t7 = -2145;

    t7 = (x37+((x38/x39)!=x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = -1;
	int8_t x44 = INT8_MIN;
	int32_t t8 = -15;

    t8 = (x41+((x42/x43)!=x44));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x45 = 427U;
	volatile uint8_t x46 = 45U;
	static int32_t x47 = INT32_MAX;
	static uint32_t x48 = 2014290822U;
	volatile uint32_t t9 = 9417U;

    t9 = (x45+((x46/x47)!=x48));

    if (t9 != 428U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x49 = UINT16_MAX;
	int64_t x50 = INT64_MIN;
	int32_t x51 = 3876902;
	uint16_t x52 = 263U;
	volatile int32_t t10 = -1;

    t10 = (x49+((x50/x51)!=x52));

    if (t10 != 65536) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x53 = 144206726158462LL;
	uint32_t x54 = UINT32_MAX;
	int64_t t11 = -41992765783229889LL;

    t11 = (x53+((x54/x55)!=x56));

    if (t11 != 144206726158463LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x57 = 1789650691U;
	volatile int8_t x59 = -1;
	volatile uint32_t t12 = 2469503U;

    t12 = (x57+((x58/x59)!=x60));

    if (t12 != 1789650692U) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x61 = 97U;
	uint64_t x62 = 272141201727725263LLU;
	static volatile uint64_t x63 = UINT64_MAX;
	int32_t x64 = INT32_MIN;
	static volatile int32_t t13 = 247916;

    t13 = (x61+((x62/x63)!=x64));

    if (t13 != 98) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x70 = UINT8_MAX;
	volatile uint64_t x72 = 190714836020LLU;

    t14 = (x69+((x70/x71)!=x72));

    if (t14 != 65536) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x73 = 532472566U;
	int64_t x74 = INT64_MAX;
	uint64_t x75 = 16223556LLU;
	volatile uint32_t t15 = 1395497303U;

    t15 = (x73+((x74/x75)!=x76));

    if (t15 != 532472567U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = -964;
	int8_t x78 = -32;
	int8_t x79 = INT8_MAX;
	int32_t x80 = INT32_MIN;
	static int32_t t16 = 126770613;

    t16 = (x77+((x78/x79)!=x80));

    if (t16 != -963) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = INT8_MIN;
	int32_t x82 = INT32_MAX;
	volatile int32_t t17 = -56538;

    t17 = (x81+((x82/x83)!=x84));

    if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x85 = -1;
	uint32_t x86 = 3648620U;
	volatile uint64_t x87 = UINT64_MAX;
	int32_t x88 = 66384;
	volatile int32_t t18 = -281726;

    t18 = (x85+((x86/x87)!=x88));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x89 = -1;
	volatile int8_t x90 = -1;
	int64_t x91 = INT64_MIN;
	static int16_t x92 = -1;
	volatile int32_t t19 = -195;

    t19 = (x89+((x90/x91)!=x92));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x94 = 190691835109LLU;
	volatile int8_t x95 = 6;
	static volatile int32_t t20 = 1848244;

    t20 = (x93+((x94/x95)!=x96));

    if (t20 != -513000527) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x97 = -75413921739644LL;
	int16_t x99 = INT16_MIN;
	uint32_t x100 = UINT32_MAX;
	static int64_t t21 = 6278061533040LL;

    t21 = (x97+((x98/x99)!=x100));

    if (t21 != -75413921739643LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x105 = -1;
	static int8_t x106 = -1;
	static volatile int32_t x107 = INT32_MIN;
	static int64_t x108 = 65219829685164LL;
	static volatile int32_t t22 = -242;

    t22 = (x105+((x106/x107)!=x108));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x109 = 0;
	uint8_t x110 = 2U;
	int32_t x111 = INT32_MIN;
	int8_t x112 = -1;

    t23 = (x109+((x110/x111)!=x112));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x114 = UINT16_MAX;
	int8_t x115 = INT8_MAX;
	static volatile int8_t x116 = INT8_MIN;
	static int32_t t24 = -45958377;

    t24 = (x113+((x114/x115)!=x116));

    if (t24 != 27) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x117 = 1;
	static int64_t x118 = 11674208LL;
	uint8_t x119 = 70U;
	static int16_t x120 = -1;
	volatile int32_t t25 = 3;

    t25 = (x117+((x118/x119)!=x120));

    if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x121 = -1LL;
	int64_t x122 = -1LL;
	static int64_t x123 = INT64_MIN;
	int64_t t26 = -3LL;

    t26 = (x121+((x122/x123)!=x124));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x125 = -1;
	uint8_t x126 = UINT8_MAX;
	int32_t x127 = 304827;
	volatile int32_t x128 = INT32_MIN;
	volatile int32_t t27 = 0;

    t27 = (x125+((x126/x127)!=x128));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x134 = -1;
	static int16_t x135 = -3;
	volatile int64_t x136 = INT64_MIN;
	static volatile uint32_t t28 = 1944809649U;

    t28 = (x133+((x134/x135)!=x136));

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x137 = 14099423;
	uint8_t x139 = UINT8_MAX;
	static int32_t x140 = -1;
	int32_t t29 = 18628180;

    t29 = (x137+((x138/x139)!=x140));

    if (t29 != 14099424) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x141 = 1297;
	int32_t x142 = INT32_MAX;
	uint8_t x143 = 14U;
	uint32_t x144 = 8073604U;
	int32_t t30 = 3;

    t30 = (x141+((x142/x143)!=x144));

    if (t30 != 1298) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x145 = -1;
	int32_t x146 = INT32_MAX;
	int16_t x147 = INT16_MAX;
	static int16_t x148 = INT16_MAX;

    t31 = (x145+((x146/x147)!=x148));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x150 = INT16_MIN;
	uint32_t t32 = 0U;

    t32 = (x149+((x150/x151)!=x152));

    if (t32 != 96654U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x154 = INT32_MIN;
	static volatile uint32_t x155 = 1636U;
	static uint8_t x156 = 3U;

    t33 = (x153+((x154/x155)!=x156));

    if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x157 = -1LL;
	volatile uint16_t x158 = 4632U;

    t34 = (x157+((x158/x159)!=x160));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x161 = -1;
	uint64_t x162 = UINT64_MAX;
	volatile int64_t x163 = 27527940667107LL;
	static int16_t x164 = -1;
	int32_t t35 = 825069208;

    t35 = (x161+((x162/x163)!=x164));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x165 = 26;
	static int64_t x166 = -1LL;
	int32_t x167 = -1;

    t36 = (x165+((x166/x167)!=x168));

    if (t36 != 27) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x169 = 1762167022568LL;
	static uint16_t x170 = 38U;
	int8_t x171 = INT8_MIN;
	static volatile int64_t t37 = 156521573746148LL;

    t37 = (x169+((x170/x171)!=x172));

    if (t37 != 1762167022569LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x173 = 3;
	int16_t x174 = INT16_MIN;
	uint16_t x175 = UINT16_MAX;
	volatile int32_t t38 = 265442409;

    t38 = (x173+((x174/x175)!=x176));

    if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x177 = -1LL;
	volatile int8_t x178 = INT8_MIN;
	volatile int8_t x179 = INT8_MIN;
	static volatile int64_t x180 = -1LL;
	int64_t t39 = 155080031LL;

    t39 = (x177+((x178/x179)!=x180));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x181 = UINT16_MAX;
	int16_t x182 = 3;
	uint64_t x184 = 3LLU;
	volatile int32_t t40 = -5933123;

    t40 = (x181+((x182/x183)!=x184));

    if (t40 != 65536) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = 251U;
	volatile int32_t t41 = -325;

    t41 = (x189+((x190/x191)!=x192));

    if (t41 != 172) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x193 = INT16_MIN;
	int32_t x194 = -1;
	static int8_t x195 = INT8_MIN;
	uint16_t x196 = 17U;
	static int32_t t42 = 1067;

    t42 = (x193+((x194/x195)!=x196));

    if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x197 = 25;
	static int64_t x198 = INT64_MAX;
	int32_t x199 = -1;
	static int16_t x200 = -7;

    t43 = (x197+((x198/x199)!=x200));

    if (t43 != 26) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x201 = UINT32_MAX;
	int16_t x202 = -19;
	static int8_t x204 = INT8_MAX;
	volatile uint32_t t44 = 194843U;

    t44 = (x201+((x202/x203)!=x204));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x205 = 617;
	int32_t x206 = INT32_MAX;
	static int32_t x208 = INT32_MIN;
	int32_t t45 = 253514;

    t45 = (x205+((x206/x207)!=x208));

    if (t45 != 618) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x210 = 4;
	uint32_t x211 = UINT32_MAX;
	int16_t x212 = -1;
	volatile int32_t t46 = 1732;

    t46 = (x209+((x210/x211)!=x212));

    if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x213 = INT32_MIN;
	int16_t x214 = INT16_MAX;
	uint64_t x215 = 8966741294241540LLU;
	int32_t x216 = -865980;
	volatile int32_t t47 = -9;

    t47 = (x213+((x214/x215)!=x216));

    if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x221 = 239908480851LLU;
	static int32_t x222 = INT32_MIN;
	static volatile int32_t x223 = -19606296;

    t48 = (x221+((x222/x223)!=x224));

    if (t48 != 239908480852LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x225 = UINT8_MAX;
	int8_t x226 = -3;
	static int16_t x227 = -3;
	volatile int8_t x228 = -1;
	volatile int32_t t49 = -75882876;

    t49 = (x225+((x226/x227)!=x228));

    if (t49 != 256) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x229 = 3U;
	volatile int16_t x230 = -491;
	uint16_t x231 = UINT16_MAX;
	uint8_t x232 = 54U;
	volatile int32_t t50 = -1245;

    t50 = (x229+((x230/x231)!=x232));

    if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MAX;
	uint16_t x235 = UINT16_MAX;
	int32_t x236 = INT32_MIN;
	int32_t t51 = -24436741;

    t51 = (x233+((x234/x235)!=x236));

    if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x237 = UINT16_MAX;
	int32_t t52 = 12469222;

    t52 = (x237+((x238/x239)!=x240));

    if (t52 != 65536) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x241 = INT8_MIN;
	static int16_t x242 = INT16_MIN;
	volatile uint64_t x244 = UINT64_MAX;

    t53 = (x241+((x242/x243)!=x244));

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x246 = 4318689105962120LLU;
	static int16_t x247 = INT16_MIN;
	volatile int32_t x248 = 3;
	volatile int32_t t54 = 186239341;

    t54 = (x245+((x246/x247)!=x248));

    if (t54 != 256) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x250 = INT8_MIN;
	uint64_t x251 = 2193053288336764981LLU;
	uint64_t x252 = 14882967129LLU;
	volatile int32_t t55 = -935;

    t55 = (x249+((x250/x251)!=x252));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x253 = -1LL;
	volatile int8_t x254 = INT8_MIN;
	int32_t x256 = INT32_MIN;
	volatile int64_t t56 = 1LL;

    t56 = (x253+((x254/x255)!=x256));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x258 = INT32_MIN;
	uint32_t x259 = 35111U;
	int32_t x260 = -34422;
	volatile int32_t t57 = 57;

    t57 = (x257+((x258/x259)!=x260));

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x261 = INT64_MIN;
	int32_t x262 = -1;
	int8_t x263 = INT8_MAX;

    t58 = (x261+((x262/x263)!=x264));

    if (t58 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x266 = -99024770031LL;
	int8_t x267 = 1;
	int32_t t59 = -11637041;

    t59 = (x265+((x266/x267)!=x268));

    if (t59 != 32768) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x269 = INT16_MAX;
	int8_t x271 = 3;
	uint64_t x272 = UINT64_MAX;
	static volatile int32_t t60 = -1;

    t60 = (x269+((x270/x271)!=x272));

    if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x273 = INT8_MIN;
	int64_t x274 = INT64_MIN;
	volatile int16_t x275 = 35;
	uint8_t x276 = 37U;
	volatile int32_t t61 = 300156846;

    t61 = (x273+((x274/x275)!=x276));

    if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x277 = INT16_MIN;
	int16_t x280 = -7321;
	volatile int32_t t62 = -23338;

    t62 = (x277+((x278/x279)!=x280));

    if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x281 = INT64_MIN;
	int16_t x282 = INT16_MIN;
	int8_t x283 = -60;
	int32_t x284 = -3784;
	static int64_t t63 = -90LL;

    t63 = (x281+((x282/x283)!=x284));

    if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x286 = INT8_MIN;
	uint32_t x287 = 8538450U;
	static volatile uint64_t x288 = 22207400064568728LLU;
	int32_t t64 = 52315;

    t64 = (x285+((x286/x287)!=x288));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x290 = -3;
	static uint32_t t65 = 827U;

    t65 = (x289+((x290/x291)!=x292));

    if (t65 != 2U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x294 = -1;
	uint32_t x295 = UINT32_MAX;
	int32_t x296 = -30;
	static volatile int32_t t66 = -539595;

    t66 = (x293+((x294/x295)!=x296));

    if (t66 != 49) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x297 = -1;
	uint16_t x298 = UINT16_MAX;
	int8_t x299 = INT8_MIN;
	int8_t x300 = INT8_MAX;
	int32_t t67 = -2144;

    t67 = (x297+((x298/x299)!=x300));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x301 = -3;
	int8_t x302 = INT8_MIN;
	int8_t x303 = -1;
	static volatile int64_t x304 = -1LL;

    t68 = (x301+((x302/x303)!=x304));

    if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x305 = INT64_MIN;
	uint64_t x306 = UINT64_MAX;
	static int64_t x307 = -31LL;
	volatile int64_t x308 = -3162176LL;
	int64_t t69 = 4333546622265370LL;

    t69 = (x305+((x306/x307)!=x308));

    if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x309 = -1LL;
	int16_t x310 = -1;
	uint16_t x311 = 22U;
	int8_t x312 = INT8_MIN;
	int64_t t70 = -2031749LL;

    t70 = (x309+((x310/x311)!=x312));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x313 = INT16_MIN;
	int32_t x314 = 14061;
	uint32_t x315 = UINT32_MAX;
	int64_t x316 = INT64_MIN;

    t71 = (x313+((x314/x315)!=x316));

    if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x317 = -11;
	uint8_t x318 = 40U;
	volatile uint64_t x319 = UINT64_MAX;
	int16_t x320 = 3546;
	int32_t t72 = -99717;

    t72 = (x317+((x318/x319)!=x320));

    if (t72 != -10) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x321 = UINT64_MAX;
	volatile int16_t x324 = INT16_MIN;
	uint64_t t73 = 48333515170845LLU;

    t73 = (x321+((x322/x323)!=x324));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x326 = -1;
	uint8_t x328 = 28U;
	volatile int32_t t74 = 1013795;

    t74 = (x325+((x326/x327)!=x328));

    if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x330 = 15654928748179782LLU;
	volatile int64_t x332 = 474177LL;
	volatile int32_t t75 = 772740580;

    t75 = (x329+((x330/x331)!=x332));

    if (t75 != 65419) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x333 = INT16_MAX;
	static volatile int64_t x335 = -154897110747LL;
	int32_t t76 = -32;

    t76 = (x333+((x334/x335)!=x336));

    if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x337 = -11491;
	static int32_t x339 = -1;
	uint16_t x340 = 1U;
	int32_t t77 = -150969707;

    t77 = (x337+((x338/x339)!=x340));

    if (t77 != -11490) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x341 = 11;
	int32_t x342 = INT32_MIN;
	static volatile int16_t x343 = -17;

    t78 = (x341+((x342/x343)!=x344));

    if (t78 != 12) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x346 = 7U;
	int32_t x347 = INT32_MIN;
	uint32_t x348 = UINT32_MAX;
	static int32_t t79 = -3069;

    t79 = (x345+((x346/x347)!=x348));

    if (t79 != 5) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MIN;
	volatile int32_t x352 = -39973366;
	int32_t t80 = -6213;

    t80 = (x349+((x350/x351)!=x352));

    if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x353 = UINT32_MAX;
	int32_t x354 = INT32_MIN;
	int32_t x355 = -2;
	int64_t x356 = 8823473136312565LL;
	uint32_t t81 = 21U;

    t81 = (x353+((x354/x355)!=x356));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x357 = 7U;
	static uint8_t x358 = 74U;
	static int8_t x359 = INT8_MAX;
	volatile uint32_t x360 = 21627U;
	volatile uint32_t t82 = 49U;

    t82 = (x357+((x358/x359)!=x360));

    if (t82 != 8U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x361 = INT64_MIN;
	static uint16_t x362 = 1U;
	int16_t x363 = -1;

    t83 = (x361+((x362/x363)!=x364));

    if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x366 = INT8_MAX;
	int64_t x367 = INT64_MIN;
	volatile uint8_t x368 = 0U;
	static volatile int32_t t84 = -1530;

    t84 = (x365+((x366/x367)!=x368));

    if (t84 != -120878) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x369 = -93302;
	uint8_t x371 = UINT8_MAX;
	volatile int8_t x372 = INT8_MAX;
	int32_t t85 = -839376;

    t85 = (x369+((x370/x371)!=x372));

    if (t85 != -93301) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x377 = 5460;
	uint16_t x378 = 575U;
	volatile int32_t x380 = 1;
	volatile int32_t t86 = -50284394;

    t86 = (x377+((x378/x379)!=x380));

    if (t86 != 5461) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x381 = 1728684871709LLU;
	int16_t x382 = -1;
	uint32_t x383 = UINT32_MAX;
	int16_t x384 = -1;
	uint64_t t87 = 32772LLU;

    t87 = (x381+((x382/x383)!=x384));

    if (t87 != 1728684871710LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x385 = INT64_MAX;
	int32_t x386 = -1;
	volatile int64_t x387 = -1LL;
	static volatile int16_t x388 = 1;
	volatile int64_t t88 = INT64_MAX;

    t88 = (x385+((x386/x387)!=x388));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x389 = 63120833LLU;
	int64_t x390 = 15519LL;
	int16_t x391 = INT16_MIN;
	int16_t x392 = INT16_MAX;
	volatile uint64_t t89 = 8LLU;

    t89 = (x389+((x390/x391)!=x392));

    if (t89 != 63120834LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x393 = 1708751LL;
	static volatile int16_t x394 = 369;
	volatile int16_t x395 = INT16_MIN;
	uint32_t x396 = 12049541U;
	int64_t t90 = 62419LL;

    t90 = (x393+((x394/x395)!=x396));

    if (t90 != 1708752LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x397 = INT64_MIN;
	static volatile int64_t x398 = INT64_MAX;
	int16_t x399 = 496;
	int64_t t91 = 1662851LL;

    t91 = (x397+((x398/x399)!=x400));

    if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x403 = 61775202LL;
	int32_t x404 = 130608;
	int64_t t92 = -131493328802196531LL;

    t92 = (x401+((x402/x403)!=x404));

    if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x405 = 11LL;
	int64_t x406 = 2092351908LL;
	uint64_t x407 = UINT64_MAX;
	uint8_t x408 = 53U;

    t93 = (x405+((x406/x407)!=x408));

    if (t93 != 12LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x413 = UINT16_MAX;
	static int8_t x414 = INT8_MAX;
	int64_t x415 = INT64_MAX;
	uint32_t x416 = 101875U;
	volatile int32_t t94 = -9;

    t94 = (x413+((x414/x415)!=x416));

    if (t94 != 65536) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x417 = UINT16_MAX;
	static int16_t x418 = -1295;
	int32_t x419 = -1;
	uint64_t x420 = 2130391305224LLU;
	int32_t t95 = -3;

    t95 = (x417+((x418/x419)!=x420));

    if (t95 != 65536) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x421 = -1;
	volatile int64_t x422 = INT64_MAX;
	uint64_t x423 = 8517232845879LLU;
	volatile int8_t x424 = -1;
	volatile int32_t t96 = 173;

    t96 = (x421+((x422/x423)!=x424));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x426 = -1LL;
	int64_t x427 = INT64_MAX;
	uint32_t x428 = UINT32_MAX;

    t97 = (x425+((x426/x427)!=x428));

    if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x429 = INT8_MIN;
	int32_t t98 = -4197;

    t98 = (x429+((x430/x431)!=x432));

    if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x433 = UINT8_MAX;
	uint32_t x435 = 31929U;
	static volatile uint32_t x436 = 46504U;
	int32_t t99 = -1275332;

    t99 = (x433+((x434/x435)!=x436));

    if (t99 != 256) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x437 = -1;
	int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MAX;
	static int32_t t100 = -4043762;

    t100 = (x437+((x438/x439)!=x440));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x442 = 2;
	int64_t x443 = INT64_MAX;
	int64_t x444 = INT64_MIN;

    t101 = (x441+((x442/x443)!=x444));

    if (t101 != -2147483647) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x445 = -1LL;
	int16_t x446 = 43;
	uint8_t x447 = 93U;
	static int64_t t102 = -96LL;

    t102 = (x445+((x446/x447)!=x448));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x449 = 2157609618022LL;
	volatile int16_t x450 = INT16_MAX;
	static volatile int64_t t103 = 1LL;

    t103 = (x449+((x450/x451)!=x452));

    if (t103 != 2157609618023LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x453 = INT64_MIN;
	static int32_t x454 = -1;
	volatile uint8_t x455 = UINT8_MAX;
	uint8_t x456 = 5U;
	int64_t t104 = 997027LL;

    t104 = (x453+((x454/x455)!=x456));

    if (t104 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x457 = 0U;
	int32_t x458 = INT32_MIN;
	uint64_t x460 = 7036390329766521LLU;

    t105 = (x457+((x458/x459)!=x460));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x461 = 1040224048617LLU;
	uint16_t x462 = UINT16_MAX;
	static int8_t x463 = -1;
	static int16_t x464 = INT16_MIN;
	uint64_t t106 = 31039979LLU;

    t106 = (x461+((x462/x463)!=x464));

    if (t106 != 1040224048618LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x465 = -1;
	uint64_t x466 = 24312156005275LLU;
	static volatile int32_t x467 = INT32_MIN;
	int16_t x468 = INT16_MIN;
	int32_t t107 = -1014;

    t107 = (x465+((x466/x467)!=x468));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x469 = 56LL;
	uint64_t x470 = UINT64_MAX;
	int8_t x471 = INT8_MIN;
	uint64_t x472 = 12701978919220LLU;
	int64_t t108 = -1550401541238LL;

    t108 = (x469+((x470/x471)!=x472));

    if (t108 != 57LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x478 = -1;
	uint16_t x479 = 781U;
	int8_t x480 = 3;
	static volatile int32_t t109 = -4542479;

    t109 = (x477+((x478/x479)!=x480));

    if (t109 != 2) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x481 = -456;
	volatile int64_t x483 = -65620106132517LL;
	int8_t x484 = -1;
	static int32_t t110 = 3754235;

    t110 = (x481+((x482/x483)!=x484));

    if (t110 != -455) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x485 = UINT32_MAX;
	int32_t x486 = -1;
	uint16_t x487 = 814U;
	uint32_t t111 = 279425966U;

    t111 = (x485+((x486/x487)!=x488));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x489 = INT8_MIN;
	volatile int64_t x490 = INT64_MIN;
	uint16_t x491 = 2795U;
	uint32_t x492 = 1040830076U;
	int32_t t112 = -964;

    t112 = (x489+((x490/x491)!=x492));

    if (t112 != -127) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x494 = 0U;
	static uint32_t x495 = 659868828U;
	int64_t x496 = -154699LL;
	int64_t t113 = 1085090588214956450LL;

    t113 = (x493+((x494/x495)!=x496));

    if (t113 != 23151LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x500 = -1LL;
	int32_t t114 = -6377802;

    t114 = (x497+((x498/x499)!=x500));

    if (t114 != 256) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x501 = 830;
	uint32_t x502 = 1416925297U;
	int32_t t115 = 9141;

    t115 = (x501+((x502/x503)!=x504));

    if (t115 != 831) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x505 = INT64_MIN;
	uint64_t x506 = 14167405595LLU;
	int8_t x507 = INT8_MAX;
	int64_t x508 = -34303402LL;
	int64_t t116 = 17917616LL;

    t116 = (x505+((x506/x507)!=x508));

    if (t116 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x509 = INT16_MIN;
	int64_t x510 = 3557312077544057LL;
	uint32_t x511 = UINT32_MAX;
	volatile int16_t x512 = -1;
	int32_t t117 = 1684;

    t117 = (x509+((x510/x511)!=x512));

    if (t117 != -32767) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x513 = 5;
	static volatile int64_t x514 = -1LL;
	volatile uint16_t x516 = 9U;
	int32_t t118 = 766951;

    t118 = (x513+((x514/x515)!=x516));

    if (t118 != 6) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x517 = -293262LL;
	int32_t x518 = -13;
	int8_t x519 = INT8_MAX;
	volatile int64_t t119 = 255310977787489253LL;

    t119 = (x517+((x518/x519)!=x520));

    if (t119 != -293261LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x526 = -12;
	int16_t x527 = INT16_MIN;
	volatile int32_t t120 = 100797;

    t120 = (x525+((x526/x527)!=x528));

    if (t120 != -8) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x529 = INT16_MAX;
	int32_t x530 = -78;
	static volatile int32_t t121 = 105354010;

    t121 = (x529+((x530/x531)!=x532));

    if (t121 != 32768) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x533 = 795;
	volatile int64_t x534 = -35674328788724LL;
	uint64_t x535 = UINT64_MAX;
	volatile int32_t t122 = 15;

    t122 = (x533+((x534/x535)!=x536));

    if (t122 != 796) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x541 = 2353LLU;
	int16_t x542 = INT16_MAX;
	static int8_t x543 = INT8_MIN;
	int32_t x544 = -5629660;
	volatile uint64_t t123 = 501828533174627656LLU;

    t123 = (x541+((x542/x543)!=x544));

    if (t123 != 2354LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x546 = INT16_MIN;
	int32_t x547 = -1;
	uint64_t x548 = 3478LLU;

    t124 = (x545+((x546/x547)!=x548));

    if (t124 != 985416981U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x549 = 795967LLU;
	int64_t x550 = 3172713971121184LL;
	uint16_t x551 = UINT16_MAX;

    t125 = (x549+((x550/x551)!=x552));

    if (t125 != 795968LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x553 = UINT16_MAX;
	int16_t x554 = -39;
	static int16_t x556 = 4873;
	int32_t t126 = -1;

    t126 = (x553+((x554/x555)!=x556));

    if (t126 != 65536) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x557 = 1950U;
	static int16_t x559 = INT16_MIN;
	static int32_t t127 = 50191;

    t127 = (x557+((x558/x559)!=x560));

    if (t127 != 1951) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x561 = 239013274123LLU;
	static int8_t x562 = 13;
	uint64_t x563 = 360672209LLU;
	uint32_t x564 = UINT32_MAX;
	uint64_t t128 = 11348384852930LLU;

    t128 = (x561+((x562/x563)!=x564));

    if (t128 != 239013274124LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x565 = -1;
	uint8_t x566 = UINT8_MAX;
	uint16_t x567 = 19763U;
	uint16_t x568 = 4U;
	volatile int32_t t129 = 16408;

    t129 = (x565+((x566/x567)!=x568));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int32_t x569 = -1;
	int16_t x570 = -1;
	int8_t x572 = -39;
	volatile int32_t t130 = -81383;

    t130 = (x569+((x570/x571)!=x572));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x573 = 3462LL;
	uint32_t x575 = 6785U;
	static volatile uint16_t x576 = 566U;
	static volatile int64_t t131 = -29026591LL;

    t131 = (x573+((x574/x575)!=x576));

    if (t131 != 3463LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x577 = -35;
	uint8_t x578 = UINT8_MAX;

    t132 = (x577+((x578/x579)!=x580));

    if (t132 != -34) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x581 = UINT8_MAX;
	int16_t x582 = 119;
	uint64_t x583 = UINT64_MAX;
	volatile int64_t x584 = -58770932291556LL;

    t133 = (x581+((x582/x583)!=x584));

    if (t133 != 256) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x585 = 2LLU;
	int32_t x586 = INT32_MAX;
	volatile int32_t x587 = 402275;
	int32_t x588 = -222056330;
	uint64_t t134 = 84172852558613LLU;

    t134 = (x585+((x586/x587)!=x588));

    if (t134 != 3LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x589 = 63496LLU;
	int64_t x591 = INT64_MIN;
	volatile int16_t x592 = -1;
	uint64_t t135 = 791672098142947LLU;

    t135 = (x589+((x590/x591)!=x592));

    if (t135 != 63497LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x593 = -1;
	int32_t x594 = INT32_MIN;
	int32_t x596 = -5875739;
	volatile int32_t t136 = -383423826;

    t136 = (x593+((x594/x595)!=x596));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x598 = 14223;
	int32_t x599 = 3478000;
	int16_t x600 = INT16_MIN;
	volatile int32_t t137 = -307332309;

    t137 = (x597+((x598/x599)!=x600));

    if (t137 != 128) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x605 = INT8_MIN;
	static int8_t x606 = -14;
	uint8_t x607 = 71U;

    t138 = (x605+((x606/x607)!=x608));

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x609 = INT32_MIN;
	uint32_t x611 = 919883U;
	static int16_t x612 = -70;
	static int32_t t139 = -2711302;

    t139 = (x609+((x610/x611)!=x612));

    if (t139 != -2147483647) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x613 = INT16_MIN;
	int8_t x614 = INT8_MIN;
	volatile int32_t t140 = 220527663;

    t140 = (x613+((x614/x615)!=x616));

    if (t140 != -32767) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x623 = UINT8_MAX;
	uint32_t x624 = 60024850U;
	int32_t t141 = 106;

    t141 = (x621+((x622/x623)!=x624));

    if (t141 != -127) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x629 = 1;
	int8_t x630 = 1;
	volatile int8_t x632 = -1;
	volatile int32_t t142 = 4101556;

    t142 = (x629+((x630/x631)!=x632));

    if (t142 != 2) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x633 = 250;
	int8_t x634 = INT8_MIN;
	uint16_t x635 = UINT16_MAX;
	volatile int32_t x636 = INT32_MIN;
	int32_t t143 = -87846;

    t143 = (x633+((x634/x635)!=x636));

    if (t143 != 251) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x638 = UINT32_MAX;
	int32_t x639 = INT32_MIN;
	int16_t x640 = 3931;
	volatile int32_t t144 = 2663;

    t144 = (x637+((x638/x639)!=x640));

    if (t144 != -32767) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x644 = UINT8_MAX;
	uint32_t t145 = 66606912U;

    t145 = (x641+((x642/x643)!=x644));

    if (t145 != 31333801U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x645 = -1;
	int8_t x646 = INT8_MIN;
	static uint8_t x647 = UINT8_MAX;
	int32_t t146 = -11;

    t146 = (x645+((x646/x647)!=x648));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x650 = INT32_MIN;
	int8_t x651 = INT8_MIN;
	int8_t x652 = 46;
	volatile uint32_t t147 = 6U;

    t147 = (x649+((x650/x651)!=x652));

    if (t147 != 572668647U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x653 = -4;
	static uint8_t x654 = UINT8_MAX;
	int64_t x656 = -4744258267010LL;

    t148 = (x653+((x654/x655)!=x656));

    if (t148 != -3) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x657 = 408896503U;
	static int8_t x660 = -1;
	static uint32_t t149 = 419973U;

    t149 = (x657+((x658/x659)!=x660));

    if (t149 != 408896504U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x665 = INT8_MIN;
	uint32_t x666 = 14922871U;
	int32_t t150 = -8;

    t150 = (x665+((x666/x667)!=x668));

    if (t150 != -127) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x669 = -1;
	int64_t x671 = -58594432811587207LL;
	int8_t x672 = 18;
	volatile int32_t t151 = 0;

    t151 = (x669+((x670/x671)!=x672));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x673 = 222U;
	int8_t x674 = -1;
	uint32_t x675 = 62608U;
	uint8_t x676 = UINT8_MAX;
	volatile int32_t t152 = 109;

    t152 = (x673+((x674/x675)!=x676));

    if (t152 != 223) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x678 = 3076U;
	int16_t x679 = -75;
	static int8_t x680 = INT8_MIN;
	int32_t t153 = -912;

    t153 = (x677+((x678/x679)!=x680));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x681 = INT8_MAX;
	volatile int64_t x682 = 216LL;
	volatile int32_t x683 = -1;
	volatile int16_t x684 = -1;
	int32_t t154 = 83571007;

    t154 = (x681+((x682/x683)!=x684));

    if (t154 != 128) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x685 = -1;
	int64_t x687 = INT64_MIN;
	static volatile int8_t x688 = INT8_MIN;
	static volatile int32_t t155 = 1636;

    t155 = (x685+((x686/x687)!=x688));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x689 = -1;
	uint16_t x690 = 4898U;
	volatile uint16_t x691 = UINT16_MAX;
	int16_t x692 = INT16_MIN;
	volatile int32_t t156 = 1091;

    t156 = (x689+((x690/x691)!=x692));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x693 = INT8_MAX;
	uint32_t x694 = UINT32_MAX;
	volatile int8_t x695 = INT8_MAX;
	int32_t x696 = INT32_MIN;
	int32_t t157 = 11636062;

    t157 = (x693+((x694/x695)!=x696));

    if (t157 != 128) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x697 = -719076;
	int8_t x698 = INT8_MAX;
	static int64_t x699 = INT64_MAX;
	int32_t t158 = 1;

    t158 = (x697+((x698/x699)!=x700));

    if (t158 != -719075) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x701 = -1LL;
	static int32_t x702 = INT32_MIN;
	uint8_t x703 = UINT8_MAX;
	uint32_t x704 = UINT32_MAX;
	int64_t t159 = -1394199871872LL;

    t159 = (x701+((x702/x703)!=x704));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x705 = INT16_MAX;
	volatile int16_t x706 = INT16_MIN;
	static volatile uint32_t x708 = UINT32_MAX;
	volatile int32_t t160 = -444;

    t160 = (x705+((x706/x707)!=x708));

    if (t160 != 32768) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x713 = 15431755507196501LLU;
	static volatile uint16_t x714 = UINT16_MAX;
	static volatile int32_t x715 = INT32_MAX;
	int16_t x716 = INT16_MIN;
	uint64_t t161 = 2908LLU;

    t161 = (x713+((x714/x715)!=x716));

    if (t161 != 15431755507196502LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x721 = INT32_MIN;
	int8_t x722 = INT8_MIN;
	uint16_t x723 = 4259U;
	static volatile int16_t x724 = 947;
	volatile int32_t t162 = -245;

    t162 = (x721+((x722/x723)!=x724));

    if (t162 != -2147483647) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x725 = 7U;
	volatile uint32_t x727 = 45705U;
	int32_t t163 = 24473;

    t163 = (x725+((x726/x727)!=x728));

    if (t163 != 8) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x729 = 2729LLU;
	int8_t x731 = INT8_MIN;
	uint64_t t164 = 2LLU;

    t164 = (x729+((x730/x731)!=x732));

    if (t164 != 2730LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x737 = INT64_MIN;
	static int16_t x739 = INT16_MIN;
	int16_t x740 = -8;
	static int64_t t165 = 912LL;

    t165 = (x737+((x738/x739)!=x740));

    if (t165 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x742 = UINT16_MAX;
	volatile uint8_t x743 = 97U;
	uint16_t x744 = UINT16_MAX;

    t166 = (x741+((x742/x743)!=x744));

    if (t166 != -2147483647) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x750 = -1;
	int32_t x751 = -1;
	uint64_t x752 = 294173285174LLU;
	int32_t t167 = 43;

    t167 = (x749+((x750/x751)!=x752));

    if (t167 != 36) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x753 = INT8_MIN;
	static int32_t x754 = INT32_MIN;
	static uint32_t x755 = UINT32_MAX;
	static uint8_t x756 = 1U;

    t168 = (x753+((x754/x755)!=x756));

    if (t168 != -127) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x761 = 0;
	int16_t x763 = -93;
	volatile int64_t x764 = -1LL;

    t169 = (x761+((x762/x763)!=x764));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x765 = 48;
	int32_t x766 = -1;
	uint32_t x767 = 1193U;
	volatile int32_t t170 = -214456;

    t170 = (x765+((x766/x767)!=x768));

    if (t170 != 49) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x769 = -1;
	uint16_t x770 = 0U;
	uint8_t x771 = 5U;
	uint64_t x772 = UINT64_MAX;
	int32_t t171 = -10;

    t171 = (x769+((x770/x771)!=x772));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x773 = UINT32_MAX;
	static uint16_t x775 = 112U;
	uint16_t x776 = 3048U;
	static uint32_t t172 = 6U;

    t172 = (x773+((x774/x775)!=x776));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x777 = INT8_MIN;
	uint8_t x780 = UINT8_MAX;
	int32_t t173 = 0;

    t173 = (x777+((x778/x779)!=x780));

    if (t173 != -127) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x786 = 14424787131LLU;
	int32_t x787 = INT32_MAX;
	int8_t x788 = -1;
	int64_t t174 = -7221001643011LL;

    t174 = (x785+((x786/x787)!=x788));

    if (t174 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x789 = 1;
	int64_t x790 = 24615607321511558LL;
	int64_t x791 = INT64_MIN;
	volatile uint8_t x792 = 37U;
	int32_t t175 = 31006;

    t175 = (x789+((x790/x791)!=x792));

    if (t175 != 2) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x797 = -1;
	int64_t x799 = 50859LL;
	volatile int16_t x800 = -1;
	volatile int32_t t176 = -7457787;

    t176 = (x797+((x798/x799)!=x800));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x801 = INT64_MIN;
	uint16_t x802 = UINT16_MAX;
	int64_t x803 = INT64_MIN;
	volatile int64_t t177 = -11069128224406444LL;

    t177 = (x801+((x802/x803)!=x804));

    if (t177 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x805 = 371361143U;
	int64_t x806 = 169LL;
	static volatile uint32_t t178 = 2U;

    t178 = (x805+((x806/x807)!=x808));

    if (t178 != 371361144U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x809 = -1;
	int16_t x810 = INT16_MIN;
	int64_t x811 = 1738LL;
	volatile uint64_t x812 = UINT64_MAX;
	int32_t t179 = -26489;

    t179 = (x809+((x810/x811)!=x812));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x813 = -133587;
	uint8_t x814 = UINT8_MAX;
	int8_t x815 = INT8_MIN;
	int64_t x816 = -1LL;
	static int32_t t180 = -7;

    t180 = (x813+((x814/x815)!=x816));

    if (t180 != -133587) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x817 = 32U;
	uint32_t x818 = 0U;
	int64_t x819 = 1459233LL;
	static uint16_t x820 = 10U;
	static volatile int32_t t181 = 128613033;

    t181 = (x817+((x818/x819)!=x820));

    if (t181 != 33) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x821 = INT16_MIN;
	static uint64_t x822 = 100751575158287809LLU;
	uint32_t x823 = 7861562U;
	int64_t x824 = INT64_MIN;
	int32_t t182 = 45365;

    t182 = (x821+((x822/x823)!=x824));

    if (t182 != -32767) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x825 = INT16_MAX;
	static uint16_t x826 = 9407U;
	int64_t x827 = INT64_MAX;
	uint64_t x828 = 0LLU;
	volatile int32_t t183 = -4882;

    t183 = (x825+((x826/x827)!=x828));

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x829 = 42U;
	static volatile uint64_t x832 = 6197834823772931300LLU;
	int32_t t184 = -650056546;

    t184 = (x829+((x830/x831)!=x832));

    if (t184 != 43) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x833 = -1LL;
	int8_t x834 = INT8_MAX;
	int32_t x836 = 567069;
	int64_t t185 = -947953LL;

    t185 = (x833+((x834/x835)!=x836));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x837 = -1;
	int32_t x838 = INT32_MIN;
	int64_t x840 = -1LL;
	volatile int32_t t186 = 29;

    t186 = (x837+((x838/x839)!=x840));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x845 = UINT16_MAX;
	uint32_t x846 = 5401480U;
	static uint64_t x847 = 4311662369556153LLU;
	int16_t x848 = -1;
	volatile int32_t t187 = -18855;

    t187 = (x845+((x846/x847)!=x848));

    if (t187 != 65536) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x850 = 3301560U;
	static int64_t x851 = INT64_MAX;
	static uint16_t x852 = 553U;
	int64_t t188 = -53526982979063LL;

    t188 = (x849+((x850/x851)!=x852));

    if (t188 != 107569LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x853 = 0U;
	static volatile uint32_t x856 = 176U;

    t189 = (x853+((x854/x855)!=x856));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x861 = 1U;
	static int8_t x862 = INT8_MAX;
	static int16_t x864 = 104;

    t190 = (x861+((x862/x863)!=x864));

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x865 = -4;
	uint8_t x867 = UINT8_MAX;
	int32_t x868 = -42403409;
	static volatile int32_t t191 = 66193;

    t191 = (x865+((x866/x867)!=x868));

    if (t191 != -3) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x869 = 28;
	static int32_t x871 = INT32_MAX;
	static uint16_t x872 = 1057U;

    t192 = (x869+((x870/x871)!=x872));

    if (t192 != 29) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x873 = UINT32_MAX;
	int64_t x874 = INT64_MAX;
	volatile uint32_t t193 = 117U;

    t193 = (x873+((x874/x875)!=x876));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x879 = INT64_MAX;
	uint32_t x880 = UINT32_MAX;

    t194 = (x877+((x878/x879)!=x880));

    if (t194 != -32767) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x886 = INT8_MAX;
	uint16_t x887 = 18506U;
	volatile uint64_t t195 = 766098355789016LLU;

    t195 = (x885+((x886/x887)!=x888));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x889 = INT16_MIN;
	static int16_t x890 = INT16_MIN;
	static uint8_t x891 = 3U;
	int64_t x892 = -1LL;
	int32_t t196 = -31132347;

    t196 = (x889+((x890/x891)!=x892));

    if (t196 != -32767) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x893 = INT16_MIN;
	static uint16_t x895 = 3336U;
	int32_t x896 = INT32_MIN;
	volatile int32_t t197 = 2519;

    t197 = (x893+((x894/x895)!=x896));

    if (t197 != -32767) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x897 = INT16_MIN;
	uint16_t x898 = 7U;
	int32_t t198 = 1;

    t198 = (x897+((x898/x899)!=x900));

    if (t198 != -32767) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x901 = INT8_MIN;
	static volatile int8_t x903 = INT8_MIN;
	volatile int32_t t199 = -284703238;

    t199 = (x901+((x902/x903)!=x904));

    if (t199 != -127) { NG(); } else { ; }
	
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

