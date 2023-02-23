
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

static int16_t x1 = -1;
static volatile int8_t x7 = INT8_MIN;
int64_t x14 = INT64_MAX;
static volatile uint8_t x20 = UINT8_MAX;
uint16_t x26 = 31527U;
int16_t x27 = -1;
volatile int32_t t6 = 16;
int8_t x33 = INT8_MIN;
int8_t x35 = -1;
static uint32_t x40 = UINT32_MAX;
int32_t t11 = -107546;
static volatile int32_t x49 = INT32_MIN;
int32_t t12 = -616220;
uint16_t x53 = UINT16_MAX;
int16_t x54 = -793;
uint16_t x56 = UINT16_MAX;
static volatile uint8_t x58 = UINT8_MAX;
static int64_t x62 = INT64_MAX;
volatile uint16_t x65 = 1U;
uint64_t x67 = 10877817630479514LLU;
int8_t x68 = INT8_MAX;
volatile int32_t t17 = 8198917;
volatile int32_t t18 = 17242;
uint64_t x77 = 7992749LLU;
volatile int32_t t19 = 0;
uint8_t x81 = UINT8_MAX;
int32_t x85 = 12800378;
uint8_t x89 = 32U;
int32_t t22 = 59505890;
static int32_t x94 = INT32_MIN;
volatile int32_t t23 = -494;
uint64_t x98 = UINT64_MAX;
volatile int32_t x103 = -1;
int32_t x118 = INT32_MIN;
uint64_t x122 = 386253043503619LLU;
volatile int64_t x128 = -248319067335LL;
uint32_t x137 = UINT32_MAX;
volatile int32_t x152 = -1;
int32_t x156 = INT32_MAX;
static volatile int32_t t40 = 9384;
int32_t x168 = INT32_MIN;
uint16_t x169 = UINT16_MAX;
int16_t x172 = INT16_MIN;
volatile int32_t x178 = -1;
int64_t x183 = -100662LL;
int8_t x184 = INT8_MIN;
volatile int32_t t47 = -45978447;
static uint8_t x197 = 1U;
uint32_t x203 = 55272879U;
uint32_t x211 = 5731674U;
volatile int32_t t53 = 27;
int16_t x217 = -4411;
static uint32_t x221 = 11U;
int32_t x223 = -1;
volatile int32_t t55 = 820513;
int8_t x225 = INT8_MAX;
static int32_t t56 = 46873;
volatile int8_t x230 = INT8_MIN;
int64_t x235 = -1LL;
int16_t x237 = -8;
static uint32_t x240 = 47995U;
int32_t t60 = -10437018;
int8_t x250 = -7;
volatile uint16_t x251 = 4U;
static int8_t x259 = INT8_MIN;
volatile uint8_t x262 = UINT8_MAX;
int32_t t65 = 110;
int16_t x267 = 6121;
static volatile int32_t t67 = -172;
volatile int16_t x274 = 115;
static int32_t x276 = 6560;
volatile int32_t t69 = -5414234;
int32_t x286 = INT32_MAX;
uint64_t x289 = 69863LLU;
volatile int32_t t72 = 42;
static volatile int32_t t73 = -4971084;
static volatile int32_t x298 = INT32_MIN;
volatile uint64_t x305 = 68470LLU;
int64_t x315 = 631LL;
volatile uint64_t x316 = 61219332382517554LLU;
uint8_t x328 = 2U;
int64_t x332 = -24LL;
uint64_t x333 = 1953388501507862653LLU;
int64_t x335 = -1LL;
static volatile int32_t t83 = -52712524;
uint64_t x340 = 911405935428LLU;
int16_t x345 = -1;
int64_t x361 = INT64_MAX;
static int8_t x362 = 0;
volatile uint32_t x369 = UINT32_MAX;
volatile int16_t x370 = INT16_MAX;
uint8_t x372 = 4U;
int8_t x376 = INT8_MAX;
uint32_t x380 = 3601U;
int16_t x381 = 6543;
volatile int8_t x388 = 3;
int16_t x396 = -1;
int32_t t98 = 3418;
uint32_t x414 = 2U;
static volatile uint64_t x415 = 321442674208861424LLU;
static uint8_t x416 = UINT8_MAX;
int8_t x420 = INT8_MIN;
int32_t x426 = 15040407;
volatile int64_t x428 = -232257LL;
int8_t x430 = -1;
volatile int8_t x434 = INT8_MIN;
static int16_t x435 = INT16_MAX;
static int64_t x437 = INT64_MIN;
uint32_t x441 = 4810U;
volatile int32_t t110 = 1;
int64_t x446 = 603640553LL;
volatile int32_t t111 = 65456490;
int8_t x451 = INT8_MIN;
volatile int32_t x456 = INT32_MIN;
int32_t t113 = -265;
static volatile int32_t t114 = -3;
int32_t x476 = -1;
uint8_t x483 = 2U;
static volatile uint64_t x485 = 4LLU;
int32_t x486 = -1;
volatile int32_t x494 = INT32_MAX;
int32_t t124 = 1;
int32_t x502 = INT32_MIN;
int64_t x505 = INT64_MIN;
uint16_t x508 = 12U;
volatile int32_t t126 = -4427;
uint16_t x511 = UINT16_MAX;
volatile int32_t t128 = 11253673;
static int16_t x517 = 82;
volatile int8_t x528 = INT8_MIN;
int16_t x531 = INT16_MIN;
volatile int32_t t132 = -998;
int32_t t134 = 63;
int8_t x543 = -1;
uint32_t x548 = UINT32_MAX;
int32_t t136 = -2096;
int32_t x551 = -1;
static int32_t x555 = -1;
volatile int32_t t139 = 1940;
static int32_t x563 = INT32_MIN;
int64_t x569 = -1LL;
volatile int8_t x572 = -1;
volatile int64_t x575 = -23LL;
int8_t x583 = INT8_MIN;
static int32_t t145 = 800;
static volatile int32_t t146 = -3279617;
uint16_t x589 = 530U;
static uint32_t x590 = UINT32_MAX;
volatile int32_t x591 = INT32_MIN;
static volatile int64_t x594 = INT64_MIN;
uint64_t x606 = 3708095330998LLU;
uint32_t x607 = UINT32_MAX;
int8_t x609 = 1;
int16_t x613 = INT16_MIN;
static int8_t x615 = INT8_MIN;
uint16_t x616 = 5U;
static int16_t x617 = INT16_MIN;
int8_t x625 = INT8_MIN;
static int32_t x626 = INT32_MIN;
volatile uint32_t x632 = UINT32_MAX;
uint16_t x633 = UINT16_MAX;
static uint64_t x639 = 3881250705LLU;
int32_t t159 = -1780874;
int64_t x662 = INT64_MAX;
int64_t x671 = INT64_MAX;
static int32_t x674 = INT32_MAX;
int16_t x681 = INT16_MIN;
volatile int8_t x687 = -30;
static int8_t x688 = INT8_MIN;
int32_t x692 = -847;
int64_t x695 = INT64_MIN;
int32_t x697 = INT32_MAX;
volatile int32_t x704 = 1305;
uint8_t x711 = 1U;
int8_t x712 = -1;
volatile int32_t x728 = INT32_MIN;
int32_t t181 = 2;
int8_t x730 = -4;
uint16_t x738 = 1U;
uint64_t x745 = 10547LLU;
static volatile int32_t x746 = -31181730;
static int32_t t186 = -25112;
static int64_t x749 = INT64_MIN;
int8_t x760 = INT8_MIN;
int32_t x762 = INT32_MIN;
int8_t x764 = INT8_MIN;
static int8_t x770 = -1;
uint16_t x777 = 12U;
int64_t x778 = INT64_MIN;
int64_t x781 = INT64_MIN;
int64_t x784 = INT64_MAX;
volatile int32_t t195 = 16237;
int32_t t196 = -59220225;
uint16_t x790 = 2U;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	static volatile int64_t x3 = -1LL;
	uint32_t x4 = 20160443U;
	static int32_t t0 = 444;

    t0 = (x1<=((x2!=x3)&x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -42;
	int64_t x6 = -11840828445LL;
	volatile int16_t x8 = -227;
	int32_t t1 = -16;

    t1 = (x5<=((x6!=x7)&x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MIN;
	static uint64_t x10 = 10377481884497353LLU;
	uint16_t x11 = UINT16_MAX;
	int16_t x12 = INT16_MAX;
	int32_t t2 = 3253;

    t2 = (x9<=((x10!=x11)&x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	static volatile int16_t x15 = INT16_MIN;
	int8_t x16 = 1;
	int32_t t3 = 300988305;

    t3 = (x13<=((x14!=x15)&x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 375291LLU;
	volatile int16_t x18 = 1;
	int32_t x19 = INT32_MIN;
	int32_t t4 = 7;

    t4 = (x17<=((x18!=x19)&x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	uint64_t x22 = UINT64_MAX;
	uint16_t x23 = 16U;
	static int16_t x24 = INT16_MIN;
	int32_t t5 = 389;

    t5 = (x21<=((x22!=x23)&x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x25 = UINT64_MAX;
	static int32_t x28 = INT32_MIN;

    t6 = (x25<=((x26!=x27)&x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x29 = 38557348013LLU;
	static uint16_t x30 = 2532U;
	int16_t x31 = INT16_MAX;
	int32_t x32 = -1;
	volatile int32_t t7 = 6;

    t7 = (x29<=((x30!=x31)&x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x34 = 40U;
	int16_t x36 = INT16_MIN;
	int32_t t8 = -114627;

    t8 = (x33<=((x34!=x35)&x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	static uint64_t x38 = 1853271195LLU;
	int8_t x39 = -13;
	int32_t t9 = -49194;

    t9 = (x37<=((x38!=x39)&x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = -1;
	uint32_t x42 = 7381U;
	static int64_t x43 = -1953137LL;
	int32_t x44 = INT32_MAX;
	static volatile int32_t t10 = -3;

    t10 = (x41<=((x42!=x43)&x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 4344311991711LLU;
	static uint32_t x46 = 951148157U;
	static int32_t x47 = -1;
	uint8_t x48 = UINT8_MAX;

    t11 = (x45<=((x46!=x47)&x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x50 = INT8_MAX;
	static int16_t x51 = INT16_MIN;
	int16_t x52 = INT16_MAX;

    t12 = (x49<=((x50!=x51)&x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x55 = 2989U;
	static volatile int32_t t13 = -79638;

    t13 = (x53<=((x54!=x55)&x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 4;
	static int16_t x59 = 1696;
	int16_t x60 = -1;
	volatile int32_t t14 = -24440690;

    t14 = (x57<=((x58!=x59)&x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	int64_t x63 = -1LL;
	int32_t x64 = -1;
	volatile int32_t t15 = -231682033;

    t15 = (x61<=((x62!=x63)&x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = INT64_MIN;
	static volatile int32_t t16 = -60868499;

    t16 = (x65<=((x66!=x67)&x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	int32_t x70 = 1345;
	int32_t x71 = INT32_MIN;
	static int16_t x72 = INT16_MAX;

    t17 = (x69<=((x70!=x71)&x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	uint16_t x74 = 127U;
	int32_t x75 = INT32_MAX;
	static uint8_t x76 = 34U;

    t18 = (x73<=((x74!=x75)&x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = INT64_MIN;
	int16_t x79 = 3;
	int64_t x80 = -1LL;

    t19 = (x77<=((x78!=x79)&x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x82 = 505;
	volatile int8_t x83 = INT8_MAX;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = -421195857;

    t20 = (x81<=((x82!=x83)&x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = INT16_MIN;
	volatile uint8_t x87 = 1U;
	uint8_t x88 = 0U;
	int32_t t21 = -17040049;

    t21 = (x85<=((x86!=x87)&x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = INT32_MIN;
	int64_t x91 = INT64_MAX;
	static int8_t x92 = -1;

    t22 = (x89<=((x90!=x91)&x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 3LLU;
	int32_t x95 = -1;
	uint64_t x96 = 4235783122002913LLU;

    t23 = (x93<=((x94!=x95)&x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = UINT64_MAX;
	int16_t x99 = -1;
	uint16_t x100 = 1U;
	volatile int32_t t24 = -53410967;

    t24 = (x97<=((x98!=x99)&x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = UINT64_MAX;
	static int8_t x102 = INT8_MIN;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 38;

    t25 = (x101<=((x102!=x103)&x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	uint32_t x106 = UINT32_MAX;
	int64_t x107 = -1LL;
	volatile int16_t x108 = 0;
	int32_t t26 = 3472249;

    t26 = (x105<=((x106!=x107)&x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 341299849U;
	int64_t x110 = INT64_MIN;
	int16_t x111 = 2;
	int32_t x112 = INT32_MIN;
	static volatile int32_t t27 = 29292254;

    t27 = (x109<=((x110!=x111)&x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	uint64_t x114 = 976761315LLU;
	volatile uint16_t x115 = UINT16_MAX;
	int8_t x116 = INT8_MIN;
	int32_t t28 = -310;

    t28 = (x113<=((x114!=x115)&x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x117 = UINT8_MAX;
	int64_t x119 = -37187980721740LL;
	static volatile uint8_t x120 = 13U;
	volatile int32_t t29 = -425;

    t29 = (x117<=((x118!=x119)&x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 4035U;
	static uint64_t x123 = UINT64_MAX;
	volatile uint32_t x124 = 94U;
	int32_t t30 = 23784908;

    t30 = (x121<=((x122!=x123)&x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 5848459465924LLU;
	int16_t x126 = INT16_MIN;
	int16_t x127 = 1943;
	static int32_t t31 = 0;

    t31 = (x125<=((x126!=x127)&x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -615LL;
	static int32_t x130 = -1;
	int32_t x131 = -64133;
	static uint32_t x132 = 513U;
	volatile int32_t t32 = 1418140;

    t32 = (x129<=((x130!=x131)&x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 2228557190LLU;
	int32_t x134 = 1274;
	uint8_t x135 = 30U;
	uint8_t x136 = 29U;
	int32_t t33 = -130561;

    t33 = (x133<=((x134!=x135)&x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x138 = INT8_MIN;
	volatile int64_t x139 = -1LL;
	uint64_t x140 = UINT64_MAX;
	volatile int32_t t34 = 3108904;

    t34 = (x137<=((x138!=x139)&x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	uint32_t x142 = 23616U;
	uint8_t x143 = 11U;
	int64_t x144 = 125460879098688LL;
	volatile int32_t t35 = 85406;

    t35 = (x141<=((x142!=x143)&x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x145 = 19380867097253LLU;
	int32_t x146 = 362;
	uint8_t x147 = UINT8_MAX;
	uint64_t x148 = 1098328451LLU;
	static int32_t t36 = -53172679;

    t36 = (x145<=((x146!=x147)&x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 0U;
	int64_t x150 = 31502558LL;
	uint64_t x151 = 282698677243LLU;
	int32_t t37 = 626438;

    t37 = (x149<=((x150!=x151)&x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MAX;
	uint16_t x154 = 1504U;
	uint32_t x155 = 500269514U;
	volatile int32_t t38 = -11798;

    t38 = (x153<=((x154!=x155)&x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MAX;
	int16_t x158 = 21;
	int32_t x159 = 253966594;
	int64_t x160 = -2057532116LL;
	int32_t t39 = -8;

    t39 = (x157<=((x158!=x159)&x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = 4;
	int16_t x162 = INT16_MIN;
	volatile uint16_t x163 = 112U;
	int32_t x164 = -978026080;

    t40 = (x161<=((x162!=x163)&x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = UINT8_MAX;
	static uint16_t x166 = 115U;
	int32_t x167 = INT32_MIN;
	int32_t t41 = 157535556;

    t41 = (x165<=((x166!=x167)&x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x170 = 64136LLU;
	int64_t x171 = -1LL;
	int32_t t42 = 10570986;

    t42 = (x169<=((x170!=x171)&x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -1LL;
	int64_t x174 = INT64_MIN;
	int8_t x175 = INT8_MIN;
	int32_t x176 = -228446;
	int32_t t43 = -2249760;

    t43 = (x173<=((x174!=x175)&x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x177 = INT16_MIN;
	int8_t x179 = -1;
	int8_t x180 = -21;
	volatile int32_t t44 = 242086908;

    t44 = (x177<=((x178!=x179)&x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = UINT32_MAX;
	static uint16_t x182 = UINT16_MAX;
	int32_t t45 = 0;

    t45 = (x181<=((x182!=x183)&x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MIN;
	static int32_t x186 = INT32_MAX;
	uint32_t x187 = UINT32_MAX;
	uint64_t x188 = 2980081731943828LLU;
	volatile int32_t t46 = 1;

    t46 = (x185<=((x186!=x187)&x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = INT8_MIN;
	int16_t x190 = -1;
	static int32_t x191 = 155;
	static uint8_t x192 = 14U;

    t47 = (x189<=((x190!=x191)&x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = -641268388LL;
	int32_t x194 = 711;
	int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MAX;
	int32_t t48 = -1;

    t48 = (x193<=((x194!=x195)&x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int32_t x198 = 57;
	uint16_t x199 = 878U;
	int32_t x200 = -8;
	volatile int32_t t49 = -6451;

    t49 = (x197<=((x198!=x199)&x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 105;
	int32_t x202 = INT32_MIN;
	uint64_t x204 = UINT64_MAX;
	int32_t t50 = -12632503;

    t50 = (x201<=((x202!=x203)&x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x205 = 13U;
	int16_t x206 = INT16_MIN;
	uint16_t x207 = UINT16_MAX;
	static int64_t x208 = -33482269108LL;
	int32_t t51 = -72969990;

    t51 = (x205<=((x206!=x207)&x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	volatile uint64_t x210 = UINT64_MAX;
	volatile int16_t x212 = -5;
	volatile int32_t t52 = -6;

    t52 = (x209<=((x210!=x211)&x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MIN;
	static int16_t x215 = -68;
	static int32_t x216 = INT32_MIN;

    t53 = (x213<=((x214!=x215)&x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x218 = -1;
	uint32_t x219 = 519581806U;
	int8_t x220 = -1;
	volatile int32_t t54 = -139913;

    t54 = (x217<=((x218!=x219)&x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x222 = UINT8_MAX;
	int64_t x224 = 506175226LL;

    t55 = (x221<=((x222!=x223)&x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x226 = INT32_MAX;
	int64_t x227 = 1764239759670435LL;
	volatile uint32_t x228 = 191328U;

    t56 = (x225<=((x226!=x227)&x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	static uint64_t x231 = 115501LLU;
	static int32_t x232 = 146743339;
	int32_t t57 = -2183649;

    t57 = (x229<=((x230!=x231)&x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	uint64_t x234 = 5306LLU;
	int32_t x236 = INT32_MIN;
	int32_t t58 = 1;

    t58 = (x233<=((x234!=x235)&x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x238 = UINT16_MAX;
	uint8_t x239 = UINT8_MAX;
	int32_t t59 = 152314;

    t59 = (x237<=((x238!=x239)&x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x241 = UINT64_MAX;
	static uint64_t x242 = 4392082537LLU;
	int16_t x243 = -1;
	uint32_t x244 = UINT32_MAX;

    t60 = (x241<=((x242!=x243)&x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x245 = 1251U;
	uint32_t x246 = UINT32_MAX;
	int32_t x247 = INT32_MAX;
	static int16_t x248 = INT16_MIN;
	int32_t t61 = 25824573;

    t61 = (x245<=((x246!=x247)&x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 35U;
	int8_t x252 = 1;
	static int32_t t62 = -43837629;

    t62 = (x249<=((x250!=x251)&x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x253 = 3U;
	int64_t x254 = INT64_MIN;
	volatile uint8_t x255 = 0U;
	int32_t x256 = INT32_MIN;
	int32_t t63 = 395;

    t63 = (x253<=((x254!=x255)&x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x257 = UINT16_MAX;
	uint16_t x258 = UINT16_MAX;
	int32_t x260 = INT32_MIN;
	int32_t t64 = 402;

    t64 = (x257<=((x258!=x259)&x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = 0;
	int16_t x263 = INT16_MIN;
	int64_t x264 = INT64_MAX;

    t65 = (x261<=((x262!=x263)&x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	int8_t x266 = -1;
	int8_t x268 = 22;
	volatile int32_t t66 = -1319858;

    t66 = (x265<=((x266!=x267)&x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -55548677204423129LL;
	int8_t x270 = 27;
	int8_t x271 = INT8_MAX;
	static uint8_t x272 = 7U;

    t67 = (x269<=((x270!=x271)&x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x273 = INT32_MIN;
	int64_t x275 = -6062032316054551LL;
	int32_t t68 = 34;

    t68 = (x273<=((x274!=x275)&x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 13U;
	int16_t x278 = INT16_MAX;
	volatile uint32_t x279 = 81U;
	int8_t x280 = 20;

    t69 = (x277<=((x278!=x279)&x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 174368209369648LL;
	int64_t x282 = -31310905913059521LL;
	static int64_t x283 = INT64_MIN;
	volatile int64_t x284 = -305151051701LL;
	int32_t t70 = -414014677;

    t70 = (x281<=((x282!=x283)&x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x285 = INT32_MIN;
	int64_t x287 = -1LL;
	volatile int16_t x288 = INT16_MAX;
	volatile int32_t t71 = -1207773;

    t71 = (x285<=((x286!=x287)&x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x290 = 284146039715LLU;
	static int16_t x291 = INT16_MAX;
	static int8_t x292 = -13;

    t72 = (x289<=((x290!=x291)&x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = 1;
	uint16_t x294 = 29395U;
	static int32_t x295 = 1953;
	uint32_t x296 = UINT32_MAX;

    t73 = (x293<=((x294!=x295)&x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x297 = 108;
	uint16_t x299 = 7617U;
	int64_t x300 = INT64_MIN;
	int32_t t74 = 269685;

    t74 = (x297<=((x298!=x299)&x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x301 = INT32_MIN;
	int16_t x302 = 116;
	int8_t x303 = 30;
	int16_t x304 = INT16_MAX;
	volatile int32_t t75 = 150625241;

    t75 = (x301<=((x302!=x303)&x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x306 = -6068682130153364LL;
	int16_t x307 = INT16_MAX;
	int32_t x308 = -5;
	volatile int32_t t76 = -1;

    t76 = (x305<=((x306!=x307)&x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int16_t x309 = 27;
	int8_t x310 = INT8_MIN;
	volatile int64_t x311 = INT64_MIN;
	int64_t x312 = -1LL;
	volatile int32_t t77 = 3668530;

    t77 = (x309<=((x310!=x311)&x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	int8_t x314 = INT8_MIN;
	int32_t t78 = 26;

    t78 = (x313<=((x314!=x315)&x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x317 = -1LL;
	int8_t x318 = INT8_MAX;
	int16_t x319 = -1;
	int32_t x320 = 43297;
	static int32_t t79 = -59840;

    t79 = (x317<=((x318!=x319)&x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = 14U;
	int16_t x322 = -1;
	int8_t x323 = -1;
	int8_t x324 = -1;
	volatile int32_t t80 = 212041;

    t80 = (x321<=((x322!=x323)&x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MAX;
	static int32_t x326 = INT32_MAX;
	static int16_t x327 = 2775;
	volatile int32_t t81 = 0;

    t81 = (x325<=((x326!=x327)&x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	int64_t x330 = -15961994708604LL;
	int16_t x331 = -2330;
	static volatile int32_t t82 = -84385424;

    t82 = (x329<=((x330!=x331)&x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = INT64_MAX;
	volatile int16_t x336 = INT16_MIN;

    t83 = (x333<=((x334!=x335)&x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x337 = -1LL;
	int16_t x338 = INT16_MAX;
	int16_t x339 = INT16_MAX;
	static int32_t t84 = -64469;

    t84 = (x337<=((x338!=x339)&x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	int32_t x342 = -1303;
	int8_t x343 = INT8_MIN;
	int32_t x344 = INT32_MAX;
	volatile int32_t t85 = -233200;

    t85 = (x341<=((x342!=x343)&x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x346 = INT64_MIN;
	int8_t x347 = -1;
	static int64_t x348 = -5280055329184LL;
	int32_t t86 = 13;

    t86 = (x345<=((x346!=x347)&x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	int64_t x350 = INT64_MIN;
	uint16_t x351 = 160U;
	int64_t x352 = INT64_MIN;
	int32_t t87 = -16740;

    t87 = (x349<=((x350!=x351)&x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = 500U;
	int16_t x354 = -261;
	static int16_t x355 = -44;
	int32_t x356 = -2233868;
	volatile int32_t t88 = 1584;

    t88 = (x353<=((x354!=x355)&x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x357 = INT32_MAX;
	int32_t x358 = -363825548;
	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t89 = 0;

    t89 = (x357<=((x358!=x359)&x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x363 = 4815;
	volatile int64_t x364 = INT64_MAX;
	static int32_t t90 = 274;

    t90 = (x361<=((x362!=x363)&x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	volatile uint16_t x366 = 464U;
	int64_t x367 = -1LL;
	static int16_t x368 = INT16_MIN;
	static volatile int32_t t91 = 5518;

    t91 = (x365<=((x366!=x367)&x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x371 = 1071U;
	int32_t t92 = -215700;

    t92 = (x369<=((x370!=x371)&x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	int8_t x374 = -35;
	static volatile int32_t x375 = INT32_MAX;
	volatile int32_t t93 = 7591;

    t93 = (x373<=((x374!=x375)&x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x377 = UINT64_MAX;
	static int32_t x378 = INT32_MIN;
	int16_t x379 = -1;
	int32_t t94 = -1650280;

    t94 = (x377<=((x378!=x379)&x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x382 = INT32_MAX;
	int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MAX;
	int32_t t95 = -27;

    t95 = (x381<=((x382!=x383)&x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x385 = 0U;
	volatile int64_t x386 = 30314LL;
	uint16_t x387 = 16632U;
	int32_t t96 = 3514396;

    t96 = (x385<=((x386!=x387)&x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = UINT16_MAX;
	static int16_t x390 = INT16_MAX;
	static uint16_t x391 = UINT16_MAX;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = -7038232;

    t97 = (x389<=((x390!=x391)&x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	int64_t x394 = INT64_MAX;
	static volatile int8_t x395 = INT8_MIN;

    t98 = (x393<=((x394!=x395)&x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x397 = INT16_MAX;
	int16_t x398 = -1;
	volatile uint32_t x399 = 33U;
	volatile int16_t x400 = -1;
	static volatile int32_t t99 = -411772;

    t99 = (x397<=((x398!=x399)&x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x401 = INT16_MAX;
	uint32_t x402 = 304405U;
	static uint16_t x403 = UINT16_MAX;
	int32_t x404 = 7727449;
	int32_t t100 = 356323990;

    t100 = (x401<=((x402!=x403)&x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = 1;
	static volatile int8_t x406 = 11;
	uint16_t x407 = 1U;
	volatile int8_t x408 = 19;
	volatile int32_t t101 = 491080;

    t101 = (x405<=((x406!=x407)&x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	volatile int32_t x410 = INT32_MIN;
	static int64_t x411 = INT64_MIN;
	uint8_t x412 = 21U;
	volatile int32_t t102 = 2658;

    t102 = (x409<=((x410!=x411)&x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = 8;
	volatile int32_t t103 = -919936;

    t103 = (x413<=((x414!=x415)&x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = 530584089155095LL;
	int16_t x418 = INT16_MIN;
	int16_t x419 = INT16_MIN;
	volatile int32_t t104 = -453;

    t104 = (x417<=((x418!=x419)&x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = UINT64_MAX;
	volatile int8_t x422 = -58;
	int16_t x423 = 14;
	static uint64_t x424 = UINT64_MAX;
	volatile int32_t t105 = 28;

    t105 = (x421<=((x422!=x423)&x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = 10;
	volatile int16_t x427 = -11059;
	static volatile int32_t t106 = 26800690;

    t106 = (x425<=((x426!=x427)&x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MAX;
	int8_t x431 = INT8_MAX;
	volatile int32_t x432 = INT32_MAX;
	volatile int32_t t107 = -61701274;

    t107 = (x429<=((x430!=x431)&x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = -13;
	int32_t x436 = -1;
	static volatile int32_t t108 = 1;

    t108 = (x433<=((x434!=x435)&x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x438 = INT16_MIN;
	int64_t x439 = INT64_MIN;
	int64_t x440 = INT64_MIN;
	volatile int32_t t109 = 3;

    t109 = (x437<=((x438!=x439)&x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x442 = INT32_MIN;
	volatile int8_t x443 = INT8_MIN;
	uint64_t x444 = 116LLU;

    t110 = (x441<=((x442!=x443)&x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = -1;
	int64_t x447 = 76716764174666LL;
	int16_t x448 = -90;

    t111 = (x445<=((x446!=x447)&x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MIN;
	int16_t x450 = 113;
	int16_t x452 = -1;
	static volatile int32_t t112 = 230;

    t112 = (x449<=((x450!=x451)&x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -6406765979715LL;
	uint16_t x454 = 0U;
	int32_t x455 = INT32_MIN;

    t113 = (x453<=((x454!=x455)&x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -1421;
	int8_t x458 = -1;
	volatile int8_t x459 = INT8_MIN;
	volatile int16_t x460 = -1;

    t114 = (x457<=((x458!=x459)&x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	int8_t x462 = INT8_MIN;
	volatile uint64_t x463 = 35610718232LLU;
	volatile int8_t x464 = INT8_MIN;
	volatile int32_t t115 = 3463881;

    t115 = (x461<=((x462!=x463)&x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 41U;
	volatile uint64_t x466 = 65456LLU;
	static int8_t x467 = INT8_MIN;
	static uint32_t x468 = 8U;
	volatile int32_t t116 = -11;

    t116 = (x465<=((x466!=x467)&x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = -1LL;
	int16_t x470 = INT16_MAX;
	int64_t x471 = INT64_MAX;
	int32_t x472 = INT32_MAX;
	volatile int32_t t117 = -8038;

    t117 = (x469<=((x470!=x471)&x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x473 = INT64_MIN;
	static int16_t x474 = INT16_MIN;
	int16_t x475 = INT16_MIN;
	int32_t t118 = 138539;

    t118 = (x473<=((x474!=x475)&x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	int8_t x478 = INT8_MAX;
	int16_t x479 = INT16_MAX;
	int32_t x480 = -1;
	static volatile int32_t t119 = 666737026;

    t119 = (x477<=((x478!=x479)&x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MIN;
	int16_t x482 = INT16_MAX;
	int16_t x484 = INT16_MIN;
	volatile int32_t t120 = -11429;

    t120 = (x481<=((x482!=x483)&x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x487 = 5LL;
	int16_t x488 = -1;
	volatile int32_t t121 = 502201;

    t121 = (x485<=((x486!=x487)&x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = -7453046LL;
	uint64_t x490 = UINT64_MAX;
	int32_t x491 = 2426396;
	int8_t x492 = INT8_MAX;
	volatile int32_t t122 = -503906395;

    t122 = (x489<=((x490!=x491)&x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	uint8_t x495 = UINT8_MAX;
	int64_t x496 = INT64_MIN;
	int32_t t123 = 2;

    t123 = (x493<=((x494!=x495)&x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x497 = UINT32_MAX;
	int8_t x498 = INT8_MIN;
	static uint64_t x499 = 774956630512036428LLU;
	uint8_t x500 = 72U;

    t124 = (x497<=((x498!=x499)&x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = INT32_MIN;
	volatile int8_t x503 = -1;
	int16_t x504 = -1;
	volatile int32_t t125 = 17219113;

    t125 = (x501<=((x502!=x503)&x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x506 = 61014LLU;
	uint64_t x507 = 137384759560447LLU;

    t126 = (x505<=((x506!=x507)&x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 61LLU;
	int16_t x510 = 10;
	volatile int64_t x512 = INT64_MIN;
	int32_t t127 = -13;

    t127 = (x509<=((x510!=x511)&x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = INT32_MIN;
	uint16_t x514 = 34U;
	static volatile uint16_t x515 = 1U;
	static int8_t x516 = 1;

    t128 = (x513<=((x514!=x515)&x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x518 = 8U;
	volatile int16_t x519 = INT16_MIN;
	uint32_t x520 = 2064997146U;
	volatile int32_t t129 = -1881;

    t129 = (x517<=((x518!=x519)&x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int32_t x521 = -1;
	static volatile int32_t x522 = -2269;
	int8_t x523 = INT8_MAX;
	volatile int16_t x524 = 2284;
	int32_t t130 = 1;

    t130 = (x521<=((x522!=x523)&x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	uint8_t x526 = UINT8_MAX;
	static int16_t x527 = -1;
	int32_t t131 = 48128926;

    t131 = (x525<=((x526!=x527)&x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = INT32_MAX;
	int8_t x530 = INT8_MAX;
	volatile uint32_t x532 = UINT32_MAX;

    t132 = (x529<=((x530!=x531)&x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x533 = -1;
	uint64_t x534 = UINT64_MAX;
	static int8_t x535 = 10;
	uint32_t x536 = UINT32_MAX;
	volatile int32_t t133 = 1180383;

    t133 = (x533<=((x534!=x535)&x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MIN;
	uint8_t x538 = UINT8_MAX;
	int8_t x539 = -14;
	static int32_t x540 = -16158;

    t134 = (x537<=((x538!=x539)&x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x541 = 2078601205444555LLU;
	static uint64_t x542 = 44397675327LLU;
	volatile int32_t x544 = INT32_MAX;
	int32_t t135 = 368;

    t135 = (x541<=((x542!=x543)&x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	volatile int32_t x546 = INT32_MIN;
	static int32_t x547 = INT32_MAX;

    t136 = (x545<=((x546!=x547)&x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = 6;
	uint64_t x550 = 109360516235801LLU;
	int16_t x552 = INT16_MAX;
	int32_t t137 = -4439331;

    t137 = (x549<=((x550!=x551)&x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 7U;
	uint16_t x554 = 5647U;
	volatile uint32_t x556 = UINT32_MAX;
	int32_t t138 = -326139;

    t138 = (x553<=((x554!=x555)&x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = -1;
	int32_t x558 = INT32_MIN;
	static int32_t x559 = INT32_MIN;
	uint64_t x560 = 218583649LLU;

    t139 = (x557<=((x558!=x559)&x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x561 = INT64_MIN;
	int16_t x562 = INT16_MAX;
	static int8_t x564 = INT8_MIN;
	static int32_t t140 = 3;

    t140 = (x561<=((x562!=x563)&x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x565 = UINT64_MAX;
	int8_t x566 = 6;
	volatile int64_t x567 = 228LL;
	uint64_t x568 = 33191456422119LLU;
	volatile int32_t t141 = -7;

    t141 = (x565<=((x566!=x567)&x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x570 = 1028551251;
	int8_t x571 = INT8_MIN;
	int32_t t142 = -209920599;

    t142 = (x569<=((x570!=x571)&x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 389584847U;
	volatile uint32_t x574 = 97U;
	int16_t x576 = -1;
	volatile int32_t t143 = -3;

    t143 = (x573<=((x574!=x575)&x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x577 = 6028143259708343904LLU;
	uint16_t x578 = 57U;
	int32_t x579 = INT32_MIN;
	uint16_t x580 = UINT16_MAX;
	int32_t t144 = -164818;

    t144 = (x577<=((x578!=x579)&x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 7949332U;
	int16_t x582 = INT16_MIN;
	volatile uint64_t x584 = UINT64_MAX;

    t145 = (x581<=((x582!=x583)&x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 679U;
	volatile uint16_t x586 = 45U;
	volatile uint64_t x587 = 26050834233627LLU;
	int8_t x588 = INT8_MIN;

    t146 = (x585<=((x586!=x587)&x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x592 = 2U;
	volatile int32_t t147 = -1;

    t147 = (x589<=((x590!=x591)&x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	static int8_t x595 = INT8_MAX;
	int8_t x596 = 3;
	int32_t t148 = -1020801868;

    t148 = (x593<=((x594!=x595)&x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -1;
	int16_t x598 = 1;
	volatile int64_t x599 = INT64_MAX;
	static int64_t x600 = INT64_MIN;
	int32_t t149 = 0;

    t149 = (x597<=((x598!=x599)&x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x601 = 0;
	volatile uint64_t x602 = 24LLU;
	int16_t x603 = -1;
	int32_t x604 = 77118;
	int32_t t150 = -2572242;

    t150 = (x601<=((x602!=x603)&x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MAX;
	uint64_t x608 = 1868276458115LLU;
	static volatile int32_t t151 = -3021;

    t151 = (x605<=((x606!=x607)&x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x610 = 63788LL;
	volatile int16_t x611 = 0;
	volatile int8_t x612 = 21;
	int32_t t152 = -703022;

    t152 = (x609<=((x610!=x611)&x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x614 = UINT64_MAX;
	static volatile int32_t t153 = 2;

    t153 = (x613<=((x614!=x615)&x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x618 = 11892123415443LLU;
	int32_t x619 = INT32_MAX;
	static volatile int64_t x620 = INT64_MAX;
	static int32_t t154 = -2488455;

    t154 = (x617<=((x618!=x619)&x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	int64_t x622 = 15582LL;
	int8_t x623 = INT8_MIN;
	uint32_t x624 = UINT32_MAX;
	volatile int32_t t155 = -547264;

    t155 = (x621<=((x622!=x623)&x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x627 = INT32_MIN;
	uint32_t x628 = 1096694992U;
	volatile int32_t t156 = -35;

    t156 = (x625<=((x626!=x627)&x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 1U;
	uint64_t x630 = 1985119850LLU;
	int32_t x631 = INT32_MIN;
	volatile int32_t t157 = -71;

    t157 = (x629<=((x630!=x631)&x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x634 = -97925;
	int64_t x635 = -24298673LL;
	int64_t x636 = INT64_MIN;
	volatile int32_t t158 = 227;

    t158 = (x633<=((x634!=x635)&x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = UINT32_MAX;
	static int64_t x638 = INT64_MIN;
	int16_t x640 = INT16_MIN;

    t159 = (x637<=((x638!=x639)&x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = 1;
	volatile int32_t x642 = INT32_MIN;
	int32_t x643 = -1;
	int16_t x644 = 1;
	int32_t t160 = 1;

    t160 = (x641<=((x642!=x643)&x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x645 = INT32_MIN;
	uint8_t x646 = 11U;
	int16_t x647 = INT16_MAX;
	int8_t x648 = INT8_MIN;
	int32_t t161 = 222038;

    t161 = (x645<=((x646!=x647)&x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -254149067882LL;
	int8_t x650 = INT8_MIN;
	int64_t x651 = 3384934LL;
	uint32_t x652 = 32U;
	volatile int32_t t162 = -2063;

    t162 = (x649<=((x650!=x651)&x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -1;
	uint8_t x654 = 18U;
	static int8_t x655 = 33;
	static volatile uint32_t x656 = UINT32_MAX;
	volatile int32_t t163 = -1638;

    t163 = (x653<=((x654!=x655)&x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MIN;
	volatile uint64_t x658 = 1831051180LLU;
	static int16_t x659 = -227;
	static int32_t x660 = INT32_MAX;
	volatile int32_t t164 = -6;

    t164 = (x657<=((x658!=x659)&x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x661 = INT64_MIN;
	int8_t x663 = INT8_MAX;
	int64_t x664 = 546055199785932LL;
	int32_t t165 = -15211;

    t165 = (x661<=((x662!=x663)&x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x665 = -10;
	uint16_t x666 = 2U;
	int8_t x667 = 0;
	int16_t x668 = 6239;
	volatile int32_t t166 = -51615254;

    t166 = (x665<=((x666!=x667)&x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x669 = INT8_MIN;
	uint8_t x670 = UINT8_MAX;
	volatile int32_t x672 = INT32_MAX;
	int32_t t167 = 130229604;

    t167 = (x669<=((x670!=x671)&x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x673 = -1LL;
	uint16_t x675 = UINT16_MAX;
	int64_t x676 = INT64_MAX;
	static volatile int32_t t168 = -29201;

    t168 = (x673<=((x674!=x675)&x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x677 = UINT16_MAX;
	int64_t x678 = INT64_MIN;
	int32_t x679 = INT32_MIN;
	int8_t x680 = -61;
	volatile int32_t t169 = -102;

    t169 = (x677<=((x678!=x679)&x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x682 = INT16_MIN;
	uint32_t x683 = 1190U;
	static volatile uint16_t x684 = 10U;
	static volatile int32_t t170 = -693914755;

    t170 = (x681<=((x682!=x683)&x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -14;
	volatile int8_t x686 = -1;
	int32_t t171 = 1892912;

    t171 = (x685<=((x686!=x687)&x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x689 = 9036U;
	static uint32_t x690 = UINT32_MAX;
	uint8_t x691 = 3U;
	int32_t t172 = -38412560;

    t172 = (x689<=((x690!=x691)&x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = INT64_MIN;
	int64_t x694 = 1LL;
	int8_t x696 = -7;
	static volatile int32_t t173 = 41635129;

    t173 = (x693<=((x694!=x695)&x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x698 = INT64_MIN;
	volatile uint8_t x699 = UINT8_MAX;
	static int16_t x700 = -1;
	static volatile int32_t t174 = -1198;

    t174 = (x697<=((x698!=x699)&x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 81716044514594LLU;
	int64_t x702 = -40659467041795707LL;
	int32_t x703 = 648;
	volatile int32_t t175 = 3700320;

    t175 = (x701<=((x702!=x703)&x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -1LL;
	uint64_t x706 = 4223421614943LLU;
	int16_t x707 = INT16_MIN;
	int32_t x708 = -65135700;
	volatile int32_t t176 = 912;

    t176 = (x705<=((x706!=x707)&x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MAX;
	uint32_t x710 = UINT32_MAX;
	int32_t t177 = -25089;

    t177 = (x709<=((x710!=x711)&x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x713 = -1;
	int32_t x714 = 92;
	volatile int32_t x715 = INT32_MIN;
	int8_t x716 = INT8_MIN;
	int32_t t178 = -4543605;

    t178 = (x713<=((x714!=x715)&x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x717 = INT64_MIN;
	static int8_t x718 = -1;
	uint32_t x719 = 654072577U;
	int16_t x720 = INT16_MIN;
	volatile int32_t t179 = 198;

    t179 = (x717<=((x718!=x719)&x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 504U;
	int8_t x722 = INT8_MAX;
	static int64_t x723 = -139LL;
	int8_t x724 = INT8_MIN;
	volatile int32_t t180 = 357438;

    t180 = (x721<=((x722!=x723)&x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 9U;
	int64_t x726 = -207946386242565226LL;
	int32_t x727 = 2742138;

    t181 = (x725<=((x726!=x727)&x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = 23289U;
	int16_t x731 = -2;
	int32_t x732 = -56582058;
	int32_t t182 = 101323;

    t182 = (x729<=((x730!=x731)&x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = 3438U;
	volatile int64_t x734 = INT64_MIN;
	static int8_t x735 = -7;
	int8_t x736 = INT8_MAX;
	int32_t t183 = 0;

    t183 = (x733<=((x734!=x735)&x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -37LL;
	volatile uint32_t x739 = 518U;
	int16_t x740 = INT16_MAX;
	int32_t t184 = -2128737;

    t184 = (x737<=((x738!=x739)&x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = UINT8_MAX;
	int32_t x742 = INT32_MAX;
	int8_t x743 = -1;
	int16_t x744 = -28;
	int32_t t185 = 390476;

    t185 = (x741<=((x742!=x743)&x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x747 = -31;
	static uint64_t x748 = 272122LLU;

    t186 = (x745<=((x746!=x747)&x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x750 = INT16_MIN;
	int32_t x751 = INT32_MIN;
	static int16_t x752 = -511;
	int32_t t187 = 2964346;

    t187 = (x749<=((x750!=x751)&x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -4;
	int64_t x754 = INT64_MIN;
	uint16_t x755 = 53U;
	uint64_t x756 = UINT64_MAX;
	volatile int32_t t188 = -946761073;

    t188 = (x753<=((x754!=x755)&x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 6146501LLU;
	int64_t x758 = 3LL;
	uint32_t x759 = UINT32_MAX;
	int32_t t189 = -9362553;

    t189 = (x757<=((x758!=x759)&x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	int32_t x763 = -98114028;
	volatile int32_t t190 = 4;

    t190 = (x761<=((x762!=x763)&x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x765 = INT8_MIN;
	int64_t x766 = 1214460LL;
	static volatile uint32_t x767 = 2901U;
	int32_t x768 = -20333718;
	int32_t t191 = -296058758;

    t191 = (x765<=((x766!=x767)&x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MAX;
	static uint16_t x771 = UINT16_MAX;
	volatile int16_t x772 = INT16_MIN;
	int32_t t192 = -64;

    t192 = (x769<=((x770!=x771)&x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x773 = INT8_MIN;
	int64_t x774 = 1096544224410LL;
	int16_t x775 = -1;
	int16_t x776 = -1;
	static volatile int32_t t193 = -177324;

    t193 = (x773<=((x774!=x775)&x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x779 = -1LL;
	static int16_t x780 = -687;
	static int32_t t194 = 601;

    t194 = (x777<=((x778!=x779)&x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x782 = 840204936640LLU;
	int16_t x783 = 0;

    t195 = (x781<=((x782!=x783)&x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x785 = 12U;
	int16_t x786 = 0;
	static int64_t x787 = -1LL;
	static uint16_t x788 = 11861U;

    t196 = (x785<=((x786!=x787)&x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = INT64_MIN;
	uint8_t x791 = 0U;
	uint16_t x792 = 13735U;
	static int32_t t197 = 8;

    t197 = (x789<=((x790!=x791)&x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -1;
	static int32_t x794 = INT32_MIN;
	int8_t x795 = INT8_MIN;
	volatile int32_t x796 = INT32_MIN;
	int32_t t198 = 5145370;

    t198 = (x793<=((x794!=x795)&x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 3660568004873010LLU;
	volatile uint8_t x798 = 25U;
	static int32_t x799 = 171;
	static int64_t x800 = -3535260533336LL;
	volatile int32_t t199 = -21;

    t199 = (x797<=((x798!=x799)&x800));

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

