
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

volatile int32_t t1 = -36;
int64_t t2 = 140561293LL;
int64_t x16 = 2971921941LL;
int64_t x23 = 3052085LL;
uint32_t x33 = 1868U;
static int16_t x35 = 10;
int8_t x36 = -1;
volatile int64_t x38 = INT64_MAX;
uint32_t x42 = 4387985U;
volatile int32_t t10 = INT32_MIN;
int64_t x45 = INT64_MIN;
int16_t x47 = -6907;
int8_t x48 = INT8_MIN;
int64_t t11 = INT64_MIN;
uint8_t x55 = 100U;
int8_t x65 = -19;
int8_t x67 = 25;
int32_t t16 = 741;
volatile uint32_t x69 = 79433U;
int64_t x73 = INT64_MIN;
int64_t x74 = INT64_MAX;
static int64_t x75 = INT64_MIN;
static int8_t x76 = INT8_MIN;
int8_t x79 = -5;
int16_t x86 = 5771;
static volatile int32_t t21 = 153643631;
int64_t x90 = 0LL;
int8_t x93 = INT8_MIN;
static volatile uint32_t x96 = 1707U;
uint16_t x98 = 30U;
static uint32_t t24 = 20292U;
uint32_t x105 = UINT32_MAX;
static int32_t x106 = -1;
int32_t t26 = 2073;
static volatile int64_t x115 = -10190468850781LL;
static int64_t x124 = -194875883379742LL;
static int64_t x129 = 93405LL;
int64_t x135 = -1LL;
uint16_t x138 = UINT16_MAX;
int8_t x148 = INT8_MAX;
volatile uint64_t x159 = UINT64_MAX;
int32_t x160 = 21;
volatile int32_t t37 = 21174;
int8_t x162 = 4;
int8_t x164 = INT8_MIN;
uint8_t x165 = UINT8_MAX;
int64_t x170 = -327LL;
static uint8_t x172 = 1U;
int16_t x174 = INT16_MIN;
int16_t x179 = -7;
volatile int32_t t42 = 0;
static volatile int32_t t43 = 26807519;
int64_t x186 = INT64_MIN;
volatile int32_t x187 = INT32_MIN;
int32_t x190 = -405562693;
static uint8_t x193 = UINT8_MAX;
uint32_t x203 = UINT32_MAX;
int8_t x210 = INT8_MIN;
static volatile int32_t x222 = -1;
static int32_t t54 = 129169979;
int8_t x235 = 1;
uint64_t t56 = 3LLU;
uint32_t x247 = UINT32_MAX;
int16_t x250 = INT16_MIN;
int8_t x252 = INT8_MIN;
int16_t x256 = 3813;
static int32_t x264 = INT32_MIN;
int64_t x265 = -1342741998163801986LL;
uint16_t x266 = 1364U;
int32_t x273 = INT32_MAX;
int64_t x276 = INT64_MIN;
static volatile int32_t t65 = INT32_MAX;
static int8_t x277 = INT8_MIN;
int16_t x279 = INT16_MIN;
uint64_t x282 = 51567612085851756LLU;
static int32_t x284 = -1;
int32_t x286 = INT32_MIN;
static uint16_t x288 = 7U;
uint8_t x296 = 24U;
int8_t x297 = INT8_MIN;
static uint16_t x307 = 134U;
volatile int32_t x308 = INT32_MAX;
static volatile int8_t x312 = -1;
int32_t x319 = -1;
int32_t x320 = INT32_MIN;
int32_t t76 = -22789969;
uint32_t x324 = 7014631U;
int32_t x325 = -136016;
int64_t x328 = -534455326LL;
uint16_t x331 = UINT16_MAX;
uint32_t x347 = UINT32_MAX;
int8_t x353 = INT8_MIN;
int64_t x356 = -184253LL;
int32_t t85 = 4581510;
uint32_t t86 = 10447U;
int32_t t88 = 20596126;
volatile int32_t t89 = -28113;
int16_t x381 = INT16_MAX;
int32_t x389 = -1;
volatile int32_t t93 = -512209;
static int64_t x402 = INT64_MIN;
volatile int64_t x404 = -417LL;
uint64_t x411 = 1396071138436067241LLU;
volatile uint8_t x413 = UINT8_MAX;
int8_t x414 = INT8_MIN;
static int16_t x421 = INT16_MAX;
int32_t t101 = 20970;
int16_t x429 = INT16_MIN;
int32_t t105 = -4806429;
int32_t x446 = INT32_MAX;
static int64_t x450 = -69910280031987953LL;
int16_t x456 = INT16_MIN;
static int32_t t108 = -53;
int64_t x458 = -16891819928LL;
volatile int16_t x463 = INT16_MAX;
int64_t x465 = -1120985700657048389LL;
static int8_t x466 = -1;
int32_t x468 = INT32_MIN;
volatile int8_t x469 = -1;
volatile int32_t x471 = -28;
int32_t t116 = -10015101;
int8_t x499 = INT8_MIN;
volatile int32_t t119 = 0;
int16_t x505 = 223;
int16_t x506 = 2148;
volatile int32_t t122 = -143548303;
uint64_t t124 = UINT64_MAX;
volatile int8_t x521 = INT8_MIN;
volatile uint64_t x527 = UINT64_MAX;
int32_t x529 = INT32_MIN;
int8_t x530 = -4;
int32_t x537 = 129;
uint8_t x548 = 2U;
uint64_t t130 = 1352425095512729001LLU;
uint16_t x549 = UINT16_MAX;
volatile int32_t t132 = 16133;
uint16_t x573 = 3U;
int32_t x584 = -1;
int32_t x586 = -351451;
int64_t x587 = INT64_MIN;
int32_t t140 = 121898694;
static uint8_t x593 = 11U;
static int32_t t143 = 4826;
int32_t x608 = INT32_MIN;
int64_t x611 = INT64_MIN;
static uint64_t x613 = UINT64_MAX;
uint8_t x620 = 102U;
int64_t x627 = 114365LL;
int8_t x629 = INT8_MAX;
int16_t x633 = INT16_MIN;
volatile int64_t x636 = -1LL;
volatile int32_t t151 = -70038;
static int32_t x642 = -1;
int32_t t154 = -2;
uint8_t x649 = UINT8_MAX;
volatile int32_t t155 = -3;
static volatile int32_t t156 = 1475384;
int32_t t158 = 5016253;
static int32_t x669 = -1;
int64_t t161 = -1LL;
uint8_t x679 = UINT8_MAX;
volatile uint32_t t163 = 90318120U;
int16_t x692 = 0;
static uint64_t x694 = 223601LLU;
uint32_t x701 = 1260567U;
uint32_t x704 = 93350U;
volatile int32_t t169 = -15;
uint64_t t172 = 89481876841LLU;
int32_t x722 = 180352;
volatile int32_t t175 = INT32_MAX;
int64_t x736 = -1LL;
int16_t x740 = INT16_MIN;
volatile int16_t x744 = INT16_MIN;
uint16_t x748 = 3815U;
static volatile uint16_t x750 = 6566U;
int16_t x753 = INT16_MIN;
uint16_t x755 = 1U;
int16_t x759 = -1;
volatile int32_t t183 = 3;
int8_t x775 = 51;
volatile int32_t t185 = -2359;
static uint16_t x783 = UINT16_MAX;
uint32_t x785 = 11547166U;
static uint16_t x789 = 37U;
int16_t x790 = -13;
int32_t x794 = INT32_MIN;
uint8_t x804 = UINT8_MAX;
volatile int32_t t192 = 11447;
int32_t x805 = INT32_MIN;
volatile int32_t x806 = -39;
volatile uint64_t x807 = 16747215030LLU;
volatile int32_t x812 = -1;
int64_t t194 = INT64_MIN;
uint64_t x817 = UINT64_MAX;
volatile int8_t x818 = 1;
uint32_t x824 = 77U;
volatile int32_t t197 = 0;
static int16_t x829 = INT16_MIN;


