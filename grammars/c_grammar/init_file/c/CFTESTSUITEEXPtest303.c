
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

int8_t x3 = INT8_MAX;
uint8_t x10 = 3U;
int32_t x11 = INT32_MAX;
int32_t x17 = INT32_MIN;
int32_t x21 = INT32_MIN;
int32_t x23 = -7;
static volatile int32_t t4 = -102;
int32_t x30 = INT32_MIN;
uint8_t x40 = UINT8_MAX;
uint64_t x45 = 17597367451563216LLU;
int8_t x53 = INT8_MIN;
static uint32_t x54 = 21U;
int32_t x60 = -1;
uint32_t x61 = 1529U;
int32_t x62 = INT32_MIN;
static volatile int8_t x63 = INT8_MIN;
static volatile int32_t t14 = -5851154;
static int64_t x65 = INT64_MAX;
int32_t x66 = 228689339;
int64_t x78 = 1279451543538LL;
volatile int32_t t20 = -100;
volatile int16_t x109 = INT16_MAX;
volatile int16_t x119 = INT16_MAX;
int32_t x137 = INT32_MIN;
int8_t x143 = INT8_MAX;
int8_t x150 = INT8_MIN;
int32_t x156 = -7;
volatile int32_t x159 = -19686867;
static int32_t t35 = -146;
volatile int32_t x167 = INT32_MAX;
uint64_t x168 = 19088730LLU;
int32_t t36 = 347;
uint16_t x176 = 7U;
int16_t x181 = -1227;
uint32_t x193 = 158U;
volatile uint8_t x194 = 91U;
volatile int32_t t42 = -76;
uint64_t x205 = UINT64_MAX;
uint16_t x206 = 254U;
int64_t x208 = INT64_MIN;
uint64_t x212 = 933LLU;
uint32_t x214 = UINT32_MAX;
int8_t x216 = -1;
static uint64_t x217 = UINT64_MAX;
volatile int32_t t48 = -209;
volatile int32_t x241 = INT32_MAX;
uint32_t x242 = 1759U;
static uint8_t x248 = UINT8_MAX;
int32_t x253 = 1774245;
static uint8_t x255 = 18U;
int8_t x258 = -3;
uint8_t x261 = UINT8_MAX;
volatile uint32_t x262 = UINT32_MAX;
uint16_t x263 = 501U;
volatile uint64_t x271 = UINT64_MAX;
int32_t x272 = -1;
static volatile int32_t t60 = 264;
uint64_t x285 = UINT64_MAX;
int32_t x288 = -1;
int8_t x301 = INT8_MIN;
int32_t t65 = -5;
uint32_t x309 = UINT32_MAX;
int8_t x310 = INT8_MIN;
uint16_t x311 = 2U;
volatile int32_t t68 = 135893;
static volatile uint16_t x325 = 3U;
volatile uint32_t x327 = 926365398U;
int64_t x328 = INT64_MIN;
int16_t x331 = -1;
static int32_t x333 = -1;
int32_t t73 = 63;
int32_t x342 = INT32_MIN;
int64_t x352 = -1LL;
int8_t x358 = INT8_MIN;
volatile uint16_t x361 = 11U;
volatile int8_t x362 = INT8_MIN;
volatile int32_t x364 = 1;
volatile int32_t t79 = 24;
volatile uint64_t x365 = UINT64_MAX;
uint64_t x373 = 75932LLU;
volatile uint16_t x375 = UINT16_MAX;
volatile int32_t t83 = -98;
uint64_t x382 = UINT64_MAX;
uint64_t x389 = UINT64_MAX;
int16_t x390 = -1;
int32_t t85 = -89774210;
uint64_t x393 = 1850189896LLU;
volatile uint64_t x398 = UINT64_MAX;
int32_t x400 = -11;
int32_t x401 = 17112161;
uint32_t x404 = 1020422542U;
int32_t t88 = 364619;
int32_t t89 = -1302840;
volatile uint8_t x411 = UINT8_MAX;
int16_t x414 = INT16_MIN;
uint8_t x415 = UINT8_MAX;
volatile int16_t x419 = -1;
int32_t t92 = -683;
int32_t x429 = 0;
volatile int32_t t94 = -155967;
int16_t x442 = -1;
uint64_t x443 = 4LLU;
volatile uint32_t x445 = UINT32_MAX;
uint64_t x450 = 141706305734547LLU;
int16_t x453 = INT16_MIN;
volatile int8_t x463 = -1;
int32_t t102 = -119677929;
static int16_t x466 = INT16_MIN;
int8_t x467 = INT8_MAX;
static int64_t x486 = -1839LL;
int32_t x489 = 9495253;
static int32_t t109 = 985636272;
int64_t x493 = -1LL;
uint32_t x497 = 1550612U;
volatile int32_t x499 = 55272984;
int32_t x500 = INT32_MIN;
int8_t x505 = INT8_MIN;
uint32_t x509 = UINT32_MAX;
static int32_t x512 = -212;
int16_t x516 = INT16_MIN;
int16_t x519 = -1;
int64_t x526 = 1917076LL;
static volatile uint32_t x527 = 61448U;
int64_t x529 = -1LL;
int16_t x536 = -13181;
volatile int32_t t121 = -1489933;
int32_t t123 = -214;
volatile int32_t t124 = 6807;
volatile int64_t x553 = INT64_MAX;
int32_t t127 = -4;
volatile uint32_t x565 = UINT32_MAX;
volatile int16_t x568 = INT16_MIN;
volatile int32_t t128 = -13640;
static volatile int64_t x570 = -1LL;
int64_t x571 = INT64_MIN;
volatile int64_t x574 = 180516282639304LL;
int32_t t131 = 3;
static volatile int32_t t134 = -1;
int16_t x614 = INT16_MIN;
volatile int32_t t139 = -149;
int16_t x618 = INT16_MIN;
volatile int16_t x627 = INT16_MIN;
static uint16_t x634 = 2218U;
static int64_t x637 = INT64_MIN;
static volatile int16_t x638 = 2788;
int32_t t146 = 4779;
uint32_t x646 = 1610249070U;
int8_t x651 = -1;
int32_t x652 = INT32_MIN;
static uint32_t x654 = UINT32_MAX;
volatile uint8_t x655 = 0U;
static volatile int64_t x657 = INT64_MIN;
int8_t x659 = -1;
int32_t t156 = 28;
int64_t x697 = -30419889LL;
static int8_t x701 = 1;
int32_t x713 = 4150;
int16_t x720 = INT16_MIN;
int32_t t162 = 1;
int64_t x729 = 50050777323795355LL;
uint64_t x730 = UINT64_MAX;
uint16_t x731 = UINT16_MAX;
static int64_t x737 = 65LL;
static int16_t x740 = 79;
int32_t x743 = -1;
static int32_t t168 = 1777;
int8_t x752 = -1;
int32_t x753 = -1;
int64_t x754 = 354454879LL;
uint64_t x759 = 21781447188483023LLU;
int32_t x761 = -1;
volatile uint16_t x763 = 5570U;
uint64_t x774 = 675LLU;
static uint64_t x788 = 26544LLU;
volatile int32_t t178 = 478;
static int32_t x789 = INT32_MIN;
static volatile int32_t t179 = 83280;
static int32_t t182 = 142847;
volatile int16_t x811 = INT16_MIN;
volatile int8_t x813 = INT8_MIN;
int16_t x815 = INT16_MIN;
volatile int64_t x823 = -12381LL;
int8_t x824 = -3;
int32_t x825 = INT32_MIN;
int64_t x836 = INT64_MAX;
uint8_t x838 = 60U;
int32_t x840 = INT32_MIN;
int16_t x844 = INT16_MIN;
int8_t x860 = -1;
int64_t x869 = INT64_MAX;
int16_t x872 = INT16_MAX;
int64_t x875 = INT64_MIN;


