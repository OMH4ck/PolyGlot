
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

static int32_t x1 = -1;
int32_t t0 = 3;
uint8_t x8 = UINT8_MAX;
int32_t t1 = 10969;
int32_t x9 = INT32_MIN;
static uint16_t x11 = 13U;
uint32_t x28 = 2U;
static volatile int32_t t6 = -3;
uint32_t x33 = UINT32_MAX;
static int32_t x35 = 5;
uint32_t x37 = 3525U;
int8_t x53 = INT8_MIN;
int8_t x58 = INT8_MIN;
int8_t x60 = -1;
volatile int32_t t13 = -42;
volatile int64_t x82 = INT64_MIN;
volatile int32_t t15 = 37808548;
uint8_t x85 = UINT8_MAX;
volatile int64_t x87 = -1504LL;
volatile int16_t x92 = INT16_MIN;
int32_t t17 = -29874;
int32_t x100 = INT32_MAX;
int8_t x121 = INT8_MIN;
volatile int8_t x124 = INT8_MAX;
int8_t x129 = -1;
volatile uint32_t x142 = 1U;
static int64_t x149 = INT64_MIN;
static int16_t x150 = INT16_MIN;
int64_t x151 = 3546113LL;
uint32_t x152 = UINT32_MAX;
int8_t x154 = INT8_MAX;
int64_t x157 = INT64_MIN;
static int64_t x158 = -729705641797570LL;
uint8_t x162 = 9U;
int32_t t31 = 57;
int32_t t33 = 25;
static uint8_t x185 = 12U;
volatile int32_t t35 = -1945424;
volatile int16_t x191 = -1;
static uint32_t x202 = 10081U;
int32_t t38 = -12281;
volatile int64_t x214 = -1LL;
static int16_t x218 = INT16_MIN;
int16_t x220 = INT16_MAX;
static int32_t t40 = -100225229;
volatile uint64_t x225 = 9002LLU;
int16_t x226 = INT16_MAX;
int64_t x228 = 351846210LL;
uint64_t x229 = 8928693404894535LLU;
int16_t x239 = -1;
int16_t x240 = -1;
static int8_t x246 = 1;
volatile int64_t x248 = INT64_MIN;
int32_t x269 = INT32_MIN;
int64_t x273 = 18LL;
int32_t x277 = INT32_MIN;
int8_t x280 = INT8_MIN;
int32_t x289 = 85;
uint16_t x294 = UINT16_MAX;
uint16_t x302 = 541U;
static uint16_t x310 = 12U;
int64_t x311 = INT64_MIN;
volatile int32_t t55 = 15;
uint32_t x313 = 1U;
int8_t x322 = -1;
uint16_t x324 = 22U;
int32_t x329 = -1;
volatile int64_t x330 = INT64_MIN;
int16_t x337 = INT16_MAX;
volatile int32_t t63 = -116235325;
int32_t x347 = -192678;
volatile int8_t x348 = INT8_MIN;
int8_t x351 = INT8_MAX;
uint64_t x353 = 4753LLU;
volatile uint16_t x355 = 2859U;
int16_t x367 = INT16_MIN;
uint16_t x368 = 4U;
int32_t x375 = -63603070;
int16_t x385 = 64;
int8_t x386 = INT8_MAX;
static int32_t x387 = -1;
uint64_t x393 = 5789880425LLU;
static uint8_t x397 = 35U;
uint16_t x399 = 50U;
static volatile int64_t x404 = 235LL;
uint16_t x411 = UINT16_MAX;
int64_t x417 = -312848428LL;
int64_t x424 = -27717LL;
volatile int64_t x426 = -1LL;
int32_t x447 = -283077;
static uint8_t x449 = UINT8_MAX;
int64_t x450 = INT64_MIN;
uint32_t x451 = 7347942U;
volatile uint8_t x453 = 20U;
int8_t x457 = INT8_MIN;
uint16_t x458 = 3U;
int32_t t88 = -1612609;
uint8_t x463 = UINT8_MAX;
volatile int32_t t90 = 635;
static int32_t t91 = -235653;
uint64_t x477 = UINT64_MAX;
uint8_t x481 = 124U;
uint8_t x487 = 1U;
int32_t x491 = INT32_MIN;
volatile int32_t t95 = -3438274;
int16_t x503 = 401;
static uint8_t x508 = 17U;
volatile int32_t t99 = 0;
int64_t x516 = -226911890LL;
int8_t x519 = INT8_MIN;
static volatile int8_t x522 = INT8_MIN;
int32_t x528 = INT32_MIN;
volatile int8_t x537 = INT8_MAX;
uint32_t x538 = 3339782U;
int8_t x541 = 1;
volatile int8_t x545 = 1;
volatile uint64_t x547 = 948LLU;
volatile int32_t t108 = -733;
int64_t x551 = -1LL;
volatile uint32_t x552 = 115752U;
int32_t t110 = -1924;
uint32_t x559 = 142U;
int16_t x560 = 15;
uint32_t x563 = 258295U;
static int8_t x564 = INT8_MAX;
int32_t t114 = -1456105;
uint64_t x577 = UINT64_MAX;
int32_t t116 = -13;
volatile int32_t x581 = -3;
uint16_t x585 = 67U;
int32_t x586 = INT32_MIN;
uint32_t x587 = 1U;
int8_t x591 = INT8_MAX;
static int8_t x592 = INT8_MIN;
int16_t x598 = -487;
int16_t x608 = 845;
volatile uint16_t x614 = UINT16_MAX;
int32_t t126 = 17600325;
static int16_t x633 = 40;
int16_t x640 = -15713;
uint8_t x642 = UINT8_MAX;
static int8_t x655 = INT8_MIN;
int32_t t133 = -172519253;
uint32_t x668 = 168U;
int8_t x669 = -1;
int8_t x677 = 9;
int32_t t138 = -1;
int8_t x685 = INT8_MIN;
int16_t x686 = INT16_MAX;
int8_t x687 = INT8_MIN;
int64_t x693 = INT64_MIN;
static volatile uint32_t x707 = UINT32_MAX;
volatile int32_t t144 = 585184;
int16_t x718 = -32;
static volatile int32_t t145 = 3;
static int64_t x722 = INT64_MAX;
volatile int32_t t146 = 3;
static int8_t x734 = -1;
int32_t t148 = -239;
int32_t t149 = -10;
int8_t x754 = INT8_MIN;
uint8_t x759 = 13U;
int8_t x763 = 1;
int16_t x765 = INT16_MAX;
int64_t x772 = INT64_MIN;
uint32_t x774 = UINT32_MAX;
int32_t x784 = INT32_MIN;
uint8_t x790 = 1U;
int32_t x791 = INT32_MIN;
static int8_t x796 = -1;
static volatile int32_t t161 = 96702108;
uint64_t x799 = 66417439248420LLU;
uint32_t x805 = UINT32_MAX;
int32_t x812 = INT32_MAX;
volatile int32_t t164 = 54738;
uint64_t x814 = 16684903935LLU;
static int32_t t165 = -24;
int64_t x820 = INT64_MAX;
uint8_t x827 = UINT8_MAX;
uint16_t x828 = 1U;
int64_t x829 = INT64_MAX;
volatile uint32_t x831 = 474710744U;
static int32_t t168 = 4157872;
int64_t x837 = INT64_MIN;
int16_t x847 = -1;
int32_t t171 = 254140624;
volatile int64_t x856 = -1LL;
int32_t t173 = -4;
uint32_t x858 = 63466U;
volatile int32_t t174 = 24489;
volatile uint64_t x866 = 97592224424LLU;
volatile int32_t t177 = 6795;
volatile uint64_t x877 = UINT64_MAX;
int8_t x880 = 0;
volatile int64_t x883 = -4775915162172LL;
int16_t x892 = INT16_MIN;
static volatile int32_t t181 = -145;
int32_t t183 = -12;
int64_t x901 = -1LL;
int8_t x903 = 35;
volatile int64_t x908 = 6948053460445792LL;
static uint8_t x910 = 14U;
static int8_t x911 = -1;
int8_t x912 = INT8_MIN;
volatile uint16_t x915 = 29906U;
uint16_t x918 = 109U;
static int32_t t188 = -17707476;
volatile uint8_t x935 = UINT8_MAX;
volatile int32_t t190 = 0;
volatile int16_t x939 = -1;
int32_t t191 = 214;
int64_t x945 = INT64_MIN;
int32_t x954 = -74;
uint16_t x959 = 0U;
int16_t x963 = INT16_MAX;
static volatile int64_t x964 = INT64_MIN;
static uint32_t x968 = UINT32_MAX;
volatile int32_t t197 = 30552;
uint8_t x974 = 113U;
uint8_t x978 = UINT8_MAX;


