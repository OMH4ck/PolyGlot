
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

int8_t x3 = -1;
int16_t x4 = INT16_MIN;
int8_t x10 = -1;
static int64_t x11 = -1LL;
static int64_t t1 = 26058405247LL;
uint8_t x22 = 1U;
uint64_t t3 = 14764670LLU;
uint64_t x28 = 11977LLU;
int32_t x29 = INT32_MAX;
uint64_t x31 = UINT64_MAX;
int8_t x38 = INT8_MIN;
uint16_t x52 = 216U;
volatile int16_t x61 = 33;
static uint64_t x63 = UINT64_MAX;
static int32_t x67 = -1;
volatile uint64_t x77 = 274LLU;
uint32_t x83 = 38761901U;
volatile uint16_t x91 = 312U;
int16_t x92 = -10283;
volatile int32_t x98 = INT32_MAX;
int64_t x102 = INT64_MIN;
uint32_t x103 = 81120U;
int64_t t21 = 845718749067650LL;
static uint32_t x106 = UINT32_MAX;
static int8_t x111 = INT8_MIN;
int64_t x115 = INT64_MAX;
uint64_t x119 = 42111718906LLU;
uint16_t x125 = 1U;
static uint16_t x127 = UINT16_MAX;
volatile uint8_t x139 = 29U;
static int64_t x144 = -500207454LL;
int64_t x150 = INT64_MAX;
int64_t x158 = -4419766414769492160LL;
static int8_t x160 = INT8_MIN;
int16_t x161 = INT16_MIN;
int32_t x162 = INT32_MIN;
uint64_t t34 = 6LLU;
int8_t x169 = -6;
int8_t x171 = 3;
uint8_t x173 = 18U;
int8_t x176 = 13;
volatile uint16_t x178 = UINT16_MAX;
volatile uint64_t t39 = 68250LLU;
static int64_t x194 = -1LL;
volatile uint32_t x196 = 2410U;
volatile int64_t t42 = -2462022350929849LL;
uint64_t t44 = 98091145395798463LLU;
int32_t x207 = INT32_MAX;
uint8_t x210 = 18U;
int8_t x211 = -26;
uint64_t t48 = 2099666686506596LLU;
int16_t x225 = INT16_MIN;
static int64_t x230 = INT64_MIN;
uint64_t x236 = UINT64_MAX;
volatile int8_t x238 = 0;
int8_t x240 = -1;
uint8_t x244 = 3U;
volatile uint32_t x245 = 1U;
int8_t x253 = INT8_MIN;
uint32_t x266 = 5005794U;
static int16_t x271 = -1355;
int64_t x272 = -1LL;
static int32_t x276 = -1;
int64_t x277 = 11842925501191LL;
static int64_t x279 = -1281147LL;
int8_t x280 = INT8_MIN;
volatile int32_t x281 = -1;
uint64_t x285 = 1678315319464501LLU;
static uint32_t x290 = UINT32_MAX;
volatile int16_t x295 = INT16_MIN;
volatile int32_t t67 = 6766100;
uint64_t t68 = 9538621756399046LLU;
int32_t x306 = INT32_MIN;
int8_t x312 = INT8_MAX;
int16_t x315 = INT16_MIN;
static volatile int32_t t71 = 183377154;
int8_t x320 = INT8_MAX;
int32_t x327 = INT32_MIN;
int32_t x328 = -9123;
uint64_t x331 = 389844385045281LLU;
volatile uint64_t x341 = UINT64_MAX;
int32_t t80 = 899565189;
int16_t x371 = -30;
volatile int64_t t81 = -1712LL;
uint16_t x374 = UINT16_MAX;
static volatile int32_t t82 = -257188;
int32_t x382 = INT32_MIN;
int8_t x388 = 14;
int8_t x398 = -1;
uint64_t x403 = UINT64_MAX;
static volatile uint32_t x418 = 6756400U;
uint64_t x420 = UINT64_MAX;
static volatile int16_t x423 = -15723;
int16_t x426 = 1260;
static int64_t x434 = INT64_MAX;
volatile int32_t x448 = INT32_MIN;
volatile uint64_t x449 = UINT64_MAX;
int16_t x453 = -1;
volatile int8_t x466 = INT8_MIN;
int16_t x467 = 6790;
int32_t x470 = -1;
volatile uint8_t x474 = 1U;
volatile uint8_t x479 = UINT8_MAX;
volatile int64_t t105 = -9672LL;
static uint32_t x481 = UINT32_MAX;
static volatile int32_t t108 = 164942;
uint64_t x493 = UINT64_MAX;
uint8_t x494 = 1U;
int32_t x497 = 26338;
static volatile int16_t x501 = INT16_MAX;
volatile int8_t x504 = INT8_MAX;
int16_t x511 = INT16_MAX;
uint64_t x513 = UINT64_MAX;
int8_t x515 = INT8_MAX;
static int32_t x517 = INT32_MAX;
volatile int16_t x519 = INT16_MIN;
int64_t x520 = INT64_MAX;
int32_t x522 = INT32_MIN;
int32_t x524 = -1;
int8_t x529 = INT8_MAX;
uint32_t x530 = 1U;
int16_t x543 = 4051;
volatile uint8_t x548 = 2U;
int64_t x549 = INT64_MIN;
volatile uint32_t x553 = UINT32_MAX;
uint32_t x558 = UINT32_MAX;
int32_t x562 = 1;
int64_t t128 = -71971890665049118LL;
volatile int32_t x579 = INT32_MIN;
int32_t x586 = -1;
static volatile int32_t x589 = INT32_MIN;
static int8_t x591 = INT8_MAX;
int8_t x598 = 58;
uint32_t x603 = 25U;
uint8_t x612 = 3U;
int8_t x613 = INT8_MAX;
static int64_t x618 = -1LL;
int64_t x619 = INT64_MIN;
int8_t x627 = INT8_MIN;
int32_t t141 = 445778065;
int64_t x633 = INT64_MAX;
uint32_t x643 = 16319U;
volatile int16_t x647 = -1;
volatile int32_t t145 = -13;
int64_t x650 = INT64_MIN;
uint8_t x656 = 36U;
volatile int64_t t147 = -7583906273588LL;
int32_t x658 = INT32_MIN;
volatile int32_t x663 = INT32_MIN;
volatile int64_t t149 = -1LL;
static volatile int32_t x666 = 1;
int32_t x674 = INT32_MAX;
int64_t x679 = -10LL;
uint64_t t153 = 28LLU;
static volatile uint64_t t154 = 899279135543905LLU;
int16_t x697 = 667;
static volatile int64_t t158 = -203738278LL;
volatile uint32_t x702 = 435575U;
uint8_t x709 = UINT8_MAX;
static uint32_t x710 = 14U;
int16_t x713 = 854;
static int16_t x724 = INT16_MAX;
static uint8_t x726 = 0U;
static volatile int8_t x727 = 11;
int16_t x733 = INT16_MIN;
volatile int8_t x735 = -15;
int32_t x745 = -1;
uint16_t x752 = 1950U;
int64_t x761 = -1LL;
int32_t x766 = -1;
int8_t x774 = INT8_MAX;
static volatile uint16_t x778 = UINT16_MAX;
int32_t x780 = INT32_MAX;
volatile int64_t x791 = -1LL;
uint16_t x793 = UINT16_MAX;
uint32_t x799 = 1042U;
uint32_t t182 = 412662U;
int64_t x815 = INT64_MIN;
static volatile int64_t t185 = 228086LL;
static uint64_t t186 = 29114953314366760LLU;
int16_t x831 = -8739;
volatile uint64_t t190 = 1858430416546723785LLU;
volatile int8_t x841 = INT8_MIN;
volatile int64_t t191 = -14620434LL;
uint32_t x845 = UINT32_MAX;
uint64_t x863 = UINT64_MAX;
uint64_t x866 = 456993503LLU;
uint64_t t197 = 7629LLU;
int8_t x871 = INT8_MIN;


