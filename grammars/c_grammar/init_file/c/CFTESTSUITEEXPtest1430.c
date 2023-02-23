
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

static volatile int32_t x3 = -1;
int32_t x4 = -25998;
volatile int64_t t0 = -223782492LL;
int64_t x10 = INT64_MIN;
uint32_t x15 = 106U;
int16_t x17 = -1;
uint8_t x23 = 67U;
int64_t x26 = INT64_MAX;
volatile int32_t x39 = INT32_MIN;
volatile int64_t x43 = INT64_MAX;
uint64_t x49 = 1788567862458LLU;
int32_t t14 = -3264;
static int64_t x69 = -1LL;
int8_t x70 = INT8_MAX;
uint16_t x84 = UINT16_MAX;
volatile int8_t x88 = INT8_MIN;
volatile int32_t t20 = 1;
volatile int16_t x91 = INT16_MAX;
int32_t x92 = 898424;
uint64_t x94 = 904425506581972LLU;
volatile int32_t t22 = 10981;
static volatile uint64_t x97 = UINT64_MAX;
int16_t x100 = -5;
static int8_t x101 = INT8_MIN;
static int16_t x106 = INT16_MIN;
int16_t x107 = -43;
uint32_t x114 = UINT32_MAX;
int32_t x119 = INT32_MIN;
int16_t x120 = -4;
int8_t x122 = INT8_MIN;
uint8_t x124 = 46U;
int16_t x132 = INT16_MIN;
volatile uint8_t x136 = 22U;
volatile int8_t x137 = INT8_MIN;
int32_t x148 = INT32_MAX;
volatile int32_t t35 = -3674968;
uint16_t x151 = 393U;
uint8_t x171 = 1U;
static int32_t x174 = 983667;
int32_t x179 = 2895487;
static uint8_t x182 = 72U;
static int64_t x184 = -1LL;
static int32_t t44 = -1579537;
int16_t x192 = INT16_MIN;
volatile int64_t t48 = 3577775788471LL;
uint32_t x206 = 1161548U;
int64_t x216 = INT64_MAX;
int8_t x217 = -1;
int16_t x222 = INT16_MIN;
int64_t x223 = -1LL;
uint16_t x224 = 4938U;
volatile int8_t x228 = INT8_MIN;
volatile int32_t x232 = INT32_MIN;
volatile int32_t t55 = 149243637;
volatile int32_t x234 = INT32_MAX;
uint64_t x238 = 23350235536775418LLU;
int64_t x248 = 125LL;
uint8_t x250 = UINT8_MAX;
volatile int32_t t60 = INT32_MIN;
static uint64_t x255 = 3009305431932691783LLU;
volatile int8_t x258 = INT8_MIN;
int64_t x260 = -1066199407865681LL;
volatile uint16_t x264 = 518U;
int64_t x268 = -1LL;
int32_t x275 = -488723;
uint64_t x277 = UINT64_MAX;
static int32_t x279 = -1893;
volatile uint64_t t67 = UINT64_MAX;
uint64_t x281 = 64452582132LLU;
static int8_t x286 = INT8_MAX;
volatile uint32_t x293 = 240U;
int64_t x297 = -1LL;
volatile uint32_t x309 = UINT32_MAX;
int8_t x310 = -1;
int8_t x320 = INT8_MAX;
int64_t x324 = INT64_MIN;
int64_t x332 = INT64_MIN;
uint32_t x335 = 27714U;
int32_t x346 = 7604;
int64_t x348 = INT64_MAX;
int16_t x355 = -1;
int8_t x357 = -32;
int32_t t87 = -1071133946;
static uint16_t x367 = UINT16_MAX;
int32_t x368 = INT32_MIN;
uint32_t x370 = UINT32_MAX;
int64_t t90 = -2526505687352919LL;
int16_t x376 = INT16_MIN;
volatile int32_t x378 = 116264;
volatile int8_t x380 = -9;
int32_t t98 = -2351;
volatile uint8_t x420 = 25U;
volatile int32_t t101 = 55526426;
int32_t x427 = 10;
int16_t x429 = -35;
volatile int8_t x442 = -2;
volatile int16_t x443 = INT16_MIN;
int64_t x447 = INT64_MAX;
uint32_t x452 = 2792U;
uint64_t x454 = 1128521253892LLU;
int16_t x455 = INT16_MIN;
int8_t x456 = INT8_MAX;
static volatile int64_t x457 = INT64_MIN;
volatile uint8_t x460 = 14U;
volatile uint16_t x462 = 2U;
volatile int32_t t112 = 6855126;
uint16_t x469 = 5722U;
int8_t x472 = -1;
uint64_t x473 = 962LLU;
static int64_t x480 = 1LL;
int32_t x482 = -15;
int8_t x485 = INT8_MIN;
static volatile int32_t t118 = -1;
int64_t x494 = INT64_MAX;
int64_t t123 = -6LL;
int8_t x509 = INT8_MIN;
int8_t x510 = -1;
uint32_t x514 = 117410U;
int64_t x515 = INT64_MIN;
int64_t t125 = -12532915522912962LL;
uint64_t x518 = 860548298086616LLU;
int8_t x519 = -1;
int8_t x521 = INT8_MIN;
volatile int64_t x532 = INT64_MIN;
volatile int64_t x533 = INT64_MIN;
int64_t t130 = INT64_MIN;
uint32_t x537 = UINT32_MAX;
int8_t x539 = INT8_MIN;
static volatile uint32_t t131 = UINT32_MAX;
volatile uint64_t t132 = UINT64_MAX;
volatile int32_t t133 = 179492;
int64_t x550 = INT64_MIN;
uint64_t x562 = 35346058105LLU;
int32_t x563 = -1;
int32_t t137 = INT32_MIN;
int32_t x567 = -1;
int8_t x575 = -59;
volatile uint64_t t140 = 57181100914251LLU;
int32_t x581 = -1;
int16_t x583 = -1;
int64_t t143 = -134661472163LL;
int8_t x592 = INT8_MAX;
int64_t t145 = -195526392613488264LL;
int16_t x598 = -1;
static int64_t x601 = INT64_MIN;
uint16_t x605 = 2U;
static int16_t x606 = -1;
int8_t x608 = INT8_MIN;
volatile uint32_t t152 = 1436317U;
uint32_t x625 = UINT32_MAX;
static volatile uint32_t t155 = UINT32_MAX;
int64_t x637 = 3257166LL;
static volatile int8_t x638 = -11;
volatile uint16_t x643 = 2U;
int64_t t157 = INT64_MIN;
uint64_t x645 = 77561534212359681LLU;
int32_t x651 = -1;
static int64_t x654 = -8876741912709342LL;
int64_t t161 = 13755468LL;
volatile int32_t x668 = INT32_MIN;
volatile int16_t x672 = INT16_MIN;
int32_t t164 = 1269432;
int32_t x677 = -1;
static uint64_t x678 = UINT64_MAX;
int8_t x680 = INT8_MAX;
static int64_t x685 = -533859787264706025LL;
static uint8_t x687 = 28U;
int16_t x692 = -1;
static int32_t x696 = INT32_MIN;
int32_t x707 = INT32_MIN;
uint8_t x718 = UINT8_MAX;
int16_t x721 = -1;
int8_t x725 = INT8_MIN;
int32_t x731 = INT32_MIN;
static int64_t x740 = 6039LL;
int16_t x745 = INT16_MIN;
volatile int8_t x749 = INT8_MIN;
int16_t x752 = INT16_MIN;
int16_t x757 = INT16_MAX;
int8_t x760 = -1;
int32_t x768 = -24960482;
int64_t x772 = INT64_MIN;
static uint32_t x775 = 2686U;
uint32_t x777 = 17687U;
static uint32_t x780 = 7184800U;
int8_t x786 = 57;
volatile uint8_t x787 = UINT8_MAX;
volatile int32_t t194 = 17;
int32_t t195 = 20;
int64_t x797 = INT64_MAX;
volatile int16_t x801 = 1;
int32_t x805 = 26938003;
int32_t x806 = -1;
int64_t x812 = 394291446079LL;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	uint64_t x2 = UINT64_MAX;

    t0 = (x1-((x2==x3)%x4));

    if (t0 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	volatile uint32_t x6 = 1U;
	static uint64_t x7 = 161941LLU;
	volatile int8_t x8 = INT8_MIN;
	volatile int64_t t1 = -423090195198LL;

    t1 = (x5-((x6==x7)%x8));

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	static int8_t x11 = INT8_MIN;
	int32_t x12 = INT32_MAX;
	volatile int64_t t2 = INT64_MIN;

    t2 = (x9-((x10==x11)%x12));

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MIN;
	uint64_t x14 = 20LLU;
	static uint8_t x16 = UINT8_MAX;
	int64_t t3 = INT64_MIN;

    t3 = (x13-((x14==x15)%x16));

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = 29;
	int16_t x19 = -1;
	static uint8_t x20 = 7U;
	int32_t t4 = 18474691;

    t4 = (x17-((x18==x19)%x20));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = INT32_MIN;
	int64_t x22 = INT64_MAX;
	static int16_t x24 = INT16_MIN;
	int32_t t5 = INT32_MIN;

    t5 = (x21-((x22==x23)%x24));

    if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -143170125471436359LL;
	volatile uint32_t x27 = 1087612U;
	static int16_t x28 = -1;
	static int64_t t6 = -928208483245476LL;

    t6 = (x25-((x26==x27)%x28));

    if (t6 != -143170125471436359LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x29 = 11213903313005LLU;
	uint64_t x30 = 185053463596LLU;
	int16_t x31 = 7;
	static uint64_t x32 = 520079678210217LLU;
	volatile uint64_t t7 = 791606134026658LLU;

    t7 = (x29-((x30==x31)%x32));

    if (t7 != 11213903313005LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = UINT64_MAX;
	int16_t x34 = 14;
	uint8_t x35 = 4U;
	uint32_t x36 = 69610U;
	uint64_t t8 = UINT64_MAX;

    t8 = (x33-((x34==x35)%x36));

    if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -11;
	int8_t x38 = 41;
	uint16_t x40 = 624U;
	static int32_t t9 = -1;

    t9 = (x37-((x38==x39)%x40));

    if (t9 != -11) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	static uint16_t x42 = UINT16_MAX;
	int16_t x44 = INT16_MIN;
	volatile int64_t t10 = INT64_MIN;

    t10 = (x41-((x42==x43)%x44));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x50 = UINT16_MAX;
	volatile uint64_t x51 = 3557417LLU;
	static uint64_t x52 = 13724LLU;
	volatile uint64_t t11 = 175334623082568502LLU;

    t11 = (x49-((x50==x51)%x52));

    if (t11 != 1788567862458LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x53 = -16;
	int16_t x54 = -1;
	volatile int8_t x55 = -1;
	volatile int64_t x56 = -1LL;
	volatile int64_t t12 = 69684516671303LL;

    t12 = (x53-((x54==x55)%x56));

    if (t12 != -16LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MIN;
	volatile int32_t x58 = INT32_MIN;
	uint16_t x59 = 2625U;
	int16_t x60 = -1;
	volatile int32_t t13 = INT32_MIN;

    t13 = (x57-((x58==x59)%x60));

    if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = UINT8_MAX;
	int32_t x62 = INT32_MAX;
	static volatile int8_t x63 = INT8_MAX;
	int8_t x64 = -1;

    t14 = (x61-((x62==x63)%x64));

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x65 = INT8_MAX;
	int8_t x66 = INT8_MAX;
	volatile int64_t x67 = -1LL;
	volatile int32_t x68 = -175542454;
	volatile int32_t t15 = 20894;

    t15 = (x65-((x66==x67)%x68));

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x71 = -2028133804050LL;
	volatile int8_t x72 = -1;
	int64_t t16 = -11LL;

    t16 = (x69-((x70==x71)%x72));

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = -1;
	uint8_t x74 = 1U;
	static int64_t x75 = INT64_MIN;
	int16_t x76 = -10;
	volatile int32_t t17 = -1497;

    t17 = (x73-((x74==x75)%x76));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x77 = UINT64_MAX;
	volatile int16_t x78 = -13515;
	int8_t x79 = -48;
	uint32_t x80 = 1781933U;
	static uint64_t t18 = UINT64_MAX;

    t18 = (x77-((x78==x79)%x80));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = -1;
	int16_t x82 = -1;
	volatile int32_t x83 = INT32_MAX;
	int32_t t19 = 106875636;

    t19 = (x81-((x82==x83)%x84));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = -1;
	static int8_t x86 = 1;
	volatile int64_t x87 = INT64_MIN;

    t20 = (x85-((x86==x87)%x88));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x89 = INT16_MAX;
	uint64_t x90 = 10393067233LLU;
	int32_t t21 = 1;

    t21 = (x89-((x90==x91)%x92));

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x93 = -53;
	static volatile uint8_t x95 = 11U;
	int32_t x96 = -1;

    t22 = (x93-((x94==x95)%x96));

    if (t22 != -53) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x98 = -1LL;
	int16_t x99 = INT16_MAX;
	volatile uint64_t t23 = UINT64_MAX;

    t23 = (x97-((x98==x99)%x100));

    if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x102 = INT16_MIN;
	uint16_t x103 = 20447U;
	int16_t x104 = 7;
	volatile int32_t t24 = -3664;

    t24 = (x101-((x102==x103)%x104));

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = 6389754;
	int8_t x108 = 1;
	int32_t t25 = 464;

    t25 = (x105-((x106==x107)%x108));

    if (t25 != 6389754) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = INT64_MIN;
	int32_t x110 = -2;
	int8_t x111 = -1;
	int64_t x112 = INT64_MIN;
	int64_t t26 = INT64_MIN;

    t26 = (x109-((x110==x111)%x112));

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = -1;
	volatile int64_t x115 = -1LL;
	int32_t x116 = INT32_MIN;
	int32_t t27 = 516765129;

    t27 = (x113-((x114==x115)%x116));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = 0LL;
	int16_t x118 = -1;
	volatile int64_t t28 = 1LL;

    t28 = (x117-((x118==x119)%x120));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = INT16_MAX;
	static volatile int32_t x123 = -1;
	volatile int32_t t29 = 69624;

    t29 = (x121-((x122==x123)%x124));

    if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x125 = 33U;
	int64_t x126 = INT64_MAX;
	volatile int8_t x127 = INT8_MAX;
	volatile int8_t x128 = -1;
	volatile uint32_t t30 = 49U;

    t30 = (x125-((x126==x127)%x128));

    if (t30 != 33U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x129 = 0U;
	uint32_t x130 = 60U;
	int32_t x131 = INT32_MAX;
	static volatile int32_t t31 = -169;

    t31 = (x129-((x130==x131)%x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x133 = -95633426738LL;
	int16_t x134 = INT16_MIN;
	int64_t x135 = -201600LL;
	volatile int64_t t32 = -20171690654586672LL;

    t32 = (x133-((x134==x135)%x136));

    if (t32 != -95633426738LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x138 = INT16_MAX;
	volatile int8_t x139 = -46;
	uint32_t x140 = UINT32_MAX;
	uint32_t t33 = 6641U;

    t33 = (x137-((x138==x139)%x140));

    if (t33 != 4294967168U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x141 = UINT32_MAX;
	volatile uint16_t x142 = UINT16_MAX;
	volatile uint8_t x143 = UINT8_MAX;
	uint32_t x144 = UINT32_MAX;
	static uint32_t t34 = UINT32_MAX;

    t34 = (x141-((x142==x143)%x144));

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x145 = 11U;
	uint64_t x146 = 3098404258352LLU;
	uint64_t x147 = 40206161800LLU;

    t35 = (x145-((x146==x147)%x148));

    if (t35 != 11) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x149 = UINT8_MAX;
	volatile int32_t x150 = -87;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t36 = -110;

    t36 = (x149-((x150==x151)%x152));

    if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x157 = INT16_MIN;
	int64_t x158 = INT64_MIN;
	int8_t x159 = 31;
	int64_t x160 = -4286157328278931653LL;
	static int64_t t37 = -40202268437785LL;

    t37 = (x157-((x158==x159)%x160));

    if (t37 != -32768LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x161 = UINT64_MAX;
	int16_t x162 = -6;
	int16_t x163 = INT16_MIN;
	int32_t x164 = INT32_MIN;
	static uint64_t t38 = UINT64_MAX;

    t38 = (x161-((x162==x163)%x164));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x165 = INT32_MIN;
	int8_t x166 = -21;
	volatile uint8_t x167 = 4U;
	int16_t x168 = INT16_MAX;
	volatile int32_t t39 = INT32_MIN;

    t39 = (x165-((x166==x167)%x168));

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x169 = 8830385U;
	volatile int16_t x170 = -1;
	volatile int8_t x172 = -1;
	volatile uint32_t t40 = 134042U;

    t40 = (x169-((x170==x171)%x172));

    if (t40 != 8830385U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = -1;
	uint16_t x175 = 118U;
	int32_t x176 = -55800235;
	int32_t t41 = 1;

    t41 = (x173-((x174==x175)%x176));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x177 = 16U;
	volatile int32_t x178 = INT32_MIN;
	static uint16_t x180 = 2747U;
	int32_t t42 = -8375411;

    t42 = (x177-((x178==x179)%x180));

    if (t42 != 16) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x181 = 38754697698973898LLU;
	int64_t x183 = 25930525LL;
	static uint64_t t43 = 36447LLU;

    t43 = (x181-((x182==x183)%x184));

    if (t43 != 38754697698973898LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = INT8_MIN;
	int32_t x186 = 5130258;
	int16_t x187 = INT16_MIN;
	int8_t x188 = INT8_MIN;

    t44 = (x185-((x186==x187)%x188));

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x189 = UINT8_MAX;
	int8_t x190 = -28;
	int16_t x191 = -1;
	volatile int32_t t45 = 9587;

    t45 = (x189-((x190==x191)%x192));

    if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x193 = -59580;
	uint64_t x194 = 6LLU;
	static volatile int64_t x195 = INT64_MIN;
	volatile int16_t x196 = -1;
	int32_t t46 = -77640;

    t46 = (x193-((x194==x195)%x196));

    if (t46 != -59580) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x197 = 0U;
	int32_t x198 = INT32_MIN;
	volatile uint32_t x199 = 21U;
	int16_t x200 = -102;
	int32_t t47 = 28717;

    t47 = (x197-((x198==x199)%x200));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = 21747770LL;
	int16_t x202 = INT16_MIN;
	int16_t x203 = -1;
	int64_t x204 = 30840016915495668LL;

    t48 = (x201-((x202==x203)%x204));

    if (t48 != 21747770LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x205 = INT16_MIN;
	int8_t x207 = INT8_MAX;
	uint64_t x208 = UINT64_MAX;
	uint64_t t49 = 18815733LLU;

    t49 = (x205-((x206==x207)%x208));

    if (t49 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x209 = -1;
	int32_t x210 = INT32_MIN;
	uint32_t x211 = 154120U;
	volatile int16_t x212 = INT16_MAX;
	static int32_t t50 = 103959;

    t50 = (x209-((x210==x211)%x212));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = -3060877LL;
	int16_t x214 = 0;
	static int16_t x215 = -2;
	int64_t t51 = -424646751313018LL;

    t51 = (x213-((x214==x215)%x216));

    if (t51 != -3060877LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x218 = -312221639327LL;
	volatile int64_t x219 = -31616931722LL;
	uint64_t x220 = 17LLU;
	uint64_t t52 = UINT64_MAX;

    t52 = (x217-((x218==x219)%x220));

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x221 = INT32_MAX;
	static volatile int32_t t53 = INT32_MAX;

    t53 = (x221-((x222==x223)%x224));

    if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x225 = 1433778242293627872LLU;
	volatile uint8_t x226 = UINT8_MAX;
	int64_t x227 = -1LL;
	uint64_t t54 = 1LLU;

    t54 = (x225-((x226==x227)%x228));

    if (t54 != 1433778242293627872LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x229 = INT16_MAX;
	int64_t x230 = INT64_MIN;
	int16_t x231 = -5;

    t55 = (x229-((x230==x231)%x232));

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = INT8_MIN;
	int8_t x235 = 50;
	static uint32_t x236 = 1U;
	static volatile uint32_t t56 = 198U;

    t56 = (x233-((x234==x235)%x236));

    if (t56 != 4294967168U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x237 = INT32_MIN;
	uint32_t x239 = 917U;
	static int16_t x240 = INT16_MIN;
	static volatile int32_t t57 = INT32_MIN;

    t57 = (x237-((x238==x239)%x240));

    if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x241 = 399LLU;
	static uint64_t x242 = 100049LLU;
	static volatile int64_t x243 = INT64_MAX;
	int64_t x244 = 13548642527885LL;
	static uint64_t t58 = 1605493926LLU;

    t58 = (x241-((x242==x243)%x244));

    if (t58 != 399LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x245 = 20;
	int16_t x246 = -4;
	uint16_t x247 = 670U;
	int64_t t59 = -15704035611944664LL;

    t59 = (x245-((x246==x247)%x248));

    if (t59 != 20LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x249 = INT32_MIN;
	int32_t x251 = INT32_MIN;
	int16_t x252 = 3;

    t60 = (x249-((x250==x251)%x252));

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x253 = INT64_MAX;
	int32_t x254 = INT32_MIN;
	static uint16_t x256 = UINT16_MAX;
	volatile int64_t t61 = INT64_MAX;

    t61 = (x253-((x254==x255)%x256));

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x257 = INT32_MIN;
	int16_t x259 = INT16_MIN;
	volatile int64_t t62 = 96967LL;

    t62 = (x257-((x258==x259)%x260));

    if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x261 = 3054478LL;
	int64_t x262 = INT64_MIN;
	uint16_t x263 = UINT16_MAX;
	volatile int64_t t63 = -70933LL;

    t63 = (x261-((x262==x263)%x264));

    if (t63 != 3054478LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = -13741;
	int32_t x266 = -1635687;
	int16_t x267 = -61;
	static volatile int64_t t64 = -938176220850LL;

    t64 = (x265-((x266==x267)%x268));

    if (t64 != -13741LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = -1;
	static uint64_t x270 = 333653987940955LLU;
	int16_t x271 = 6400;
	int8_t x272 = -1;
	int32_t t65 = -37739832;

    t65 = (x269-((x270==x271)%x272));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x273 = INT32_MAX;
	static volatile int16_t x274 = -1;
	int64_t x276 = INT64_MIN;
	volatile int64_t t66 = -397279799431353LL;

    t66 = (x273-((x274==x275)%x276));

    if (t66 != 2147483647LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x278 = -1;
	uint32_t x280 = 33U;

    t67 = (x277-((x278==x279)%x280));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x282 = -2;
	static int8_t x283 = INT8_MAX;
	static uint64_t x284 = 200374834642870LLU;
	uint64_t t68 = 72LLU;

    t68 = (x281-((x282==x283)%x284));

    if (t68 != 64452582132LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x285 = 4775440979650568LL;
	uint16_t x287 = UINT16_MAX;
	int8_t x288 = -3;
	volatile int64_t t69 = 14LL;

    t69 = (x285-((x286==x287)%x288));

    if (t69 != 4775440979650568LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint8_t x289 = 15U;
	int64_t x290 = -3LL;
	static volatile uint16_t x291 = 673U;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t70 = -7;

    t70 = (x289-((x290==x291)%x292));

    if (t70 != 15) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x294 = INT16_MAX;
	uint16_t x295 = UINT16_MAX;
	int8_t x296 = -59;
	static uint32_t t71 = 64276U;

    t71 = (x293-((x294==x295)%x296));

    if (t71 != 240U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x298 = INT64_MIN;
	volatile int16_t x299 = -1;
	int16_t x300 = 8998;
	volatile int64_t t72 = 1LL;

    t72 = (x297-((x298==x299)%x300));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x301 = 245U;
	int64_t x302 = INT64_MIN;
	static uint32_t x303 = 416993U;
	int32_t x304 = -1;
	int32_t t73 = 5;

    t73 = (x301-((x302==x303)%x304));

    if (t73 != 245) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x305 = INT64_MAX;
	int16_t x306 = INT16_MAX;
	volatile int32_t x307 = 14081856;
	int64_t x308 = -1LL;
	int64_t t74 = INT64_MAX;

    t74 = (x305-((x306==x307)%x308));

    if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x311 = 1U;
	int8_t x312 = INT8_MIN;
	static uint32_t t75 = UINT32_MAX;

    t75 = (x309-((x310==x311)%x312));

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x313 = INT64_MAX;
	int16_t x314 = -1;
	uint8_t x315 = 38U;
	static int8_t x316 = -1;
	static volatile int64_t t76 = INT64_MAX;

    t76 = (x313-((x314==x315)%x316));

    if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x317 = -1;
	int64_t x318 = INT64_MAX;
	int64_t x319 = INT64_MIN;
	static int32_t t77 = 269380;

    t77 = (x317-((x318==x319)%x320));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x321 = UINT16_MAX;
	volatile int8_t x322 = -54;
	static int8_t x323 = INT8_MAX;
	int64_t t78 = -4056731LL;

    t78 = (x321-((x322==x323)%x324));

    if (t78 != 65535LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x325 = UINT16_MAX;
	volatile int64_t x326 = INT64_MIN;
	volatile int16_t x327 = -1;
	uint8_t x328 = 33U;
	volatile int32_t t79 = 2489;

    t79 = (x325-((x326==x327)%x328));

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x329 = -50;
	static int16_t x330 = 1;
	volatile uint8_t x331 = 32U;
	static int64_t t80 = 615490140LL;

    t80 = (x329-((x330==x331)%x332));

    if (t80 != -50LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x333 = 29;
	int16_t x334 = -1;
	static int8_t x336 = INT8_MAX;
	volatile int32_t t81 = 1;

    t81 = (x333-((x334==x335)%x336));

    if (t81 != 29) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x337 = INT8_MIN;
	int64_t x338 = 803355687102390661LL;
	int16_t x339 = INT16_MIN;
	int8_t x340 = -1;
	int32_t t82 = 2365665;

    t82 = (x337-((x338==x339)%x340));

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MIN;
	volatile int16_t x343 = INT16_MIN;
	static int64_t x344 = INT64_MAX;
	static volatile int64_t t83 = INT64_MIN;

    t83 = (x341-((x342==x343)%x344));

    if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x345 = INT16_MIN;
	static int64_t x347 = INT64_MIN;
	int64_t t84 = 27707LL;

    t84 = (x345-((x346==x347)%x348));

    if (t84 != -32768LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x349 = INT32_MIN;
	int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MAX;
	uint16_t x352 = 196U;
	static int32_t t85 = INT32_MIN;

    t85 = (x349-((x350==x351)%x352));

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x353 = 15042LL;
	uint64_t x354 = 303581194193456290LLU;
	int32_t x356 = INT32_MIN;
	volatile int64_t t86 = 185678625997164LL;

    t86 = (x353-((x354==x355)%x356));

    if (t86 != 15042LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x358 = 15U;
	uint64_t x359 = UINT64_MAX;
	uint16_t x360 = UINT16_MAX;

    t87 = (x357-((x358==x359)%x360));

    if (t87 != -32) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x361 = -1LL;
	uint8_t x362 = UINT8_MAX;
	uint64_t x363 = UINT64_MAX;
	int32_t x364 = INT32_MIN;
	static volatile int64_t t88 = -69743663545LL;

    t88 = (x361-((x362==x363)%x364));

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x365 = 53;
	volatile int16_t x366 = 23;
	volatile int32_t t89 = 31;

    t89 = (x365-((x366==x367)%x368));

    if (t89 != 53) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x369 = INT32_MAX;
	uint8_t x371 = UINT8_MAX;
	volatile int64_t x372 = INT64_MAX;

    t90 = (x369-((x370==x371)%x372));

    if (t90 != 2147483647LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x373 = INT32_MIN;
	int64_t x374 = 18805956LL;
	volatile int64_t x375 = INT64_MIN;
	volatile int32_t t91 = INT32_MIN;

    t91 = (x373-((x374==x375)%x376));

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x377 = 103U;
	static uint16_t x379 = 423U;
	volatile int32_t t92 = -368289091;

    t92 = (x377-((x378==x379)%x380));

    if (t92 != 103) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x385 = 373524U;
	int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MIN;
	static int32_t x388 = INT32_MAX;
	static volatile uint32_t t93 = 7120415U;

    t93 = (x385-((x386==x387)%x388));

    if (t93 != 373524U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x389 = -1;
	uint16_t x390 = 3U;
	int32_t x391 = INT32_MIN;
	volatile uint16_t x392 = 15544U;
	static int32_t t94 = -423173;

    t94 = (x389-((x390==x391)%x392));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x393 = 6910811LLU;
	volatile uint32_t x394 = UINT32_MAX;
	uint64_t x395 = 765856667984209560LLU;
	uint64_t x396 = UINT64_MAX;
	uint64_t t95 = 1LLU;

    t95 = (x393-((x394==x395)%x396));

    if (t95 != 6910811LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x397 = -1;
	static uint64_t x398 = UINT64_MAX;
	static int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MAX;
	static volatile int64_t t96 = -2970328917455183LL;

    t96 = (x397-((x398==x399)%x400));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x401 = 67101457836LLU;
	int64_t x402 = INT64_MAX;
	volatile int8_t x403 = INT8_MAX;
	int32_t x404 = -1;
	volatile uint64_t t97 = 108264LLU;

    t97 = (x401-((x402==x403)%x404));

    if (t97 != 67101457836LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x405 = 0U;
	int8_t x406 = 16;
	int64_t x407 = -947334704656LL;
	int16_t x408 = INT16_MIN;

    t98 = (x405-((x406==x407)%x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x409 = -1;
	int32_t x410 = INT32_MIN;
	static int64_t x411 = INT64_MIN;
	uint8_t x412 = 27U;
	volatile int32_t t99 = 842141;

    t99 = (x409-((x410==x411)%x412));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x413 = INT8_MIN;
	int64_t x414 = INT64_MIN;
	static volatile uint64_t x415 = UINT64_MAX;
	volatile int32_t x416 = INT32_MAX;
	volatile int32_t t100 = 25216912;

    t100 = (x413-((x414==x415)%x416));

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x417 = -1;
	uint8_t x418 = 109U;
	volatile uint32_t x419 = UINT32_MAX;

    t101 = (x417-((x418==x419)%x420));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x421 = 171856211;
	int64_t x422 = 54604301529024LL;
	static int8_t x423 = INT8_MIN;
	volatile uint64_t x424 = UINT64_MAX;
	volatile uint64_t t102 = 2070566241424LLU;

    t102 = (x421-((x422==x423)%x424));

    if (t102 != 171856211LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x425 = 1415104U;
	int32_t x426 = -1;
	static int32_t x428 = -1;
	uint32_t t103 = 10669U;

    t103 = (x425-((x426==x427)%x428));

    if (t103 != 1415104U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x430 = 54498U;
	int16_t x431 = INT16_MAX;
	int32_t x432 = -38416;
	int32_t t104 = -67625;

    t104 = (x429-((x430==x431)%x432));

    if (t104 != -35) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x433 = -1712;
	uint8_t x434 = 14U;
	int64_t x435 = 1175227872187LL;
	uint8_t x436 = 2U;
	int32_t t105 = 13;

    t105 = (x433-((x434==x435)%x436));

    if (t105 != -1712) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x437 = INT16_MIN;
	int64_t x438 = INT64_MIN;
	int8_t x439 = -1;
	uint32_t x440 = UINT32_MAX;
	volatile uint32_t t106 = 6U;

    t106 = (x437-((x438==x439)%x440));

    if (t106 != 4294934528U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x441 = INT8_MIN;
	static int16_t x444 = INT16_MAX;
	volatile int32_t t107 = 1;

    t107 = (x441-((x442==x443)%x444));

    if (t107 != -128) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x445 = -1;
	static volatile int32_t x446 = -4186;
	int32_t x448 = INT32_MAX;
	int32_t t108 = -49311209;

    t108 = (x445-((x446==x447)%x448));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x449 = INT16_MIN;
	int32_t x450 = 11694037;
	volatile int32_t x451 = -119;
	uint32_t t109 = 804U;

    t109 = (x449-((x450==x451)%x452));

    if (t109 != 4294934528U) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x453 = 3988;
	static int32_t t110 = -890995;

    t110 = (x453-((x454==x455)%x456));

    if (t110 != 3988) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x458 = INT32_MIN;
	static int8_t x459 = -1;
	int64_t t111 = INT64_MIN;

    t111 = (x457-((x458==x459)%x460));

    if (t111 != INT64_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x461 = -1;
	int8_t x463 = 26;
	volatile int8_t x464 = INT8_MAX;

    t112 = (x461-((x462==x463)%x464));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x465 = 1;
	int32_t x466 = -21;
	int8_t x467 = -1;
	int8_t x468 = -1;
	int32_t t113 = -10;

    t113 = (x465-((x466==x467)%x468));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x470 = 24588931LL;
	uint8_t x471 = UINT8_MAX;
	static int32_t t114 = -2140453;

    t114 = (x469-((x470==x471)%x472));

    if (t114 != 5722) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x474 = 15U;
	uint16_t x475 = 3U;
	static uint64_t x476 = 1364500792977061LLU;
	volatile uint64_t t115 = 676512LLU;

    t115 = (x473-((x474==x475)%x476));

    if (t115 != 962LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x477 = 24U;
	static int16_t x478 = -1;
	volatile int64_t x479 = -1LL;
	int64_t t116 = -5884633109LL;

    t116 = (x477-((x478==x479)%x480));

    if (t116 != 24LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x481 = -1;
	volatile uint32_t x483 = 131938538U;
	volatile uint16_t x484 = 273U;
	volatile int32_t t117 = -29;

    t117 = (x481-((x482==x483)%x484));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x486 = INT64_MIN;
	uint32_t x487 = 325U;
	int16_t x488 = INT16_MAX;

    t118 = (x485-((x486==x487)%x488));

    if (t118 != -128) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x489 = 114995U;
	int8_t x490 = -6;
	int16_t x491 = INT16_MAX;
	static int32_t x492 = INT32_MAX;
	volatile uint32_t t119 = 29956603U;

    t119 = (x489-((x490==x491)%x492));

    if (t119 != 114995U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x493 = 6;
	int32_t x495 = INT32_MIN;
	static uint64_t x496 = 248591629210405LLU;
	static volatile uint64_t t120 = 32884346253691LLU;

    t120 = (x493-((x494==x495)%x496));

    if (t120 != 6LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x497 = INT16_MAX;
	int8_t x498 = -2;
	static int32_t x499 = INT32_MAX;
	int8_t x500 = INT8_MIN;
	volatile int32_t t121 = -21;

    t121 = (x497-((x498==x499)%x500));

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x501 = UINT32_MAX;
	int8_t x502 = INT8_MIN;
	int8_t x503 = -42;
	uint16_t x504 = 7U;
	uint32_t t122 = UINT32_MAX;

    t122 = (x501-((x502==x503)%x504));

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x505 = UINT16_MAX;
	int16_t x506 = INT16_MIN;
	int64_t x507 = INT64_MAX;
	int64_t x508 = INT64_MAX;

    t123 = (x505-((x506==x507)%x508));

    if (t123 != 65535LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x511 = 0;
	uint16_t x512 = 90U;
	volatile int32_t t124 = 1;

    t124 = (x509-((x510==x511)%x512));

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x513 = -49064845646780LL;
	volatile int64_t x516 = -1LL;

    t125 = (x513-((x514==x515)%x516));

    if (t125 != -49064845646780LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x517 = 2793U;
	int8_t x520 = -2;
	static volatile uint32_t t126 = 70U;

    t126 = (x517-((x518==x519)%x520));

    if (t126 != 2793U) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x522 = 11709538U;
	volatile int64_t x523 = 35337670653620285LL;
	int64_t x524 = -1LL;
	volatile int64_t t127 = 552232134689048LL;

    t127 = (x521-((x522==x523)%x524));

    if (t127 != -128LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x525 = INT64_MIN;
	int32_t x526 = INT32_MAX;
	uint8_t x527 = 0U;
	int32_t x528 = 3;
	int64_t t128 = INT64_MIN;

    t128 = (x525-((x526==x527)%x528));

    if (t128 != INT64_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x529 = INT16_MAX;
	int32_t x530 = 122092;
	int64_t x531 = -163704404790LL;
	volatile int64_t t129 = 2024497817LL;

    t129 = (x529-((x530==x531)%x532));

    if (t129 != 32767LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x534 = -1;
	volatile int8_t x535 = 1;
	uint8_t x536 = 87U;

    t130 = (x533-((x534==x535)%x536));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x538 = -6;
	int8_t x540 = INT8_MIN;

    t131 = (x537-((x538==x539)%x540));

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x541 = UINT64_MAX;
	uint16_t x542 = 26U;
	int16_t x543 = -1;
	int8_t x544 = INT8_MIN;

    t132 = (x541-((x542==x543)%x544));

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x545 = 1765219;
	int8_t x546 = 1;
	volatile uint8_t x547 = 13U;
	int32_t x548 = 24615;

    t133 = (x545-((x546==x547)%x548));

    if (t133 != 1765219) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x549 = 3966U;
	volatile int64_t x551 = -3449LL;
	uint16_t x552 = 5836U;
	volatile uint32_t t134 = 13511U;

    t134 = (x549-((x550==x551)%x552));

    if (t134 != 3966U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x553 = INT64_MIN;
	int64_t x554 = INT64_MIN;
	uint32_t x555 = 7U;
	int64_t x556 = INT64_MIN;
	int64_t t135 = INT64_MIN;

    t135 = (x553-((x554==x555)%x556));

    if (t135 != INT64_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x557 = INT32_MAX;
	static volatile int32_t x558 = -331;
	volatile uint64_t x559 = 52122036252LLU;
	static int8_t x560 = -7;
	volatile int32_t t136 = INT32_MAX;

    t136 = (x557-((x558==x559)%x560));

    if (t136 != INT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x561 = INT32_MIN;
	static int32_t x564 = -1749608;

    t137 = (x561-((x562==x563)%x564));

    if (t137 != INT32_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x565 = 17U;
	static uint32_t x566 = 0U;
	static int16_t x568 = INT16_MIN;
	int32_t t138 = -106273546;

    t138 = (x565-((x566==x567)%x568));

    if (t138 != 17) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x569 = 1408775770457LLU;
	volatile int64_t x570 = INT64_MIN;
	int64_t x571 = -1LL;
	static volatile uint16_t x572 = UINT16_MAX;
	static uint64_t t139 = 1618877299817901LLU;

    t139 = (x569-((x570==x571)%x572));

    if (t139 != 1408775770457LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x573 = INT32_MIN;
	int16_t x574 = -33;
	uint64_t x576 = 1121234820221126642LLU;

    t140 = (x573-((x574==x575)%x576));

    if (t140 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x577 = INT64_MIN;
	uint8_t x578 = 43U;
	volatile int16_t x579 = INT16_MIN;
	int8_t x580 = INT8_MAX;
	int64_t t141 = INT64_MIN;

    t141 = (x577-((x578==x579)%x580));

    if (t141 != INT64_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x582 = INT64_MIN;
	int32_t x584 = INT32_MAX;
	volatile int32_t t142 = -1;

    t142 = (x581-((x582==x583)%x584));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x585 = 1;
	volatile int16_t x586 = 40;
	uint64_t x587 = UINT64_MAX;
	volatile int64_t x588 = INT64_MIN;

    t143 = (x585-((x586==x587)%x588));

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x589 = INT32_MAX;
	uint64_t x590 = 6125LLU;
	int32_t x591 = -2058;
	volatile int32_t t144 = INT32_MAX;

    t144 = (x589-((x590==x591)%x592));

    if (t144 != INT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x593 = 215LL;
	int64_t x594 = 143228593310LL;
	int16_t x595 = INT16_MIN;
	int64_t x596 = INT64_MIN;

    t145 = (x593-((x594==x595)%x596));

    if (t145 != 215LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x597 = 29672LL;
	uint8_t x599 = UINT8_MAX;
	int64_t x600 = INT64_MIN;
	static volatile int64_t t146 = 181989LL;

    t146 = (x597-((x598==x599)%x600));

    if (t146 != 29672LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x602 = 1;
	volatile int8_t x603 = 41;
	int16_t x604 = INT16_MIN;
	int64_t t147 = INT64_MIN;

    t147 = (x601-((x602==x603)%x604));

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x607 = INT64_MAX;
	static int32_t t148 = -10544;

    t148 = (x605-((x606==x607)%x608));

    if (t148 != 2) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x609 = UINT64_MAX;
	uint16_t x610 = 4U;
	uint16_t x611 = 1395U;
	volatile int64_t x612 = 2802236887497715LL;
	volatile uint64_t t149 = UINT64_MAX;

    t149 = (x609-((x610==x611)%x612));

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x613 = UINT64_MAX;
	int32_t x614 = -1;
	uint32_t x615 = UINT32_MAX;
	uint32_t x616 = UINT32_MAX;
	uint64_t t150 = 38287761530LLU;

    t150 = (x613-((x614==x615)%x616));

    if (t150 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x617 = INT8_MAX;
	int32_t x618 = -1;
	static int16_t x619 = INT16_MIN;
	static uint8_t x620 = 24U;
	volatile int32_t t151 = -1049555;

    t151 = (x617-((x618==x619)%x620));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x621 = 202U;
	volatile uint64_t x622 = 1230527435346LLU;
	int32_t x623 = INT32_MIN;
	uint8_t x624 = 4U;

    t152 = (x621-((x622==x623)%x624));

    if (t152 != 202U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x626 = INT64_MIN;
	int8_t x627 = INT8_MIN;
	uint16_t x628 = 50U;
	uint32_t t153 = UINT32_MAX;

    t153 = (x625-((x626==x627)%x628));

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x629 = INT8_MIN;
	uint64_t x630 = UINT64_MAX;
	volatile int64_t x631 = INT64_MAX;
	static volatile int64_t x632 = 13263405318015464LL;
	volatile int64_t t154 = -30998LL;

    t154 = (x629-((x630==x631)%x632));

    if (t154 != -128LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x633 = UINT32_MAX;
	int32_t x634 = -508;
	static uint32_t x635 = 21101878U;
	int16_t x636 = INT16_MIN;

    t155 = (x633-((x634==x635)%x636));

    if (t155 != UINT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x639 = INT32_MIN;
	uint16_t x640 = 3918U;
	volatile int64_t t156 = 42218LL;

    t156 = (x637-((x638==x639)%x640));

    if (t156 != 3257166LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x641 = INT64_MIN;
	static uint8_t x642 = 28U;
	uint16_t x644 = UINT16_MAX;

    t157 = (x641-((x642==x643)%x644));

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x646 = INT8_MIN;
	volatile int32_t x647 = INT32_MIN;
	int16_t x648 = -273;
	uint64_t t158 = 14LLU;

    t158 = (x645-((x646==x647)%x648));

    if (t158 != 77561534212359681LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x649 = INT8_MIN;
	int16_t x650 = -1;
	int32_t x652 = INT32_MIN;
	int32_t t159 = 8387;

    t159 = (x649-((x650==x651)%x652));

    if (t159 != -129) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x653 = 33393279456768LL;
	uint16_t x655 = 2035U;
	int32_t x656 = INT32_MAX;
	int64_t t160 = 11LL;

    t160 = (x653-((x654==x655)%x656));

    if (t160 != 33393279456768LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x657 = INT32_MAX;
	volatile uint64_t x658 = 32LLU;
	static int16_t x659 = -1;
	int64_t x660 = -1LL;

    t161 = (x657-((x658==x659)%x660));

    if (t161 != 2147483647LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x661 = -1;
	volatile uint32_t x662 = UINT32_MAX;
	int8_t x663 = 1;
	uint16_t x664 = UINT16_MAX;
	int32_t t162 = 132386;

    t162 = (x661-((x662==x663)%x664));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x665 = 47627328386LLU;
	int32_t x666 = INT32_MIN;
	int16_t x667 = INT16_MAX;
	uint64_t t163 = 1130789597511444893LLU;

    t163 = (x665-((x666==x667)%x668));

    if (t163 != 47627328386LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x669 = 4U;
	int8_t x670 = 1;
	int16_t x671 = 4;

    t164 = (x669-((x670==x671)%x672));

    if (t164 != 4) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x673 = INT8_MIN;
	volatile int16_t x674 = INT16_MAX;
	int16_t x675 = -7874;
	static int8_t x676 = -6;
	int32_t t165 = 140;

    t165 = (x673-((x674==x675)%x676));

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x679 = 15U;
	volatile int32_t t166 = -20;

    t166 = (x677-((x678==x679)%x680));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x681 = INT8_MIN;
	int32_t x682 = INT32_MIN;
	int16_t x683 = -7;
	int64_t x684 = INT64_MAX;
	volatile int64_t t167 = 3602865551202715677LL;

    t167 = (x681-((x682==x683)%x684));

    if (t167 != -128LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x686 = -37;
	static volatile uint64_t x688 = 7781414272736232338LLU;
	uint64_t t168 = 110719LLU;

    t168 = (x685-((x686==x687)%x688));

    if (t168 != 17912884286444845591LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x689 = INT8_MIN;
	volatile uint8_t x690 = 18U;
	uint32_t x691 = UINT32_MAX;
	int32_t t169 = 67;

    t169 = (x689-((x690==x691)%x692));

    if (t169 != -128) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x693 = UINT16_MAX;
	volatile uint8_t x694 = 3U;
	int64_t x695 = INT64_MIN;
	int32_t t170 = 2465;

    t170 = (x693-((x694==x695)%x696));

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x697 = 6701U;
	static int32_t x698 = INT32_MAX;
	uint8_t x699 = 4U;
	int8_t x700 = -1;
	int32_t t171 = -93578859;

    t171 = (x697-((x698==x699)%x700));

    if (t171 != 6701) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x701 = INT8_MAX;
	volatile int16_t x702 = INT16_MIN;
	static volatile uint32_t x703 = 2U;
	static uint64_t x704 = 1043458473145123LLU;
	static volatile uint64_t t172 = 3592257372508LLU;

    t172 = (x701-((x702==x703)%x704));

    if (t172 != 127LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x705 = UINT32_MAX;
	volatile int16_t x706 = -1;
	static int64_t x708 = -1LL;
	volatile int64_t t173 = -377820042945873LL;

    t173 = (x705-((x706==x707)%x708));

    if (t173 != 4294967295LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x709 = INT8_MIN;
	static int64_t x710 = 153388500LL;
	int64_t x711 = INT64_MAX;
	uint64_t x712 = 249796877692578829LLU;
	static volatile uint64_t t174 = 450153LLU;

    t174 = (x709-((x710==x711)%x712));

    if (t174 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x713 = INT64_MIN;
	int32_t x714 = 1;
	int64_t x715 = -343LL;
	int64_t x716 = -13712491088LL;
	int64_t t175 = INT64_MIN;

    t175 = (x713-((x714==x715)%x716));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x717 = 24U;
	int64_t x719 = INT64_MAX;
	int32_t x720 = INT32_MIN;
	int32_t t176 = -868;

    t176 = (x717-((x718==x719)%x720));

    if (t176 != 24) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x722 = INT16_MIN;
	uint64_t x723 = 34996358259609907LLU;
	int8_t x724 = -1;
	int32_t t177 = 10876;

    t177 = (x721-((x722==x723)%x724));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x726 = UINT16_MAX;
	uint8_t x727 = 10U;
	uint8_t x728 = UINT8_MAX;
	int32_t t178 = 177649893;

    t178 = (x725-((x726==x727)%x728));

    if (t178 != -128) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x729 = INT16_MAX;
	volatile uint64_t x730 = 69065006595956083LLU;
	volatile uint16_t x732 = UINT16_MAX;
	static int32_t t179 = 7476404;

    t179 = (x729-((x730==x731)%x732));

    if (t179 != 32767) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x733 = 14009;
	uint64_t x734 = UINT64_MAX;
	int16_t x735 = INT16_MIN;
	uint64_t x736 = UINT64_MAX;
	static uint64_t t180 = 2352074LLU;

    t180 = (x733-((x734==x735)%x736));

    if (t180 != 14009LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x737 = INT8_MIN;
	int64_t x738 = 238017764571LL;
	int16_t x739 = INT16_MIN;
	volatile int64_t t181 = 3066LL;

    t181 = (x737-((x738==x739)%x740));

    if (t181 != -128LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x741 = INT32_MIN;
	int64_t x742 = INT64_MIN;
	volatile int16_t x743 = INT16_MIN;
	int32_t x744 = INT32_MAX;
	volatile int32_t t182 = INT32_MIN;

    t182 = (x741-((x742==x743)%x744));

    if (t182 != INT32_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint64_t x746 = 5893LLU;
	int32_t x747 = -63305844;
	volatile uint16_t x748 = 23834U;
	int32_t t183 = -3;

    t183 = (x745-((x746==x747)%x748));

    if (t183 != -32768) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x750 = 43;
	int32_t x751 = -27119;
	int32_t t184 = -10812792;

    t184 = (x749-((x750==x751)%x752));

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x753 = -488800834;
	int32_t x754 = -18459;
	static int32_t x755 = INT32_MAX;
	int32_t x756 = INT32_MIN;
	int32_t t185 = 67053;

    t185 = (x753-((x754==x755)%x756));

    if (t185 != -488800834) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x758 = INT32_MIN;
	uint64_t x759 = UINT64_MAX;
	volatile int32_t t186 = 1606;

    t186 = (x757-((x758==x759)%x760));

    if (t186 != 32767) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x761 = -1;
	int32_t x762 = -1;
	int8_t x763 = -1;
	int16_t x764 = -1;
	int32_t t187 = 21402;

    t187 = (x761-((x762==x763)%x764));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x765 = INT64_MIN;
	uint8_t x766 = UINT8_MAX;
	int8_t x767 = -1;
	static int64_t t188 = INT64_MIN;

    t188 = (x765-((x766==x767)%x768));

    if (t188 != INT64_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x769 = 771U;
	uint64_t x770 = 3467288398LLU;
	int64_t x771 = -1LL;
	volatile int64_t t189 = 938903533795669087LL;

    t189 = (x769-((x770==x771)%x772));

    if (t189 != 771LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x773 = -1;
	int32_t x774 = INT32_MAX;
	int16_t x776 = -95;
	static volatile int32_t t190 = -1997;

    t190 = (x773-((x774==x775)%x776));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x778 = 9U;
	static int16_t x779 = INT16_MIN;
	uint32_t t191 = 37U;

    t191 = (x777-((x778==x779)%x780));

    if (t191 != 17687U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x781 = INT8_MAX;
	static volatile uint8_t x782 = UINT8_MAX;
	static volatile int32_t x783 = 1814;
	static volatile uint32_t x784 = 55275091U;
	volatile uint32_t t192 = 1711805U;

    t192 = (x781-((x782==x783)%x784));

    if (t192 != 127U) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x785 = 1;
	uint32_t x788 = 47227U;
	volatile uint32_t t193 = 46698U;

    t193 = (x785-((x786==x787)%x788));

    if (t193 != 1U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x789 = 1U;
	int16_t x790 = INT16_MIN;
	uint64_t x791 = UINT64_MAX;
	int16_t x792 = -1;

    t194 = (x789-((x790==x791)%x792));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x793 = 0U;
	int8_t x794 = INT8_MIN;
	int64_t x795 = 2218188234438528LL;
	static int8_t x796 = INT8_MAX;

    t195 = (x793-((x794==x795)%x796));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x798 = INT8_MAX;
	static int64_t x799 = -1LL;
	int16_t x800 = -1;
	volatile int64_t t196 = INT64_MAX;

    t196 = (x797-((x798==x799)%x800));

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x802 = UINT8_MAX;
	int32_t x803 = -1;
	int8_t x804 = -1;
	volatile int32_t t197 = 2720783;

    t197 = (x801-((x802==x803)%x804));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x807 = 3U;
	uint64_t x808 = 1LLU;
	uint64_t t198 = 25864645LLU;

    t198 = (x805-((x806==x807)%x808));

    if (t198 != 26938003LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x809 = 67862839572LL;
	int16_t x810 = -2;
	int16_t x811 = -14;
	int64_t t199 = -423232LL;

    t199 = (x809-((x810==x811)%x812));

    if (t199 != 67862839572LL) { NG(); } else { ; }
	
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