void f0(void) {
    	uint32_t x2 = 1555185770U;
	static volatile int32_t x3 = 1;
	uint8_t x4 = 127U;

    t0 = (x1<=((x2+x3)+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	int8_t x6 = -1;
	uint16_t x7 = UINT16_MAX;

    t1 = (x5<=((x6+x7)+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x10 = INT32_MIN;
	int64_t x12 = -1LL;
	volatile int32_t t2 = -6;

    t2 = (x9<=((x10+x11)+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = UINT16_MAX;
	volatile uint64_t x14 = UINT64_MAX;
	static int32_t x15 = 405;
	int8_t x16 = 0;
	int32_t t3 = 403;

    t3 = (x13<=((x14+x15)+x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x21 = 3010195U;
	static volatile int16_t x22 = 1575;
	static volatile uint64_t x23 = UINT64_MAX;
	int8_t x24 = -1;
	volatile int32_t t4 = 15;

    t4 = (x21<=((x22+x23)+x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x25 = -1;
	int32_t x26 = INT32_MIN;
	static volatile uint16_t x27 = 911U;
	volatile int32_t t5 = -11517709;

    t5 = (x25<=((x26+x27)+x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = 95;
	static volatile int16_t x30 = INT16_MIN;
	static int16_t x31 = INT16_MIN;
	volatile int8_t x32 = INT8_MAX;

    t6 = (x29<=((x30+x31)+x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x34 = INT32_MIN;
	uint32_t x36 = UINT32_MAX;
	int32_t t7 = -2;

    t7 = (x33<=((x34+x35)+x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x38 = INT64_MIN;
	uint32_t x39 = UINT32_MAX;
	int32_t x40 = INT32_MIN;
	static int32_t t8 = -12689365;

    t8 = (x37<=((x38+x39)+x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x41 = 2356LLU;
	uint32_t x42 = UINT32_MAX;
	int8_t x43 = -1;
	volatile int32_t x44 = INT32_MIN;
	int32_t t9 = 75;

    t9 = (x41<=((x42+x43)+x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x54 = -36;
	int16_t x55 = 1;
	uint16_t x56 = 5719U;
	int32_t t10 = -14644991;

    t10 = (x53<=((x54+x55)+x56));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x57 = 28LL;
	int32_t x59 = 250473;
	int32_t t11 = -1614;

    t11 = (x57<=((x58+x59)+x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x61 = 19177821U;
	int16_t x62 = INT16_MIN;
	static int16_t x63 = INT16_MIN;
	static int32_t x64 = -1;
	volatile int32_t t12 = 1;

    t12 = (x61<=((x62+x63)+x64));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x65 = -8;
	static volatile uint16_t x66 = 65U;
	static uint64_t x67 = 1013060447569895451LLU;
	int32_t x68 = INT32_MAX;

    t13 = (x65<=((x66+x67)+x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x77 = 55U;
	int32_t x78 = 7239222;
	uint16_t x79 = 808U;
	static volatile int32_t x80 = -12173572;
	int32_t t14 = -380095;

    t14 = (x77<=((x78+x79)+x80));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x81 = 32125391LL;
	uint64_t x83 = 501474842052LLU;
	int64_t x84 = INT64_MIN;

    t15 = (x81<=((x82+x83)+x84));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x86 = 1957282127950089868LL;
	volatile int8_t x88 = INT8_MAX;
	volatile int32_t t16 = -40;

    t16 = (x85<=((x86+x87)+x88));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x89 = 1879888;
	int32_t x90 = INT32_MIN;
	int32_t x91 = INT32_MAX;

    t17 = (x89<=((x90+x91)+x92));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x93 = INT64_MIN;
	uint8_t x94 = 1U;
	int16_t x95 = INT16_MIN;
	int32_t x96 = -7901;
	volatile int32_t t18 = 1;

    t18 = (x93<=((x94+x95)+x96));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x97 = 1382;
	int32_t x98 = INT32_MIN;
	uint16_t x99 = 479U;
	static volatile int32_t t19 = 106143;

    t19 = (x97<=((x98+x99)+x100));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x109 = 1324888732732875LLU;
	int64_t x110 = -1LL;
	uint64_t x111 = UINT64_MAX;
	int16_t x112 = -1793;
	int32_t t20 = 17;

    t20 = (x109<=((x110+x111)+x112));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x113 = INT64_MIN;
	uint64_t x114 = 16813243467LLU;
	uint16_t x115 = 435U;
	uint32_t x116 = 179U;
	int32_t t21 = 32894084;

    t21 = (x113<=((x114+x115)+x116));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x117 = -1LL;
	static int8_t x118 = INT8_MIN;
	int64_t x119 = -522854410301432551LL;
	int64_t x120 = -95849397LL;
	volatile int32_t t22 = 544026959;

    t22 = (x117<=((x118+x119)+x120));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x122 = INT8_MAX;
	volatile int8_t x123 = 11;
	int32_t t23 = 228460545;

    t23 = (x121<=((x122+x123)+x124));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x125 = INT8_MIN;
	volatile int16_t x126 = INT16_MIN;
	volatile int16_t x127 = INT16_MAX;
	int32_t x128 = INT32_MAX;
	int32_t t24 = 1659846;

    t24 = (x125<=((x126+x127)+x128));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x130 = INT8_MAX;
	volatile int16_t x131 = -1;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t25 = 261353;

    t25 = (x129<=((x130+x131)+x132));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x137 = 3800U;
	int32_t x138 = 423;
	uint8_t x139 = 1U;
	int64_t x140 = -44235151LL;
	static volatile int32_t t26 = 14;

    t26 = (x137<=((x138+x139)+x140));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x141 = 92U;
	int32_t x143 = INT32_MIN;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t27 = 299821900;

    t27 = (x141<=((x142+x143)+x144));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t t28 = -6;

    t28 = (x149<=((x150+x151)+x152));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x153 = INT64_MIN;
	int8_t x155 = 11;
	int8_t x156 = INT8_MIN;
	int32_t t29 = -52077;

    t29 = (x153<=((x154+x155)+x156));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x159 = 1;
	int32_t x160 = INT32_MAX;
	static volatile int32_t t30 = -163106850;

    t30 = (x157<=((x158+x159)+x160));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x161 = 16886142LLU;
	int32_t x163 = INT32_MIN;
	volatile uint16_t x164 = 23U;

    t31 = (x161<=((x162+x163)+x164));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x165 = 1005360731449877LLU;
	int16_t x166 = INT16_MAX;
	static int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MAX;
	static volatile int32_t t32 = 1180531;

    t32 = (x165<=((x166+x167)+x168));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x177 = INT32_MIN;
	static uint64_t x178 = 1610741LLU;
	static int16_t x179 = INT16_MIN;
	volatile int64_t x180 = -2924075659LL;

    t33 = (x177<=((x178+x179)+x180));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MIN;
	uint8_t x183 = 38U;
	int16_t x184 = 3389;
	volatile int32_t t34 = 0;

    t34 = (x181<=((x182+x183)+x184));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x186 = 7U;
	int16_t x187 = -1;
	uint32_t x188 = 1565765U;

    t35 = (x185<=((x186+x187)+x188));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x189 = 103282U;
	volatile int16_t x190 = INT16_MIN;
	static volatile int16_t x192 = INT16_MIN;
	volatile int32_t t36 = 5;

    t36 = (x189<=((x190+x191)+x192));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x201 = UINT8_MAX;
	uint16_t x203 = UINT16_MAX;
	uint32_t x204 = 10U;
	static volatile int32_t t37 = 2295;

    t37 = (x201<=((x202+x203)+x204));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x205 = INT8_MIN;
	int8_t x206 = 55;
	int8_t x207 = -1;
	int32_t x208 = -1;

    t38 = (x205<=((x206+x207)+x208));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x213 = 23796U;
	int8_t x215 = -35;
	static uint64_t x216 = 29164LLU;
	volatile int32_t t39 = -1737709;

    t39 = (x213<=((x214+x215)+x216));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x217 = INT8_MIN;
	volatile int16_t x219 = -3705;

    t40 = (x217<=((x218+x219)+x220));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x221 = INT8_MIN;
	static volatile uint16_t x222 = 1142U;
	int16_t x223 = INT16_MAX;
	volatile int16_t x224 = 1703;
	volatile int32_t t41 = 1;

    t41 = (x221<=((x222+x223)+x224));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x227 = INT16_MIN;
	volatile int32_t t42 = -59;

    t42 = (x225<=((x226+x227)+x228));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x230 = INT16_MIN;
	int8_t x231 = -1;
	uint8_t x232 = 1U;
	int32_t t43 = 1635414;

    t43 = (x229<=((x230+x231)+x232));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x233 = INT16_MIN;
	int64_t x234 = INT64_MAX;
	int32_t x235 = INT32_MIN;
	volatile uint32_t x236 = 26U;
	int32_t t44 = 280811151;

    t44 = (x233<=((x234+x235)+x236));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x237 = INT16_MIN;
	int16_t x238 = INT16_MAX;
	volatile int32_t t45 = -31596;

    t45 = (x237<=((x238+x239)+x240));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x245 = INT32_MIN;
	uint32_t x247 = UINT32_MAX;
	volatile int32_t t46 = 6672;

    t46 = (x245<=((x246+x247)+x248));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x261 = INT64_MIN;
	int64_t x262 = 8979780LL;
	uint32_t x263 = UINT32_MAX;
	int8_t x264 = -1;
	volatile int32_t t47 = 12230526;

    t47 = (x261<=((x262+x263)+x264));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x270 = -1;
	static int32_t x271 = 38642274;
	uint8_t x272 = 1U;
	volatile int32_t t48 = 560980741;

    t48 = (x269<=((x270+x271)+x272));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x274 = 21188708138475221LLU;
	int32_t x275 = INT32_MIN;
	uint32_t x276 = UINT32_MAX;
	static volatile int32_t t49 = 2034;

    t49 = (x273<=((x274+x275)+x276));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int8_t x278 = 0;
	uint16_t x279 = UINT16_MAX;
	volatile int32_t t50 = -71468050;

    t50 = (x277<=((x278+x279)+x280));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x290 = 17U;
	uint16_t x291 = 22U;
	static uint16_t x292 = 1U;
	volatile int32_t t51 = -44692;

    t51 = (x289<=((x290+x291)+x292));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x293 = INT64_MIN;
	volatile int32_t x295 = 477360;
	uint64_t x296 = UINT64_MAX;
	int32_t t52 = -1;

    t52 = (x293<=((x294+x295)+x296));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x301 = INT8_MIN;
	volatile uint64_t x303 = 0LLU;
	int32_t x304 = -1;
	volatile int32_t t53 = 18;

    t53 = (x301<=((x302+x303)+x304));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x305 = INT64_MIN;
	static volatile int16_t x306 = -12276;
	uint8_t x307 = UINT8_MAX;
	uint8_t x308 = 7U;
	static int32_t t54 = -120293520;

    t54 = (x305<=((x306+x307)+x308));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x309 = INT16_MAX;
	uint32_t x312 = 150172533U;

    t55 = (x309<=((x310+x311)+x312));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x314 = -59814499748339119LL;
	volatile uint16_t x315 = 9U;
	int64_t x316 = -1LL;
	int32_t t56 = -66;

    t56 = (x313<=((x314+x315)+x316));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x317 = -1;
	uint8_t x318 = 9U;
	uint32_t x319 = 14466075U;
	int32_t x320 = INT32_MAX;
	int32_t t57 = -5878;

    t57 = (x317<=((x318+x319)+x320));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x321 = UINT16_MAX;
	uint16_t x323 = UINT16_MAX;
	int32_t t58 = 1122123;

    t58 = (x321<=((x322+x323)+x324));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x325 = INT8_MAX;
	uint64_t x326 = UINT64_MAX;
	volatile int16_t x327 = -1;
	volatile int64_t x328 = INT64_MIN;
	static volatile int32_t t59 = 17;

    t59 = (x325<=((x326+x327)+x328));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint64_t x331 = UINT64_MAX;
	volatile int32_t x332 = INT32_MAX;
	static volatile int32_t t60 = 130653879;

    t60 = (x329<=((x330+x331)+x332));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x333 = INT8_MIN;
	volatile int16_t x334 = 10;
	int32_t x335 = INT32_MIN;
	int32_t x336 = -1;
	static volatile int32_t t61 = 4;

    t61 = (x333<=((x334+x335)+x336));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x338 = 94088147LLU;
	volatile uint32_t x339 = UINT32_MAX;
	int64_t x340 = INT64_MIN;
	static volatile int32_t t62 = 36;

    t62 = (x337<=((x338+x339)+x340));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x341 = INT8_MIN;
	int64_t x342 = -294186825203058067LL;
	int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MAX;

    t63 = (x341<=((x342+x343)+x344));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x345 = 1;
	uint32_t x346 = 40U;
	volatile int32_t t64 = 5462;

    t64 = (x345<=((x346+x347)+x348));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x349 = INT64_MIN;
	static uint8_t x350 = 9U;
	static int64_t x352 = 1400LL;
	int32_t t65 = 22890;

    t65 = (x349<=((x350+x351)+x352));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x354 = UINT16_MAX;
	volatile uint64_t x356 = 22945103591122363LLU;
	int32_t t66 = 11;

    t66 = (x353<=((x354+x355)+x356));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x357 = INT16_MIN;
	int32_t x358 = -820869;
	static int16_t x359 = INT16_MIN;
	volatile uint64_t x360 = 1248348527488921696LLU;
	volatile int32_t t67 = -245432101;

    t67 = (x357<=((x358+x359)+x360));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x361 = INT32_MIN;
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = -519;
	int64_t x364 = INT64_MIN;
	int32_t t68 = -23855;

    t68 = (x361<=((x362+x363)+x364));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x365 = INT64_MIN;
	static volatile int8_t x366 = INT8_MIN;
	static volatile int32_t t69 = 624100409;

    t69 = (x365<=((x366+x367)+x368));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x369 = 561569626635666909LLU;
	uint8_t x370 = UINT8_MAX;
	int32_t x371 = -77682848;
	int16_t x372 = -845;
	volatile int32_t t70 = -69706;

    t70 = (x369<=((x370+x371)+x372));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x373 = INT64_MAX;
	volatile int8_t x374 = -11;
	int32_t x376 = 166866983;
	volatile int32_t t71 = -5;

    t71 = (x373<=((x374+x375)+x376));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x381 = INT64_MAX;
	static int16_t x382 = -1;
	uint16_t x383 = UINT16_MAX;
	static uint32_t x384 = 237U;
	int32_t t72 = 2733;

    t72 = (x381<=((x382+x383)+x384));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x388 = INT8_MIN;
	int32_t t73 = 8057483;

    t73 = (x385<=((x386+x387)+x388));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x394 = -41;
	int8_t x395 = INT8_MAX;
	volatile int16_t x396 = -1;
	volatile int32_t t74 = 19501546;

    t74 = (x393<=((x394+x395)+x396));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x398 = INT8_MAX;
	volatile int8_t x400 = -1;
	volatile int32_t t75 = -2619226;

    t75 = (x397<=((x398+x399)+x400));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x401 = -1;
	uint64_t x402 = 73277277633371LLU;
	volatile int32_t x403 = INT32_MIN;
	volatile int32_t t76 = -67192;

    t76 = (x401<=((x402+x403)+x404));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x405 = UINT64_MAX;
	volatile uint32_t x406 = 14U;
	uint16_t x407 = 7U;
	uint16_t x408 = 7U;
	volatile int32_t t77 = 5559;

    t77 = (x405<=((x406+x407)+x408));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x409 = UINT32_MAX;
	int64_t x410 = -5585LL;
	uint64_t x412 = 186LLU;
	static int32_t t78 = 80;

    t78 = (x409<=((x410+x411)+x412));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x418 = 1019U;
	uint64_t x419 = 13284577LLU;
	int32_t x420 = INT32_MAX;
	volatile int32_t t79 = 0;

    t79 = (x417<=((x418+x419)+x420));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x421 = INT64_MAX;
	uint16_t x422 = 9U;
	uint8_t x423 = 102U;
	static int32_t t80 = -180631;

    t80 = (x421<=((x422+x423)+x424));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x425 = 1987;
	uint8_t x427 = 4U;
	int8_t x428 = INT8_MAX;
	int32_t t81 = -7505;

    t81 = (x425<=((x426+x427)+x428));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x429 = -1;
	static int64_t x430 = -150LL;
	uint8_t x431 = UINT8_MAX;
	int64_t x432 = -13274494470146LL;
	volatile int32_t t82 = 40455242;

    t82 = (x429<=((x430+x431)+x432));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x433 = 6559U;
	int8_t x434 = INT8_MIN;
	int16_t x435 = INT16_MIN;
	uint64_t x436 = 7267591395543007LLU;
	static int32_t t83 = -116939059;

    t83 = (x433<=((x434+x435)+x436));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x437 = UINT16_MAX;
	int16_t x438 = -1;
	static volatile uint64_t x439 = 24751771437LLU;
	volatile uint64_t x440 = UINT64_MAX;
	volatile int32_t t84 = -224653109;

    t84 = (x437<=((x438+x439)+x440));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x445 = 310444117092LLU;
	volatile int8_t x446 = 5;
	static uint16_t x448 = 1U;
	volatile int32_t t85 = -61559;

    t85 = (x445<=((x446+x447)+x448));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x452 = 9519121;
	static volatile int32_t t86 = 32458;

    t86 = (x449<=((x450+x451)+x452));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x454 = -143763221964189LL;
	int8_t x455 = INT8_MIN;
	int16_t x456 = 0;
	static int32_t t87 = 0;

    t87 = (x453<=((x454+x455)+x456));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x459 = 1;
	int16_t x460 = -1;

    t88 = (x457<=((x458+x459)+x460));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x461 = INT64_MIN;
	uint16_t x462 = 1U;
	uint64_t x464 = 46601LLU;
	int32_t t89 = -484;

    t89 = (x461<=((x462+x463)+x464));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x469 = -1;
	int16_t x470 = INT16_MIN;
	uint8_t x471 = 0U;
	uint32_t x472 = 10649U;

    t90 = (x469<=((x470+x471)+x472));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x473 = INT32_MAX;
	int16_t x474 = 180;
	uint64_t x475 = UINT64_MAX;
	static uint16_t x476 = 103U;

    t91 = (x473<=((x474+x475)+x476));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint64_t x478 = UINT64_MAX;
	uint32_t x479 = UINT32_MAX;
	volatile uint16_t x480 = 38U;
	int32_t t92 = 1;

    t92 = (x477<=((x478+x479)+x480));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x482 = -1;
	int8_t x483 = -1;
	int64_t x484 = -76198LL;
	volatile int32_t t93 = -1;

    t93 = (x481<=((x482+x483)+x484));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x485 = 62681;
	static uint32_t x486 = 114449U;
	int32_t x488 = -7940;
	volatile int32_t t94 = 47420;

    t94 = (x485<=((x486+x487)+x488));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x489 = -6675;
	uint32_t x490 = 127424404U;
	int16_t x492 = -91;

    t95 = (x489<=((x490+x491)+x492));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x493 = 0;
	static uint32_t x494 = 82U;
	static int16_t x495 = INT16_MIN;
	uint64_t x496 = 41154LLU;
	volatile int32_t t96 = 167;

    t96 = (x493<=((x494+x495)+x496));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x497 = INT32_MAX;
	uint8_t x498 = 28U;
	uint32_t x499 = 1762866U;
	int8_t x500 = INT8_MAX;
	volatile int32_t t97 = 0;

    t97 = (x497<=((x498+x499)+x500));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x501 = 1809804913LLU;
	int64_t x502 = -1LL;
	uint16_t x504 = 2296U;
	int32_t t98 = 13970;

    t98 = (x501<=((x502+x503)+x504));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x505 = 2027U;
	uint32_t x506 = 3791069U;
	uint8_t x507 = 26U;

    t99 = (x505<=((x506+x507)+x508));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x513 = 49;
	static int8_t x514 = -3;
	uint32_t x515 = UINT32_MAX;
	volatile int32_t t100 = -198395;

    t100 = (x513<=((x514+x515)+x516));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x517 = INT16_MAX;
	static int8_t x518 = -6;
	uint64_t x520 = 24612572LLU;
	static int32_t t101 = -5684372;

    t101 = (x517<=((x518+x519)+x520));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x521 = UINT16_MAX;
	volatile int64_t x523 = -1LL;
	static int16_t x524 = 23;
	int32_t t102 = 3920;

    t102 = (x521<=((x522+x523)+x524));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x525 = 7U;
	int32_t x526 = -1;
	uint16_t x527 = UINT16_MAX;
	volatile int32_t t103 = -19998;

    t103 = (x525<=((x526+x527)+x528));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x529 = 10416204LLU;
	volatile int16_t x530 = -1;
	static int16_t x531 = 1;
	uint64_t x532 = UINT64_MAX;
	int32_t t104 = -2419933;

    t104 = (x529<=((x530+x531)+x532));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x533 = 1948501LL;
	volatile int8_t x534 = INT8_MIN;
	int16_t x535 = INT16_MIN;
	int32_t x536 = -1;
	int32_t t105 = 264088005;

    t105 = (x533<=((x534+x535)+x536));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x539 = INT32_MIN;
	volatile int64_t x540 = 3803387LL;
	int32_t t106 = 1645;

    t106 = (x537<=((x538+x539)+x540));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x542 = INT8_MIN;
	int64_t x543 = INT64_MAX;
	static int16_t x544 = INT16_MIN;
	volatile int32_t t107 = 37032163;

    t107 = (x541<=((x542+x543)+x544));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x546 = 127U;
	int64_t x548 = -1LL;

    t108 = (x545<=((x546+x547)+x548));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x549 = UINT16_MAX;
	int32_t x550 = INT32_MIN;
	volatile int32_t t109 = -20;

    t109 = (x549<=((x550+x551)+x552));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x553 = INT8_MAX;
	int16_t x554 = INT16_MIN;
	int32_t x555 = -1;
	int8_t x556 = INT8_MIN;

    t110 = (x553<=((x554+x555)+x556));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x557 = 26218U;
	int64_t x558 = INT64_MIN;
	int32_t t111 = -2028;

    t111 = (x557<=((x558+x559)+x560));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x561 = -1;
	int8_t x562 = INT8_MIN;
	int32_t t112 = 1602;

    t112 = (x561<=((x562+x563)+x564));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x565 = 248175992U;
	int32_t x566 = 736443;
	volatile int32_t x567 = -10;
	uint32_t x568 = UINT32_MAX;
	volatile int32_t t113 = 681635298;

    t113 = (x565<=((x566+x567)+x568));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x569 = INT8_MIN;
	int16_t x570 = INT16_MIN;
	uint32_t x571 = 1U;
	int8_t x572 = INT8_MIN;

    t114 = (x569<=((x570+x571)+x572));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x573 = INT32_MIN;
	uint64_t x574 = UINT64_MAX;
	static uint32_t x575 = 147602640U;
	int32_t x576 = INT32_MIN;
	volatile int32_t t115 = 1549367;

    t115 = (x573<=((x574+x575)+x576));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x578 = UINT8_MAX;
	uint16_t x579 = 3U;
	int8_t x580 = -1;

    t116 = (x577<=((x578+x579)+x580));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x582 = 1785U;
	static int32_t x583 = 347;
	int32_t x584 = INT32_MIN;
	static volatile int32_t t117 = 7;

    t117 = (x581<=((x582+x583)+x584));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x588 = UINT16_MAX;
	volatile int32_t t118 = -1;

    t118 = (x585<=((x586+x587)+x588));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x589 = 1;
	uint64_t x590 = 44858993179269004LLU;
	static volatile int32_t t119 = 1474;

    t119 = (x589<=((x590+x591)+x592));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x597 = INT64_MIN;
	static volatile int8_t x599 = INT8_MIN;
	uint16_t x600 = 22409U;
	volatile int32_t t120 = 961208667;

    t120 = (x597<=((x598+x599)+x600));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x601 = 47865825;
	volatile int16_t x602 = INT16_MIN;
	volatile uint16_t x603 = UINT16_MAX;
	volatile int8_t x604 = -1;
	volatile int32_t t121 = -123187;

    t121 = (x601<=((x602+x603)+x604));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x605 = 24U;
	int64_t x606 = INT64_MIN;
	static volatile int64_t x607 = 12529029808507LL;
	static volatile int32_t t122 = -14679247;

    t122 = (x605<=((x606+x607)+x608));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x609 = 500755U;
	static volatile int8_t x610 = 20;
	int64_t x611 = 1787826004949395662LL;
	int64_t x612 = -3LL;
	int32_t t123 = -649018349;

    t123 = (x609<=((x610+x611)+x612));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x613 = 8;
	static uint16_t x615 = UINT16_MAX;
	int8_t x616 = 12;
	int32_t t124 = 24;

    t124 = (x613<=((x614+x615)+x616));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x617 = 8462246;
	volatile uint64_t x618 = 115LLU;
	volatile uint8_t x619 = 45U;
	static volatile int16_t x620 = INT16_MIN;
	int32_t t125 = 0;

    t125 = (x617<=((x618+x619)+x620));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x625 = 2095;
	uint64_t x626 = UINT64_MAX;
	uint16_t x627 = UINT16_MAX;
	int32_t x628 = INT32_MAX;

    t126 = (x625<=((x626+x627)+x628));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x629 = 1;
	volatile int16_t x630 = -1;
	int64_t x631 = 470905385LL;
	static int64_t x632 = INT64_MIN;
	int32_t t127 = 227;

    t127 = (x629<=((x630+x631)+x632));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x634 = 3042U;
	int64_t x635 = 4800LL;
	int16_t x636 = 28;
	static int32_t t128 = 0;

    t128 = (x633<=((x634+x635)+x636));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x637 = 1;
	volatile uint8_t x638 = 10U;
	int8_t x639 = INT8_MIN;
	static int32_t t129 = -5488130;

    t129 = (x637<=((x638+x639)+x640));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x641 = INT16_MAX;
	volatile uint8_t x643 = UINT8_MAX;
	uint8_t x644 = UINT8_MAX;
	int32_t t130 = 16788;

    t130 = (x641<=((x642+x643)+x644));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x645 = 138;
	uint8_t x646 = 3U;
	static int8_t x647 = INT8_MIN;
	volatile int64_t x648 = INT64_MAX;
	int32_t t131 = 148;

    t131 = (x645<=((x646+x647)+x648));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x649 = INT64_MIN;
	int64_t x650 = 22344LL;
	int16_t x651 = 8;
	static uint32_t x652 = UINT32_MAX;
	int32_t t132 = 2904425;

    t132 = (x649<=((x650+x651)+x652));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x653 = 248929U;
	uint8_t x654 = 1U;
	int8_t x656 = INT8_MIN;

    t133 = (x653<=((x654+x655)+x656));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x657 = 24LLU;
	int16_t x658 = -1;
	static int16_t x659 = -379;
	int16_t x660 = INT16_MIN;
	int32_t t134 = -39083;

    t134 = (x657<=((x658+x659)+x660));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x665 = INT64_MAX;
	uint16_t x666 = UINT16_MAX;
	int16_t x667 = INT16_MIN;
	volatile int32_t t135 = -310241838;

    t135 = (x665<=((x666+x667)+x668));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x670 = 4972671U;
	int8_t x671 = 24;
	static uint8_t x672 = 120U;
	volatile int32_t t136 = 954;

    t136 = (x669<=((x670+x671)+x672));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x673 = INT8_MAX;
	static uint64_t x674 = 60LLU;
	int64_t x675 = -1LL;
	static int8_t x676 = -1;
	volatile int32_t t137 = 93067670;

    t137 = (x673<=((x674+x675)+x676));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x678 = INT32_MAX;
	volatile uint64_t x679 = UINT64_MAX;
	static uint64_t x680 = UINT64_MAX;

    t138 = (x677<=((x678+x679)+x680));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x681 = UINT32_MAX;
	int16_t x682 = INT16_MAX;
	int64_t x683 = INT64_MIN;
	int64_t x684 = INT64_MAX;
	volatile int32_t t139 = -121171;

    t139 = (x681<=((x682+x683)+x684));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int16_t x688 = -193;
	int32_t t140 = 604952;

    t140 = (x685<=((x686+x687)+x688));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x689 = 43U;
	uint64_t x690 = 414743102LLU;
	uint16_t x691 = 6U;
	int32_t x692 = 23978;
	int32_t t141 = 47;

    t141 = (x689<=((x690+x691)+x692));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x694 = 2U;
	int64_t x695 = -523244364609740LL;
	volatile uint16_t x696 = 2U;
	int32_t t142 = 968;

    t142 = (x693<=((x694+x695)+x696));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x705 = -1;
	int32_t x706 = -1481485;
	static int32_t x708 = 22621;
	int32_t t143 = 1;

    t143 = (x705<=((x706+x707)+x708));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x713 = 122;
	static uint8_t x714 = 20U;
	volatile int8_t x715 = -3;
	int8_t x716 = 3;

    t144 = (x713<=((x714+x715)+x716));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x717 = INT32_MAX;
	int16_t x719 = INT16_MIN;
	volatile int16_t x720 = INT16_MAX;

    t145 = (x717<=((x718+x719)+x720));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x721 = -84;
	uint64_t x723 = 1765LLU;
	volatile int32_t x724 = -1;

    t146 = (x721<=((x722+x723)+x724));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x729 = UINT16_MAX;
	uint16_t x730 = UINT16_MAX;
	int16_t x731 = 51;
	static volatile uint16_t x732 = 49U;
	volatile int32_t t147 = -813;

    t147 = (x729<=((x730+x731)+x732));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x733 = 12U;
	uint32_t x735 = 55688990U;
	int64_t x736 = INT64_MIN;

    t148 = (x733<=((x734+x735)+x736));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x737 = UINT16_MAX;
	int8_t x738 = INT8_MAX;
	uint64_t x739 = 4LLU;
	int64_t x740 = INT64_MIN;

    t149 = (x737<=((x738+x739)+x740));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x749 = INT32_MAX;
	uint8_t x750 = 66U;
	volatile int32_t x751 = INT32_MIN;
	int64_t x752 = INT64_MAX;
	int32_t t150 = 132222145;

    t150 = (x749<=((x750+x751)+x752));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x753 = INT8_MAX;
	uint64_t x755 = UINT64_MAX;
	int16_t x756 = -1;
	volatile int32_t t151 = 150267223;

    t151 = (x753<=((x754+x755)+x756));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x757 = INT64_MIN;
	volatile int32_t x758 = -8125;
	volatile int32_t x760 = -1;
	int32_t t152 = 54;

    t152 = (x757<=((x758+x759)+x760));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x761 = 99251139U;
	static uint8_t x762 = UINT8_MAX;
	uint8_t x764 = UINT8_MAX;
	int32_t t153 = -3;

    t153 = (x761<=((x762+x763)+x764));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x766 = -14;
	int16_t x767 = INT16_MAX;
	uint64_t x768 = 7945073LLU;
	volatile int32_t t154 = 102897179;

    t154 = (x765<=((x766+x767)+x768));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x769 = UINT32_MAX;
	uint8_t x770 = UINT8_MAX;
	static uint8_t x771 = 14U;
	int32_t t155 = -13;

    t155 = (x769<=((x770+x771)+x772));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x773 = 3U;
	int16_t x775 = INT16_MAX;
	static volatile int16_t x776 = INT16_MIN;
	static int32_t t156 = -386562;

    t156 = (x773<=((x774+x775)+x776));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x777 = 1;
	uint8_t x778 = 25U;
	int32_t x779 = 15;
	int16_t x780 = INT16_MIN;
	int32_t t157 = -2069016;

    t157 = (x777<=((x778+x779)+x780));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x781 = 225739203U;
	int16_t x782 = -1;
	volatile uint8_t x783 = 75U;
	int32_t t158 = 320242;

    t158 = (x781<=((x782+x783)+x784));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x785 = INT32_MIN;
	static int16_t x786 = INT16_MIN;
	volatile int32_t x787 = -69549418;
	uint32_t x788 = UINT32_MAX;
	int32_t t159 = -110476;

    t159 = (x785<=((x786+x787)+x788));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x789 = -43876214LL;
	volatile uint32_t x792 = 232401U;
	volatile int32_t t160 = -1002160456;

    t160 = (x789<=((x790+x791)+x792));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x793 = UINT16_MAX;
	uint16_t x794 = UINT16_MAX;
	volatile int8_t x795 = INT8_MIN;

    t161 = (x793<=((x794+x795)+x796));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x797 = 0;
	int16_t x798 = INT16_MIN;
	volatile int8_t x800 = INT8_MIN;
	int32_t t162 = -5534404;

    t162 = (x797<=((x798+x799)+x800));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x806 = 2;
	int64_t x807 = -1LL;
	uint64_t x808 = 268713316529466LLU;
	volatile int32_t t163 = 13;

    t163 = (x805<=((x806+x807)+x808));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x809 = INT8_MAX;
	static int16_t x810 = 0;
	int64_t x811 = INT64_MIN;

    t164 = (x809<=((x810+x811)+x812));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x813 = -1;
	int16_t x815 = -2;
	uint16_t x816 = 471U;

    t165 = (x813<=((x814+x815)+x816));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x817 = UINT16_MAX;
	int16_t x818 = INT16_MAX;
	int32_t x819 = -18898396;
	volatile int32_t t166 = -4;

    t166 = (x817<=((x818+x819)+x820));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x825 = 27U;
	int8_t x826 = INT8_MAX;
	int32_t t167 = -600208166;

    t167 = (x825<=((x826+x827)+x828));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x830 = -15;
	int16_t x832 = INT16_MIN;

    t168 = (x829<=((x830+x831)+x832));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x838 = 29U;
	int16_t x839 = -4;
	int64_t x840 = -99082775753464LL;
	int32_t t169 = -87085903;

    t169 = (x837<=((x838+x839)+x840));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x841 = -1;
	int16_t x842 = -2;
	volatile uint32_t x843 = UINT32_MAX;
	int32_t x844 = INT32_MIN;
	static int32_t t170 = -26567;

    t170 = (x841<=((x842+x843)+x844));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x845 = -40742;
	int64_t x846 = -11543LL;
	uint8_t x848 = UINT8_MAX;

    t171 = (x845<=((x846+x847)+x848));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x849 = INT8_MIN;
	uint8_t x850 = UINT8_MAX;
	uint8_t x851 = 13U;
	uint16_t x852 = 1422U;
	int32_t t172 = -267426502;

    t172 = (x849<=((x850+x851)+x852));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x853 = 154;
	uint32_t x854 = 7841344U;
	uint8_t x855 = 2U;

    t173 = (x853<=((x854+x855)+x856));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x857 = INT32_MIN;
	int16_t x859 = -11;
	static uint8_t x860 = UINT8_MAX;

    t174 = (x857<=((x858+x859)+x860));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x861 = INT16_MIN;
	int64_t x862 = INT64_MAX;
	int64_t x863 = -1005LL;
	static int32_t x864 = -1;
	volatile int32_t t175 = 6690661;

    t175 = (x861<=((x862+x863)+x864));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint64_t x865 = UINT64_MAX;
	int64_t x867 = INT64_MIN;
	int16_t x868 = INT16_MAX;
	int32_t t176 = -1;

    t176 = (x865<=((x866+x867)+x868));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x873 = 6644836;
	int64_t x874 = INT64_MIN;
	static volatile int64_t x875 = INT64_MAX;
	int32_t x876 = INT32_MAX;

    t177 = (x873<=((x874+x875)+x876));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x878 = 697U;
	uint64_t x879 = 889673957745LLU;
	static int32_t t178 = 21379;

    t178 = (x877<=((x878+x879)+x880));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x881 = INT16_MIN;
	volatile int32_t x882 = -1;
	uint8_t x884 = 0U;
	volatile int32_t t179 = 2;

    t179 = (x881<=((x882+x883)+x884));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x885 = UINT64_MAX;
	static int64_t x886 = 45521LL;
	volatile int32_t x887 = INT32_MIN;
	uint16_t x888 = UINT16_MAX;
	int32_t t180 = 40911104;

    t180 = (x885<=((x886+x887)+x888));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x889 = 117017U;
	static int16_t x890 = INT16_MIN;
	static uint16_t x891 = 1248U;

    t181 = (x889<=((x890+x891)+x892));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x893 = INT32_MIN;
	int32_t x894 = INT32_MAX;
	int64_t x895 = -8275280LL;
	int16_t x896 = -792;
	volatile int32_t t182 = 85;

    t182 = (x893<=((x894+x895)+x896));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x897 = INT32_MIN;
	int16_t x898 = INT16_MIN;
	uint32_t x899 = UINT32_MAX;
	static int16_t x900 = -4;

    t183 = (x897<=((x898+x899)+x900));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x902 = -1;
	int16_t x904 = INT16_MIN;
	volatile int32_t t184 = 7;

    t184 = (x901<=((x902+x903)+x904));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x905 = INT16_MIN;
	uint64_t x906 = UINT64_MAX;
	volatile int64_t x907 = 51261LL;
	int32_t t185 = 0;

    t185 = (x905<=((x906+x907)+x908));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x909 = 93U;
	volatile int32_t t186 = 60;

    t186 = (x909<=((x910+x911)+x912));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x913 = INT32_MIN;
	volatile int16_t x914 = INT16_MAX;
	int32_t x916 = -423223;
	static volatile int32_t t187 = -84;

    t187 = (x913<=((x914+x915)+x916));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x917 = INT32_MIN;
	volatile uint32_t x919 = UINT32_MAX;
	int32_t x920 = -1;

    t188 = (x917<=((x918+x919)+x920));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x925 = INT32_MIN;
	static int8_t x926 = INT8_MAX;
	int32_t x927 = INT32_MIN;
	static int8_t x928 = -25;
	int32_t t189 = 3746197;

    t189 = (x925<=((x926+x927)+x928));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x933 = -10463;
	uint64_t x934 = UINT64_MAX;
	static volatile int32_t x936 = INT32_MIN;

    t190 = (x933<=((x934+x935)+x936));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x937 = 255831LLU;
	volatile int8_t x938 = INT8_MIN;
	int32_t x940 = 0;

    t191 = (x937<=((x938+x939)+x940));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x941 = UINT64_MAX;
	static int16_t x942 = INT16_MAX;
	int32_t x943 = INT32_MIN;
	static volatile uint64_t x944 = UINT64_MAX;
	volatile int32_t t192 = 470703;

    t192 = (x941<=((x942+x943)+x944));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x946 = INT64_MAX;
	int16_t x947 = INT16_MIN;
	int8_t x948 = 1;
	static int32_t t193 = 59060443;

    t193 = (x945<=((x946+x947)+x948));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x953 = 474748728;
	int32_t x955 = -1;
	int8_t x956 = INT8_MIN;
	volatile int32_t t194 = -204243;

    t194 = (x953<=((x954+x955)+x956));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x957 = UINT8_MAX;
	volatile uint8_t x958 = 88U;
	uint8_t x960 = UINT8_MAX;
	volatile int32_t t195 = -5161342;

    t195 = (x957<=((x958+x959)+x960));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x961 = -1;
	volatile int16_t x962 = -1;
	int32_t t196 = -5;

    t196 = (x961<=((x962+x963)+x964));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x965 = 4;
	volatile uint64_t x966 = 791LLU;
	int32_t x967 = INT32_MIN;

    t197 = (x965<=((x966+x967)+x968));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x973 = 6540;
	static volatile uint16_t x975 = 7881U;
	static int64_t x976 = 8409182LL;
	static int32_t t198 = -30297998;

    t198 = (x973<=((x974+x975)+x976));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x977 = -58970;
	volatile int8_t x979 = INT8_MIN;
	volatile int32_t x980 = INT32_MIN;
	volatile int32_t t199 = -162701;

    t199 = (x977<=((x978+x979)+x980));

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