void f0(void) {
    	int8_t x1 = 6;
	int8_t x2 = 24;
	int32_t t0 = -1610325;

    t0 = (x1^((x2/x3)*x4));

    if (t0 != 786438) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x9 = INT16_MIN;
	int8_t x12 = INT8_MAX;

    t1 = (x9^((x10/x11)*x12));

    if (t1 != -32641LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x13 = -1;
	int32_t x14 = INT32_MAX;
	uint16_t x15 = UINT16_MAX;
	volatile uint8_t x16 = 60U;
	int32_t t2 = 0;

    t2 = (x13^((x14/x15)*x16));

    if (t2 != -1966081) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = INT64_MIN;
	uint64_t x23 = 3632707479605250339LLU;
	int64_t x24 = INT64_MIN;

    t3 = (x21^((x22/x23)*x24));

    if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = -2361;
	volatile int32_t x26 = -1;
	static int8_t x27 = INT8_MIN;
	uint64_t t4 = 27216953LLU;

    t4 = (x25^((x26/x27)*x28));

    if (t4 != 18446744073709549255LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x30 = INT64_MAX;
	uint32_t x32 = 0U;
	volatile uint64_t t5 = 1413864LLU;

    t5 = (x29^((x30/x31)*x32));

    if (t5 != 2147483647LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x33 = INT8_MIN;
	int32_t x34 = 51;
	int8_t x35 = -1;
	volatile int16_t x36 = -1;
	int32_t t6 = 58242;

    t6 = (x33^((x34/x35)*x36));

    if (t6 != -77) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x37 = 80348725138LLU;
	volatile uint32_t x39 = UINT32_MAX;
	volatile int64_t x40 = INT64_MAX;
	uint64_t t7 = 7238635550411LLU;

    t7 = (x37^((x38/x39)*x40));

    if (t7 != 80348725138LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x41 = UINT16_MAX;
	int16_t x42 = INT16_MAX;
	volatile uint8_t x43 = UINT8_MAX;
	int8_t x44 = INT8_MIN;
	volatile int32_t t8 = -3;

    t8 = (x41^((x42/x43)*x44));

    if (t8 != -49153) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x49 = 1217;
	volatile int32_t x50 = -30874232;
	int32_t x51 = INT32_MAX;
	volatile int32_t t9 = 0;

    t9 = (x49^((x50/x51)*x52));

    if (t9 != 1217) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x53 = 1499175727U;
	static int16_t x54 = -9397;
	volatile int8_t x55 = -1;
	static int16_t x56 = -1;
	uint32_t t10 = 1473540U;

    t10 = (x53^((x54/x55)*x56));

    if (t10 != 2795782244U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x57 = INT64_MAX;
	volatile int16_t x58 = -1;
	static int64_t x59 = INT64_MIN;
	int64_t x60 = -1LL;
	int64_t t11 = INT64_MAX;

    t11 = (x57^((x58/x59)*x60));

    if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x62 = 24438630297967900LLU;
	volatile int8_t x64 = INT8_MIN;
	volatile uint64_t t12 = 147830LLU;

    t12 = (x61^((x62/x63)*x64));

    if (t12 != 33LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x65 = UINT16_MAX;
	static uint32_t x66 = 755542U;
	int64_t x68 = -2LL;
	static int64_t t13 = -789781266159LL;

    t13 = (x65^((x66/x67)*x68));

    if (t13 != 65535LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = INT8_MIN;
	static volatile int16_t x70 = INT16_MIN;
	volatile uint64_t x71 = 87442343LLU;
	static volatile int32_t x72 = INT32_MIN;
	uint64_t t14 = 797932588LLU;

    t14 = (x69^((x70/x71)*x72));

    if (t14 != 10309018324788313984LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = INT32_MIN;
	int8_t x74 = -1;
	static int64_t x75 = INT64_MIN;
	int64_t x76 = INT64_MIN;
	volatile int64_t t15 = 32252LL;

    t15 = (x73^((x74/x75)*x76));

    if (t15 != -2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x78 = 24772265U;
	int32_t x79 = -17967534;
	static uint16_t x80 = 1398U;
	uint64_t t16 = 313973546324797LLU;

    t16 = (x77^((x78/x79)*x80));

    if (t16 != 274LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = INT8_MIN;
	volatile int8_t x82 = INT8_MAX;
	int16_t x84 = -1;
	uint32_t t17 = 24301U;

    t17 = (x81^((x82/x83)*x84));

    if (t17 != 4294967168U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x89 = 2960U;
	int8_t x90 = INT8_MIN;
	uint32_t t18 = 7U;

    t18 = (x89^((x90/x91)*x92));

    if (t18 != 2960U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x93 = 7U;
	int32_t x94 = -961405536;
	uint16_t x95 = UINT16_MAX;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t19 = -8135456;

    t19 = (x93^((x94/x95)*x96));

    if (t19 != -961398455) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x97 = 0U;
	uint32_t x99 = UINT32_MAX;
	uint32_t x100 = UINT32_MAX;
	volatile uint32_t t20 = 9312U;

    t20 = (x97^((x98/x99)*x100));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x101 = INT64_MIN;
	volatile uint16_t x104 = UINT16_MAX;

    t21 = (x101^((x102/x103)*x104));

    if (t21 != 1772019886518513113LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x105 = 67U;
	static uint16_t x107 = 19515U;
	uint8_t x108 = UINT8_MAX;
	static uint32_t t22 = 12U;

    t22 = (x105^((x106/x107)*x108));

    if (t22 != 56121608U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x109 = INT32_MIN;
	static int32_t x110 = -1;
	volatile int64_t x112 = -1LL;
	int64_t t23 = -8820973792437LL;

    t23 = (x109^((x110/x111)*x112));

    if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x113 = -1LL;
	static int16_t x114 = INT16_MIN;
	static int8_t x116 = INT8_MAX;
	int64_t t24 = -12LL;

    t24 = (x113^((x114/x115)*x116));

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x117 = 1;
	int64_t x118 = INT64_MIN;
	uint64_t x120 = 3513927LLU;
	static uint64_t t25 = 162183611664330LLU;

    t25 = (x117^((x118/x119)*x120));

    if (t25 != 769625576486209LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint16_t x121 = UINT16_MAX;
	uint8_t x122 = UINT8_MAX;
	volatile uint16_t x123 = 1U;
	int8_t x124 = -9;
	int32_t t26 = 0;

    t26 = (x121^((x122/x123)*x124));

    if (t26 != -63242) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x126 = -1;
	static int64_t x128 = INT64_MAX;
	int64_t t27 = -573311LL;

    t27 = (x125^((x126/x127)*x128));

    if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x129 = 0U;
	int8_t x130 = INT8_MIN;
	static int64_t x131 = -65639246646LL;
	int16_t x132 = -3;
	volatile int64_t t28 = 178735LL;

    t28 = (x129^((x130/x131)*x132));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x137 = 40024916LL;
	uint64_t x138 = 1575193971429LLU;
	volatile int32_t x140 = -7;
	volatile uint64_t t29 = 1072264LLU;

    t29 = (x137^((x138/x139)*x140));

    if (t29 != 18446743693525801989LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x141 = INT32_MAX;
	int8_t x142 = -1;
	uint32_t x143 = UINT32_MAX;
	int64_t t30 = -476082501118LL;

    t30 = (x141^((x142/x143)*x144));

    if (t30 != -1647276195LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x145 = -1;
	int32_t x146 = -54082108;
	static uint32_t x147 = 15233202U;
	static int32_t x148 = -162249;
	volatile uint32_t t31 = 18958732U;

    t31 = (x145^((x146/x147)*x148));

    if (t31 != 45105221U) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x149 = -1;
	int64_t x151 = -150467297089487860LL;
	uint8_t x152 = 2U;
	int64_t t32 = 94557155LL;

    t32 = (x149^((x150/x151)*x152));

    if (t32 != 121LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x157 = INT64_MIN;
	int8_t x159 = INT8_MAX;
	int64_t t33 = -18097155103750497LL;

    t33 = (x157^((x158/x159)*x160));

    if (t33 != -4768804311732768000LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x163 = UINT64_MAX;
	uint32_t x164 = 259105977U;

    t34 = (x161^((x162/x163)*x164));

    if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x165 = -128988;
	static int64_t x166 = -943505333596673LL;
	int8_t x167 = INT8_MIN;
	int64_t x168 = -1LL;
	volatile int64_t t35 = -1541664447608722699LL;

    t35 = (x165^((x166/x167)*x168));

    if (t35 != 7371135481528LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x170 = UINT32_MAX;
	int32_t x172 = -1;
	uint32_t t36 = 7U;

    t36 = (x169^((x170/x171)*x172));

    if (t36 != 1431655761U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x174 = INT64_MIN;
	static int8_t x175 = INT8_MIN;
	volatile int64_t t37 = 65436LL;

    t37 = (x173^((x174/x175)*x176));

    if (t37 != 936748722493063186LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x177 = INT64_MIN;
	int64_t x179 = -20460LL;
	int32_t x180 = -6;
	volatile int64_t t38 = 185313921360317LL;

    t38 = (x177^((x178/x179)*x180));

    if (t38 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x181 = -12;
	uint64_t x182 = 986LLU;
	int8_t x183 = INT8_MAX;
	uint32_t x184 = 447982514U;

    t39 = (x181^((x182/x183)*x184));

    if (t39 != 18446744070573674026LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x185 = UINT16_MAX;
	int64_t x186 = -227586LL;
	uint32_t x187 = UINT32_MAX;
	int16_t x188 = 192;
	static int64_t t40 = 764400441413418LL;

    t40 = (x185^((x186/x187)*x188));

    if (t40 != 65535LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x189 = -1LL;
	uint16_t x190 = 30353U;
	int8_t x191 = INT8_MIN;
	static int16_t x192 = 1;
	volatile int64_t t41 = -2914055626554LL;

    t41 = (x189^((x190/x191)*x192));

    if (t41 != 236LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x193 = 1272;
	int16_t x195 = 176;

    t42 = (x193^((x194/x195)*x196));

    if (t42 != 1272LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x197 = INT8_MIN;
	int8_t x198 = 20;
	uint8_t x199 = UINT8_MAX;
	static uint16_t x200 = 5698U;
	int32_t t43 = 44082;

    t43 = (x197^((x198/x199)*x200));

    if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x201 = 69U;
	uint64_t x202 = 246763086050LLU;
	int32_t x203 = INT32_MAX;
	uint16_t x204 = UINT16_MAX;

    t44 = (x201^((x202/x203)*x204));

    if (t44 != 7471051LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x205 = 2LLU;
	static volatile int16_t x206 = -1;
	uint8_t x208 = 9U;
	uint64_t t45 = 559639826357545LLU;

    t45 = (x205^((x206/x207)*x208));

    if (t45 != 2LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x209 = 0U;
	uint16_t x212 = 1U;
	int32_t t46 = 617058;

    t46 = (x209^((x210/x211)*x212));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x217 = 394LLU;
	volatile int32_t x218 = -1873365;
	volatile int16_t x219 = -1;
	volatile uint32_t x220 = UINT32_MAX;
	volatile uint64_t t47 = 731653LLU;

    t47 = (x217^((x218/x219)*x220));

    if (t47 != 4293094305LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x221 = INT8_MAX;
	static int16_t x222 = -14022;
	int32_t x223 = 22234;
	uint64_t x224 = UINT64_MAX;

    t48 = (x221^((x222/x223)*x224));

    if (t48 != 127LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x226 = 128418183LL;
	int8_t x227 = -1;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t49 = 4470448433698440724LLU;

    t49 = (x225^((x226/x227)*x228));

    if (t49 != 18446744073581101447LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x229 = INT8_MIN;
	int64_t x231 = -741443770500302560LL;
	static int32_t x232 = 338;
	int64_t t50 = 47494452LL;

    t50 = (x229^((x230/x231)*x232));

    if (t50 != -4008LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x233 = 1U;
	int16_t x234 = INT16_MIN;
	static int16_t x235 = INT16_MAX;
	uint64_t t51 = 63513675LLU;

    t51 = (x233^((x234/x235)*x236));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x237 = -87023863LL;
	uint16_t x239 = UINT16_MAX;
	volatile int64_t t52 = -430LL;

    t52 = (x237^((x238/x239)*x240));

    if (t52 != -87023863LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int16_t x241 = INT16_MAX;
	volatile int8_t x242 = -1;
	uint8_t x243 = 101U;
	volatile int32_t t53 = -32094;

    t53 = (x241^((x242/x243)*x244));

    if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x246 = 28U;
	uint64_t x247 = 202956875157169LLU;
	uint64_t x248 = 2426743919LLU;
	volatile uint64_t t54 = 53LLU;

    t54 = (x245^((x246/x247)*x248));

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x249 = UINT16_MAX;
	int32_t x250 = INT32_MIN;
	volatile int16_t x251 = INT16_MIN;
	static int16_t x252 = -1;
	int32_t t55 = 2618;

    t55 = (x249^((x250/x251)*x252));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x254 = -1;
	volatile int8_t x255 = -1;
	int32_t x256 = -38;
	int32_t t56 = -432629941;

    t56 = (x253^((x254/x255)*x256));

    if (t56 != 90) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x257 = INT8_MIN;
	int32_t x258 = INT32_MIN;
	static uint64_t x259 = UINT64_MAX;
	volatile int32_t x260 = -12;
	uint64_t t57 = 625394773LLU;

    t57 = (x257^((x258/x259)*x260));

    if (t57 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x261 = INT32_MIN;
	int8_t x262 = INT8_MIN;
	uint32_t x263 = UINT32_MAX;
	int8_t x264 = -1;
	volatile uint32_t t58 = 11661U;

    t58 = (x261^((x262/x263)*x264));

    if (t58 != 2147483648U) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x265 = 0U;
	int8_t x267 = -1;
	int16_t x268 = INT16_MIN;
	volatile uint32_t t59 = 119162518U;

    t59 = (x265^((x266/x267)*x268));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x269 = -1;
	static uint32_t x270 = 27U;
	int64_t t60 = -235594276389618LL;

    t60 = (x269^((x270/x271)*x272));

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x273 = -1;
	volatile uint8_t x274 = 1U;
	static uint8_t x275 = UINT8_MAX;
	int32_t t61 = -424346883;

    t61 = (x273^((x274/x275)*x276));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x278 = UINT8_MAX;
	volatile int64_t t62 = 1315052085591322LL;

    t62 = (x277^((x278/x279)*x280));

    if (t62 != 11842925501191LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x282 = -1;
	int8_t x283 = -1;
	int8_t x284 = 1;
	int32_t t63 = 249915896;

    t63 = (x281^((x282/x283)*x284));

    if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x286 = UINT32_MAX;
	uint16_t x287 = 4U;
	uint32_t x288 = UINT32_MAX;
	uint64_t t64 = 16346LLU;

    t64 = (x285^((x286/x287)*x288));

    if (t64 != 1678318540689972LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x289 = INT8_MIN;
	static int8_t x291 = INT8_MIN;
	uint64_t x292 = 1376LLU;
	static volatile uint64_t t65 = 8024724LLU;

    t65 = (x289^((x290/x291)*x292));

    if (t65 != 18446744073709550304LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x293 = 84150611972433LL;
	static uint8_t x294 = UINT8_MAX;
	uint64_t x296 = UINT64_MAX;
	uint64_t t66 = 339538584070LLU;

    t66 = (x293^((x294/x295)*x296));

    if (t66 != 84150611972433LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x297 = -1;
	int8_t x298 = 1;
	int32_t x299 = INT32_MIN;
	int32_t x300 = -114411575;

    t67 = (x297^((x298/x299)*x300));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x301 = 16489U;
	int32_t x302 = INT32_MAX;
	uint64_t x303 = 1945681587079465021LLU;
	uint32_t x304 = UINT32_MAX;

    t68 = (x301^((x302/x303)*x304));

    if (t68 != 16489LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x305 = -1;
	uint16_t x307 = UINT16_MAX;
	uint8_t x308 = 2U;
	static int32_t t69 = -3848241;

    t69 = (x305^((x306/x307)*x308));

    if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x309 = 22U;
	int16_t x310 = -1;
	volatile int8_t x311 = INT8_MIN;
	int32_t t70 = 497853320;

    t70 = (x309^((x310/x311)*x312));

    if (t70 != 22) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x313 = 1802;
	int16_t x314 = -1;
	int16_t x316 = INT16_MIN;

    t71 = (x313^((x314/x315)*x316));

    if (t71 != 1802) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x317 = INT64_MAX;
	static uint8_t x318 = 0U;
	uint8_t x319 = 82U;
	int64_t t72 = INT64_MAX;

    t72 = (x317^((x318/x319)*x320));

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint64_t x321 = 11989793753091500LLU;
	int16_t x322 = INT16_MIN;
	int64_t x323 = 31910422LL;
	static volatile int8_t x324 = -1;
	volatile uint64_t t73 = 1941752532182074LLU;

    t73 = (x321^((x322/x323)*x324));

    if (t73 != 11989793753091500LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x325 = -201456LL;
	int32_t x326 = INT32_MIN;
	volatile int64_t t74 = 12643864617LL;

    t74 = (x325^((x326/x327)*x328));

    if (t74 != 209229LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x329 = INT16_MIN;
	uint8_t x330 = 12U;
	volatile uint8_t x332 = 16U;
	static volatile uint64_t t75 = 1549171239438427059LLU;

    t75 = (x329^((x330/x331)*x332));

    if (t75 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x337 = -100;
	static int16_t x338 = INT16_MIN;
	volatile int64_t x339 = INT64_MAX;
	uint16_t x340 = UINT16_MAX;
	static volatile int64_t t76 = -882569835319LL;

    t76 = (x337^((x338/x339)*x340));

    if (t76 != -100LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x342 = -1;
	uint16_t x343 = 1941U;
	uint64_t x344 = 399961807LLU;
	static uint64_t t77 = UINT64_MAX;

    t77 = (x341^((x342/x343)*x344));

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x345 = INT64_MAX;
	int8_t x346 = -3;
	volatile uint64_t x347 = UINT64_MAX;
	int8_t x348 = INT8_MIN;
	uint64_t t78 = 20353837540665203LLU;

    t78 = (x345^((x346/x347)*x348));

    if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x353 = INT8_MAX;
	int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MIN;
	int16_t x356 = -1;
	static volatile int32_t t79 = -69;

    t79 = (x353^((x354/x355)*x356));

    if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x361 = -1;
	static volatile int8_t x362 = 4;
	volatile uint16_t x363 = 412U;
	static uint8_t x364 = 1U;

    t80 = (x361^((x362/x363)*x364));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x369 = INT32_MAX;
	static volatile int16_t x370 = -1;
	static int64_t x372 = -2496549LL;

    t81 = (x369^((x370/x371)*x372));

    if (t81 != 2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x373 = INT32_MIN;
	int16_t x375 = -1;
	uint16_t x376 = 13443U;

    t82 = (x373^((x374/x375)*x376));

    if (t82 != 1266496643) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x377 = -1;
	int16_t x378 = -1;
	uint8_t x379 = 45U;
	int32_t x380 = 8164628;
	volatile int32_t t83 = -4193029;

    t83 = (x377^((x378/x379)*x380));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x381 = 17206893674LLU;
	int64_t x383 = INT64_MIN;
	uint8_t x384 = UINT8_MAX;
	volatile uint64_t t84 = 1821231LLU;

    t84 = (x381^((x382/x383)*x384));

    if (t84 != 17206893674LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x385 = -1LL;
	uint16_t x386 = 12008U;
	volatile uint16_t x387 = 15286U;
	int64_t t85 = -58LL;

    t85 = (x385^((x386/x387)*x388));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x389 = INT16_MIN;
	static int64_t x390 = -1LL;
	int32_t x391 = -25886329;
	volatile int8_t x392 = INT8_MIN;
	int64_t t86 = -3318402439LL;

    t86 = (x389^((x390/x391)*x392));

    if (t86 != -32768LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x393 = -3;
	int32_t x394 = INT32_MIN;
	uint32_t x395 = UINT32_MAX;
	volatile int64_t x396 = 256636407LL;
	static int64_t t87 = 1640454101LL;

    t87 = (x393^((x394/x395)*x396));

    if (t87 != -3LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x397 = 6775U;
	volatile int16_t x399 = INT16_MIN;
	volatile uint8_t x400 = 0U;
	volatile int32_t t88 = 158;

    t88 = (x397^((x398/x399)*x400));

    if (t88 != 6775) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x401 = INT32_MIN;
	int8_t x402 = INT8_MAX;
	static int16_t x404 = -1;
	volatile uint64_t t89 = 41378956289267030LLU;

    t89 = (x401^((x402/x403)*x404));

    if (t89 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x405 = INT16_MAX;
	static int64_t x406 = 104147LL;
	static int32_t x407 = INT32_MIN;
	int32_t x408 = INT32_MIN;
	int64_t t90 = -602454966LL;

    t90 = (x405^((x406/x407)*x408));

    if (t90 != 32767LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x409 = 15;
	uint16_t x410 = 608U;
	int8_t x411 = INT8_MIN;
	uint32_t x412 = 64275U;
	uint32_t t91 = 1014336520U;

    t91 = (x409^((x410/x411)*x412));

    if (t91 != 4294710203U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x413 = INT16_MIN;
	uint8_t x414 = 7U;
	uint16_t x415 = 41U;
	uint64_t x416 = 3616068433531834LLU;
	volatile uint64_t t92 = 1647905317927LLU;

    t92 = (x413^((x414/x415)*x416));

    if (t92 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x417 = 3783384U;
	uint32_t x419 = 863682U;
	volatile uint64_t t93 = 15429359624812591LLU;

    t93 = (x417^((x418/x419)*x420));

    if (t93 != 18446744073705768225LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x421 = 1LL;
	int64_t x422 = -2515293822000081LL;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t94 = 1LLU;

    t94 = (x421^((x422/x423)*x424));

    if (t94 != 18446743913734112961LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x425 = -1;
	uint64_t x427 = 7413027158307754LLU;
	static uint64_t x428 = 386012777694346293LLU;
	volatile uint64_t t95 = UINT64_MAX;

    t95 = (x425^((x426/x427)*x428));

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x433 = -1;
	uint64_t x435 = UINT64_MAX;
	volatile uint16_t x436 = UINT16_MAX;
	uint64_t t96 = UINT64_MAX;

    t96 = (x433^((x434/x435)*x436));

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x437 = INT32_MIN;
	static int8_t x438 = -1;
	int64_t x439 = -1LL;
	int64_t x440 = 1331102695744212803LL;
	volatile int64_t t97 = -39212457543617192LL;

    t97 = (x437^((x438/x439)*x440));

    if (t97 != -1331102694287995069LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x441 = INT32_MAX;
	int64_t x442 = -1LL;
	static uint32_t x443 = 730510749U;
	int8_t x444 = -1;
	int64_t t98 = -23LL;

    t98 = (x441^((x442/x443)*x444));

    if (t98 != 2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x445 = 25U;
	static int8_t x446 = -1;
	int32_t x447 = -1;
	int32_t t99 = -112680;

    t99 = (x445^((x446/x447)*x448));

    if (t99 != -2147483623) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x450 = 68;
	static int32_t x451 = INT32_MIN;
	int64_t x452 = 57LL;
	uint64_t t100 = UINT64_MAX;

    t100 = (x449^((x450/x451)*x452));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x454 = -1;
	uint64_t x455 = UINT64_MAX;
	static uint32_t x456 = 125916704U;
	uint64_t t101 = 494LLU;

    t101 = (x453^((x454/x455)*x456));

    if (t101 != 18446744073583634911LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x465 = UINT16_MAX;
	int8_t x468 = -7;
	volatile int32_t t102 = 2301347;

    t102 = (x465^((x466/x467)*x468));

    if (t102 != 65535) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x469 = 1U;
	int8_t x471 = INT8_MIN;
	int32_t x472 = 743319;
	int32_t t103 = 13540292;

    t103 = (x469^((x470/x471)*x472));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x473 = 228;
	uint8_t x475 = 2U;
	static volatile int64_t x476 = 1740737340LL;
	static volatile int64_t t104 = 92LL;

    t104 = (x473^((x474/x475)*x476));

    if (t104 != 228LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x477 = 96365;
	volatile int32_t x478 = -1;
	volatile int64_t x480 = 274719978788LL;

    t105 = (x477^((x478/x479)*x480));

    if (t105 != 96365LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x482 = 486271847661LLU;
	static uint32_t x483 = UINT32_MAX;
	uint32_t x484 = UINT32_MAX;
	uint64_t t106 = 7072838284LLU;

    t106 = (x481^((x482/x483)*x484));

    if (t106 != 481036337264LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x485 = UINT16_MAX;
	static int64_t x486 = INT64_MIN;
	uint64_t x487 = 39831567LLU;
	int8_t x488 = -3;
	volatile uint64_t t107 = 16644578LLU;

    t107 = (x485^((x486/x487)*x488));

    if (t107 != 18446743379031434517LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x489 = INT8_MIN;
	int16_t x490 = INT16_MIN;
	uint16_t x491 = UINT16_MAX;
	volatile int8_t x492 = INT8_MIN;

    t108 = (x489^((x490/x491)*x492));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x495 = 14209;
	int64_t x496 = 2180665200901908LL;
	volatile uint64_t t109 = UINT64_MAX;

    t109 = (x493^((x494/x495)*x496));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x498 = UINT64_MAX;
	volatile int16_t x499 = INT16_MAX;
	int16_t x500 = INT16_MAX;
	uint64_t t110 = 706641467077955719LLU;

    t110 = (x497^((x498/x499)*x500));

    if (t110 != 18446744073709525266LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x502 = 2903948LLU;
	int64_t x503 = -171LL;
	uint64_t t111 = 183LLU;

    t111 = (x501^((x502/x503)*x504));

    if (t111 != 32767LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x505 = INT8_MIN;
	static int64_t x506 = -1LL;
	volatile uint8_t x507 = 4U;
	static volatile uint64_t x508 = 57863LLU;
	volatile uint64_t t112 = 873646525LLU;

    t112 = (x505^((x506/x507)*x508));

    if (t112 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x509 = 215488245345LL;
	uint32_t x510 = 1740422074U;
	static int8_t x512 = INT8_MAX;
	int64_t t113 = -7LL;

    t113 = (x509^((x510/x511)*x512));

    if (t113 != 215494901860LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x514 = -31036;
	static uint64_t x516 = 1382839546LLU;
	uint64_t t114 = 1888822728LLU;

    t114 = (x513^((x514/x515)*x516));

    if (t114 != 337412849223LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x518 = INT8_MAX;
	static volatile int64_t t115 = -12252505535390LL;

    t115 = (x517^((x518/x519)*x520));

    if (t115 != 2147483647LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x521 = INT16_MAX;
	static uint64_t x523 = UINT64_MAX;
	static uint64_t t116 = 118594635433591LLU;

    t116 = (x521^((x522/x523)*x524));

    if (t116 != 32767LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x525 = 1LLU;
	int64_t x526 = INT64_MAX;
	uint64_t x527 = UINT64_MAX;
	int8_t x528 = 0;
	uint64_t t117 = 112LLU;

    t117 = (x525^((x526/x527)*x528));

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x531 = UINT8_MAX;
	int8_t x532 = -1;
	volatile uint32_t t118 = 2077183U;

    t118 = (x529^((x530/x531)*x532));

    if (t118 != 127U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x533 = 0LLU;
	static volatile uint8_t x534 = 4U;
	uint8_t x535 = 39U;
	static volatile uint8_t x536 = 18U;
	volatile uint64_t t119 = 261090493664307610LLU;

    t119 = (x533^((x534/x535)*x536));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x537 = INT32_MIN;
	uint16_t x538 = UINT16_MAX;
	static uint32_t x539 = 19994415U;
	uint64_t x540 = 772233252914LLU;
	static volatile uint64_t t120 = 301504LLU;

    t120 = (x537^((x538/x539)*x540));

    if (t120 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x541 = UINT8_MAX;
	static int16_t x542 = 2;
	int64_t x544 = INT64_MIN;
	volatile int64_t t121 = 1LL;

    t121 = (x541^((x542/x543)*x544));

    if (t121 != 255LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x545 = -1;
	int64_t x546 = INT64_MIN;
	volatile int16_t x547 = INT16_MIN;
	volatile int64_t t122 = 241799651625165203LL;

    t122 = (x545^((x546/x547)*x548));

    if (t122 != -562949953421313LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x550 = 414;
	int64_t x551 = -1442794539644289662LL;
	static volatile int16_t x552 = -1;
	int64_t t123 = INT64_MIN;

    t123 = (x549^((x550/x551)*x552));

    if (t123 != INT64_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x554 = INT32_MIN;
	uint64_t x555 = 57692LLU;
	volatile int32_t x556 = INT32_MIN;
	volatile uint64_t t124 = 401369LLU;

    t124 = (x553^((x554/x555)*x556));

    if (t124 != 13864234816095911935LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x557 = -1;
	static volatile int32_t x559 = INT32_MIN;
	uint16_t x560 = UINT16_MAX;
	static uint32_t t125 = 1761321887U;

    t125 = (x557^((x558/x559)*x560));

    if (t125 != 4294901760U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x561 = -32;
	volatile int32_t x563 = -79116378;
	uint8_t x564 = 19U;
	int32_t t126 = -9633;

    t126 = (x561^((x562/x563)*x564));

    if (t126 != -32) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x565 = 124U;
	int8_t x566 = -1;
	int32_t x567 = -3180;
	int16_t x568 = INT16_MIN;
	int32_t t127 = 1;

    t127 = (x565^((x566/x567)*x568));

    if (t127 != 124) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x569 = INT32_MAX;
	volatile int64_t x570 = INT64_MIN;
	uint16_t x571 = UINT16_MAX;
	uint32_t x572 = 2289U;

    t128 = (x569^((x570/x571)*x572));

    if (t128 != -322153028507893761LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x577 = INT64_MIN;
	uint32_t x578 = 966U;
	uint64_t x580 = UINT64_MAX;
	volatile uint64_t t129 = 888405521514LLU;

    t129 = (x577^((x578/x579)*x580));

    if (t129 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x581 = UINT8_MAX;
	volatile int64_t x582 = -1LL;
	int32_t x583 = INT32_MIN;
	uint32_t x584 = UINT32_MAX;
	volatile int64_t t130 = -1436053858608357533LL;

    t130 = (x581^((x582/x583)*x584));

    if (t130 != 255LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x585 = 0U;
	static volatile int8_t x587 = INT8_MIN;
	static uint8_t x588 = 83U;
	volatile int32_t t131 = 8;

    t131 = (x585^((x586/x587)*x588));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x590 = 44909LL;
	static int16_t x592 = 654;
	static volatile int64_t t132 = 7LL;

    t132 = (x589^((x590/x591)*x592));

    if (t132 != -2147252786LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x597 = INT8_MAX;
	volatile uint32_t x599 = 36092290U;
	int64_t x600 = INT64_MIN;
	volatile int64_t t133 = -84883LL;

    t133 = (x597^((x598/x599)*x600));

    if (t133 != 127LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x601 = INT64_MIN;
	static volatile int64_t x602 = INT64_MIN;
	uint64_t x604 = UINT64_MAX;
	uint64_t t134 = 1353791349018903329LLU;

    t134 = (x601^((x602/x603)*x604));

    if (t134 != 9592306918328966840LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x605 = UINT32_MAX;
	int16_t x606 = -108;
	uint8_t x607 = 17U;
	volatile uint32_t x608 = 63051333U;
	volatile uint32_t t135 = 57833U;

    t135 = (x605^((x606/x607)*x608));

    if (t135 != 378307997U) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int8_t x609 = INT8_MAX;
	int16_t x610 = INT16_MIN;
	volatile int16_t x611 = -1;
	volatile int32_t t136 = 5970323;

    t136 = (x609^((x610/x611)*x612));

    if (t136 != 98431) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x614 = INT64_MIN;
	int64_t x615 = INT64_MIN;
	int64_t x616 = -1LL;
	int64_t t137 = -7473LL;

    t137 = (x613^((x614/x615)*x616));

    if (t137 != -128LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x617 = 32;
	uint32_t x620 = 343U;
	int64_t t138 = 2884837172LL;

    t138 = (x617^((x618/x619)*x620));

    if (t138 != 32LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x621 = INT64_MIN;
	int32_t x622 = -1;
	int8_t x623 = INT8_MIN;
	int8_t x624 = INT8_MIN;
	volatile int64_t t139 = INT64_MIN;

    t139 = (x621^((x622/x623)*x624));

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x625 = INT64_MIN;
	uint32_t x626 = 477U;
	volatile int8_t x628 = INT8_MAX;
	volatile int64_t t140 = INT64_MIN;

    t140 = (x625^((x626/x627)*x628));

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x629 = -1;
	uint8_t x630 = 9U;
	int16_t x631 = INT16_MIN;
	int32_t x632 = -1;

    t141 = (x629^((x630/x631)*x632));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x634 = INT64_MAX;
	int32_t x635 = INT32_MIN;
	int16_t x636 = INT16_MAX;
	volatile int64_t t142 = 502531998603LL;

    t142 = (x633^((x634/x635)*x636));

    if (t142 != -9223231303661420544LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x637 = 31;
	int8_t x638 = INT8_MIN;
	volatile int32_t x639 = INT32_MAX;
	int8_t x640 = INT8_MAX;
	int32_t t143 = -815400;

    t143 = (x637^((x638/x639)*x640));

    if (t143 != 31) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x641 = 16;
	int16_t x642 = INT16_MIN;
	volatile uint16_t x644 = 6578U;
	uint32_t t144 = 2107195389U;

    t144 = (x641^((x642/x643)*x644));

    if (t144 != 1731237524U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x645 = INT32_MIN;
	int8_t x646 = -1;
	volatile int16_t x648 = INT16_MIN;

    t145 = (x645^((x646/x647)*x648));

    if (t145 != 2147450880) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x649 = INT64_MIN;
	int64_t x651 = 405780788102LL;
	volatile int16_t x652 = 11677;
	int64_t t146 = -49LL;

    t146 = (x649^((x650/x651)*x652));

    if (t146 != 9223371771437301459LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x653 = 46U;
	int64_t x654 = -6306942994802LL;
	int8_t x655 = -1;

    t147 = (x653^((x654/x655)*x656));

    if (t147 != 227049947812902LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x657 = INT16_MIN;
	int8_t x659 = INT8_MIN;
	volatile int8_t x660 = INT8_MAX;
	int32_t t148 = 2;

    t148 = (x657^((x658/x659)*x660));

    if (t148 != -2130739200) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x661 = UINT32_MAX;
	int64_t x662 = -1LL;
	int8_t x664 = INT8_MAX;

    t149 = (x661^((x662/x663)*x664));

    if (t149 != 4294967295LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x665 = INT16_MIN;
	static uint8_t x667 = 1U;
	uint8_t x668 = 7U;
	volatile int32_t t150 = -21212;

    t150 = (x665^((x666/x667)*x668));

    if (t150 != -32761) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x669 = 49U;
	int32_t x670 = -1;
	int16_t x671 = 2185;
	int32_t x672 = INT32_MIN;
	static volatile int32_t t151 = 3;

    t151 = (x669^((x670/x671)*x672));

    if (t151 != 49) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x673 = 0;
	volatile uint64_t x675 = UINT64_MAX;
	int16_t x676 = 6;
	static uint64_t t152 = 1635163006LLU;

    t152 = (x673^((x674/x675)*x676));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x677 = INT32_MIN;
	int32_t x678 = INT32_MIN;
	uint64_t x680 = UINT64_MAX;

    t153 = (x677^((x678/x679)*x680));

    if (t153 != 1932735284LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x681 = INT32_MIN;
	int8_t x682 = INT8_MIN;
	int16_t x683 = INT16_MIN;
	uint64_t x684 = 381646991LLU;

    t154 = (x681^((x682/x683)*x684));

    if (t154 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x685 = 3248LL;
	static uint64_t x686 = 5LLU;
	uint64_t x687 = 2675697656520967LLU;
	int64_t x688 = -176LL;
	volatile uint64_t t155 = 112590848992692LLU;

    t155 = (x685^((x686/x687)*x688));

    if (t155 != 3248LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x689 = -1LL;
	int64_t x690 = INT64_MAX;
	int64_t x691 = 54502169003558LL;
	int32_t x692 = INT32_MAX;
	volatile int64_t t156 = 860504LL;

    t156 = (x689^((x690/x691)*x692));

    if (t156 != -363416510098164LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x693 = -68;
	int16_t x694 = INT16_MIN;
	int16_t x695 = -3;
	uint32_t x696 = 951262866U;
	static volatile uint32_t t157 = 1522974U;

    t157 = (x693^((x694/x695)*x696));

    if (t157 != 4127833928U) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x698 = INT64_MIN;
	uint32_t x699 = UINT32_MAX;
	uint16_t x700 = 660U;

    t158 = (x697^((x698/x699)*x700));

    if (t158 != -1417339207013LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x701 = 81115240866793202LLU;
	static uint8_t x703 = UINT8_MAX;
	int8_t x704 = 4;
	static uint64_t t159 = 0LLU;

    t159 = (x701^((x702/x703)*x704));

    if (t159 != 81115240866798658LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x705 = INT8_MIN;
	int32_t x706 = INT32_MIN;
	int16_t x707 = INT16_MIN;
	static int16_t x708 = INT16_MIN;
	volatile int32_t t160 = -62310108;

    t160 = (x705^((x706/x707)*x708));

    if (t160 != 2147483520) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x711 = -1LL;
	uint32_t x712 = 14374U;
	int64_t t161 = 8736LL;

    t161 = (x709^((x710/x711)*x712));

    if (t161 != -201453LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x714 = -1373;
	uint16_t x715 = 7U;
	uint8_t x716 = 21U;
	volatile int32_t t162 = -8728;

    t162 = (x713^((x714/x715)*x716));

    if (t162 != -4934) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x717 = INT16_MIN;
	volatile int8_t x718 = -1;
	volatile uint64_t x719 = UINT64_MAX;
	int64_t x720 = INT64_MAX;
	volatile uint64_t t163 = 71LLU;

    t163 = (x717^((x718/x719)*x720));

    if (t163 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x721 = INT8_MAX;
	int8_t x722 = -24;
	static uint32_t x723 = UINT32_MAX;
	volatile uint32_t t164 = 206421472U;

    t164 = (x721^((x722/x723)*x724));

    if (t164 != 127U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x725 = 1LLU;
	uint64_t x728 = 27LLU;
	volatile uint64_t t165 = 3349923402010LLU;

    t165 = (x725^((x726/x727)*x728));

    if (t165 != 1LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x729 = -1;
	uint32_t x730 = UINT32_MAX;
	int32_t x731 = INT32_MIN;
	int32_t x732 = INT32_MIN;
	volatile uint32_t t166 = 593U;

    t166 = (x729^((x730/x731)*x732));

    if (t166 != 2147483647U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x734 = INT32_MIN;
	uint32_t x736 = 1U;
	uint32_t t167 = 278055189U;

    t167 = (x733^((x734/x735)*x736));

    if (t167 != 4151773320U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x737 = -1;
	uint64_t x738 = UINT64_MAX;
	volatile int8_t x739 = INT8_MIN;
	static int32_t x740 = -353931;
	volatile uint64_t t168 = 3785277589250LLU;

    t168 = (x737^((x738/x739)*x740));

    if (t168 != 353930LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x741 = -3;
	uint32_t x742 = 190266U;
	volatile int16_t x743 = -1;
	int64_t x744 = INT64_MAX;
	volatile int64_t t169 = 54200LL;

    t169 = (x741^((x742/x743)*x744));

    if (t169 != -3LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x746 = INT8_MIN;
	static int16_t x747 = -1;
	int8_t x748 = -11;
	volatile int32_t t170 = 201;

    t170 = (x745^((x746/x747)*x748));

    if (t170 != 1407) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x749 = -11;
	volatile int8_t x750 = INT8_MIN;
	uint8_t x751 = UINT8_MAX;
	volatile int32_t t171 = -285;

    t171 = (x749^((x750/x751)*x752));

    if (t171 != -11) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x753 = -1LL;
	int8_t x754 = -1;
	uint64_t x755 = UINT64_MAX;
	volatile int16_t x756 = INT16_MIN;
	uint64_t t172 = 83580LLU;

    t172 = (x753^((x754/x755)*x756));

    if (t172 != 32767LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x757 = 64U;
	uint64_t x758 = UINT64_MAX;
	uint32_t x759 = 1931515606U;
	int32_t x760 = INT32_MIN;
	uint64_t t173 = 101054LLU;

    t173 = (x757^((x758/x759)*x760));

    if (t173 != 16384163173860638784LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x762 = -1;
	int8_t x763 = INT8_MIN;
	int64_t x764 = 3832219768802LL;
	static int64_t t174 = -1347651LL;

    t174 = (x761^((x762/x763)*x764));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x765 = 37U;
	int8_t x767 = INT8_MAX;
	int64_t x768 = INT64_MAX;
	int64_t t175 = -110LL;

    t175 = (x765^((x766/x767)*x768));

    if (t175 != 37LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x773 = 6;
	volatile int32_t x775 = INT32_MIN;
	static int8_t x776 = -1;
	static int32_t t176 = 1;

    t176 = (x773^((x774/x775)*x776));

    if (t176 != 6) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x777 = INT32_MIN;
	volatile uint64_t x779 = UINT64_MAX;
	uint64_t t177 = 322679388LLU;

    t177 = (x777^((x778/x779)*x780));

    if (t177 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x781 = INT32_MAX;
	static uint64_t x782 = 148661LLU;
	static uint64_t x783 = 15248632LLU;
	static int64_t x784 = -4747483461LL;
	uint64_t t178 = 14LLU;

    t178 = (x781^((x782/x783)*x784));

    if (t178 != 2147483647LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x785 = 1;
	int8_t x786 = INT8_MIN;
	static int32_t x787 = INT32_MAX;
	static int32_t x788 = INT32_MIN;
	static int32_t t179 = 256624;

    t179 = (x785^((x786/x787)*x788));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x789 = 4U;
	int32_t x790 = -1;
	static int32_t x792 = -1;
	volatile int64_t t180 = -1091292934LL;

    t180 = (x789^((x790/x791)*x792));

    if (t180 != -5LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x794 = 7;
	int64_t x795 = -1LL;
	int8_t x796 = -1;
	volatile int64_t t181 = -5LL;

    t181 = (x793^((x794/x795)*x796));

    if (t181 != 65528LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x797 = UINT16_MAX;
	volatile uint8_t x798 = UINT8_MAX;
	static int32_t x800 = INT32_MIN;

    t182 = (x797^((x798/x799)*x800));

    if (t182 != 65535U) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x805 = 17302659U;
	int8_t x806 = -31;
	int16_t x807 = INT16_MIN;
	int64_t x808 = INT64_MIN;
	int64_t t183 = -2853439382843LL;

    t183 = (x805^((x806/x807)*x808));

    if (t183 != 17302659LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x809 = INT64_MIN;
	int8_t x810 = INT8_MIN;
	volatile int32_t x811 = -1;
	volatile int8_t x812 = 14;
	int64_t t184 = 55405958837LL;

    t184 = (x809^((x810/x811)*x812));

    if (t184 != -9223372036854774016LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x813 = -1LL;
	volatile int32_t x814 = INT32_MAX;
	int8_t x816 = INT8_MIN;

    t185 = (x813^((x814/x815)*x816));

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x817 = 389676U;
	volatile int32_t x818 = 7513291;
	static volatile int32_t x819 = INT32_MIN;
	uint64_t x820 = UINT64_MAX;

    t186 = (x817^((x818/x819)*x820));

    if (t186 != 389676LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x825 = INT64_MIN;
	static int64_t x826 = INT64_MAX;
	int32_t x827 = 47995694;
	int16_t x828 = -1;
	int64_t t187 = 41LL;

    t187 = (x825^((x826/x827)*x828));

    if (t187 != 9223371844683952383LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x829 = -1;
	int32_t x830 = -1717218;
	int16_t x832 = 31;
	static volatile int32_t t188 = -11246237;

    t188 = (x829^((x830/x831)*x832));

    if (t188 != -6077) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x833 = INT64_MAX;
	int64_t x834 = -68733065LL;
	int16_t x835 = INT16_MIN;
	int8_t x836 = -1;
	int64_t t189 = 1LL;

    t189 = (x833^((x834/x835)*x836));

    if (t189 != -9223372036854773712LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x837 = INT8_MIN;
	volatile uint32_t x838 = 2026U;
	uint64_t x839 = UINT64_MAX;
	int8_t x840 = INT8_MIN;

    t190 = (x837^((x838/x839)*x840));

    if (t190 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x842 = -2070350LL;
	volatile int16_t x843 = 5;
	int32_t x844 = INT32_MIN;

    t191 = (x841^((x842/x843)*x844));

    if (t191 != -889208554127488LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x846 = INT64_MIN;
	int64_t x847 = 181662LL;
	static uint16_t x848 = UINT16_MAX;
	int64_t t192 = 213LL;

    t192 = (x845^((x846/x847)*x848));

    if (t192 != -3327353471546613462LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x849 = -1;
	int32_t x850 = -11;
	volatile int64_t x851 = 36846308241826LL;
	static int64_t x852 = INT64_MAX;
	volatile int64_t t193 = 173625417933811LL;

    t193 = (x849^((x850/x851)*x852));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x853 = 99059462LL;
	volatile int64_t x854 = 44310872LL;
	uint8_t x855 = 14U;
	int16_t x856 = INT16_MIN;
	int64_t t194 = -25343LL;

    t194 = (x853^((x854/x855)*x856));

    if (t194 != -103618541818LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x857 = 4U;
	uint8_t x858 = 6U;
	volatile int64_t x859 = INT64_MIN;
	static int32_t x860 = INT32_MIN;
	int64_t t195 = -627272733188LL;

    t195 = (x857^((x858/x859)*x860));

    if (t195 != 4LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x861 = 10486U;
	int16_t x862 = 10775;
	uint32_t x864 = UINT32_MAX;
	static volatile uint64_t t196 = 733LLU;

    t196 = (x861^((x862/x863)*x864));

    if (t196 != 10486LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x865 = -5;
	int64_t x867 = -2729036647688108586LL;
	int16_t x868 = -1;

    t197 = (x865^((x866/x867)*x868));

    if (t197 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x869 = -29;
	int16_t x870 = -1;
	static uint16_t x872 = 384U;
	volatile int32_t t198 = -1;

    t198 = (x869^((x870/x871)*x872));

    if (t198 != -29) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x873 = INT64_MIN;
	int16_t x874 = INT16_MAX;
	int16_t x875 = 624;
	static volatile int16_t x876 = INT16_MIN;
	static int64_t t199 = -1384606217828LL;

    t199 = (x873^((x874/x875)*x876));

    if (t199 != 9223372036853071872LL) { NG(); } else { ; }
	
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

