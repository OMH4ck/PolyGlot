
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

int16_t x1 = INT16_MAX;
static uint16_t x13 = UINT16_MAX;
volatile int32_t x14 = -1;
static int16_t x19 = INT16_MIN;
static int64_t x23 = INT64_MAX;
static int32_t x28 = -3288;
int64_t x49 = -47147808200073702LL;
volatile uint64_t x51 = UINT64_MAX;
int32_t t13 = -833;
static volatile uint64_t x57 = 53234027069949699LLU;
uint32_t x58 = UINT32_MAX;
uint64_t x62 = 205941LLU;
int32_t x64 = -165;
static volatile uint32_t t17 = 123669114U;
static uint64_t x74 = 213LLU;
static uint16_t x75 = 1U;
volatile int32_t t18 = -1687;
int8_t x78 = 0;
int64_t x90 = INT64_MIN;
volatile uint8_t x91 = UINT8_MAX;
uint8_t x100 = UINT8_MAX;
int32_t t24 = 147780311;
int16_t x102 = -1;
int32_t x108 = INT32_MIN;
int8_t x109 = INT8_MIN;
uint8_t x116 = 60U;
static uint64_t x123 = UINT64_MAX;
static int64_t x125 = 1575LL;
int64_t x139 = INT64_MAX;
int64_t x140 = 60556201LL;
int16_t x145 = -212;
volatile int32_t t36 = 1299;
volatile int32_t t38 = 4776987;
static volatile int32_t x160 = -12;
volatile int64_t x162 = INT64_MAX;
static volatile uint16_t x168 = 23U;
int8_t x175 = INT8_MIN;
int32_t x176 = -1;
static uint8_t x178 = UINT8_MAX;
int32_t x184 = INT32_MIN;
uint32_t x187 = 13U;
int8_t x197 = INT8_MIN;
uint32_t x198 = 2728290U;
int64_t x200 = INT64_MIN;
static int16_t x201 = 184;
int8_t x204 = -1;
static int32_t t52 = -1858;
static int32_t x220 = -1;
int32_t x227 = -7435;
uint64_t t58 = 2868541338267LLU;
uint32_t x247 = UINT32_MAX;
static int64_t t60 = -1042228096369577214LL;
uint64_t t61 = 2029788557LLU;
volatile uint64_t t63 = 947763099LLU;
int32_t x261 = INT32_MAX;
uint64_t x264 = UINT64_MAX;
uint64_t x266 = 413432239524LLU;
static uint64_t t65 = 218157885071LLU;
volatile int16_t x271 = INT16_MIN;
uint16_t x274 = UINT16_MAX;
uint8_t x275 = 35U;
volatile int32_t x283 = INT32_MIN;
uint64_t t69 = 907983LLU;
volatile int16_t x288 = INT16_MIN;
uint64_t t71 = 785906LLU;
static int32_t x297 = INT32_MAX;
uint16_t x322 = 13957U;
uint32_t x324 = UINT32_MAX;
int32_t x328 = 15976;
volatile uint64_t x329 = UINT64_MAX;
int8_t x333 = -1;
uint32_t x334 = UINT32_MAX;
volatile int32_t t83 = -30;
int16_t x342 = -9;
static int32_t x346 = INT32_MIN;
uint64_t x349 = 14LLU;
int32_t x350 = INT32_MAX;
int64_t x352 = -1LL;
uint64_t t86 = 3042858LLU;
int16_t x356 = -1;
int64_t x358 = -1LL;
int32_t t88 = -30;
uint64_t x364 = UINT64_MAX;
static volatile uint64_t t89 = 664565387781899628LLU;
uint16_t x368 = 3U;
static int32_t x374 = -231264258;
uint32_t x375 = 904493U;
int32_t x376 = INT32_MIN;
volatile uint16_t x378 = UINT16_MAX;
int32_t x383 = -5;
volatile int32_t t93 = -2;
volatile int32_t t94 = 451059954;
static int16_t x389 = INT16_MIN;
int32_t t95 = 57192;
uint8_t x397 = 0U;
int8_t x399 = -21;
uint64_t x400 = 370590034033710309LLU;
uint16_t x402 = 3U;
volatile int8_t x404 = INT8_MIN;
volatile int64_t t97 = -973798LL;
uint32_t x405 = UINT32_MAX;
volatile int64_t x414 = INT64_MIN;
int16_t x420 = 4;
int32_t t101 = -233;
int16_t x435 = -1;
int32_t t106 = -253629034;
int8_t x441 = 0;
volatile uint16_t x447 = 28333U;
static int32_t t109 = 2;
int32_t t110 = 118438;
uint64_t x465 = 77818310826894LLU;
static volatile int32_t x466 = INT32_MIN;
static int16_t x467 = INT16_MIN;
static volatile int8_t x471 = 2;
int32_t x472 = -204809;
volatile uint8_t x474 = 2U;
volatile int32_t t115 = -250481308;
volatile uint64_t x480 = 2949071LLU;
int64_t x483 = 5LL;
static uint8_t x484 = UINT8_MAX;
int32_t x491 = -963420018;
static uint8_t x497 = 71U;
static int16_t x498 = INT16_MIN;
static volatile int32_t x504 = INT32_MAX;
static volatile uint16_t x506 = 3U;
int64_t x511 = -2557547334LL;
volatile int32_t x512 = -1;
uint64_t t125 = 43722017277788219LLU;
int8_t x521 = INT8_MIN;
volatile int64_t x531 = 48520LL;
static uint64_t x532 = 257623048953LLU;
volatile uint8_t x537 = 0U;
uint64_t x545 = 2679180LLU;
int32_t x547 = INT32_MIN;
int64_t x548 = -1LL;
volatile uint64_t t132 = 5962271LLU;
static int32_t x551 = INT32_MIN;
int64_t x556 = 1593LL;
int64_t t134 = 1567737280LL;
int64_t x559 = INT64_MIN;
volatile int8_t x560 = -1;
volatile int32_t x563 = -1;
int16_t x568 = 3292;
uint16_t x571 = 995U;
static int32_t x576 = -3725176;
int8_t x583 = INT8_MIN;
volatile int64_t t141 = 0LL;
int64_t x593 = -1LL;
int64_t x594 = INT64_MIN;
volatile int32_t x603 = 653;
int64_t t146 = 1LL;
int8_t x612 = INT8_MIN;
uint32_t x617 = 236U;
int64_t x619 = -35LL;
int16_t x625 = INT16_MIN;
uint32_t t152 = 8037121U;
static int8_t x631 = INT8_MAX;
int32_t x634 = INT32_MIN;
int32_t x635 = INT32_MIN;
uint32_t x636 = 3239052U;
volatile uint32_t t154 = 1810U;
static uint64_t x639 = 365595348614817LLU;
volatile int64_t t155 = INT64_MIN;
int64_t x647 = INT64_MIN;
uint32_t t157 = 126U;
int32_t t158 = 1;
uint16_t x656 = UINT16_MAX;
int64_t x663 = 20811609960451LL;
int16_t x664 = INT16_MIN;
int64_t x668 = INT64_MIN;
int32_t x675 = INT32_MIN;
volatile int64_t x679 = -154LL;
int32_t t165 = 1;
uint32_t x681 = UINT32_MAX;
static uint64_t x689 = 3118499544LLU;
static volatile uint64_t t168 = 2035653845366085647LLU;
int8_t x694 = INT8_MAX;
static volatile int64_t x701 = INT64_MIN;
static volatile int64_t t171 = 2175716875590356257LL;
int32_t x706 = INT32_MIN;
volatile int32_t x710 = 246899;
int64_t x711 = INT64_MIN;
int8_t x712 = INT8_MIN;
static uint32_t t173 = 23400U;
uint8_t x715 = 10U;
uint64_t x726 = UINT64_MAX;
volatile int32_t t177 = 704318;
int64_t x732 = INT64_MIN;
int8_t x733 = INT8_MIN;
static int64_t x737 = -33003313635LL;
uint8_t x738 = UINT8_MAX;
int32_t t181 = 339;
static int16_t x747 = INT16_MAX;
int32_t x751 = INT32_MIN;
uint32_t x752 = 3321587U;
volatile int16_t x758 = -200;
int16_t x761 = 405;
int64_t t188 = -432332LL;
static uint32_t x778 = 982U;
int16_t x784 = INT16_MAX;
static int32_t x787 = INT32_MAX;
int64_t x792 = -1LL;
uint16_t x798 = 684U;
int32_t t195 = INT32_MIN;
int8_t x804 = -49;
uint16_t x806 = 2873U;
static int8_t x808 = -3;
int16_t x809 = INT16_MIN;
int16_t x813 = -7;


