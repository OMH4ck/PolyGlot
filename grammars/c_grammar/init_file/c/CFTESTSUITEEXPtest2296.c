
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

uint16_t x1 = UINT16_MAX;
int32_t x2 = -31097;
int64_t x3 = -70967697087850LL;
static int8_t x5 = -1;
int8_t x8 = -1;
static int32_t t1 = 165785832;
uint64_t x10 = UINT64_MAX;
static uint8_t x11 = 84U;
int8_t x17 = -23;
static volatile int32_t t4 = -10939;
volatile uint64_t x21 = UINT64_MAX;
uint16_t x24 = 21123U;
uint8_t x25 = 3U;
int16_t x26 = -1;
int8_t x32 = -1;
volatile uint8_t x38 = UINT8_MAX;
int64_t x40 = INT64_MAX;
int32_t t9 = -7076;
int8_t x50 = 12;
uint8_t x62 = 5U;
int16_t x74 = INT16_MIN;
static volatile int32_t x81 = -1;
uint8_t x87 = UINT8_MAX;
int32_t t21 = -111252328;
int64_t x90 = -1LL;
int8_t x93 = INT8_MAX;
int8_t x100 = 18;
int32_t x102 = INT32_MIN;
int64_t x105 = INT64_MAX;
int8_t x109 = INT8_MIN;
int32_t t27 = 239462;
int16_t x116 = -62;
uint32_t x119 = 11U;
static uint16_t x123 = 22297U;
volatile int32_t t31 = INT32_MIN;
static int32_t x132 = -1;
uint16_t x133 = 1U;
volatile int16_t x134 = INT16_MIN;
int16_t x135 = INT16_MAX;
int32_t x137 = INT32_MIN;
uint8_t x144 = 51U;
uint16_t x151 = 21108U;
int8_t x159 = INT8_MIN;
volatile uint16_t x161 = 22990U;
volatile int32_t x163 = -1;
uint8_t x171 = UINT8_MAX;
int32_t x172 = 2;
static int32_t x173 = -37102281;
volatile int8_t x178 = INT8_MIN;
volatile int32_t t44 = 94;
int32_t t47 = 2370;
uint32_t x196 = 17263U;
static uint64_t x197 = 50263909750398614LLU;
static uint64_t t49 = 195703527656854LLU;
int64_t x210 = INT64_MIN;
int16_t x213 = INT16_MIN;
volatile int16_t x217 = INT16_MAX;
int8_t x220 = INT8_MAX;
static volatile uint64_t x222 = 1532462407LLU;
volatile uint32_t x230 = 82605U;
int64_t t59 = -1LL;
int8_t x241 = INT8_MIN;
static int8_t x247 = -50;
int16_t x248 = 39;
static int32_t x255 = -1;
volatile uint16_t x256 = 4461U;
int8_t x276 = -12;
int8_t x278 = -1;
uint16_t x280 = 23086U;
uint64_t x283 = UINT64_MAX;
uint64_t x288 = UINT64_MAX;
int64_t x290 = INT64_MAX;
volatile int64_t x296 = INT64_MIN;
int8_t x316 = -1;
int64_t x320 = INT64_MIN;
static volatile int32_t t79 = -1;
int32_t x322 = -1;
int16_t x323 = INT16_MAX;
int16_t x328 = 1;
volatile int32_t t81 = -49173604;
int16_t x333 = INT16_MIN;
uint8_t x334 = 3U;
int32_t x340 = INT32_MIN;
uint16_t x343 = 192U;
volatile uint64_t t85 = 4215588119LLU;
int64_t x349 = INT64_MAX;
int64_t t87 = 0LL;
uint32_t x353 = 255U;
static volatile uint32_t t88 = 21219U;
int16_t x361 = -1;
volatile uint16_t x363 = UINT16_MAX;
volatile int8_t x367 = INT8_MIN;
static int32_t x370 = INT32_MIN;
int64_t x372 = INT64_MIN;
static int8_t x377 = INT8_MIN;
int16_t x378 = -60;
int16_t x380 = INT16_MIN;
static int8_t x384 = INT8_MIN;
int8_t x386 = -1;
int8_t x391 = -15;
uint8_t x397 = 49U;
volatile int32_t x402 = INT32_MIN;
static int32_t x404 = -1;
static uint8_t x408 = 18U;
int8_t x410 = INT8_MAX;
static volatile int64_t t102 = 1702693LL;
int8_t x414 = 7;
uint8_t x417 = UINT8_MAX;
volatile int32_t t104 = -13768;
int16_t x423 = 1;
int32_t t105 = -1675;
int32_t x431 = INT32_MIN;
static int32_t x432 = -1;
int16_t x435 = INT16_MIN;
uint16_t x440 = UINT16_MAX;
int16_t x442 = 1747;
int32_t x452 = 1;
uint8_t x459 = 48U;
int8_t x473 = -1;
int64_t x476 = INT64_MIN;
int32_t t118 = -11459618;
int16_t x479 = 125;
static uint8_t x484 = 1U;
int16_t x493 = -232;
static uint64_t x496 = UINT64_MAX;
int8_t x497 = -1;
int32_t t124 = -929045;
uint8_t x509 = 1U;
volatile int32_t t127 = 1015842376;
volatile uint8_t x513 = UINT8_MAX;
uint16_t x516 = 862U;
static uint64_t x517 = 20357003LLU;
volatile uint64_t t129 = 13LLU;
int32_t x523 = 27;
uint64_t x533 = 7LLU;
int32_t x536 = INT32_MAX;
volatile int32_t t134 = -7962;
int8_t x542 = 2;
volatile int8_t x554 = 6;
static int16_t x560 = INT16_MIN;
static volatile int32_t t140 = -4060;
volatile uint64_t x572 = UINT64_MAX;
int32_t t142 = 160587;
int16_t x581 = -1;
static volatile int16_t x589 = INT16_MAX;
volatile int32_t t149 = -1212;
int16_t x605 = -1899;
static int8_t x607 = 1;
volatile uint16_t x617 = 2459U;
uint32_t x618 = UINT32_MAX;
int32_t x619 = INT32_MIN;
int16_t x621 = INT16_MIN;
int16_t x624 = INT16_MIN;
uint32_t x625 = 21685U;
int32_t x639 = INT32_MAX;
static int32_t t159 = 274854;
static int64_t x645 = INT64_MIN;
int64_t x649 = INT64_MIN;
volatile uint8_t x657 = 10U;
static int8_t x659 = -1;
uint32_t x664 = UINT32_MAX;
static volatile uint16_t x686 = 12858U;
volatile uint16_t x698 = 43U;
static int8_t x701 = 4;
uint16_t x705 = 0U;
int32_t x709 = INT32_MAX;
uint32_t x711 = UINT32_MAX;
static volatile int32_t t177 = 0;
int32_t x713 = 12269;
static volatile int32_t t178 = -114;
static int16_t x730 = -1;
int8_t x733 = INT8_MIN;
int8_t x747 = -3;
volatile int64_t t186 = INT64_MAX;
uint32_t x757 = 17U;
uint16_t x758 = 3U;
volatile uint32_t x775 = UINT32_MAX;
volatile int8_t x779 = INT8_MIN;
static int16_t x781 = INT16_MIN;
int32_t t197 = -30102878;
int16_t x793 = -833;
static uint32_t x797 = UINT32_MAX;
uint32_t t199 = 150524U;


