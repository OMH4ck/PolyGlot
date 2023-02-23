
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

volatile int32_t x2 = INT32_MAX;
static volatile int32_t x3 = -1;
static volatile uint16_t x4 = 16U;
int8_t x14 = INT8_MAX;
int16_t x21 = INT16_MIN;
volatile int16_t x23 = 26;
volatile int32_t x26 = 327336526;
int8_t x27 = 1;
int32_t t6 = 4535;
volatile uint32_t x31 = 12307U;
int8_t x38 = INT8_MAX;
int64_t x41 = 187586001139LL;
uint8_t x44 = 101U;
int32_t x52 = -1;
int8_t x56 = -3;
int16_t x58 = 90;
static volatile int8_t x61 = -4;
uint16_t x64 = UINT16_MAX;
int64_t x74 = INT64_MAX;
int8_t x82 = -1;
int64_t x87 = INT64_MIN;
int32_t x88 = -2;
volatile int32_t t20 = 1;
int32_t t21 = -7;
volatile uint32_t x97 = 77325U;
uint8_t x100 = 8U;
int32_t t23 = -3973168;
uint32_t x110 = 507U;
static uint64_t x113 = 69204LLU;
int8_t x115 = INT8_MIN;
int64_t x116 = -1797106879504114750LL;
int32_t t26 = -3389;
uint16_t x123 = 10349U;
static int32_t x124 = INT32_MAX;
int16_t x125 = 14;
static uint32_t x127 = 1644U;
int32_t x129 = -3544404;
volatile int16_t x130 = INT16_MIN;
int64_t x145 = INT64_MIN;
volatile uint16_t x156 = 7U;
static uint8_t x159 = 5U;
int16_t x169 = 15;
volatile int8_t x170 = INT8_MAX;
int32_t x171 = 14773;
int64_t x172 = -8204723LL;
uint64_t x178 = UINT64_MAX;
uint16_t x180 = 1U;
volatile uint8_t x187 = UINT8_MAX;
uint32_t x192 = UINT32_MAX;
volatile int32_t t42 = -1147807;
int16_t x196 = -1;
static volatile int32_t t46 = 65145;
uint64_t x214 = UINT64_MAX;
volatile int32_t x218 = -1;
volatile int16_t x219 = INT16_MIN;
static uint32_t x225 = 58U;
int16_t x228 = INT16_MIN;
volatile int32_t t50 = -47;
int16_t x236 = -1;
static volatile int32_t x237 = -1;
int64_t x241 = INT64_MIN;
volatile uint16_t x244 = 43U;
uint64_t x250 = 6981934LLU;
volatile int8_t x263 = -1;
int32_t x264 = INT32_MAX;
int32_t t60 = -487428;
int8_t x269 = 14;
static int8_t x271 = -45;
int64_t x272 = INT64_MAX;
uint8_t x282 = 106U;
uint16_t x286 = 0U;
uint32_t x287 = UINT32_MAX;
int32_t t65 = 1;
int32_t x298 = -5706;
int64_t x300 = INT64_MAX;
volatile int32_t t70 = -42;
volatile uint8_t x317 = 62U;
uint64_t x322 = UINT64_MAX;
int16_t x323 = -936;
int16_t x324 = 1503;
int32_t x327 = -1;
volatile int32_t t73 = -169837;
int32_t x332 = -1;
int8_t x338 = -1;
int16_t x348 = INT16_MAX;
static int8_t x352 = INT8_MAX;
uint8_t x355 = UINT8_MAX;
static volatile int32_t t80 = -2015712;
int16_t x369 = INT16_MIN;
volatile int64_t x370 = -1LL;
uint64_t x376 = 123749713029051LLU;
int8_t x378 = 3;
uint16_t x391 = UINT16_MAX;
uint32_t x395 = UINT32_MAX;
int32_t x397 = INT32_MIN;
int16_t x399 = INT16_MIN;
static int8_t x400 = INT8_MIN;
int32_t t88 = -262;
int8_t x414 = INT8_MAX;
int32_t x417 = INT32_MIN;
uint64_t x422 = UINT64_MAX;
int32_t x423 = -1;
int32_t t94 = -26363834;
uint16_t x443 = 20U;
uint16_t x446 = UINT16_MAX;
volatile int32_t x452 = INT32_MIN;
static volatile uint8_t x464 = UINT8_MAX;
static volatile int64_t x473 = -3247161LL;
uint32_t x476 = UINT32_MAX;
static volatile int32_t t106 = 6651561;
volatile uint16_t x493 = 7990U;
int32_t x506 = -1;
uint8_t x511 = 45U;
volatile int16_t x518 = INT16_MAX;
int32_t x523 = INT32_MAX;
int32_t x525 = -1;
uint32_t x527 = 0U;
int32_t t114 = 6831394;
volatile int8_t x530 = -2;
int32_t x532 = INT32_MAX;
volatile int64_t x542 = -1LL;
int32_t x544 = -1;
int32_t t118 = 146700883;
static int64_t x549 = INT64_MAX;
uint16_t x556 = 36U;
int16_t x560 = INT16_MIN;
int64_t x561 = 19091LL;
int32_t t122 = 1460;
uint16_t x575 = 5843U;
int32_t x577 = INT32_MIN;
static int8_t x589 = INT8_MIN;
uint32_t x590 = 1U;
uint64_t x595 = UINT64_MAX;
static int32_t x597 = 19529;
int8_t x600 = -1;
int16_t x607 = -1911;
uint16_t x609 = 440U;
static volatile uint16_t x622 = 375U;
int64_t x632 = 79401LL;
int32_t x637 = INT32_MIN;
volatile uint16_t x638 = 16U;
static int32_t t139 = 136033154;
int32_t t142 = 155;
volatile int64_t x661 = INT64_MIN;
int16_t x664 = 13575;
static volatile int64_t x669 = INT64_MIN;
uint16_t x672 = 0U;
static uint32_t x676 = 336194U;
int32_t t147 = 143385;
static int64_t x679 = INT64_MIN;
volatile int64_t x689 = 10LL;
volatile int8_t x691 = -1;
int32_t x692 = INT32_MIN;
int16_t x694 = 323;
int32_t t152 = -58;
uint16_t x704 = UINT16_MAX;
int16_t x705 = -29;
volatile int32_t t155 = -460625;
static uint32_t x709 = UINT32_MAX;
static int64_t x717 = -401525951131LL;
volatile int32_t x735 = -1143;
volatile int32_t t161 = 11;
volatile int16_t x742 = -6386;
int8_t x745 = -1;
int8_t x752 = -1;
int16_t x756 = 5;
uint64_t x758 = 7645990563780445693LLU;
int8_t x765 = -1;
uint32_t x768 = 104U;
static uint64_t x772 = 418453512759484316LLU;
static volatile int32_t t168 = 1;
int32_t x775 = INT32_MIN;
int32_t x782 = INT32_MAX;
static int32_t x787 = INT32_MIN;
volatile uint32_t x788 = 452U;
volatile int32_t x804 = INT32_MIN;
volatile uint32_t x815 = 182U;
uint32_t x817 = 2335U;
static int64_t x821 = INT64_MAX;
uint32_t x822 = 1U;
volatile int32_t t180 = -605755;
int16_t x826 = -1;
static int32_t x830 = 206185;
volatile int32_t t183 = 417;
int16_t x841 = 1171;
int64_t x842 = INT64_MIN;
int64_t x844 = INT64_MIN;
static int16_t x845 = -1;
volatile int32_t t186 = 0;
volatile uint32_t x851 = UINT32_MAX;
volatile int32_t t187 = 2910;
int16_t x853 = INT16_MIN;
static int8_t x855 = INT8_MIN;
uint32_t x856 = UINT32_MAX;
int8_t x858 = INT8_MAX;
volatile int64_t x871 = 822228743033LL;
uint32_t x873 = 33621U;
int32_t t193 = -545;
volatile int32_t t194 = 18168;
volatile int16_t x881 = INT16_MIN;
volatile int64_t x892 = -51993393LL;
static int32_t x894 = 1;
int64_t x895 = INT64_MIN;
int8_t x898 = 22;


