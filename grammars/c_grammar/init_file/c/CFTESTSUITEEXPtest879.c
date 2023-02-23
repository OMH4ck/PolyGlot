
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

volatile int8_t x2 = INT8_MIN;
uint8_t x4 = UINT8_MAX;
int32_t x7 = -1;
int16_t x14 = -1;
volatile uint32_t x17 = UINT32_MAX;
static volatile int32_t t5 = -1889131;
int8_t x46 = INT8_MIN;
volatile int32_t x60 = INT32_MAX;
int32_t x78 = INT32_MIN;
int16_t x80 = INT16_MAX;
int32_t t10 = 773;
uint16_t x81 = 1032U;
int32_t t11 = 0;
volatile int32_t t12 = -45;
int32_t t13 = 779924;
volatile uint16_t x113 = 0U;
volatile int8_t x114 = INT8_MIN;
int32_t x129 = 2520;
static volatile int64_t t16 = -2812LL;
int32_t x137 = INT32_MAX;
uint16_t x146 = 171U;
volatile uint64_t x148 = 18539522769LLU;
int8_t x152 = INT8_MAX;
uint32_t x153 = 25560555U;
uint8_t x156 = 0U;
int64_t t24 = -2LL;
static volatile int64_t x174 = -1LL;
uint64_t x175 = 501LLU;
int16_t x177 = 70;
int64_t x190 = 39LL;
volatile uint8_t x222 = 9U;
volatile uint64_t x232 = UINT64_MAX;
int32_t t31 = -2311;
int8_t x237 = INT8_MAX;
int32_t x238 = 215;
uint16_t x240 = UINT16_MAX;
int32_t x242 = INT32_MAX;
static volatile int8_t x262 = INT8_MIN;
volatile int32_t x264 = INT32_MIN;
int64_t t35 = 810974LL;
static int16_t x272 = -6739;
static volatile int16_t x274 = INT16_MAX;
int32_t x293 = INT32_MAX;
int32_t x296 = INT32_MIN;
static int8_t x308 = 0;
int64_t x313 = 3663350684877968LL;
uint32_t x332 = 586U;
int64_t t42 = 1046231225493034LL;
volatile uint8_t x348 = 0U;
int32_t t43 = INT32_MAX;
volatile int8_t x353 = INT8_MAX;
static int8_t x354 = INT8_MIN;
uint16_t x358 = UINT16_MAX;
static uint16_t x363 = UINT16_MAX;
int64_t x364 = -1LL;
uint64_t x370 = UINT64_MAX;
int64_t t48 = 595028070LL;
uint32_t x374 = 373250789U;
volatile uint32_t x378 = 771U;
static int16_t x380 = -1;
uint64_t x382 = 0LLU;
volatile uint32_t x394 = UINT32_MAX;
uint16_t x398 = UINT16_MAX;
static uint16_t x404 = 4550U;
uint32_t x409 = 683U;
uint32_t x433 = 228U;
uint16_t x437 = UINT16_MAX;
int8_t x439 = INT8_MAX;
uint32_t x457 = UINT32_MAX;
int8_t x465 = 2;
volatile int32_t t61 = -1;
uint32_t x469 = UINT32_MAX;
int32_t x472 = INT32_MIN;
static uint32_t x475 = UINT32_MAX;
int32_t t63 = 587904;
uint64_t x481 = 647137LLU;
static volatile uint64_t t64 = 212313LLU;
uint8_t x485 = 2U;
static uint64_t x486 = 18228LLU;
static volatile uint64_t x501 = 6257584LLU;
static volatile int16_t x528 = INT16_MAX;
uint16_t x539 = 543U;
volatile int32_t t71 = -506708;
uint32_t x545 = UINT32_MAX;
volatile uint32_t t72 = 54U;
int32_t x559 = INT32_MIN;
static int32_t t74 = 15;
uint32_t x604 = 17U;
volatile uint32_t t77 = 149U;
volatile uint16_t x606 = UINT16_MAX;
int64_t x608 = 41762593283044LL;
int16_t x612 = -72;
uint64_t x613 = 58LLU;
uint32_t x622 = UINT32_MAX;
volatile uint64_t t83 = 5930LLU;
int16_t x662 = INT16_MAX;
static int64_t x664 = INT64_MIN;
int32_t x666 = -398971;
uint64_t x667 = 23818404700LLU;
uint32_t x678 = 28998U;
static int8_t x683 = INT8_MIN;
uint32_t t89 = 245503927U;
int32_t x686 = -1;
int32_t x698 = -9378;
int8_t x700 = -15;
uint32_t t92 = 17U;
uint16_t x705 = UINT16_MAX;
int16_t x707 = 88;
static uint16_t x717 = 788U;
int64_t x718 = 12212LL;
int16_t x728 = INT16_MIN;
volatile uint64_t t95 = 14LLU;
uint32_t x731 = UINT32_MAX;
int8_t x736 = 4;
uint8_t x739 = 2U;
static int16_t x753 = INT16_MAX;
static int8_t x756 = INT8_MIN;
int32_t t99 = -23838;
volatile uint64_t x769 = 1131454111482300LLU;
volatile int64_t x774 = INT64_MAX;
int8_t x779 = 4;
volatile int32_t t103 = -1;
int64_t x789 = INT64_MAX;
volatile uint16_t x793 = 1959U;
int32_t x794 = 161457593;
static int32_t x818 = INT32_MAX;
volatile uint64_t x820 = 109811082388837LLU;
static int16_t x823 = 1893;
uint64_t t108 = 6667505LLU;
uint64_t x845 = 8849828190255LLU;
uint64_t x847 = UINT64_MAX;
int32_t x898 = -3;
int64_t x900 = INT64_MIN;
volatile int64_t x937 = INT64_MAX;
int16_t x940 = -1;
uint64_t x941 = 532404808542023370LLU;
int16_t x955 = -379;
volatile uint32_t x958 = 14342U;
int32_t t124 = 4628;
int8_t x970 = INT8_MIN;
int32_t x979 = INT32_MAX;
int16_t x980 = -1;
uint8_t x981 = 1U;
int32_t x982 = 3955120;
static int32_t x983 = -405610;
volatile int16_t x991 = -3307;
uint64_t x994 = 659LLU;
uint64_t t130 = 8329605LLU;
uint32_t t133 = 203192U;
int16_t x1023 = 2;
volatile int32_t t136 = -7766210;
static volatile int32_t x1038 = INT32_MAX;
volatile int32_t x1039 = 40;
int8_t x1042 = INT8_MIN;
int16_t x1050 = 477;
uint32_t x1057 = 682696306U;
static uint64_t x1058 = UINT64_MAX;
volatile int64_t x1077 = 13024630663581208LL;
volatile int32_t t147 = 1;
uint8_t x1085 = UINT8_MAX;
int32_t t148 = 1938084;
uint16_t x1096 = 115U;
int8_t x1126 = INT8_MIN;
uint8_t x1145 = 15U;
volatile uint8_t x1146 = 1U;
volatile int32_t t154 = 156621405;
int64_t x1151 = -1LL;
static volatile int64_t t156 = -5803746LL;
uint16_t x1168 = UINT16_MAX;
int16_t x1174 = INT16_MIN;
volatile int32_t t160 = -85486734;
volatile uint32_t x1177 = 0U;
volatile int16_t x1178 = 216;
int8_t x1180 = INT8_MIN;
volatile int32_t t162 = -7012;
static uint16_t x1189 = 3U;
volatile int8_t x1194 = 1;
int16_t x1210 = INT16_MIN;
volatile int32_t x1212 = INT32_MIN;
static uint8_t x1229 = UINT8_MAX;
volatile int32_t x1232 = -1;
uint16_t x1233 = 67U;
volatile int16_t x1239 = 10687;
volatile uint64_t x1240 = 26874156486LLU;
volatile uint64_t x1251 = UINT64_MAX;
int64_t t172 = 2021LL;
static int8_t x1256 = 0;
int32_t x1258 = -1;
uint16_t x1259 = 428U;
static uint16_t x1264 = 18U;
static volatile int16_t x1268 = -1;
volatile int64_t t177 = 1223652953222LL;
static volatile uint16_t x1301 = 17466U;
uint16_t x1304 = 10804U;
int64_t t181 = 760953LL;
uint64_t x1341 = 45058098453LLU;
volatile int32_t x1358 = -69782367;
int16_t x1387 = -13179;
int8_t x1391 = -1;
volatile int16_t x1405 = INT16_MAX;
int32_t x1406 = 68;
uint8_t x1407 = UINT8_MAX;
uint16_t x1408 = 2580U;
static volatile uint16_t x1411 = 14U;
uint8_t x1417 = UINT8_MAX;
static int64_t x1418 = INT64_MIN;
static int16_t x1419 = -1;
int32_t t192 = -206180626;
static uint16_t x1435 = 44U;
static int16_t x1436 = INT16_MIN;
int32_t x1438 = -379532085;
int8_t x1475 = -1;


