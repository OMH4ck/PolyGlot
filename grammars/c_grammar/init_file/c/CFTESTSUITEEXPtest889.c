
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

static int32_t x1 = INT32_MIN;
volatile int32_t t0 = 1609152;
volatile int16_t x10 = INT16_MAX;
int64_t x12 = INT64_MIN;
int32_t x18 = INT32_MAX;
uint64_t x20 = UINT64_MAX;
volatile int32_t t5 = 6611;
int32_t x25 = INT32_MIN;
int64_t x30 = 3LL;
static uint32_t x34 = 24577U;
uint8_t x36 = 4U;
int32_t t8 = 2905640;
volatile int32_t x37 = INT32_MAX;
int8_t x39 = 10;
static int8_t x40 = 1;
int8_t x42 = -1;
int32_t x43 = -1;
int16_t x49 = INT16_MIN;
volatile int32_t t13 = -855;
static int32_t t14 = -12733;
int16_t x66 = INT16_MIN;
static uint16_t x69 = UINT16_MAX;
int16_t x70 = -362;
static int64_t x72 = -1LL;
int32_t t17 = -20383;
static uint64_t x83 = UINT64_MAX;
int8_t x84 = INT8_MIN;
int32_t t21 = 961788151;
static int64_t x89 = INT64_MIN;
uint64_t x93 = UINT64_MAX;
static int16_t x96 = INT16_MAX;
int32_t x97 = 1172;
int8_t x98 = INT8_MIN;
int64_t x99 = INT64_MIN;
volatile int32_t t25 = 0;
int32_t t27 = 0;
uint64_t x113 = 142812157181355LLU;
int8_t x117 = INT8_MAX;
int8_t x121 = INT8_MAX;
int32_t x124 = -1;
uint8_t x126 = 1U;
int64_t x142 = -4374388537LL;
uint64_t x146 = 65195384976LLU;
volatile int32_t t38 = 52;
int32_t x157 = -511;
static int32_t x158 = 2911;
static volatile int64_t x162 = INT64_MAX;
int16_t x173 = -64;
int8_t x175 = -1;
static volatile int32_t t43 = -29794551;
static int64_t x180 = INT64_MAX;
uint32_t x183 = 39U;
uint8_t x196 = UINT8_MAX;
int8_t x197 = 0;
uint64_t x199 = UINT64_MAX;
volatile int32_t t49 = -483763345;
int64_t x203 = 2477LL;
int8_t x205 = INT8_MAX;
static int8_t x214 = -1;
int32_t t53 = 0;
volatile int8_t x222 = INT8_MAX;
int32_t x224 = -2299792;
volatile int8_t x225 = INT8_MAX;
int8_t x229 = INT8_MAX;
static volatile uint64_t x231 = UINT64_MAX;
int32_t t56 = -7;
uint8_t x233 = 6U;
int16_t x240 = INT16_MAX;
static volatile int32_t t58 = -959;
uint64_t x245 = 5616214279068LLU;
static volatile int8_t x250 = INT8_MIN;
int32_t x253 = 699337;
int8_t x261 = -1;
volatile int32_t t63 = -15391255;
int16_t x266 = -315;
static int32_t x274 = INT32_MIN;
int32_t x277 = INT32_MAX;
int64_t x285 = -1LL;
int32_t x286 = INT32_MIN;
uint16_t x289 = 5220U;
int8_t x290 = INT8_MIN;
static int8_t x295 = INT8_MIN;
static volatile int32_t t72 = -2842766;
uint16_t x308 = 14998U;
volatile int32_t t74 = 23;
int16_t x309 = -3;
uint32_t x310 = 358724131U;
static volatile int64_t x317 = -1LL;
int16_t x319 = INT16_MAX;
volatile int32_t t77 = -55773;
uint16_t x323 = UINT16_MAX;
volatile int8_t x324 = -6;
volatile uint32_t x325 = UINT32_MAX;
static int64_t x327 = -1LL;
static int64_t x330 = 639077895576LL;
static uint64_t x334 = 9521LLU;
uint8_t x341 = 9U;
int32_t t83 = 372375;
static int64_t x345 = INT64_MIN;
int8_t x348 = 1;
volatile int32_t x357 = -1;
volatile int8_t x360 = -1;
static volatile int32_t t87 = -1955;
volatile int64_t x362 = -1LL;
volatile int32_t t90 = 9;
static int32_t x373 = 392;
int16_t x385 = INT16_MAX;
int8_t x401 = INT8_MAX;
uint32_t x403 = UINT32_MAX;
uint16_t x405 = 14U;
int8_t x411 = INT8_MIN;
uint32_t x417 = 26877445U;
int32_t x418 = INT32_MAX;
static int8_t x419 = 5;
uint8_t x425 = 119U;
int16_t x427 = INT16_MIN;
int16_t x430 = INT16_MIN;
int32_t t104 = 305894629;
uint32_t x439 = UINT32_MAX;
int32_t x440 = -1;
int32_t x441 = -1537888;
volatile int16_t x443 = -1;
int32_t x446 = INT32_MIN;
int64_t x449 = INT64_MAX;
volatile int8_t x454 = -11;
static int8_t x460 = -6;
int32_t t110 = 22067;
static volatile int32_t t111 = -827;
uint32_t x466 = 1330486U;
int8_t x467 = -49;
int16_t x481 = INT16_MIN;
int64_t x485 = -758100245LL;
int16_t x490 = INT16_MAX;
int64_t x491 = INT64_MIN;
static volatile int32_t t118 = -7222;
static uint16_t x495 = 2852U;
static int32_t x500 = 5795265;
int16_t x506 = INT16_MAX;
int8_t x510 = INT8_MIN;
static int16_t x511 = INT16_MIN;
int32_t t123 = -1909948;
static int16_t x519 = INT16_MIN;
static volatile uint32_t x523 = 38U;
volatile int32_t t127 = -4;
int16_t x529 = INT16_MIN;
uint64_t x536 = 28LLU;
int32_t t129 = 124792;
int64_t x538 = -1LL;
int8_t x541 = INT8_MAX;
volatile uint16_t x543 = UINT16_MAX;
volatile int16_t x544 = INT16_MIN;
uint8_t x553 = 1U;
int16_t x555 = INT16_MAX;
int64_t x566 = -1LL;
int8_t x570 = -1;
uint8_t x571 = UINT8_MAX;
uint32_t x572 = 67U;
int64_t x573 = 108484553431495290LL;
int8_t x576 = 1;
uint32_t x584 = UINT32_MAX;
int16_t x586 = -1;
volatile int32_t t142 = 14;
volatile int64_t x592 = -1LL;
uint16_t x596 = 4U;
int32_t t144 = -506629552;
volatile int32_t t146 = -3;
int8_t x616 = INT8_MIN;
static uint8_t x621 = 0U;
int32_t t153 = -249186622;
int64_t x633 = INT64_MIN;
int64_t x645 = 86416841LL;
volatile int32_t t157 = 428877;
static uint64_t x664 = 1023LLU;
int16_t x677 = INT16_MIN;
uint8_t x681 = 0U;
int8_t x684 = -22;
uint64_t x686 = UINT64_MAX;
uint32_t x687 = UINT32_MAX;
int32_t t170 = -746494;
volatile int32_t x706 = 19;
uint32_t x708 = UINT32_MAX;
int32_t x713 = 7612;
volatile int32_t t173 = 17;
static int32_t t174 = 16104;
int16_t x722 = INT16_MIN;
uint32_t x731 = 716047094U;
volatile uint64_t x742 = 6564309995168545659LLU;
int64_t x743 = -1LL;
volatile int32_t t180 = 66232;
int8_t x748 = 25;
volatile int32_t t183 = 1146990;
static int16_t x757 = -1;
int64_t x759 = INT64_MIN;
int8_t x763 = INT8_MAX;
int64_t x767 = INT64_MIN;
int8_t x768 = INT8_MAX;
int8_t x769 = INT8_MAX;
volatile int64_t x775 = INT64_MIN;
int8_t x776 = 53;
static int16_t x781 = INT16_MAX;
uint8_t x782 = 1U;
static int8_t x783 = INT8_MAX;
int32_t x792 = INT32_MIN;
uint8_t x798 = UINT8_MAX;
int32_t t193 = 87247784;
static int32_t x801 = INT32_MAX;
uint8_t x804 = 1U;
uint8_t x814 = 0U;
int32_t x820 = INT32_MIN;
volatile uint32_t x821 = 126498955U;
uint32_t x824 = 1897U;