void f0(void) {
    	uint16_t x1 = 97U;
	volatile int64_t x2 = INT64_MIN;
	uint8_t x3 = 18U;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 23241;

    t0 = (x1^((x2/x3)==x4));

    if (t0 != 97) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	uint8_t x6 = UINT8_MAX;
	uint8_t x7 = 15U;
	static int16_t x8 = -1;

    t1 = (x5^((x6/x7)==x8));

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -26081428LL;
	uint32_t x10 = UINT32_MAX;
	int16_t x11 = -1;
	uint64_t x12 = 259613375795879LLU;

    t2 = (x9^((x10/x11)==x12));

    if (t2 != -26081428LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	int8_t x14 = INT8_MAX;
	static volatile int8_t x15 = INT8_MIN;
	volatile int32_t t3 = 7073680;

    t3 = (x13^((x14/x15)==x16));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 1012069038U;
	uint8_t x18 = UINT8_MAX;
	uint32_t x19 = 979338U;
	uint16_t x20 = 20278U;
	uint32_t t4 = 2303U;

    t4 = (x17^((x18/x19)==x20));

    if (t4 != 1012069038U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	int32_t x22 = 423994512;
	int64_t x24 = 2898LL;
	static volatile int32_t t5 = 118;

    t5 = (x21^((x22/x23)==x24));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	int8_t x26 = INT8_MAX;
	int32_t x27 = INT32_MIN;
	volatile int32_t x28 = INT32_MIN;
	int32_t t6 = 247941349;

    t6 = (x25^((x26/x27)==x28));

    if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	int8_t x30 = INT8_MIN;
	int32_t x31 = INT32_MAX;
	int64_t x32 = INT64_MIN;
	int32_t t7 = -44262;

    t7 = (x29^((x30/x31)==x32));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = INT64_MIN;
	uint32_t t8 = 6U;

    t8 = (x33^((x34/x35)==x36));

    if (t8 != 1868U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	volatile uint32_t x39 = 181U;
	int8_t x40 = -1;
	int32_t t9 = -3993;

    t9 = (x37^((x38/x39)==x40));

    if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = INT32_MIN;
	volatile int8_t x43 = -3;
	int16_t x44 = 28;

    t10 = (x41^((x42/x43)==x44));

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x46 = 1890359U;

    t11 = (x45^((x46/x47)==x48));

    if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = UINT8_MAX;
	uint8_t x50 = 109U;
	uint8_t x51 = UINT8_MAX;
	volatile int8_t x52 = 1;
	int32_t t12 = 82;

    t12 = (x49^((x50/x51)==x52));

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = -1;
	static int64_t x54 = INT64_MIN;
	static uint16_t x56 = 574U;
	int32_t t13 = -370;

    t13 = (x53^((x54/x55)==x56));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = 63;
	int16_t x58 = INT16_MIN;
	int16_t x59 = -1;
	int64_t x60 = -33805771153772LL;
	static int32_t t14 = 530;

    t14 = (x57^((x58/x59)==x60));

    if (t14 != 63) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 1353U;
	uint64_t x62 = UINT64_MAX;
	int16_t x63 = 5195;
	int16_t x64 = 824;
	volatile int32_t t15 = -567;

    t15 = (x61^((x62/x63)==x64));

    if (t15 != 1353) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint16_t x66 = 190U;
	int8_t x68 = INT8_MAX;

    t16 = (x65^((x66/x67)==x68));

    if (t16 != -19) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x70 = -1;
	int32_t x71 = 12;
	volatile int16_t x72 = 58;
	volatile uint32_t t17 = 185737726U;

    t17 = (x69^((x70/x71)==x72));

    if (t17 != 79433U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t t18 = INT64_MIN;

    t18 = (x73^((x74/x75)==x76));

    if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	int32_t x78 = INT32_MIN;
	static int32_t x80 = INT32_MAX;
	volatile int64_t t19 = INT64_MAX;

    t19 = (x77^((x78/x79)==x80));

    if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	int8_t x82 = -1;
	uint8_t x83 = 3U;
	uint16_t x84 = UINT16_MAX;
	int64_t t20 = INT64_MIN;

    t20 = (x81^((x82/x83)==x84));

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = 4275;
	int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MIN;

    t21 = (x85^((x86/x87)==x88));

    if (t21 != 4275) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x89 = UINT64_MAX;
	volatile int32_t x91 = -1;
	uint8_t x92 = 13U;
	static volatile uint64_t t22 = UINT64_MAX;

    t22 = (x89^((x90/x91)==x92));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = UINT16_MAX;
	int16_t x95 = INT16_MAX;
	int32_t t23 = -388665;

    t23 = (x93^((x94/x95)==x96));

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 8907369U;
	static int32_t x99 = INT32_MIN;
	volatile int8_t x100 = INT8_MAX;

    t24 = (x97^((x98/x99)==x100));

    if (t24 != 8907369U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x107 = 1;
	int32_t x108 = INT32_MIN;
	uint32_t t25 = UINT32_MAX;

    t25 = (x105^((x106/x107)==x108));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x109 = 0;
	static uint8_t x110 = 0U;
	int16_t x111 = -915;
	uint32_t x112 = 885U;

    t26 = (x109^((x110/x111)==x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MIN;
	uint8_t x114 = 0U;
	uint8_t x116 = 10U;
	volatile int32_t t27 = -10649776;

    t27 = (x113^((x114/x115)==x116));

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x117 = 4460U;
	int64_t x118 = INT64_MIN;
	volatile int64_t x119 = INT64_MIN;
	int16_t x120 = INT16_MAX;
	int32_t t28 = -1731684;

    t28 = (x117^((x118/x119)==x120));

    if (t28 != 4460) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x121 = INT16_MAX;
	static uint64_t x122 = 455144LLU;
	static int32_t x123 = -1;
	volatile int32_t t29 = -1;

    t29 = (x121^((x122/x123)==x124));

    if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x130 = INT32_MIN;
	int8_t x131 = INT8_MIN;
	volatile int32_t x132 = INT32_MIN;
	volatile int64_t t30 = 15808562902465LL;

    t30 = (x129^((x130/x131)==x132));

    if (t30 != 93405LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x133 = 31563U;
	int32_t x134 = 5251;
	int16_t x136 = INT16_MAX;
	uint32_t t31 = 82776676U;

    t31 = (x133^((x134/x135)==x136));

    if (t31 != 31563U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x137 = UINT8_MAX;
	int8_t x139 = 55;
	int32_t x140 = -700293392;
	int32_t t32 = 3926;

    t32 = (x137^((x138/x139)==x140));

    if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x141 = -1587;
	static volatile int16_t x142 = -58;
	int64_t x143 = 194138070040LL;
	int64_t x144 = 1766325LL;
	volatile int32_t t33 = -2391;

    t33 = (x141^((x142/x143)==x144));

    if (t33 != -1587) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x145 = -528953;
	int32_t x146 = INT32_MIN;
	int16_t x147 = -7747;
	int32_t t34 = -2;

    t34 = (x145^((x146/x147)==x148));

    if (t34 != -528953) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = 197822168;
	static volatile int64_t x150 = INT64_MIN;
	uint64_t x151 = UINT64_MAX;
	int16_t x152 = -11659;
	volatile int32_t t35 = -166325872;

    t35 = (x149^((x150/x151)==x152));

    if (t35 != 197822168) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x153 = 109070740188LLU;
	volatile int64_t x154 = -3452348516LL;
	volatile int64_t x155 = INT64_MAX;
	int16_t x156 = INT16_MIN;
	uint64_t t36 = 7848263601LLU;

    t36 = (x153^((x154/x155)==x156));

    if (t36 != 109070740188LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x157 = -1;
	uint8_t x158 = 38U;

    t37 = (x157^((x158/x159)==x160));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x161 = INT16_MIN;
	int64_t x163 = -1LL;
	static volatile int32_t t38 = 116;

    t38 = (x161^((x162/x163)==x164));

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x166 = -1;
	static int8_t x167 = INT8_MAX;
	volatile uint8_t x168 = 1U;
	volatile int32_t t39 = 11876;

    t39 = (x165^((x166/x167)==x168));

    if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = -239095149302025158LL;
	int32_t x171 = -1;
	volatile int64_t t40 = -14249737LL;

    t40 = (x169^((x170/x171)==x172));

    if (t40 != -239095149302025158LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = -1LL;
	uint32_t x175 = UINT32_MAX;
	uint16_t x176 = 992U;
	int64_t t41 = 35LL;

    t41 = (x173^((x174/x175)==x176));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x177 = UINT8_MAX;
	int8_t x178 = INT8_MIN;
	static int16_t x180 = 13583;

    t42 = (x177^((x178/x179)==x180));

    if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x181 = 0;
	static int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MIN;
	static volatile uint64_t x184 = 13975137342222318LLU;

    t43 = (x181^((x182/x183)==x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x185 = INT8_MIN;
	int64_t x188 = 542882LL;
	volatile int32_t t44 = 606067;

    t44 = (x185^((x186/x187)==x188));

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint64_t x189 = 55LLU;
	static int32_t x191 = INT32_MIN;
	volatile uint32_t x192 = UINT32_MAX;
	volatile uint64_t t45 = 2743459135941LLU;

    t45 = (x189^((x190/x191)==x192));

    if (t45 != 55LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x194 = UINT64_MAX;
	uint32_t x195 = 267378U;
	int64_t x196 = -1LL;
	int32_t t46 = 658;

    t46 = (x193^((x194/x195)==x196));

    if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = 1;
	uint32_t x198 = 12U;
	static int32_t x199 = 4009745;
	int16_t x200 = -2;
	volatile int32_t t47 = -208068;

    t47 = (x197^((x198/x199)==x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x201 = 59030263312067446LLU;
	uint16_t x202 = 613U;
	volatile int8_t x204 = -5;
	uint64_t t48 = 2606066344159729LLU;

    t48 = (x201^((x202/x203)==x204));

    if (t48 != 59030263312067446LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x205 = 11U;
	int8_t x206 = 1;
	int64_t x207 = -1LL;
	int8_t x208 = 1;
	int32_t t49 = -1;

    t49 = (x205^((x206/x207)==x208));

    if (t49 != 11) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x209 = 314422036287739LL;
	int32_t x211 = -136;
	volatile uint64_t x212 = 28315237LLU;
	static volatile int64_t t50 = 32LL;

    t50 = (x209^((x210/x211)==x212));

    if (t50 != 314422036287739LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x213 = 53U;
	int32_t x214 = INT32_MIN;
	uint64_t x215 = 1841628854782771LLU;
	int32_t x216 = INT32_MAX;
	volatile int32_t t51 = -1950;

    t51 = (x213^((x214/x215)==x216));

    if (t51 != 53) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x221 = 9367113488LLU;
	volatile int16_t x223 = -1634;
	int32_t x224 = INT32_MAX;
	static uint64_t t52 = 190952232234582LLU;

    t52 = (x221^((x222/x223)==x224));

    if (t52 != 9367113488LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x225 = 15U;
	volatile int32_t x226 = -1;
	int32_t x227 = -47304184;
	static int32_t x228 = INT32_MAX;
	int32_t t53 = -28082397;

    t53 = (x225^((x226/x227)==x228));

    if (t53 != 15) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x229 = 73U;
	int16_t x230 = -1;
	int64_t x231 = INT64_MIN;
	uint64_t x232 = UINT64_MAX;

    t54 = (x229^((x230/x231)==x232));

    if (t54 != 73) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x233 = -3811423;
	int16_t x234 = INT16_MAX;
	int32_t x236 = INT32_MIN;
	static volatile int32_t t55 = 4215;

    t55 = (x233^((x234/x235)==x236));

    if (t55 != -3811423) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x237 = 44LLU;
	int64_t x238 = INT64_MIN;
	volatile uint16_t x239 = 1U;
	int16_t x240 = INT16_MIN;

    t56 = (x237^((x238/x239)==x240));

    if (t56 != 44LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x241 = UINT8_MAX;
	uint16_t x242 = UINT16_MAX;
	int32_t x243 = INT32_MIN;
	volatile uint32_t x244 = UINT32_MAX;
	volatile int32_t t57 = -23857444;

    t57 = (x241^((x242/x243)==x244));

    if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x245 = INT8_MIN;
	static uint16_t x246 = UINT16_MAX;
	int8_t x248 = -1;
	static volatile int32_t t58 = 103261904;

    t58 = (x245^((x246/x247)==x248));

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x249 = INT8_MIN;
	int32_t x251 = INT32_MIN;
	static int32_t t59 = 2;

    t59 = (x249^((x250/x251)==x252));

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x253 = UINT16_MAX;
	int64_t x254 = INT64_MIN;
	int32_t x255 = INT32_MIN;
	static int32_t t60 = 290282462;

    t60 = (x253^((x254/x255)==x256));

    if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x257 = UINT16_MAX;
	int32_t x258 = INT32_MIN;
	static int32_t x259 = INT32_MIN;
	static volatile int32_t x260 = INT32_MIN;
	static volatile int32_t t61 = -1717557;

    t61 = (x257^((x258/x259)==x260));

    if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x261 = INT32_MAX;
	int32_t x262 = 7032;
	volatile int64_t x263 = -1LL;
	static int32_t t62 = INT32_MAX;

    t62 = (x261^((x262/x263)==x264));

    if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x267 = 18U;
	uint32_t x268 = UINT32_MAX;
	int64_t t63 = 1LL;

    t63 = (x265^((x266/x267)==x268));

    if (t63 != -1342741998163801986LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x269 = INT32_MAX;
	uint16_t x270 = UINT16_MAX;
	static int16_t x271 = INT16_MAX;
	int32_t x272 = INT32_MAX;
	int32_t t64 = INT32_MAX;

    t64 = (x269^((x270/x271)==x272));

    if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint8_t x274 = UINT8_MAX;
	uint32_t x275 = UINT32_MAX;

    t65 = (x273^((x274/x275)==x276));

    if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x278 = UINT8_MAX;
	int32_t x280 = INT32_MIN;
	static int32_t t66 = 2160934;

    t66 = (x277^((x278/x279)==x280));

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x281 = INT32_MIN;
	uint32_t x283 = 96U;
	static int32_t t67 = INT32_MIN;

    t67 = (x281^((x282/x283)==x284));

    if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x285 = INT32_MIN;
	int16_t x287 = 2;
	static volatile int32_t t68 = INT32_MIN;

    t68 = (x285^((x286/x287)==x288));

    if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x289 = 230U;
	int64_t x290 = -1LL;
	int64_t x291 = 2767997270275457773LL;
	static uint64_t x292 = 9713679309LLU;
	uint32_t t69 = 19U;

    t69 = (x289^((x290/x291)==x292));

    if (t69 != 230U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x293 = INT32_MAX;
	int64_t x294 = -41LL;
	volatile int8_t x295 = 41;
	volatile int32_t t70 = INT32_MAX;

    t70 = (x293^((x294/x295)==x296));

    if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x298 = INT16_MAX;
	int16_t x299 = -1;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t71 = 49675;

    t71 = (x297^((x298/x299)==x300));

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = INT16_MAX;
	int64_t x302 = INT64_MAX;
	uint64_t x303 = UINT64_MAX;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t72 = -6112546;

    t72 = (x301^((x302/x303)==x304));

    if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x305 = 274;
	volatile int8_t x306 = -1;
	int32_t t73 = -9;

    t73 = (x305^((x306/x307)==x308));

    if (t73 != 274) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x309 = UINT16_MAX;
	static uint32_t x310 = 1450798U;
	int32_t x311 = INT32_MIN;
	volatile int32_t t74 = 37315238;

    t74 = (x309^((x310/x311)==x312));

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x313 = -9;
	int32_t x314 = INT32_MAX;
	int64_t x315 = INT64_MIN;
	uint32_t x316 = UINT32_MAX;
	int32_t t75 = 10907;

    t75 = (x313^((x314/x315)==x316));

    if (t75 != -9) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x317 = -1;
	static int64_t x318 = 486509422029LL;

    t76 = (x317^((x318/x319)==x320));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x321 = 122U;
	uint64_t x322 = 4347652269289LLU;
	int8_t x323 = INT8_MIN;
	volatile int32_t t77 = -1807129;

    t77 = (x321^((x322/x323)==x324));

    if (t77 != 122) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x326 = INT8_MAX;
	static int8_t x327 = INT8_MIN;
	int32_t t78 = -89998;

    t78 = (x325^((x326/x327)==x328));

    if (t78 != -136016) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x329 = 10500883LLU;
	static int64_t x330 = 1049006733810789LL;
	uint16_t x332 = UINT16_MAX;
	volatile uint64_t t79 = 95089070246LLU;

    t79 = (x329^((x330/x331)==x332));

    if (t79 != 10500883LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x333 = -27016170;
	static int64_t x334 = INT64_MAX;
	volatile int8_t x335 = -1;
	int32_t x336 = INT32_MIN;
	int32_t t80 = 7834289;

    t80 = (x333^((x334/x335)==x336));

    if (t80 != -27016170) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x337 = 5U;
	int16_t x338 = INT16_MIN;
	static uint32_t x339 = UINT32_MAX;
	static uint8_t x340 = 15U;
	static volatile int32_t t81 = -24027853;

    t81 = (x337^((x338/x339)==x340));

    if (t81 != 5) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x341 = 2141669253372LL;
	int64_t x342 = INT64_MIN;
	volatile int64_t x343 = 82423339439LL;
	uint16_t x344 = 221U;
	static volatile int64_t t82 = 646404095776774281LL;

    t82 = (x341^((x342/x343)==x344));

    if (t82 != 2141669253372LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x345 = 1U;
	int16_t x346 = INT16_MIN;
	int16_t x348 = INT16_MAX;
	int32_t t83 = -3;

    t83 = (x345^((x346/x347)==x348));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x349 = 31429713LLU;
	int64_t x350 = -517797LL;
	int8_t x351 = 1;
	uint16_t x352 = 470U;
	static volatile uint64_t t84 = 4768051LLU;

    t84 = (x349^((x350/x351)==x352));

    if (t84 != 31429713LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x354 = 3902LL;
	uint8_t x355 = UINT8_MAX;

    t85 = (x353^((x354/x355)==x356));

    if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x357 = 11042135U;
	volatile int16_t x358 = INT16_MAX;
	int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MAX;

    t86 = (x357^((x358/x359)==x360));

    if (t86 != 11042135U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x361 = 1;
	uint16_t x362 = UINT16_MAX;
	static int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MIN;
	volatile int32_t t87 = 23106;

    t87 = (x361^((x362/x363)==x364));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x369 = INT16_MAX;
	int16_t x370 = INT16_MAX;
	int8_t x371 = INT8_MAX;
	int32_t x372 = -1;

    t88 = (x369^((x370/x371)==x372));

    if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x373 = 1909U;
	int32_t x374 = -1;
	int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MAX;

    t89 = (x373^((x374/x375)==x376));

    if (t89 != 1909) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x377 = UINT16_MAX;
	int64_t x378 = 263171241194LL;
	volatile uint32_t x379 = 3969861U;
	int64_t x380 = 243LL;
	volatile int32_t t90 = -380756;

    t90 = (x377^((x378/x379)==x380));

    if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x382 = -1;
	static volatile int8_t x383 = INT8_MAX;
	int8_t x384 = -1;
	int32_t t91 = 9;

    t91 = (x381^((x382/x383)==x384));

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x385 = UINT32_MAX;
	int8_t x386 = INT8_MIN;
	int32_t x387 = INT32_MIN;
	uint32_t x388 = 124822942U;
	uint32_t t92 = UINT32_MAX;

    t92 = (x385^((x386/x387)==x388));

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MIN;
	uint8_t x392 = 13U;

    t93 = (x389^((x390/x391)==x392));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x393 = -1;
	int64_t x394 = INT64_MIN;
	uint32_t x395 = 5428U;
	static int16_t x396 = -1;
	volatile int32_t t94 = 1464;

    t94 = (x393^((x394/x395)==x396));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x397 = UINT16_MAX;
	static int16_t x398 = 564;
	volatile int8_t x399 = INT8_MIN;
	int32_t x400 = INT32_MIN;
	volatile int32_t t95 = 5;

    t95 = (x397^((x398/x399)==x400));

    if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x401 = 7392135U;
	static volatile uint8_t x403 = 33U;
	volatile uint32_t t96 = 7U;

    t96 = (x401^((x402/x403)==x404));

    if (t96 != 7392135U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x405 = -1;
	static volatile uint64_t x406 = UINT64_MAX;
	volatile uint64_t x407 = 989201926321857LLU;
	int64_t x408 = INT64_MAX;
	volatile int32_t t97 = -13;

    t97 = (x405^((x406/x407)==x408));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x409 = INT16_MIN;
	volatile int8_t x410 = INT8_MIN;
	int16_t x412 = INT16_MIN;
	int32_t t98 = -243689;

    t98 = (x409^((x410/x411)==x412));

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x415 = 928LLU;
	volatile int32_t x416 = INT32_MIN;
	volatile int32_t t99 = -22602194;

    t99 = (x413^((x414/x415)==x416));

    if (t99 != 255) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x417 = INT64_MAX;
	int8_t x418 = -1;
	static int64_t x419 = INT64_MIN;
	volatile int64_t x420 = -39737952597LL;
	volatile int64_t t100 = INT64_MAX;

    t100 = (x417^((x418/x419)==x420));

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x422 = -88;
	static int16_t x423 = -805;
	uint32_t x424 = UINT32_MAX;

    t101 = (x421^((x422/x423)==x424));

    if (t101 != 32767) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x425 = INT8_MAX;
	static uint32_t x426 = 70U;
	static int16_t x427 = -3384;
	static volatile int16_t x428 = INT16_MAX;
	volatile int32_t t102 = 4105266;

    t102 = (x425^((x426/x427)==x428));

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x430 = INT16_MIN;
	int32_t x431 = INT32_MIN;
	volatile int16_t x432 = INT16_MAX;
	volatile int32_t t103 = 5;

    t103 = (x429^((x430/x431)==x432));

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x433 = INT8_MIN;
	volatile int64_t x434 = -1LL;
	int16_t x435 = INT16_MIN;
	int32_t x436 = -1;
	int32_t t104 = -1014215462;

    t104 = (x433^((x434/x435)==x436));

    if (t104 != -128) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x441 = 3U;
	uint32_t x442 = 19139179U;
	int16_t x443 = -1;
	int64_t x444 = INT64_MIN;

    t105 = (x441^((x442/x443)==x444));

    if (t105 != 3) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x445 = 438235LL;
	int64_t x447 = INT64_MIN;
	int8_t x448 = -2;
	volatile int64_t t106 = 41630826513LL;

    t106 = (x445^((x446/x447)==x448));

    if (t106 != 438235LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x449 = 2226U;
	uint64_t x451 = 561479156827379LLU;
	int64_t x452 = 11LL;
	volatile uint32_t t107 = 2U;

    t107 = (x449^((x450/x451)==x452));

    if (t107 != 2226U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x453 = 432U;
	volatile int8_t x454 = INT8_MIN;
	static uint16_t x455 = 1U;

    t108 = (x453^((x454/x455)==x456));

    if (t108 != 432) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x457 = UINT32_MAX;
	int8_t x459 = INT8_MAX;
	int8_t x460 = -1;
	uint32_t t109 = UINT32_MAX;

    t109 = (x457^((x458/x459)==x460));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x461 = -4799LL;
	volatile uint32_t x462 = 926155U;
	int16_t x464 = INT16_MIN;
	static int64_t t110 = -2286323560734601928LL;

    t110 = (x461^((x462/x463)==x464));

    if (t110 != -4799LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x467 = INT16_MIN;
	int64_t t111 = -1LL;

    t111 = (x465^((x466/x467)==x468));

    if (t111 != -1120985700657048389LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x470 = INT16_MIN;
	volatile int8_t x472 = INT8_MIN;
	int32_t t112 = 2179;

    t112 = (x469^((x470/x471)==x472));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x473 = 0U;
	int16_t x474 = INT16_MIN;
	uint64_t x475 = 89415740LLU;
	static int8_t x476 = INT8_MIN;
	volatile int32_t t113 = 11915;

    t113 = (x473^((x474/x475)==x476));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x477 = 1;
	volatile int64_t x478 = INT64_MIN;
	int64_t x479 = -16322LL;
	uint16_t x480 = 203U;
	int32_t t114 = -12;

    t114 = (x477^((x478/x479)==x480));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x481 = 0LL;
	int16_t x482 = -1968;
	static int16_t x483 = 2;
	volatile int16_t x484 = -15;
	volatile int64_t t115 = -2013LL;

    t115 = (x481^((x482/x483)==x484));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x485 = -62;
	int16_t x486 = INT16_MAX;
	volatile int8_t x487 = INT8_MIN;
	uint32_t x488 = 573948704U;

    t116 = (x485^((x486/x487)==x488));

    if (t116 != -62) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x489 = 22U;
	uint64_t x490 = 235857995267054786LLU;
	volatile int16_t x491 = -1;
	volatile uint16_t x492 = 1072U;
	static int32_t t117 = 15;

    t117 = (x489^((x490/x491)==x492));

    if (t117 != 22) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x493 = -8096LL;
	uint16_t x494 = 602U;
	volatile uint32_t x495 = 863683U;
	static int32_t x496 = -1;
	int64_t t118 = -13582972LL;

    t118 = (x493^((x494/x495)==x496));

    if (t118 != -8096LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x497 = -3;
	static int64_t x498 = INT64_MAX;
	static int32_t x500 = -4486469;

    t119 = (x497^((x498/x499)==x500));

    if (t119 != -3) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x501 = -28;
	int16_t x502 = INT16_MIN;
	uint16_t x503 = UINT16_MAX;
	static uint16_t x504 = UINT16_MAX;
	volatile int32_t t120 = -2918311;

    t120 = (x501^((x502/x503)==x504));

    if (t120 != -28) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x507 = -1;
	int8_t x508 = INT8_MIN;
	volatile int32_t t121 = -8813159;

    t121 = (x505^((x506/x507)==x508));

    if (t121 != 223) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x509 = 2U;
	static int64_t x510 = INT64_MIN;
	int32_t x511 = INT32_MAX;
	int32_t x512 = INT32_MIN;

    t122 = (x509^((x510/x511)==x512));

    if (t122 != 2) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x513 = 169U;
	int64_t x514 = INT64_MIN;
	uint8_t x515 = UINT8_MAX;
	int16_t x516 = INT16_MAX;
	int32_t t123 = -42;

    t123 = (x513^((x514/x515)==x516));

    if (t123 != 169) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x517 = UINT64_MAX;
	static int64_t x518 = INT64_MAX;
	volatile uint16_t x519 = 530U;
	uint8_t x520 = 92U;

    t124 = (x517^((x518/x519)==x520));

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x522 = 1907195881052503LLU;
	int8_t x523 = -1;
	int64_t x524 = INT64_MIN;
	volatile int32_t t125 = -5439340;

    t125 = (x521^((x522/x523)==x524));

    if (t125 != -128) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x525 = 40LLU;
	int8_t x526 = INT8_MIN;
	static int16_t x528 = -1;
	volatile uint64_t t126 = 744422816343LLU;

    t126 = (x525^((x526/x527)==x528));

    if (t126 != 40LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x531 = 219846715264LLU;
	int8_t x532 = INT8_MIN;
	int32_t t127 = INT32_MIN;

    t127 = (x529^((x530/x531)==x532));

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x538 = INT16_MAX;
	volatile uint32_t x539 = 87833444U;
	uint64_t x540 = 47777053576LLU;
	static int32_t t128 = -5135528;

    t128 = (x537^((x538/x539)==x540));

    if (t128 != 129) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x541 = INT16_MAX;
	int64_t x542 = -1LL;
	int16_t x543 = -43;
	volatile uint16_t x544 = UINT16_MAX;
	int32_t t129 = 10191575;

    t129 = (x541^((x542/x543)==x544));

    if (t129 != 32767) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x545 = 0LLU;
	int64_t x546 = 0LL;
	int64_t x547 = 58LL;

    t130 = (x545^((x546/x547)==x548));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x550 = INT64_MIN;
	static uint8_t x551 = 11U;
	int32_t x552 = 418304301;
	int32_t t131 = -82;

    t131 = (x549^((x550/x551)==x552));

    if (t131 != 65535) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x553 = INT16_MIN;
	static uint8_t x554 = UINT8_MAX;
	int64_t x555 = 89237989446LL;
	int64_t x556 = -1LL;

    t132 = (x553^((x554/x555)==x556));

    if (t132 != -32768) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x557 = -764311903;
	uint8_t x558 = 0U;
	static uint16_t x559 = 9824U;
	int32_t x560 = INT32_MIN;
	int32_t t133 = 1;

    t133 = (x557^((x558/x559)==x560));

    if (t133 != -764311903) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x561 = INT8_MIN;
	static int32_t x562 = -1;
	int32_t x563 = -1;
	volatile int16_t x564 = -10;
	int32_t t134 = -2;

    t134 = (x561^((x562/x563)==x564));

    if (t134 != -128) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x565 = 13527289LLU;
	static uint8_t x566 = 34U;
	static int16_t x567 = -1;
	static int32_t x568 = -2;
	uint64_t t135 = 3444639816LLU;

    t135 = (x565^((x566/x567)==x568));

    if (t135 != 13527289LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x569 = 6920U;
	static int16_t x570 = INT16_MIN;
	static int16_t x571 = INT16_MIN;
	static volatile int16_t x572 = INT16_MAX;
	volatile int32_t t136 = 2964;

    t136 = (x569^((x570/x571)==x572));

    if (t136 != 6920) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x574 = INT16_MIN;
	static volatile uint8_t x575 = 62U;
	uint8_t x576 = UINT8_MAX;
	volatile int32_t t137 = -468;

    t137 = (x573^((x574/x575)==x576));

    if (t137 != 3) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x577 = 30952573018889671LLU;
	volatile int32_t x578 = -459181;
	int16_t x579 = 18;
	static int64_t x580 = INT64_MIN;
	volatile uint64_t t138 = 401294150878097LLU;

    t138 = (x577^((x578/x579)==x580));

    if (t138 != 30952573018889671LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x581 = UINT16_MAX;
	volatile int64_t x582 = INT64_MAX;
	int16_t x583 = INT16_MIN;
	static int32_t t139 = -172;

    t139 = (x581^((x582/x583)==x584));

    if (t139 != 65535) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x585 = UINT16_MAX;
	uint16_t x588 = 1252U;

    t140 = (x585^((x586/x587)==x588));

    if (t140 != 65535) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x594 = UINT16_MAX;
	volatile int64_t x595 = -1LL;
	static uint8_t x596 = 0U;
	int32_t t141 = -357;

    t141 = (x593^((x594/x595)==x596));

    if (t141 != 11) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x597 = 860567177836026923LL;
	static int16_t x598 = -1;
	uint64_t x599 = UINT64_MAX;
	static uint8_t x600 = 42U;
	volatile int64_t t142 = 29657478626514934LL;

    t142 = (x597^((x598/x599)==x600));

    if (t142 != 860567177836026923LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x601 = -1;
	int16_t x602 = INT16_MIN;
	int8_t x603 = INT8_MIN;
	static uint16_t x604 = 913U;

    t143 = (x601^((x602/x603)==x604));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x605 = INT64_MIN;
	int32_t x606 = INT32_MIN;
	uint64_t x607 = 105354502LLU;
	int64_t t144 = INT64_MIN;

    t144 = (x605^((x606/x607)==x608));

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x609 = INT32_MIN;
	int32_t x610 = INT32_MIN;
	uint32_t x612 = 1333751U;
	int32_t t145 = INT32_MIN;

    t145 = (x609^((x610/x611)==x612));

    if (t145 != INT32_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x614 = 1U;
	volatile uint8_t x615 = 1U;
	int8_t x616 = -37;
	uint64_t t146 = UINT64_MAX;

    t146 = (x613^((x614/x615)==x616));

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x617 = 4903017822014356628LLU;
	static int8_t x618 = INT8_MIN;
	int8_t x619 = INT8_MAX;
	volatile uint64_t t147 = 897829004LLU;

    t147 = (x617^((x618/x619)==x620));

    if (t147 != 4903017822014356628LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x621 = -1;
	static uint16_t x622 = 296U;
	int32_t x623 = INT32_MIN;
	volatile uint32_t x624 = 3876210U;
	int32_t t148 = -1;

    t148 = (x621^((x622/x623)==x624));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x625 = -836148201300113LL;
	static int64_t x626 = -219148LL;
	volatile uint8_t x628 = 3U;
	int64_t t149 = -39128963719023LL;

    t149 = (x625^((x626/x627)==x628));

    if (t149 != -836148201300113LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x630 = INT8_MIN;
	int8_t x631 = INT8_MAX;
	uint8_t x632 = 2U;
	volatile int32_t t150 = -206762947;

    t150 = (x629^((x630/x631)==x632));

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x634 = -27;
	int64_t x635 = -31336966601LL;

    t151 = (x633^((x634/x635)==x636));

    if (t151 != -32768) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x637 = UINT32_MAX;
	int64_t x638 = 6561285074485LL;
	int8_t x639 = INT8_MIN;
	int8_t x640 = INT8_MAX;
	volatile uint32_t t152 = UINT32_MAX;

    t152 = (x637^((x638/x639)==x640));

    if (t152 != UINT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x641 = 1U;
	uint16_t x643 = 16U;
	int16_t x644 = 3;
	uint32_t t153 = 23461475U;

    t153 = (x641^((x642/x643)==x644));

    if (t153 != 1U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x645 = INT8_MAX;
	int16_t x646 = INT16_MIN;
	static int32_t x647 = INT32_MAX;
	int32_t x648 = INT32_MIN;

    t154 = (x645^((x646/x647)==x648));

    if (t154 != 127) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x650 = -1;
	int64_t x651 = INT64_MIN;
	static uint16_t x652 = UINT16_MAX;

    t155 = (x649^((x650/x651)==x652));

    if (t155 != 255) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x653 = 0;
	uint8_t x654 = UINT8_MAX;
	int16_t x655 = -17;
	int32_t x656 = 7;

    t156 = (x653^((x654/x655)==x656));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x657 = 30LLU;
	volatile int8_t x658 = -1;
	uint16_t x659 = 7U;
	uint16_t x660 = 1241U;
	volatile uint64_t t157 = 10205053108800LLU;

    t157 = (x657^((x658/x659)==x660));

    if (t157 != 30LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x661 = 255U;
	int64_t x662 = -349337629112LL;
	static uint8_t x663 = UINT8_MAX;
	int8_t x664 = -1;

    t158 = (x661^((x662/x663)==x664));

    if (t158 != 255) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x665 = INT16_MIN;
	int64_t x666 = -1LL;
	int32_t x667 = INT32_MAX;
	int32_t x668 = INT32_MAX;
	int32_t t159 = -3175;

    t159 = (x665^((x666/x667)==x668));

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x670 = INT16_MIN;
	int8_t x671 = INT8_MAX;
	static uint8_t x672 = 80U;
	volatile int32_t t160 = -433555675;

    t160 = (x669^((x670/x671)==x672));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x673 = 5928365839512LL;
	uint8_t x674 = UINT8_MAX;
	int64_t x675 = -643LL;
	volatile int16_t x676 = 11292;

    t161 = (x673^((x674/x675)==x676));

    if (t161 != 5928365839512LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x677 = -4;
	static int16_t x678 = INT16_MIN;
	static int8_t x680 = INT8_MAX;
	int32_t t162 = 2988;

    t162 = (x677^((x678/x679)==x680));

    if (t162 != -4) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x681 = 7322U;
	int32_t x682 = -1;
	static int16_t x683 = -1;
	volatile int32_t x684 = 8999;

    t163 = (x681^((x682/x683)==x684));

    if (t163 != 7322U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x685 = -97170;
	uint8_t x686 = 1U;
	int64_t x687 = INT64_MIN;
	int64_t x688 = INT64_MIN;
	int32_t t164 = 67055817;

    t164 = (x685^((x686/x687)==x688));

    if (t164 != -97170) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x689 = INT16_MAX;
	static int64_t x690 = -19LL;
	int64_t x691 = INT64_MIN;
	int32_t t165 = 832072;

    t165 = (x689^((x690/x691)==x692));

    if (t165 != 32766) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int64_t x693 = -1LL;
	int8_t x695 = INT8_MAX;
	uint16_t x696 = UINT16_MAX;
	volatile int64_t t166 = 571115671571587570LL;

    t166 = (x693^((x694/x695)==x696));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x697 = -7;
	static uint8_t x698 = 0U;
	int32_t x699 = -1;
	static uint16_t x700 = 188U;
	int32_t t167 = 1775;

    t167 = (x697^((x698/x699)==x700));

    if (t167 != -7) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x702 = INT32_MIN;
	int16_t x703 = INT16_MAX;
	uint32_t t168 = 32U;

    t168 = (x701^((x702/x703)==x704));

    if (t168 != 1260567U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x705 = -1;
	int32_t x706 = -1;
	int16_t x707 = 3383;
	int64_t x708 = INT64_MIN;

    t169 = (x705^((x706/x707)==x708));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x709 = 31;
	static volatile int16_t x710 = INT16_MIN;
	int16_t x711 = INT16_MIN;
	int64_t x712 = -1LL;
	volatile int32_t t170 = -63876;

    t170 = (x709^((x710/x711)==x712));

    if (t170 != 31) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x713 = 14153;
	static int16_t x714 = INT16_MAX;
	int64_t x715 = -1LL;
	uint8_t x716 = UINT8_MAX;
	static volatile int32_t t171 = -210376;

    t171 = (x713^((x714/x715)==x716));

    if (t171 != 14153) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x717 = 2LLU;
	volatile int64_t x718 = -1LL;
	uint8_t x719 = UINT8_MAX;
	uint8_t x720 = 1U;

    t172 = (x717^((x718/x719)==x720));

    if (t172 != 2LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x721 = UINT32_MAX;
	int64_t x723 = INT64_MIN;
	volatile int64_t x724 = 4054749777628LL;
	uint32_t t173 = UINT32_MAX;

    t173 = (x721^((x722/x723)==x724));

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x725 = 346U;
	int8_t x726 = INT8_MIN;
	int64_t x727 = INT64_MIN;
	int64_t x728 = INT64_MAX;
	int32_t t174 = 70;

    t174 = (x725^((x726/x727)==x728));

    if (t174 != 346) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x729 = INT32_MAX;
	static volatile int64_t x730 = INT64_MIN;
	static uint8_t x731 = 23U;
	volatile uint32_t x732 = 28U;

    t175 = (x729^((x730/x731)==x732));

    if (t175 != INT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x733 = -1;
	volatile int16_t x734 = INT16_MIN;
	uint8_t x735 = 1U;
	volatile int32_t t176 = -78727;

    t176 = (x733^((x734/x735)==x736));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x737 = INT16_MIN;
	int16_t x738 = -1;
	uint8_t x739 = UINT8_MAX;
	volatile int32_t t177 = 20528;

    t177 = (x737^((x738/x739)==x740));

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x741 = INT32_MAX;
	int16_t x742 = 0;
	static uint32_t x743 = 1101U;
	volatile int32_t t178 = INT32_MAX;

    t178 = (x741^((x742/x743)==x744));

    if (t178 != INT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x745 = 4493445;
	int8_t x746 = -1;
	static int8_t x747 = INT8_MIN;
	int32_t t179 = -153467;

    t179 = (x745^((x746/x747)==x748));

    if (t179 != 4493445) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x749 = -18;
	static int32_t x751 = INT32_MIN;
	int32_t x752 = INT32_MAX;
	volatile int32_t t180 = -109965;

    t180 = (x749^((x750/x751)==x752));

    if (t180 != -18) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x754 = 23U;
	int8_t x756 = -1;
	int32_t t181 = 0;

    t181 = (x753^((x754/x755)==x756));

    if (t181 != -32768) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x757 = 4729U;
	volatile int8_t x758 = -37;
	volatile int32_t x760 = INT32_MIN;
	volatile int32_t t182 = -20;

    t182 = (x757^((x758/x759)==x760));

    if (t182 != 4729) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x765 = INT8_MIN;
	volatile int16_t x766 = -7611;
	int16_t x767 = 126;
	int8_t x768 = 14;

    t183 = (x765^((x766/x767)==x768));

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x769 = -1LL;
	volatile uint64_t x770 = UINT64_MAX;
	static int32_t x771 = -358;
	uint64_t x772 = 86243323847396453LLU;
	int64_t t184 = -5227377373264964LL;

    t184 = (x769^((x770/x771)==x772));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x773 = 655U;
	static int64_t x774 = 1136281LL;
	volatile int16_t x776 = -170;

    t185 = (x773^((x774/x775)==x776));

    if (t185 != 655) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x777 = INT64_MAX;
	volatile uint64_t x778 = 213777622712325LLU;
	int32_t x779 = 44484026;
	uint64_t x780 = 26645243LLU;
	volatile int64_t t186 = INT64_MAX;

    t186 = (x777^((x778/x779)==x780));

    if (t186 != INT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x781 = 1U;
	static volatile int64_t x782 = INT64_MIN;
	int16_t x784 = INT16_MIN;
	volatile int32_t t187 = 1;

    t187 = (x781^((x782/x783)==x784));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x786 = UINT64_MAX;
	int64_t x787 = -173110894LL;
	int32_t x788 = -305660065;
	volatile uint32_t t188 = 337120U;

    t188 = (x785^((x786/x787)==x788));

    if (t188 != 11547166U) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x791 = -1;
	uint32_t x792 = 108763U;
	int32_t t189 = -24920;

    t189 = (x789^((x790/x791)==x792));

    if (t189 != 37) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x793 = INT16_MIN;
	uint32_t x795 = UINT32_MAX;
	uint64_t x796 = 102798LLU;
	static volatile int32_t t190 = 933;

    t190 = (x793^((x794/x795)==x796));

    if (t190 != -32768) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x797 = 116;
	uint16_t x798 = 3484U;
	uint64_t x799 = 53871LLU;
	volatile uint16_t x800 = UINT16_MAX;
	int32_t t191 = 0;

    t191 = (x797^((x798/x799)==x800));

    if (t191 != 116) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x801 = -1;
	uint16_t x802 = UINT16_MAX;
	int64_t x803 = INT64_MIN;

    t192 = (x801^((x802/x803)==x804));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x808 = UINT8_MAX;
	int32_t t193 = INT32_MIN;

    t193 = (x805^((x806/x807)==x808));

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x809 = INT64_MIN;
	volatile uint8_t x810 = 0U;
	volatile uint8_t x811 = 61U;

    t194 = (x809^((x810/x811)==x812));

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x813 = -1;
	uint64_t x814 = 124386LLU;
	int64_t x815 = INT64_MIN;
	int16_t x816 = 228;
	volatile int32_t t195 = 12479076;

    t195 = (x813^((x814/x815)==x816));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x819 = UINT16_MAX;
	int32_t x820 = -1;
	volatile uint64_t t196 = UINT64_MAX;

    t196 = (x817^((x818/x819)==x820));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x821 = INT8_MIN;
	static int8_t x822 = INT8_MIN;
	uint8_t x823 = UINT8_MAX;

    t197 = (x821^((x822/x823)==x824));

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x825 = -1;
	static uint8_t x826 = 6U;
	int64_t x827 = 13146090LL;
	volatile int64_t x828 = INT64_MIN;
	volatile int32_t t198 = 14;

    t198 = (x825^((x826/x827)==x828));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x830 = INT64_MIN;
	int8_t x831 = INT8_MIN;
	volatile int32_t x832 = INT32_MIN;
	volatile int32_t t199 = -3108353;

    t199 = (x829^((x830/x831)==x832));

    if (t199 != -32768) { NG(); } else { ; }
	
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