void f0(void) {
    	static int64_t x2 = INT64_MAX;
	static int8_t x3 = INT8_MIN;
	int32_t x4 = 6;
	volatile int32_t t0 = -13197;

    t0 = (x1/((x2>x3)|x4));

    if (t0 != 4681) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 3513U;
	int64_t x6 = 529526789308LL;
	static uint32_t x7 = UINT32_MAX;
	static int64_t x8 = -1LL;
	int64_t t1 = -7591LL;

    t1 = (x5/((x6>x7)|x8));

    if (t1 != -3513LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 46;
	uint8_t x10 = 3U;
	static int16_t x11 = -1;
	volatile int32_t x12 = INT32_MAX;
	static int32_t t2 = 489980;

    t2 = (x9/((x10>x11)|x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x15 = UINT16_MAX;
	int64_t x16 = INT64_MIN;
	static int64_t t3 = 1777731LL;

    t3 = (x13/((x14>x15)|x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	int16_t x18 = INT16_MAX;
	int32_t x20 = -1;
	volatile int32_t t4 = 206989;

    t4 = (x17/((x18>x19)|x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	int32_t x22 = INT32_MIN;
	static int64_t x24 = INT64_MIN;
	int64_t t5 = 176532435592LL;

    t5 = (x21/((x22>x23)|x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x25 = 406U;
	volatile int32_t x26 = 44869185;
	int16_t x27 = INT16_MIN;
	static volatile int32_t t6 = 9100;

    t6 = (x25/((x26>x27)|x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = -28;
	static uint16_t x30 = UINT16_MAX;
	volatile uint8_t x31 = 1U;
	uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 14819796395961696LLU;

    t7 = (x29/((x30>x31)|x32));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x33 = INT8_MIN;
	int8_t x34 = -1;
	int8_t x35 = INT8_MIN;
	uint8_t x36 = 123U;
	volatile int32_t t8 = 203075;

    t8 = (x33/((x34>x35)|x36));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x37 = 67154852563LLU;
	volatile int64_t x38 = INT64_MIN;
	uint64_t x39 = 1002LLU;
	int16_t x40 = INT16_MIN;
	uint64_t t9 = 2692486453126763728LLU;

    t9 = (x37/((x38>x39)|x40));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	volatile int32_t x42 = 6358723;
	int16_t x43 = -352;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = 2636290LL;

    t10 = (x41/((x42>x43)|x44));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -13;
	int64_t x46 = -1LL;
	int8_t x47 = -1;
	static uint64_t x48 = UINT64_MAX;
	volatile uint64_t t11 = 101LLU;

    t11 = (x45/((x46>x47)|x48));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = 233327174553440LLU;
	int64_t x52 = -1LL;
	volatile int64_t t12 = 916195258351122LL;

    t12 = (x49/((x50>x51)|x52));

    if (t12 != 47147808200073702LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	uint32_t x54 = UINT32_MAX;
	int64_t x55 = INT64_MAX;
	volatile int16_t x56 = INT16_MIN;

    t13 = (x53/((x54>x55)|x56));

    if (t13 != -65535) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x59 = -1;
	int8_t x60 = INT8_MAX;
	uint64_t t14 = 8070332LLU;

    t14 = (x57/((x58>x59)|x60));

    if (t14 != 419165567479918LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	int64_t x63 = INT64_MIN;
	static volatile int32_t t15 = -175273478;

    t15 = (x61/((x62>x63)|x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = INT32_MAX;
	static uint32_t x66 = 750732U;
	volatile int8_t x67 = -1;
	volatile uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = -385;

    t16 = (x65/((x66>x67)|x68));

    if (t16 != 32768) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 1619U;
	int8_t x70 = -3;
	uint64_t x71 = 498953541731089LLU;
	volatile uint32_t x72 = 19U;

    t17 = (x69/((x70>x71)|x72));

    if (t17 != 85U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	static volatile int8_t x76 = INT8_MAX;

    t18 = (x73/((x74>x75)|x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	int64_t x79 = INT64_MIN;
	int64_t x80 = -115180997627LL;
	int64_t t19 = -35045892910720106LL;

    t19 = (x77/((x78>x79)|x80));

    if (t19 != -80077202LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = 0;
	int8_t x82 = 38;
	int64_t x83 = -60LL;
	uint32_t x84 = 944338523U;
	uint32_t t20 = 0U;

    t20 = (x81/((x82>x83)|x84));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	uint8_t x86 = 2U;
	static int32_t x87 = 0;
	uint32_t x88 = UINT32_MAX;
	uint32_t t21 = 5371841U;

    t21 = (x85/((x86>x87)|x88));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -1LL;
	static volatile uint32_t x92 = UINT32_MAX;
	volatile int64_t t22 = -28261631326778LL;

    t22 = (x89/((x90>x91)|x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -64228270123352LL;
	uint64_t x94 = 7721768750026010LLU;
	volatile int64_t x95 = -314003173LL;
	static uint64_t x96 = 745147948LLU;
	static uint64_t t23 = 284130357295215323LLU;

    t23 = (x93/((x94>x95)|x96));

    if (t23 != 24755727899LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	volatile int8_t x98 = INT8_MIN;
	volatile uint16_t x99 = 6399U;

    t24 = (x97/((x98>x99)|x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = 264591612;
	volatile int16_t x103 = -51;
	uint64_t x104 = 33LLU;
	uint64_t t25 = 17LLU;

    t25 = (x101/((x102>x103)|x104));

    if (t25 != 8017927LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 6806049116176LLU;
	uint32_t x106 = 49541U;
	volatile int64_t x107 = INT64_MAX;
	uint64_t t26 = 89308LLU;

    t26 = (x105/((x106>x107)|x108));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x110 = INT64_MIN;
	int64_t x111 = 105343592233016LL;
	int64_t x112 = INT64_MAX;
	static volatile int64_t t27 = 152246239101270LL;

    t27 = (x109/((x110>x111)|x112));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	uint32_t x114 = 7U;
	int64_t x115 = -1168LL;
	int32_t t28 = 39;

    t28 = (x113/((x114>x115)|x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = 26LL;
	uint64_t x118 = 107778729LLU;
	uint16_t x119 = UINT16_MAX;
	int16_t x120 = INT16_MIN;
	static int64_t t29 = -494357112394LL;

    t29 = (x117/((x118>x119)|x120));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	uint8_t x122 = 0U;
	uint64_t x124 = 14926381583LLU;
	uint64_t t30 = 162747767860130412LLU;

    t30 = (x121/((x122>x123)|x124));

    if (t30 != 1235848351LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = -10;
	static int64_t x127 = INT64_MIN;
	int8_t x128 = INT8_MIN;
	int64_t t31 = 241908495023433329LL;

    t31 = (x125/((x126>x127)|x128));

    if (t31 != -12LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	static int16_t x130 = -1;
	uint32_t x131 = 792133U;
	uint8_t x132 = 21U;
	int32_t t32 = 4803463;

    t32 = (x129/((x130>x131)|x132));

    if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	int32_t x134 = -227;
	volatile uint8_t x135 = 20U;
	int32_t x136 = 85242;
	volatile int32_t t33 = -130647;

    t33 = (x133/((x134>x135)|x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	volatile int32_t x138 = 31794801;
	int64_t t34 = -258705967936832LL;

    t34 = (x137/((x138>x139)|x140));

    if (t34 != -35LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x141 = 3U;
	int8_t x142 = -1;
	int16_t x143 = -13846;
	static int16_t x144 = -11551;
	static int32_t t35 = 956713;

    t35 = (x141/((x142>x143)|x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x146 = INT32_MIN;
	static uint32_t x147 = UINT32_MAX;
	static int16_t x148 = -51;

    t36 = (x145/((x146>x147)|x148));

    if (t36 != 4) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x149 = -7244;
	static int16_t x150 = 0;
	static int32_t x151 = INT32_MAX;
	int32_t x152 = 582;
	volatile int32_t t37 = 2027574;

    t37 = (x149/((x150>x151)|x152));

    if (t37 != -12) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x153 = -45;
	int32_t x154 = 11104;
	static int8_t x155 = -59;
	int32_t x156 = 2119;

    t38 = (x153/((x154>x155)|x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	static int32_t x158 = INT32_MIN;
	uint8_t x159 = 3U;
	int32_t t39 = 54820;

    t39 = (x157/((x158>x159)|x160));

    if (t39 != 10) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = -221;
	static int32_t x163 = INT32_MIN;
	uint16_t x164 = 6U;
	int32_t t40 = 13;

    t40 = (x161/((x162>x163)|x164));

    if (t40 != -31) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	int64_t x166 = -1LL;
	int16_t x167 = 9;
	int32_t t41 = 21;

    t41 = (x165/((x166>x167)|x168));

    if (t41 != -1424) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = INT32_MAX;
	static int16_t x170 = INT16_MIN;
	static int64_t x171 = 436LL;
	uint8_t x172 = 26U;
	int32_t t42 = 1282;

    t42 = (x169/((x170>x171)|x172));

    if (t42 != 82595524) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 3819915U;
	uint8_t x174 = UINT8_MAX;
	volatile uint32_t t43 = 16165131U;

    t43 = (x173/((x174>x175)|x176));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	volatile int64_t x179 = 767LL;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t44 = 2870U;

    t44 = (x177/((x178>x179)|x180));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	uint64_t x182 = 10955889LLU;
	int32_t x183 = INT32_MIN;
	static volatile int32_t t45 = -143440081;

    t45 = (x181/((x182>x183)|x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = INT16_MIN;
	static volatile int64_t x186 = INT64_MIN;
	volatile uint32_t x188 = 1358341711U;
	volatile uint32_t t46 = 6U;

    t46 = (x185/((x186>x187)|x188));

    if (t46 != 3U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MAX;
	uint16_t x190 = UINT16_MAX;
	int32_t x191 = 2156;
	volatile int64_t x192 = 1LL;
	volatile int64_t t47 = INT64_MAX;

    t47 = (x189/((x190>x191)|x192));

    if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -1;
	int64_t x194 = INT64_MIN;
	int8_t x195 = INT8_MIN;
	static int64_t x196 = -5577145673898LL;
	volatile int64_t t48 = 1LL;

    t48 = (x193/((x194>x195)|x196));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x199 = INT32_MIN;
	static volatile int64_t t49 = 4534LL;

    t49 = (x197/((x198>x199)|x200));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x202 = 7529932LLU;
	static int8_t x203 = 3;
	static int32_t t50 = 899036385;

    t50 = (x201/((x202>x203)|x204));

    if (t50 != -184) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	int64_t x206 = -5LL;
	int8_t x207 = -1;
	uint64_t x208 = 1138052408621132LLU;
	uint64_t t51 = 9711LLU;

    t51 = (x205/((x206>x207)|x208));

    if (t51 != 16209LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -1;
	int32_t x210 = INT32_MIN;
	volatile int64_t x211 = 31516828939897626LL;
	static int16_t x212 = INT16_MAX;

    t52 = (x209/((x210>x211)|x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x213 = UINT16_MAX;
	uint16_t x214 = UINT16_MAX;
	int64_t x215 = 516LL;
	static int16_t x216 = INT16_MIN;
	static volatile int32_t t53 = -151706715;

    t53 = (x213/((x214>x215)|x216));

    if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x217 = INT16_MAX;
	static uint32_t x218 = 967956U;
	static int32_t x219 = -1;
	int32_t t54 = 652;

    t54 = (x217/((x218>x219)|x220));

    if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 221U;
	static int8_t x222 = INT8_MAX;
	int16_t x223 = INT16_MAX;
	static uint16_t x224 = 9U;
	uint32_t t55 = 12714598U;

    t55 = (x221/((x222>x223)|x224));

    if (t55 != 24U) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x225 = UINT16_MAX;
	uint8_t x226 = UINT8_MAX;
	uint32_t x228 = 563691U;
	volatile uint32_t t56 = 14799U;

    t56 = (x225/((x226>x227)|x228));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = INT32_MAX;
	int16_t x230 = INT16_MAX;
	static int16_t x231 = -1;
	int64_t x232 = INT64_MIN;
	volatile int64_t t57 = -185388812937LL;

    t57 = (x229/((x230>x231)|x232));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = UINT64_MAX;
	int16_t x234 = INT16_MIN;
	int8_t x235 = -1;
	volatile uint16_t x236 = UINT16_MAX;

    t58 = (x233/((x234>x235)|x236));

    if (t58 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x241 = 729U;
	uint16_t x242 = 8176U;
	int32_t x243 = 594;
	int8_t x244 = -1;
	int32_t t59 = 0;

    t59 = (x241/((x242>x243)|x244));

    if (t59 != -729) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x245 = -27LL;
	int16_t x246 = INT16_MIN;
	int16_t x248 = INT16_MAX;

    t60 = (x245/((x246>x247)|x248));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x249 = 410284322LLU;
	static int32_t x250 = INT32_MAX;
	int64_t x251 = INT64_MIN;
	static int64_t x252 = INT64_MIN;

    t61 = (x249/((x250>x251)|x252));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MIN;
	int16_t x256 = INT16_MIN;
	static int32_t t62 = -301559179;

    t62 = (x253/((x254>x255)|x256));

    if (t62 != 65538) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x257 = UINT32_MAX;
	static uint8_t x258 = 1U;
	int32_t x259 = -1;
	volatile uint64_t x260 = 87LLU;

    t63 = (x257/((x258>x259)|x260));

    if (t63 != 49367440LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x262 = UINT64_MAX;
	int8_t x263 = INT8_MAX;
	volatile uint64_t t64 = 103650994896731227LLU;

    t64 = (x261/((x262>x263)|x264));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x265 = 173540240137349LLU;
	int64_t x267 = -4900801298112LL;
	int32_t x268 = INT32_MIN;

    t65 = (x265/((x266>x267)|x268));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x269 = -1LL;
	uint8_t x270 = 8U;
	uint32_t x272 = UINT32_MAX;
	volatile int64_t t66 = 40544496601LL;

    t66 = (x269/((x270>x271)|x272));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x273 = UINT32_MAX;
	volatile uint8_t x276 = UINT8_MAX;
	uint32_t t67 = 401799472U;

    t67 = (x273/((x274>x275)|x276));

    if (t67 != 16843009U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x277 = INT8_MIN;
	int32_t x278 = -2025;
	volatile int64_t x279 = -1LL;
	int16_t x280 = INT16_MIN;
	static int32_t t68 = -7976;

    t68 = (x277/((x278>x279)|x280));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x281 = 937149066863138LLU;
	uint32_t x282 = 38U;
	int64_t x284 = INT64_MAX;

    t69 = (x281/((x282>x283)|x284));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x285 = 155218U;
	uint16_t x286 = UINT16_MAX;
	uint16_t x287 = 1007U;
	static uint32_t t70 = 8612U;

    t70 = (x285/((x286>x287)|x288));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x289 = 1983LLU;
	int8_t x290 = -9;
	int32_t x291 = -1;
	int16_t x292 = INT16_MIN;

    t71 = (x289/((x290>x291)|x292));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x293 = UINT32_MAX;
	int32_t x294 = -957098;
	uint32_t x295 = 13457U;
	int32_t x296 = INT32_MIN;
	uint32_t t72 = 125U;

    t72 = (x293/((x294>x295)|x296));

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x298 = INT16_MIN;
	uint16_t x299 = UINT16_MAX;
	static int32_t x300 = -1;
	int32_t t73 = -9;

    t73 = (x297/((x298>x299)|x300));

    if (t73 != -2147483647) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = 6;
	static int16_t x302 = -2;
	uint16_t x303 = 7592U;
	static uint16_t x304 = 609U;
	volatile int32_t t74 = 1;

    t74 = (x301/((x302>x303)|x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x305 = 62877769U;
	static int8_t x306 = INT8_MIN;
	int64_t x307 = -1LL;
	uint16_t x308 = 44U;
	static volatile uint32_t t75 = 3U;

    t75 = (x305/((x306>x307)|x308));

    if (t75 != 1429040U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x309 = 4258007537765000LL;
	uint32_t x310 = UINT32_MAX;
	int8_t x311 = -1;
	static int16_t x312 = -4;
	int64_t t76 = -803LL;

    t76 = (x309/((x310>x311)|x312));

    if (t76 != -1064501884441250LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x313 = INT64_MAX;
	int16_t x314 = -1;
	int16_t x315 = -1535;
	int32_t x316 = INT32_MAX;
	int64_t t77 = -11613LL;

    t77 = (x313/((x314>x315)|x316));

    if (t77 != 4294967298LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x317 = INT16_MIN;
	uint16_t x318 = 12978U;
	volatile int32_t x319 = 72548619;
	int8_t x320 = -1;
	static volatile int32_t t78 = -4;

    t78 = (x317/((x318>x319)|x320));

    if (t78 != 32768) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x321 = 25U;
	static uint16_t x323 = UINT16_MAX;
	uint32_t t79 = 587869211U;

    t79 = (x321/((x322>x323)|x324));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x325 = UINT32_MAX;
	int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MAX;
	volatile uint32_t t80 = 15387920U;

    t80 = (x325/((x326>x327)|x328));

    if (t80 != 268821U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x330 = -42665;
	int64_t x331 = -1LL;
	int32_t x332 = -1;
	static uint64_t t81 = 30571174044LLU;

    t81 = (x329/((x330>x331)|x332));

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x335 = 75U;
	static int8_t x336 = INT8_MIN;
	int32_t t82 = -91751439;

    t82 = (x333/((x334>x335)|x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x337 = 0U;
	uint64_t x338 = UINT64_MAX;
	int32_t x339 = 95;
	int16_t x340 = INT16_MAX;

    t83 = (x337/((x338>x339)|x340));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x341 = 746411U;
	uint8_t x343 = 13U;
	int32_t x344 = -1;
	uint32_t t84 = 1U;

    t84 = (x341/((x342>x343)|x344));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x345 = 12;
	uint64_t x347 = 1867650301243762LLU;
	int64_t x348 = INT64_MIN;
	int64_t t85 = 31237LL;

    t85 = (x345/((x346>x347)|x348));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x351 = INT8_MAX;

    t86 = (x349/((x350>x351)|x352));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x353 = INT8_MAX;
	volatile uint8_t x354 = UINT8_MAX;
	uint8_t x355 = 26U;
	int32_t t87 = 1814139;

    t87 = (x353/((x354>x355)|x356));

    if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x357 = 1;
	static int16_t x359 = 1;
	static volatile int16_t x360 = INT16_MIN;

    t88 = (x357/((x358>x359)|x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x361 = INT32_MIN;
	int16_t x362 = INT16_MIN;
	volatile int16_t x363 = INT16_MIN;

    t89 = (x361/((x362>x363)|x364));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x365 = 167;
	uint16_t x366 = UINT16_MAX;
	static int8_t x367 = 1;
	int32_t t90 = 76592;

    t90 = (x365/((x366>x367)|x368));

    if (t90 != 55) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x373 = INT16_MIN;
	volatile int32_t t91 = 3188842;

    t91 = (x373/((x374>x375)|x376));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x377 = 61;
	uint64_t x379 = 907088LLU;
	static volatile int8_t x380 = INT8_MAX;
	int32_t t92 = 14;

    t92 = (x377/((x378>x379)|x380));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x381 = UINT16_MAX;
	static volatile uint32_t x382 = UINT32_MAX;
	int16_t x384 = INT16_MIN;

    t93 = (x381/((x382>x383)|x384));

    if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x385 = INT8_MAX;
	int16_t x386 = -76;
	uint32_t x387 = 12765U;
	int32_t x388 = -1;

    t94 = (x385/((x386>x387)|x388));

    if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x390 = -1;
	int64_t x391 = INT64_MIN;
	int16_t x392 = -1;

    t95 = (x389/((x390>x391)|x392));

    if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x398 = -1LL;
	volatile uint64_t t96 = 2LLU;

    t96 = (x397/((x398>x399)|x400));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x401 = -1LL;
	volatile int8_t x403 = 0;

    t97 = (x401/((x402>x403)|x404));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x406 = INT64_MAX;
	uint8_t x407 = 1U;
	int16_t x408 = INT16_MIN;
	static uint32_t t98 = 2588U;

    t98 = (x405/((x406>x407)|x408));

    if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x409 = INT16_MAX;
	uint16_t x410 = 37U;
	int64_t x411 = INT64_MIN;
	int8_t x412 = INT8_MIN;
	volatile int32_t t99 = 2968;

    t99 = (x409/((x410>x411)|x412));

    if (t99 != -258) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x413 = INT32_MIN;
	int16_t x415 = -7;
	int32_t x416 = 14949;
	int32_t t100 = 7952;

    t100 = (x413/((x414>x415)|x416));

    if (t100 != -143654) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x417 = INT32_MIN;
	static uint8_t x418 = 55U;
	int64_t x419 = -1LL;

    t101 = (x417/((x418>x419)|x420));

    if (t101 != -429496729) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x421 = -15;
	uint16_t x422 = UINT16_MAX;
	volatile int16_t x423 = -1;
	uint32_t x424 = UINT32_MAX;
	uint32_t t102 = 2606U;

    t102 = (x421/((x422>x423)|x424));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x425 = 1137138;
	static int8_t x426 = -22;
	uint8_t x427 = 47U;
	volatile uint16_t x428 = 3851U;
	static int32_t t103 = -95;

    t103 = (x425/((x426>x427)|x428));

    if (t103 != 295) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x429 = INT64_MAX;
	volatile int8_t x430 = INT8_MAX;
	uint16_t x431 = UINT16_MAX;
	uint16_t x432 = UINT16_MAX;
	int64_t t104 = -69LL;

    t104 = (x429/((x430>x431)|x432));

    if (t104 != 140739635871744LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x433 = UINT8_MAX;
	uint32_t x434 = UINT32_MAX;
	int32_t x436 = INT32_MAX;
	int32_t t105 = 363739;

    t105 = (x433/((x434>x435)|x436));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x437 = INT8_MAX;
	int64_t x438 = -1LL;
	int64_t x439 = -230790LL;
	int16_t x440 = INT16_MIN;

    t106 = (x437/((x438>x439)|x440));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x442 = UINT64_MAX;
	int64_t x443 = INT64_MIN;
	static int32_t x444 = INT32_MIN;
	int32_t t107 = 9;

    t107 = (x441/((x442>x443)|x444));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x445 = 4186321;
	int32_t x446 = INT32_MIN;
	volatile int8_t x448 = INT8_MIN;
	volatile int32_t t108 = 44946;

    t108 = (x445/((x446>x447)|x448));

    if (t108 != -32705) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x449 = -1;
	int16_t x450 = 276;
	int32_t x451 = 2487454;
	int8_t x452 = -3;

    t109 = (x449/((x450>x451)|x452));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x453 = -1;
	volatile uint8_t x454 = UINT8_MAX;
	uint16_t x455 = 70U;
	volatile int16_t x456 = INT16_MAX;

    t110 = (x453/((x454>x455)|x456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x457 = 1623U;
	int8_t x458 = INT8_MIN;
	uint8_t x459 = 4U;
	uint32_t x460 = UINT32_MAX;
	volatile uint32_t t111 = 53294666U;

    t111 = (x457/((x458>x459)|x460));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x461 = 0;
	int64_t x462 = INT64_MIN;
	int32_t x463 = -1;
	volatile int8_t x464 = 1;
	volatile int32_t t112 = 25827932;

    t112 = (x461/((x462>x463)|x464));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x468 = -1LL;
	volatile uint64_t t113 = 744LLU;

    t113 = (x465/((x466>x467)|x468));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x469 = -6441647074251851LL;
	volatile int16_t x470 = 702;
	int64_t t114 = -765LL;

    t114 = (x469/((x470>x471)|x472));

    if (t114 != 31451972687LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x473 = INT16_MIN;
	int16_t x475 = INT16_MIN;
	static volatile int32_t x476 = 47746;

    t115 = (x473/((x474>x475)|x476));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x477 = UINT64_MAX;
	static int64_t x478 = INT64_MIN;
	int64_t x479 = INT64_MIN;
	uint64_t t116 = 332727255LLU;

    t116 = (x477/((x478>x479)|x480));

    if (t116 != 6255103411789LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x481 = 0;
	int16_t x482 = -901;
	volatile int32_t t117 = -713185922;

    t117 = (x481/((x482>x483)|x484));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x485 = INT8_MAX;
	volatile int64_t x486 = INT64_MIN;
	volatile uint64_t x487 = UINT64_MAX;
	volatile uint64_t x488 = 238LLU;
	volatile uint64_t t118 = 4939LLU;

    t118 = (x485/((x486>x487)|x488));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x489 = INT32_MIN;
	int32_t x490 = 1;
	uint8_t x492 = 7U;
	volatile int32_t t119 = -13;

    t119 = (x489/((x490>x491)|x492));

    if (t119 != -306783378) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x493 = INT64_MAX;
	uint32_t x494 = UINT32_MAX;
	int64_t x495 = 3LL;
	int8_t x496 = -1;
	static int64_t t120 = -926LL;

    t120 = (x493/((x494>x495)|x496));

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x499 = INT32_MAX;
	int16_t x500 = INT16_MAX;
	static int32_t t121 = 0;

    t121 = (x497/((x498>x499)|x500));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x501 = INT64_MIN;
	int32_t x502 = INT32_MAX;
	int32_t x503 = INT32_MIN;
	volatile int64_t t122 = -6734087144172961LL;

    t122 = (x501/((x502>x503)|x504));

    if (t122 != -4294967298LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x505 = 4086U;
	uint32_t x507 = UINT32_MAX;
	int16_t x508 = INT16_MIN;
	volatile int32_t t123 = -5001244;

    t123 = (x505/((x506>x507)|x508));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x509 = INT64_MAX;
	uint16_t x510 = UINT16_MAX;
	volatile int64_t t124 = -320146704223341LL;

    t124 = (x509/((x510>x511)|x512));

    if (t124 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x513 = 130227LLU;
	uint32_t x514 = 22723683U;
	int32_t x515 = INT32_MAX;
	uint32_t x516 = 24275U;

    t125 = (x513/((x514>x515)|x516));

    if (t125 != 5LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x517 = INT8_MIN;
	uint64_t x518 = 4443LLU;
	int32_t x519 = INT32_MAX;
	int8_t x520 = -18;
	static volatile int32_t t126 = -99122211;

    t126 = (x517/((x518>x519)|x520));

    if (t126 != 7) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x522 = -1;
	volatile uint64_t x523 = UINT64_MAX;
	static uint16_t x524 = 27256U;
	int32_t t127 = 42188;

    t127 = (x521/((x522>x523)|x524));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x529 = -8;
	static uint16_t x530 = 1U;
	uint64_t t128 = 2505201298LLU;

    t128 = (x529/((x530>x531)|x532));

    if (t128 != 71603624LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x533 = INT32_MIN;
	int32_t x534 = INT32_MIN;
	int8_t x535 = -27;
	uint16_t x536 = 1683U;
	static int32_t t129 = -316255339;

    t129 = (x533/((x534>x535)|x536));

    if (t129 != -1275985) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x538 = 2;
	static int64_t x539 = -655261559781LL;
	uint32_t x540 = 2844U;
	volatile uint32_t t130 = 663148763U;

    t130 = (x537/((x538>x539)|x540));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x541 = INT32_MIN;
	int16_t x542 = -1;
	int8_t x543 = 0;
	uint16_t x544 = 11U;
	volatile int32_t t131 = -7228841;

    t131 = (x541/((x542>x543)|x544));

    if (t131 != -195225786) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x546 = 2;

    t132 = (x545/((x546>x547)|x548));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x549 = 759673632812620594LLU;
	uint8_t x550 = 55U;
	int64_t x552 = INT64_MIN;
	volatile uint64_t t133 = 1426211763162LLU;

    t133 = (x549/((x550>x551)|x552));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x553 = 612U;
	int16_t x554 = INT16_MIN;
	uint32_t x555 = 216604973U;

    t134 = (x553/((x554>x555)|x556));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x557 = 119LLU;
	int64_t x558 = INT64_MIN;
	uint64_t t135 = 1LLU;

    t135 = (x557/((x558>x559)|x560));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x561 = INT16_MAX;
	uint32_t x562 = 458142674U;
	static int8_t x564 = -1;
	volatile int32_t t136 = 1210;

    t136 = (x561/((x562>x563)|x564));

    if (t136 != -32767) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x565 = 128LLU;
	uint16_t x566 = UINT16_MAX;
	uint32_t x567 = 85101344U;
	volatile uint64_t t137 = 6479222LLU;

    t137 = (x565/((x566>x567)|x568));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x569 = 315U;
	uint64_t x570 = 217907274400779484LLU;
	static int8_t x572 = INT8_MIN;
	static uint32_t t138 = 1124798U;

    t138 = (x569/((x570>x571)|x572));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x573 = INT8_MAX;
	uint32_t x574 = 929324421U;
	int64_t x575 = -1LL;
	int32_t t139 = 8889013;

    t139 = (x573/((x574>x575)|x576));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x577 = INT8_MIN;
	static uint64_t x578 = UINT64_MAX;
	int8_t x579 = INT8_MIN;
	int8_t x580 = -1;
	int32_t t140 = 118806061;

    t140 = (x577/((x578>x579)|x580));

    if (t140 != 128) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x581 = -526228217167452LL;
	int64_t x582 = 29856826371480841LL;
	int64_t x584 = INT64_MIN;

    t141 = (x581/((x582>x583)|x584));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x585 = -8LL;
	int16_t x586 = -1;
	int16_t x587 = INT16_MAX;
	int16_t x588 = -1;
	static volatile int64_t t142 = -5LL;

    t142 = (x585/((x586>x587)|x588));

    if (t142 != 8LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x589 = 2137195U;
	uint8_t x590 = 22U;
	volatile int64_t x591 = -126633974858LL;
	static int8_t x592 = INT8_MIN;
	volatile uint32_t t143 = 113U;

    t143 = (x589/((x590>x591)|x592));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x595 = INT32_MIN;
	int64_t x596 = 398369455LL;
	int64_t t144 = 9702LL;

    t144 = (x593/((x594>x595)|x596));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x597 = 0;
	int16_t x598 = INT16_MAX;
	int64_t x599 = 3434379718474615228LL;
	static uint64_t x600 = 2389563LLU;
	uint64_t t145 = 50320748397004LLU;

    t145 = (x597/((x598>x599)|x600));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x601 = INT64_MAX;
	static int16_t x602 = -1;
	int32_t x604 = -1;

    t146 = (x601/((x602>x603)|x604));

    if (t146 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x605 = UINT16_MAX;
	static int16_t x606 = INT16_MIN;
	uint8_t x607 = 0U;
	uint64_t x608 = UINT64_MAX;
	static volatile uint64_t t147 = 8390LLU;

    t147 = (x605/((x606>x607)|x608));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x609 = UINT16_MAX;
	uint8_t x610 = 46U;
	int64_t x611 = -2368103778942591964LL;
	int32_t t148 = 20310153;

    t148 = (x609/((x610>x611)|x612));

    if (t148 != -516) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x613 = INT64_MIN;
	int64_t x614 = INT64_MIN;
	static int64_t x615 = INT64_MIN;
	uint8_t x616 = 11U;
	volatile int64_t t149 = -513314580LL;

    t149 = (x613/((x614>x615)|x616));

    if (t149 != -838488366986797800LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x618 = INT8_MAX;
	uint8_t x620 = 13U;
	uint32_t t150 = 5128588U;

    t150 = (x617/((x618>x619)|x620));

    if (t150 != 18U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x621 = 912U;
	int32_t x622 = INT32_MIN;
	int32_t x623 = 2771;
	int16_t x624 = -1;
	int32_t t151 = 91079;

    t151 = (x621/((x622>x623)|x624));

    if (t151 != -912) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x626 = INT8_MIN;
	uint8_t x627 = 12U;
	volatile uint32_t x628 = 606507U;

    t152 = (x625/((x626>x627)|x628));

    if (t152 != 7081U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x629 = 439U;
	volatile uint64_t x630 = 5292092578748LLU;
	static int16_t x632 = -1;
	static volatile uint32_t t153 = 19U;

    t153 = (x629/((x630>x631)|x632));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x633 = -1;

    t154 = (x633/((x634>x635)|x636));

    if (t154 != 1325U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x637 = INT64_MIN;
	static int32_t x638 = INT32_MAX;
	int64_t x640 = 1LL;

    t155 = (x637/((x638>x639)|x640));

    if (t155 != INT64_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x641 = 11289060212468606LLU;
	int32_t x642 = 952;
	int8_t x643 = -1;
	int32_t x644 = 28;
	uint64_t t156 = 1353913LLU;

    t156 = (x641/((x642>x643)|x644));

    if (t156 != 389277938360986LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x645 = -1;
	uint32_t x646 = 6962075U;
	uint32_t x648 = 47162803U;

    t157 = (x645/((x646>x647)|x648));

    if (t157 != 91U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x649 = INT16_MAX;
	int64_t x650 = -951924903030LL;
	uint8_t x651 = 1U;
	static uint8_t x652 = 33U;

    t158 = (x649/((x650>x651)|x652));

    if (t158 != 992) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x653 = 27573U;
	int32_t x654 = INT32_MAX;
	int16_t x655 = INT16_MIN;
	volatile uint32_t t159 = 1567470U;

    t159 = (x653/((x654>x655)|x656));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x657 = 1834560845U;
	volatile int8_t x658 = INT8_MIN;
	int32_t x659 = INT32_MIN;
	int64_t x660 = INT64_MIN;
	int64_t t160 = -1766870992170044554LL;

    t160 = (x657/((x658>x659)|x660));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x661 = INT16_MAX;
	int8_t x662 = -1;
	volatile int32_t t161 = -113345024;

    t161 = (x661/((x662>x663)|x664));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x665 = UINT8_MAX;
	int32_t x666 = -3968715;
	volatile int32_t x667 = INT32_MIN;
	int64_t t162 = 990861245024959LL;

    t162 = (x665/((x666>x667)|x668));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x669 = INT64_MIN;
	int16_t x670 = -1;
	int8_t x671 = INT8_MIN;
	volatile int32_t x672 = INT32_MAX;
	static int64_t t163 = 335LL;

    t163 = (x669/((x670>x671)|x672));

    if (t163 != -4294967298LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x673 = 63;
	int64_t x674 = INT64_MIN;
	static int16_t x676 = INT16_MAX;
	static int32_t t164 = -5;

    t164 = (x673/((x674>x675)|x676));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x677 = -1;
	int32_t x678 = INT32_MIN;
	static int32_t x680 = INT32_MAX;

    t165 = (x677/((x678>x679)|x680));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x682 = -1;
	int8_t x683 = 1;
	volatile int32_t x684 = INT32_MIN;
	static volatile uint32_t t166 = 0U;

    t166 = (x681/((x682>x683)|x684));

    if (t166 != 1U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x685 = 97;
	int8_t x686 = -1;
	volatile int16_t x687 = -2124;
	int8_t x688 = INT8_MAX;
	int32_t t167 = -40469;

    t167 = (x685/((x686>x687)|x688));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x690 = 201687373039633801LLU;
	static int16_t x691 = 946;
	int16_t x692 = -102;

    t168 = (x689/((x690>x691)|x692));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x693 = INT8_MIN;
	volatile int32_t x695 = INT32_MIN;
	int8_t x696 = -1;
	volatile int32_t t169 = -10063;

    t169 = (x693/((x694>x695)|x696));

    if (t169 != 128) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x697 = UINT8_MAX;
	volatile int16_t x698 = INT16_MIN;
	volatile int32_t x699 = 143;
	volatile uint32_t x700 = 408U;
	static volatile uint32_t t170 = 12509U;

    t170 = (x697/((x698>x699)|x700));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x702 = UINT64_MAX;
	uint32_t x703 = UINT32_MAX;
	static int16_t x704 = INT16_MIN;

    t171 = (x701/((x702>x703)|x704));

    if (t171 != 281483566907400LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x705 = 0U;
	int16_t x707 = INT16_MIN;
	int8_t x708 = INT8_MAX;
	volatile int32_t t172 = 10436;

    t172 = (x705/((x706>x707)|x708));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x709 = UINT32_MAX;

    t173 = (x709/((x710>x711)|x712));

    if (t173 != 1U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x713 = INT8_MIN;
	uint8_t x714 = UINT8_MAX;
	int16_t x716 = -1;
	volatile int32_t t174 = 22;

    t174 = (x713/((x714>x715)|x716));

    if (t174 != 128) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x717 = 2U;
	static int16_t x718 = INT16_MIN;
	volatile uint32_t x719 = 3522967U;
	int32_t x720 = -1;
	volatile uint32_t t175 = 0U;

    t175 = (x717/((x718>x719)|x720));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x721 = 0U;
	uint8_t x722 = 2U;
	static uint8_t x723 = 59U;
	int64_t x724 = INT64_MIN;
	volatile int64_t t176 = -16010401084223792LL;

    t176 = (x721/((x722>x723)|x724));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x725 = 1U;
	uint16_t x727 = 15U;
	int8_t x728 = 18;

    t177 = (x725/((x726>x727)|x728));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x729 = -1;
	volatile int64_t x730 = INT64_MIN;
	int64_t x731 = INT64_MIN;
	volatile int64_t t178 = 49659609LL;

    t178 = (x729/((x730>x731)|x732));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x734 = 916;
	volatile int8_t x735 = -1;
	volatile int64_t x736 = INT64_MIN;
	volatile int64_t t179 = -20595972505215LL;

    t179 = (x733/((x734>x735)|x736));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x739 = INT32_MIN;
	int64_t x740 = INT64_MAX;
	volatile int64_t t180 = -1LL;

    t180 = (x737/((x738>x739)|x740));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x741 = 36U;
	static int32_t x742 = INT32_MAX;
	int16_t x743 = -1;
	int8_t x744 = INT8_MIN;

    t181 = (x741/((x742>x743)|x744));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x745 = -2;
	int16_t x746 = 109;
	uint8_t x748 = 5U;
	static volatile int32_t t182 = -1124792;

    t182 = (x745/((x746>x747)|x748));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x749 = -1;
	uint64_t x750 = UINT64_MAX;
	uint32_t t183 = 1U;

    t183 = (x749/((x750>x751)|x752));

    if (t183 != 1293U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x753 = 12;
	static uint64_t x754 = UINT64_MAX;
	int8_t x755 = INT8_MIN;
	int32_t x756 = -114;
	int32_t t184 = -70;

    t184 = (x753/((x754>x755)|x756));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x757 = 3046880528LLU;
	int64_t x759 = INT64_MIN;
	int8_t x760 = INT8_MIN;
	volatile uint64_t t185 = 37LLU;

    t185 = (x757/((x758>x759)|x760));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x762 = UINT8_MAX;
	static volatile int64_t x763 = -46756179243940980LL;
	uint8_t x764 = 1U;
	int32_t t186 = -56;

    t186 = (x761/((x762>x763)|x764));

    if (t186 != 405) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x765 = -13473;
	int32_t x766 = 3202;
	int16_t x767 = INT16_MIN;
	int32_t x768 = -2015;
	static volatile int32_t t187 = 25478;

    t187 = (x765/((x766>x767)|x768));

    if (t187 != 6) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x769 = INT64_MIN;
	static int8_t x770 = -1;
	int32_t x771 = INT32_MIN;
	static volatile int8_t x772 = INT8_MAX;

    t188 = (x769/((x770>x771)|x772));

    if (t188 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x773 = INT64_MAX;
	static uint16_t x774 = UINT16_MAX;
	volatile uint32_t x775 = 5542U;
	uint32_t x776 = 446U;
	static volatile int64_t t189 = 3LL;

    t189 = (x773/((x774>x775)|x776));

    if (t189 != 20633941916901064LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x777 = UINT64_MAX;
	static int8_t x779 = INT8_MIN;
	static uint8_t x780 = 1U;
	volatile uint64_t t190 = UINT64_MAX;

    t190 = (x777/((x778>x779)|x780));

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x781 = -1;
	int32_t x782 = 2003;
	static int64_t x783 = INT64_MIN;
	volatile int32_t t191 = -1;

    t191 = (x781/((x782>x783)|x784));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint64_t x785 = 46992LLU;
	int8_t x786 = -1;
	static int16_t x788 = 610;
	volatile uint64_t t192 = 20LLU;

    t192 = (x785/((x786>x787)|x788));

    if (t192 != 77LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x789 = 123960974568967LL;
	volatile int64_t x790 = INT64_MIN;
	uint8_t x791 = UINT8_MAX;
	int64_t t193 = 395760LL;

    t193 = (x789/((x790>x791)|x792));

    if (t193 != -123960974568967LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x793 = -1LL;
	int8_t x794 = INT8_MIN;
	int16_t x795 = 491;
	uint16_t x796 = 248U;
	static volatile int64_t t194 = 0LL;

    t194 = (x793/((x794>x795)|x796));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x797 = INT32_MIN;
	uint16_t x799 = UINT16_MAX;
	uint16_t x800 = 1U;

    t195 = (x797/((x798>x799)|x800));

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x801 = INT64_MIN;
	int8_t x802 = -1;
	int8_t x803 = 0;
	int64_t t196 = 16LL;

    t196 = (x801/((x802>x803)|x804));

    if (t196 != 188232082384791343LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x805 = UINT32_MAX;
	volatile uint64_t x807 = UINT64_MAX;
	uint32_t t197 = 936024759U;

    t197 = (x805/((x806>x807)|x808));

    if (t197 != 1U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x810 = INT16_MAX;
	uint32_t x811 = 1163U;
	int32_t x812 = INT32_MIN;
	static volatile int32_t t198 = 210;

    t198 = (x809/((x810>x811)|x812));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x814 = 431U;
	static int16_t x815 = INT16_MIN;
	static int8_t x816 = -1;
	volatile int32_t t199 = 64157;

    t199 = (x813/((x814>x815)|x816));

    if (t199 != 7) { NG(); } else { ; }
	
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

