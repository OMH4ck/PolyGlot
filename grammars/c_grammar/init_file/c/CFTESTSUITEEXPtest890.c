
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

int64_t x5 = INT64_MIN;
int32_t x6 = -14;
static int8_t x11 = 15;
int8_t x12 = -1;
int64_t x15 = INT64_MAX;
volatile int32_t t3 = -95;
int8_t x17 = -48;
int32_t x20 = -1;
uint64_t x21 = 3416058LLU;
int16_t x22 = -1497;
int32_t t5 = 1011070220;
static int64_t x26 = 99505LL;
int16_t x27 = INT16_MIN;
int16_t x30 = INT16_MIN;
volatile int32_t t9 = -847635977;
int32_t x43 = INT32_MIN;
static volatile uint16_t x49 = 2708U;
volatile int32_t t13 = -7204;
static int32_t t14 = 23;
static int32_t t16 = 15436;
int32_t x71 = INT32_MAX;
int16_t x74 = 1;
int32_t t18 = -23;
uint8_t x83 = UINT8_MAX;
uint32_t x85 = 6467U;
uint32_t x86 = 2658347U;
static uint32_t x88 = 4365262U;
int8_t x91 = INT8_MIN;
static volatile uint8_t x97 = 19U;
static uint8_t x99 = 23U;
static int8_t x101 = INT8_MIN;
int64_t x102 = 56439654017790141LL;
int32_t t28 = -998;
uint8_t x126 = 8U;
int32_t x130 = INT32_MIN;
int32_t x131 = -923711098;
static uint16_t x133 = 0U;
uint8_t x134 = 18U;
int32_t t33 = 23;
uint16_t x139 = UINT16_MAX;
volatile int32_t t35 = -472765;
int32_t t36 = 24912;
int16_t x158 = INT16_MAX;
int8_t x163 = INT8_MAX;
volatile uint16_t x170 = 17U;
int64_t x171 = INT64_MAX;
int32_t t43 = 41;
volatile int32_t t44 = -37;
int32_t t46 = -3;
int64_t x191 = 988651398724LL;
uint64_t x199 = 176463098889LLU;
static uint16_t x213 = 17U;
static uint8_t x221 = UINT8_MAX;
int8_t x222 = -30;
static int64_t x224 = -110240463786461LL;
uint16_t x225 = UINT16_MAX;
uint64_t x226 = 117840LLU;
int64_t x230 = -1LL;
int32_t t57 = 439632;
volatile int32_t x238 = INT32_MIN;
volatile int32_t t59 = -1;
int32_t x245 = -71;
int8_t x247 = INT8_MIN;
volatile int32_t t61 = -32;
volatile int64_t x249 = INT64_MIN;
volatile int64_t x257 = -1LL;
static int16_t x258 = INT16_MIN;
static uint64_t x266 = UINT64_MAX;
volatile uint16_t x272 = 7U;
int32_t t67 = 35583;
int32_t t68 = -11560989;
int32_t x285 = -1;
uint16_t x302 = 892U;
uint64_t x304 = UINT64_MAX;
int64_t x310 = INT64_MIN;
volatile int32_t t74 = 60543847;
static uint64_t x315 = 27631LLU;
static int64_t x316 = INT64_MIN;
int32_t t75 = 2698516;
int32_t x323 = INT32_MIN;
uint32_t x324 = UINT32_MAX;
uint16_t x327 = UINT16_MAX;
uint8_t x328 = UINT8_MAX;
static int32_t t79 = -8606;
int32_t x338 = -1;
static uint16_t x357 = 8250U;
int32_t x365 = -1;
int32_t t88 = -470153;
volatile int32_t t89 = 221;
int32_t t90 = 1293532;
int16_t x385 = INT16_MIN;
uint32_t x386 = 0U;
static volatile int32_t t93 = 65032;
static int8_t x393 = 0;
uint16_t x400 = UINT16_MAX;
int32_t x409 = INT32_MIN;
uint32_t x410 = 56U;
int16_t x412 = -1;
uint64_t x414 = 427995LLU;
uint64_t x415 = 303913885344LLU;
int64_t x424 = 6LL;
volatile int16_t x431 = INT16_MAX;
static volatile int8_t x443 = -13;
volatile int64_t x445 = INT64_MIN;
volatile uint16_t x446 = 26636U;
uint8_t x452 = 1U;
int64_t x453 = INT64_MAX;
int64_t x463 = -1LL;
int64_t x465 = INT64_MAX;
static int32_t x466 = INT32_MAX;
volatile uint16_t x468 = 6U;
static uint32_t x472 = UINT32_MAX;
static uint64_t x475 = 12482LLU;
volatile int32_t t114 = -7406919;
int8_t x478 = INT8_MIN;
uint8_t x483 = 26U;
volatile uint32_t x484 = UINT32_MAX;
volatile int32_t t116 = -954;
uint8_t x486 = 79U;
volatile int32_t x488 = INT32_MIN;
volatile int32_t t117 = 442078826;
int8_t x492 = INT8_MAX;
volatile int8_t x493 = 20;
uint64_t x494 = 127071560068LLU;
int32_t x498 = INT32_MIN;
static int16_t x501 = 32;
int64_t x503 = -1LL;
volatile int32_t t121 = 444;
int16_t x507 = INT16_MIN;
int32_t t122 = -9068566;
int64_t x517 = -1LL;
uint8_t x520 = 29U;
int32_t x528 = INT32_MAX;
static volatile int32_t t126 = 483;
int32_t x529 = INT32_MIN;
static uint32_t x530 = UINT32_MAX;
int8_t x533 = -29;
int64_t x536 = INT64_MAX;
static int16_t x539 = INT16_MAX;
static uint32_t x540 = 3U;
int16_t x543 = INT16_MIN;
int64_t x552 = -735904905996LL;
int32_t t131 = 68746;
int32_t x553 = INT32_MAX;
static uint32_t x558 = UINT32_MAX;
volatile int8_t x560 = INT8_MAX;
uint8_t x563 = 58U;
static volatile int16_t x575 = INT16_MIN;
volatile int32_t x577 = -349;
static uint32_t x578 = 921983U;
uint32_t x582 = 23828684U;
static int32_t t139 = -1;
volatile int32_t t140 = -728127525;
static int64_t x590 = 75562LL;
int16_t x591 = INT16_MAX;
volatile int32_t t141 = 250;
static uint16_t x594 = UINT16_MAX;
int16_t x599 = 1;
uint64_t x604 = 435405913277065218LLU;
int32_t t144 = 157;
volatile int64_t x612 = INT64_MIN;
uint32_t x613 = UINT32_MAX;
static volatile uint32_t x617 = 37188U;
volatile int32_t x623 = INT32_MIN;
int16_t x626 = INT16_MIN;
uint16_t x627 = 11U;
uint8_t x633 = UINT8_MAX;
static int32_t x642 = -1;
int16_t x644 = 1;
static int32_t t158 = -175203679;
int32_t t159 = 3;
volatile int32_t t160 = -3154;
volatile int8_t x671 = INT8_MIN;
int8_t x672 = INT8_MIN;
static int32_t x673 = -2340030;
uint16_t x674 = UINT16_MAX;
uint16_t x689 = UINT16_MAX;
volatile int32_t t166 = -442901;
int32_t x696 = INT32_MIN;
static int16_t x712 = -1;
int32_t t171 = 0;
static int16_t x713 = INT16_MAX;
uint8_t x717 = UINT8_MAX;
uint16_t x722 = 0U;
uint32_t x725 = UINT32_MAX;
volatile int32_t t176 = 0;
static int32_t x733 = INT32_MIN;
int32_t t178 = -22845037;
int64_t x743 = -1LL;
int64_t x744 = INT64_MIN;
int32_t x752 = -1;
int32_t t181 = -25;
static uint64_t x764 = UINT64_MAX;
volatile int64_t x768 = -2LL;
int32_t x770 = -882492659;
uint32_t x772 = UINT32_MAX;
int64_t x778 = INT64_MAX;
int32_t x784 = -1;
volatile int32_t t189 = 411;
volatile int8_t x787 = INT8_MAX;
uint16_t x794 = UINT16_MAX;
int64_t x798 = 1248084071LL;
volatile uint8_t x799 = 1U;
uint64_t x803 = 3264835744LLU;
int32_t t195 = 65472;
static int32_t x811 = INT32_MIN;
int16_t x813 = INT16_MIN;
volatile int64_t x815 = INT64_MIN;
static uint64_t x818 = 967928378851LLU;
uint8_t x822 = 6U;


