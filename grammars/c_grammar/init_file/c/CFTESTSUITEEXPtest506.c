
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

static volatile uint16_t x41 = 0U;
uint8_t x50 = 0U;
int8_t x53 = INT8_MAX;
uint32_t x55 = UINT32_MAX;
int32_t x59 = INT32_MAX;
static int8_t x68 = 19;
int32_t t8 = -288968739;
int64_t x81 = INT64_MAX;
int32_t x90 = 3085084;
uint64_t x99 = UINT64_MAX;
int32_t x118 = -170;
uint8_t x120 = UINT8_MAX;
uint32_t x121 = UINT32_MAX;
static uint64_t x124 = UINT64_MAX;
volatile uint32_t t15 = UINT32_MAX;
static volatile uint32_t t16 = 6233985U;
uint32_t x136 = 1583U;
volatile int64_t x140 = -1LL;
int32_t x141 = INT32_MIN;
uint32_t x147 = UINT32_MAX;
int64_t x152 = INT64_MIN;
int16_t x186 = INT16_MIN;
volatile int16_t x190 = INT16_MIN;
static volatile int32_t x194 = INT32_MAX;
volatile int8_t x199 = -1;
int16_t x201 = INT16_MIN;
static uint16_t x214 = 3548U;
static uint64_t t34 = 130287409LLU;
int64_t x217 = INT64_MAX;
uint16_t x220 = 2U;
int16_t x221 = 22;
static uint64_t x223 = 49900806572LLU;
int8_t x242 = INT8_MIN;
volatile int8_t x246 = -1;
int32_t x248 = 2356567;
uint64_t x253 = UINT64_MAX;
volatile uint64_t t40 = 4377212905604661LLU;
int16_t x257 = INT16_MAX;
static volatile int8_t x260 = -1;
int64_t x261 = -361726011LL;
uint16_t x271 = 6U;
int64_t x276 = INT64_MIN;
int64_t x280 = INT64_MIN;
static int8_t x301 = 27;
int32_t x302 = -1;
static uint32_t x319 = 223U;
uint64_t x322 = 178539LLU;
uint16_t x326 = 15234U;
int16_t x329 = -1;
uint64_t t58 = 278550598454364LLU;
volatile uint8_t x367 = 5U;
volatile int8_t x368 = -34;
int16_t x377 = INT16_MIN;
uint32_t x385 = 127986U;
volatile uint32_t t62 = 123676481U;
volatile uint32_t x398 = UINT32_MAX;
uint64_t x401 = 18600914540211LLU;
int16_t x406 = INT16_MAX;
int64_t x421 = INT64_MIN;
int64_t t67 = INT64_MIN;
int64_t x425 = INT64_MAX;
volatile int8_t x429 = 22;
int8_t x438 = INT8_MIN;
int32_t x440 = 780;
int16_t x443 = 517;
volatile int32_t t71 = 645433647;
int32_t x446 = -1;
uint16_t x459 = UINT16_MAX;
static uint8_t x460 = 37U;
static int16_t x461 = -98;
volatile int32_t t75 = 9;
int8_t x465 = 1;
volatile uint64_t x467 = 33512512406148991LLU;
int16_t x471 = -7;
uint64_t t77 = 38LLU;
int32_t x477 = -1;
int8_t x482 = INT8_MIN;
static volatile uint32_t x484 = 5975U;
int32_t t81 = 762454464;
volatile int8_t x505 = -1;
int8_t x506 = -1;
int64_t x509 = INT64_MIN;
int64_t x512 = -1LL;
int64_t t83 = INT64_MIN;
volatile uint32_t x521 = 67879199U;
static uint32_t t85 = 227687876U;
static int32_t x529 = INT32_MAX;
int32_t x532 = INT32_MIN;
volatile int32_t t87 = 739;
int8_t x554 = INT8_MIN;
uint8_t x555 = 15U;
int64_t x556 = INT64_MAX;
static int32_t x561 = INT32_MAX;
int8_t x574 = -1;
static volatile int8_t x587 = 0;
static int16_t x589 = INT16_MIN;
static int32_t x592 = -1;
int8_t x595 = -6;
int64_t x598 = -17001330819LL;
static int16_t x603 = 3;
uint32_t x612 = UINT32_MAX;
int16_t x613 = 1687;
uint64_t x614 = 757435940723088528LLU;
uint8_t x615 = 0U;
int8_t x627 = INT8_MAX;
int16_t x636 = -17;
static int64_t t107 = 27335361LL;
int8_t x648 = INT8_MIN;
volatile int32_t t109 = -29817114;
static int64_t x653 = -1LL;
volatile uint64_t x656 = 10734090946382070LLU;
uint32_t x658 = 11309U;
int64_t x660 = INT64_MAX;
uint16_t x662 = 19U;
volatile int32_t t114 = -8;
uint16_t x673 = 4662U;
uint64_t x683 = UINT64_MAX;
volatile uint32_t x687 = UINT32_MAX;
uint32_t x693 = UINT32_MAX;
volatile uint32_t x714 = 359443657U;
int64_t x733 = -1LL;
uint64_t x742 = UINT64_MAX;
uint32_t x746 = 1523U;
static uint8_t x751 = 41U;
uint8_t x752 = 2U;
int32_t t127 = -1;
int64_t t128 = 511LL;
int32_t x780 = -100606;
volatile int64_t x784 = INT64_MIN;
int64_t x787 = 2245207821LL;
uint64_t t131 = 74LLU;
uint32_t x796 = 520507344U;
int32_t t133 = 112854;
uint64_t x797 = UINT64_MAX;
int16_t x802 = INT16_MAX;
volatile uint16_t x806 = UINT16_MAX;
uint32_t t136 = UINT32_MAX;
int16_t x810 = INT16_MIN;
int16_t x819 = INT16_MAX;
volatile int8_t x826 = INT8_MIN;
volatile int64_t x842 = -1LL;
uint32_t x855 = UINT32_MAX;
int32_t x871 = 5137;
int8_t x877 = -1;
uint16_t x879 = 0U;
uint8_t x883 = UINT8_MAX;
volatile int32_t t149 = -3058;
volatile int64_t t150 = INT64_MIN;
uint8_t x895 = 2U;
int32_t x897 = INT32_MIN;
int8_t x901 = 1;
static volatile uint64_t x903 = UINT64_MAX;
static int32_t x913 = -1;
uint32_t x914 = 188015990U;
int16_t x915 = INT16_MAX;
uint64_t x917 = 1753177974452LLU;
static uint64_t t155 = 1030073460836LLU;
uint32_t x928 = 2U;
uint32_t t157 = UINT32_MAX;
static uint8_t x946 = 84U;
volatile uint16_t x949 = 143U;
volatile int32_t t160 = -494;
uint32_t x961 = 15680U;
int16_t x964 = -1;
uint32_t t162 = 4142928U;
int8_t x974 = -6;
int16_t x1014 = -1;
uint8_t x1019 = 43U;
int64_t x1024 = INT64_MIN;
uint64_t t168 = 2300672081LLU;
int64_t x1025 = INT64_MIN;
volatile int64_t t169 = INT64_MIN;
uint32_t x1036 = UINT32_MAX;
volatile int32_t t173 = 240557;
int32_t t176 = -78977064;
static int16_t x1062 = INT16_MIN;
int16_t x1064 = -1;
int64_t x1066 = -96205LL;
int64_t x1070 = INT64_MIN;
static volatile uint64_t x1071 = 59573035114259931LLU;
static uint64_t x1080 = 1619762848LLU;
volatile int32_t x1088 = -1;
int64_t x1093 = -4272615612821LL;
static int8_t x1107 = INT8_MAX;
uint8_t x1118 = 12U;
uint8_t x1122 = UINT8_MAX;
volatile int32_t t189 = 31892;
int16_t x1134 = INT16_MAX;
static int16_t x1135 = 395;
static int32_t t190 = 18;
static volatile uint8_t x1138 = 5U;
int32_t x1140 = INT32_MIN;
int32_t t192 = -996;
static uint32_t x1146 = 55015443U;
volatile int64_t x1147 = -18075166LL;
int8_t x1159 = -1;
int32_t t195 = -1795;
volatile uint32_t x1161 = 122935U;
int16_t x1164 = 1;
uint64_t x1166 = UINT64_MAX;
uint8_t x1167 = UINT8_MAX;
static uint64_t x1168 = 2332980LLU;
int32_t x1187 = -1;


