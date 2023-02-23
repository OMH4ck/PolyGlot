
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

int32_t t1 = 0;
uint32_t x10 = 3U;
static int32_t x15 = INT32_MIN;
uint8_t x20 = UINT8_MAX;
uint64_t t4 = 10415194LLU;
static uint8_t x25 = 0U;
uint16_t x31 = UINT16_MAX;
int32_t x33 = -5;
int32_t x35 = INT32_MIN;
int64_t x36 = INT64_MIN;
volatile uint64_t t8 = 4932985LLU;
int64_t x37 = -1LL;
volatile int16_t x40 = INT16_MIN;
static int16_t x42 = INT16_MIN;
static int8_t x43 = INT8_MAX;
static int16_t x67 = 2671;
static int16_t x69 = INT16_MAX;
int32_t x70 = -1;
volatile int64_t t16 = -686203655536LL;
int32_t x83 = INT32_MIN;
volatile int64_t x95 = INT64_MIN;
volatile int64_t t21 = -4149275044889817LL;
uint16_t x98 = 809U;
int32_t x100 = INT32_MIN;
uint64_t t22 = 5638156919716697LLU;
int8_t x102 = 6;
volatile uint64_t t23 = 15LLU;
uint16_t x109 = 2723U;
uint32_t x111 = 69776284U;
static uint64_t x112 = 40827783984397006LLU;
volatile uint64_t t25 = 197988392LLU;
int8_t x113 = -1;
uint8_t x114 = 62U;
int64_t x115 = INT64_MIN;
uint64_t x119 = 39LLU;
uint64_t x120 = 1649564LLU;
int64_t x121 = 1427527565125776LL;
static int8_t x123 = INT8_MIN;
static int16_t x125 = 0;
uint64_t t29 = 1LLU;
static uint32_t x132 = 288463U;
int64_t x133 = -17LL;
uint16_t x134 = 6973U;
volatile int16_t x144 = INT16_MIN;
uint16_t x147 = 321U;
static uint32_t x148 = 197U;
int8_t x149 = -1;
static volatile int8_t x150 = 21;
static int16_t x154 = -2947;
static int32_t x156 = INT32_MIN;
static int32_t x158 = -1;
int32_t t37 = -307566;
int32_t x163 = -1;
int32_t t38 = 103745;
static int16_t x168 = -1;
static uint16_t x172 = 11389U;
int32_t x175 = -147972;
volatile int64_t t41 = -3831LL;
int8_t x180 = INT8_MIN;
int32_t x185 = INT32_MAX;
int8_t x186 = -1;
uint16_t x190 = 6480U;
uint32_t x191 = 7704U;
int16_t x193 = 8;
int16_t x194 = -1;
int8_t x197 = INT8_MIN;
int64_t x218 = INT64_MIN;
static int16_t x224 = INT16_MIN;
int32_t x233 = -1;
volatile uint64_t t56 = 661539467397823794LLU;
int16_t x241 = -53;
static int8_t x248 = -1;
uint64_t x256 = 25LLU;
static uint64_t t60 = 1007LLU;
uint64_t x258 = 2134633335128865254LLU;
int64_t x259 = -1LL;
int64_t x263 = INT64_MAX;
int64_t t62 = 1180LL;
int64_t x266 = -1LL;
int64_t t63 = -221285LL;
int32_t x269 = INT32_MIN;
volatile uint8_t x272 = 1U;
static int16_t x276 = 6;
int64_t t65 = 54194723627LL;
int64_t x285 = -1LL;
int64_t x287 = 6802428LL;
static int32_t x292 = -1;
int64_t x296 = -1LL;
int8_t x301 = INT8_MIN;
static uint16_t x305 = 197U;
static int16_t x307 = INT16_MIN;
int32_t x308 = INT32_MIN;
uint8_t x311 = UINT8_MAX;
static volatile uint32_t x312 = 17433U;
int16_t x315 = INT16_MAX;
volatile int64_t t75 = 0LL;
volatile uint32_t x330 = 1992U;
int32_t x332 = -60;
volatile int8_t x335 = INT8_MIN;
volatile uint64_t x336 = UINT64_MAX;
int32_t x338 = -13880;
int64_t x352 = -48338LL;
volatile int8_t x360 = -1;
uint16_t x367 = 15101U;
static volatile int32_t t88 = -4;
static uint64_t x371 = 502LLU;
int64_t x372 = 3912875LL;
int64_t x375 = INT64_MIN;
uint8_t x387 = 1U;
int64_t x398 = 19216875LL;
int32_t x404 = 3655;
uint16_t x432 = 6U;
volatile uint16_t x436 = 175U;
static int32_t x442 = 606104367;
uint8_t x447 = 2U;
int32_t t108 = 32663341;
static int64_t t109 = -2168LL;
int8_t x453 = INT8_MAX;
uint8_t x455 = UINT8_MAX;
int16_t x458 = -4;
uint32_t x462 = UINT32_MAX;
int32_t x464 = 4;
uint64_t t113 = 8352968164247109331LLU;
static volatile int32_t x484 = INT32_MAX;
volatile int16_t x486 = INT16_MAX;
uint32_t x489 = 1013664U;
volatile uint64_t x492 = 3459LLU;
uint64_t t119 = 854632577478LLU;
static uint32_t x500 = UINT32_MAX;
volatile uint32_t t121 = 1U;
volatile int32_t x501 = INT32_MIN;
volatile int8_t x510 = INT8_MIN;
int32_t t124 = -14472924;
static int64_t x516 = -1LL;
volatile int64_t x517 = INT64_MIN;
int64_t x521 = INT64_MIN;
volatile int64_t t127 = INT64_MIN;
int32_t x528 = INT32_MIN;
static uint16_t x545 = 4U;
int64_t t132 = 101719518389LL;
volatile int32_t x555 = INT32_MAX;
volatile int16_t x560 = 1;
volatile uint64_t t135 = 14385864304829LLU;
uint16_t x561 = UINT16_MAX;
volatile int32_t x569 = 7;
int64_t x570 = -1LL;
static int64_t x572 = -1LL;
static int32_t x573 = INT32_MIN;
uint16_t x575 = 9344U;
int32_t x577 = 62283;
int64_t x578 = INT64_MAX;
static uint8_t x593 = UINT8_MAX;
static int64_t x597 = 4550145319LL;
static int64_t x598 = INT64_MAX;
int8_t x611 = INT8_MAX;
volatile uint64_t x615 = 1LLU;
uint64_t t146 = 92745LLU;
uint64_t t148 = 499483058168LLU;
int32_t x631 = INT32_MAX;
uint8_t x635 = 5U;
volatile uint16_t x638 = 13178U;
int64_t x646 = INT64_MAX;
int64_t x649 = 244778407633292810LL;
volatile int8_t x656 = INT8_MIN;
int16_t x660 = -1;
uint32_t x663 = 46458U;
static uint32_t t157 = 6U;
int16_t x669 = 394;
int8_t x672 = 8;
int64_t x682 = -1LL;
int32_t x684 = INT32_MAX;
int32_t x685 = INT32_MAX;
int16_t x687 = INT16_MIN;
int64_t t166 = 815574279063LL;
int8_t x701 = -1;
int64_t x703 = -4128LL;
int64_t t167 = 219500874369LL;
static volatile uint32_t x714 = 78439U;
int8_t x719 = INT8_MAX;
int64_t x721 = 45889850242633LL;
int64_t t172 = 113661884LL;
int16_t x725 = INT16_MIN;
uint64_t t173 = 18820514649532867LLU;
uint16_t x731 = 2U;
volatile uint32_t t174 = 46210503U;
static volatile uint64_t x738 = 1792LLU;
static int32_t x741 = -117573;
uint8_t x747 = UINT8_MAX;
int8_t x755 = INT8_MAX;
volatile uint32_t t179 = 28495758U;
volatile int32_t t180 = -28;
uint32_t x763 = UINT32_MAX;
int64_t t181 = -79LL;
volatile int64_t x767 = -526623291192507LL;
volatile uint64_t t183 = 0LLU;
volatile int32_t t185 = -31;
static uint8_t x784 = UINT8_MAX;
int32_t x793 = -270;
uint64_t t191 = 170274133LLU;
uint8_t x806 = 80U;
static int64_t x807 = INT64_MIN;
static volatile uint64_t x837 = 1LLU;
volatile int16_t x838 = INT16_MIN;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	int8_t x2 = 25;
	int64_t x3 = 12647763223642310LL;
	static int32_t x4 = INT32_MAX;
	static int64_t t0 = -25456897096LL;

    t0 = (x1&((x2%x3)/x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = 16715;
	int32_t x6 = INT32_MAX;
	static int32_t x7 = INT32_MIN;
	static volatile uint8_t x8 = 76U;

    t1 = (x5&((x6%x7)/x8));

    if (t1 != 75) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = UINT64_MAX;
	int32_t x11 = 5886;
	uint16_t x12 = 11640U;
	static volatile uint64_t t2 = 1148366LLU;

    t2 = (x9&((x10%x11)/x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 65624018U;
	int32_t x14 = 650;
	volatile int32_t x16 = -97159536;
	volatile uint32_t t3 = 134U;

    t3 = (x13&((x14%x15)/x16));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 1978216965486LLU;
	int64_t x18 = INT64_MIN;
	int8_t x19 = -17;

    t4 = (x17&((x18%x19)/x20));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = -58;
	int8_t x22 = 54;
	uint16_t x23 = 5U;
	volatile uint16_t x24 = 997U;
	int32_t t5 = 47;

    t5 = (x21&((x22%x23)/x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = 3;
	uint64_t x27 = 387967702LLU;
	volatile int32_t x28 = -1;
	static uint64_t t6 = 397108895LLU;

    t6 = (x25&((x26%x27)/x28));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = 15624;
	uint64_t x30 = 15159LLU;
	int32_t x32 = INT32_MIN;
	volatile uint64_t t7 = 12913804325608079LLU;

    t7 = (x29&((x30%x31)/x32));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x34 = 12384814443827617LLU;

    t8 = (x33&((x34%x35)/x36));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = 1U;
	int16_t x39 = -219;
	int64_t t9 = -7441874080LL;

    t9 = (x37&((x38%x39)/x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 19U;
	int16_t x44 = INT16_MAX;
	int32_t t10 = 109014;

    t10 = (x41&((x42%x43)/x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint32_t x45 = 5323201U;
	int64_t x46 = -144LL;
	int16_t x47 = -1;
	int16_t x48 = INT16_MAX;
	volatile int64_t t11 = 18903528193183LL;

    t11 = (x45&((x46%x47)/x48));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x49 = 109577LLU;
	uint32_t x50 = 0U;
	uint8_t x51 = 19U;
	int64_t x52 = INT64_MIN;
	uint64_t t12 = 115909049330LLU;

    t12 = (x49&((x50%x51)/x52));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = 2687LLU;
	int16_t x58 = INT16_MIN;
	int32_t x59 = 746;
	static volatile int16_t x60 = -32;
	uint64_t t13 = 37201LLU;

    t13 = (x57&((x58%x59)/x60));

    if (t13 != 21LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x61 = UINT8_MAX;
	static uint64_t x62 = 500494LLU;
	uint16_t x63 = 374U;
	int16_t x64 = INT16_MAX;
	uint64_t t14 = 217926844063950LLU;

    t14 = (x61&((x62%x63)/x64));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint64_t x65 = 9956815605LLU;
	int16_t x66 = INT16_MIN;
	int64_t x68 = INT64_MIN;
	volatile uint64_t t15 = 355901813756480539LLU;

    t15 = (x65&((x66%x67)/x68));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x71 = 4U;
	static int64_t x72 = INT64_MIN;

    t16 = (x69&((x70%x71)/x72));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x73 = 1;
	static int16_t x74 = -1;
	uint64_t x75 = 916935LLU;
	volatile int32_t x76 = -265474083;
	static volatile uint64_t t17 = 3076739071840699601LLU;

    t17 = (x73&((x74%x75)/x76));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x81 = 44908U;
	static uint64_t x82 = 172441LLU;
	static uint64_t x84 = 11LLU;
	uint64_t t18 = 2144559798816LLU;

    t18 = (x81&((x82%x83)/x84));

    if (t18 != 11564LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x85 = INT64_MAX;
	int32_t x86 = INT32_MIN;
	static uint8_t x87 = 9U;
	int8_t x88 = -1;
	volatile int64_t t19 = -561759LL;

    t19 = (x85&((x86%x87)/x88));

    if (t19 != 2LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x89 = UINT16_MAX;
	int16_t x90 = INT16_MIN;
	static uint8_t x91 = UINT8_MAX;
	int8_t x92 = INT8_MIN;
	int32_t t20 = -4388679;

    t20 = (x89&((x90%x91)/x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x93 = -1;
	int8_t x94 = -1;
	int64_t x96 = -1LL;

    t21 = (x93&((x94%x95)/x96));

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x97 = 1803071158364LLU;
	uint16_t x99 = 6U;

    t22 = (x97&((x98%x99)/x100));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x101 = 10023217405885032LLU;
	int32_t x103 = INT32_MAX;
	int32_t x104 = -3;

    t23 = (x101&((x102%x103)/x104));

    if (t23 != 10023217405885032LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x105 = INT8_MIN;
	int8_t x106 = 9;
	volatile int16_t x107 = INT16_MIN;
	int64_t x108 = 1810LL;
	volatile int64_t t24 = 59917LL;

    t24 = (x105&((x106%x107)/x108));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x110 = INT32_MIN;

    t25 = (x109&((x110%x111)/x112));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x116 = INT32_MIN;
	static volatile int64_t t26 = 1LL;

    t26 = (x113&((x114%x115)/x116));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = INT32_MIN;
	int16_t x118 = -1;
	static uint64_t t27 = 3721727354284849LLU;

    t27 = (x117&((x118%x119)/x120));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x122 = -3;
	uint64_t x124 = UINT64_MAX;
	static uint64_t t28 = 3458269157LLU;

    t28 = (x121&((x122%x123)/x124));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x126 = -1;
	uint64_t x127 = 110420621LLU;
	uint16_t x128 = 2703U;

    t29 = (x125&((x126%x127)/x128));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MAX;
	volatile int16_t x131 = INT16_MIN;
	volatile uint32_t t30 = 246250U;

    t30 = (x129&((x130%x131)/x132));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x135 = 1;
	int8_t x136 = INT8_MAX;
	int64_t t31 = -6234296333LL;

    t31 = (x133&((x134%x135)/x136));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x137 = INT16_MAX;
	int8_t x138 = INT8_MAX;
	int64_t x139 = -1LL;
	volatile uint32_t x140 = UINT32_MAX;
	int64_t t32 = -83522152088284LL;

    t32 = (x137&((x138%x139)/x140));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x141 = 19U;
	uint32_t x142 = 1095186U;
	uint16_t x143 = 797U;
	volatile uint32_t t33 = 136488823U;

    t33 = (x141&((x142%x143)/x144));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x145 = 686998343755749021LLU;
	uint16_t x146 = 203U;
	volatile uint64_t t34 = 125LLU;

    t34 = (x145&((x146%x147)/x148));

    if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x151 = -445046;
	int32_t x152 = INT32_MAX;
	volatile int32_t t35 = 974;

    t35 = (x149&((x150%x151)/x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = INT16_MIN;
	int64_t x155 = INT64_MIN;
	int64_t t36 = 9604820LL;

    t36 = (x153&((x154%x155)/x156));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = INT32_MIN;
	int16_t x159 = -2088;
	int32_t x160 = INT32_MIN;

    t37 = (x157&((x158%x159)/x160));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x161 = UINT8_MAX;
	volatile int32_t x162 = INT32_MIN;
	int32_t x164 = INT32_MIN;

    t38 = (x161&((x162%x163)/x164));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x165 = 121U;
	static uint64_t x166 = 5365526054244401271LLU;
	uint32_t x167 = 19709050U;
	uint64_t t39 = 113372053739450555LLU;

    t39 = (x165&((x166%x167)/x168));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x169 = UINT32_MAX;
	int16_t x170 = 3872;
	int32_t x171 = INT32_MAX;
	uint32_t t40 = 250U;

    t40 = (x169&((x170%x171)/x172));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int32_t x173 = INT32_MAX;
	int64_t x174 = INT64_MIN;
	int32_t x176 = INT32_MIN;

    t41 = (x173&((x174%x175)/x176));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = -1LL;
	int64_t x178 = 25138271197LL;
	int64_t x179 = 55238120253LL;
	static int64_t t42 = 29916LL;

    t42 = (x177&((x178%x179)/x180));

    if (t42 != -196392743LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x181 = 7475U;
	uint16_t x182 = UINT16_MAX;
	uint32_t x183 = 443642073U;
	int8_t x184 = -1;
	uint32_t t43 = 451872U;

    t43 = (x181&((x182%x183)/x184));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x187 = INT16_MIN;
	static uint64_t x188 = UINT64_MAX;
	volatile uint64_t t44 = 72687623628707284LLU;

    t44 = (x185&((x186%x187)/x188));

    if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x189 = 8U;
	static volatile int32_t x192 = INT32_MIN;
	volatile uint32_t t45 = 8U;

    t45 = (x189&((x190%x191)/x192));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x195 = INT32_MAX;
	volatile int16_t x196 = INT16_MAX;
	int32_t t46 = 130812281;

    t46 = (x193&((x194%x195)/x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x198 = INT8_MIN;
	int64_t x199 = 434802637341LL;
	uint8_t x200 = UINT8_MAX;
	int64_t t47 = 14448LL;

    t47 = (x197&((x198%x199)/x200));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x201 = INT8_MIN;
	int64_t x202 = INT64_MIN;
	volatile uint32_t x203 = 937257677U;
	int64_t x204 = 26739325913750LL;
	static volatile int64_t t48 = 781493LL;

    t48 = (x201&((x202%x203)/x204));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x205 = 0U;
	static int16_t x206 = -1;
	int16_t x207 = INT16_MAX;
	static int8_t x208 = INT8_MIN;
	volatile int32_t t49 = 280152985;

    t49 = (x205&((x206%x207)/x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x213 = -21;
	int64_t x214 = -763472686646LL;
	uint8_t x215 = UINT8_MAX;
	int64_t x216 = -1LL;
	volatile int64_t t50 = 20784LL;

    t50 = (x213&((x214%x215)/x216));

    if (t50 != 201LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x217 = 10U;
	volatile int16_t x219 = INT16_MAX;
	static volatile int32_t x220 = -62522589;
	static int64_t t51 = -175712370335867183LL;

    t51 = (x217&((x218%x219)/x220));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x221 = 6;
	static uint16_t x222 = 483U;
	int32_t x223 = INT32_MIN;
	volatile int32_t t52 = -125246;

    t52 = (x221&((x222%x223)/x224));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x225 = -84661;
	int16_t x226 = -1;
	volatile int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MIN;
	static int32_t t53 = -39980;

    t53 = (x225&((x226%x227)/x228));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x229 = -1;
	static int8_t x230 = -1;
	int32_t x231 = INT32_MIN;
	static int32_t x232 = -440266324;
	volatile int32_t t54 = -1;

    t54 = (x229&((x230%x231)/x232));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x234 = INT8_MIN;
	static volatile int16_t x235 = -1;
	volatile int8_t x236 = INT8_MAX;
	volatile int32_t t55 = -126043;

    t55 = (x233&((x234%x235)/x236));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x237 = UINT64_MAX;
	uint64_t x238 = UINT64_MAX;
	static int16_t x239 = INT16_MAX;
	volatile uint32_t x240 = UINT32_MAX;

    t56 = (x237&((x238%x239)/x240));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x242 = 3U;
	static int32_t x243 = INT32_MIN;
	int16_t x244 = INT16_MAX;
	int32_t t57 = 15;

    t57 = (x241&((x242%x243)/x244));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x245 = INT16_MAX;
	volatile uint16_t x246 = UINT16_MAX;
	int16_t x247 = INT16_MAX;
	volatile int32_t t58 = -64304;

    t58 = (x245&((x246%x247)/x248));

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x249 = INT32_MIN;
	uint64_t x250 = 26630646LLU;
	int64_t x251 = 46LL;
	uint16_t x252 = UINT16_MAX;
	uint64_t t59 = 2825LLU;

    t59 = (x249&((x250%x251)/x252));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x253 = -1;
	volatile int16_t x254 = INT16_MIN;
	static uint64_t x255 = UINT64_MAX;

    t60 = (x253&((x254%x255)/x256));

    if (t60 != 737869762948380753LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x257 = INT32_MIN;
	static int64_t x260 = INT64_MIN;
	volatile uint64_t t61 = 84593LLU;

    t61 = (x257&((x258%x259)/x260));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x261 = 30894404;
	static int64_t x262 = INT64_MIN;
	int64_t x264 = -58822772499LL;

    t62 = (x261&((x262%x263)/x264));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x265 = UINT8_MAX;
	static int32_t x267 = 1;
	int16_t x268 = -14581;

    t63 = (x265&((x266%x267)/x268));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x270 = INT16_MIN;
	uint8_t x271 = 2U;
	volatile int32_t t64 = -28099;

    t64 = (x269&((x270%x271)/x272));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x273 = -1;
	int32_t x274 = -1;
	int64_t x275 = INT64_MIN;

    t65 = (x273&((x274%x275)/x276));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = -547;
	uint8_t x278 = UINT8_MAX;
	int16_t x279 = INT16_MIN;
	volatile int64_t x280 = -245132655825LL;
	volatile int64_t t66 = 14691531031162410LL;

    t66 = (x277&((x278%x279)/x280));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = -1LL;
	volatile uint64_t x282 = 82977522016LLU;
	int16_t x283 = 72;
	uint32_t x284 = UINT32_MAX;
	uint64_t t67 = 208LLU;

    t67 = (x281&((x282%x283)/x284));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x286 = 25842849LLU;
	int8_t x288 = 1;
	uint64_t t68 = 5677325936841595LLU;

    t68 = (x285&((x286%x287)/x288));

    if (t68 != 5435565LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x289 = INT64_MIN;
	static uint32_t x290 = 1195774032U;
	int32_t x291 = INT32_MIN;
	volatile int64_t t69 = 25796164666765710LL;

    t69 = (x289&((x290%x291)/x292));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x293 = 31728789270LLU;
	uint32_t x294 = UINT32_MAX;
	int32_t x295 = -1;
	uint64_t t70 = 98081215LLU;

    t70 = (x293&((x294%x295)/x296));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x297 = 37U;
	uint16_t x298 = 222U;
	int8_t x299 = 1;
	uint16_t x300 = 2836U;
	int32_t t71 = 652450;

    t71 = (x297&((x298%x299)/x300));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x302 = 0;
	int32_t x303 = INT32_MIN;
	int32_t x304 = -124024339;
	static int32_t t72 = 441;

    t72 = (x301&((x302%x303)/x304));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x306 = INT8_MAX;
	volatile int32_t t73 = 1046089;

    t73 = (x305&((x306%x307)/x308));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x309 = INT8_MAX;
	int8_t x310 = INT8_MIN;
	static volatile uint32_t t74 = 214U;

    t74 = (x309&((x310%x311)/x312));

    if (t74 != 97U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x313 = INT8_MAX;
	int64_t x314 = INT64_MIN;
	int16_t x316 = 10370;

    t75 = (x313&((x314%x315)/x316));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x317 = 0U;
	uint8_t x318 = UINT8_MAX;
	volatile uint8_t x319 = 14U;
	volatile int32_t x320 = -26;
	volatile int32_t t76 = 28;

    t76 = (x317&((x318%x319)/x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x321 = 1428U;
	int32_t x322 = INT32_MIN;
	uint8_t x323 = 10U;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t77 = -18221;

    t77 = (x321&((x322%x323)/x324));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x325 = -1;
	int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MIN;
	static volatile uint32_t x328 = UINT32_MAX;
	volatile uint32_t t78 = 28925399U;

    t78 = (x325&((x326%x327)/x328));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x329 = INT8_MAX;
	volatile int8_t x331 = INT8_MIN;
	static uint32_t t79 = 492723U;

    t79 = (x329&((x330%x331)/x332));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x333 = INT32_MIN;
	int8_t x334 = -1;
	static uint64_t t80 = 403LLU;

    t80 = (x333&((x334%x335)/x336));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x337 = INT16_MIN;
	uint16_t x339 = 2073U;
	int8_t x340 = -1;
	static int32_t t81 = -64;

    t81 = (x337&((x338%x339)/x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x341 = INT8_MIN;
	volatile int32_t x342 = INT32_MIN;
	int64_t x343 = 4LL;
	static uint8_t x344 = 54U;
	int64_t t82 = 261378877411LL;

    t82 = (x341&((x342%x343)/x344));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x345 = INT64_MAX;
	static volatile int8_t x346 = -1;
	int8_t x347 = INT8_MIN;
	int64_t x348 = INT64_MIN;
	static volatile int64_t t83 = -6582571788937LL;

    t83 = (x345&((x346%x347)/x348));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x349 = INT32_MIN;
	static int8_t x350 = INT8_MIN;
	int16_t x351 = -1;
	int64_t t84 = 19647168918681LL;

    t84 = (x349&((x350%x351)/x352));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x353 = INT64_MIN;
	int8_t x354 = INT8_MAX;
	volatile int32_t x355 = -146338349;
	int32_t x356 = -1;
	static volatile int64_t t85 = INT64_MIN;

    t85 = (x353&((x354%x355)/x356));

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x357 = -1252;
	volatile int8_t x358 = 1;
	int32_t x359 = INT32_MIN;
	int32_t t86 = 3719287;

    t86 = (x357&((x358%x359)/x360));

    if (t86 != -1252) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x361 = INT16_MIN;
	uint64_t x362 = 28081751020LLU;
	uint32_t x363 = 96384995U;
	uint32_t x364 = 28254U;
	static volatile uint64_t t87 = 52146LLU;

    t87 = (x361&((x362%x363)/x364));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x365 = UINT16_MAX;
	int16_t x366 = 242;
	int8_t x368 = INT8_MAX;

    t88 = (x365&((x366%x367)/x368));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x369 = -1LL;
	int16_t x370 = -7;
	uint64_t t89 = 3687056365LLU;

    t89 = (x369&((x370%x371)/x372));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x373 = UINT8_MAX;
	uint32_t x374 = 0U;
	volatile int8_t x376 = INT8_MIN;
	static volatile int64_t t90 = 1404354934859514LL;

    t90 = (x373&((x374%x375)/x376));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x377 = -545584416282797LL;
	uint8_t x378 = 4U;
	uint16_t x379 = 1U;
	int16_t x380 = 725;
	int64_t t91 = -156261LL;

    t91 = (x377&((x378%x379)/x380));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x381 = 1U;
	uint16_t x382 = UINT16_MAX;
	int8_t x383 = INT8_MIN;
	int64_t x384 = INT64_MAX;
	volatile int64_t t92 = 971LL;

    t92 = (x381&((x382%x383)/x384));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x385 = INT8_MIN;
	volatile int16_t x386 = INT16_MIN;
	uint32_t x388 = UINT32_MAX;
	static volatile uint32_t t93 = 56953U;

    t93 = (x385&((x386%x387)/x388));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x389 = INT32_MIN;
	int64_t x390 = INT64_MIN;
	static int32_t x391 = INT32_MIN;
	int8_t x392 = INT8_MIN;
	int64_t t94 = 34738250070361931LL;

    t94 = (x389&((x390%x391)/x392));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x393 = 732U;
	static int16_t x394 = -1;
	int16_t x395 = -1;
	int64_t x396 = -1LL;
	int64_t t95 = 228142170744567LL;

    t95 = (x393&((x394%x395)/x396));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x397 = 7LLU;
	uint64_t x399 = 969LLU;
	uint32_t x400 = 618021887U;
	volatile uint64_t t96 = 41LLU;

    t96 = (x397&((x398%x399)/x400));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x401 = 285U;
	int16_t x402 = 185;
	int8_t x403 = INT8_MAX;
	volatile int32_t t97 = 282688618;

    t97 = (x401&((x402%x403)/x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x405 = 326295659;
	int32_t x406 = INT32_MIN;
	static uint32_t x407 = 2U;
	uint16_t x408 = 53U;
	uint32_t t98 = 11032644U;

    t98 = (x405&((x406%x407)/x408));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x409 = INT32_MIN;
	int64_t x410 = INT64_MAX;
	int64_t x411 = INT64_MAX;
	int32_t x412 = INT32_MIN;
	static volatile int64_t t99 = -486886647249139381LL;

    t99 = (x409&((x410%x411)/x412));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x413 = 5U;
	static int64_t x414 = -1LL;
	static int64_t x415 = -1LL;
	int32_t x416 = INT32_MIN;
	int64_t t100 = -482109913037LL;

    t100 = (x413&((x414%x415)/x416));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x417 = INT32_MAX;
	uint64_t x418 = 1570144534231LLU;
	uint8_t x419 = 27U;
	uint16_t x420 = 66U;
	volatile uint64_t t101 = 98447944218495417LLU;

    t101 = (x417&((x418%x419)/x420));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x421 = 6200U;
	int32_t x422 = 919817;
	static uint16_t x423 = 1954U;
	int64_t x424 = -7573487302162092LL;
	volatile int64_t t102 = -1387730LL;

    t102 = (x421&((x422%x423)/x424));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x425 = INT8_MIN;
	uint32_t x426 = 23U;
	int64_t x427 = 40LL;
	int64_t x428 = INT64_MAX;
	static int64_t t103 = 508413049044036154LL;

    t103 = (x425&((x426%x427)/x428));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x429 = INT64_MIN;
	int8_t x430 = INT8_MAX;
	int8_t x431 = -15;
	int64_t t104 = 15LL;

    t104 = (x429&((x430%x431)/x432));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x433 = INT64_MIN;
	int64_t x434 = INT64_MIN;
	int16_t x435 = INT16_MIN;
	static volatile int64_t t105 = 5212474LL;

    t105 = (x433&((x434%x435)/x436));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x437 = 6U;
	int16_t x438 = -3222;
	int16_t x439 = -11;
	volatile int16_t x440 = -1;
	int32_t t106 = 46577;

    t106 = (x437&((x438%x439)/x440));

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x441 = INT16_MAX;
	int64_t x443 = INT64_MIN;
	static int64_t x444 = INT64_MIN;
	volatile int64_t t107 = 1781LL;

    t107 = (x441&((x442%x443)/x444));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x445 = -13;
	int32_t x446 = -1;
	int8_t x448 = INT8_MIN;

    t108 = (x445&((x446%x447)/x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x449 = INT8_MIN;
	int16_t x450 = -1;
	volatile int64_t x451 = INT64_MAX;
	static uint16_t x452 = 5U;

    t109 = (x449&((x450%x451)/x452));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x454 = INT16_MIN;
	static uint64_t x456 = 9LLU;
	volatile uint64_t t110 = 8792811671809360LLU;

    t110 = (x453&((x454%x455)/x456));

    if (t110 != 99LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x457 = UINT32_MAX;
	int16_t x459 = INT16_MIN;
	uint64_t x460 = 282309669565LLU;
	uint64_t t111 = 34261952LLU;

    t111 = (x457&((x458%x459)/x460));

    if (t111 != 65342232LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x461 = UINT64_MAX;
	static uint64_t x463 = UINT64_MAX;
	uint64_t t112 = 171LLU;

    t112 = (x461&((x462%x463)/x464));

    if (t112 != 1073741823LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x465 = 829696505136LLU;
	volatile uint64_t x466 = UINT64_MAX;
	int64_t x467 = INT64_MAX;
	uint32_t x468 = 81294U;

    t113 = (x465&((x466%x467)/x468));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x469 = INT8_MIN;
	int64_t x470 = INT64_MIN;
	static volatile int64_t x471 = INT64_MIN;
	int32_t x472 = INT32_MIN;
	int64_t t114 = 5495110785LL;

    t114 = (x469&((x470%x471)/x472));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x473 = INT8_MAX;
	static int32_t x474 = 64142;
	int64_t x475 = -1LL;
	volatile int32_t x476 = INT32_MAX;
	volatile int64_t t115 = -4162891LL;

    t115 = (x473&((x474%x475)/x476));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x477 = INT32_MIN;
	int64_t x478 = 1018LL;
	uint64_t x479 = 49185700LLU;
	static int8_t x480 = 29;
	uint64_t t116 = 2730433004816LLU;

    t116 = (x477&((x478%x479)/x480));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x481 = 3;
	static int16_t x482 = -7419;
	volatile uint64_t x483 = UINT64_MAX;
	static uint64_t t117 = 1228476439LLU;

    t117 = (x481&((x482%x483)/x484));

    if (t117 != 3LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x485 = 0U;
	uint64_t x487 = 13047707657334817LLU;
	int64_t x488 = INT64_MIN;
	volatile uint64_t t118 = 31LLU;

    t118 = (x485&((x486%x487)/x488));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x490 = INT16_MIN;
	int64_t x491 = 447403910LL;

    t119 = (x489&((x490%x491)/x492));

    if (t119 != 787744LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x493 = UINT16_MAX;
	int16_t x494 = -1;
	static int8_t x495 = -1;
	int64_t x496 = -8591489135373LL;
	int64_t t120 = -3431LL;

    t120 = (x493&((x494%x495)/x496));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x497 = -1;
	int16_t x498 = -1;
	static uint8_t x499 = 5U;

    t121 = (x497&((x498%x499)/x500));

    if (t121 != 1U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x502 = INT64_MAX;
	static int16_t x503 = INT16_MIN;
	static uint32_t x504 = 1U;
	int64_t t122 = 71182464335LL;

    t122 = (x501&((x502%x503)/x504));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x505 = INT32_MIN;
	static int32_t x506 = INT32_MIN;
	int32_t x507 = INT32_MIN;
	int16_t x508 = INT16_MAX;
	int32_t t123 = 22265;

    t123 = (x505&((x506%x507)/x508));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x509 = INT8_MIN;
	uint8_t x511 = 5U;
	int8_t x512 = -1;

    t124 = (x509&((x510%x511)/x512));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x513 = INT32_MAX;
	int16_t x514 = 2070;
	uint8_t x515 = 6U;
	volatile int64_t t125 = -20358522593257LL;

    t125 = (x513&((x514%x515)/x516));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x518 = -1;
	int8_t x519 = INT8_MIN;
	static int32_t x520 = INT32_MIN;
	static int64_t t126 = -21LL;

    t126 = (x517&((x518%x519)/x520));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x522 = 40;
	volatile int32_t x523 = INT32_MIN;
	int16_t x524 = -1;

    t127 = (x521&((x522%x523)/x524));

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x525 = -1LL;
	volatile int16_t x526 = 1;
	static int16_t x527 = -1;
	int64_t t128 = -8260094602948LL;

    t128 = (x525&((x526%x527)/x528));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x529 = INT16_MIN;
	static int32_t x530 = INT32_MAX;
	int8_t x531 = -1;
	static volatile uint64_t x532 = UINT64_MAX;
	static uint64_t t129 = 7254943780019LLU;

    t129 = (x529&((x530%x531)/x532));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x537 = -1LL;
	int64_t x538 = INT64_MAX;
	int64_t x539 = INT64_MIN;
	static uint32_t x540 = 2718590U;
	static int64_t t130 = 418595766974087LL;

    t130 = (x537&((x538%x539)/x540));

    if (t130 != 3392704319832LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x541 = INT32_MIN;
	int16_t x542 = 0;
	int16_t x543 = 175;
	static int8_t x544 = INT8_MIN;
	volatile int32_t t131 = -1405886;

    t131 = (x541&((x542%x543)/x544));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x546 = -2;
	int64_t x547 = 62685607LL;
	int32_t x548 = -5706;

    t132 = (x545&((x546%x547)/x548));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x549 = UINT16_MAX;
	int32_t x550 = -1;
	int32_t x551 = INT32_MAX;
	int8_t x552 = INT8_MAX;
	volatile int32_t t133 = 170;

    t133 = (x549&((x550%x551)/x552));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x553 = UINT64_MAX;
	uint16_t x554 = 3U;
	uint64_t x556 = 237002508LLU;
	uint64_t t134 = 1LLU;

    t134 = (x553&((x554%x555)/x556));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x557 = UINT64_MAX;
	uint64_t x558 = 33283182004LLU;
	uint16_t x559 = UINT16_MAX;

    t135 = (x557&((x558%x559)/x560));

    if (t135 != 52624LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x562 = INT16_MIN;
	volatile int8_t x563 = INT8_MIN;
	volatile uint8_t x564 = 18U;
	static int32_t t136 = -1;

    t136 = (x561&((x562%x563)/x564));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x571 = UINT16_MAX;
	int64_t t137 = -27893857889068LL;

    t137 = (x569&((x570%x571)/x572));

    if (t137 != 1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x574 = INT32_MIN;
	int32_t x576 = INT32_MIN;
	static int32_t t138 = 145799736;

    t138 = (x573&((x574%x575)/x576));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x579 = -911LL;
	int64_t x580 = INT64_MIN;
	int64_t t139 = -7358135LL;

    t139 = (x577&((x578%x579)/x580));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x581 = 5645769U;
	int64_t x582 = -1LL;
	static int8_t x583 = INT8_MIN;
	uint16_t x584 = UINT16_MAX;
	int64_t t140 = 157LL;

    t140 = (x581&((x582%x583)/x584));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x589 = INT8_MAX;
	uint8_t x590 = UINT8_MAX;
	int8_t x591 = INT8_MAX;
	static int64_t x592 = -82670LL;
	static int64_t t141 = -13925LL;

    t141 = (x589&((x590%x591)/x592));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x594 = 40U;
	int32_t x595 = 276;
	static int8_t x596 = INT8_MIN;
	static uint32_t t142 = 6148U;

    t142 = (x593&((x594%x595)/x596));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x599 = INT32_MAX;
	int16_t x600 = 4;
	static int64_t t143 = -56051LL;

    t143 = (x597&((x598%x599)/x600));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x605 = 3502556LLU;
	static int64_t x606 = INT64_MAX;
	volatile int32_t x607 = INT32_MIN;
	uint32_t x608 = 1502715U;
	uint64_t t144 = 86212182LLU;

    t144 = (x605&((x606%x607)/x608));

    if (t144 != 404LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x609 = 3643630U;
	int32_t x610 = INT32_MIN;
	static volatile int64_t x612 = -8357013LL;
	int64_t t145 = -1217727LL;

    t145 = (x609&((x610%x611)/x612));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	int64_t x614 = INT64_MAX;
	int16_t x616 = -571;

    t146 = (x613&((x614%x615)/x616));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x617 = UINT16_MAX;
	int32_t x618 = 386;
	int8_t x619 = 9;
	int64_t x620 = -61750504608431783LL;
	static volatile int64_t t147 = 239345863LL;

    t147 = (x617&((x618%x619)/x620));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x621 = UINT64_MAX;
	int8_t x622 = INT8_MIN;
	static int32_t x623 = INT32_MAX;
	uint32_t x624 = UINT32_MAX;

    t148 = (x621&((x622%x623)/x624));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x629 = 32036565LLU;
	int32_t x630 = INT32_MAX;
	static int8_t x632 = INT8_MIN;
	volatile uint64_t t149 = 8661LLU;

    t149 = (x629&((x630%x631)/x632));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x633 = INT8_MIN;
	int8_t x634 = 60;
	uint16_t x636 = UINT16_MAX;
	int32_t t150 = 6953757;

    t150 = (x633&((x634%x635)/x636));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x637 = UINT64_MAX;
	uint32_t x639 = 7202U;
	static int16_t x640 = -43;
	uint64_t t151 = 900988126LLU;

    t151 = (x637&((x638%x639)/x640));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x641 = INT16_MAX;
	uint16_t x642 = 1U;
	int16_t x643 = -1368;
	volatile int16_t x644 = -1;
	int32_t t152 = -171232180;

    t152 = (x641&((x642%x643)/x644));

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x645 = 3699LL;
	int8_t x647 = INT8_MAX;
	static int32_t x648 = INT32_MAX;
	int64_t t153 = 8335286LL;

    t153 = (x645&((x646%x647)/x648));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x650 = INT16_MIN;
	uint8_t x651 = UINT8_MAX;
	volatile int64_t x652 = INT64_MAX;
	static volatile int64_t t154 = -15488LL;

    t154 = (x649&((x650%x651)/x652));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x653 = 12069U;
	int8_t x654 = -29;
	int8_t x655 = INT8_MAX;
	int32_t t155 = -838967;

    t155 = (x653&((x654%x655)/x656));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x657 = -1LL;
	int32_t x658 = -1;
	int8_t x659 = -6;
	int64_t t156 = 9948135999870564LL;

    t156 = (x657&((x658%x659)/x660));

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x661 = INT16_MIN;
	uint16_t x662 = UINT16_MAX;
	static uint8_t x664 = UINT8_MAX;

    t157 = (x661&((x662%x663)/x664));

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x665 = INT64_MIN;
	int8_t x666 = -1;
	volatile int64_t x667 = INT64_MIN;
	int8_t x668 = INT8_MIN;
	int64_t t158 = -20275023357LL;

    t158 = (x665&((x666%x667)/x668));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x670 = 5681U;
	static uint64_t x671 = UINT64_MAX;
	volatile uint64_t t159 = 15526771190LLU;

    t159 = (x669&((x670%x671)/x672));

    if (t159 != 130LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x673 = 7U;
	uint16_t x674 = 2U;
	int8_t x675 = 1;
	volatile int16_t x676 = INT16_MIN;
	volatile int32_t t160 = -252;

    t160 = (x673&((x674%x675)/x676));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int16_t x677 = INT16_MIN;
	volatile int16_t x678 = INT16_MIN;
	static uint16_t x679 = 3038U;
	static uint16_t x680 = UINT16_MAX;
	volatile int32_t t161 = -17638366;

    t161 = (x677&((x678%x679)/x680));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x681 = -9;
	static uint32_t x683 = UINT32_MAX;
	int64_t t162 = -20904860032199141LL;

    t162 = (x681&((x682%x683)/x684));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x686 = INT8_MAX;
	int64_t x688 = -7021349512LL;
	volatile int64_t t163 = 683LL;

    t163 = (x685&((x686%x687)/x688));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x689 = INT8_MIN;
	uint8_t x690 = UINT8_MAX;
	int32_t x691 = -1;
	int16_t x692 = INT16_MIN;
	volatile int32_t t164 = -3473637;

    t164 = (x689&((x690%x691)/x692));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x693 = 9;
	static int8_t x694 = INT8_MAX;
	int8_t x695 = -7;
	int8_t x696 = INT8_MIN;
	volatile int32_t t165 = -28894588;

    t165 = (x693&((x694%x695)/x696));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x697 = 1495038929590LL;
	int32_t x698 = -3;
	int8_t x699 = -1;
	int64_t x700 = -1LL;

    t166 = (x697&((x698%x699)/x700));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x702 = -1;
	int8_t x704 = -1;

    t167 = (x701&((x702%x703)/x704));

    if (t167 != 1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x705 = INT8_MIN;
	int8_t x706 = -1;
	int64_t x707 = INT64_MIN;
	int8_t x708 = INT8_MIN;
	int64_t t168 = -146371799LL;

    t168 = (x705&((x706%x707)/x708));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x709 = -1;
	volatile uint16_t x710 = UINT16_MAX;
	uint16_t x711 = UINT16_MAX;
	int64_t x712 = -60047058177267963LL;
	static volatile int64_t t169 = 16942379027921704LL;

    t169 = (x709&((x710%x711)/x712));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x713 = INT32_MIN;
	int16_t x715 = INT16_MAX;
	int8_t x716 = 3;
	uint32_t t170 = 2224U;

    t170 = (x713&((x714%x715)/x716));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x717 = UINT32_MAX;
	uint16_t x718 = UINT16_MAX;
	static int64_t x720 = INT64_MAX;
	int64_t t171 = 1155745122780LL;

    t171 = (x717&((x718%x719)/x720));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x722 = -1;
	uint32_t x723 = 226U;
	int16_t x724 = -1;

    t172 = (x721&((x722%x723)/x724));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x726 = 52068302466821961LLU;
	static volatile int16_t x727 = INT16_MIN;
	int16_t x728 = INT16_MIN;

    t173 = (x725&((x726%x727)/x728));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x729 = 1295U;
	static volatile uint8_t x730 = 24U;
	int16_t x732 = 245;

    t174 = (x729&((x730%x731)/x732));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x737 = 2045075;
	int32_t x739 = INT32_MIN;
	volatile int32_t x740 = -167183;
	uint64_t t175 = 69285641219428LLU;

    t175 = (x737&((x738%x739)/x740));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x742 = -1;
	uint16_t x743 = 90U;
	static volatile int32_t x744 = INT32_MIN;
	volatile int32_t t176 = 144;

    t176 = (x741&((x742%x743)/x744));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x745 = 176497148;
	uint64_t x746 = 164478475LLU;
	static uint8_t x748 = 45U;
	uint64_t t177 = 23742457535LLU;

    t177 = (x745&((x746%x747)/x748));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint64_t x749 = 792661661918444596LLU;
	volatile uint8_t x750 = 10U;
	int8_t x751 = -1;
	int64_t x752 = INT64_MIN;
	volatile uint64_t t178 = 1317068LLU;

    t178 = (x749&((x750%x751)/x752));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x753 = 488U;
	int8_t x754 = INT8_MIN;
	volatile uint16_t x756 = 815U;

    t179 = (x753&((x754%x755)/x756));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x757 = INT16_MIN;
	volatile uint16_t x758 = UINT16_MAX;
	int32_t x759 = INT32_MAX;
	int8_t x760 = -60;

    t180 = (x757&((x758%x759)/x760));

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x761 = INT64_MIN;
	int64_t x762 = -1LL;
	volatile int64_t x764 = INT64_MAX;

    t181 = (x761&((x762%x763)/x764));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x765 = 10U;
	uint16_t x766 = UINT16_MAX;
	uint32_t x768 = UINT32_MAX;
	volatile int64_t t182 = -14076680666444778LL;

    t182 = (x765&((x766%x767)/x768));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x769 = INT16_MIN;
	volatile uint16_t x770 = 13785U;
	static uint64_t x771 = 7319885378937077657LLU;
	int8_t x772 = INT8_MIN;

    t183 = (x769&((x770%x771)/x772));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x773 = 4U;
	uint32_t x774 = 438926412U;
	static volatile int64_t x775 = 23946439445LL;
	volatile int64_t x776 = INT64_MIN;
	int64_t t184 = -162LL;

    t184 = (x773&((x774%x775)/x776));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x777 = INT32_MAX;
	static int16_t x778 = INT16_MIN;
	uint16_t x779 = UINT16_MAX;
	int8_t x780 = -1;

    t185 = (x777&((x778%x779)/x780));

    if (t185 != 32768) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x781 = UINT32_MAX;
	uint64_t x782 = 2841LLU;
	int16_t x783 = -1;
	volatile uint64_t t186 = 1211829005LLU;

    t186 = (x781&((x782%x783)/x784));

    if (t186 != 11LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x785 = 3;
	static uint8_t x786 = 4U;
	static int16_t x787 = -1;
	static int16_t x788 = INT16_MIN;
	static volatile int32_t t187 = 35617;

    t187 = (x785&((x786%x787)/x788));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x789 = 227;
	uint32_t x790 = 36795U;
	int8_t x791 = INT8_MAX;
	static int16_t x792 = INT16_MIN;
	uint32_t t188 = 19542U;

    t188 = (x789&((x790%x791)/x792));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x794 = UINT32_MAX;
	static int8_t x795 = -7;
	int8_t x796 = INT8_MIN;
	uint32_t t189 = 6U;

    t189 = (x793&((x794%x795)/x796));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x797 = 14;
	static volatile int64_t x798 = INT64_MIN;
	volatile int16_t x799 = INT16_MIN;
	int32_t x800 = -1;
	volatile int64_t t190 = 2313000329702LL;

    t190 = (x797&((x798%x799)/x800));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x801 = UINT32_MAX;
	uint8_t x802 = 6U;
	volatile int8_t x803 = -1;
	uint64_t x804 = 478411LLU;

    t191 = (x801&((x802%x803)/x804));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x805 = 150U;
	int32_t x808 = -1;
	volatile int64_t t192 = 53758434LL;

    t192 = (x805&((x806%x807)/x808));

    if (t192 != 144LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x809 = 3624395LLU;
	int32_t x810 = -1;
	volatile int16_t x811 = INT16_MAX;
	uint64_t x812 = UINT64_MAX;
	static volatile uint64_t t193 = 2LLU;

    t193 = (x809&((x810%x811)/x812));

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x813 = UINT8_MAX;
	volatile int64_t x814 = 219421133LL;
	int64_t x815 = INT64_MAX;
	int64_t x816 = INT64_MIN;
	static volatile int64_t t194 = -261089LL;

    t194 = (x813&((x814%x815)/x816));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x817 = INT64_MIN;
	volatile int32_t x818 = 3217;
	uint64_t x819 = 8077225013153483382LLU;
	int32_t x820 = -10555;
	static volatile uint64_t t195 = 27286LLU;

    t195 = (x817&((x818%x819)/x820));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x821 = 50448LLU;
	int64_t x822 = INT64_MIN;
	uint32_t x823 = 103409000U;
	static int16_t x824 = -633;
	static volatile uint64_t t196 = 4263LLU;

    t196 = (x821&((x822%x823)/x824));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x829 = UINT64_MAX;
	uint64_t x830 = 15044290964782LLU;
	volatile int32_t x831 = -1;
	int64_t x832 = INT64_MAX;
	static volatile uint64_t t197 = 25928714348402LLU;

    t197 = (x829&((x830%x831)/x832));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x833 = UINT32_MAX;
	volatile int8_t x834 = -1;
	volatile uint64_t x835 = UINT64_MAX;
	volatile int8_t x836 = -1;
	uint64_t t198 = 183054787LLU;

    t198 = (x833&((x834%x835)/x836));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int64_t x839 = INT64_MIN;
	static int8_t x840 = 1;
	uint64_t t199 = 69093637897112LLU;

    t199 = (x837&((x838%x839)/x840));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

