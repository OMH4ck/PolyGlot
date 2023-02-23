
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

int64_t x1 = INT64_MAX;
static uint16_t x9 = 13U;
static volatile int32_t t1 = 1;
int8_t x32 = INT8_MAX;
uint8_t x42 = UINT8_MAX;
uint32_t x43 = 2128538727U;
int8_t x44 = 1;
volatile int32_t t8 = 253;
static uint64_t x47 = 13211724704129247LLU;
volatile int32_t t9 = -914083749;
int32_t x49 = INT32_MIN;
int32_t x50 = -1;
static volatile int32_t x51 = INT32_MIN;
volatile uint16_t x57 = 0U;
int16_t x59 = INT16_MIN;
uint16_t x60 = 11448U;
int64_t x68 = 27581214954227LL;
uint16_t x69 = 123U;
static int32_t t16 = -610;
volatile int64_t x82 = INT64_MAX;
int8_t x83 = 1;
volatile int32_t t19 = 30147;
volatile int32_t t20 = -14;
int32_t t22 = -1013980269;
int64_t x110 = -1LL;
static int32_t x113 = -1;
int8_t x121 = 0;
uint64_t x123 = UINT64_MAX;
int16_t x124 = INT16_MAX;
int32_t x129 = 0;
volatile int32_t x131 = 66;
static uint16_t x137 = 1U;
int64_t x142 = -1LL;
uint64_t x149 = 0LLU;
volatile uint8_t x150 = 6U;
int32_t x154 = INT32_MIN;
int16_t x155 = INT16_MIN;
volatile int64_t x156 = 8435255942LL;
static int32_t t35 = 377237;
volatile uint32_t x171 = 54U;
uint64_t x174 = UINT64_MAX;
int64_t x176 = -330556LL;
volatile int32_t t40 = 522387;
static int16_t x179 = 41;
int64_t x181 = -1LL;
int64_t x183 = -1LL;
static uint8_t x196 = 0U;
int8_t x220 = -1;
volatile int32_t x232 = -1;
int16_t x233 = INT16_MIN;
int32_t x236 = INT32_MAX;
uint16_t x238 = 3U;
volatile int16_t x245 = -100;
int32_t t54 = -66379909;
static uint64_t x255 = UINT64_MAX;
int32_t t57 = 468633;
static int32_t x262 = -1;
int16_t x263 = INT16_MIN;
uint16_t x264 = UINT16_MAX;
int16_t x270 = -1197;
int32_t t60 = -1;
int64_t x275 = INT64_MIN;
int32_t t62 = 6755;
uint32_t x281 = 285410U;
uint32_t x283 = 350475950U;
volatile int8_t x285 = INT8_MIN;
int64_t x286 = INT64_MIN;
int8_t x303 = -56;
int32_t t68 = 0;
volatile int32_t t69 = -482072514;
volatile int8_t x314 = -1;
volatile int32_t t71 = -1;
int64_t x319 = INT64_MIN;
int8_t x323 = INT8_MAX;
volatile uint32_t x332 = 94U;
int32_t t76 = -163823585;
uint8_t x354 = 35U;
uint16_t x356 = 354U;
int32_t t83 = 0;
volatile uint16_t x376 = 187U;
int32_t t85 = 547791;
int32_t t86 = -42727;
int32_t x390 = INT32_MIN;
static int8_t x397 = -1;
int16_t x398 = -1;
int32_t t89 = 19;
int32_t x405 = 284;
uint16_t x409 = 4991U;
int32_t x412 = INT32_MAX;
static int32_t t91 = -86110507;
int8_t x416 = INT8_MAX;
int64_t x417 = -98051LL;
volatile int64_t x420 = INT64_MAX;
volatile int8_t x422 = -17;
int32_t t94 = 273053181;
volatile uint16_t x437 = UINT16_MAX;
int8_t x440 = 1;
int32_t x442 = INT32_MIN;
volatile int32_t t99 = -19593708;
uint32_t x452 = UINT32_MAX;
int16_t x460 = 1649;
int32_t x463 = 0;
int32_t t103 = -60316;
int32_t x470 = 201738551;
uint32_t x478 = 1771159U;
uint32_t x480 = UINT32_MAX;
int32_t x490 = -1;
int64_t x496 = -1LL;
uint64_t x502 = 420582900285532LLU;
int8_t x504 = INT8_MIN;
int64_t x505 = INT64_MAX;
uint32_t x508 = 201183064U;
int8_t x509 = -1;
volatile int64_t x512 = 246650822241LL;
static int64_t x513 = INT64_MAX;
static int32_t t115 = 3695;
int32_t t116 = -69;
static volatile int32_t x522 = -1;
int16_t x523 = 7579;
volatile int16_t x525 = INT16_MIN;
uint16_t x528 = 2979U;
uint16_t x529 = 1806U;
int16_t x531 = INT16_MAX;
int16_t x537 = -13;
volatile int64_t x550 = INT64_MIN;
int16_t x551 = -43;
int32_t x558 = -623120;
static volatile int8_t x560 = -12;
int16_t x563 = INT16_MAX;
int8_t x568 = 3;
int64_t x569 = 462012016654840LL;
int32_t t128 = 5809309;
static volatile uint32_t x579 = 29881577U;
static uint16_t x583 = UINT16_MAX;
static int8_t x585 = INT8_MIN;
static int32_t x591 = -1;
static volatile int32_t t132 = -860;
int8_t x598 = INT8_MAX;
int16_t x600 = INT16_MIN;
volatile int32_t t135 = 35733;
volatile int32_t t136 = 55571702;
int16_t x611 = -10162;
volatile int32_t t137 = -39538956;
uint8_t x616 = 24U;
volatile uint16_t x624 = UINT16_MAX;
static int64_t x639 = -1LL;
static int64_t x644 = 41963597LL;
int16_t x646 = -1;
int32_t t144 = 713792;
static volatile int16_t x654 = 125;
int32_t x657 = 261836756;
uint16_t x658 = 90U;
int32_t t147 = -17;
uint64_t x661 = 41642289483LLU;
int64_t x664 = -1LL;
static volatile int16_t x673 = INT16_MIN;
static int32_t t150 = 5215957;
uint16_t x686 = UINT16_MAX;
uint64_t x688 = UINT64_MAX;
int64_t x695 = INT64_MIN;
uint32_t x697 = UINT32_MAX;
volatile int32_t t155 = 1;
int8_t x703 = INT8_MIN;
uint8_t x707 = 117U;
int8_t x709 = INT8_MIN;
uint16_t x717 = UINT16_MAX;
uint16_t x734 = 28U;
uint32_t x742 = 212703U;
static volatile int32_t x750 = -1;
static volatile uint32_t x762 = UINT32_MAX;
uint8_t x765 = 1U;
volatile uint16_t x770 = 80U;
volatile int32_t t171 = 556;
int64_t x775 = 558603213164151538LL;
int32_t x776 = -6999200;
int16_t x784 = INT16_MIN;
int64_t x785 = 277686657045415LL;
int8_t x786 = INT8_MAX;
volatile int32_t t175 = 32090;
int32_t x795 = -1;
int32_t x798 = INT32_MAX;
int64_t x799 = 47583LL;
volatile int32_t t179 = -468;
int32_t x818 = -1;
volatile int16_t x820 = INT16_MIN;
uint8_t x821 = 63U;
int32_t t184 = -50;
static int16_t x830 = INT16_MAX;
static int16_t x832 = INT16_MIN;
uint16_t x835 = UINT16_MAX;
int8_t x855 = INT8_MIN;
volatile int32_t t191 = 2671076;
volatile int32_t t193 = 493302761;
int64_t x870 = INT64_MIN;
int64_t x872 = -1LL;
int64_t x874 = INT64_MIN;
int32_t x877 = INT32_MIN;
int16_t x882 = 0;


