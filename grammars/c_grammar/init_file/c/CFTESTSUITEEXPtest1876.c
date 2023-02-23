
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

static int8_t x7 = -1;
int64_t x8 = INT64_MIN;
int64_t x16 = INT64_MAX;
uint32_t t3 = 59U;
int32_t x21 = 1;
uint64_t x24 = 1813LLU;
int32_t t5 = 14152151;
int8_t x28 = INT8_MAX;
int32_t x31 = -1;
int32_t x33 = INT32_MAX;
int64_t x34 = INT64_MIN;
int64_t t10 = INT64_MIN;
int8_t x45 = INT8_MIN;
int8_t x57 = INT8_MIN;
uint16_t x58 = 502U;
int32_t x59 = -1;
int32_t x60 = -5;
static volatile int32_t t14 = -206564;
int16_t x67 = INT16_MIN;
int16_t x68 = -1;
volatile int8_t x70 = INT8_MAX;
int64_t x74 = INT64_MAX;
volatile int16_t x77 = INT16_MIN;
int32_t x88 = -1;
volatile int64_t x90 = INT64_MIN;
int8_t x94 = 0;
int8_t x100 = INT8_MAX;
volatile int32_t t24 = -111634;
static uint32_t x101 = UINT32_MAX;
int8_t x106 = INT8_MAX;
int8_t x110 = -1;
int32_t x115 = -6112394;
volatile int32_t x117 = INT32_MAX;
uint8_t x119 = UINT8_MAX;
int32_t t29 = INT32_MAX;
uint32_t x131 = 6952U;
int32_t x144 = 3;
static int16_t x151 = 3;
int64_t x152 = 38872359998LL;
int32_t t38 = -6047;
int32_t x167 = INT32_MIN;
int32_t t41 = 8108065;
volatile int32_t t42 = INT32_MIN;
volatile uint32_t x175 = 58596395U;
int32_t x176 = INT32_MIN;
int8_t x181 = -1;
uint64_t x182 = 225LLU;
int32_t t45 = 207474754;
uint32_t x187 = UINT32_MAX;
static int16_t x194 = 1;
volatile int32_t t48 = 90;
int32_t x200 = -342356;
uint64_t x202 = UINT64_MAX;
int64_t x203 = -2880448LL;
int8_t x206 = -1;
int16_t x224 = -1;
volatile int32_t t55 = 1;
volatile int32_t x225 = -1;
volatile int16_t x226 = INT16_MIN;
int32_t x228 = -1;
uint32_t x236 = 22U;
int16_t x237 = INT16_MAX;
uint8_t x238 = UINT8_MAX;
volatile int16_t x255 = 5;
volatile int32_t x257 = -1;
int8_t x260 = INT8_MIN;
int32_t t64 = -26783675;
static uint8_t x263 = 6U;
volatile int32_t t65 = -276949;
volatile int16_t x267 = INT16_MAX;
uint16_t x270 = UINT16_MAX;
int8_t x271 = -1;
int32_t x274 = -15;
static volatile int64_t t70 = 399106LL;
uint8_t x292 = UINT8_MAX;
int64_t x293 = -959673LL;
int16_t x296 = INT16_MAX;
volatile uint32_t x299 = 407020U;
volatile uint8_t x305 = 21U;
static uint8_t x312 = UINT8_MAX;
int8_t x319 = 5;
volatile int8_t x326 = 1;
int32_t t81 = INT32_MIN;
int16_t x331 = -27;
uint64_t x342 = 2515506078LLU;
uint32_t x344 = UINT32_MAX;
int32_t t85 = -184991;
int32_t x345 = INT32_MAX;
volatile int16_t x348 = INT16_MAX;
volatile int16_t x350 = 11;
volatile int32_t x360 = INT32_MAX;
int32_t x370 = INT32_MIN;
static int16_t x374 = INT16_MIN;
volatile int16_t x377 = INT16_MIN;
int8_t x380 = INT8_MAX;
int16_t x383 = -257;
int8_t x384 = INT8_MIN;
uint32_t x385 = 2227085U;
uint8_t x389 = 60U;
int32_t x405 = 413046353;
volatile int32_t t102 = 3729550;
int8_t x414 = INT8_MIN;
int64_t x418 = INT64_MAX;
int32_t x419 = INT32_MAX;
int8_t x420 = INT8_MIN;
static volatile uint32_t x421 = UINT32_MAX;
int64_t x424 = -1LL;
volatile uint32_t t105 = UINT32_MAX;
int16_t x431 = INT16_MIN;
static uint64_t x434 = 3LLU;
int64_t t109 = INT64_MAX;
int64_t x444 = INT64_MIN;
int8_t x445 = 40;
int16_t x448 = INT16_MIN;
uint64_t x462 = UINT64_MAX;
volatile uint32_t t117 = 176940U;
int16_t x479 = INT16_MIN;
static int64_t x482 = -2062048165986907LL;
volatile int32_t t120 = INT32_MAX;
uint8_t x490 = 2U;
int64_t x495 = INT64_MAX;
int64_t t124 = 195047687638095049LL;
uint16_t x501 = 284U;
volatile int32_t t125 = 1876;
int16_t x505 = -1;
volatile uint16_t x511 = 2311U;
int32_t x516 = INT32_MIN;
volatile int16_t x525 = INT16_MAX;
int32_t t131 = -196;
int8_t x531 = -1;
uint64_t x536 = 1LLU;
static int32_t t133 = -153964445;
int32_t x537 = -1;
int8_t x538 = -1;
static int32_t x540 = -1;
int8_t x544 = INT8_MIN;
static uint8_t x547 = 3U;
volatile int32_t x553 = INT32_MIN;
static uint64_t x555 = 48357576199222695LLU;
volatile int32_t t139 = -20218;
volatile int64_t x569 = -412818749165625LL;
int64_t x577 = 5833LL;
int64_t x585 = INT64_MAX;
volatile int32_t t147 = -14;
int32_t t148 = -730;
uint32_t x602 = UINT32_MAX;
uint32_t x612 = 31167066U;
int64_t t154 = 986LL;
int8_t x627 = -1;
uint16_t x631 = UINT16_MAX;
uint8_t x632 = 10U;
static int64_t x635 = INT64_MAX;
uint64_t x637 = 2457448421LLU;
static int32_t x646 = -38075;
int32_t x647 = INT32_MIN;
uint8_t x649 = UINT8_MAX;
int32_t t163 = 18604;
volatile int16_t x660 = INT16_MAX;
int32_t t168 = -220158947;
int8_t x688 = INT8_MAX;
uint8_t x690 = 31U;
int8_t x691 = INT8_MAX;
uint64_t x692 = 31701028686821LLU;
uint16_t x694 = 3521U;
int8_t x696 = 55;
int32_t t175 = INT32_MIN;
uint32_t x706 = 74841U;
uint8_t x708 = UINT8_MAX;
int32_t x709 = INT32_MAX;
int64_t x711 = INT64_MIN;
int64_t x715 = -1LL;
int32_t x718 = 467447701;
int16_t x721 = 3636;
uint64_t x725 = 54238834LLU;
int16_t x736 = INT16_MIN;
uint64_t x738 = 15772224599239081LLU;
int64_t x749 = INT64_MIN;
static uint16_t x750 = UINT16_MAX;
static uint64_t x754 = 1LLU;
volatile int32_t t188 = -2039338;
int32_t x761 = -6836;
uint16_t x765 = 1900U;
volatile int16_t x770 = INT16_MIN;
volatile int32_t x781 = -3065;
uint32_t x783 = UINT32_MAX;
static volatile int8_t x793 = INT8_MAX;
uint16_t x799 = 378U;