void f0(void) {
    	int8_t x1 = 12;
	int32_t x2 = -4817;
	uint16_t x3 = UINT16_MAX;
	static volatile int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 64620;

    t0 = (x1==((x2%x3)==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x7 = INT32_MIN;
	static uint8_t x8 = 0U;
	static volatile int32_t t1 = 2800;

    t1 = (x5==((x6%x7)==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 86;
	static volatile uint32_t x10 = UINT32_MAX;
	int32_t t2 = 6803;

    t2 = (x9==((x10%x11)==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = INT16_MIN;
	uint64_t x14 = UINT64_MAX;
	int32_t x16 = -142681312;

    t3 = (x13==((x14%x15)==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = 4841U;
	int32_t x19 = -15;
	int32_t t4 = 555;

    t4 = (x17==((x18%x19)==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x23 = UINT64_MAX;
	static int64_t x24 = -1LL;

    t5 = (x21==((x22%x23)==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	uint32_t x28 = 1137492575U;
	static int32_t t6 = -879532466;

    t6 = (x25==((x26%x27)==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 32707U;
	uint8_t x31 = 15U;
	uint8_t x32 = 3U;
	volatile int32_t t7 = 838640373;

    t7 = (x29==((x30%x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = 12U;
	int16_t x34 = INT16_MAX;
	uint32_t x35 = UINT32_MAX;
	int64_t x36 = INT64_MAX;
	static volatile int32_t t8 = -1935;

    t8 = (x33==((x34%x35)==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = 1;
	volatile int64_t x38 = INT64_MIN;
	static volatile uint64_t x39 = 1501613168717LLU;
	int64_t x40 = INT64_MIN;

    t9 = (x37==((x38%x39)==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = -651097;
	int64_t x42 = INT64_MIN;
	static volatile int16_t x44 = -1;
	static int32_t t10 = -31201;

    t10 = (x41==((x42%x43)==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	volatile int64_t x46 = -1LL;
	int64_t x47 = INT64_MIN;
	uint64_t x48 = 518893LLU;
	int32_t t11 = -217866007;

    t11 = (x45==((x46%x47)==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x50 = -1;
	uint8_t x51 = 2U;
	int32_t x52 = INT32_MAX;
	int32_t t12 = -61292;

    t12 = (x49==((x50%x51)==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 6U;
	int32_t x54 = INT32_MAX;
	uint64_t x55 = 249434LLU;
	int8_t x56 = -1;

    t13 = (x53==((x54%x55)==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = INT32_MAX;
	int32_t x58 = INT32_MIN;
	int32_t x59 = INT32_MIN;
	int64_t x60 = INT64_MIN;

    t14 = (x57==((x58%x59)==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 64922764943769029LLU;
	uint8_t x62 = UINT8_MAX;
	int16_t x63 = -1;
	volatile int8_t x64 = -1;
	volatile int32_t t15 = -1;

    t15 = (x61==((x62%x63)==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int64_t x66 = 24748927111271225LL;
	static int64_t x67 = INT64_MAX;
	int32_t x68 = INT32_MAX;

    t16 = (x65==((x66%x67)==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	static volatile int32_t x70 = -124899157;
	int8_t x72 = -27;
	int32_t t17 = -1;

    t17 = (x69==((x70%x71)==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = INT8_MAX;
	volatile uint8_t x75 = UINT8_MAX;
	int64_t x76 = INT64_MAX;

    t18 = (x73==((x74%x75)==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	volatile int8_t x78 = -3;
	volatile int32_t x79 = -12;
	uint32_t x80 = 2319706U;
	volatile int32_t t19 = 978540;

    t19 = (x77==((x78%x79)==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x81 = UINT64_MAX;
	int64_t x82 = 2LL;
	int16_t x84 = 1;
	volatile int32_t t20 = -24760571;

    t20 = (x81==((x82%x83)==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x87 = -451968545822LL;
	volatile int32_t t21 = -77;

    t21 = (x85==((x86%x87)==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 1U;
	int8_t x90 = INT8_MIN;
	static int32_t x92 = -4013793;
	volatile int32_t t22 = 1454;

    t22 = (x89==((x90%x91)==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 1976;
	static uint16_t x94 = 934U;
	uint8_t x95 = 47U;
	int16_t x96 = INT16_MAX;
	int32_t t23 = 10275;

    t23 = (x93==((x94%x95)==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = INT64_MIN;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = -53294;

    t24 = (x97==((x98%x99)==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x103 = 418692756797826LLU;
	volatile int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 0;

    t25 = (x101==((x102%x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MAX;
	int64_t x106 = -1LL;
	static int64_t x107 = -1LL;
	static int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -11061078;

    t26 = (x105==((x106%x107)==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	volatile uint32_t x110 = 8798221U;
	static int8_t x111 = INT8_MIN;
	int32_t x112 = 1332;
	volatile int32_t t27 = -458662072;

    t27 = (x109==((x110%x111)==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 567960853LL;
	static int32_t x114 = -1965041;
	uint16_t x115 = 1012U;
	static int8_t x116 = -10;

    t28 = (x113==((x114%x115)==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 9U;
	static uint64_t x118 = UINT64_MAX;
	int8_t x119 = -1;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = 3205;

    t29 = (x117==((x118%x119)==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 6105353020LLU;
	int16_t x122 = 9116;
	int8_t x123 = INT8_MIN;
	uint16_t x124 = 22U;
	volatile int32_t t30 = -1688;

    t30 = (x121==((x122%x123)==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	static volatile uint8_t x128 = 7U;
	volatile int32_t t31 = 35;

    t31 = (x125==((x126%x127)==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x129 = INT16_MIN;
	int16_t x132 = -1;
	volatile int32_t t32 = 22411191;

    t32 = (x129==((x130%x131)==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x135 = 106U;
	uint8_t x136 = 61U;

    t33 = (x133==((x134%x135)==x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -1LL;
	uint8_t x138 = 51U;
	int64_t x140 = -1LL;
	volatile int32_t t34 = 0;

    t34 = (x137==((x138%x139)==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	int64_t x142 = -2187820730346387449LL;
	int16_t x143 = 73;
	int64_t x144 = -1LL;

    t35 = (x141==((x142%x143)==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x145 = UINT64_MAX;
	int64_t x146 = -1LL;
	int64_t x147 = -1LL;
	int8_t x148 = INT8_MIN;

    t36 = (x145==((x146%x147)==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = INT16_MAX;
	int16_t x150 = -1;
	int8_t x151 = INT8_MIN;
	volatile int64_t x152 = 69186694498352027LL;
	volatile int32_t t37 = -24814;

    t37 = (x149==((x150%x151)==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x153 = 0U;
	int32_t x154 = INT32_MIN;
	static int16_t x155 = INT16_MAX;
	int16_t x156 = -1;
	int32_t t38 = 929;

    t38 = (x153==((x154%x155)==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MAX;
	int64_t x159 = INT64_MIN;
	static int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 114744676;

    t39 = (x157==((x158%x159)==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x161 = 23847U;
	int8_t x162 = -1;
	uint8_t x164 = 0U;
	static int32_t t40 = 63;

    t40 = (x161==((x162%x163)==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 63U;
	volatile int16_t x166 = INT16_MIN;
	int16_t x167 = INT16_MIN;
	int32_t x168 = 53288978;
	int32_t t41 = -1;

    t41 = (x165==((x166%x167)==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = 2478LL;
	volatile int32_t x172 = INT32_MIN;
	volatile int32_t t42 = -6986357;

    t42 = (x169==((x170%x171)==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -1LL;
	volatile uint64_t x174 = 157915LLU;
	volatile int32_t x175 = -436219;
	int8_t x176 = -1;

    t43 = (x173==((x174%x175)==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = INT32_MIN;
	uint64_t x178 = 4LLU;
	int16_t x179 = INT16_MIN;
	volatile uint16_t x180 = UINT16_MAX;

    t44 = (x177==((x178%x179)==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1427162LL;
	static uint8_t x182 = 12U;
	uint64_t x183 = 43781177726052627LLU;
	int64_t x184 = -1LL;
	volatile int32_t t45 = 3;

    t45 = (x181==((x182%x183)==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = INT32_MIN;
	int64_t x186 = -1LL;
	volatile int8_t x187 = -1;
	int32_t x188 = -178440;

    t46 = (x185==((x186%x187)==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = 164U;
	int8_t x190 = -13;
	int64_t x192 = INT64_MIN;
	volatile int32_t t47 = 1;

    t47 = (x189==((x190%x191)==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = INT16_MIN;
	volatile int64_t x194 = INT64_MIN;
	static uint32_t x195 = UINT32_MAX;
	volatile int16_t x196 = INT16_MAX;
	volatile int32_t t48 = -1;

    t48 = (x193==((x194%x195)==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -5;
	int8_t x198 = 1;
	uint8_t x200 = 24U;
	int32_t t49 = 268949871;

    t49 = (x197==((x198%x199)==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	volatile int16_t x202 = 1841;
	uint8_t x203 = UINT8_MAX;
	int16_t x204 = INT16_MIN;
	int32_t t50 = 0;

    t50 = (x201==((x202%x203)==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x205 = -1LL;
	int16_t x206 = -39;
	static uint32_t x207 = 105U;
	static int32_t x208 = INT32_MIN;
	int32_t t51 = -418;

    t51 = (x205==((x206%x207)==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x209 = -1;
	static int8_t x210 = INT8_MIN;
	int16_t x211 = INT16_MIN;
	volatile int8_t x212 = INT8_MAX;
	int32_t t52 = -23064880;

    t52 = (x209==((x210%x211)==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x214 = -1;
	int8_t x215 = -8;
	uint16_t x216 = UINT16_MAX;
	int32_t t53 = 17;

    t53 = (x213==((x214%x215)==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	uint16_t x218 = 1999U;
	int16_t x219 = INT16_MIN;
	uint64_t x220 = 9741373135LLU;
	static volatile int32_t t54 = -177709342;

    t54 = (x217==((x218%x219)==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x223 = 1U;
	static int32_t t55 = -106930536;

    t55 = (x221==((x222%x223)==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x227 = UINT8_MAX;
	uint32_t x228 = 1375880151U;
	int32_t t56 = -12627460;

    t56 = (x225==((x226%x227)==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MAX;
	int16_t x231 = 8;
	int64_t x232 = -1LL;

    t57 = (x229==((x230%x231)==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x233 = INT32_MIN;
	uint64_t x234 = 124LLU;
	int64_t x235 = INT64_MAX;
	int16_t x236 = -1;
	volatile int32_t t58 = 212535;

    t58 = (x233==((x234%x235)==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = UINT64_MAX;
	uint8_t x239 = UINT8_MAX;
	int8_t x240 = INT8_MIN;

    t59 = (x237==((x238%x239)==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -1;
	static int16_t x242 = INT16_MIN;
	int64_t x243 = INT64_MIN;
	static uint32_t x244 = 8773307U;
	volatile int32_t t60 = -38;

    t60 = (x241==((x242%x243)==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x246 = 7163U;
	volatile int64_t x248 = -119LL;

    t61 = (x245==((x246%x247)==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x250 = 1695931LLU;
	static uint8_t x251 = UINT8_MAX;
	int32_t x252 = 10498;
	int32_t t62 = -52578;

    t62 = (x249==((x250%x251)==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x259 = 29729392LL;
	uint16_t x260 = 29315U;
	volatile int32_t t63 = -39417;

    t63 = (x257==((x258%x259)==x260));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x261 = 2498;
	int16_t x262 = 1;
	int64_t x263 = INT64_MIN;
	int8_t x264 = INT8_MIN;
	int32_t t64 = -20942040;

    t64 = (x261==((x262%x263)==x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x265 = -49492LL;
	static volatile uint8_t x267 = 3U;
	volatile int64_t x268 = -1LL;
	volatile int32_t t65 = -2422;

    t65 = (x265==((x266%x267)==x268));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x269 = INT16_MIN;
	int32_t x270 = 16001;
	int64_t x271 = INT64_MIN;
	static volatile int32_t t66 = 1100217;

    t66 = (x269==((x270%x271)==x272));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = INT32_MIN;
	int32_t x274 = -1;
	volatile uint8_t x275 = 1U;
	static int64_t x276 = INT64_MIN;

    t67 = (x273==((x274%x275)==x276));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x281 = UINT16_MAX;
	static int16_t x282 = 3;
	uint32_t x283 = 593062U;
	int16_t x284 = INT16_MIN;

    t68 = (x281==((x282%x283)==x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x286 = -1LL;
	int64_t x287 = -570970879LL;
	static int8_t x288 = INT8_MIN;
	static volatile int32_t t69 = -2874;

    t69 = (x285==((x286%x287)==x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x289 = INT16_MIN;
	static int8_t x290 = -22;
	int8_t x291 = INT8_MAX;
	int8_t x292 = -37;
	volatile int32_t t70 = 5;

    t70 = (x289==((x290%x291)==x292));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x293 = 7713412LLU;
	volatile int16_t x294 = -1;
	uint8_t x295 = 9U;
	volatile int64_t x296 = -1LL;
	volatile int32_t t71 = -766683;

    t71 = (x293==((x294%x295)==x296));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = -1;
	uint32_t x303 = 7449512U;
	int32_t t72 = 13;

    t72 = (x301==((x302%x303)==x304));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x305 = INT64_MIN;
	uint8_t x306 = UINT8_MAX;
	uint8_t x307 = UINT8_MAX;
	int16_t x308 = -1;
	int32_t t73 = -1;

    t73 = (x305==((x306%x307)==x308));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x309 = INT8_MIN;
	static uint64_t x311 = 2423168737834527491LLU;
	uint32_t x312 = 941027311U;

    t74 = (x309==((x310%x311)==x312));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x313 = -16;
	volatile int32_t x314 = INT32_MAX;

    t75 = (x313==((x314%x315)==x316));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int64_t x317 = 201953797944LL;
	int8_t x318 = 0;
	int64_t x319 = INT64_MAX;
	int8_t x320 = -15;
	int32_t t76 = -5106825;

    t76 = (x317==((x318%x319)==x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x321 = UINT8_MAX;
	int32_t x322 = 48673;
	int32_t t77 = 14;

    t77 = (x321==((x322%x323)==x324));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x325 = 56U;
	static int64_t x326 = -1LL;
	static volatile int32_t t78 = 662;

    t78 = (x325==((x326%x327)==x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x329 = 812;
	volatile int64_t x330 = INT64_MAX;
	int16_t x331 = INT16_MAX;
	int8_t x332 = INT8_MIN;

    t79 = (x329==((x330%x331)==x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x333 = 2741829;
	volatile uint8_t x334 = 86U;
	static int32_t x335 = INT32_MIN;
	static uint64_t x336 = 6727137763014LLU;
	int32_t t80 = 851087;

    t80 = (x333==((x334%x335)==x336));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = INT32_MIN;
	int8_t x339 = -1;
	uint32_t x340 = 23U;
	int32_t t81 = -6;

    t81 = (x337==((x338%x339)==x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = INT32_MAX;
	uint32_t x342 = UINT32_MAX;
	volatile int64_t x343 = INT64_MAX;
	static int64_t x344 = INT64_MAX;
	int32_t t82 = -4036174;

    t82 = (x341==((x342%x343)==x344));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x345 = 70369079U;
	int32_t x346 = -6070836;
	uint32_t x347 = UINT32_MAX;
	int8_t x348 = -2;
	static int32_t t83 = 0;

    t83 = (x345==((x346%x347)==x348));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x349 = 473;
	volatile int32_t x350 = -230404;
	int16_t x351 = INT16_MIN;
	int8_t x352 = 0;
	static int32_t t84 = -24035;

    t84 = (x349==((x350%x351)==x352));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x353 = -45;
	int16_t x354 = INT16_MIN;
	static volatile int16_t x355 = INT16_MIN;
	volatile uint64_t x356 = UINT64_MAX;
	volatile int32_t t85 = -75;

    t85 = (x353==((x354%x355)==x356));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x358 = 5113;
	int8_t x359 = -13;
	static uint16_t x360 = 1154U;
	int32_t t86 = 343;

    t86 = (x357==((x358%x359)==x360));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x361 = 0U;
	int64_t x362 = -1LL;
	static int16_t x363 = -1;
	static uint64_t x364 = 21002044813LLU;
	volatile int32_t t87 = 875811800;

    t87 = (x361==((x362%x363)==x364));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x366 = 224U;
	int64_t x367 = -1598LL;
	int16_t x368 = INT16_MAX;

    t88 = (x365==((x366%x367)==x368));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x369 = -1;
	static int16_t x370 = INT16_MIN;
	uint8_t x371 = 6U;
	volatile int32_t x372 = INT32_MIN;

    t89 = (x369==((x370%x371)==x372));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x373 = INT64_MAX;
	static int64_t x374 = INT64_MIN;
	uint16_t x375 = UINT16_MAX;
	volatile int32_t x376 = INT32_MIN;

    t90 = (x373==((x374%x375)==x376));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x377 = 95U;
	int16_t x378 = 410;
	uint64_t x379 = 2312637441LLU;
	volatile int16_t x380 = INT16_MAX;
	volatile int32_t t91 = 129565;

    t91 = (x377==((x378%x379)==x380));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x381 = 0U;
	static uint32_t x382 = 946778U;
	int64_t x383 = INT64_MAX;
	uint32_t x384 = 70097U;
	int32_t t92 = 93770000;

    t92 = (x381==((x382%x383)==x384));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x387 = -1;
	int16_t x388 = INT16_MAX;

    t93 = (x385==((x386%x387)==x388));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x389 = INT32_MIN;
	static int8_t x390 = -1;
	uint64_t x391 = UINT64_MAX;
	int8_t x392 = INT8_MAX;
	volatile int32_t t94 = -225228;

    t94 = (x389==((x390%x391)==x392));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x394 = INT64_MIN;
	static int8_t x395 = -1;
	volatile int16_t x396 = 10094;
	volatile int32_t t95 = 0;

    t95 = (x393==((x394%x395)==x396));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x397 = INT32_MIN;
	int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MIN;
	int32_t t96 = 4987;

    t96 = (x397==((x398%x399)==x400));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x401 = -1;
	int32_t x402 = -9270;
	int16_t x403 = INT16_MIN;
	int8_t x404 = -1;
	int32_t t97 = -366047;

    t97 = (x401==((x402%x403)==x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x405 = INT8_MIN;
	int8_t x406 = -1;
	int64_t x407 = INT64_MIN;
	int16_t x408 = -1800;
	int32_t t98 = -1;

    t98 = (x405==((x406%x407)==x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x411 = INT32_MAX;
	int32_t t99 = -2110;

    t99 = (x409==((x410%x411)==x412));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x413 = 1;
	volatile int64_t x416 = INT64_MAX;
	int32_t t100 = -1717974;

    t100 = (x413==((x414%x415)==x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x417 = 45U;
	static int64_t x418 = INT64_MIN;
	uint16_t x419 = UINT16_MAX;
	int16_t x420 = INT16_MIN;
	volatile int32_t t101 = -25862395;

    t101 = (x417==((x418%x419)==x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x421 = INT16_MAX;
	int32_t x422 = INT32_MIN;
	volatile int32_t x423 = INT32_MIN;
	volatile int32_t t102 = -1545425;

    t102 = (x421==((x422%x423)==x424));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x425 = 163;
	int8_t x426 = 22;
	int16_t x427 = 11;
	int16_t x428 = INT16_MIN;
	int32_t t103 = 3185342;

    t103 = (x425==((x426%x427)==x428));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x429 = INT16_MAX;
	int8_t x430 = INT8_MIN;
	uint16_t x432 = 9U;
	static int32_t t104 = -449;

    t104 = (x429==((x430%x431)==x432));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x433 = INT64_MIN;
	int64_t x434 = -1LL;
	uint32_t x435 = 96U;
	int16_t x436 = 1324;
	int32_t t105 = 383;

    t105 = (x433==((x434%x435)==x436));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x437 = -1227215;
	uint64_t x438 = 14481025172880LLU;
	int32_t x439 = INT32_MAX;
	static int32_t x440 = INT32_MIN;
	int32_t t106 = 959558450;

    t106 = (x437==((x438%x439)==x440));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x441 = INT64_MAX;
	int32_t x442 = -1;
	int16_t x444 = INT16_MAX;
	static int32_t t107 = -424518;

    t107 = (x441==((x442%x443)==x444));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x447 = 15609019LL;
	uint16_t x448 = UINT16_MAX;
	static volatile int32_t t108 = -24;

    t108 = (x445==((x446%x447)==x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x449 = INT32_MIN;
	volatile int16_t x450 = INT16_MAX;
	volatile int16_t x451 = -1;
	int32_t t109 = -26;

    t109 = (x449==((x450%x451)==x452));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x454 = 389556456U;
	int64_t x455 = -1LL;
	uint16_t x456 = 9469U;
	static volatile int32_t t110 = -1653818;

    t110 = (x453==((x454%x455)==x456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x461 = INT8_MIN;
	static uint64_t x462 = UINT64_MAX;
	uint64_t x464 = 9227568706715750LLU;
	volatile int32_t t111 = 13754971;

    t111 = (x461==((x462%x463)==x464));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x467 = INT8_MAX;
	static volatile int32_t t112 = 6958;

    t112 = (x465==((x466%x467)==x468));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x469 = -631;
	uint16_t x470 = 210U;
	static int16_t x471 = INT16_MIN;
	int32_t t113 = 2;

    t113 = (x469==((x470%x471)==x472));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x473 = INT8_MIN;
	static uint64_t x474 = UINT64_MAX;
	volatile int32_t x476 = 299;

    t114 = (x473==((x474%x475)==x476));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x477 = UINT16_MAX;
	uint64_t x479 = 232720LLU;
	uint64_t x480 = UINT64_MAX;
	volatile int32_t t115 = 3783684;

    t115 = (x477==((x478%x479)==x480));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x481 = INT16_MAX;
	static int32_t x482 = INT32_MIN;

    t116 = (x481==((x482%x483)==x484));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x485 = 1597300264252005005LLU;
	int16_t x487 = INT16_MAX;

    t117 = (x485==((x486%x487)==x488));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x489 = UINT64_MAX;
	static uint16_t x490 = 229U;
	static int32_t x491 = INT32_MAX;
	static volatile int32_t t118 = 2338804;

    t118 = (x489==((x490%x491)==x492));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x495 = 2745237;
	volatile int32_t x496 = 1;
	int32_t t119 = -39906787;

    t119 = (x493==((x494%x495)==x496));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint32_t x497 = 843969844U;
	volatile int8_t x499 = -1;
	volatile int8_t x500 = -1;
	volatile int32_t t120 = 247920801;

    t120 = (x497==((x498%x499)==x500));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x502 = UINT32_MAX;
	uint64_t x504 = 193269531LLU;

    t121 = (x501==((x502%x503)==x504));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint64_t x505 = 2LLU;
	static uint64_t x506 = 282672713347380LLU;
	int64_t x508 = 5068582839928LL;

    t122 = (x505==((x506%x507)==x508));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x513 = -1;
	static int32_t x514 = INT32_MIN;
	int32_t x515 = -1;
	static int32_t x516 = 173242061;
	int32_t t123 = -6242;

    t123 = (x513==((x514%x515)==x516));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x518 = INT8_MAX;
	int32_t x519 = -5665;
	volatile int32_t t124 = 2010;

    t124 = (x517==((x518%x519)==x520));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x521 = INT8_MIN;
	volatile int16_t x522 = INT16_MIN;
	int8_t x523 = INT8_MIN;
	uint16_t x524 = 30234U;
	int32_t t125 = -1009;

    t125 = (x521==((x522%x523)==x524));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x525 = -1;
	int8_t x526 = INT8_MIN;
	int64_t x527 = INT64_MIN;

    t126 = (x525==((x526%x527)==x528));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x531 = -5053;
	volatile int8_t x532 = INT8_MAX;
	int32_t t127 = -759834;

    t127 = (x529==((x530%x531)==x532));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x534 = 144U;
	static int8_t x535 = INT8_MIN;
	int32_t t128 = -2;

    t128 = (x533==((x534%x535)==x536));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x537 = 20453U;
	uint16_t x538 = 1778U;
	int32_t t129 = -1585;

    t129 = (x537==((x538%x539)==x540));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x541 = 2U;
	uint32_t x542 = UINT32_MAX;
	uint64_t x544 = UINT64_MAX;
	volatile int32_t t130 = 222;

    t130 = (x541==((x542%x543)==x544));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x549 = INT32_MIN;
	uint32_t x550 = 43U;
	static volatile int8_t x551 = INT8_MIN;

    t131 = (x549==((x550%x551)==x552));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x554 = -1;
	int16_t x555 = -4;
	uint32_t x556 = UINT32_MAX;
	int32_t t132 = 50458991;

    t132 = (x553==((x554%x555)==x556));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x557 = -11;
	static int8_t x559 = -1;
	static volatile int32_t t133 = -327;

    t133 = (x557==((x558%x559)==x560));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x561 = INT16_MIN;
	int32_t x562 = -1;
	uint8_t x564 = 1U;
	int32_t t134 = -11956827;

    t134 = (x561==((x562%x563)==x564));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x565 = 275299653U;
	uint16_t x566 = 5U;
	int8_t x567 = INT8_MIN;
	int32_t x568 = INT32_MIN;
	static volatile int32_t t135 = -413;

    t135 = (x565==((x566%x567)==x568));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x569 = INT32_MAX;
	int64_t x570 = INT64_MIN;
	uint8_t x571 = UINT8_MAX;
	int64_t x572 = -97578771545LL;
	volatile int32_t t136 = 410;

    t136 = (x569==((x570%x571)==x572));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x573 = -21150;
	static volatile int8_t x574 = 15;
	static int8_t x576 = -10;
	volatile int32_t t137 = 442737660;

    t137 = (x573==((x574%x575)==x576));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x579 = INT16_MAX;
	static int16_t x580 = -1;
	volatile int32_t t138 = -175786175;

    t138 = (x577==((x578%x579)==x580));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x581 = 2;
	int32_t x583 = -3080;
	int16_t x584 = INT16_MIN;

    t139 = (x581==((x582%x583)==x584));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x585 = 1275U;
	static int8_t x586 = INT8_MIN;
	static uint64_t x587 = UINT64_MAX;
	uint16_t x588 = UINT16_MAX;

    t140 = (x585==((x586%x587)==x588));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x589 = -5;
	uint8_t x592 = 3U;

    t141 = (x589==((x590%x591)==x592));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x593 = UINT16_MAX;
	static int8_t x595 = -1;
	uint16_t x596 = UINT16_MAX;
	int32_t t142 = 758;

    t142 = (x593==((x594%x595)==x596));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x597 = 1;
	volatile int8_t x598 = INT8_MAX;
	volatile int64_t x600 = INT64_MIN;
	volatile int32_t t143 = -2392;

    t143 = (x597==((x598%x599)==x600));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x601 = -4874964;
	volatile int32_t x602 = INT32_MIN;
	int8_t x603 = INT8_MAX;

    t144 = (x601==((x602%x603)==x604));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x605 = 15U;
	volatile int16_t x606 = -3;
	volatile int16_t x607 = -8853;
	uint16_t x608 = 536U;
	volatile int32_t t145 = 5808;

    t145 = (x605==((x606%x607)==x608));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x609 = INT8_MAX;
	static int64_t x610 = INT64_MAX;
	volatile int64_t x611 = -36847142LL;
	static int32_t t146 = -446994;

    t146 = (x609==((x610%x611)==x612));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x614 = INT32_MAX;
	uint16_t x615 = 25243U;
	static int32_t x616 = 29450401;
	volatile int32_t t147 = 175390;

    t147 = (x613==((x614%x615)==x616));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x618 = UINT64_MAX;
	int64_t x619 = INT64_MIN;
	static int64_t x620 = -2858192LL;
	int32_t t148 = 0;

    t148 = (x617==((x618%x619)==x620));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x621 = 0U;
	uint8_t x622 = UINT8_MAX;
	volatile int8_t x624 = -1;
	volatile int32_t t149 = -1;

    t149 = (x621==((x622%x623)==x624));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x625 = 32531;
	int32_t x628 = INT32_MIN;
	volatile int32_t t150 = 53;

    t150 = (x625==((x626%x627)==x628));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x629 = -1LL;
	int8_t x630 = -1;
	int8_t x631 = -1;
	volatile uint64_t x632 = UINT64_MAX;
	volatile int32_t t151 = -241;

    t151 = (x629==((x630%x631)==x632));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x634 = 107;
	static int64_t x635 = 2268LL;
	static uint16_t x636 = 21326U;
	int32_t t152 = -42;

    t152 = (x633==((x634%x635)==x636));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x637 = UINT64_MAX;
	uint8_t x638 = 0U;
	int32_t x639 = 338014;
	static int32_t x640 = INT32_MAX;
	volatile int32_t t153 = 154;

    t153 = (x637==((x638%x639)==x640));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x641 = 1U;
	int64_t x643 = 11487LL;
	int32_t t154 = -1143;

    t154 = (x641==((x642%x643)==x644));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x645 = 38U;
	int8_t x646 = -1;
	int8_t x647 = INT8_MAX;
	static int32_t x648 = 507182;
	int32_t t155 = -1;

    t155 = (x645==((x646%x647)==x648));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x649 = 1865925U;
	int8_t x650 = -1;
	static int16_t x651 = -6;
	static int32_t x652 = -467574067;
	int32_t t156 = -481136;

    t156 = (x649==((x650%x651)==x652));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x653 = UINT32_MAX;
	uint8_t x654 = 15U;
	int16_t x655 = -1;
	static int64_t x656 = -1LL;
	int32_t t157 = -502534100;

    t157 = (x653==((x654%x655)==x656));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x657 = UINT16_MAX;
	int16_t x658 = INT16_MAX;
	int8_t x659 = -1;
	int64_t x660 = -148735717995171LL;

    t158 = (x657==((x658%x659)==x660));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x661 = UINT16_MAX;
	uint32_t x662 = 663U;
	int64_t x663 = -1LL;
	volatile int16_t x664 = INT16_MAX;

    t159 = (x661==((x662%x663)==x664));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x665 = INT8_MAX;
	int64_t x666 = INT64_MAX;
	static int16_t x667 = INT16_MIN;
	uint64_t x668 = 15LLU;

    t160 = (x665==((x666%x667)==x668));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x669 = INT8_MAX;
	static volatile int64_t x670 = 2870969135370003LL;
	static volatile int32_t t161 = -756;

    t161 = (x669==((x670%x671)==x672));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x675 = INT8_MIN;
	static int32_t x676 = -5023494;
	volatile int32_t t162 = -21912371;

    t162 = (x673==((x674%x675)==x676));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x677 = 21782011833573275LLU;
	int8_t x678 = INT8_MAX;
	int64_t x679 = INT64_MAX;
	int32_t x680 = -1;
	int32_t t163 = -9194;

    t163 = (x677==((x678%x679)==x680));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x681 = -5;
	static volatile uint8_t x682 = 59U;
	int64_t x683 = INT64_MIN;
	static uint32_t x684 = 55U;
	static volatile int32_t t164 = 1;

    t164 = (x681==((x682%x683)==x684));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x685 = 3LLU;
	int32_t x686 = INT32_MIN;
	static int16_t x687 = INT16_MAX;
	static int64_t x688 = 128045LL;
	volatile int32_t t165 = -83;

    t165 = (x685==((x686%x687)==x688));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x690 = INT64_MIN;
	uint8_t x691 = 15U;
	volatile int32_t x692 = -1;

    t166 = (x689==((x690%x691)==x692));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x693 = 771770862LL;
	int16_t x694 = INT16_MAX;
	int32_t x695 = -3643;
	int32_t t167 = 2624054;

    t167 = (x693==((x694%x695)==x696));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x697 = 1808;
	static volatile int16_t x698 = -10;
	static int16_t x699 = INT16_MIN;
	volatile int32_t x700 = 39;
	int32_t t168 = -7073716;

    t168 = (x697==((x698%x699)==x700));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x701 = UINT16_MAX;
	static int8_t x702 = -1;
	static int64_t x703 = INT64_MIN;
	static volatile int8_t x704 = -49;
	int32_t t169 = -7649;

    t169 = (x701==((x702%x703)==x704));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x705 = 26842772LLU;
	int64_t x706 = INT64_MIN;
	uint8_t x707 = 24U;
	volatile int64_t x708 = INT64_MAX;
	int32_t t170 = 430;

    t170 = (x705==((x706%x707)==x708));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x709 = -1LL;
	volatile int64_t x710 = INT64_MIN;
	uint16_t x711 = UINT16_MAX;

    t171 = (x709==((x710%x711)==x712));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint32_t x714 = UINT32_MAX;
	int16_t x715 = -848;
	int64_t x716 = 127LL;
	int32_t t172 = -1;

    t172 = (x713==((x714%x715)==x716));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x718 = INT8_MIN;
	static int16_t x719 = INT16_MAX;
	int16_t x720 = 1642;
	volatile int32_t t173 = 435538041;

    t173 = (x717==((x718%x719)==x720));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x721 = 2196056LL;
	uint32_t x723 = UINT32_MAX;
	static int16_t x724 = 1;
	volatile int32_t t174 = 7;

    t174 = (x721==((x722%x723)==x724));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x726 = 54U;
	int64_t x727 = 5632647320561746LL;
	static int16_t x728 = 196;
	volatile int32_t t175 = -2;

    t175 = (x725==((x726%x727)==x728));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x729 = INT64_MIN;
	static uint64_t x730 = 37863454055LLU;
	int8_t x731 = -1;
	uint64_t x732 = 12775LLU;

    t176 = (x729==((x730%x731)==x732));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x734 = 9891;
	static int32_t x735 = -161341746;
	uint64_t x736 = 1246LLU;
	int32_t t177 = -368582759;

    t177 = (x733==((x734%x735)==x736));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x737 = -3;
	uint16_t x738 = 11U;
	int8_t x739 = INT8_MIN;
	uint32_t x740 = UINT32_MAX;

    t178 = (x737==((x738%x739)==x740));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x741 = 316LL;
	int8_t x742 = INT8_MIN;
	volatile int32_t t179 = 28644546;

    t179 = (x741==((x742%x743)==x744));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x745 = INT8_MAX;
	static volatile int32_t x746 = -127373119;
	uint16_t x747 = 400U;
	uint8_t x748 = 15U;
	static int32_t t180 = -71836131;

    t180 = (x745==((x746%x747)==x748));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x749 = -1;
	int32_t x750 = -1;
	static volatile int32_t x751 = INT32_MIN;

    t181 = (x749==((x750%x751)==x752));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint16_t x753 = 5834U;
	int32_t x754 = -1;
	int16_t x755 = -1;
	volatile int32_t x756 = -1;
	int32_t t182 = 1236;

    t182 = (x753==((x754%x755)==x756));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x757 = -1LL;
	uint64_t x758 = 79120243LLU;
	int32_t x759 = -1;
	int16_t x760 = INT16_MIN;
	int32_t t183 = -3653;

    t183 = (x757==((x758%x759)==x760));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x761 = INT8_MIN;
	int64_t x762 = -1181LL;
	volatile int8_t x763 = -6;
	int32_t t184 = 758586;

    t184 = (x761==((x762%x763)==x764));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint64_t x765 = 911758059431LLU;
	static int64_t x766 = -1LL;
	static int32_t x767 = -1785;
	int32_t t185 = 964;

    t185 = (x765==((x766%x767)==x768));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x769 = UINT16_MAX;
	static int32_t x771 = INT32_MIN;
	volatile int32_t t186 = 66414124;

    t186 = (x769==((x770%x771)==x772));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x773 = -15463415272495LL;
	uint64_t x774 = 32LLU;
	int64_t x775 = INT64_MAX;
	int64_t x776 = INT64_MIN;
	int32_t t187 = 875611965;

    t187 = (x773==((x774%x775)==x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x777 = INT16_MAX;
	uint16_t x779 = UINT16_MAX;
	uint32_t x780 = 97446038U;
	int32_t t188 = 54934;

    t188 = (x777==((x778%x779)==x780));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x781 = UINT16_MAX;
	int16_t x782 = -3;
	uint8_t x783 = 15U;

    t189 = (x781==((x782%x783)==x784));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x785 = 497U;
	static int8_t x786 = INT8_MIN;
	int8_t x788 = 43;
	int32_t t190 = -220322;

    t190 = (x785==((x786%x787)==x788));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x789 = -1054745018;
	int16_t x790 = INT16_MIN;
	static int16_t x791 = INT16_MIN;
	static int64_t x792 = -1LL;
	int32_t t191 = 8938;

    t191 = (x789==((x790%x791)==x792));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x793 = INT64_MIN;
	int32_t x795 = -1;
	int8_t x796 = INT8_MIN;
	volatile int32_t t192 = -3739947;

    t192 = (x793==((x794%x795)==x796));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x797 = 8944145401170218LL;
	int8_t x800 = INT8_MAX;
	volatile int32_t t193 = 30145802;

    t193 = (x797==((x798%x799)==x800));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x801 = INT16_MIN;
	int32_t x802 = INT32_MAX;
	static int16_t x804 = INT16_MAX;
	volatile int32_t t194 = -121899;

    t194 = (x801==((x802%x803)==x804));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x805 = INT8_MAX;
	static uint16_t x806 = UINT16_MAX;
	static volatile int32_t x807 = -1;
	int64_t x808 = -12LL;

    t195 = (x805==((x806%x807)==x808));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x809 = INT64_MIN;
	volatile uint64_t x810 = UINT64_MAX;
	uint16_t x812 = 8U;
	int32_t t196 = -55510;

    t196 = (x809==((x810%x811)==x812));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x814 = 7U;
	volatile int16_t x816 = -1;
	static volatile int32_t t197 = 178078860;

    t197 = (x813==((x814%x815)==x816));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x817 = 4327;
	int64_t x819 = 18235094493LL;
	int8_t x820 = INT8_MIN;
	volatile int32_t t198 = 282931805;

    t198 = (x817==((x818%x819)==x820));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x821 = INT8_MIN;
	int16_t x823 = INT16_MIN;
	uint64_t x824 = 30LLU;
	int32_t t199 = -58664;

    t199 = (x821==((x822%x823)==x824));

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

