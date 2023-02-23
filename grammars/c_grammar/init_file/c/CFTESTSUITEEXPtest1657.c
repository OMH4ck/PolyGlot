
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

int16_t x3 = INT16_MAX;
uint32_t x5 = 1U;
int16_t x12 = INT16_MAX;
volatile uint32_t x14 = UINT32_MAX;
static volatile uint16_t x17 = 71U;
uint32_t x21 = 1976072U;
static uint64_t x25 = UINT64_MAX;
volatile uint64_t t6 = 251LLU;
static volatile int32_t x32 = 257;
uint8_t x33 = 39U;
int8_t x43 = INT8_MIN;
int32_t x46 = -1;
uint16_t x48 = UINT16_MAX;
volatile int64_t x49 = -1LL;
uint64_t x53 = UINT64_MAX;
int8_t x54 = -11;
volatile int32_t t15 = 0;
uint64_t x65 = UINT64_MAX;
volatile int64_t x66 = INT64_MIN;
int32_t x74 = 106730;
volatile int16_t x75 = INT16_MIN;
uint32_t x80 = UINT32_MAX;
volatile uint64_t t19 = 1230112968LLU;
volatile int64_t x82 = INT64_MIN;
int32_t x91 = -1992;
int16_t x94 = INT16_MIN;
static volatile int64_t t24 = 4408LL;
volatile int64_t x101 = INT64_MIN;
volatile int64_t x107 = INT64_MIN;
static int32_t t26 = 92717596;
uint16_t x112 = 0U;
volatile int32_t t29 = -1245;
int16_t x127 = 31;
volatile int32_t t31 = -244011769;
uint32_t x133 = UINT32_MAX;
int64_t x140 = 1328869LL;
static uint8_t x146 = UINT8_MAX;
volatile int32_t t36 = 12261932;
int64_t x153 = INT64_MIN;
int64_t x154 = 787285LL;
int32_t x157 = 40131887;
static uint16_t x158 = 0U;
int8_t x163 = -1;
uint8_t x167 = UINT8_MAX;
uint16_t x173 = 14U;
int32_t t44 = -992468961;
int8_t x188 = INT8_MIN;
static int32_t t45 = 50139;
static int16_t x191 = INT16_MIN;
uint8_t x194 = UINT8_MAX;
int32_t t49 = 1001586887;
volatile uint8_t x224 = 7U;
int8_t x230 = -1;
int8_t x233 = INT8_MIN;
uint16_t x242 = 86U;
uint32_t x245 = UINT32_MAX;
uint32_t t59 = 96231699U;
uint64_t t60 = 5709161LLU;
int8_t x255 = 4;
volatile int64_t t61 = 2290571010LL;
int64_t x275 = INT64_MIN;
volatile uint8_t x276 = 48U;
int64_t t65 = 233646LL;
volatile int32_t t66 = -6451;
static int16_t x282 = INT16_MIN;
int16_t x284 = INT16_MIN;
int16_t x288 = 3278;
int32_t x295 = -373069;
int64_t x298 = 95140729120LL;
static uint16_t x304 = UINT16_MAX;
volatile int32_t x307 = -124491342;
int16_t x309 = INT16_MIN;
int8_t x318 = 12;
int64_t x328 = INT64_MIN;
static volatile int32_t t78 = -4125;
int8_t x331 = INT8_MIN;
int16_t x333 = 1;
uint32_t x340 = 11953133U;
volatile int32_t t81 = 67;
int64_t x348 = 49962500724130LL;
static volatile int32_t t83 = -960251581;
int32_t x349 = INT32_MIN;
uint64_t x352 = UINT64_MAX;
int32_t t84 = -1138709;
int64_t x353 = INT64_MIN;
int32_t x357 = -30405;
int64_t x361 = -130878324495236518LL;
int32_t x362 = -1;
int32_t x364 = INT32_MIN;
volatile uint32_t x365 = 42U;
uint64_t x366 = 1530511LLU;
static uint32_t t88 = 24260U;
int64_t x380 = -1LL;
int16_t x381 = INT16_MIN;
int32_t x385 = -175;
int8_t x392 = INT8_MAX;
int32_t x397 = INT32_MIN;
int32_t x401 = 11301283;
uint16_t x407 = 2211U;
static volatile int16_t x410 = 2921;
static int64_t x413 = INT64_MAX;
volatile int64_t x416 = INT64_MIN;
int16_t x418 = INT16_MAX;
uint32_t x419 = 322814U;
volatile uint32_t x424 = UINT32_MAX;
int8_t x435 = 6;
uint16_t x442 = UINT16_MAX;
volatile int64_t x443 = INT64_MIN;
int32_t x448 = -3440613;
uint16_t x449 = UINT16_MAX;
static int64_t x450 = -1LL;
uint8_t x457 = 0U;
int32_t x462 = 689;
int8_t x467 = INT8_MAX;
volatile int64_t t112 = 1031518970765620LL;
int32_t x473 = INT32_MAX;
volatile int32_t t113 = -382070;
volatile int32_t t114 = -1;
uint64_t x498 = UINT64_MAX;
uint64_t x504 = 1016881132172LLU;
int8_t x508 = INT8_MIN;
uint32_t x532 = UINT32_MAX;
uint8_t x536 = 13U;
int64_t x543 = -1LL;
static int32_t t130 = 51396096;
uint16_t x548 = 14109U;
int64_t t131 = 4LL;
static uint16_t x554 = 12367U;
uint32_t x561 = 937748379U;
int16_t x562 = -1;
volatile uint32_t t135 = 74452029U;
static int16_t x568 = INT16_MIN;
uint16_t x573 = 88U;
volatile int8_t x576 = INT8_MIN;
volatile int32_t t139 = -11532;
static uint64_t x586 = 4811741368205043202LLU;
int8_t x591 = -1;
int32_t t142 = -17;
int8_t x595 = INT8_MIN;
static volatile uint64_t t143 = 2507175362LLU;
int32_t x600 = -1;
int16_t x601 = INT16_MAX;
volatile int16_t x614 = INT16_MIN;
int64_t x629 = INT64_MIN;
static uint8_t x632 = UINT8_MAX;
int64_t t151 = 17651470059LL;
int64_t x636 = INT64_MIN;
uint8_t x640 = 16U;
int64_t t153 = 23050LL;
int32_t x644 = -7;
int64_t x645 = -1LL;
int64_t x651 = INT64_MIN;
volatile int32_t t158 = -25;
uint16_t x665 = UINT16_MAX;
int8_t x667 = 1;
uint32_t x676 = 2U;
int64_t x677 = -1LL;
static uint8_t x678 = UINT8_MAX;
uint8_t x684 = 50U;
int8_t x690 = 6;
uint16_t x709 = 3U;
int32_t x711 = INT32_MAX;
static volatile uint8_t x714 = 4U;
int16_t x715 = -1;
static uint64_t x717 = UINT64_MAX;
int32_t x719 = INT32_MAX;
uint16_t x724 = 60U;
static int32_t t174 = -13;
volatile int64_t x732 = INT64_MIN;
int8_t x733 = -8;
int32_t x741 = 46;
static int64_t x742 = INT64_MAX;
int32_t x743 = INT32_MIN;
volatile int32_t x745 = INT32_MIN;
volatile int32_t t179 = -687834;
static volatile int16_t x749 = 6;
volatile int16_t x757 = INT16_MAX;
static uint64_t x760 = 1443524887735628828LLU;
volatile int32_t x778 = INT32_MIN;
uint8_t x781 = 1U;
volatile int32_t x793 = INT32_MAX;
int32_t x809 = INT32_MIN;
static int8_t x818 = INT8_MIN;
volatile int32_t t196 = -652869946;
int64_t x821 = INT64_MIN;
uint8_t x828 = 7U;
int32_t x831 = INT32_MAX;
static volatile uint32_t t199 = 759U;


