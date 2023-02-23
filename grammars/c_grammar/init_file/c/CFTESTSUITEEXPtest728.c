
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

int32_t x7 = INT32_MAX;
int16_t x10 = INT16_MIN;
static uint32_t x15 = 33U;
volatile int8_t x16 = 1;
int32_t x21 = INT32_MAX;
int32_t x29 = INT32_MIN;
int32_t x31 = 9153;
static volatile int8_t x33 = INT8_MIN;
int32_t x35 = -121449;
volatile int32_t t10 = INT32_MAX;
int32_t t11 = 12316992;
int64_t x52 = INT64_MIN;
int64_t x56 = -1LL;
static volatile uint16_t x57 = 3473U;
int32_t x58 = INT32_MIN;
int16_t x83 = 33;
int64_t x86 = INT64_MIN;
volatile uint8_t x87 = UINT8_MAX;
int32_t t21 = -1005;
volatile uint8_t x91 = 1U;
static volatile int32_t t22 = 118051984;
int16_t x95 = INT16_MAX;
static int64_t x98 = INT64_MIN;
int32_t x108 = INT32_MIN;
uint8_t x111 = 106U;
int8_t x124 = 1;
int16_t x136 = 11;
int64_t x143 = -1LL;
static volatile int32_t t35 = -40250105;
int32_t x151 = -1707581;
int8_t x154 = INT8_MIN;
int32_t x156 = -55;
uint8_t x158 = UINT8_MAX;
int32_t t39 = 376451807;
int16_t x172 = -14031;
int64_t x173 = INT64_MAX;
volatile int64_t x179 = INT64_MIN;
int64_t x180 = -1LL;
uint64_t t44 = 24038857895999180LLU;
int32_t x184 = INT32_MIN;
int32_t t45 = INT32_MIN;
int32_t x189 = 1021387707;
int64_t x193 = -137963314LL;
static uint64_t x195 = UINT64_MAX;
int64_t t48 = 77LL;
volatile int16_t x197 = INT16_MIN;
volatile int32_t t49 = 8232;
uint8_t x205 = 95U;
int8_t x211 = INT8_MAX;
int64_t x216 = -1LL;
static int8_t x218 = INT8_MIN;
volatile int16_t x219 = -1;
volatile int64_t t54 = 475LL;
volatile int16_t x225 = -1;
int16_t x232 = INT16_MIN;
static volatile int8_t x234 = 12;
int16_t x235 = INT16_MIN;
int16_t x238 = INT16_MAX;
static volatile int32_t x248 = INT32_MIN;
int32_t x252 = INT32_MAX;
volatile uint64_t t62 = 994498266LLU;
int32_t t63 = -67590;
volatile int32_t t64 = 7356;
int32_t t65 = -218684;
int8_t x265 = INT8_MIN;
uint32_t x268 = 1105199522U;
volatile int32_t x272 = INT32_MAX;
volatile uint64_t x273 = 190385980045547114LLU;
uint32_t x277 = 61U;
int64_t x284 = -3105LL;
uint16_t x286 = 51U;
static int32_t x287 = -10;
volatile int32_t x288 = -1;
static volatile int32_t t71 = 115025;
int32_t x289 = -1;
int8_t x290 = -1;
volatile int64_t x294 = INT64_MIN;
int64_t x298 = -1LL;
int64_t x304 = 27LL;
int32_t t82 = 143;
volatile int16_t x342 = 27;
int64_t x343 = -1LL;
static int16_t x344 = INT16_MIN;
volatile uint32_t x346 = 181U;
int32_t x347 = 124290;
int32_t t84 = 418992;
uint16_t x355 = UINT16_MAX;
volatile uint64_t t87 = 2629670692218LLU;
int16_t x361 = INT16_MAX;
static int8_t x362 = INT8_MIN;
int32_t x363 = 20797599;
uint8_t x373 = 27U;
static int32_t x380 = -1;
volatile int64_t t92 = -1LL;
uint64_t t93 = 6544558589LLU;
int16_t x386 = -1;
int32_t x390 = -1;
volatile int64_t x393 = -5397095288444LL;
uint64_t x394 = 214501LLU;
volatile uint32_t x399 = 1870U;
volatile uint32_t x402 = 223U;
volatile int32_t t98 = -12742717;
int32_t x407 = INT32_MAX;
volatile int64_t t99 = 389LL;
uint64_t x417 = 245040326LLU;
uint64_t t102 = 1131749457LLU;
static int8_t x424 = -1;
static volatile int32_t t103 = INT32_MIN;
int32_t x425 = -7864;
volatile uint8_t x426 = 34U;
static uint64_t x431 = UINT64_MAX;
int32_t x435 = 2;
int32_t x438 = 206;
static int64_t x440 = -1LL;
uint8_t x442 = 116U;
int16_t x444 = INT16_MAX;
volatile int16_t x453 = INT16_MAX;
uint16_t x457 = UINT16_MAX;
volatile uint32_t x468 = 16131U;
uint8_t x470 = 0U;
volatile int32_t x480 = INT32_MIN;
int16_t x485 = INT16_MIN;
int16_t x491 = INT16_MIN;
int32_t x493 = INT32_MIN;
uint32_t x510 = 342940088U;
int64_t x515 = 37508LL;
volatile uint64_t x517 = 6522LLU;
int64_t x529 = 21365433970842LL;
volatile uint64_t x542 = 67804LLU;
int32_t x544 = 3;
uint32_t x546 = 16461384U;
int64_t x548 = INT64_MIN;
volatile int8_t x552 = -1;
int64_t x553 = -263542633LL;
int64_t x554 = INT64_MIN;
int64_t x555 = INT64_MIN;
int64_t x558 = INT64_MAX;
uint16_t x566 = 22898U;
int16_t x567 = -1;
uint8_t x573 = UINT8_MAX;
uint8_t x576 = 62U;
int16_t x580 = 14;
volatile int32_t t142 = -1;
int64_t x584 = -1LL;
int64_t x587 = INT64_MIN;
int16_t x589 = INT16_MIN;
volatile uint8_t x590 = 104U;
volatile int64_t x595 = INT64_MIN;
int64_t x601 = INT64_MIN;
static uint16_t x603 = UINT16_MAX;
int32_t x605 = 304839415;
int64_t x623 = INT64_MIN;
volatile int16_t x625 = 1473;
static int8_t x630 = 1;
uint8_t x631 = 1U;
static int8_t x632 = 4;
static int16_t x634 = -1;
int64_t x641 = -124587LL;
int32_t x642 = INT32_MAX;
uint32_t x643 = UINT32_MAX;
uint32_t x647 = 45U;
static volatile int32_t t159 = -46357865;
int16_t x649 = -1;
uint32_t x650 = 4995555U;
static volatile uint32_t x651 = UINT32_MAX;
int64_t x658 = INT64_MIN;
int32_t t162 = -40;
uint64_t x661 = 2909LLU;
static uint8_t x667 = 117U;
int16_t x668 = -290;
volatile int32_t t165 = 48013;
int32_t x674 = 84327;
static uint16_t x679 = 1944U;
static uint32_t t168 = 179345U;
int32_t x686 = -1;
int8_t x702 = INT8_MAX;
volatile uint64_t x703 = UINT64_MAX;
int8_t x714 = -3;
uint64_t x718 = 193278338979082LLU;
int8_t x726 = -1;
static volatile int32_t t179 = 112950;
int64_t x736 = 1033LL;
int64_t x738 = 2557339150041931LL;
uint16_t x744 = UINT16_MAX;
int32_t t183 = -6977707;
uint64_t x745 = UINT64_MAX;
uint64_t x746 = 141LLU;
uint32_t x747 = UINT32_MAX;
static int64_t x748 = INT64_MAX;
int16_t x749 = INT16_MAX;
int64_t x751 = INT64_MAX;
static int16_t x755 = INT16_MIN;
static uint32_t x762 = 45800459U;
uint64_t x764 = UINT64_MAX;
volatile int32_t t188 = -349491863;
int8_t x774 = -1;
int8_t x780 = INT8_MIN;
volatile int64_t t193 = -6LL;
static volatile int16_t x788 = INT16_MIN;
int8_t x792 = -1;
static volatile int32_t t195 = 6916;
static uint32_t x793 = 13U;
int32_t x795 = INT32_MAX;
int32_t x796 = -253;
volatile uint32_t t196 = 149626U;
static int64_t x799 = -1LL;
int32_t x802 = -14;
uint64_t x803 = 930948195191208950LLU;
uint16_t x808 = 2020U;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	volatile int64_t x2 = 36453397937415740LL;
	volatile int64_t x3 = INT64_MAX;
	int16_t x4 = INT16_MIN;
	int32_t t0 = INT32_MIN;

    t0 = (x1^((x2/x3)<=x4));

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -15263;
	int16_t x6 = -1;
	static uint32_t x8 = 700U;
	int32_t t1 = -152197905;

    t1 = (x5^((x6/x7)<=x8));

    if (t1 != -15264) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 398U;
	int64_t x11 = INT64_MIN;
	volatile int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -3660799;

    t2 = (x9^((x10/x11)<=x12));

    if (t2 != 398) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	static int64_t x14 = -1LL;
	int32_t t3 = 220550784;

    t3 = (x13^((x14/x15)<=x16));

    if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	volatile uint8_t x18 = 25U;
	int64_t x19 = INT64_MIN;
	int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = -1083275;

    t4 = (x17^((x18/x19)<=x20));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MIN;
	uint8_t x23 = 5U;
	uint8_t x24 = 2U;
	int32_t t5 = -108;

    t5 = (x21^((x22/x23)<=x24));

    if (t5 != 2147483646) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 20314646LLU;
	int32_t x26 = 242;
	static uint32_t x27 = 40U;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t6 = 2020408586LLU;

    t6 = (x25^((x26/x27)<=x28));

    if (t6 != 20314647LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x30 = INT32_MIN;
	static uint64_t x32 = 0LLU;
	int32_t t7 = INT32_MIN;

    t7 = (x29^((x30/x31)<=x32));

    if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x34 = -1;
	int16_t x36 = INT16_MIN;
	int32_t t8 = -27967714;

    t8 = (x33^((x34/x35)<=x36));

    if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	volatile uint32_t x38 = 1129U;
	int8_t x39 = 4;
	static int32_t x40 = INT32_MAX;
	static volatile int32_t t9 = -1142423;

    t9 = (x37^((x38/x39)<=x40));

    if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	uint16_t x42 = UINT16_MAX;
	int32_t x43 = -1;
	int32_t x44 = INT32_MIN;

    t10 = (x41^((x42/x43)<=x44));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = -14;
	int32_t x46 = -1;
	static volatile int16_t x47 = -1;
	int8_t x48 = INT8_MIN;

    t11 = (x45^((x46/x47)<=x48));

    if (t11 != -14) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -1;
	int32_t x50 = 4868620;
	static int16_t x51 = INT16_MIN;
	volatile int32_t t12 = 686;

    t12 = (x49^((x50/x51)<=x52));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = INT32_MIN;
	volatile uint16_t x54 = 31U;
	int8_t x55 = INT8_MAX;
	volatile int32_t t13 = INT32_MIN;

    t13 = (x53^((x54/x55)<=x56));

    if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x59 = 10U;
	volatile int64_t x60 = 522381833236267LL;
	volatile int32_t t14 = -56244839;

    t14 = (x57^((x58/x59)<=x60));

    if (t14 != 3472) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	uint16_t x62 = 216U;
	int64_t x63 = INT64_MAX;
	uint8_t x64 = 28U;
	static volatile int32_t t15 = -1;

    t15 = (x61^((x62/x63)<=x64));

    if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -1LL;
	uint64_t x66 = 3554121925711266512LLU;
	int8_t x67 = INT8_MIN;
	uint8_t x68 = UINT8_MAX;
	static int64_t t16 = -51818369692LL;

    t16 = (x65^((x66/x67)<=x68));

    if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = 0;
	int16_t x70 = INT16_MAX;
	int32_t x71 = -1;
	int32_t x72 = -1221296;
	volatile int32_t t17 = -6;

    t17 = (x69^((x70/x71)<=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = INT8_MIN;
	uint32_t x74 = 114974U;
	int8_t x75 = INT8_MIN;
	uint8_t x76 = UINT8_MAX;
	int32_t t18 = -1;

    t18 = (x73^((x74/x75)<=x76));

    if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = INT64_MIN;
	int16_t x78 = INT16_MIN;
	static uint32_t x79 = 1690364U;
	volatile uint8_t x80 = 2U;
	int64_t t19 = INT64_MIN;

    t19 = (x77^((x78/x79)<=x80));

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 3107285U;
	int32_t x82 = INT32_MIN;
	volatile uint64_t x84 = UINT64_MAX;
	volatile uint32_t t20 = 1U;

    t20 = (x81^((x82/x83)<=x84));

    if (t20 != 3107284U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	static volatile int64_t x88 = 280238LL;

    t21 = (x85^((x86/x87)<=x88));

    if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	int32_t x90 = -1;
	int8_t x92 = 1;

    t22 = (x89^((x90/x91)<=x92));

    if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x93 = 48452682008606LL;
	int16_t x94 = -1;
	static volatile uint32_t x96 = 4774864U;
	static volatile int64_t t23 = -26649569564LL;

    t23 = (x93^((x94/x95)<=x96));

    if (t23 != 48452682008607LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 74U;
	volatile uint16_t x99 = 794U;
	int16_t x100 = INT16_MIN;
	int32_t t24 = -34985;

    t24 = (x97^((x98/x99)<=x100));

    if (t24 != 75) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -2702;
	int8_t x102 = -1;
	static int8_t x103 = INT8_MIN;
	uint8_t x104 = UINT8_MAX;
	int32_t t25 = -384936;

    t25 = (x101^((x102/x103)<=x104));

    if (t25 != -2701) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = UINT8_MAX;
	int8_t x106 = -1;
	int8_t x107 = 7;
	volatile int32_t t26 = -1;

    t26 = (x105^((x106/x107)<=x108));

    if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = INT16_MIN;
	static int16_t x110 = INT16_MIN;
	static uint16_t x112 = 0U;
	volatile int32_t t27 = 244375;

    t27 = (x109^((x110/x111)<=x112));

    if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = 6;
	uint8_t x114 = UINT8_MAX;
	static volatile int16_t x115 = INT16_MIN;
	uint64_t x116 = 3359068876094LLU;
	volatile int32_t t28 = -60486;

    t28 = (x113^((x114/x115)<=x116));

    if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	uint16_t x118 = 6159U;
	static int64_t x119 = INT64_MIN;
	static int64_t x120 = -945176982053627LL;
	int32_t t29 = -295;

    t29 = (x117^((x118/x119)<=x120));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 1U;
	uint64_t x122 = UINT64_MAX;
	static uint8_t x123 = 71U;
	volatile int32_t t30 = 437776;

    t30 = (x121^((x122/x123)<=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MAX;
	int32_t x126 = 23862;
	static volatile int64_t x127 = -1LL;
	int64_t x128 = -1173629273LL;
	volatile int64_t t31 = INT64_MAX;

    t31 = (x125^((x126/x127)<=x128));

    if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = 22;
	int8_t x130 = INT8_MIN;
	uint16_t x131 = 42U;
	int32_t x132 = -1;
	volatile int32_t t32 = -1033169213;

    t32 = (x129^((x130/x131)<=x132));

    if (t32 != 23) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x133 = 6U;
	uint16_t x134 = 182U;
	uint32_t x135 = 489U;
	volatile int32_t t33 = 0;

    t33 = (x133^((x134/x135)<=x136));

    if (t33 != 7) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = INT32_MIN;
	static volatile int16_t x138 = -12840;
	uint16_t x139 = 144U;
	uint16_t x140 = UINT16_MAX;
	int32_t t34 = 1060;

    t34 = (x137^((x138/x139)<=x140));

    if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MAX;
	static uint32_t x142 = 104427U;
	uint64_t x144 = 107348032662LLU;

    t35 = (x141^((x142/x143)<=x144));

    if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -1;
	static int16_t x146 = -196;
	uint16_t x147 = UINT16_MAX;
	static uint64_t x148 = UINT64_MAX;
	static volatile int32_t t36 = 423504621;

    t36 = (x145^((x146/x147)<=x148));

    if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x149 = INT8_MIN;
	uint8_t x150 = 3U;
	static int64_t x152 = -2549806886974648LL;
	volatile int32_t t37 = 287051;

    t37 = (x149^((x150/x151)<=x152));

    if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = UINT8_MAX;
	static uint64_t x155 = UINT64_MAX;
	volatile int32_t t38 = 0;

    t38 = (x153^((x154/x155)<=x156));

    if (t38 != 254) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x157 = INT32_MAX;
	volatile int8_t x159 = 1;
	uint64_t x160 = 244053983260LLU;

    t39 = (x157^((x158/x159)<=x160));

    if (t39 != 2147483646) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = -121728283882336761LL;
	uint8_t x162 = 15U;
	uint64_t x163 = 14369791093639LLU;
	static uint32_t x164 = 1409841177U;
	volatile int64_t t40 = -41822LL;

    t40 = (x161^((x162/x163)<=x164));

    if (t40 != -121728283882336762LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MAX;
	static int8_t x166 = INT8_MIN;
	uint16_t x167 = 464U;
	int8_t x168 = INT8_MAX;
	int32_t t41 = -3394;

    t41 = (x165^((x166/x167)<=x168));

    if (t41 != 126) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MAX;
	int32_t x170 = -2;
	int8_t x171 = INT8_MIN;
	int32_t t42 = -12156180;

    t42 = (x169^((x170/x171)<=x172));

    if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = -1;
	int32_t x175 = INT32_MAX;
	int16_t x176 = -6983;
	int64_t t43 = INT64_MAX;

    t43 = (x173^((x174/x175)<=x176));

    if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 31641234174701510LLU;
	volatile uint32_t x178 = 117737U;

    t44 = (x177^((x178/x179)<=x180));

    if (t44 != 31641234174701510LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	uint16_t x182 = 3U;
	int16_t x183 = -1;

    t45 = (x181^((x182/x183)<=x184));

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	volatile uint8_t x186 = 49U;
	int16_t x187 = -1;
	uint8_t x188 = 0U;
	static volatile int32_t t46 = -65;

    t46 = (x185^((x186/x187)<=x188));

    if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x190 = 95U;
	uint64_t x191 = UINT64_MAX;
	uint8_t x192 = UINT8_MAX;
	int32_t t47 = 0;

    t47 = (x189^((x190/x191)<=x192));

    if (t47 != 1021387706) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = -6;
	static volatile int16_t x196 = INT16_MAX;

    t48 = (x193^((x194/x195)<=x196));

    if (t48 != -137963313LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x198 = -1LL;
	int64_t x199 = -35865LL;
	static volatile int8_t x200 = 1;

    t49 = (x197^((x198/x199)<=x200));

    if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x201 = 15794U;
	int16_t x202 = INT16_MIN;
	uint8_t x203 = UINT8_MAX;
	int32_t x204 = INT32_MAX;
	int32_t t50 = 505338;

    t50 = (x201^((x202/x203)<=x204));

    if (t50 != 15795) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x206 = 0;
	static int32_t x207 = -1;
	int8_t x208 = INT8_MIN;
	int32_t t51 = 26;

    t51 = (x205^((x206/x207)<=x208));

    if (t51 != 95) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = 1043558881463LL;
	int64_t x210 = INT64_MIN;
	int8_t x212 = INT8_MAX;
	static int64_t t52 = 14736324207162LL;

    t52 = (x209^((x210/x211)<=x212));

    if (t52 != 1043558881462LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 1296067298383120LLU;
	volatile int64_t x214 = -1LL;
	int8_t x215 = INT8_MIN;
	volatile uint64_t t53 = 44865499320427856LLU;

    t53 = (x213^((x214/x215)<=x216));

    if (t53 != 1296067298383120LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x217 = 14476821LL;
	int32_t x220 = 43539165;

    t54 = (x217^((x218/x219)<=x220));

    if (t54 != 14476820LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = 33274532;
	int8_t x222 = INT8_MAX;
	uint8_t x223 = 115U;
	volatile int32_t x224 = INT32_MIN;
	volatile int32_t t55 = -1720066;

    t55 = (x221^((x222/x223)<=x224));

    if (t55 != 33274532) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x226 = -1;
	int32_t x227 = INT32_MIN;
	volatile int16_t x228 = INT16_MIN;
	int32_t t56 = 250305857;

    t56 = (x225^((x226/x227)<=x228));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -59901LL;
	volatile uint16_t x230 = 1010U;
	uint8_t x231 = UINT8_MAX;
	volatile int64_t t57 = -483254078146869LL;

    t57 = (x229^((x230/x231)<=x232));

    if (t57 != -59901LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x233 = 26333388LL;
	volatile int16_t x236 = INT16_MAX;
	int64_t t58 = 35112393LL;

    t58 = (x233^((x234/x235)<=x236));

    if (t58 != 26333389LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MIN;
	volatile int8_t x239 = 11;
	int32_t x240 = -1047905;
	int32_t t59 = INT32_MIN;

    t59 = (x237^((x238/x239)<=x240));

    if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 941445702897157LLU;
	int16_t x242 = -1;
	int64_t x243 = INT64_MAX;
	static int16_t x244 = 2200;
	uint64_t t60 = 182LLU;

    t60 = (x241^((x242/x243)<=x244));

    if (t60 != 941445702897156LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x245 = 1;
	int8_t x246 = 10;
	static int64_t x247 = INT64_MIN;
	volatile int32_t t61 = 0;

    t61 = (x245^((x246/x247)<=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint64_t x249 = 324849810738760LLU;
	volatile uint8_t x250 = 8U;
	int16_t x251 = INT16_MIN;

    t62 = (x249^((x250/x251)<=x252));

    if (t62 != 324849810738761LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	static int8_t x254 = INT8_MIN;
	uint32_t x255 = 92U;
	int64_t x256 = 459238852LL;

    t63 = (x253^((x254/x255)<=x256));

    if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -1;
	int64_t x258 = -3LL;
	static uint64_t x259 = 172863774LLU;
	int32_t x260 = -1;

    t64 = (x257^((x258/x259)<=x260));

    if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = INT8_MIN;
	volatile uint64_t x262 = 2863430536381855LLU;
	volatile int8_t x263 = -34;
	volatile int32_t x264 = INT32_MIN;

    t65 = (x261^((x262/x263)<=x264));

    if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x266 = INT8_MAX;
	int32_t x267 = -1707;
	static volatile int32_t t66 = -34;

    t66 = (x265^((x266/x267)<=x268));

    if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 4692255308186LLU;
	volatile int32_t x270 = INT32_MAX;
	int32_t x271 = INT32_MIN;
	uint64_t t67 = 2184517694859896LLU;

    t67 = (x269^((x270/x271)<=x272));

    if (t67 != 4692255308187LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x274 = UINT32_MAX;
	int32_t x275 = -1;
	volatile int8_t x276 = INT8_MIN;
	static volatile uint64_t t68 = 106636100392009LLU;

    t68 = (x273^((x274/x275)<=x276));

    if (t68 != 190385980045547115LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x278 = -1LL;
	uint16_t x279 = 485U;
	int8_t x280 = 1;
	uint32_t t69 = 293U;

    t69 = (x277^((x278/x279)<=x280));

    if (t69 != 60U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x281 = UINT8_MAX;
	static volatile int16_t x282 = 5853;
	volatile int8_t x283 = INT8_MAX;
	volatile int32_t t70 = -206224;

    t70 = (x281^((x282/x283)<=x284));

    if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;

    t71 = (x285^((x286/x287)<=x288));

    if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x291 = 47U;
	volatile int16_t x292 = 16039;
	static volatile int32_t t72 = -2916;

    t72 = (x289^((x290/x291)<=x292));

    if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = 7818416208738LL;
	int32_t x295 = 2647922;
	int32_t x296 = INT32_MIN;
	volatile int64_t t73 = 115524271379481561LL;

    t73 = (x293^((x294/x295)<=x296));

    if (t73 != 7818416208739LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x297 = INT32_MIN;
	static int8_t x299 = INT8_MIN;
	int32_t x300 = 518;
	int32_t t74 = -266735;

    t74 = (x297^((x298/x299)<=x300));

    if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = -1;
	static volatile uint32_t x302 = UINT32_MAX;
	int32_t x303 = INT32_MIN;
	volatile int32_t t75 = 555124747;

    t75 = (x301^((x302/x303)<=x304));

    if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x305 = -1;
	static int8_t x306 = -24;
	uint32_t x307 = 13242U;
	volatile uint8_t x308 = 0U;
	int32_t t76 = 35063171;

    t76 = (x305^((x306/x307)<=x308));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x309 = -62217;
	int64_t x310 = -1LL;
	uint64_t x311 = 3372419144210809LLU;
	uint32_t x312 = 28364897U;
	int32_t t77 = 1988174;

    t77 = (x309^((x310/x311)<=x312));

    if (t77 != -62218) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x317 = INT64_MAX;
	int32_t x318 = INT32_MAX;
	int64_t x319 = -1LL;
	static int32_t x320 = INT32_MIN;
	int64_t t78 = INT64_MAX;

    t78 = (x317^((x318/x319)<=x320));

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x321 = -540LL;
	static int8_t x322 = -1;
	int32_t x323 = -38;
	volatile int8_t x324 = INT8_MIN;
	volatile int64_t t79 = -694748633691112LL;

    t79 = (x321^((x322/x323)<=x324));

    if (t79 != -540LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x329 = 1781U;
	int8_t x330 = -1;
	static volatile int16_t x331 = 2;
	uint16_t x332 = 810U;
	static volatile uint32_t t80 = 15U;

    t80 = (x329^((x330/x331)<=x332));

    if (t80 != 1780U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	volatile int32_t x335 = INT32_MIN;
	int16_t x336 = INT16_MIN;
	int32_t t81 = 91172;

    t81 = (x333^((x334/x335)<=x336));

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x337 = -317191795;
	uint64_t x338 = 8559762724406708LLU;
	volatile int32_t x339 = -451058;
	uint8_t x340 = 1U;

    t82 = (x337^((x338/x339)<=x340));

    if (t82 != -317191796) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x341 = 143;
	int32_t t83 = -304406;

    t83 = (x341^((x342/x343)<=x344));

    if (t83 != 143) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x345 = INT16_MIN;
	int32_t x348 = -12;

    t84 = (x345^((x346/x347)<=x348));

    if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x349 = UINT32_MAX;
	int64_t x350 = 1299545714LL;
	volatile int64_t x351 = -1LL;
	uint16_t x352 = 57U;
	volatile uint32_t t85 = 1942783106U;

    t85 = (x349^((x350/x351)<=x352));

    if (t85 != 4294967294U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x353 = 123U;
	static volatile uint16_t x354 = 599U;
	uint16_t x356 = 1U;
	volatile int32_t t86 = 946362346;

    t86 = (x353^((x354/x355)<=x356));

    if (t86 != 122) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x357 = 2650LLU;
	static volatile int64_t x358 = -1LL;
	uint16_t x359 = 19975U;
	int16_t x360 = 4;

    t87 = (x357^((x358/x359)<=x360));

    if (t87 != 2651LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x364 = UINT16_MAX;
	int32_t t88 = 35854;

    t88 = (x361^((x362/x363)<=x364));

    if (t88 != 32766) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x365 = 0;
	volatile int16_t x366 = -1;
	static int64_t x367 = INT64_MAX;
	static int16_t x368 = -7888;
	int32_t t89 = -105115051;

    t89 = (x365^((x366/x367)<=x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x369 = INT16_MIN;
	int32_t x370 = -1;
	uint32_t x371 = UINT32_MAX;
	int16_t x372 = -1;
	int32_t t90 = 232;

    t90 = (x369^((x370/x371)<=x372));

    if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x374 = INT64_MIN;
	uint32_t x375 = UINT32_MAX;
	static int8_t x376 = 3;
	int32_t t91 = 14;

    t91 = (x373^((x374/x375)<=x376));

    if (t91 != 26) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x377 = -1LL;
	int8_t x378 = INT8_MIN;
	volatile uint32_t x379 = 180U;

    t92 = (x377^((x378/x379)<=x380));

    if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x381 = UINT64_MAX;
	int32_t x382 = INT32_MAX;
	static int8_t x383 = INT8_MIN;
	static int32_t x384 = 239747059;

    t93 = (x381^((x382/x383)<=x384));

    if (t93 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x385 = 1424U;
	volatile int16_t x387 = -1;
	static int64_t x388 = INT64_MIN;
	static volatile int32_t t94 = 2856;

    t94 = (x385^((x386/x387)<=x388));

    if (t94 != 1424) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x389 = UINT16_MAX;
	static int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MAX;
	volatile int32_t t95 = 1;

    t95 = (x389^((x390/x391)<=x392));

    if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x395 = INT64_MAX;
	static int8_t x396 = INT8_MAX;
	int64_t t96 = 682LL;

    t96 = (x393^((x394/x395)<=x396));

    if (t96 != -5397095288443LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x397 = 7660523LLU;
	volatile int32_t x398 = INT32_MIN;
	volatile int8_t x400 = 0;
	volatile uint64_t t97 = 252127370802020LLU;

    t97 = (x397^((x398/x399)<=x400));

    if (t97 != 7660523LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x401 = 26U;
	int8_t x403 = -6;
	uint64_t x404 = 2085334696260LLU;

    t98 = (x401^((x402/x403)<=x404));

    if (t98 != 27) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x405 = INT64_MIN;
	uint8_t x406 = 4U;
	int32_t x408 = 157229552;

    t99 = (x405^((x406/x407)<=x408));

    if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x409 = 1999774126988113301LLU;
	int64_t x410 = INT64_MAX;
	int8_t x411 = INT8_MIN;
	int16_t x412 = -1;
	uint64_t t100 = 200314478007026998LLU;

    t100 = (x409^((x410/x411)<=x412));

    if (t100 != 1999774126988113300LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x413 = UINT32_MAX;
	int64_t x414 = INT64_MAX;
	volatile uint64_t x415 = UINT64_MAX;
	uint16_t x416 = UINT16_MAX;
	uint32_t t101 = 337U;

    t101 = (x413^((x414/x415)<=x416));

    if (t101 != 4294967294U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x418 = 3LLU;
	volatile uint8_t x419 = UINT8_MAX;
	volatile int32_t x420 = INT32_MIN;

    t102 = (x417^((x418/x419)<=x420));

    if (t102 != 245040327LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x421 = INT32_MIN;
	uint16_t x422 = 1U;
	static int64_t x423 = INT64_MIN;

    t103 = (x421^((x422/x423)<=x424));

    if (t103 != INT32_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x427 = INT8_MIN;
	volatile uint64_t x428 = UINT64_MAX;
	int32_t t104 = -20002624;

    t104 = (x425^((x426/x427)<=x428));

    if (t104 != -7863) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x429 = INT8_MAX;
	volatile uint64_t x430 = 862542266296793313LLU;
	static int8_t x432 = INT8_MAX;
	volatile int32_t t105 = -41318559;

    t105 = (x429^((x430/x431)<=x432));

    if (t105 != 126) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x433 = -1;
	uint32_t x434 = 18U;
	volatile int16_t x436 = 419;
	int32_t t106 = 1003355;

    t106 = (x433^((x434/x435)<=x436));

    if (t106 != -2) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x437 = INT32_MIN;
	int64_t x439 = INT64_MIN;
	static volatile int32_t t107 = INT32_MIN;

    t107 = (x437^((x438/x439)<=x440));

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x441 = -1;
	int8_t x443 = 5;
	int32_t t108 = 0;

    t108 = (x441^((x442/x443)<=x444));

    if (t108 != -2) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x445 = INT16_MIN;
	int64_t x446 = INT64_MAX;
	int64_t x447 = INT64_MIN;
	int16_t x448 = INT16_MIN;
	static volatile int32_t t109 = -4;

    t109 = (x445^((x446/x447)<=x448));

    if (t109 != -32768) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x449 = UINT16_MAX;
	int64_t x450 = INT64_MIN;
	uint64_t x451 = UINT64_MAX;
	uint64_t x452 = 2LLU;
	volatile int32_t t110 = -50404239;

    t110 = (x449^((x450/x451)<=x452));

    if (t110 != 65534) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x454 = INT8_MAX;
	static int16_t x455 = -10;
	volatile uint16_t x456 = UINT16_MAX;
	volatile int32_t t111 = -480;

    t111 = (x453^((x454/x455)<=x456));

    if (t111 != 32766) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x458 = UINT32_MAX;
	int16_t x459 = -2123;
	int32_t x460 = INT32_MIN;
	int32_t t112 = -147;

    t112 = (x457^((x458/x459)<=x460));

    if (t112 != 65534) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x461 = UINT8_MAX;
	int64_t x462 = -1LL;
	volatile uint32_t x463 = UINT32_MAX;
	int32_t x464 = -1;
	volatile int32_t t113 = 1691195;

    t113 = (x461^((x462/x463)<=x464));

    if (t113 != 255) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x465 = 0;
	uint16_t x466 = 13087U;
	int64_t x467 = 94LL;
	volatile int32_t t114 = -6;

    t114 = (x465^((x466/x467)<=x468));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x469 = INT16_MAX;
	volatile uint8_t x471 = 51U;
	int8_t x472 = INT8_MIN;
	volatile int32_t t115 = -1414;

    t115 = (x469^((x470/x471)<=x472));

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x473 = -60;
	int64_t x474 = INT64_MIN;
	uint16_t x475 = 255U;
	int32_t x476 = -1;
	int32_t t116 = 503548078;

    t116 = (x473^((x474/x475)<=x476));

    if (t116 != -59) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x477 = -1;
	int16_t x478 = -6;
	int16_t x479 = INT16_MIN;
	static volatile int32_t t117 = -50296;

    t117 = (x477^((x478/x479)<=x480));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x481 = 0U;
	int64_t x482 = -4110023301855LL;
	static uint64_t x483 = UINT64_MAX;
	uint8_t x484 = UINT8_MAX;
	int32_t t118 = -649021;

    t118 = (x481^((x482/x483)<=x484));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x486 = -1;
	volatile int8_t x487 = -11;
	static uint16_t x488 = 20U;
	static int32_t t119 = -961881592;

    t119 = (x485^((x486/x487)<=x488));

    if (t119 != -32767) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x489 = INT8_MIN;
	uint16_t x490 = 78U;
	int32_t x492 = 179467219;
	int32_t t120 = -339063;

    t120 = (x489^((x490/x491)<=x492));

    if (t120 != -127) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x494 = -1;
	int64_t x495 = 39306226050505LL;
	int8_t x496 = INT8_MIN;
	static int32_t t121 = INT32_MIN;

    t121 = (x493^((x494/x495)<=x496));

    if (t121 != INT32_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x497 = 17453LLU;
	int8_t x498 = -1;
	int32_t x499 = -9084027;
	volatile int8_t x500 = 4;
	uint64_t t122 = 438430303784553LLU;

    t122 = (x497^((x498/x499)<=x500));

    if (t122 != 17452LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x501 = -1LL;
	static uint32_t x502 = 410347842U;
	int64_t x503 = INT64_MIN;
	static int16_t x504 = 163;
	int64_t t123 = 46749325971628536LL;

    t123 = (x501^((x502/x503)<=x504));

    if (t123 != -2LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x505 = -1;
	int8_t x506 = INT8_MIN;
	static volatile int64_t x507 = -17531140684904240LL;
	int8_t x508 = INT8_MAX;
	int32_t t124 = 32555;

    t124 = (x505^((x506/x507)<=x508));

    if (t124 != -2) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x509 = -203260712;
	uint32_t x511 = 724270U;
	int64_t x512 = INT64_MAX;
	int32_t t125 = 4920097;

    t125 = (x509^((x510/x511)<=x512));

    if (t125 != -203260711) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x513 = -1;
	uint8_t x514 = 11U;
	volatile int8_t x516 = INT8_MIN;
	int32_t t126 = 3051748;

    t126 = (x513^((x514/x515)<=x516));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x518 = -56;
	int32_t x519 = -1;
	int32_t x520 = -1;
	uint64_t t127 = 640595LLU;

    t127 = (x517^((x518/x519)<=x520));

    if (t127 != 6522LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x521 = UINT32_MAX;
	int8_t x522 = INT8_MIN;
	int64_t x523 = -1LL;
	int8_t x524 = INT8_MIN;
	uint32_t t128 = UINT32_MAX;

    t128 = (x521^((x522/x523)<=x524));

    if (t128 != UINT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x525 = 7474U;
	static int64_t x526 = -1LL;
	uint64_t x527 = 14293498LLU;
	int64_t x528 = -15567459228691LL;
	uint32_t t129 = 37U;

    t129 = (x525^((x526/x527)<=x528));

    if (t129 != 7475U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x530 = 47853866U;
	int8_t x531 = 1;
	int32_t x532 = INT32_MAX;
	int64_t t130 = 143798566389210790LL;

    t130 = (x529^((x530/x531)<=x532));

    if (t130 != 21365433970843LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x533 = -1;
	int32_t x534 = INT32_MIN;
	volatile uint32_t x535 = 1025U;
	int32_t x536 = INT32_MIN;
	volatile int32_t t131 = 1887;

    t131 = (x533^((x534/x535)<=x536));

    if (t131 != -2) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x537 = UINT8_MAX;
	int64_t x538 = 55711581141239755LL;
	volatile uint32_t x539 = 1490U;
	int64_t x540 = INT64_MAX;
	static volatile int32_t t132 = -4659;

    t132 = (x537^((x538/x539)<=x540));

    if (t132 != 254) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x541 = 123U;
	static volatile int16_t x543 = INT16_MIN;
	volatile int32_t t133 = 1607;

    t133 = (x541^((x542/x543)<=x544));

    if (t133 != 122) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x545 = 56808197430189LL;
	int64_t x547 = INT64_MAX;
	volatile int64_t t134 = 2293904168750940236LL;

    t134 = (x545^((x546/x547)<=x548));

    if (t134 != 56808197430189LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x549 = INT16_MIN;
	uint16_t x550 = 52U;
	int64_t x551 = INT64_MAX;
	int32_t t135 = -115;

    t135 = (x549^((x550/x551)<=x552));

    if (t135 != -32768) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x556 = INT16_MIN;
	volatile int64_t t136 = -23792901750268LL;

    t136 = (x553^((x554/x555)<=x556));

    if (t136 != -263542633LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x557 = 1U;
	uint8_t x559 = UINT8_MAX;
	static uint32_t x560 = 466433955U;
	volatile int32_t t137 = -381;

    t137 = (x557^((x558/x559)<=x560));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x561 = INT64_MIN;
	static int32_t x562 = INT32_MIN;
	int32_t x563 = 2431643;
	volatile int64_t x564 = INT64_MIN;
	int64_t t138 = INT64_MIN;

    t138 = (x561^((x562/x563)<=x564));

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x565 = 17U;
	int64_t x568 = INT64_MIN;
	int32_t t139 = 128;

    t139 = (x565^((x566/x567)<=x568));

    if (t139 != 17) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int32_t x569 = INT32_MAX;
	int8_t x570 = -1;
	int16_t x571 = -5;
	static int32_t x572 = 2409975;
	volatile int32_t t140 = 124306151;

    t140 = (x569^((x570/x571)<=x572));

    if (t140 != 2147483646) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x574 = 52972LL;
	int16_t x575 = INT16_MIN;
	static int32_t t141 = 99141692;

    t141 = (x573^((x574/x575)<=x576));

    if (t141 != 254) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x577 = INT32_MIN;
	int8_t x578 = 30;
	uint64_t x579 = 162872904206893992LLU;

    t142 = (x577^((x578/x579)<=x580));

    if (t142 != -2147483647) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x581 = 12609972540273336LLU;
	uint64_t x582 = 945909321LLU;
	uint8_t x583 = UINT8_MAX;
	uint64_t t143 = 317904014078522973LLU;

    t143 = (x581^((x582/x583)<=x584));

    if (t143 != 12609972540273337LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x585 = -1;
	int8_t x586 = INT8_MIN;
	volatile int64_t x588 = INT64_MAX;
	int32_t t144 = 246613698;

    t144 = (x585^((x586/x587)<=x588));

    if (t144 != -2) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x591 = 3759;
	volatile int32_t x592 = -1;
	int32_t t145 = 7800;

    t145 = (x589^((x590/x591)<=x592));

    if (t145 != -32768) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x593 = UINT16_MAX;
	uint8_t x594 = 13U;
	int8_t x596 = INT8_MIN;
	volatile int32_t t146 = -633879;

    t146 = (x593^((x594/x595)<=x596));

    if (t146 != 65535) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x597 = INT16_MAX;
	static int16_t x598 = INT16_MIN;
	uint32_t x599 = UINT32_MAX;
	int8_t x600 = INT8_MAX;
	static int32_t t147 = -50107211;

    t147 = (x597^((x598/x599)<=x600));

    if (t147 != 32766) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x602 = -1;
	volatile uint64_t x604 = UINT64_MAX;
	int64_t t148 = 1LL;

    t148 = (x601^((x602/x603)<=x604));

    if (t148 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x606 = INT8_MAX;
	uint8_t x607 = UINT8_MAX;
	uint64_t x608 = 3LLU;
	static volatile int32_t t149 = 244997578;

    t149 = (x605^((x606/x607)<=x608));

    if (t149 != 304839414) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x609 = INT32_MAX;
	volatile uint32_t x610 = UINT32_MAX;
	int32_t x611 = INT32_MAX;
	static volatile int64_t x612 = INT64_MIN;
	volatile int32_t t150 = INT32_MAX;

    t150 = (x609^((x610/x611)<=x612));

    if (t150 != INT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x613 = -28LL;
	int64_t x614 = INT64_MIN;
	int64_t x615 = INT64_MAX;
	uint64_t x616 = 9LLU;
	static volatile int64_t t151 = 27614739008469436LL;

    t151 = (x613^((x614/x615)<=x616));

    if (t151 != -28LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x617 = INT32_MAX;
	int32_t x618 = INT32_MIN;
	uint16_t x619 = UINT16_MAX;
	uint32_t x620 = UINT32_MAX;
	static int32_t t152 = -1021474152;

    t152 = (x617^((x618/x619)<=x620));

    if (t152 != 2147483646) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x621 = INT32_MIN;
	int8_t x622 = -11;
	uint64_t x624 = 19327183700LLU;
	volatile int32_t t153 = 1;

    t153 = (x621^((x622/x623)<=x624));

    if (t153 != -2147483647) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x626 = INT8_MIN;
	int64_t x627 = 27587140487333LL;
	int32_t x628 = 1;
	static volatile int32_t t154 = -27;

    t154 = (x625^((x626/x627)<=x628));

    if (t154 != 1472) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x629 = -69818090132779174LL;
	int64_t t155 = -107734190LL;

    t155 = (x629^((x630/x631)<=x632));

    if (t155 != -69818090132779173LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x633 = INT64_MIN;
	static uint64_t x635 = 2433LLU;
	volatile int64_t x636 = INT64_MIN;
	int64_t t156 = 38125767240997423LL;

    t156 = (x633^((x634/x635)<=x636));

    if (t156 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x637 = -1;
	uint16_t x638 = 2U;
	int64_t x639 = 5LL;
	uint64_t x640 = 116LLU;
	int32_t t157 = -1;

    t157 = (x637^((x638/x639)<=x640));

    if (t157 != -2) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x644 = UINT8_MAX;
	int64_t t158 = -3514649012547LL;

    t158 = (x641^((x642/x643)<=x644));

    if (t158 != -124588LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x645 = -1;
	uint64_t x646 = 13019908481940137LLU;
	uint32_t x648 = 614831U;

    t159 = (x645^((x646/x647)<=x648));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x652 = UINT16_MAX;
	volatile int32_t t160 = -1;

    t160 = (x649^((x650/x651)<=x652));

    if (t160 != -2) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x653 = 12133901LLU;
	int8_t x654 = -1;
	static int64_t x655 = -1LL;
	int16_t x656 = -147;
	static uint64_t t161 = 265806792100LLU;

    t161 = (x653^((x654/x655)<=x656));

    if (t161 != 12133901LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x657 = -4997;
	int8_t x659 = 29;
	int32_t x660 = -1;

    t162 = (x657^((x658/x659)<=x660));

    if (t162 != -4998) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x662 = -58;
	int16_t x663 = -2930;
	int32_t x664 = INT32_MAX;
	static volatile uint64_t t163 = 134LLU;

    t163 = (x661^((x662/x663)<=x664));

    if (t163 != 2908LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x665 = 3U;
	static int64_t x666 = INT64_MAX;
	volatile int32_t t164 = 29983;

    t164 = (x665^((x666/x667)<=x668));

    if (t164 != 3) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x669 = INT16_MIN;
	volatile uint8_t x670 = 61U;
	uint64_t x671 = UINT64_MAX;
	int32_t x672 = INT32_MIN;

    t165 = (x669^((x670/x671)<=x672));

    if (t165 != -32767) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x673 = 34;
	int64_t x675 = -2787405LL;
	volatile int64_t x676 = 79223LL;
	static int32_t t166 = 1;

    t166 = (x673^((x674/x675)<=x676));

    if (t166 != 35) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x677 = 219U;
	static uint8_t x678 = 1U;
	volatile int64_t x680 = -1LL;
	volatile int32_t t167 = -3;

    t167 = (x677^((x678/x679)<=x680));

    if (t167 != 219) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x681 = 9889093U;
	uint16_t x682 = 1605U;
	int16_t x683 = 80;
	static uint64_t x684 = UINT64_MAX;

    t168 = (x681^((x682/x683)<=x684));

    if (t168 != 9889092U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x685 = INT8_MIN;
	int8_t x687 = -1;
	uint16_t x688 = 25U;
	volatile int32_t t169 = 3192688;

    t169 = (x685^((x686/x687)<=x688));

    if (t169 != -127) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x689 = -1LL;
	static uint8_t x690 = 0U;
	int8_t x691 = 14;
	int32_t x692 = INT32_MIN;
	volatile int64_t t170 = -97435LL;

    t170 = (x689^((x690/x691)<=x692));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x693 = INT8_MIN;
	volatile int32_t x694 = -1;
	volatile int8_t x695 = INT8_MIN;
	static int16_t x696 = 4427;
	volatile int32_t t171 = -52722977;

    t171 = (x693^((x694/x695)<=x696));

    if (t171 != -127) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x697 = UINT32_MAX;
	uint64_t x698 = 145131787507LLU;
	volatile uint8_t x699 = 1U;
	int64_t x700 = INT64_MIN;
	static volatile uint32_t t172 = 77219U;

    t172 = (x697^((x698/x699)<=x700));

    if (t172 != 4294967294U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x701 = 6U;
	int16_t x704 = -1;
	int32_t t173 = 64;

    t173 = (x701^((x702/x703)<=x704));

    if (t173 != 7) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x705 = 1783572609LL;
	volatile uint16_t x706 = 21U;
	static volatile int64_t x707 = 1923325909LL;
	int8_t x708 = INT8_MIN;
	static int64_t t174 = -245836490845820519LL;

    t174 = (x705^((x706/x707)<=x708));

    if (t174 != 1783572609LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x709 = 94842U;
	int64_t x710 = INT64_MAX;
	uint64_t x711 = 2835163337976272LLU;
	volatile int64_t x712 = -1LL;
	volatile uint32_t t175 = 122176429U;

    t175 = (x709^((x710/x711)<=x712));

    if (t175 != 94843U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x713 = INT16_MIN;
	int64_t x715 = -5365299096755LL;
	int16_t x716 = INT16_MIN;
	int32_t t176 = -1426;

    t176 = (x713^((x714/x715)<=x716));

    if (t176 != -32768) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x717 = UINT16_MAX;
	int8_t x719 = 31;
	int8_t x720 = -1;
	volatile int32_t t177 = 578612;

    t177 = (x717^((x718/x719)<=x720));

    if (t177 != 65534) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x721 = -281124569372758LL;
	uint8_t x722 = 27U;
	int32_t x723 = -1;
	static int32_t x724 = -1;
	int64_t t178 = -471LL;

    t178 = (x721^((x722/x723)<=x724));

    if (t178 != -281124569372757LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int16_t x725 = -1;
	int32_t x727 = -1;
	uint32_t x728 = UINT32_MAX;

    t179 = (x725^((x726/x727)<=x728));

    if (t179 != -2) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x729 = 1;
	uint16_t x730 = UINT16_MAX;
	int16_t x731 = 3;
	uint16_t x732 = 1U;
	int32_t t180 = -4617;

    t180 = (x729^((x730/x731)<=x732));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x733 = 8488U;
	static uint16_t x734 = UINT16_MAX;
	int8_t x735 = -1;
	uint32_t t181 = 9490836U;

    t181 = (x733^((x734/x735)<=x736));

    if (t181 != 8489U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x737 = INT8_MAX;
	int16_t x739 = INT16_MIN;
	static volatile int64_t x740 = 734LL;
	volatile int32_t t182 = 15962;

    t182 = (x737^((x738/x739)<=x740));

    if (t182 != 126) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x741 = 0;
	int8_t x742 = -1;
	int16_t x743 = 4336;

    t183 = (x741^((x742/x743)<=x744));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t t184 = 87535341463LLU;

    t184 = (x745^((x746/x747)<=x748));

    if (t184 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x750 = -1;
	uint8_t x752 = UINT8_MAX;
	int32_t t185 = 10644750;

    t185 = (x749^((x750/x751)<=x752));

    if (t185 != 32766) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x753 = INT8_MAX;
	int16_t x754 = -173;
	static int16_t x756 = INT16_MIN;
	volatile int32_t t186 = -15029;

    t186 = (x753^((x754/x755)<=x756));

    if (t186 != 127) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x757 = INT16_MIN;
	int8_t x758 = INT8_MIN;
	int32_t x759 = INT32_MIN;
	static uint8_t x760 = 10U;
	volatile int32_t t187 = -257228;

    t187 = (x757^((x758/x759)<=x760));

    if (t187 != -32767) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x761 = INT8_MIN;
	volatile uint64_t x763 = 1001845966713LLU;

    t188 = (x761^((x762/x763)<=x764));

    if (t188 != -127) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x765 = INT32_MIN;
	static uint32_t x766 = UINT32_MAX;
	int16_t x767 = INT16_MIN;
	static uint8_t x768 = 59U;
	volatile int32_t t189 = -464534429;

    t189 = (x765^((x766/x767)<=x768));

    if (t189 != -2147483647) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x769 = INT8_MIN;
	int16_t x770 = -1;
	int16_t x771 = -1;
	static uint16_t x772 = 107U;
	int32_t t190 = -10841;

    t190 = (x769^((x770/x771)<=x772));

    if (t190 != -127) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x773 = INT64_MIN;
	volatile uint8_t x775 = 2U;
	uint32_t x776 = 40080U;
	int64_t t191 = 2183747976551343LL;

    t191 = (x773^((x774/x775)<=x776));

    if (t191 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x777 = 4312U;
	int32_t x778 = INT32_MIN;
	int64_t x779 = INT64_MIN;
	static int32_t t192 = -22167;

    t192 = (x777^((x778/x779)<=x780));

    if (t192 != 4312) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x781 = INT64_MIN;
	int64_t x782 = INT64_MIN;
	uint8_t x783 = 3U;
	static volatile int16_t x784 = INT16_MIN;

    t193 = (x781^((x782/x783)<=x784));

    if (t193 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x785 = 4;
	volatile int16_t x786 = 119;
	static uint16_t x787 = 2U;
	int32_t t194 = -2130;

    t194 = (x785^((x786/x787)<=x788));

    if (t194 != 4) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x789 = 49U;
	uint64_t x790 = 66501090893058LLU;
	static int32_t x791 = -4;

    t195 = (x789^((x790/x791)<=x792));

    if (t195 != 48) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x794 = UINT32_MAX;

    t196 = (x793^((x794/x795)<=x796));

    if (t196 != 12U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x797 = INT8_MAX;
	uint64_t x798 = 929LLU;
	int16_t x800 = -1;
	int32_t t197 = -59;

    t197 = (x797^((x798/x799)<=x800));

    if (t197 != 126) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x801 = INT16_MAX;
	int8_t x804 = 3;
	volatile int32_t t198 = 3967887;

    t198 = (x801^((x802/x803)<=x804));

    if (t198 != 32767) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint64_t x805 = 812053515LLU;
	int32_t x806 = INT32_MIN;
	volatile int16_t x807 = INT16_MAX;
	uint64_t t199 = 117350165712526261LLU;

    t199 = (x805^((x806/x807)<=x808));

    if (t199 != 812053514LLU) { NG(); } else { ; }
	
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

