
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

static int16_t x1 = 10626;
static volatile int32_t t0 = 7;
int64_t x10 = 426634414LL;
int64_t x11 = INT64_MIN;
volatile uint32_t x31 = UINT32_MAX;
int64_t x32 = -47077485LL;
int8_t x37 = -1;
int32_t x45 = INT32_MAX;
int32_t x47 = -7;
uint8_t x51 = UINT8_MAX;
int32_t x61 = -959785641;
int32_t t12 = 9062320;
int8_t x67 = INT8_MAX;
uint16_t x72 = UINT16_MAX;
volatile int32_t t14 = -473126720;
int16_t x74 = INT16_MAX;
int32_t t15 = -8;
int16_t x82 = -116;
uint32_t x100 = 25504U;
uint32_t x101 = 2024U;
uint16_t x103 = 5796U;
uint16_t x112 = UINT16_MAX;
volatile int32_t t26 = 139;
int64_t x121 = 6LL;
uint16_t x125 = 0U;
int16_t x127 = INT16_MIN;
static volatile int64_t t30 = 65596887LL;
int8_t x141 = -17;
static volatile int64_t x143 = INT64_MIN;
static int16_t x146 = INT16_MAX;
int64_t x147 = -186634LL;
volatile int32_t t34 = -280711;
int8_t x156 = -1;
static int32_t t36 = -66176583;
int32_t x168 = -1;
uint32_t t38 = 3404U;
int32_t x172 = INT32_MAX;
uint8_t x174 = 39U;
int64_t x175 = INT64_MIN;
int16_t x176 = INT16_MAX;
int32_t t40 = -1492142;
uint32_t x183 = 24349017U;
volatile int64_t x190 = -26888576LL;
int32_t t44 = 1;
static volatile uint32_t x197 = 2174U;
uint32_t x199 = 144794U;
uint32_t x206 = 2498U;
int16_t x210 = INT16_MIN;
int16_t x212 = 3125;
uint32_t x220 = 273U;
int32_t x221 = -100;
static int8_t x234 = INT8_MIN;
int16_t x247 = 8;
int32_t x249 = INT32_MAX;
int32_t x250 = INT32_MIN;
int32_t t56 = -107831;
volatile int32_t t58 = 2042;
volatile int64_t x266 = -6711826781179303LL;
static int32_t t62 = -99974;
int8_t x280 = 19;
int32_t x287 = -8170080;
static volatile uint32_t x288 = UINT32_MAX;
static uint64_t x289 = 2040LLU;
int64_t x291 = INT64_MIN;
uint64_t t65 = 24582285566150LLU;
static int8_t x293 = INT8_MAX;
uint32_t x303 = 5238662U;
uint8_t x309 = 67U;
volatile int8_t x311 = -1;
volatile int32_t x312 = 73069894;
uint32_t x315 = UINT32_MAX;
int16_t x337 = INT16_MIN;
uint64_t x339 = 7050LLU;
int8_t x340 = INT8_MIN;
volatile uint64_t x342 = 0LLU;
volatile int32_t t79 = 1653;
uint16_t x353 = UINT16_MAX;
volatile uint64_t t81 = 608705084288261105LLU;
volatile uint32_t x374 = 391U;
volatile int16_t x379 = 8679;
volatile int32_t t83 = -30838195;
uint32_t x383 = UINT32_MAX;
int16_t x388 = -1;
int8_t x391 = -1;
int16_t x398 = -3083;
uint32_t x402 = 0U;
volatile int16_t x407 = INT16_MIN;
volatile uint32_t t89 = 4782991U;
static uint64_t t90 = UINT64_MAX;
int64_t x426 = -1LL;
static int32_t t93 = -2006;
int32_t x447 = INT32_MIN;
int8_t x449 = INT8_MIN;
int32_t x452 = -1;
volatile int32_t t98 = 492190143;
int16_t x458 = INT16_MIN;
volatile int64_t t100 = 8764897960967LL;
static int64_t x465 = -225255057033471969LL;
int8_t x467 = INT8_MIN;
int64_t x474 = -48671136LL;
int32_t x475 = INT32_MIN;
volatile uint32_t t107 = 611279100U;
volatile int64_t t109 = 3142385975LL;
int64_t x498 = INT64_MIN;
static uint32_t x499 = 1U;
static uint32_t x502 = 30749239U;
static volatile int32_t t111 = -40;
volatile int16_t x517 = -1;
int16_t x520 = INT16_MAX;
uint16_t x521 = 803U;
volatile uint16_t x526 = 12343U;
int64_t x527 = INT64_MIN;
int32_t x529 = 4760;
static int32_t x533 = -1845627;
int64_t x535 = -1LL;
int8_t x536 = INT8_MIN;
int32_t x542 = -18285;
int64_t x550 = INT64_MAX;
uint8_t x551 = UINT8_MAX;
uint32_t x556 = UINT32_MAX;
uint16_t x562 = 2U;
uint64_t t126 = 7549072291299136479LLU;
static int16_t x565 = INT16_MIN;
volatile int32_t t127 = -395905063;
volatile uint8_t x569 = UINT8_MAX;
volatile int32_t t128 = -126712;
int16_t x576 = INT16_MIN;
int32_t t129 = -66718840;
int32_t x582 = -8;
int32_t x583 = INT32_MAX;
static int32_t t131 = -51;
int64_t x585 = 13662761635068LL;
static volatile int16_t x605 = INT16_MAX;
uint32_t x607 = UINT32_MAX;
int64_t x610 = INT64_MIN;
int16_t x612 = -2945;
int16_t x615 = -505;
int16_t x623 = 5056;
int32_t t139 = 3419674;
uint16_t x628 = 983U;
volatile int32_t x634 = INT32_MIN;
volatile int16_t x636 = INT16_MIN;
volatile int32_t t142 = 17803;
volatile uint8_t x652 = 1U;
static int32_t t146 = 3;
int16_t x656 = INT16_MIN;
int32_t t151 = 133189;
volatile uint64_t x680 = 10696925352LLU;
int32_t x681 = 1;
volatile int32_t t153 = -6;
int32_t x700 = 7;
static volatile uint8_t x701 = UINT8_MAX;
static int16_t x706 = INT16_MIN;
int64_t x707 = -1LL;
volatile int32_t t159 = -5835449;
volatile uint64_t t160 = 1076628389299235979LLU;
volatile int32_t t161 = -311681967;
static int16_t x719 = -456;
int32_t t162 = -1481;
static volatile uint16_t x725 = 731U;
static int64_t x727 = -1LL;
int32_t t163 = 3;
uint8_t x729 = 30U;
uint8_t x730 = UINT8_MAX;
int32_t x735 = 333226155;
int8_t x741 = 26;
int8_t x751 = INT8_MAX;
int64_t x754 = INT64_MIN;
volatile int32_t t172 = -943;
int16_t x774 = INT16_MIN;
int32_t x775 = INT32_MIN;
int32_t x780 = INT32_MIN;
int64_t x783 = -4751335411877LL;
int8_t x784 = INT8_MIN;
static int8_t x796 = INT8_MIN;
int64_t t178 = 1127LL;
static int64_t x815 = -1521LL;
int16_t x818 = INT16_MIN;
uint16_t x826 = UINT16_MAX;
int16_t x834 = INT16_MAX;
int16_t x837 = 4034;
int32_t x840 = 5112;
int64_t x843 = -1LL;
volatile uint32_t t189 = 106U;
static uint32_t x845 = 149138U;
int64_t x853 = INT64_MAX;
int16_t x865 = INT16_MIN;
int8_t x869 = INT8_MIN;
int16_t x879 = 486;
volatile uint16_t x885 = UINT16_MAX;
int64_t x886 = 9611764721799433LL;
volatile int64_t t199 = -22LL;