void f0(void) {
    	int32_t x1 = 117248;
	int8_t x3 = 6;
	int32_t t0 = -23885998;

    t0 = (x1>>((x2%x3)!=x4));

    if (t0 != 58624) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 197837;
	uint8_t x6 = 81U;
	uint64_t x8 = 9704LLU;
	volatile int32_t t1 = 89781274;

    t1 = (x5>>((x6%x7)!=x8));

    if (t1 != 98918) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = INT32_MAX;
	static volatile int32_t x10 = -3043032;
	static uint64_t x11 = 1LLU;
	uint16_t x12 = 29958U;
	volatile int32_t t2 = -5374;

    t2 = (x9>>((x10%x11)!=x12));

    if (t2 != 1073741823) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 21U;
	uint16_t x15 = 13736U;
	volatile int8_t x16 = -1;
	static int32_t t3 = 2844;

    t3 = (x13>>((x14%x15)!=x16));

    if (t3 != 21) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = 1811028440LLU;
	volatile int32_t x19 = -925934;
	volatile uint8_t x20 = 124U;
	static uint32_t t4 = 42937U;

    t4 = (x17>>((x18%x19)!=x20));

    if (t4 != 2147483647U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x25 = UINT8_MAX;
	int32_t x26 = INT32_MAX;
	uint32_t x27 = 715445U;
	uint16_t x28 = UINT16_MAX;

    t5 = (x25>>((x26%x27)!=x28));

    if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = 2851;
	volatile int32_t x30 = -1;
	int32_t x31 = INT32_MIN;
	static int64_t x32 = INT64_MIN;
	volatile int32_t t6 = 2;

    t6 = (x29>>((x30%x31)!=x32));

    if (t6 != 1425) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x45 = INT64_MAX;
	static int64_t x47 = INT64_MIN;
	volatile uint32_t x48 = UINT32_MAX;
	int64_t t7 = -6566974114460LL;

    t7 = (x45>>((x46%x47)!=x48));

    if (t7 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x57 = 47801032;
	static volatile int8_t x58 = 1;
	int8_t x59 = -2;
	volatile int32_t t8 = 1527093;

    t8 = (x57>>((x58%x59)!=x60));

    if (t8 != 23900516) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x65 = 619697U;
	int16_t x66 = INT16_MIN;
	int8_t x67 = -6;
	uint8_t x68 = 1U;
	uint32_t t9 = 13822551U;

    t9 = (x65>>((x66%x67)!=x68));

    if (t9 != 309848U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x77 = UINT8_MAX;
	int16_t x79 = -13915;

    t10 = (x77>>((x78%x79)!=x80));

    if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x82 = INT16_MIN;
	uint16_t x83 = 279U;
	int32_t x84 = INT32_MIN;

    t11 = (x81>>((x82%x83)!=x84));

    if (t11 != 516) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x89 = UINT16_MAX;
	int8_t x90 = INT8_MAX;
	volatile int32_t x91 = INT32_MIN;
	static volatile uint8_t x92 = 2U;

    t12 = (x89>>((x90%x91)!=x92));

    if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x109 = INT8_MAX;
	uint8_t x110 = UINT8_MAX;
	int8_t x111 = INT8_MAX;
	static volatile int32_t x112 = INT32_MIN;

    t13 = (x109>>((x110%x111)!=x112));

    if (t13 != 63) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x115 = 2U;
	static int8_t x116 = 19;
	volatile int32_t t14 = -148;

    t14 = (x113>>((x114%x115)!=x116));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x130 = INT8_MAX;
	volatile uint16_t x131 = 62U;
	uint64_t x132 = 2486085884LLU;
	volatile int32_t t15 = -42;

    t15 = (x129>>((x130%x131)!=x132));

    if (t15 != 1260) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x133 = INT64_MAX;
	volatile int32_t x134 = INT32_MIN;
	static uint64_t x135 = UINT64_MAX;
	int32_t x136 = 43132563;

    t16 = (x133>>((x134%x135)!=x136));

    if (t16 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x138 = INT64_MIN;
	volatile int8_t x139 = INT8_MIN;
	int32_t x140 = -1;
	volatile int32_t t17 = -246916;

    t17 = (x137>>((x138%x139)!=x140));

    if (t17 != 1073741823) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x145 = 0U;
	int64_t x147 = INT64_MIN;
	volatile int32_t t18 = -3526;

    t18 = (x145>>((x146%x147)!=x148));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x149 = 1402282243U;
	int32_t x150 = INT32_MAX;
	volatile int64_t x151 = -1LL;
	static uint32_t t19 = 47780U;

    t19 = (x149>>((x150%x151)!=x152));

    if (t19 != 701141121U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x154 = -20;
	volatile int8_t x155 = INT8_MIN;
	volatile uint32_t t20 = 472273U;

    t20 = (x153>>((x154%x155)!=x156));

    if (t20 != 12780277U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x157 = 10;
	uint64_t x158 = UINT64_MAX;
	static int64_t x159 = INT64_MIN;
	uint8_t x160 = 2U;
	int32_t t21 = 792239;

    t21 = (x157>>((x158%x159)!=x160));

    if (t21 != 5) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x161 = 8U;
	uint8_t x162 = 0U;
	static int16_t x163 = -1;
	int64_t x164 = 3906LL;
	volatile int32_t t22 = -2;

    t22 = (x161>>((x162%x163)!=x164));

    if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x165 = 24U;
	int64_t x166 = INT64_MIN;
	volatile int64_t x167 = INT64_MAX;
	int32_t x168 = -48690;
	static int32_t t23 = -1639;

    t23 = (x165>>((x166%x167)!=x168));

    if (t23 != 12) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x169 = INT64_MAX;
	static int64_t x170 = INT64_MAX;
	int32_t x171 = INT32_MAX;
	uint32_t x172 = 47744431U;

    t24 = (x169>>((x170%x171)!=x172));

    if (t24 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x173 = 46LLU;
	volatile int8_t x176 = -1;
	volatile uint64_t t25 = 7117473055067308LLU;

    t25 = (x173>>((x174%x175)!=x176));

    if (t25 != 23LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x178 = -42;
	uint32_t x179 = 7U;
	volatile int16_t x180 = INT16_MAX;
	volatile int32_t t26 = 209703;

    t26 = (x177>>((x178%x179)!=x180));

    if (t26 != 35) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x181 = UINT32_MAX;
	static volatile int32_t x182 = INT32_MIN;
	static int8_t x183 = -1;
	static int8_t x184 = -43;
	uint32_t t27 = 26427U;

    t27 = (x181>>((x182%x183)!=x184));

    if (t27 != 2147483647U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x189 = UINT16_MAX;
	int64_t x191 = INT64_MIN;
	static volatile int16_t x192 = 31;
	int32_t t28 = -1082;

    t28 = (x189>>((x190%x191)!=x192));

    if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x217 = 225U;
	static volatile int64_t x218 = 56542459022026LL;
	int64_t x219 = -30122LL;
	int64_t x220 = 79996671733607LL;
	static volatile uint32_t t29 = 334425151U;

    t29 = (x217>>((x218%x219)!=x220));

    if (t29 != 112U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x221 = 127U;
	uint16_t x223 = 912U;
	int32_t x224 = -1;
	volatile int32_t t30 = -16756476;

    t30 = (x221>>((x222%x223)!=x224));

    if (t30 != 63) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x229 = INT32_MAX;
	int64_t x230 = INT64_MAX;
	volatile uint8_t x231 = UINT8_MAX;

    t31 = (x229>>((x230%x231)!=x232));

    if (t31 != 1073741823) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x239 = UINT8_MAX;
	volatile int32_t t32 = 0;

    t32 = (x237>>((x238%x239)!=x240));

    if (t32 != 63) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x241 = UINT16_MAX;
	static int16_t x243 = -2;
	int8_t x244 = -1;
	int32_t t33 = 295147;

    t33 = (x241>>((x242%x243)!=x244));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x261 = 2U;
	volatile int64_t x263 = -1185580669749805891LL;
	volatile int32_t t34 = -64962;

    t34 = (x261>>((x262%x263)!=x264));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x265 = 28325264LL;
	uint8_t x266 = 1U;
	volatile int64_t x267 = -1LL;
	int64_t x268 = -812053994619063308LL;

    t35 = (x265>>((x266%x267)!=x268));

    if (t35 != 14162632LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x269 = 265;
	volatile int64_t x270 = 55931536562658670LL;
	uint64_t x271 = 8017LLU;
	int32_t t36 = -9115;

    t36 = (x269>>((x270%x271)!=x272));

    if (t36 != 132) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x273 = UINT16_MAX;
	int64_t x275 = INT64_MAX;
	uint32_t x276 = 13120U;
	static volatile int32_t t37 = -740348;

    t37 = (x273>>((x274%x275)!=x276));

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x294 = -8;
	int8_t x295 = INT8_MAX;
	int32_t t38 = 3;

    t38 = (x293>>((x294%x295)!=x296));

    if (t38 != 1073741823) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x305 = INT32_MAX;
	static uint16_t x306 = 0U;
	int16_t x307 = -1;
	static int32_t t39 = INT32_MAX;

    t39 = (x305>>((x306%x307)!=x308));

    if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x314 = 22625U;
	static uint16_t x315 = 907U;
	int16_t x316 = -14;
	volatile int64_t t40 = 249LL;

    t40 = (x313>>((x314%x315)!=x316));

    if (t40 != 1831675342438984LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x329 = 1U;
	int64_t x330 = -1LL;
	int32_t x331 = INT32_MIN;
	static int32_t t41 = 11;

    t41 = (x329>>((x330%x331)!=x332));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x341 = 172334LL;
	int64_t x342 = INT64_MAX;
	int8_t x343 = -1;
	static volatile int16_t x344 = INT16_MIN;

    t42 = (x341>>((x342%x343)!=x344));

    if (t42 != 86167LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x345 = INT32_MAX;
	static volatile int16_t x346 = INT16_MIN;
	int32_t x347 = -1;

    t43 = (x345>>((x346%x347)!=x348));

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x349 = UINT64_MAX;
	volatile int32_t x350 = INT32_MIN;
	static int16_t x351 = INT16_MIN;
	static int32_t x352 = -176571489;
	static volatile uint64_t t44 = 94676349185377494LLU;

    t44 = (x349>>((x350%x351)!=x352));

    if (t44 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x355 = INT32_MIN;
	uint16_t x356 = 43U;
	int32_t t45 = 10734193;

    t45 = (x353>>((x354%x355)!=x356));

    if (t45 != 63) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x357 = 3253;
	volatile int8_t x359 = 1;
	uint16_t x360 = UINT16_MAX;
	int32_t t46 = -31;

    t46 = (x357>>((x358%x359)!=x360));

    if (t46 != 1626) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x361 = 1;
	volatile int64_t x362 = INT64_MIN;
	int32_t t47 = -29;

    t47 = (x361>>((x362%x363)!=x364));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x369 = 0LL;
	uint64_t x371 = UINT64_MAX;
	int32_t x372 = 4;

    t48 = (x369>>((x370%x371)!=x372));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x373 = 398646U;
	static int8_t x375 = -19;
	volatile uint64_t x376 = 66332LLU;
	volatile uint32_t t49 = 16451U;

    t49 = (x373>>((x374%x375)!=x376));

    if (t49 != 199323U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x377 = UINT32_MAX;
	int32_t x379 = INT32_MAX;
	volatile uint32_t t50 = 102U;

    t50 = (x377>>((x378%x379)!=x380));

    if (t50 != 2147483647U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x381 = 374U;
	int32_t x383 = -1;
	int8_t x384 = INT8_MIN;
	static int32_t t51 = -217;

    t51 = (x381>>((x382%x383)!=x384));

    if (t51 != 187) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x389 = INT8_MAX;
	int8_t x390 = -1;
	int32_t x391 = INT32_MIN;
	int32_t x392 = INT32_MIN;
	volatile int32_t t52 = -23845;

    t52 = (x389>>((x390%x391)!=x392));

    if (t52 != 63) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x393 = 79U;
	int8_t x395 = INT8_MIN;
	int64_t x396 = INT64_MIN;
	volatile int32_t t53 = -48560907;

    t53 = (x393>>((x394%x395)!=x396));

    if (t53 != 39) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x397 = INT32_MAX;
	int32_t x399 = -1;
	static uint64_t x400 = 14613LLU;
	static int32_t t54 = 1;

    t54 = (x397>>((x398%x399)!=x400));

    if (t54 != 1073741823) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x401 = INT16_MAX;
	int16_t x402 = -1;
	int32_t x403 = 565366553;
	int32_t t55 = 8633;

    t55 = (x401>>((x402%x403)!=x404));

    if (t55 != 16383) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x410 = INT8_MAX;
	int32_t x411 = INT32_MIN;
	int16_t x412 = INT16_MIN;
	volatile uint32_t t56 = 414U;

    t56 = (x409>>((x410%x411)!=x412));

    if (t56 != 341U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x434 = 1;
	int16_t x435 = -13912;
	int32_t x436 = -1;
	volatile uint32_t t57 = 4U;

    t57 = (x433>>((x434%x435)!=x436));

    if (t57 != 114U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x438 = INT16_MIN;
	uint16_t x440 = 2U;
	volatile int32_t t58 = -56;

    t58 = (x437>>((x438%x439)!=x440));

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x453 = INT64_MAX;
	int8_t x454 = 11;
	uint32_t x455 = UINT32_MAX;
	volatile int32_t x456 = INT32_MIN;
	int64_t t59 = -302LL;

    t59 = (x453>>((x454%x455)!=x456));

    if (t59 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x458 = -1;
	uint64_t x459 = 170277988581LLU;
	uint64_t x460 = UINT64_MAX;
	static uint32_t t60 = 725U;

    t60 = (x457>>((x458%x459)!=x460));

    if (t60 != 2147483647U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x466 = INT64_MIN;
	static uint32_t x467 = UINT32_MAX;
	int32_t x468 = -3213;

    t61 = (x465>>((x466%x467)!=x468));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x470 = INT16_MAX;
	volatile uint16_t x471 = 5076U;
	uint32_t t62 = 746997U;

    t62 = (x469>>((x470%x471)!=x472));

    if (t62 != 2147483647U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x473 = INT32_MAX;
	int64_t x474 = INT64_MIN;
	static int64_t x476 = INT64_MIN;

    t63 = (x473>>((x474%x475)!=x476));

    if (t63 != 1073741823) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x482 = 12U;
	int8_t x483 = -9;
	int64_t x484 = INT64_MAX;

    t64 = (x481>>((x482%x483)!=x484));

    if (t64 != 323568LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x487 = 66U;
	int32_t x488 = -58312211;
	int32_t t65 = 95430;

    t65 = (x485>>((x486%x487)!=x488));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x489 = 0;
	volatile int32_t x490 = 40457085;
	int8_t x491 = -1;
	int32_t x492 = -82;
	volatile int32_t t66 = -3;

    t66 = (x489>>((x490%x491)!=x492));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x497 = 3U;
	static int32_t x498 = INT32_MIN;
	volatile int16_t x499 = -811;
	uint32_t x500 = 867213U;
	int32_t t67 = 37830;

    t67 = (x497>>((x498%x499)!=x500));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x502 = -1LL;
	int16_t x503 = 187;
	int16_t x504 = INT16_MIN;
	uint64_t t68 = 1055787650979686LLU;

    t68 = (x501>>((x502%x503)!=x504));

    if (t68 != 3128792LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x509 = 1253370LLU;
	volatile int8_t x510 = INT8_MIN;
	int64_t x511 = INT64_MAX;
	uint64_t x512 = UINT64_MAX;
	volatile uint64_t t69 = 923650LLU;

    t69 = (x509>>((x510%x511)!=x512));

    if (t69 != 626685LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x525 = UINT16_MAX;
	int32_t x526 = INT32_MIN;
	static uint32_t x527 = UINT32_MAX;
	volatile int32_t t70 = 222293;

    t70 = (x525>>((x526%x527)!=x528));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x537 = 56U;
	uint32_t x538 = 57U;
	static int8_t x540 = 1;

    t71 = (x537>>((x538%x539)!=x540));

    if (t71 != 28) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x546 = INT64_MAX;
	static volatile uint16_t x547 = 484U;
	int16_t x548 = INT16_MIN;

    t72 = (x545>>((x546%x547)!=x548));

    if (t72 != 2147483647U) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x557 = 2;
	uint64_t x558 = 3128626776788726875LLU;
	uint64_t x560 = UINT64_MAX;
	int32_t t73 = -107184783;

    t73 = (x557>>((x558%x559)!=x560));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x573 = 15;
	static int32_t x574 = INT32_MIN;
	int16_t x575 = -1;
	int8_t x576 = -19;

    t74 = (x573>>((x574%x575)!=x576));

    if (t74 != 7) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x577 = 64U;
	static int8_t x578 = INT8_MAX;
	uint16_t x579 = 3203U;
	uint64_t x580 = UINT64_MAX;
	volatile int32_t t75 = -3;

    t75 = (x577>>((x578%x579)!=x580));

    if (t75 != 32) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x597 = 14884U;
	uint32_t x598 = 114171343U;
	uint8_t x599 = UINT8_MAX;
	int64_t x600 = INT64_MAX;
	int32_t t76 = -267993565;

    t76 = (x597>>((x598%x599)!=x600));

    if (t76 != 7442) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x601 = UINT32_MAX;
	int32_t x602 = INT32_MIN;
	volatile int32_t x603 = INT32_MAX;

    t77 = (x601>>((x602%x603)!=x604));

    if (t77 != 2147483647U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x605 = 2683230248261124479LL;
	volatile uint64_t x607 = UINT64_MAX;
	volatile int64_t t78 = -19LL;

    t78 = (x605>>((x606%x607)!=x608));

    if (t78 != 1341615124130562239LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x609 = 2131721818U;
	int64_t x610 = INT64_MIN;
	uint32_t x611 = 8603957U;
	volatile uint32_t t79 = 22857U;

    t79 = (x609>>((x610%x611)!=x612));

    if (t79 != 1065860909U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x614 = -1LL;
	uint8_t x615 = UINT8_MAX;
	uint64_t x616 = UINT64_MAX;
	static uint64_t t80 = 559LLU;

    t80 = (x613>>((x614%x615)!=x616));

    if (t80 != 58LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x621 = INT16_MAX;
	volatile int64_t x623 = 8260467003LL;
	int8_t x624 = -1;
	volatile int32_t t81 = 787;

    t81 = (x621>>((x622%x623)!=x624));

    if (t81 != 16383) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x633 = INT16_MAX;
	uint64_t x634 = UINT64_MAX;
	volatile uint16_t x635 = 3495U;
	uint16_t x636 = 9U;
	int32_t t82 = -2706963;

    t82 = (x633>>((x634%x635)!=x636));

    if (t82 != 16383) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x649 = UINT64_MAX;
	uint64_t x650 = 12455959925LLU;
	uint32_t x651 = 785U;
	static int64_t x652 = INT64_MIN;

    t83 = (x649>>((x650%x651)!=x652));

    if (t83 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x653 = 507046U;
	volatile uint32_t x654 = 20U;
	int16_t x655 = INT16_MIN;
	uint16_t x656 = 4U;
	uint32_t t84 = 37147983U;

    t84 = (x653>>((x654%x655)!=x656));

    if (t84 != 253523U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x661 = 7U;
	int32_t x663 = INT32_MAX;
	int32_t t85 = -341178948;

    t85 = (x661>>((x662%x663)!=x664));

    if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x665 = INT64_MAX;
	int16_t x668 = -1;
	int64_t t86 = -101766283098LL;

    t86 = (x665>>((x666%x667)!=x668));

    if (t86 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x673 = 14U;
	static uint32_t x674 = UINT32_MAX;
	volatile int8_t x675 = INT8_MIN;
	static int64_t x676 = 28343463521857LL;
	int32_t t87 = 15083674;

    t87 = (x673>>((x674%x675)!=x676));

    if (t87 != 7) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x677 = 2LLU;
	static int16_t x679 = -1;
	volatile int32_t x680 = 0;
	static volatile uint64_t t88 = 44391282836580LLU;

    t88 = (x677>>((x678%x679)!=x680));

    if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x681 = 243U;
	int64_t x682 = INT64_MIN;
	int8_t x684 = -1;

    t89 = (x681>>((x682%x683)!=x684));

    if (t89 != 121U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x685 = 1U;
	int64_t x687 = -2428947946627497607LL;
	uint16_t x688 = 2U;
	int32_t t90 = -160660;

    t90 = (x685>>((x686%x687)!=x688));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x693 = 25U;
	int64_t x694 = INT64_MIN;
	static int64_t x695 = INT64_MIN;
	uint16_t x696 = 6U;
	static volatile int32_t t91 = -1;

    t91 = (x693>>((x694%x695)!=x696));

    if (t91 != 12) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x697 = 62943447U;
	int8_t x699 = 63;

    t92 = (x697>>((x698%x699)!=x700));

    if (t92 != 31471723U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x706 = 1200LLU;
	int32_t x708 = 995205;
	int32_t t93 = -570308;

    t93 = (x705>>((x706%x707)!=x708));

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x719 = INT64_MIN;
	static volatile uint16_t x720 = UINT16_MAX;
	volatile int32_t t94 = -7;

    t94 = (x717>>((x718%x719)!=x720));

    if (t94 != 394) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x725 = 107437931761LLU;
	uint64_t x726 = 2524195049848LLU;
	static int64_t x727 = INT64_MIN;

    t95 = (x725>>((x726%x727)!=x728));

    if (t95 != 53718965880LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x729 = 313U;
	uint8_t x730 = 2U;
	int64_t x732 = -655308528401684LL;
	static volatile int32_t t96 = -20;

    t96 = (x729>>((x730%x731)!=x732));

    if (t96 != 156) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x733 = INT64_MAX;
	int8_t x734 = -1;
	uint32_t x735 = UINT32_MAX;
	int64_t t97 = -16792306LL;

    t97 = (x733>>((x734%x735)!=x736));

    if (t97 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x737 = 1U;
	uint64_t x738 = 167021LLU;
	static int16_t x740 = INT16_MIN;
	int32_t t98 = -3;

    t98 = (x737>>((x738%x739)!=x740));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x754 = INT64_MIN;
	static int32_t x755 = 7;

    t99 = (x753>>((x754%x755)!=x756));

    if (t99 != 16383) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x770 = 76LLU;
	static int8_t x771 = INT8_MAX;
	int8_t x772 = INT8_MIN;
	uint64_t t100 = 4502119418324566495LLU;

    t100 = (x769>>((x770%x771)!=x772));

    if (t100 != 565727055741150LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint32_t x773 = UINT32_MAX;
	int16_t x775 = -114;
	uint16_t x776 = UINT16_MAX;
	static volatile uint32_t t101 = 276293638U;

    t101 = (x773>>((x774%x775)!=x776));

    if (t101 != 2147483647U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x777 = INT16_MAX;
	int64_t x778 = INT64_MIN;
	volatile int8_t x780 = 20;
	int32_t t102 = 1092;

    t102 = (x777>>((x778%x779)!=x780));

    if (t102 != 16383) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x785 = INT16_MAX;
	int32_t x786 = INT32_MIN;
	static int32_t x787 = -6759;
	volatile int16_t x788 = -1;

    t103 = (x785>>((x786%x787)!=x788));

    if (t103 != 16383) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x790 = 34U;
	int64_t x791 = INT64_MIN;
	static uint64_t x792 = UINT64_MAX;
	int64_t t104 = 4531988041LL;

    t104 = (x789>>((x790%x791)!=x792));

    if (t104 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x795 = INT64_MIN;
	uint16_t x796 = UINT16_MAX;
	static volatile int32_t t105 = -1897;

    t105 = (x793>>((x794%x795)!=x796));

    if (t105 != 979) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x813 = 15823;
	static uint8_t x814 = 52U;
	int32_t x815 = -1;
	static volatile int64_t x816 = -1LL;
	int32_t t106 = 21;

    t106 = (x813>>((x814%x815)!=x816));

    if (t106 != 7911) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x817 = 216U;
	volatile int16_t x819 = -235;
	int32_t t107 = 1;

    t107 = (x817>>((x818%x819)!=x820));

    if (t107 != 108) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x821 = UINT64_MAX;
	volatile int32_t x822 = -1966607;
	static int8_t x824 = INT8_MIN;

    t108 = (x821>>((x822%x823)!=x824));

    if (t108 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x846 = INT16_MIN;
	int32_t x848 = INT32_MIN;
	volatile uint64_t t109 = 21033953493419LLU;

    t109 = (x845>>((x846%x847)!=x848));

    if (t109 != 4424914095127LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x853 = 108;
	static int8_t x854 = -30;
	int8_t x855 = -1;
	int16_t x856 = -1;
	static int32_t t110 = -997073;

    t110 = (x853>>((x854%x855)!=x856));

    if (t110 != 54) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x873 = INT64_MAX;
	int8_t x874 = -13;
	static int16_t x875 = -1;
	uint32_t x876 = 3203726U;
	volatile int64_t t111 = 48688291650753271LL;

    t111 = (x873>>((x874%x875)!=x876));

    if (t111 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x877 = UINT16_MAX;
	volatile int8_t x878 = INT8_MAX;
	static uint16_t x879 = UINT16_MAX;
	int64_t x880 = -982270774831432LL;
	int32_t t112 = 27444185;

    t112 = (x877>>((x878%x879)!=x880));

    if (t112 != 32767) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x893 = 5;
	volatile int8_t x894 = INT8_MAX;
	int64_t x895 = INT64_MIN;
	int16_t x896 = INT16_MAX;
	int32_t t113 = -438536;

    t113 = (x893>>((x894%x895)!=x896));

    if (t113 != 2) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x897 = UINT16_MAX;
	static int32_t x899 = -49870243;
	volatile int32_t t114 = 6993173;

    t114 = (x897>>((x898%x899)!=x900));

    if (t114 != 32767) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x905 = INT32_MAX;
	int8_t x906 = INT8_MIN;
	volatile int8_t x907 = -1;
	uint32_t x908 = 856U;
	volatile int32_t t115 = 46672;

    t115 = (x905>>((x906%x907)!=x908));

    if (t115 != 1073741823) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x909 = UINT32_MAX;
	volatile int16_t x910 = -1;
	volatile int16_t x911 = -240;
	static volatile int64_t x912 = INT64_MIN;
	static volatile uint32_t t116 = 9206866U;

    t116 = (x909>>((x910%x911)!=x912));

    if (t116 != 2147483647U) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x913 = UINT32_MAX;
	uint16_t x914 = 883U;
	volatile uint8_t x915 = UINT8_MAX;
	volatile int16_t x916 = 2705;
	uint32_t t117 = 39169834U;

    t117 = (x913>>((x914%x915)!=x916));

    if (t117 != 2147483647U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x921 = UINT64_MAX;
	uint32_t x922 = 1U;
	static int64_t x923 = INT64_MAX;
	int8_t x924 = 6;
	static volatile uint64_t t118 = 1422978334LLU;

    t118 = (x921>>((x922%x923)!=x924));

    if (t118 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x933 = UINT8_MAX;
	uint32_t x934 = 8041U;
	int16_t x935 = INT16_MIN;
	int32_t x936 = INT32_MAX;
	int32_t t119 = 11288226;

    t119 = (x933>>((x934%x935)!=x936));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x938 = -101LL;
	int32_t x939 = INT32_MAX;
	volatile int64_t t120 = -197946157557LL;

    t120 = (x937>>((x938%x939)!=x940));

    if (t120 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x942 = 2891U;
	uint16_t x943 = 1716U;
	uint16_t x944 = 5U;
	volatile uint64_t t121 = 3495477970607817002LLU;

    t121 = (x941>>((x942%x943)!=x944));

    if (t121 != 266202404271011685LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x945 = 53424908093405098LLU;
	uint16_t x946 = UINT16_MAX;
	int16_t x947 = 6091;
	int8_t x948 = INT8_MIN;
	static volatile uint64_t t122 = 264970762989LLU;

    t122 = (x945>>((x946%x947)!=x948));

    if (t122 != 26712454046702549LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x953 = 53U;
	static uint64_t x954 = UINT64_MAX;
	volatile int64_t x956 = INT64_MIN;
	int32_t t123 = 7441;

    t123 = (x953>>((x954%x955)!=x956));

    if (t123 != 26) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x957 = 1224U;
	int64_t x959 = INT64_MAX;
	int16_t x960 = INT16_MAX;

    t124 = (x957>>((x958%x959)!=x960));

    if (t124 != 612) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x969 = 48949U;
	static uint16_t x971 = 10988U;
	static int32_t x972 = -1;
	uint32_t t125 = 203186642U;

    t125 = (x969>>((x970%x971)!=x972));

    if (t125 != 24474U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x977 = INT8_MAX;
	uint64_t x978 = 1075215200810618930LLU;
	int32_t t126 = 8396;

    t126 = (x977>>((x978%x979)!=x980));

    if (t126 != 63) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x984 = INT32_MAX;
	int32_t t127 = -106247610;

    t127 = (x981>>((x982%x983)!=x984));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x985 = 1393U;
	static int64_t x986 = INT64_MIN;
	int8_t x987 = INT8_MAX;
	int64_t x988 = -1LL;
	volatile uint32_t t128 = 19U;

    t128 = (x985>>((x986%x987)!=x988));

    if (t128 != 1393U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x989 = INT32_MAX;
	uint8_t x990 = 16U;
	int64_t x992 = -44204LL;
	volatile int32_t t129 = 483941927;

    t129 = (x989>>((x990%x991)!=x992));

    if (t129 != 1073741823) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x993 = 276LLU;
	volatile uint8_t x995 = 1U;
	volatile int16_t x996 = -1;

    t130 = (x993>>((x994%x995)!=x996));

    if (t130 != 138LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x997 = 176203739803LLU;
	volatile uint8_t x998 = 5U;
	static int64_t x999 = INT64_MIN;
	int8_t x1000 = INT8_MIN;
	uint64_t t131 = 171039983830LLU;

    t131 = (x997>>((x998%x999)!=x1000));

    if (t131 != 88101869901LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x1005 = 1863311237U;
	uint16_t x1006 = UINT16_MAX;
	int64_t x1007 = INT64_MAX;
	int16_t x1008 = INT16_MIN;
	uint32_t t132 = 4145275U;

    t132 = (x1005>>((x1006%x1007)!=x1008));

    if (t132 != 931655618U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x1009 = 624935988U;
	int32_t x1010 = -1;
	int16_t x1011 = 3776;
	uint8_t x1012 = 5U;

    t133 = (x1009>>((x1010%x1011)!=x1012));

    if (t133 != 312467994U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x1013 = 0U;
	int32_t x1014 = INT32_MIN;
	int16_t x1015 = -1;
	int64_t x1016 = -1LL;
	static int32_t t134 = -37024257;

    t134 = (x1013>>((x1014%x1015)!=x1016));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint8_t x1017 = 2U;
	static uint16_t x1018 = UINT16_MAX;
	int8_t x1019 = INT8_MIN;
	static volatile int8_t x1020 = INT8_MIN;
	volatile int32_t t135 = -56877;

    t135 = (x1017>>((x1018%x1019)!=x1020));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x1021 = INT32_MAX;
	volatile uint64_t x1022 = UINT64_MAX;
	int32_t x1024 = INT32_MAX;

    t136 = (x1021>>((x1022%x1023)!=x1024));

    if (t136 != 1073741823) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x1029 = 9;
	uint16_t x1030 = UINT16_MAX;
	volatile uint32_t x1031 = UINT32_MAX;
	static volatile int16_t x1032 = INT16_MIN;
	static int32_t t137 = 5;

    t137 = (x1029>>((x1030%x1031)!=x1032));

    if (t137 != 4) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint8_t x1033 = UINT8_MAX;
	volatile int16_t x1034 = -2;
	int64_t x1035 = INT64_MIN;
	static int64_t x1036 = 76666906617011109LL;
	volatile int32_t t138 = -1682;

    t138 = (x1033>>((x1034%x1035)!=x1036));

    if (t138 != 127) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x1037 = 0U;
	uint64_t x1040 = 1197LLU;
	volatile int32_t t139 = -25964;

    t139 = (x1037>>((x1038%x1039)!=x1040));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x1041 = UINT64_MAX;
	volatile int8_t x1043 = INT8_MIN;
	int64_t x1044 = -1LL;
	volatile uint64_t t140 = 3305215860LLU;

    t140 = (x1041>>((x1042%x1043)!=x1044));

    if (t140 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x1045 = 10U;
	int16_t x1046 = INT16_MIN;
	int64_t x1047 = 1LL;
	int32_t x1048 = INT32_MAX;
	int32_t t141 = 27924329;

    t141 = (x1045>>((x1046%x1047)!=x1048));

    if (t141 != 5) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x1049 = 5427355LL;
	int8_t x1051 = 49;
	volatile int64_t x1052 = INT64_MIN;
	volatile int64_t t142 = 1LL;

    t142 = (x1049>>((x1050%x1051)!=x1052));

    if (t142 != 2713677LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x1053 = UINT32_MAX;
	int8_t x1054 = INT8_MIN;
	int32_t x1055 = -1;
	int8_t x1056 = INT8_MIN;
	volatile uint32_t t143 = 57746U;

    t143 = (x1053>>((x1054%x1055)!=x1056));

    if (t143 != 2147483647U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x1059 = UINT16_MAX;
	int64_t x1060 = -1LL;
	volatile uint32_t t144 = 115582894U;

    t144 = (x1057>>((x1058%x1059)!=x1060));

    if (t144 != 341348153U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x1065 = INT64_MAX;
	volatile uint32_t x1066 = 69U;
	int8_t x1067 = -1;
	int8_t x1068 = INT8_MAX;
	volatile int64_t t145 = -9LL;

    t145 = (x1065>>((x1066%x1067)!=x1068));

    if (t145 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1078 = INT64_MAX;
	static int16_t x1079 = -1;
	int32_t x1080 = -12271;
	volatile int64_t t146 = 17288LL;

    t146 = (x1077>>((x1078%x1079)!=x1080));

    if (t146 != 6512315331790604LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x1081 = INT8_MAX;
	int16_t x1082 = INT16_MAX;
	static volatile int32_t x1083 = -1;
	volatile uint32_t x1084 = 621U;

    t147 = (x1081>>((x1082%x1083)!=x1084));

    if (t147 != 63) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1086 = -1;
	volatile int64_t x1087 = -436538465878999804LL;
	int32_t x1088 = INT32_MIN;

    t148 = (x1085>>((x1086%x1087)!=x1088));

    if (t148 != 127) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1089 = 12;
	int8_t x1090 = -29;
	int16_t x1091 = INT16_MAX;
	static volatile uint64_t x1092 = 161022422207429801LLU;
	static int32_t t149 = 89290;

    t149 = (x1089>>((x1090%x1091)!=x1092));

    if (t149 != 6) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1093 = 211752712U;
	uint32_t x1094 = 1U;
	static int8_t x1095 = INT8_MIN;
	static uint32_t t150 = 3U;

    t150 = (x1093>>((x1094%x1095)!=x1096));

    if (t150 != 105876356U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x1101 = UINT16_MAX;
	int32_t x1102 = INT32_MIN;
	int32_t x1103 = INT32_MIN;
	int8_t x1104 = INT8_MIN;
	volatile int32_t t151 = -438;

    t151 = (x1101>>((x1102%x1103)!=x1104));

    if (t151 != 32767) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1125 = UINT64_MAX;
	int8_t x1127 = -1;
	uint8_t x1128 = UINT8_MAX;
	uint64_t t152 = 227846411042776346LLU;

    t152 = (x1125>>((x1126%x1127)!=x1128));

    if (t152 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x1133 = UINT64_MAX;
	int32_t x1134 = -1;
	static int32_t x1135 = INT32_MIN;
	static int8_t x1136 = -1;
	volatile uint64_t t153 = UINT64_MAX;

    t153 = (x1133>>((x1134%x1135)!=x1136));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x1147 = -16690518082388LL;
	static uint64_t x1148 = 8LLU;

    t154 = (x1145>>((x1146%x1147)!=x1148));

    if (t154 != 7) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint32_t x1149 = UINT32_MAX;
	static int16_t x1150 = INT16_MIN;
	int64_t x1152 = 8062011365817LL;
	uint32_t t155 = 52651560U;

    t155 = (x1149>>((x1150%x1151)!=x1152));

    if (t155 != 2147483647U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x1153 = 19821175LL;
	uint64_t x1154 = UINT64_MAX;
	static int64_t x1155 = INT64_MIN;
	int64_t x1156 = INT64_MIN;

    t156 = (x1153>>((x1154%x1155)!=x1156));

    if (t156 != 9910587LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1157 = UINT32_MAX;
	int64_t x1158 = INT64_MIN;
	int8_t x1159 = INT8_MIN;
	int16_t x1160 = INT16_MIN;
	uint32_t t157 = 617677266U;

    t157 = (x1157>>((x1158%x1159)!=x1160));

    if (t157 != 2147483647U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x1161 = 6665084811994LLU;
	volatile int32_t x1162 = INT32_MIN;
	static volatile int32_t x1163 = INT32_MIN;
	static volatile int16_t x1164 = -5739;
	static uint64_t t158 = 322573567LLU;

    t158 = (x1161>>((x1162%x1163)!=x1164));

    if (t158 != 3332542405997LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1165 = INT8_MAX;
	int16_t x1166 = -5029;
	int64_t x1167 = -1LL;
	volatile int32_t t159 = -313934;

    t159 = (x1165>>((x1166%x1167)!=x1168));

    if (t159 != 63) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x1173 = INT8_MAX;
	uint64_t x1175 = 2137834598LLU;
	int64_t x1176 = -1LL;

    t160 = (x1173>>((x1174%x1175)!=x1176));

    if (t160 != 63) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x1179 = 30425560348LLU;
	uint32_t t161 = 4055866U;

    t161 = (x1177>>((x1178%x1179)!=x1180));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1181 = UINT8_MAX;
	volatile uint32_t x1182 = 22692U;
	static volatile int64_t x1183 = INT64_MAX;
	static int8_t x1184 = INT8_MIN;

    t162 = (x1181>>((x1182%x1183)!=x1184));

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1190 = INT64_MIN;
	static uint64_t x1191 = 66292825058977LLU;
	int8_t x1192 = 16;
	static int32_t t163 = -112542;

    t163 = (x1189>>((x1190%x1191)!=x1192));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1193 = 30073894845LLU;
	int32_t x1195 = -6186498;
	int64_t x1196 = INT64_MAX;
	volatile uint64_t t164 = 41983LLU;

    t164 = (x1193>>((x1194%x1195)!=x1196));

    if (t164 != 15036947422LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1197 = 7793170;
	int16_t x1198 = -1;
	uint16_t x1199 = UINT16_MAX;
	int16_t x1200 = INT16_MIN;
	volatile int32_t t165 = -111541;

    t165 = (x1197>>((x1198%x1199)!=x1200));

    if (t165 != 3896585) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1209 = 0;
	int8_t x1211 = -61;
	int32_t t166 = 4;

    t166 = (x1209>>((x1210%x1211)!=x1212));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x1217 = INT32_MAX;
	int64_t x1218 = INT64_MAX;
	static uint8_t x1219 = 27U;
	int64_t x1220 = INT64_MAX;
	int32_t t167 = -879759974;

    t167 = (x1217>>((x1218%x1219)!=x1220));

    if (t167 != 1073741823) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1221 = INT64_MAX;
	int32_t x1222 = 123;
	int64_t x1223 = INT64_MIN;
	int16_t x1224 = INT16_MAX;
	int64_t t168 = 4519LL;

    t168 = (x1221>>((x1222%x1223)!=x1224));

    if (t168 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1230 = UINT16_MAX;
	uint32_t x1231 = 5185U;
	static volatile int32_t t169 = -10034630;

    t169 = (x1229>>((x1230%x1231)!=x1232));

    if (t169 != 127) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x1234 = INT32_MIN;
	int64_t x1235 = INT64_MIN;
	static int64_t x1236 = -20652LL;
	static volatile int32_t t170 = -88;

    t170 = (x1233>>((x1234%x1235)!=x1236));

    if (t170 != 33) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x1237 = 221627450LLU;
	uint32_t x1238 = 1387U;
	static uint64_t t171 = 6272696367562LLU;

    t171 = (x1237>>((x1238%x1239)!=x1240));

    if (t171 != 110813725LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1249 = INT64_MAX;
	volatile uint8_t x1250 = 0U;
	uint64_t x1252 = UINT64_MAX;

    t172 = (x1249>>((x1250%x1251)!=x1252));

    if (t172 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x1253 = INT32_MAX;
	static int16_t x1254 = INT16_MIN;
	uint64_t x1255 = 36LLU;
	volatile int32_t t173 = -569579201;

    t173 = (x1253>>((x1254%x1255)!=x1256));

    if (t173 != 1073741823) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1257 = 26717U;
	uint64_t x1260 = UINT64_MAX;
	volatile uint32_t t174 = 1955353U;

    t174 = (x1257>>((x1258%x1259)!=x1260));

    if (t174 != 26717U) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x1261 = 184815695991812LLU;
	static uint8_t x1262 = UINT8_MAX;
	static int16_t x1263 = INT16_MIN;
	uint64_t t175 = 374804696265LLU;

    t175 = (x1261>>((x1262%x1263)!=x1264));

    if (t175 != 92407847995906LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1265 = 1;
	volatile int64_t x1266 = INT64_MIN;
	static uint16_t x1267 = 3U;
	volatile int32_t t176 = -8032725;

    t176 = (x1265>>((x1266%x1267)!=x1268));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1277 = INT64_MAX;
	volatile int16_t x1278 = INT16_MIN;
	uint8_t x1279 = 18U;
	int64_t x1280 = -492407893102LL;

    t177 = (x1277>>((x1278%x1279)!=x1280));

    if (t177 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x1297 = UINT16_MAX;
	int64_t x1298 = -7783907LL;
	int64_t x1299 = INT64_MIN;
	volatile uint16_t x1300 = 3U;
	int32_t t178 = 196904023;

    t178 = (x1297>>((x1298%x1299)!=x1300));

    if (t178 != 32767) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x1302 = 471551470U;
	int64_t x1303 = INT64_MAX;
	int32_t t179 = 1;

    t179 = (x1301>>((x1302%x1303)!=x1304));

    if (t179 != 8733) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1321 = 1;
	static uint16_t x1322 = 55U;
	int8_t x1323 = INT8_MAX;
	static int16_t x1324 = INT16_MAX;
	volatile int32_t t180 = 75;

    t180 = (x1321>>((x1322%x1323)!=x1324));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1325 = 194870209284015LL;
	static int32_t x1326 = INT32_MIN;
	int64_t x1327 = INT64_MIN;
	int32_t x1328 = INT32_MAX;

    t181 = (x1325>>((x1326%x1327)!=x1328));

    if (t181 != 97435104642007LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x1342 = INT64_MIN;
	volatile uint64_t x1343 = 258851859416193335LLU;
	int16_t x1344 = INT16_MIN;
	static volatile uint64_t t182 = 445LLU;

    t182 = (x1341>>((x1342%x1343)!=x1344));

    if (t182 != 22529049226LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x1357 = INT32_MAX;
	uint32_t x1359 = UINT32_MAX;
	int16_t x1360 = INT16_MAX;
	static volatile int32_t t183 = 163438;

    t183 = (x1357>>((x1358%x1359)!=x1360));

    if (t183 != 1073741823) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1369 = UINT32_MAX;
	int32_t x1370 = 6151726;
	static int8_t x1371 = INT8_MAX;
	int8_t x1372 = INT8_MIN;
	static uint32_t t184 = 198653U;

    t184 = (x1369>>((x1370%x1371)!=x1372));

    if (t184 != 2147483647U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x1377 = 104455653258488LL;
	uint8_t x1378 = 101U;
	uint16_t x1379 = UINT16_MAX;
	int64_t x1380 = -3285101672097LL;
	int64_t t185 = -13LL;

    t185 = (x1377>>((x1378%x1379)!=x1380));

    if (t185 != 52227826629244LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x1385 = 843849601900636398LL;
	volatile int16_t x1386 = INT16_MIN;
	uint8_t x1388 = UINT8_MAX;
	int64_t t186 = 1LL;

    t186 = (x1385>>((x1386%x1387)!=x1388));

    if (t186 != 421924800950318199LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1389 = UINT8_MAX;
	int16_t x1390 = INT16_MIN;
	int8_t x1392 = -1;
	int32_t t187 = -851734;

    t187 = (x1389>>((x1390%x1391)!=x1392));

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint8_t x1401 = 2U;
	int64_t x1402 = INT64_MAX;
	static uint16_t x1403 = 27172U;
	uint8_t x1404 = 25U;
	volatile int32_t t188 = 174977670;

    t188 = (x1401>>((x1402%x1403)!=x1404));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t t189 = 10580172;

    t189 = (x1405>>((x1406%x1407)!=x1408));

    if (t189 != 16383) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint32_t x1409 = UINT32_MAX;
	static int8_t x1410 = INT8_MIN;
	int32_t x1412 = INT32_MIN;
	volatile uint32_t t190 = 0U;

    t190 = (x1409>>((x1410%x1411)!=x1412));

    if (t190 != 2147483647U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1420 = 123U;
	int32_t t191 = 29;

    t191 = (x1417>>((x1418%x1419)!=x1420));

    if (t191 != 127) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x1425 = INT8_MAX;
	volatile int16_t x1426 = 1;
	uint16_t x1427 = UINT16_MAX;
	uint16_t x1428 = UINT16_MAX;

    t192 = (x1425>>((x1426%x1427)!=x1428));

    if (t192 != 63) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x1433 = INT16_MAX;
	int8_t x1434 = -1;
	static int32_t t193 = 527576427;

    t193 = (x1433>>((x1434%x1435)!=x1436));

    if (t193 != 16383) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1437 = INT16_MAX;
	uint64_t x1439 = UINT64_MAX;
	int64_t x1440 = INT64_MIN;
	volatile int32_t t194 = 5862773;

    t194 = (x1437>>((x1438%x1439)!=x1440));

    if (t194 != 16383) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint16_t x1445 = UINT16_MAX;
	int64_t x1446 = INT64_MIN;
	volatile int16_t x1447 = -1;
	volatile int8_t x1448 = INT8_MAX;
	int32_t t195 = -19992;

    t195 = (x1445>>((x1446%x1447)!=x1448));

    if (t195 != 32767) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1449 = 4U;
	static int64_t x1450 = 0LL;
	int64_t x1451 = INT64_MAX;
	volatile uint32_t x1452 = 519898U;
	int32_t t196 = -360203044;

    t196 = (x1449>>((x1450%x1451)!=x1452));

    if (t196 != 2) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1453 = 63;
	volatile int64_t x1454 = -1LL;
	static int8_t x1455 = -1;
	static int8_t x1456 = INT8_MIN;
	static int32_t t197 = 2127583;

    t197 = (x1453>>((x1454%x1455)!=x1456));

    if (t197 != 31) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1465 = 411174U;
	int16_t x1466 = 1;
	int64_t x1467 = 4661523199135LL;
	int16_t x1468 = -161;
	volatile uint32_t t198 = 7528626U;

    t198 = (x1465>>((x1466%x1467)!=x1468));

    if (t198 != 205587U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1473 = INT64_MAX;
	uint32_t x1474 = 60822718U;
	int32_t x1476 = INT32_MIN;
	int64_t t199 = 1LL;

    t199 = (x1473>>((x1474%x1475)!=x1476));

    if (t199 != 4611686018427387903LL) { NG(); } else { ; }
	
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