void f0(void) {
    	int8_t x4 = -1;
	volatile int32_t t0 = -117;

    t0 = (x1^((x2&x3)<=x4));

    if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = UINT16_MAX;
	int16_t x7 = INT16_MIN;

    t1 = (x5^((x6&x7)<=x8));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 6U;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -105;

    t2 = (x9^((x10&x11)<=x12));

    if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int64_t x14 = INT64_MAX;
	int32_t x15 = -4;
	uint64_t x16 = 54184462262993588LLU;
	volatile int32_t t3 = -453;

    t3 = (x13^((x14&x15)<=x16));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = -1LL;
	int32_t x19 = 1947881;
	int32_t x20 = 5;

    t4 = (x17^((x18&x19)<=x20));

    if (t4 != -23) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = -1;
	static uint64_t x23 = 91429581347LLU;
	volatile uint64_t t5 = UINT64_MAX;

    t5 = (x21^((x22&x23)<=x24));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x27 = INT16_MIN;
	volatile int64_t x28 = 844LL;
	int32_t t6 = 7836;

    t6 = (x25^((x26&x27)<=x28));

    if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	static int32_t x30 = -1797542;
	uint16_t x31 = 1U;
	volatile int32_t t7 = -509848;

    t7 = (x29^((x30&x31)<=x32));

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	static int16_t x34 = -1;
	static int16_t x35 = -1;
	int8_t x36 = INT8_MIN;
	static volatile int64_t t8 = INT64_MIN;

    t8 = (x33^((x34&x35)<=x36));

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	int16_t x39 = INT16_MIN;

    t9 = (x37^((x38&x39)<=x40));

    if (t9 != 65534) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	volatile int64_t x42 = INT64_MIN;
	int32_t x43 = 1;
	uint64_t x44 = UINT64_MAX;
	volatile int64_t t10 = 50076LL;

    t10 = (x41^((x42&x43)<=x44));

    if (t10 != -2LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	uint64_t x46 = 16937348947LLU;
	static int64_t x47 = INT64_MIN;
	uint32_t x48 = UINT32_MAX;
	static volatile int32_t t11 = 180063087;

    t11 = (x45^((x46&x47)<=x48));

    if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = -1;
	volatile uint64_t x51 = 17265399540032937LLU;
	int64_t x52 = 1761489237453LL;
	static int32_t t12 = 7108000;

    t12 = (x49^((x50&x51)<=x52));

    if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 194U;
	uint64_t x54 = UINT64_MAX;
	static int32_t x55 = -1;
	int8_t x56 = -1;
	uint32_t t13 = 12U;

    t13 = (x53^((x54&x55)<=x56));

    if (t13 != 195U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 3U;
	static uint32_t x58 = 340944585U;
	volatile int16_t x59 = -1;
	uint16_t x60 = UINT16_MAX;
	static volatile int32_t t14 = 161094963;

    t14 = (x57^((x58&x59)<=x60));

    if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	uint16_t x63 = 7978U;
	static volatile int64_t x64 = -1LL;
	volatile int32_t t15 = INT32_MIN;

    t15 = (x61^((x62&x63)<=x64));

    if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -1LL;
	static int32_t x66 = 195888967;
	int8_t x67 = INT8_MAX;
	static int8_t x68 = 15;
	volatile int64_t t16 = -174999442270866LL;

    t16 = (x65^((x66&x67)<=x68));

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	int8_t x70 = 15;
	int8_t x71 = INT8_MIN;
	int32_t x72 = INT32_MIN;
	static volatile int32_t t17 = -10094;

    t17 = (x69^((x70&x71)<=x72));

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	int16_t x75 = INT16_MAX;
	int8_t x76 = INT8_MIN;
	int32_t t18 = -446008951;

    t18 = (x73^((x74&x75)<=x76));

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = INT16_MIN;
	uint64_t x78 = 395LLU;
	int32_t x79 = INT32_MAX;
	volatile int16_t x80 = INT16_MIN;
	int32_t t19 = -303;

    t19 = (x77^((x78&x79)<=x80));

    if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x82 = 2U;
	int16_t x83 = INT16_MIN;
	uint16_t x84 = 4059U;
	volatile int32_t t20 = -7;

    t20 = (x81^((x82&x83)<=x84));

    if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	uint64_t x86 = 19925998279471307LLU;
	int32_t x88 = -5;

    t21 = (x85^((x86&x87)<=x88));

    if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = 3107258788251725820LL;
	int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MAX;
	volatile int64_t t22 = 26761092268824532LL;

    t22 = (x89^((x90&x91)<=x92));

    if (t22 != 3107258788251725821LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = 206;
	static uint16_t x95 = UINT16_MAX;
	uint16_t x96 = UINT16_MAX;
	int32_t t23 = 131148;

    t23 = (x93^((x94&x95)<=x96));

    if (t23 != 126) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 101;
	uint64_t x98 = UINT64_MAX;
	static int32_t x99 = -6;
	volatile int32_t t24 = -579;

    t24 = (x97^((x98&x99)<=x100));

    if (t24 != 101) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 17214549074732LLU;
	volatile int8_t x103 = 18;
	uint64_t x104 = 126371149418199LLU;
	uint64_t t25 = 1LLU;

    t25 = (x101^((x102&x103)<=x104));

    if (t25 != 17214549074733LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x106 = -17190560768555LL;
	int32_t x107 = INT32_MIN;
	int32_t x108 = INT32_MIN;
	static volatile int64_t t26 = -36669738826LL;

    t26 = (x105^((x106&x107)<=x108));

    if (t26 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x110 = -4545098LL;
	uint64_t x111 = 8622261908759LLU;
	int64_t x112 = INT64_MAX;

    t27 = (x109^((x110&x111)<=x112));

    if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 3198248060503032LL;
	uint16_t x114 = UINT16_MAX;
	static uint16_t x115 = 9U;
	volatile int64_t t28 = 490LL;

    t28 = (x113^((x114&x115)<=x116));

    if (t28 != 3198248060503032LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -2;
	int32_t x118 = INT32_MAX;
	int8_t x120 = INT8_MIN;
	static volatile int32_t t29 = 21;

    t29 = (x117^((x118&x119)<=x120));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 0U;
	uint16_t x122 = UINT16_MAX;
	static int8_t x124 = INT8_MAX;
	static int32_t t30 = -20616990;

    t30 = (x121^((x122&x123)<=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	uint16_t x126 = 21996U;
	static volatile uint16_t x127 = UINT16_MAX;
	int64_t x128 = INT64_MIN;

    t31 = (x125^((x126&x127)<=x128));

    if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = 10572041;
	uint32_t x130 = 25391U;
	uint32_t x131 = 28003U;
	int32_t t32 = -78812;

    t32 = (x129^((x130&x131)<=x132));

    if (t32 != 10572040) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x136 = -1104460760423546LL;
	volatile int32_t t33 = -811;

    t33 = (x133^((x134&x135)<=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = 4197785074568998092LL;
	uint32_t x139 = 172U;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = INT32_MIN;

    t34 = (x137^((x138&x139)<=x140));

    if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	uint32_t x142 = 28U;
	int16_t x143 = INT16_MIN;
	volatile int64_t t35 = 45006LL;

    t35 = (x141^((x142&x143)<=x144));

    if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = -1;
	int16_t x146 = -1;
	int16_t x147 = INT16_MAX;
	int8_t x148 = -1;
	int32_t t36 = -1434;

    t36 = (x145^((x146&x147)<=x148));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	int32_t x150 = -5230224;
	static int64_t x152 = -526006613LL;
	volatile int32_t t37 = -2;

    t37 = (x149^((x150&x151)<=x152));

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -3;
	volatile int32_t x154 = 5754807;
	uint8_t x155 = UINT8_MAX;
	int32_t x156 = INT32_MIN;
	static volatile int32_t t38 = -479511;

    t38 = (x153^((x154&x155)<=x156));

    if (t38 != -3) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x157 = UINT32_MAX;
	uint64_t x158 = 732LLU;
	int16_t x160 = INT16_MAX;
	volatile uint32_t t39 = 103304U;

    t39 = (x157^((x158&x159)<=x160));

    if (t39 != 4294967294U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = 347U;
	int8_t x164 = -22;
	int32_t t40 = -14;

    t40 = (x161^((x162&x163)<=x164));

    if (t40 != 22990) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	static int8_t x166 = INT8_MAX;
	uint16_t x167 = 5U;
	int32_t x168 = INT32_MAX;
	int32_t t41 = 127367;

    t41 = (x165^((x166&x167)<=x168));

    if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = 58U;
	int16_t x170 = INT16_MAX;
	int32_t t42 = -494808;

    t42 = (x169^((x170&x171)<=x172));

    if (t42 != 58) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x174 = 9;
	static volatile uint8_t x175 = 40U;
	uint8_t x176 = 5U;
	static volatile int32_t t43 = -3;

    t43 = (x173^((x174&x175)<=x176));

    if (t43 != -37102281) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x177 = UINT8_MAX;
	int64_t x179 = 125047LL;
	int16_t x180 = 3890;

    t44 = (x177^((x178&x179)<=x180));

    if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x181 = -1625722176775LL;
	int32_t x182 = INT32_MIN;
	volatile int32_t x183 = -380;
	int32_t x184 = INT32_MIN;
	int64_t t45 = -794426877930644243LL;

    t45 = (x181^((x182&x183)<=x184));

    if (t45 != -1625722176776LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = INT16_MAX;
	uint16_t x186 = UINT16_MAX;
	volatile int8_t x187 = INT8_MIN;
	volatile int16_t x188 = -1;
	int32_t t46 = 18758;

    t46 = (x185^((x186&x187)<=x188));

    if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = -1;
	static uint64_t x190 = UINT64_MAX;
	int8_t x191 = -1;
	int32_t x192 = 1857;

    t47 = (x189^((x190&x191)<=x192));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint8_t x193 = UINT8_MAX;
	static int8_t x194 = 1;
	uint64_t x195 = UINT64_MAX;
	volatile int32_t t48 = -28447599;

    t48 = (x193^((x194&x195)<=x196));

    if (t48 != 254) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x198 = INT64_MAX;
	int16_t x199 = 7;
	volatile int8_t x200 = INT8_MAX;

    t49 = (x197^((x198&x199)<=x200));

    if (t49 != 50263909750398615LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 72U;
	volatile int32_t x202 = INT32_MIN;
	static int8_t x203 = INT8_MIN;
	volatile int64_t x204 = INT64_MAX;
	volatile int32_t t50 = 0;

    t50 = (x201^((x202&x203)<=x204));

    if (t50 != 73) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = -1;
	uint64_t x206 = 4006638845979378673LLU;
	int8_t x207 = 7;
	int32_t x208 = -1;
	volatile int32_t t51 = -6104;

    t51 = (x205^((x206&x207)<=x208));

    if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MAX;
	uint64_t x211 = UINT64_MAX;
	static int8_t x212 = INT8_MIN;
	static int64_t t52 = 247711660LL;

    t52 = (x209^((x210&x211)<=x212));

    if (t52 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x214 = -1LL;
	uint64_t x215 = 15380982358LLU;
	int16_t x216 = INT16_MAX;
	int32_t t53 = -42189;

    t53 = (x213^((x214&x215)<=x216));

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x218 = 1295538090LL;
	int8_t x219 = -1;
	int32_t t54 = 794;

    t54 = (x217^((x218&x219)<=x220));

    if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x221 = 0U;
	static int64_t x223 = INT64_MIN;
	volatile int64_t x224 = 145744236615323600LL;
	static volatile int32_t t55 = 270;

    t55 = (x221^((x222&x223)<=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = UINT8_MAX;
	int16_t x226 = INT16_MIN;
	static uint32_t x227 = 267U;
	uint16_t x228 = 1798U;
	int32_t t56 = -131681182;

    t56 = (x225^((x226&x227)<=x228));

    if (t56 != 254) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = -11;
	uint16_t x231 = 16904U;
	static int32_t x232 = 36873984;
	int32_t t57 = -415874751;

    t57 = (x229^((x230&x231)<=x232));

    if (t57 != -12) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = 0;
	int32_t x234 = INT32_MIN;
	int64_t x235 = INT64_MAX;
	int32_t x236 = INT32_MAX;
	int32_t t58 = 1;

    t58 = (x233^((x234&x235)<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	int16_t x238 = INT16_MAX;
	int64_t x239 = INT64_MIN;
	uint64_t x240 = 3455854LLU;

    t59 = (x237^((x238&x239)<=x240));

    if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x242 = UINT64_MAX;
	uint32_t x243 = 13843U;
	static int64_t x244 = 29386727LL;
	static int32_t t60 = 73379406;

    t60 = (x241^((x242&x243)<=x244));

    if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	uint8_t x246 = 54U;
	static int32_t t61 = -73037;

    t61 = (x245^((x246&x247)<=x248));

    if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = 153020863028LLU;
	static int8_t x250 = INT8_MAX;
	int32_t x251 = INT32_MAX;
	int64_t x252 = INT64_MIN;
	uint64_t t62 = 0LLU;

    t62 = (x249^((x250&x251)<=x252));

    if (t62 != 153020863028LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	uint64_t x254 = 1206LLU;
	volatile int32_t t63 = 724262;

    t63 = (x253^((x254&x255)<=x256));

    if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 146891372559LLU;
	static uint16_t x258 = 31U;
	int16_t x259 = -1;
	volatile int8_t x260 = INT8_MIN;
	volatile uint64_t t64 = 261938236LLU;

    t64 = (x257^((x258&x259)<=x260));

    if (t64 != 146891372559LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	static int16_t x262 = -8001;
	int16_t x263 = INT16_MIN;
	uint32_t x264 = 4128408U;
	static int32_t t65 = -3463;

    t65 = (x261^((x262&x263)<=x264));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	uint8_t x266 = 2U;
	int8_t x267 = 31;
	uint16_t x268 = 139U;
	int32_t t66 = -699679;

    t66 = (x265^((x266&x267)<=x268));

    if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 14381U;
	int16_t x270 = -1;
	uint64_t x271 = 1341993585767LLU;
	uint8_t x272 = 10U;
	int32_t t67 = 458;

    t67 = (x269^((x270&x271)<=x272));

    if (t67 != 14381) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x273 = 4323812368540LLU;
	uint64_t x274 = 225932736363653LLU;
	uint32_t x275 = 62U;
	uint64_t t68 = 2352LLU;

    t68 = (x273^((x274&x275)<=x276));

    if (t68 != 4323812368541LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x277 = 231U;
	static int32_t x279 = -1;
	volatile int32_t t69 = -8658;

    t69 = (x277^((x278&x279)<=x280));

    if (t69 != 230) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x281 = -1;
	int16_t x282 = INT16_MAX;
	uint32_t x284 = UINT32_MAX;
	int32_t t70 = 7;

    t70 = (x281^((x282&x283)<=x284));

    if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = 6597338728361LL;
	uint8_t x286 = UINT8_MAX;
	uint32_t x287 = 46U;
	static volatile int64_t t71 = 6010200858LL;

    t71 = (x285^((x286&x287)<=x288));

    if (t71 != 6597338728360LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -114;
	static int8_t x291 = INT8_MAX;
	int64_t x292 = 36657788888LL;
	int32_t t72 = -592;

    t72 = (x289^((x290&x291)<=x292));

    if (t72 != -113) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = UINT8_MAX;
	volatile int64_t x294 = 3545624640609LL;
	int64_t x295 = 2044424332LL;
	static volatile int32_t t73 = 314;

    t73 = (x293^((x294&x295)<=x296));

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = 951136155LLU;
	volatile uint16_t x298 = 3586U;
	int8_t x299 = -1;
	int32_t x300 = INT32_MIN;
	volatile uint64_t t74 = 65535000812515LLU;

    t74 = (x297^((x298&x299)<=x300));

    if (t74 != 951136155LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = INT32_MAX;
	int32_t x302 = -1;
	volatile int8_t x303 = 1;
	int16_t x304 = -23;
	int32_t t75 = INT32_MAX;

    t75 = (x301^((x302&x303)<=x304));

    if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = UINT16_MAX;
	int64_t x306 = INT64_MIN;
	static volatile int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MAX;
	int32_t t76 = 26643433;

    t76 = (x305^((x306&x307)<=x308));

    if (t76 != 65534) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	int32_t x310 = -1;
	int64_t x311 = -27054711862LL;
	static int32_t x312 = INT32_MIN;
	static int32_t t77 = 221;

    t77 = (x309^((x310&x311)<=x312));

    if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 31224U;
	static int32_t x314 = INT32_MIN;
	volatile int8_t x315 = INT8_MIN;
	static volatile uint32_t t78 = 187U;

    t78 = (x313^((x314&x315)<=x316));

    if (t78 != 31225U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = -1;
	int16_t x318 = 0;
	static uint8_t x319 = 10U;

    t79 = (x317^((x318&x319)<=x320));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = 4U;
	int8_t x324 = -45;
	volatile int32_t t80 = -624;

    t80 = (x321^((x322&x323)<=x324));

    if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x325 = INT8_MIN;
	volatile int16_t x326 = -1;
	uint16_t x327 = 18402U;

    t81 = (x325^((x326&x327)<=x328));

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = INT16_MIN;
	static int64_t x330 = -3986174362144LL;
	int8_t x331 = INT8_MIN;
	volatile uint64_t x332 = UINT64_MAX;
	volatile int32_t t82 = -14;

    t82 = (x329^((x330&x331)<=x332));

    if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x335 = -169;
	int16_t x336 = INT16_MIN;
	volatile int32_t t83 = -11;

    t83 = (x333^((x334&x335)<=x336));

    if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x337 = 2U;
	volatile uint32_t x338 = 17792415U;
	int16_t x339 = INT16_MAX;
	volatile int32_t t84 = 0;

    t84 = (x337^((x338&x339)<=x340));

    if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 29166LLU;
	volatile int8_t x342 = 0;
	static uint64_t x344 = 465602246716606LLU;

    t85 = (x341^((x342&x343)<=x344));

    if (t85 != 29167LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = 71U;
	int64_t x346 = 14LL;
	uint64_t x347 = 350992LLU;
	uint64_t x348 = 1754665314723883584LLU;
	volatile int32_t t86 = -14686501;

    t86 = (x345^((x346&x347)<=x348));

    if (t86 != 70) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x350 = 113U;
	int8_t x351 = INT8_MAX;
	volatile uint16_t x352 = 14863U;

    t87 = (x349^((x350&x351)<=x352));

    if (t87 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x354 = UINT16_MAX;
	int8_t x355 = -7;
	uint16_t x356 = UINT16_MAX;

    t88 = (x353^((x354&x355)<=x356));

    if (t88 != 254U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MAX;
	static int8_t x358 = INT8_MIN;
	int8_t x359 = -1;
	int32_t x360 = INT32_MIN;
	int32_t t89 = INT32_MAX;

    t89 = (x357^((x358&x359)<=x360));

    if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = INT8_MIN;
	int16_t x364 = -1;
	static int32_t t90 = 208378;

    t90 = (x361^((x362&x363)<=x364));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x365 = -1;
	int64_t x366 = -157012949LL;
	int8_t x368 = -7;
	volatile int32_t t91 = 308085;

    t91 = (x365^((x366&x367)<=x368));

    if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = UINT32_MAX;
	static volatile int64_t x371 = -32589379LL;
	static uint32_t t92 = UINT32_MAX;

    t92 = (x369^((x370&x371)<=x372));

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	int64_t x374 = INT64_MIN;
	uint16_t x375 = 14U;
	int64_t x376 = INT64_MIN;
	int32_t t93 = -1237519;

    t93 = (x373^((x374&x375)<=x376));

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x379 = INT16_MIN;
	volatile int32_t t94 = -14036679;

    t94 = (x377^((x378&x379)<=x380));

    if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 1U;
	int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MIN;
	int32_t t95 = 2;

    t95 = (x381^((x382&x383)<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = -1LL;
	int32_t x387 = 570;
	int8_t x388 = 22;
	int64_t t96 = -58100813598213LL;

    t96 = (x385^((x386&x387)<=x388));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 27U;
	static uint64_t x390 = 96978036LLU;
	int32_t x392 = -1;
	volatile int32_t t97 = 0;

    t97 = (x389^((x390&x391)<=x392));

    if (t97 != 26) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 129202290U;
	int32_t x394 = -1;
	int32_t x395 = INT32_MIN;
	static uint64_t x396 = UINT64_MAX;
	static uint32_t t98 = 248U;

    t98 = (x393^((x394&x395)<=x396));

    if (t98 != 129202291U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x398 = 1;
	int16_t x399 = -157;
	static int64_t x400 = INT64_MIN;
	volatile int32_t t99 = -92810440;

    t99 = (x397^((x398&x399)<=x400));

    if (t99 != 49) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = 652680786;
	volatile uint64_t x403 = 117082638LLU;
	static int32_t t100 = 67;

    t100 = (x401^((x402&x403)<=x404));

    if (t100 != 652680787) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MAX;
	static int64_t x406 = -1LL;
	volatile int16_t x407 = INT16_MIN;
	int32_t t101 = 967851048;

    t101 = (x405^((x406&x407)<=x408));

    if (t101 != 126) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = 121976796LL;
	int16_t x411 = 1;
	int32_t x412 = -16011118;

    t102 = (x409^((x410&x411)<=x412));

    if (t102 != 121976796LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MIN;
	static uint16_t x415 = UINT16_MAX;
	volatile int16_t x416 = -1;
	static volatile int64_t t103 = INT64_MIN;

    t103 = (x413^((x414&x415)<=x416));

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x418 = INT64_MIN;
	static int32_t x419 = -112;
	uint64_t x420 = UINT64_MAX;

    t104 = (x417^((x418&x419)<=x420));

    if (t104 != 254) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x421 = 0U;
	volatile int16_t x422 = -58;
	int16_t x424 = INT16_MIN;

    t105 = (x421^((x422&x423)<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	int64_t x426 = INT64_MIN;
	volatile int16_t x427 = -1;
	uint8_t x428 = 122U;
	volatile int64_t t106 = -470LL;

    t106 = (x425^((x426&x427)<=x428));

    if (t106 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	int8_t x430 = -1;
	int32_t t107 = 7;

    t107 = (x429^((x430&x431)<=x432));

    if (t107 != -2147483647) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x433 = 104U;
	int8_t x434 = 1;
	volatile uint32_t x436 = 5U;
	volatile int32_t t108 = 0;

    t108 = (x433^((x434&x435)<=x436));

    if (t108 != 105) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -78488935806LL;
	int8_t x438 = INT8_MIN;
	static volatile int16_t x439 = -1165;
	int64_t t109 = -3207592433122LL;

    t109 = (x437^((x438&x439)<=x440));

    if (t109 != -78488935805LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = 1334054LL;
	int32_t x443 = INT32_MIN;
	volatile int16_t x444 = INT16_MAX;
	int64_t t110 = 511319838210LL;

    t110 = (x441^((x442&x443)<=x444));

    if (t110 != 1334055LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x445 = -441;
	int64_t x446 = INT64_MIN;
	static int8_t x447 = INT8_MIN;
	uint64_t x448 = 91501615194LLU;
	int32_t t111 = 6;

    t111 = (x445^((x446&x447)<=x448));

    if (t111 != -441) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 4U;
	uint16_t x450 = 74U;
	int32_t x451 = INT32_MIN;
	static uint32_t t112 = 2002938492U;

    t112 = (x449^((x450&x451)<=x452));

    if (t112 != 5U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x453 = INT32_MIN;
	uint64_t x454 = 847701547699521LLU;
	int16_t x455 = -1;
	static int64_t x456 = INT64_MIN;
	volatile int32_t t113 = -12;

    t113 = (x453^((x454&x455)<=x456));

    if (t113 != -2147483647) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MAX;
	int64_t x458 = INT64_MAX;
	static uint8_t x460 = 0U;
	int32_t t114 = 26076763;

    t114 = (x457^((x458&x459)<=x460));

    if (t114 != 32767) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 24416U;
	uint64_t x462 = UINT64_MAX;
	static int8_t x463 = INT8_MIN;
	uint8_t x464 = 0U;
	int32_t t115 = -5;

    t115 = (x461^((x462&x463)<=x464));

    if (t115 != 24416) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = -19;
	int32_t x466 = 293767;
	int8_t x467 = INT8_MIN;
	int32_t x468 = INT32_MIN;
	static volatile int32_t t116 = -28648673;

    t116 = (x465^((x466&x467)<=x468));

    if (t116 != -19) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = -1;
	int8_t x470 = INT8_MIN;
	int16_t x471 = -1;
	static uint16_t x472 = 10700U;
	volatile int32_t t117 = -18054586;

    t117 = (x469^((x470&x471)<=x472));

    if (t117 != -2) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x474 = 0;
	static int8_t x475 = -5;

    t118 = (x473^((x474&x475)<=x476));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = -1;
	static volatile uint32_t x478 = UINT32_MAX;
	int16_t x480 = -1;
	volatile int32_t t119 = -426;

    t119 = (x477^((x478&x479)<=x480));

    if (t119 != -2) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x481 = 3538LLU;
	static uint32_t x482 = 18U;
	volatile int64_t x483 = INT64_MIN;
	uint64_t t120 = 0LLU;

    t120 = (x481^((x482&x483)<=x484));

    if (t120 != 3539LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = 1481;
	int16_t x486 = -114;
	uint8_t x487 = UINT8_MAX;
	int16_t x488 = INT16_MIN;
	static int32_t t121 = -1090204;

    t121 = (x485^((x486&x487)<=x488));

    if (t121 != 1481) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	int64_t x490 = -1LL;
	uint16_t x491 = 61U;
	int32_t x492 = 67;
	volatile int32_t t122 = -29;

    t122 = (x489^((x490&x491)<=x492));

    if (t122 != -127) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x494 = UINT8_MAX;
	uint8_t x495 = 0U;
	volatile int32_t t123 = 5652;

    t123 = (x493^((x494&x495)<=x496));

    if (t123 != -231) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x498 = INT8_MAX;
	uint64_t x499 = 362815024326456LLU;
	uint16_t x500 = UINT16_MAX;

    t124 = (x497^((x498&x499)<=x500));

    if (t124 != -2) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x501 = 659943769LLU;
	volatile int16_t x502 = 1;
	uint64_t x503 = 10483986892413973LLU;
	uint8_t x504 = 10U;
	volatile uint64_t t125 = 2341LLU;

    t125 = (x501^((x502&x503)<=x504));

    if (t125 != 659943768LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = 883122261U;
	int32_t x506 = INT32_MIN;
	uint32_t x507 = UINT32_MAX;
	int16_t x508 = INT16_MIN;
	volatile uint32_t t126 = 103837566U;

    t126 = (x505^((x506&x507)<=x508));

    if (t126 != 883122260U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x510 = 3U;
	volatile int64_t x511 = -1LL;
	uint32_t x512 = 3191159U;

    t127 = (x509^((x510&x511)<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x514 = INT16_MIN;
	int8_t x515 = INT8_MAX;
	volatile int32_t t128 = -52;

    t128 = (x513^((x514&x515)<=x516));

    if (t128 != 254) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x518 = 5743048466LLU;
	int32_t x519 = INT32_MIN;
	int64_t x520 = INT64_MIN;

    t129 = (x517^((x518&x519)<=x520));

    if (t129 != 20357002LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	static int16_t x522 = INT16_MAX;
	int64_t x524 = INT64_MIN;
	volatile int32_t t130 = INT32_MIN;

    t130 = (x521^((x522&x523)<=x524));

    if (t130 != INT32_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x525 = 0U;
	static int8_t x526 = INT8_MIN;
	int64_t x527 = INT64_MIN;
	static uint32_t x528 = 11513754U;
	static volatile uint32_t t131 = 80744570U;

    t131 = (x525^((x526&x527)<=x528));

    if (t131 != 1U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = 32182442363LLU;
	volatile int8_t x530 = INT8_MAX;
	static int16_t x531 = INT16_MIN;
	uint8_t x532 = 0U;
	volatile uint64_t t132 = 156103689773LLU;

    t132 = (x529^((x530&x531)<=x532));

    if (t132 != 32182442362LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x534 = -1;
	int16_t x535 = INT16_MIN;
	static volatile uint64_t t133 = 89768933LLU;

    t133 = (x533^((x534&x535)<=x536));

    if (t133 != 6LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x537 = 384U;
	static volatile int16_t x538 = 3;
	volatile int64_t x539 = -14LL;
	int16_t x540 = INT16_MIN;

    t134 = (x537^((x538&x539)<=x540));

    if (t134 != 384) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MAX;
	int8_t x543 = INT8_MIN;
	static volatile int64_t x544 = INT64_MIN;
	volatile int32_t t135 = -16539569;

    t135 = (x541^((x542&x543)<=x544));

    if (t135 != 127) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x545 = INT16_MAX;
	uint64_t x546 = 138560111014140658LLU;
	int8_t x547 = INT8_MIN;
	static int16_t x548 = 9700;
	int32_t t136 = 22923192;

    t136 = (x545^((x546&x547)<=x548));

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = -1;
	int8_t x550 = -1;
	int8_t x551 = INT8_MIN;
	uint32_t x552 = 1175U;
	static volatile int32_t t137 = -3974;

    t137 = (x549^((x550&x551)<=x552));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -8;
	volatile uint32_t x555 = 814839U;
	int32_t x556 = 3;
	int32_t t138 = 1444;

    t138 = (x553^((x554&x555)<=x556));

    if (t138 != -8) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -1;
	int64_t x558 = 27LL;
	int64_t x559 = INT64_MIN;
	volatile int32_t t139 = 774;

    t139 = (x557^((x558&x559)<=x560));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x561 = UINT16_MAX;
	static int32_t x562 = -57419;
	int16_t x563 = INT16_MAX;
	int32_t x564 = INT32_MIN;

    t140 = (x561^((x562&x563)<=x564));

    if (t140 != 65535) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x565 = 8976U;
	int64_t x566 = INT64_MAX;
	int64_t x567 = INT64_MAX;
	static volatile int16_t x568 = -1274;
	volatile uint32_t t141 = 10U;

    t141 = (x565^((x566&x567)<=x568));

    if (t141 != 8976U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = UINT16_MAX;
	int32_t x570 = -1;
	volatile uint64_t x571 = UINT64_MAX;

    t142 = (x569^((x570&x571)<=x572));

    if (t142 != 65534) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x573 = 1U;
	static int64_t x574 = INT64_MIN;
	uint32_t x575 = 50894354U;
	static int32_t x576 = 162139074;
	volatile uint32_t t143 = 29706U;

    t143 = (x573^((x574&x575)<=x576));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x577 = INT64_MAX;
	uint32_t x578 = UINT32_MAX;
	volatile uint64_t x579 = UINT64_MAX;
	int16_t x580 = INT16_MIN;
	int64_t t144 = -371297566282889LL;

    t144 = (x577^((x578&x579)<=x580));

    if (t144 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x582 = -1;
	uint32_t x583 = 9432973U;
	int64_t x584 = INT64_MIN;
	volatile int32_t t145 = 1;

    t145 = (x581^((x582&x583)<=x584));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = UINT8_MAX;
	static uint16_t x586 = UINT16_MAX;
	uint64_t x587 = 455848840222LLU;
	uint8_t x588 = 35U;
	static volatile int32_t t146 = -199;

    t146 = (x585^((x586&x587)<=x588));

    if (t146 != 255) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x590 = 56U;
	static int32_t x591 = INT32_MIN;
	int16_t x592 = -1;
	volatile int32_t t147 = -172;

    t147 = (x589^((x590&x591)<=x592));

    if (t147 != 32767) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x593 = INT64_MIN;
	static uint32_t x594 = UINT32_MAX;
	int64_t x595 = INT64_MIN;
	int16_t x596 = -1;
	volatile int64_t t148 = INT64_MIN;

    t148 = (x593^((x594&x595)<=x596));

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	static volatile uint16_t x598 = UINT16_MAX;
	int8_t x599 = -1;
	uint16_t x600 = UINT16_MAX;

    t149 = (x597^((x598&x599)<=x600));

    if (t149 != -2147483647) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x601 = INT64_MIN;
	uint32_t x602 = 132121U;
	int8_t x603 = INT8_MIN;
	int8_t x604 = INT8_MAX;
	volatile int64_t t150 = INT64_MIN;

    t150 = (x601^((x602&x603)<=x604));

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x606 = -41;
	int64_t x608 = INT64_MIN;
	volatile int32_t t151 = -847;

    t151 = (x605^((x606&x607)<=x608));

    if (t151 != -1899) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int16_t x609 = 58;
	int16_t x610 = INT16_MIN;
	volatile int16_t x611 = 1;
	static volatile uint32_t x612 = 222468U;
	volatile int32_t t152 = 6;

    t152 = (x609^((x610&x611)<=x612));

    if (t152 != 59) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x613 = 14U;
	int16_t x614 = INT16_MIN;
	static uint32_t x615 = 16270837U;
	int8_t x616 = INT8_MIN;
	volatile int32_t t153 = 1378;

    t153 = (x613^((x614&x615)<=x616));

    if (t153 != 15) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x620 = -6840;
	volatile int32_t t154 = 3;

    t154 = (x617^((x618&x619)<=x620));

    if (t154 != 2458) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x622 = 1U;
	int8_t x623 = -19;
	static volatile int32_t t155 = -11790585;

    t155 = (x621^((x622&x623)<=x624));

    if (t155 != -32768) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x626 = INT32_MIN;
	int32_t x627 = INT32_MAX;
	int8_t x628 = -2;
	uint32_t t156 = 2374U;

    t156 = (x625^((x626&x627)<=x628));

    if (t156 != 21685U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = 1935;
	uint64_t x630 = 1707356601451578LLU;
	int64_t x631 = INT64_MIN;
	int64_t x632 = INT64_MIN;
	static volatile int32_t t157 = 8260107;

    t157 = (x629^((x630&x631)<=x632));

    if (t157 != 1934) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 0U;
	static int16_t x634 = -6178;
	volatile int16_t x635 = INT16_MIN;
	volatile int16_t x636 = -61;
	static uint32_t t158 = 4U;

    t158 = (x633^((x634&x635)<=x636));

    if (t158 != 1U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = UINT16_MAX;
	uint64_t x638 = 63813183111LLU;
	int8_t x640 = INT8_MIN;

    t159 = (x637^((x638&x639)<=x640));

    if (t159 != 65534) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -1;
	uint8_t x642 = 1U;
	static uint32_t x643 = 141U;
	int8_t x644 = 2;
	int32_t t160 = -2611;

    t160 = (x641^((x642&x643)<=x644));

    if (t160 != -2) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x646 = INT8_MIN;
	uint64_t x647 = UINT64_MAX;
	int8_t x648 = INT8_MIN;
	volatile int64_t t161 = -653113445209862LL;

    t161 = (x645^((x646&x647)<=x648));

    if (t161 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x650 = 61286U;
	int16_t x651 = INT16_MIN;
	volatile int16_t x652 = INT16_MIN;
	volatile int64_t t162 = -623618524749648LL;

    t162 = (x649^((x650&x651)<=x652));

    if (t162 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	uint64_t x654 = UINT64_MAX;
	int32_t x655 = -3;
	int8_t x656 = INT8_MIN;
	int32_t t163 = -3677;

    t163 = (x653^((x654&x655)<=x656));

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x658 = 47;
	int64_t x660 = INT64_MIN;
	static int32_t t164 = 127756;

    t164 = (x657^((x658&x659)<=x660));

    if (t164 != 10) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = INT16_MIN;
	static int16_t x662 = INT16_MIN;
	uint32_t x663 = 57U;
	volatile int32_t t165 = -8307478;

    t165 = (x661^((x662&x663)<=x664));

    if (t165 != -32767) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -12984617LL;
	volatile int64_t x666 = -63LL;
	static int64_t x667 = 10287LL;
	int32_t x668 = INT32_MIN;
	int64_t t166 = 15881106LL;

    t166 = (x665^((x666&x667)<=x668));

    if (t166 != -12984617LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = 70;
	uint8_t x670 = 9U;
	static int32_t x671 = -1;
	volatile int32_t x672 = 753001;
	volatile int32_t t167 = -1;

    t167 = (x669^((x670&x671)<=x672));

    if (t167 != 71) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x673 = INT32_MAX;
	volatile int32_t x674 = -445792918;
	int32_t x675 = 379248475;
	int64_t x676 = 21548493371601LL;
	int32_t t168 = 189;

    t168 = (x673^((x674&x675)<=x676));

    if (t168 != 2147483646) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = 518907LL;
	int16_t x678 = 59;
	static volatile int64_t x679 = 6245271LL;
	uint16_t x680 = 6U;
	int64_t t169 = 2129493578297LL;

    t169 = (x677^((x678&x679)<=x680));

    if (t169 != 518907LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	uint16_t x682 = UINT16_MAX;
	int8_t x683 = INT8_MIN;
	uint8_t x684 = 3U;
	volatile int64_t t170 = INT64_MIN;

    t170 = (x681^((x682&x683)<=x684));

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -1;
	int32_t x687 = -433;
	int32_t x688 = INT32_MAX;
	int32_t t171 = 1000221;

    t171 = (x685^((x686&x687)<=x688));

    if (t171 != -2) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = UINT64_MAX;
	uint16_t x690 = 12U;
	int8_t x691 = INT8_MIN;
	uint8_t x692 = 0U;
	volatile uint64_t t172 = 2533261060276662LLU;

    t172 = (x689^((x690&x691)<=x692));

    if (t172 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = INT64_MIN;
	uint64_t x694 = 53975540LLU;
	volatile uint8_t x695 = 8U;
	uint8_t x696 = UINT8_MAX;
	int64_t t173 = -1264703037832416260LL;

    t173 = (x693^((x694&x695)<=x696));

    if (t173 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 0U;
	static uint16_t x699 = 2371U;
	static uint64_t x700 = UINT64_MAX;
	int32_t t174 = 463473;

    t174 = (x697^((x698&x699)<=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x702 = -1;
	volatile int64_t x703 = INT64_MIN;
	static uint8_t x704 = UINT8_MAX;
	volatile int32_t t175 = -358461;

    t175 = (x701^((x702&x703)<=x704));

    if (t175 != 5) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x706 = 15915608LLU;
	static int32_t x707 = INT32_MIN;
	volatile int8_t x708 = INT8_MIN;
	static volatile int32_t t176 = -11372517;

    t176 = (x705^((x706&x707)<=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int16_t x710 = INT16_MAX;
	int16_t x712 = INT16_MIN;

    t177 = (x709^((x710&x711)<=x712));

    if (t177 != 2147483646) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x714 = -702889546723LL;
	static volatile uint8_t x715 = 93U;
	int8_t x716 = 0;

    t178 = (x713^((x714&x715)<=x716));

    if (t178 != 12269) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	uint64_t x718 = 15LLU;
	volatile uint16_t x719 = UINT16_MAX;
	volatile int64_t x720 = INT64_MAX;
	volatile int32_t t179 = 449151;

    t179 = (x717^((x718&x719)<=x720));

    if (t179 != -127) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = INT32_MIN;
	int32_t x722 = -1;
	volatile uint8_t x723 = UINT8_MAX;
	volatile int16_t x724 = 15752;
	volatile int32_t t180 = -755146003;

    t180 = (x721^((x722&x723)<=x724));

    if (t180 != -2147483647) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x725 = 13726016U;
	static int64_t x726 = 180476LL;
	int16_t x727 = INT16_MAX;
	uint8_t x728 = UINT8_MAX;
	static volatile uint32_t t181 = 2366U;

    t181 = (x725^((x726&x727)<=x728));

    if (t181 != 13726016U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = UINT16_MAX;
	uint16_t x731 = 16210U;
	static int16_t x732 = INT16_MIN;
	volatile int32_t t182 = 17391;

    t182 = (x729^((x730&x731)<=x732));

    if (t182 != 65535) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x734 = 14665;
	int8_t x735 = 1;
	static int64_t x736 = INT64_MIN;
	int32_t t183 = -7428;

    t183 = (x733^((x734&x735)<=x736));

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = 23LL;
	int8_t x738 = 5;
	int32_t x739 = -1;
	uint8_t x740 = 7U;
	int64_t t184 = 1011LL;

    t184 = (x737^((x738&x739)<=x740));

    if (t184 != 22LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	static uint64_t x742 = 113700698859202LLU;
	int64_t x743 = 3187LL;
	static volatile uint32_t x744 = UINT32_MAX;
	int64_t t185 = 87612363709239LL;

    t185 = (x741^((x742&x743)<=x744));

    if (t185 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MAX;
	static int32_t x746 = INT32_MAX;
	static uint8_t x748 = 0U;

    t186 = (x745^((x746&x747)<=x748));

    if (t186 != INT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x749 = INT8_MAX;
	int16_t x750 = -1;
	int32_t x751 = -778604;
	uint8_t x752 = 0U;
	volatile int32_t t187 = 116526422;

    t187 = (x749^((x750&x751)<=x752));

    if (t187 != 126) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = -1;
	static volatile int32_t x754 = INT32_MIN;
	int32_t x755 = -14658485;
	uint16_t x756 = 0U;
	int32_t t188 = -339117118;

    t188 = (x753^((x754&x755)<=x756));

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x759 = 2;
	uint16_t x760 = 1U;
	volatile uint32_t t189 = 96652U;

    t189 = (x757^((x758&x759)<=x760));

    if (t189 != 17U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = INT32_MIN;
	int32_t x762 = -1;
	int64_t x763 = -1LL;
	volatile int16_t x764 = -1;
	static volatile int32_t t190 = -117340;

    t190 = (x761^((x762&x763)<=x764));

    if (t190 != -2147483647) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = -1LL;
	int64_t x766 = -1579770LL;
	int64_t x767 = INT64_MAX;
	volatile int8_t x768 = INT8_MAX;
	volatile int64_t t191 = 175915164527777433LL;

    t191 = (x765^((x766&x767)<=x768));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	static int8_t x770 = INT8_MIN;
	int8_t x771 = INT8_MIN;
	int8_t x772 = 1;
	volatile int64_t t192 = 3684092242274LL;

    t192 = (x769^((x770&x771)<=x772));

    if (t192 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 0U;
	int32_t x774 = INT32_MIN;
	int16_t x776 = INT16_MIN;
	volatile int32_t t193 = -5123;

    t193 = (x773^((x774&x775)<=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x777 = 8U;
	int64_t x778 = 701022LL;
	uint8_t x780 = 1U;
	volatile int32_t t194 = 4040;

    t194 = (x777^((x778&x779)<=x780));

    if (t194 != 8) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x782 = -51;
	static uint32_t x783 = 46U;
	int8_t x784 = -1;
	int32_t t195 = 11253;

    t195 = (x781^((x782&x783)<=x784));

    if (t195 != -32767) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	static int8_t x786 = INT8_MIN;
	volatile uint8_t x787 = 53U;
	static int32_t x788 = 1;
	volatile int32_t t196 = 6;

    t196 = (x785^((x786&x787)<=x788));

    if (t196 != 32766) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = UINT8_MAX;
	static volatile uint16_t x790 = 38U;
	int32_t x791 = INT32_MAX;
	uint8_t x792 = 1U;

    t197 = (x789^((x790&x791)<=x792));

    if (t197 != 255) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x794 = UINT16_MAX;
	int32_t x795 = -2;
	volatile uint32_t x796 = 3763640U;
	volatile int32_t t198 = 84389505;

    t198 = (x793^((x794&x795)<=x796));

    if (t198 != -834) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x798 = UINT32_MAX;
	int64_t x799 = INT64_MIN;
	uint32_t x800 = UINT32_MAX;

    t199 = (x797^((x798&x799)<=x800));

    if (t199 != 4294967294U) { NG(); } else { ; }
	
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

