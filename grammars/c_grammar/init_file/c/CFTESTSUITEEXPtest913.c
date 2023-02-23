
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

int8_t x3 = -53;
int64_t x4 = -299712720786LL;
int32_t t1 = 643704364;
volatile int32_t x9 = INT32_MIN;
static int32_t t2 = INT32_MIN;
static int8_t x21 = INT8_MIN;
int32_t t5 = -258616;
uint16_t x30 = 333U;
int32_t t7 = -13099675;
volatile int64_t t8 = 57216LL;
volatile uint16_t x40 = 8U;
int16_t x44 = 36;
int32_t t11 = 4;
int32_t t12 = -3168;
uint8_t x54 = UINT8_MAX;
uint8_t x58 = 15U;
uint16_t x64 = 80U;
int32_t t16 = -99710634;
uint64_t x73 = 102273LLU;
static uint16_t x76 = 0U;
volatile int32_t t20 = -161287;
static uint64_t x88 = UINT64_MAX;
int64_t x90 = INT64_MIN;
int64_t t22 = 714017538739276LL;
int32_t x97 = INT32_MIN;
int8_t x100 = -5;
int8_t x104 = 3;
static volatile int64_t t25 = INT64_MIN;
volatile int32_t t27 = 0;
uint16_t x113 = UINT16_MAX;
int32_t x117 = 1;
int64_t x119 = INT64_MAX;
static int64_t x125 = -890LL;
int32_t x132 = -22323;
static int32_t t32 = 3582;
volatile uint32_t x139 = 1934277U;
volatile int32_t x143 = -507;
int8_t x145 = INT8_MIN;
int64_t x146 = -1LL;
static int8_t x150 = 0;
uint64_t x151 = UINT64_MAX;
int16_t x162 = INT16_MIN;
int32_t x165 = INT32_MIN;
volatile int32_t t40 = INT32_MIN;
uint64_t t41 = 205LLU;
uint32_t x175 = 11U;
int32_t t43 = -3;
static int32_t x182 = INT32_MIN;
int8_t x196 = -1;
uint32_t t47 = UINT32_MAX;
int32_t x200 = -1;
uint16_t x203 = 2267U;
int32_t x207 = INT32_MIN;
int32_t x208 = INT32_MIN;
int32_t t50 = 0;
int8_t x212 = INT8_MIN;
uint16_t x216 = UINT16_MAX;
volatile int32_t x217 = INT32_MIN;
int32_t x219 = INT32_MIN;
uint8_t x220 = 1U;
uint64_t x223 = 14363893LLU;
static uint8_t x226 = UINT8_MAX;
volatile int64_t x233 = INT64_MAX;
int16_t x241 = -43;
int64_t x242 = INT64_MIN;
int16_t x244 = INT16_MAX;
static int16_t x247 = -1;
int32_t t60 = -93245191;
int8_t x250 = INT8_MIN;
int8_t x252 = 1;
static volatile uint64_t x256 = UINT64_MAX;
int64_t t62 = INT64_MAX;
uint64_t x263 = UINT64_MAX;
static volatile int32_t t65 = -418;
volatile int8_t x281 = -47;
static int32_t x282 = INT32_MAX;
int32_t x284 = -1;
int32_t x293 = -6472331;
int32_t x296 = INT32_MAX;
int8_t x300 = -2;
volatile int64_t x302 = -1456977685677068LL;
volatile int16_t x310 = 0;
int8_t x336 = INT8_MIN;
int64_t x342 = 1691LL;
int64_t t84 = INT64_MIN;
int16_t x347 = INT16_MAX;
int64_t x349 = 1814424809LL;
static uint64_t x354 = UINT64_MAX;
static volatile int32_t t88 = 9;
uint8_t x363 = 1U;
int64_t x367 = INT64_MIN;
int32_t x368 = -2485;
volatile uint8_t x370 = 8U;
static uint16_t x375 = 1U;
volatile int32_t t92 = -3;
uint32_t x388 = 724188U;
int32_t x389 = -1;
uint64_t x390 = UINT64_MAX;
static int64_t x391 = 40263673340LL;
volatile int32_t x392 = -40288077;
static volatile int64_t t97 = -168416LL;
int32_t x399 = -1;
uint64_t x401 = 460993850092LLU;
uint64_t t99 = 423681289219761096LLU;
uint64_t x415 = 31422670493357076LLU;
int16_t x419 = INT16_MIN;
volatile int32_t t103 = 56;
uint32_t x424 = 5U;
volatile int16_t x426 = INT16_MIN;
int8_t x430 = INT8_MAX;
static volatile uint8_t x432 = 2U;
volatile int32_t t106 = -51090183;
int64_t x440 = INT64_MIN;
static int32_t x441 = 461684;
uint64_t x449 = 11LLU;
int32_t x452 = 55331227;
uint64_t t111 = 420964597018411LLU;
int32_t x457 = INT32_MIN;
volatile int32_t t115 = 105719387;
uint64_t x474 = 63945LLU;
volatile int32_t t119 = 745994529;
volatile int64_t x490 = INT64_MIN;
int64_t x495 = 138527LL;
int64_t x497 = -1LL;
int64_t t122 = 181267620LL;
int32_t x502 = -143973103;
static uint8_t x506 = 1U;
volatile uint32_t t124 = 816U;
uint64_t x513 = 6762116LLU;
static int8_t x517 = 0;
uint64_t x522 = UINT64_MAX;
static int16_t x526 = INT16_MAX;
int32_t t129 = -11108647;
uint32_t x533 = 89U;
int64_t x539 = INT64_MAX;
volatile uint32_t t132 = 1719571499U;
volatile int64_t x541 = -361586375609857533LL;
uint16_t x543 = UINT16_MAX;
int8_t x549 = INT8_MIN;
static int8_t x550 = 2;
volatile int8_t x551 = -1;
volatile int32_t t135 = 11996;
int32_t x553 = 3;
int16_t x554 = -1;
volatile uint16_t x562 = 880U;
static int32_t x563 = -1;
int64_t x567 = INT64_MAX;
uint8_t x568 = 10U;
uint8_t x572 = 24U;
static int32_t t141 = 2834;
int16_t x577 = INT16_MIN;
static int16_t x578 = 1;
uint32_t x579 = 8084281U;
int64_t x580 = 1LL;
volatile int32_t x587 = INT32_MIN;
static volatile uint8_t x588 = 0U;
volatile int8_t x601 = INT8_MAX;
volatile int64_t x610 = -1LL;
int64_t x614 = INT64_MIN;
volatile int32_t x618 = INT32_MIN;
static volatile int32_t t152 = -22271120;
int32_t t153 = INT32_MAX;
uint32_t x628 = 125077855U;
volatile int32_t t157 = -3540431;
int16_t x641 = INT16_MIN;
int32_t x647 = INT32_MAX;
int32_t x648 = INT32_MAX;
int64_t t161 = -467179385228LL;
int8_t x657 = INT8_MIN;
int8_t x663 = INT8_MIN;
int16_t x664 = INT16_MIN;
int32_t t163 = INT32_MIN;
volatile int64_t t164 = 51167467LL;
volatile int8_t x674 = 2;
static int64_t x681 = INT64_MAX;
int64_t t167 = INT64_MAX;
volatile int32_t t168 = -6669;
volatile int16_t x690 = INT16_MIN;
int16_t x693 = INT16_MIN;
int8_t x695 = 43;
int32_t x705 = INT32_MIN;
int16_t x711 = -1;
static uint8_t x716 = 3U;
volatile uint8_t x717 = 7U;
volatile int64_t x718 = -1LL;
static volatile int32_t t177 = 745259;
uint64_t x733 = 87821761706LLU;
int32_t t181 = 185891;
static int16_t x742 = -2397;
int32_t x744 = INT32_MIN;
int8_t x747 = INT8_MIN;
int8_t x757 = -1;
uint16_t x759 = 22536U;
volatile uint32_t x760 = UINT32_MAX;
volatile int32_t x767 = INT32_MAX;
int32_t x773 = INT32_MIN;
static volatile int32_t t190 = -4320754;
int64_t x779 = 16594353LL;
uint8_t x781 = 8U;
int8_t x783 = INT8_MIN;
int32_t x784 = INT32_MIN;
static int8_t x788 = -1;
int32_t t193 = 0;
uint32_t x789 = 10359444U;
uint8_t x791 = UINT8_MAX;
int8_t x794 = -1;