void f0(void) {
    	int16_t x2 = 14037;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = -76;
	int32_t t0 = 3766;

    t0 = (x1>((x2==x3)-x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x10 = INT64_MIN;
	uint64_t x11 = 185631182LLU;
	int64_t x12 = -6708406377726LL;

    t1 = (x9>((x10==x11)-x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = -1;
	static int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MAX;
	uint64_t x16 = 1719051378268LLU;
	int32_t t2 = 256882;

    t2 = (x13>((x14==x15)-x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x21 = INT8_MAX;
	uint32_t x22 = UINT32_MAX;
	int32_t x23 = -1;
	int16_t x24 = INT16_MAX;
	volatile int32_t t3 = -290623;

    t3 = (x21>((x22==x23)-x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x25 = 3U;
	int64_t x26 = 114141944280LL;
	uint64_t x27 = 4457760531LLU;
	int8_t x28 = 1;
	int32_t t4 = 11016;

    t4 = (x25>((x26==x27)-x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = INT8_MAX;
	uint32_t x30 = 462697U;
	uint64_t x31 = UINT64_MAX;
	volatile int32_t t5 = 43295331;

    t5 = (x29>((x30==x31)-x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x33 = INT8_MAX;
	uint64_t x34 = 113968147LLU;
	int64_t x35 = INT64_MAX;
	int32_t x36 = -1;
	int32_t t6 = -3004;

    t6 = (x33>((x34==x35)-x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = INT64_MAX;
	int16_t x38 = INT16_MIN;
	static int8_t x39 = INT8_MIN;
	int8_t x40 = -1;
	volatile int32_t t7 = -930;

    t7 = (x37>((x38==x39)-x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x41 = -1LL;

    t8 = (x41>((x42==x43)-x44));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x45 = 28068965LL;
	uint8_t x46 = 53U;
	int16_t x48 = -152;

    t9 = (x45>((x46==x47)-x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x52 = 35672012635LLU;
	volatile int32_t t10 = 1009;

    t10 = (x49>((x50==x51)-x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x53 = -1;
	volatile int32_t x54 = INT32_MAX;
	int32_t x55 = INT32_MIN;
	int16_t x56 = -689;
	volatile int32_t t11 = -57;

    t11 = (x53>((x54==x55)-x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x58 = 0U;
	volatile int32_t t12 = -30214;

    t12 = (x57>((x58==x59)-x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = INT32_MAX;
	int16_t x62 = INT16_MIN;
	int8_t x63 = INT8_MIN;
	int8_t x64 = INT8_MIN;
	int32_t t13 = -21098;

    t13 = (x61>((x62==x63)-x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = -21;
	int64_t x66 = INT64_MAX;
	uint32_t x67 = 243508U;
	int32_t t14 = -1;

    t14 = (x65>((x66==x67)-x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x70 = INT16_MIN;
	int64_t x71 = -9LL;
	volatile int8_t x72 = 3;
	int32_t t15 = 6909734;

    t15 = (x69>((x70==x71)-x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x73 = INT32_MIN;
	volatile int16_t x74 = INT16_MAX;
	int32_t x75 = 130372320;
	static uint32_t x76 = UINT32_MAX;

    t16 = (x73>((x74==x75)-x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x77 = 4951U;
	int8_t x78 = -12;
	int64_t x79 = INT64_MIN;
	int32_t x80 = -1;
	volatile int32_t t17 = -135;

    t17 = (x77>((x78==x79)-x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = INT16_MIN;
	int8_t x84 = INT8_MAX;
	volatile int32_t t18 = -40;

    t18 = (x81>((x82==x83)-x84));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MIN;
	int32_t x86 = 23976404;
	int16_t x87 = 1;
	uint8_t x88 = UINT8_MAX;

    t19 = (x85>((x86==x87)-x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = -564243543292651975LL;
	volatile int16_t x90 = -1;
	int16_t x91 = INT16_MIN;
	volatile uint16_t x92 = 2147U;

    t20 = (x89>((x90==x91)-x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x93 = -1LL;
	static volatile uint8_t x94 = UINT8_MAX;
	volatile int64_t x95 = INT64_MAX;
	int16_t x96 = 937;
	static volatile int32_t t21 = 87;

    t21 = (x93>((x94==x95)-x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x97 = INT32_MIN;
	volatile int8_t x98 = -1;
	int16_t x99 = INT16_MAX;
	uint8_t x100 = 1U;

    t22 = (x97>((x98==x99)-x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = INT64_MIN;
	int64_t x102 = 461977538976LL;
	int32_t x103 = -1;
	volatile uint64_t x104 = 72079LLU;
	static int32_t t23 = 63;

    t23 = (x101>((x102==x103)-x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MIN;
	static int32_t x107 = -1;
	int64_t x108 = -12571416346124LL;
	volatile int32_t t24 = -85085;

    t24 = (x105>((x106==x107)-x108));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x109 = 3754245LLU;
	uint8_t x111 = 3U;
	static uint32_t x112 = UINT32_MAX;
	volatile int32_t t25 = 274502124;

    t25 = (x109>((x110==x111)-x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x114 = INT8_MIN;
	int8_t x115 = -35;
	int32_t x116 = INT32_MAX;
	volatile int32_t t26 = 0;

    t26 = (x113>((x114==x115)-x116));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x122 = UINT64_MAX;
	int32_t t27 = 173659276;

    t27 = (x121>((x122==x123)-x124));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x125 = -2;
	volatile int16_t x126 = -10925;
	int16_t x127 = INT16_MAX;
	static uint32_t x128 = 0U;
	static volatile int32_t t28 = -28;

    t28 = (x125>((x126==x127)-x128));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x130 = 1U;
	volatile uint32_t x132 = UINT32_MAX;
	int32_t t29 = -6826323;

    t29 = (x129>((x130==x131)-x132));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = -62;
	int8_t x134 = INT8_MAX;
	volatile uint64_t x135 = 20LLU;
	int16_t x136 = INT16_MAX;
	static int32_t t30 = -919288398;

    t30 = (x133>((x134==x135)-x136));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x138 = INT64_MIN;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 1U;
	int32_t t31 = 14;

    t31 = (x137>((x138==x139)-x140));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x141 = 85U;
	static uint8_t x143 = 0U;
	int16_t x144 = -144;
	int32_t t32 = -362694;

    t32 = (x141>((x142==x143)-x144));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x145 = INT8_MIN;
	volatile int8_t x146 = INT8_MAX;
	int32_t x147 = -357464;
	int8_t x148 = -27;
	static int32_t t33 = 14;

    t33 = (x145>((x146==x147)-x148));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x151 = INT32_MIN;
	int8_t x152 = INT8_MAX;
	int32_t t34 = 0;

    t34 = (x149>((x150==x151)-x152));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = INT32_MIN;

    t35 = (x153>((x154==x155)-x156));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x157 = 85;
	int32_t x158 = INT32_MAX;
	volatile int64_t x159 = -1LL;
	static uint8_t x160 = 57U;
	volatile int32_t t36 = -1565;

    t36 = (x157>((x158==x159)-x160));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x161 = UINT8_MAX;
	int32_t x162 = -1;
	volatile int16_t x163 = 1;
	uint64_t x164 = 889226LLU;
	int32_t t37 = -11;

    t37 = (x161>((x162==x163)-x164));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x165 = -4550;
	static int16_t x166 = INT16_MIN;
	uint16_t x167 = 483U;
	volatile uint64_t x168 = 1720636407556LLU;
	volatile int32_t t38 = -56235;

    t38 = (x165>((x166==x167)-x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x169 = INT16_MAX;
	volatile int32_t x170 = INT32_MIN;
	static volatile uint64_t x172 = 4089477130LLU;
	volatile int32_t t39 = 1;

    t39 = (x169>((x170==x171)-x172));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x173 = INT32_MIN;
	volatile uint32_t x175 = 7914122U;

    t40 = (x173>((x174==x175)-x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x177 = INT8_MIN;
	volatile int16_t x178 = INT16_MIN;
	uint16_t x180 = UINT16_MAX;
	int32_t t41 = 7;

    t41 = (x177>((x178==x179)-x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x182 = 1U;
	uint64_t x184 = UINT64_MAX;
	int32_t t42 = 0;

    t42 = (x181>((x182==x183)-x184));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = INT8_MAX;
	int32_t x190 = -1;
	int16_t x191 = INT16_MIN;
	volatile uint16_t x192 = 922U;
	volatile int32_t t43 = -1;

    t43 = (x189>((x190==x191)-x192));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x193 = INT32_MIN;
	volatile int8_t x194 = 0;
	int64_t x195 = INT64_MIN;
	volatile int32_t t44 = -8144151;

    t44 = (x193>((x194==x195)-x196));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x201 = UINT8_MAX;
	int16_t x202 = 696;
	volatile int32_t x203 = -1;
	uint16_t x204 = 1693U;
	int32_t t45 = -3765915;

    t45 = (x201>((x202==x203)-x204));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x209 = UINT16_MAX;
	static int64_t x210 = INT64_MIN;
	static int16_t x211 = INT16_MIN;
	volatile int8_t x212 = INT8_MAX;
	static int32_t t46 = 172036672;

    t46 = (x209>((x210==x211)-x212));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x213 = INT64_MAX;
	int64_t x214 = 3870LL;
	volatile uint8_t x215 = 63U;
	volatile int32_t x216 = -1;
	int32_t t47 = -41;

    t47 = (x213>((x214==x215)-x216));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x217 = UINT64_MAX;
	uint16_t x218 = 11U;
	int32_t x219 = INT32_MIN;
	int32_t t48 = -2801;

    t48 = (x217>((x218==x219)-x220));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x225 = INT32_MAX;
	int8_t x226 = INT8_MAX;
	int32_t x227 = INT32_MIN;
	volatile int16_t x228 = INT16_MIN;
	int32_t t49 = -7046;

    t49 = (x225>((x226==x227)-x228));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x229 = INT8_MIN;
	int8_t x230 = -45;
	static int8_t x231 = INT8_MIN;
	volatile int32_t t50 = 1;

    t50 = (x229>((x230==x231)-x232));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x234 = 8U;
	uint16_t x235 = UINT16_MAX;
	int32_t t51 = -1422;

    t51 = (x233>((x234==x235)-x236));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x237 = 2;
	int16_t x239 = -13;
	uint32_t x240 = 226U;
	volatile int32_t t52 = 507;

    t52 = (x237>((x238==x239)-x240));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x241 = INT64_MIN;
	static volatile uint32_t x242 = 254402311U;
	uint16_t x243 = 11U;
	int8_t x244 = 12;
	static int32_t t53 = 600;

    t53 = (x241>((x242==x243)-x244));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x246 = -1;
	int32_t x247 = INT32_MIN;
	static int64_t x248 = 3300485286318LL;

    t54 = (x245>((x246==x247)-x248));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x249 = 129600789;
	int32_t x250 = INT32_MIN;
	volatile uint64_t x251 = 2604321811779066LLU;
	volatile uint16_t x252 = 14548U;
	volatile int32_t t55 = 2165;

    t55 = (x249>((x250==x251)-x252));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x253 = INT32_MAX;
	volatile int8_t x254 = INT8_MIN;
	static int16_t x256 = 9;
	static int32_t t56 = -4;

    t56 = (x253>((x254==x255)-x256));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x257 = 767140942U;
	static volatile int32_t x258 = INT32_MAX;
	int16_t x259 = INT16_MIN;
	uint8_t x260 = 32U;

    t57 = (x257>((x258==x259)-x260));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x261 = 54750LLU;
	volatile int32_t t58 = -66585332;

    t58 = (x261>((x262==x263)-x264));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x265 = INT64_MIN;
	uint16_t x266 = 13U;
	int8_t x267 = INT8_MAX;
	int32_t x268 = 801481;
	volatile int32_t t59 = 31769;

    t59 = (x265>((x266==x267)-x268));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x269 = 557614776856LL;
	volatile int16_t x271 = -1;
	int16_t x272 = INT16_MIN;

    t60 = (x269>((x270==x271)-x272));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x273 = 96U;
	int16_t x274 = 332;
	static int8_t x276 = 1;
	int32_t t61 = 277403;

    t61 = (x273>((x274==x275)-x276));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x277 = INT64_MAX;
	int32_t x278 = -52991020;
	volatile int32_t x279 = INT32_MIN;
	volatile int8_t x280 = INT8_MAX;

    t62 = (x277>((x278==x279)-x280));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x282 = INT16_MIN;
	uint16_t x284 = UINT16_MAX;
	static volatile int32_t t63 = -19;

    t63 = (x281>((x282==x283)-x284));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x287 = INT16_MIN;
	int16_t x288 = INT16_MIN;
	int32_t t64 = -1;

    t64 = (x285>((x286==x287)-x288));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x289 = UINT64_MAX;
	uint8_t x290 = 61U;
	uint8_t x291 = 0U;
	volatile int16_t x292 = INT16_MAX;
	volatile int32_t t65 = 4287;

    t65 = (x289>((x290==x291)-x292));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x293 = 4U;
	int8_t x294 = INT8_MIN;
	static uint8_t x295 = 1U;
	int32_t x296 = -433693881;
	int32_t t66 = 931190906;

    t66 = (x293>((x294==x295)-x296));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x297 = 212886703U;
	int16_t x298 = INT16_MIN;
	static int32_t x299 = INT32_MAX;
	uint32_t x300 = 0U;
	static int32_t t67 = 16302479;

    t67 = (x297>((x298==x299)-x300));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x301 = INT16_MIN;
	int64_t x302 = INT64_MIN;
	uint32_t x304 = UINT32_MAX;

    t68 = (x301>((x302==x303)-x304));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x305 = 46315291LLU;
	uint32_t x306 = 650U;
	int8_t x307 = 0;
	static int64_t x308 = -70437259LL;

    t69 = (x305>((x306==x307)-x308));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x309 = 3U;
	int16_t x310 = INT16_MAX;
	uint64_t x311 = 663382457468LLU;
	int16_t x312 = -14;
	volatile int32_t t70 = -81973759;

    t70 = (x309>((x310==x311)-x312));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x313 = 52U;
	int16_t x315 = INT16_MIN;
	volatile uint8_t x316 = 19U;

    t71 = (x313>((x314==x315)-x316));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x317 = 652U;
	volatile int64_t x318 = INT64_MIN;
	static int32_t x320 = 630625995;
	int32_t t72 = 55030;

    t72 = (x317>((x318==x319)-x320));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x321 = -7235LL;
	int32_t x322 = 20522;
	static uint64_t x324 = UINT64_MAX;
	int32_t t73 = 14;

    t73 = (x321>((x322==x323)-x324));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x325 = -2;
	static int32_t x326 = -1;
	volatile uint8_t x327 = 48U;
	uint64_t x328 = 1031159124389685LLU;
	int32_t t74 = -87341;

    t74 = (x325>((x326==x327)-x328));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x329 = 7LL;
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = 130197256884094LL;
	int32_t t75 = 28203725;

    t75 = (x329>((x330==x331)-x332));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x333 = UINT16_MAX;
	int16_t x334 = INT16_MAX;
	uint8_t x335 = 1U;
	int8_t x336 = INT8_MIN;

    t76 = (x333>((x334==x335)-x336));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x337 = 1U;
	uint64_t x338 = 1LLU;
	int16_t x339 = INT16_MIN;
	static int16_t x340 = -230;
	int32_t t77 = -745186;

    t77 = (x337>((x338==x339)-x340));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x341 = -7;
	int16_t x342 = 3;
	uint32_t x343 = UINT32_MAX;
	uint64_t x344 = 1718920LLU;
	int32_t t78 = 211;

    t78 = (x341>((x342==x343)-x344));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x345 = 300;
	int16_t x346 = -260;
	static uint16_t x347 = 0U;
	static int64_t x348 = 221803094518236615LL;
	int32_t t79 = -1;

    t79 = (x345>((x346==x347)-x348));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x349 = 0;
	int8_t x350 = -1;
	uint64_t x351 = 364655869067595LLU;
	static uint64_t x352 = UINT64_MAX;
	volatile int32_t t80 = 62;

    t80 = (x349>((x350==x351)-x352));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x353 = -1;
	volatile uint32_t x355 = UINT32_MAX;
	static int32_t t81 = 1079;

    t81 = (x353>((x354==x355)-x356));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x357 = 2145;
	int8_t x358 = INT8_MIN;
	volatile uint16_t x359 = UINT16_MAX;
	volatile int32_t x360 = INT32_MAX;
	int32_t t82 = -27969;

    t82 = (x357>((x358==x359)-x360));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x365 = UINT64_MAX;
	int16_t x366 = INT16_MIN;
	volatile int16_t x367 = -1;
	static volatile int32_t x368 = -1;

    t83 = (x365>((x366==x367)-x368));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x373 = -6108;
	static int8_t x374 = INT8_MIN;
	uint32_t x375 = 11793U;
	static volatile int32_t t84 = -798437319;

    t84 = (x373>((x374==x375)-x376));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x377 = 42605817U;
	int32_t x378 = -1;
	static int32_t x379 = 2127212;
	uint8_t x380 = UINT8_MAX;

    t85 = (x377>((x378==x379)-x380));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x381 = INT32_MIN;
	int64_t x382 = -27659951540583LL;
	static int8_t x383 = INT8_MAX;
	volatile uint16_t x384 = 15U;

    t86 = (x381>((x382==x383)-x384));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x389 = INT64_MAX;
	uint32_t x391 = 4702223U;
	int16_t x392 = 932;
	int32_t t87 = -2412593;

    t87 = (x389>((x390==x391)-x392));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x393 = 20U;
	uint32_t x394 = 892276947U;
	int64_t x395 = -5923020LL;
	int8_t x396 = -2;
	static volatile int32_t t88 = 92;

    t88 = (x393>((x394==x395)-x396));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x399 = 2LLU;
	int32_t x400 = INT32_MAX;

    t89 = (x397>((x398==x399)-x400));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x406 = INT32_MIN;
	volatile int64_t x407 = INT64_MIN;
	volatile int8_t x408 = -1;
	static int32_t t90 = 126494336;

    t90 = (x405>((x406==x407)-x408));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x410 = UINT16_MAX;
	volatile int16_t x411 = INT16_MIN;

    t91 = (x409>((x410==x411)-x412));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x413 = -1;
	uint32_t x414 = 8379745U;
	uint32_t x415 = 85683021U;
	int32_t t92 = -28;

    t92 = (x413>((x414==x415)-x416));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x418 = INT64_MAX;
	uint16_t x419 = UINT16_MAX;
	int32_t t93 = 2006069;

    t93 = (x417>((x418==x419)-x420));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x421 = 111501LLU;
	int16_t x423 = INT16_MIN;
	static int32_t x424 = -1;

    t94 = (x421>((x422==x423)-x424));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x425 = UINT64_MAX;
	volatile int64_t x426 = -1LL;
	volatile int16_t x427 = 3942;
	int32_t x428 = -1;
	volatile int32_t t95 = -14;

    t95 = (x425>((x426==x427)-x428));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x433 = 453571653593LLU;
	static int64_t x434 = 351240086LL;
	int32_t x435 = INT32_MIN;
	uint16_t x436 = UINT16_MAX;
	int32_t t96 = -215;

    t96 = (x433>((x434==x435)-x436));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x438 = 37866697;
	int8_t x439 = INT8_MIN;
	volatile int32_t t97 = 17;

    t97 = (x437>((x438==x439)-x440));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x441 = INT16_MIN;
	int16_t x443 = INT16_MIN;
	uint32_t x444 = UINT32_MAX;
	int32_t t98 = 48369;

    t98 = (x441>((x442==x443)-x444));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x445 = UINT32_MAX;
	int16_t x446 = -3735;
	static int32_t x447 = 5316;
	uint64_t x448 = 1457LLU;

    t99 = (x445>((x446==x447)-x448));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x449 = -1;
	uint16_t x450 = 7324U;
	uint64_t x451 = 3662LLU;
	volatile int32_t t100 = -1;

    t100 = (x449>((x450==x451)-x452));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x453 = UINT16_MAX;
	uint8_t x454 = UINT8_MAX;
	volatile int32_t x455 = -1;
	static volatile int64_t x456 = 20013651809LL;
	int32_t t101 = -3621;

    t101 = (x453>((x454==x455)-x456));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x457 = 9065397U;
	uint8_t x458 = 14U;
	int32_t x459 = INT32_MIN;
	int32_t t102 = 396459;

    t102 = (x457>((x458==x459)-x460));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x461 = INT16_MIN;
	uint32_t x462 = UINT32_MAX;
	int8_t x464 = INT8_MIN;

    t103 = (x461>((x462==x463)-x464));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x465 = 3U;
	int64_t x466 = INT64_MIN;
	static int64_t x467 = INT64_MAX;
	static int16_t x468 = -2;
	volatile int32_t t104 = 6901089;

    t104 = (x465>((x466==x467)-x468));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x469 = 69154225695383003LLU;
	volatile int16_t x471 = -1;
	int8_t x472 = INT8_MIN;
	int32_t t105 = -1947;

    t105 = (x469>((x470==x471)-x472));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x473 = INT64_MAX;
	uint32_t x474 = 28675U;
	int16_t x475 = INT16_MIN;
	static int16_t x476 = 2614;
	volatile int32_t t106 = 9394;

    t106 = (x473>((x474==x475)-x476));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x477 = UINT8_MAX;
	static int8_t x479 = -1;
	int32_t t107 = -3194;

    t107 = (x477>((x478==x479)-x480));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x485 = -2;
	uint16_t x486 = UINT16_MAX;
	volatile int64_t x487 = -1LL;
	static int64_t x488 = -1LL;
	volatile int32_t t108 = 6;

    t108 = (x485>((x486==x487)-x488));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x489 = INT64_MIN;
	static int64_t x491 = -1LL;
	volatile int64_t x492 = 11914740756LL;
	volatile int32_t t109 = -1180399;

    t109 = (x489>((x490==x491)-x492));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x493 = INT8_MAX;
	int8_t x494 = INT8_MIN;
	uint16_t x495 = UINT16_MAX;
	int32_t t110 = -552621;

    t110 = (x493>((x494==x495)-x496));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x497 = INT16_MAX;
	static uint64_t x498 = 3LLU;
	int64_t x499 = -1LL;
	int8_t x500 = INT8_MIN;
	volatile int32_t t111 = -40;

    t111 = (x497>((x498==x499)-x500));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x501 = -1969961;
	int16_t x503 = -1;
	int32_t t112 = -106339658;

    t112 = (x501>((x502==x503)-x504));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x506 = INT32_MIN;
	volatile int32_t x507 = INT32_MIN;
	int32_t t113 = -96634;

    t113 = (x505>((x506==x507)-x508));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x510 = 42LLU;
	int32_t x511 = -1;
	volatile int32_t t114 = -1679;

    t114 = (x509>((x510==x511)-x512));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x514 = INT8_MIN;
	int8_t x515 = 0;
	int32_t x516 = INT32_MAX;

    t115 = (x513>((x514==x515)-x516));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x517 = 25304U;
	int32_t x518 = INT32_MIN;
	volatile uint64_t x519 = 2289595714914083664LLU;
	uint64_t x520 = 1862466016LLU;

    t116 = (x517>((x518==x519)-x520));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x521 = INT64_MIN;
	uint32_t x524 = UINT32_MAX;
	volatile int32_t t117 = -7595491;

    t117 = (x521>((x522==x523)-x524));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x526 = -143;
	uint16_t x527 = 130U;
	volatile int32_t t118 = 1287985;

    t118 = (x525>((x526==x527)-x528));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x530 = INT16_MIN;
	uint16_t x532 = 14U;
	volatile int32_t t119 = -11448;

    t119 = (x529>((x530==x531)-x532));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x533 = UINT64_MAX;
	int16_t x534 = INT16_MIN;
	int16_t x535 = 326;
	uint64_t x536 = UINT64_MAX;
	int32_t t120 = 39;

    t120 = (x533>((x534==x535)-x536));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x538 = -2665418LL;
	uint8_t x539 = 2U;
	static uint64_t x540 = 201162LLU;
	int32_t t121 = -162695;

    t121 = (x537>((x538==x539)-x540));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x545 = INT8_MIN;
	uint64_t x546 = 615301035988621LLU;
	volatile int8_t x547 = INT8_MIN;
	int8_t x548 = 1;
	int32_t t122 = -231655504;

    t122 = (x545>((x546==x547)-x548));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x549 = UINT16_MAX;
	static int8_t x552 = INT8_MIN;
	int32_t t123 = -7;

    t123 = (x549>((x550==x551)-x552));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x557 = 64387U;
	volatile uint8_t x559 = 88U;
	static int32_t t124 = 25854;

    t124 = (x557>((x558==x559)-x560));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x561 = 640023441U;
	int32_t x562 = INT32_MIN;
	int16_t x564 = -1;
	static int32_t t125 = -4622;

    t125 = (x561>((x562==x563)-x564));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x565 = 12U;
	static int8_t x566 = 7;
	uint16_t x567 = UINT16_MAX;
	volatile int32_t t126 = 3864;

    t126 = (x565>((x566==x567)-x568));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x570 = UINT32_MAX;
	int8_t x571 = INT8_MIN;
	static int64_t x572 = -13857943LL;
	int32_t t127 = -2;

    t127 = (x569>((x570==x571)-x572));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x573 = -11576785;
	volatile int64_t x574 = INT64_MIN;
	volatile int32_t x575 = INT32_MAX;
	static int32_t x576 = INT32_MAX;

    t128 = (x573>((x574==x575)-x576));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x577 = 1803LLU;
	int8_t x578 = INT8_MIN;
	volatile int8_t x580 = INT8_MAX;
	volatile int32_t t129 = 5925;

    t129 = (x577>((x578==x579)-x580));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x581 = INT8_MIN;
	int64_t x582 = -1LL;
	uint64_t x584 = 197439373514LLU;
	static volatile int32_t t130 = -32772647;

    t130 = (x581>((x582==x583)-x584));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x586 = INT16_MIN;
	int16_t x587 = -1;
	uint32_t x588 = UINT32_MAX;
	static int32_t t131 = 683002;

    t131 = (x585>((x586==x587)-x588));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x589 = 25404394652655LLU;
	int64_t x590 = INT64_MIN;
	int16_t x592 = -1;

    t132 = (x589>((x590==x591)-x592));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x593 = -1;
	int64_t x594 = INT64_MIN;
	int16_t x595 = 7696;
	uint32_t x596 = 1435524U;
	volatile int32_t t133 = 1;

    t133 = (x593>((x594==x595)-x596));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x597 = UINT8_MAX;
	volatile int16_t x599 = INT16_MIN;
	volatile int32_t t134 = 35988;

    t134 = (x597>((x598==x599)-x600));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x601 = 25U;
	int64_t x602 = INT64_MIN;
	static int32_t x603 = INT32_MAX;
	volatile int16_t x604 = INT16_MAX;

    t135 = (x601>((x602==x603)-x604));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x605 = 15194U;
	static uint16_t x606 = 1212U;
	static uint16_t x607 = 281U;
	uint32_t x608 = UINT32_MAX;

    t136 = (x605>((x606==x607)-x608));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x609 = -1;
	int64_t x610 = -1LL;
	static volatile int16_t x612 = -26;

    t137 = (x609>((x610==x611)-x612));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x613 = -20;
	static int32_t x614 = -1;
	int32_t x615 = -3;
	volatile int32_t t138 = -1048246724;

    t138 = (x613>((x614==x615)-x616));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x617 = UINT32_MAX;
	static int16_t x618 = -2045;
	uint16_t x619 = UINT16_MAX;
	uint32_t x620 = 7433851U;
	volatile int32_t t139 = -22;

    t139 = (x617>((x618==x619)-x620));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x621 = 109;
	uint32_t x622 = 334U;
	static uint16_t x623 = 15U;
	volatile int32_t t140 = 234156795;

    t140 = (x621>((x622==x623)-x624));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x629 = 2LLU;
	static volatile uint32_t x630 = UINT32_MAX;
	int32_t x631 = INT32_MIN;
	uint16_t x632 = 130U;
	int32_t t141 = 27696068;

    t141 = (x629>((x630==x631)-x632));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x637 = INT16_MIN;
	volatile int64_t x638 = -8060451LL;
	uint32_t x640 = 121U;
	int32_t t142 = 79901388;

    t142 = (x637>((x638==x639)-x640));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x641 = INT8_MAX;
	int16_t x642 = 0;
	static int16_t x643 = -1;
	int32_t t143 = 14273988;

    t143 = (x641>((x642==x643)-x644));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x645 = 2928610087LLU;
	static int16_t x647 = -1;
	volatile int8_t x648 = -1;

    t144 = (x645>((x646==x647)-x648));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x649 = UINT16_MAX;
	int32_t x650 = -1;
	int64_t x651 = -1LL;
	volatile uint64_t x652 = UINT64_MAX;
	int32_t t145 = -29;

    t145 = (x649>((x650==x651)-x652));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x653 = 3U;
	int8_t x655 = INT8_MAX;
	int32_t x656 = -1;
	volatile int32_t t146 = -57;

    t146 = (x653>((x654==x655)-x656));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x659 = 59U;
	int8_t x660 = INT8_MIN;

    t147 = (x657>((x658==x659)-x660));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x662 = INT32_MIN;
	uint16_t x663 = UINT16_MAX;
	int32_t t148 = -249360662;

    t148 = (x661>((x662==x663)-x664));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x669 = -1;
	static int16_t x670 = INT16_MIN;
	volatile uint64_t x671 = 670848LLU;
	int64_t x672 = 60883216318947393LL;
	int32_t t149 = 6776241;

    t149 = (x669>((x670==x671)-x672));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x674 = 13;
	int16_t x675 = -1;
	uint16_t x676 = 14U;

    t150 = (x673>((x674==x675)-x676));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x677 = INT8_MAX;
	static int8_t x678 = INT8_MIN;
	int8_t x679 = INT8_MAX;
	int64_t x680 = 45LL;
	static int32_t t151 = -141;

    t151 = (x677>((x678==x679)-x680));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x685 = 12;
	static int16_t x687 = -1;
	volatile int32_t t152 = 142616220;

    t152 = (x685>((x686==x687)-x688));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x689 = INT16_MIN;
	static int16_t x690 = -4293;
	int32_t x691 = INT32_MAX;
	static int16_t x692 = 205;
	volatile int32_t t153 = 11032944;

    t153 = (x689>((x690==x691)-x692));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x693 = 946038211497304502LLU;
	int64_t x694 = INT64_MIN;
	int8_t x696 = INT8_MAX;
	int32_t t154 = -6901012;

    t154 = (x693>((x694==x695)-x696));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x698 = UINT16_MAX;
	uint8_t x699 = 2U;
	uint64_t x700 = 43787083679LLU;

    t155 = (x697>((x698==x699)-x700));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x701 = -2861;
	int16_t x702 = INT16_MIN;
	int8_t x704 = INT8_MIN;
	int32_t t156 = 2610;

    t156 = (x701>((x702==x703)-x704));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x705 = INT16_MIN;
	int32_t x706 = -395570;
	int32_t x708 = 323169475;
	static int32_t t157 = -61063;

    t157 = (x705>((x706==x707)-x708));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x710 = 19;
	int8_t x711 = -1;
	uint32_t x712 = UINT32_MAX;
	volatile int32_t t158 = 54259;

    t158 = (x709>((x710==x711)-x712));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = INT16_MIN;
	int8_t x715 = INT8_MIN;
	uint16_t x716 = 2141U;
	int32_t t159 = 100;

    t159 = (x713>((x714==x715)-x716));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x718 = INT16_MIN;
	volatile uint8_t x719 = 5U;
	volatile int64_t x720 = INT64_MAX;
	int32_t t160 = -581031;

    t160 = (x717>((x718==x719)-x720));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x725 = INT64_MIN;
	volatile uint64_t x726 = 44140220143272862LLU;
	volatile int32_t x727 = -1;
	int8_t x728 = INT8_MAX;
	int32_t t161 = -997607;

    t161 = (x725>((x726==x727)-x728));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x729 = -13LL;
	int8_t x730 = -1;
	static int32_t x731 = 7485;
	int32_t x732 = -246;
	int32_t t162 = -1;

    t162 = (x729>((x730==x731)-x732));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x733 = 542694;
	uint8_t x735 = UINT8_MAX;
	static int16_t x736 = 1;
	static volatile int32_t t163 = 893;

    t163 = (x733>((x734==x735)-x736));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x741 = UINT64_MAX;
	int32_t x743 = INT32_MIN;
	uint64_t x744 = UINT64_MAX;
	volatile int32_t t164 = -1081;

    t164 = (x741>((x742==x743)-x744));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x745 = UINT8_MAX;
	volatile int8_t x746 = INT8_MIN;
	int32_t x747 = INT32_MIN;
	int32_t x748 = INT32_MAX;
	volatile int32_t t165 = 988360;

    t165 = (x745>((x746==x747)-x748));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x749 = INT16_MIN;
	volatile int8_t x751 = 13;
	volatile int32_t x752 = INT32_MAX;
	int32_t t166 = -724789;

    t166 = (x749>((x750==x751)-x752));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x753 = UINT32_MAX;
	volatile int32_t x754 = INT32_MAX;
	int16_t x755 = 43;
	int32_t x756 = -1;
	static int32_t t167 = 61659774;

    t167 = (x753>((x754==x755)-x756));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x757 = UINT32_MAX;
	int16_t x758 = INT16_MIN;
	volatile uint16_t x759 = 138U;
	volatile int8_t x760 = INT8_MIN;
	volatile int32_t t168 = 16746;

    t168 = (x757>((x758==x759)-x760));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x761 = 789205U;
	uint32_t x763 = 9U;
	uint32_t x764 = 1410U;
	int32_t t169 = 160;

    t169 = (x761>((x762==x763)-x764));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x766 = 106101141LLU;
	static int8_t x767 = INT8_MIN;
	int16_t x768 = -1;
	int32_t t170 = 445;

    t170 = (x765>((x766==x767)-x768));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x769 = INT16_MIN;
	int64_t x771 = INT64_MAX;
	int16_t x772 = INT16_MAX;

    t171 = (x769>((x770==x771)-x772));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x773 = -90704LL;
	int8_t x774 = 30;
	volatile int32_t t172 = -840;

    t172 = (x773>((x774==x775)-x776));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x777 = INT16_MIN;
	int16_t x778 = INT16_MIN;
	uint8_t x779 = 2U;
	uint16_t x780 = 3U;
	int32_t t173 = 461014123;

    t173 = (x777>((x778==x779)-x780));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x781 = -1LL;
	int64_t x782 = 549469LL;
	int16_t x783 = INT16_MAX;
	volatile int32_t t174 = -1;

    t174 = (x781>((x782==x783)-x784));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x787 = 3;
	volatile uint64_t x788 = 60019614778511279LLU;

    t175 = (x785>((x786==x787)-x788));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x789 = -1;
	int16_t x790 = 5;
	volatile int64_t x791 = INT64_MIN;
	static uint64_t x792 = 25911102LLU;
	volatile int32_t t176 = 240108490;

    t176 = (x789>((x790==x791)-x792));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x793 = -3;
	int64_t x794 = INT64_MIN;
	int16_t x796 = 1;
	int32_t t177 = 72225;

    t177 = (x793>((x794==x795)-x796));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x797 = 51;
	volatile int32_t x800 = -1;
	int32_t t178 = 0;

    t178 = (x797>((x798==x799)-x800));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x801 = 13U;
	int32_t x802 = INT32_MIN;
	int16_t x803 = -1;
	uint16_t x804 = 23804U;

    t179 = (x801>((x802==x803)-x804));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x805 = INT32_MIN;
	int32_t x806 = INT32_MAX;
	int32_t x807 = INT32_MIN;
	int64_t x808 = INT64_MAX;
	volatile int32_t t180 = -11802914;

    t180 = (x805>((x806==x807)-x808));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x809 = -1;
	static int64_t x810 = -6704341288169174LL;
	int16_t x811 = INT16_MIN;
	int64_t x812 = 629LL;
	int32_t t181 = -35045828;

    t181 = (x809>((x810==x811)-x812));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x813 = -6620297;
	int32_t x814 = INT32_MAX;
	volatile int16_t x815 = INT16_MIN;
	static int8_t x816 = INT8_MAX;
	static volatile int32_t t182 = 761;

    t182 = (x813>((x814==x815)-x816));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x817 = INT8_MIN;
	int64_t x819 = INT64_MAX;
	volatile int32_t t183 = 1337;

    t183 = (x817>((x818==x819)-x820));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x822 = INT32_MIN;
	int16_t x823 = -124;
	int8_t x824 = 24;

    t184 = (x821>((x822==x823)-x824));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x825 = INT64_MIN;
	int64_t x826 = INT64_MAX;
	int8_t x827 = 16;
	int8_t x828 = -1;
	int32_t t185 = -31495652;

    t185 = (x825>((x826==x827)-x828));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x829 = INT8_MIN;
	int16_t x831 = -1;
	static int32_t t186 = -771422999;

    t186 = (x829>((x830==x831)-x832));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x833 = -1;
	volatile int32_t x834 = INT32_MIN;
	int16_t x836 = -1;
	volatile int32_t t187 = -8273;

    t187 = (x833>((x834==x835)-x836));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x841 = INT64_MIN;
	int32_t x842 = INT32_MAX;
	uint64_t x843 = UINT64_MAX;
	uint16_t x844 = 31820U;
	int32_t t188 = 0;

    t188 = (x841>((x842==x843)-x844));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x845 = 0LL;
	static int32_t x846 = 442936;
	static int16_t x847 = 28;
	volatile uint64_t x848 = UINT64_MAX;
	int32_t t189 = 14277;

    t189 = (x845>((x846==x847)-x848));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x849 = INT64_MAX;
	int64_t x850 = INT64_MIN;
	uint64_t x851 = 42236LLU;
	uint32_t x852 = 1662864320U;
	volatile int32_t t190 = -112;

    t190 = (x849>((x850==x851)-x852));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x853 = INT64_MAX;
	int8_t x854 = INT8_MAX;
	static uint32_t x856 = 806772162U;

    t191 = (x853>((x854==x855)-x856));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x857 = INT64_MAX;
	static int8_t x858 = 56;
	static int32_t x859 = INT32_MIN;
	uint8_t x860 = 1U;
	int32_t t192 = -1508;

    t192 = (x857>((x858==x859)-x860));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x865 = INT8_MIN;
	int32_t x866 = -959776;
	static int16_t x867 = INT16_MIN;
	uint32_t x868 = UINT32_MAX;

    t193 = (x865>((x866==x867)-x868));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x869 = UINT32_MAX;
	static volatile int64_t x871 = INT64_MIN;
	int32_t t194 = 896;

    t194 = (x869>((x870==x871)-x872));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x873 = -45148826242392103LL;
	static uint16_t x875 = 7U;
	int8_t x876 = -1;
	static int32_t t195 = -1;

    t195 = (x873>((x874==x875)-x876));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x878 = INT8_MIN;
	int8_t x879 = INT8_MIN;
	int16_t x880 = INT16_MIN;
	volatile int32_t t196 = 513626;

    t196 = (x877>((x878==x879)-x880));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x881 = 8U;
	int32_t x883 = -28014;
	int16_t x884 = -3102;
	int32_t t197 = 219711;

    t197 = (x881>((x882==x883)-x884));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x885 = INT8_MIN;
	static uint8_t x886 = 8U;
	volatile int8_t x887 = -1;
	static int64_t x888 = -54079302897LL;
	volatile int32_t t198 = -49006320;

    t198 = (x885>((x886==x887)-x888));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x889 = 10209118232747LLU;
	int8_t x890 = INT8_MIN;
	volatile uint64_t x891 = UINT64_MAX;
	uint8_t x892 = 3U;
	volatile int32_t t199 = -27;

    t199 = (x889>((x890==x891)-x892));

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

