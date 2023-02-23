
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

static int8_t x2 = INT8_MIN;
int8_t x6 = 9;
static int32_t x9 = INT32_MIN;
int8_t x11 = 2;
int8_t x16 = INT8_MIN;
volatile int32_t t3 = INT32_MIN;
int32_t x18 = -1;
uint64_t x19 = UINT64_MAX;
volatile int8_t x21 = INT8_MIN;
int16_t x30 = 194;
uint64_t x38 = 1017368054403LLU;
uint16_t x39 = 8U;
volatile int64_t x46 = -1LL;
static uint8_t x48 = 3U;
uint64_t x49 = 112LLU;
static int64_t x50 = INT64_MAX;
uint8_t x55 = 3U;
int64_t x60 = INT64_MIN;
volatile int64_t t14 = INT64_MIN;
static int8_t x63 = 3;
uint8_t x69 = 14U;
int32_t t17 = 17558;
static volatile int32_t t18 = INT32_MIN;
int8_t x87 = -57;
int64_t t21 = 286068475943172LL;
int32_t x89 = -1;
volatile int64_t x94 = INT64_MIN;
uint64_t x99 = 33170897674023LLU;
volatile int32_t t24 = 914008;
static int32_t t27 = 6815;
int64_t x116 = INT64_MAX;
int8_t x122 = -1;
volatile uint16_t x128 = UINT16_MAX;
volatile int32_t t31 = -5;
volatile int16_t x130 = -1;
int32_t x131 = INT32_MIN;
int8_t x139 = 0;
static int8_t x142 = -1;
volatile uint32_t x147 = 85917856U;
volatile int16_t x150 = 163;
int16_t x160 = -1;
int64_t x164 = INT64_MAX;
int32_t x165 = -125257;
static int16_t x167 = INT16_MAX;
volatile int32_t t41 = -201992697;
volatile int32_t x169 = -542500755;
volatile uint16_t x170 = 53U;
uint32_t x171 = UINT32_MAX;
static int8_t x174 = INT8_MIN;
volatile int32_t x176 = 258396605;
volatile int16_t x178 = INT16_MIN;
static int8_t x179 = INT8_MIN;
volatile int32_t t44 = -113644;
int64_t x181 = INT64_MIN;
int64_t x191 = -151LL;
static int32_t t47 = 739855345;
int32_t x194 = 412433452;
volatile int32_t x197 = INT32_MIN;
int16_t x198 = -7;
int64_t x199 = 3822066423772LL;
int16_t x201 = INT16_MIN;
uint8_t x202 = UINT8_MAX;
int32_t x203 = INT32_MIN;
int32_t x204 = INT32_MAX;
int64_t x205 = -56109794LL;
int8_t x208 = INT8_MAX;
volatile int64_t t51 = -1161013LL;
static uint16_t x209 = 18U;
static int16_t x213 = -1;
uint32_t x222 = 856U;
volatile int32_t x223 = INT32_MIN;
volatile int8_t x225 = INT8_MIN;
volatile int8_t x230 = -1;
int16_t x235 = -9;
int8_t x242 = INT8_MAX;
int32_t x244 = INT32_MAX;
uint16_t x246 = UINT16_MAX;
volatile uint64_t x247 = UINT64_MAX;
int64_t x251 = INT64_MAX;
uint16_t x254 = 1U;
volatile uint32_t t63 = 2650240U;
int16_t x259 = -1;
int32_t t64 = 82;
volatile uint32_t x270 = UINT32_MAX;
int64_t x271 = INT64_MIN;
int64_t x273 = INT64_MIN;
volatile int16_t x279 = INT16_MAX;
uint32_t x280 = 45552U;
int32_t x283 = INT32_MIN;
int32_t t71 = 392595;
uint8_t x296 = UINT8_MAX;
int8_t x299 = -31;
int32_t x301 = INT32_MIN;
uint16_t x306 = UINT16_MAX;
volatile int32_t t77 = 13769;
int8_t x317 = INT8_MIN;
static volatile int64_t x329 = -1LL;
uint8_t x334 = 0U;
static volatile int32_t x338 = 4653679;
uint16_t x340 = UINT16_MAX;
uint32_t x348 = 0U;
int64_t x355 = INT64_MIN;
int16_t x361 = -1;
uint16_t x364 = 1U;
static uint8_t x368 = UINT8_MAX;
int32_t t91 = -36561183;
int8_t x369 = INT8_MAX;
int8_t x375 = -59;
static uint64_t t93 = UINT64_MAX;
static int16_t x377 = -1;
static volatile int64_t t95 = INT64_MIN;
static int32_t x402 = -74;
volatile uint8_t x409 = 1U;
uint16_t x415 = 0U;
int64_t t103 = 7288630481LL;
volatile int16_t x422 = -1;
uint16_t x424 = UINT16_MAX;
int64_t x429 = INT64_MIN;
uint64_t x432 = 22030260404733128LLU;
volatile int64_t t107 = INT64_MIN;
int32_t x435 = INT32_MIN;
uint64_t x443 = 5002135721LLU;
int64_t x444 = -53949111635189LL;
volatile int32_t x446 = INT32_MAX;
volatile int32_t x450 = -35434;
volatile int64_t t112 = 6402LL;
static volatile uint16_t x455 = 517U;
uint8_t x457 = 14U;
static int8_t x458 = INT8_MAX;
int16_t x460 = INT16_MAX;
static int32_t x461 = INT32_MAX;
volatile uint8_t x463 = 8U;
volatile int32_t t116 = -11518;
static int32_t x474 = INT32_MAX;
volatile int16_t x489 = -1;
static volatile int32_t t122 = -181824;
uint8_t x493 = 1U;
uint64_t x496 = UINT64_MAX;
volatile int64_t t124 = 99LL;
volatile int64_t t126 = INT64_MAX;
int8_t x513 = INT8_MAX;
int64_t x521 = INT64_MIN;
int32_t x525 = INT32_MAX;
int32_t x530 = INT32_MAX;
uint32_t x531 = 162404U;
volatile int32_t t132 = -1;
uint32_t x534 = 60009095U;
volatile int32_t t133 = 41741;
volatile int32_t t134 = -15251698;
static uint32_t x545 = 64551U;
volatile uint32_t t136 = 236U;
uint8_t x554 = 0U;
int16_t x556 = INT16_MIN;
uint64_t t138 = 485810824LLU;
uint16_t x557 = 2U;
int64_t x558 = INT64_MIN;
volatile int32_t t139 = 218;
uint32_t x561 = UINT32_MAX;
static int32_t x569 = INT32_MIN;
volatile uint64_t x572 = 1531618757896LLU;
volatile int8_t x584 = INT8_MAX;
int32_t t145 = INT32_MIN;
static int8_t x585 = INT8_MAX;
volatile int32_t x594 = -5;
static int8_t x597 = -1;
static volatile int8_t x598 = -16;
static volatile int64_t x600 = 248972639LL;
int8_t x604 = INT8_MIN;
int32_t x606 = INT32_MIN;
static uint64_t x621 = 26880254167LLU;
uint64_t t155 = 1316LLU;
static volatile int32_t t156 = INT32_MIN;
uint8_t x631 = 0U;
volatile int32_t t159 = 213;
uint64_t x646 = 87557160223LLU;
int16_t x657 = INT16_MIN;
int32_t x663 = INT32_MIN;
uint8_t x666 = 69U;
int16_t x670 = INT16_MIN;
int16_t x672 = -1;
uint8_t x673 = 29U;
uint64_t x676 = 4953889068381LLU;
uint64_t x682 = 3564621LLU;
uint8_t x684 = UINT8_MAX;
volatile int32_t x685 = INT32_MAX;
uint64_t x688 = 21245227711025LLU;
volatile int32_t t171 = INT32_MAX;
volatile uint64_t x691 = 59LLU;
int32_t x692 = INT32_MIN;
volatile uint64_t x698 = 230LLU;
volatile uint16_t x707 = 26371U;
volatile uint16_t x710 = UINT16_MAX;
int8_t x711 = INT8_MIN;
static int32_t t177 = 0;
int64_t x713 = -1LL;
uint8_t x716 = UINT8_MAX;
volatile int64_t t178 = 16174740425LL;
volatile int64_t x720 = INT64_MIN;
static volatile int64_t t179 = 62127989LL;
static int32_t x723 = 6276;
volatile int32_t t180 = -1645;
static volatile int32_t t181 = -1053047374;
int8_t x733 = INT8_MIN;
int32_t x741 = INT32_MIN;
int8_t x742 = 7;
volatile int64_t x743 = -1LL;
volatile int32_t t185 = 917768400;
int32_t x745 = -9352471;
volatile int32_t x747 = INT32_MIN;
volatile int8_t x748 = INT8_MIN;
static volatile int32_t t186 = -4730382;
int16_t x750 = -1;
static int8_t x752 = -5;
int32_t t187 = 1;
volatile uint16_t x756 = UINT16_MAX;
int64_t x758 = -1LL;
int16_t x759 = INT16_MIN;
static uint8_t x760 = 5U;
static volatile int32_t t189 = INT32_MIN;
int8_t x762 = INT8_MAX;
int32_t t190 = 1635;
static int32_t x768 = INT32_MIN;
int16_t x769 = -1;
int64_t x779 = INT64_MIN;
static int64_t x785 = 1552187354326LL;
int8_t x789 = INT8_MAX;
int64_t x795 = 51917LL;
int8_t x796 = INT8_MAX;
static volatile int64_t t198 = -65406740827936LL;
int16_t x798 = -15;


