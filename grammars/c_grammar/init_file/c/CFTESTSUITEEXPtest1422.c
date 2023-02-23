
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

static int64_t x1 = INT64_MIN;
int16_t x9 = 17;
int32_t x12 = 892036639;
uint32_t x14 = 3050837U;
volatile int32_t t3 = 32;
static int16_t x24 = INT16_MAX;
volatile int8_t x25 = INT8_MIN;
static volatile int16_t x26 = INT16_MIN;
uint32_t x27 = UINT32_MAX;
uint64_t x28 = UINT64_MAX;
int32_t t6 = 47361;
int32_t t9 = -11122;
static int32_t x45 = INT32_MAX;
int32_t t10 = 286723545;
uint8_t x61 = 3U;
static uint16_t x63 = UINT16_MAX;
volatile int32_t t15 = 23;
uint16_t x70 = UINT16_MAX;
uint8_t x71 = UINT8_MAX;
volatile int32_t t16 = -2;
uint32_t x73 = 174193066U;
static uint16_t x82 = 0U;
int64_t x83 = 700521LL;
int8_t x85 = INT8_MIN;
int32_t x86 = -3203789;
volatile uint64_t x90 = 653997470LLU;
int32_t x91 = INT32_MAX;
volatile uint16_t x97 = 14U;
int32_t t22 = -3;
uint8_t x101 = 60U;
int16_t x106 = -439;
uint64_t x108 = 6867LLU;
uint8_t x110 = 70U;
uint64_t x111 = 202751407LLU;
static int32_t t27 = -30824;
volatile int8_t x126 = INT8_MAX;
uint16_t x128 = UINT16_MAX;
int32_t t29 = -1;
int32_t x139 = -1797;
static uint32_t x144 = 1968313U;
int8_t x146 = -60;
static int64_t x154 = INT64_MAX;
int8_t x158 = INT8_MAX;
int8_t x159 = INT8_MIN;
int32_t t37 = -346078;
static uint16_t x162 = UINT16_MAX;
volatile int32_t t38 = 4;
volatile uint32_t x166 = 644U;
uint64_t x178 = UINT64_MAX;
static volatile int16_t x187 = INT16_MAX;
int32_t x191 = -1;
int32_t x197 = INT32_MIN;
static uint64_t x199 = UINT64_MAX;
static int32_t t47 = 6344;
uint8_t x204 = 79U;
static int16_t x205 = INT16_MAX;
int32_t t49 = 107404705;
volatile int8_t x211 = INT8_MAX;
uint64_t x215 = 49786932LLU;
volatile int32_t t51 = 2;
volatile uint8_t x219 = UINT8_MAX;
int32_t x230 = INT32_MAX;
int32_t t56 = -195;
volatile uint16_t x243 = 1U;
static int32_t t58 = -4097;
volatile int8_t x251 = INT8_MIN;
int16_t x256 = 4098;
static int32_t t62 = 29;
int32_t x269 = -94778586;
uint16_t x276 = 6U;
int8_t x278 = INT8_MAX;
volatile int32_t t67 = 1729253;
volatile uint64_t x285 = 4500738540405941LLU;
uint16_t x291 = 6572U;
uint64_t x292 = UINT64_MAX;
int32_t t70 = -10;
volatile int32_t t71 = -4626572;
uint64_t x304 = 68087LLU;
int64_t x305 = 85799775LL;
static int32_t x312 = INT32_MIN;
int16_t x317 = -1;
volatile int32_t x321 = INT32_MIN;
volatile int32_t t79 = 60342;
static int64_t x329 = INT64_MAX;
int64_t x332 = INT64_MIN;
uint16_t x334 = 489U;
int32_t t81 = 6339;
int64_t x348 = INT64_MIN;
int64_t x350 = -1LL;
int8_t x354 = INT8_MIN;
int32_t t86 = 41;
int32_t x358 = -1;
static int16_t x359 = -1823;
int32_t t88 = 245;
int16_t x387 = INT16_MAX;
static volatile int8_t x393 = 2;
static int32_t x397 = INT32_MAX;
int8_t x402 = INT8_MAX;
int64_t x403 = INT64_MIN;
static volatile uint32_t x407 = UINT32_MAX;
volatile int64_t x408 = INT64_MIN;
int32_t t99 = 0;
int32_t x428 = -1;
int64_t x430 = INT64_MIN;
int16_t x433 = INT16_MAX;
int64_t x437 = INT64_MIN;
int32_t t107 = 4808;
int32_t x441 = INT32_MIN;
static int32_t x445 = INT32_MIN;
volatile uint8_t x446 = UINT8_MAX;
uint64_t x449 = 180LLU;
volatile int8_t x450 = -32;
volatile int64_t x460 = INT64_MIN;
int8_t x463 = INT8_MIN;
uint32_t x468 = UINT32_MAX;
static uint8_t x476 = 47U;
uint64_t x478 = 644643732549076LLU;
uint8_t x487 = 19U;
static int8_t x494 = INT8_MAX;
uint32_t x499 = 65609U;
int32_t t121 = -218;
uint64_t x506 = 67085222950355193LLU;
uint64_t x511 = UINT64_MAX;
int32_t x512 = INT32_MIN;
volatile uint8_t x513 = UINT8_MAX;
int64_t x518 = -777860887382776582LL;
static int16_t x525 = INT16_MAX;
uint8_t x530 = 13U;
static int32_t t129 = -888035;
int32_t x535 = INT32_MAX;
int16_t x543 = -93;
volatile int8_t x546 = INT8_MIN;
int32_t x552 = -1;
int64_t x560 = INT64_MIN;
volatile int32_t t136 = 258;
int32_t x566 = INT32_MIN;
static int64_t x567 = -1LL;
uint8_t x580 = 54U;
int32_t x591 = INT32_MIN;
int32_t x593 = INT32_MIN;
uint64_t x594 = 18335766473017599LLU;
int16_t x596 = INT16_MIN;
static volatile int32_t t144 = -2309;
uint16_t x597 = UINT16_MAX;
int64_t x600 = -1LL;
int16_t x609 = -1;
int32_t x611 = INT32_MIN;
static uint16_t x612 = UINT16_MAX;
volatile int32_t t148 = 7;
int64_t x614 = -7827731LL;
int8_t x615 = INT8_MIN;
volatile int32_t x621 = INT32_MIN;
uint64_t x623 = 81307LLU;
int64_t x632 = INT64_MAX;
volatile int16_t x637 = -1;
int64_t x641 = INT64_MAX;
int16_t x645 = INT16_MAX;
int32_t x646 = -1;
int32_t t156 = 3203091;
volatile int16_t x649 = INT16_MIN;
int8_t x668 = -1;
uint64_t x670 = UINT64_MAX;
uint16_t x674 = 376U;
uint64_t x684 = 8451140LLU;
volatile int32_t t165 = 1132531;
int32_t t167 = 3;
uint32_t x705 = UINT32_MAX;
uint32_t x706 = UINT32_MAX;
int16_t x707 = -17;
int32_t x719 = -32037;
volatile int32_t t172 = 4278296;
int64_t x726 = -74590035395128LL;
volatile int8_t x729 = 12;
static volatile int32_t t175 = -1;
static uint32_t x742 = UINT32_MAX;
volatile int64_t x752 = -1LL;
int32_t x755 = INT32_MAX;
int16_t x760 = 252;
volatile uint16_t x767 = UINT16_MAX;
int32_t t184 = 3351;
int8_t x779 = -1;
int8_t x782 = INT8_MIN;
volatile int32_t t188 = 4216868;
int8_t x787 = INT8_MAX;
static uint8_t x789 = 30U;
volatile int8_t x790 = INT8_MIN;
static int16_t x791 = -1;
int32_t t190 = 14549780;
uint64_t x802 = 9194LLU;
int64_t x811 = 241LL;
int16_t x812 = -4424;
uint64_t x814 = 162744LLU;
uint32_t x821 = 709310223U;
int32_t x828 = -318584;