void f0(void) {
    	uint16_t x1 = 3747U;
	uint8_t x2 = 16U;
	int32_t t0 = 957;

    t0 = (x1*((x2%x3)<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 1162;
	uint16_t x6 = 1807U;
	volatile int64_t x7 = INT64_MIN;
	int64_t x8 = -59153840548243LL;

    t1 = (x5*((x6%x7)<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x10 = -1996;
	uint8_t x11 = 2U;
	int32_t x12 = 5186231;

    t2 = (x9*((x10%x11)<=x12));

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	uint64_t x14 = 69922971274786190LLU;
	uint8_t x15 = 11U;
	uint64_t x16 = 42300583LLU;
	volatile int32_t t3 = INT32_MIN;

    t3 = (x13*((x14%x15)<=x16));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	uint16_t x18 = 151U;
	static int16_t x19 = INT16_MIN;
	volatile int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 0;

    t4 = (x17*((x18%x19)<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x22 = 59464129134367884LLU;
	volatile int32_t x23 = INT32_MIN;
	static uint16_t x24 = 25U;

    t5 = (x21*((x22%x23)<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	static int32_t x26 = INT32_MAX;
	int64_t x27 = -1LL;
	uint32_t x28 = UINT32_MAX;
	int32_t t6 = INT32_MAX;

    t6 = (x25*((x26%x27)<=x28));

    if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 498;
	static int8_t x31 = -1;
	int8_t x32 = INT8_MIN;

    t7 = (x29*((x30%x31)<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	int32_t x34 = INT32_MAX;
	int8_t x35 = -1;
	int8_t x36 = INT8_MIN;

    t8 = (x33*((x34%x35)<=x36));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x37 = 5338764141023110375LLU;
	uint64_t x38 = UINT64_MAX;
	int32_t x39 = INT32_MIN;
	uint64_t t9 = 609087132902761069LLU;

    t9 = (x37*((x38%x39)<=x40));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 101U;
	static uint8_t x42 = 22U;
	int8_t x43 = INT8_MAX;
	uint32_t t10 = 1069370701U;

    t10 = (x41*((x42%x43)<=x44));

    if (t10 != 101U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -1;
	int32_t x46 = INT32_MIN;
	volatile int8_t x47 = -15;
	static uint64_t x48 = 13890343713251LLU;

    t11 = (x45*((x46%x47)<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = 1;
	int16_t x50 = INT16_MAX;
	volatile uint16_t x51 = 8468U;
	int64_t x52 = INT64_MAX;

    t12 = (x49*((x50%x51)<=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	static volatile uint8_t x55 = 5U;
	volatile uint8_t x56 = UINT8_MAX;
	volatile int64_t t13 = INT64_MIN;

    t13 = (x53*((x54%x55)<=x56));

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	int16_t x59 = -1;
	int32_t x60 = 128686;
	volatile int32_t t14 = -4459352;

    t14 = (x57*((x58%x59)<=x60));

    if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 91LLU;
	int16_t x62 = -150;
	int8_t x63 = -1;
	static volatile uint64_t t15 = 5LLU;

    t15 = (x61*((x62%x63)<=x64));

    if (t15 != 91LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MAX;
	volatile int32_t x66 = -480970;
	static int32_t x67 = INT32_MIN;
	static volatile int32_t x68 = INT32_MAX;

    t16 = (x65*((x66%x67)<=x68));

    if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = 0;
	static int8_t x70 = 0;
	volatile int16_t x71 = INT16_MAX;
	uint32_t x72 = 0U;
	static volatile int32_t t17 = 1;

    t17 = (x69*((x70%x71)<=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x74 = -590196388741LL;
	int16_t x75 = -13;
	volatile uint64_t t18 = 29200031LLU;

    t18 = (x73*((x74%x75)<=x76));

    if (t18 != 102273LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x77 = UINT8_MAX;
	volatile uint16_t x78 = 10437U;
	int64_t x79 = INT64_MAX;
	int8_t x80 = -44;
	int32_t t19 = -6;

    t19 = (x77*((x78%x79)<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 62U;
	volatile int8_t x82 = INT8_MAX;
	int32_t x83 = INT32_MAX;
	int64_t x84 = 47051LL;

    t20 = (x81*((x82%x83)<=x84));

    if (t20 != 62) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -15;
	static int64_t x86 = -254388740LL;
	static volatile int64_t x87 = INT64_MAX;
	static int32_t t21 = 580;

    t21 = (x85*((x86%x87)<=x88));

    if (t21 != -15) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = -1LL;
	volatile int16_t x91 = INT16_MIN;
	static int16_t x92 = -1;

    t22 = (x89*((x90%x91)<=x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = 1;
	int32_t x94 = INT32_MAX;
	int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MIN;
	int32_t t23 = -3;

    t23 = (x93*((x94%x95)<=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x98 = 2932343971077LLU;
	uint32_t x99 = 53U;
	volatile int32_t t24 = INT32_MIN;

    t24 = (x97*((x98%x99)<=x100));

    if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	int64_t x102 = -1LL;
	static int16_t x103 = INT16_MIN;

    t25 = (x101*((x102%x103)<=x104));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 3061599913LLU;
	int8_t x106 = 1;
	volatile int16_t x107 = INT16_MIN;
	uint16_t x108 = UINT16_MAX;
	static volatile uint64_t t26 = 11367331654067LLU;

    t26 = (x105*((x106%x107)<=x108));

    if (t26 != 3061599913LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	int64_t x110 = 179LL;
	int64_t x111 = -8190LL;
	static int8_t x112 = INT8_MIN;

    t27 = (x109*((x110%x111)<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x114 = 2596735058LLU;
	static int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MIN;
	int32_t t28 = -29343;

    t28 = (x113*((x114%x115)<=x116));

    if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x118 = 2U;
	uint16_t x120 = UINT16_MAX;
	int32_t t29 = -6566;

    t29 = (x117*((x118%x119)<=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -39;
	uint64_t x122 = 20117883LLU;
	uint64_t x123 = 6350013800481735181LLU;
	volatile uint64_t x124 = 670079887740311607LLU;
	volatile int32_t t30 = -1;

    t30 = (x121*((x122%x123)<=x124));

    if (t30 != -39) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x126 = INT32_MIN;
	uint8_t x127 = UINT8_MAX;
	static int8_t x128 = 18;
	volatile int64_t t31 = 959763463LL;

    t31 = (x125*((x126%x127)<=x128));

    if (t31 != -890LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x129 = 2038U;
	int8_t x130 = INT8_MAX;
	int8_t x131 = INT8_MIN;

    t32 = (x129*((x130%x131)<=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = 33451967;
	int8_t x138 = 20;
	uint16_t x140 = UINT16_MAX;
	int32_t t33 = -12670;

    t33 = (x137*((x138%x139)<=x140));

    if (t33 != 33451967) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x141 = 25900U;
	static int32_t x142 = INT32_MAX;
	uint32_t x144 = 36852U;
	static volatile uint32_t t34 = 31U;

    t34 = (x141*((x142%x143)<=x144));

    if (t34 != 25900U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x147 = INT8_MIN;
	uint64_t x148 = UINT64_MAX;
	volatile int32_t t35 = -643;

    t35 = (x145*((x146%x147)<=x148));

    if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x149 = 155170444351LLU;
	int32_t x152 = -1;
	uint64_t t36 = 106270639660574LLU;

    t36 = (x149*((x150%x151)<=x152));

    if (t36 != 155170444351LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = 1;
	static int32_t x154 = -1;
	int8_t x155 = INT8_MIN;
	int32_t x156 = INT32_MAX;
	volatile int32_t t37 = -40238;

    t37 = (x153*((x154%x155)<=x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x157 = INT32_MIN;
	int16_t x158 = INT16_MIN;
	volatile int16_t x159 = INT16_MAX;
	int16_t x160 = -1;
	volatile int32_t t38 = INT32_MIN;

    t38 = (x157*((x158%x159)<=x160));

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x161 = -3;
	uint32_t x163 = UINT32_MAX;
	uint8_t x164 = UINT8_MAX;
	int32_t t39 = -31032;

    t39 = (x161*((x162%x163)<=x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x166 = 59297655LLU;
	static uint16_t x167 = 634U;
	int32_t x168 = INT32_MIN;

    t40 = (x165*((x166%x167)<=x168));

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x169 = 35200LLU;
	int64_t x170 = INT64_MAX;
	static int64_t x171 = INT64_MAX;
	int32_t x172 = INT32_MIN;

    t41 = (x169*((x170%x171)<=x172));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x173 = 131U;
	int16_t x174 = INT16_MIN;
	int32_t x176 = INT32_MAX;
	int32_t t42 = 152930;

    t42 = (x173*((x174%x175)<=x176));

    if (t42 != 131) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x177 = 35U;
	int64_t x178 = INT64_MAX;
	int16_t x179 = INT16_MIN;
	int64_t x180 = 3226816141387LL;

    t43 = (x177*((x178%x179)<=x180));

    if (t43 != 35) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint32_t x181 = UINT32_MAX;
	uint32_t x183 = 145092U;
	volatile int64_t x184 = -99017740366555134LL;
	volatile uint32_t t44 = 1237336411U;

    t44 = (x181*((x182%x183)<=x184));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint8_t x185 = 28U;
	volatile uint32_t x186 = 147U;
	static int64_t x187 = -34LL;
	static int64_t x188 = INT64_MIN;
	int32_t t45 = -381884;

    t45 = (x185*((x186%x187)<=x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x189 = -820863792374967390LL;
	static int32_t x190 = 67214;
	int8_t x191 = INT8_MAX;
	static int32_t x192 = INT32_MAX;
	int64_t t46 = 689060LL;

    t46 = (x189*((x190%x191)<=x192));

    if (t46 != -820863792374967390LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x193 = UINT32_MAX;
	int32_t x194 = INT32_MIN;
	int64_t x195 = -965478671665LL;

    t47 = (x193*((x194%x195)<=x196));

    if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = 28;
	uint64_t x198 = 17LLU;
	uint64_t x199 = 1724117LLU;
	static int32_t t48 = 238;

    t48 = (x197*((x198%x199)<=x200));

    if (t48 != 28) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x201 = -21;
	int8_t x202 = INT8_MAX;
	static volatile int16_t x204 = INT16_MIN;
	static volatile int32_t t49 = -6;

    t49 = (x201*((x202%x203)<=x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x205 = UINT16_MAX;
	int64_t x206 = INT64_MIN;

    t50 = (x205*((x206%x207)<=x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x209 = 30U;
	int8_t x210 = -1;
	static int16_t x211 = INT16_MIN;
	volatile int32_t t51 = 36;

    t51 = (x209*((x210%x211)<=x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = -1LL;
	int16_t x214 = 3;
	volatile int8_t x215 = -6;
	volatile int64_t t52 = 62979LL;

    t52 = (x213*((x214%x215)<=x216));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x218 = UINT64_MAX;
	volatile int32_t t53 = 13285688;

    t53 = (x217*((x218%x219)<=x220));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x221 = 12460U;
	int64_t x222 = INT64_MIN;
	uint16_t x224 = 2U;
	volatile uint32_t t54 = 9993U;

    t54 = (x221*((x222%x223)<=x224));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x225 = UINT16_MAX;
	uint8_t x227 = UINT8_MAX;
	int64_t x228 = INT64_MIN;
	static volatile int32_t t55 = -109753512;

    t55 = (x225*((x226%x227)<=x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x229 = 1U;
	static uint8_t x230 = 48U;
	int32_t x231 = 16;
	volatile int8_t x232 = INT8_MAX;
	uint32_t t56 = 54315008U;

    t56 = (x229*((x230%x231)<=x232));

    if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x234 = INT64_MIN;
	uint16_t x235 = 26976U;
	int8_t x236 = 10;
	int64_t t57 = INT64_MAX;

    t57 = (x233*((x234%x235)<=x236));

    if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x237 = -2;
	static volatile int32_t x238 = INT32_MIN;
	int32_t x239 = INT32_MIN;
	int16_t x240 = -248;
	int32_t t58 = -3;

    t58 = (x237*((x238%x239)<=x240));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x243 = 333985071378524522LL;
	volatile int32_t t59 = -17;

    t59 = (x241*((x242%x243)<=x244));

    if (t59 != -43) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x245 = 278;
	int8_t x246 = -15;
	int16_t x248 = -1;

    t60 = (x245*((x246%x247)<=x248));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x249 = 58U;
	int32_t x251 = 1;
	static volatile int32_t t61 = -13;

    t61 = (x249*((x250%x251)<=x252));

    if (t61 != 58) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x253 = INT64_MAX;
	uint32_t x254 = 473743U;
	static int8_t x255 = INT8_MIN;

    t62 = (x253*((x254%x255)<=x256));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x257 = UINT16_MAX;
	volatile uint8_t x258 = 1U;
	int32_t x259 = 6422;
	int32_t x260 = INT32_MAX;
	volatile int32_t t63 = 206991;

    t63 = (x257*((x258%x259)<=x260));

    if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x261 = 2262U;
	static volatile uint8_t x262 = UINT8_MAX;
	int16_t x264 = 4;
	static int32_t t64 = 7;

    t64 = (x261*((x262%x263)<=x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x265 = 27U;
	static volatile uint8_t x266 = 108U;
	int16_t x267 = -1;
	int16_t x268 = -1;

    t65 = (x265*((x266%x267)<=x268));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x269 = INT16_MIN;
	volatile int16_t x270 = INT16_MIN;
	int64_t x271 = INT64_MIN;
	int16_t x272 = INT16_MAX;
	int32_t t66 = -2901;

    t66 = (x269*((x270%x271)<=x272));

    if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x273 = INT8_MIN;
	static volatile uint8_t x274 = 1U;
	int64_t x275 = -104983248505919LL;
	uint8_t x276 = 8U;
	static int32_t t67 = 1153;

    t67 = (x273*((x274%x275)<=x276));

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x277 = 3671U;
	int32_t x278 = INT32_MIN;
	int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MAX;
	volatile int32_t t68 = 45462116;

    t68 = (x277*((x278%x279)<=x280));

    if (t68 != 3671) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x283 = UINT32_MAX;
	static int32_t t69 = 19881387;

    t69 = (x281*((x282%x283)<=x284));

    if (t69 != -47) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x285 = INT32_MIN;
	static int16_t x286 = -1;
	int16_t x287 = -1;
	static int16_t x288 = 183;
	int32_t t70 = INT32_MIN;

    t70 = (x285*((x286%x287)<=x288));

    if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x289 = 105672838718305LLU;
	int32_t x290 = INT32_MIN;
	static uint64_t x291 = 1555298507457LLU;
	uint64_t x292 = 1295538479693LLU;
	volatile uint64_t t71 = 0LLU;

    t71 = (x289*((x290%x291)<=x292));

    if (t71 != 105672838718305LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x294 = 4111134177552268LLU;
	volatile uint16_t x295 = 1U;
	static volatile int32_t t72 = -41610;

    t72 = (x293*((x294%x295)<=x296));

    if (t72 != -6472331) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x297 = 1262U;
	int32_t x298 = 27902;
	volatile int8_t x299 = INT8_MAX;
	int32_t t73 = 206;

    t73 = (x297*((x298%x299)<=x300));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x301 = INT16_MIN;
	uint32_t x303 = 74U;
	int32_t x304 = INT32_MIN;
	int32_t t74 = 0;

    t74 = (x301*((x302%x303)<=x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x305 = 1;
	int16_t x306 = INT16_MIN;
	int32_t x307 = 284340;
	uint16_t x308 = 2019U;
	volatile int32_t t75 = 317347543;

    t75 = (x305*((x306%x307)<=x308));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x309 = UINT32_MAX;
	int64_t x311 = INT64_MIN;
	static int32_t x312 = -12;
	volatile uint32_t t76 = 914515151U;

    t76 = (x309*((x310%x311)<=x312));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x313 = INT16_MIN;
	uint64_t x314 = UINT64_MAX;
	volatile int16_t x315 = -1;
	int32_t x316 = -1;
	volatile int32_t t77 = -53;

    t77 = (x313*((x314%x315)<=x316));

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x317 = INT8_MIN;
	uint64_t x318 = 44778450LLU;
	int32_t x319 = 256544;
	volatile uint32_t x320 = 2U;
	volatile int32_t t78 = 3874;

    t78 = (x317*((x318%x319)<=x320));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x321 = INT8_MIN;
	static int32_t x322 = -1;
	int64_t x323 = -1LL;
	static int16_t x324 = -1;
	static volatile int32_t t79 = -75352;

    t79 = (x321*((x322%x323)<=x324));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x325 = INT16_MIN;
	int16_t x326 = INT16_MIN;
	int64_t x327 = 106211956775LL;
	volatile uint32_t x328 = 44700U;
	int32_t t80 = -55278;

    t80 = (x325*((x326%x327)<=x328));

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x329 = INT64_MIN;
	static int32_t x330 = 155170024;
	int64_t x331 = 763063224LL;
	int32_t x332 = INT32_MIN;
	volatile int64_t t81 = -338LL;

    t81 = (x329*((x330%x331)<=x332));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x333 = 2879994U;
	volatile int64_t x334 = INT64_MIN;
	int64_t x335 = INT64_MAX;
	static volatile uint32_t t82 = 2U;

    t82 = (x333*((x334%x335)<=x336));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x337 = 505265U;
	int16_t x338 = -1;
	int64_t x339 = -1LL;
	static uint8_t x340 = 1U;
	volatile uint32_t t83 = 149U;

    t83 = (x337*((x338%x339)<=x340));

    if (t83 != 505265U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x341 = INT64_MIN;
	volatile int32_t x343 = INT32_MIN;
	static int64_t x344 = INT64_MAX;

    t84 = (x341*((x342%x343)<=x344));

    if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x345 = 25U;
	int8_t x346 = 0;
	volatile uint8_t x348 = 16U;
	int32_t t85 = -379810196;

    t85 = (x345*((x346%x347)<=x348));

    if (t85 != 25) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x350 = UINT8_MAX;
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = -458487733;
	volatile int64_t t86 = 320LL;

    t86 = (x349*((x350%x351)<=x352));

    if (t86 != 1814424809LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x353 = -33864;
	int8_t x355 = INT8_MIN;
	static volatile uint8_t x356 = UINT8_MAX;
	int32_t t87 = 2788;

    t87 = (x353*((x354%x355)<=x356));

    if (t87 != -33864) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x357 = INT16_MIN;
	int32_t x358 = -183;
	volatile int64_t x359 = INT64_MIN;
	uint16_t x360 = 31U;

    t88 = (x357*((x358%x359)<=x360));

    if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x361 = -1;
	uint64_t x362 = UINT64_MAX;
	static int8_t x364 = -1;
	static volatile int32_t t89 = -4;

    t89 = (x361*((x362%x363)<=x364));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x365 = INT64_MIN;
	int16_t x366 = INT16_MAX;
	static int64_t t90 = 214950886LL;

    t90 = (x365*((x366%x367)<=x368));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x369 = 29243457866LLU;
	int32_t x371 = INT32_MIN;
	int8_t x372 = INT8_MIN;
	volatile uint64_t t91 = 133657LLU;

    t91 = (x369*((x370%x371)<=x372));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x373 = 373093;
	volatile uint32_t x374 = UINT32_MAX;
	uint8_t x376 = 3U;

    t92 = (x373*((x374%x375)<=x376));

    if (t92 != 373093) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x377 = INT64_MAX;
	uint8_t x378 = 0U;
	int32_t x379 = -11;
	int16_t x380 = -6068;
	volatile int64_t t93 = -432713395374308LL;

    t93 = (x377*((x378%x379)<=x380));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x381 = INT64_MAX;
	uint16_t x382 = UINT16_MAX;
	int16_t x383 = INT16_MAX;
	static volatile uint32_t x384 = UINT32_MAX;
	static int64_t t94 = INT64_MAX;

    t94 = (x381*((x382%x383)<=x384));

    if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x385 = UINT8_MAX;
	int16_t x386 = -22;
	volatile uint32_t x387 = UINT32_MAX;
	int32_t t95 = 8460243;

    t95 = (x385*((x386%x387)<=x388));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t t96 = 27;

    t96 = (x389*((x390%x391)<=x392));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x393 = 10380002LL;
	volatile uint8_t x394 = UINT8_MAX;
	int64_t x395 = INT64_MIN;
	volatile uint32_t x396 = UINT32_MAX;

    t97 = (x393*((x394%x395)<=x396));

    if (t97 != 10380002LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x397 = 0U;
	int8_t x398 = -1;
	volatile uint64_t x400 = 64613322409078212LLU;
	int32_t t98 = 64044;

    t98 = (x397*((x398%x399)<=x400));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x402 = INT8_MAX;
	uint8_t x403 = UINT8_MAX;
	int8_t x404 = INT8_MIN;

    t99 = (x401*((x402%x403)<=x404));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x405 = INT16_MAX;
	int32_t x406 = -120;
	uint16_t x407 = UINT16_MAX;
	int32_t x408 = INT32_MIN;
	volatile int32_t t100 = -130869323;

    t100 = (x405*((x406%x407)<=x408));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x409 = 31;
	uint32_t x410 = 375473U;
	uint64_t x411 = 381LLU;
	int16_t x412 = INT16_MAX;
	int32_t t101 = -29937635;

    t101 = (x409*((x410%x411)<=x412));

    if (t101 != 31) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x413 = 1U;
	uint32_t x414 = UINT32_MAX;
	int16_t x416 = 3716;
	volatile int32_t t102 = -181;

    t102 = (x413*((x414%x415)<=x416));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x417 = INT16_MIN;
	int32_t x418 = INT32_MIN;
	int16_t x420 = INT16_MIN;

    t103 = (x417*((x418%x419)<=x420));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x421 = INT16_MIN;
	int64_t x422 = -1077208LL;
	uint8_t x423 = UINT8_MAX;
	volatile int32_t t104 = 227;

    t104 = (x421*((x422%x423)<=x424));

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x425 = -7765571004LL;
	int64_t x427 = INT64_MIN;
	static int32_t x428 = INT32_MIN;
	volatile int64_t t105 = 1073038510325189LL;

    t105 = (x425*((x426%x427)<=x428));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x429 = 32;
	int16_t x431 = -1;

    t106 = (x429*((x430%x431)<=x432));

    if (t106 != 32) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x433 = 2959523198LLU;
	static int8_t x434 = -1;
	int64_t x435 = -91616646475173026LL;
	int8_t x436 = INT8_MAX;
	uint64_t t107 = 63207306LLU;

    t107 = (x433*((x434%x435)<=x436));

    if (t107 != 2959523198LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x437 = 17LLU;
	volatile int16_t x438 = -4;
	int32_t x439 = INT32_MIN;
	uint64_t t108 = 0LLU;

    t108 = (x437*((x438%x439)<=x440));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x442 = INT32_MIN;
	uint64_t x443 = 77606LLU;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t109 = 23611987;

    t109 = (x441*((x442%x443)<=x444));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x445 = 2622U;
	uint32_t x446 = UINT32_MAX;
	volatile int8_t x447 = INT8_MIN;
	int64_t x448 = 126249489539LL;
	volatile int32_t t110 = 42282;

    t110 = (x445*((x446%x447)<=x448));

    if (t110 != 2622) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x450 = INT64_MIN;
	int8_t x451 = 1;

    t111 = (x449*((x450%x451)<=x452));

    if (t111 != 11LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x453 = INT8_MIN;
	int8_t x454 = -1;
	static int16_t x455 = -2;
	uint8_t x456 = UINT8_MAX;
	static volatile int32_t t112 = -4373;

    t112 = (x453*((x454%x455)<=x456));

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x458 = 33421LL;
	volatile int16_t x459 = 1;
	int64_t x460 = -1LL;
	volatile int32_t t113 = -2286;

    t113 = (x457*((x458%x459)<=x460));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x461 = 5U;
	uint16_t x462 = UINT16_MAX;
	static int64_t x463 = INT64_MAX;
	uint16_t x464 = 1102U;
	volatile int32_t t114 = 16451200;

    t114 = (x461*((x462%x463)<=x464));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x465 = UINT16_MAX;
	int16_t x466 = INT16_MIN;
	volatile uint8_t x467 = 22U;
	static uint8_t x468 = UINT8_MAX;

    t115 = (x465*((x466%x467)<=x468));

    if (t115 != 65535) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x469 = -1;
	int16_t x470 = INT16_MIN;
	uint64_t x471 = 2328LLU;
	uint8_t x472 = 78U;
	volatile int32_t t116 = -38;

    t116 = (x469*((x470%x471)<=x472));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x473 = -10;
	int8_t x475 = INT8_MIN;
	static int8_t x476 = 0;
	volatile int32_t t117 = -418512276;

    t117 = (x473*((x474%x475)<=x476));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x477 = 17U;
	int16_t x478 = INT16_MIN;
	uint64_t x479 = 190LLU;
	static volatile int32_t x480 = -1685526;
	int32_t t118 = 1;

    t118 = (x477*((x478%x479)<=x480));

    if (t118 != 17) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x485 = 3491;
	volatile int64_t x486 = INT64_MAX;
	static volatile int16_t x487 = INT16_MIN;
	static int32_t x488 = INT32_MAX;

    t119 = (x485*((x486%x487)<=x488));

    if (t119 != 3491) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x489 = INT16_MAX;
	static int64_t x491 = 374770507921173LL;
	uint16_t x492 = UINT16_MAX;
	int32_t t120 = -2555085;

    t120 = (x489*((x490%x491)<=x492));

    if (t120 != 32767) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x493 = 2015;
	static volatile uint32_t x494 = 231U;
	int64_t x496 = INT64_MIN;
	volatile int32_t t121 = -1;

    t121 = (x493*((x494%x495)<=x496));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x498 = UINT8_MAX;
	static volatile int8_t x499 = -1;
	int8_t x500 = 16;

    t122 = (x497*((x498%x499)<=x500));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x501 = 1;
	int64_t x503 = INT64_MIN;
	uint32_t x504 = UINT32_MAX;
	static volatile int32_t t123 = -797832012;

    t123 = (x501*((x502%x503)<=x504));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x505 = 915885243U;
	int8_t x507 = INT8_MIN;
	static uint16_t x508 = 32274U;

    t124 = (x505*((x506%x507)<=x508));

    if (t124 != 915885243U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x509 = 1U;
	int32_t x510 = -14812784;
	int32_t x511 = -1;
	int32_t x512 = INT32_MAX;
	int32_t t125 = 14799;

    t125 = (x509*((x510%x511)<=x512));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x514 = -1;
	volatile int16_t x515 = INT16_MIN;
	int32_t x516 = INT32_MIN;
	volatile uint64_t t126 = 249214560107771LLU;

    t126 = (x513*((x514%x515)<=x516));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x518 = INT8_MIN;
	volatile int64_t x519 = 249407LL;
	static int64_t x520 = -1811348168412416LL;
	volatile int32_t t127 = -984945;

    t127 = (x517*((x518%x519)<=x520));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x521 = 3454999U;
	uint32_t x523 = UINT32_MAX;
	uint8_t x524 = 22U;
	uint32_t t128 = 31859U;

    t128 = (x521*((x522%x523)<=x524));

    if (t128 != 3454999U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x525 = INT16_MIN;
	static volatile int16_t x527 = -75;
	static uint64_t x528 = UINT64_MAX;

    t129 = (x525*((x526%x527)<=x528));

    if (t129 != -32768) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x529 = 72U;
	uint8_t x530 = UINT8_MAX;
	int16_t x531 = INT16_MIN;
	int16_t x532 = -1;
	volatile int32_t t130 = 11095;

    t130 = (x529*((x530%x531)<=x532));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x534 = 59U;
	int8_t x535 = 3;
	int16_t x536 = INT16_MIN;
	uint32_t t131 = 42U;

    t131 = (x533*((x534%x535)<=x536));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x537 = UINT32_MAX;
	uint8_t x538 = 2U;
	int32_t x540 = -453526220;

    t132 = (x537*((x538%x539)<=x540));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x542 = -86543013LL;
	volatile uint8_t x544 = 2U;
	volatile int64_t t133 = -4460072LL;

    t133 = (x541*((x542%x543)<=x544));

    if (t133 != -361586375609857533LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x545 = 1LLU;
	volatile int64_t x546 = -5LL;
	int16_t x547 = INT16_MIN;
	int16_t x548 = INT16_MAX;
	static volatile uint64_t t134 = 1116938136684LLU;

    t134 = (x545*((x546%x547)<=x548));

    if (t134 != 1LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x552 = -1LL;

    t135 = (x549*((x550%x551)<=x552));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x555 = 7U;
	int16_t x556 = INT16_MAX;
	volatile int32_t t136 = -2;

    t136 = (x553*((x554%x555)<=x556));

    if (t136 != 3) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x557 = UINT32_MAX;
	int16_t x558 = -1;
	static uint64_t x559 = UINT64_MAX;
	uint8_t x560 = 53U;
	uint32_t t137 = UINT32_MAX;

    t137 = (x557*((x558%x559)<=x560));

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x561 = INT64_MIN;
	int32_t x564 = -104448647;
	static volatile int64_t t138 = -30282799022163000LL;

    t138 = (x561*((x562%x563)<=x564));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x565 = 1;
	static uint64_t x566 = 6519LLU;
	volatile int32_t t139 = 1;

    t139 = (x565*((x566%x567)<=x568));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x569 = 22579U;
	int64_t x570 = -1LL;
	static int16_t x571 = INT16_MIN;
	int32_t t140 = -8339273;

    t140 = (x569*((x570%x571)<=x572));

    if (t140 != 22579) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint16_t x573 = 0U;
	static int64_t x574 = INT64_MIN;
	int32_t x575 = 31368729;
	uint64_t x576 = UINT64_MAX;

    t141 = (x573*((x574%x575)<=x576));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t t142 = -280167168;

    t142 = (x577*((x578%x579)<=x580));

    if (t142 != -32768) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x581 = -983;
	int32_t x582 = INT32_MIN;
	volatile int32_t x583 = -1;
	int16_t x584 = INT16_MIN;
	int32_t t143 = -8;

    t143 = (x581*((x582%x583)<=x584));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x585 = UINT8_MAX;
	uint32_t x586 = UINT32_MAX;
	int32_t t144 = -8012497;

    t144 = (x585*((x586%x587)<=x588));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint8_t x589 = UINT8_MAX;
	int16_t x590 = 1;
	static int8_t x591 = INT8_MIN;
	uint8_t x592 = 1U;
	int32_t t145 = 1;

    t145 = (x589*((x590%x591)<=x592));

    if (t145 != 255) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x593 = INT16_MIN;
	uint64_t x594 = 5124554720388LLU;
	int64_t x595 = -305847041155LL;
	int8_t x596 = -12;
	static volatile int32_t t146 = -188059219;

    t146 = (x593*((x594%x595)<=x596));

    if (t146 != -32768) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x597 = INT64_MIN;
	uint64_t x598 = UINT64_MAX;
	uint32_t x599 = 102320U;
	int16_t x600 = -1;
	volatile int64_t t147 = INT64_MIN;

    t147 = (x597*((x598%x599)<=x600));

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x602 = 85U;
	uint64_t x603 = UINT64_MAX;
	int16_t x604 = -3082;
	volatile int32_t t148 = 78;

    t148 = (x601*((x602%x603)<=x604));

    if (t148 != 127) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x605 = 18U;
	int8_t x606 = 0;
	uint64_t x607 = 845637732648168554LLU;
	static volatile int8_t x608 = INT8_MIN;
	volatile int32_t t149 = -730784;

    t149 = (x605*((x606%x607)<=x608));

    if (t149 != 18) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x609 = INT16_MIN;
	int16_t x611 = INT16_MIN;
	volatile uint32_t x612 = UINT32_MAX;
	volatile int32_t t150 = -14516076;

    t150 = (x609*((x610%x611)<=x612));

    if (t150 != -32768) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint64_t x613 = UINT64_MAX;
	int16_t x615 = INT16_MIN;
	uint8_t x616 = UINT8_MAX;
	static uint64_t t151 = UINT64_MAX;

    t151 = (x613*((x614%x615)<=x616));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x617 = -1;
	int8_t x619 = -1;
	uint64_t x620 = 61113713LLU;

    t152 = (x617*((x618%x619)<=x620));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x621 = INT32_MAX;
	int64_t x622 = INT64_MIN;
	int8_t x623 = INT8_MIN;
	uint16_t x624 = UINT16_MAX;

    t153 = (x621*((x622%x623)<=x624));

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x625 = INT8_MIN;
	int16_t x626 = INT16_MAX;
	volatile int32_t x627 = INT32_MIN;
	static int32_t t154 = -5335194;

    t154 = (x625*((x626%x627)<=x628));

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x629 = -5;
	uint8_t x630 = UINT8_MAX;
	volatile uint32_t x631 = 1U;
	uint64_t x632 = UINT64_MAX;
	volatile int32_t t155 = 1774180;

    t155 = (x629*((x630%x631)<=x632));

    if (t155 != -5) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x633 = INT16_MIN;
	uint8_t x634 = 1U;
	int16_t x635 = -1;
	uint8_t x636 = UINT8_MAX;
	int32_t t156 = 96953686;

    t156 = (x633*((x634%x635)<=x636));

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x637 = -1;
	int8_t x638 = INT8_MIN;
	volatile uint64_t x639 = 3419887343434484770LLU;
	int8_t x640 = -1;

    t157 = (x637*((x638%x639)<=x640));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x642 = UINT8_MAX;
	volatile int64_t x643 = INT64_MAX;
	int32_t x644 = -1;
	volatile int32_t t158 = -7110519;

    t158 = (x641*((x642%x643)<=x644));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x645 = INT64_MAX;
	uint16_t x646 = UINT16_MAX;
	int64_t t159 = INT64_MAX;

    t159 = (x645*((x646%x647)<=x648));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x649 = 115184U;
	int16_t x650 = -1;
	static uint16_t x651 = 620U;
	static uint16_t x652 = 5U;
	uint32_t t160 = 5U;

    t160 = (x649*((x650%x651)<=x652));

    if (t160 != 115184U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x653 = 53248385756LL;
	static int64_t x654 = INT64_MIN;
	int32_t x655 = -313123;
	int32_t x656 = INT32_MAX;

    t161 = (x653*((x654%x655)<=x656));

    if (t161 != 53248385756LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x658 = INT64_MIN;
	volatile int8_t x659 = 31;
	static int16_t x660 = -1;
	int32_t t162 = 0;

    t162 = (x657*((x658%x659)<=x660));

    if (t162 != -128) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x661 = INT32_MIN;
	uint32_t x662 = UINT32_MAX;

    t163 = (x661*((x662%x663)<=x664));

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x665 = 15115455951474LL;
	volatile uint16_t x666 = 866U;
	int16_t x667 = 103;
	int32_t x668 = 0;

    t164 = (x665*((x666%x667)<=x668));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x673 = 1626;
	uint32_t x675 = 242438U;
	int8_t x676 = INT8_MAX;
	int32_t t165 = -173298061;

    t165 = (x673*((x674%x675)<=x676));

    if (t165 != 1626) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x677 = -6183;
	uint32_t x678 = 62772U;
	int32_t x679 = INT32_MAX;
	int32_t x680 = 44582553;
	int32_t t166 = -77115216;

    t166 = (x677*((x678%x679)<=x680));

    if (t166 != -6183) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x682 = INT16_MAX;
	int8_t x683 = INT8_MIN;
	uint32_t x684 = UINT32_MAX;

    t167 = (x681*((x682%x683)<=x684));

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x685 = -1;
	static volatile int32_t x686 = INT32_MAX;
	static uint8_t x687 = UINT8_MAX;
	uint64_t x688 = 1445591830732LLU;

    t168 = (x685*((x686%x687)<=x688));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x689 = -86;
	int32_t x691 = INT32_MIN;
	int16_t x692 = -8;
	int32_t t169 = 25374296;

    t169 = (x689*((x690%x691)<=x692));

    if (t169 != -86) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x694 = -1;
	volatile int64_t x696 = INT64_MIN;
	int32_t t170 = 1024170;

    t170 = (x693*((x694%x695)<=x696));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x697 = -1;
	uint32_t x698 = 51119555U;
	uint16_t x699 = 16U;
	static uint64_t x700 = 2LLU;
	volatile int32_t t171 = -68796;

    t171 = (x697*((x698%x699)<=x700));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x701 = 1U;
	int64_t x702 = -3875310770LL;
	int8_t x703 = INT8_MIN;
	int64_t x704 = INT64_MIN;
	int32_t t172 = -67;

    t172 = (x701*((x702%x703)<=x704));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x706 = -1896;
	static int32_t x707 = -170;
	uint64_t x708 = 27564087887LLU;
	int32_t t173 = -911085474;

    t173 = (x705*((x706%x707)<=x708));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x709 = INT8_MIN;
	int64_t x710 = 165171311910304LL;
	int64_t x712 = -1LL;
	int32_t t174 = 6;

    t174 = (x709*((x710%x711)<=x712));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x713 = 134148031;
	volatile int64_t x714 = INT64_MAX;
	volatile int16_t x715 = 3;
	int32_t t175 = 0;

    t175 = (x713*((x714%x715)<=x716));

    if (t175 != 134148031) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x719 = 3U;
	int32_t x720 = -23810;
	volatile int32_t t176 = 217237;

    t176 = (x717*((x718%x719)<=x720));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x721 = INT16_MIN;
	volatile int32_t x722 = -1;
	int32_t x723 = INT32_MAX;
	static uint32_t x724 = 6U;

    t177 = (x721*((x722%x723)<=x724));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x725 = 11869U;
	volatile uint8_t x726 = 19U;
	int64_t x727 = INT64_MIN;
	int8_t x728 = INT8_MAX;
	int32_t t178 = -505;

    t178 = (x725*((x726%x727)<=x728));

    if (t178 != 11869) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x729 = INT16_MIN;
	uint32_t x730 = 28U;
	int8_t x731 = 1;
	int64_t x732 = INT64_MAX;
	int32_t t179 = -378;

    t179 = (x729*((x730%x731)<=x732));

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x734 = -1;
	int16_t x735 = INT16_MIN;
	uint64_t x736 = UINT64_MAX;
	uint64_t t180 = 11LLU;

    t180 = (x733*((x734%x735)<=x736));

    if (t180 != 87821761706LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x737 = INT8_MIN;
	int16_t x738 = -32;
	int64_t x739 = INT64_MIN;
	volatile uint16_t x740 = UINT16_MAX;

    t181 = (x737*((x738%x739)<=x740));

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x741 = 5U;
	int64_t x743 = 41364LL;
	uint32_t t182 = 13840114U;

    t182 = (x741*((x742%x743)<=x744));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x745 = 7615708LL;
	int64_t x746 = INT64_MIN;
	int16_t x748 = -1;
	int64_t t183 = -382LL;

    t183 = (x745*((x746%x747)<=x748));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x749 = UINT32_MAX;
	volatile int8_t x750 = -9;
	volatile int8_t x751 = -19;
	static uint8_t x752 = 116U;
	volatile uint32_t t184 = UINT32_MAX;

    t184 = (x749*((x750%x751)<=x752));

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x753 = -328;
	volatile int16_t x754 = -8417;
	uint32_t x755 = UINT32_MAX;
	int32_t x756 = -212346;
	volatile int32_t t185 = -121704;

    t185 = (x753*((x754%x755)<=x756));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x758 = INT16_MIN;
	static volatile int32_t t186 = 274589791;

    t186 = (x757*((x758%x759)<=x760));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x761 = 414443U;
	int32_t x762 = INT32_MIN;
	uint16_t x763 = 15121U;
	int16_t x764 = -1;
	volatile uint32_t t187 = 1037771U;

    t187 = (x761*((x762%x763)<=x764));

    if (t187 != 414443U) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x765 = INT64_MIN;
	uint64_t x766 = 16466881177681499LLU;
	uint8_t x768 = 13U;
	int64_t t188 = -79172252LL;

    t188 = (x765*((x766%x767)<=x768));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x769 = -13464419LL;
	static int64_t x770 = -7870081539393692LL;
	uint8_t x771 = 74U;
	uint8_t x772 = 74U;
	volatile int64_t t189 = -3LL;

    t189 = (x769*((x770%x771)<=x772));

    if (t189 != -13464419LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x774 = 72668999;
	int16_t x775 = 137;
	int16_t x776 = -1;

    t190 = (x773*((x774%x775)<=x776));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x777 = INT8_MIN;
	uint64_t x778 = UINT64_MAX;
	int8_t x780 = INT8_MAX;
	static int32_t t191 = 42;

    t191 = (x777*((x778%x779)<=x780));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x782 = 57U;
	int32_t t192 = -81957174;

    t192 = (x781*((x782%x783)<=x784));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x785 = -1;
	int64_t x786 = INT64_MIN;
	uint64_t x787 = UINT64_MAX;

    t193 = (x785*((x786%x787)<=x788));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x790 = UINT32_MAX;
	volatile uint8_t x792 = 46U;
	uint32_t t194 = 1476208403U;

    t194 = (x789*((x790%x791)<=x792));

    if (t194 != 10359444U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x793 = UINT16_MAX;
	uint16_t x795 = UINT16_MAX;
	int32_t x796 = INT32_MIN;
	int32_t t195 = -788647764;

    t195 = (x793*((x794%x795)<=x796));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x797 = UINT32_MAX;
	uint64_t x798 = UINT64_MAX;
	volatile int64_t x799 = -1LL;
	static uint64_t x800 = UINT64_MAX;
	volatile uint32_t t196 = UINT32_MAX;

    t196 = (x797*((x798%x799)<=x800));

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x801 = 313016011920325LLU;
	uint64_t x802 = 4025727763441LLU;
	int32_t x803 = INT32_MIN;
	uint32_t x804 = 1U;
	volatile uint64_t t197 = 13484331055LLU;

    t197 = (x801*((x802%x803)<=x804));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x805 = 720453LLU;
	volatile int32_t x806 = 74;
	int64_t x807 = 18403LL;
	int64_t x808 = INT64_MIN;
	uint64_t t198 = 194LLU;

    t198 = (x805*((x806%x807)<=x808));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x809 = INT16_MIN;
	uint64_t x810 = 12652612814LLU;
	uint64_t x811 = 106224540071672487LLU;
	volatile uint32_t x812 = UINT32_MAX;
	int32_t t199 = 22;

    t199 = (x809*((x810%x811)<=x812));

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

