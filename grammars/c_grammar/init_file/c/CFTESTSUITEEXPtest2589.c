
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

static volatile uint32_t x1 = 5394U;
int8_t x3 = 12;
int32_t x4 = 37924740;
int32_t x13 = -737605;
int8_t x16 = -9;
int32_t t2 = -92247;
uint32_t x25 = UINT32_MAX;
int64_t x26 = -1LL;
int16_t x27 = -1;
int32_t t4 = 74;
volatile int64_t x34 = 3589841LL;
int32_t x35 = INT32_MIN;
volatile int16_t x38 = 698;
int16_t x39 = INT16_MAX;
volatile int16_t x40 = INT16_MIN;
static int64_t t6 = -899566097989LL;
int8_t x52 = INT8_MAX;
volatile int32_t x56 = -118670053;
volatile int32_t t8 = -1278137;
volatile int64_t x62 = -1LL;
volatile int32_t x63 = -1;
int64_t t10 = 20540384424661LL;
int32_t x68 = INT32_MAX;
static uint8_t x69 = 15U;
int32_t x100 = INT32_MIN;
static uint64_t t17 = 143LLU;
uint64_t x101 = UINT64_MAX;
static int64_t x103 = 62LL;
int8_t x107 = INT8_MIN;
volatile uint64_t x110 = UINT64_MAX;
int16_t x116 = -660;
uint32_t t21 = UINT32_MAX;
volatile int16_t x119 = -1;
uint64_t t22 = 33603937LLU;
int16_t x128 = INT16_MAX;
uint32_t x131 = 698161841U;
int64_t x132 = -1LL;
uint8_t x134 = 31U;
static int64_t t26 = -96674LL;
int16_t x141 = INT16_MIN;
int64_t t28 = 1395117400897LL;
int8_t x153 = -3;
int64_t x165 = -1LL;
volatile int16_t x176 = 15;
uint32_t x187 = 1533454U;
int8_t x188 = -1;
static volatile uint64_t t36 = 3LLU;
uint64_t t37 = 2553400788995812LLU;
uint64_t x209 = UINT64_MAX;
volatile int32_t t41 = 631;
int32_t x222 = INT32_MIN;
int64_t t42 = 1901611404121388LL;
int32_t x228 = -2;
volatile int32_t t43 = 8;
int16_t x236 = -2;
uint16_t x241 = UINT16_MAX;
uint32_t x243 = 312626U;
volatile uint32_t t45 = 461747841U;
int32_t t46 = 264685;
int64_t x259 = -1LL;
int8_t x260 = -1;
static volatile int8_t x269 = -1;
volatile int64_t x271 = INT64_MIN;
uint64_t t50 = UINT64_MAX;
volatile int8_t x278 = 5;
uint8_t x279 = UINT8_MAX;
int8_t x281 = INT8_MIN;
volatile uint64_t x282 = 1682245526289865498LLU;
int32_t x283 = -1;
int8_t x284 = 16;
static int8_t x296 = INT8_MAX;
int32_t x305 = INT32_MAX;
static uint32_t x307 = 394823U;
volatile int8_t x320 = -1;
uint64_t x326 = 2162562544LLU;
int8_t x334 = -1;
int64_t x349 = INT64_MIN;
int8_t x352 = -19;
int64_t x361 = 702604001601604812LL;
volatile int8_t x363 = INT8_MIN;
uint32_t x367 = UINT32_MAX;
uint32_t t69 = 91782U;
int16_t x376 = -163;
volatile int64_t x381 = -1LL;
int16_t x382 = INT16_MAX;
static int32_t x387 = INT32_MAX;
int32_t x388 = INT32_MIN;
int64_t x401 = INT64_MAX;
volatile int64_t t75 = INT64_MAX;
uint32_t x418 = 51U;
int8_t x419 = INT8_MIN;
static volatile int16_t x420 = 3467;
volatile uint64_t x424 = 5099614714670336LLU;
int32_t x429 = INT32_MIN;
uint64_t x431 = 11298197268619535LLU;
uint64_t x432 = 433445LLU;
int64_t x433 = INT64_MIN;
int8_t x434 = -1;
int64_t x449 = INT64_MAX;
int64_t x450 = 375683LL;
static int16_t x452 = -1;
volatile uint8_t x458 = 25U;
static int32_t x477 = 105878433;
uint32_t x479 = UINT32_MAX;
uint32_t x483 = 22U;
static uint16_t x489 = UINT16_MAX;
volatile int8_t x501 = 0;
uint8_t x508 = 9U;
int32_t x509 = -281176255;
volatile int16_t x511 = INT16_MAX;
volatile uint32_t t97 = 1U;
uint64_t x536 = UINT64_MAX;
uint16_t x543 = 6U;
uint32_t t99 = 77394U;
volatile int8_t x545 = -1;
static int64_t x548 = -1LL;
int8_t x553 = 2;
int32_t t103 = 6113;
int64_t t104 = 383334788374390LL;
int16_t x575 = INT16_MIN;
volatile uint64_t t105 = UINT64_MAX;
int64_t x585 = INT64_MIN;
uint32_t x599 = UINT32_MAX;
static uint8_t x602 = 62U;
volatile int8_t x603 = -11;
int8_t x605 = INT8_MIN;
int64_t x606 = INT64_MIN;
int8_t x629 = INT8_MAX;
int8_t x630 = INT8_MAX;
int8_t x631 = INT8_MIN;
int8_t x646 = INT8_MIN;
uint16_t x651 = 387U;
uint32_t x659 = 8179337U;
volatile int32_t t122 = 93575;
static uint64_t t123 = 65020084040444LLU;
static volatile uint32_t x678 = 2U;
static volatile uint32_t t125 = 39U;
volatile uint32_t t128 = 3757317U;
static int16_t x697 = 3;
int8_t x698 = INT8_MIN;
uint64_t x699 = UINT64_MAX;
uint32_t t133 = 1U;
volatile int32_t t135 = 30;
int8_t x737 = 6;
static int8_t x740 = INT8_MIN;
volatile int32_t t137 = -2;
volatile uint16_t x746 = UINT16_MAX;
volatile uint32_t x748 = 427766U;
int64_t x765 = INT64_MIN;
int32_t x766 = INT32_MAX;
volatile int32_t x768 = -1;
uint32_t x783 = 2U;
volatile int64_t x792 = 4087LL;
int64_t t144 = -420171LL;
uint32_t x794 = 765921048U;
int64_t x798 = 1986602444LL;
uint64_t t147 = 9360LLU;
static int16_t x805 = INT16_MIN;
int8_t x808 = -31;
int32_t x813 = INT32_MIN;
volatile uint16_t x817 = 47U;
uint16_t x820 = 11U;
int16_t x824 = -1;
volatile uint8_t x825 = UINT8_MAX;
int32_t t153 = -63;
int16_t x829 = INT16_MIN;
uint8_t x831 = 2U;
static int64_t t155 = -399LL;
int16_t x838 = INT16_MIN;
uint64_t x841 = UINT64_MAX;
int32_t x842 = INT32_MAX;
int64_t x843 = INT64_MAX;
static volatile int64_t x845 = INT64_MIN;
int64_t x854 = -1LL;
uint16_t x862 = UINT16_MAX;
static uint64_t x865 = UINT64_MAX;
int16_t x872 = INT16_MIN;
uint64_t t162 = 875782LLU;
volatile int64_t x879 = INT64_MIN;
int64_t x882 = -1LL;
int32_t x890 = 3439;
static volatile uint8_t x892 = UINT8_MAX;
volatile int32_t x902 = -497061453;
uint32_t x903 = 1383564U;
uint32_t x906 = UINT32_MAX;
int8_t x908 = INT8_MAX;
int16_t x917 = INT16_MIN;
int32_t x920 = -1;
static uint64_t t173 = UINT64_MAX;
uint64_t x925 = 12380540321LLU;
uint64_t x929 = 852144353616LLU;
volatile int64_t x934 = -1LL;
uint32_t x937 = 970U;
volatile int64_t t178 = 70LL;
volatile uint8_t x945 = 4U;
int32_t t181 = 56;
int16_t x974 = -1;
int32_t t183 = -2229;
int64_t t186 = 818081574LL;
int32_t x1003 = -1;
uint32_t t187 = 1302672U;
volatile uint16_t x1014 = 30U;
static int8_t x1015 = 0;
static uint64_t t191 = 6LLU;
uint16_t x1030 = UINT16_MAX;
volatile int16_t x1034 = INT16_MIN;
int64_t x1050 = -306663932582657LL;
uint64_t t199 = UINT64_MAX;