void f0(void) {
    	uint8_t x1 = 42U;
	int64_t x3 = INT64_MIN;
	uint16_t x4 = 1786U;
	volatile int32_t t0 = 7121001;

    t0 = (x1+((x2>x3)==x4));

    if (t0 != 42) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = 36;
	volatile int32_t x7 = -3041575;
	static int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = -27915;

    t1 = (x5+((x6>x7)==x8));

    if (t1 != 36) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MIN;
	int8_t x12 = INT8_MAX;
	int32_t t2 = INT32_MIN;

    t2 = (x9+((x10>x11)==x12));

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	uint32_t x14 = UINT32_MAX;
	int64_t x15 = 5722004LL;

    t3 = (x13+((x14>x15)==x16));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	uint8_t x20 = 30U;
	volatile int64_t t4 = INT64_MIN;

    t4 = (x17+((x18>x19)==x20));

    if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = INT64_MIN;
	volatile int16_t x23 = -1;
	uint16_t x24 = UINT16_MAX;
	static volatile int32_t t5 = -35503;

    t5 = (x21+((x22>x23)==x24));

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	int32_t x26 = INT32_MIN;
	int32_t x27 = -1;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 182921441;

    t6 = (x25+((x26>x27)==x28));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x29 = INT64_MIN;
	volatile uint8_t x31 = UINT8_MAX;
	volatile int16_t x32 = 37;
	int64_t t7 = INT64_MIN;

    t7 = (x29+((x30>x31)==x32));

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = UINT32_MAX;
	int8_t x34 = 57;
	uint16_t x35 = 1114U;
	uint16_t x36 = 1711U;
	uint32_t t8 = UINT32_MAX;

    t8 = (x33+((x34>x35)==x36));

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MIN;
	int32_t x40 = -1;
	volatile int32_t t9 = -2795112;

    t9 = (x37+((x38>x39)==x40));

    if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	static uint8_t x42 = UINT8_MAX;
	static int32_t x43 = INT32_MIN;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = INT32_MAX;

    t10 = (x41+((x42>x43)==x44));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 1486525829LLU;
	int8_t x47 = INT8_MAX;
	uint64_t t11 = 13492619958LLU;

    t11 = (x45+((x46>x47)==x48));

    if (t11 != 1486525829LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x51 = 117U;
	uint8_t x52 = 14U;
	static volatile uint64_t t12 = 218030681951LLU;

    t12 = (x49+((x50>x51)==x52));

    if (t12 != 112LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 60879U;
	static volatile int8_t x54 = -1;
	int64_t x56 = INT64_MIN;
	uint32_t t13 = 29571282U;

    t13 = (x53+((x54>x55)==x56));

    if (t13 != 60879U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = INT64_MIN;
	uint8_t x58 = 0U;
	uint32_t x59 = 13U;

    t14 = (x57+((x58>x59)==x60));

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = -29335178;
	static int16_t x62 = -1;
	uint64_t x64 = UINT64_MAX;
	int32_t t15 = 365;

    t15 = (x61+((x62>x63)==x64));

    if (t15 != -29335178) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MAX;
	volatile int64_t x66 = INT64_MIN;
	volatile uint32_t x67 = 5U;
	int64_t x68 = -1LL;
	volatile int64_t t16 = INT64_MAX;

    t16 = (x65+((x66>x67)==x68));

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x70 = INT32_MIN;
	int16_t x71 = -1;
	static int16_t x72 = -1;

    t17 = (x69+((x70>x71)==x72));

    if (t17 != 14) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = INT32_MIN;
	int64_t x74 = -4374082LL;
	int16_t x75 = 2;
	int16_t x76 = -1;

    t18 = (x73+((x74>x75)==x76));

    if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x77 = 63219859617418087LLU;
	uint64_t x78 = 136240040917LLU;
	volatile uint32_t x79 = 44678266U;
	int64_t x80 = INT64_MIN;
	uint64_t t19 = 230698LLU;

    t19 = (x77+((x78>x79)==x80));

    if (t19 != 63219859617418087LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = UINT8_MAX;
	static uint32_t x82 = 0U;
	int32_t x83 = INT32_MIN;
	int16_t x84 = INT16_MAX;
	int32_t t20 = -1236640;

    t20 = (x81+((x82>x83)==x84));

    if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -1LL;
	uint64_t x86 = 114184229584999656LLU;
	volatile int64_t x88 = INT64_MIN;

    t21 = (x85+((x86>x87)==x88));

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x90 = -1;
	uint32_t x91 = UINT32_MAX;
	int16_t x92 = -5834;
	static int32_t t22 = 809711443;

    t22 = (x89+((x90>x91)==x92));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = 20;
	static int64_t x95 = INT64_MIN;
	int8_t x96 = -25;
	volatile int32_t t23 = 1645105;

    t23 = (x93+((x94>x95)==x96));

    if (t23 != 20) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MAX;
	static int64_t x98 = -1LL;
	int64_t x100 = INT64_MIN;

    t24 = (x97+((x98>x99)==x100));

    if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 0U;
	volatile uint64_t x102 = UINT64_MAX;
	volatile int64_t x103 = INT64_MIN;
	int64_t x104 = INT64_MIN;
	int32_t t25 = -352;

    t25 = (x101+((x102>x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MAX;
	uint8_t x107 = 16U;
	uint64_t x108 = 1601669155762580845LLU;
	int32_t t26 = 119466701;

    t26 = (x105+((x106>x107)==x108));

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 1;
	uint64_t x110 = UINT64_MAX;
	uint16_t x111 = UINT16_MAX;
	volatile int64_t x112 = INT64_MAX;

    t27 = (x109+((x110>x111)==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MIN;
	uint16_t x114 = 114U;
	int64_t x115 = -5489061644920144LL;
	int32_t t28 = INT32_MIN;

    t28 = (x113+((x114>x115)==x116));

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x117 = -1;
	volatile uint8_t x118 = 8U;
	static uint8_t x119 = 21U;
	int64_t x120 = 38346624889573784LL;
	int32_t t29 = 14626;

    t29 = (x117+((x118>x119)==x120));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	int32_t x123 = 56259545;
	int16_t x124 = -1;
	volatile int32_t t30 = -4575;

    t30 = (x121+((x122>x123)==x124));

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 864U;
	int8_t x126 = -4;
	static uint16_t x127 = 272U;

    t31 = (x125+((x126>x127)==x128));

    if (t31 != 864) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	volatile int32_t x132 = INT32_MIN;
	volatile int32_t t32 = -3;

    t32 = (x129+((x130>x131)==x132));

    if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x133 = -502601LL;
	int16_t x134 = INT16_MAX;
	uint32_t x135 = 185U;
	int64_t x136 = INT64_MAX;
	static volatile int64_t t33 = -4817120700LL;

    t33 = (x133+((x134>x135)==x136));

    if (t33 != -502601LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x137 = -1925;
	int16_t x138 = INT16_MIN;
	int16_t x140 = -1;
	int32_t t34 = 1376387;

    t34 = (x137+((x138>x139)==x140));

    if (t34 != -1925) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MAX;
	volatile int64_t x143 = INT64_MIN;
	uint64_t x144 = 248147LLU;
	int32_t t35 = 7221;

    t35 = (x141+((x142>x143)==x144));

    if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x145 = INT32_MIN;
	uint16_t x146 = UINT16_MAX;
	uint16_t x148 = 288U;
	static volatile int32_t t36 = INT32_MIN;

    t36 = (x145+((x146>x147)==x148));

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 0LLU;
	static volatile int8_t x151 = INT8_MIN;
	int16_t x152 = INT16_MIN;
	uint64_t t37 = 16071139LLU;

    t37 = (x149+((x150>x151)==x152));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 57U;
	int16_t x154 = -1213;
	int64_t x155 = INT64_MIN;
	int16_t x156 = 549;
	volatile uint32_t t38 = 2658U;

    t38 = (x153+((x154>x155)==x156));

    if (t38 != 57U) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x157 = 3927617803LLU;
	static volatile int64_t x158 = -41757818327LL;
	int16_t x159 = -1;
	uint64_t t39 = 580272LLU;

    t39 = (x157+((x158>x159)==x160));

    if (t39 != 3927617803LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x161 = 16018U;
	volatile int8_t x162 = INT8_MAX;
	int64_t x163 = -1LL;
	volatile int32_t t40 = 108;

    t40 = (x161+((x162>x163)==x164));

    if (t40 != 16018) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x166 = 0;
	volatile int16_t x168 = INT16_MIN;

    t41 = (x165+((x166>x167)==x168));

    if (t41 != -125257) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x172 = INT32_MIN;
	int32_t t42 = 1533;

    t42 = (x169+((x170>x171)==x172));

    if (t42 != -542500755) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = UINT32_MAX;
	static uint8_t x175 = 75U;
	static volatile uint32_t t43 = UINT32_MAX;

    t43 = (x173+((x174>x175)==x176));

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = 1;
	int32_t x180 = 78010250;

    t44 = (x177+((x178>x179)==x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = 390;
	volatile int32_t x183 = 15847155;
	uint16_t x184 = UINT16_MAX;
	static volatile int64_t t45 = INT64_MIN;

    t45 = (x181+((x182>x183)==x184));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	int8_t x186 = INT8_MAX;
	volatile uint64_t x187 = 930669LLU;
	static uint8_t x188 = 0U;
	static volatile int32_t t46 = 0;

    t46 = (x185+((x186>x187)==x188));

    if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = INT16_MAX;
	int16_t x190 = 1;
	uint8_t x192 = 3U;

    t47 = (x189+((x190>x191)==x192));

    if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	volatile int8_t x195 = -7;
	volatile int8_t x196 = INT8_MIN;
	static int32_t t48 = INT32_MIN;

    t48 = (x193+((x194>x195)==x196));

    if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x200 = 25528U;
	static int32_t t49 = INT32_MIN;

    t49 = (x197+((x198>x199)==x200));

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t t50 = 501753;

    t50 = (x201+((x202>x203)==x204));

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x206 = -1;
	static uint8_t x207 = 13U;

    t51 = (x205+((x206>x207)==x208));

    if (t51 != -56109794LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MIN;
	int32_t t52 = -869656;

    t52 = (x209+((x210>x211)==x212));

    if (t52 != 18) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x214 = 6053020U;
	int8_t x215 = INT8_MIN;
	volatile uint32_t x216 = 349U;
	int32_t t53 = 4748;

    t53 = (x213+((x214>x215)==x216));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x217 = 1;
	volatile int8_t x218 = -1;
	int32_t x219 = INT32_MIN;
	int64_t x220 = 41201LL;
	int32_t t54 = 23153100;

    t54 = (x217+((x218>x219)==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x221 = 45172;
	volatile uint16_t x224 = 103U;
	volatile int32_t t55 = -13455;

    t55 = (x221+((x222>x223)==x224));

    if (t55 != 45172) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x226 = -1LL;
	static uint64_t x227 = 130LLU;
	static int8_t x228 = INT8_MIN;
	int32_t t56 = 2695;

    t56 = (x225+((x226>x227)==x228));

    if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x229 = 113770689746145518LLU;
	volatile uint16_t x231 = UINT16_MAX;
	static volatile uint8_t x232 = UINT8_MAX;
	static uint64_t t57 = 4129475039486LLU;

    t57 = (x229+((x230>x231)==x232));

    if (t57 != 113770689746145518LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x233 = 59U;
	int16_t x234 = INT16_MIN;
	uint16_t x236 = UINT16_MAX;
	static volatile int32_t t58 = -78;

    t58 = (x233+((x234>x235)==x236));

    if (t58 != 59) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = 21765LL;
	int8_t x238 = 3;
	int16_t x239 = INT16_MIN;
	int32_t x240 = 22;
	volatile int64_t t59 = 1480680431LL;

    t59 = (x237+((x238>x239)==x240));

    if (t59 != 21765LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x241 = 1U;
	volatile int16_t x243 = INT16_MAX;
	int32_t t60 = -3;

    t60 = (x241+((x242>x243)==x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MAX;
	int32_t x248 = INT32_MAX;
	volatile int64_t t61 = INT64_MAX;

    t61 = (x245+((x246>x247)==x248));

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x249 = 0U;
	static uint16_t x250 = UINT16_MAX;
	int16_t x252 = INT16_MIN;
	static int32_t t62 = -275;

    t62 = (x249+((x250>x251)==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 24U;
	int64_t x255 = 23740258LL;
	uint32_t x256 = UINT32_MAX;

    t63 = (x253+((x254>x255)==x256));

    if (t63 != 24U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -3667;
	int8_t x258 = -1;
	static int8_t x260 = -1;

    t64 = (x257+((x258>x259)==x260));

    if (t64 != -3667) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = INT64_MIN;
	uint64_t x262 = UINT64_MAX;
	int8_t x263 = INT8_MIN;
	volatile int32_t x264 = INT32_MAX;
	static volatile int64_t t65 = INT64_MIN;

    t65 = (x261+((x262>x263)==x264));

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x265 = INT32_MIN;
	volatile int16_t x266 = -1;
	static uint32_t x267 = 61714125U;
	static int32_t x268 = INT32_MAX;
	volatile int32_t t66 = INT32_MIN;

    t66 = (x265+((x266>x267)==x268));

    if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x269 = UINT64_MAX;
	uint8_t x272 = UINT8_MAX;
	static volatile uint64_t t67 = UINT64_MAX;

    t67 = (x269+((x270>x271)==x272));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x274 = INT32_MIN;
	uint16_t x275 = 0U;
	volatile int32_t x276 = INT32_MAX;
	volatile int64_t t68 = INT64_MIN;

    t68 = (x273+((x274>x275)==x276));

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x277 = INT64_MIN;
	uint8_t x278 = 9U;
	int64_t t69 = INT64_MIN;

    t69 = (x277+((x278>x279)==x280));

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x281 = UINT32_MAX;
	uint64_t x282 = 118LLU;
	int16_t x284 = INT16_MIN;
	static uint32_t t70 = UINT32_MAX;

    t70 = (x281+((x282>x283)==x284));

    if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MIN;
	int8_t x287 = -1;
	int8_t x288 = INT8_MIN;

    t71 = (x285+((x286>x287)==x288));

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -1LL;
	volatile int16_t x290 = INT16_MIN;
	static volatile uint64_t x291 = UINT64_MAX;
	int8_t x292 = INT8_MIN;
	int64_t t72 = -805LL;

    t72 = (x289+((x290>x291)==x292));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x293 = -1;
	int32_t x294 = -5147243;
	uint16_t x295 = UINT16_MAX;
	volatile int32_t t73 = 21;

    t73 = (x293+((x294>x295)==x296));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x297 = INT64_MIN;
	static int64_t x298 = -1LL;
	int16_t x300 = INT16_MAX;
	volatile int64_t t74 = INT64_MIN;

    t74 = (x297+((x298>x299)==x300));

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x302 = 1U;
	int16_t x303 = -1;
	int8_t x304 = -1;
	volatile int32_t t75 = INT32_MIN;

    t75 = (x301+((x302>x303)==x304));

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x305 = -1;
	int32_t x307 = INT32_MAX;
	uint16_t x308 = 8U;
	int32_t t76 = 1372700;

    t76 = (x305+((x306>x307)==x308));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = UINT8_MAX;
	int32_t x310 = 2030521;
	int32_t x311 = -4371484;
	static volatile uint64_t x312 = UINT64_MAX;

    t77 = (x309+((x310>x311)==x312));

    if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x313 = 23;
	int32_t x314 = 15621427;
	volatile int32_t x315 = INT32_MAX;
	int32_t x316 = -741180;
	int32_t t78 = -1031813645;

    t78 = (x313+((x314>x315)==x316));

    if (t78 != 23) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x318 = INT32_MAX;
	static int16_t x319 = 1;
	uint32_t x320 = 7U;
	static int32_t t79 = 1743;

    t79 = (x317+((x318>x319)==x320));

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	static int16_t x322 = INT16_MIN;
	int32_t x323 = -1;
	int64_t x324 = INT64_MIN;
	int64_t t80 = INT64_MIN;

    t80 = (x321+((x322>x323)==x324));

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = -1;
	int32_t x326 = INT32_MIN;
	volatile int8_t x327 = -1;
	uint16_t x328 = 72U;
	static int32_t t81 = -12900;

    t81 = (x325+((x326>x327)==x328));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x330 = -1;
	int8_t x331 = INT8_MIN;
	uint32_t x332 = 50219U;
	int64_t t82 = 0LL;

    t82 = (x329+((x330>x331)==x332));

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MIN;
	int32_t x335 = INT32_MIN;
	uint16_t x336 = UINT16_MAX;
	int32_t t83 = -11693421;

    t83 = (x333+((x334>x335)==x336));

    if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x337 = INT16_MIN;
	int32_t x339 = INT32_MAX;
	volatile int32_t t84 = 32;

    t84 = (x337+((x338>x339)==x340));

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -1;
	int16_t x342 = INT16_MIN;
	int16_t x343 = 89;
	int64_t x344 = -19371848309796LL;
	volatile int32_t t85 = 135581588;

    t85 = (x341+((x342>x343)==x344));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x345 = INT16_MIN;
	int16_t x346 = -5;
	uint8_t x347 = 115U;
	int32_t t86 = 18;

    t86 = (x345+((x346>x347)==x348));

    if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = 32;
	static int8_t x350 = INT8_MAX;
	int8_t x351 = -1;
	static int64_t x352 = -7889019683006LL;
	volatile int32_t t87 = 1;

    t87 = (x349+((x350>x351)==x352));

    if (t87 != 32) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = 72LL;
	int32_t x354 = 5;
	int16_t x356 = INT16_MIN;
	int64_t t88 = 1978241109852171423LL;

    t88 = (x353+((x354>x355)==x356));

    if (t88 != 72LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MAX;
	int16_t x359 = INT16_MIN;
	int64_t x360 = INT64_MIN;
	static volatile int32_t t89 = 170287742;

    t89 = (x357+((x358>x359)==x360));

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x362 = 0U;
	uint16_t x363 = 992U;
	volatile int32_t t90 = -31992484;

    t90 = (x361+((x362>x363)==x364));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x365 = INT8_MAX;
	volatile int8_t x366 = 1;
	int64_t x367 = INT64_MIN;

    t91 = (x365+((x366>x367)==x368));

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x370 = INT16_MIN;
	int64_t x371 = 161719LL;
	static int8_t x372 = 1;
	volatile int32_t t92 = -4;

    t92 = (x369+((x370>x371)==x372));

    if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = UINT64_MAX;
	static int16_t x374 = INT16_MIN;
	int8_t x376 = -1;

    t93 = (x373+((x374>x375)==x376));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x378 = INT64_MIN;
	int8_t x379 = INT8_MIN;
	volatile uint64_t x380 = UINT64_MAX;
	int32_t t94 = -8493590;

    t94 = (x377+((x378>x379)==x380));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	int16_t x382 = INT16_MIN;
	uint64_t x383 = UINT64_MAX;
	static uint64_t x384 = 6236LLU;

    t95 = (x381+((x382>x383)==x384));

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = -1;
	int8_t x386 = INT8_MIN;
	uint32_t x387 = 27382965U;
	int64_t x388 = INT64_MAX;
	int32_t t96 = 56;

    t96 = (x385+((x386>x387)==x388));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	int64_t x390 = -1LL;
	int16_t x391 = 1;
	uint8_t x392 = 1U;
	volatile int32_t t97 = -257692;

    t97 = (x389+((x390>x391)==x392));

    if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = INT64_MIN;
	uint8_t x394 = 13U;
	static int32_t x395 = -73102674;
	static int64_t x396 = -1LL;
	int64_t t98 = INT64_MIN;

    t98 = (x393+((x394>x395)==x396));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = UINT32_MAX;
	uint32_t x398 = 28729U;
	int16_t x399 = -4881;
	static uint32_t x400 = 56021299U;
	volatile uint32_t t99 = UINT32_MAX;

    t99 = (x397+((x398>x399)==x400));

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = UINT32_MAX;
	static volatile uint8_t x403 = UINT8_MAX;
	static int32_t x404 = 66758287;
	static uint32_t t100 = UINT32_MAX;

    t100 = (x401+((x402>x403)==x404));

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 718U;
	int32_t x406 = INT32_MIN;
	volatile uint16_t x407 = 1014U;
	static volatile int8_t x408 = INT8_MIN;
	volatile uint32_t t101 = 11U;

    t101 = (x405+((x406>x407)==x408));

    if (t101 != 718U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x410 = -1LL;
	int16_t x411 = INT16_MIN;
	int16_t x412 = INT16_MAX;
	static volatile int32_t t102 = -9569;

    t102 = (x409+((x410>x411)==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -907978184LL;
	static int8_t x414 = INT8_MIN;
	int64_t x416 = INT64_MAX;

    t103 = (x413+((x414>x415)==x416));

    if (t103 != -907978184LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -1;
	uint64_t x418 = UINT64_MAX;
	uint32_t x419 = UINT32_MAX;
	int64_t x420 = INT64_MAX;
	int32_t t104 = 233562901;

    t104 = (x417+((x418>x419)==x420));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x421 = -34;
	int8_t x423 = -23;
	static int32_t t105 = -21615;

    t105 = (x421+((x422>x423)==x424));

    if (t105 != -34) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = 12U;
	volatile uint64_t x426 = UINT64_MAX;
	uint32_t x427 = 1703785U;
	int32_t x428 = -226;
	volatile int32_t t106 = -3;

    t106 = (x425+((x426>x427)==x428));

    if (t106 != 12) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x430 = INT16_MIN;
	int64_t x431 = -1LL;

    t107 = (x429+((x430>x431)==x432));

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 344891LLU;
	volatile int8_t x434 = INT8_MIN;
	static int16_t x436 = -5169;
	volatile uint64_t t108 = 10677918479LLU;

    t108 = (x433+((x434>x435)==x436));

    if (t108 != 344891LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = 2747;
	int32_t x438 = INT32_MIN;
	int16_t x439 = INT16_MAX;
	int64_t x440 = INT64_MIN;
	int32_t t109 = 632;

    t109 = (x437+((x438>x439)==x440));

    if (t109 != 2747) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x441 = INT32_MIN;
	int16_t x442 = INT16_MIN;
	volatile int32_t t110 = INT32_MIN;

    t110 = (x441+((x442>x443)==x444));

    if (t110 != INT32_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x445 = 977U;
	volatile uint8_t x447 = UINT8_MAX;
	int64_t x448 = -1LL;
	volatile int32_t t111 = -1118;

    t111 = (x445+((x446>x447)==x448));

    if (t111 != 977) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -1LL;
	uint16_t x451 = 0U;
	volatile int8_t x452 = 1;

    t112 = (x449+((x450>x451)==x452));

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = 6907;
	uint64_t x454 = 679375844007LLU;
	int32_t x456 = INT32_MAX;
	static int32_t t113 = 259303785;

    t113 = (x453+((x454>x455)==x456));

    if (t113 != 6907) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x459 = -1;
	volatile int32_t t114 = -4148353;

    t114 = (x457+((x458>x459)==x460));

    if (t114 != 14) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x462 = INT16_MIN;
	uint32_t x464 = 82567U;
	volatile int32_t t115 = INT32_MAX;

    t115 = (x461+((x462>x463)==x464));

    if (t115 != INT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x465 = -1;
	int64_t x466 = -1LL;
	static uint16_t x467 = 22628U;
	int32_t x468 = INT32_MIN;

    t116 = (x465+((x466>x467)==x468));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = 0LL;
	int16_t x470 = -1;
	volatile uint8_t x471 = 46U;
	static int16_t x472 = INT16_MIN;
	volatile int64_t t117 = -3410563286027561455LL;

    t117 = (x469+((x470>x471)==x472));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = UINT8_MAX;
	int16_t x475 = 1;
	uint32_t x476 = 615344U;
	volatile int32_t t118 = 30815;

    t118 = (x473+((x474>x475)==x476));

    if (t118 != 255) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = UINT64_MAX;
	static volatile uint32_t x478 = UINT32_MAX;
	int16_t x479 = 29;
	static uint8_t x480 = 0U;
	uint64_t t119 = UINT64_MAX;

    t119 = (x477+((x478>x479)==x480));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = 454;
	uint16_t x482 = 2758U;
	int8_t x483 = -1;
	int8_t x484 = 0;
	static int32_t t120 = -1;

    t120 = (x481+((x482>x483)==x484));

    if (t120 != 454) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = UINT64_MAX;
	int64_t x486 = INT64_MAX;
	uint64_t x487 = 24105LLU;
	uint32_t x488 = 733U;
	static volatile uint64_t t121 = UINT64_MAX;

    t121 = (x485+((x486>x487)==x488));

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x490 = 174502831U;
	int32_t x491 = INT32_MAX;
	volatile int64_t x492 = INT64_MAX;

    t122 = (x489+((x490>x491)==x492));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x494 = -1;
	static uint8_t x495 = 3U;
	int32_t t123 = -79629;

    t123 = (x493+((x494>x495)==x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x497 = -194907458043LL;
	volatile int32_t x498 = -242607;
	int8_t x499 = 21;
	int16_t x500 = -3084;

    t124 = (x497+((x498>x499)==x500));

    if (t124 != -194907458043LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = -239;
	int32_t x502 = -2940795;
	uint16_t x503 = 238U;
	int32_t x504 = -65;
	int32_t t125 = -696;

    t125 = (x501+((x502>x503)==x504));

    if (t125 != -239) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MAX;
	uint8_t x506 = 1U;
	int32_t x507 = 64;
	volatile uint16_t x508 = UINT16_MAX;

    t126 = (x505+((x506>x507)==x508));

    if (t126 != INT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x509 = 167137U;
	static int32_t x510 = INT32_MAX;
	uint8_t x511 = 66U;
	int8_t x512 = INT8_MAX;
	volatile uint32_t t127 = 930870714U;

    t127 = (x509+((x510>x511)==x512));

    if (t127 != 167137U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x514 = INT8_MAX;
	int8_t x515 = INT8_MIN;
	static volatile uint32_t x516 = UINT32_MAX;
	static volatile int32_t t128 = 1;

    t128 = (x513+((x514>x515)==x516));

    if (t128 != 127) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	int16_t x518 = -1;
	int16_t x519 = INT16_MIN;
	volatile int16_t x520 = INT16_MIN;
	static int64_t t129 = INT64_MIN;

    t129 = (x517+((x518>x519)==x520));

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x522 = 1675140598LLU;
	volatile uint16_t x523 = 40U;
	uint32_t x524 = 2373U;
	static volatile int64_t t130 = INT64_MIN;

    t130 = (x521+((x522>x523)==x524));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x526 = -1;
	static int32_t x527 = INT32_MIN;
	uint64_t x528 = UINT64_MAX;
	volatile int32_t t131 = INT32_MAX;

    t131 = (x525+((x526>x527)==x528));

    if (t131 != INT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = INT8_MAX;
	uint64_t x532 = UINT64_MAX;

    t132 = (x529+((x530>x531)==x532));

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x533 = 1U;
	int16_t x535 = -6;
	int32_t x536 = 1;

    t133 = (x533+((x534>x535)==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x537 = -1;
	static int8_t x538 = 4;
	volatile int32_t x539 = 1;
	volatile uint64_t x540 = UINT64_MAX;

    t134 = (x537+((x538>x539)==x540));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MAX;
	static uint64_t x542 = 114435150801LLU;
	volatile int64_t x543 = INT64_MIN;
	uint64_t x544 = UINT64_MAX;
	volatile int32_t t135 = 42440;

    t135 = (x541+((x542>x543)==x544));

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x546 = 66U;
	uint64_t x547 = 35829312LLU;
	uint8_t x548 = 70U;

    t136 = (x545+((x546>x547)==x548));

    if (t136 != 64551U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -1;
	int16_t x550 = INT16_MAX;
	uint8_t x551 = 3U;
	static int8_t x552 = -3;
	int32_t t137 = 0;

    t137 = (x549+((x550>x551)==x552));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 83064595481LLU;
	uint32_t x555 = 12763834U;

    t138 = (x553+((x554>x555)==x556));

    if (t138 != 83064595481LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int32_t x559 = 2009;
	uint32_t x560 = UINT32_MAX;

    t139 = (x557+((x558>x559)==x560));

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x562 = UINT64_MAX;
	int32_t x563 = -107649272;
	uint32_t x564 = 452U;
	static volatile uint32_t t140 = UINT32_MAX;

    t140 = (x561+((x562>x563)==x564));

    if (t140 != UINT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = UINT64_MAX;
	volatile uint8_t x566 = UINT8_MAX;
	uint32_t x567 = UINT32_MAX;
	int8_t x568 = INT8_MIN;
	static volatile uint64_t t141 = UINT64_MAX;

    t141 = (x565+((x566>x567)==x568));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x570 = -6792216253524233LL;
	int64_t x571 = -1LL;
	int32_t t142 = INT32_MIN;

    t142 = (x569+((x570>x571)==x572));

    if (t142 != INT32_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x573 = UINT8_MAX;
	uint8_t x574 = UINT8_MAX;
	uint32_t x575 = 45342U;
	int64_t x576 = 1907615002LL;
	volatile int32_t t143 = -3154325;

    t143 = (x573+((x574>x575)==x576));

    if (t143 != 255) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x577 = 51;
	static uint64_t x578 = 15507LLU;
	volatile uint16_t x579 = 557U;
	int16_t x580 = -240;
	int32_t t144 = 0;

    t144 = (x577+((x578>x579)==x580));

    if (t144 != 51) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x581 = INT32_MIN;
	volatile uint32_t x582 = UINT32_MAX;
	static volatile int8_t x583 = INT8_MAX;

    t145 = (x581+((x582>x583)==x584));

    if (t145 != INT32_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x586 = -1;
	volatile uint16_t x587 = 27606U;
	int32_t x588 = -8006;
	int32_t t146 = -1074;

    t146 = (x585+((x586>x587)==x588));

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	int32_t x590 = -96;
	int16_t x591 = -398;
	uint64_t x592 = 410281LLU;
	int32_t t147 = 13469;

    t147 = (x589+((x590>x591)==x592));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = INT64_MAX;
	uint32_t x595 = 15U;
	int32_t x596 = -261655;
	volatile int64_t t148 = INT64_MAX;

    t148 = (x593+((x594>x595)==x596));

    if (t148 != INT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x599 = 1LL;
	volatile int32_t t149 = -413320985;

    t149 = (x597+((x598>x599)==x600));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	int8_t x602 = INT8_MIN;
	volatile int64_t x603 = 172903LL;
	static volatile int32_t t150 = INT32_MAX;

    t150 = (x601+((x602>x603)==x604));

    if (t150 != INT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x605 = INT16_MIN;
	int64_t x607 = INT64_MAX;
	int32_t x608 = -1;
	int32_t t151 = 19458;

    t151 = (x605+((x606>x607)==x608));

    if (t151 != -32768) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = 1U;
	int64_t x610 = -15054597960LL;
	uint32_t x611 = 6129U;
	int16_t x612 = INT16_MIN;
	int32_t t152 = 561;

    t152 = (x609+((x610>x611)==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = INT32_MAX;
	int64_t x614 = -615212203707418LL;
	volatile int64_t x615 = INT64_MIN;
	int32_t x616 = INT32_MAX;
	int32_t t153 = INT32_MAX;

    t153 = (x613+((x614>x615)==x616));

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x617 = INT8_MAX;
	int16_t x618 = -1;
	uint32_t x619 = UINT32_MAX;
	uint32_t x620 = UINT32_MAX;
	int32_t t154 = -27819299;

    t154 = (x617+((x618>x619)==x620));

    if (t154 != 127) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x622 = 1;
	static int8_t x623 = -1;
	uint64_t x624 = 694174390016350623LLU;

    t155 = (x621+((x622>x623)==x624));

    if (t155 != 26880254167LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	volatile int8_t x626 = INT8_MIN;
	static uint32_t x627 = 557884801U;
	static uint64_t x628 = 111000514491LLU;

    t156 = (x625+((x626>x627)==x628));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MIN;
	volatile uint16_t x630 = UINT16_MAX;
	int16_t x632 = INT16_MIN;
	volatile int32_t t157 = 33603955;

    t157 = (x629+((x630>x631)==x632));

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 3U;
	static int32_t x634 = INT32_MIN;
	int32_t x635 = INT32_MAX;
	volatile int32_t x636 = -115467884;
	volatile uint32_t t158 = 802241U;

    t158 = (x633+((x634>x635)==x636));

    if (t158 != 3U) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x637 = INT16_MIN;
	static int32_t x638 = INT32_MIN;
	volatile int16_t x639 = INT16_MIN;
	int16_t x640 = 78;

    t159 = (x637+((x638>x639)==x640));

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = -1;
	int8_t x642 = 13;
	uint64_t x643 = UINT64_MAX;
	static int8_t x644 = 42;
	int32_t t160 = -2562;

    t160 = (x641+((x642>x643)==x644));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 247792U;
	int16_t x647 = -1;
	int8_t x648 = INT8_MIN;
	volatile uint32_t t161 = 2705957U;

    t161 = (x645+((x646>x647)==x648));

    if (t161 != 247792U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = 1;
	static int16_t x650 = INT16_MIN;
	int8_t x651 = -1;
	volatile int32_t x652 = INT32_MIN;
	volatile int32_t t162 = 474673471;

    t162 = (x649+((x650>x651)==x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x653 = 1U;
	int64_t x654 = INT64_MIN;
	int32_t x655 = INT32_MIN;
	uint32_t x656 = 3189U;
	static uint32_t t163 = 78U;

    t163 = (x653+((x654>x655)==x656));

    if (t163 != 1U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x658 = 94348620794LLU;
	int64_t x659 = INT64_MAX;
	int32_t x660 = INT32_MAX;
	volatile int32_t t164 = -32970;

    t164 = (x657+((x658>x659)==x660));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = 1262U;
	int64_t x662 = -1LL;
	int16_t x664 = 3333;
	volatile int32_t t165 = -105576289;

    t165 = (x661+((x662>x663)==x664));

    if (t165 != 1262) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = UINT64_MAX;
	static int8_t x667 = INT8_MAX;
	int16_t x668 = -1;
	uint64_t t166 = UINT64_MAX;

    t166 = (x665+((x666>x667)==x668));

    if (t166 != UINT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 0LLU;
	uint8_t x671 = 29U;
	uint64_t t167 = 266LLU;

    t167 = (x669+((x670>x671)==x672));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x674 = -1;
	volatile int64_t x675 = INT64_MAX;
	static int32_t t168 = 14;

    t168 = (x673+((x674>x675)==x676));

    if (t168 != 29) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x677 = -7;
	static volatile int64_t x678 = 1347LL;
	uint64_t x679 = UINT64_MAX;
	static volatile int8_t x680 = INT8_MIN;
	volatile int32_t t169 = -126142620;

    t169 = (x677+((x678>x679)==x680));

    if (t169 != -7) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 7492LLU;
	uint16_t x683 = 0U;
	uint64_t t170 = 21585106LLU;

    t170 = (x681+((x682>x683)==x684));

    if (t170 != 7492LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x686 = -1;
	static uint32_t x687 = 88106U;

    t171 = (x685+((x686>x687)==x688));

    if (t171 != INT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MAX;
	int16_t x690 = -303;
	volatile int64_t t172 = INT64_MAX;

    t172 = (x689+((x690>x691)==x692));

    if (t172 != INT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -1LL;
	static volatile int32_t x694 = -55;
	int32_t x695 = INT32_MIN;
	int32_t x696 = INT32_MIN;
	int64_t t173 = -35LL;

    t173 = (x693+((x694>x695)==x696));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = -1LL;
	uint16_t x699 = UINT16_MAX;
	volatile int8_t x700 = INT8_MIN;
	volatile int64_t t174 = 14576366946079LL;

    t174 = (x697+((x698>x699)==x700));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 5U;
	int8_t x702 = -1;
	int8_t x703 = INT8_MAX;
	uint16_t x704 = UINT16_MAX;
	volatile uint32_t t175 = 1761317963U;

    t175 = (x701+((x702>x703)==x704));

    if (t175 != 5U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x705 = -30;
	int8_t x706 = INT8_MIN;
	int8_t x708 = 7;
	int32_t t176 = 20953067;

    t176 = (x705+((x706>x707)==x708));

    if (t176 != -30) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -1;
	int16_t x712 = INT16_MIN;

    t177 = (x709+((x710>x711)==x712));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x714 = UINT16_MAX;
	static uint32_t x715 = 85826323U;

    t178 = (x713+((x714>x715)==x716));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -1LL;
	uint64_t x718 = 2863254LLU;
	int32_t x719 = -1;

    t179 = (x717+((x718>x719)==x720));

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = 26;
	volatile uint8_t x722 = UINT8_MAX;
	volatile int16_t x724 = 73;

    t180 = (x721+((x722>x723)==x724));

    if (t180 != 26) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 106U;
	volatile uint32_t x726 = 15U;
	uint8_t x727 = UINT8_MAX;
	uint16_t x728 = UINT16_MAX;

    t181 = (x725+((x726>x727)==x728));

    if (t181 != 106) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = 0;
	int64_t x730 = 7204039439979LL;
	int64_t x731 = -1LL;
	static uint8_t x732 = 4U;
	int32_t t182 = 2932763;

    t182 = (x729+((x730>x731)==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x734 = INT8_MAX;
	static int64_t x735 = -1LL;
	static volatile uint32_t x736 = 15657033U;
	static volatile int32_t t183 = -266;

    t183 = (x733+((x734>x735)==x736));

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -1;
	volatile int64_t x738 = INT64_MAX;
	int32_t x739 = INT32_MIN;
	static uint8_t x740 = 15U;
	int32_t t184 = 12436;

    t184 = (x737+((x738>x739)==x740));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x744 = 1U;

    t185 = (x741+((x742>x743)==x744));

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = INT64_MAX;

    t186 = (x745+((x746>x747)==x748));

    if (t186 != -9352471) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x749 = INT16_MIN;
	static volatile int16_t x751 = -5856;

    t187 = (x749+((x750>x751)==x752));

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x753 = UINT64_MAX;
	int8_t x754 = -1;
	int64_t x755 = -1LL;
	volatile uint64_t t188 = UINT64_MAX;

    t188 = (x753+((x754>x755)==x756));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x757 = INT32_MIN;

    t189 = (x757+((x758>x759)==x760));

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 326U;
	uint16_t x763 = UINT16_MAX;
	uint16_t x764 = 70U;

    t190 = (x761+((x762>x763)==x764));

    if (t190 != 326) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -47944559187666LL;
	int8_t x766 = -1;
	static volatile int32_t x767 = -51732933;
	volatile int64_t t191 = -77134LL;

    t191 = (x765+((x766>x767)==x768));

    if (t191 != -47944559187666LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x770 = -75;
	int16_t x771 = -1;
	int32_t x772 = 16653;
	int32_t t192 = 141614743;

    t192 = (x769+((x770>x771)==x772));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	uint64_t x774 = UINT64_MAX;
	uint32_t x775 = 186467U;
	volatile int32_t x776 = 25;
	volatile int64_t t193 = INT64_MIN;

    t193 = (x773+((x774>x775)==x776));

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = -1;
	int32_t x778 = -1;
	static volatile int32_t x780 = INT32_MIN;
	volatile int32_t t194 = 60761;

    t194 = (x777+((x778>x779)==x780));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -8693365;
	static int8_t x782 = -1;
	static int64_t x783 = -416LL;
	volatile int32_t x784 = INT32_MIN;
	static volatile int32_t t195 = 708282;

    t195 = (x781+((x782>x783)==x784));

    if (t195 != -8693365) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x786 = UINT16_MAX;
	int16_t x787 = INT16_MIN;
	int32_t x788 = INT32_MAX;
	int64_t t196 = -9238533699LL;

    t196 = (x785+((x786>x787)==x788));

    if (t196 != 1552187354326LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x790 = 0;
	static volatile uint16_t x791 = 577U;
	int64_t x792 = -1LL;
	volatile int32_t t197 = -28520;

    t197 = (x789+((x790>x791)==x792));

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = -4187638769779570LL;
	int32_t x794 = INT32_MAX;

    t198 = (x793+((x794>x795)==x796));

    if (t198 != -4187638769779570LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = -217724198;
	uint32_t x799 = 5U;
	int32_t x800 = INT32_MIN;
	int32_t t199 = 4081196;

    t199 = (x797+((x798>x799)==x800));

    if (t199 != -217724198) { NG(); } else { ; }
	
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