void f0(void) {
    	volatile int16_t x2 = 0;
	uint16_t x3 = 231U;
	static int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 43129;

    t0 = (x1==((x2==x3)/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	static uint16_t x6 = 87U;
	static int8_t x7 = 3;
	int8_t x8 = 28;
	int32_t t1 = -2453942;

    t1 = (x5==((x6==x7)/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = 6;
	static int64_t x11 = INT64_MIN;
	int32_t t2 = 27009646;

    t2 = (x9==((x10==x11)/x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MAX;
	int16_t x15 = INT16_MAX;
	uint32_t x16 = UINT32_MAX;

    t3 = (x13==((x14==x15)/x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MAX;
	int16_t x20 = -1;
	int32_t t4 = -4;

    t4 = (x17==((x18==x19)/x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 20LLU;
	static int16_t x22 = INT16_MIN;
	uint16_t x23 = 2704U;
	int32_t t5 = -250438;

    t5 = (x21==((x22==x23)/x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    

    t6 = (x25==((x26==x27)/x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	static int32_t x30 = -1;
	uint8_t x31 = UINT8_MAX;
	uint64_t x32 = UINT64_MAX;
	volatile int32_t t7 = -22039026;

    t7 = (x29==((x30==x31)/x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = INT32_MIN;
	volatile uint32_t x34 = UINT32_MAX;
	int8_t x35 = -1;
	int8_t x36 = -1;
	static int32_t t8 = -85748769;

    t8 = (x33==((x34==x35)/x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x37 = UINT8_MAX;
	int16_t x38 = -3911;
	int64_t x39 = INT64_MIN;
	int16_t x40 = INT16_MIN;

    t9 = (x37==((x38==x39)/x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x46 = 197102LLU;
	uint16_t x47 = 0U;
	volatile uint64_t x48 = 53440LLU;

    t10 = (x45==((x46==x47)/x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x49 = INT64_MIN;
	uint64_t x50 = 141487066012283181LLU;
	static uint32_t x51 = 1916961U;
	uint32_t x52 = UINT32_MAX;
	int32_t t11 = 99;

    t11 = (x49==((x50==x51)/x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x53 = INT16_MAX;
	static int16_t x54 = INT16_MIN;
	volatile uint8_t x55 = UINT8_MAX;
	int8_t x56 = 1;
	volatile int32_t t12 = 0;

    t12 = (x53==((x54==x55)/x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x57 = -1;
	volatile int8_t x58 = -1;
	static int32_t x59 = INT32_MIN;
	uint16_t x60 = 454U;
	int32_t t13 = 12;

    t13 = (x57==((x58==x59)/x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x62 = INT16_MIN;
	int16_t x64 = -1;
	int32_t t14 = 1;

    t14 = (x61==((x62==x63)/x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = 37LLU;
	int8_t x66 = 1;
	volatile int8_t x67 = INT8_MAX;
	int16_t x68 = INT16_MIN;

    t15 = (x65==((x66==x67)/x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x69 = INT32_MAX;
	int8_t x72 = 10;

    t16 = (x69==((x70==x71)/x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x74 = -1;
	static int8_t x75 = -1;
	uint64_t x76 = 1062751954LLU;
	volatile int32_t t17 = -14;

    t17 = (x73==((x74==x75)/x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x81 = 0LLU;
	int8_t x84 = -7;
	volatile int32_t t18 = 31;

    t18 = (x81==((x82==x83)/x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x87 = 4454842U;
	static int16_t x88 = INT16_MIN;
	volatile int32_t t19 = 921;

    t19 = (x85==((x86==x87)/x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = INT16_MAX;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t20 = 37;

    t20 = (x89==((x90==x91)/x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = 2856020178624376LL;
	int32_t x94 = INT32_MIN;
	int16_t x95 = -9846;
	static int8_t x96 = -1;
	volatile int32_t t21 = -398083736;

    t21 = (x93==((x94==x95)/x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x98 = -1;
	int16_t x99 = INT16_MIN;
	uint64_t x100 = 2145241937409LLU;

    t22 = (x97==((x98==x99)/x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x102 = INT8_MIN;
	uint16_t x103 = 89U;
	int16_t x104 = INT16_MIN;
	int32_t t23 = 2232602;

    t23 = (x101==((x102==x103)/x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x105 = -1;
	uint32_t x107 = 3U;
	volatile int32_t t24 = 64822;

    t24 = (x105==((x106==x107)/x108));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = 15;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t25 = -448513317;

    t25 = (x109==((x110==x111)/x112));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x113 = -5373249;
	uint64_t x114 = UINT64_MAX;
	static uint64_t x115 = 29708634209970358LLU;
	int64_t x116 = -1LL;
	volatile int32_t t26 = 88921;

    t26 = (x113==((x114==x115)/x116));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x117 = 21U;
	int32_t x118 = -1;
	uint32_t x119 = 830U;
	int64_t x120 = INT64_MIN;

    t27 = (x117==((x118==x119)/x120));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x121 = -1;
	int64_t x122 = 34LL;
	static uint64_t x123 = 13747253385277039LLU;
	int32_t x124 = INT32_MIN;
	static volatile int32_t t28 = -3837251;

    t28 = (x121==((x122==x123)/x124));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x125 = UINT32_MAX;
	int32_t x127 = 250926573;

    t29 = (x125==((x126==x127)/x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x129 = INT8_MIN;
	int64_t x130 = INT64_MAX;
	int32_t x131 = 350833121;
	uint32_t x132 = 17232770U;
	int32_t t30 = -425676804;

    t30 = (x129==((x130==x131)/x132));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x133 = INT8_MIN;
	static int32_t x134 = INT32_MIN;
	static volatile int8_t x135 = 0;
	int8_t x136 = INT8_MIN;
	static volatile int32_t t31 = 5871;

    t31 = (x133==((x134==x135)/x136));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint32_t x137 = 450396U;
	uint8_t x138 = 111U;
	int32_t x140 = -1;
	static int32_t t32 = 215;

    t32 = (x137==((x138==x139)/x140));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = -1;
	int8_t x142 = 0;
	static volatile int32_t x143 = 34;
	int32_t t33 = 597632;

    t33 = (x141==((x142==x143)/x144));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x145 = 5U;
	volatile int8_t x147 = -1;
	uint16_t x148 = 2U;
	static int32_t t34 = 7402979;

    t34 = (x145==((x146==x147)/x148));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x149 = 186857517426967LLU;
	int64_t x150 = -1LL;
	uint16_t x151 = UINT16_MAX;
	int32_t x152 = -1;
	int32_t t35 = 96;

    t35 = (x149==((x150==x151)/x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x153 = UINT8_MAX;
	uint64_t x155 = 69708560LLU;
	static uint8_t x156 = 2U;
	volatile int32_t t36 = 61;

    t36 = (x153==((x154==x155)/x156));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x157 = 331744327U;
	uint64_t x160 = 23286199LLU;

    t37 = (x157==((x158==x159)/x160));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x161 = 10663745LL;
	int32_t x163 = -1;
	int8_t x164 = 1;

    t38 = (x161==((x162==x163)/x164));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x165 = -1187453869LL;
	static int64_t x167 = -1LL;
	static int8_t x168 = -1;
	volatile int32_t t39 = -361386239;

    t39 = (x165==((x166==x167)/x168));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x169 = UINT32_MAX;
	volatile int32_t x170 = 462004;
	int32_t x171 = INT32_MIN;
	int16_t x172 = INT16_MIN;
	static volatile int32_t t40 = -16806;

    t40 = (x169==((x170==x171)/x172));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x173 = -1712;
	int8_t x174 = -1;
	int16_t x175 = -31;
	static int16_t x176 = INT16_MIN;
	int32_t t41 = -12;

    t41 = (x173==((x174==x175)/x176));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x177 = 53;
	uint8_t x179 = 3U;
	static int64_t x180 = -1LL;
	volatile int32_t t42 = -107;

    t42 = (x177==((x178==x179)/x180));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x181 = 1451218LLU;
	uint64_t x182 = 95742LLU;
	uint16_t x183 = UINT16_MAX;
	static int16_t x184 = INT16_MIN;
	volatile int32_t t43 = 1;

    t43 = (x181==((x182==x183)/x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x185 = INT32_MIN;
	int32_t x186 = -1;
	int64_t x188 = INT64_MAX;
	int32_t t44 = 1473;

    t44 = (x185==((x186==x187)/x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x189 = -888165306;
	static uint64_t x190 = 265469573200352005LLU;
	volatile int32_t x192 = 1;
	volatile int32_t t45 = -118571;

    t45 = (x189==((x190==x191)/x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x193 = 1LL;
	uint64_t x194 = 184647205061837967LLU;
	volatile uint8_t x195 = 1U;
	int64_t x196 = INT64_MAX;
	int32_t t46 = -174;

    t46 = (x193==((x194==x195)/x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x198 = INT64_MAX;
	static uint16_t x200 = 6U;

    t47 = (x197==((x198==x199)/x200));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x201 = -50;
	int8_t x202 = -1;
	int32_t x203 = -18539228;
	volatile int32_t t48 = 362;

    t48 = (x201==((x202==x203)/x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x206 = -1LL;
	uint16_t x207 = 464U;
	static int8_t x208 = INT8_MIN;

    t49 = (x205==((x206==x207)/x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x209 = 1361;
	uint8_t x210 = 0U;
	int8_t x212 = INT8_MIN;
	static int32_t t50 = -2312;

    t50 = (x209==((x210==x211)/x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x213 = 1344625U;
	static volatile int8_t x214 = -15;
	static volatile int64_t x216 = 21892611LL;

    t51 = (x213==((x214==x215)/x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x217 = -6;
	volatile int32_t x218 = -2;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t52 = -34;

    t52 = (x217==((x218==x219)/x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = INT16_MIN;
	uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MIN;
	int64_t x224 = 357642558019957LL;
	volatile int32_t t53 = -729199;

    t53 = (x221==((x222==x223)/x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x225 = UINT8_MAX;
	int8_t x226 = INT8_MIN;
	volatile int16_t x227 = 6419;
	int16_t x228 = INT16_MIN;
	volatile int32_t t54 = 72;

    t54 = (x225==((x226==x227)/x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x229 = -1;
	int8_t x231 = -1;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t55 = 399318;

    t55 = (x229==((x230==x231)/x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x233 = -1LL;
	uint32_t x234 = 6798070U;
	uint8_t x235 = 7U;
	static uint32_t x236 = 7897U;

    t56 = (x233==((x234==x235)/x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x237 = 712447682931LLU;
	int64_t x238 = 4909442LL;
	int16_t x239 = INT16_MIN;
	uint16_t x240 = 18U;
	int32_t t57 = -20326;

    t57 = (x237==((x238==x239)/x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x241 = INT32_MAX;
	static int32_t x242 = INT32_MIN;
	uint32_t x244 = UINT32_MAX;

    t58 = (x241==((x242==x243)/x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x245 = 17LLU;
	uint8_t x246 = 10U;
	volatile int32_t x247 = INT32_MAX;
	int8_t x248 = -1;
	int32_t t59 = -638;

    t59 = (x245==((x246==x247)/x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x249 = UINT16_MAX;
	int64_t x250 = -1LL;
	int64_t x252 = 57552303513935177LL;
	volatile int32_t t60 = 409453244;

    t60 = (x249==((x250==x251)/x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x253 = 8U;
	volatile uint16_t x254 = 30614U;
	uint8_t x255 = UINT8_MAX;
	static volatile int32_t t61 = 2;

    t61 = (x253==((x254==x255)/x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x257 = 78U;
	uint16_t x258 = 16U;
	static int8_t x259 = INT8_MIN;
	volatile int32_t x260 = -12258452;

    t62 = (x257==((x258==x259)/x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x261 = 1347088637744LLU;
	int64_t x262 = INT64_MAX;
	uint64_t x263 = 16860LLU;
	uint16_t x264 = 794U;
	volatile int32_t t63 = -12946060;

    t63 = (x261==((x262==x263)/x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = 0;
	int64_t x266 = -871420119062LL;
	uint8_t x267 = 81U;
	int64_t x268 = INT64_MIN;
	int32_t t64 = -33561;

    t64 = (x265==((x266==x267)/x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x270 = 84U;
	volatile int8_t x271 = 56;
	int16_t x272 = 4872;
	static volatile int32_t t65 = 119592;

    t65 = (x269==((x270==x271)/x272));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = INT16_MAX;
	static int32_t x274 = 2066671;
	int8_t x275 = -1;
	volatile int32_t t66 = 10679;

    t66 = (x273==((x274==x275)/x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x277 = 1036623U;
	int64_t x279 = -1LL;
	uint16_t x280 = UINT16_MAX;

    t67 = (x277==((x278==x279)/x280));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x281 = 716U;
	static int8_t x282 = 0;
	static int8_t x283 = INT8_MIN;
	int64_t x284 = 45444345239199LL;
	volatile int32_t t68 = 55401;

    t68 = (x281==((x282==x283)/x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x286 = 12U;
	volatile uint32_t x287 = 109795U;
	int8_t x288 = -1;
	volatile int32_t t69 = -247249697;

    t69 = (x285==((x286==x287)/x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x289 = 4542210;
	volatile int8_t x290 = INT8_MIN;

    t70 = (x289==((x290==x291)/x292));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x293 = INT8_MIN;
	static uint32_t x294 = UINT32_MAX;
	int8_t x295 = INT8_MAX;
	uint16_t x296 = UINT16_MAX;

    t71 = (x293==((x294==x295)/x296));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = INT8_MAX;
	uint16_t x298 = 117U;
	int32_t x299 = -1;
	int8_t x300 = INT8_MIN;
	volatile int32_t t72 = 28352762;

    t72 = (x297==((x298==x299)/x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x301 = INT64_MIN;
	int8_t x302 = INT8_MAX;
	volatile int64_t x303 = INT64_MIN;
	volatile int32_t t73 = -2726;

    t73 = (x301==((x302==x303)/x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x306 = 460U;
	uint64_t x307 = UINT64_MAX;
	uint32_t x308 = 3216U;
	static volatile int32_t t74 = 677764;

    t74 = (x305==((x306==x307)/x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x309 = INT32_MAX;
	int16_t x310 = INT16_MIN;
	int64_t x311 = 0LL;
	static volatile int32_t t75 = 59895;

    t75 = (x309==((x310==x311)/x312));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	volatile int8_t x314 = INT8_MIN;
	uint16_t x315 = UINT16_MAX;
	volatile uint64_t x316 = 183717166LLU;
	int32_t t76 = -32692934;

    t76 = (x313==((x314==x315)/x316));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x318 = INT32_MIN;
	int16_t x319 = INT16_MAX;
	int8_t x320 = INT8_MIN;
	static volatile int32_t t77 = -47549;

    t77 = (x317==((x318==x319)/x320));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint16_t x322 = UINT16_MAX;
	int32_t x323 = INT32_MIN;
	static int8_t x324 = -1;
	volatile int32_t t78 = 314409457;

    t78 = (x321==((x322==x323)/x324));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x325 = INT64_MIN;
	uint16_t x326 = UINT16_MAX;
	uint64_t x327 = UINT64_MAX;
	static uint32_t x328 = UINT32_MAX;

    t79 = (x325==((x326==x327)/x328));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x330 = -1;
	int32_t x331 = INT32_MIN;
	int32_t t80 = -1842;

    t80 = (x329==((x330==x331)/x332));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x333 = UINT32_MAX;
	int8_t x335 = INT8_MIN;
	static uint8_t x336 = 112U;

    t81 = (x333==((x334==x335)/x336));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x337 = INT32_MIN;
	volatile uint16_t x338 = 21U;
	uint64_t x339 = 14846285668837LLU;
	static int64_t x340 = -1LL;
	int32_t t82 = -10248071;

    t82 = (x337==((x338==x339)/x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x341 = 394LLU;
	static int8_t x342 = 10;
	int32_t x343 = INT32_MAX;
	volatile int64_t x344 = INT64_MIN;
	static volatile int32_t t83 = 4181694;

    t83 = (x341==((x342==x343)/x344));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x345 = -44;
	static int32_t x346 = 220;
	volatile uint8_t x347 = UINT8_MAX;
	volatile int32_t t84 = -135679;

    t84 = (x345==((x346==x347)/x348));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x349 = 15470;
	int32_t x351 = INT32_MIN;
	uint32_t x352 = UINT32_MAX;
	int32_t t85 = 1;

    t85 = (x349==((x350==x351)/x352));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x353 = 7U;
	static int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MAX;

    t86 = (x353==((x354==x355)/x356));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x357 = INT64_MIN;
	volatile int32_t x360 = INT32_MIN;
	int32_t t87 = -7;

    t87 = (x357==((x358==x359)/x360));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x361 = -114LL;
	static uint16_t x362 = 10U;
	static int16_t x363 = INT16_MAX;
	int64_t x364 = INT64_MIN;

    t88 = (x361==((x362==x363)/x364));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x365 = 549009230LLU;
	uint32_t x366 = 855339340U;
	static int64_t x367 = 320212065902291LL;
	static int32_t x368 = -669;
	static int32_t t89 = 255;

    t89 = (x365==((x366==x367)/x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x369 = 1U;
	volatile int16_t x370 = INT16_MAX;
	int32_t x371 = INT32_MIN;
	int8_t x372 = -1;
	volatile int32_t t90 = -2900524;

    t90 = (x369==((x370==x371)/x372));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x373 = 69061403273LL;
	int32_t x374 = INT32_MAX;
	static int16_t x375 = INT16_MIN;
	volatile uint16_t x376 = UINT16_MAX;
	volatile int32_t t91 = 5;

    t91 = (x373==((x374==x375)/x376));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x377 = -1;
	static int64_t x378 = -263366522LL;
	int32_t x379 = 95;
	int32_t x380 = -24667676;
	static volatile int32_t t92 = -9673;

    t92 = (x377==((x378==x379)/x380));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x381 = 7523185LLU;
	int16_t x382 = -6152;
	int64_t x383 = INT64_MIN;
	static int32_t x384 = INT32_MIN;
	volatile int32_t t93 = -31083;

    t93 = (x381==((x382==x383)/x384));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x385 = UINT16_MAX;
	volatile int32_t x386 = INT32_MIN;
	int8_t x388 = 57;
	static volatile int32_t t94 = 1;

    t94 = (x385==((x386==x387)/x388));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x389 = -1;
	int64_t x390 = -1LL;
	volatile int16_t x391 = INT16_MIN;
	int8_t x392 = INT8_MIN;
	int32_t t95 = -808744832;

    t95 = (x389==((x390==x391)/x392));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x394 = 68U;
	int8_t x395 = INT8_MIN;
	static int32_t x396 = -174955997;
	volatile int32_t t96 = -193;

    t96 = (x393==((x394==x395)/x396));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x398 = 138U;
	int16_t x399 = INT16_MIN;
	int32_t x400 = INT32_MIN;
	static int32_t t97 = 31;

    t97 = (x397==((x398==x399)/x400));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x401 = -1;
	int16_t x404 = INT16_MIN;
	volatile int32_t t98 = 99;

    t98 = (x401==((x402==x403)/x404));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x405 = UINT8_MAX;
	volatile int32_t x406 = 72216;

    t99 = (x405==((x406==x407)/x408));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x409 = 23U;
	int64_t x410 = INT64_MIN;
	uint64_t x411 = UINT64_MAX;
	int16_t x412 = -1;
	volatile int32_t t100 = -40624182;

    t100 = (x409==((x410==x411)/x412));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x413 = -6557933972845LL;
	uint8_t x414 = 11U;
	int16_t x415 = -1;
	int32_t x416 = -54224989;
	int32_t t101 = -16051130;

    t101 = (x413==((x414==x415)/x416));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x417 = INT64_MIN;
	int32_t x418 = INT32_MIN;
	uint32_t x419 = 2U;
	static volatile int8_t x420 = INT8_MIN;
	volatile int32_t t102 = -26495;

    t102 = (x417==((x418==x419)/x420));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x421 = INT16_MIN;
	uint16_t x422 = UINT16_MAX;
	int8_t x423 = -1;
	int32_t x424 = INT32_MIN;
	volatile int32_t t103 = 28905903;

    t103 = (x421==((x422==x423)/x424));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x425 = UINT64_MAX;
	int16_t x426 = INT16_MAX;
	uint32_t x427 = UINT32_MAX;
	static volatile int32_t t104 = -25332;

    t104 = (x425==((x426==x427)/x428));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x429 = INT32_MIN;
	uint32_t x431 = 193889549U;
	int32_t x432 = INT32_MIN;
	int32_t t105 = -44119;

    t105 = (x429==((x430==x431)/x432));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x434 = 7;
	int64_t x435 = -967872120378LL;
	int8_t x436 = 30;
	volatile int32_t t106 = -1;

    t106 = (x433==((x434==x435)/x436));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x438 = UINT64_MAX;
	uint16_t x439 = 0U;
	uint16_t x440 = 4U;

    t107 = (x437==((x438==x439)/x440));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x442 = 610U;
	int8_t x443 = 7;
	int32_t x444 = -23250711;
	static volatile int32_t t108 = -25;

    t108 = (x441==((x442==x443)/x444));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x447 = INT16_MAX;
	volatile uint8_t x448 = UINT8_MAX;
	int32_t t109 = 2718;

    t109 = (x445==((x446==x447)/x448));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x451 = 1054;
	uint64_t x452 = 257987574189519LLU;
	volatile int32_t t110 = 386678;

    t110 = (x449==((x450==x451)/x452));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x453 = -628;
	static uint8_t x454 = 0U;
	volatile int8_t x455 = -1;
	static int32_t x456 = -1;
	static int32_t t111 = 119;

    t111 = (x453==((x454==x455)/x456));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x457 = INT16_MIN;
	volatile uint32_t x458 = UINT32_MAX;
	uint32_t x459 = 1924609712U;
	volatile int32_t t112 = 1254;

    t112 = (x457==((x458==x459)/x460));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x461 = UINT16_MAX;
	static int64_t x462 = INT64_MIN;
	int16_t x464 = INT16_MAX;
	volatile int32_t t113 = 1;

    t113 = (x461==((x462==x463)/x464));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x465 = 1;
	int8_t x466 = INT8_MIN;
	int32_t x467 = -4;
	volatile int32_t t114 = 98376904;

    t114 = (x465==((x466==x467)/x468));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x469 = 51U;
	int8_t x470 = 1;
	uint32_t x471 = 22U;
	int16_t x472 = 7546;
	int32_t t115 = 232434;

    t115 = (x469==((x470==x471)/x472));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x473 = -8;
	volatile uint64_t x474 = 11390110686746LLU;
	int32_t x475 = INT32_MIN;
	static int32_t t116 = 327894803;

    t116 = (x473==((x474==x475)/x476));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x477 = INT8_MIN;
	int32_t x479 = -1;
	static volatile int16_t x480 = INT16_MIN;
	int32_t t117 = -704008561;

    t117 = (x477==((x478==x479)/x480));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x485 = INT8_MIN;
	int8_t x486 = INT8_MIN;
	volatile int16_t x488 = INT16_MAX;
	volatile int32_t t118 = 17119105;

    t118 = (x485==((x486==x487)/x488));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x489 = INT64_MAX;
	volatile int32_t x490 = INT32_MIN;
	int64_t x491 = 22LL;
	int64_t x492 = -1LL;
	static int32_t t119 = 1927677;

    t119 = (x489==((x490==x491)/x492));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x493 = UINT64_MAX;
	uint32_t x495 = 33372U;
	int32_t x496 = INT32_MIN;
	int32_t t120 = -5;

    t120 = (x493==((x494==x495)/x496));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x497 = -6;
	uint16_t x498 = 3U;
	uint32_t x500 = UINT32_MAX;

    t121 = (x497==((x498==x499)/x500));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x501 = INT64_MIN;
	int8_t x502 = -1;
	int16_t x503 = INT16_MIN;
	static int32_t x504 = -1;
	volatile int32_t t122 = 131288502;

    t122 = (x501==((x502==x503)/x504));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x505 = -1LL;
	int64_t x507 = INT64_MIN;
	int16_t x508 = -1;
	static volatile int32_t t123 = 156;

    t123 = (x505==((x506==x507)/x508));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x509 = INT8_MIN;
	int8_t x510 = INT8_MIN;
	static volatile int32_t t124 = -7;

    t124 = (x509==((x510==x511)/x512));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x514 = -1;
	int8_t x515 = -6;
	int64_t x516 = INT64_MIN;
	int32_t t125 = 35037;

    t125 = (x513==((x514==x515)/x516));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x517 = INT16_MIN;
	int8_t x519 = -15;
	int8_t x520 = INT8_MIN;
	int32_t t126 = -542988;

    t126 = (x517==((x518==x519)/x520));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x521 = -1;
	int16_t x522 = INT16_MIN;
	static uint64_t x523 = UINT64_MAX;
	static uint32_t x524 = 676U;
	volatile int32_t t127 = -94283;

    t127 = (x521==((x522==x523)/x524));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x526 = -1;
	static uint16_t x527 = UINT16_MAX;
	int8_t x528 = -7;
	int32_t t128 = 1;

    t128 = (x525==((x526==x527)/x528));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x529 = INT8_MAX;
	uint32_t x531 = 1U;
	static int8_t x532 = -1;

    t129 = (x529==((x530==x531)/x532));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x533 = INT16_MIN;
	volatile int8_t x534 = 3;
	int32_t x536 = INT32_MIN;
	int32_t t130 = 12;

    t130 = (x533==((x534==x535)/x536));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x537 = -1;
	int32_t x538 = INT32_MAX;
	int32_t x539 = INT32_MIN;
	int64_t x540 = -1LL;
	static volatile int32_t t131 = -313;

    t131 = (x537==((x538==x539)/x540));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x541 = UINT8_MAX;
	int16_t x542 = 26;
	uint16_t x544 = UINT16_MAX;
	volatile int32_t t132 = 1;

    t132 = (x541==((x542==x543)/x544));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x545 = 136621171428439LLU;
	volatile int64_t x547 = INT64_MAX;
	volatile int8_t x548 = INT8_MAX;
	static int32_t t133 = -1117;

    t133 = (x545==((x546==x547)/x548));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x549 = UINT8_MAX;
	int8_t x550 = -1;
	int32_t x551 = -1;
	int32_t t134 = 113;

    t134 = (x549==((x550==x551)/x552));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x553 = -3;
	uint8_t x554 = UINT8_MAX;
	int8_t x555 = INT8_MIN;
	int64_t x556 = 22605LL;
	volatile int32_t t135 = -410;

    t135 = (x553==((x554==x555)/x556));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x557 = INT16_MAX;
	int8_t x558 = INT8_MAX;
	static uint64_t x559 = UINT64_MAX;

    t136 = (x557==((x558==x559)/x560));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x561 = 21U;
	static uint64_t x562 = UINT64_MAX;
	volatile int32_t x563 = INT32_MAX;
	uint16_t x564 = 54U;
	static volatile int32_t t137 = 97;

    t137 = (x561==((x562==x563)/x564));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x565 = UINT32_MAX;
	static volatile uint64_t x568 = 3109549027683LLU;
	int32_t t138 = 3;

    t138 = (x565==((x566==x567)/x568));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x569 = 7U;
	volatile int16_t x570 = INT16_MAX;
	int8_t x571 = -1;
	volatile int64_t x572 = -1LL;
	volatile int32_t t139 = -108543290;

    t139 = (x569==((x570==x571)/x572));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x573 = -22;
	int8_t x574 = 59;
	uint16_t x575 = 11U;
	int16_t x576 = INT16_MIN;
	volatile int32_t t140 = -58;

    t140 = (x573==((x574==x575)/x576));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x577 = INT32_MIN;
	uint32_t x578 = UINT32_MAX;
	volatile uint32_t x579 = UINT32_MAX;
	volatile int32_t t141 = -12835691;

    t141 = (x577==((x578==x579)/x580));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x585 = -1;
	int16_t x586 = INT16_MIN;
	static volatile int8_t x587 = INT8_MIN;
	int16_t x588 = 357;
	volatile int32_t t142 = 24069720;

    t142 = (x585==((x586==x587)/x588));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x589 = 154U;
	volatile int64_t x590 = INT64_MIN;
	volatile int8_t x592 = -1;
	volatile int32_t t143 = 5058;

    t143 = (x589==((x590==x591)/x592));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x595 = INT32_MIN;

    t144 = (x593==((x594==x595)/x596));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x598 = UINT8_MAX;
	int32_t x599 = INT32_MIN;
	static int32_t t145 = 805001181;

    t145 = (x597==((x598==x599)/x600));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x601 = 12;
	volatile int64_t x602 = -1LL;
	int8_t x603 = -1;
	uint64_t x604 = UINT64_MAX;
	int32_t t146 = 1906;

    t146 = (x601==((x602==x603)/x604));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x605 = INT64_MIN;
	uint16_t x606 = 138U;
	static volatile int16_t x607 = INT16_MIN;
	volatile int64_t x608 = INT64_MAX;
	volatile int32_t t147 = -519;

    t147 = (x605==((x606==x607)/x608));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x610 = 12;

    t148 = (x609==((x610==x611)/x612));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x613 = 0;
	static int16_t x616 = 369;
	static volatile int32_t t149 = 4895643;

    t149 = (x613==((x614==x615)/x616));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x617 = INT8_MAX;
	int64_t x618 = -709345LL;
	uint8_t x619 = 3U;
	int32_t x620 = -1;
	int32_t t150 = -127271716;

    t150 = (x617==((x618==x619)/x620));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x622 = 53;
	int16_t x624 = -1;
	volatile int32_t t151 = -230;

    t151 = (x621==((x622==x623)/x624));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x629 = INT32_MAX;
	volatile int32_t x630 = INT32_MAX;
	int64_t x631 = -1LL;
	volatile int32_t t152 = -1;

    t152 = (x629==((x630==x631)/x632));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x633 = -87;
	static volatile int32_t x634 = -1;
	int32_t x635 = INT32_MIN;
	static int8_t x636 = INT8_MAX;
	volatile int32_t t153 = 15;

    t153 = (x633==((x634==x635)/x636));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x638 = INT32_MAX;
	static uint64_t x639 = 929LLU;
	int64_t x640 = INT64_MIN;
	volatile int32_t t154 = 2145;

    t154 = (x637==((x638==x639)/x640));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x642 = -1LL;
	int16_t x643 = INT16_MIN;
	volatile uint32_t x644 = 46U;
	volatile int32_t t155 = 3923085;

    t155 = (x641==((x642==x643)/x644));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x647 = INT32_MIN;
	int16_t x648 = INT16_MAX;

    t156 = (x645==((x646==x647)/x648));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x650 = INT16_MIN;
	uint64_t x651 = UINT64_MAX;
	static uint64_t x652 = 2355LLU;
	volatile int32_t t157 = -257476233;

    t157 = (x649==((x650==x651)/x652));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x653 = INT16_MIN;
	volatile int32_t x654 = 194287;
	int32_t x655 = -1;
	int8_t x656 = INT8_MAX;
	static int32_t t158 = -139780503;

    t158 = (x653==((x654==x655)/x656));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x657 = INT64_MIN;
	int32_t x658 = 2547;
	int16_t x659 = -1;
	int8_t x660 = 58;
	int32_t t159 = -223899784;

    t159 = (x657==((x658==x659)/x660));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x661 = 1;
	static uint16_t x662 = 4455U;
	int16_t x663 = INT16_MIN;
	volatile int8_t x664 = INT8_MAX;
	int32_t t160 = -118;

    t160 = (x661==((x662==x663)/x664));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x665 = 3;
	int8_t x666 = 1;
	int64_t x667 = INT64_MAX;
	volatile int32_t t161 = 594;

    t161 = (x665==((x666==x667)/x668));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x669 = INT64_MIN;
	int8_t x671 = INT8_MAX;
	uint32_t x672 = 113U;
	volatile int32_t t162 = -623765741;

    t162 = (x669==((x670==x671)/x672));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x673 = -1LL;
	int16_t x675 = -47;
	int16_t x676 = INT16_MIN;
	volatile int32_t t163 = -224469096;

    t163 = (x673==((x674==x675)/x676));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x681 = 152U;
	int16_t x682 = 2012;
	int16_t x683 = -9029;
	volatile int32_t t164 = 329;

    t164 = (x681==((x682==x683)/x684));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x685 = UINT64_MAX;
	static int32_t x686 = INT32_MIN;
	int8_t x687 = -62;
	static int32_t x688 = INT32_MIN;

    t165 = (x685==((x686==x687)/x688));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x689 = INT64_MIN;
	uint32_t x690 = UINT32_MAX;
	uint8_t x691 = UINT8_MAX;
	uint32_t x692 = 79901U;
	volatile int32_t t166 = -169940011;

    t166 = (x689==((x690==x691)/x692));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x697 = -1;
	int32_t x698 = 9258;
	static int32_t x699 = INT32_MIN;
	static int64_t x700 = INT64_MAX;

    t167 = (x697==((x698==x699)/x700));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x701 = 1U;
	int16_t x702 = -1;
	int32_t x703 = INT32_MAX;
	uint8_t x704 = UINT8_MAX;
	volatile int32_t t168 = -7186;

    t168 = (x701==((x702==x703)/x704));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x708 = INT8_MIN;
	int32_t t169 = -39870734;

    t169 = (x705==((x706==x707)/x708));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x709 = INT64_MIN;
	uint64_t x710 = 602153889236LLU;
	uint32_t x711 = 739398942U;
	uint16_t x712 = 37U;
	volatile int32_t t170 = -627;

    t170 = (x709==((x710==x711)/x712));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x713 = 210210623LLU;
	static uint32_t x714 = UINT32_MAX;
	static int64_t x715 = -1LL;
	uint16_t x716 = UINT16_MAX;
	int32_t t171 = -12208;

    t171 = (x713==((x714==x715)/x716));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x717 = INT8_MAX;
	uint64_t x718 = UINT64_MAX;
	uint16_t x720 = 14U;

    t172 = (x717==((x718==x719)/x720));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x721 = INT64_MIN;
	static int8_t x722 = -31;
	int8_t x723 = INT8_MAX;
	static volatile uint32_t x724 = 243891511U;
	int32_t t173 = -58259859;

    t173 = (x721==((x722==x723)/x724));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x725 = INT64_MIN;
	uint16_t x727 = 149U;
	static int32_t x728 = INT32_MIN;
	volatile int32_t t174 = 440841614;

    t174 = (x725==((x726==x727)/x728));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x730 = UINT64_MAX;
	int32_t x731 = INT32_MIN;
	uint8_t x732 = UINT8_MAX;

    t175 = (x729==((x730==x731)/x732));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x733 = UINT32_MAX;
	uint32_t x734 = 954014U;
	int32_t x735 = -1;
	uint16_t x736 = UINT16_MAX;
	static volatile int32_t t176 = 27;

    t176 = (x733==((x734==x735)/x736));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x737 = INT16_MIN;
	int32_t x738 = INT32_MIN;
	uint16_t x739 = 85U;
	volatile int64_t x740 = INT64_MIN;
	volatile int32_t t177 = 0;

    t177 = (x737==((x738==x739)/x740));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x741 = INT8_MIN;
	volatile int32_t x743 = -21835415;
	static uint8_t x744 = 24U;
	int32_t t178 = 14570;

    t178 = (x741==((x742==x743)/x744));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x745 = INT8_MIN;
	int32_t x746 = 10;
	volatile int8_t x747 = INT8_MIN;
	static uint8_t x748 = 119U;
	volatile int32_t t179 = 685140;

    t179 = (x745==((x746==x747)/x748));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x749 = INT16_MAX;
	int8_t x750 = INT8_MIN;
	volatile uint8_t x751 = 6U;
	volatile int32_t t180 = 350000;

    t180 = (x749==((x750==x751)/x752));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x753 = INT64_MAX;
	int8_t x754 = INT8_MIN;
	static volatile int8_t x756 = 1;
	static int32_t t181 = 9792041;

    t181 = (x753==((x754==x755)/x756));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x757 = INT64_MAX;
	static uint8_t x758 = 1U;
	uint32_t x759 = UINT32_MAX;
	static int32_t t182 = -67;

    t182 = (x757==((x758==x759)/x760));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x761 = -1LL;
	int8_t x762 = INT8_MAX;
	int64_t x763 = INT64_MIN;
	uint16_t x764 = 552U;
	int32_t t183 = 190813028;

    t183 = (x761==((x762==x763)/x764));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x765 = 54LL;
	int16_t x766 = INT16_MAX;
	int8_t x768 = -1;

    t184 = (x765==((x766==x767)/x768));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x769 = -1;
	int64_t x770 = -520626513748184LL;
	uint64_t x771 = 1529738LLU;
	static uint16_t x772 = UINT16_MAX;
	volatile int32_t t185 = 1345851;

    t185 = (x769==((x770==x771)/x772));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint32_t x773 = UINT32_MAX;
	uint64_t x774 = UINT64_MAX;
	volatile int8_t x775 = 1;
	uint32_t x776 = 50492448U;
	int32_t t186 = -3426;

    t186 = (x773==((x774==x775)/x776));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x777 = INT64_MIN;
	int16_t x778 = 118;
	int32_t x780 = 4144;
	volatile int32_t t187 = -160951301;

    t187 = (x777==((x778==x779)/x780));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x781 = UINT64_MAX;
	int64_t x783 = -1LL;
	static uint16_t x784 = 32379U;

    t188 = (x781==((x782==x783)/x784));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x785 = INT64_MIN;
	int32_t x786 = INT32_MAX;
	uint64_t x788 = UINT64_MAX;
	int32_t t189 = -1731342;

    t189 = (x785==((x786==x787)/x788));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x792 = UINT64_MAX;

    t190 = (x789==((x790==x791)/x792));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x793 = 112U;
	int16_t x794 = INT16_MAX;
	static int16_t x795 = -1;
	static uint16_t x796 = 379U;
	volatile int32_t t191 = 5261;

    t191 = (x793==((x794==x795)/x796));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x797 = -1LL;
	static int16_t x798 = INT16_MIN;
	int16_t x799 = 467;
	int8_t x800 = INT8_MIN;
	static int32_t t192 = 17178;

    t192 = (x797==((x798==x799)/x800));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x801 = INT64_MIN;
	static int64_t x803 = INT64_MIN;
	int8_t x804 = -1;
	volatile int32_t t193 = 0;

    t193 = (x801==((x802==x803)/x804));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x805 = -1;
	int16_t x806 = INT16_MIN;
	int64_t x807 = -1LL;
	int8_t x808 = 58;
	volatile int32_t t194 = 22697081;

    t194 = (x805==((x806==x807)/x808));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x809 = INT8_MIN;
	static uint16_t x810 = 230U;
	int32_t t195 = 371191;

    t195 = (x809==((x810==x811)/x812));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x813 = INT8_MIN;
	static volatile int8_t x815 = 0;
	int8_t x816 = INT8_MIN;
	volatile int32_t t196 = -64513612;

    t196 = (x813==((x814==x815)/x816));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x817 = UINT64_MAX;
	uint8_t x818 = 13U;
	volatile uint64_t x819 = UINT64_MAX;
	int8_t x820 = 24;
	int32_t t197 = -109555433;

    t197 = (x817==((x818==x819)/x820));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x822 = INT32_MIN;
	static uint64_t x823 = UINT64_MAX;
	volatile uint16_t x824 = 7U;
	volatile int32_t t198 = -1;

    t198 = (x821==((x822==x823)/x824));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x825 = INT64_MIN;
	uint8_t x826 = 0U;
	int64_t x827 = INT64_MIN;
	volatile int32_t t199 = 442;

    t199 = (x825==((x826==x827)/x828));

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