void f0(void) {
    	static int32_t x1 = INT32_MIN;
	int8_t x2 = INT8_MIN;
	int16_t x4 = 9808;
	volatile int32_t t0 = -9;

    t0 = (x1>((x2-x3)==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = INT64_MAX;
	int8_t x12 = -18;
	int32_t t1 = -1014;

    t1 = (x9>((x10-x11)==x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = 6LLU;
	volatile int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MIN;
	volatile uint16_t x16 = UINT16_MAX;
	volatile int32_t t2 = 404;

    t2 = (x13>((x14-x15)==x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x18 = UINT8_MAX;
	int16_t x19 = INT16_MIN;
	int8_t x20 = -1;
	int32_t t3 = -3004708;

    t3 = (x17>((x18-x19)==x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x22 = INT8_MIN;
	int32_t x24 = 3430763;

    t4 = (x21>((x22-x23)==x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x25 = INT8_MIN;
	uint16_t x26 = 2U;
	int32_t x27 = 84614;
	int64_t x28 = 967557119221953LL;
	static int32_t t5 = -2286995;

    t5 = (x25>((x26-x27)==x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = UINT8_MAX;
	int64_t x31 = -1LL;
	uint16_t x32 = 21421U;
	int32_t t6 = 0;

    t6 = (x29>((x30-x31)==x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = -3120021897995503LL;
	uint64_t x34 = 58114673427731497LLU;
	static uint32_t x35 = UINT32_MAX;
	static int32_t x36 = 614678304;
	int32_t t7 = 1;

    t7 = (x33>((x34-x35)==x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = UINT32_MAX;
	int16_t x38 = -1;
	volatile int64_t x39 = 1LL;
	volatile int32_t t8 = -856269567;

    t8 = (x37>((x38-x39)==x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x41 = 38435382463099LL;
	static uint32_t x42 = 231609U;
	volatile uint64_t x43 = 39001844656989035LLU;
	uint16_t x44 = 56U;
	static int32_t t9 = 481517826;

    t9 = (x41>((x42-x43)==x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x46 = 17U;
	uint8_t x47 = UINT8_MAX;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t10 = 1;

    t10 = (x45>((x46-x47)==x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = -1;
	uint32_t x50 = 46U;
	static int64_t x51 = -101310378340LL;
	int64_t x52 = -1LL;
	volatile int32_t t11 = -826847;

    t11 = (x49>((x50-x51)==x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x55 = 1U;
	int32_t x56 = INT32_MIN;
	int32_t t12 = 98;

    t12 = (x53>((x54-x55)==x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = 55U;
	int32_t x58 = INT32_MAX;
	uint32_t x59 = 83275U;
	int32_t t13 = 164;

    t13 = (x57>((x58-x59)==x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x64 = INT32_MAX;

    t14 = (x61>((x62-x63)==x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MAX;
	int32_t t15 = -1;

    t15 = (x65>((x66-x67)==x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = -332LL;
	int16_t x70 = INT16_MIN;
	int64_t x71 = 8774168219518563LL;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t16 = -2899;

    t16 = (x69>((x70-x71)==x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MIN;
	volatile int16_t x74 = INT16_MIN;
	uint64_t x75 = UINT64_MAX;
	static volatile int32_t x76 = -1;
	volatile int32_t t17 = 139;

    t17 = (x73>((x74-x75)==x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = INT64_MAX;
	uint16_t x79 = 8U;
	int8_t x80 = INT8_MAX;
	int32_t t18 = 15555688;

    t18 = (x77>((x78-x79)==x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x81 = INT8_MIN;
	static volatile int16_t x82 = -1537;
	int32_t x83 = -1;
	int8_t x84 = 9;
	static volatile int32_t t19 = 6644;

    t19 = (x81>((x82-x83)==x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x85 = -1LL;
	int16_t x86 = INT16_MIN;
	volatile int16_t x87 = INT16_MAX;
	int64_t x88 = -1LL;

    t20 = (x85>((x86-x87)==x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = 502U;
	int64_t x90 = 1LL;
	static int32_t x91 = -1;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t21 = -26301;

    t21 = (x89>((x90-x91)==x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = -2690;
	int64_t x94 = INT64_MIN;
	int16_t x95 = -1;
	volatile int8_t x96 = INT8_MIN;
	int32_t t22 = -71124498;

    t22 = (x93>((x94-x95)==x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x110 = UINT64_MAX;
	int32_t x111 = -1;
	static volatile uint16_t x112 = UINT16_MAX;
	int32_t t23 = 141933;

    t23 = (x109>((x110-x111)==x112));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x113 = 1437515295U;
	int64_t x114 = -1LL;
	int32_t x115 = 2449983;
	int16_t x116 = INT16_MAX;
	static int32_t t24 = 5817;

    t24 = (x113>((x114-x115)==x116));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x117 = 1382048U;
	int64_t x118 = 1939LL;
	volatile uint64_t x120 = 274007444334827LLU;
	volatile int32_t t25 = 466;

    t25 = (x117>((x118-x119)==x120));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x121 = INT8_MIN;
	int64_t x122 = -516980865LL;
	uint16_t x123 = 1593U;
	uint8_t x124 = 4U;
	volatile int32_t t26 = -369967;

    t26 = (x121>((x122-x123)==x124));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x125 = 1160U;
	int64_t x126 = INT64_MIN;
	static int8_t x127 = INT8_MIN;
	int64_t x128 = 10LL;
	volatile int32_t t27 = -3321598;

    t27 = (x125>((x126-x127)==x128));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = INT16_MAX;
	static int16_t x130 = INT16_MIN;
	int32_t x131 = INT32_MIN;
	int8_t x132 = INT8_MAX;
	int32_t t28 = 872;

    t28 = (x129>((x130-x131)==x132));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x138 = 16263325721688732LL;
	int16_t x139 = -230;
	static int32_t x140 = -1;
	int32_t t29 = -1;

    t29 = (x137>((x138-x139)==x140));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MIN;
	static int8_t x144 = INT8_MIN;
	static int32_t t30 = 41;

    t30 = (x141>((x142-x143)==x144));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int64_t x145 = INT64_MIN;
	uint16_t x146 = UINT16_MAX;
	int8_t x147 = -8;
	static volatile int16_t x148 = 12;
	volatile int32_t t31 = -21;

    t31 = (x145>((x146-x147)==x148));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x149 = -1672099556762LL;
	int64_t x151 = INT64_MIN;
	int64_t x152 = -1LL;
	int32_t t32 = -3;

    t32 = (x149>((x150-x151)==x152));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x153 = -1LL;
	static int64_t x154 = INT64_MAX;
	uint8_t x155 = 12U;
	volatile int32_t t33 = 1;

    t33 = (x153>((x154-x155)==x156));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x157 = INT32_MIN;
	static int16_t x158 = INT16_MIN;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t34 = 47;

    t34 = (x157>((x158-x159)==x160));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x161 = 10;
	int8_t x162 = 51;
	uint32_t x163 = 1430U;
	int32_t x164 = INT32_MAX;

    t35 = (x161>((x162-x163)==x164));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x165 = 0LL;
	uint32_t x166 = 1344435U;

    t36 = (x165>((x166-x167)==x168));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x173 = INT32_MIN;
	int16_t x174 = -1113;
	static int64_t x175 = INT64_MIN;
	volatile int32_t t37 = 5234;

    t37 = (x173>((x174-x175)==x176));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x177 = 416U;
	volatile int64_t x178 = INT64_MIN;
	int64_t x179 = -1LL;
	uint16_t x180 = 38U;
	volatile int32_t t38 = 263868142;

    t38 = (x177>((x178-x179)==x180));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x182 = -1LL;
	static uint32_t x183 = 16903U;
	volatile int16_t x184 = INT16_MIN;
	static volatile int32_t t39 = -704;

    t39 = (x181>((x182-x183)==x184));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x185 = 250512U;
	int8_t x186 = INT8_MIN;
	int64_t x187 = INT64_MIN;
	static int32_t x188 = 4935;
	volatile int32_t t40 = 2050514;

    t40 = (x185>((x186-x187)==x188));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x189 = 0;
	static uint32_t x190 = 256U;
	volatile int64_t x191 = 30070190105144LL;
	uint64_t x192 = UINT64_MAX;
	volatile int32_t t41 = -36425089;

    t41 = (x189>((x190-x191)==x192));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x195 = 1;
	int16_t x196 = INT16_MIN;

    t42 = (x193>((x194-x195)==x196));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x197 = INT8_MAX;
	volatile int64_t x198 = -136713LL;
	int32_t x199 = 14029;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t43 = 3036043;

    t43 = (x197>((x198-x199)==x200));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x201 = -1LL;
	volatile int8_t x202 = INT8_MIN;
	int32_t x203 = -1;
	static int16_t x204 = -61;
	static int32_t t44 = 18;

    t44 = (x201>((x202-x203)==x204));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x207 = UINT64_MAX;
	volatile int32_t t45 = 724451314;

    t45 = (x205>((x206-x207)==x208));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x209 = INT32_MIN;
	int32_t x210 = -2429572;
	uint32_t x211 = UINT32_MAX;
	static volatile int32_t t46 = -11793;

    t46 = (x209>((x210-x211)==x212));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x213 = -7801;
	int32_t x215 = 17;
	volatile int32_t t47 = 1513;

    t47 = (x213>((x214-x215)==x216));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x218 = 5U;
	static volatile int64_t x219 = -20289827019879LL;
	int32_t x220 = -1;

    t48 = (x217>((x218-x219)==x220));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x221 = INT64_MIN;
	volatile uint64_t x222 = UINT64_MAX;
	int16_t x223 = -2;
	int8_t x224 = -33;
	volatile int32_t t49 = -67109886;

    t49 = (x221>((x222-x223)==x224));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x229 = UINT8_MAX;
	int8_t x230 = 1;
	int64_t x231 = 122855LL;
	volatile int16_t x232 = INT16_MIN;
	int32_t t50 = -137;

    t50 = (x229>((x230-x231)==x232));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x233 = UINT32_MAX;
	int16_t x234 = -25;
	int32_t x235 = -1;
	int32_t x236 = 24;
	volatile int32_t t51 = 1;

    t51 = (x233>((x234-x235)==x236));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x243 = 220LL;
	int32_t x244 = 16478619;
	volatile int32_t t52 = 0;

    t52 = (x241>((x242-x243)==x244));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x245 = 1118689U;
	int16_t x246 = -1;
	static int32_t x247 = 45527;
	static volatile int32_t t53 = 0;

    t53 = (x245>((x246-x247)==x248));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x249 = INT64_MAX;
	int32_t x250 = -1505043;
	int16_t x251 = 29;
	static uint16_t x252 = UINT16_MAX;
	int32_t t54 = 7;

    t54 = (x249>((x250-x251)==x252));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x254 = UINT16_MAX;
	int16_t x256 = 105;
	volatile int32_t t55 = -192;

    t55 = (x253>((x254-x255)==x256));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x257 = 27884U;
	int16_t x259 = INT16_MIN;
	uint8_t x260 = 8U;
	volatile int32_t t56 = -50;

    t56 = (x257>((x258-x259)==x260));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x264 = INT16_MAX;
	static volatile int32_t t57 = 20;

    t57 = (x261>((x262-x263)==x264));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x265 = UINT8_MAX;
	volatile uint16_t x266 = UINT16_MAX;
	uint64_t x267 = 0LLU;
	int64_t x268 = INT64_MIN;
	volatile int32_t t58 = 2;

    t58 = (x265>((x266-x267)==x268));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint32_t x269 = UINT32_MAX;
	static volatile int8_t x270 = INT8_MIN;
	int32_t t59 = -13481521;

    t59 = (x269>((x270-x271)==x272));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x273 = INT64_MIN;
	static volatile int8_t x274 = -1;
	int64_t x275 = -2666799016531LL;
	int16_t x276 = INT16_MAX;

    t60 = (x273>((x274-x275)==x276));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x281 = 0LLU;
	int64_t x282 = -1LL;
	uint8_t x283 = 54U;
	uint32_t x284 = 2354358U;
	volatile int32_t t61 = 1;

    t61 = (x281>((x282-x283)==x284));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x286 = -1;
	uint8_t x287 = UINT8_MAX;
	volatile int32_t t62 = 26233336;

    t62 = (x285>((x286-x287)==x288));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x289 = -1;
	static int64_t x290 = 16508647735361604LL;
	int16_t x291 = INT16_MIN;
	static int32_t x292 = -1;
	static volatile int32_t t63 = -34;

    t63 = (x289>((x290-x291)==x292));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x297 = 194U;
	int64_t x298 = INT64_MIN;
	int16_t x299 = -542;
	uint8_t x300 = 2U;
	static int32_t t64 = -101981635;

    t64 = (x297>((x298-x299)==x300));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x302 = INT16_MAX;
	uint32_t x303 = 4151U;
	int32_t x304 = INT32_MIN;

    t65 = (x301>((x302-x303)==x304));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x312 = 451U;
	int32_t t66 = 112514;

    t66 = (x309>((x310-x311)==x312));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x313 = UINT8_MAX;
	static uint64_t x314 = 508344565810157412LLU;
	int8_t x315 = INT8_MIN;
	static int8_t x316 = 0;
	volatile int32_t t67 = 24;

    t67 = (x313>((x314-x315)==x316));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x317 = 2U;
	int64_t x318 = INT64_MIN;
	uint64_t x319 = 301902657600LLU;
	uint16_t x320 = 14625U;

    t68 = (x317>((x318-x319)==x320));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x321 = INT32_MIN;
	uint32_t x322 = UINT32_MAX;
	int16_t x323 = INT16_MIN;
	int32_t x324 = -1;
	int32_t t69 = 0;

    t69 = (x321>((x322-x323)==x324));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x326 = 21922U;
	int32_t t70 = -28934;

    t70 = (x325>((x326-x327)==x328));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x329 = 583U;
	int16_t x330 = INT16_MIN;
	uint16_t x332 = UINT16_MAX;
	int32_t t71 = 100;

    t71 = (x329>((x330-x331)==x332));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x334 = UINT64_MAX;
	int8_t x335 = INT8_MIN;
	uint32_t x336 = 951856U;
	volatile int32_t t72 = -4190874;

    t72 = (x333>((x334-x335)==x336));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x337 = -1;
	volatile uint16_t x338 = 0U;
	uint64_t x339 = 5LLU;
	int8_t x340 = 0;

    t73 = (x337>((x338-x339)==x340));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x341 = INT32_MIN;
	int32_t x343 = -1;
	uint64_t x344 = 13706036975LLU;
	static volatile int32_t t74 = -7;

    t74 = (x341>((x342-x343)==x344));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x345 = 8U;
	int8_t x346 = 4;
	int64_t x347 = -1LL;
	uint16_t x348 = 14U;
	static volatile int32_t t75 = -1;

    t75 = (x345>((x346-x347)==x348));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x349 = 15;
	int8_t x350 = INT8_MAX;
	volatile uint64_t x351 = 0LLU;
	int32_t t76 = -735;

    t76 = (x349>((x350-x351)==x352));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x353 = 143158871637LLU;
	uint16_t x354 = 13354U;
	int64_t x355 = 2048462116591397LL;
	int16_t x356 = INT16_MIN;
	int32_t t77 = 366584;

    t77 = (x353>((x354-x355)==x356));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x357 = -1LL;
	uint8_t x359 = 1U;
	int16_t x360 = INT16_MAX;
	volatile int32_t t78 = -213;

    t78 = (x357>((x358-x359)==x360));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint8_t x363 = 13U;

    t79 = (x361>((x362-x363)==x364));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x366 = 2955;
	int8_t x367 = -1;
	volatile uint32_t x368 = 213957469U;
	static int32_t t80 = -73095;

    t80 = (x365>((x366-x367)==x368));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x369 = UINT32_MAX;
	uint16_t x370 = 1U;
	int16_t x371 = INT16_MIN;
	static int8_t x372 = -1;
	volatile int32_t t81 = 318;

    t81 = (x369>((x370-x371)==x372));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x374 = 0U;
	int16_t x376 = -1;
	static int32_t t82 = 175764710;

    t82 = (x373>((x374-x375)==x376));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x377 = INT16_MIN;
	volatile int64_t x378 = -409609LL;
	volatile uint64_t x379 = UINT64_MAX;
	int32_t x380 = -168;

    t83 = (x377>((x378-x379)==x380));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x381 = INT64_MIN;
	volatile uint8_t x383 = 48U;
	static int64_t x384 = -1LL;
	int32_t t84 = 343;

    t84 = (x381>((x382-x383)==x384));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x391 = -1;
	int8_t x392 = -4;

    t85 = (x389>((x390-x391)==x392));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x394 = 42;
	int64_t x395 = 62258762LL;
	int8_t x396 = 10;
	volatile int32_t t86 = -1392793;

    t86 = (x393>((x394-x395)==x396));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x397 = INT8_MAX;
	uint8_t x399 = UINT8_MAX;
	int32_t t87 = 317133;

    t87 = (x397>((x398-x399)==x400));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x402 = UINT8_MAX;
	int16_t x403 = INT16_MIN;

    t88 = (x401>((x402-x403)==x404));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x405 = 1;
	volatile int16_t x406 = -1;
	uint32_t x407 = UINT32_MAX;
	uint8_t x408 = 2U;

    t89 = (x405>((x406-x407)==x408));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x409 = -430539627;
	int64_t x410 = -6535381224423LL;
	int32_t x412 = 3;
	static int32_t t90 = 76;

    t90 = (x409>((x410-x411)==x412));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x413 = -1;
	int8_t x416 = -1;
	int32_t t91 = 0;

    t91 = (x413>((x414-x415)==x416));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x417 = -1LL;
	uint8_t x418 = 0U;
	int16_t x420 = INT16_MIN;

    t92 = (x417>((x418-x419)==x420));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x421 = UINT16_MAX;
	volatile int32_t x422 = -3706111;
	volatile int64_t x423 = INT64_MIN;
	static uint16_t x424 = 0U;
	int32_t t93 = -966;

    t93 = (x421>((x422-x423)==x424));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x430 = INT64_MAX;
	uint8_t x431 = UINT8_MAX;
	int16_t x432 = -1;

    t94 = (x429>((x430-x431)==x432));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x433 = INT64_MIN;
	uint64_t x434 = 13LLU;
	int16_t x435 = -1;
	uint8_t x436 = UINT8_MAX;
	int32_t t95 = -111118798;

    t95 = (x433>((x434-x435)==x436));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x437 = UINT64_MAX;
	int16_t x438 = -88;
	volatile int8_t x439 = 1;
	uint64_t x440 = 263699142872308LLU;
	volatile int32_t t96 = -12287;

    t96 = (x437>((x438-x439)==x440));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x441 = 106983140LLU;
	int64_t x444 = INT64_MIN;
	int32_t t97 = -2174369;

    t97 = (x441>((x442-x443)==x444));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x446 = 11;
	int16_t x447 = -1;
	volatile uint8_t x448 = 69U;
	volatile int32_t t98 = -106110;

    t98 = (x445>((x446-x447)==x448));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x449 = UINT8_MAX;
	uint8_t x451 = 1U;
	static int32_t x452 = INT32_MIN;
	static volatile int32_t t99 = -3;

    t99 = (x449>((x450-x451)==x452));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x454 = INT32_MAX;
	int8_t x455 = INT8_MAX;
	int32_t x456 = -1;
	volatile int32_t t100 = 97;

    t100 = (x453>((x454-x455)==x456));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x457 = 305641249;
	volatile int16_t x458 = -1;
	int16_t x459 = 3;
	uint8_t x460 = 53U;
	static int32_t t101 = -24289956;

    t101 = (x457>((x458-x459)==x460));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x461 = 141U;
	static int32_t x462 = INT32_MIN;
	int64_t x464 = INT64_MIN;

    t102 = (x461>((x462-x463)==x464));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x465 = 205256647;
	int8_t x468 = -1;
	volatile int32_t t103 = 348;

    t103 = (x465>((x466-x467)==x468));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x469 = 8866270770818733943LLU;
	int32_t x470 = INT32_MIN;
	static uint32_t x471 = 0U;
	int16_t x472 = INT16_MIN;
	volatile int32_t t104 = -743105;

    t104 = (x469>((x470-x471)==x472));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x473 = UINT32_MAX;
	uint8_t x474 = 106U;
	volatile int8_t x475 = INT8_MAX;
	int8_t x476 = INT8_MIN;
	int32_t t105 = 503;

    t105 = (x473>((x474-x475)==x476));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x477 = 99LLU;
	volatile int32_t x478 = -134;
	static int16_t x479 = -103;
	volatile int64_t x480 = INT64_MAX;
	static int32_t t106 = -59327528;

    t106 = (x477>((x478-x479)==x480));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x481 = 97U;
	static uint64_t x482 = UINT64_MAX;
	int64_t x483 = -3LL;
	volatile int64_t x484 = INT64_MIN;
	static int32_t t107 = 248;

    t107 = (x481>((x482-x483)==x484));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x485 = INT32_MAX;
	static int8_t x487 = INT8_MIN;
	static uint8_t x488 = 62U;
	static int32_t t108 = 34121;

    t108 = (x485>((x486-x487)==x488));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x490 = INT32_MIN;
	int8_t x491 = -1;
	static int64_t x492 = -1LL;

    t109 = (x489>((x490-x491)==x492));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x494 = INT8_MAX;
	static volatile uint32_t x495 = UINT32_MAX;
	uint32_t x496 = 227111U;
	volatile int32_t t110 = -6;

    t110 = (x493>((x494-x495)==x496));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x498 = INT16_MIN;
	volatile int32_t t111 = -25137;

    t111 = (x497>((x498-x499)==x500));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x501 = 35;
	volatile int64_t x502 = -1LL;
	int32_t x503 = INT32_MIN;
	static volatile uint32_t x504 = 2625776U;
	volatile int32_t t112 = -411991;

    t112 = (x501>((x502-x503)==x504));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x506 = INT16_MAX;
	volatile uint16_t x507 = 16274U;
	uint8_t x508 = UINT8_MAX;
	volatile int32_t t113 = 10;

    t113 = (x505>((x506-x507)==x508));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x510 = INT16_MAX;
	volatile uint8_t x511 = 27U;
	int32_t t114 = 919;

    t114 = (x509>((x510-x511)==x512));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x513 = INT16_MIN;
	int8_t x514 = INT8_MIN;
	volatile uint64_t x515 = 16336621006LLU;
	volatile int32_t t115 = -70;

    t115 = (x513>((x514-x515)==x516));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x517 = 1U;
	int32_t x518 = -1651;
	int16_t x520 = 1;
	volatile int32_t t116 = 8174;

    t116 = (x517>((x518-x519)==x520));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x521 = 35U;
	int32_t x522 = INT32_MIN;
	int32_t x523 = INT32_MIN;
	int64_t x524 = INT64_MIN;
	static volatile int32_t t117 = 2;

    t117 = (x521>((x522-x523)==x524));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x525 = INT32_MAX;
	int8_t x528 = INT8_MIN;
	int32_t t118 = 1;

    t118 = (x525>((x526-x527)==x528));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x530 = INT16_MAX;
	volatile uint16_t x531 = 22489U;
	int16_t x532 = -1;
	static int32_t t119 = -26;

    t119 = (x529>((x530-x531)==x532));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x533 = INT32_MAX;
	static int16_t x534 = INT16_MAX;
	int16_t x535 = INT16_MAX;
	volatile int32_t t120 = 0;

    t120 = (x533>((x534-x535)==x536));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x537 = 484LLU;
	static int32_t x538 = -1;
	int32_t x539 = 1;
	int32_t x540 = -774703;

    t121 = (x537>((x538-x539)==x540));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x541 = UINT32_MAX;
	volatile uint64_t x542 = 129580LLU;
	int16_t x543 = INT16_MIN;
	int64_t x544 = -245498723611LL;
	static int32_t t122 = 60063;

    t122 = (x541>((x542-x543)==x544));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x545 = 112U;
	int8_t x546 = 0;
	volatile uint64_t x547 = 63777LLU;
	volatile uint8_t x548 = 17U;

    t123 = (x545>((x546-x547)==x548));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x549 = 940964332U;
	static int32_t x550 = INT32_MAX;
	uint64_t x551 = 181119609123312LLU;
	volatile int32_t x552 = INT32_MIN;

    t124 = (x549>((x550-x551)==x552));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x554 = -1;
	int16_t x555 = 9257;
	volatile int32_t x556 = 2275;
	int32_t t125 = -108238;

    t125 = (x553>((x554-x555)==x556));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x557 = UINT16_MAX;
	static volatile int64_t x558 = -132882210LL;
	int16_t x559 = 0;
	int8_t x560 = INT8_MAX;
	static volatile int32_t t126 = 62412;

    t126 = (x557>((x558-x559)==x560));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x561 = UINT16_MAX;
	static int64_t x562 = INT64_MAX;
	int8_t x563 = 0;
	uint32_t x564 = 106044946U;

    t127 = (x561>((x562-x563)==x564));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x566 = UINT16_MAX;
	volatile uint32_t x567 = 23114308U;

    t128 = (x565>((x566-x567)==x568));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x569 = -1239938923536LL;
	static uint32_t x572 = 134376987U;
	volatile int32_t t129 = -1557476;

    t129 = (x569>((x570-x571)==x572));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x573 = 388204U;
	static int16_t x575 = INT16_MIN;
	int8_t x576 = INT8_MIN;
	int32_t t130 = 472;

    t130 = (x573>((x574-x575)==x576));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x581 = 13U;
	volatile int32_t x582 = -1;
	static uint32_t x583 = 95U;
	static uint16_t x584 = 1720U;

    t131 = (x581>((x582-x583)==x584));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x585 = -1;
	volatile uint16_t x586 = 62U;
	int16_t x587 = -1;
	volatile int16_t x588 = -1;
	volatile int32_t t132 = -23177297;

    t132 = (x585>((x586-x587)==x588));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x589 = 1U;
	volatile int16_t x590 = INT16_MIN;
	static volatile int32_t x591 = INT32_MIN;
	uint8_t x592 = UINT8_MAX;
	int32_t t133 = 64828;

    t133 = (x589>((x590-x591)==x592));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x593 = -1;
	int64_t x594 = 2694LL;
	uint32_t x595 = 97U;
	static int64_t x596 = -105840LL;

    t134 = (x593>((x594-x595)==x596));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x597 = 6268U;
	int16_t x598 = -1;
	volatile int16_t x599 = INT16_MIN;
	int64_t x600 = 4914305242051877LL;
	volatile int32_t t135 = 63;

    t135 = (x597>((x598-x599)==x600));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x601 = UINT64_MAX;
	uint8_t x602 = 1U;
	volatile int8_t x603 = -1;
	int64_t x604 = -3LL;
	volatile int32_t t136 = 128;

    t136 = (x601>((x602-x603)==x604));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x605 = INT16_MIN;
	int64_t x606 = 22LL;
	volatile uint8_t x607 = 0U;
	int64_t x608 = INT64_MAX;
	int32_t t137 = -7884269;

    t137 = (x605>((x606-x607)==x608));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x609 = INT8_MIN;
	int32_t x610 = INT32_MIN;
	int16_t x611 = -79;
	static int8_t x612 = -1;
	volatile int32_t t138 = 1890112;

    t138 = (x609>((x610-x611)==x612));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x613 = 3;
	uint8_t x615 = 11U;
	uint32_t x616 = UINT32_MAX;

    t139 = (x613>((x614-x615)==x616));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x617 = 21471956;
	int8_t x619 = INT8_MIN;
	int16_t x620 = -1;
	int32_t t140 = -8204126;

    t140 = (x617>((x618-x619)==x620));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x621 = INT8_MIN;
	uint32_t x622 = 88U;
	uint8_t x623 = 5U;
	int64_t x624 = -78519969660LL;
	static volatile int32_t t141 = 0;

    t141 = (x621>((x622-x623)==x624));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x625 = -28350LL;
	uint8_t x626 = 0U;
	int32_t x628 = INT32_MAX;
	volatile int32_t t142 = 60410283;

    t142 = (x625>((x626-x627)==x628));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x629 = INT16_MIN;
	int8_t x630 = INT8_MIN;
	int16_t x631 = INT16_MAX;
	uint32_t x632 = 374990U;
	int32_t t143 = 387891524;

    t143 = (x629>((x630-x631)==x632));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x633 = INT16_MIN;
	uint16_t x635 = UINT16_MAX;
	uint8_t x636 = UINT8_MAX;
	static volatile int32_t t144 = 3;

    t144 = (x633>((x634-x635)==x636));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x639 = UINT32_MAX;
	int32_t x640 = -87860307;
	int32_t t145 = -70705;

    t145 = (x637>((x638-x639)==x640));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x641 = 27227U;
	int8_t x642 = INT8_MIN;
	volatile int8_t x643 = 0;
	int8_t x644 = INT8_MAX;

    t146 = (x641>((x642-x643)==x644));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x645 = UINT16_MAX;
	uint64_t x647 = UINT64_MAX;
	int32_t x648 = INT32_MIN;
	volatile int32_t t147 = -1;

    t147 = (x645>((x646-x647)==x648));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x649 = 5454;
	int32_t x650 = 75916763;
	volatile int32_t t148 = 2;

    t148 = (x649>((x650-x651)==x652));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x653 = 179U;
	int32_t x656 = 3533400;
	volatile int32_t t149 = 23102;

    t149 = (x653>((x654-x655)==x656));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x658 = 19;
	uint32_t x660 = UINT32_MAX;
	int32_t t150 = 439;

    t150 = (x657>((x658-x659)==x660));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x661 = -1;
	volatile uint64_t x662 = UINT64_MAX;
	uint32_t x663 = 32468546U;
	volatile int16_t x664 = 97;
	int32_t t151 = -351106;

    t151 = (x661>((x662-x663)==x664));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x665 = -1;
	uint64_t x666 = 188683246979950554LLU;
	volatile int8_t x667 = INT8_MIN;
	int32_t x668 = 39498083;
	volatile int32_t t152 = -99;

    t152 = (x665>((x666-x667)==x668));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x669 = 177698280LL;
	volatile int64_t x670 = -1LL;
	static uint16_t x671 = 72U;
	static uint8_t x672 = 5U;
	int32_t t153 = -417;

    t153 = (x669>((x670-x671)==x672));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x677 = -1984481137442LL;
	uint8_t x678 = 109U;
	static int16_t x679 = -1;
	volatile int8_t x680 = -1;
	int32_t t154 = -3578785;

    t154 = (x677>((x678-x679)==x680));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x685 = 1253;
	int64_t x686 = 277909138347039LL;
	uint8_t x687 = UINT8_MAX;
	int16_t x688 = -1980;
	static volatile int32_t t155 = 22;

    t155 = (x685>((x686-x687)==x688));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x689 = 0;
	uint8_t x690 = 1U;
	static int32_t x691 = -1;
	uint8_t x692 = 16U;

    t156 = (x689>((x690-x691)==x692));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x693 = 3U;
	volatile int8_t x694 = 14;
	static uint16_t x695 = 32088U;
	uint8_t x696 = UINT8_MAX;
	volatile int32_t t157 = 1;

    t157 = (x693>((x694-x695)==x696));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x698 = 28;
	int32_t x699 = INT32_MAX;
	int8_t x700 = INT8_MIN;
	volatile int32_t t158 = -10801;

    t158 = (x697>((x698-x699)==x700));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x702 = 63U;
	static uint16_t x703 = 2U;
	volatile uint64_t x704 = 328852387193805LLU;
	int32_t t159 = 29511;

    t159 = (x701>((x702-x703)==x704));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x714 = UINT64_MAX;
	static uint32_t x715 = UINT32_MAX;
	uint16_t x716 = 22U;
	int32_t t160 = 65485;

    t160 = (x713>((x714-x715)==x716));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x717 = 47968207;
	int32_t x718 = INT32_MIN;
	volatile int64_t x719 = 6526LL;
	volatile int32_t t161 = -29503;

    t161 = (x717>((x718-x719)==x720));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x721 = 196LL;
	int32_t x722 = INT32_MIN;
	uint32_t x723 = 499212U;
	volatile int8_t x724 = -1;

    t162 = (x721>((x722-x723)==x724));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x725 = 12933205794291LLU;
	static volatile int64_t x726 = INT64_MAX;
	int64_t x727 = INT64_MAX;
	static uint64_t x728 = 580LLU;
	int32_t t163 = -31;

    t163 = (x725>((x726-x727)==x728));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x732 = UINT8_MAX;
	volatile int32_t t164 = -21417;

    t164 = (x729>((x730-x731)==x732));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x733 = INT16_MIN;
	volatile int16_t x734 = INT16_MIN;
	uint8_t x735 = 0U;
	uint64_t x736 = 888616465642907LLU;
	volatile int32_t t165 = 14;

    t165 = (x733>((x734-x735)==x736));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x738 = INT8_MIN;
	uint8_t x739 = UINT8_MAX;
	volatile int32_t t166 = 1836400;

    t166 = (x737>((x738-x739)==x740));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x741 = INT16_MIN;
	static uint32_t x742 = 20574206U;
	uint32_t x744 = 3U;
	int32_t t167 = -50;

    t167 = (x741>((x742-x743)==x744));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x745 = INT32_MAX;
	int32_t x746 = INT32_MAX;
	volatile uint8_t x747 = UINT8_MAX;
	uint16_t x748 = 150U;

    t168 = (x745>((x746-x747)==x748));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x749 = -6;
	static uint64_t x750 = 6553958880186LLU;
	int32_t x751 = -1;
	static volatile int32_t t169 = -412816005;

    t169 = (x749>((x750-x751)==x752));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x755 = UINT16_MAX;
	volatile int16_t x756 = -1;
	static volatile int32_t t170 = 123742;

    t170 = (x753>((x754-x755)==x756));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x757 = INT8_MIN;
	int32_t x758 = INT32_MAX;
	int8_t x760 = INT8_MAX;
	volatile int32_t t171 = -626227861;

    t171 = (x757>((x758-x759)==x760));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x762 = 13U;
	int32_t x764 = -1376;
	volatile int32_t t172 = 6559863;

    t172 = (x761>((x762-x763)==x764));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x765 = 4;
	static int64_t x766 = -1LL;
	static int64_t x767 = -76LL;
	int16_t x768 = 87;
	static int32_t t173 = 548155666;

    t173 = (x765>((x766-x767)==x768));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x769 = 1384806097LLU;
	int32_t x770 = -1;
	volatile int32_t x771 = -1;
	int16_t x772 = -1;
	volatile int32_t t174 = -15;

    t174 = (x769>((x770-x771)==x772));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x773 = INT64_MAX;
	int64_t x775 = INT64_MAX;
	int8_t x776 = INT8_MAX;
	volatile int32_t t175 = -150791;

    t175 = (x773>((x774-x775)==x776));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x777 = 24LLU;
	int16_t x778 = INT16_MIN;
	static int32_t x779 = 295;
	int16_t x780 = -1;
	static volatile int32_t t176 = 207092;

    t176 = (x777>((x778-x779)==x780));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x781 = INT32_MAX;
	static int64_t x782 = 6267662910955LL;
	static int8_t x783 = INT8_MAX;
	volatile int16_t x784 = 5;
	static volatile int32_t t177 = -515495217;

    t177 = (x781>((x782-x783)==x784));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x785 = INT16_MAX;
	static int8_t x786 = INT8_MAX;
	uint16_t x787 = 779U;

    t178 = (x785>((x786-x787)==x788));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x790 = 91U;
	volatile uint16_t x791 = UINT16_MAX;
	int32_t x792 = 5538905;

    t179 = (x789>((x790-x791)==x792));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x793 = -17830LL;
	int64_t x794 = 97241LL;
	int32_t x795 = INT32_MIN;
	static int64_t x796 = INT64_MIN;
	int32_t t180 = 750713516;

    t180 = (x793>((x794-x795)==x796));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x797 = INT32_MAX;
	volatile uint8_t x798 = 61U;
	uint32_t x799 = 40U;
	uint64_t x800 = 32LLU;
	static volatile int32_t t181 = -1032645870;

    t181 = (x797>((x798-x799)==x800));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x801 = 108U;
	static int32_t x802 = -1;
	uint64_t x803 = UINT64_MAX;
	int32_t x804 = -47649050;

    t182 = (x801>((x802-x803)==x804));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x805 = INT8_MIN;
	static int16_t x806 = 7790;
	uint32_t x807 = UINT32_MAX;
	int16_t x808 = INT16_MIN;
	int32_t t183 = -13603433;

    t183 = (x805>((x806-x807)==x808));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x809 = 9;
	volatile int8_t x810 = -1;
	static volatile uint8_t x812 = UINT8_MAX;
	int32_t t184 = 494557;

    t184 = (x809>((x810-x811)==x812));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x814 = INT8_MIN;
	uint8_t x816 = UINT8_MAX;
	int32_t t185 = -113550;

    t185 = (x813>((x814-x815)==x816));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint8_t x817 = 80U;
	int8_t x818 = INT8_MIN;
	int16_t x819 = INT16_MAX;
	int16_t x820 = 15;
	int32_t t186 = 136;

    t186 = (x817>((x818-x819)==x820));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x821 = -1;
	int8_t x822 = INT8_MAX;
	volatile int32_t t187 = 4033;

    t187 = (x821>((x822-x823)==x824));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x826 = -1;
	uint8_t x827 = UINT8_MAX;
	static int64_t x828 = INT64_MAX;
	int32_t t188 = -18012;

    t188 = (x825>((x826-x827)==x828));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x833 = 1;
	volatile int32_t x834 = -1;
	static volatile uint32_t x835 = UINT32_MAX;
	int32_t t189 = -4;

    t189 = (x833>((x834-x835)==x836));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x837 = UINT32_MAX;
	int32_t x839 = INT32_MAX;
	int32_t t190 = -7852110;

    t190 = (x837>((x838-x839)==x840));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x841 = 93743135U;
	static uint16_t x842 = 8U;
	int16_t x843 = INT16_MAX;
	volatile int32_t t191 = -1267;

    t191 = (x841>((x842-x843)==x844));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x845 = 2071088937269LL;
	volatile int8_t x846 = INT8_MIN;
	static uint32_t x847 = 30108522U;
	static int64_t x848 = -216093LL;
	int32_t t192 = 23569;

    t192 = (x845>((x846-x847)==x848));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x849 = -3;
	volatile uint64_t x850 = UINT64_MAX;
	int8_t x851 = -1;
	uint8_t x852 = UINT8_MAX;
	volatile int32_t t193 = 278493533;

    t193 = (x849>((x850-x851)==x852));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x853 = INT32_MIN;
	int32_t x854 = INT32_MIN;
	int32_t x855 = -831385957;
	uint32_t x856 = 256688848U;
	volatile int32_t t194 = 6599135;

    t194 = (x853>((x854-x855)==x856));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x857 = 50695LLU;
	uint16_t x858 = 4U;
	volatile uint32_t x859 = 26U;
	volatile int32_t t195 = -130979773;

    t195 = (x857>((x858-x859)==x860));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x861 = INT64_MAX;
	static int32_t x862 = 26057492;
	volatile int16_t x863 = -1;
	uint64_t x864 = UINT64_MAX;
	int32_t t196 = 185622;

    t196 = (x861>((x862-x863)==x864));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x865 = -1;
	int32_t x866 = 14053;
	volatile int16_t x867 = -1;
	uint32_t x868 = UINT32_MAX;
	volatile int32_t t197 = -8;

    t197 = (x865>((x866-x867)==x868));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x870 = INT16_MAX;
	static uint16_t x871 = UINT16_MAX;
	volatile int32_t t198 = 3;

    t198 = (x869>((x870-x871)==x872));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x873 = -1LL;
	int64_t x874 = INT64_MIN;
	uint8_t x876 = 59U;
	int32_t t199 = -21522;

    t199 = (x873>((x874-x875)==x876));

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

