
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

static int16_t x2 = INT16_MAX;
volatile int8_t x5 = 3;
static int32_t x7 = INT32_MIN;
static int32_t x9 = INT32_MAX;
int64_t x12 = -1LL;
uint16_t x18 = UINT16_MAX;
int64_t x20 = 42LL;
int32_t t6 = -7;
int32_t t7 = -2;
int16_t x36 = -4;
int32_t t8 = 8142;
uint32_t x39 = 4U;
int16_t x46 = INT16_MAX;
uint16_t x47 = 1U;
int16_t x49 = INT16_MIN;
int32_t x53 = INT32_MIN;
uint8_t x55 = 31U;
static volatile int32_t t13 = -28261650;
int16_t x60 = -1;
volatile int64_t t14 = -19785019659LL;
int64_t x62 = 42LL;
static int64_t x63 = -1LL;
volatile uint32_t t16 = 53145U;
static int16_t x69 = -1;
uint8_t x70 = 15U;
static volatile int32_t x78 = -139;
int64_t t19 = 9926952117276LL;
int16_t x86 = 15;
volatile int8_t x91 = INT8_MIN;
int32_t x94 = -1;
int64_t x95 = -1LL;
volatile int32_t t24 = -1;
static uint64_t x104 = 2342648922869535824LLU;
volatile int64_t x106 = -501674265058945801LL;
int8_t x113 = -1;
uint8_t x119 = UINT8_MAX;
volatile uint32_t t29 = 30285240U;
volatile int8_t x123 = -1;
int16_t x135 = -1;
int8_t x137 = -1;
int64_t x139 = INT64_MAX;
int16_t x143 = 622;
volatile uint64_t x144 = 11096609150997005LLU;
uint8_t x145 = UINT8_MAX;
volatile int16_t x146 = 1;
static volatile int8_t x151 = INT8_MAX;
volatile int64_t t37 = -44599989701872LL;
int64_t x158 = INT64_MIN;
volatile int8_t x164 = INT8_MIN;
volatile int64_t x182 = INT64_MIN;
int16_t x190 = INT16_MIN;
static volatile int32_t t47 = 98;
int16_t x196 = INT16_MIN;
uint64_t x197 = UINT64_MAX;
volatile uint8_t x204 = 12U;
int64_t x208 = INT64_MIN;
volatile int32_t t51 = -9;
volatile int64_t t52 = 144872996854171LL;
static volatile int8_t x218 = INT8_MIN;
int16_t x219 = -1;
int64_t x232 = INT64_MIN;
int16_t x237 = INT16_MIN;
int16_t x240 = INT16_MAX;
volatile int32_t t59 = 1407079;
uint64_t t60 = 224LLU;
int32_t x249 = INT32_MIN;
uint8_t x272 = UINT8_MAX;
int64_t x275 = -220038738754173LL;
int32_t t70 = 2;
int8_t x287 = -1;
int64_t x289 = INT64_MIN;
int64_t x294 = 1146780LL;
int32_t t73 = -708;
uint64_t x300 = UINT64_MAX;
int8_t x306 = INT8_MIN;
static int32_t x308 = INT32_MAX;
int8_t x310 = -63;
int8_t x320 = -44;
int64_t x332 = INT64_MIN;
int8_t x335 = -1;
volatile uint64_t x339 = UINT64_MAX;
static int16_t x340 = 36;
volatile uint16_t x355 = 6311U;
uint64_t x356 = 120855649611762718LLU;
static int32_t t88 = -2369847;
int8_t x358 = -40;
int32_t x367 = INT32_MIN;
volatile int32_t x369 = -18;
int8_t x372 = 50;
static int8_t x376 = -1;
int32_t t93 = -841457;
uint32_t x377 = UINT32_MAX;
uint32_t t96 = 10U;
static int32_t t97 = 8;
uint16_t x394 = 3620U;
uint16_t x399 = 2047U;
int8_t x401 = INT8_MAX;
static uint64_t x408 = UINT64_MAX;
volatile uint32_t x410 = 283431055U;
volatile uint16_t x412 = 15985U;
int64_t x417 = INT64_MAX;
int64_t t104 = 6139LL;
uint64_t x424 = 356224LLU;
static int32_t x426 = INT32_MIN;
static int32_t x428 = INT32_MAX;
static int8_t x429 = -51;
uint16_t x433 = 751U;
volatile int64_t t109 = -24349LL;
volatile int32_t x442 = 28825039;
int32_t x445 = 25662972;
int16_t x446 = INT16_MIN;
uint8_t x450 = UINT8_MAX;
int16_t x452 = INT16_MIN;
int32_t t112 = 407582;
int64_t x454 = INT64_MIN;
volatile int32_t x456 = 507515;
int64_t x458 = -1LL;
static uint16_t x472 = 1U;
int32_t t117 = -29238561;
uint32_t x473 = 75U;
static volatile int32_t t121 = 30;
int16_t x503 = INT16_MIN;
static volatile int8_t x504 = INT8_MIN;
int16_t x505 = INT16_MIN;
int64_t x507 = INT64_MIN;
uint8_t x508 = UINT8_MAX;
volatile int32_t t127 = 349707004;
static int32_t x516 = INT32_MAX;
int16_t x524 = 124;
volatile int32_t t130 = 767;
uint16_t x525 = 78U;
int64_t x537 = -1LL;
int64_t x540 = INT64_MIN;
static int32_t x544 = INT32_MAX;
static volatile uint64_t x546 = 63966LLU;
uint32_t x555 = 1825179927U;
int16_t x560 = 1978;
uint64_t x564 = 719513930573186LLU;
volatile uint16_t x574 = 199U;
volatile int8_t x576 = -1;
int32_t x577 = -1;
int64_t x580 = INT64_MAX;
static int16_t x584 = INT16_MIN;
static volatile int16_t x589 = INT16_MAX;
uint32_t x591 = 12309U;
uint16_t x593 = UINT16_MAX;
uint8_t x594 = UINT8_MAX;
static volatile int32_t t150 = -16170;
volatile uint64_t t151 = 96063830295349LLU;
static volatile int32_t x612 = -1;
static int64_t t152 = -546241451504LL;
int32_t x619 = INT32_MIN;
uint32_t x623 = 47U;
int64_t x629 = INT64_MAX;
int8_t x630 = INT8_MIN;
volatile uint16_t x632 = 196U;
volatile int64_t t157 = 0LL;
volatile uint64_t x633 = 40002418448812706LLU;
volatile uint64_t t158 = 51199077239LLU;
uint64_t x637 = 17167LLU;
int32_t x643 = INT32_MIN;
static int32_t t160 = -121;
static volatile int16_t x647 = -1;
int16_t x649 = INT16_MIN;
volatile int32_t x654 = -1;
int8_t x656 = INT8_MAX;
static int64_t x659 = INT64_MIN;
uint32_t t168 = 483844846U;
volatile uint64_t x680 = 815041LLU;
int32_t x682 = INT32_MIN;
int32_t x691 = INT32_MIN;
int16_t x697 = 5779;
int16_t x707 = -185;
static uint16_t x713 = 137U;
uint8_t x714 = UINT8_MAX;
volatile int8_t x715 = INT8_MAX;
uint32_t t179 = 63U;
uint32_t x725 = 194681369U;
volatile int32_t t182 = -186;
int16_t x735 = -1;
uint16_t x740 = 246U;
uint8_t x744 = UINT8_MAX;
volatile int32_t t186 = -653841136;
volatile int64_t x750 = INT64_MIN;
uint16_t x755 = 6U;
int16_t x760 = -5;
int8_t x763 = 13;
static int32_t x764 = 13272;
int8_t x766 = -1;
static volatile int32_t t192 = -19585482;
static uint8_t x774 = 5U;
uint32_t x775 = 1U;
uint32_t x781 = 13U;
volatile int16_t x782 = INT16_MIN;
static int32_t x785 = INT32_MIN;
volatile uint64_t x789 = 489LLU;
int8_t x795 = -1;