void f0(void) {
    	int16_t x2 = -1;
	volatile uint32_t t0 = 8960945U;

    t0 = (x1|((x2^x3)*x4));

    if (t0 != 3801945950U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	uint64_t x6 = 7789406187060264191LLU;
	int16_t x7 = -1;
	int16_t x8 = INT16_MAX;
	uint64_t t1 = 52LLU;

    t1 = (x5|((x6^x7)*x8));

    if (t1 != 12125216516589223935LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x14 = INT8_MIN;
	uint8_t x15 = UINT8_MAX;

    t2 = (x13|((x14^x15)*x16));

    if (t2 != -737605) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x28 = INT8_MIN;
	int64_t t3 = 4044285LL;

    t3 = (x25|((x26^x27)*x28));

    if (t3 != 4294967295LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x29 = 56U;
	int32_t x30 = INT32_MIN;
	volatile int8_t x31 = INT8_MAX;
	int8_t x32 = -1;

    t4 = (x29|((x30^x31)*x32));

    if (t4 != 2147483577) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x33 = 1604829U;
	int16_t x36 = INT16_MIN;
	volatile int64_t t5 = -98590260135LL;

    t5 = (x33|((x34^x35)*x36));

    if (t5 != 70251112824029LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x37 = 2579LL;

    t6 = (x37|((x38^x39)*x40));

    if (t6 != -1050834413LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x49 = INT16_MIN;
	int64_t x50 = -61LL;
	uint64_t x51 = 81LLU;
	uint64_t t7 = 9660LLU;

    t7 = (x49|((x50^x51)*x52));

    if (t7 != 18446744073709537646LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x53 = 14146;
	int8_t x54 = -1;
	int8_t x55 = 2;

    t8 = (x53|((x54^x55)*x56));

    if (t8 != 356024303) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x57 = INT16_MIN;
	uint16_t x58 = 24335U;
	int8_t x59 = INT8_MIN;
	static volatile int32_t x60 = -1;
	int32_t t9 = 27;

    t9 = (x57|((x58^x59)*x60));

    if (t9 != -8335) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x61 = INT32_MIN;
	int32_t x64 = 366;

    t10 = (x61|((x62^x63)*x64));

    if (t10 != -2147483648LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x65 = -257848608;
	static uint64_t x66 = 35LLU;
	static volatile int32_t x67 = INT32_MAX;
	uint64_t t11 = 1047709841052LLU;

    t11 = (x65|((x66^x67)*x68));

    if (t11 != 18446744073451703012LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x70 = UINT32_MAX;
	int8_t x71 = INT8_MIN;
	uint32_t x72 = 27218020U;
	uint32_t t12 = 2U;

    t12 = (x69|((x70^x71)*x72));

    if (t12 != 3456688543U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x73 = 793;
	int16_t x74 = INT16_MAX;
	uint64_t x75 = UINT64_MAX;
	uint16_t x76 = 44U;
	static volatile uint64_t t13 = 677457309199LLU;

    t13 = (x73|((x74^x75)*x76));

    if (t13 != 18446744073708110617LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x77 = -2619682985701773LL;
	int32_t x78 = 718;
	int8_t x79 = 42;
	int8_t x80 = -1;
	static volatile int64_t t14 = -256599LL;

    t14 = (x77|((x78^x79)*x80));

    if (t14 != -129LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x81 = INT64_MIN;
	uint16_t x82 = 832U;
	int32_t x83 = -1;
	uint8_t x84 = 5U;
	int64_t t15 = 18626370LL;

    t15 = (x81|((x82^x83)*x84));

    if (t15 != -4165LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x93 = 5U;
	int8_t x94 = 1;
	static int64_t x95 = INT64_MIN;
	int8_t x96 = -1;
	static volatile int64_t t16 = INT64_MAX;

    t16 = (x93|((x94^x95)*x96));

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x97 = UINT32_MAX;
	uint64_t x98 = 32323158529LLU;
	int64_t x99 = -18625806709745LL;

    t17 = (x97|((x98^x99)*x100));

    if (t17 != 10882377827236184063LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x102 = 0U;
	int16_t x104 = -30;
	uint64_t t18 = UINT64_MAX;

    t18 = (x101|((x102^x103)*x104));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x105 = 0;
	int8_t x106 = INT8_MAX;
	uint32_t x108 = 311035461U;
	static volatile uint32_t t19 = 176364885U;

    t19 = (x105|((x106^x107)*x108));

    if (t19 != 3983931835U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x109 = 42U;
	uint32_t x111 = 269931046U;
	static uint8_t x112 = 0U;
	static volatile uint64_t t20 = 159133531249LLU;

    t20 = (x109|((x110^x111)*x112));

    if (t20 != 42LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x113 = INT32_MAX;
	static uint32_t x114 = 792544U;
	volatile uint8_t x115 = UINT8_MAX;

    t21 = (x113|((x114^x115)*x116));

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x117 = 29U;
	volatile uint64_t x118 = UINT64_MAX;
	int16_t x120 = -4047;

    t22 = (x117|((x118^x119)*x120));

    if (t22 != 29LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x121 = -1;
	int32_t x122 = 4;
	int64_t x123 = -1LL;
	int32_t x124 = INT32_MAX;
	int64_t t23 = 1890718800LL;

    t23 = (x121|((x122^x123)*x124));

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x125 = 75U;
	int32_t x126 = 40;
	static int64_t x127 = -402577725LL;
	int64_t t24 = -7704858668613664LL;

    t24 = (x125|((x126^x127)*x128));

    if (t24 != -13191263004321LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x129 = INT8_MAX;
	int16_t x130 = INT16_MIN;
	volatile int64_t t25 = 37LL;

    t25 = (x129|((x130^x131)*x132));

    if (t25 != -3596786305LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x133 = INT8_MIN;
	int16_t x135 = -1;
	volatile int64_t x136 = -555485LL;

    t26 = (x133|((x134^x135)*x136));

    if (t26 != -96LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x142 = 1U;
	int8_t x143 = INT8_MAX;
	volatile uint64_t x144 = UINT64_MAX;
	uint64_t t27 = 7659663914866093085LLU;

    t27 = (x141|((x142^x143)*x144));

    if (t27 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int16_t x145 = INT16_MIN;
	int32_t x146 = INT32_MAX;
	volatile int64_t x147 = 58370244445LL;
	volatile uint16_t x148 = 6U;

    t28 = (x145|((x146^x147)*x148));

    if (t28 != -31796LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x154 = -7898;
	uint32_t x155 = 791U;
	uint32_t x156 = UINT32_MAX;
	static volatile uint32_t t29 = UINT32_MAX;

    t29 = (x153|((x154^x155)*x156));

    if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x157 = INT64_MIN;
	static volatile int64_t x158 = -1LL;
	uint8_t x159 = 23U;
	uint32_t x160 = 1043270433U;
	static volatile int64_t t30 = -57449405LL;

    t30 = (x157|((x158^x159)*x160));

    if (t30 != -25038490392LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x166 = 13328238U;
	uint8_t x167 = 56U;
	int8_t x168 = 0;
	static int64_t t31 = -277912000814LL;

    t31 = (x165|((x166^x167)*x168));

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x173 = 22386U;
	int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	uint32_t t32 = 652U;

    t32 = (x173|((x174^x175)*x176));

    if (t32 != 491506U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x177 = INT32_MAX;
	uint8_t x178 = UINT8_MAX;
	int16_t x179 = -1;
	int16_t x180 = -1;
	static volatile int32_t t33 = INT32_MAX;

    t33 = (x177|((x178^x179)*x180));

    if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x181 = 518648LLU;
	static uint16_t x182 = 3500U;
	uint32_t x183 = 5175857U;
	int64_t x184 = -1LL;
	volatile uint64_t t34 = 31030862LLU;

    t34 = (x181|((x182^x183)*x184));

    if (t34 != 18446744073704827387LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x185 = INT32_MAX;
	static int8_t x186 = INT8_MIN;
	volatile uint32_t t35 = 1U;

    t35 = (x185|((x186^x187)*x188));

    if (t35 != 2147483647U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x189 = -8319500099421LL;
	int64_t x190 = -1LL;
	int64_t x191 = -1LL;
	volatile uint64_t x192 = UINT64_MAX;

    t36 = (x189|((x190^x191)*x192));

    if (t36 != 18446735754209452195LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x193 = INT64_MAX;
	int8_t x194 = -1;
	static uint64_t x195 = 511544939LLU;
	int64_t x196 = -1LL;

    t37 = (x193|((x194^x195)*x196));

    if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x197 = INT64_MIN;
	uint8_t x198 = UINT8_MAX;
	int64_t x199 = INT64_MIN;
	int16_t x200 = -1;
	static int64_t t38 = 45981506696653170LL;

    t38 = (x197|((x198^x199)*x200));

    if (t38 != -255LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x201 = INT8_MIN;
	int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MIN;
	uint8_t x204 = UINT8_MAX;
	int32_t t39 = -121698;

    t39 = (x201|((x202^x203)*x204));

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x210 = 49098016LLU;
	uint64_t x211 = 605082LLU;
	uint64_t x212 = 9400LLU;
	volatile uint64_t t40 = UINT64_MAX;

    t40 = (x209|((x210^x211)*x212));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x217 = 0U;
	int8_t x218 = -1;
	volatile int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MIN;

    t41 = (x217|((x218^x219)*x220));

    if (t41 != -4194176) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x221 = INT16_MIN;
	static volatile int16_t x223 = -1;
	int64_t x224 = -1LL;

    t42 = (x221|((x222^x223)*x224));

    if (t42 != -32767LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x225 = INT8_MIN;
	static volatile int32_t x226 = 83728;
	int8_t x227 = INT8_MAX;

    t43 = (x225|((x226^x227)*x228));

    if (t43 != -94) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x233 = INT32_MIN;
	uint16_t x234 = UINT16_MAX;
	uint64_t x235 = 33807162398869LLU;
	uint64_t t44 = 2262LLU;

    t44 = (x233|((x234^x235)*x236));

    if (t44 != 18446744072907501868LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x242 = 7U;
	static int32_t x244 = INT32_MIN;

    t45 = (x241|((x242^x243)*x244));

    if (t45 != 2147549183U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x249 = UINT16_MAX;
	static int8_t x250 = 6;
	int8_t x251 = -1;
	int8_t x252 = INT8_MAX;

    t46 = (x249|((x250^x251)*x252));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x253 = 1U;
	uint32_t x254 = 10482U;
	int8_t x255 = INT8_MIN;
	uint8_t x256 = 1U;
	volatile uint32_t t47 = 4282755U;

    t47 = (x253|((x254^x255)*x256));

    if (t47 != 4294956915U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x257 = UINT32_MAX;
	int32_t x258 = INT32_MIN;
	static volatile int64_t t48 = 88187LL;

    t48 = (x257|((x258^x259)*x260));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x265 = -228LL;
	volatile int32_t x266 = -19633;
	static volatile int8_t x267 = -1;
	int16_t x268 = INT16_MAX;
	volatile int64_t t49 = -796961698352LL;

    t49 = (x265|((x266^x267)*x268));

    if (t49 != -164LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x270 = UINT8_MAX;
	static uint64_t x272 = 350606LLU;

    t50 = (x269|((x270^x271)*x272));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x273 = -1;
	uint64_t x274 = 444LLU;
	volatile uint64_t x275 = 1LLU;
	uint32_t x276 = 369U;
	uint64_t t51 = UINT64_MAX;

    t51 = (x273|((x274^x275)*x276));

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x277 = INT16_MAX;
	volatile uint8_t x280 = 5U;
	int32_t t52 = 4;

    t52 = (x277|((x278^x279)*x280));

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t t53 = 1741874628613LLU;

    t53 = (x281|((x282^x283)*x284));

    if (t53 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x289 = -1;
	volatile int8_t x290 = INT8_MIN;
	static int8_t x291 = -9;
	uint32_t x292 = 37147760U;
	uint32_t t54 = UINT32_MAX;

    t54 = (x289|((x290^x291)*x292));

    if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x293 = UINT16_MAX;
	int16_t x294 = -1;
	int8_t x295 = 0;
	static int32_t t55 = 4357115;

    t55 = (x293|((x294^x295)*x296));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x297 = INT8_MIN;
	int64_t x298 = INT64_MAX;
	uint64_t x299 = 738619348913LLU;
	static int8_t x300 = -1;
	volatile uint64_t t56 = 13715769085307LLU;

    t56 = (x297|((x298^x299)*x300));

    if (t56 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x306 = INT16_MAX;
	uint32_t x308 = 0U;
	volatile uint32_t t57 = 2U;

    t57 = (x305|((x306^x307)*x308));

    if (t57 != 2147483647U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x309 = UINT8_MAX;
	uint64_t x310 = 5268047658481LLU;
	static uint8_t x311 = 63U;
	int64_t x312 = INT64_MAX;
	volatile uint64_t t58 = 117255313368722LLU;

    t58 = (x309|((x310^x311)*x312));

    if (t58 != 18446738805661893375LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x317 = -6;
	uint64_t x318 = 321744595977822600LLU;
	static int16_t x319 = -1;
	static volatile uint64_t t59 = 139393327LLU;

    t59 = (x317|((x318^x319)*x320));

    if (t59 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x321 = INT32_MIN;
	static volatile int32_t x322 = INT32_MIN;
	int8_t x323 = -12;
	volatile uint32_t x324 = 1233441U;
	volatile uint32_t t60 = 1831259602U;

    t60 = (x321|((x322^x323)*x324));

    if (t60 != 4280166004U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x325 = INT32_MIN;
	int64_t x327 = INT64_MIN;
	int32_t x328 = -56667440;
	volatile uint64_t t61 = 250548636266LLU;

    t61 = (x325|((x326^x327)*x328));

    if (t61 != 18446744072871260928LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x329 = -28;
	static int16_t x330 = INT16_MAX;
	uint64_t x331 = 257598028578LLU;
	uint16_t x332 = 105U;
	volatile uint64_t t62 = 9392488830LLU;

    t62 = (x329|((x330^x331)*x332));

    if (t62 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x333 = INT16_MIN;
	int16_t x335 = 416;
	uint64_t x336 = UINT64_MAX;
	uint64_t t63 = 100LLU;

    t63 = (x333|((x334^x335)*x336));

    if (t63 != 18446744073709519265LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x345 = -28250106;
	int64_t x346 = 7881536312981260LL;
	int64_t x347 = INT64_MAX;
	uint64_t x348 = 2102772312LLU;
	volatile uint64_t t64 = 1371LLU;

    t64 = (x345|((x346^x347)*x348));

    if (t64 != 18446744073692051854LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x350 = -1;
	uint64_t x351 = 100769731LLU;
	volatile uint64_t t65 = 213170491898036LLU;

    t65 = (x349|((x350^x351)*x352));

    if (t65 != 9223372038769400716LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x353 = 3819640618341284LL;
	volatile int64_t x354 = INT64_MIN;
	static int8_t x355 = -2;
	static int8_t x356 = 1;
	static volatile int64_t t66 = 17306205403429LL;

    t66 = (x353|((x354^x355)*x356));

    if (t66 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x357 = -1;
	static int16_t x358 = -1;
	int32_t x359 = INT32_MAX;
	static uint32_t x360 = 1441078U;
	uint32_t t67 = UINT32_MAX;

    t67 = (x357|((x358^x359)*x360));

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x362 = 121766;
	static int32_t x364 = -19;
	int64_t t68 = -4341430768539732LL;

    t68 = (x361|((x362^x363)*x364));

    if (t68 != 702604001601609198LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x365 = INT8_MAX;
	uint32_t x366 = UINT32_MAX;
	volatile int8_t x368 = INT8_MIN;

    t69 = (x365|((x366^x367)*x368));

    if (t69 != 127U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x373 = -1;
	static volatile int32_t x374 = INT32_MIN;
	static uint64_t x375 = UINT64_MAX;
	volatile uint64_t t70 = UINT64_MAX;

    t70 = (x373|((x374^x375)*x376));

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MIN;
	int8_t x379 = 2;
	int32_t x380 = -442775;
	volatile int32_t t71 = 794;

    t71 = (x377|((x378^x379)*x380));

    if (t71 != -46) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x383 = 1305661263U;
	static volatile uint64_t x384 = 7941994234LLU;
	uint64_t t72 = UINT64_MAX;

    t72 = (x381|((x382^x383)*x384));

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x385 = INT32_MIN;
	static int64_t x386 = -88891414LL;
	volatile int64_t t73 = -10037022952LL;

    t73 = (x385|((x386^x387)*x388));

    if (t73 != -2147483648LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x389 = 0;
	int8_t x390 = INT8_MIN;
	static int8_t x391 = 61;
	int16_t x392 = 4;
	volatile int32_t t74 = -113;

    t74 = (x389|((x390^x391)*x392));

    if (t74 != -268) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x402 = 2U;
	int16_t x403 = INT16_MIN;
	int8_t x404 = 0;

    t75 = (x401|((x402^x403)*x404));

    if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x409 = INT8_MIN;
	volatile int16_t x410 = INT16_MAX;
	volatile uint16_t x411 = 3356U;
	int64_t x412 = 21538729723632LL;
	volatile int64_t t76 = 6LL;

    t76 = (x409|((x410^x411)*x412));

    if (t76 != -48LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x417 = -699;
	volatile uint32_t t77 = 2U;

    t77 = (x417|((x418^x419)*x420));

    if (t77 != 4294966645U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x421 = INT64_MIN;
	static int8_t x422 = INT8_MIN;
	uint8_t x423 = UINT8_MAX;
	volatile uint64_t t78 = 4758149246277778082LLU;

    t78 = (x421|((x422^x423)*x424));

    if (t78 != 17788893775517078272LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x425 = UINT64_MAX;
	uint32_t x426 = 5894U;
	uint16_t x427 = 30258U;
	volatile uint16_t x428 = 2U;
	uint64_t t79 = UINT64_MAX;

    t79 = (x425|((x426^x427)*x428));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x430 = INT8_MAX;
	volatile uint64_t t80 = 1545910740240LLU;

    t80 = (x429|((x430^x431)*x432));

    if (t80 != 18446744072366048560LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x435 = 1798958808U;
	uint32_t x436 = UINT32_MAX;
	volatile int64_t t81 = 2212LL;

    t81 = (x433|((x434^x435)*x436));

    if (t81 != -9223372035055816999LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x437 = UINT64_MAX;
	int64_t x438 = INT64_MAX;
	volatile uint64_t x439 = UINT64_MAX;
	static int32_t x440 = -1;
	static volatile uint64_t t82 = UINT64_MAX;

    t82 = (x437|((x438^x439)*x440));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x451 = 11U;
	volatile int64_t t83 = 7170531246165LL;

    t83 = (x449|((x450^x451)*x452));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x457 = INT32_MIN;
	volatile int8_t x459 = 1;
	int16_t x460 = INT16_MAX;
	volatile int32_t t84 = -101075;

    t84 = (x457|((x458^x459)*x460));

    if (t84 != -2146697240) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x465 = 161U;
	uint64_t x466 = UINT64_MAX;
	uint16_t x467 = 0U;
	volatile int8_t x468 = INT8_MIN;
	uint64_t t85 = 16497451264LLU;

    t85 = (x465|((x466^x467)*x468));

    if (t85 != 161LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x469 = -1;
	uint32_t x470 = UINT32_MAX;
	int64_t x471 = INT64_MIN;
	int8_t x472 = 1;
	volatile int64_t t86 = 19189LL;

    t86 = (x469|((x470^x471)*x472));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x478 = INT32_MAX;
	uint8_t x480 = UINT8_MAX;
	volatile uint32_t t87 = 110873927U;

    t87 = (x477|((x478^x479)*x480));

    if (t87 != 2253362081U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x481 = INT32_MIN;
	volatile int8_t x482 = INT8_MIN;
	uint64_t x484 = 1051019478LLU;
	uint64_t t88 = 2LLU;

    t88 = (x481|((x482^x483)*x484));

    if (t88 != 18446744071823152996LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x485 = INT32_MIN;
	int8_t x486 = INT8_MIN;
	int16_t x487 = INT16_MIN;
	static int64_t x488 = -1LL;
	volatile int64_t t89 = 24004120LL;

    t89 = (x485|((x486^x487)*x488));

    if (t89 != -32640LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x490 = -1;
	uint32_t x491 = UINT32_MAX;
	uint16_t x492 = 9U;
	static uint32_t t90 = 1332U;

    t90 = (x489|((x490^x491)*x492));

    if (t90 != 65535U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x493 = INT16_MIN;
	int16_t x494 = INT16_MIN;
	uint16_t x495 = 12U;
	static uint64_t x496 = 6LLU;
	volatile uint64_t t91 = 12602428276419388LLU;

    t91 = (x493|((x494^x495)*x496));

    if (t91 != 18446744073709518920LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x502 = 4894LLU;
	static int32_t x503 = INT32_MIN;
	int16_t x504 = -1;
	uint64_t t92 = 9LLU;

    t92 = (x501|((x502^x503)*x504));

    if (t92 != 2147478754LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x505 = INT8_MAX;
	uint64_t x506 = 1290873910989LLU;
	static int64_t x507 = 762210936470633LL;
	uint64_t t93 = 239657LLU;

    t93 = (x505|((x506^x507)*x508));

    if (t93 != 6848632683257855LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x510 = 367U;
	int64_t x512 = -7843343514LL;
	static volatile int64_t t94 = 343LL;

    t94 = (x509|((x510^x511)*x512));

    if (t94 != -4219039LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x513 = -8217877;
	static volatile int32_t x514 = INT32_MIN;
	int64_t x515 = -378116LL;
	volatile int32_t x516 = INT32_MIN;
	int64_t t95 = 122491924770LL;

    t95 = (x513|((x514^x515)*x516));

    if (t95 != -8217877LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x517 = 1U;
	volatile int16_t x518 = INT16_MIN;
	int8_t x519 = -1;
	int64_t x520 = -1782819498613LL;
	volatile int64_t t96 = 12877048456LL;

    t96 = (x517|((x518^x519)*x520));

    if (t96 != -58417646511052171LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x525 = INT16_MIN;
	static int8_t x526 = -6;
	volatile uint32_t x527 = 8155563U;
	uint16_t x528 = UINT16_MAX;

    t97 = (x525|((x526^x527)*x528));

    if (t97 != 4294963631U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x533 = UINT8_MAX;
	int16_t x534 = -1;
	int8_t x535 = 0;
	volatile uint64_t t98 = 817LLU;

    t98 = (x533|((x534^x535)*x536));

    if (t98 != 255LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x541 = INT16_MAX;
	static volatile uint32_t x542 = 393522U;
	uint16_t x544 = UINT16_MAX;

    t99 = (x541|((x542^x543)*x544));

    if (t99 != 19791871U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x546 = -309828293525305LL;
	volatile int16_t x547 = INT16_MIN;
	int64_t t100 = 132303057613521580LL;

    t100 = (x545|((x546^x547)*x548));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x549 = -1LL;
	static int64_t x550 = INT64_MAX;
	int64_t x551 = INT64_MAX;
	volatile uint64_t x552 = UINT64_MAX;
	volatile uint64_t t101 = UINT64_MAX;

    t101 = (x549|((x550^x551)*x552));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x554 = 3317LL;
	static volatile int32_t x555 = -13224;
	int16_t x556 = 1;
	int64_t t102 = 33015237065295915LL;

    t102 = (x553|((x554^x555)*x556));

    if (t102 != -16209LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x557 = 5U;
	int8_t x558 = -1;
	int8_t x559 = -15;
	int16_t x560 = INT16_MAX;

    t103 = (x557|((x558^x559)*x560));

    if (t103 != 458743) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x569 = 480341U;
	volatile int64_t x570 = 7986912LL;
	uint32_t x571 = 7U;
	int32_t x572 = INT32_MAX;

    t104 = (x569|((x570^x571)*x572));

    if (t104 != 17151777942500701LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x573 = -1;
	uint64_t x574 = 84679690231164880LLU;
	static volatile int32_t x576 = -1;

    t105 = (x573|((x574^x575)*x576));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x581 = 31U;
	static int8_t x582 = 11;
	uint32_t x583 = UINT32_MAX;
	int32_t x584 = -961425747;
	static volatile uint32_t t106 = 112733242U;

    t106 = (x581|((x582^x583)*x584));

    if (t106 != 2947174399U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x586 = INT8_MIN;
	static int64_t x587 = INT64_MIN;
	int16_t x588 = 0;
	int64_t t107 = INT64_MIN;

    t107 = (x585|((x586^x587)*x588));

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x589 = -1LL;
	int32_t x590 = INT32_MIN;
	int8_t x591 = -1;
	int16_t x592 = 0;
	volatile int64_t t108 = -125787978855732LL;

    t108 = (x589|((x590^x591)*x592));

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x597 = INT8_MAX;
	uint32_t x598 = 10U;
	static volatile int16_t x600 = -1;
	uint32_t t109 = 117563733U;

    t109 = (x597|((x598^x599)*x600));

    if (t109 != 127U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x601 = -18597044;
	volatile int8_t x604 = INT8_MIN;
	volatile int32_t t110 = -33639;

    t110 = (x601|((x602^x603)*x604));

    if (t110 != -18596916) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x607 = 47LLU;
	int8_t x608 = INT8_MAX;
	uint64_t t111 = 107759434633460895LLU;

    t111 = (x605|((x606^x607)*x608));

    if (t111 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x609 = 4U;
	int32_t x610 = -1;
	uint32_t x611 = 560U;
	int64_t x612 = 45LL;
	int64_t t112 = -4LL;

    t112 = (x609|((x610^x611)*x612));

    if (t112 != 193273503079LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x613 = 39;
	volatile int64_t x614 = INT64_MAX;
	uint64_t x615 = UINT64_MAX;
	int32_t x616 = -1;
	volatile uint64_t t113 = 328LLU;

    t113 = (x613|((x614^x615)*x616));

    if (t113 != 9223372036854775847LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x625 = -149293LL;
	volatile uint64_t x626 = 841221650730667LLU;
	uint8_t x627 = 1U;
	volatile int8_t x628 = INT8_MAX;
	volatile uint64_t t114 = 294058507LLU;

    t114 = (x625|((x626^x627)*x628));

    if (t114 != 18446744073709403863LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x632 = INT16_MIN;
	static int32_t t115 = 186832;

    t115 = (x629|((x630^x631)*x632));

    if (t115 != 32895) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x637 = -12;
	int16_t x638 = -1;
	int8_t x639 = INT8_MAX;
	int32_t x640 = 0;
	int32_t t116 = 21794;

    t116 = (x637|((x638^x639)*x640));

    if (t116 != -12) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x641 = INT8_MIN;
	uint8_t x642 = UINT8_MAX;
	int64_t x643 = -33LL;
	int32_t x644 = -1;
	int64_t t117 = -54130823623LL;

    t117 = (x641|((x642^x643)*x644));

    if (t117 != -32LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x645 = -220798552;
	static uint64_t x647 = UINT64_MAX;
	volatile uint32_t x648 = 16U;
	static uint64_t t118 = 53LLU;

    t118 = (x645|((x646^x647)*x648));

    if (t118 != 18446744073488754680LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x649 = 836374063078098LLU;
	int32_t x650 = INT32_MIN;
	uint32_t x652 = UINT32_MAX;
	volatile uint64_t t119 = 138138979LLU;

    t119 = (x649|((x650^x651)*x652));

    if (t119 != 836376161419007LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x653 = UINT8_MAX;
	int16_t x654 = -1;
	int64_t x655 = -1LL;
	static uint16_t x656 = 49U;
	static volatile int64_t t120 = 15LL;

    t120 = (x653|((x654^x655)*x656));

    if (t120 != 255LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x657 = INT64_MIN;
	int8_t x658 = -1;
	int16_t x660 = 2045;
	volatile int64_t t121 = 3832491449207LL;

    t121 = (x657|((x658^x659)*x660));

    if (t121 != -9223372036401652834LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x661 = 15;
	int8_t x662 = INT8_MIN;
	volatile int8_t x663 = 46;
	uint8_t x664 = 23U;

    t122 = (x661|((x662^x663)*x664));

    if (t122 != -1873) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x665 = INT8_MIN;
	int16_t x666 = -1;
	volatile uint64_t x667 = 922098LLU;
	int16_t x668 = INT16_MIN;

    t123 = (x665|((x666^x667)*x668));

    if (t123 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x669 = INT64_MIN;
	volatile uint16_t x670 = 107U;
	static int32_t x671 = -1;
	uint16_t x672 = 5U;
	int64_t t124 = -641296103237LL;

    t124 = (x669|((x670^x671)*x672));

    if (t124 != -540LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x677 = INT8_MAX;
	uint32_t x679 = UINT32_MAX;
	static uint8_t x680 = UINT8_MAX;

    t125 = (x677|((x678^x679)*x680));

    if (t125 != 4294966655U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x681 = -99289;
	uint16_t x682 = 1U;
	volatile int8_t x683 = INT8_MAX;
	int8_t x684 = INT8_MIN;
	int32_t t126 = -386;

    t126 = (x681|((x682^x683)*x684));

    if (t126 != -729) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x685 = INT32_MIN;
	int32_t x686 = -1;
	uint32_t x687 = 1554U;
	uint8_t x688 = 46U;
	static uint32_t t127 = 1U;

    t127 = (x685|((x686^x687)*x688));

    if (t127 != 4294895766U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x689 = 0U;
	int8_t x690 = INT8_MIN;
	int32_t x691 = 531577;
	volatile uint32_t x692 = 5628U;

    t128 = (x689|((x690^x691)*x692));

    if (t128 != 1303893532U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x693 = INT32_MIN;
	volatile int8_t x694 = 1;
	int8_t x695 = INT8_MAX;
	static uint8_t x696 = 114U;
	static int32_t t129 = 314;

    t129 = (x693|((x694^x695)*x696));

    if (t129 != -2147469284) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x700 = 2574112352595113269LL;
	volatile uint64_t t130 = 1221225180242LLU;

    t130 = (x697|((x698^x699)*x700));

    if (t130 != 13317619526517007691LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x705 = INT8_MIN;
	int16_t x706 = -1;
	static int8_t x707 = INT8_MIN;
	int64_t x708 = -3896094631417LL;
	volatile int64_t t131 = -325771465LL;

    t131 = (x705|((x706^x707)*x708));

    if (t131 != -7LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x709 = INT64_MAX;
	volatile int8_t x710 = INT8_MIN;
	static uint64_t x711 = UINT64_MAX;
	uint8_t x712 = 100U;
	uint64_t t132 = 584843LLU;

    t132 = (x709|((x710^x711)*x712));

    if (t132 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x713 = 6U;
	volatile int32_t x714 = INT32_MAX;
	int8_t x715 = INT8_MIN;
	uint32_t x716 = 506U;

    t133 = (x713|((x714^x715)*x716));

    if (t133 != 64262U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x717 = 1973499763LLU;
	volatile int32_t x718 = INT32_MIN;
	volatile uint16_t x719 = UINT16_MAX;
	volatile uint32_t x720 = 1334114U;
	uint64_t t134 = 258336297162LLU;

    t134 = (x717|((x718^x719)*x720));

    if (t134 != 2146285567LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x721 = 6U;
	volatile int32_t x722 = 192596008;
	volatile int32_t x723 = -1;
	uint16_t x724 = 0U;

    t135 = (x721|((x722^x723)*x724));

    if (t135 != 6) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x725 = INT64_MIN;
	int32_t x726 = 2;
	uint64_t x727 = 70172735790997LLU;
	uint32_t x728 = 4U;
	uint64_t t136 = 374482970435145LLU;

    t136 = (x725|((x726^x727)*x728));

    if (t136 != 9223652727797939804LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x738 = INT16_MIN;
	uint8_t x739 = 21U;

    t137 = (x737|((x738^x739)*x740));

    if (t137 != 4191622) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x745 = -139989641252836LL;
	static volatile int32_t x747 = 4;
	int64_t t138 = 91373035253468LL;

    t138 = (x745|((x746^x747)*x748));

    if (t138 != -139987479855810LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x757 = UINT8_MAX;
	volatile int8_t x758 = INT8_MAX;
	uint8_t x759 = UINT8_MAX;
	volatile uint64_t x760 = 321168799443LLU;
	uint64_t t139 = 958356464650LLU;

    t139 = (x757|((x758^x759)*x760));

    if (t139 != 41109606328831LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x767 = 1545296868U;
	int64_t t140 = 375LL;

    t140 = (x765|((x766^x767)*x768));

    if (t140 != -9223372033161995291LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x773 = INT8_MIN;
	int32_t x774 = -1;
	static int16_t x775 = -1;
	static uint32_t x776 = 0U;
	static uint32_t t141 = 45U;

    t141 = (x773|((x774^x775)*x776));

    if (t141 != 4294967168U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x781 = INT16_MIN;
	uint64_t x782 = UINT64_MAX;
	static uint8_t x784 = 1U;
	uint64_t t142 = 305280879508142LLU;

    t142 = (x781|((x782^x783)*x784));

    if (t142 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x785 = 14;
	static int8_t x786 = -48;
	static int16_t x787 = -2;
	uint64_t x788 = UINT64_MAX;
	uint64_t t143 = 265865719553LLU;

    t143 = (x785|((x786^x787)*x788));

    if (t143 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x789 = -1LL;
	volatile uint16_t x790 = 109U;
	int16_t x791 = INT16_MIN;

    t144 = (x789|((x790^x791)*x792));

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x793 = -25;
	volatile uint16_t x795 = 19U;
	uint8_t x796 = UINT8_MAX;
	uint32_t t145 = 86725116U;

    t145 = (x793|((x794^x795)*x796));

    if (t145 != 4294967287U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x797 = -1490321361426190487LL;
	uint32_t x799 = 27U;
	int8_t x800 = 2;
	static volatile int64_t t146 = 2055427125301112LL;

    t146 = (x797|((x798^x799)*x800));

    if (t146 != -1490321358124224529LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x801 = INT64_MIN;
	int16_t x802 = INT16_MIN;
	static int16_t x803 = -2868;
	volatile uint64_t x804 = 2LLU;

    t147 = (x801|((x802^x803)*x804));

    if (t147 != 9223372036854835608LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x806 = -1LL;
	volatile int8_t x807 = INT8_MIN;
	int64_t t148 = -11LL;

    t148 = (x805|((x806^x807)*x808));

    if (t148 != -3937LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x809 = 0U;
	volatile uint64_t x810 = UINT64_MAX;
	int16_t x811 = INT16_MAX;
	static int32_t x812 = INT32_MIN;
	uint64_t t149 = 110702858LLU;

    t149 = (x809|((x810^x811)*x812));

    if (t149 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x814 = -4215434LL;
	int32_t x815 = 1;
	static int16_t x816 = INT16_MAX;
	static volatile int64_t t150 = -425476508044887LL;

    t150 = (x813|((x814^x815)*x816));

    if (t150 != -688139639LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x818 = 7U;
	int16_t x819 = 1;
	int32_t t151 = -10;

    t151 = (x817|((x818^x819)*x820));

    if (t151 != 111) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x821 = -1LL;
	uint32_t x822 = UINT32_MAX;
	int64_t x823 = INT64_MIN;
	volatile int64_t t152 = 198779025531301750LL;

    t152 = (x821|((x822^x823)*x824));

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x826 = -1;
	uint16_t x827 = UINT16_MAX;
	uint16_t x828 = 13591U;

    t153 = (x825|((x826^x827)*x828));

    if (t153 != -890699521) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x830 = -1;
	uint16_t x832 = 2U;
	volatile int32_t t154 = 481804;

    t154 = (x829|((x830^x831)*x832));

    if (t154 != -6) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x833 = 977852926610432LL;
	int64_t x834 = -15730659114LL;
	int8_t x835 = INT8_MIN;
	volatile int16_t x836 = INT16_MIN;

    t155 = (x833|((x834^x835)*x836));

    if (t155 != -145707967886336LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x837 = 7U;
	int16_t x839 = INT16_MIN;
	int16_t x840 = INT16_MAX;
	int32_t t156 = 365705077;

    t156 = (x837|((x838^x839)*x840));

    if (t156 != 7) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x844 = -1;
	uint64_t t157 = UINT64_MAX;

    t157 = (x841|((x842^x843)*x844));

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x846 = 5U;
	static uint32_t x847 = 1U;
	uint32_t x848 = 380U;
	volatile int64_t t158 = 86LL;

    t158 = (x845|((x846^x847)*x848));

    if (t158 != -9223372036854774288LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x853 = INT8_MAX;
	uint8_t x855 = 60U;
	int8_t x856 = -1;
	int64_t t159 = -159002279LL;

    t159 = (x853|((x854^x855)*x856));

    if (t159 != 127LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x861 = 15780U;
	uint16_t x863 = UINT16_MAX;
	int64_t x864 = INT64_MIN;
	volatile int64_t t160 = 4604LL;

    t160 = (x861|((x862^x863)*x864));

    if (t160 != 15780LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x866 = INT32_MIN;
	volatile uint64_t x867 = 342826336315828LLU;
	volatile int16_t x868 = INT16_MIN;
	uint64_t t161 = UINT64_MAX;

    t161 = (x865|((x866^x867)*x868));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x869 = 6589936;
	int16_t x870 = INT16_MIN;
	uint64_t x871 = 1LLU;

    t162 = (x869|((x870^x871)*x872));

    if (t162 != 1073712624LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x873 = INT16_MAX;
	uint64_t x874 = 1940411030472LLU;
	int8_t x875 = INT8_MAX;
	int64_t x876 = INT64_MAX;
	uint64_t t163 = 16555790395155LLU;

    t163 = (x873|((x874^x875)*x876));

    if (t163 != 9223370096443752447LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x877 = 3620U;
	int16_t x878 = -6005;
	uint8_t x880 = 0U;
	volatile int64_t t164 = 53816536032LL;

    t164 = (x877|((x878^x879)*x880));

    if (t164 != 3620LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x881 = INT8_MIN;
	int8_t x883 = -1;
	int32_t x884 = -1;
	int64_t t165 = 3480275805781LL;

    t165 = (x881|((x882^x883)*x884));

    if (t165 != -128LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x885 = 119U;
	volatile int16_t x886 = -1;
	int8_t x887 = -3;
	volatile uint32_t x888 = 19U;
	volatile uint32_t t166 = 1583261318U;

    t166 = (x885|((x886^x887)*x888));

    if (t166 != 119U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x889 = INT8_MAX;
	int16_t x891 = INT16_MIN;
	volatile int32_t t167 = -52553099;

    t167 = (x889|((x890^x891)*x892));

    if (t167 != -7478785) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x893 = UINT16_MAX;
	uint8_t x894 = UINT8_MAX;
	uint64_t x895 = 24LLU;
	int16_t x896 = INT16_MIN;
	static uint64_t t168 = 789304575766LLU;

    t168 = (x893|((x894^x895)*x896));

    if (t168 != 18446744073702014975LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x901 = -11018;
	uint8_t x904 = 25U;
	static uint32_t t169 = 14934U;

    t169 = (x901|((x902^x903)*x904));

    if (t169 != 4294967287U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x905 = INT8_MIN;
	int32_t x907 = INT32_MAX;
	uint32_t t170 = 2341U;

    t170 = (x905|((x906^x907)*x908));

    if (t170 != 4294967168U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x913 = UINT16_MAX;
	int8_t x914 = -1;
	int8_t x915 = 0;
	volatile int16_t x916 = 350;
	int32_t t171 = 2;

    t171 = (x913|((x914^x915)*x916));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x918 = INT8_MIN;
	uint32_t x919 = 2134296260U;
	uint32_t t172 = 327987088U;

    t172 = (x917|((x918^x919)*x920));

    if (t172 != 4294952636U) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x921 = -1;
	uint64_t x922 = 26206LLU;
	int64_t x923 = INT64_MIN;
	int64_t x924 = INT64_MAX;

    t173 = (x921|((x922^x923)*x924));

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x926 = 1;
	volatile uint64_t x927 = 23LLU;
	int16_t x928 = INT16_MIN;
	uint64_t t174 = 2792754132LLU;

    t174 = (x925|((x926^x927)*x928));

    if (t174 != 18446744073708834209LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x930 = -29;
	int64_t x931 = -103LL;
	int16_t x932 = 23;
	uint64_t t175 = 783733572LLU;

    t175 = (x929|((x930^x931)*x932));

    if (t175 != 852144356342LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x933 = -1;
	uint8_t x935 = 1U;
	uint32_t x936 = UINT32_MAX;
	volatile int64_t t176 = -12739140165600905LL;

    t176 = (x933|((x934^x935)*x936));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x938 = -1;
	int16_t x939 = -7044;
	int64_t x940 = 1447LL;
	volatile int64_t t177 = 1051800508LL;

    t177 = (x937|((x938^x939)*x940));

    if (t177 != 10191871LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x941 = 1426U;
	int64_t x942 = 737261494LL;
	int16_t x943 = INT16_MIN;
	uint16_t x944 = 462U;

    t178 = (x941|((x942^x943)*x944));

    if (t178 != -340616769546LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x946 = -1;
	int32_t x947 = -1;
	int64_t x948 = -1LL;
	int64_t t179 = 175LL;

    t179 = (x945|((x946^x947)*x948));

    if (t179 != 4LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x949 = 42U;
	uint64_t x950 = 137740086880LLU;
	int16_t x951 = INT16_MAX;
	uint32_t x952 = UINT32_MAX;
	volatile uint64_t t180 = 131925689940336LLU;

    t180 = (x949|((x950^x951)*x952));

    if (t180 != 1293256017354518123LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x953 = 759U;
	int32_t x954 = -34990;
	static uint16_t x955 = 79U;
	int32_t x956 = 5;

    t181 = (x953|((x954^x955)*x956));

    if (t181 != -175113) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x969 = INT32_MIN;
	int32_t x970 = -1;
	static int32_t x971 = 3859;
	int8_t x972 = 1;
	volatile int32_t t182 = -2032173;

    t182 = (x969|((x970^x971)*x972));

    if (t182 != -3860) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x973 = INT8_MAX;
	int8_t x975 = -1;
	int32_t x976 = -1;

    t183 = (x973|((x974^x975)*x976));

    if (t183 != 127) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x981 = INT16_MAX;
	int16_t x982 = INT16_MAX;
	static int8_t x983 = -1;
	volatile int8_t x984 = INT8_MIN;
	int32_t t184 = 11933509;

    t184 = (x981|((x982^x983)*x984));

    if (t184 != 4227071) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x989 = INT8_MIN;
	static int32_t x990 = INT32_MAX;
	uint16_t x991 = 3U;
	uint64_t x992 = UINT64_MAX;
	uint64_t t185 = 1107032825594917LLU;

    t185 = (x989|((x990^x991)*x992));

    if (t185 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x993 = 761;
	int64_t x994 = -273338LL;
	int32_t x995 = -4;
	uint32_t x996 = UINT32_MAX;

    t186 = (x993|((x994^x995)*x996));

    if (t186 != 1173977770481407LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x1001 = 0U;
	volatile uint32_t x1002 = 163U;
	static uint8_t x1004 = 14U;

    t187 = (x1001|((x1002^x1003)*x1004));

    if (t187 != 4294965000U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1009 = -1;
	uint32_t x1010 = 1898008U;
	int16_t x1011 = INT16_MIN;
	uint32_t x1012 = 21114284U;
	uint32_t t188 = UINT32_MAX;

    t188 = (x1009|((x1010^x1011)*x1012));

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x1013 = INT8_MIN;
	int32_t x1016 = -845916;
	int32_t t189 = 1899483;

    t189 = (x1013|((x1014^x1015)*x1016));

    if (t189 != -72) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1017 = INT8_MAX;
	int32_t x1018 = INT32_MIN;
	static int8_t x1019 = -4;
	static int16_t x1020 = -1;
	int32_t t190 = -1145558;

    t190 = (x1017|((x1018^x1019)*x1020));

    if (t190 != -2147483521) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x1021 = INT16_MAX;
	int16_t x1022 = -1;
	static uint32_t x1023 = 5901U;
	uint64_t x1024 = 425170403174LLU;

    t191 = (x1021|((x1022^x1023)*x1024));

    if (t191 != 18309548280209014783LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1025 = UINT32_MAX;
	uint16_t x1026 = 133U;
	uint32_t x1027 = UINT32_MAX;
	volatile uint32_t x1028 = 1343273838U;
	volatile uint32_t t192 = UINT32_MAX;

    t192 = (x1025|((x1026^x1027)*x1028));

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1029 = 0;
	volatile int16_t x1031 = INT16_MIN;
	uint64_t x1032 = UINT64_MAX;
	static uint64_t t193 = 107073481318135LLU;

    t193 = (x1029|((x1030^x1031)*x1032));

    if (t193 != 32769LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1033 = -1;
	int8_t x1035 = INT8_MAX;
	uint8_t x1036 = UINT8_MAX;
	int32_t t194 = 26563;

    t194 = (x1033|((x1034^x1035)*x1036));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1041 = INT64_MIN;
	int16_t x1042 = INT16_MIN;
	volatile uint32_t x1043 = 103U;
	volatile int8_t x1044 = -1;
	int64_t t195 = -464699886227309LL;

    t195 = (x1041|((x1042^x1043)*x1044));

    if (t195 != -9223372036854743143LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1049 = INT8_MAX;
	int32_t x1051 = 11024392;
	static uint64_t x1052 = 228114563265521152LLU;
	uint64_t t196 = 24LLU;

    t196 = (x1049|((x1050^x1051)*x1052));

    if (t196 != 1739058473342986879LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1053 = INT32_MIN;
	int64_t x1054 = INT64_MIN;
	int16_t x1055 = INT16_MIN;
	volatile int16_t x1056 = -1;
	int64_t t197 = -78744LL;

    t197 = (x1053|((x1054^x1055)*x1056));

    if (t197 != -2147450880LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1061 = -1023219641LL;
	int8_t x1062 = 15;
	volatile uint8_t x1063 = 57U;
	int32_t x1064 = 1022;
	int64_t t198 = 76116151LL;

    t198 = (x1061|((x1062^x1063)*x1064));

    if (t198 != -1023213609LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1065 = -1;
	int16_t x1066 = -13631;
	uint64_t x1067 = 3265989LLU;
	uint64_t x1068 = 26772047LLU;

    t199 = (x1065|((x1066^x1067)*x1068));

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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

