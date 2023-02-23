
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
volatile int16_t x9 = INT16_MAX;
uint8_t x10 = UINT8_MAX;
uint16_t x11 = UINT16_MAX;
int8_t x12 = INT8_MAX;
volatile int32_t t3 = -195;
volatile int32_t x22 = 13;
int8_t x26 = 1;
static int16_t x33 = INT16_MIN;
int32_t x34 = -149;
uint8_t x40 = UINT8_MAX;
volatile uint64_t x44 = 3847054560260396LLU;
int64_t x46 = 3345LL;
volatile int32_t t10 = -3;
int8_t x51 = 1;
static uint64_t x61 = 3201459560158LLU;
uint8_t x68 = 4U;
int64_t x71 = 2481533046586576LL;
volatile int64_t x72 = -1LL;
uint16_t x75 = 519U;
volatile int32_t t18 = -6957;
uint32_t x83 = 3716U;
static uint32_t x88 = 15U;
volatile uint16_t x90 = UINT16_MAX;
volatile int32_t t21 = 1732362;
volatile uint8_t x93 = 104U;
static uint8_t x95 = UINT8_MAX;
uint64_t x98 = UINT64_MAX;
int16_t x99 = INT16_MIN;
uint32_t x102 = UINT32_MAX;
volatile int32_t t24 = 946233;
int64_t x108 = 54320978587719993LL;
int64_t x114 = -1LL;
int16_t x118 = INT16_MAX;
volatile int64_t x123 = -1LL;
uint64_t x127 = 2010277213761769LLU;
uint8_t x129 = 94U;
int32_t t32 = -73491939;
int16_t x161 = INT16_MIN;
int32_t x163 = 309;
static int32_t t39 = -3069;
int32_t x165 = -2269;
int32_t t40 = -57930;
int16_t x172 = INT16_MIN;
int8_t x179 = INT8_MIN;
int8_t x187 = INT8_MAX;
volatile int32_t t44 = -16449;
volatile uint64_t x189 = 302723051681831796LLU;
volatile int64_t x193 = -21180697LL;
uint8_t x199 = 22U;
volatile int32_t t47 = -75;
volatile int8_t x220 = 63;
int8_t x221 = INT8_MIN;
int64_t x224 = -1LL;
int8_t x229 = INT8_MIN;
int32_t x234 = -1;
int8_t x239 = INT8_MIN;
int16_t x243 = INT16_MIN;
uint64_t x244 = 1092930588987408586LLU;
volatile int16_t x248 = INT16_MIN;
int8_t x249 = -21;
int8_t x250 = -1;
static int8_t x256 = -1;
int8_t x260 = 21;
int32_t x261 = -462939327;
int32_t x273 = -1;
int32_t x275 = 274739;
int16_t x280 = INT16_MAX;
volatile uint16_t x284 = UINT16_MAX;
uint16_t x286 = 12U;
int32_t x290 = INT32_MIN;
static volatile int32_t t67 = -8268479;
static uint64_t x306 = 106908985849392LLU;
static int64_t x308 = INT64_MAX;
int32_t t70 = -45;
static uint64_t x309 = 582LLU;
int8_t x311 = -1;
uint8_t x314 = 23U;
int64_t x315 = INT64_MAX;
static int32_t t72 = 0;
static int16_t x318 = -1;
int32_t x319 = INT32_MIN;
int32_t t74 = 96;
volatile uint16_t x330 = 2812U;
int64_t x336 = INT64_MAX;
volatile uint16_t x342 = 3779U;
static volatile int64_t x362 = -1LL;
volatile uint32_t x366 = UINT32_MAX;
int16_t x368 = INT16_MAX;
static volatile int32_t t84 = -377845;
int32_t x373 = INT32_MIN;
int32_t x375 = INT32_MIN;
int32_t x379 = -1;
int16_t x382 = 81;
static int16_t x383 = -1;
static uint8_t x387 = UINT8_MAX;
uint8_t x388 = 112U;
volatile int64_t x392 = INT64_MIN;
int16_t x393 = INT16_MIN;
static int8_t x394 = INT8_MIN;
int32_t t90 = -28928832;
static int64_t x399 = 163341919458LL;
int32_t t92 = 1;
uint32_t x406 = UINT32_MAX;
static uint32_t x410 = 1695801U;
int8_t x415 = INT8_MIN;
uint8_t x416 = 14U;
volatile uint8_t x422 = 8U;
volatile int32_t x428 = INT32_MIN;
int8_t x430 = INT8_MIN;
int32_t t98 = -365346900;
int8_t x433 = 7;
uint16_t x438 = 3U;
volatile int8_t x439 = -3;
volatile int64_t x444 = -741452870024LL;
volatile int32_t t101 = -1;
volatile int16_t x445 = INT16_MIN;
uint32_t x450 = UINT32_MAX;
int64_t x455 = INT64_MIN;
int64_t x456 = INT64_MIN;
int32_t t104 = 1009711032;
int64_t x465 = INT64_MIN;
static volatile int64_t x467 = -234LL;
int32_t x480 = -12754796;
int32_t t109 = -926304;
int16_t x485 = INT16_MIN;
int16_t x486 = INT16_MIN;
uint8_t x488 = UINT8_MAX;
volatile uint64_t x494 = UINT64_MAX;
int64_t x496 = -208661584500669LL;
static int32_t x498 = 21009985;
volatile int16_t x500 = INT16_MIN;
static int8_t x512 = 11;
int32_t x515 = INT32_MIN;
int8_t x516 = INT8_MIN;
volatile int8_t x519 = 52;
static uint32_t x521 = UINT32_MAX;
int64_t x525 = INT64_MAX;
int32_t x536 = 0;
uint16_t x538 = 645U;
uint64_t x542 = 23542222577897862LLU;
int64_t x545 = -4746LL;
static uint16_t x547 = 1958U;
static int64_t x549 = INT64_MAX;
static int16_t x550 = -1;
int64_t x551 = 883306LL;
static uint16_t x552 = 2267U;
int32_t t124 = 0;
static volatile int32_t t125 = -52;
static int32_t t126 = 31;
int16_t x562 = -10;
int32_t t127 = -309689;
uint64_t x575 = UINT64_MAX;
uint64_t x583 = UINT64_MAX;
volatile int32_t x587 = INT32_MIN;
uint64_t x600 = UINT64_MAX;
volatile int16_t x606 = INT16_MIN;
static volatile int32_t x607 = -28380;
uint64_t x612 = 29474762018LLU;
int8_t x615 = 0;
uint32_t x620 = 12949023U;
uint16_t x627 = UINT16_MAX;
volatile int16_t x628 = INT16_MAX;
uint64_t x637 = 90972465821278LLU;
int8_t x639 = INT8_MAX;
int64_t x640 = INT64_MAX;
static uint8_t x647 = 1U;
static uint8_t x649 = UINT8_MAX;
volatile uint64_t x651 = 11488897907682773LLU;
int8_t x652 = 13;
static int8_t x659 = INT8_MAX;
int64_t x660 = INT64_MAX;
volatile uint32_t x671 = UINT32_MAX;
int32_t x672 = INT32_MIN;
uint16_t x682 = 1U;
uint8_t x693 = 84U;
int32_t t158 = 0;
int32_t t161 = -12538;
int64_t x717 = -1LL;
static uint32_t x724 = 0U;
static uint8_t x726 = UINT8_MAX;
int16_t x734 = INT16_MIN;
int32_t x736 = INT32_MIN;
static int32_t x739 = INT32_MIN;
static uint64_t x743 = 32436678LLU;
volatile int16_t x746 = 1;
static volatile uint64_t x752 = 5LLU;
int32_t t171 = 32369;
static uint32_t x755 = UINT32_MAX;
volatile uint8_t x756 = UINT8_MAX;
int64_t x762 = -1068513414084LL;
int16_t x764 = -1207;
volatile int32_t t176 = -116530;
int32_t x777 = -2056;
int8_t x779 = INT8_MIN;
static volatile int32_t x782 = INT32_MIN;
uint16_t x786 = 5245U;
static int16_t x797 = -1;
int8_t x798 = INT8_MIN;
int8_t x801 = -1;
static int16_t x809 = INT16_MIN;
volatile int32_t t185 = 5128138;
int32_t t186 = 660563;
static int16_t x824 = -1;
int32_t t189 = 129211120;
volatile int16_t x837 = -1;
int64_t x842 = INT64_MIN;
volatile int32_t t193 = 0;
volatile int32_t t194 = 23507;
volatile int32_t t195 = 28;
volatile int32_t t196 = 402114383;
static int32_t x861 = INT32_MAX;
uint32_t x867 = UINT32_MAX;
int16_t x868 = 51;
static int16_t x872 = 217;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	uint64_t x3 = 1794078731LLU;
	int64_t x4 = INT64_MAX;
	int32_t t0 = 21352;

    t0 = (x1!=((x2^x3)-x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -2467773;
	int32_t x6 = 903509;
	volatile int16_t x7 = -121;
	int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = 1708;

    t1 = (x5!=((x6^x7)-x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t t2 = 7;

    t2 = (x9!=((x10^x11)-x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MIN;
	uint16_t x18 = UINT16_MAX;
	int16_t x19 = INT16_MAX;
	int8_t x20 = -1;

    t3 = (x17!=((x18^x19)-x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x21 = UINT8_MAX;
	static volatile int8_t x23 = -1;
	static int32_t x24 = INT32_MIN;
	volatile int32_t t4 = -29356;

    t4 = (x21!=((x22^x23)-x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x25 = UINT64_MAX;
	uint8_t x27 = UINT8_MAX;
	int64_t x28 = INT64_MAX;
	volatile int32_t t5 = -825879;

    t5 = (x25!=((x26^x27)-x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = INT16_MIN;
	int32_t x30 = -7166732;
	int32_t x31 = -133;
	int64_t x32 = -9LL;
	volatile int32_t t6 = 225;

    t6 = (x29!=((x30^x31)-x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x35 = -212;
	static uint8_t x36 = UINT8_MAX;
	volatile int32_t t7 = 3;

    t7 = (x33!=((x34^x35)-x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x37 = -1;
	int8_t x38 = -1;
	uint32_t x39 = UINT32_MAX;
	static int32_t t8 = -3984;

    t8 = (x37!=((x38^x39)-x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x41 = INT8_MIN;
	int32_t x42 = -1;
	static volatile uint8_t x43 = UINT8_MAX;
	volatile int32_t t9 = 63;

    t9 = (x41!=((x42^x43)-x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MAX;
	uint32_t x47 = 61675247U;
	int32_t x48 = 22067794;

    t10 = (x45!=((x46^x47)-x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = UINT32_MAX;
	int32_t x50 = 78141;
	int64_t x52 = INT64_MAX;
	int32_t t11 = 101;

    t11 = (x49!=((x50^x51)-x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	int64_t x54 = INT64_MIN;
	static uint32_t x55 = 15004U;
	volatile int16_t x56 = -1;
	static int32_t t12 = 24;

    t12 = (x53!=((x54^x55)-x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = INT8_MAX;
	volatile int64_t x58 = -9505500961355563LL;
	int32_t x59 = INT32_MAX;
	volatile int32_t x60 = INT32_MAX;
	volatile int32_t t13 = -5920288;

    t13 = (x57!=((x58^x59)-x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x62 = 53737546LLU;
	uint64_t x63 = 52951343566875LLU;
	uint16_t x64 = 33U;
	int32_t t14 = -16345795;

    t14 = (x61!=((x62^x63)-x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = -2809;
	volatile int32_t x66 = -1;
	static uint32_t x67 = UINT32_MAX;
	int32_t t15 = 0;

    t15 = (x65!=((x66^x67)-x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MIN;
	int32_t x70 = INT32_MIN;
	int32_t t16 = 5231931;

    t16 = (x69!=((x70^x71)-x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = INT64_MIN;
	volatile int8_t x74 = -7;
	static uint8_t x76 = UINT8_MAX;
	int32_t t17 = 31;

    t17 = (x73!=((x74^x75)-x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x77 = 109609192U;
	int32_t x78 = -23788;
	volatile uint32_t x79 = 325615090U;
	int16_t x80 = -1;

    t18 = (x77!=((x78^x79)-x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x81 = 4244743016768107397LLU;
	volatile int16_t x82 = 0;
	uint32_t x84 = UINT32_MAX;
	volatile int32_t t19 = -15906;

    t19 = (x81!=((x82^x83)-x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = INT8_MIN;
	volatile uint8_t x86 = 34U;
	volatile int8_t x87 = INT8_MAX;
	volatile int32_t t20 = -597421046;

    t20 = (x85!=((x86^x87)-x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x89 = 898119954944050LLU;
	int16_t x91 = -4;
	static uint64_t x92 = UINT64_MAX;

    t21 = (x89!=((x90^x91)-x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x94 = 9;
	uint64_t x96 = 434040LLU;
	int32_t t22 = -43;

    t22 = (x93!=((x94^x95)-x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = UINT32_MAX;
	uint8_t x100 = 10U;
	static volatile int32_t t23 = 219727;

    t23 = (x97!=((x98^x99)-x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MIN;
	volatile int32_t x103 = INT32_MAX;
	int64_t x104 = INT64_MAX;

    t24 = (x101!=((x102^x103)-x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = INT8_MIN;
	static uint16_t x106 = 13156U;
	uint8_t x107 = 0U;
	volatile int32_t t25 = 68971;

    t25 = (x105!=((x106^x107)-x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x109 = 665U;
	uint64_t x110 = 137020023754LLU;
	int32_t x111 = INT32_MIN;
	uint64_t x112 = UINT64_MAX;
	static volatile int32_t t26 = 2023;

    t26 = (x109!=((x110^x111)-x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = -6910;
	volatile uint64_t x115 = 25405935LLU;
	static int16_t x116 = INT16_MIN;
	static volatile int32_t t27 = -37;

    t27 = (x113!=((x114^x115)-x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = -17LL;
	volatile uint8_t x119 = 42U;
	int16_t x120 = INT16_MIN;
	int32_t t28 = 56468825;

    t28 = (x117!=((x118^x119)-x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = INT64_MIN;
	uint32_t x122 = 1541U;
	uint64_t x124 = UINT64_MAX;
	int32_t t29 = -9199971;

    t29 = (x121!=((x122^x123)-x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x125 = INT8_MAX;
	volatile uint32_t x126 = UINT32_MAX;
	static volatile uint16_t x128 = 6U;
	int32_t t30 = 65378006;

    t30 = (x125!=((x126^x127)-x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x130 = 886401U;
	int16_t x131 = -725;
	int8_t x132 = INT8_MIN;
	static int32_t t31 = 1;

    t31 = (x129!=((x130^x131)-x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x133 = UINT16_MAX;
	int8_t x134 = INT8_MAX;
	int64_t x135 = INT64_MAX;
	volatile uint8_t x136 = UINT8_MAX;

    t32 = (x133!=((x134^x135)-x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x137 = 10;
	uint64_t x138 = 75LLU;
	static volatile uint16_t x139 = 83U;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t33 = 11457283;

    t33 = (x137!=((x138^x139)-x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MIN;
	static int8_t x142 = INT8_MAX;
	static volatile uint64_t x143 = 133235918482LLU;
	int32_t x144 = 2815361;
	static volatile int32_t t34 = 213081643;

    t34 = (x141!=((x142^x143)-x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x145 = 461U;
	volatile int32_t x146 = INT32_MIN;
	volatile int8_t x147 = -58;
	uint16_t x148 = 15838U;
	volatile int32_t t35 = -7;

    t35 = (x145!=((x146^x147)-x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x149 = -1;
	static int8_t x150 = INT8_MAX;
	int16_t x151 = INT16_MIN;
	int16_t x152 = -1;
	int32_t t36 = 340335;

    t36 = (x149!=((x150^x151)-x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = INT64_MAX;
	static int64_t x154 = INT64_MIN;
	static int64_t x155 = INT64_MIN;
	uint32_t x156 = 0U;
	volatile int32_t t37 = -763702;

    t37 = (x153!=((x154^x155)-x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x157 = 638U;
	uint32_t x158 = 164829886U;
	static int32_t x159 = -176;
	uint32_t x160 = UINT32_MAX;
	int32_t t38 = 788072;

    t38 = (x157!=((x158^x159)-x160));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x162 = INT32_MIN;
	uint8_t x164 = 85U;

    t39 = (x161!=((x162^x163)-x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x166 = -47922006;
	uint8_t x167 = 18U;
	int16_t x168 = 24;

    t40 = (x165!=((x166^x167)-x168));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = INT16_MAX;
	volatile uint8_t x170 = 0U;
	volatile int8_t x171 = INT8_MAX;
	int32_t t41 = -13;

    t41 = (x169!=((x170^x171)-x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x173 = INT64_MIN;
	static int64_t x174 = 3900204846470LL;
	int8_t x175 = INT8_MIN;
	static int32_t x176 = INT32_MAX;
	static volatile int32_t t42 = 0;

    t42 = (x173!=((x174^x175)-x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x177 = 29U;
	int32_t x178 = INT32_MIN;
	int32_t x180 = 277;
	volatile int32_t t43 = -3393;

    t43 = (x177!=((x178^x179)-x180));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x185 = -154148627;
	uint8_t x186 = 61U;
	static int64_t x188 = -1521549610LL;

    t44 = (x185!=((x186^x187)-x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x190 = INT8_MIN;
	volatile int32_t x191 = 225281;
	volatile int16_t x192 = INT16_MAX;
	volatile int32_t t45 = 120742128;

    t45 = (x189!=((x190^x191)-x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x194 = INT32_MIN;
	int64_t x195 = 930459390LL;
	static int16_t x196 = 165;
	int32_t t46 = -597729634;

    t46 = (x193!=((x194^x195)-x196));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = INT16_MAX;
	volatile uint32_t x198 = 51U;
	int32_t x200 = -1;

    t47 = (x197!=((x198^x199)-x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x205 = INT32_MIN;
	int32_t x206 = -1;
	int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MAX;
	volatile int32_t t48 = -507;

    t48 = (x205!=((x206^x207)-x208));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x213 = INT16_MIN;
	volatile int32_t x214 = INT32_MIN;
	static int8_t x215 = 0;
	int8_t x216 = -7;
	volatile int32_t t49 = -65;

    t49 = (x213!=((x214^x215)-x216));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x217 = INT8_MIN;
	uint8_t x218 = 0U;
	int64_t x219 = -1LL;
	volatile int32_t t50 = -1;

    t50 = (x217!=((x218^x219)-x220));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x222 = UINT64_MAX;
	uint32_t x223 = 385U;
	int32_t t51 = 75095362;

    t51 = (x221!=((x222^x223)-x224));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x230 = INT8_MAX;
	volatile uint64_t x231 = UINT64_MAX;
	volatile uint16_t x232 = 30644U;
	int32_t t52 = 1252;

    t52 = (x229!=((x230^x231)-x232));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x233 = INT8_MIN;
	volatile int8_t x235 = -1;
	int32_t x236 = 119;
	int32_t t53 = 11;

    t53 = (x233!=((x234^x235)-x236));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x237 = -22;
	volatile uint64_t x238 = UINT64_MAX;
	volatile int16_t x240 = INT16_MAX;
	int32_t t54 = 1;

    t54 = (x237!=((x238^x239)-x240));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x241 = 5U;
	int16_t x242 = 102;
	int32_t t55 = 76436;

    t55 = (x241!=((x242^x243)-x244));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x245 = -1;
	int64_t x246 = -1LL;
	int8_t x247 = -26;
	int32_t t56 = 29;

    t56 = (x245!=((x246^x247)-x248));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x251 = 5U;
	int16_t x252 = INT16_MAX;
	static volatile int32_t t57 = 0;

    t57 = (x249!=((x250^x251)-x252));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x253 = UINT64_MAX;
	volatile int64_t x254 = 3LL;
	uint16_t x255 = 7328U;
	int32_t t58 = 318206;

    t58 = (x253!=((x254^x255)-x256));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint32_t x257 = UINT32_MAX;
	int16_t x258 = -1;
	int32_t x259 = 10893;
	int32_t t59 = -124041;

    t59 = (x257!=((x258^x259)-x260));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x262 = -50030845LL;
	volatile uint64_t x263 = UINT64_MAX;
	int8_t x264 = INT8_MIN;
	int32_t t60 = -35;

    t60 = (x261!=((x262^x263)-x264));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x265 = INT8_MIN;
	uint64_t x266 = UINT64_MAX;
	int16_t x267 = -1;
	int8_t x268 = -1;
	volatile int32_t t61 = -474263;

    t61 = (x265!=((x266^x267)-x268));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x269 = 1U;
	volatile int16_t x270 = INT16_MAX;
	int32_t x271 = -1;
	int32_t x272 = INT32_MIN;
	int32_t t62 = 518;

    t62 = (x269!=((x270^x271)-x272));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x274 = 5171;
	int32_t x276 = -119;
	int32_t t63 = 6;

    t63 = (x273!=((x274^x275)-x276));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x277 = 336166LLU;
	static int16_t x278 = -4388;
	volatile uint64_t x279 = UINT64_MAX;
	int32_t t64 = 1;

    t64 = (x277!=((x278^x279)-x280));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x281 = -1;
	static uint32_t x282 = 896U;
	uint16_t x283 = 927U;
	int32_t t65 = -4795468;

    t65 = (x281!=((x282^x283)-x284));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x285 = INT32_MIN;
	uint8_t x287 = 0U;
	int64_t x288 = 727197LL;
	volatile int32_t t66 = 325;

    t66 = (x285!=((x286^x287)-x288));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x289 = INT16_MIN;
	int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MAX;

    t67 = (x289!=((x290^x291)-x292));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x297 = 4U;
	int16_t x298 = INT16_MIN;
	int8_t x299 = INT8_MIN;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t68 = -5;

    t68 = (x297!=((x298^x299)-x300));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x301 = 2695445U;
	int32_t x302 = INT32_MAX;
	volatile int32_t x303 = -22;
	int64_t x304 = -64286037788LL;
	int32_t t69 = -649241;

    t69 = (x301!=((x302^x303)-x304));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x305 = 999U;
	uint8_t x307 = 0U;

    t70 = (x305!=((x306^x307)-x308));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x310 = 29510LL;
	uint8_t x312 = UINT8_MAX;
	static int32_t t71 = 33338378;

    t71 = (x309!=((x310^x311)-x312));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x313 = INT8_MIN;
	uint64_t x316 = 739LLU;

    t72 = (x313!=((x314^x315)-x316));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x317 = -1;
	volatile uint64_t x320 = 5112552340474LLU;
	int32_t t73 = 21524;

    t73 = (x317!=((x318^x319)-x320));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x321 = INT64_MIN;
	static volatile int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MAX;
	static uint64_t x324 = 94LLU;

    t74 = (x321!=((x322^x323)-x324));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x325 = -1;
	int8_t x326 = INT8_MAX;
	int16_t x327 = INT16_MAX;
	int8_t x328 = -1;
	volatile int32_t t75 = 360651;

    t75 = (x325!=((x326^x327)-x328));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x329 = -1;
	volatile uint64_t x331 = 43242LLU;
	int32_t x332 = INT32_MIN;
	int32_t t76 = 166148289;

    t76 = (x329!=((x330^x331)-x332));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x333 = -1;
	static uint64_t x334 = UINT64_MAX;
	int64_t x335 = INT64_MIN;
	static volatile int32_t t77 = -27901848;

    t77 = (x333!=((x334^x335)-x336));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x341 = -1LL;
	static volatile int32_t x343 = INT32_MAX;
	int16_t x344 = -1;
	volatile int32_t t78 = -837421;

    t78 = (x341!=((x342^x343)-x344));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x345 = UINT16_MAX;
	int8_t x346 = -1;
	int32_t x347 = -1;
	volatile int8_t x348 = 14;
	static int32_t t79 = -568932;

    t79 = (x345!=((x346^x347)-x348));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x349 = 17372052763698LLU;
	int32_t x350 = 331979;
	int64_t x351 = INT64_MIN;
	int64_t x352 = -1LL;
	static volatile int32_t t80 = 619943;

    t80 = (x349!=((x350^x351)-x352));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x353 = UINT32_MAX;
	static volatile uint32_t x354 = 0U;
	int8_t x355 = -1;
	int32_t x356 = INT32_MAX;
	volatile int32_t t81 = -1;

    t81 = (x353!=((x354^x355)-x356));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x357 = -1LL;
	uint32_t x358 = UINT32_MAX;
	int32_t x359 = INT32_MIN;
	volatile uint64_t x360 = 1015196925147LLU;
	int32_t t82 = 5;

    t82 = (x357!=((x358^x359)-x360));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x361 = -81;
	uint64_t x363 = UINT64_MAX;
	int8_t x364 = 7;
	int32_t t83 = -289233;

    t83 = (x361!=((x362^x363)-x364));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x365 = UINT8_MAX;
	static int8_t x367 = 0;

    t84 = (x365!=((x366^x367)-x368));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x374 = INT16_MAX;
	int16_t x376 = 6;
	int32_t t85 = 2;

    t85 = (x373!=((x374^x375)-x376));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x377 = UINT8_MAX;
	uint8_t x378 = UINT8_MAX;
	volatile int64_t x380 = 1860326018576334LL;
	volatile int32_t t86 = 0;

    t86 = (x377!=((x378^x379)-x380));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x381 = 3U;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t87 = 404741;

    t87 = (x381!=((x382^x383)-x384));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x385 = 242609LLU;
	int8_t x386 = 0;
	volatile int32_t t88 = -1;

    t88 = (x385!=((x386^x387)-x388));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x389 = INT8_MAX;
	volatile uint16_t x390 = 54U;
	volatile int16_t x391 = INT16_MIN;
	int32_t t89 = 4749;

    t89 = (x389!=((x390^x391)-x392));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x395 = INT64_MIN;
	int32_t x396 = 188069633;

    t90 = (x393!=((x394^x395)-x396));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x397 = -11LL;
	uint32_t x398 = 392868U;
	uint32_t x400 = 2229U;
	volatile int32_t t91 = -30494758;

    t91 = (x397!=((x398^x399)-x400));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x401 = INT16_MIN;
	static int16_t x402 = INT16_MIN;
	int8_t x403 = 59;
	volatile int32_t x404 = INT32_MIN;

    t92 = (x401!=((x402^x403)-x404));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x405 = -1LL;
	int16_t x407 = -561;
	int16_t x408 = -1;
	static int32_t t93 = -127;

    t93 = (x405!=((x406^x407)-x408));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x409 = INT64_MAX;
	uint64_t x411 = 51137566797947321LLU;
	int64_t x412 = INT64_MIN;
	int32_t t94 = 0;

    t94 = (x409!=((x410^x411)-x412));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x413 = -1;
	uint64_t x414 = 906487883956LLU;
	volatile int32_t t95 = -1759280;

    t95 = (x413!=((x414^x415)-x416));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x421 = INT64_MAX;
	int8_t x423 = 7;
	int64_t x424 = 4LL;
	static int32_t t96 = -893;

    t96 = (x421!=((x422^x423)-x424));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x425 = -60527LL;
	int16_t x426 = INT16_MIN;
	static uint32_t x427 = 7915U;
	volatile int32_t t97 = -11588526;

    t97 = (x425!=((x426^x427)-x428));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x429 = -1;
	int8_t x431 = INT8_MIN;
	static uint32_t x432 = UINT32_MAX;

    t98 = (x429!=((x430^x431)-x432));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x434 = -1;
	int32_t x435 = -1;
	volatile uint64_t x436 = UINT64_MAX;
	int32_t t99 = -139965;

    t99 = (x433!=((x434^x435)-x436));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x437 = INT32_MIN;
	int8_t x440 = -3;
	int32_t t100 = -5;

    t100 = (x437!=((x438^x439)-x440));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x441 = -5LL;
	static uint64_t x442 = 1131230575244951845LLU;
	static uint32_t x443 = UINT32_MAX;

    t101 = (x441!=((x442^x443)-x444));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x446 = 1678847U;
	int8_t x447 = 8;
	uint8_t x448 = 11U;
	int32_t t102 = 6;

    t102 = (x445!=((x446^x447)-x448));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x449 = INT64_MAX;
	int8_t x451 = -1;
	int8_t x452 = -1;
	volatile int32_t t103 = 214039929;

    t103 = (x449!=((x450^x451)-x452));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x453 = UINT32_MAX;
	uint32_t x454 = 9U;

    t104 = (x453!=((x454^x455)-x456));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x457 = INT32_MAX;
	uint16_t x458 = 844U;
	volatile int16_t x459 = INT16_MIN;
	uint32_t x460 = 54U;
	int32_t t105 = 147;

    t105 = (x457!=((x458^x459)-x460));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x461 = -7;
	int8_t x462 = -1;
	static int16_t x463 = INT16_MIN;
	uint32_t x464 = 0U;
	int32_t t106 = 13;

    t106 = (x461!=((x462^x463)-x464));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x466 = 24462898;
	static int16_t x468 = -3157;
	static int32_t t107 = 6;

    t107 = (x465!=((x466^x467)-x468));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x473 = 27LL;
	int8_t x474 = 0;
	int8_t x475 = -1;
	int16_t x476 = INT16_MIN;
	int32_t t108 = 989310;

    t108 = (x473!=((x474^x475)-x476));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x477 = INT8_MAX;
	int16_t x478 = 27;
	uint64_t x479 = UINT64_MAX;

    t109 = (x477!=((x478^x479)-x480));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x487 = -1LL;
	volatile int32_t t110 = 15;

    t110 = (x485!=((x486^x487)-x488));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x493 = 3LLU;
	volatile uint64_t x495 = UINT64_MAX;
	int32_t t111 = 460;

    t111 = (x493!=((x494^x495)-x496));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x497 = 4LLU;
	int16_t x499 = INT16_MIN;
	int32_t t112 = -661866907;

    t112 = (x497!=((x498^x499)-x500));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x501 = UINT16_MAX;
	int16_t x502 = -1;
	static int16_t x503 = -1;
	static uint8_t x504 = UINT8_MAX;
	volatile int32_t t113 = -1410;

    t113 = (x501!=((x502^x503)-x504));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x505 = INT64_MIN;
	uint64_t x506 = 419605542501789055LLU;
	static volatile uint16_t x507 = 48U;
	int16_t x508 = -27;
	int32_t t114 = -57;

    t114 = (x505!=((x506^x507)-x508));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x509 = INT64_MIN;
	static volatile int32_t x510 = 89765;
	uint8_t x511 = 6U;
	int32_t t115 = 64145172;

    t115 = (x509!=((x510^x511)-x512));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x513 = INT64_MIN;
	int16_t x514 = INT16_MIN;
	static int32_t t116 = 15782;

    t116 = (x513!=((x514^x515)-x516));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x517 = INT8_MIN;
	int8_t x518 = -1;
	uint16_t x520 = 184U;
	static volatile int32_t t117 = 103;

    t117 = (x517!=((x518^x519)-x520));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint64_t x522 = UINT64_MAX;
	volatile int32_t x523 = INT32_MIN;
	static int8_t x524 = INT8_MAX;
	static int32_t t118 = -14905;

    t118 = (x521!=((x522^x523)-x524));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x526 = -1;
	static int64_t x527 = 10542161LL;
	volatile int8_t x528 = INT8_MIN;
	static volatile int32_t t119 = -1001205;

    t119 = (x525!=((x526^x527)-x528));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x533 = -10;
	static uint64_t x534 = 429026293784411LLU;
	uint8_t x535 = 0U;
	volatile int32_t t120 = 63;

    t120 = (x533!=((x534^x535)-x536));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x537 = 1891;
	int32_t x539 = INT32_MIN;
	volatile uint32_t x540 = 63353U;
	int32_t t121 = -211118;

    t121 = (x537!=((x538^x539)-x540));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x541 = 460250LL;
	uint8_t x543 = 6U;
	uint32_t x544 = 26635738U;
	volatile int32_t t122 = -82349;

    t122 = (x541!=((x542^x543)-x544));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x546 = INT32_MIN;
	static uint8_t x548 = 0U;
	int32_t t123 = 101;

    t123 = (x545!=((x546^x547)-x548));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    

    t124 = (x549!=((x550^x551)-x552));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x553 = 350;
	static int64_t x554 = -1LL;
	int8_t x555 = -18;
	static uint64_t x556 = 20599LLU;

    t125 = (x553!=((x554^x555)-x556));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x557 = INT64_MAX;
	volatile int32_t x558 = INT32_MAX;
	int16_t x559 = -1;
	volatile int16_t x560 = -1;

    t126 = (x557!=((x558^x559)-x560));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x561 = UINT64_MAX;
	int64_t x563 = 2LL;
	static uint32_t x564 = 6599787U;

    t127 = (x561!=((x562^x563)-x564));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x573 = -22;
	uint32_t x574 = 448U;
	uint8_t x576 = 81U;
	volatile int32_t t128 = 0;

    t128 = (x573!=((x574^x575)-x576));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x577 = 2;
	static int32_t x578 = INT32_MAX;
	uint64_t x579 = 67283768LLU;
	int8_t x580 = INT8_MIN;
	volatile int32_t t129 = -1798;

    t129 = (x577!=((x578^x579)-x580));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x581 = UINT16_MAX;
	static int16_t x582 = INT16_MAX;
	volatile int16_t x584 = INT16_MIN;
	volatile int32_t t130 = -110;

    t130 = (x581!=((x582^x583)-x584));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x585 = UINT16_MAX;
	volatile uint16_t x586 = 47U;
	int32_t x588 = -870253;
	int32_t t131 = 2491876;

    t131 = (x585!=((x586^x587)-x588));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x589 = UINT64_MAX;
	volatile uint16_t x590 = 610U;
	int16_t x591 = INT16_MIN;
	static int64_t x592 = INT64_MIN;
	volatile int32_t t132 = -4587;

    t132 = (x589!=((x590^x591)-x592));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x593 = -1;
	static volatile int8_t x594 = INT8_MIN;
	int64_t x595 = INT64_MIN;
	int64_t x596 = -1LL;
	int32_t t133 = 455104;

    t133 = (x593!=((x594^x595)-x596));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x597 = INT64_MIN;
	int32_t x598 = -1;
	int64_t x599 = INT64_MAX;
	int32_t t134 = 1463619;

    t134 = (x597!=((x598^x599)-x600));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x601 = UINT8_MAX;
	static int16_t x602 = INT16_MIN;
	int8_t x603 = INT8_MIN;
	uint32_t x604 = UINT32_MAX;
	int32_t t135 = 29;

    t135 = (x601!=((x602^x603)-x604));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x605 = 11U;
	int16_t x608 = -1;
	volatile int32_t t136 = 22977;

    t136 = (x605!=((x606^x607)-x608));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x609 = INT32_MIN;
	static uint16_t x610 = 9509U;
	int8_t x611 = INT8_MIN;
	volatile int32_t t137 = 19;

    t137 = (x609!=((x610^x611)-x612));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x613 = UINT64_MAX;
	uint32_t x614 = 12993U;
	uint8_t x616 = 2U;
	volatile int32_t t138 = 8;

    t138 = (x613!=((x614^x615)-x616));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint64_t x617 = 14621134173LLU;
	static int64_t x618 = -1LL;
	uint16_t x619 = UINT16_MAX;
	volatile int32_t t139 = -144943050;

    t139 = (x617!=((x618^x619)-x620));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x621 = -399153819;
	int16_t x622 = -12;
	int16_t x623 = INT16_MIN;
	static int8_t x624 = 2;
	volatile int32_t t140 = 1272215;

    t140 = (x621!=((x622^x623)-x624));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x625 = -1;
	static int32_t x626 = INT32_MIN;
	int32_t t141 = 8;

    t141 = (x625!=((x626^x627)-x628));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x629 = 10225390520078458LLU;
	static uint32_t x630 = 248U;
	volatile uint32_t x631 = 62U;
	static int16_t x632 = INT16_MIN;
	volatile int32_t t142 = 221795729;

    t142 = (x629!=((x630^x631)-x632));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x633 = 1926U;
	static uint16_t x634 = UINT16_MAX;
	uint32_t x635 = 1304U;
	uint8_t x636 = 15U;
	static volatile int32_t t143 = 1;

    t143 = (x633!=((x634^x635)-x636));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x638 = 4U;
	volatile int32_t t144 = 721476;

    t144 = (x637!=((x638^x639)-x640));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x641 = INT32_MIN;
	static int64_t x642 = -1LL;
	static uint8_t x643 = 1U;
	volatile uint32_t x644 = UINT32_MAX;
	int32_t t145 = 2023;

    t145 = (x641!=((x642^x643)-x644));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x645 = 49U;
	uint32_t x646 = UINT32_MAX;
	static int8_t x648 = -1;
	int32_t t146 = 288531628;

    t146 = (x645!=((x646^x647)-x648));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x650 = UINT16_MAX;
	int32_t t147 = -865675258;

    t147 = (x649!=((x650^x651)-x652));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x653 = -1;
	int32_t x654 = INT32_MAX;
	static int64_t x655 = -24358128883758LL;
	volatile int32_t x656 = INT32_MIN;
	int32_t t148 = 11;

    t148 = (x653!=((x654^x655)-x656));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x657 = -1LL;
	uint64_t x658 = 2398051757700271813LLU;
	volatile int32_t t149 = 18477811;

    t149 = (x657!=((x658^x659)-x660));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x661 = 1U;
	int64_t x662 = INT64_MAX;
	int8_t x663 = -1;
	static int64_t x664 = INT64_MIN;
	volatile int32_t t150 = -408215;

    t150 = (x661!=((x662^x663)-x664));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x665 = INT32_MIN;
	static uint32_t x666 = 100781U;
	static int64_t x667 = 6LL;
	uint64_t x668 = 959230787LLU;
	volatile int32_t t151 = 890484888;

    t151 = (x665!=((x666^x667)-x668));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x669 = INT64_MAX;
	int64_t x670 = -912347939394LL;
	int32_t t152 = -62747;

    t152 = (x669!=((x670^x671)-x672));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x673 = -5016791461703LL;
	volatile uint8_t x674 = 6U;
	int32_t x675 = INT32_MAX;
	uint8_t x676 = UINT8_MAX;
	int32_t t153 = 17;

    t153 = (x673!=((x674^x675)-x676));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x677 = INT32_MAX;
	int8_t x678 = INT8_MIN;
	uint8_t x679 = 10U;
	int64_t x680 = INT64_MIN;
	int32_t t154 = 333;

    t154 = (x677!=((x678^x679)-x680));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x681 = 128743U;
	int16_t x683 = INT16_MIN;
	uint64_t x684 = 16604307LLU;
	int32_t t155 = 18;

    t155 = (x681!=((x682^x683)-x684));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x685 = INT16_MAX;
	static uint8_t x686 = UINT8_MAX;
	int16_t x687 = -1;
	uint8_t x688 = 0U;
	volatile int32_t t156 = -679529;

    t156 = (x685!=((x686^x687)-x688));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x689 = -119076;
	uint64_t x690 = UINT64_MAX;
	uint32_t x691 = 378707U;
	uint8_t x692 = 0U;
	int32_t t157 = -20999390;

    t157 = (x689!=((x690^x691)-x692));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x694 = 89539608U;
	volatile int64_t x695 = 74085148597010LL;
	int8_t x696 = INT8_MIN;

    t158 = (x693!=((x694^x695)-x696));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int8_t x697 = 1;
	volatile uint16_t x698 = 1826U;
	int64_t x699 = 234LL;
	uint8_t x700 = 6U;
	int32_t t159 = 1;

    t159 = (x697!=((x698^x699)-x700));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x705 = 880255040LLU;
	static int8_t x706 = 22;
	volatile int8_t x707 = -4;
	uint64_t x708 = 11LLU;
	int32_t t160 = 1;

    t160 = (x705!=((x706^x707)-x708));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x709 = 1U;
	volatile int8_t x710 = INT8_MIN;
	int16_t x711 = INT16_MIN;
	int8_t x712 = INT8_MIN;

    t161 = (x709!=((x710^x711)-x712));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x713 = 88;
	static int32_t x714 = INT32_MAX;
	static int32_t x715 = 351764521;
	static int32_t x716 = -1;
	volatile int32_t t162 = 79600091;

    t162 = (x713!=((x714^x715)-x716));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x718 = 26;
	int8_t x719 = -1;
	int32_t x720 = INT32_MIN;
	volatile int32_t t163 = 68818;

    t163 = (x717!=((x718^x719)-x720));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x721 = UINT64_MAX;
	int8_t x722 = -1;
	static int32_t x723 = -126;
	int32_t t164 = 981;

    t164 = (x721!=((x722^x723)-x724));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x725 = UINT64_MAX;
	volatile uint64_t x727 = 1509735LLU;
	uint64_t x728 = UINT64_MAX;
	volatile int32_t t165 = -801;

    t165 = (x725!=((x726^x727)-x728));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x729 = UINT64_MAX;
	uint64_t x730 = 2863081LLU;
	int32_t x731 = 16303;
	uint8_t x732 = UINT8_MAX;
	volatile int32_t t166 = 4367;

    t166 = (x729!=((x730^x731)-x732));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x733 = 240634U;
	uint32_t x735 = 119679100U;
	int32_t t167 = -3519;

    t167 = (x733!=((x734^x735)-x736));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x737 = -977951934LL;
	int64_t x738 = INT64_MAX;
	volatile int16_t x740 = -1;
	volatile int32_t t168 = -115;

    t168 = (x737!=((x738^x739)-x740));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x741 = INT16_MAX;
	uint16_t x742 = 0U;
	int16_t x744 = -1;
	volatile int32_t t169 = -14;

    t169 = (x741!=((x742^x743)-x744));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x745 = 1;
	int32_t x747 = -1;
	int8_t x748 = 0;
	volatile int32_t t170 = 0;

    t170 = (x745!=((x746^x747)-x748));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x749 = INT32_MIN;
	volatile uint16_t x750 = 36U;
	volatile int32_t x751 = INT32_MIN;

    t171 = (x749!=((x750^x751)-x752));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x753 = 36552951U;
	uint64_t x754 = 12LLU;
	static int32_t t172 = 34086;

    t172 = (x753!=((x754^x755)-x756));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x757 = INT16_MAX;
	int8_t x758 = -1;
	int16_t x759 = INT16_MAX;
	static uint8_t x760 = UINT8_MAX;
	int32_t t173 = 1024284787;

    t173 = (x757!=((x758^x759)-x760));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x761 = 7116284;
	static int16_t x763 = -1;
	int32_t t174 = -10781;

    t174 = (x761!=((x762^x763)-x764));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x765 = 106181556954LL;
	static uint32_t x766 = UINT32_MAX;
	uint16_t x767 = UINT16_MAX;
	int16_t x768 = INT16_MIN;
	volatile int32_t t175 = -4255;

    t175 = (x765!=((x766^x767)-x768));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x769 = INT8_MIN;
	volatile uint16_t x770 = 4U;
	int16_t x771 = INT16_MIN;
	int64_t x772 = 294613LL;

    t176 = (x769!=((x770^x771)-x772));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x773 = UINT16_MAX;
	static int8_t x774 = INT8_MAX;
	static int16_t x775 = 456;
	int16_t x776 = 731;
	int32_t t177 = -329720;

    t177 = (x773!=((x774^x775)-x776));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x778 = -15870333;
	static volatile uint16_t x780 = UINT16_MAX;
	volatile int32_t t178 = -103803;

    t178 = (x777!=((x778^x779)-x780));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x781 = 1;
	volatile uint64_t x783 = 261519014LLU;
	int32_t x784 = -17;
	volatile int32_t t179 = 120834;

    t179 = (x781!=((x782^x783)-x784));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x785 = -1;
	int16_t x787 = INT16_MIN;
	uint8_t x788 = 27U;
	volatile int32_t t180 = 875490;

    t180 = (x785!=((x786^x787)-x788));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x789 = 18;
	int8_t x790 = INT8_MIN;
	static volatile int8_t x791 = INT8_MAX;
	volatile int16_t x792 = 2442;
	volatile int32_t t181 = 569353610;

    t181 = (x789!=((x790^x791)-x792));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x799 = INT16_MIN;
	int64_t x800 = 1594LL;
	int32_t t182 = 626615849;

    t182 = (x797!=((x798^x799)-x800));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x802 = INT64_MIN;
	int64_t x803 = INT64_MIN;
	static int32_t x804 = -608;
	volatile int32_t t183 = 86191953;

    t183 = (x801!=((x802^x803)-x804));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x805 = UINT8_MAX;
	uint64_t x806 = 2612LLU;
	uint64_t x807 = 110434433808792214LLU;
	volatile int16_t x808 = -1;
	int32_t t184 = -601;

    t184 = (x805!=((x806^x807)-x808));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x810 = INT8_MAX;
	uint64_t x811 = 23765400677LLU;
	int8_t x812 = -1;

    t185 = (x809!=((x810^x811)-x812));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x817 = 1577LL;
	int64_t x818 = INT64_MIN;
	static uint32_t x819 = 4379807U;
	int8_t x820 = 4;

    t186 = (x817!=((x818^x819)-x820));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x821 = 472872036252401LL;
	static int32_t x822 = 1325738;
	static int16_t x823 = -5;
	volatile int32_t t187 = -1;

    t187 = (x821!=((x822^x823)-x824));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x825 = INT32_MIN;
	uint16_t x826 = UINT16_MAX;
	volatile int8_t x827 = INT8_MIN;
	static int32_t x828 = INT32_MIN;
	volatile int32_t t188 = -19518115;

    t188 = (x825!=((x826^x827)-x828));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x829 = -19;
	int16_t x830 = INT16_MIN;
	int8_t x831 = -1;
	int16_t x832 = -1;

    t189 = (x829!=((x830^x831)-x832));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x833 = 489U;
	int8_t x834 = 2;
	int64_t x835 = INT64_MIN;
	int64_t x836 = -419399591536865LL;
	static volatile int32_t t190 = -15077;

    t190 = (x833!=((x834^x835)-x836));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x838 = 1004U;
	int16_t x839 = INT16_MIN;
	uint64_t x840 = 74LLU;
	volatile int32_t t191 = 41;

    t191 = (x837!=((x838^x839)-x840));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x841 = 80617772;
	uint32_t x843 = 309U;
	uint16_t x844 = 111U;
	volatile int32_t t192 = -1325;

    t192 = (x841!=((x842^x843)-x844));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x845 = -741;
	volatile int64_t x846 = -10133962LL;
	uint8_t x847 = 3U;
	uint32_t x848 = UINT32_MAX;

    t193 = (x845!=((x846^x847)-x848));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x849 = INT8_MIN;
	static volatile int16_t x850 = 9;
	volatile uint8_t x851 = 1U;
	static int16_t x852 = 6888;

    t194 = (x849!=((x850^x851)-x852));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x853 = INT16_MIN;
	int64_t x854 = -1LL;
	uint16_t x855 = 3U;
	uint8_t x856 = 37U;

    t195 = (x853!=((x854^x855)-x856));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x857 = UINT16_MAX;
	uint16_t x858 = UINT16_MAX;
	uint32_t x859 = 6835539U;
	volatile int8_t x860 = -2;

    t196 = (x857!=((x858^x859)-x860));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x862 = INT16_MAX;
	uint32_t x863 = 4685537U;
	uint8_t x864 = 10U;
	static int32_t t197 = 1408;

    t197 = (x861!=((x862^x863)-x864));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x865 = INT32_MIN;
	int64_t x866 = INT64_MAX;
	volatile int32_t t198 = -42;

    t198 = (x865!=((x866^x867)-x868));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x869 = 925768167U;
	volatile int64_t x870 = INT64_MIN;
	int16_t x871 = -1;
	int32_t t199 = 22536165;

    t199 = (x869!=((x870^x871)-x872));

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