void f0(void) {
    	uint32_t x1 = 2U;
	static int64_t x3 = -1LL;
	static uint8_t x4 = 7U;
	static uint32_t t0 = 30298840U;

    t0 = (x1&((x2^x3)==x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x6 = UINT64_MAX;
	static int64_t x8 = INT64_MIN;
	static int32_t t1 = -25;

    t1 = (x5&((x6^x7)==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x10 = INT64_MAX;
	uint8_t x11 = 10U;
	volatile int32_t t2 = -302;

    t2 = (x9&((x10^x11)==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 1262148359923LLU;
	int32_t x14 = INT32_MIN;
	volatile int16_t x15 = INT16_MIN;
	volatile int8_t x16 = INT8_MIN;
	volatile uint64_t t3 = 15887239LLU;

    t3 = (x13&((x14^x15)==x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = -1;
	volatile int8_t x19 = INT8_MIN;
	volatile int32_t t4 = -2685;

    t4 = (x17&((x18^x19)==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -777;
	static uint64_t x22 = 3180019LLU;
	static int8_t x23 = -1;
	int64_t x24 = -1LL;
	static volatile int32_t t5 = 28424;

    t5 = (x21&((x22^x23)==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MIN;
	volatile uint64_t x26 = 9901653LLU;
	volatile int8_t x27 = INT8_MAX;
	volatile uint8_t x28 = UINT8_MAX;

    t6 = (x25&((x26^x27)==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	uint16_t x30 = UINT16_MAX;
	volatile uint64_t x31 = 1531110400713496LLU;
	volatile uint64_t x32 = 40020080LLU;

    t7 = (x29&((x30^x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	volatile uint8_t x34 = 13U;
	static uint32_t x35 = 2079703U;

    t8 = (x33&((x34^x35)==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x37 = INT16_MIN;
	uint64_t x38 = UINT64_MAX;
	static int8_t x40 = -12;
	volatile int32_t t9 = -6769;

    t9 = (x37&((x38^x39)==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = INT32_MAX;
	int8_t x42 = INT8_MAX;
	int16_t x43 = INT16_MIN;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t10 = 958528;

    t10 = (x41&((x42^x43)==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	int16_t x48 = -2;
	int32_t t11 = -412264144;

    t11 = (x45&((x46^x47)==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x50 = 5U;
	uint8_t x51 = 2U;
	volatile int16_t x52 = -1;
	int32_t t12 = -1347;

    t12 = (x49&((x50^x51)==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x54 = INT16_MIN;
	int16_t x56 = INT16_MAX;

    t13 = (x53&((x54^x55)==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = 1324338085672863LL;
	static uint16_t x58 = UINT16_MAX;
	int64_t x59 = INT64_MIN;

    t14 = (x57&((x58^x59)==x60));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x61 = 36U;
	int64_t x64 = 159328327172117513LL;
	int32_t t15 = 897381;

    t15 = (x61&((x62^x63)==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = UINT32_MAX;
	int16_t x66 = -1;
	uint8_t x67 = 28U;
	uint8_t x68 = 8U;

    t16 = (x65&((x66^x67)==x68));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x71 = 1;
	int16_t x72 = INT16_MIN;
	int32_t t17 = 64356;

    t17 = (x69&((x70^x71)==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = INT8_MIN;
	int8_t x74 = 22;
	int64_t x75 = -1LL;
	static int32_t x76 = INT32_MAX;
	volatile int32_t t18 = -281;

    t18 = (x73&((x74^x75)==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	int64_t x79 = INT64_MIN;
	int8_t x80 = INT8_MIN;

    t19 = (x77&((x78^x79)==x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	uint64_t x82 = 4744530557557123LLU;
	int16_t x83 = 0;
	static int32_t x84 = INT32_MIN;
	int32_t t20 = 0;

    t20 = (x81&((x82^x83)==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 839803580U;
	int16_t x87 = INT16_MAX;
	int16_t x88 = 1;
	uint32_t t21 = 11970495U;

    t21 = (x85&((x86^x87)==x88));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = INT16_MIN;
	volatile int32_t x90 = INT32_MIN;
	uint16_t x92 = UINT16_MAX;
	int32_t t22 = -7244;

    t22 = (x89&((x90^x91)==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = -1;
	volatile uint16_t x96 = 474U;
	volatile int32_t t23 = 27008;

    t23 = (x93&((x94^x95)==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	int16_t x98 = INT16_MIN;
	volatile uint64_t x99 = 26415LLU;
	int32_t x100 = 54152;

    t24 = (x97&((x98^x99)==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = -19614;
	int32_t x102 = INT32_MIN;
	int8_t x103 = INT8_MIN;
	int32_t t25 = -10843918;

    t25 = (x101&((x102^x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = INT8_MIN;
	static volatile uint32_t x107 = UINT32_MAX;
	int16_t x108 = -1;
	static volatile int32_t t26 = -59159;

    t26 = (x105&((x106^x107)==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -1449;
	int8_t x110 = -4;
	volatile uint8_t x111 = UINT8_MAX;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = -583;

    t27 = (x109&((x110^x111)==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x114 = INT16_MIN;
	volatile uint32_t x115 = 29U;
	int32_t x116 = -1;
	volatile int32_t t28 = 305149;

    t28 = (x113&((x114^x115)==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 372U;
	int16_t x118 = INT16_MAX;
	uint16_t x120 = 15U;

    t29 = (x117&((x118^x119)==x120));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	int32_t x122 = INT32_MIN;
	volatile uint16_t x124 = 636U;
	uint32_t t30 = 15154U;

    t30 = (x121&((x122^x123)==x124));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	int8_t x126 = INT8_MIN;
	static int16_t x127 = INT16_MIN;
	uint16_t x128 = 1398U;
	volatile int32_t t31 = 3277924;

    t31 = (x125&((x126^x127)==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	uint64_t x130 = 479581500323LLU;
	int16_t x131 = 0;
	static uint8_t x132 = 2U;
	volatile int64_t t32 = -7291250LL;

    t32 = (x129&((x130^x131)==x132));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -1;
	volatile uint32_t x134 = 305U;
	uint64_t x136 = UINT64_MAX;
	volatile int32_t t33 = 0;

    t33 = (x133&((x134^x135)==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x138 = 27608U;
	static int8_t x140 = INT8_MIN;
	static int32_t t34 = 9;

    t34 = (x137&((x138^x139)==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 1;
	int8_t x142 = INT8_MIN;
	int32_t t35 = -1291269;

    t35 = (x141&((x142^x143)==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x147 = UINT16_MAX;
	int32_t x148 = INT32_MIN;
	int32_t t36 = -17751964;

    t36 = (x145&((x146^x147)==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = INT64_MIN;
	uint64_t x150 = 57658792245818277LLU;
	uint32_t x152 = UINT32_MAX;

    t37 = (x149&((x150^x151)==x152));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	volatile int64_t x154 = -1LL;
	volatile uint64_t x155 = 26736892169416LLU;
	int64_t x156 = INT64_MAX;
	static int32_t t38 = -107;

    t38 = (x153&((x154^x155)==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = -1;
	volatile int8_t x159 = INT8_MIN;
	static volatile int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -32593;

    t39 = (x157&((x158^x159)==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x161 = 114880237680232234LLU;
	int64_t x162 = INT64_MIN;
	uint64_t x163 = 7616174042368LLU;
	volatile uint64_t t40 = 111454644635845934LLU;

    t40 = (x161&((x162^x163)==x164));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -1;
	volatile uint16_t x166 = UINT16_MAX;
	uint16_t x167 = UINT16_MAX;
	int32_t x168 = -1;
	volatile int32_t t41 = 32;

    t41 = (x165&((x166^x167)==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 838377U;
	int32_t x170 = INT32_MAX;
	volatile int32_t x171 = -1;
	uint16_t x172 = UINT16_MAX;
	volatile uint32_t t42 = 1U;

    t42 = (x169&((x170^x171)==x172));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = INT16_MIN;
	static int16_t x174 = -1;
	uint32_t x175 = UINT32_MAX;
	uint64_t x176 = 26LLU;
	volatile int32_t t43 = -105531264;

    t43 = (x173&((x174^x175)==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x177 = UINT16_MAX;
	int64_t x178 = -32040457147557LL;
	int8_t x179 = -1;
	static int16_t x180 = INT16_MIN;
	static int32_t t44 = -30529719;

    t44 = (x177&((x178^x179)==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MIN;
	int32_t x183 = INT32_MAX;
	int32_t x184 = -1;
	static volatile int32_t t45 = -32399;

    t45 = (x181&((x182^x183)==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 590U;
	uint16_t x186 = 271U;
	int64_t x187 = INT64_MIN;
	volatile int8_t x188 = -1;
	volatile uint32_t t46 = 3866380U;

    t46 = (x185&((x186^x187)==x188));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x189 = 4;
	static uint32_t x191 = UINT32_MAX;
	uint32_t x192 = 13060U;

    t47 = (x189&((x190^x191)==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -1;
	uint8_t x194 = 13U;
	volatile int32_t x195 = INT32_MAX;
	int32_t t48 = 29;

    t48 = (x193&((x194^x195)==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x198 = 35661236LLU;
	static int32_t x199 = 381;
	int32_t x200 = INT32_MAX;
	static volatile uint64_t t49 = 3LLU;

    t49 = (x197&((x198^x199)==x200));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = 18232474081641178LL;
	static uint32_t x202 = UINT32_MAX;
	int64_t x203 = INT64_MIN;
	int64_t t50 = -95827330190LL;

    t50 = (x201&((x202^x203)==x204));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = -1;
	uint16_t x206 = 0U;
	int8_t x207 = -1;

    t51 = (x205&((x206^x207)==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	int8_t x210 = INT8_MIN;
	static int16_t x211 = -1;
	int32_t x212 = 71055;

    t52 = (x209&((x210^x211)==x212));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MIN;
	static int8_t x215 = INT8_MIN;
	uint16_t x216 = 1358U;
	int32_t t53 = 5636;

    t53 = (x213&((x214^x215)==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 142366886829188897LLU;
	volatile uint8_t x220 = UINT8_MAX;
	volatile uint64_t t54 = 484344347LLU;

    t54 = (x217&((x218^x219)==x220));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x221 = INT8_MAX;
	int16_t x222 = 1;
	int8_t x223 = INT8_MIN;
	int32_t x224 = -406994;
	int32_t t55 = -2643;

    t55 = (x221&((x222^x223)==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = INT8_MAX;
	static int32_t x226 = 6331;
	int64_t x227 = INT64_MIN;
	uint8_t x228 = 4U;
	volatile int32_t t56 = -2127;

    t56 = (x225&((x226^x227)==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	uint64_t x230 = 80LLU;
	static int64_t x231 = INT64_MAX;
	volatile int32_t t57 = -5594871;

    t57 = (x229&((x230^x231)==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint64_t x233 = 9235416448379LLU;
	int64_t x234 = 26047LL;
	volatile int8_t x235 = INT8_MIN;
	volatile int8_t x236 = 8;
	static volatile uint64_t t58 = 1541LLU;

    t58 = (x233&((x234^x235)==x236));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x238 = -1;
	int8_t x239 = -2;

    t59 = (x237&((x238^x239)==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 2794605360603803LLU;
	static uint16_t x242 = 23U;
	uint8_t x243 = 76U;
	uint64_t x244 = 314619888756LLU;

    t60 = (x241&((x242^x243)==x244));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 6U;
	uint32_t x246 = 153010964U;
	int64_t x247 = -1LL;
	int32_t x248 = INT32_MIN;
	int32_t t61 = -30;

    t61 = (x245&((x246^x247)==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x250 = 0;
	uint8_t x251 = 2U;
	uint32_t x252 = 218394590U;
	int32_t t62 = 661639569;

    t62 = (x249&((x250^x251)==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 61U;
	volatile int8_t x254 = INT8_MAX;
	int32_t x255 = -76126527;
	volatile uint16_t x256 = 1U;
	static int32_t t63 = -10;

    t63 = (x253&((x254^x255)==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -1;
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = INT8_MAX;
	static volatile int32_t x260 = 102483573;
	static int32_t t64 = 8;

    t64 = (x257&((x258^x259)==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 123008;
	int32_t x262 = 5969994;
	static int32_t x263 = INT32_MAX;
	static int64_t x264 = -1LL;
	int32_t t65 = 1024487457;

    t65 = (x261&((x262^x263)==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 870U;
	volatile int8_t x266 = INT8_MIN;
	uint8_t x267 = 4U;
	static int64_t x268 = 333490097518713LL;
	volatile int32_t t66 = 157332108;

    t66 = (x265&((x266^x267)==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = INT8_MIN;
	uint32_t x270 = UINT32_MAX;
	uint64_t x271 = UINT64_MAX;
	static volatile int32_t t67 = -1049790358;

    t67 = (x269&((x270^x271)==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = 2034230538784473LLU;
	int16_t x274 = INT16_MIN;
	uint8_t x276 = 2U;
	static volatile uint64_t t68 = 101365852LLU;

    t68 = (x273&((x274^x275)==x276));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x277 = UINT64_MAX;
	volatile int8_t x278 = INT8_MIN;
	int8_t x279 = INT8_MIN;
	uint64_t x280 = 730731168599944LLU;
	volatile uint64_t t69 = 22657347LLU;

    t69 = (x277&((x278^x279)==x280));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = INT32_MIN;
	int8_t x282 = -1;
	static volatile int64_t x283 = 4962935LL;
	int8_t x284 = -1;

    t70 = (x281&((x282^x283)==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = UINT64_MAX;
	uint32_t x286 = UINT32_MAX;
	volatile uint8_t x288 = 18U;
	uint64_t t71 = 5371555712LLU;

    t71 = (x285&((x286^x287)==x288));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x290 = -1;
	uint32_t x291 = 42976017U;
	int16_t x292 = 1;
	volatile int64_t t72 = 3514368LL;

    t72 = (x289&((x290^x291)==x292));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	int16_t x295 = -1;
	uint16_t x296 = 13U;

    t73 = (x293&((x294^x295)==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	uint8_t x298 = 58U;
	static volatile int8_t x299 = INT8_MIN;
	int32_t t74 = 4434;

    t74 = (x297&((x298^x299)==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = INT64_MIN;
	int64_t x302 = -1LL;
	int16_t x303 = 2;
	uint8_t x304 = 1U;
	static int64_t t75 = -410819536LL;

    t75 = (x301&((x302^x303)==x304));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = 1;
	uint32_t x307 = 121U;
	int32_t t76 = -802;

    t76 = (x305&((x306^x307)==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -1;
	int64_t x311 = INT64_MIN;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -100;

    t77 = (x309&((x310^x311)==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = INT8_MIN;
	volatile int64_t x314 = -1LL;
	static int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MAX;
	volatile int32_t t78 = -11760;

    t78 = (x313&((x314^x315)==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x317 = -1LL;
	uint64_t x318 = 565998073LLU;
	uint16_t x319 = UINT16_MAX;
	static int64_t t79 = 72926LL;

    t79 = (x317&((x318^x319)==x320));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -1;
	uint16_t x322 = 5834U;
	volatile int64_t x323 = -19430823598195LL;
	int8_t x324 = 3;
	volatile int32_t t80 = 5;

    t80 = (x321&((x322^x323)==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -121329399;
	int16_t x326 = -1;
	int64_t x327 = 645LL;
	int16_t x328 = INT16_MAX;
	volatile int32_t t81 = 785757551;

    t81 = (x325&((x326^x327)==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x329 = UINT16_MAX;
	int16_t x330 = INT16_MIN;
	uint64_t x331 = 50202846LLU;
	int32_t t82 = 665;

    t82 = (x329&((x330^x331)==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x333 = INT64_MIN;
	int8_t x334 = 6;
	static int32_t x336 = 2674115;
	volatile int64_t t83 = -32095668121048LL;

    t83 = (x333&((x334^x335)==x336));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 1LLU;
	uint16_t x338 = 3786U;
	volatile uint64_t t84 = 732721529984LLU;

    t84 = (x337&((x338^x339)==x340));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 44U;
	volatile int64_t x342 = 7720926LL;
	volatile int32_t x343 = INT32_MIN;
	volatile int8_t x344 = 0;
	int32_t t85 = 196456;

    t85 = (x341&((x342^x343)==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x345 = 469354575205413167LLU;
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = 7430;
	volatile int16_t x348 = -3124;
	static uint64_t t86 = 97575892768882888LLU;

    t86 = (x345&((x346^x347)==x348));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x349 = UINT16_MAX;
	volatile uint8_t x350 = UINT8_MAX;
	int32_t x351 = -1;
	int64_t x352 = 897037410870891LL;
	int32_t t87 = 2808;

    t87 = (x349&((x350^x351)==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MAX;
	volatile int64_t x354 = INT64_MAX;

    t88 = (x353&((x354^x355)==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = 1U;
	int32_t x359 = -1;
	uint32_t x360 = 913345067U;
	volatile int32_t t89 = 1028043;

    t89 = (x357&((x358^x359)==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = -1;
	volatile int32_t x362 = INT32_MAX;
	int8_t x363 = INT8_MIN;
	int64_t x364 = -1LL;
	static int32_t t90 = 466;

    t90 = (x361&((x362^x363)==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = UINT16_MAX;
	volatile int16_t x366 = 486;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 97095;

    t91 = (x365&((x366^x367)==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint8_t x370 = 30U;
	int16_t x371 = INT16_MIN;
	int32_t t92 = -151;

    t92 = (x369&((x370^x371)==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = INT32_MIN;
	static volatile int16_t x374 = 186;
	int16_t x375 = -8;

    t93 = (x373&((x374^x375)==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x378 = UINT8_MAX;
	uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MIN;
	uint32_t t94 = 92U;

    t94 = (x377&((x378^x379)==x380));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x381 = INT64_MIN;
	int16_t x382 = 3524;
	int8_t x383 = -2;
	volatile uint16_t x384 = 2U;
	int64_t t95 = -2835957054861587LL;

    t95 = (x381&((x382^x383)==x384));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 18U;
	int64_t x386 = -1LL;
	int32_t x387 = INT32_MAX;
	volatile uint64_t x388 = 428717937609LLU;

    t96 = (x385&((x386^x387)==x388));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x389 = 3;
	int16_t x390 = INT16_MAX;
	int32_t x391 = INT32_MAX;
	volatile uint16_t x392 = UINT16_MAX;

    t97 = (x389&((x390^x391)==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x393 = INT64_MIN;
	volatile int8_t x395 = INT8_MIN;
	int32_t x396 = INT32_MIN;
	int64_t t98 = 25032201LL;

    t98 = (x393&((x394^x395)==x396));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = -651;
	volatile int32_t x398 = INT32_MAX;
	uint64_t x400 = 14827352347LLU;
	volatile int32_t t99 = 3;

    t99 = (x397&((x398^x399)==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x402 = -1;
	int8_t x403 = INT8_MIN;
	volatile int16_t x404 = -1;
	static int32_t t100 = 17;

    t100 = (x401&((x402^x403)==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x405 = -1LL;
	int16_t x406 = -1;
	int16_t x407 = INT16_MIN;
	int64_t t101 = 1LL;

    t101 = (x405&((x406^x407)==x408));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = -1;
	int8_t x411 = INT8_MAX;
	volatile int32_t t102 = -4;

    t102 = (x409&((x410^x411)==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -1;
	volatile uint16_t x414 = UINT16_MAX;
	static int64_t x415 = 1171LL;
	int64_t x416 = INT64_MIN;
	volatile int32_t t103 = -103;

    t103 = (x413&((x414^x415)==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x418 = 401LLU;
	static int16_t x419 = INT16_MIN;
	int64_t x420 = -1LL;

    t104 = (x417&((x418^x419)==x420));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x421 = UINT8_MAX;
	int64_t x422 = -1LL;
	int32_t x423 = 1;
	static volatile int32_t t105 = 9170;

    t105 = (x421&((x422^x423)==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 1U;
	static int16_t x427 = INT16_MAX;
	volatile int32_t t106 = -35915078;

    t106 = (x425&((x426^x427)==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x430 = 123U;
	uint8_t x431 = 0U;
	uint16_t x432 = 11U;
	volatile int32_t t107 = -27227;

    t107 = (x429&((x430^x431)==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x434 = 6943871U;
	uint32_t x435 = 650214U;
	int64_t x436 = 67387160692929747LL;
	int32_t t108 = 1464;

    t108 = (x433&((x434^x435)==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = 17705593631759405LL;
	int16_t x438 = -1;
	static volatile int32_t x439 = -1;
	uint32_t x440 = 3745U;

    t109 = (x437&((x438^x439)==x440));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = UINT16_MAX;
	int16_t x443 = INT16_MIN;
	uint32_t x444 = 400U;
	int32_t t110 = -1193;

    t110 = (x441&((x442^x443)==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x447 = -26080373LL;
	static uint32_t x448 = 1256737689U;
	int32_t t111 = -365437673;

    t111 = (x445&((x446^x447)==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = -237;
	uint32_t x451 = UINT32_MAX;

    t112 = (x449&((x450^x451)==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x453 = INT64_MIN;
	uint32_t x455 = 4521167U;
	volatile int64_t t113 = 2669LL;

    t113 = (x453&((x454^x455)==x456));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = 0;
	static int64_t x459 = -1LL;
	int32_t x460 = 1;
	int32_t t114 = 55001;

    t114 = (x457&((x458^x459)==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x461 = INT32_MIN;
	int8_t x462 = 0;
	static volatile uint8_t x463 = 2U;
	static volatile uint16_t x464 = 492U;
	volatile int32_t t115 = 32009090;

    t115 = (x461&((x462^x463)==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MAX;
	uint16_t x466 = 7U;
	volatile int64_t x467 = INT64_MIN;
	int16_t x468 = -1;
	volatile int32_t t116 = -392198;

    t116 = (x465&((x466^x467)==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 0U;
	int64_t x470 = 65728491259584LL;
	static uint32_t x471 = 661U;

    t117 = (x469&((x470^x471)==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x474 = INT8_MIN;
	volatile uint16_t x475 = UINT16_MAX;
	int16_t x476 = INT16_MAX;
	static volatile uint32_t t118 = 31236U;

    t118 = (x473&((x474^x475)==x476));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x477 = INT16_MIN;
	volatile uint64_t x478 = 1LLU;
	uint32_t x479 = 8129U;
	int16_t x480 = -7033;
	volatile int32_t t119 = -2049;

    t119 = (x477&((x478^x479)==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x481 = -919403023;
	uint32_t x482 = UINT32_MAX;
	static int16_t x483 = INT16_MIN;
	uint8_t x484 = 12U;
	volatile int32_t t120 = -5286405;

    t120 = (x481&((x482^x483)==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x485 = INT16_MIN;
	int8_t x486 = INT8_MIN;
	int16_t x487 = INT16_MIN;
	uint32_t x488 = 66646527U;

    t121 = (x485&((x486^x487)==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = -6897680129LL;
	int32_t x490 = INT32_MAX;
	int32_t x491 = -364380;
	uint8_t x492 = 19U;
	static volatile int64_t t122 = -1440389LL;

    t122 = (x489&((x490^x491)==x492));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x493 = 1U;
	int64_t x494 = INT64_MAX;
	int32_t x495 = INT32_MAX;
	int16_t x496 = -1;
	int32_t t123 = 1013127;

    t123 = (x493&((x494^x495)==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x497 = UINT8_MAX;
	int16_t x498 = INT16_MIN;
	int16_t x499 = 1;
	int16_t x500 = -2;
	int32_t t124 = 8527875;

    t124 = (x497&((x498^x499)==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x501 = 125375135;
	int16_t x502 = INT16_MIN;
	int32_t t125 = 1097;

    t125 = (x501&((x502^x503)==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x506 = INT16_MAX;
	volatile int32_t t126 = 415120580;

    t126 = (x505&((x506^x507)==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x509 = 49U;
	static int8_t x510 = INT8_MAX;
	int64_t x511 = INT64_MAX;
	volatile int16_t x512 = -1;

    t127 = (x509&((x510^x511)==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -1LL;
	int8_t x514 = -1;
	int64_t x515 = -738LL;
	volatile int64_t t128 = 54958046113264LL;

    t128 = (x513&((x514^x515)==x516));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	volatile int8_t x518 = INT8_MIN;
	int64_t x519 = 5671893859LL;
	uint64_t x520 = UINT64_MAX;
	static volatile int32_t t129 = -3;

    t129 = (x517&((x518^x519)==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 73U;
	volatile int32_t x522 = INT32_MAX;
	uint32_t x523 = 461U;

    t130 = (x521&((x522^x523)==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x526 = UINT16_MAX;
	uint8_t x527 = 5U;
	volatile int32_t x528 = INT32_MIN;
	int32_t t131 = -208674329;

    t131 = (x525&((x526^x527)==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = 15U;
	static volatile int32_t x530 = -5;
	uint16_t x531 = 227U;
	static uint64_t x532 = 188923887698756LLU;
	volatile int32_t t132 = 3;

    t132 = (x529&((x530^x531)==x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = UINT64_MAX;
	int32_t x534 = -6089642;
	volatile int16_t x535 = INT16_MIN;
	static volatile int64_t x536 = INT64_MAX;
	volatile uint64_t t133 = 343LLU;

    t133 = (x533&((x534^x535)==x536));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x538 = -1;
	uint32_t x539 = UINT32_MAX;
	int64_t t134 = 3058579456645LL;

    t134 = (x537&((x538^x539)==x540));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 16U;
	volatile int8_t x542 = INT8_MIN;
	int64_t x543 = -6791707LL;
	volatile int32_t t135 = 134077377;

    t135 = (x541&((x542^x543)==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = -17010166992658544LL;
	int16_t x547 = INT16_MAX;
	volatile int16_t x548 = INT16_MIN;
	static volatile int64_t t136 = 1868121946LL;

    t136 = (x545&((x546^x547)==x548));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = UINT32_MAX;
	int32_t x550 = INT32_MIN;
	uint16_t x551 = UINT16_MAX;
	volatile uint8_t x552 = UINT8_MAX;
	volatile uint32_t t137 = 187314U;

    t137 = (x549&((x550^x551)==x552));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = UINT16_MAX;
	volatile int8_t x554 = INT8_MAX;
	int8_t x556 = -1;
	volatile int32_t t138 = -176;

    t138 = (x553&((x554^x555)==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MAX;
	uint64_t x558 = 243424553LLU;
	uint32_t x559 = 5U;
	int32_t t139 = 63205140;

    t139 = (x557&((x558^x559)==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = -1LL;
	int32_t x562 = INT32_MIN;
	int64_t x563 = -1LL;
	int64_t t140 = -86LL;

    t140 = (x561&((x562^x563)==x564));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MAX;
	int32_t x566 = -18012602;
	static int16_t x567 = 944;
	volatile uint32_t x568 = 8694753U;
	volatile int32_t t141 = -41550222;

    t141 = (x565&((x566^x567)==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = 8U;
	uint8_t x570 = 16U;
	int8_t x571 = INT8_MAX;
	uint64_t x572 = 48095224674LLU;
	int32_t t142 = -2485;

    t142 = (x569&((x570^x571)==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -1;
	static uint32_t x575 = UINT32_MAX;
	static int32_t t143 = 64928925;

    t143 = (x573&((x574^x575)==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x578 = UINT32_MAX;
	uint32_t x579 = UINT32_MAX;
	volatile int32_t t144 = -5;

    t144 = (x577&((x578^x579)==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	volatile int16_t x582 = 403;
	uint32_t x583 = UINT32_MAX;
	int64_t t145 = -2168693079943073LL;

    t145 = (x581&((x582^x583)==x584));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = 2;
	static int16_t x586 = -2;
	int8_t x587 = INT8_MIN;
	int8_t x588 = -1;
	volatile int32_t t146 = -94964;

    t146 = (x585&((x586^x587)==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x590 = -514532;
	uint64_t x592 = 50451731603845LLU;
	static int32_t t147 = -28748265;

    t147 = (x589&((x590^x591)==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x595 = INT64_MIN;
	static volatile uint8_t x596 = 97U;
	volatile int32_t t148 = -424;

    t148 = (x593&((x594^x595)==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -1LL;
	static int8_t x598 = INT8_MAX;
	int16_t x599 = INT16_MIN;
	int32_t x600 = -14047;
	volatile int64_t t149 = 1LL;

    t149 = (x597&((x598^x599)==x600));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	volatile int32_t x602 = 937792960;
	int64_t x603 = 24885042791871649LL;
	int8_t x604 = INT8_MIN;

    t150 = (x601&((x602^x603)==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 69428159611657LLU;
	int8_t x606 = INT8_MIN;
	volatile uint16_t x607 = 1806U;
	static uint32_t x608 = 716U;

    t151 = (x605&((x606^x607)==x608));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x609 = INT64_MIN;
	static int64_t x610 = -3255LL;
	volatile int16_t x611 = -12;

    t152 = (x609&((x610^x611)==x612));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x613 = UINT16_MAX;
	int16_t x614 = INT16_MIN;
	uint64_t x615 = 2LLU;
	static uint64_t x616 = 691415368653LLU;
	volatile int32_t t153 = -828958514;

    t153 = (x613&((x614^x615)==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1;
	int32_t x618 = INT32_MIN;
	static volatile int64_t x620 = INT64_MIN;
	int32_t t154 = 30551;

    t154 = (x617&((x618^x619)==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MAX;
	int64_t x622 = INT64_MIN;
	static volatile int64_t x624 = -1LL;
	static int32_t t155 = 396358;

    t155 = (x621&((x622^x623)==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -323580126443329838LL;
	uint16_t x626 = UINT16_MAX;
	volatile int32_t x627 = INT32_MIN;
	volatile int16_t x628 = 3194;
	volatile int64_t t156 = 35890784510729926LL;

    t156 = (x625&((x626^x627)==x628));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x631 = -54160449237067301LL;

    t157 = (x629&((x630^x631)==x632));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x634 = INT8_MAX;
	static int16_t x635 = INT16_MAX;
	int64_t x636 = INT64_MIN;

    t158 = (x633&((x634^x635)==x636));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x638 = INT16_MAX;
	int8_t x639 = -1;
	static volatile int32_t x640 = 109;
	uint64_t t159 = 3242398087390LLU;

    t159 = (x637&((x638^x639)==x640));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = -14666;
	uint32_t x642 = 56216890U;
	uint64_t x644 = UINT64_MAX;

    t160 = (x641&((x642^x643)==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x645 = INT64_MIN;
	uint32_t x646 = 852U;
	int64_t x648 = INT64_MIN;
	int64_t t161 = 456561269LL;

    t161 = (x645&((x646^x647)==x648));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x650 = INT64_MIN;
	uint8_t x651 = 39U;
	volatile uint8_t x652 = 1U;
	int32_t t162 = -13115436;

    t162 = (x649&((x650^x651)==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -7;
	static int16_t x655 = 0;
	volatile int32_t t163 = 2962370;

    t163 = (x653&((x654^x655)==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x657 = INT64_MIN;
	uint64_t x658 = 1901LLU;
	int32_t x660 = INT32_MAX;
	int64_t t164 = 202043815LL;

    t164 = (x657&((x658^x659)==x660));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	volatile uint8_t x662 = 2U;
	int8_t x663 = 0;
	volatile uint8_t x664 = 0U;
	static volatile int32_t t165 = -4369;

    t165 = (x661&((x662^x663)==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x665 = INT32_MIN;
	static uint8_t x666 = 21U;
	volatile int8_t x667 = INT8_MIN;
	volatile int64_t x668 = INT64_MIN;
	static volatile int32_t t166 = 64591;

    t166 = (x665&((x666^x667)==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x669 = INT64_MAX;
	static uint64_t x670 = 10658036LLU;
	static uint64_t x671 = 328105530900038065LLU;
	int32_t x672 = INT32_MAX;
	int64_t t167 = -18LL;

    t167 = (x669&((x670^x671)==x672));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = UINT32_MAX;
	uint64_t x674 = 359175240616043306LLU;
	static int8_t x675 = -1;
	int64_t x676 = INT64_MAX;

    t168 = (x673&((x674^x675)==x676));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = -1;
	int8_t x678 = INT8_MAX;
	static int8_t x679 = -1;
	volatile int32_t t169 = 133349772;

    t169 = (x677&((x678^x679)==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x681 = 707565020LLU;
	uint32_t x683 = 83344U;
	int8_t x684 = INT8_MAX;
	uint64_t t170 = 4708173LLU;

    t170 = (x681&((x682^x683)==x684));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x685 = 13717690U;
	static int64_t x686 = INT64_MAX;
	static uint16_t x687 = UINT16_MAX;
	volatile uint16_t x688 = 0U;
	volatile uint32_t t171 = 441302861U;

    t171 = (x685&((x686^x687)==x688));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x689 = 333526392U;
	uint8_t x690 = 22U;
	volatile int8_t x692 = INT8_MIN;
	volatile uint32_t t172 = 20U;

    t172 = (x689&((x690^x691)==x692));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	uint16_t x694 = 2U;
	int32_t x695 = -1;
	int16_t x696 = INT16_MIN;
	int64_t t173 = 62962515628108925LL;

    t173 = (x693&((x694^x695)==x696));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x698 = 301862492271LLU;
	static int16_t x699 = -1;
	static uint32_t x700 = UINT32_MAX;
	volatile int32_t t174 = -250;

    t174 = (x697&((x698^x699)==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x701 = 430LLU;
	int64_t x702 = -1LL;
	uint16_t x703 = 0U;
	static uint32_t x704 = UINT32_MAX;
	volatile uint64_t t175 = 9415233102391LLU;

    t175 = (x701&((x702^x703)==x704));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x705 = 3468;
	int16_t x706 = -14;
	int8_t x708 = INT8_MIN;
	volatile int32_t t176 = -13;

    t176 = (x705&((x706^x707)==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -39703329301341237LL;
	uint16_t x710 = 13052U;
	int32_t x711 = -1;
	uint32_t x712 = 87U;
	int64_t t177 = -1176162655713494297LL;

    t177 = (x709&((x710^x711)==x712));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x716 = INT64_MAX;
	volatile int32_t t178 = 5737883;

    t178 = (x713&((x714^x715)==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x717 = 0U;
	int32_t x718 = INT32_MIN;
	volatile int32_t x719 = -1;
	int64_t x720 = -29342951LL;

    t179 = (x717&((x718^x719)==x720));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = -1;
	uint16_t x722 = 2198U;
	static volatile uint8_t x723 = 13U;
	int8_t x724 = -1;
	volatile int32_t t180 = -214779;

    t180 = (x721&((x722^x723)==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x726 = INT16_MIN;
	int64_t x727 = INT64_MIN;
	static volatile int8_t x728 = INT8_MAX;
	uint32_t t181 = 1143U;

    t181 = (x725&((x726^x727)==x728));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MIN;
	volatile int8_t x730 = INT8_MIN;
	uint64_t x731 = 3647663172129759LLU;
	volatile uint64_t x732 = 19458LLU;

    t182 = (x729&((x730^x731)==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 3709LLU;
	uint8_t x734 = UINT8_MAX;
	uint32_t x736 = 29941U;
	volatile uint64_t t183 = 194LLU;

    t183 = (x733&((x734^x735)==x736));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = INT64_MIN;
	int32_t x738 = INT32_MAX;
	uint8_t x739 = UINT8_MAX;
	volatile int64_t t184 = 10678726086LL;

    t184 = (x737&((x738^x739)==x740));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -1;
	int32_t x742 = INT32_MAX;
	static int16_t x743 = 81;
	static volatile int32_t t185 = 266780;

    t185 = (x741&((x742^x743)==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MAX;
	static int16_t x746 = -11939;
	int8_t x747 = INT8_MAX;
	uint64_t x748 = UINT64_MAX;

    t186 = (x745&((x746^x747)==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	int64_t x751 = INT64_MIN;
	int32_t x752 = INT32_MAX;
	int32_t t187 = -5257;

    t187 = (x749&((x750^x751)==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	volatile int64_t x754 = INT64_MIN;
	uint64_t x756 = UINT64_MAX;
	int32_t t188 = -19;

    t188 = (x753&((x754^x755)==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 1U;
	uint64_t x758 = 1LLU;
	uint32_t x759 = 124494036U;
	uint32_t t189 = 52857U;

    t189 = (x757&((x758^x759)==x760));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = UINT64_MAX;
	int16_t x762 = 0;
	volatile uint64_t t190 = 3682816447669492LLU;

    t190 = (x761&((x762^x763)==x764));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x765 = UINT16_MAX;
	uint64_t x767 = 5829351447702285LLU;
	volatile uint16_t x768 = UINT16_MAX;
	static volatile int32_t t191 = 14867;

    t191 = (x765&((x766^x767)==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = -1;
	int16_t x770 = INT16_MIN;
	int32_t x771 = -1;
	int8_t x772 = INT8_MAX;

    t192 = (x769&((x770^x771)==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x773 = 0U;
	static int32_t x776 = INT32_MIN;
	volatile int32_t t193 = -39211;

    t193 = (x773&((x774^x775)==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = 18;
	volatile uint8_t x778 = 65U;
	int16_t x779 = INT16_MIN;
	int64_t x780 = INT64_MIN;
	static int32_t t194 = -16212;

    t194 = (x777&((x778^x779)==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x783 = 0LLU;
	int64_t x784 = INT64_MAX;
	volatile uint32_t t195 = 3882U;

    t195 = (x781&((x782^x783)==x784));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x786 = INT32_MAX;
	int64_t x787 = INT64_MIN;
	uint32_t x788 = 2086503U;
	volatile int32_t t196 = 3;

    t196 = (x785&((x786^x787)==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x790 = UINT8_MAX;
	int64_t x791 = -1LL;
	int16_t x792 = 466;
	uint64_t t197 = 22200814786733LLU;

    t197 = (x789&((x790^x791)==x792));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x793 = -1;
	int32_t x794 = 3;
	uint32_t x796 = UINT32_MAX;
	static int32_t t198 = 2;

    t198 = (x793&((x794^x795)==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MIN;
	int64_t x798 = INT64_MIN;
	int16_t x799 = INT16_MIN;
	volatile uint8_t x800 = 2U;
	volatile int32_t t199 = -3868;

    t199 = (x797&((x798^x799)==x800));

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