void f0(void) {
    	int16_t x2 = 1;
	volatile uint8_t x3 = 7U;
	int16_t x4 = -1;

    t0 = (x1!=((x2%x3)==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	uint64_t x6 = UINT64_MAX;
	int64_t x7 = INT64_MIN;
	static int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = 1;

    t1 = (x5!=((x6%x7)==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	int64_t x11 = -1LL;
	int32_t t2 = -1;

    t2 = (x9!=((x10%x11)==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	uint64_t x14 = UINT64_MAX;
	int64_t x15 = INT64_MAX;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 25;

    t3 = (x13!=((x14%x15)==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = 379426U;
	volatile int16_t x19 = -1;
	volatile int32_t t4 = 1286281;

    t4 = (x17!=((x18%x19)==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	volatile int16_t x22 = -1576;
	int16_t x23 = INT16_MIN;
	uint64_t x24 = 1040264LLU;

    t5 = (x21!=((x22%x23)==x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x26 = UINT32_MAX;
	static volatile int64_t x27 = INT64_MIN;
	uint8_t x28 = UINT8_MAX;
	static volatile int32_t t6 = -217673694;

    t6 = (x25!=((x26%x27)==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = 1664;
	static volatile uint8_t x31 = 3U;
	int32_t x32 = -118477201;
	static volatile int32_t t7 = 2;

    t7 = (x29!=((x30%x31)==x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	volatile int8_t x35 = 1;

    t8 = (x33!=((x34%x35)==x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x38 = -1;
	int32_t t9 = 16019941;

    t9 = (x37!=((x38%x39)==x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 9U;
	volatile uint64_t x44 = 0LLU;
	int32_t t10 = 110;

    t10 = (x41!=((x42%x43)==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 3335;
	uint16_t x46 = UINT16_MAX;
	uint64_t x47 = UINT64_MAX;
	uint32_t x48 = UINT32_MAX;
	int32_t t11 = 187358;

    t11 = (x45!=((x46%x47)==x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = INT64_MIN;
	static int64_t x51 = INT64_MIN;
	volatile int8_t x52 = -1;
	static int32_t t12 = -23184;

    t12 = (x49!=((x50%x51)==x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x53 = INT16_MIN;
	int32_t x54 = INT32_MAX;
	static uint32_t x55 = UINT32_MAX;
	volatile int64_t x56 = -1LL;

    t13 = (x53!=((x54%x55)==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x57 = -2822;
	int16_t x58 = INT16_MIN;
	int16_t x59 = INT16_MIN;
	static uint32_t x60 = UINT32_MAX;

    t14 = (x57!=((x58%x59)==x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint32_t x61 = 95U;
	int32_t x62 = -1;
	int32_t x63 = INT32_MIN;
	int64_t x64 = INT64_MIN;
	volatile int32_t t15 = 24829185;

    t15 = (x61!=((x62%x63)==x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = INT64_MIN;
	int32_t x67 = -1;
	int16_t x68 = INT16_MAX;
	static volatile int32_t t16 = 0;

    t16 = (x65!=((x66%x67)==x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x71 = 1LL;

    t17 = (x69!=((x70%x71)==x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = 2;
	volatile uint8_t x74 = 1U;
	uint8_t x75 = 5U;
	uint32_t x76 = UINT32_MAX;
	int32_t t18 = 8298874;

    t18 = (x73!=((x74%x75)==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = INT64_MIN;
	volatile int32_t x78 = INT32_MIN;
	static int32_t x79 = INT32_MAX;
	volatile uint8_t x80 = 0U;
	volatile int32_t t19 = 2260;

    t19 = (x77!=((x78%x79)==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	volatile int64_t x82 = INT64_MAX;
	static int32_t t20 = -965999;

    t20 = (x81!=((x82%x83)==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 3U;
	static int32_t x86 = -1;
	static int16_t x87 = -1;
	static volatile uint8_t x88 = UINT8_MAX;

    t21 = (x85!=((x86%x87)==x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = INT16_MIN;
	static volatile int32_t x91 = 25545;
	volatile uint32_t x92 = 74U;
	volatile int32_t t22 = 874;

    t22 = (x89!=((x90%x91)==x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = -1LL;
	static uint64_t x95 = UINT64_MAX;
	volatile int32_t t23 = 99415;

    t23 = (x93!=((x94%x95)==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x100 = 1LL;
	volatile int32_t t24 = -30;

    t24 = (x97!=((x98%x99)==x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 5U;
	volatile uint64_t x102 = 1749953036401993140LLU;
	static volatile int8_t x103 = INT8_MIN;
	volatile int8_t x104 = INT8_MAX;

    t25 = (x101!=((x102%x103)==x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = INT64_MIN;
	volatile uint16_t x106 = 10832U;
	static volatile uint64_t x107 = UINT64_MAX;
	int16_t x108 = 0;
	volatile int32_t t26 = -294;

    t26 = (x105!=((x106%x107)==x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	int8_t x110 = -2;
	int32_t x111 = INT32_MIN;
	uint64_t x112 = 85876930210269461LLU;

    t27 = (x109!=((x110%x111)==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = -9204486779LL;
	static uint32_t x115 = 15U;
	int16_t x116 = INT16_MIN;
	int32_t t28 = -1387;

    t28 = (x113!=((x114%x115)==x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x118 = INT32_MIN;
	volatile uint16_t x119 = 24434U;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = 1;

    t29 = (x117!=((x118%x119)==x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x122 = UINT8_MAX;
	int16_t x123 = INT16_MIN;
	volatile int32_t t30 = 10923611;

    t30 = (x121!=((x122%x123)==x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MAX;
	static int8_t x127 = -1;
	static uint32_t x128 = 75U;
	int32_t t31 = -3527;

    t31 = (x125!=((x126%x127)==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -4966;
	static uint64_t x130 = UINT64_MAX;
	static int16_t x131 = INT16_MIN;
	volatile int64_t x132 = -17747164543LL;
	volatile int32_t t32 = 21;

    t32 = (x129!=((x130%x131)==x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = -123LL;
	volatile int32_t x134 = INT32_MIN;
	int16_t x135 = -1385;
	int64_t x136 = INT64_MIN;
	static int32_t t33 = 51;

    t33 = (x133!=((x134%x135)==x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MAX;
	volatile uint32_t x138 = 39U;
	static volatile int32_t x139 = -339848969;
	uint8_t x140 = 7U;
	int32_t t34 = -2070;

    t34 = (x137!=((x138%x139)==x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	uint64_t x143 = 1LLU;
	int8_t x144 = INT8_MAX;
	volatile int32_t t35 = -80445170;

    t35 = (x141!=((x142%x143)==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MIN;
	static volatile uint64_t x147 = UINT64_MAX;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t36 = 1;

    t36 = (x145!=((x146%x147)==x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 47961U;
	int16_t x150 = 0;
	volatile int32_t x151 = INT32_MIN;
	volatile uint8_t x152 = UINT8_MAX;
	volatile int32_t t37 = -8761;

    t37 = (x149!=((x150%x151)==x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -1;
	volatile uint8_t x154 = UINT8_MAX;
	uint32_t x155 = 26629098U;
	int8_t x156 = -1;

    t38 = (x153!=((x154%x155)==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x159 = 7821737210718LLU;
	static volatile int8_t x160 = 0;
	volatile int32_t t39 = -222666505;

    t39 = (x157!=((x158%x159)==x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = 4109306LL;
	uint16_t x163 = UINT16_MAX;
	volatile uint16_t x164 = UINT16_MAX;
	int32_t t40 = 38076052;

    t40 = (x161!=((x162%x163)==x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = UINT8_MAX;
	static volatile int16_t x166 = INT16_MAX;
	int64_t x167 = -72882LL;
	int16_t x168 = INT16_MAX;
	volatile int32_t t41 = -67923;

    t41 = (x165!=((x166%x167)==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = INT32_MIN;
	uint8_t x170 = 2U;
	static volatile int8_t x171 = -1;
	int8_t x172 = -1;
	static int32_t t42 = 1624;

    t42 = (x169!=((x170%x171)==x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x174 = -1;
	volatile int8_t x176 = INT8_MAX;

    t43 = (x173!=((x174%x175)==x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1LL;
	volatile int8_t x178 = INT8_MAX;
	uint32_t x179 = UINT32_MAX;
	volatile int32_t t44 = -6;

    t44 = (x177!=((x178%x179)==x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -1;
	int64_t x182 = INT64_MIN;
	int32_t x184 = -156810;
	static volatile int32_t t45 = 2004739;

    t45 = (x181!=((x182%x183)==x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 1;
	uint64_t x186 = 1302120LLU;
	int64_t x187 = INT64_MAX;
	static volatile uint64_t x188 = 219478679865LLU;
	volatile int32_t t46 = 3;

    t46 = (x185!=((x186%x187)==x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 31U;
	int8_t x190 = INT8_MAX;
	int8_t x191 = 11;
	int64_t x192 = INT64_MAX;
	static int32_t t47 = 1;

    t47 = (x189!=((x190%x191)==x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = INT64_MIN;
	int8_t x194 = 1;
	uint32_t x195 = UINT32_MAX;
	int32_t t48 = -20388427;

    t48 = (x193!=((x194%x195)==x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x198 = 184LLU;
	uint32_t x200 = 208026064U;

    t49 = (x197!=((x198%x199)==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MAX;
	static int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 1054597831;

    t50 = (x201!=((x202%x203)==x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x206 = 86;
	int8_t x207 = INT8_MAX;
	static int64_t x208 = -1945668500595LL;
	int32_t t51 = -22096956;

    t51 = (x205!=((x206%x207)==x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MAX;
	volatile uint64_t x210 = 444560LLU;
	static volatile uint32_t x211 = 1U;
	int32_t x212 = 47;
	volatile int32_t t52 = -1069;

    t52 = (x209!=((x210%x211)==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -325888;
	volatile int8_t x215 = 25;
	volatile uint64_t x216 = 36053328LLU;

    t53 = (x213!=((x214%x215)==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x221 = -1;
	static int8_t x223 = INT8_MIN;
	int32_t t54 = -834627574;

    t54 = (x221!=((x222%x223)==x224));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x226 = UINT64_MAX;
	int8_t x227 = -6;
	uint8_t x228 = 11U;
	int32_t t55 = 234456;

    t55 = (x225!=((x226%x227)==x228));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x230 = INT64_MIN;
	uint32_t x232 = UINT32_MAX;

    t56 = (x229!=((x230%x231)==x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x234 = 3410791LLU;
	uint64_t x235 = 4975941609035219889LLU;
	uint64_t x236 = 1LLU;
	volatile int32_t t57 = 2;

    t57 = (x233!=((x234%x235)==x236));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = 4976LL;
	int8_t x238 = INT8_MAX;
	int16_t x239 = -45;

    t58 = (x237!=((x238%x239)==x240));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x241 = UINT64_MAX;
	int8_t x242 = INT8_MIN;
	int16_t x243 = 2757;
	int64_t x244 = 4824LL;
	static int32_t t59 = 10184249;

    t59 = (x241!=((x242%x243)==x244));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x246 = INT8_MIN;
	static volatile uint64_t x247 = 452LLU;
	static int32_t x248 = INT32_MIN;
	static volatile int32_t t60 = -3;

    t60 = (x245!=((x246%x247)==x248));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = -1056447LL;
	volatile int16_t x251 = INT16_MAX;
	int8_t x252 = 63;
	int32_t t61 = -9737808;

    t61 = (x249!=((x250%x251)==x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x254 = 102130695552LLU;
	volatile int16_t x255 = INT16_MAX;
	int64_t x256 = INT64_MAX;
	volatile int32_t t62 = 3;

    t62 = (x253!=((x254%x255)==x256));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int64_t x262 = -2LL;
	volatile int32_t x263 = INT32_MAX;
	static int16_t x264 = 91;

    t63 = (x261!=((x262%x263)==x264));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x265 = UINT16_MAX;
	uint32_t x267 = UINT32_MAX;
	static volatile uint16_t x268 = UINT16_MAX;
	int32_t t64 = 19349;

    t64 = (x265!=((x266%x267)==x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x269 = 0U;
	uint64_t x270 = UINT64_MAX;
	volatile int8_t x271 = -1;
	int64_t x272 = INT64_MIN;
	volatile int32_t t65 = -3949769;

    t65 = (x269!=((x270%x271)==x272));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x273 = -32735036;
	static uint16_t x275 = 1513U;
	volatile int8_t x276 = INT8_MIN;
	int32_t t66 = 479169;

    t66 = (x273!=((x274%x275)==x276));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x278 = INT16_MIN;
	volatile uint64_t x279 = 149205036506088LLU;
	static int8_t x280 = INT8_MIN;
	volatile int32_t t67 = -39054;

    t67 = (x277!=((x278%x279)==x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x281 = UINT64_MAX;
	static volatile uint16_t x282 = UINT16_MAX;
	int16_t x283 = -1;
	int64_t x284 = -2851201834915LL;
	int32_t t68 = 155689383;

    t68 = (x281!=((x282%x283)==x284));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x287 = 247260884LLU;
	int64_t x288 = 23082074LL;
	int32_t t69 = -35;

    t69 = (x285!=((x286%x287)==x288));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x291 = UINT16_MAX;
	volatile int32_t x292 = -10617;
	int32_t t70 = 402275662;

    t70 = (x289!=((x290%x291)==x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x293 = 1;
	static uint8_t x294 = 101U;
	int32_t x296 = INT32_MAX;
	static int32_t t71 = 1;

    t71 = (x293!=((x294%x295)==x296));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x297 = 1008282368U;
	uint32_t x298 = 4579U;
	int16_t x299 = -1;
	int16_t x300 = INT16_MAX;

    t72 = (x297!=((x298%x299)==x300));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x301 = 15;
	volatile int16_t x302 = INT16_MIN;
	volatile int8_t x303 = INT8_MIN;
	int32_t x304 = INT32_MIN;
	volatile int32_t t73 = -360;

    t73 = (x301!=((x302%x303)==x304));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x305 = INT8_MIN;
	static int32_t x306 = 361;
	int16_t x307 = -1;

    t74 = (x305!=((x306%x307)==x308));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x311 = UINT64_MAX;
	static uint64_t x312 = 98985730054LLU;
	volatile int32_t t75 = -362314;

    t75 = (x309!=((x310%x311)==x312));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x313 = INT32_MAX;
	int32_t x314 = -3;
	uint16_t x315 = UINT16_MAX;
	uint64_t x316 = 4639991610295LLU;
	static volatile int32_t t76 = -397147566;

    t76 = (x313!=((x314%x315)==x316));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x318 = 10118;
	int16_t x320 = -119;

    t77 = (x317!=((x318%x319)==x320));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x321 = INT8_MIN;
	static uint32_t x322 = 97620U;
	volatile int32_t t78 = -36;

    t78 = (x321!=((x322%x323)==x324));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x326 = 1355U;
	volatile uint32_t x328 = 3U;
	int32_t t79 = 2;

    t79 = (x325!=((x326%x327)==x328));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x329 = 9798U;
	uint32_t x331 = UINT32_MAX;
	static uint8_t x332 = UINT8_MAX;
	volatile int32_t t80 = -18503742;

    t80 = (x329!=((x330%x331)==x332));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x333 = -4;
	int16_t x335 = INT16_MAX;
	int16_t x336 = 29;
	volatile int32_t t81 = -3512;

    t81 = (x333!=((x334%x335)==x336));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x337 = 7826U;
	volatile int64_t x338 = INT64_MIN;
	volatile uint64_t x339 = UINT64_MAX;
	static uint16_t x340 = 56U;
	int32_t t82 = 102;

    t82 = (x337!=((x338%x339)==x340));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x342 = -1LL;
	volatile int16_t x343 = INT16_MIN;
	volatile int32_t x344 = 8424792;

    t83 = (x341!=((x342%x343)==x344));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x346 = 1U;
	int64_t x347 = INT64_MIN;
	int32_t t84 = 3;

    t84 = (x345!=((x346%x347)==x348));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x349 = 1U;
	volatile uint64_t x350 = 59314569358LLU;
	volatile uint64_t x351 = 151389LLU;
	static int32_t x352 = INT32_MAX;
	volatile int32_t t85 = 1;

    t85 = (x349!=((x350%x351)==x352));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x353 = -1;
	int16_t x354 = INT16_MAX;
	uint32_t x355 = UINT32_MAX;
	uint8_t x356 = 3U;
	static int32_t t86 = 9;

    t86 = (x353!=((x354%x355)==x356));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x358 = 1;
	static volatile int8_t x359 = -1;

    t87 = (x357!=((x358%x359)==x360));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x361 = 19;
	int64_t x363 = INT64_MIN;
	int32_t x364 = INT32_MIN;
	int32_t t88 = -3;

    t88 = (x361!=((x362%x363)==x364));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x365 = INT16_MIN;
	int16_t x366 = -7;
	int64_t x367 = -1LL;
	uint16_t x368 = 1835U;
	static int32_t t89 = 290;

    t89 = (x365!=((x366%x367)==x368));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x369 = -1;
	static uint16_t x370 = 9245U;
	int32_t x371 = INT32_MAX;
	uint16_t x372 = 1790U;

    t90 = (x369!=((x370%x371)==x372));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x374 = 1LL;
	int64_t x375 = INT64_MAX;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t91 = -2947;

    t91 = (x373!=((x374%x375)==x376));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x377 = INT16_MAX;
	int16_t x378 = INT16_MIN;
	uint64_t x379 = 2499467983023553476LLU;
	volatile int32_t x380 = -1;
	volatile int32_t t92 = 199861;

    t92 = (x377!=((x378%x379)==x380));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x381 = -1;
	uint16_t x382 = UINT16_MAX;
	volatile int8_t x383 = INT8_MAX;
	static int32_t x384 = INT32_MIN;
	int32_t t93 = -1251;

    t93 = (x381!=((x382%x383)==x384));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x386 = 3903U;
	int16_t x387 = 3152;
	volatile int16_t x388 = -1;
	volatile int32_t t94 = 184336783;

    t94 = (x385!=((x386%x387)==x388));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x389 = 48U;
	int32_t x390 = -1060967;
	static int16_t x391 = INT16_MIN;
	static int8_t x392 = INT8_MIN;
	static int32_t t95 = 1346619;

    t95 = (x389!=((x390%x391)==x392));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x393 = 0;
	uint64_t x394 = UINT64_MAX;
	volatile uint16_t x395 = UINT16_MAX;
	int32_t x396 = INT32_MAX;
	int32_t t96 = -242;

    t96 = (x393!=((x394%x395)==x396));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x397 = INT8_MIN;
	static uint16_t x398 = UINT16_MAX;
	int64_t x399 = 486861451LL;
	uint32_t x400 = UINT32_MAX;
	int32_t t97 = 867546;

    t97 = (x397!=((x398%x399)==x400));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x402 = -158;
	static int8_t x404 = -1;
	volatile int32_t t98 = 0;

    t98 = (x401!=((x402%x403)==x404));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x406 = 2U;
	int64_t x407 = -38626878932161LL;
	int8_t x408 = INT8_MIN;
	int32_t t99 = -13801555;

    t99 = (x405!=((x406%x407)==x408));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x409 = 946LLU;
	static volatile int16_t x410 = INT16_MIN;
	static uint32_t x412 = 72U;
	volatile int32_t t100 = 11;

    t100 = (x409!=((x410%x411)==x412));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x420 = INT8_MAX;
	volatile int32_t t101 = -7;

    t101 = (x417!=((x418%x419)==x420));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint8_t x426 = UINT8_MAX;
	int8_t x428 = INT8_MIN;
	int32_t t102 = 12962;

    t102 = (x425!=((x426%x427)==x428));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x429 = INT32_MIN;
	int8_t x431 = 28;
	volatile int32_t x432 = -1;
	static volatile int32_t t103 = 469581518;

    t103 = (x429!=((x430%x431)==x432));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x433 = INT64_MAX;
	int32_t x434 = INT32_MIN;
	uint64_t x435 = 3591170LLU;
	int64_t x436 = INT64_MIN;

    t104 = (x433!=((x434%x435)==x436));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x437 = INT64_MAX;
	volatile int16_t x438 = 14220;
	static volatile int32_t t105 = -118931;

    t105 = (x437!=((x438%x439)==x440));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x442 = 4042084366923961896LLU;
	int32_t x444 = INT32_MIN;
	int32_t t106 = 3;

    t106 = (x441!=((x442%x443)==x444));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x445 = INT64_MIN;
	int32_t x447 = INT32_MIN;
	volatile uint32_t x448 = 241U;
	int32_t t107 = -1192812;

    t107 = (x445!=((x446%x447)==x448));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x450 = INT64_MAX;
	int64_t x451 = -1LL;
	volatile uint8_t x452 = UINT8_MAX;
	int32_t t108 = -464;

    t108 = (x449!=((x450%x451)==x452));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x453 = INT16_MAX;
	uint16_t x455 = UINT16_MAX;
	int16_t x456 = -1;
	volatile int32_t t109 = 3083;

    t109 = (x453!=((x454%x455)==x456));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x457 = UINT8_MAX;
	int32_t x458 = 283543005;
	static int16_t x459 = INT16_MAX;

    t110 = (x457!=((x458%x459)==x460));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x461 = 0U;
	int8_t x462 = INT8_MIN;
	int16_t x463 = 31;
	int8_t x464 = 2;

    t111 = (x461!=((x462%x463)==x464));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x465 = INT64_MIN;
	static int64_t x468 = -326924263126LL;
	static int32_t t112 = -7647213;

    t112 = (x465!=((x466%x467)==x468));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x469 = INT64_MIN;
	static int8_t x470 = -1;
	int8_t x471 = INT8_MAX;
	volatile int8_t x472 = -8;
	int32_t t113 = 11;

    t113 = (x469!=((x470%x471)==x472));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x473 = -1;
	int64_t x474 = -42603778191268LL;
	int8_t x475 = INT8_MIN;
	int32_t x476 = INT32_MIN;
	int32_t t114 = -13640;

    t114 = (x473!=((x474%x475)==x476));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x477 = 3U;
	static uint64_t x478 = 3141844304LLU;
	int32_t x479 = -1665;
	uint32_t x480 = 977522814U;
	volatile int32_t t115 = 414042191;

    t115 = (x477!=((x478%x479)==x480));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x482 = INT64_MIN;
	volatile uint32_t x483 = 41U;
	int32_t x484 = 215;
	volatile int32_t t116 = 604430;

    t116 = (x481!=((x482%x483)==x484));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x486 = INT8_MIN;
	static int8_t x487 = INT8_MIN;
	int8_t x488 = INT8_MIN;
	static int32_t t117 = -192055767;

    t117 = (x485!=((x486%x487)==x488));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint64_t x489 = 3147741LLU;
	uint64_t x492 = UINT64_MAX;

    t118 = (x489!=((x490%x491)==x492));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x493 = 125U;
	int16_t x494 = INT16_MAX;
	volatile int16_t x496 = INT16_MAX;
	volatile int32_t t119 = -7;

    t119 = (x493!=((x494%x495)==x496));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x497 = 7U;
	volatile int16_t x498 = INT16_MIN;
	uint8_t x499 = 49U;
	volatile int32_t t120 = 33;

    t120 = (x497!=((x498%x499)==x500));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x501 = -34;
	static int16_t x502 = INT16_MAX;
	uint8_t x503 = UINT8_MAX;
	uint64_t x504 = 2022515001955853LLU;
	static volatile int32_t t121 = 2;

    t121 = (x501!=((x502%x503)==x504));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x505 = -1;
	int8_t x507 = -1;
	uint64_t x508 = 50588070251LLU;
	volatile int32_t t122 = 0;

    t122 = (x505!=((x506%x507)==x508));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x509 = UINT16_MAX;
	int16_t x512 = INT16_MIN;

    t123 = (x509!=((x510%x511)==x512));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x513 = -1;
	int16_t x514 = INT16_MIN;
	int8_t x515 = INT8_MIN;
	volatile int16_t x516 = INT16_MAX;
	int32_t t124 = -1211016;

    t124 = (x513!=((x514%x515)==x516));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x517 = 2769293LLU;
	volatile uint8_t x518 = 10U;
	static volatile int64_t x520 = INT64_MIN;
	volatile int32_t t125 = -376371;

    t125 = (x517!=((x518%x519)==x520));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x521 = INT16_MIN;
	int64_t x522 = INT64_MAX;
	uint32_t x524 = 460535U;
	volatile int32_t t126 = 10;

    t126 = (x521!=((x522%x523)==x524));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x525 = INT8_MIN;
	int8_t x526 = INT8_MAX;
	uint32_t x527 = UINT32_MAX;
	volatile int8_t x528 = INT8_MAX;

    t127 = (x525!=((x526%x527)==x528));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x530 = 2U;
	int16_t x531 = INT16_MIN;
	static uint32_t x532 = 2U;
	volatile int32_t t128 = -54630;

    t128 = (x529!=((x530%x531)==x532));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x533 = INT8_MAX;
	static int32_t x534 = 2424395;
	static int64_t x535 = -259799203LL;

    t129 = (x533!=((x534%x535)==x536));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x537 = INT16_MIN;
	int16_t x539 = INT16_MAX;
	uint16_t x540 = UINT16_MAX;
	volatile int32_t t130 = -63463;

    t130 = (x537!=((x538%x539)==x540));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x542 = 156947026U;
	volatile int32_t t131 = -1;

    t131 = (x541!=((x542%x543)==x544));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x545 = 5790;
	int8_t x546 = INT8_MAX;
	int32_t x547 = 162390330;
	int8_t x548 = -1;
	static volatile int32_t t132 = 505457;

    t132 = (x545!=((x546%x547)==x548));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x549 = 1U;
	volatile int8_t x550 = 0;
	static int32_t x551 = INT32_MAX;
	static uint32_t x552 = UINT32_MAX;
	int32_t t133 = 10135262;

    t133 = (x549!=((x550%x551)==x552));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x554 = -1;
	int32_t x556 = -1;
	static int32_t t134 = -242223321;

    t134 = (x553!=((x554%x555)==x556));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x557 = INT64_MIN;
	int16_t x558 = INT16_MIN;
	volatile int32_t x559 = 1528;
	uint32_t x560 = 411U;
	int32_t t135 = 29767;

    t135 = (x557!=((x558%x559)==x560));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x561 = 461;
	uint32_t x562 = UINT32_MAX;
	uint16_t x563 = 2U;
	int16_t x564 = -1;
	int32_t t136 = -5126202;

    t136 = (x561!=((x562%x563)==x564));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x565 = 427925234LLU;
	uint64_t x567 = 1LLU;
	uint16_t x568 = UINT16_MAX;
	int32_t t137 = -301534;

    t137 = (x565!=((x566%x567)==x568));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x569 = 10U;
	volatile int32_t t138 = -5;

    t138 = (x569!=((x570%x571)==x572));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x574 = 2132123421293954870LLU;
	uint16_t x575 = 252U;
	volatile int32_t t139 = -19326987;

    t139 = (x573!=((x574%x575)==x576));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x577 = INT8_MIN;
	int64_t x578 = INT64_MIN;
	int16_t x579 = INT16_MIN;
	volatile uint64_t x580 = 1746764912854LLU;
	int32_t t140 = 12491062;

    t140 = (x577!=((x578%x579)==x580));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x581 = -60252628484LL;
	volatile int64_t x582 = -10760408485685598LL;
	int32_t x583 = -1;
	static volatile int32_t t141 = 1023;

    t141 = (x581!=((x582%x583)==x584));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x585 = -1612;
	volatile uint32_t x587 = 229977561U;
	uint16_t x588 = 310U;

    t142 = (x585!=((x586%x587)==x588));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x589 = UINT64_MAX;
	static volatile int16_t x590 = -1;
	static int8_t x591 = -1;
	volatile int32_t t143 = 811095;

    t143 = (x589!=((x590%x591)==x592));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x593 = INT8_MIN;
	int64_t x594 = -8LL;
	int32_t x595 = INT32_MIN;

    t144 = (x593!=((x594%x595)==x596));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x597 = UINT16_MAX;
	static uint32_t x598 = 2U;
	volatile uint16_t x599 = 24U;
	static volatile int16_t x600 = -1;
	volatile int32_t t145 = 0;

    t145 = (x597!=((x598%x599)==x600));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x601 = -35;
	static volatile int64_t x602 = INT64_MIN;
	uint16_t x603 = 693U;
	uint32_t x604 = 263487477U;

    t146 = (x601!=((x602%x603)==x604));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x605 = 5637533419906LL;
	int32_t x606 = -1;
	volatile int8_t x607 = INT8_MIN;
	static int16_t x608 = 30;
	volatile int32_t t147 = 458250232;

    t147 = (x605!=((x606%x607)==x608));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x609 = -572924;
	static int8_t x610 = -1;
	static int32_t x611 = -1;
	int8_t x612 = -5;
	int32_t t148 = -81;

    t148 = (x609!=((x610%x611)==x612));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x613 = 3U;
	int8_t x614 = INT8_MIN;
	volatile int64_t x615 = 10LL;
	volatile int32_t t149 = 14341;

    t149 = (x613!=((x614%x615)==x616));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x617 = INT16_MAX;
	int32_t x618 = -1;
	volatile int8_t x619 = -1;
	int64_t x620 = 5370642958624108LL;
	static int32_t t150 = -304;

    t150 = (x617!=((x618%x619)==x620));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x622 = 336986850U;
	uint64_t x623 = 555716496519LLU;
	int32_t x624 = INT32_MIN;
	static volatile int32_t t151 = 676;

    t151 = (x621!=((x622%x623)==x624));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int16_t x625 = 0;
	uint64_t x626 = UINT64_MAX;
	uint8_t x627 = 7U;
	static int32_t x628 = 0;
	volatile int32_t t152 = 60196;

    t152 = (x625!=((x626%x627)==x628));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x629 = -1LL;
	volatile uint64_t x630 = UINT64_MAX;
	uint64_t x631 = 40155104184887673LLU;
	int16_t x632 = 0;

    t153 = (x629!=((x630%x631)==x632));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x634 = -47;
	uint16_t x635 = UINT16_MAX;
	static volatile int32_t x636 = INT32_MIN;
	volatile int32_t t154 = 8;

    t154 = (x633!=((x634%x635)==x636));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x637 = INT32_MIN;
	static uint32_t x638 = 79U;
	int8_t x639 = 13;
	uint32_t x640 = UINT32_MAX;
	int32_t t155 = 217978994;

    t155 = (x637!=((x638%x639)==x640));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x641 = UINT8_MAX;
	int8_t x642 = INT8_MIN;
	static int8_t x643 = INT8_MAX;
	uint32_t x644 = 322222139U;
	volatile int32_t t156 = 162;

    t156 = (x641!=((x642%x643)==x644));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x646 = 10951;
	int8_t x647 = 19;
	int64_t x648 = -1LL;

    t157 = (x645!=((x646%x647)==x648));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x649 = INT64_MIN;
	volatile int16_t x650 = -1;
	int32_t x651 = -3414063;
	uint64_t x652 = 80322LLU;
	int32_t t158 = 50174443;

    t158 = (x649!=((x650%x651)==x652));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x653 = 1095781033676LLU;
	int8_t x654 = INT8_MIN;
	volatile int64_t x655 = -9LL;
	volatile int8_t x656 = INT8_MIN;
	int32_t t159 = 30226;

    t159 = (x653!=((x654%x655)==x656));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x657 = UINT8_MAX;
	int32_t x658 = -1;
	uint8_t x659 = UINT8_MAX;
	int16_t x660 = -5270;
	int32_t t160 = -8021617;

    t160 = (x657!=((x658%x659)==x660));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x661 = 4;
	int16_t x662 = -1;
	static uint8_t x663 = 39U;
	static volatile int32_t t161 = 160670395;

    t161 = (x661!=((x662%x663)==x664));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint64_t x665 = UINT64_MAX;
	volatile uint8_t x666 = 1U;
	int16_t x667 = 25;
	int8_t x668 = -1;
	int32_t t162 = -233;

    t162 = (x665!=((x666%x667)==x668));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x669 = INT8_MAX;
	volatile int32_t x670 = 1490874;
	int64_t x671 = INT64_MIN;
	volatile int32_t x672 = INT32_MIN;
	volatile int32_t t163 = -5117;

    t163 = (x669!=((x670%x671)==x672));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x673 = UINT8_MAX;
	uint64_t x674 = UINT64_MAX;
	int32_t x675 = INT32_MIN;
	volatile uint64_t x676 = UINT64_MAX;
	int32_t t164 = -1999;

    t164 = (x673!=((x674%x675)==x676));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x678 = 976604461U;
	volatile uint8_t x679 = UINT8_MAX;
	static volatile int64_t x680 = 1820714359821517LL;
	int32_t t165 = -895881831;

    t165 = (x677!=((x678%x679)==x680));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x682 = 38781766LL;
	uint8_t x683 = UINT8_MAX;
	int32_t t166 = 692;

    t166 = (x681!=((x682%x683)==x684));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x685 = 1377446U;
	int16_t x688 = -51;
	volatile int32_t t167 = -2489461;

    t167 = (x685!=((x686%x687)==x688));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x689 = INT64_MIN;
	uint32_t x690 = UINT32_MAX;
	static volatile int8_t x691 = -1;
	volatile uint64_t x692 = 235911782981330293LLU;
	static int32_t t168 = 7135;

    t168 = (x689!=((x690%x691)==x692));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x693 = 7;
	int32_t x694 = -341653714;
	static volatile int64_t x695 = INT64_MAX;
	uint16_t x696 = 1252U;
	static int32_t t169 = 7512;

    t169 = (x693!=((x694%x695)==x696));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x701 = -1LL;
	uint64_t x702 = 64890538223289LLU;
	static int32_t x703 = INT32_MIN;
	uint8_t x704 = 10U;

    t170 = (x701!=((x702%x703)==x704));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x705 = 28484U;
	int16_t x707 = INT16_MIN;
	static int32_t t171 = 239;

    t171 = (x705!=((x706%x707)==x708));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x709 = -1;
	int8_t x710 = INT8_MIN;
	int16_t x711 = INT16_MAX;
	uint64_t x712 = 823LLU;
	int32_t t172 = 4;

    t172 = (x709!=((x710%x711)==x712));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x714 = 403413LLU;
	volatile int32_t x715 = INT32_MAX;
	uint64_t x716 = UINT64_MAX;

    t173 = (x713!=((x714%x715)==x716));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x717 = -3;
	static volatile int8_t x718 = INT8_MIN;
	int64_t x719 = INT64_MIN;
	int16_t x720 = INT16_MIN;

    t174 = (x717!=((x718%x719)==x720));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x721 = -1;
	volatile int16_t x723 = INT16_MIN;
	int16_t x724 = -223;
	volatile int32_t t175 = -2027;

    t175 = (x721!=((x722%x723)==x724));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x725 = 4869;
	volatile int64_t x726 = 1835611094901865LL;
	uint8_t x727 = 2U;
	int64_t x728 = -11621815057LL;
	volatile int32_t t176 = 0;

    t176 = (x725!=((x726%x727)==x728));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x729 = -1;
	int64_t x730 = 81551594777LL;
	uint64_t x732 = UINT64_MAX;
	int32_t t177 = 0;

    t177 = (x729!=((x730%x731)==x732));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x733 = INT32_MIN;
	uint32_t x734 = 251851094U;
	volatile int64_t x735 = -1LL;
	uint16_t x736 = UINT16_MAX;
	int32_t t178 = 1418;

    t178 = (x733!=((x734%x735)==x736));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x737 = 103U;
	static int8_t x738 = INT8_MIN;
	int16_t x739 = -4998;
	int8_t x740 = INT8_MIN;
	int32_t t179 = -12722033;

    t179 = (x737!=((x738%x739)==x740));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x741 = INT32_MIN;
	int16_t x744 = 4346;

    t180 = (x741!=((x742%x743)==x744));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x745 = -430;
	int64_t x746 = INT64_MIN;
	int8_t x747 = INT8_MIN;
	volatile int32_t t181 = 46835579;

    t181 = (x745!=((x746%x747)==x748));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x749 = -50401237LL;
	int32_t x750 = INT32_MIN;
	int64_t x751 = INT64_MAX;
	volatile uint64_t x752 = 9988845733044755LLU;
	volatile int32_t t182 = -482357;

    t182 = (x749!=((x750%x751)==x752));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x753 = -20415695;
	uint64_t x754 = 41292055LLU;
	int8_t x755 = -1;
	uint16_t x756 = 5U;

    t183 = (x753!=((x754%x755)==x756));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x758 = INT8_MAX;
	volatile int64_t x760 = INT64_MIN;
	volatile int32_t t184 = -44;

    t184 = (x757!=((x758%x759)==x760));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x761 = UINT16_MAX;
	uint32_t x762 = 513924721U;
	static int16_t x764 = INT16_MIN;
	volatile int32_t t185 = 2281069;

    t185 = (x761!=((x762%x763)==x764));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x765 = 81U;
	volatile uint64_t x766 = 5447152336LLU;
	volatile int32_t t186 = -1308;

    t186 = (x765!=((x766%x767)==x768));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x770 = INT8_MIN;
	int8_t x771 = -1;
	static int16_t x772 = -2;
	int32_t t187 = 10162282;

    t187 = (x769!=((x770%x771)==x772));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x773 = -22;
	uint32_t x774 = 208573239U;
	int32_t t188 = 591;

    t188 = (x773!=((x774%x775)==x776));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x777 = INT32_MIN;
	volatile int64_t x778 = INT64_MIN;
	int8_t x779 = INT8_MIN;
	uint32_t x780 = 413323U;
	int32_t t189 = -84;

    t189 = (x777!=((x778%x779)==x780));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x784 = INT32_MIN;
	volatile int32_t t190 = 3;

    t190 = (x781!=((x782%x783)==x784));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x785 = INT16_MIN;
	int8_t x786 = 0;
	volatile int64_t x787 = INT64_MIN;
	uint32_t x788 = 123139230U;
	volatile int32_t t191 = 15478862;

    t191 = (x785!=((x786%x787)==x788));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x789 = INT16_MAX;
	static int64_t x790 = INT64_MIN;
	int16_t x791 = INT16_MIN;
	volatile int32_t t192 = -1;

    t192 = (x789!=((x790%x791)==x792));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x797 = 458U;
	int8_t x799 = -1;
	int16_t x800 = 873;

    t193 = (x797!=((x798%x799)==x800));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x802 = -1;
	int8_t x803 = INT8_MIN;
	int32_t t194 = -87;

    t194 = (x801!=((x802%x803)==x804));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x805 = 118578674LLU;
	uint64_t x806 = 193602934945827LLU;
	int8_t x807 = -26;
	int16_t x808 = INT16_MAX;
	static volatile int32_t t195 = 20899;

    t195 = (x805!=((x806%x807)==x808));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x809 = 7U;
	int64_t x810 = -565750264766242897LL;
	static int16_t x811 = -1;
	int8_t x812 = INT8_MIN;
	static int32_t t196 = -47347;

    t196 = (x809!=((x810%x811)==x812));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x813 = -127;
	volatile int16_t x815 = INT16_MIN;
	uint32_t x816 = 221114U;
	static volatile int32_t t197 = 610036304;

    t197 = (x813!=((x814%x815)==x816));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x817 = UINT16_MAX;
	uint8_t x818 = 9U;
	int32_t x819 = INT32_MAX;
	volatile int32_t t198 = 298094812;

    t198 = (x817!=((x818%x819)==x820));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x822 = INT64_MAX;
	uint16_t x823 = 1137U;
	volatile int32_t t199 = -81;

    t199 = (x821!=((x822%x823)==x824));

    if (t199 != 1) { NG(); } else { ; }
	
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