void f0(void) {
    	uint8_t x1 = 60U;
	static int8_t x2 = -6;
	static volatile int8_t x3 = 22;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = -23090;

    t0 = (x1^((x2<=x3)==x4));

    if (t0 != 60) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 5U;
	volatile int32_t x6 = INT32_MAX;
	volatile uint32_t t1 = 385862523U;

    t1 = (x5^((x6<=x7)==x8));

    if (t1 != 5U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	volatile int32_t x10 = 181;
	volatile int8_t x11 = INT8_MAX;
	int64_t x12 = INT64_MIN;
	int32_t t2 = -84797327;

    t2 = (x9^((x10<=x11)==x12));

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = 44393683U;
	static volatile uint64_t x14 = 542804515455111203LLU;
	int16_t x15 = -15;

    t3 = (x13^((x14<=x15)==x16));

    if (t3 != 44393683U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	static volatile int16_t x18 = -19;
	int8_t x19 = INT8_MIN;
	uint16_t x20 = 180U;
	volatile int32_t t4 = 10982;

    t4 = (x17^((x18<=x19)==x20));

    if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x22 = UINT16_MAX;
	static volatile int16_t x23 = 11;

    t5 = (x21^((x22<=x23)==x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 3532;
	int32_t x26 = INT32_MIN;
	int8_t x27 = 1;
	int32_t t6 = 26232;

    t6 = (x25^((x26<=x27)==x28));

    if (t6 != 3532) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 135768380U;
	int16_t x30 = -14701;
	int8_t x32 = INT8_MIN;
	volatile uint32_t t7 = 0U;

    t7 = (x29^((x30<=x31)==x32));

    if (t7 != 135768380U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x35 = INT32_MIN;
	int8_t x36 = -63;
	static int32_t t8 = INT32_MAX;

    t8 = (x33^((x34<=x35)==x36));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	volatile int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MIN;
	int16_t x40 = 21;
	volatile int64_t t9 = INT64_MAX;

    t9 = (x37^((x38<=x39)==x40));

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	int8_t x42 = -1;
	int32_t x43 = -1864751;
	int64_t x44 = 978697710102763552LL;

    t10 = (x41^((x42<=x43)==x44));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = -1;
	uint64_t x47 = UINT64_MAX;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = -6278836;

    t11 = (x45^((x46<=x47)==x48));

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	static uint8_t x50 = 18U;
	uint64_t x51 = UINT64_MAX;
	volatile int8_t x52 = INT8_MIN;
	volatile int64_t t12 = INT64_MIN;

    t12 = (x49^((x50<=x51)==x52));

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x53 = 6U;
	int64_t x54 = INT64_MIN;
	int8_t x55 = -1;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 317;

    t13 = (x53^((x54<=x55)==x56));

    if (t13 != 6) { NG(); } else { ; }
	
}

void f14(void) {
    

    t14 = (x57^((x58<=x59)==x60));

    if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = 4470413501424073LL;
	int8_t x62 = 0;
	volatile int8_t x63 = -17;
	volatile int64_t x64 = INT64_MAX;
	volatile int64_t t15 = 1LL;

    t15 = (x61^((x62<=x63)==x64));

    if (t15 != 4470413501424073LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = INT32_MIN;
	volatile int32_t x66 = INT32_MIN;
	int32_t t16 = INT32_MIN;

    t16 = (x65^((x66<=x67)==x68));

    if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	static int64_t x71 = INT64_MIN;
	static uint8_t x72 = UINT8_MAX;
	volatile int32_t t17 = -1;

    t17 = (x69^((x70<=x71)==x72));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	static int16_t x75 = INT16_MIN;
	static volatile int16_t x76 = -11;
	volatile int32_t t18 = 1952;

    t18 = (x73^((x74<=x75)==x76));

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x78 = UINT64_MAX;
	uint32_t x79 = UINT32_MAX;
	int32_t x80 = 0;
	volatile int32_t t19 = 233;

    t19 = (x77^((x78<=x79)==x80));

    if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x81 = INT8_MIN;
	uint32_t x82 = UINT32_MAX;
	uint32_t x83 = 58766U;
	static int32_t x84 = 9;
	volatile int32_t t20 = -845399881;

    t20 = (x81^((x82<=x83)==x84));

    if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 14U;
	int32_t x86 = -1;
	static int32_t x87 = INT32_MIN;
	int32_t t21 = 28875;

    t21 = (x85^((x86<=x87)==x88));

    if (t21 != 14) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = -2284028;
	volatile int32_t x91 = INT32_MAX;
	uint32_t x92 = 3845375U;
	int32_t t22 = -16583833;

    t22 = (x89^((x90<=x91)==x92));

    if (t22 != -2284028) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -1;
	int64_t x95 = INT64_MIN;
	static int8_t x96 = INT8_MIN;
	volatile int32_t t23 = -5916932;

    t23 = (x93^((x94<=x95)==x96));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x97 = INT16_MAX;
	int16_t x98 = 13476;
	int64_t x99 = INT64_MIN;

    t24 = (x97^((x98<=x99)==x100));

    if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x102 = 8957U;
	uint64_t x103 = 40603106LLU;
	volatile uint32_t x104 = 10801U;
	volatile uint32_t t25 = UINT32_MAX;

    t25 = (x101^((x102<=x103)==x104));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 0;
	static int16_t x107 = 22;
	int8_t x108 = -1;
	int32_t t26 = -25416205;

    t26 = (x105^((x106<=x107)==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	int32_t x111 = INT32_MAX;
	volatile uint16_t x112 = UINT16_MAX;
	int32_t t27 = -632023;

    t27 = (x109^((x110<=x111)==x112));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = 1187987;
	volatile int32_t x114 = INT32_MIN;
	static int64_t x116 = INT64_MIN;
	volatile int32_t t28 = -271;

    t28 = (x113^((x114<=x115)==x116));

    if (t28 != 1187987) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = 165473349907897LL;
	static int32_t x120 = INT32_MIN;

    t29 = (x117^((x118<=x119)==x120));

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	volatile uint8_t x122 = UINT8_MAX;
	int64_t x123 = -1346456408870419019LL;
	static volatile int32_t x124 = -82852097;
	volatile int32_t t30 = 1697934;

    t30 = (x121^((x122<=x123)==x124));

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 3;
	static uint64_t x126 = UINT64_MAX;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = INT8_MIN;
	int32_t t31 = 4;

    t31 = (x125^((x126<=x127)==x128));

    if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = 1309;
	uint8_t x130 = UINT8_MAX;
	int16_t x132 = INT16_MAX;
	int32_t t32 = -2838;

    t32 = (x129^((x130<=x131)==x132));

    if (t32 != 1309) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	int64_t x134 = 7LL;
	int64_t x135 = INT64_MIN;
	volatile int32_t x136 = INT32_MAX;
	volatile int64_t t33 = INT64_MAX;

    t33 = (x133^((x134<=x135)==x136));

    if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -30811LL;
	uint32_t x138 = 1U;
	static uint16_t x139 = UINT16_MAX;
	int8_t x140 = 1;
	int64_t t34 = -1LL;

    t34 = (x137^((x138<=x139)==x140));

    if (t34 != -30812LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	uint8_t x142 = 0U;
	int16_t x143 = INT16_MAX;
	static volatile int32_t t35 = INT32_MAX;

    t35 = (x141^((x142<=x143)==x144));

    if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	uint64_t x146 = 5408232953201596151LLU;
	int8_t x147 = -1;
	uint32_t x148 = 722U;
	volatile int32_t t36 = -1;

    t36 = (x145^((x146<=x147)==x148));

    if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	static int64_t x150 = -1LL;
	int64_t t37 = 49313519505305LL;

    t37 = (x149^((x150<=x151)==x152));

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 2;
	static int16_t x154 = INT16_MIN;
	int32_t x155 = -1;
	int32_t x156 = INT32_MIN;

    t38 = (x153^((x154<=x155)==x156));

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 67121025875LLU;
	volatile int8_t x158 = -1;
	volatile uint32_t x159 = 50003944U;
	static volatile int32_t x160 = 212373022;
	static uint64_t t39 = 49387LLU;

    t39 = (x157^((x158<=x159)==x160));

    if (t39 != 67121025875LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -977764165;
	uint32_t x162 = 694U;
	int32_t x163 = -1;
	uint32_t x164 = UINT32_MAX;
	static int32_t t40 = 21432;

    t40 = (x161^((x162<=x163)==x164));

    if (t40 != -977764165) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MAX;
	int64_t x166 = -4953658LL;
	int64_t x168 = INT64_MAX;

    t41 = (x165^((x166<=x167)==x168));

    if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = INT32_MIN;
	volatile int64_t x170 = INT64_MAX;
	static int16_t x171 = INT16_MIN;
	uint32_t x172 = 205025724U;

    t42 = (x169^((x170<=x171)==x172));

    if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = UINT32_MAX;
	int16_t x174 = -2662;
	volatile uint32_t t43 = UINT32_MAX;

    t43 = (x173^((x174<=x175)==x176));

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = 475;
	uint32_t x178 = 25107592U;
	uint64_t x179 = 1624LLU;
	uint16_t x180 = 907U;
	volatile int32_t t44 = -429;

    t44 = (x177^((x178<=x179)==x180));

    if (t44 != 475) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x183 = INT8_MIN;
	volatile int8_t x184 = -2;

    t45 = (x181^((x182<=x183)==x184));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 1U;
	int8_t x186 = INT8_MIN;
	int8_t x188 = INT8_MIN;
	static volatile int32_t t46 = -490;

    t46 = (x185^((x186<=x187)==x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MAX;
	volatile int8_t x190 = -1;
	int64_t x191 = INT64_MAX;
	int64_t x192 = 1317LL;
	static volatile int32_t t47 = 1;

    t47 = (x189^((x190<=x191)==x192));

    if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x193 = -196;
	int32_t x195 = INT32_MIN;
	int16_t x196 = 4;

    t48 = (x193^((x194<=x195)==x196));

    if (t48 != -196) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x197 = 67183182371690311LLU;
	int64_t x198 = INT64_MAX;
	int16_t x199 = INT16_MIN;
	static uint64_t t49 = 8024937LLU;

    t49 = (x197^((x198<=x199)==x200));

    if (t49 != 67183182371690311LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 60U;
	static uint64_t x204 = 6486842070LLU;
	int32_t t50 = 70007719;

    t50 = (x201^((x202<=x203)==x204));

    if (t50 != 60) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -1LL;
	uint32_t x207 = UINT32_MAX;
	int64_t x208 = INT64_MAX;
	volatile int64_t t51 = 235575959LL;

    t51 = (x205^((x206<=x207)==x208));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	volatile int32_t x210 = INT32_MIN;
	int16_t x211 = -2;
	uint32_t x212 = 13349U;
	int64_t t52 = 1349290429799977751LL;

    t52 = (x209^((x210<=x211)==x212));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	int8_t x214 = 0;
	uint16_t x215 = UINT16_MAX;
	uint32_t x216 = 5123444U;
	static volatile int32_t t53 = 61638950;

    t53 = (x213^((x214<=x215)==x216));

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 7U;
	int16_t x218 = -1;
	static int32_t x219 = -347;
	static uint64_t x220 = UINT64_MAX;
	int32_t t54 = 9135368;

    t54 = (x217^((x218<=x219)==x220));

    if (t54 != 7) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x221 = INT8_MIN;
	int64_t x222 = -226068671414424458LL;
	int16_t x223 = INT16_MIN;

    t55 = (x221^((x222<=x223)==x224));

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x227 = INT32_MIN;
	volatile int32_t t56 = -495113679;

    t56 = (x225^((x226<=x227)==x228));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	volatile int64_t x232 = 60944092274642LL;
	volatile int32_t t57 = -798782;

    t57 = (x229^((x230<=x231)==x232));

    if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	uint64_t x234 = 630038054802LLU;
	uint32_t x235 = UINT32_MAX;
	volatile int64_t t58 = INT64_MIN;

    t58 = (x233^((x234<=x235)==x236));

    if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x239 = 2U;
	static int32_t x240 = 195856363;
	int32_t t59 = 5;

    t59 = (x237^((x238<=x239)==x240));

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x241 = UINT32_MAX;
	static int8_t x242 = 7;
	uint64_t x243 = 864326888467689LLU;
	static int16_t x244 = 7;
	volatile uint32_t t60 = UINT32_MAX;

    t60 = (x241^((x242<=x243)==x244));

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	static int16_t x246 = 183;
	int16_t x247 = -5;
	uint64_t x248 = UINT64_MAX;
	int32_t t61 = 363;

    t61 = (x245^((x246<=x247)==x248));

    if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = -4265020873LL;
	static int64_t x250 = -328671686644344LL;
	static int64_t x251 = -65096LL;
	uint32_t x252 = UINT32_MAX;
	static int64_t t62 = 5449808544LL;

    t62 = (x249^((x250<=x251)==x252));

    if (t62 != -4265020873LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = 7U;
	int16_t x254 = INT16_MAX;
	int8_t x256 = INT8_MAX;
	volatile int32_t t63 = -427;

    t63 = (x253^((x254<=x255)==x256));

    if (t63 != 7) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x258 = INT8_MAX;
	uint32_t x259 = UINT32_MAX;

    t64 = (x257^((x258<=x259)==x260));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	int8_t x262 = -13;
	int16_t x264 = INT16_MIN;

    t65 = (x261^((x262<=x263)==x264));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x265 = 1U;
	static int64_t x266 = INT64_MIN;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t66 = 7;

    t66 = (x265^((x266<=x267)==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	int64_t x272 = -1LL;
	static int64_t t67 = INT64_MIN;

    t67 = (x269^((x270<=x271)==x272));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x273 = -1;
	uint8_t x275 = 1U;
	int32_t x276 = INT32_MIN;
	static volatile int32_t t68 = 1266960;

    t68 = (x273^((x274<=x275)==x276));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x277 = INT64_MIN;
	volatile int16_t x278 = INT16_MIN;
	static int32_t x279 = INT32_MIN;
	int32_t x280 = INT32_MAX;
	int64_t t69 = INT64_MIN;

    t69 = (x277^((x278<=x279)==x280));

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 684679896LL;
	volatile int16_t x282 = -1;
	int16_t x283 = 63;
	uint32_t x284 = 4535598U;

    t70 = (x281^((x282<=x283)==x284));

    if (t70 != 684679896LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	static volatile uint32_t x286 = 440035483U;
	int32_t x287 = INT32_MIN;
	uint32_t x288 = 2576U;
	static int32_t t71 = INT32_MIN;

    t71 = (x285^((x286<=x287)==x288));

    if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x289 = INT8_MIN;
	int16_t x290 = INT16_MIN;
	static int8_t x291 = INT8_MIN;
	static volatile int32_t t72 = -835;

    t72 = (x289^((x290<=x291)==x292));

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x294 = INT8_MIN;
	int32_t x295 = -1777;
	static volatile int64_t t73 = -33068293131LL;

    t73 = (x293^((x294<=x295)==x296));

    if (t73 != -959673LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x297 = 24U;
	int32_t x298 = INT32_MIN;
	volatile int64_t x300 = INT64_MIN;
	int32_t t74 = -396;

    t74 = (x297^((x298<=x299)==x300));

    if (t74 != 24) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = 4156979253922LL;
	int64_t x302 = -5180LL;
	uint64_t x303 = 911094127487539LLU;
	uint16_t x304 = UINT16_MAX;
	volatile int64_t t75 = 782LL;

    t75 = (x301^((x302<=x303)==x304));

    if (t75 != 4156979253922LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x306 = 5U;
	uint16_t x307 = 12U;
	int8_t x308 = -1;
	volatile int32_t t76 = 329;

    t76 = (x305^((x306<=x307)==x308));

    if (t76 != 21) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x309 = INT8_MIN;
	static int8_t x310 = 0;
	int32_t x311 = 21501;
	static volatile int32_t t77 = -182372180;

    t77 = (x309^((x310<=x311)==x312));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = UINT8_MAX;
	uint8_t x314 = 51U;
	static int8_t x315 = INT8_MIN;
	int64_t x316 = 249089LL;
	int32_t t78 = 29;

    t78 = (x313^((x314<=x315)==x316));

    if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 86924817U;
	uint16_t x318 = UINT16_MAX;
	int64_t x320 = -1LL;
	static uint32_t t79 = 11215664U;

    t79 = (x317^((x318<=x319)==x320));

    if (t79 != 86924817U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = 6LL;
	volatile int16_t x322 = -39;
	int8_t x323 = INT8_MAX;
	uint8_t x324 = 28U;
	volatile int64_t t80 = -974126872892200LL;

    t80 = (x321^((x322<=x323)==x324));

    if (t80 != 6LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x325 = INT32_MIN;
	int64_t x327 = INT64_MIN;
	int64_t x328 = 1036894LL;

    t81 = (x325^((x326<=x327)==x328));

    if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = -1863;
	int16_t x330 = -2318;
	uint16_t x332 = UINT16_MAX;
	int32_t t82 = -57918;

    t82 = (x329^((x330<=x331)==x332));

    if (t82 != -1863) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x333 = 7;
	volatile uint8_t x334 = UINT8_MAX;
	int64_t x335 = -30LL;
	volatile uint32_t x336 = 443187327U;
	volatile int32_t t83 = 63359957;

    t83 = (x333^((x334<=x335)==x336));

    if (t83 != 7) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -1;
	static int8_t x338 = 0;
	uint64_t x339 = 2787LLU;
	int16_t x340 = INT16_MIN;
	static int32_t t84 = -278673033;

    t84 = (x337^((x338<=x339)==x340));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	int32_t x343 = -1;

    t85 = (x341^((x342<=x343)==x344));

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x346 = INT16_MAX;
	int32_t x347 = INT32_MIN;
	volatile int32_t t86 = INT32_MAX;

    t86 = (x345^((x346<=x347)==x348));

    if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x349 = 31707U;
	int32_t x351 = INT32_MIN;
	volatile int8_t x352 = INT8_MIN;
	int32_t t87 = 998414029;

    t87 = (x349^((x350<=x351)==x352));

    if (t87 != 31707) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MIN;
	uint8_t x354 = 0U;
	uint16_t x355 = 2U;
	uint8_t x356 = 30U;
	int32_t t88 = 0;

    t88 = (x353^((x354<=x355)==x356));

    if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = INT16_MIN;
	static int64_t x358 = INT64_MIN;
	int32_t x359 = INT32_MAX;
	volatile int32_t t89 = 15;

    t89 = (x357^((x358<=x359)==x360));

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 13361256968LLU;
	static uint32_t x362 = 3272172U;
	int16_t x363 = INT16_MAX;
	int64_t x364 = INT64_MAX;
	uint64_t t90 = 19203255275205008LLU;

    t90 = (x361^((x362<=x363)==x364));

    if (t90 != 13361256968LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MAX;
	int16_t x366 = INT16_MAX;
	volatile int8_t x367 = -1;
	uint32_t x368 = 2158U;
	int64_t t91 = INT64_MAX;

    t91 = (x365^((x366<=x367)==x368));

    if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	int32_t x371 = INT32_MIN;
	int64_t x372 = -1LL;
	volatile int32_t t92 = INT32_MIN;

    t92 = (x369^((x370<=x371)==x372));

    if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = INT64_MIN;
	int32_t x375 = INT32_MIN;
	volatile int8_t x376 = -7;
	int64_t t93 = INT64_MIN;

    t93 = (x373^((x374<=x375)==x376));

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x378 = -1;
	static volatile uint8_t x379 = 3U;
	volatile int32_t t94 = 1201;

    t94 = (x377^((x378<=x379)==x380));

    if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 0U;
	static uint32_t x382 = UINT32_MAX;
	int32_t t95 = -15;

    t95 = (x381^((x382<=x383)==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x386 = INT64_MIN;
	uint16_t x387 = 251U;
	int64_t x388 = 0LL;
	volatile uint32_t t96 = 13978694U;

    t96 = (x385^((x386<=x387)==x388));

    if (t96 != 2227085U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x390 = INT16_MIN;
	uint32_t x391 = UINT32_MAX;
	uint64_t x392 = 964186213043218LLU;
	int32_t t97 = -1;

    t97 = (x389^((x390<=x391)==x392));

    if (t97 != 60) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -59LL;
	int16_t x394 = 3;
	int32_t x395 = 310;
	static int16_t x396 = INT16_MAX;
	volatile int64_t t98 = -217768LL;

    t98 = (x393^((x394<=x395)==x396));

    if (t98 != -59LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x397 = 59907181U;
	int32_t x398 = INT32_MIN;
	uint8_t x399 = 55U;
	uint16_t x400 = UINT16_MAX;
	volatile uint32_t t99 = 92977788U;

    t99 = (x397^((x398<=x399)==x400));

    if (t99 != 59907181U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	uint8_t x402 = UINT8_MAX;
	volatile int8_t x403 = INT8_MAX;
	uint16_t x404 = 0U;
	volatile int32_t t100 = 124180;

    t100 = (x401^((x402<=x403)==x404));

    if (t100 != -32767) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x406 = INT16_MAX;
	int32_t x407 = INT32_MIN;
	int64_t x408 = 28858606806601739LL;
	static volatile int32_t t101 = 193655;

    t101 = (x405^((x406<=x407)==x408));

    if (t101 != 413046353) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x409 = UINT8_MAX;
	int8_t x410 = INT8_MIN;
	uint16_t x411 = UINT16_MAX;
	int64_t x412 = -1109741777547925LL;

    t102 = (x409^((x410<=x411)==x412));

    if (t102 != 255) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	int32_t x415 = INT32_MIN;
	int64_t x416 = 504438LL;
	static volatile int32_t t103 = INT32_MIN;

    t103 = (x413^((x414<=x415)==x416));

    if (t103 != INT32_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x417 = 11;
	int32_t t104 = 31;

    t104 = (x417^((x418<=x419)==x420));

    if (t104 != 11) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x422 = 60607718U;
	int8_t x423 = INT8_MAX;

    t105 = (x421^((x422<=x423)==x424));

    if (t105 != UINT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x425 = UINT32_MAX;
	int64_t x426 = INT64_MIN;
	volatile int32_t x427 = INT32_MIN;
	int64_t x428 = -1LL;
	static uint32_t t106 = UINT32_MAX;

    t106 = (x425^((x426<=x427)==x428));

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 239059154604859078LLU;
	volatile uint8_t x430 = 9U;
	int32_t x432 = 250981;
	volatile uint64_t t107 = 2271631144272191876LLU;

    t107 = (x429^((x430<=x431)==x432));

    if (t107 != 239059154604859078LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 1021U;
	int8_t x435 = -8;
	int16_t x436 = -2857;
	int32_t t108 = -93438;

    t108 = (x433^((x434<=x435)==x436));

    if (t108 != 1021) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MAX;
	static uint32_t x438 = 2610752U;
	volatile int32_t x439 = 8699;
	static volatile int8_t x440 = INT8_MIN;

    t109 = (x437^((x438<=x439)==x440));

    if (t109 != INT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 665509246U;
	static int32_t x442 = INT32_MIN;
	int8_t x443 = 0;
	uint32_t t110 = 3733083U;

    t110 = (x441^((x442<=x443)==x444));

    if (t110 != 665509246U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x446 = -692;
	int16_t x447 = INT16_MAX;
	volatile int32_t t111 = 63092;

    t111 = (x445^((x446<=x447)==x448));

    if (t111 != 40) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	volatile uint8_t x450 = 105U;
	int32_t x451 = INT32_MAX;
	uint16_t x452 = 27U;
	volatile int32_t t112 = INT32_MIN;

    t112 = (x449^((x450<=x451)==x452));

    if (t112 != INT32_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = -617;
	uint32_t x454 = UINT32_MAX;
	int8_t x455 = INT8_MIN;
	int8_t x456 = 1;
	volatile int32_t t113 = -294069106;

    t113 = (x453^((x454<=x455)==x456));

    if (t113 != -617) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x457 = 7731U;
	int16_t x458 = -53;
	static uint16_t x459 = UINT16_MAX;
	int32_t x460 = INT32_MAX;
	static int32_t t114 = -151218283;

    t114 = (x457^((x458<=x459)==x460));

    if (t114 != 7731) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint32_t x461 = UINT32_MAX;
	volatile uint16_t x463 = 0U;
	int32_t x464 = INT32_MAX;
	static volatile uint32_t t115 = UINT32_MAX;

    t115 = (x461^((x462<=x463)==x464));

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = 45653109262192LLU;
	int64_t x466 = -1LL;
	uint16_t x467 = 1U;
	int16_t x468 = -1;
	uint64_t t116 = 56858089582201766LLU;

    t116 = (x465^((x466<=x467)==x468));

    if (t116 != 45653109262192LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x469 = 125650141U;
	int8_t x470 = INT8_MIN;
	static uint16_t x471 = 5U;
	int16_t x472 = INT16_MIN;

    t117 = (x469^((x470<=x471)==x472));

    if (t117 != 125650141U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = 3;
	uint64_t x474 = 53016LLU;
	int8_t x475 = INT8_MIN;
	volatile int16_t x476 = 0;
	volatile int32_t t118 = 648281607;

    t118 = (x473^((x474<=x475)==x476));

    if (t118 != 3) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = 56120;
	uint32_t x478 = UINT32_MAX;
	int32_t x480 = 19043;
	int32_t t119 = 421194390;

    t119 = (x477^((x478<=x479)==x480));

    if (t119 != 56120) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MAX;
	static int32_t x483 = INT32_MAX;
	int16_t x484 = INT16_MIN;

    t120 = (x481^((x482<=x483)==x484));

    if (t120 != INT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MIN;
	int16_t x486 = -1;
	static uint16_t x487 = 24215U;
	int16_t x488 = -1;
	int32_t t121 = INT32_MIN;

    t121 = (x485^((x486<=x487)==x488));

    if (t121 != INT32_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MAX;
	volatile uint64_t x491 = 112100597642LLU;
	int8_t x492 = INT8_MAX;
	int64_t t122 = INT64_MAX;

    t122 = (x489^((x490<=x491)==x492));

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = 5;
	volatile int64_t x494 = INT64_MIN;
	uint8_t x496 = 4U;
	volatile int32_t t123 = -1;

    t123 = (x493^((x494<=x495)==x496));

    if (t123 != 5) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	static int8_t x498 = -1;
	uint32_t x499 = UINT32_MAX;
	static uint8_t x500 = 1U;

    t124 = (x497^((x498<=x499)==x500));

    if (t124 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x502 = INT16_MIN;
	static uint32_t x503 = UINT32_MAX;
	int8_t x504 = 20;

    t125 = (x501^((x502<=x503)==x504));

    if (t125 != 284) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x506 = INT64_MIN;
	volatile int16_t x507 = -205;
	static int16_t x508 = INT16_MAX;
	int32_t t126 = 116379817;

    t126 = (x505^((x506<=x507)==x508));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MAX;
	uint64_t x510 = 1239LLU;
	int32_t x512 = -1;
	volatile int32_t t127 = 1806;

    t127 = (x509^((x510<=x511)==x512));

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = UINT8_MAX;
	uint8_t x514 = UINT8_MAX;
	uint32_t x515 = 5019583U;
	int32_t t128 = 10350;

    t128 = (x513^((x514<=x515)==x516));

    if (t128 != 255) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -17226;
	static volatile uint32_t x518 = 2297U;
	int32_t x519 = INT32_MIN;
	int64_t x520 = 1797LL;
	int32_t t129 = -4591396;

    t129 = (x517^((x518<=x519)==x520));

    if (t129 != -17226) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x521 = 85583LL;
	static int64_t x522 = INT64_MIN;
	int8_t x523 = 5;
	static volatile uint32_t x524 = 149U;
	int64_t t130 = -11081744066LL;

    t130 = (x521^((x522<=x523)==x524));

    if (t130 != 85583LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x526 = 63357U;
	uint8_t x527 = UINT8_MAX;
	int64_t x528 = 30388755755275576LL;

    t131 = (x525^((x526<=x527)==x528));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x529 = 65U;
	volatile int16_t x530 = INT16_MAX;
	static volatile uint32_t x532 = 162U;
	int32_t t132 = -13;

    t132 = (x529^((x530<=x531)==x532));

    if (t132 != 65) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = 3261;
	int32_t x534 = -5974;
	volatile uint32_t x535 = 14298U;

    t133 = (x533^((x534<=x535)==x536));

    if (t133 != 3261) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x539 = 95U;
	static volatile int32_t t134 = -74;

    t134 = (x537^((x538<=x539)==x540));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x541 = 41;
	uint32_t x542 = 6133U;
	int32_t x543 = -1;
	int32_t t135 = 4;

    t135 = (x541^((x542<=x543)==x544));

    if (t135 != 41) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -511174;
	uint32_t x546 = UINT32_MAX;
	uint8_t x548 = 98U;
	int32_t t136 = -1705271;

    t136 = (x545^((x546<=x547)==x548));

    if (t136 != -511174) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x549 = -78;
	int64_t x550 = 4LL;
	static volatile int8_t x551 = INT8_MAX;
	static uint16_t x552 = UINT16_MAX;
	volatile int32_t t137 = -8027;

    t137 = (x549^((x550<=x551)==x552));

    if (t137 != -78) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x554 = -1LL;
	int8_t x556 = INT8_MAX;
	volatile int32_t t138 = INT32_MIN;

    t138 = (x553^((x554<=x555)==x556));

    if (t138 != INT32_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -1;
	uint32_t x558 = 1U;
	volatile uint8_t x559 = 0U;
	uint64_t x560 = 298886110536359570LLU;

    t139 = (x557^((x558<=x559)==x560));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = UINT8_MAX;
	uint64_t x562 = 2620379254542922771LLU;
	static int16_t x563 = INT16_MIN;
	static volatile uint64_t x564 = UINT64_MAX;
	int32_t t140 = -34271;

    t140 = (x561^((x562<=x563)==x564));

    if (t140 != 255) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 13LLU;
	static int16_t x566 = INT16_MIN;
	static volatile uint8_t x567 = UINT8_MAX;
	static int64_t x568 = INT64_MIN;
	uint64_t t141 = 455LLU;

    t141 = (x565^((x566<=x567)==x568));

    if (t141 != 13LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x570 = -3;
	static int32_t x571 = -1;
	static int16_t x572 = INT16_MIN;
	int64_t t142 = -5933406LL;

    t142 = (x569^((x570<=x571)==x572));

    if (t142 != -412818749165625LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	static uint32_t x574 = 62968113U;
	int16_t x575 = 1323;
	uint64_t x576 = 1LLU;
	int32_t t143 = INT32_MIN;

    t143 = (x573^((x574<=x575)==x576));

    if (t143 != INT32_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x578 = INT32_MIN;
	int32_t x579 = 4;
	uint16_t x580 = 2U;
	static int64_t t144 = 4LL;

    t144 = (x577^((x578<=x579)==x580));

    if (t144 != 5833LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x581 = INT32_MIN;
	uint16_t x582 = 6U;
	int32_t x583 = -3744;
	int64_t x584 = INT64_MIN;
	int32_t t145 = INT32_MIN;

    t145 = (x581^((x582<=x583)==x584));

    if (t145 != INT32_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x586 = -285508282;
	uint32_t x587 = 4U;
	int32_t x588 = -1;
	int64_t t146 = INT64_MAX;

    t146 = (x585^((x586<=x587)==x588));

    if (t146 != INT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -2;
	int32_t x590 = INT32_MIN;
	int8_t x591 = INT8_MIN;
	uint8_t x592 = UINT8_MAX;

    t147 = (x589^((x590<=x591)==x592));

    if (t147 != -2) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x593 = 5U;
	static int64_t x594 = INT64_MIN;
	volatile int32_t x595 = INT32_MIN;
	static uint8_t x596 = UINT8_MAX;

    t148 = (x593^((x594<=x595)==x596));

    if (t148 != 5) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 126U;
	volatile int16_t x598 = INT16_MAX;
	uint16_t x599 = UINT16_MAX;
	int64_t x600 = -1LL;
	int32_t t149 = 14;

    t149 = (x597^((x598<=x599)==x600));

    if (t149 != 126) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x601 = -2478148033629661LL;
	static int8_t x603 = -7;
	uint32_t x604 = UINT32_MAX;
	int64_t t150 = -230552709LL;

    t150 = (x601^((x602<=x603)==x604));

    if (t150 != -2478148033629661LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MAX;
	int16_t x606 = INT16_MIN;
	int16_t x607 = INT16_MIN;
	int16_t x608 = INT16_MIN;
	static int64_t t151 = INT64_MAX;

    t151 = (x605^((x606<=x607)==x608));

    if (t151 != INT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = -1LL;
	static int16_t x610 = INT16_MAX;
	uint64_t x611 = 13643273768654LLU;
	int64_t t152 = 0LL;

    t152 = (x609^((x610<=x611)==x612));

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x613 = -1;
	int16_t x614 = -1;
	int16_t x615 = 0;
	static int16_t x616 = INT16_MIN;
	int32_t t153 = -194231;

    t153 = (x613^((x614<=x615)==x616));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x617 = 1815848414364511136LL;
	volatile int8_t x618 = 39;
	int64_t x619 = INT64_MIN;
	uint8_t x620 = 55U;

    t154 = (x617^((x618<=x619)==x620));

    if (t154 != 1815848414364511136LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MAX;
	volatile uint8_t x622 = 34U;
	int64_t x623 = INT64_MIN;
	volatile uint16_t x624 = 3300U;
	volatile int32_t t155 = -303600;

    t155 = (x621^((x622<=x623)==x624));

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = -1;
	uint8_t x626 = UINT8_MAX;
	static int32_t x628 = INT32_MAX;
	volatile int32_t t156 = -61952;

    t156 = (x625^((x626<=x627)==x628));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int16_t x629 = INT16_MIN;
	uint32_t x630 = 0U;
	static volatile int32_t t157 = -1418347;

    t157 = (x629^((x630<=x631)==x632));

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 3U;
	int16_t x634 = INT16_MIN;
	uint64_t x636 = 35969LLU;
	int32_t t158 = -4;

    t158 = (x633^((x634<=x635)==x636));

    if (t158 != 3) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x638 = -1;
	uint32_t x639 = 0U;
	int64_t x640 = 880486284685LL;
	static uint64_t t159 = 240647565LLU;

    t159 = (x637^((x638<=x639)==x640));

    if (t159 != 2457448421LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = INT64_MIN;
	int8_t x642 = INT8_MAX;
	static uint8_t x643 = 48U;
	int64_t x644 = INT64_MIN;
	int64_t t160 = INT64_MIN;

    t160 = (x641^((x642<=x643)==x644));

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = UINT16_MAX;
	uint8_t x648 = UINT8_MAX;
	volatile int32_t t161 = 69795;

    t161 = (x645^((x646<=x647)==x648));

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x650 = 90U;
	volatile int32_t x651 = -2041761;
	uint64_t x652 = UINT64_MAX;
	volatile int32_t t162 = 53;

    t162 = (x649^((x650<=x651)==x652));

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	int16_t x654 = INT16_MIN;
	uint8_t x655 = UINT8_MAX;
	int32_t x656 = INT32_MIN;

    t163 = (x653^((x654<=x655)==x656));

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MIN;
	int16_t x658 = -7406;
	uint32_t x659 = UINT32_MAX;
	int64_t t164 = INT64_MIN;

    t164 = (x657^((x658<=x659)==x660));

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	static int16_t x662 = INT16_MIN;
	uint64_t x663 = 436LLU;
	uint64_t x664 = 12LLU;
	int32_t t165 = -3364;

    t165 = (x661^((x662<=x663)==x664));

    if (t165 != 65535) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = -1;
	int16_t x666 = 1;
	volatile uint16_t x667 = 2511U;
	int16_t x668 = -7;
	int32_t t166 = -10627813;

    t166 = (x665^((x666<=x667)==x668));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x669 = INT16_MIN;
	uint16_t x670 = 8026U;
	int32_t x671 = -600617;
	uint16_t x672 = 20U;
	volatile int32_t t167 = -1060;

    t167 = (x669^((x670<=x671)==x672));

    if (t167 != -32768) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 2U;
	int16_t x674 = INT16_MAX;
	int8_t x675 = INT8_MIN;
	static volatile int64_t x676 = INT64_MAX;

    t168 = (x673^((x674<=x675)==x676));

    if (t168 != 2) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = 1196LL;
	static uint64_t x678 = 1173355744LLU;
	static uint16_t x679 = UINT16_MAX;
	static int32_t x680 = -823752;
	int64_t t169 = -11438544601290771LL;

    t169 = (x677^((x678<=x679)==x680));

    if (t169 != 1196LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MAX;
	static int32_t x682 = INT32_MIN;
	int64_t x683 = INT64_MAX;
	static int8_t x684 = -31;
	int32_t t170 = -187473503;

    t170 = (x681^((x682<=x683)==x684));

    if (t170 != 32767) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 20LLU;
	uint32_t x686 = 2281U;
	uint32_t x687 = UINT32_MAX;
	static volatile uint64_t t171 = 5578036953650672LLU;

    t171 = (x685^((x686<=x687)==x688));

    if (t171 != 20LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = 40409;
	int32_t t172 = 9;

    t172 = (x689^((x690<=x691)==x692));

    if (t172 != 40409) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -1LL;
	static volatile int8_t x695 = INT8_MIN;
	int64_t t173 = 23LL;

    t173 = (x693^((x694<=x695)==x696));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	static int8_t x698 = INT8_MIN;
	int16_t x699 = INT16_MIN;
	int8_t x700 = INT8_MIN;
	static int32_t t174 = INT32_MIN;

    t174 = (x697^((x698<=x699)==x700));

    if (t174 != INT32_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = INT32_MIN;
	int16_t x702 = INT16_MAX;
	uint16_t x703 = 6U;
	uint8_t x704 = UINT8_MAX;

    t175 = (x701^((x702<=x703)==x704));

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x705 = -1LL;
	int16_t x707 = 1;
	static volatile int64_t t176 = 366038LL;

    t176 = (x705^((x706<=x707)==x708));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x710 = 1596LLU;
	static int64_t x712 = INT64_MAX;
	volatile int32_t t177 = INT32_MAX;

    t177 = (x709^((x710<=x711)==x712));

    if (t177 != INT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 12U;
	int64_t x714 = INT64_MIN;
	int64_t x716 = INT64_MIN;
	volatile int32_t t178 = -22;

    t178 = (x713^((x714<=x715)==x716));

    if (t178 != 12) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x717 = 37551U;
	int8_t x719 = INT8_MIN;
	uint16_t x720 = UINT16_MAX;
	static volatile uint32_t t179 = 11112U;

    t179 = (x717^((x718<=x719)==x720));

    if (t179 != 37551U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x722 = INT32_MIN;
	volatile int16_t x723 = -1;
	int32_t x724 = -11753786;
	static int32_t t180 = 139737;

    t180 = (x721^((x722<=x723)==x724));

    if (t180 != 3636) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x726 = INT32_MAX;
	int64_t x727 = INT64_MIN;
	volatile uint8_t x728 = 60U;
	uint64_t t181 = 544270502379427297LLU;

    t181 = (x725^((x726<=x727)==x728));

    if (t181 != 54238834LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = -1;
	volatile uint32_t x730 = 3569U;
	int64_t x731 = 6LL;
	static volatile int16_t x732 = INT16_MIN;
	int32_t t182 = 4469449;

    t182 = (x729^((x730<=x731)==x732));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = 11507520;
	int64_t x734 = 194485644549801LL;
	volatile int16_t x735 = -3;
	static int32_t t183 = -4808;

    t183 = (x733^((x734<=x735)==x736));

    if (t183 != 11507520) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	volatile int8_t x739 = INT8_MAX;
	int32_t x740 = -24;
	static volatile int32_t t184 = -13334;

    t184 = (x737^((x738<=x739)==x740));

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	static volatile int32_t x742 = INT32_MIN;
	int32_t x743 = 35199;
	uint16_t x744 = UINT16_MAX;
	static int64_t t185 = INT64_MIN;

    t185 = (x741^((x742<=x743)==x744));

    if (t185 != INT64_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x745 = -911662202012587392LL;
	int64_t x746 = 1826094915462LL;
	static uint16_t x747 = UINT16_MAX;
	int16_t x748 = INT16_MAX;
	int64_t t186 = -153653633LL;

    t186 = (x745^((x746<=x747)==x748));

    if (t186 != -911662202012587392LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x751 = -1LL;
	int64_t x752 = INT64_MIN;
	volatile int64_t t187 = INT64_MIN;

    t187 = (x749^((x750<=x751)==x752));

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	uint16_t x755 = 0U;
	uint32_t x756 = 4109786U;

    t188 = (x753^((x754<=x755)==x756));

    if (t188 != -128) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x757 = 34620792201514390LLU;
	uint8_t x758 = 51U;
	uint64_t x759 = 7047574628605532883LLU;
	uint32_t x760 = 493604U;
	uint64_t t189 = 1937177LLU;

    t189 = (x757^((x758<=x759)==x760));

    if (t189 != 34620792201514390LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x762 = 225U;
	uint32_t x763 = 32056U;
	int64_t x764 = INT64_MIN;
	static volatile int32_t t190 = 0;

    t190 = (x761^((x762<=x763)==x764));

    if (t190 != -6836) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x766 = 5;
	volatile uint16_t x767 = UINT16_MAX;
	static int64_t x768 = INT64_MIN;
	int32_t t191 = -928;

    t191 = (x765^((x766<=x767)==x768));

    if (t191 != 1900) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x769 = 14U;
	uint16_t x771 = 1U;
	int8_t x772 = 1;
	volatile int32_t t192 = -3868838;

    t192 = (x769^((x770<=x771)==x772));

    if (t192 != 15) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x773 = -2894;
	uint64_t x774 = UINT64_MAX;
	int32_t x775 = -1;
	int8_t x776 = -43;
	volatile int32_t t193 = 1;

    t193 = (x773^((x774<=x775)==x776));

    if (t193 != -2894) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x777 = 14;
	int8_t x778 = INT8_MAX;
	int8_t x779 = -1;
	volatile int64_t x780 = -7944100LL;
	volatile int32_t t194 = 1;

    t194 = (x777^((x778<=x779)==x780));

    if (t194 != 14) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x782 = INT64_MIN;
	static uint64_t x784 = UINT64_MAX;
	static int32_t t195 = -31;

    t195 = (x781^((x782<=x783)==x784));

    if (t195 != -3065) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	int16_t x786 = INT16_MIN;
	int32_t x787 = -12010;
	static uint8_t x788 = 1U;
	static int32_t t196 = -91892;

    t196 = (x785^((x786<=x787)==x788));

    if (t196 != 32766) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	uint16_t x790 = UINT16_MAX;
	int16_t x791 = -234;
	uint32_t x792 = UINT32_MAX;
	int32_t t197 = 1;

    t197 = (x789^((x790<=x791)==x792));

    if (t197 != -32768) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x794 = -1;
	int32_t x795 = -19039151;
	volatile uint16_t x796 = UINT16_MAX;
	volatile int32_t t198 = 952131192;

    t198 = (x793^((x794<=x795)==x796));

    if (t198 != 127) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 3483673127493400830LLU;
	uint64_t x798 = UINT64_MAX;
	static int64_t x800 = INT64_MAX;
	static uint64_t t199 = 15590376LLU;

    t199 = (x797^((x798<=x799)==x800));

    if (t199 != 3483673127493400830LLU) { NG(); } else { ; }
	
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