void f0(void) {
    	volatile uint16_t x2 = 1U;
	int32_t x3 = INT32_MIN;
	int64_t x4 = -1LL;

    t0 = (x1-((x2/x3)!=x4));

    if (t0 != 10625) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 64U;
	int8_t x6 = INT8_MIN;
	static int32_t x7 = INT32_MIN;
	uint8_t x8 = 1U;
	int32_t t1 = -19303273;

    t1 = (x5-((x6/x7)!=x8));

    if (t1 != 63) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 25182LLU;
	volatile int64_t x12 = -641307594LL;
	volatile uint64_t t2 = 1797094868LLU;

    t2 = (x9-((x10/x11)!=x12));

    if (t2 != 25181LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x21 = INT8_MIN;
	static volatile int32_t x22 = INT32_MIN;
	uint8_t x23 = 6U;
	int64_t x24 = -1LL;
	static int32_t t3 = -7078961;

    t3 = (x21-((x22/x23)!=x24));

    if (t3 != -129) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x29 = INT8_MIN;
	int64_t x30 = 941452273634716533LL;
	volatile int32_t t4 = -7;

    t4 = (x29-((x30/x31)!=x32));

    if (t4 != -129) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x33 = UINT16_MAX;
	uint16_t x34 = UINT16_MAX;
	volatile int32_t x35 = INT32_MAX;
	static int64_t x36 = 4513369LL;
	static int32_t t5 = -35;

    t5 = (x33-((x34/x35)!=x36));

    if (t5 != 65534) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x38 = 31;
	uint32_t x39 = 6434002U;
	int32_t x40 = -17259673;
	int32_t t6 = 12183;

    t6 = (x37-((x38/x39)!=x40));

    if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x41 = -1;
	int32_t x42 = -3043257;
	int64_t x43 = INT64_MIN;
	int64_t x44 = INT64_MAX;
	static volatile int32_t t7 = -376;

    t7 = (x41-((x42/x43)!=x44));

    if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x46 = 4;
	volatile uint16_t x48 = 2U;
	volatile int32_t t8 = 21279897;

    t8 = (x45-((x46/x47)!=x48));

    if (t8 != 2147483646) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x49 = INT8_MIN;
	uint16_t x50 = 6402U;
	int64_t x52 = INT64_MIN;
	volatile int32_t t9 = 2654;

    t9 = (x49-((x50/x51)!=x52));

    if (t9 != -129) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x53 = -1;
	int32_t x54 = INT32_MIN;
	static uint8_t x55 = 63U;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t10 = 436;

    t10 = (x53-((x54/x55)!=x56));

    if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x57 = -311;
	static int16_t x58 = INT16_MAX;
	uint16_t x59 = 17U;
	static volatile int32_t x60 = 511703432;
	volatile int32_t t11 = 14506538;

    t11 = (x57-((x58/x59)!=x60));

    if (t11 != -312) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x62 = 2U;
	static uint64_t x63 = 7122523LLU;
	int8_t x64 = -1;

    t12 = (x61-((x62/x63)!=x64));

    if (t12 != -959785642) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x65 = 38U;
	int64_t x66 = INT64_MIN;
	static int16_t x68 = INT16_MIN;
	int32_t t13 = -1881;

    t13 = (x65-((x66/x67)!=x68));

    if (t13 != 37) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x69 = UINT16_MAX;
	static int16_t x70 = 1270;
	volatile uint64_t x71 = UINT64_MAX;

    t14 = (x69-((x70/x71)!=x72));

    if (t14 != 65534) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = -1;
	int8_t x75 = INT8_MIN;
	int64_t x76 = INT64_MIN;

    t15 = (x73-((x74/x75)!=x76));

    if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x77 = 37U;
	int64_t x78 = INT64_MIN;
	uint16_t x79 = 52U;
	volatile int32_t x80 = INT32_MIN;
	int32_t t16 = -659;

    t16 = (x77-((x78/x79)!=x80));

    if (t16 != 36) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x81 = -1;
	uint64_t x83 = 1055LLU;
	int64_t x84 = -7LL;
	volatile int32_t t17 = -33279;

    t17 = (x81-((x82/x83)!=x84));

    if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x85 = 0;
	int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MAX;
	uint64_t x88 = 25940151969LLU;
	static int32_t t18 = -37126;

    t18 = (x85-((x86/x87)!=x88));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x89 = -1;
	int64_t x90 = INT64_MIN;
	int32_t x91 = INT32_MIN;
	volatile int64_t x92 = INT64_MIN;
	static volatile int32_t t19 = -2632181;

    t19 = (x89-((x90/x91)!=x92));

    if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x93 = UINT64_MAX;
	static uint8_t x94 = 0U;
	int16_t x95 = -1373;
	uint8_t x96 = 19U;
	uint64_t t20 = 32546900LLU;

    t20 = (x93-((x94/x95)!=x96));

    if (t20 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x97 = -1;
	int16_t x98 = INT16_MAX;
	volatile int64_t x99 = INT64_MAX;
	int32_t t21 = -31023;

    t21 = (x97-((x98/x99)!=x100));

    if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x102 = 11725820U;
	int8_t x104 = 21;
	uint32_t t22 = 1U;

    t22 = (x101-((x102/x103)!=x104));

    if (t22 != 2023U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x105 = 321;
	uint64_t x106 = UINT64_MAX;
	static uint16_t x107 = 1U;
	int8_t x108 = INT8_MIN;
	int32_t t23 = -22565;

    t23 = (x105-((x106/x107)!=x108));

    if (t23 != 320) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x109 = INT16_MAX;
	int8_t x110 = INT8_MIN;
	int32_t x111 = -1;
	int32_t t24 = -5;

    t24 = (x109-((x110/x111)!=x112));

    if (t24 != 32766) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x113 = UINT64_MAX;
	int64_t x114 = 157072730728506LL;
	uint64_t x115 = UINT64_MAX;
	int64_t x116 = INT64_MIN;
	volatile uint64_t t25 = 1030LLU;

    t25 = (x113-((x114/x115)!=x116));

    if (t25 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x117 = UINT8_MAX;
	int16_t x118 = INT16_MAX;
	static int8_t x119 = INT8_MAX;
	static volatile uint64_t x120 = 513LLU;

    t26 = (x117-((x118/x119)!=x120));

    if (t26 != 254) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x122 = UINT64_MAX;
	static uint8_t x123 = 3U;
	int32_t x124 = INT32_MIN;
	volatile int64_t t27 = -165871533312832058LL;

    t27 = (x121-((x122/x123)!=x124));

    if (t27 != 5LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x126 = UINT32_MAX;
	int64_t x128 = -1LL;
	int32_t t28 = -10518;

    t28 = (x125-((x126/x127)!=x128));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x129 = -1LL;
	int64_t x130 = INT64_MAX;
	static uint8_t x131 = 71U;
	uint32_t x132 = 10U;
	int64_t t29 = 892485230491468LL;

    t29 = (x129-((x130/x131)!=x132));

    if (t29 != -2LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x133 = INT64_MAX;
	int8_t x134 = -1;
	uint64_t x135 = 35526LLU;
	uint32_t x136 = 12010U;

    t30 = (x133-((x134/x135)!=x136));

    if (t30 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x137 = INT8_MAX;
	int32_t x138 = INT32_MIN;
	int16_t x139 = 7757;
	int8_t x140 = -1;
	volatile int32_t t31 = 452737;

    t31 = (x137-((x138/x139)!=x140));

    if (t31 != 126) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x142 = INT32_MIN;
	volatile int16_t x144 = -9009;
	static int32_t t32 = -233470221;

    t32 = (x141-((x142/x143)!=x144));

    if (t32 != -18) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x145 = INT8_MAX;
	int32_t x148 = INT32_MIN;
	static int32_t t33 = 772376917;

    t33 = (x145-((x146/x147)!=x148));

    if (t33 != 126) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = -1;
	int8_t x150 = 7;
	int8_t x151 = -19;
	int32_t x152 = INT32_MIN;

    t34 = (x149-((x150/x151)!=x152));

    if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x153 = -1834LL;
	int8_t x154 = INT8_MIN;
	uint8_t x155 = 101U;
	static volatile int64_t t35 = -1560546370015LL;

    t35 = (x153-((x154/x155)!=x156));

    if (t35 != -1834LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x157 = -1;
	uint32_t x158 = 1U;
	static uint32_t x159 = 36636U;
	uint16_t x160 = 310U;

    t36 = (x157-((x158/x159)!=x160));

    if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x161 = -5129217LL;
	static uint64_t x162 = 23LLU;
	uint32_t x163 = UINT32_MAX;
	static volatile uint64_t x164 = 11689216272LLU;
	static int64_t t37 = -721LL;

    t37 = (x161-((x162/x163)!=x164));

    if (t37 != -5129218LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x165 = 332737U;
	int32_t x166 = -15297;
	uint32_t x167 = 830878U;

    t38 = (x165-((x166/x167)!=x168));

    if (t38 != 332736U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x169 = 7116U;
	int16_t x170 = -2;
	int8_t x171 = -2;
	volatile int32_t t39 = -106;

    t39 = (x169-((x170/x171)!=x172));

    if (t39 != 7115) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x173 = 1;

    t40 = (x173-((x174/x175)!=x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x181 = 0U;
	volatile int16_t x182 = INT16_MIN;
	int64_t x184 = 4799LL;
	int32_t t41 = 5004;

    t41 = (x181-((x182/x183)!=x184));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x185 = 2294960LLU;
	uint64_t x186 = 1035095898799LLU;
	uint32_t x187 = 1511557564U;
	uint8_t x188 = 1U;
	volatile uint64_t t42 = 540292LLU;

    t42 = (x185-((x186/x187)!=x188));

    if (t42 != 2294959LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = INT8_MIN;
	int8_t x191 = -3;
	int16_t x192 = -1;
	volatile int32_t t43 = 253504913;

    t43 = (x189-((x190/x191)!=x192));

    if (t43 != -129) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x193 = 0U;
	int32_t x194 = -1;
	volatile uint16_t x195 = UINT16_MAX;
	int64_t x196 = -5742404802441LL;

    t44 = (x193-((x194/x195)!=x196));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x198 = 42;
	int32_t x200 = -1;
	volatile uint32_t t45 = 922082286U;

    t45 = (x197-((x198/x199)!=x200));

    if (t45 != 2173U) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x201 = -3299107348172LL;
	int8_t x202 = -1;
	int64_t x203 = 180LL;
	int8_t x204 = -3;
	volatile int64_t t46 = 469702761358298LL;

    t46 = (x201-((x202/x203)!=x204));

    if (t46 != -3299107348173LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x205 = 307524U;
	int32_t x207 = INT32_MIN;
	uint8_t x208 = UINT8_MAX;
	volatile uint32_t t47 = 14808864U;

    t47 = (x205-((x206/x207)!=x208));

    if (t47 != 307523U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x209 = -1;
	volatile int32_t x211 = INT32_MIN;
	int32_t t48 = 67293225;

    t48 = (x209-((x210/x211)!=x212));

    if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x213 = -1;
	int16_t x214 = 0;
	static int32_t x215 = INT32_MAX;
	uint64_t x216 = UINT64_MAX;
	volatile int32_t t49 = -867422;

    t49 = (x213-((x214/x215)!=x216));

    if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x217 = -1;
	int32_t x218 = -285;
	uint64_t x219 = UINT64_MAX;
	static volatile int32_t t50 = -112876;

    t50 = (x217-((x218/x219)!=x220));

    if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x222 = 2338U;
	int16_t x223 = INT16_MIN;
	uint32_t x224 = UINT32_MAX;
	volatile int32_t t51 = 406870;

    t51 = (x221-((x222/x223)!=x224));

    if (t51 != -101) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x225 = 39;
	int32_t x226 = -1;
	uint8_t x227 = 4U;
	uint8_t x228 = 97U;
	int32_t t52 = 19792823;

    t52 = (x225-((x226/x227)!=x228));

    if (t52 != 38) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x229 = 3194U;
	static volatile int8_t x230 = -1;
	int64_t x231 = INT64_MAX;
	int32_t x232 = INT32_MAX;
	uint32_t t53 = 21071630U;

    t53 = (x229-((x230/x231)!=x232));

    if (t53 != 3193U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x233 = 25U;
	uint32_t x235 = 20734244U;
	int32_t x236 = INT32_MIN;
	int32_t t54 = 4298;

    t54 = (x233-((x234/x235)!=x236));

    if (t54 != 24) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x245 = 714566337173710LL;
	int32_t x246 = INT32_MIN;
	int16_t x248 = INT16_MAX;
	int64_t t55 = 12474998812LL;

    t55 = (x245-((x246/x247)!=x248));

    if (t55 != 714566337173709LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x251 = INT64_MAX;
	int64_t x252 = INT64_MAX;

    t56 = (x249-((x250/x251)!=x252));

    if (t56 != 2147483646) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x253 = 2U;
	int64_t x254 = 475158000526LL;
	volatile int64_t x255 = 295LL;
	int16_t x256 = -1;
	uint32_t t57 = 49375U;

    t57 = (x253-((x254/x255)!=x256));

    if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x257 = UINT8_MAX;
	static int8_t x258 = -1;
	int8_t x259 = -1;
	volatile int64_t x260 = -35LL;

    t58 = (x257-((x258/x259)!=x260));

    if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x261 = 0;
	static int64_t x262 = -1LL;
	int64_t x263 = INT64_MIN;
	volatile int32_t x264 = INT32_MIN;
	volatile int32_t t59 = -328;

    t59 = (x261-((x262/x263)!=x264));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x265 = INT16_MAX;
	static volatile int32_t x267 = 4042;
	int16_t x268 = 15;
	static volatile int32_t t60 = -5;

    t60 = (x265-((x266/x267)!=x268));

    if (t60 != 32766) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x269 = -6;
	volatile int64_t x270 = -1LL;
	int16_t x271 = INT16_MAX;
	volatile uint64_t x272 = 50LLU;
	int32_t t61 = -8;

    t61 = (x269-((x270/x271)!=x272));

    if (t61 != -7) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x273 = -1;
	static uint16_t x274 = UINT16_MAX;
	volatile uint64_t x275 = 603694LLU;
	volatile uint8_t x276 = 0U;

    t62 = (x273-((x274/x275)!=x276));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x277 = UINT64_MAX;
	static int16_t x278 = -1;
	int32_t x279 = INT32_MIN;
	volatile uint64_t t63 = 530453619312983097LLU;

    t63 = (x277-((x278/x279)!=x280));

    if (t63 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x285 = 637541366U;
	volatile uint16_t x286 = 285U;
	uint32_t t64 = 121U;

    t64 = (x285-((x286/x287)!=x288));

    if (t64 != 637541365U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x290 = UINT32_MAX;
	int8_t x292 = INT8_MAX;

    t65 = (x289-((x290/x291)!=x292));

    if (t65 != 2039LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x294 = 3U;
	volatile int8_t x295 = -1;
	static int32_t x296 = -1;
	static int32_t t66 = -1373;

    t66 = (x293-((x294/x295)!=x296));

    if (t66 != 126) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x297 = 3U;
	volatile int16_t x298 = -764;
	int8_t x299 = INT8_MIN;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t67 = 9129;

    t67 = (x297-((x298/x299)!=x300));

    if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x301 = -12;
	int8_t x302 = 1;
	int32_t x304 = INT32_MAX;
	volatile int32_t t68 = 19938;

    t68 = (x301-((x302/x303)!=x304));

    if (t68 != -13) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x305 = 26867860U;
	volatile int64_t x306 = INT64_MIN;
	static int32_t x307 = -1833;
	uint64_t x308 = 268LLU;
	uint32_t t69 = 78027U;

    t69 = (x305-((x306/x307)!=x308));

    if (t69 != 26867859U) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x310 = 1546;
	int32_t t70 = -9472;

    t70 = (x309-((x310/x311)!=x312));

    if (t70 != 66) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x313 = -1;
	static volatile uint32_t x314 = UINT32_MAX;
	static int64_t x316 = INT64_MIN;
	int32_t t71 = -6113;

    t71 = (x313-((x314/x315)!=x316));

    if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x317 = 0;
	int32_t x318 = -1;
	uint8_t x319 = 20U;
	uint64_t x320 = 2263749403935789LLU;
	int32_t t72 = 3;

    t72 = (x317-((x318/x319)!=x320));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x325 = UINT64_MAX;
	volatile int64_t x326 = INT64_MIN;
	volatile int8_t x327 = 1;
	int64_t x328 = INT64_MIN;
	static uint64_t t73 = UINT64_MAX;

    t73 = (x325-((x326/x327)!=x328));

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x329 = 49634388LL;
	static uint32_t x330 = UINT32_MAX;
	int64_t x331 = 12736821165LL;
	volatile int64_t x332 = 2873LL;
	volatile int64_t t74 = -22LL;

    t74 = (x329-((x330/x331)!=x332));

    if (t74 != 49634387LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x333 = -1;
	int64_t x334 = INT64_MIN;
	int32_t x335 = -2;
	volatile int8_t x336 = 13;
	volatile int32_t t75 = 804177274;

    t75 = (x333-((x334/x335)!=x336));

    if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x338 = 340249LLU;
	int32_t t76 = 883322584;

    t76 = (x337-((x338/x339)!=x340));

    if (t76 != -32769) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x341 = UINT8_MAX;
	volatile int8_t x343 = 35;
	uint64_t x344 = UINT64_MAX;
	volatile int32_t t77 = -924;

    t77 = (x341-((x342/x343)!=x344));

    if (t77 != 254) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x345 = 470U;
	int64_t x346 = -42239LL;
	volatile uint16_t x347 = 1U;
	int32_t x348 = INT32_MIN;
	int32_t t78 = 2;

    t78 = (x345-((x346/x347)!=x348));

    if (t78 != 469) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x349 = -1;
	int16_t x350 = -1;
	int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MAX;

    t79 = (x349-((x350/x351)!=x352));

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x354 = 133U;
	uint8_t x355 = UINT8_MAX;
	static int16_t x356 = INT16_MIN;
	volatile int32_t t80 = -650;

    t80 = (x353-((x354/x355)!=x356));

    if (t80 != 65534) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x365 = UINT64_MAX;
	int64_t x366 = -1LL;
	int64_t x367 = -1LL;
	static uint32_t x368 = UINT32_MAX;

    t81 = (x365-((x366/x367)!=x368));

    if (t81 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x373 = 1515152U;
	int16_t x375 = -1;
	int32_t x376 = INT32_MIN;
	uint32_t t82 = 18U;

    t82 = (x373-((x374/x375)!=x376));

    if (t82 != 1515151U) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x377 = INT16_MAX;
	static int64_t x378 = -14749213LL;
	uint16_t x380 = UINT16_MAX;

    t83 = (x377-((x378/x379)!=x380));

    if (t83 != 32766) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x381 = -10014200;
	int8_t x382 = INT8_MAX;
	static int8_t x384 = 3;
	static int32_t t84 = -1179531;

    t84 = (x381-((x382/x383)!=x384));

    if (t84 != -10014201) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x385 = 21;
	uint16_t x386 = 10087U;
	static uint8_t x387 = 3U;
	volatile int32_t t85 = -77971;

    t85 = (x385-((x386/x387)!=x388));

    if (t85 != 20) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x389 = -1;
	int8_t x390 = INT8_MAX;
	volatile int16_t x392 = 0;
	volatile int32_t t86 = 12792;

    t86 = (x389-((x390/x391)!=x392));

    if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x397 = -15;
	uint8_t x399 = UINT8_MAX;
	int8_t x400 = 17;
	int32_t t87 = 2;

    t87 = (x397-((x398/x399)!=x400));

    if (t87 != -16) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x401 = INT8_MIN;
	int8_t x403 = -3;
	int32_t x404 = INT32_MIN;
	int32_t t88 = 28100;

    t88 = (x401-((x402/x403)!=x404));

    if (t88 != -129) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x405 = 29089U;
	static int8_t x406 = INT8_MIN;
	uint16_t x408 = 1U;

    t89 = (x405-((x406/x407)!=x408));

    if (t89 != 29088U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x409 = 0LLU;
	volatile int8_t x410 = INT8_MIN;
	int8_t x411 = -2;
	uint16_t x412 = 3033U;

    t90 = (x409-((x410/x411)!=x412));

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x413 = UINT8_MAX;
	volatile int32_t x414 = INT32_MIN;
	static int16_t x415 = INT16_MAX;
	int16_t x416 = -1;
	int32_t t91 = 16;

    t91 = (x413-((x414/x415)!=x416));

    if (t91 != 254) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x421 = UINT16_MAX;
	volatile uint8_t x422 = UINT8_MAX;
	uint16_t x423 = 3068U;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t92 = -116;

    t92 = (x421-((x422/x423)!=x424));

    if (t92 != 65534) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x425 = 3;
	int8_t x427 = INT8_MIN;
	int64_t x428 = INT64_MIN;

    t93 = (x425-((x426/x427)!=x428));

    if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x429 = 238LLU;
	static uint8_t x430 = UINT8_MAX;
	volatile int64_t x431 = -1LL;
	int32_t x432 = -1;
	uint64_t t94 = 29505LLU;

    t94 = (x429-((x430/x431)!=x432));

    if (t94 != 237LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x433 = -4;
	uint32_t x434 = 3U;
	uint64_t x435 = 30993035128LLU;
	int32_t x436 = INT32_MIN;
	volatile int32_t t95 = 29;

    t95 = (x433-((x434/x435)!=x436));

    if (t95 != -5) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x437 = 10U;
	uint16_t x438 = 9U;
	volatile int8_t x439 = -1;
	int64_t x440 = 1629282893LL;
	volatile int32_t t96 = -600;

    t96 = (x437-((x438/x439)!=x440));

    if (t96 != 9) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x445 = 3;
	static int8_t x446 = INT8_MIN;
	int8_t x448 = INT8_MAX;
	volatile int32_t t97 = -959;

    t97 = (x445-((x446/x447)!=x448));

    if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x450 = INT16_MAX;
	volatile int8_t x451 = 20;

    t98 = (x449-((x450/x451)!=x452));

    if (t98 != -129) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x453 = -1;
	static volatile int16_t x454 = INT16_MIN;
	static volatile int16_t x455 = -1;
	static int8_t x456 = INT8_MAX;
	volatile int32_t t99 = 1005;

    t99 = (x453-((x454/x455)!=x456));

    if (t99 != -2) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x457 = -351568134LL;
	volatile uint8_t x459 = UINT8_MAX;
	uint64_t x460 = 4639010180LLU;

    t100 = (x457-((x458/x459)!=x460));

    if (t100 != -351568135LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x461 = -349041;
	static int64_t x462 = -30567825909121989LL;
	volatile uint16_t x463 = UINT16_MAX;
	uint16_t x464 = 21U;
	static int32_t t101 = -3511656;

    t101 = (x461-((x462/x463)!=x464));

    if (t101 != -349042) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x466 = 5U;
	int64_t x468 = INT64_MIN;
	volatile int64_t t102 = 236402035LL;

    t102 = (x465-((x466/x467)!=x468));

    if (t102 != -225255057033471970LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x469 = 2;
	int16_t x470 = 2;
	volatile int32_t x471 = INT32_MIN;
	volatile int16_t x472 = INT16_MIN;
	int32_t t103 = 72;

    t103 = (x469-((x470/x471)!=x472));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x473 = 3U;
	uint32_t x476 = 717433707U;
	volatile int32_t t104 = 1532522;

    t104 = (x473-((x474/x475)!=x476));

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x477 = 20U;
	static volatile int32_t x478 = INT32_MIN;
	uint8_t x479 = 2U;
	int64_t x480 = INT64_MAX;
	int32_t t105 = 12365739;

    t105 = (x477-((x478/x479)!=x480));

    if (t105 != 19) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x481 = 6LLU;
	int16_t x482 = -1;
	uint8_t x483 = UINT8_MAX;
	int32_t x484 = INT32_MIN;
	volatile uint64_t t106 = 173968666475556956LLU;

    t106 = (x481-((x482/x483)!=x484));

    if (t106 != 5LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint32_t x485 = 227162U;
	int16_t x486 = -1;
	static uint32_t x487 = 269896757U;
	int64_t x488 = INT64_MIN;

    t107 = (x485-((x486/x487)!=x488));

    if (t107 != 227161U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x489 = 0LL;
	uint16_t x490 = UINT16_MAX;
	uint16_t x491 = UINT16_MAX;
	uint8_t x492 = 1U;
	volatile int64_t t108 = -1793LL;

    t108 = (x489-((x490/x491)!=x492));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x493 = -111884LL;
	static volatile int8_t x494 = -1;
	volatile int64_t x495 = INT64_MIN;
	int32_t x496 = INT32_MAX;

    t109 = (x493-((x494/x495)!=x496));

    if (t109 != -111885LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x497 = -1;
	uint16_t x500 = 27116U;
	int32_t t110 = 390298;

    t110 = (x497-((x498/x499)!=x500));

    if (t110 != -2) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x501 = 1;
	int64_t x503 = INT64_MIN;
	static uint32_t x504 = 649U;

    t111 = (x501-((x502/x503)!=x504));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x505 = 27275U;
	static int64_t x506 = -1LL;
	volatile int64_t x507 = INT64_MAX;
	int64_t x508 = INT64_MAX;
	int32_t t112 = 39803151;

    t112 = (x505-((x506/x507)!=x508));

    if (t112 != 27274) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x509 = -1LL;
	static volatile uint64_t x510 = 608117623LLU;
	volatile int8_t x511 = 33;
	int8_t x512 = 8;
	volatile int64_t t113 = -3622747470509118474LL;

    t113 = (x509-((x510/x511)!=x512));

    if (t113 != -2LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x513 = INT8_MIN;
	uint64_t x514 = 0LLU;
	uint16_t x515 = 976U;
	static volatile uint32_t x516 = UINT32_MAX;
	int32_t t114 = 1586;

    t114 = (x513-((x514/x515)!=x516));

    if (t114 != -129) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x518 = 898;
	uint32_t x519 = 235U;
	static volatile int32_t t115 = -83693;

    t115 = (x517-((x518/x519)!=x520));

    if (t115 != -2) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x522 = INT64_MIN;
	static int8_t x523 = INT8_MIN;
	static volatile uint16_t x524 = 1384U;
	int32_t t116 = 73556448;

    t116 = (x521-((x522/x523)!=x524));

    if (t116 != 802) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x525 = -29;
	int16_t x528 = 4;
	static int32_t t117 = 3670987;

    t117 = (x525-((x526/x527)!=x528));

    if (t117 != -30) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x530 = -1;
	int64_t x531 = INT64_MIN;
	uint32_t x532 = 92U;
	volatile int32_t t118 = -318;

    t118 = (x529-((x530/x531)!=x532));

    if (t118 != 4759) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x534 = INT32_MIN;
	volatile int32_t t119 = -343878;

    t119 = (x533-((x534/x535)!=x536));

    if (t119 != -1845628) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x537 = 201U;
	int16_t x538 = INT16_MIN;
	int64_t x539 = INT64_MAX;
	static int16_t x540 = -1;
	static int32_t t120 = -4022;

    t120 = (x537-((x538/x539)!=x540));

    if (t120 != 200) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x541 = 1022;
	int64_t x543 = INT64_MIN;
	volatile int16_t x544 = -192;
	static volatile int32_t t121 = 0;

    t121 = (x541-((x542/x543)!=x544));

    if (t121 != 1021) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x545 = UINT8_MAX;
	static volatile int8_t x546 = INT8_MIN;
	int32_t x547 = INT32_MAX;
	uint64_t x548 = UINT64_MAX;
	volatile int32_t t122 = -503134;

    t122 = (x545-((x546/x547)!=x548));

    if (t122 != 254) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x549 = INT32_MAX;
	uint64_t x552 = 6LLU;
	int32_t t123 = 63;

    t123 = (x549-((x550/x551)!=x552));

    if (t123 != 2147483646) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x553 = -1420097748532909LL;
	int64_t x554 = INT64_MIN;
	int8_t x555 = INT8_MIN;
	static volatile int64_t t124 = 10507360017286LL;

    t124 = (x553-((x554/x555)!=x556));

    if (t124 != -1420097748532910LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x557 = INT32_MAX;
	volatile uint8_t x558 = 2U;
	static int8_t x559 = -1;
	static int64_t x560 = INT64_MIN;
	volatile int32_t t125 = -3;

    t125 = (x557-((x558/x559)!=x560));

    if (t125 != 2147483646) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x561 = UINT64_MAX;
	uint8_t x563 = UINT8_MAX;
	int32_t x564 = -1;

    t126 = (x561-((x562/x563)!=x564));

    if (t126 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x566 = -1;
	int8_t x567 = -1;
	int8_t x568 = 1;

    t127 = (x565-((x566/x567)!=x568));

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x570 = INT8_MIN;
	int64_t x571 = INT64_MIN;
	int32_t x572 = -1;

    t128 = (x569-((x570/x571)!=x572));

    if (t128 != 254) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x573 = INT8_MAX;
	int16_t x574 = INT16_MIN;
	int16_t x575 = -1;

    t129 = (x573-((x574/x575)!=x576));

    if (t129 != 126) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x577 = -1;
	uint8_t x578 = 4U;
	uint32_t x579 = 49037352U;
	int16_t x580 = -1;
	int32_t t130 = -7;

    t130 = (x577-((x578/x579)!=x580));

    if (t130 != -2) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x581 = -1;
	int8_t x584 = INT8_MIN;

    t131 = (x581-((x582/x583)!=x584));

    if (t131 != -2) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x586 = 86U;
	int16_t x587 = -1;
	volatile uint16_t x588 = 4049U;
	volatile int64_t t132 = 88495796039LL;

    t132 = (x585-((x586/x587)!=x588));

    if (t132 != 13662761635067LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x593 = 4U;
	int16_t x594 = INT16_MAX;
	int32_t x595 = INT32_MIN;
	uint32_t x596 = 745U;
	volatile uint32_t t133 = 220463U;

    t133 = (x593-((x594/x595)!=x596));

    if (t133 != 3U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x597 = INT8_MIN;
	volatile int16_t x598 = INT16_MAX;
	uint8_t x599 = 75U;
	static int8_t x600 = -1;
	int32_t t134 = 89171;

    t134 = (x597-((x598/x599)!=x600));

    if (t134 != -129) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x606 = -1LL;
	uint8_t x608 = 3U;
	int32_t t135 = -8838380;

    t135 = (x605-((x606/x607)!=x608));

    if (t135 != 32766) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x609 = 225490U;
	static volatile uint8_t x611 = 1U;
	volatile uint32_t t136 = 4938598U;

    t136 = (x609-((x610/x611)!=x612));

    if (t136 != 225489U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x613 = UINT32_MAX;
	int8_t x614 = -1;
	int64_t x616 = 3LL;
	static volatile uint32_t t137 = 2487886U;

    t137 = (x613-((x614/x615)!=x616));

    if (t137 != 4294967294U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x617 = UINT64_MAX;
	int16_t x618 = 12338;
	int8_t x619 = -1;
	static int32_t x620 = -1;
	static uint64_t t138 = 460133328982LLU;

    t138 = (x617-((x618/x619)!=x620));

    if (t138 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x621 = 17621U;
	int16_t x622 = -1;
	int16_t x624 = 1426;

    t139 = (x621-((x622/x623)!=x624));

    if (t139 != 17620) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x625 = INT32_MAX;
	uint8_t x626 = 10U;
	int16_t x627 = 13469;
	int32_t t140 = -8;

    t140 = (x625-((x626/x627)!=x628));

    if (t140 != 2147483646) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x629 = 54734LLU;
	int8_t x630 = 13;
	int64_t x631 = INT64_MIN;
	uint16_t x632 = UINT16_MAX;
	uint64_t t141 = 158587340793635LLU;

    t141 = (x629-((x630/x631)!=x632));

    if (t141 != 54733LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x633 = INT32_MAX;
	int64_t x635 = INT64_MIN;

    t142 = (x633-((x634/x635)!=x636));

    if (t142 != 2147483646) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x637 = INT64_MAX;
	int64_t x638 = -95099345LL;
	int32_t x639 = INT32_MAX;
	uint32_t x640 = 630U;
	volatile int64_t t143 = -53LL;

    t143 = (x637-((x638/x639)!=x640));

    if (t143 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x641 = -1LL;
	uint16_t x642 = 4U;
	int64_t x643 = -1LL;
	volatile int64_t x644 = INT64_MIN;
	static int64_t t144 = -189195978174127LL;

    t144 = (x641-((x642/x643)!=x644));

    if (t144 != -2LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x645 = 18U;
	volatile int32_t x646 = 0;
	volatile uint64_t x647 = 775406412LLU;
	static int64_t x648 = INT64_MIN;
	static int32_t t145 = -36;

    t145 = (x645-((x646/x647)!=x648));

    if (t145 != 17) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x649 = 31;
	static volatile uint64_t x650 = 228804LLU;
	int64_t x651 = -1LL;

    t146 = (x649-((x650/x651)!=x652));

    if (t146 != 30) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x653 = INT64_MAX;
	volatile int16_t x654 = INT16_MAX;
	int32_t x655 = -1;
	volatile int64_t t147 = 1LL;

    t147 = (x653-((x654/x655)!=x656));

    if (t147 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x657 = 4U;
	uint64_t x658 = 3914530881830962862LLU;
	uint8_t x659 = UINT8_MAX;
	uint64_t x660 = 35LLU;
	int32_t t148 = 120;

    t148 = (x657-((x658/x659)!=x660));

    if (t148 != 3) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x661 = UINT8_MAX;
	volatile int16_t x662 = 0;
	uint64_t x663 = 6983004LLU;
	static int32_t x664 = -43;
	int32_t t149 = -1;

    t149 = (x661-((x662/x663)!=x664));

    if (t149 != 254) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x665 = -1;
	int8_t x666 = -1;
	int64_t x667 = INT64_MIN;
	int16_t x668 = INT16_MIN;
	int32_t t150 = 55287208;

    t150 = (x665-((x666/x667)!=x668));

    if (t150 != -2) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x669 = UINT16_MAX;
	volatile int64_t x670 = INT64_MIN;
	static volatile int32_t x671 = INT32_MAX;
	int32_t x672 = -250;

    t151 = (x669-((x670/x671)!=x672));

    if (t151 != 65534) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x677 = 1444311LLU;
	uint8_t x678 = 2U;
	uint64_t x679 = 5518792208392427LLU;
	volatile uint64_t t152 = 69864994681455249LLU;

    t152 = (x677-((x678/x679)!=x680));

    if (t152 != 1444310LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x682 = 1;
	static uint16_t x683 = 15U;
	volatile int16_t x684 = INT16_MIN;

    t153 = (x681-((x682/x683)!=x684));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x685 = INT16_MIN;
	volatile int64_t x686 = -1LL;
	uint64_t x687 = 33343209063LLU;
	int32_t x688 = -832249455;
	volatile int32_t t154 = 148602229;

    t154 = (x685-((x686/x687)!=x688));

    if (t154 != -32769) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x689 = 18913556U;
	int8_t x690 = INT8_MIN;
	int64_t x691 = INT64_MAX;
	int8_t x692 = 27;
	static volatile uint32_t t155 = 218575U;

    t155 = (x689-((x690/x691)!=x692));

    if (t155 != 18913555U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x693 = -1;
	int32_t x694 = -1841188;
	static volatile uint16_t x695 = UINT16_MAX;
	int16_t x696 = INT16_MAX;
	volatile int32_t t156 = 467602707;

    t156 = (x693-((x694/x695)!=x696));

    if (t156 != -2) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x697 = -1;
	volatile int64_t x698 = INT64_MIN;
	static int64_t x699 = INT64_MAX;
	volatile int32_t t157 = -282;

    t157 = (x697-((x698/x699)!=x700));

    if (t157 != -2) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x702 = -1LL;
	int8_t x703 = INT8_MIN;
	int16_t x704 = -1;
	volatile int32_t t158 = -627;

    t158 = (x701-((x702/x703)!=x704));

    if (t158 != 254) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x705 = INT16_MIN;
	int16_t x708 = -2849;

    t159 = (x705-((x706/x707)!=x708));

    if (t159 != -32769) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x709 = 49733786LLU;
	uint8_t x710 = UINT8_MAX;
	int32_t x711 = INT32_MIN;
	int8_t x712 = INT8_MIN;

    t160 = (x709-((x710/x711)!=x712));

    if (t160 != 49733785LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x713 = -1;
	int8_t x714 = INT8_MIN;
	int32_t x715 = -1;
	static volatile int64_t x716 = INT64_MIN;

    t161 = (x713-((x714/x715)!=x716));

    if (t161 != -2) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x717 = INT16_MIN;
	static int16_t x718 = INT16_MIN;
	static int64_t x720 = -1LL;

    t162 = (x717-((x718/x719)!=x720));

    if (t162 != -32769) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x726 = UINT8_MAX;
	volatile uint64_t x728 = 700234435652138LLU;

    t163 = (x725-((x726/x727)!=x728));

    if (t163 != 730) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x731 = -93;
	volatile uint64_t x732 = 243775726978053LLU;
	static int32_t t164 = 502270;

    t164 = (x729-((x730/x731)!=x732));

    if (t164 != 29) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x733 = INT16_MIN;
	int64_t x734 = -1LL;
	int32_t x736 = INT32_MAX;
	int32_t t165 = -31589;

    t165 = (x733-((x734/x735)!=x736));

    if (t165 != -32769) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x742 = INT64_MIN;
	static int64_t x743 = INT64_MIN;
	int8_t x744 = -6;
	volatile int32_t t166 = 149067935;

    t166 = (x741-((x742/x743)!=x744));

    if (t166 != 25) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x745 = INT16_MIN;
	int16_t x746 = -15;
	int64_t x747 = -1LL;
	int32_t x748 = INT32_MIN;
	int32_t t167 = -79972;

    t167 = (x745-((x746/x747)!=x748));

    if (t167 != -32769) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x749 = 32441311850LLU;
	int32_t x750 = INT32_MIN;
	uint16_t x752 = 60U;
	volatile uint64_t t168 = 1938860593542570524LLU;

    t168 = (x749-((x750/x751)!=x752));

    if (t168 != 32441311849LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x753 = 2923673746014929LLU;
	static uint32_t x755 = 430288U;
	int32_t x756 = -103967058;
	uint64_t t169 = 4974274501027LLU;

    t169 = (x753-((x754/x755)!=x756));

    if (t169 != 2923673746014928LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x757 = 69251584170985632LL;
	volatile int16_t x758 = 2;
	int8_t x759 = 5;
	int8_t x760 = 17;
	static int64_t t170 = 75141072811035LL;

    t170 = (x757-((x758/x759)!=x760));

    if (t170 != 69251584170985631LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x761 = INT16_MIN;
	uint32_t x762 = 20576011U;
	static int16_t x763 = INT16_MIN;
	static uint32_t x764 = 44267U;
	volatile int32_t t171 = 135772102;

    t171 = (x761-((x762/x763)!=x764));

    if (t171 != -32769) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x769 = -5;
	uint32_t x770 = 6U;
	int16_t x771 = INT16_MAX;
	static uint32_t x772 = 15702U;

    t172 = (x769-((x770/x771)!=x772));

    if (t172 != -6) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x773 = INT8_MIN;
	int64_t x776 = INT64_MIN;
	volatile int32_t t173 = -32018;

    t173 = (x773-((x774/x775)!=x776));

    if (t173 != -129) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x777 = -1;
	static uint64_t x778 = UINT64_MAX;
	int8_t x779 = 3;
	int32_t t174 = -21;

    t174 = (x777-((x778/x779)!=x780));

    if (t174 != -2) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x781 = UINT64_MAX;
	int8_t x782 = -2;
	uint64_t t175 = 14876581LLU;

    t175 = (x781-((x782/x783)!=x784));

    if (t175 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x789 = INT8_MAX;
	int16_t x790 = 0;
	int64_t x791 = -3110953024034074LL;
	int32_t x792 = INT32_MIN;
	int32_t t176 = -2854910;

    t176 = (x789-((x790/x791)!=x792));

    if (t176 != 126) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x793 = -24286052;
	int32_t x794 = INT32_MIN;
	int64_t x795 = INT64_MIN;
	int32_t t177 = -434;

    t177 = (x793-((x794/x795)!=x796));

    if (t177 != -24286053) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x797 = INT64_MAX;
	static volatile uint32_t x798 = 25U;
	int16_t x799 = INT16_MIN;
	int32_t x800 = -1018788;

    t178 = (x797-((x798/x799)!=x800));

    if (t178 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x801 = 0LL;
	int64_t x802 = -1LL;
	int16_t x803 = -1;
	static int8_t x804 = INT8_MIN;
	int64_t t179 = -3501987239650LL;

    t179 = (x801-((x802/x803)!=x804));

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint64_t x805 = 3343218603167LLU;
	static int64_t x806 = INT64_MIN;
	int8_t x807 = INT8_MIN;
	int64_t x808 = INT64_MAX;
	volatile uint64_t t180 = 391354LLU;

    t180 = (x805-((x806/x807)!=x808));

    if (t180 != 3343218603166LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x809 = UINT32_MAX;
	volatile int16_t x810 = -1;
	uint32_t x811 = 10697552U;
	int32_t x812 = -516304;
	volatile uint32_t t181 = 355758U;

    t181 = (x809-((x810/x811)!=x812));

    if (t181 != 4294967294U) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x813 = INT8_MIN;
	static uint16_t x814 = 330U;
	uint32_t x816 = 558466U;
	int32_t t182 = 25707656;

    t182 = (x813-((x814/x815)!=x816));

    if (t182 != -129) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x817 = INT8_MIN;
	int16_t x819 = INT16_MIN;
	int32_t x820 = INT32_MIN;
	static volatile int32_t t183 = -12126;

    t183 = (x817-((x818/x819)!=x820));

    if (t183 != -129) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x821 = -1LL;
	uint8_t x822 = UINT8_MAX;
	uint16_t x823 = 17728U;
	uint8_t x824 = UINT8_MAX;
	static volatile int64_t t184 = -25LL;

    t184 = (x821-((x822/x823)!=x824));

    if (t184 != -2LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x825 = INT64_MAX;
	int8_t x827 = INT8_MAX;
	static uint32_t x828 = UINT32_MAX;
	static volatile int64_t t185 = 235630LL;

    t185 = (x825-((x826/x827)!=x828));

    if (t185 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x829 = 28U;
	int16_t x830 = 3016;
	uint16_t x831 = UINT16_MAX;
	volatile uint32_t x832 = UINT32_MAX;
	volatile int32_t t186 = 47;

    t186 = (x829-((x830/x831)!=x832));

    if (t186 != 27) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int16_t x833 = -1;
	static int32_t x835 = INT32_MIN;
	volatile uint16_t x836 = UINT16_MAX;
	volatile int32_t t187 = 11219710;

    t187 = (x833-((x834/x835)!=x836));

    if (t187 != -2) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x838 = -44186832323559LL;
	volatile uint32_t x839 = UINT32_MAX;
	static int32_t t188 = 24;

    t188 = (x837-((x838/x839)!=x840));

    if (t188 != 4033) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x841 = 45827609U;
	static int16_t x842 = -927;
	int32_t x844 = -1;

    t189 = (x841-((x842/x843)!=x844));

    if (t189 != 45827608U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x846 = UINT32_MAX;
	int16_t x847 = -693;
	volatile int64_t x848 = INT64_MIN;
	volatile uint32_t t190 = 25U;

    t190 = (x845-((x846/x847)!=x848));

    if (t190 != 149137U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x854 = INT8_MIN;
	static int8_t x855 = INT8_MIN;
	static uint64_t x856 = 61LLU;
	int64_t t191 = -5009LL;

    t191 = (x853-((x854/x855)!=x856));

    if (t191 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x866 = INT64_MIN;
	volatile uint64_t x867 = 10971040640742LLU;
	int64_t x868 = -1LL;
	static int32_t t192 = -294;

    t192 = (x865-((x866/x867)!=x868));

    if (t192 != -32769) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x870 = INT32_MAX;
	uint64_t x871 = UINT64_MAX;
	uint64_t x872 = 64492512056LLU;
	volatile int32_t t193 = -271;

    t193 = (x869-((x870/x871)!=x872));

    if (t193 != -129) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x873 = -13;
	static int16_t x874 = 4;
	volatile uint64_t x875 = 4779148229LLU;
	volatile int32_t x876 = -210;
	int32_t t194 = -1645808;

    t194 = (x873-((x874/x875)!=x876));

    if (t194 != -14) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x877 = UINT64_MAX;
	volatile int16_t x878 = -152;
	static int32_t x880 = INT32_MIN;
	volatile uint64_t t195 = 719566LLU;

    t195 = (x877-((x878/x879)!=x880));

    if (t195 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x881 = -1;
	uint64_t x882 = 1LLU;
	uint8_t x883 = UINT8_MAX;
	volatile uint8_t x884 = 0U;
	int32_t t196 = -101;

    t196 = (x881-((x882/x883)!=x884));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x887 = 60889;
	static int64_t x888 = INT64_MIN;
	int32_t t197 = -16783;

    t197 = (x885-((x886/x887)!=x888));

    if (t197 != 65534) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x889 = 71;
	volatile int16_t x890 = 5601;
	uint32_t x891 = 12273205U;
	static int64_t x892 = -1632023LL;
	int32_t t198 = -3132984;

    t198 = (x889-((x890/x891)!=x892));

    if (t198 != 70) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x893 = 1LL;
	int16_t x894 = INT16_MIN;
	static uint32_t x895 = UINT32_MAX;
	uint8_t x896 = 20U;

    t199 = (x893-((x894/x895)!=x896));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

