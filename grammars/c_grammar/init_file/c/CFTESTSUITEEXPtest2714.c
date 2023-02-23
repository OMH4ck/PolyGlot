
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

static volatile int16_t x2 = -1;
static int64_t x3 = -521841729749331LL;
static int32_t x8 = 26648;
int32_t x12 = INT32_MIN;
uint64_t x23 = 3540915744700116029LLU;
volatile uint64_t t5 = 9LLU;
int16_t x33 = INT16_MIN;
int8_t x34 = 0;
int16_t x35 = -1;
uint16_t x37 = 14134U;
uint8_t x38 = UINT8_MAX;
static int8_t x40 = INT8_MIN;
int32_t x56 = -2144;
uint16_t x61 = 126U;
uint32_t x70 = 25332U;
uint8_t x71 = 10U;
static volatile int32_t t20 = 648;
static volatile int16_t x97 = 561;
uint16_t x100 = 2582U;
int32_t x104 = INT32_MIN;
int64_t x105 = INT64_MAX;
static volatile int64_t x124 = -1LL;
int64_t t31 = -364LL;
static int32_t x131 = INT32_MIN;
static int32_t x132 = -12938146;
int8_t x135 = INT8_MAX;
volatile uint64_t t33 = 266096434366002956LLU;
static int32_t x143 = -128696744;
int64_t t35 = -3633548931011416LL;
int32_t x152 = INT32_MIN;
volatile uint64_t x156 = 4598LLU;
int16_t x159 = 20;
int32_t x160 = 0;
static uint32_t x163 = 15840256U;
uint32_t t40 = 4091U;
static uint16_t x187 = 3755U;
int16_t x188 = INT16_MIN;
volatile int64_t t46 = 67848169265432172LL;
int64_t x195 = -585899LL;
volatile int64_t t48 = -176318627127155LL;
static int8_t x200 = -1;
uint8_t x201 = 1U;
volatile int8_t x203 = INT8_MIN;
volatile int32_t x206 = INT32_MIN;
int32_t x228 = INT32_MIN;
static volatile int32_t t56 = -7328410;
static int16_t x229 = INT16_MAX;
volatile int8_t x243 = INT8_MAX;
static int32_t x247 = 1;
volatile int32_t x268 = -2497;
uint64_t t67 = 44747LLU;
int64_t x274 = 11799415907316LL;
int64_t x275 = INT64_MIN;
uint16_t x280 = 29U;
volatile int8_t x283 = -8;
int32_t x287 = INT32_MAX;
static int32_t x288 = -52494245;
int64_t x294 = INT64_MIN;
int64_t x296 = INT64_MIN;
int64_t x297 = 2LL;
int64_t x298 = INT64_MAX;
uint32_t x300 = 8291010U;
static int32_t x305 = -2744380;
uint16_t x311 = 1U;
int32_t t77 = 21;
int64_t x317 = 42518171LL;
volatile int64_t t80 = -13LL;
int32_t x329 = INT32_MIN;
int64_t x338 = -180056153188681646LL;
uint32_t x344 = 5212U;
int64_t t86 = 559828000748LL;
volatile int64_t x351 = -1LL;
volatile int16_t x352 = INT16_MIN;
int32_t x355 = -1;
uint32_t x356 = 387860574U;
static int64_t t89 = -1729996LL;
uint16_t x364 = UINT16_MAX;
static int32_t x366 = INT32_MIN;
volatile int64_t x367 = -1LL;
int8_t x368 = 3;
volatile int64_t t92 = 1748LL;
static volatile int8_t x378 = INT8_MAX;
volatile int16_t x382 = 1596;
int64_t t95 = 1271702724608205LL;
int8_t x394 = INT8_MIN;
uint64_t x397 = UINT64_MAX;
volatile int32_t t100 = -12;
static volatile int64_t t101 = 879903599048895LL;
int8_t x415 = -12;
uint64_t x422 = 759932572830LLU;
uint8_t x424 = 96U;
int32_t x427 = -1;
volatile uint64_t t106 = 12972LLU;
volatile int64_t x430 = -1LL;
static volatile int16_t x453 = 7041;
uint16_t x460 = UINT16_MAX;
uint32_t x463 = 1803U;
int8_t x471 = INT8_MIN;
int16_t x473 = INT16_MIN;
static int64_t x479 = INT64_MIN;
static volatile int64_t t119 = 930256418LL;
uint64_t x481 = 17007833077099LLU;
volatile uint32_t x500 = UINT32_MAX;
volatile uint64_t x503 = UINT64_MAX;
int32_t x504 = -230868120;
int64_t x506 = INT64_MIN;
static int32_t x512 = INT32_MIN;
volatile int64_t t128 = 914592LL;
int8_t x518 = 1;
int64_t x520 = -1LL;
uint32_t x524 = 2U;
int32_t x529 = -1;
static int64_t t132 = -2086127LL;
int32_t t133 = 5645;
uint8_t x539 = 8U;
static uint32_t x545 = 89423455U;
static uint8_t x550 = 97U;
int32_t x561 = -1;
uint8_t x563 = 1U;
static volatile int64_t t141 = 7977620379548610LL;
int64_t x570 = INT64_MAX;
uint32_t x577 = 7U;
volatile int64_t x583 = -1LL;
int32_t x585 = -3;
int16_t x587 = 560;
volatile int64_t x589 = INT64_MIN;
uint16_t x593 = 3U;
uint64_t x594 = 258LLU;
int64_t x596 = 4003018LL;
uint64_t t148 = 109117653LLU;
volatile int16_t x597 = INT16_MIN;
uint32_t x601 = UINT32_MAX;
volatile int16_t x603 = -1453;
static int32_t x605 = -1;
uint64_t t151 = 1082987587958LLU;
int8_t x615 = -1;
volatile int64_t t155 = 35056800730LL;
int8_t x625 = INT8_MIN;
volatile int64_t t157 = -33923871227550521LL;
static uint8_t x637 = 3U;
static int8_t x639 = -1;
static uint16_t x641 = UINT16_MAX;
int32_t x654 = INT32_MIN;
static volatile uint64_t t163 = 17350666156827LLU;
int64_t x659 = INT64_MIN;
uint64_t t164 = 476673LLU;
volatile int8_t x663 = 1;
volatile uint32_t x669 = UINT32_MAX;
int64_t x670 = -1974947337460539LL;
int64_t t167 = -7LL;
int8_t x676 = INT8_MIN;
volatile int32_t x680 = INT32_MIN;
int16_t x687 = INT16_MIN;
int8_t x688 = -1;
int32_t x689 = INT32_MIN;
int16_t x708 = 12790;
volatile uint64_t t176 = 410140219409415583LLU;
static volatile int16_t x711 = 589;
int16_t x712 = INT16_MIN;
int64_t x716 = INT64_MIN;
int32_t x720 = 26;
static volatile int16_t x726 = INT16_MIN;
static volatile uint8_t x732 = UINT8_MAX;
uint16_t x734 = UINT16_MAX;
int16_t x736 = -1;
uint64_t x737 = 31554634769299LLU;
int64_t x740 = -35371LL;
volatile int32_t x741 = -35550;
int64_t x742 = -40LL;
volatile int64_t x744 = -3197LL;
volatile int64_t t186 = 493459465LL;
static uint16_t x749 = UINT16_MAX;
static int64_t x754 = INT64_MIN;
static int8_t x762 = -10;
int64_t t190 = -1046416968LL;
static uint8_t x768 = UINT8_MAX;
volatile int64_t t192 = -114752488LL;
uint64_t x790 = 10357LLU;
uint16_t x791 = 1U;
int64_t x796 = -1LL;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	uint64_t x4 = UINT64_MAX;
	static volatile uint64_t t0 = 230845358LLU;

    t0 = (x1&((x2^x3)&x4));

    if (t0 != 82LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	static volatile int64_t x6 = -3494375011355397230LL;
	static int8_t x7 = INT8_MIN;
	int64_t t1 = 8575LL;

    t1 = (x5&((x6^x7)&x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 55;
	volatile int16_t x10 = 46;
	int64_t x11 = INT64_MIN;
	volatile int64_t t2 = 49345451704550LL;

    t2 = (x9&((x10^x11)&x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -209809677605107790LL;
	static int16_t x14 = INT16_MIN;
	static volatile uint16_t x15 = UINT16_MAX;
	int16_t x16 = -315;
	int64_t t3 = 606559184504079LL;

    t3 = (x13&((x14^x15)&x16));

    if (t3 != -209809677605140864LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = INT16_MIN;
	int32_t x18 = -387823005;
	static int64_t x19 = -220008319LL;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = 19351LLU;

    t4 = (x17&((x18^x19)&x20));

    if (t4 != 436240384LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	int16_t x22 = 1;
	int32_t x24 = 3440258;

    t5 = (x21&((x22^x23)&x24));

    if (t5 != 11264LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 411100LLU;
	int64_t x26 = INT64_MIN;
	int16_t x27 = INT16_MIN;
	volatile int64_t x28 = 10240579LL;
	uint64_t t6 = 106422657LLU;

    t6 = (x25&((x26^x27)&x28));

    if (t6 != 262144LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	volatile uint32_t x30 = 116711U;
	static int32_t x31 = INT32_MIN;
	int32_t x32 = 23113084;
	static uint32_t t7 = 4338U;

    t7 = (x29&((x30^x31)&x32));

    if (t7 != 34048U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x36 = INT32_MAX;
	volatile int32_t t8 = 3468062;

    t8 = (x33&((x34^x35)&x36));

    if (t8 != 2147450880) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x39 = 484;
	volatile int32_t t9 = 2;

    t9 = (x37&((x38^x39)&x40));

    if (t9 != 256) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = INT64_MAX;
	volatile int16_t x42 = INT16_MAX;
	volatile uint16_t x43 = 0U;
	int32_t x44 = -8368;
	int64_t t10 = 10353850LL;

    t10 = (x41&((x42^x43)&x44));

    if (t10 != 24400LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x45 = 7U;
	volatile int32_t x46 = INT32_MAX;
	static int8_t x47 = -1;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t11 = 11133639595544LLU;

    t11 = (x45&((x46^x47)&x48));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	static volatile uint32_t x50 = 16048142U;
	int8_t x51 = -1;
	int8_t x52 = INT8_MIN;
	static volatile uint32_t t12 = 52610U;

    t12 = (x49&((x50^x51)&x52));

    if (t12 != 2147483648U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MIN;
	int8_t x55 = 7;
	volatile int64_t t13 = INT64_MIN;

    t13 = (x53&((x54^x55)&x56));

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x57 = 6U;
	uint64_t x58 = UINT64_MAX;
	uint16_t x59 = UINT16_MAX;
	int8_t x60 = INT8_MIN;
	volatile uint64_t t14 = 451768LLU;

    t14 = (x57&((x58^x59)&x60));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x62 = 2U;
	int16_t x63 = -12002;
	static volatile uint8_t x64 = 8U;
	volatile int32_t t15 = 3622422;

    t15 = (x61&((x62^x63)&x64));

    if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MAX;
	static uint16_t x66 = UINT16_MAX;
	int16_t x67 = -199;
	uint64_t x68 = UINT64_MAX;
	static volatile uint64_t t16 = 256761304914LLU;

    t16 = (x65&((x66^x67)&x68));

    if (t16 != 198LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x69 = 42812258LLU;
	int16_t x72 = -1;
	uint64_t t17 = 1959155649608LLU;

    t17 = (x69&((x70^x71)&x72));

    if (t17 != 16994LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = -1;
	static uint32_t x74 = 0U;
	int8_t x75 = INT8_MIN;
	int32_t x76 = INT32_MAX;
	volatile uint32_t t18 = 2095923493U;

    t18 = (x73&((x74^x75)&x76));

    if (t18 != 2147483520U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MAX;
	volatile int16_t x78 = -1;
	int64_t x79 = 67745LL;
	uint32_t x80 = 750U;
	int64_t t19 = -16859420824LL;

    t19 = (x77&((x78^x79)&x80));

    if (t19 != 78LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x81 = UINT16_MAX;
	int32_t x82 = 68082;
	int16_t x83 = INT16_MAX;
	int8_t x84 = -39;

    t20 = (x81&((x82^x83)&x84));

    if (t20 != 30217) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	static volatile int32_t x86 = INT32_MIN;
	uint16_t x87 = UINT16_MAX;
	volatile uint16_t x88 = 0U;
	volatile int32_t t21 = 767;

    t21 = (x85&((x86^x87)&x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x89 = 1U;
	int8_t x90 = 6;
	static volatile int16_t x91 = -35;
	int64_t x92 = INT64_MIN;
	static int64_t t22 = -69963LL;

    t22 = (x89&((x90^x91)&x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x93 = 22U;
	int8_t x94 = INT8_MIN;
	static volatile int16_t x95 = INT16_MIN;
	static int16_t x96 = 2885;
	int32_t t23 = 3660026;

    t23 = (x93&((x94^x95)&x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = INT16_MIN;
	static volatile int8_t x99 = -1;
	volatile int32_t t24 = -13;

    t24 = (x97&((x98^x99)&x100));

    if (t24 != 528) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x101 = INT32_MAX;
	int32_t x102 = 6;
	int16_t x103 = -1;
	volatile int32_t t25 = 42776;

    t25 = (x101&((x102^x103)&x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x106 = INT64_MIN;
	int16_t x107 = INT16_MIN;
	static int8_t x108 = 0;
	volatile int64_t t26 = 1314926733LL;

    t26 = (x105&((x106^x107)&x108));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 12031498U;
	volatile int8_t x110 = -1;
	int8_t x111 = INT8_MIN;
	int32_t x112 = INT32_MIN;
	volatile uint32_t t27 = 3U;

    t27 = (x109&((x110^x111)&x112));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = 0;
	int8_t x114 = INT8_MAX;
	static volatile int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MIN;
	static int32_t t28 = 198362319;

    t28 = (x113&((x114^x115)&x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint16_t x117 = 2910U;
	static int64_t x118 = INT64_MIN;
	static int32_t x119 = -1;
	static int64_t x120 = INT64_MAX;
	int64_t t29 = 15109473LL;

    t29 = (x117&((x118^x119)&x120));

    if (t29 != 2910LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	volatile int16_t x122 = INT16_MIN;
	int32_t x123 = 2889859;
	volatile int64_t t30 = -7236LL;

    t30 = (x121&((x122^x123)&x124));

    if (t30 != 4292057219LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MAX;
	int32_t x126 = INT32_MIN;
	int8_t x127 = -14;
	int8_t x128 = INT8_MAX;

    t31 = (x125&((x126^x127)&x128));

    if (t31 != 114LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	int8_t x130 = -1;
	volatile int32_t t32 = -2314963;

    t32 = (x129&((x130^x131)&x132));

    if (t32 != 94) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 63U;
	int64_t x134 = INT64_MIN;
	uint64_t x136 = UINT64_MAX;

    t33 = (x133&((x134^x135)&x136));

    if (t33 != 63LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MAX;
	int32_t x138 = INT32_MAX;
	uint32_t x139 = 139878053U;
	int16_t x140 = -1;
	static volatile int64_t t34 = -678856829LL;

    t34 = (x137&((x138^x139)&x140));

    if (t34 != 2007605594LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 802U;
	int16_t x142 = INT16_MAX;
	int64_t x144 = 80163964951612009LL;

    t35 = (x141&((x142^x143)&x144));

    if (t35 != 32LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = UINT32_MAX;
	volatile uint8_t x146 = 110U;
	volatile uint16_t x147 = UINT16_MAX;
	uint8_t x148 = UINT8_MAX;
	volatile uint32_t t36 = 83348U;

    t36 = (x145&((x146^x147)&x148));

    if (t36 != 145U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	uint8_t x150 = 3U;
	volatile int16_t x151 = INT16_MIN;
	volatile int32_t t37 = INT32_MIN;

    t37 = (x149&((x150^x151)&x152));

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint8_t x153 = 4U;
	static int64_t x154 = -122LL;
	volatile int64_t x155 = INT64_MAX;
	uint64_t t38 = 2049999390849102025LLU;

    t38 = (x153&((x154^x155)&x156));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int64_t x157 = INT64_MIN;
	static uint64_t x158 = 351947559774792LLU;
	volatile uint64_t t39 = 14225291326LLU;

    t39 = (x157&((x158^x159)&x160));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x161 = -1540;
	int32_t x162 = -1;
	int8_t x164 = INT8_MIN;

    t40 = (x161&((x162^x163)&x164));

    if (t40 != 4279126400U) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int32_t x165 = INT32_MIN;
	int32_t x166 = -1;
	int64_t x167 = 368LL;
	int8_t x168 = INT8_MIN;
	int64_t t41 = -824LL;

    t41 = (x165&((x166^x167)&x168));

    if (t41 != -2147483648LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x169 = 0U;
	volatile int64_t x170 = INT64_MIN;
	volatile uint8_t x171 = 2U;
	static int8_t x172 = INT8_MIN;
	volatile int64_t t42 = -53975086917LL;

    t42 = (x169&((x170^x171)&x172));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x173 = INT64_MIN;
	int32_t x174 = -916211481;
	static int8_t x175 = INT8_MAX;
	static int16_t x176 = 1781;
	static int64_t t43 = 5538832392LL;

    t43 = (x173&((x174^x175)&x176));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	uint32_t x178 = UINT32_MAX;
	uint16_t x179 = 0U;
	int32_t x180 = INT32_MIN;
	static volatile uint32_t t44 = 138209481U;

    t44 = (x177&((x178^x179)&x180));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MIN;
	uint64_t x182 = 46027389LLU;
	volatile int8_t x183 = -4;
	int16_t x184 = INT16_MIN;
	static uint64_t t45 = 56494LLU;

    t45 = (x181&((x182^x183)&x184));

    if (t45 != 18446744073663512576LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = -1;
	int64_t x186 = -1LL;

    t46 = (x185&((x186^x187)&x188));

    if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x189 = UINT16_MAX;
	static uint32_t x190 = UINT32_MAX;
	static int32_t x191 = INT32_MIN;
	uint64_t x192 = 8276621213LLU;
	uint64_t t47 = 3453LLU;

    t47 = (x189&((x190^x191)&x192));

    if (t47 != 14237LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MAX;
	static uint16_t x194 = 15739U;
	uint32_t x196 = UINT32_MAX;

    t48 = (x193&((x194^x195)&x196));

    if (t48 != 4294390318LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -1;
	int8_t x198 = INT8_MIN;
	static int8_t x199 = 0;
	int32_t t49 = 0;

    t49 = (x197&((x198^x199)&x200));

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x202 = INT64_MAX;
	volatile int64_t x204 = INT64_MIN;
	int64_t t50 = -944LL;

    t50 = (x201&((x202^x203)&x204));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -1;
	int32_t x207 = 0;
	volatile int8_t x208 = -1;
	int32_t t51 = INT32_MIN;

    t51 = (x205&((x206^x207)&x208));

    if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	volatile uint32_t x210 = UINT32_MAX;
	uint8_t x211 = 113U;
	int32_t x212 = INT32_MIN;
	static int64_t t52 = 83284067715452624LL;

    t52 = (x209&((x210^x211)&x212));

    if (t52 != 2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	volatile uint64_t x214 = 15589638LLU;
	uint16_t x215 = 194U;
	uint64_t x216 = UINT64_MAX;
	static volatile uint64_t t53 = 15983815788305761LLU;

    t53 = (x213&((x214^x215)&x216));

    if (t53 != 15589760LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -1LL;
	static volatile int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	int16_t x220 = 901;
	int64_t t54 = 3599259729356LL;

    t54 = (x217&((x218^x219)&x220));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	int32_t x222 = -1;
	volatile int8_t x223 = -1;
	static uint32_t x224 = 124627231U;
	volatile uint32_t t55 = 217U;

    t55 = (x221&((x222^x223)&x224));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = INT32_MIN;
	int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MIN;

    t56 = (x225&((x226^x227)&x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x230 = INT16_MIN;
	uint16_t x231 = 115U;
	int8_t x232 = -1;
	int32_t t57 = -319;

    t57 = (x229&((x230^x231)&x232));

    if (t57 != 115) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -1;
	volatile int8_t x234 = INT8_MIN;
	volatile int8_t x235 = INT8_MAX;
	int16_t x236 = INT16_MIN;
	int32_t t58 = 493273922;

    t58 = (x233&((x234^x235)&x236));

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	int8_t x238 = INT8_MAX;
	static volatile uint16_t x239 = UINT16_MAX;
	volatile int64_t x240 = -1LL;
	int64_t t59 = -413LL;

    t59 = (x237&((x238^x239)&x240));

    if (t59 != 32768LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = -1;
	static int8_t x242 = 7;
	uint64_t x244 = 1056145372LLU;
	volatile uint64_t t60 = 474701563430LLU;

    t60 = (x241&((x242^x243)&x244));

    if (t60 != 88LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 1U;
	int32_t x246 = INT32_MIN;
	volatile uint32_t x248 = 127U;
	static uint32_t t61 = 2U;

    t61 = (x245&((x246^x247)&x248));

    if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 43U;
	int16_t x250 = INT16_MAX;
	int8_t x251 = 0;
	volatile uint32_t x252 = UINT32_MAX;
	uint32_t t62 = 5731U;

    t62 = (x249&((x250^x251)&x252));

    if (t62 != 43U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 10029U;
	uint16_t x254 = 24079U;
	volatile uint16_t x255 = 159U;
	static volatile int64_t x256 = INT64_MIN;
	int64_t t63 = -2528704169749LL;

    t63 = (x253&((x254^x255)&x256));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x257 = UINT16_MAX;
	volatile int16_t x258 = INT16_MIN;
	int8_t x259 = -4;
	int8_t x260 = INT8_MIN;
	volatile int32_t t64 = 30113;

    t64 = (x257&((x258^x259)&x260));

    if (t64 != 32640) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	uint16_t x262 = UINT16_MAX;
	int8_t x263 = INT8_MIN;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t65 = 156217;

    t65 = (x261&((x262^x263)&x264));

    if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = 5;
	int64_t x266 = -2LL;
	static int32_t x267 = 12;
	volatile int64_t t66 = 684134101232LL;

    t66 = (x265&((x266^x267)&x268));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = 716;
	volatile int32_t x270 = INT32_MAX;
	int16_t x271 = INT16_MAX;
	uint64_t x272 = 948LLU;

    t67 = (x269&((x270^x271)&x272));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MAX;
	uint16_t x276 = 51U;
	int64_t t68 = 361547267488855LL;

    t68 = (x273&((x274^x275)&x276));

    if (t68 != 48LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -73;
	int16_t x278 = INT16_MIN;
	int16_t x279 = -1;
	volatile int32_t t69 = -226723183;

    t69 = (x277&((x278^x279)&x280));

    if (t69 != 21) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	int64_t x282 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	volatile int64_t t70 = -41LL;

    t70 = (x281&((x282^x283)&x284));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -1;
	int32_t x286 = INT32_MIN;
	volatile int32_t t71 = 20354;

    t71 = (x285&((x286^x287)&x288));

    if (t71 != -52494245) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MIN;
	static int16_t x290 = INT16_MAX;
	int8_t x291 = INT8_MIN;
	int16_t x292 = 378;
	int32_t t72 = 72;

    t72 = (x289&((x290^x291)&x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x293 = 4;
	volatile uint64_t x295 = UINT64_MAX;
	volatile uint64_t t73 = 4259970686031572LLU;

    t73 = (x293&((x294^x295)&x296));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x299 = UINT32_MAX;
	static volatile int64_t t74 = 104999800706839529LL;

    t74 = (x297&((x298^x299)&x300));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MAX;
	int32_t x303 = -249337;
	uint16_t x304 = 62U;
	int32_t t75 = 4;

    t75 = (x301&((x302^x303)&x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x306 = UINT16_MAX;
	static int8_t x307 = -1;
	int32_t x308 = -281;
	volatile int32_t t76 = -3;

    t76 = (x305&((x306^x307)&x308));

    if (t76 != -2752512) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MAX;
	volatile uint16_t x310 = UINT16_MAX;
	int16_t x312 = 427;

    t77 = (x309&((x310^x311)&x312));

    if (t77 != 426) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x313 = UINT64_MAX;
	int16_t x314 = INT16_MIN;
	static volatile int16_t x315 = -1397;
	uint16_t x316 = 7534U;
	volatile uint64_t t78 = 10822390422390LLU;

    t78 = (x313&((x314^x315)&x316));

    if (t78 != 6154LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x318 = INT64_MIN;
	int8_t x319 = INT8_MIN;
	int64_t x320 = -1022214LL;
	int64_t t79 = 4123355482LL;

    t79 = (x317&((x318^x319)&x320));

    if (t79 != 41961088LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x321 = UINT16_MAX;
	volatile int16_t x322 = INT16_MIN;
	static int8_t x323 = -1;
	int64_t x324 = INT64_MAX;

    t80 = (x321&((x322^x323)&x324));

    if (t80 != 32767LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x325 = 16512788046LLU;
	int8_t x326 = INT8_MIN;
	int32_t x327 = 13103380;
	volatile int32_t x328 = 177490554;
	volatile uint64_t t81 = 98298543031LLU;

    t81 = (x325&((x326^x327)&x328));

    if (t81 != 135266816LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = INT64_MIN;
	int64_t x331 = INT64_MIN;
	static uint64_t x332 = 59739LLU;
	volatile uint64_t t82 = 20103071853802491LLU;

    t82 = (x329&((x330^x331)&x332));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = -1;
	volatile int64_t x334 = INT64_MIN;
	int16_t x335 = INT16_MAX;
	static int16_t x336 = 1115;
	static int64_t t83 = 206005LL;

    t83 = (x333&((x334^x335)&x336));

    if (t83 != 1115LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 282189953204LLU;
	static int32_t x339 = -46726542;
	volatile uint8_t x340 = 1U;
	uint64_t t84 = 6485606LLU;

    t84 = (x337&((x338^x339)&x340));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -1;
	static volatile int8_t x342 = 3;
	volatile int8_t x343 = -1;
	static volatile uint32_t t85 = 221U;

    t85 = (x341&((x342^x343)&x344));

    if (t85 != 5212U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MAX;
	int64_t x346 = -1LL;
	static uint16_t x347 = 1U;
	static volatile int16_t x348 = -1;

    t86 = (x345&((x346^x347)&x348));

    if (t86 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1;
	uint32_t x350 = 49U;
	int64_t t87 = -136796923849LL;

    t87 = (x349&((x350^x351)&x352));

    if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = UINT32_MAX;
	int32_t x354 = 1429;
	volatile uint32_t t88 = 9312813U;

    t88 = (x353&((x354^x355)&x356));

    if (t88 != 387860554U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = INT16_MAX;
	int64_t x358 = -145802LL;
	volatile uint32_t x359 = UINT32_MAX;
	int32_t x360 = INT32_MIN;

    t89 = (x357&((x358^x359)&x360));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = 52833;
	int16_t x362 = -6897;
	int8_t x363 = INT8_MAX;
	int32_t t90 = -50628326;

    t90 = (x361&((x362^x363)&x364));

    if (t90 != 50272) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -318704829749302397LL;
	static int64_t t91 = -2LL;

    t91 = (x365&((x366^x367)&x368));

    if (t91 != 3LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x369 = -9399831168LL;
	uint32_t x370 = 0U;
	int16_t x371 = 852;
	volatile int8_t x372 = 0;

    t92 = (x369&((x370^x371)&x372));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -446310794141950860LL;
	int16_t x374 = INT16_MAX;
	int16_t x375 = -1;
	int16_t x376 = INT16_MIN;
	static volatile int64_t t93 = -1260703LL;

    t93 = (x373&((x374^x375)&x376));

    if (t93 != -446310794141958144LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = -1;
	volatile uint16_t x379 = 16U;
	int8_t x380 = 0;
	int32_t t94 = -3589516;

    t94 = (x377&((x378^x379)&x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = 2131735610187LL;
	volatile int32_t x383 = INT32_MIN;
	volatile int32_t x384 = INT32_MIN;

    t95 = (x381&((x382^x383)&x384));

    if (t95 != 2130303778816LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 61749460U;
	volatile uint64_t x386 = 8649427593967LLU;
	int64_t x387 = INT64_MIN;
	volatile int16_t x388 = -1;
	volatile uint64_t t96 = 82096903010702LLU;

    t96 = (x385&((x386^x387)&x388));

    if (t96 != 34482372LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x389 = 7;
	int16_t x390 = INT16_MIN;
	volatile uint8_t x391 = 0U;
	int32_t x392 = INT32_MAX;
	int32_t t97 = -1;

    t97 = (x389&((x390^x391)&x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -90915;
	volatile int32_t x395 = 2;
	static int32_t x396 = 78080526;
	volatile int32_t t98 = 15101546;

    t98 = (x393&((x394^x395)&x396));

    if (t98 != 77989888) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x398 = UINT32_MAX;
	static int16_t x399 = -1;
	int8_t x400 = 56;
	volatile uint64_t t99 = 35012795564LLU;

    t99 = (x397&((x398^x399)&x400));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = -1;
	static volatile int16_t x402 = 3;
	uint8_t x403 = 126U;
	volatile int16_t x404 = INT16_MIN;

    t100 = (x401&((x402^x403)&x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 1U;
	uint16_t x406 = UINT16_MAX;
	int32_t x407 = INT32_MIN;
	static int64_t x408 = -1LL;

    t101 = (x405&((x406^x407)&x408));

    if (t101 != 1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -1;
	volatile int32_t x410 = INT32_MIN;
	static volatile uint16_t x411 = 6778U;
	volatile int8_t x412 = -1;
	volatile int32_t t102 = 92116;

    t102 = (x409&((x410^x411)&x412));

    if (t102 != -2147476870) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x413 = -17984087448188LL;
	int32_t x414 = INT32_MAX;
	volatile int32_t x416 = INT32_MIN;
	int64_t t103 = 44922077762LL;

    t103 = (x413&((x414^x415)&x416));

    if (t103 != -17985175552000LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MAX;
	static volatile int8_t x418 = INT8_MAX;
	int16_t x419 = INT16_MIN;
	volatile int8_t x420 = INT8_MIN;
	static volatile int64_t t104 = 1066827222458350427LL;

    t104 = (x417&((x418^x419)&x420));

    if (t104 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x421 = UINT32_MAX;
	uint64_t x423 = 124656656598504LLU;
	volatile uint64_t t105 = 409LLU;

    t105 = (x421&((x422^x423)&x424));

    if (t105 != 96LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -291981640;
	uint64_t x426 = UINT64_MAX;
	static uint32_t x428 = 2467679U;

    t106 = (x425&((x426^x427)&x428));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -1LL;
	int8_t x431 = 6;
	uint16_t x432 = 163U;
	int64_t t107 = -6LL;

    t107 = (x429&((x430^x431)&x432));

    if (t107 != 161LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = UINT8_MAX;
	uint16_t x434 = 7U;
	volatile uint32_t x435 = UINT32_MAX;
	int16_t x436 = INT16_MAX;
	uint32_t t108 = 253U;

    t108 = (x433&((x434^x435)&x436));

    if (t108 != 248U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	static int64_t x438 = 468434339693609803LL;
	int64_t x439 = INT64_MIN;
	static uint16_t x440 = 629U;
	volatile int64_t t109 = -23462669998753LL;

    t109 = (x437&((x438^x439)&x440));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = 35918738775292LL;
	int16_t x442 = INT16_MAX;
	uint32_t x443 = 97U;
	int64_t x444 = INT64_MIN;
	static volatile int64_t t110 = -31LL;

    t110 = (x441&((x442^x443)&x444));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x445 = 24U;
	int64_t x446 = INT64_MIN;
	static uint16_t x447 = 5U;
	int32_t x448 = INT32_MIN;
	volatile int64_t t111 = -214717LL;

    t111 = (x445&((x446^x447)&x448));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = UINT64_MAX;
	int32_t x450 = INT32_MIN;
	int64_t x451 = 6LL;
	int8_t x452 = -1;
	volatile uint64_t t112 = 4LLU;

    t112 = (x449&((x450^x451)&x452));

    if (t112 != 18446744071562067974LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x454 = INT32_MAX;
	int64_t x455 = INT64_MIN;
	int8_t x456 = -1;
	int64_t t113 = -326503LL;

    t113 = (x453&((x454^x455)&x456));

    if (t113 != 7041LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x457 = INT16_MIN;
	static int32_t x458 = INT32_MAX;
	static int16_t x459 = INT16_MIN;
	int32_t t114 = 289073;

    t114 = (x457&((x458^x459)&x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MAX;
	uint32_t x462 = UINT32_MAX;
	uint8_t x464 = 0U;
	volatile uint32_t t115 = 8299592U;

    t115 = (x461&((x462^x463)&x464));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	uint16_t x466 = UINT16_MAX;
	static uint64_t x467 = 15360673001LLU;
	volatile int8_t x468 = 0;
	static uint64_t t116 = 152LLU;

    t116 = (x465&((x466^x467)&x468));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	int64_t x470 = INT64_MAX;
	int32_t x472 = -1;
	int64_t t117 = INT64_MIN;

    t117 = (x469&((x470^x471)&x472));

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x474 = 409LLU;
	int16_t x475 = -1;
	uint8_t x476 = 43U;
	uint64_t t118 = 228795461618607050LLU;

    t118 = (x473&((x474^x475)&x476));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	uint32_t x478 = 82157415U;
	uint16_t x480 = 931U;

    t119 = (x477&((x478^x479)&x480));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = -1;
	uint8_t x483 = 1U;
	uint64_t x484 = 140739LLU;
	uint64_t t120 = 48695LLU;

    t120 = (x481&((x482^x483)&x484));

    if (t120 != 1346LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	uint32_t x486 = 493991566U;
	int8_t x487 = INT8_MAX;
	uint8_t x488 = UINT8_MAX;
	volatile int64_t t121 = 2205594737518283859LL;

    t121 = (x485&((x486^x487)&x488));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x489 = -1LL;
	int16_t x490 = INT16_MIN;
	int64_t x491 = -79083308689LL;
	uint16_t x492 = 5178U;
	volatile int64_t t122 = 4LL;

    t122 = (x489&((x490^x491)&x492));

    if (t122 != 4138LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x493 = INT16_MIN;
	uint32_t x494 = 753945U;
	uint16_t x495 = UINT16_MAX;
	int64_t x496 = INT64_MIN;
	static int64_t t123 = 22770622464607LL;

    t123 = (x493&((x494^x495)&x496));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x497 = UINT32_MAX;
	uint8_t x498 = UINT8_MAX;
	int16_t x499 = -6;
	uint32_t t124 = 1U;

    t124 = (x497&((x498^x499)&x500));

    if (t124 != 4294967045U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = -1;
	int64_t x502 = INT64_MIN;
	uint64_t t125 = 8191160783780314LLU;

    t125 = (x501&((x502^x503)&x504));

    if (t125 != 9223372036623907688LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x505 = INT64_MIN;
	int64_t x507 = INT64_MAX;
	uint32_t x508 = 68454912U;
	int64_t t126 = 1100172507991019LL;

    t126 = (x505&((x506^x507)&x508));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -84;
	int16_t x510 = 1;
	static volatile int32_t x511 = INT32_MAX;
	volatile int32_t t127 = 11079652;

    t127 = (x509&((x510^x511)&x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = UINT32_MAX;
	static int64_t x514 = INT64_MIN;
	uint32_t x515 = 8U;
	int8_t x516 = 0;

    t128 = (x513&((x514^x515)&x516));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x517 = INT16_MIN;
	int64_t x519 = INT64_MIN;
	int64_t t129 = INT64_MIN;

    t129 = (x517&((x518^x519)&x520));

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MAX;
	int16_t x522 = INT16_MIN;
	int8_t x523 = INT8_MIN;
	volatile uint32_t t130 = 14U;

    t130 = (x521&((x522^x523)&x524));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -1LL;
	static int8_t x526 = INT8_MIN;
	int8_t x527 = INT8_MIN;
	static uint64_t x528 = UINT64_MAX;
	static uint64_t t131 = 1101819783121178LLU;

    t131 = (x525&((x526^x527)&x528));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x530 = INT8_MIN;
	volatile int16_t x531 = -839;
	int64_t x532 = INT64_MIN;

    t132 = (x529&((x530^x531)&x532));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	static uint8_t x534 = 27U;
	uint8_t x535 = 3U;
	static int16_t x536 = 5252;

    t133 = (x533&((x534^x535)&x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = UINT64_MAX;
	uint64_t x538 = UINT64_MAX;
	uint64_t x540 = 188885459LLU;
	volatile uint64_t t134 = 16LLU;

    t134 = (x537&((x538^x539)&x540));

    if (t134 != 188885459LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -8274080;
	uint16_t x542 = 2U;
	uint32_t x543 = UINT32_MAX;
	uint64_t x544 = UINT64_MAX;
	uint64_t t135 = 371674270LLU;

    t135 = (x541&((x542^x543)&x544));

    if (t135 != 4286693216LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int16_t x546 = INT16_MAX;
	uint64_t x547 = UINT64_MAX;
	volatile int16_t x548 = INT16_MAX;
	volatile uint64_t t136 = 9913LLU;

    t136 = (x545&((x546^x547)&x548));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x549 = UINT16_MAX;
	int16_t x551 = -5;
	int64_t x552 = -1LL;
	int64_t t137 = -107204355232972LL;

    t137 = (x549&((x550^x551)&x552));

    if (t137 != 65434LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -2;
	static int8_t x554 = -9;
	volatile uint16_t x555 = 10691U;
	static int32_t x556 = INT32_MIN;
	volatile int32_t t138 = INT32_MIN;

    t138 = (x553&((x554^x555)&x556));

    if (t138 != INT32_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = 6462;
	int8_t x558 = INT8_MIN;
	int8_t x559 = 51;
	int8_t x560 = -1;
	int32_t t139 = -346015449;

    t139 = (x557&((x558^x559)&x560));

    if (t139 != 6450) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x562 = INT64_MIN;
	int8_t x564 = INT8_MIN;
	int64_t t140 = INT64_MIN;

    t140 = (x561&((x562^x563)&x564));

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x565 = INT32_MAX;
	static uint8_t x566 = 30U;
	int64_t x567 = INT64_MAX;
	int8_t x568 = INT8_MAX;

    t141 = (x565&((x566^x567)&x568));

    if (t141 != 97LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x569 = 5506309U;
	volatile int8_t x571 = INT8_MIN;
	static volatile int8_t x572 = 0;
	int64_t t142 = 12868551397615051LL;

    t142 = (x569&((x570^x571)&x572));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x573 = INT16_MAX;
	int64_t x574 = INT64_MIN;
	volatile int16_t x575 = -1;
	int32_t x576 = 1062038233;
	volatile int64_t t143 = 26166754405828783LL;

    t143 = (x573&((x574^x575)&x576));

    if (t143 != 27353LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x578 = 0;
	int32_t x579 = 12268;
	volatile int16_t x580 = 6;
	uint32_t t144 = 229500U;

    t144 = (x577&((x578^x579)&x580));

    if (t144 != 4U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x581 = 4;
	int64_t x582 = INT64_MIN;
	volatile uint32_t x584 = 25481U;
	static int64_t t145 = 868LL;

    t145 = (x581&((x582^x583)&x584));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = 27;
	static int16_t x588 = -34;
	volatile int32_t t146 = 1011280;

    t146 = (x585&((x586^x587)&x588));

    if (t146 != 520) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x590 = 13400U;
	int16_t x591 = INT16_MAX;
	int32_t x592 = INT32_MAX;
	volatile int64_t t147 = -99977LL;

    t147 = (x589&((x590^x591)&x592));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x595 = -1;

    t148 = (x593&((x594^x595)&x596));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x598 = INT32_MIN;
	static int32_t x599 = -243;
	uint64_t x600 = UINT64_MAX;
	volatile uint64_t t149 = 779904553503LLU;

    t149 = (x597&((x598^x599)&x600));

    if (t149 != 2147450880LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x602 = 489;
	static volatile int64_t x604 = INT64_MIN;
	volatile int64_t t150 = -74102073716995LL;

    t150 = (x601&((x602^x603)&x604));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint64_t x606 = UINT64_MAX;
	static volatile int8_t x607 = -1;
	int8_t x608 = 0;

    t151 = (x605&((x606^x607)&x608));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 66U;
	static volatile int8_t x610 = INT8_MIN;
	int32_t x611 = 28287;
	int8_t x612 = -1;
	volatile int32_t t152 = -50;

    t152 = (x609&((x610^x611)&x612));

    if (t152 != 66) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = 16U;
	int64_t x614 = INT64_MIN;
	volatile int64_t x616 = INT64_MIN;
	int64_t t153 = 17667LL;

    t153 = (x613&((x614^x615)&x616));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x617 = 30U;
	static uint16_t x618 = 3U;
	static int32_t x619 = 759;
	volatile int8_t x620 = INT8_MAX;
	int32_t t154 = 423;

    t154 = (x617&((x618^x619)&x620));

    if (t154 != 20) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 18924U;
	static int64_t x622 = INT64_MIN;
	uint16_t x623 = 17204U;
	int16_t x624 = 1310;

    t155 = (x621&((x622^x623)&x624));

    if (t155 != 260LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x626 = 561;
	int8_t x627 = -54;
	static int64_t x628 = INT64_MIN;
	int64_t t156 = INT64_MIN;

    t156 = (x625&((x626^x627)&x628));

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 299U;
	int8_t x630 = INT8_MIN;
	uint8_t x631 = 35U;
	volatile int64_t x632 = 9930LL;

    t157 = (x629&((x630^x631)&x632));

    if (t157 != 2LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	int16_t x634 = -1;
	int32_t x635 = 37062415;
	uint64_t x636 = UINT64_MAX;
	static volatile uint64_t t158 = 275005LLU;

    t158 = (x633&((x634^x635)&x636));

    if (t158 != 9223372036817713392LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x638 = INT8_MIN;
	volatile int32_t x640 = 498;
	int32_t t159 = -29512;

    t159 = (x637&((x638^x639)&x640));

    if (t159 != 2) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x642 = 8870103;
	volatile uint64_t x643 = 1LLU;
	int8_t x644 = -1;
	uint64_t t160 = 886123531246LLU;

    t160 = (x641&((x642^x643)&x644));

    if (t160 != 22742LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MIN;
	int32_t x646 = INT32_MIN;
	volatile uint64_t x647 = 30554LLU;
	int32_t x648 = INT32_MIN;
	volatile uint64_t t161 = 68664223797025LLU;

    t161 = (x645&((x646^x647)&x648));

    if (t161 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = 87654;
	int32_t x650 = 45;
	volatile uint16_t x651 = UINT16_MAX;
	uint16_t x652 = UINT16_MAX;
	volatile int32_t t162 = 97589;

    t162 = (x649&((x650^x651)&x652));

    if (t162 != 22082) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	uint64_t x655 = 818931984429LLU;
	int8_t x656 = -1;

    t163 = (x653&((x654^x655)&x656));

    if (t163 != 18446743253370798080LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	uint64_t x658 = UINT64_MAX;
	int64_t x660 = INT64_MAX;

    t164 = (x657&((x658^x659)&x660));

    if (t164 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 338U;
	int64_t x662 = -96743LL;
	uint16_t x664 = 2U;
	volatile int64_t t165 = -4029510LL;

    t165 = (x661&((x662^x663)&x664));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -1554067468715676LL;
	int8_t x666 = 1;
	static int32_t x667 = -1;
	static int8_t x668 = -28;
	static int64_t t166 = 1221555249LL;

    t166 = (x665&((x666^x667)&x668));

    if (t166 != -1554067468715676LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x671 = 36465U;
	int16_t x672 = -1;

    t167 = (x669&((x670^x671)&x672));

    if (t167 != 3179326132LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MAX;
	int64_t x674 = INT64_MIN;
	uint64_t x675 = UINT64_MAX;
	static uint64_t t168 = 2825LLU;

    t168 = (x673&((x674^x675)&x676));

    if (t168 != 32640LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	static int8_t x678 = INT8_MIN;
	volatile int8_t x679 = -1;
	volatile int32_t t169 = 2;

    t169 = (x677&((x678^x679)&x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	static uint32_t x682 = 18U;
	uint64_t x683 = UINT64_MAX;
	int8_t x684 = 13;
	volatile uint64_t t170 = 2030819179LLU;

    t170 = (x681&((x682^x683)&x684));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x685 = INT32_MAX;
	int16_t x686 = -1;
	int32_t t171 = 497142798;

    t171 = (x685&((x686^x687)&x688));

    if (t171 != 32767) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = INT16_MIN;
	int16_t x691 = INT16_MIN;
	volatile int32_t x692 = INT32_MAX;
	volatile int32_t t172 = -10;

    t172 = (x689&((x690^x691)&x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = 385005440U;
	uint32_t x694 = 23U;
	int32_t x695 = -330;
	int16_t x696 = INT16_MAX;
	volatile uint32_t t173 = 10837277U;

    t173 = (x693&((x694^x695)&x696));

    if (t173 != 13952U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	int16_t x698 = INT16_MIN;
	static int64_t x699 = -1LL;
	int16_t x700 = INT16_MIN;
	int64_t t174 = 1811680294091LL;

    t174 = (x697&((x698^x699)&x700));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 132725835U;
	static int16_t x702 = INT16_MIN;
	int8_t x703 = INT8_MIN;
	int16_t x704 = -11;
	static uint32_t t175 = 2U;

    t175 = (x701&((x702^x703)&x704));

    if (t175 != 15360U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = UINT64_MAX;
	uint16_t x706 = 6U;
	int8_t x707 = -41;

    t176 = (x705&((x706^x707)&x708));

    if (t176 != 12752LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = 0;
	int8_t x710 = INT8_MAX;
	int32_t t177 = 13496;

    t177 = (x709&((x710^x711)&x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x713 = -1;
	uint32_t x714 = 6998U;
	int8_t x715 = -1;
	static int64_t t178 = 31913LL;

    t178 = (x713&((x714^x715)&x716));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MIN;
	uint16_t x718 = 15U;
	uint32_t x719 = 305750U;
	static uint32_t t179 = 759U;

    t179 = (x717&((x718^x719)&x720));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -89754669880588651LL;
	uint32_t x722 = UINT32_MAX;
	int32_t x723 = INT32_MIN;
	int32_t x724 = -40700314;
	volatile int64_t t180 = -18942790326LL;

    t180 = (x721&((x722^x723)&x724));

    if (t180 != 1888536068LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -2862604858457LL;
	int8_t x727 = INT8_MAX;
	uint8_t x728 = 38U;
	int64_t t181 = -212742990LL;

    t181 = (x725&((x726^x727)&x728));

    if (t181 != 38LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = UINT16_MAX;
	int8_t x730 = INT8_MIN;
	int64_t x731 = -1LL;
	int64_t t182 = -1357083LL;

    t182 = (x729&((x730^x731)&x732));

    if (t182 != 127LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x733 = 812519;
	int8_t x735 = 15;
	volatile int32_t t183 = 7024203;

    t183 = (x733&((x734^x735)&x736));

    if (t183 != 26080) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x738 = 4593897LLU;
	int32_t x739 = INT32_MIN;
	uint64_t t184 = 107050550218LLU;

    t184 = (x737&((x738^x739)&x740));

    if (t184 != 31552981565569LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x743 = UINT16_MAX;
	volatile int64_t t185 = -13746985044LL;

    t185 = (x741&((x742^x743)&x744));

    if (t185 != -65534LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = 729982U;
	static int64_t x746 = INT64_MIN;
	static int16_t x747 = INT16_MIN;
	int8_t x748 = INT8_MAX;

    t186 = (x745&((x746^x747)&x748));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x750 = -1;
	uint8_t x751 = 1U;
	int32_t x752 = INT32_MIN;
	volatile int32_t t187 = -2;

    t187 = (x749&((x750^x751)&x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	volatile int16_t x755 = INT16_MIN;
	int32_t x756 = -35928640;
	volatile int64_t t188 = 68677LL;

    t188 = (x753&((x754^x755)&x756));

    if (t188 != 9223372036818829312LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x757 = 53U;
	static int32_t x758 = INT32_MIN;
	static uint64_t x759 = 17231312147717616LLU;
	uint16_t x760 = UINT16_MAX;
	static volatile uint64_t t189 = 187312904760390LLU;

    t189 = (x757&((x758^x759)&x760));

    if (t189 != 48LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x761 = UINT16_MAX;
	volatile int8_t x763 = INT8_MAX;
	int64_t x764 = 28LL;

    t190 = (x761&((x762^x763)&x764));

    if (t190 != 8LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = UINT64_MAX;
	int32_t x766 = -1;
	static uint16_t x767 = UINT16_MAX;
	volatile uint64_t t191 = 1LLU;

    t191 = (x765&((x766^x767)&x768));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x769 = INT16_MIN;
	int32_t x770 = INT32_MIN;
	int64_t x771 = INT64_MIN;
	int64_t x772 = -34144662329898001LL;

    t192 = (x769&((x770^x771)&x772));

    if (t192 != 9189227373269090304LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = INT32_MIN;
	static int8_t x774 = INT8_MIN;
	uint64_t x775 = UINT64_MAX;
	int32_t x776 = -1;
	uint64_t t193 = 7999875533356715183LLU;

    t193 = (x773&((x774^x775)&x776));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 115U;
	volatile int64_t x778 = INT64_MIN;
	int32_t x779 = 87959046;
	static int64_t x780 = INT64_MAX;
	int64_t t194 = 48LL;

    t194 = (x777&((x778^x779)&x780));

    if (t194 != 2LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = UINT8_MAX;
	volatile uint16_t x782 = 17U;
	int32_t x783 = INT32_MIN;
	int16_t x784 = 2408;
	volatile int32_t t195 = -1089;

    t195 = (x781&((x782^x783)&x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x785 = -1;
	volatile uint32_t x786 = 91U;
	int8_t x787 = 62;
	volatile int64_t x788 = INT64_MIN;
	volatile int64_t t196 = -4836357161LL;

    t196 = (x785&((x786^x787)&x788));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -12;
	int64_t x792 = -1LL;
	volatile uint64_t t197 = 8965657370075791LLU;

    t197 = (x789&((x790^x791)&x792));

    if (t197 != 10356LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	uint16_t x794 = UINT16_MAX;
	int8_t x795 = 0;
	static int64_t t198 = 99492715LL;

    t198 = (x793&((x794^x795)&x796));

    if (t198 != 32768LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 350017U;
	int32_t x798 = INT32_MIN;
	int16_t x799 = -12;
	volatile int64_t x800 = INT64_MIN;
	volatile int64_t t199 = 262492470092LL;

    t199 = (x797&((x798^x799)&x800));

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