void f0(void) {
    	static volatile uint64_t x1 = UINT64_MAX;
	int64_t x2 = -1LL;
	uint16_t x4 = 1754U;
	uint64_t t0 = 335423LLU;

    t0 = (x1%((x2>x3)!=x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 14301U;
	static int64_t x7 = INT64_MAX;
	int16_t x8 = -1;
	static volatile uint32_t t1 = 107580U;

    t1 = (x5%((x6>x7)!=x8));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 1833028U;
	static int32_t x10 = INT32_MIN;
	static uint8_t x11 = 15U;
	uint32_t t2 = 16632560U;

    t2 = (x9%((x10>x11)!=x12));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	uint16_t x15 = 9U;
	int8_t x16 = 55;
	volatile int32_t t3 = -16;

    t3 = (x13%((x14>x15)!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = 1682672U;
	uint32_t x19 = UINT32_MAX;
	int16_t x20 = INT16_MAX;
	int32_t t4 = -10332;

    t4 = (x17%((x18>x19)!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = -1;
	volatile int64_t x23 = -24868068LL;
	volatile int64_t x24 = -946385LL;
	uint32_t t5 = 450176481U;

    t5 = (x21%((x22>x23)!=x24));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = -3;
	static uint64_t x27 = 4125LLU;
	uint64_t x28 = 132130252483LLU;

    t6 = (x25%((x26>x27)!=x28));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MIN;
	static volatile uint8_t x31 = 3U;
	int32_t t7 = 22414;

    t7 = (x29%((x30>x31)!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = -1LL;
	static int16_t x35 = -1;
	int64_t x36 = -65088873553LL;
	static int32_t t8 = 1392024;

    t8 = (x33%((x34>x35)!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	volatile int8_t x38 = INT8_MIN;
	uint32_t x39 = 0U;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t9 = 27047795;

    t9 = (x37%((x38>x39)!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 200U;
	int64_t x42 = INT64_MIN;
	int64_t x44 = -399657563746264034LL;
	volatile int32_t t10 = -7622583;

    t10 = (x41%((x42>x43)!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	static volatile uint64_t x47 = UINT64_MAX;
	static volatile int32_t t11 = 1009716;

    t11 = (x45%((x46>x47)!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x50 = 0U;
	static uint16_t x51 = UINT16_MAX;
	volatile int8_t x52 = 3;
	volatile int64_t t12 = 105022821327065535LL;

    t12 = (x49%((x50>x51)!=x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x55 = -33675;
	int16_t x56 = INT16_MIN;
	uint64_t t13 = 1709678845792LLU;

    t13 = (x53%((x54>x55)!=x56));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = -1LL;
	int8_t x58 = -1;
	int16_t x59 = 252;
	volatile int32_t x60 = INT32_MIN;
	static int64_t t14 = 26LL;

    t14 = (x57%((x58>x59)!=x60));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 2669U;
	int16_t x62 = -13365;
	int64_t x63 = INT64_MIN;
	int32_t x64 = -1;

    t15 = (x61%((x62>x63)!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x67 = -1;
	volatile int32_t x68 = INT32_MAX;
	uint64_t t16 = 5217985632LLU;

    t16 = (x65%((x66>x67)!=x68));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = -1;
	static volatile int64_t x70 = INT64_MAX;
	uint8_t x71 = 1U;
	static int8_t x72 = -1;
	static int32_t t17 = -21325370;

    t17 = (x69%((x70>x71)!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 5734186695274250LLU;
	int32_t x76 = -186;
	volatile uint64_t t18 = 4419LLU;

    t18 = (x73%((x74>x75)!=x76));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x77 = UINT64_MAX;
	int16_t x78 = INT16_MIN;
	int8_t x79 = -14;

    t19 = (x77%((x78>x79)!=x80));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = UINT8_MAX;
	int32_t x83 = INT32_MIN;
	static uint16_t x84 = 729U;
	int32_t t20 = 9;

    t20 = (x81%((x82>x83)!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 1LLU;
	int8_t x86 = INT8_MIN;
	int64_t x87 = -415385681952LL;
	uint16_t x88 = UINT16_MAX;
	uint64_t t21 = 659997LLU;

    t21 = (x85%((x86>x87)!=x88));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 30U;
	static uint16_t x90 = UINT16_MAX;
	volatile int64_t x92 = -6LL;
	int32_t t22 = 0;

    t22 = (x89%((x90>x91)!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 1U;
	int32_t x95 = 1;
	int64_t x96 = INT64_MIN;
	int32_t t23 = -22;

    t23 = (x93%((x94>x95)!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = -60445LL;
	static volatile int32_t x98 = -16;
	volatile uint8_t x99 = UINT8_MAX;
	uint8_t x100 = UINT8_MAX;

    t24 = (x97%((x98>x99)!=x100));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x102 = 38698449;
	int8_t x103 = 58;
	int32_t x104 = 953683;
	volatile int64_t t25 = -4LL;

    t25 = (x101%((x102>x103)!=x104));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x105 = 1892U;
	int32_t x106 = -1;
	static int16_t x108 = INT16_MIN;

    t26 = (x105%((x106>x107)!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x109 = -1;
	static int32_t x110 = INT32_MAX;
	int16_t x111 = -1;
	int32_t t27 = 16312;

    t27 = (x109%((x110>x111)!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int16_t x113 = INT16_MIN;
	uint64_t x114 = 1885LLU;
	int32_t x115 = INT32_MIN;
	uint16_t x116 = 10U;
	static int32_t t28 = 16757842;

    t28 = (x113%((x114>x115)!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	volatile uint8_t x118 = UINT8_MAX;
	int32_t x119 = -1;
	static int32_t x120 = INT32_MAX;

    t29 = (x117%((x118>x119)!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x121 = 4653U;
	int64_t x122 = -1LL;
	uint8_t x123 = UINT8_MAX;
	static int64_t x124 = INT64_MIN;
	static volatile uint32_t t30 = 1285U;

    t30 = (x121%((x122>x123)!=x124));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x125 = 6305U;
	uint8_t x126 = 3U;
	uint64_t x128 = UINT64_MAX;

    t31 = (x125%((x126>x127)!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MAX;
	uint16_t x130 = UINT16_MAX;
	static volatile int16_t x131 = 558;
	uint8_t x132 = 6U;
	volatile int32_t t32 = 0;

    t32 = (x129%((x130>x131)!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x134 = 40;
	uint32_t x135 = UINT32_MAX;
	static int32_t x136 = INT32_MIN;
	uint32_t t33 = 88U;

    t33 = (x133%((x134>x135)!=x136));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	uint64_t x138 = 28347827128965LLU;
	int32_t x139 = -1;
	int64_t t34 = -14820LL;

    t34 = (x137%((x138>x139)!=x140));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 1690673787U;
	uint8_t x142 = 0U;
	volatile uint8_t x143 = 87U;
	static int8_t x144 = -25;
	uint32_t t35 = 7793372U;

    t35 = (x141%((x142>x143)!=x144));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	static uint64_t x147 = 1110321103664950655LLU;
	volatile int16_t x148 = -1;

    t36 = (x145%((x146>x147)!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x155 = -1;
	uint16_t x156 = 133U;
	int64_t t37 = -13490036LL;

    t37 = (x153%((x154>x155)!=x156));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x159 = -1;
	int8_t x160 = 47;
	static int32_t t38 = -44915;

    t38 = (x157%((x158>x159)!=x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x161 = UINT32_MAX;
	uint32_t x162 = UINT32_MAX;
	int16_t x164 = 16;
	uint32_t t39 = 1020U;

    t39 = (x161%((x162>x163)!=x164));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x165 = 115U;
	volatile uint16_t x166 = UINT16_MAX;
	uint64_t x168 = UINT64_MAX;
	int32_t t40 = 140786633;

    t40 = (x165%((x166>x167)!=x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = -1;
	volatile int16_t x170 = INT16_MAX;
	int32_t x171 = INT32_MAX;
	int64_t x172 = INT64_MIN;
	int32_t t41 = 126;

    t41 = (x169%((x170>x171)!=x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x174 = -1;
	volatile int16_t x175 = INT16_MIN;
	uint32_t x176 = 47168510U;
	static int32_t t42 = 58935;

    t42 = (x173%((x174>x175)!=x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x177 = UINT32_MAX;
	volatile int8_t x178 = INT8_MAX;
	int8_t x179 = 4;
	volatile uint8_t x180 = 0U;
	uint32_t t43 = 522389U;

    t43 = (x177%((x178>x179)!=x180));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x181 = -972102340;
	uint32_t x182 = 42U;
	int32_t x183 = INT32_MIN;
	volatile int32_t x184 = INT32_MIN;

    t44 = (x181%((x182>x183)!=x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x185 = -1;
	int32_t x186 = INT32_MIN;
	static int16_t x187 = 4;

    t45 = (x185%((x186>x187)!=x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = INT16_MIN;
	uint64_t x190 = UINT64_MAX;
	int32_t x192 = 2847313;
	int32_t t46 = 4169;

    t46 = (x189%((x190>x191)!=x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x193 = INT64_MIN;
	volatile uint64_t x195 = UINT64_MAX;
	uint16_t x196 = UINT16_MAX;
	int64_t t47 = -111391526LL;

    t47 = (x193%((x194>x195)!=x196));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x197 = 50U;
	uint32_t x198 = UINT32_MAX;
	uint8_t x199 = 4U;
	int16_t x200 = INT16_MAX;
	int32_t t48 = -212435;

    t48 = (x197%((x198>x199)!=x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x201 = INT8_MAX;
	uint64_t x202 = UINT64_MAX;
	uint32_t x203 = 286U;
	volatile uint16_t x204 = 124U;

    t49 = (x201%((x202>x203)!=x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x209 = 23U;
	int8_t x210 = INT8_MIN;
	int64_t x211 = -1LL;
	int16_t x212 = 1;
	static int32_t t50 = -3136166;

    t50 = (x209%((x210>x211)!=x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x213 = INT32_MAX;
	volatile int32_t x214 = INT32_MIN;
	int8_t x215 = INT8_MIN;
	volatile int16_t x216 = INT16_MIN;
	volatile int32_t t51 = 82;

    t51 = (x213%((x214>x215)!=x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = -1;
	int16_t x218 = -1;
	int64_t x219 = 1427LL;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t52 = -9193293;

    t52 = (x217%((x218>x219)!=x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x221 = -1;
	int16_t x222 = -1;
	static int16_t x223 = INT16_MIN;
	static int32_t t53 = 11;

    t53 = (x221%((x222>x223)!=x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = INT64_MAX;
	static int8_t x226 = INT8_MIN;
	uint16_t x227 = 172U;
	int64_t x228 = -1LL;
	volatile int64_t t54 = 1177LL;

    t54 = (x225%((x226>x227)!=x228));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x229 = UINT64_MAX;
	static int8_t x231 = INT8_MIN;
	static uint64_t x232 = UINT64_MAX;
	volatile uint64_t t55 = 55164600708LLU;

    t55 = (x229%((x230>x231)!=x232));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x234 = 443127947015698528LLU;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = -9061;
	static int32_t t56 = 177896;

    t56 = (x233%((x234>x235)!=x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x237 = 0U;
	volatile int8_t x238 = -18;
	uint64_t x239 = 219198716656280777LLU;
	volatile int16_t x240 = -141;
	volatile int32_t t57 = 344;

    t57 = (x237%((x238>x239)!=x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = INT16_MAX;
	static int8_t x243 = -1;
	static int32_t x244 = INT32_MAX;
	volatile int32_t t58 = 2314736;

    t58 = (x241%((x242>x243)!=x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x246 = -1;
	static int32_t x247 = INT32_MIN;
	int64_t x248 = 6036603175791420LL;

    t59 = (x245%((x246>x247)!=x248));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x249 = 444125387934912383LLU;
	static int16_t x250 = INT16_MIN;
	volatile uint32_t x251 = UINT32_MAX;
	int8_t x252 = INT8_MIN;

    t60 = (x249%((x250>x251)!=x252));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x253 = -127114LL;
	int16_t x254 = INT16_MIN;
	volatile int16_t x256 = INT16_MAX;

    t61 = (x253%((x254>x255)!=x256));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x257 = INT8_MAX;
	static int8_t x258 = INT8_MIN;
	uint64_t x259 = UINT64_MAX;
	volatile int8_t x260 = 27;
	int32_t t62 = 26527;

    t62 = (x257%((x258>x259)!=x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MIN;
	uint16_t x267 = 1U;
	uint32_t x268 = 10U;
	static int64_t t63 = -2514920LL;

    t63 = (x265%((x266>x267)!=x268));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x269 = 4464LLU;
	uint32_t x270 = 65447U;
	int32_t x271 = INT32_MIN;
	uint8_t x272 = 1U;
	static volatile uint64_t t64 = 2603422LLU;

    t64 = (x269%((x270>x271)!=x272));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x273 = INT64_MAX;
	uint32_t x274 = 110083031U;

    t65 = (x273%((x274>x275)!=x276));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x277 = INT8_MAX;
	int16_t x278 = 7637;
	int8_t x279 = INT8_MIN;
	int32_t x280 = -417153;

    t66 = (x277%((x278>x279)!=x280));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x281 = 2U;
	static volatile uint16_t x283 = 51U;
	volatile int32_t t67 = 363;

    t67 = (x281%((x282>x283)!=x284));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x285 = -1LL;
	uint64_t x286 = 6179LLU;
	uint64_t x287 = UINT64_MAX;
	int64_t t68 = 1566750987103061347LL;

    t68 = (x285%((x286>x287)!=x288));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x289 = INT32_MAX;
	static int64_t x290 = 157LL;
	int64_t x291 = -1LL;
	static int16_t x292 = INT16_MIN;
	volatile int32_t t69 = -11;

    t69 = (x289%((x290>x291)!=x292));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x293 = -36;
	int16_t x294 = INT16_MIN;
	int64_t x296 = -61090696972205LL;
	volatile int32_t t70 = 3145016;

    t70 = (x293%((x294>x295)!=x296));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x297 = INT8_MIN;
	int64_t x299 = -1506666998989831LL;
	int8_t x300 = -1;
	int32_t t71 = 108157119;

    t71 = (x297%((x298>x299)!=x300));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = 1;
	int8_t x302 = -5;
	int8_t x303 = 2;
	volatile int32_t t72 = 147103297;

    t72 = (x301%((x302>x303)!=x304));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x305 = INT64_MIN;
	uint16_t x306 = 60U;
	uint16_t x308 = 1041U;
	int64_t t73 = 3510020883692246457LL;

    t73 = (x305%((x306>x307)!=x308));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x310 = 2054355288U;
	uint64_t x311 = 1198002963762330LLU;
	volatile int32_t x312 = INT32_MAX;
	volatile int32_t t74 = -1657;

    t74 = (x309%((x310>x311)!=x312));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x313 = 872LLU;
	uint8_t x314 = UINT8_MAX;
	int64_t x315 = -1LL;
	int64_t x316 = 7438LL;
	uint64_t t75 = 20123373341564LLU;

    t75 = (x313%((x314>x315)!=x316));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x317 = -6285523490350408LL;
	volatile uint8_t x319 = UINT8_MAX;
	int8_t x320 = INT8_MAX;
	volatile int64_t t76 = -553LL;

    t76 = (x317%((x318>x319)!=x320));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x321 = INT64_MAX;
	uint8_t x322 = UINT8_MAX;
	int8_t x323 = 0;
	int64_t x324 = INT64_MIN;
	int64_t t77 = -78065LL;

    t77 = (x321%((x322>x323)!=x324));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x325 = 79U;
	uint8_t x326 = 7U;
	volatile int64_t x327 = INT64_MAX;

    t78 = (x325%((x326>x327)!=x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x329 = UINT8_MAX;
	uint64_t x330 = 292LLU;
	int16_t x332 = INT16_MIN;
	int32_t t79 = -370;

    t79 = (x329%((x330>x331)!=x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int16_t x334 = INT16_MIN;
	uint64_t x335 = 9855810LLU;
	int32_t x336 = 7032;
	static int32_t t80 = 93111152;

    t80 = (x333%((x334>x335)!=x336));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x337 = -1;
	static int16_t x338 = INT16_MIN;
	int32_t x339 = -1;

    t81 = (x337%((x338>x339)!=x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x341 = -1LL;
	int8_t x342 = INT8_MAX;
	static int64_t x343 = INT64_MIN;
	uint16_t x344 = 22U;
	int64_t t82 = -54962505LL;

    t82 = (x341%((x342>x343)!=x344));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x345 = INT32_MIN;
	int32_t x346 = -5108432;
	int16_t x347 = INT16_MIN;

    t83 = (x345%((x346>x347)!=x348));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x350 = 319U;
	uint16_t x351 = UINT16_MAX;

    t84 = (x349%((x350>x351)!=x352));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x354 = INT64_MIN;
	int8_t x355 = -1;
	int64_t x356 = INT64_MIN;
	int64_t t85 = -978582154LL;

    t85 = (x353%((x354>x355)!=x356));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x358 = UINT16_MAX;
	static uint16_t x359 = UINT16_MAX;
	volatile int8_t x360 = INT8_MIN;
	volatile int32_t t86 = -205469;

    t86 = (x357%((x358>x359)!=x360));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x363 = -1;
	int64_t t87 = -959879842792739LL;

    t87 = (x361%((x362>x363)!=x364));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x367 = 29761LLU;
	uint16_t x368 = UINT16_MAX;

    t88 = (x365%((x366>x367)!=x368));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x369 = UINT64_MAX;
	static uint32_t x370 = 2655488U;
	uint8_t x371 = 0U;
	int32_t x372 = -50199;
	static volatile uint64_t t89 = 0LLU;

    t89 = (x369%((x370>x371)!=x372));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x373 = INT8_MAX;
	static uint8_t x374 = 6U;
	volatile uint8_t x375 = 13U;
	volatile int16_t x376 = 58;
	volatile int32_t t90 = 71;

    t90 = (x373%((x374>x375)!=x376));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x377 = 1068U;
	volatile int16_t x378 = -1;
	int32_t x379 = INT32_MIN;
	volatile uint32_t t91 = 176U;

    t91 = (x377%((x378>x379)!=x380));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x382 = 6U;
	int16_t x383 = 20;
	volatile int64_t x384 = 612617327828LL;
	int32_t t92 = -37106;

    t92 = (x381%((x382>x383)!=x384));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x386 = 44;
	volatile uint64_t x387 = UINT64_MAX;
	static int8_t x388 = 1;
	volatile int32_t t93 = 320;

    t93 = (x385%((x386>x387)!=x388));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x389 = UINT32_MAX;
	uint8_t x390 = UINT8_MAX;
	int16_t x391 = INT16_MAX;
	uint32_t t94 = 2U;

    t94 = (x389%((x390>x391)!=x392));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x393 = 2U;
	static uint64_t x394 = 5100LLU;
	int64_t x395 = -1LL;
	int8_t x396 = -2;
	volatile int32_t t95 = 210;

    t95 = (x393%((x394>x395)!=x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x398 = UINT16_MAX;
	uint32_t x399 = 318U;
	int32_t x400 = -1;
	static int32_t t96 = -14;

    t96 = (x397%((x398>x399)!=x400));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x402 = 30;
	int32_t x403 = INT32_MAX;
	volatile uint8_t x404 = 95U;
	static volatile int32_t t97 = -36;

    t97 = (x401%((x402>x403)!=x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x405 = 591U;
	int8_t x406 = INT8_MAX;
	int16_t x408 = INT16_MIN;
	volatile int32_t t98 = -1817;

    t98 = (x405%((x406>x407)!=x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x409 = 7U;
	uint64_t x411 = UINT64_MAX;
	uint64_t x412 = 257677084608LLU;
	volatile int32_t t99 = 11591;

    t99 = (x409%((x410>x411)!=x412));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x414 = 6;
	uint64_t x415 = 1676LLU;
	int64_t t100 = -1791976919943704LL;

    t100 = (x413%((x414>x415)!=x416));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x417 = 19U;
	uint32_t x420 = 420U;
	int32_t t101 = -125934;

    t101 = (x417%((x418>x419)!=x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x421 = UINT16_MAX;
	uint16_t x422 = 8U;
	int32_t x423 = 2054085;
	static int32_t t102 = 180701;

    t102 = (x421%((x422>x423)!=x424));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x429 = 22505LLU;
	uint8_t x430 = 7U;
	uint8_t x431 = UINT8_MAX;
	volatile int8_t x432 = -1;
	volatile uint64_t t103 = 674728987086LLU;

    t103 = (x429%((x430>x431)!=x432));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x433 = 7U;
	int16_t x434 = -1;
	uint32_t x436 = 287979811U;
	volatile int32_t t104 = 49423;

    t104 = (x433%((x434>x435)!=x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x437 = INT8_MIN;
	static int8_t x438 = INT8_MIN;
	volatile uint16_t x439 = 15U;
	int32_t x440 = -1;
	int32_t t105 = 1;

    t105 = (x437%((x438>x439)!=x440));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x441 = 136706569383LLU;
	int8_t x444 = INT8_MAX;
	uint64_t t106 = 1481LLU;

    t106 = (x441%((x442>x443)!=x444));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x445 = 7161LL;
	static uint32_t x446 = UINT32_MAX;
	uint16_t x447 = UINT16_MAX;
	int64_t t107 = 9131239LL;

    t107 = (x445%((x446>x447)!=x448));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x451 = UINT8_MAX;
	int64_t x452 = INT64_MAX;
	int32_t t108 = 422799;

    t108 = (x449%((x450>x451)!=x452));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x453 = UINT16_MAX;
	static volatile uint8_t x454 = UINT8_MAX;
	int64_t x455 = -342512828191LL;
	int32_t x456 = INT32_MIN;
	volatile int32_t t109 = -121477;

    t109 = (x453%((x454>x455)!=x456));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x458 = INT32_MIN;
	int8_t x459 = -5;
	int8_t x460 = -1;
	static volatile int32_t t110 = 0;

    t110 = (x457%((x458>x459)!=x460));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x461 = 0U;
	volatile int64_t x463 = 98960LL;
	uint64_t x464 = 488040509641798412LLU;
	volatile int32_t t111 = -1;

    t111 = (x461%((x462>x463)!=x464));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x465 = INT64_MIN;
	static int16_t x466 = -1830;
	int16_t x468 = INT16_MIN;

    t112 = (x465%((x466>x467)!=x468));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x474 = INT32_MIN;
	int8_t x475 = INT8_MIN;
	int8_t x476 = INT8_MAX;

    t113 = (x473%((x474>x475)!=x476));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x477 = INT32_MIN;
	int16_t x478 = 1644;
	int64_t x479 = INT64_MIN;
	static uint16_t x480 = 0U;

    t114 = (x477%((x478>x479)!=x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x481 = INT64_MIN;
	int32_t x482 = INT32_MIN;
	static uint32_t x483 = 160032484U;
	uint8_t x484 = 30U;
	volatile int64_t t115 = 2345234248LL;

    t115 = (x481%((x482>x483)!=x484));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x485 = INT64_MIN;
	int16_t x486 = -5587;
	uint64_t x487 = 11859168421638LLU;
	static int16_t x488 = -1;
	int64_t t116 = 137671493332068LL;

    t116 = (x485%((x486>x487)!=x488));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x489 = INT16_MAX;
	int64_t x490 = INT64_MIN;
	int16_t x491 = -34;
	static int64_t x492 = INT64_MAX;
	int32_t t117 = 106434;

    t117 = (x489%((x490>x491)!=x492));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x493 = -1;
	int64_t x494 = 4193479LL;
	int32_t x495 = 5;
	uint8_t x496 = 0U;
	int32_t t118 = -412291;

    t118 = (x493%((x494>x495)!=x496));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x497 = -899;
	int32_t x499 = INT32_MIN;
	static int64_t x500 = -1LL;
	int32_t t119 = 585;

    t119 = (x497%((x498>x499)!=x500));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x501 = -1LL;
	volatile int32_t x502 = 1315;
	uint32_t x503 = UINT32_MAX;
	static int64_t t120 = 1044354462007097095LL;

    t120 = (x501%((x502>x503)!=x504));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x505 = 11U;
	volatile int8_t x506 = -1;
	static int64_t x507 = -91388384718280672LL;
	uint32_t t121 = 50657500U;

    t121 = (x505%((x506>x507)!=x508));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x509 = INT8_MIN;
	volatile int64_t x510 = -663177LL;
	int8_t x511 = -1;
	static int32_t x512 = INT32_MIN;
	static volatile int32_t t122 = -1023;

    t122 = (x509%((x510>x511)!=x512));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x513 = INT16_MIN;
	uint64_t x514 = 2981019345446LLU;
	static uint8_t x515 = 4U;
	volatile uint8_t x516 = UINT8_MAX;
	volatile int32_t t123 = 22445;

    t123 = (x513%((x514>x515)!=x516));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x517 = INT16_MIN;
	volatile int32_t x518 = INT32_MIN;
	static int16_t x519 = -1;
	uint8_t x520 = UINT8_MAX;
	int32_t t124 = -1;

    t124 = (x517%((x518>x519)!=x520));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x521 = -1;
	int64_t x522 = -1LL;
	uint8_t x523 = 0U;
	static int32_t x524 = INT32_MIN;
	int32_t t125 = 161;

    t125 = (x521%((x522>x523)!=x524));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x525 = -54;
	int8_t x526 = 1;
	int64_t x527 = -218649LL;
	static int64_t x528 = -16087257057622LL;
	int32_t t126 = 43030827;

    t126 = (x525%((x526>x527)!=x528));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x529 = 0U;
	uint8_t x530 = UINT8_MAX;
	uint8_t x531 = 11U;
	volatile int32_t t127 = -633178;

    t127 = (x529%((x530>x531)!=x532));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x533 = UINT32_MAX;
	uint16_t x534 = 194U;
	volatile int32_t x535 = INT32_MIN;
	volatile uint32_t t128 = 392U;

    t128 = (x533%((x534>x535)!=x536));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x537 = UINT16_MAX;
	volatile int32_t x538 = -15;
	static volatile uint64_t x539 = UINT64_MAX;
	int16_t x540 = 1079;
	volatile int32_t t129 = 127369;

    t129 = (x537%((x538>x539)!=x540));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x541 = -1;
	int16_t x542 = INT16_MIN;
	int32_t x544 = INT32_MIN;

    t130 = (x541%((x542>x543)!=x544));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x545 = -103576403LL;
	uint32_t x546 = UINT32_MAX;
	static volatile uint64_t x547 = UINT64_MAX;

    t131 = (x545%((x546>x547)!=x548));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x549 = UINT64_MAX;
	int32_t x550 = -170;
	int8_t x551 = INT8_MIN;
	int64_t x552 = 1461255928644132636LL;
	volatile uint64_t t132 = 232925LLU;

    t132 = (x549%((x550>x551)!=x552));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x553 = 22999180U;
	int16_t x555 = -19;
	int64_t x556 = INT64_MIN;
	uint32_t t133 = 11U;

    t133 = (x553%((x554>x555)!=x556));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x557 = -1;
	int32_t x558 = 12;
	static uint8_t x559 = 23U;
	uint8_t x560 = UINT8_MAX;
	int32_t t134 = 124;

    t134 = (x557%((x558>x559)!=x560));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x563 = INT8_MIN;
	volatile int32_t x564 = -1;

    t135 = (x561%((x562>x563)!=x564));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x565 = INT8_MAX;
	static int32_t x566 = INT32_MIN;
	static int64_t x567 = INT64_MAX;
	volatile int32_t t136 = -654654439;

    t136 = (x565%((x566>x567)!=x568));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x569 = -6412314407678LL;
	uint64_t x570 = 169843603654LLU;
	int64_t x571 = 489265987LL;
	uint32_t x572 = 8U;
	volatile int64_t t137 = -1936677278446LL;

    t137 = (x569%((x570>x571)!=x572));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x574 = INT8_MIN;
	int32_t x575 = -1582;
	static volatile int32_t t138 = -106970463;

    t138 = (x573%((x574>x575)!=x576));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x577 = 615U;
	static int8_t x578 = INT8_MIN;
	volatile int64_t x579 = INT64_MAX;
	int64_t x580 = -1LL;

    t139 = (x577%((x578>x579)!=x580));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x581 = 2466U;
	uint16_t x582 = 31599U;
	int8_t x583 = INT8_MIN;
	int32_t x584 = -1;
	uint32_t t140 = 251U;

    t140 = (x581%((x582>x583)!=x584));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x585 = -1;
	uint32_t x587 = 960U;
	static int32_t x588 = INT32_MIN;
	volatile int32_t t141 = 59406;

    t141 = (x585%((x586>x587)!=x588));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x589 = 123U;
	volatile int64_t x590 = -1LL;
	uint8_t x592 = 1U;

    t142 = (x589%((x590>x591)!=x592));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x593 = 1111726LLU;
	volatile int16_t x594 = INT16_MIN;
	static int16_t x596 = -1;

    t143 = (x593%((x594>x595)!=x596));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x597 = 0U;
	static volatile uint32_t x598 = 50958U;
	int64_t x599 = INT64_MIN;
	volatile uint32_t t144 = 10967213U;

    t144 = (x597%((x598>x599)!=x600));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x602 = -1;
	uint32_t x603 = UINT32_MAX;
	int32_t x604 = -1;
	static int32_t t145 = -7590754;

    t145 = (x601%((x602>x603)!=x604));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x605 = UINT16_MAX;
	static uint64_t x606 = 703968765723LLU;
	uint8_t x607 = UINT8_MAX;
	static int64_t x608 = INT64_MIN;
	volatile int32_t t146 = 197175931;

    t146 = (x605%((x606>x607)!=x608));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x609 = 1;
	static volatile int64_t x610 = INT64_MIN;
	uint16_t x611 = 103U;
	int64_t x612 = 32169442LL;
	int32_t t147 = -735446;

    t147 = (x609%((x610>x611)!=x612));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x613 = INT64_MIN;
	int32_t x615 = INT32_MIN;
	uint8_t x616 = 32U;
	int64_t t148 = 37721709LL;

    t148 = (x613%((x614>x615)!=x616));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x617 = INT8_MIN;
	int32_t x618 = 1188229;
	static uint64_t x619 = 32294161621104383LLU;
	int8_t x620 = INT8_MIN;
	volatile int32_t t149 = 0;

    t149 = (x617%((x618>x619)!=x620));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x621 = 2U;
	uint16_t x622 = 8U;
	int16_t x623 = INT16_MIN;
	static uint32_t x624 = 90579681U;
	volatile int32_t t150 = 265792;

    t150 = (x621%((x622>x623)!=x624));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x630 = 3U;
	uint8_t x631 = 10U;

    t151 = (x629%((x630>x631)!=x632));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x633 = -1854;
	int8_t x634 = INT8_MIN;
	volatile int16_t x635 = -96;
	static volatile int32_t t152 = 1;

    t152 = (x633%((x634>x635)!=x636));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x637 = INT64_MAX;
	static uint8_t x638 = 60U;
	int16_t x639 = -1775;

    t153 = (x637%((x638>x639)!=x640));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x641 = INT32_MIN;
	uint8_t x642 = UINT8_MAX;
	uint8_t x643 = UINT8_MAX;
	int32_t t154 = 2;

    t154 = (x641%((x642>x643)!=x644));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x646 = INT64_MIN;
	uint32_t x647 = UINT32_MAX;
	static int64_t x648 = INT64_MAX;
	int64_t t155 = -362660378165258LL;

    t155 = (x645%((x646>x647)!=x648));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x649 = 436965842662LLU;
	uint32_t x650 = UINT32_MAX;
	int8_t x652 = INT8_MAX;
	volatile uint64_t t156 = 2124249028902753064LLU;

    t156 = (x649%((x650>x651)!=x652));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x653 = 89U;
	volatile int8_t x654 = INT8_MAX;
	static uint32_t x655 = UINT32_MAX;
	volatile int8_t x656 = 16;
	int32_t t157 = -59378766;

    t157 = (x653%((x654>x655)!=x656));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x657 = UINT16_MAX;
	volatile uint16_t x658 = 0U;
	int8_t x659 = -13;
	int16_t x660 = INT16_MIN;

    t158 = (x657%((x658>x659)!=x660));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x661 = 461749627288LL;
	int16_t x662 = INT16_MIN;
	uint64_t x663 = 30523599519LLU;
	int64_t x664 = 3589658177436540LL;
	volatile int64_t t159 = -405812106581585669LL;

    t159 = (x661%((x662>x663)!=x664));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x666 = INT8_MIN;
	int32_t x668 = -1;
	int32_t t160 = 1653;

    t160 = (x665%((x666>x667)!=x668));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x669 = 376U;
	int32_t x670 = -1;
	int64_t x671 = 3LL;
	static int16_t x672 = -1;
	volatile uint32_t t161 = 49U;

    t161 = (x669%((x670>x671)!=x672));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x673 = -1LL;
	int32_t x674 = INT32_MIN;
	volatile int64_t x675 = 516606488200710LL;
	int64_t t162 = -3285033275LL;

    t162 = (x673%((x674>x675)!=x676));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x679 = -1;
	uint64_t x680 = 14LLU;
	static int64_t t163 = 24539LL;

    t163 = (x677%((x678>x679)!=x680));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x681 = 1309452858154636072LLU;
	int64_t x682 = 239774642100225614LL;
	int64_t x683 = INT64_MAX;
	volatile uint64_t t164 = 5857089334049LLU;

    t164 = (x681%((x682>x683)!=x684));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x685 = INT32_MAX;
	volatile uint32_t x686 = 902650U;
	uint16_t x687 = UINT16_MAX;
	int8_t x688 = INT8_MAX;
	static volatile int32_t t165 = -109594;

    t165 = (x685%((x686>x687)!=x688));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x689 = INT32_MIN;
	int16_t x691 = 24;
	int16_t x692 = INT16_MAX;
	int32_t t166 = 0;

    t166 = (x689%((x690>x691)!=x692));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x697 = 13765195522620534LL;
	uint16_t x698 = 7U;
	int64_t x699 = INT64_MAX;
	int32_t x700 = INT32_MIN;
	int64_t t167 = 1188948584166LL;

    t167 = (x697%((x698>x699)!=x700));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x701 = INT64_MIN;
	int64_t x702 = INT64_MAX;
	int32_t x703 = INT32_MIN;
	int32_t x704 = INT32_MIN;
	int64_t t168 = 23971LL;

    t168 = (x701%((x702>x703)!=x704));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x705 = -3;
	uint32_t x706 = 15264U;
	static int8_t x707 = 0;
	volatile uint32_t x708 = UINT32_MAX;
	static volatile int32_t t169 = 6390054;

    t169 = (x705%((x706>x707)!=x708));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x710 = -57;
	int16_t x712 = INT16_MIN;
	volatile int32_t t170 = 15772052;

    t170 = (x709%((x710>x711)!=x712));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x713 = INT16_MAX;
	int32_t x716 = 899350;
	static int32_t t171 = -1;

    t171 = (x713%((x714>x715)!=x716));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x718 = -24580364428469667LL;
	int32_t x720 = INT32_MIN;
	uint64_t t172 = 207763LLU;

    t172 = (x717%((x718>x719)!=x720));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x721 = INT16_MIN;
	int16_t x722 = -1;
	int32_t x723 = -31;
	int32_t t173 = 976715125;

    t173 = (x721%((x722>x723)!=x724));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x725 = -89;
	int16_t x726 = 0;
	uint32_t x727 = 65U;
	int32_t x728 = -1;

    t174 = (x725%((x726>x727)!=x728));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x729 = -1;
	uint32_t x730 = UINT32_MAX;
	uint8_t x731 = UINT8_MAX;
	volatile int32_t t175 = -7;

    t175 = (x729%((x730>x731)!=x732));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x734 = INT16_MIN;
	uint16_t x735 = 563U;
	int16_t x736 = INT16_MIN;
	volatile int32_t t176 = 22;

    t176 = (x733%((x734>x735)!=x736));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x737 = -912561472LL;
	int16_t x738 = -195;
	int16_t x739 = INT16_MIN;
	static uint32_t x740 = 0U;
	static volatile int64_t t177 = 285LL;

    t177 = (x737%((x738>x739)!=x740));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x744 = UINT64_MAX;
	volatile int32_t t178 = 18;

    t178 = (x741%((x742>x743)!=x744));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x746 = -1;
	int8_t x747 = INT8_MAX;
	volatile uint16_t x748 = 20U;

    t179 = (x745%((x746>x747)!=x748));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x750 = 12U;
	static uint16_t x751 = 5177U;
	volatile int16_t x752 = INT16_MIN;
	static volatile int32_t t180 = 1;

    t180 = (x749%((x750>x751)!=x752));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x753 = 575307345352233167LLU;
	volatile int64_t x754 = 0LL;
	static int64_t x755 = -23636936LL;
	uint16_t x756 = 370U;
	static volatile uint64_t t181 = 36LLU;

    t181 = (x753%((x754>x755)!=x756));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x758 = 1598788U;
	volatile uint16_t x759 = 0U;
	int32_t t182 = -202185;

    t182 = (x757%((x758>x759)!=x760));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x761 = -1LL;
	int32_t x762 = -1;
	volatile int64_t x763 = -967506612278573197LL;
	int8_t x764 = 33;
	int64_t t183 = 13896093LL;

    t183 = (x761%((x762>x763)!=x764));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x765 = 66935384LL;
	uint64_t x766 = 2001388738156418LLU;
	volatile uint8_t x767 = 1U;
	int32_t x768 = INT32_MIN;
	static int64_t t184 = 91LL;

    t184 = (x765%((x766>x767)!=x768));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x769 = INT8_MIN;
	static volatile int64_t x770 = INT64_MIN;
	uint64_t x771 = 1832327424394248LLU;
	volatile uint64_t x772 = 327876497390LLU;
	volatile int32_t t185 = -911;

    t185 = (x769%((x770>x771)!=x772));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x773 = 467LL;
	int16_t x774 = 1;
	uint8_t x775 = UINT8_MAX;
	static uint16_t x776 = UINT16_MAX;
	volatile int64_t t186 = 642160LL;

    t186 = (x773%((x774>x775)!=x776));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x777 = 8U;
	volatile uint32_t x779 = UINT32_MAX;
	static int32_t x780 = INT32_MIN;
	int32_t t187 = 326175;

    t187 = (x777%((x778>x779)!=x780));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x782 = -113966988;
	uint32_t x783 = UINT32_MAX;
	int8_t x784 = INT8_MAX;
	int32_t t188 = -35431;

    t188 = (x781%((x782>x783)!=x784));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x785 = 342360U;
	static volatile int64_t x786 = INT64_MAX;
	static int16_t x787 = 2;
	uint32_t x788 = UINT32_MAX;
	volatile uint32_t t189 = 57751U;

    t189 = (x785%((x786>x787)!=x788));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x789 = 1294379U;
	static int64_t x790 = INT64_MIN;
	int64_t x791 = -1LL;
	volatile uint64_t x792 = UINT64_MAX;
	volatile uint32_t t190 = 34U;

    t190 = (x789%((x790>x791)!=x792));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x794 = UINT64_MAX;
	int16_t x795 = -1;
	uint16_t x796 = 5U;
	volatile int32_t t191 = -5687;

    t191 = (x793%((x794>x795)!=x796));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x801 = 3765951222LLU;
	int8_t x802 = INT8_MIN;
	uint64_t x803 = 81989535LLU;
	volatile uint16_t x804 = UINT16_MAX;
	volatile uint64_t t192 = 5LLU;

    t192 = (x801%((x802>x803)!=x804));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x805 = -1LL;
	volatile int8_t x806 = INT8_MIN;
	int8_t x807 = 0;
	int8_t x808 = -1;
	static volatile int64_t t193 = -170126847LL;

    t193 = (x805%((x806>x807)!=x808));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x810 = -1;
	uint8_t x811 = UINT8_MAX;
	volatile int8_t x812 = INT8_MAX;
	volatile int32_t t194 = 3515619;

    t194 = (x809%((x810>x811)!=x812));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x813 = INT8_MIN;
	uint64_t x814 = UINT64_MAX;
	uint32_t x815 = UINT32_MAX;
	int64_t x816 = -23787390357128411LL;
	static int32_t t195 = 600;

    t195 = (x813%((x814>x815)!=x816));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x817 = 0;
	uint16_t x819 = UINT16_MAX;
	volatile uint8_t x820 = UINT8_MAX;

    t196 = (x817%((x818>x819)!=x820));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x822 = INT16_MIN;
	int32_t x823 = -63627;
	int8_t x824 = INT8_MAX;
	static int64_t t197 = 1016LL;

    t197 = (x821%((x822>x823)!=x824));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x825 = 740321886;
	int32_t x826 = INT32_MIN;
	volatile int16_t x827 = INT16_MIN;
	volatile int32_t t198 = 11595557;

    t198 = (x825%((x826>x827)!=x828));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x829 = 1591810612U;
	volatile int8_t x830 = INT8_MIN;
	static uint16_t x832 = 4U;

    t199 = (x829%((x830>x831)!=x832));

    if (t199 != 0U) { NG(); } else { ; }
	
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