void f0(void) {
    	static int16_t x1 = -1;
	volatile int32_t t0 = -1881;

    t0 = (x1!=((x2+x3)==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 1U;
	int16_t x6 = 56;
	int16_t x7 = INT16_MIN;
	static int64_t x8 = INT64_MIN;
	int32_t t1 = 1;

    t1 = (x5!=((x6+x7)==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MIN;
	volatile uint8_t x10 = UINT8_MAX;
	volatile int16_t x11 = -1;
	uint16_t x12 = 0U;
	volatile int32_t t2 = -360;

    t2 = (x9!=((x10+x11)==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 6U;
	volatile int16_t x15 = -1;
	static int16_t x16 = 2900;
	int32_t t3 = -5584593;

    t3 = (x13!=((x14+x15)==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	uint64_t x18 = 72021LLU;
	int8_t x19 = 0;
	static int64_t x20 = -993LL;
	volatile int32_t t4 = -1;

    t4 = (x17!=((x18+x19)==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MIN;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -1123859;

    t5 = (x21!=((x22+x23)==x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -4;
	volatile int16_t x28 = INT16_MIN;

    t6 = (x25!=((x26+x27)==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = -2065053283LL;
	int16_t x30 = -1;
	uint16_t x32 = 30206U;
	int32_t t7 = 68605;

    t7 = (x29!=((x30+x31)==x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = -1LL;
	static uint8_t x39 = 9U;
	int8_t x40 = INT8_MAX;
	int32_t t8 = 480145930;

    t8 = (x37!=((x38+x39)==x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x42 = 81U;
	int8_t x43 = INT8_MIN;
	int32_t t9 = -3505;

    t9 = (x41!=((x42+x43)==x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = -1;
	uint32_t x46 = 1569U;
	int8_t x47 = INT8_MIN;
	uint16_t x48 = UINT16_MAX;
	int32_t t10 = 1504;

    t10 = (x45!=((x46+x47)==x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = INT16_MAX;
	int8_t x50 = -1;
	static uint16_t x51 = UINT16_MAX;
	volatile int32_t t11 = -259975;

    t11 = (x49!=((x50+x51)==x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint64_t x53 = 3512256953LLU;
	volatile int32_t x54 = -1;
	uint32_t x55 = 5569083U;
	volatile int32_t t12 = 14498;

    t12 = (x53!=((x54+x55)==x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MAX;
	uint16_t x59 = 3850U;
	uint16_t x60 = UINT16_MAX;
	int32_t t13 = 1037452209;

    t13 = (x57!=((x58+x59)==x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x62 = -10;
	int32_t x63 = -1;
	int32_t t14 = -60956;

    t14 = (x61!=((x62+x63)==x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = 866357281031271146LL;
	int8_t x66 = -1;
	volatile int8_t x67 = INT8_MIN;
	uint64_t x68 = 1671622LLU;
	volatile int32_t t15 = -2035214;

    t15 = (x65!=((x66+x67)==x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x69 = INT8_MIN;
	static int16_t x70 = INT16_MIN;
	static int8_t x71 = INT8_MIN;
	int64_t x72 = 156729929260LL;
	volatile int32_t t16 = -458;

    t16 = (x69!=((x70+x71)==x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MIN;
	int64_t x75 = -94LL;
	int64_t x76 = -1LL;
	int32_t t17 = 12;

    t17 = (x73!=((x74+x75)==x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = 27;
	int64_t x83 = 10200505405LL;
	static uint64_t x84 = 54941671495935938LLU;
	int32_t t18 = 1;

    t18 = (x81!=((x82+x83)==x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x85 = 7U;
	int16_t x86 = 663;
	volatile int32_t t19 = 6655;

    t19 = (x85!=((x86+x87)==x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x89 = 4581832446LLU;
	uint64_t x90 = UINT64_MAX;
	int16_t x91 = -1;
	uint8_t x92 = UINT8_MAX;

    t20 = (x89!=((x90+x91)==x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x93 = -1;
	int16_t x94 = 53;
	static int8_t x95 = -1;
	static volatile int64_t x96 = INT64_MIN;

    t21 = (x93!=((x94+x95)==x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x98 = INT32_MAX;
	uint32_t x99 = 854U;
	int32_t t22 = 2;

    t22 = (x97!=((x98+x99)==x100));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = 10;
	int8_t x102 = INT8_MAX;
	static int8_t x103 = 22;
	static int64_t x104 = 28308843317802419LL;

    t23 = (x101!=((x102+x103)==x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x105 = 195649743422232LLU;
	volatile int16_t x106 = -1;
	int64_t x107 = INT64_MAX;
	static uint8_t x108 = UINT8_MAX;
	volatile int32_t t24 = 246;

    t24 = (x105!=((x106+x107)==x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = INT64_MAX;
	static volatile int8_t x111 = INT8_MAX;
	volatile int16_t x112 = INT16_MIN;
	static int32_t t25 = 58009;

    t25 = (x109!=((x110+x111)==x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x114 = -1;

    t26 = (x113!=((x114+x115)==x116));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x117 = 762441199U;
	volatile int8_t x118 = INT8_MAX;
	static volatile int64_t x119 = INT64_MIN;
	int8_t x120 = INT8_MIN;
	int32_t t27 = 2787;

    t27 = (x117!=((x118+x119)==x120));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x121 = 2610U;
	volatile uint64_t x122 = 4LLU;
	volatile int32_t t28 = 15768;

    t28 = (x121!=((x122+x123)==x124));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x126 = 1LL;
	int32_t x128 = INT32_MIN;
	static volatile int32_t t29 = 1;

    t29 = (x125!=((x126+x127)==x128));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x131 = -1LL;
	volatile int16_t x132 = 0;
	int32_t t30 = 27;

    t30 = (x129!=((x130+x131)==x132));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = 197LL;
	static int32_t x138 = 61;
	uint64_t x139 = 109869972721683LLU;
	int16_t x140 = -1;
	static volatile int32_t t31 = -97;

    t31 = (x137!=((x138+x139)==x140));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x146 = 260020U;
	int32_t x147 = -44598;
	int16_t x148 = 102;
	int32_t t32 = -6;

    t32 = (x145!=((x146+x147)==x148));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x149 = INT8_MAX;
	uint8_t x150 = UINT8_MAX;
	int32_t x151 = INT32_MIN;
	int16_t x152 = 18;
	int32_t t33 = -33;

    t33 = (x149!=((x150+x151)==x152));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x153 = 29475606;
	uint64_t x154 = 422816157LLU;
	volatile int64_t x155 = INT64_MIN;
	int32_t t34 = -672;

    t34 = (x153!=((x154+x155)==x156));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x157 = 0LLU;
	static volatile uint16_t x158 = 4U;
	int32_t x160 = INT32_MIN;
	volatile int32_t t35 = 858955797;

    t35 = (x157!=((x158+x159)==x160));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x165 = 10U;
	uint64_t x166 = UINT64_MAX;
	int16_t x167 = -1;
	static volatile int8_t x168 = 31;
	int32_t t36 = 4506139;

    t36 = (x165!=((x166+x167)==x168));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t t37 = -7507256;

    t37 = (x169!=((x170+x171)==x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x173 = INT8_MIN;
	uint8_t x174 = UINT8_MAX;
	int8_t x175 = INT8_MIN;
	static int32_t x176 = -422572060;
	int32_t t38 = 0;

    t38 = (x173!=((x174+x175)==x176));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x177 = INT8_MIN;
	int64_t x179 = -443600LL;
	int32_t t39 = 2228;

    t39 = (x177!=((x178+x179)==x180));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = 48;
	uint64_t x182 = UINT64_MAX;
	volatile uint16_t x183 = UINT16_MAX;
	int8_t x184 = 2;
	int32_t t40 = -340;

    t40 = (x181!=((x182+x183)==x184));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x185 = INT8_MAX;
	int8_t x186 = INT8_MIN;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t41 = 1562;

    t41 = (x185!=((x186+x187)==x188));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x189 = UINT32_MAX;
	uint64_t x190 = UINT64_MAX;
	static int8_t x191 = -1;

    t42 = (x189!=((x190+x191)==x192));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x193 = INT16_MIN;
	static uint32_t x194 = 37209U;
	int64_t x195 = INT64_MIN;
	volatile int32_t t43 = -10734471;

    t43 = (x193!=((x194+x195)==x196));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x197 = 16839U;
	uint8_t x198 = UINT8_MAX;
	static int8_t x199 = -1;
	int64_t x200 = 1265480725639LL;
	static int32_t t44 = 922161;

    t44 = (x197!=((x198+x199)==x200));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x201 = INT16_MIN;
	int64_t x202 = -1LL;
	static int16_t x203 = -1;
	static int32_t x204 = INT32_MIN;
	volatile int32_t t45 = -228985;

    t45 = (x201!=((x202+x203)==x204));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x205 = INT64_MIN;
	uint64_t x206 = 949522LLU;
	volatile uint8_t x207 = 53U;
	int16_t x208 = INT16_MIN;

    t46 = (x205!=((x206+x207)==x208));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x213 = 462U;
	static uint32_t x215 = 32237473U;
	uint8_t x216 = 6U;
	int32_t t47 = 34276;

    t47 = (x213!=((x214+x215)==x216));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x217 = 28U;
	volatile int8_t x220 = INT8_MAX;
	static volatile int32_t t48 = -46928735;

    t48 = (x217!=((x218+x219)==x220));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x221 = 39;
	int8_t x222 = -1;
	uint64_t x223 = 1033642301650LLU;
	int8_t x224 = INT8_MAX;
	volatile int32_t t49 = -4;

    t49 = (x221!=((x222+x223)==x224));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x226 = 27U;
	uint32_t x227 = 2746U;

    t50 = (x225!=((x226+x227)==x228));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x229 = 2U;
	static int64_t x230 = -2720LL;
	int64_t x231 = -1LL;
	volatile uint16_t x232 = UINT16_MAX;
	int32_t t51 = -470;

    t51 = (x229!=((x230+x231)==x232));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x233 = 64U;
	static int8_t x234 = 8;
	uint32_t x235 = UINT32_MAX;
	volatile int32_t t52 = 94529702;

    t52 = (x233!=((x234+x235)==x236));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x238 = INT64_MIN;
	volatile int64_t x239 = INT64_MAX;
	int32_t x240 = -7;
	int32_t t53 = -380;

    t53 = (x237!=((x238+x239)==x240));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x242 = 61U;
	static int8_t x243 = INT8_MAX;
	volatile int32_t t54 = 959204608;

    t54 = (x241!=((x242+x243)==x244));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x245 = 18U;
	static int8_t x246 = INT8_MIN;
	int8_t x247 = -1;
	uint8_t x248 = 1U;
	int32_t t55 = -2;

    t55 = (x245!=((x246+x247)==x248));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x249 = INT64_MIN;
	uint64_t x251 = 6908932877348977964LLU;
	int32_t x252 = INT32_MIN;
	int32_t t56 = -103;

    t56 = (x249!=((x250+x251)==x252));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x253 = UINT32_MAX;
	uint16_t x254 = UINT16_MAX;
	static volatile uint16_t x255 = 561U;
	volatile int16_t x256 = 822;
	int32_t t57 = -176009;

    t57 = (x253!=((x254+x255)==x256));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x257 = INT16_MIN;
	int8_t x258 = -1;
	volatile int8_t x259 = INT8_MIN;
	int64_t x260 = -1406256346923LL;
	volatile int32_t t58 = 38796391;

    t58 = (x257!=((x258+x259)==x260));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x261 = -1;
	int16_t x262 = -76;
	volatile int32_t t59 = 87;

    t59 = (x261!=((x262+x263)==x264));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x265 = -16356816577071LL;
	int8_t x266 = 1;
	uint32_t x267 = UINT32_MAX;
	static volatile int16_t x268 = 12;

    t60 = (x265!=((x266+x267)==x268));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x270 = UINT32_MAX;
	int32_t t61 = 498634356;

    t61 = (x269!=((x270+x271)==x272));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x277 = INT32_MIN;
	int8_t x278 = -6;
	int64_t x279 = -365402277755LL;
	int16_t x280 = -891;
	static int32_t t62 = -178;

    t62 = (x277!=((x278+x279)==x280));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x281 = INT64_MIN;
	int64_t x283 = -25926LL;
	uint8_t x284 = UINT8_MAX;
	int32_t t63 = 20549068;

    t63 = (x281!=((x282+x283)==x284));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x285 = 3;
	int32_t x288 = INT32_MIN;
	int32_t t64 = -858;

    t64 = (x285!=((x286+x287)==x288));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x289 = INT64_MAX;
	uint32_t x290 = 25374U;
	static uint32_t x291 = 1159719794U;
	int8_t x292 = INT8_MIN;

    t65 = (x289!=((x290+x291)==x292));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x293 = INT64_MAX;
	int32_t x294 = INT32_MIN;
	uint32_t x295 = 252948821U;
	static volatile int32_t x296 = 1254;
	int32_t t66 = 19335850;

    t66 = (x293!=((x294+x295)==x296));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x297 = 91U;
	static volatile uint8_t x299 = UINT8_MAX;
	int32_t t67 = 36;

    t67 = (x297!=((x298+x299)==x300));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x301 = -318544;
	int32_t x302 = -1;
	uint32_t x303 = 86U;
	uint32_t x304 = UINT32_MAX;
	int32_t t68 = -240132;

    t68 = (x301!=((x302+x303)==x304));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x309 = INT32_MIN;
	static volatile uint16_t x310 = 1U;
	static int8_t x311 = INT8_MIN;
	static uint16_t x312 = UINT16_MAX;
	static volatile int32_t t69 = 1444569;

    t69 = (x309!=((x310+x311)==x312));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x313 = 1859;
	int16_t x314 = INT16_MIN;
	uint16_t x315 = UINT16_MAX;
	static int64_t x316 = INT64_MIN;

    t70 = (x313!=((x314+x315)==x316));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x318 = INT8_MIN;
	uint8_t x319 = 6U;
	int64_t x320 = INT64_MIN;
	volatile int32_t t71 = 3413;

    t71 = (x317!=((x318+x319)==x320));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x321 = INT8_MIN;
	static int32_t t72 = -21833;

    t72 = (x321!=((x322+x323)==x324));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x325 = INT8_MIN;
	int16_t x326 = INT16_MIN;
	static uint16_t x328 = 771U;

    t73 = (x325!=((x326+x327)==x328));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x329 = -1;
	uint64_t x330 = 5630461980011952LLU;
	int32_t x331 = INT32_MAX;
	static int32_t t74 = 5;

    t74 = (x329!=((x330+x331)==x332));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x333 = 0U;
	uint64_t x334 = UINT64_MAX;
	int64_t x335 = 13370477145146571LL;
	uint16_t x336 = 153U;
	volatile int32_t t75 = 63935;

    t75 = (x333!=((x334+x335)==x336));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x337 = 60630206163438LLU;
	int32_t x339 = -775834776;
	static int16_t x340 = -21;
	static int32_t t76 = 31641551;

    t76 = (x337!=((x338+x339)==x340));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int16_t x345 = -1;
	static int8_t x346 = -7;
	uint64_t x347 = UINT64_MAX;
	int32_t t77 = -250183;

    t77 = (x345!=((x346+x347)==x348));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x349 = UINT32_MAX;
	static volatile uint8_t x350 = 10U;
	int16_t x351 = -21;
	volatile int32_t t78 = 748370;

    t78 = (x349!=((x350+x351)==x352));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x353 = 29U;
	int32_t x354 = -49368126;
	int32_t x356 = -1;
	volatile int32_t t79 = -1404;

    t79 = (x353!=((x354+x355)==x356));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x357 = -1;
	int32_t x358 = 395;
	volatile int32_t x359 = INT32_MIN;
	int16_t x360 = 385;

    t80 = (x357!=((x358+x359)==x360));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x365 = -1;
	static uint32_t x366 = 4496941U;
	int16_t x367 = INT16_MIN;
	uint16_t x368 = 1690U;
	volatile int32_t t81 = -113439;

    t81 = (x365!=((x366+x367)==x368));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x371 = -3161;
	int64_t x372 = INT64_MIN;
	int32_t t82 = -1063;

    t82 = (x369!=((x370+x371)==x372));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x373 = -96;
	uint32_t x374 = UINT32_MAX;
	int32_t x375 = INT32_MAX;
	volatile int32_t t83 = 17298636;

    t83 = (x373!=((x374+x375)==x376));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x377 = UINT32_MAX;
	static uint64_t x379 = 14LLU;
	volatile uint16_t x380 = 836U;
	volatile int32_t t84 = -111416;

    t84 = (x377!=((x378+x379)==x380));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x381 = INT8_MIN;
	static volatile uint16_t x382 = 116U;
	int8_t x383 = INT8_MIN;
	static int16_t x384 = -1;
	int32_t t85 = 344401783;

    t85 = (x381!=((x382+x383)==x384));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x389 = INT8_MIN;
	int32_t x390 = INT32_MIN;
	static volatile int32_t x392 = INT32_MIN;
	int32_t t86 = -8037974;

    t86 = (x389!=((x390+x391)==x392));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x393 = 0U;
	volatile int32_t x394 = -30189;
	int64_t x396 = INT64_MAX;
	static volatile int32_t t87 = -163;

    t87 = (x393!=((x394+x395)==x396));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x398 = 1700819513U;

    t88 = (x397!=((x398+x399)==x400));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x401 = -34;
	int16_t x402 = 0;
	volatile int32_t x403 = INT32_MIN;
	int64_t x404 = INT64_MIN;
	volatile int32_t t89 = -1;

    t89 = (x401!=((x402+x403)==x404));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x405 = 32U;
	int8_t x406 = INT8_MAX;
	volatile uint32_t x407 = 1U;
	int32_t x408 = INT32_MIN;
	static int32_t t90 = 153;

    t90 = (x405!=((x406+x407)==x408));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x409 = 3U;
	int64_t x410 = INT64_MAX;
	int16_t x411 = -1;
	uint16_t x412 = UINT16_MAX;
	volatile int32_t t91 = -2852903;

    t91 = (x409!=((x410+x411)==x412));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x413 = INT8_MIN;
	static uint64_t x415 = 30681947LLU;
	int8_t x416 = INT8_MIN;
	int32_t t92 = 3159;

    t92 = (x413!=((x414+x415)==x416));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x418 = -932;
	static uint8_t x419 = 0U;
	int16_t x420 = INT16_MIN;
	int32_t t93 = 5147317;

    t93 = (x417!=((x418+x419)==x420));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x421 = -1;
	static int16_t x424 = INT16_MIN;

    t94 = (x421!=((x422+x423)==x424));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x425 = 3115899749792416750LL;
	uint8_t x426 = 7U;
	static volatile uint16_t x427 = 3U;
	volatile int32_t x428 = INT32_MIN;
	static int32_t t95 = -26628;

    t95 = (x425!=((x426+x427)==x428));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x433 = INT16_MIN;
	uint16_t x434 = 17554U;
	int64_t x435 = INT64_MIN;
	static int64_t x436 = -1LL;
	static int32_t t96 = -1;

    t96 = (x433!=((x434+x435)==x436));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x437 = INT16_MIN;
	static uint64_t x438 = 48012LLU;
	int64_t x439 = 13308001321887392LL;
	static volatile uint64_t x440 = 2181624192222LLU;
	int32_t t97 = 2592;

    t97 = (x437!=((x438+x439)==x440));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x441 = 127U;
	static volatile uint64_t x442 = 76515872167129910LLU;
	uint8_t x444 = 1U;
	volatile int32_t t98 = 32903380;

    t98 = (x441!=((x442+x443)==x444));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x445 = 28;
	int32_t x447 = INT32_MIN;
	uint32_t x448 = UINT32_MAX;
	int32_t t99 = 113932945;

    t99 = (x445!=((x446+x447)==x448));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x449 = 546133U;
	uint64_t x450 = UINT64_MAX;
	static int16_t x451 = INT16_MAX;
	static int32_t t100 = 243;

    t100 = (x449!=((x450+x451)==x452));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x453 = -1;
	uint8_t x454 = 0U;
	static uint16_t x455 = UINT16_MAX;
	int32_t x456 = INT32_MIN;
	static int32_t t101 = -717655471;

    t101 = (x453!=((x454+x455)==x456));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x457 = 351;
	int32_t x458 = 4;
	uint8_t x459 = 4U;
	int8_t x460 = INT8_MIN;
	static volatile int32_t t102 = -20;

    t102 = (x457!=((x458+x459)==x460));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x461 = INT8_MIN;
	int16_t x462 = 3057;
	volatile int32_t x463 = 102;
	volatile int32_t t103 = 171;

    t103 = (x461!=((x462+x463)==x464));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x474 = -1;
	int8_t x475 = INT8_MAX;
	static volatile int32_t t104 = -3;

    t104 = (x473!=((x474+x475)==x476));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x481 = INT32_MAX;
	static uint16_t x482 = UINT16_MAX;
	int16_t x483 = INT16_MAX;
	volatile int16_t x484 = INT16_MAX;
	volatile int32_t t105 = -1;

    t105 = (x481!=((x482+x483)==x484));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x485 = UINT64_MAX;
	volatile int16_t x486 = -2765;
	static volatile int8_t x487 = -3;
	int32_t x488 = INT32_MAX;

    t106 = (x485!=((x486+x487)==x488));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x494 = 1U;
	int32_t x495 = -5433107;
	uint16_t x496 = 4U;
	volatile int32_t t107 = -120658690;

    t107 = (x493!=((x494+x495)==x496));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x497 = INT16_MIN;
	int8_t x498 = INT8_MIN;
	volatile uint16_t x499 = UINT16_MAX;
	int8_t x500 = INT8_MAX;
	static int32_t t108 = 3;

    t108 = (x497!=((x498+x499)==x500));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x505 = INT8_MIN;
	int64_t x507 = -22137228LL;
	static volatile int16_t x508 = 1;
	volatile int32_t t109 = -66914;

    t109 = (x505!=((x506+x507)==x508));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x509 = 75U;
	int16_t x510 = 10704;
	volatile uint8_t x512 = UINT8_MAX;
	volatile int32_t t110 = 306705;

    t110 = (x509!=((x510+x511)==x512));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x513 = INT16_MIN;
	int32_t x514 = -481;
	static uint32_t x515 = 10011770U;
	int64_t x516 = INT64_MAX;
	volatile int32_t t111 = -161;

    t111 = (x513!=((x514+x515)==x516));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x517 = INT8_MAX;
	volatile uint32_t x519 = UINT32_MAX;
	int64_t x520 = INT64_MIN;
	volatile int32_t t112 = 49507;

    t112 = (x517!=((x518+x519)==x520));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x521 = INT32_MIN;
	int16_t x522 = -1;
	static int8_t x524 = 0;
	volatile int32_t t113 = -2245368;

    t113 = (x521!=((x522+x523)==x524));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x526 = INT16_MIN;
	volatile uint32_t x528 = 66968078U;

    t114 = (x525!=((x526+x527)==x528));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x529 = INT16_MIN;
	int32_t x531 = -200293315;
	static int32_t t115 = -28097970;

    t115 = (x529!=((x530+x531)==x532));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x533 = 20;
	uint32_t x534 = UINT32_MAX;
	static int8_t x535 = INT8_MIN;
	static uint16_t x536 = UINT16_MAX;
	volatile int32_t t116 = -37312216;

    t116 = (x533!=((x534+x535)==x536));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x541 = INT64_MIN;
	static int64_t x543 = 2727559119772LL;
	static int32_t t117 = -510675;

    t117 = (x541!=((x542+x543)==x544));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x545 = INT32_MIN;
	static uint8_t x546 = 1U;
	int8_t x547 = INT8_MIN;
	int64_t x548 = INT64_MIN;

    t118 = (x545!=((x546+x547)==x548));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x550 = UINT32_MAX;
	int8_t x551 = -58;
	uint64_t x552 = UINT64_MAX;
	static int32_t t119 = -284227;

    t119 = (x549!=((x550+x551)==x552));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x553 = 2847647620270394265LLU;
	int64_t x554 = INT64_MIN;
	int64_t x555 = 24276443737927554LL;
	static int32_t t120 = -442200350;

    t120 = (x553!=((x554+x555)==x556));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x557 = 66U;
	int16_t x558 = -1;
	int32_t x559 = -1;
	volatile int32_t t121 = 1;

    t121 = (x557!=((x558+x559)==x560));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x562 = 9U;
	uint16_t x563 = 25U;
	int64_t x564 = 32LL;

    t122 = (x561!=((x562+x563)==x564));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x565 = -1;
	volatile int8_t x566 = -1;
	int32_t x567 = INT32_MAX;
	volatile uint64_t x568 = UINT64_MAX;
	int32_t t123 = 3;

    t123 = (x565!=((x566+x567)==x568));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x573 = UINT32_MAX;
	int16_t x574 = INT16_MIN;
	int64_t x576 = 85289432LL;
	static volatile int32_t t124 = 16280;

    t124 = (x573!=((x574+x575)==x576));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x578 = INT16_MAX;
	uint8_t x579 = 79U;
	static volatile uint32_t x580 = UINT32_MAX;
	volatile int32_t t125 = 128200503;

    t125 = (x577!=((x578+x579)==x580));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x581 = -1319443532255LL;
	int64_t x582 = -1LL;
	static int64_t x583 = 1LL;
	int16_t x584 = INT16_MIN;
	volatile int32_t t126 = 927456681;

    t126 = (x581!=((x582+x583)==x584));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x585 = -1;
	static int16_t x586 = INT16_MAX;
	static int16_t x587 = INT16_MAX;
	int16_t x588 = INT16_MIN;
	static volatile int32_t t127 = -224;

    t127 = (x585!=((x586+x587)==x588));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x591 = 2790430U;
	int16_t x592 = INT16_MIN;
	int32_t t128 = -189409526;

    t128 = (x589!=((x590+x591)==x592));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x593 = 0U;
	uint64_t x594 = UINT64_MAX;
	int8_t x596 = 0;
	int32_t t129 = 7386;

    t129 = (x593!=((x594+x595)==x596));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x598 = 881U;
	volatile uint8_t x599 = 15U;
	int32_t t130 = -263972305;

    t130 = (x597!=((x598+x599)==x600));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x601 = UINT8_MAX;
	int32_t x602 = INT32_MIN;
	int16_t x603 = 459;
	int64_t x604 = INT64_MAX;
	int32_t t131 = 1042456;

    t131 = (x601!=((x602+x603)==x604));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x605 = INT16_MAX;
	uint32_t x606 = 60080U;
	uint16_t x608 = UINT16_MAX;
	int32_t t132 = 532350492;

    t132 = (x605!=((x606+x607)==x608));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x610 = 0;
	uint8_t x611 = UINT8_MAX;
	uint8_t x612 = UINT8_MAX;
	int32_t t133 = -1176;

    t133 = (x609!=((x610+x611)==x612));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x613 = INT8_MIN;
	volatile uint64_t x614 = UINT64_MAX;
	int64_t x615 = INT64_MIN;
	int64_t x616 = -1LL;
	volatile int32_t t134 = -82762;

    t134 = (x613!=((x614+x615)==x616));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x617 = -1LL;
	volatile int32_t x618 = -56004;
	volatile uint16_t x619 = 1540U;
	int64_t x620 = INT64_MIN;
	static volatile int32_t t135 = 41827091;

    t135 = (x617!=((x618+x619)==x620));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x621 = UINT8_MAX;
	volatile int8_t x623 = INT8_MIN;
	int64_t x624 = -1LL;
	int32_t t136 = 0;

    t136 = (x621!=((x622+x623)==x624));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x629 = -53;
	int64_t x630 = -1LL;
	int64_t x631 = 5LL;
	volatile int32_t t137 = -15930;

    t137 = (x629!=((x630+x631)==x632));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x633 = 1U;
	uint8_t x634 = 19U;
	uint8_t x635 = UINT8_MAX;
	uint32_t x636 = 1U;
	static volatile int32_t t138 = 1;

    t138 = (x633!=((x634+x635)==x636));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x639 = 22U;
	uint32_t x640 = 50025U;

    t139 = (x637!=((x638+x639)==x640));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x641 = UINT64_MAX;
	uint8_t x642 = UINT8_MAX;
	int32_t x643 = 441331;
	int64_t x644 = -135991LL;
	int32_t t140 = 90256712;

    t140 = (x641!=((x642+x643)==x644));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x645 = INT32_MIN;
	int64_t x646 = INT64_MAX;
	volatile int64_t x647 = -2213816307044980157LL;
	uint32_t x648 = 50881U;
	volatile int32_t t141 = 143;

    t141 = (x645!=((x646+x647)==x648));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x649 = -1LL;
	int64_t x650 = -1LL;
	int16_t x651 = INT16_MIN;
	static uint64_t x652 = UINT64_MAX;

    t142 = (x649!=((x650+x651)==x652));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x657 = 38736U;
	uint8_t x658 = UINT8_MAX;
	uint16_t x659 = 3673U;
	int64_t x660 = INT64_MIN;
	int32_t t143 = -4813;

    t143 = (x657!=((x658+x659)==x660));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x662 = UINT32_MAX;
	volatile int64_t x663 = 2914330104394290639LL;
	volatile int32_t t144 = -2643;

    t144 = (x661!=((x662+x663)==x664));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x665 = 6U;
	uint32_t x666 = 25131U;
	int16_t x667 = INT16_MAX;
	int32_t x668 = 6589;
	volatile int32_t t145 = 51;

    t145 = (x665!=((x666+x667)==x668));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x670 = -1;
	uint64_t x671 = 200824279458387LLU;
	int32_t t146 = 9872;

    t146 = (x669!=((x670+x671)==x672));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x673 = -6;
	int64_t x674 = -22653LL;
	static int32_t x675 = INT32_MAX;

    t147 = (x673!=((x674+x675)==x676));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x677 = UINT8_MAX;
	int16_t x678 = INT16_MAX;
	int8_t x680 = INT8_MIN;
	int32_t t148 = -27;

    t148 = (x677!=((x678+x679)==x680));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x681 = INT16_MAX;
	int8_t x682 = 1;
	uint16_t x683 = 17U;
	static int16_t x684 = INT16_MIN;
	int32_t t149 = -1;

    t149 = (x681!=((x682+x683)==x684));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x685 = INT64_MIN;
	static uint32_t x686 = 848U;
	static int8_t x687 = INT8_MIN;
	volatile uint8_t x688 = 1U;
	int32_t t150 = -340270;

    t150 = (x685!=((x686+x687)==x688));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x690 = INT8_MIN;
	volatile int32_t t151 = 409;

    t151 = (x689!=((x690+x691)==x692));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x693 = INT8_MAX;
	static int8_t x695 = -1;
	int32_t x696 = -499191;

    t152 = (x693!=((x694+x695)==x696));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x697 = INT32_MIN;
	uint64_t x698 = UINT64_MAX;
	int64_t x699 = -1LL;
	static int8_t x700 = 1;
	int32_t t153 = -103;

    t153 = (x697!=((x698+x699)==x700));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x701 = 7;
	int32_t x702 = INT32_MIN;
	uint16_t x703 = 166U;
	int32_t t154 = -40744;

    t154 = (x701!=((x702+x703)==x704));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x706 = 7701;
	int16_t x707 = INT16_MIN;
	int8_t x708 = INT8_MIN;

    t155 = (x705!=((x706+x707)==x708));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x710 = -496790;
	volatile uint16_t x711 = 0U;
	uint64_t x712 = UINT64_MAX;
	int32_t t156 = 10862;

    t156 = (x709!=((x710+x711)==x712));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x718 = 44990U;
	int16_t x719 = INT16_MAX;
	volatile int32_t x720 = INT32_MIN;
	volatile int32_t t157 = 4;

    t157 = (x717!=((x718+x719)==x720));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x721 = -1;
	static int16_t x722 = INT16_MAX;
	uint8_t x723 = UINT8_MAX;
	int8_t x724 = INT8_MAX;
	int32_t t158 = 125466;

    t158 = (x721!=((x722+x723)==x724));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x725 = 15708975620210LL;
	uint16_t x726 = UINT16_MAX;
	int64_t x727 = -1LL;
	int16_t x728 = INT16_MIN;
	int32_t t159 = -1;

    t159 = (x725!=((x726+x727)==x728));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x733 = -1;
	int8_t x734 = -1;
	int16_t x736 = -1900;
	volatile int32_t t160 = 0;

    t160 = (x733!=((x734+x735)==x736));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x737 = 115U;
	static uint32_t x738 = UINT32_MAX;
	int16_t x739 = 11059;
	int8_t x740 = INT8_MIN;

    t161 = (x737!=((x738+x739)==x740));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x741 = INT16_MIN;
	uint16_t x743 = 5U;
	uint16_t x744 = UINT16_MAX;
	static int32_t t162 = 7527116;

    t162 = (x741!=((x742+x743)==x744));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x746 = 15U;
	int32_t x747 = INT32_MIN;
	uint16_t x748 = 933U;
	volatile int32_t t163 = -4;

    t163 = (x745!=((x746+x747)==x748));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x749 = 0;
	uint64_t x750 = 257949134547448821LLU;
	int8_t x751 = INT8_MIN;
	volatile int32_t t164 = 67567745;

    t164 = (x749!=((x750+x751)==x752));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x753 = -1;
	uint64_t x754 = UINT64_MAX;
	int32_t x755 = INT32_MIN;
	int32_t t165 = 88;

    t165 = (x753!=((x754+x755)==x756));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x757 = UINT64_MAX;
	uint8_t x759 = 127U;
	volatile int16_t x760 = 18;
	static int32_t t166 = 464402330;

    t166 = (x757!=((x758+x759)==x760));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x766 = INT8_MAX;
	volatile int8_t x767 = INT8_MAX;
	int32_t t167 = -3;

    t167 = (x765!=((x766+x767)==x768));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x769 = INT64_MIN;
	int64_t x770 = -1LL;
	volatile int8_t x771 = INT8_MIN;

    t168 = (x769!=((x770+x771)==x772));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x773 = -2743890;
	static volatile int32_t x774 = INT32_MAX;
	int8_t x776 = -1;
	volatile int32_t t169 = 393997102;

    t169 = (x773!=((x774+x775)==x776));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x777 = 12976U;
	static int16_t x778 = INT16_MAX;
	volatile uint64_t x779 = 305286683569009651LLU;
	int8_t x780 = 0;
	volatile int32_t t170 = 7;

    t170 = (x777!=((x778+x779)==x780));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x781 = INT32_MIN;
	uint32_t x783 = UINT32_MAX;
	volatile int8_t x784 = INT8_MAX;
	int32_t t171 = -1;

    t171 = (x781!=((x782+x783)==x784));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x785 = INT32_MIN;
	int8_t x786 = 0;
	static int32_t t172 = 13224;

    t172 = (x785!=((x786+x787)==x788));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x789 = -1;
	volatile uint16_t x790 = 17019U;
	int64_t x791 = -263754458015294LL;
	int64_t x792 = -1LL;
	volatile int32_t t173 = -14267895;

    t173 = (x789!=((x790+x791)==x792));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x793 = UINT32_MAX;
	int64_t x794 = -1LL;
	volatile uint64_t x795 = UINT64_MAX;
	static uint64_t x796 = 207239811001480124LLU;
	int32_t t174 = 1;

    t174 = (x793!=((x794+x795)==x796));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x801 = -1;
	uint8_t x802 = UINT8_MAX;
	int32_t x803 = -1;
	static int32_t t175 = -2;

    t175 = (x801!=((x802+x803)==x804));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x805 = INT32_MIN;
	int8_t x806 = -5;
	int8_t x807 = 18;
	int64_t x808 = INT64_MIN;
	volatile int32_t t176 = 62376576;

    t176 = (x805!=((x806+x807)==x808));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x809 = 8390403738111997337LLU;
	static uint16_t x810 = UINT16_MAX;
	int16_t x811 = INT16_MIN;
	volatile int8_t x812 = 6;
	volatile int32_t t177 = 306272516;

    t177 = (x809!=((x810+x811)==x812));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x813 = -144722119721LL;
	uint32_t x814 = 2133386U;
	int64_t x816 = INT64_MAX;
	int32_t t178 = 2187140;

    t178 = (x813!=((x814+x815)==x816));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x818 = 12;
	int8_t x819 = 36;
	int16_t x820 = -1;
	int32_t t179 = -495;

    t179 = (x817!=((x818+x819)==x820));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x823 = INT8_MIN;
	int32_t x824 = 30510304;

    t180 = (x821!=((x822+x823)==x824));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x825 = -9330708737165LL;
	static uint64_t x827 = UINT64_MAX;
	int16_t x828 = 537;
	volatile int32_t t181 = -4005;

    t181 = (x825!=((x826+x827)==x828));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x829 = -1;
	int64_t x831 = INT64_MIN;
	volatile int64_t x832 = INT64_MIN;
	int32_t t182 = -277687;

    t182 = (x829!=((x830+x831)==x832));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x833 = 212U;
	uint8_t x834 = 5U;
	static uint64_t x835 = 183LLU;
	uint64_t x836 = UINT64_MAX;

    t183 = (x833!=((x834+x835)==x836));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x837 = UINT64_MAX;
	uint32_t x838 = 866833U;
	static int64_t x839 = 1122LL;
	uint8_t x840 = 10U;
	volatile int32_t t184 = 260;

    t184 = (x837!=((x838+x839)==x840));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x843 = 12939U;
	volatile int32_t t185 = 3533;

    t185 = (x841!=((x842+x843)==x844));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x846 = 82339U;
	static volatile uint64_t x847 = UINT64_MAX;
	uint16_t x848 = 3998U;

    t186 = (x845!=((x846+x847)==x848));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x849 = INT64_MIN;
	static volatile uint8_t x850 = UINT8_MAX;
	volatile int32_t x852 = 16;

    t187 = (x849!=((x850+x851)==x852));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x854 = UINT16_MAX;
	int32_t t188 = 162;

    t188 = (x853!=((x854+x855)==x856));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x857 = UINT8_MAX;
	uint16_t x859 = UINT16_MAX;
	static int8_t x860 = -1;
	volatile int32_t t189 = 3207463;

    t189 = (x857!=((x858+x859)==x860));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x861 = 1565U;
	uint16_t x862 = 3U;
	static uint16_t x863 = UINT16_MAX;
	int32_t x864 = -122145309;
	int32_t t190 = -8010;

    t190 = (x861!=((x862+x863)==x864));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x865 = UINT64_MAX;
	volatile int16_t x866 = INT16_MIN;
	int8_t x867 = -1;
	volatile int32_t x868 = INT32_MIN;
	volatile int32_t t191 = -1297;

    t191 = (x865!=((x866+x867)==x868));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x869 = -4;
	volatile int64_t x870 = -1LL;
	volatile int64_t x872 = INT64_MIN;
	int32_t t192 = 14;

    t192 = (x869!=((x870+x871)==x872));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x874 = INT32_MIN;
	uint32_t x875 = 1913964U;
	uint16_t x876 = 2U;

    t193 = (x873!=((x874+x875)==x876));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x877 = 4U;
	int32_t x878 = INT32_MIN;
	int64_t x879 = 253199639040LL;
	static int64_t x880 = 255858169846301829LL;

    t194 = (x877!=((x878+x879)==x880));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x882 = -1LL;
	uint16_t x883 = UINT16_MAX;
	volatile int32_t x884 = INT32_MIN;
	static int32_t t195 = -566603;

    t195 = (x881!=((x882+x883)==x884));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x885 = 2U;
	volatile int8_t x886 = INT8_MIN;
	volatile int64_t x887 = -1LL;
	static uint32_t x888 = UINT32_MAX;
	static volatile int32_t t196 = 9891491;

    t196 = (x885!=((x886+x887)==x888));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x889 = INT32_MIN;
	uint16_t x890 = 5380U;
	int8_t x891 = -13;
	int32_t t197 = -24;

    t197 = (x889!=((x890+x891)==x892));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x893 = -2085LL;
	uint16_t x896 = UINT16_MAX;
	int32_t t198 = 1579;

    t198 = (x893!=((x894+x895)==x896));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x897 = 25;
	static int16_t x899 = -1;
	int8_t x900 = -1;
	static int32_t t199 = -12120;

    t199 = (x897!=((x898+x899)==x900));

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