void f0(void) {
    	int8_t x1 = -8;
	int16_t x2 = -452;
	volatile int16_t x3 = INT16_MAX;
	int8_t x4 = INT8_MAX;
	int32_t t0 = 32551;

    t0 = (x1-((x2*x3)>x4));

    if (t0 != -8) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = -14158;
	static int64_t x10 = -5556900LL;
	static uint64_t x11 = UINT64_MAX;
	uint64_t x12 = 1456997065123186LLU;
	volatile int32_t t1 = -1554836;

    t1 = (x9-((x10*x11)>x12));

    if (t1 != -14158) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x21 = UINT16_MAX;
	uint16_t x22 = 14235U;
	int8_t x23 = -1;
	uint32_t x24 = 73268U;
	volatile int32_t t2 = -5;

    t2 = (x21-((x22*x23)>x24));

    if (t2 != 65534) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x29 = INT8_MIN;
	int8_t x30 = INT8_MAX;
	static int16_t x31 = INT16_MIN;
	static int64_t x32 = INT64_MAX;
	int32_t t3 = 14;

    t3 = (x29-((x30*x31)>x32));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x42 = 88U;
	int16_t x43 = -1;
	int64_t x44 = -38310428755283764LL;
	volatile int32_t t4 = -37328373;

    t4 = (x41-((x42*x43)>x44));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x49 = 35656565622647301LL;
	volatile int32_t x51 = -137634585;
	int32_t x52 = INT32_MIN;
	int64_t t5 = 949091LL;

    t5 = (x49-((x50*x51)>x52));

    if (t5 != 35656565622647300LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x54 = -1;
	int32_t x56 = -375;
	int32_t t6 = 2560;

    t6 = (x53-((x54*x55)>x56));

    if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x57 = -258753;
	uint64_t x58 = 1016328321774LLU;
	static int32_t x60 = INT32_MAX;
	int32_t t7 = 4355;

    t7 = (x57-((x58*x59)>x60));

    if (t7 != -258754) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x65 = INT32_MAX;
	volatile uint64_t x66 = UINT64_MAX;
	volatile int32_t x67 = 324350;

    t8 = (x65-((x66*x67)>x68));

    if (t8 != 2147483646) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x69 = UINT32_MAX;
	static volatile int64_t x70 = -1LL;
	static uint32_t x71 = 635519048U;
	int64_t x72 = -4923LL;
	static uint32_t t9 = UINT32_MAX;

    t9 = (x69-((x70*x71)>x72));

    if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x82 = INT8_MIN;
	int16_t x83 = 70;
	int32_t x84 = -204;
	int64_t t10 = INT64_MAX;

    t10 = (x81-((x82*x83)>x84));

    if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x89 = 81588;
	uint8_t x91 = 46U;
	static int16_t x92 = INT16_MIN;
	int32_t t11 = -17337663;

    t11 = (x89-((x90*x91)>x92));

    if (t11 != 81587) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x97 = 5272552210310849396LLU;
	int16_t x98 = INT16_MIN;
	int8_t x100 = -39;
	static uint64_t t12 = 111405660696545LLU;

    t12 = (x97-((x98*x99)>x100));

    if (t12 != 5272552210310849396LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x109 = 12U;
	int8_t x110 = -26;
	int8_t x111 = 1;
	int8_t x112 = 1;
	int32_t t13 = -153680;

    t13 = (x109-((x110*x111)>x112));

    if (t13 != 12) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x117 = 2U;
	static int16_t x119 = -223;
	int32_t t14 = -89;

    t14 = (x117-((x118*x119)>x120));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x122 = -1;
	uint32_t x123 = 9U;

    t15 = (x121-((x122*x123)>x124));

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x129 = UINT32_MAX;
	uint64_t x130 = 1825116695535LLU;
	int16_t x131 = -1;
	uint8_t x132 = UINT8_MAX;

    t16 = (x129-((x130*x131)>x132));

    if (t16 != 4294967294U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x133 = 3567794259169LLU;
	uint16_t x134 = 5582U;
	static uint64_t x135 = UINT64_MAX;
	uint64_t t17 = 53997725LLU;

    t17 = (x133-((x134*x135)>x136));

    if (t17 != 3567794259168LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x137 = 14U;
	int64_t x138 = 6536LL;
	uint16_t x139 = 799U;
	static int32_t t18 = 31490;

    t18 = (x137-((x138*x139)>x140));

    if (t18 != 13) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x142 = -1;
	int16_t x143 = -1;
	uint8_t x144 = 94U;
	int32_t t19 = INT32_MIN;

    t19 = (x141-((x142*x143)>x144));

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x145 = INT64_MIN;
	volatile int8_t x146 = -3;
	volatile uint64_t x148 = 212218903431529189LLU;
	static volatile int64_t t20 = INT64_MIN;

    t20 = (x145-((x146*x147)>x148));

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x149 = 139888176888673LL;
	volatile uint32_t x150 = 12445U;
	int16_t x151 = INT16_MIN;
	int64_t t21 = -1LL;

    t21 = (x149-((x150*x151)>x152));

    if (t21 != 139888176888672LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x157 = INT16_MIN;
	volatile uint64_t x158 = UINT64_MAX;
	static int32_t x159 = INT32_MIN;
	int8_t x160 = -41;
	volatile int32_t t22 = -211459;

    t22 = (x157-((x158*x159)>x160));

    if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x161 = -524872234796LL;
	int16_t x162 = -105;
	static int16_t x163 = INT16_MIN;
	volatile uint16_t x164 = UINT16_MAX;
	volatile int64_t t23 = -2148LL;

    t23 = (x161-((x162*x163)>x164));

    if (t23 != -524872234797LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x165 = 177888422LLU;
	int16_t x166 = 1820;
	volatile int32_t x167 = -6059;
	static int16_t x168 = 3027;
	static uint64_t t24 = 1942LLU;

    t24 = (x165-((x166*x167)>x168));

    if (t24 != 177888422LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x169 = -1;
	uint64_t x170 = 7745687778337364138LLU;
	int16_t x171 = -1;
	volatile uint16_t x172 = 24894U;
	int32_t t25 = -102;

    t25 = (x169-((x170*x171)>x172));

    if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x173 = INT64_MAX;
	int8_t x174 = INT8_MIN;
	int16_t x175 = INT16_MIN;
	volatile int64_t x176 = -215LL;
	int64_t t26 = 1871190LL;

    t26 = (x173-((x174*x175)>x176));

    if (t26 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x177 = INT64_MIN;
	static uint32_t x178 = UINT32_MAX;
	static int64_t x179 = 22LL;
	int64_t x180 = 3750811599959185001LL;
	int64_t t27 = INT64_MIN;

    t27 = (x177-((x178*x179)>x180));

    if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x185 = INT16_MIN;
	int8_t x187 = 0;
	uint64_t x188 = 6042LLU;
	static int32_t t28 = -124;

    t28 = (x185-((x186*x187)>x188));

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x189 = INT16_MIN;
	uint16_t x191 = UINT16_MAX;
	static uint64_t x192 = 9350LLU;
	int32_t t29 = 6572;

    t29 = (x189-((x190*x191)>x192));

    if (t29 != -32769) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x193 = -1;
	uint32_t x195 = 0U;
	int8_t x196 = INT8_MIN;
	int32_t t30 = -4;

    t30 = (x193-((x194*x195)>x196));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x197 = INT64_MIN;
	volatile uint16_t x198 = 53U;
	int64_t x200 = -1LL;
	int64_t t31 = INT64_MIN;

    t31 = (x197-((x198*x199)>x200));

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x202 = -30656844;
	int64_t x203 = -490034935LL;
	uint8_t x204 = 57U;
	volatile int32_t t32 = -39751;

    t32 = (x201-((x202*x203)>x204));

    if (t32 != -32769) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x205 = INT16_MIN;
	static uint32_t x206 = UINT32_MAX;
	static uint64_t x207 = 39790252625LLU;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t33 = -110105;

    t33 = (x205-((x206*x207)>x208));

    if (t33 != -32769) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x213 = 0LLU;
	static volatile uint8_t x215 = 1U;
	int64_t x216 = 2413397108LL;

    t34 = (x213-((x214*x215)>x216));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x218 = 0;
	int32_t x219 = -7172;
	volatile int64_t t35 = INT64_MAX;

    t35 = (x217-((x218*x219)>x220));

    if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint16_t x222 = 627U;
	volatile int64_t x224 = -1LL;
	int32_t t36 = -59585247;

    t36 = (x221-((x222*x223)>x224));

    if (t36 != 22) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x237 = UINT32_MAX;
	int32_t x238 = -589;
	uint64_t x239 = 60300244176LLU;
	int64_t x240 = -1LL;
	uint32_t t37 = UINT32_MAX;

    t37 = (x237-((x238*x239)>x240));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x241 = UINT64_MAX;
	static int8_t x243 = 1;
	static int16_t x244 = -1;
	static volatile uint64_t t38 = UINT64_MAX;

    t38 = (x241-((x242*x243)>x244));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x245 = INT32_MIN;
	int8_t x247 = INT8_MAX;
	int32_t t39 = INT32_MIN;

    t39 = (x245-((x246*x247)>x248));

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x254 = INT16_MIN;
	volatile uint32_t x255 = 2U;
	int64_t x256 = -1LL;

    t40 = (x253-((x254*x255)>x256));

    if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x258 = 19131LL;
	int8_t x259 = INT8_MIN;
	volatile int32_t t41 = 19779394;

    t41 = (x257-((x258*x259)>x260));

    if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x262 = 152;
	static int16_t x263 = -1;
	int32_t x264 = INT32_MIN;
	static int64_t t42 = 84LL;

    t42 = (x261-((x262*x263)>x264));

    if (t42 != -361726012LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x269 = 25U;
	uint8_t x270 = 0U;
	volatile uint64_t x272 = UINT64_MAX;
	int32_t t43 = -1;

    t43 = (x269-((x270*x271)>x272));

    if (t43 != 25) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x273 = INT16_MAX;
	int8_t x274 = 1;
	uint16_t x275 = 458U;
	volatile int32_t t44 = -97;

    t44 = (x273-((x274*x275)>x276));

    if (t44 != 32766) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x277 = UINT16_MAX;
	int64_t x278 = -12125LL;
	static int32_t x279 = INT32_MIN;
	volatile int32_t t45 = 30328;

    t45 = (x277-((x278*x279)>x280));

    if (t45 != 65534) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x281 = 3162;
	int16_t x282 = 1;
	uint8_t x283 = 16U;
	uint16_t x284 = 1U;
	int32_t t46 = -6641772;

    t46 = (x281-((x282*x283)>x284));

    if (t46 != 3161) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x289 = -1LL;
	uint8_t x290 = UINT8_MAX;
	uint16_t x291 = 19U;
	int8_t x292 = 5;
	static int64_t t47 = 1068461478LL;

    t47 = (x289-((x290*x291)>x292));

    if (t47 != -2LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x293 = UINT32_MAX;
	volatile int64_t x294 = -2LL;
	int16_t x295 = INT16_MAX;
	int8_t x296 = INT8_MIN;
	static uint32_t t48 = UINT32_MAX;

    t48 = (x293-((x294*x295)>x296));

    if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x297 = INT8_MIN;
	uint16_t x298 = 222U;
	volatile int8_t x299 = -1;
	int8_t x300 = -1;
	int32_t t49 = 31201241;

    t49 = (x297-((x298*x299)>x300));

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x303 = 1U;
	volatile int16_t x304 = -1;
	int32_t t50 = 57;

    t50 = (x301-((x302*x303)>x304));

    if (t50 != 27) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x313 = -34547894;
	static uint8_t x314 = 17U;
	uint8_t x315 = 2U;
	int64_t x316 = -560522299195LL;
	int32_t t51 = 530;

    t51 = (x313-((x314*x315)>x316));

    if (t51 != -34547895) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x317 = 165;
	static int8_t x318 = INT8_MIN;
	int64_t x320 = 7096943131615LL;
	static int32_t t52 = -426;

    t52 = (x317-((x318*x319)>x320));

    if (t52 != 165) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x321 = 27U;
	uint64_t x323 = UINT64_MAX;
	static int8_t x324 = INT8_MIN;
	int32_t t53 = 1227;

    t53 = (x321-((x322*x323)>x324));

    if (t53 != 27) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x325 = 1U;
	uint32_t x327 = UINT32_MAX;
	uint8_t x328 = UINT8_MAX;
	static int32_t t54 = -15;

    t54 = (x325-((x326*x327)>x328));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x330 = UINT8_MAX;
	int8_t x331 = -7;
	static int32_t x332 = 1;
	int32_t t55 = 6;

    t55 = (x329-((x330*x331)>x332));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x341 = 3;
	uint16_t x342 = 14378U;
	static volatile uint16_t x343 = 40U;
	int32_t x344 = -167946135;
	int32_t t56 = 18806931;

    t56 = (x341-((x342*x343)>x344));

    if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x345 = -189508003920935577LL;
	volatile int16_t x346 = 174;
	volatile uint32_t x347 = 171502U;
	uint32_t x348 = 889983286U;
	int64_t t57 = -3653LL;

    t57 = (x345-((x346*x347)>x348));

    if (t57 != -189508003920935577LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x349 = 14100707LLU;
	int32_t x350 = INT32_MIN;
	static uint64_t x351 = 8616LLU;
	int16_t x352 = 0;

    t58 = (x349-((x350*x351)>x352));

    if (t58 != 14100706LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x365 = -1;
	uint16_t x366 = 10875U;
	volatile int32_t t59 = -5919;

    t59 = (x365-((x366*x367)>x368));

    if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x373 = INT8_MAX;
	int32_t x374 = -1;
	static int64_t x375 = 3976151LL;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t60 = 1;

    t60 = (x373-((x374*x375)>x376));

    if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x378 = -1;
	uint16_t x379 = 3364U;
	volatile int8_t x380 = -1;
	int32_t t61 = -4465708;

    t61 = (x377-((x378*x379)>x380));

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x386 = 6U;
	int16_t x387 = INT16_MIN;
	uint64_t x388 = 58770565682LLU;

    t62 = (x385-((x386*x387)>x388));

    if (t62 != 127986U) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint8_t x393 = 28U;
	int8_t x394 = -1;
	uint32_t x395 = 334U;
	static int8_t x396 = -7;
	int32_t t63 = 475093;

    t63 = (x393-((x394*x395)>x396));

    if (t63 != 28) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x397 = 25436U;
	static int32_t x399 = INT32_MIN;
	volatile int16_t x400 = INT16_MAX;
	int32_t t64 = 13702879;

    t64 = (x397-((x398*x399)>x400));

    if (t64 != 25435) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x402 = UINT64_MAX;
	uint8_t x403 = 2U;
	static int32_t x404 = 1498;
	static uint64_t t65 = 1901LLU;

    t65 = (x401-((x402*x403)>x404));

    if (t65 != 18600914540210LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x405 = -19;
	int8_t x407 = INT8_MAX;
	volatile int8_t x408 = INT8_MAX;
	static volatile int32_t t66 = 46734796;

    t66 = (x405-((x406*x407)>x408));

    if (t66 != -20) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x422 = INT16_MIN;
	static int8_t x423 = 6;
	int16_t x424 = -1;

    t67 = (x421-((x422*x423)>x424));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x426 = -1LL;
	volatile int8_t x427 = 29;
	volatile int8_t x428 = INT8_MIN;
	volatile int64_t t68 = -22878775579LL;

    t68 = (x425-((x426*x427)>x428));

    if (t68 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x430 = 2U;
	uint16_t x431 = UINT16_MAX;
	int8_t x432 = INT8_MIN;
	int32_t t69 = 6826297;

    t69 = (x429-((x430*x431)>x432));

    if (t69 != 21) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x437 = UINT8_MAX;
	static uint64_t x439 = UINT64_MAX;
	volatile int32_t t70 = -8832175;

    t70 = (x437-((x438*x439)>x440));

    if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x441 = -1;
	int64_t x442 = -219384374789LL;
	uint64_t x444 = 31408693LLU;

    t71 = (x441-((x442*x443)>x444));

    if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x445 = -234;
	int16_t x447 = INT16_MAX;
	int32_t x448 = -19986;
	volatile int32_t t72 = 1460006;

    t72 = (x445-((x446*x447)>x448));

    if (t72 != -234) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x453 = -1;
	uint32_t x454 = UINT32_MAX;
	volatile int16_t x455 = 1;
	int8_t x456 = -3;
	volatile int32_t t73 = 13;

    t73 = (x453-((x454*x455)>x456));

    if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x457 = UINT64_MAX;
	int16_t x458 = INT16_MIN;
	static uint64_t t74 = UINT64_MAX;

    t74 = (x457-((x458*x459)>x460));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x462 = INT8_MIN;
	int16_t x463 = INT16_MAX;
	uint8_t x464 = 4U;

    t75 = (x461-((x462*x463)>x464));

    if (t75 != -98) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x466 = 1;
	uint8_t x468 = 12U;
	static volatile int32_t t76 = 642249;

    t76 = (x465-((x466*x467)>x468));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x469 = 60394807LLU;
	int8_t x470 = INT8_MIN;
	volatile int64_t x472 = 549561086687LL;

    t77 = (x469-((x470*x471)>x472));

    if (t77 != 60394807LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x478 = 33U;
	int16_t x479 = INT16_MIN;
	int8_t x480 = INT8_MAX;
	volatile int32_t t78 = -2666032;

    t78 = (x477-((x478*x479)>x480));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x481 = INT64_MIN;
	volatile uint64_t x483 = UINT64_MAX;
	int64_t t79 = INT64_MIN;

    t79 = (x481-((x482*x483)>x484));

    if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x485 = 3904528U;
	uint16_t x486 = 21693U;
	int8_t x487 = INT8_MIN;
	int16_t x488 = -1;
	volatile uint32_t t80 = 7904U;

    t80 = (x485-((x486*x487)>x488));

    if (t80 != 3904528U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x497 = INT8_MIN;
	static uint16_t x498 = UINT16_MAX;
	uint64_t x499 = UINT64_MAX;
	static int64_t x500 = 1104908103083565979LL;

    t81 = (x497-((x498*x499)>x500));

    if (t81 != -129) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x507 = UINT8_MAX;
	static uint16_t x508 = 30U;
	volatile int32_t t82 = 328806;

    t82 = (x505-((x506*x507)>x508));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x510 = -205985224813207LL;
	volatile int16_t x511 = INT16_MAX;

    t83 = (x509-((x510*x511)>x512));

    if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x517 = -7331651LL;
	volatile int32_t x518 = 127;
	int64_t x519 = -1LL;
	uint64_t x520 = UINT64_MAX;
	static volatile int64_t t84 = -13713LL;

    t84 = (x517-((x518*x519)>x520));

    if (t84 != -7331651LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x522 = 1;
	uint8_t x523 = 3U;
	int8_t x524 = INT8_MIN;

    t85 = (x521-((x522*x523)>x524));

    if (t85 != 67879198U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x525 = -1LL;
	uint16_t x526 = 76U;
	int32_t x527 = -1;
	uint8_t x528 = 30U;
	int64_t t86 = 850166LL;

    t86 = (x525-((x526*x527)>x528));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x530 = INT16_MIN;
	static int64_t x531 = -1LL;

    t87 = (x529-((x530*x531)>x532));

    if (t87 != 2147483646) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x545 = 203150402U;
	int8_t x546 = 30;
	volatile uint8_t x547 = 1U;
	int64_t x548 = 516621651333071LL;
	uint32_t t88 = 12U;

    t88 = (x545-((x546*x547)>x548));

    if (t88 != 203150402U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x549 = UINT64_MAX;
	volatile uint64_t x550 = UINT64_MAX;
	int32_t x551 = INT32_MAX;
	static int64_t x552 = -1LL;
	volatile uint64_t t89 = UINT64_MAX;

    t89 = (x549-((x550*x551)>x552));

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x553 = INT8_MIN;
	int32_t t90 = 172;

    t90 = (x553-((x554*x555)>x556));

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x562 = -4859246;
	int8_t x563 = INT8_MIN;
	volatile int32_t x564 = INT32_MIN;
	volatile int32_t t91 = -43;

    t91 = (x561-((x562*x563)>x564));

    if (t91 != 2147483646) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x565 = INT16_MIN;
	int8_t x566 = 34;
	int64_t x567 = 5258897079869105LL;
	volatile int16_t x568 = -7;
	volatile int32_t t92 = 6;

    t92 = (x565-((x566*x567)>x568));

    if (t92 != -32769) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x573 = 1;
	int32_t x575 = -1;
	int32_t x576 = INT32_MAX;
	static volatile int32_t t93 = -695;

    t93 = (x573-((x574*x575)>x576));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x577 = INT32_MAX;
	static uint32_t x578 = 451U;
	static int16_t x579 = INT16_MAX;
	int8_t x580 = -1;
	volatile int32_t t94 = INT32_MAX;

    t94 = (x577-((x578*x579)>x580));

    if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x581 = INT32_MAX;
	static int32_t x582 = 3691;
	int8_t x583 = 1;
	uint8_t x584 = UINT8_MAX;
	volatile int32_t t95 = 21316511;

    t95 = (x581-((x582*x583)>x584));

    if (t95 != 2147483646) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x585 = 7840;
	volatile int8_t x586 = INT8_MIN;
	int64_t x588 = 49819057190968LL;
	static int32_t t96 = -7861;

    t96 = (x585-((x586*x587)>x588));

    if (t96 != 7840) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x590 = -1;
	volatile uint16_t x591 = 11U;
	int32_t t97 = -1;

    t97 = (x589-((x590*x591)>x592));

    if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x593 = INT64_MAX;
	volatile uint64_t x594 = 1LLU;
	int32_t x596 = INT32_MIN;
	volatile int64_t t98 = -60445112934792LL;

    t98 = (x593-((x594*x595)>x596));

    if (t98 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x597 = 0;
	int32_t x599 = 291691950;
	int64_t x600 = INT64_MIN;
	volatile int32_t t99 = 0;

    t99 = (x597-((x598*x599)>x600));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x601 = UINT32_MAX;
	static int16_t x602 = 180;
	uint64_t x604 = 6LLU;
	uint32_t t100 = 5U;

    t100 = (x601-((x602*x603)>x604));

    if (t100 != 4294967294U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x605 = UINT8_MAX;
	uint64_t x606 = UINT64_MAX;
	int8_t x607 = INT8_MAX;
	uint32_t x608 = 5959U;
	int32_t t101 = -40;

    t101 = (x605-((x606*x607)>x608));

    if (t101 != 254) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x609 = INT16_MIN;
	uint32_t x610 = UINT32_MAX;
	volatile int8_t x611 = INT8_MAX;
	int32_t t102 = -342;

    t102 = (x609-((x610*x611)>x612));

    if (t102 != -32768) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x616 = 6;
	int32_t t103 = 4660715;

    t103 = (x613-((x614*x615)>x616));

    if (t103 != 1687) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x617 = 9497;
	static int16_t x618 = INT16_MIN;
	int16_t x619 = 59;
	uint16_t x620 = UINT16_MAX;
	int32_t t104 = 14;

    t104 = (x617-((x618*x619)>x620));

    if (t104 != 9497) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x625 = INT16_MAX;
	volatile int64_t x626 = 44812906071606LL;
	static volatile uint8_t x628 = 32U;
	int32_t t105 = 31;

    t105 = (x625-((x626*x627)>x628));

    if (t105 != 32766) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x629 = -1;
	static uint32_t x630 = UINT32_MAX;
	uint64_t x631 = 85LLU;
	uint64_t x632 = 1LLU;
	int32_t t106 = 24687571;

    t106 = (x629-((x630*x631)>x632));

    if (t106 != -2) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x633 = -1LL;
	int8_t x634 = INT8_MIN;
	volatile int8_t x635 = INT8_MIN;

    t107 = (x633-((x634*x635)>x636));

    if (t107 != -2LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x637 = INT8_MIN;
	uint16_t x638 = 1605U;
	uint64_t x639 = 948LLU;
	volatile uint64_t x640 = UINT64_MAX;
	int32_t t108 = 2455;

    t108 = (x637-((x638*x639)>x640));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x645 = INT16_MIN;
	volatile int8_t x646 = INT8_MAX;
	volatile uint8_t x647 = 4U;

    t109 = (x645-((x646*x647)>x648));

    if (t109 != -32769) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x654 = 21U;
	static volatile int8_t x655 = INT8_MIN;
	static int64_t t110 = -4472465120892154LL;

    t110 = (x653-((x654*x655)>x656));

    if (t110 != -2LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x657 = 25U;
	uint64_t x659 = 16618628982383601LLU;
	static volatile uint32_t t111 = 405991U;

    t111 = (x657-((x658*x659)>x660));

    if (t111 != 25U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x661 = INT16_MIN;
	uint8_t x663 = 20U;
	int16_t x664 = INT16_MAX;
	int32_t t112 = 342551594;

    t112 = (x661-((x662*x663)>x664));

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x665 = 0;
	int16_t x666 = INT16_MIN;
	uint32_t x667 = 51820U;
	static int16_t x668 = -1;
	int32_t t113 = -843212;

    t113 = (x665-((x666*x667)>x668));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x669 = UINT8_MAX;
	static uint32_t x670 = 2993U;
	uint64_t x671 = UINT64_MAX;
	volatile uint64_t x672 = UINT64_MAX;

    t114 = (x669-((x670*x671)>x672));

    if (t114 != 255) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x674 = INT16_MIN;
	int16_t x675 = 124;
	int16_t x676 = INT16_MIN;
	static int32_t t115 = 1703;

    t115 = (x673-((x674*x675)>x676));

    if (t115 != 4662) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x677 = 1486655581233695195LLU;
	uint64_t x678 = UINT64_MAX;
	volatile int16_t x679 = INT16_MIN;
	int8_t x680 = 21;
	volatile uint64_t t116 = 44154321303994LLU;

    t116 = (x677-((x678*x679)>x680));

    if (t116 != 1486655581233695194LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x681 = -1085543983670LL;
	volatile int16_t x682 = INT16_MAX;
	volatile uint32_t x684 = 1919738U;
	static volatile int64_t t117 = 56LL;

    t117 = (x681-((x682*x683)>x684));

    if (t117 != -1085543983671LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x685 = INT64_MAX;
	static int16_t x686 = 17;
	uint16_t x688 = 1013U;
	int64_t t118 = 29LL;

    t118 = (x685-((x686*x687)>x688));

    if (t118 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x694 = -1005;
	static int8_t x695 = 24;
	int32_t x696 = INT32_MIN;
	volatile uint32_t t119 = 106559914U;

    t119 = (x693-((x694*x695)>x696));

    if (t119 != 4294967294U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x713 = -1LL;
	volatile uint32_t x715 = 462966724U;
	uint16_t x716 = 5885U;
	static int64_t t120 = -36141620950LL;

    t120 = (x713-((x714*x715)>x716));

    if (t120 != -2LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x721 = INT32_MIN;
	uint64_t x722 = UINT64_MAX;
	uint64_t x723 = 49567849LLU;
	volatile int8_t x724 = INT8_MIN;
	static volatile int32_t t121 = INT32_MIN;

    t121 = (x721-((x722*x723)>x724));

    if (t121 != INT32_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x729 = 1;
	int16_t x730 = INT16_MIN;
	uint32_t x731 = 471585U;
	static int32_t x732 = -1;
	int32_t t122 = -490;

    t122 = (x729-((x730*x731)>x732));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x734 = -1LL;
	volatile int32_t x735 = -1;
	static int8_t x736 = -1;
	volatile int64_t t123 = 2346984351254013LL;

    t123 = (x733-((x734*x735)>x736));

    if (t123 != -2LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint64_t x741 = UINT64_MAX;
	uint8_t x743 = 60U;
	int8_t x744 = -1;
	uint64_t t124 = UINT64_MAX;

    t124 = (x741-((x742*x743)>x744));

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x745 = 16U;
	int16_t x747 = INT16_MAX;
	static int32_t x748 = -2130299;
	uint32_t t125 = 24418U;

    t125 = (x745-((x746*x747)>x748));

    if (t125 != 16U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x749 = 1370U;
	uint32_t x750 = UINT32_MAX;
	volatile int32_t t126 = 0;

    t126 = (x749-((x750*x751)>x752));

    if (t126 != 1369) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x761 = UINT16_MAX;
	int64_t x762 = -1LL;
	int32_t x763 = -14311546;
	int32_t x764 = INT32_MAX;

    t127 = (x761-((x762*x763)>x764));

    if (t127 != 65535) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x773 = -129LL;
	static int16_t x774 = INT16_MAX;
	volatile int8_t x775 = -1;
	int16_t x776 = INT16_MAX;

    t128 = (x773-((x774*x775)>x776));

    if (t128 != -129LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x777 = 0;
	int32_t x778 = INT32_MAX;
	volatile int8_t x779 = -1;
	static volatile int32_t t129 = 0;

    t129 = (x777-((x778*x779)>x780));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x781 = 894;
	int8_t x782 = -1;
	uint32_t x783 = 1291332U;
	volatile int32_t t130 = 1;

    t130 = (x781-((x782*x783)>x784));

    if (t130 != 893) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x785 = UINT64_MAX;
	int32_t x786 = INT32_MIN;
	int64_t x788 = INT64_MIN;

    t131 = (x785-((x786*x787)>x788));

    if (t131 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x789 = -1;
	int32_t x790 = INT32_MIN;
	uint32_t x791 = UINT32_MAX;
	uint64_t x792 = 2067398419LLU;
	static int32_t t132 = -3;

    t132 = (x789-((x790*x791)>x792));

    if (t132 != -2) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x793 = 1U;
	static int32_t x794 = -1;
	static uint16_t x795 = 15U;

    t133 = (x793-((x794*x795)>x796));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x798 = INT32_MAX;
	uint32_t x799 = 1037010650U;
	int32_t x800 = INT32_MIN;
	volatile uint64_t t134 = 36173625620LLU;

    t134 = (x797-((x798*x799)>x800));

    if (t134 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x801 = 63U;
	static volatile int16_t x803 = INT16_MIN;
	int32_t x804 = -127435;
	uint32_t t135 = 7945824U;

    t135 = (x801-((x802*x803)>x804));

    if (t135 != 63U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x805 = UINT32_MAX;
	volatile int8_t x807 = INT8_MIN;
	int64_t x808 = 2139LL;

    t136 = (x805-((x806*x807)>x808));

    if (t136 != UINT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x809 = -1;
	uint64_t x811 = UINT64_MAX;
	uint16_t x812 = UINT16_MAX;
	int32_t t137 = -1;

    t137 = (x809-((x810*x811)>x812));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x813 = 3U;
	int8_t x814 = 0;
	static uint16_t x815 = UINT16_MAX;
	static uint32_t x816 = UINT32_MAX;
	uint32_t t138 = 115007073U;

    t138 = (x813-((x814*x815)>x816));

    if (t138 != 3U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x817 = 27;
	static int32_t x818 = -1;
	int16_t x820 = 22;
	int32_t t139 = -76196;

    t139 = (x817-((x818*x819)>x820));

    if (t139 != 27) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x825 = 1489LLU;
	volatile int32_t x827 = -1;
	static int16_t x828 = -1;
	volatile uint64_t t140 = 191668LLU;

    t140 = (x825-((x826*x827)>x828));

    if (t140 != 1488LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x829 = INT16_MIN;
	int32_t x830 = -3;
	int16_t x831 = INT16_MIN;
	int8_t x832 = INT8_MAX;
	int32_t t141 = 17935580;

    t141 = (x829-((x830*x831)>x832));

    if (t141 != -32769) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x833 = 2864;
	static int16_t x834 = INT16_MIN;
	uint16_t x835 = 7U;
	int32_t x836 = INT32_MIN;
	volatile int32_t t142 = 1;

    t142 = (x833-((x834*x835)>x836));

    if (t142 != 2863) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x841 = 215;
	uint8_t x843 = 67U;
	int8_t x844 = INT8_MIN;
	volatile int32_t t143 = -1067327844;

    t143 = (x841-((x842*x843)>x844));

    if (t143 != 214) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x849 = -1;
	uint32_t x850 = 60U;
	int64_t x851 = 504564861693LL;
	int16_t x852 = INT16_MIN;
	volatile int32_t t144 = 22;

    t144 = (x849-((x850*x851)>x852));

    if (t144 != -2) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x853 = INT8_MAX;
	uint64_t x854 = 3LLU;
	volatile int8_t x856 = 1;
	volatile int32_t t145 = -2;

    t145 = (x853-((x854*x855)>x856));

    if (t145 != 126) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x869 = 2603U;
	volatile uint32_t x870 = 30610904U;
	uint64_t x872 = 516926LLU;
	volatile int32_t t146 = 350110;

    t146 = (x869-((x870*x871)>x872));

    if (t146 != 2602) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x873 = -238429LL;
	int8_t x874 = -1;
	static uint8_t x875 = UINT8_MAX;
	int16_t x876 = INT16_MIN;
	static volatile int64_t t147 = 195424029LL;

    t147 = (x873-((x874*x875)>x876));

    if (t147 != -238430LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x878 = 23U;
	int8_t x880 = -1;
	int32_t t148 = 66737096;

    t148 = (x877-((x878*x879)>x880));

    if (t148 != -2) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x881 = 52U;
	volatile uint32_t x882 = UINT32_MAX;
	int8_t x884 = -24;

    t149 = (x881-((x882*x883)>x884));

    if (t149 != 52) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x885 = INT64_MIN;
	static volatile uint16_t x886 = 0U;
	int16_t x887 = 6;
	uint8_t x888 = 1U;

    t150 = (x885-((x886*x887)>x888));

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x893 = -56509LL;
	int8_t x894 = INT8_MIN;
	static uint16_t x896 = 1316U;
	volatile int64_t t151 = 48540709411713639LL;

    t151 = (x893-((x894*x895)>x896));

    if (t151 != -56509LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x898 = 2U;
	uint16_t x899 = 18U;
	int32_t x900 = -1;
	int32_t t152 = INT32_MIN;

    t152 = (x897-((x898*x899)>x900));

    if (t152 != INT32_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x902 = -1LL;
	int64_t x904 = 109359939336480540LL;
	int32_t t153 = -1772;

    t153 = (x901-((x902*x903)>x904));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x916 = 0;
	int32_t t154 = -52488962;

    t154 = (x913-((x914*x915)>x916));

    if (t154 != -2) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x918 = INT8_MAX;
	uint16_t x919 = UINT16_MAX;
	volatile int16_t x920 = INT16_MAX;

    t155 = (x917-((x918*x919)>x920));

    if (t155 != 1753177974451LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x921 = 0;
	uint16_t x922 = 1U;
	static uint64_t x923 = UINT64_MAX;
	static int8_t x924 = INT8_MAX;
	int32_t t156 = 2037403;

    t156 = (x921-((x922*x923)>x924));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x925 = UINT32_MAX;
	int16_t x926 = 0;
	static int32_t x927 = INT32_MAX;

    t157 = (x925-((x926*x927)>x928));

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x941 = INT8_MAX;
	uint16_t x942 = UINT16_MAX;
	uint16_t x943 = 0U;
	int32_t x944 = INT32_MIN;
	int32_t t158 = 2;

    t158 = (x941-((x942*x943)>x944));

    if (t158 != 126) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x945 = INT8_MIN;
	uint16_t x947 = UINT16_MAX;
	uint8_t x948 = UINT8_MAX;
	static int32_t t159 = 49890;

    t159 = (x945-((x946*x947)>x948));

    if (t159 != -129) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x950 = 256U;
	int64_t x951 = 256626696LL;
	int8_t x952 = 0;

    t160 = (x949-((x950*x951)>x952));

    if (t160 != 142) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x957 = 12U;
	uint64_t x958 = 262608376615660887LLU;
	int16_t x959 = INT16_MIN;
	int32_t x960 = INT32_MAX;
	static volatile int32_t t161 = 378024079;

    t161 = (x957-((x958*x959)>x960));

    if (t161 != 11) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x962 = 58;
	uint32_t x963 = 49U;

    t162 = (x961-((x962*x963)>x964));

    if (t162 != 15680U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x973 = INT32_MIN;
	volatile uint16_t x975 = 3U;
	volatile uint16_t x976 = 1139U;
	static volatile int32_t t163 = INT32_MIN;

    t163 = (x973-((x974*x975)>x976));

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x981 = -1LL;
	volatile uint16_t x982 = 25U;
	volatile int16_t x983 = -6256;
	uint64_t x984 = 173777LLU;
	volatile int64_t t164 = 43LL;

    t164 = (x981-((x982*x983)>x984));

    if (t164 != -2LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1001 = INT16_MIN;
	int32_t x1002 = -1;
	int16_t x1003 = INT16_MIN;
	int16_t x1004 = -1;
	int32_t t165 = -96823243;

    t165 = (x1001-((x1002*x1003)>x1004));

    if (t165 != -32769) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1013 = 0;
	int8_t x1015 = -1;
	int64_t x1016 = INT64_MIN;
	static int32_t t166 = -31502;

    t166 = (x1013-((x1014*x1015)>x1016));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1017 = INT32_MIN;
	uint8_t x1018 = 48U;
	uint16_t x1020 = 12437U;
	volatile int32_t t167 = INT32_MIN;

    t167 = (x1017-((x1018*x1019)>x1020));

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x1021 = 4516LLU;
	int16_t x1022 = INT16_MIN;
	int16_t x1023 = -213;

    t168 = (x1021-((x1022*x1023)>x1024));

    if (t168 != 4515LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x1026 = -1;
	static int8_t x1027 = 0;
	uint32_t x1028 = UINT32_MAX;

    t169 = (x1025-((x1026*x1027)>x1028));

    if (t169 != INT64_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1029 = 498U;
	uint16_t x1030 = 7224U;
	uint8_t x1031 = 6U;
	static int32_t x1032 = INT32_MIN;
	volatile int32_t t170 = -11466901;

    t170 = (x1029-((x1030*x1031)>x1032));

    if (t170 != 497) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x1033 = INT64_MIN;
	int8_t x1034 = INT8_MAX;
	uint8_t x1035 = 1U;
	volatile int64_t t171 = INT64_MIN;

    t171 = (x1033-((x1034*x1035)>x1036));

    if (t171 != INT64_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1037 = 120169U;
	volatile int8_t x1038 = -1;
	volatile int64_t x1039 = -68846566385159147LL;
	volatile uint64_t x1040 = UINT64_MAX;
	volatile uint32_t t172 = 1U;

    t172 = (x1037-((x1038*x1039)>x1040));

    if (t172 != 120169U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1041 = 6;
	int64_t x1042 = -1LL;
	int32_t x1043 = -5;
	volatile int64_t x1044 = 12165779168LL;

    t173 = (x1041-((x1042*x1043)>x1044));

    if (t173 != 6) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x1045 = INT8_MIN;
	uint8_t x1046 = 3U;
	uint64_t x1047 = 356390626116833742LLU;
	uint16_t x1048 = UINT16_MAX;
	volatile int32_t t174 = 5271288;

    t174 = (x1045-((x1046*x1047)>x1048));

    if (t174 != -129) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1049 = 625U;
	volatile uint64_t x1050 = 659685414LLU;
	int64_t x1051 = 94261LL;
	int16_t x1052 = -5;
	int32_t t175 = 7180404;

    t175 = (x1049-((x1050*x1051)>x1052));

    if (t175 != 625) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1053 = 23U;
	static int64_t x1054 = -1LL;
	static uint32_t x1055 = UINT32_MAX;
	static uint32_t x1056 = UINT32_MAX;

    t176 = (x1053-((x1054*x1055)>x1056));

    if (t176 != 23) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x1061 = 1;
	static int32_t x1063 = 3198;
	volatile int32_t t177 = 521072;

    t177 = (x1061-((x1062*x1063)>x1064));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x1065 = UINT16_MAX;
	int16_t x1067 = INT16_MAX;
	int64_t x1068 = INT64_MAX;
	static volatile int32_t t178 = 870268203;

    t178 = (x1065-((x1066*x1067)>x1068));

    if (t178 != 65535) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1069 = INT16_MAX;
	static int64_t x1072 = -3601687141LL;
	static int32_t t179 = 14215;

    t179 = (x1069-((x1070*x1071)>x1072));

    if (t179 != 32767) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1077 = -1LL;
	int64_t x1078 = -39459414544431LL;
	int8_t x1079 = INT8_MIN;
	static volatile int64_t t180 = 1126721LL;

    t180 = (x1077-((x1078*x1079)>x1080));

    if (t180 != -2LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1081 = INT64_MAX;
	volatile int64_t x1082 = 23583934LL;
	volatile int8_t x1083 = -3;
	volatile int8_t x1084 = 27;
	volatile int64_t t181 = INT64_MAX;

    t181 = (x1081-((x1082*x1083)>x1084));

    if (t181 != INT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x1085 = UINT32_MAX;
	volatile int32_t x1086 = 237;
	static volatile int8_t x1087 = -1;
	uint32_t t182 = UINT32_MAX;

    t182 = (x1085-((x1086*x1087)>x1088));

    if (t182 != UINT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x1089 = 0U;
	static volatile uint16_t x1090 = 133U;
	static int16_t x1091 = -1;
	int16_t x1092 = 3632;
	int32_t t183 = 283;

    t183 = (x1089-((x1090*x1091)>x1092));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1094 = INT32_MAX;
	uint32_t x1095 = UINT32_MAX;
	volatile int8_t x1096 = 0;
	volatile int64_t t184 = -3842771535323368082LL;

    t184 = (x1093-((x1094*x1095)>x1096));

    if (t184 != -4272615612822LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1105 = -1;
	static uint64_t x1106 = UINT64_MAX;
	volatile uint32_t x1108 = UINT32_MAX;
	volatile int32_t t185 = 0;

    t185 = (x1105-((x1106*x1107)>x1108));

    if (t185 != -2) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1113 = INT16_MAX;
	int16_t x1114 = 14;
	int8_t x1115 = 0;
	int16_t x1116 = INT16_MIN;
	volatile int32_t t186 = -1;

    t186 = (x1113-((x1114*x1115)>x1116));

    if (t186 != 32766) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1117 = 28;
	int32_t x1119 = -4968;
	volatile int16_t x1120 = INT16_MIN;
	volatile int32_t t187 = -977;

    t187 = (x1117-((x1118*x1119)>x1120));

    if (t187 != 28) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1121 = -1;
	volatile uint64_t x1123 = 271468207904931LLU;
	int32_t x1124 = 3154840;
	static int32_t t188 = -94536639;

    t188 = (x1121-((x1122*x1123)>x1124));

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1125 = 14;
	static uint8_t x1126 = UINT8_MAX;
	uint64_t x1127 = 0LLU;
	int8_t x1128 = INT8_MAX;

    t189 = (x1125-((x1126*x1127)>x1128));

    if (t189 != 14) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1133 = INT8_MIN;
	uint64_t x1136 = 3988LLU;

    t190 = (x1133-((x1134*x1135)>x1136));

    if (t190 != -129) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1137 = 8U;
	int16_t x1139 = INT16_MIN;
	volatile int32_t t191 = -1;

    t191 = (x1137-((x1138*x1139)>x1140));

    if (t191 != 7) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1141 = 3804929;
	int16_t x1142 = INT16_MIN;
	uint16_t x1143 = 1956U;
	int16_t x1144 = -10461;

    t192 = (x1141-((x1142*x1143)>x1144));

    if (t192 != 3804929) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x1145 = INT32_MIN;
	volatile uint8_t x1148 = 115U;
	int32_t t193 = INT32_MIN;

    t193 = (x1145-((x1146*x1147)>x1148));

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1149 = 31U;
	static int32_t x1150 = 7193;
	uint8_t x1151 = 0U;
	int32_t x1152 = -14;
	uint32_t t194 = 6661U;

    t194 = (x1149-((x1150*x1151)>x1152));

    if (t194 != 30U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1157 = INT16_MAX;
	volatile uint16_t x1158 = UINT16_MAX;
	int32_t x1160 = INT32_MIN;

    t195 = (x1157-((x1158*x1159)>x1160));

    if (t195 != 32766) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1162 = INT16_MIN;
	uint32_t x1163 = 481320742U;
	volatile uint32_t t196 = 93733201U;

    t196 = (x1161-((x1162*x1163)>x1164));

    if (t196 != 122934U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x1165 = -1;
	volatile int32_t t197 = 11500035;

    t197 = (x1165-((x1166*x1167)>x1168));

    if (t197 != -2) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x1181 = -1;
	int64_t x1182 = -5780243634951LL;
	int8_t x1183 = 6;
	volatile int16_t x1184 = INT16_MIN;
	volatile int32_t t198 = -26087;

    t198 = (x1181-((x1182*x1183)>x1184));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1185 = UINT8_MAX;
	uint8_t x1186 = 120U;
	uint32_t x1188 = 137654U;
	int32_t t199 = 1264;

    t199 = (x1185-((x1186*x1187)>x1188));

    if (t199 != 254) { NG(); } else { ; }
	
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

