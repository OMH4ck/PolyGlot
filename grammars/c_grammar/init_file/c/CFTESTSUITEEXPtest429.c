
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

static int16_t x4 = -3132;
uint32_t x11 = UINT32_MAX;
uint8_t x12 = 0U;
volatile int32_t x15 = -1;
int64_t x16 = INT64_MAX;
static uint64_t x24 = 426835711527908LLU;
int32_t t3 = -2679691;
static int32_t x26 = INT32_MAX;
int32_t t4 = 2663289;
int8_t x39 = -15;
uint16_t x44 = UINT16_MAX;
uint64_t x62 = 9889660585619323LLU;
int64_t x64 = INT64_MIN;
static uint16_t x67 = 11851U;
static uint8_t x73 = 0U;
int32_t t14 = -1657;
uint8_t x81 = 21U;
int32_t x97 = INT32_MAX;
int32_t x99 = -1;
static int32_t t16 = -1;
int8_t x124 = INT8_MIN;
volatile int32_t t18 = 11;
uint16_t x126 = 0U;
volatile int32_t t19 = -736736317;
int64_t x129 = -1LL;
volatile int16_t x148 = -408;
uint32_t x169 = UINT32_MAX;
int32_t x170 = -4498;
volatile int32_t x175 = -91751;
volatile uint8_t x184 = 1U;
uint8_t x189 = UINT8_MAX;
uint16_t x225 = 13855U;
int16_t x226 = INT16_MIN;
volatile int64_t x228 = -1LL;
volatile uint16_t x229 = UINT16_MAX;
int8_t x237 = -1;
int8_t x240 = INT8_MIN;
volatile uint32_t x263 = 212U;
int32_t t41 = 5013;
int16_t x284 = INT16_MIN;
int64_t x304 = -1LL;
static uint16_t x314 = 0U;
int8_t x317 = INT8_MAX;
int16_t x321 = -1;
int64_t x322 = -1LL;
static volatile int32_t t47 = -60818212;
volatile int32_t t49 = -8329988;
static int32_t t50 = -44329621;
int32_t x345 = INT32_MIN;
static uint32_t x348 = 135U;
uint32_t x352 = UINT32_MAX;
int64_t x353 = 758678LL;
int32_t x359 = INT32_MIN;
uint8_t x360 = 0U;
uint16_t x365 = 2U;
uint64_t x367 = 456100636959844LLU;
volatile uint16_t x369 = 1273U;
int64_t x370 = 428110001LL;
int32_t x373 = -1;
volatile int32_t t58 = 251944625;
int16_t x401 = -1;
int64_t x402 = INT64_MIN;
uint32_t x405 = 6U;
int8_t x411 = -13;
int32_t t67 = 74097;
static int64_t x457 = 564195409LL;
static volatile int32_t t72 = 1;
volatile uint8_t x466 = 36U;
int32_t x469 = 3397;
static volatile int32_t t74 = 15;
int64_t x473 = -16LL;
int8_t x476 = INT8_MIN;
static int32_t t75 = -246871635;
uint16_t x492 = 1U;
int16_t x515 = INT16_MAX;
int8_t x528 = INT8_MIN;
static int16_t x538 = INT16_MAX;
volatile int64_t x560 = -1LL;
int32_t x571 = -1;
volatile int32_t t84 = -362;
static int16_t x575 = 0;
volatile int64_t x577 = INT64_MAX;
static uint16_t x578 = 19U;
int32_t t86 = 125070;
uint64_t x581 = 13613835841024757LLU;
uint8_t x583 = 1U;
int32_t t87 = 11;
uint8_t x585 = 14U;
uint32_t x588 = 173339764U;
volatile int64_t x603 = -743245LL;
int16_t x606 = 9;
uint32_t x630 = 2U;
volatile int32_t x638 = -1;
uint32_t x639 = UINT32_MAX;
int32_t x685 = INT32_MAX;
int64_t x687 = 61LL;
int8_t x694 = 13;
int8_t x697 = -1;
volatile int32_t t102 = 7925456;
int16_t x718 = INT16_MIN;
static volatile int8_t x737 = INT8_MAX;
static uint16_t x739 = UINT16_MAX;
volatile int32_t t107 = -53001351;
int16_t x758 = 1840;
int8_t x759 = 1;
uint8_t x760 = 0U;
int32_t t110 = -1;
int16_t x765 = INT16_MAX;
volatile int64_t x766 = -1LL;
volatile int32_t x769 = 18251417;
static int16_t x771 = INT16_MIN;
int16_t x774 = -245;
int16_t x777 = INT16_MAX;
static int8_t x779 = INT8_MAX;
static uint64_t x794 = UINT64_MAX;
volatile uint8_t x795 = 1U;
int8_t x797 = 1;
uint32_t x799 = 3U;
int32_t t118 = -13201844;
static uint16_t x805 = 6U;
int32_t t119 = -4;
volatile int8_t x814 = INT8_MIN;
volatile uint8_t x815 = 44U;
static int32_t t122 = -274479;
volatile int16_t x837 = -1;
static int16_t x844 = 2592;
static int32_t x847 = INT32_MAX;
static int32_t t129 = 11488066;
int8_t x872 = 3;
uint64_t x877 = 3LLU;
static int32_t x878 = -2;
int64_t x879 = -964122160993950LL;
static int32_t t132 = 379;
volatile int32_t t134 = 158097;
int8_t x912 = INT8_MIN;
int16_t x931 = 1253;
volatile int16_t x937 = 7482;
int16_t x943 = 6;
int64_t x946 = -1LL;
int32_t x947 = INT32_MIN;
uint32_t x948 = 5U;
uint8_t x949 = 18U;
int8_t x954 = -1;
volatile uint64_t x960 = UINT64_MAX;
int8_t x964 = -2;
volatile int32_t t147 = 1366;
int64_t x977 = INT64_MAX;
volatile uint8_t x980 = UINT8_MAX;
volatile uint8_t x986 = 33U;
int32_t t150 = -499198;
int32_t x1023 = 189;
int32_t t152 = 137;
int8_t x1031 = INT8_MIN;
uint64_t x1067 = UINT64_MAX;
int32_t x1068 = INT32_MAX;
int32_t t160 = 2947159;
static int32_t t163 = 3894;
static int64_t x1082 = -31313761073329448LL;
int16_t x1095 = INT16_MIN;
uint16_t x1096 = 130U;
int8_t x1116 = -50;
uint64_t x1119 = 4320812617240682LLU;
int16_t x1120 = INT16_MIN;
volatile int32_t t167 = -26479;
int8_t x1121 = INT8_MIN;
volatile int32_t t168 = 400783140;
volatile int8_t x1125 = 51;
static uint64_t x1128 = 11078LLU;
volatile uint16_t x1136 = UINT16_MAX;
int8_t x1137 = -1;
int16_t x1140 = INT16_MIN;
volatile int32_t t171 = 84;
static int32_t t173 = -3219274;
volatile int32_t t174 = -1425335;
uint16_t x1163 = 597U;
static int16_t x1182 = -1;
volatile int64_t x1201 = -4LL;
volatile int32_t t182 = -2;
uint64_t x1214 = 1564262372926951437LLU;
uint64_t x1216 = 2553856391LLU;
static int16_t x1229 = INT16_MAX;
int32_t t188 = -1017181;
volatile int32_t t189 = -40060;
uint16_t x1250 = 521U;
int16_t x1251 = -2;
int16_t x1259 = -170;
static volatile uint8_t x1260 = 12U;
static volatile uint32_t x1269 = 179792U;
int64_t x1279 = INT64_MAX;
static uint32_t x1286 = 970098277U;
volatile int32_t t198 = -146;


void f0(void) {
    	uint32_t x1 = 301806U;
	uint16_t x2 = 1716U;
	int32_t x3 = -1;
	int32_t t0 = -12;

    t0 = (x1>((x2*x3)*x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x9 = 1144U;
	int32_t x10 = 1279046;
	int32_t t1 = -1;

    t1 = (x9>((x10*x11)*x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x13 = -1;
	static volatile int16_t x14 = -1;
	volatile int32_t t2 = 66121021;

    t2 = (x13>((x14*x15)*x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x21 = -12;
	int16_t x22 = INT16_MIN;
	int32_t x23 = -11461;

    t3 = (x21>((x22*x23)*x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = INT16_MIN;
	uint64_t x27 = 3LLU;
	int32_t x28 = -1;

    t4 = (x25>((x26*x27)*x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x33 = INT32_MIN;
	uint32_t x34 = UINT32_MAX;
	int8_t x35 = 1;
	int64_t x36 = -2461090LL;
	int32_t t5 = -1;

    t5 = (x33>((x34*x35)*x36));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x37 = -19;
	uint64_t x38 = 208895619508228LLU;
	uint64_t x40 = 2121LLU;
	volatile int32_t t6 = -2;

    t6 = (x37>((x38*x39)*x40));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x41 = 102810;
	uint64_t x42 = 10528362LLU;
	volatile uint16_t x43 = UINT16_MAX;
	int32_t t7 = 3390784;

    t7 = (x41>((x42*x43)*x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x45 = -1;
	int8_t x46 = INT8_MIN;
	static int32_t x47 = -1;
	uint8_t x48 = 89U;
	int32_t t8 = 525309;

    t8 = (x45>((x46*x47)*x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x53 = 25;
	uint8_t x54 = 6U;
	uint32_t x55 = 6U;
	static int16_t x56 = INT16_MAX;
	volatile int32_t t9 = 5342;

    t9 = (x53>((x54*x55)*x56));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x57 = -54002970413LL;
	uint32_t x58 = 410U;
	int16_t x59 = 698;
	volatile int16_t x60 = INT16_MIN;
	volatile int32_t t10 = -59;

    t10 = (x57>((x58*x59)*x60));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x61 = 1;
	uint64_t x63 = 586LLU;
	int32_t t11 = -5888815;

    t11 = (x61>((x62*x63)*x64));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x65 = INT8_MIN;
	static uint8_t x66 = UINT8_MAX;
	static int16_t x68 = -1;
	int32_t t12 = -18045;

    t12 = (x65>((x66*x67)*x68));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x69 = -1;
	int32_t x70 = 46;
	uint16_t x71 = UINT16_MAX;
	static volatile int32_t x72 = -1;
	int32_t t13 = -102526927;

    t13 = (x69>((x70*x71)*x72));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x74 = UINT32_MAX;
	static int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MIN;

    t14 = (x73>((x74*x75)*x76));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x82 = -8;
	static volatile int8_t x83 = INT8_MAX;
	volatile int16_t x84 = INT16_MAX;
	static volatile int32_t t15 = -18831;

    t15 = (x81>((x82*x83)*x84));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x98 = 110116746702LLU;
	static int64_t x100 = INT64_MIN;

    t16 = (x97>((x98*x99)*x100));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x117 = INT64_MAX;
	volatile uint16_t x118 = 21U;
	int16_t x119 = 3;
	volatile uint16_t x120 = 36U;
	static volatile int32_t t17 = 6644;

    t17 = (x117>((x118*x119)*x120));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x121 = 1350237179746LLU;
	int8_t x122 = INT8_MIN;
	uint8_t x123 = UINT8_MAX;

    t18 = (x121>((x122*x123)*x124));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x125 = -1;
	uint64_t x127 = 193108459443723393LLU;
	uint64_t x128 = 12265LLU;

    t19 = (x125>((x126*x127)*x128));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x130 = 60;
	int64_t x131 = 26801843546LL;
	uint16_t x132 = UINT16_MAX;
	int32_t t20 = 645276727;

    t20 = (x129>((x130*x131)*x132));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x137 = INT32_MIN;
	volatile int16_t x138 = -4061;
	uint16_t x139 = UINT16_MAX;
	static int16_t x140 = -1;
	int32_t t21 = -6924964;

    t21 = (x137>((x138*x139)*x140));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x145 = INT64_MIN;
	uint64_t x146 = 517817252432509LLU;
	volatile int16_t x147 = INT16_MIN;
	volatile int32_t t22 = -2116;

    t22 = (x145>((x146*x147)*x148));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x161 = INT64_MAX;
	uint64_t x162 = 1174226075926LLU;
	uint32_t x163 = 345657U;
	volatile int32_t x164 = INT32_MAX;
	static int32_t t23 = -1010357;

    t23 = (x161>((x162*x163)*x164));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x165 = INT32_MIN;
	volatile uint16_t x166 = UINT16_MAX;
	static int16_t x167 = -13;
	uint32_t x168 = 182503676U;
	int32_t t24 = -4;

    t24 = (x165>((x166*x167)*x168));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x171 = 0;
	int64_t x172 = -116LL;
	int32_t t25 = 1279289;

    t25 = (x169>((x170*x171)*x172));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x173 = INT16_MAX;
	volatile uint16_t x174 = 10495U;
	int16_t x176 = -1;
	static volatile int32_t t26 = 31460;

    t26 = (x173>((x174*x175)*x176));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x181 = INT64_MAX;
	int32_t x182 = -1;
	uint16_t x183 = 53U;
	volatile int32_t t27 = -1950;

    t27 = (x181>((x182*x183)*x184));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x190 = INT64_MIN;
	uint64_t x191 = 46908750125455LLU;
	int16_t x192 = INT16_MIN;
	volatile int32_t t28 = -669107410;

    t28 = (x189>((x190*x191)*x192));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int8_t x201 = INT8_MAX;
	uint64_t x202 = 18902459LLU;
	static int16_t x203 = 6;
	uint64_t x204 = 34481536LLU;
	int32_t t29 = 6;

    t29 = (x201>((x202*x203)*x204));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x205 = 902;
	volatile uint16_t x206 = 31342U;
	static volatile uint64_t x207 = 7178696360546660LLU;
	int32_t x208 = INT32_MAX;
	volatile int32_t t30 = 0;

    t30 = (x205>((x206*x207)*x208));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x209 = INT16_MAX;
	uint16_t x210 = UINT16_MAX;
	int8_t x211 = -1;
	int32_t x212 = -1;
	int32_t t31 = -8221086;

    t31 = (x209>((x210*x211)*x212));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x217 = -1;
	static int8_t x218 = -6;
	static int16_t x219 = INT16_MAX;
	volatile int8_t x220 = INT8_MAX;
	int32_t t32 = 0;

    t32 = (x217>((x218*x219)*x220));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x221 = -1LL;
	int64_t x222 = INT64_MIN;
	int8_t x223 = 0;
	uint8_t x224 = 26U;
	volatile int32_t t33 = 55477;

    t33 = (x221>((x222*x223)*x224));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x227 = UINT64_MAX;
	static volatile int32_t t34 = 44603013;

    t34 = (x225>((x226*x227)*x228));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x230 = -1;
	int64_t x231 = -12LL;
	int32_t x232 = INT32_MIN;
	volatile int32_t t35 = -3881668;

    t35 = (x229>((x230*x231)*x232));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x238 = UINT64_MAX;
	volatile int64_t x239 = -476669341270LL;
	int32_t t36 = 10249;

    t36 = (x237>((x238*x239)*x240));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x241 = -1;
	static int16_t x242 = INT16_MAX;
	int16_t x243 = -1;
	uint64_t x244 = 24486LLU;
	volatile int32_t t37 = 440;

    t37 = (x241>((x242*x243)*x244));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x245 = UINT8_MAX;
	volatile int32_t x246 = INT32_MIN;
	uint64_t x247 = 6LLU;
	int16_t x248 = INT16_MAX;
	volatile int32_t t38 = 133;

    t38 = (x245>((x246*x247)*x248));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x261 = INT32_MIN;
	int16_t x262 = 2;
	static volatile int64_t x264 = -1LL;
	int32_t t39 = 1;

    t39 = (x261>((x262*x263)*x264));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint8_t x265 = UINT8_MAX;
	static int64_t x266 = -1LL;
	uint16_t x267 = UINT16_MAX;
	int8_t x268 = 5;
	int32_t t40 = 270408605;

    t40 = (x265>((x266*x267)*x268));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x273 = 273838709920LLU;
	uint8_t x274 = UINT8_MAX;
	static uint16_t x275 = UINT16_MAX;
	volatile uint64_t x276 = UINT64_MAX;

    t41 = (x273>((x274*x275)*x276));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x281 = UINT8_MAX;
	uint16_t x282 = UINT16_MAX;
	int8_t x283 = -1;
	volatile int32_t t42 = -3;

    t42 = (x281>((x282*x283)*x284));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x285 = 20U;
	volatile uint16_t x286 = 211U;
	volatile uint32_t x287 = 402U;
	volatile int16_t x288 = -1;
	static volatile int32_t t43 = -421907;

    t43 = (x285>((x286*x287)*x288));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x301 = INT32_MIN;
	static int32_t x302 = -1;
	int16_t x303 = -1;
	volatile int32_t t44 = 2076580;

    t44 = (x301>((x302*x303)*x304));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x313 = UINT32_MAX;
	uint8_t x315 = 32U;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t45 = 6610;

    t45 = (x313>((x314*x315)*x316));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x318 = 377U;
	uint16_t x319 = 425U;
	int8_t x320 = -9;
	int32_t t46 = -256015166;

    t46 = (x317>((x318*x319)*x320));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x323 = -4;
	static volatile int32_t x324 = -1;

    t47 = (x321>((x322*x323)*x324));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x329 = INT8_MIN;
	int8_t x330 = INT8_MAX;
	volatile uint8_t x331 = UINT8_MAX;
	static int8_t x332 = -22;
	volatile int32_t t48 = 1;

    t48 = (x329>((x330*x331)*x332));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x333 = 17504938772488009LLU;
	int32_t x334 = 13847381;
	int8_t x335 = 1;
	int8_t x336 = INT8_MIN;

    t49 = (x333>((x334*x335)*x336));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x337 = 8103U;
	volatile uint32_t x338 = 400210U;
	int32_t x339 = INT32_MAX;
	uint16_t x340 = 0U;

    t50 = (x337>((x338*x339)*x340));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x346 = 7644173U;
	int32_t x347 = INT32_MIN;
	int32_t t51 = 2017;

    t51 = (x345>((x346*x347)*x348));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x349 = INT16_MIN;
	static int16_t x350 = INT16_MAX;
	int8_t x351 = -1;
	static volatile int32_t t52 = -1;

    t52 = (x349>((x350*x351)*x352));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x354 = UINT32_MAX;
	int16_t x355 = INT16_MAX;
	uint8_t x356 = 0U;
	int32_t t53 = -112;

    t53 = (x353>((x354*x355)*x356));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x357 = 209LLU;
	uint32_t x358 = 7269994U;
	volatile int32_t t54 = 29334;

    t54 = (x357>((x358*x359)*x360));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x366 = 0U;
	static int8_t x368 = 0;
	static volatile int32_t t55 = 3542;

    t55 = (x365>((x366*x367)*x368));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x371 = 23;
	int32_t x372 = -1;
	int32_t t56 = -24146;

    t56 = (x369>((x370*x371)*x372));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x374 = -1;
	static uint32_t x375 = 130457028U;
	static int32_t x376 = -1;
	int32_t t57 = -15;

    t57 = (x373>((x374*x375)*x376));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x377 = INT16_MAX;
	static volatile int32_t x378 = -1;
	static int32_t x379 = 1373613;
	volatile uint64_t x380 = 3853868159781LLU;

    t58 = (x377>((x378*x379)*x380));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x381 = 18U;
	volatile int64_t x382 = -1LL;
	volatile int64_t x383 = -32090824191361LL;
	uint64_t x384 = 4LLU;
	volatile int32_t t59 = -23;

    t59 = (x381>((x382*x383)*x384));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x385 = 766600850516538787LL;
	static volatile int64_t x386 = -1LL;
	int64_t x387 = -1LL;
	uint32_t x388 = 15U;
	static int32_t t60 = -93;

    t60 = (x385>((x386*x387)*x388));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x389 = 4610;
	static int64_t x390 = INT64_MIN;
	uint64_t x391 = UINT64_MAX;
	volatile uint64_t x392 = UINT64_MAX;
	static volatile int32_t t61 = -3854;

    t61 = (x389>((x390*x391)*x392));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x397 = 27U;
	int32_t x398 = -1;
	uint32_t x399 = UINT32_MAX;
	uint32_t x400 = UINT32_MAX;
	int32_t t62 = -7;

    t62 = (x397>((x398*x399)*x400));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x403 = UINT64_MAX;
	uint32_t x404 = UINT32_MAX;
	int32_t t63 = 454396;

    t63 = (x401>((x402*x403)*x404));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x406 = 640299654LLU;
	volatile uint16_t x407 = UINT16_MAX;
	int64_t x408 = 1271700959278LL;
	volatile int32_t t64 = -313;

    t64 = (x405>((x406*x407)*x408));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x409 = -1;
	int8_t x410 = INT8_MAX;
	int16_t x412 = -5;
	volatile int32_t t65 = 29973684;

    t65 = (x409>((x410*x411)*x412));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x417 = -9;
	static int8_t x418 = -1;
	static volatile int8_t x419 = 13;
	volatile int8_t x420 = 5;
	int32_t t66 = 6063318;

    t66 = (x417>((x418*x419)*x420));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x425 = 40U;
	static int16_t x426 = -3;
	uint64_t x427 = 9LLU;
	int8_t x428 = INT8_MAX;

    t67 = (x425>((x426*x427)*x428));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x433 = -1;
	int32_t x434 = INT32_MIN;
	volatile uint32_t x435 = 13074310U;
	uint16_t x436 = 4U;
	volatile int32_t t68 = -3;

    t68 = (x433>((x434*x435)*x436));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x437 = INT64_MIN;
	volatile int32_t x438 = 0;
	uint8_t x439 = 0U;
	volatile uint64_t x440 = 26156320LLU;
	volatile int32_t t69 = 150;

    t69 = (x437>((x438*x439)*x440));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x445 = INT32_MIN;
	int32_t x446 = 898733;
	volatile int64_t x447 = -1LL;
	static int64_t x448 = -1LL;
	int32_t t70 = 156318;

    t70 = (x445>((x446*x447)*x448));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x458 = -7;
	uint8_t x459 = 3U;
	volatile uint16_t x460 = 55U;
	volatile int32_t t71 = 70778;

    t71 = (x457>((x458*x459)*x460));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x461 = 3;
	int8_t x462 = 1;
	volatile uint16_t x463 = UINT16_MAX;
	int8_t x464 = 2;

    t72 = (x461>((x462*x463)*x464));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x465 = 795683U;
	volatile uint16_t x467 = UINT16_MAX;
	int8_t x468 = INT8_MIN;
	volatile int32_t t73 = 49552460;

    t73 = (x465>((x466*x467)*x468));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x470 = 0U;
	int8_t x471 = INT8_MIN;
	static uint64_t x472 = 643775256568723265LLU;

    t74 = (x469>((x470*x471)*x472));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x474 = INT16_MIN;
	int8_t x475 = INT8_MIN;

    t75 = (x473>((x474*x475)*x476));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x489 = UINT32_MAX;
	volatile uint32_t x490 = 6539213U;
	uint64_t x491 = 641LLU;
	static int32_t t76 = -8584;

    t76 = (x489>((x490*x491)*x492));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x513 = 413484494U;
	int8_t x514 = INT8_MIN;
	static uint8_t x516 = 45U;
	int32_t t77 = -48969990;

    t77 = (x513>((x514*x515)*x516));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x517 = INT16_MAX;
	static int64_t x518 = 407513592LL;
	uint8_t x519 = 4U;
	uint16_t x520 = UINT16_MAX;
	int32_t t78 = -791545;

    t78 = (x517>((x518*x519)*x520));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x525 = INT32_MIN;
	uint32_t x526 = 634615614U;
	uint64_t x527 = UINT64_MAX;
	int32_t t79 = 7633567;

    t79 = (x525>((x526*x527)*x528));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x537 = -50342482936LL;
	int16_t x539 = 40;
	int16_t x540 = 68;
	static int32_t t80 = -86620;

    t80 = (x537>((x538*x539)*x540));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x549 = INT8_MIN;
	uint32_t x550 = 119U;
	static int32_t x551 = 58062248;
	int8_t x552 = -1;
	volatile int32_t t81 = 68;

    t81 = (x549>((x550*x551)*x552));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int64_t x557 = INT64_MIN;
	int32_t x558 = INT32_MAX;
	uint64_t x559 = 128818733636425478LLU;
	static int32_t t82 = -2946366;

    t82 = (x557>((x558*x559)*x560));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x561 = 99U;
	int64_t x562 = -1858381295034519128LL;
	static uint8_t x563 = 0U;
	uint64_t x564 = 3558284676635425LLU;
	static int32_t t83 = -932101;

    t83 = (x561>((x562*x563)*x564));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x569 = -1;
	int64_t x570 = -1LL;
	int32_t x572 = -1;

    t84 = (x569>((x570*x571)*x572));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x573 = 5U;
	int8_t x574 = -3;
	int64_t x576 = INT64_MAX;
	volatile int32_t t85 = 14;

    t85 = (x573>((x574*x575)*x576));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x579 = 6U;
	int8_t x580 = INT8_MIN;

    t86 = (x577>((x578*x579)*x580));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x582 = 1;
	int32_t x584 = INT32_MIN;

    t87 = (x581>((x582*x583)*x584));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x586 = INT16_MIN;
	int16_t x587 = INT16_MIN;
	int32_t t88 = -520709767;

    t88 = (x585>((x586*x587)*x588));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x601 = 1024773LLU;
	int8_t x602 = INT8_MIN;
	int64_t x604 = 1LL;
	int32_t t89 = 0;

    t89 = (x601>((x602*x603)*x604));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x605 = 43LLU;
	static volatile uint16_t x607 = 546U;
	volatile uint32_t x608 = UINT32_MAX;
	int32_t t90 = 3;

    t90 = (x605>((x606*x607)*x608));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x613 = 3U;
	uint16_t x614 = 1133U;
	int64_t x615 = -1LL;
	int8_t x616 = 36;
	volatile int32_t t91 = 133576;

    t91 = (x613>((x614*x615)*x616));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x621 = INT32_MAX;
	uint64_t x622 = UINT64_MAX;
	uint8_t x623 = 12U;
	uint32_t x624 = 120395272U;
	volatile int32_t t92 = 11777;

    t92 = (x621>((x622*x623)*x624));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x629 = INT32_MIN;
	int8_t x631 = INT8_MAX;
	volatile int16_t x632 = -1;
	volatile int32_t t93 = 268873;

    t93 = (x629>((x630*x631)*x632));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x633 = 29U;
	uint32_t x634 = 781582U;
	int32_t x635 = INT32_MIN;
	static uint32_t x636 = 6U;
	volatile int32_t t94 = 258591;

    t94 = (x633>((x634*x635)*x636));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x637 = INT8_MIN;
	volatile uint32_t x640 = 1239993U;
	volatile int32_t t95 = 1;

    t95 = (x637>((x638*x639)*x640));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x653 = INT16_MIN;
	uint16_t x654 = 6U;
	static int16_t x655 = INT16_MIN;
	uint16_t x656 = 518U;
	static int32_t t96 = 4799;

    t96 = (x653>((x654*x655)*x656));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x661 = 0U;
	uint64_t x662 = 1311257LLU;
	int64_t x663 = -1881046069LL;
	int64_t x664 = INT64_MIN;
	int32_t t97 = 1;

    t97 = (x661>((x662*x663)*x664));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x677 = -1LL;
	int8_t x678 = INT8_MIN;
	static int8_t x679 = INT8_MAX;
	uint64_t x680 = 1979736514837362848LLU;
	volatile int32_t t98 = 525857635;

    t98 = (x677>((x678*x679)*x680));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x686 = UINT8_MAX;
	int8_t x688 = INT8_MAX;
	volatile int32_t t99 = 162;

    t99 = (x685>((x686*x687)*x688));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x689 = INT32_MIN;
	static int64_t x690 = -1LL;
	int16_t x691 = INT16_MIN;
	static volatile int64_t x692 = -1LL;
	volatile int32_t t100 = -1;

    t100 = (x689>((x690*x691)*x692));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x693 = UINT32_MAX;
	static int16_t x695 = -1;
	int8_t x696 = INT8_MAX;
	int32_t t101 = 56809197;

    t101 = (x693>((x694*x695)*x696));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x698 = 3U;
	static int8_t x699 = INT8_MIN;
	int64_t x700 = -1LL;

    t102 = (x697>((x698*x699)*x700));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x701 = 338352843U;
	static int32_t x702 = INT32_MIN;
	uint64_t x703 = 8756085546976048LLU;
	static uint8_t x704 = UINT8_MAX;
	volatile int32_t t103 = 1027264123;

    t103 = (x701>((x702*x703)*x704));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x709 = INT8_MIN;
	int16_t x710 = INT16_MIN;
	int8_t x711 = -30;
	volatile int16_t x712 = 380;
	int32_t t104 = -6;

    t104 = (x709>((x710*x711)*x712));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x717 = INT16_MIN;
	volatile int64_t x719 = -347407608LL;
	int16_t x720 = INT16_MIN;
	volatile int32_t t105 = 6098887;

    t105 = (x717>((x718*x719)*x720));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x729 = 2;
	int8_t x730 = INT8_MIN;
	int32_t x731 = 1;
	uint64_t x732 = 267317801LLU;
	static int32_t t106 = -726832;

    t106 = (x729>((x730*x731)*x732));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x738 = 3550LLU;
	volatile int32_t x740 = 0;

    t107 = (x737>((x738*x739)*x740));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x741 = INT32_MIN;
	int8_t x742 = -1;
	int8_t x743 = INT8_MIN;
	int32_t x744 = -1;
	int32_t t108 = -960828993;

    t108 = (x741>((x742*x743)*x744));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x745 = INT32_MAX;
	int16_t x746 = INT16_MIN;
	volatile uint16_t x747 = 7U;
	static uint8_t x748 = 2U;
	volatile int32_t t109 = 2;

    t109 = (x745>((x746*x747)*x748));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x757 = INT16_MIN;

    t110 = (x757>((x758*x759)*x760));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x767 = 801U;
	int32_t x768 = INT32_MAX;
	volatile int32_t t111 = 1;

    t111 = (x765>((x766*x767)*x768));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x770 = INT16_MIN;
	int64_t x772 = -1LL;
	static volatile int32_t t112 = -20392982;

    t112 = (x769>((x770*x771)*x772));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x773 = INT64_MAX;
	uint64_t x775 = 72778392196LLU;
	volatile int8_t x776 = 6;
	volatile int32_t t113 = -2897041;

    t113 = (x773>((x774*x775)*x776));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x778 = -1LL;
	static int32_t x780 = -1;
	volatile int32_t t114 = -1008;

    t114 = (x777>((x778*x779)*x780));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x781 = 11;
	int32_t x782 = 2;
	static int32_t x783 = 2887315;
	int16_t x784 = -3;
	int32_t t115 = 39155;

    t115 = (x781>((x782*x783)*x784));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x793 = 115U;
	volatile uint64_t x796 = 2142021065LLU;
	int32_t t116 = -640713;

    t116 = (x793>((x794*x795)*x796));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x798 = 12065599LL;
	volatile int8_t x800 = 2;
	volatile int32_t t117 = -69488980;

    t117 = (x797>((x798*x799)*x800));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x801 = 8U;
	int64_t x802 = INT64_MIN;
	static uint64_t x803 = 163302165147034995LLU;
	int16_t x804 = -199;

    t118 = (x801>((x802*x803)*x804));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x806 = INT8_MAX;
	static volatile int16_t x807 = -7;
	uint8_t x808 = 2U;

    t119 = (x805>((x806*x807)*x808));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x813 = 1;
	int16_t x816 = -1;
	int32_t t120 = 418255725;

    t120 = (x813>((x814*x815)*x816));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x817 = INT32_MIN;
	uint64_t x818 = 645135345993949LLU;
	int64_t x819 = INT64_MIN;
	volatile int16_t x820 = -10049;
	static int32_t t121 = -37556323;

    t121 = (x817>((x818*x819)*x820));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x825 = INT64_MAX;
	volatile uint8_t x826 = 1U;
	int32_t x827 = INT32_MAX;
	volatile int64_t x828 = -1LL;

    t122 = (x825>((x826*x827)*x828));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x838 = -1;
	int16_t x839 = INT16_MAX;
	int64_t x840 = -1LL;
	static volatile int32_t t123 = -849796;

    t123 = (x837>((x838*x839)*x840));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x841 = UINT32_MAX;
	uint64_t x842 = 83307LLU;
	volatile int8_t x843 = INT8_MIN;
	static int32_t t124 = 539937480;

    t124 = (x841>((x842*x843)*x844));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x845 = 7524LL;
	uint32_t x846 = 112080019U;
	int8_t x848 = -1;
	volatile int32_t t125 = -386;

    t125 = (x845>((x846*x847)*x848));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x853 = INT32_MAX;
	int8_t x854 = 0;
	int32_t x855 = INT32_MAX;
	int32_t x856 = INT32_MIN;
	static int32_t t126 = -1;

    t126 = (x853>((x854*x855)*x856));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x857 = INT32_MIN;
	int32_t x858 = 794422;
	volatile uint32_t x859 = 20771U;
	int32_t x860 = -1947874;
	int32_t t127 = -710;

    t127 = (x857>((x858*x859)*x860));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x861 = INT16_MIN;
	uint16_t x862 = 245U;
	volatile int32_t x863 = -1;
	volatile int8_t x864 = -1;
	volatile int32_t t128 = -40817419;

    t128 = (x861>((x862*x863)*x864));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x865 = 15U;
	uint16_t x866 = 13U;
	int8_t x867 = 35;
	volatile int8_t x868 = INT8_MAX;

    t129 = (x865>((x866*x867)*x868));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x869 = INT16_MIN;
	int8_t x870 = INT8_MAX;
	static int16_t x871 = INT16_MIN;
	int32_t t130 = -1;

    t130 = (x869>((x870*x871)*x872));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x880 = -1;
	int32_t t131 = -10;

    t131 = (x877>((x878*x879)*x880));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x881 = -5;
	int8_t x882 = -1;
	uint8_t x883 = 35U;
	int8_t x884 = INT8_MAX;

    t132 = (x881>((x882*x883)*x884));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x885 = -1;
	int8_t x886 = -1;
	volatile uint16_t x887 = 4505U;
	uint8_t x888 = 15U;
	int32_t t133 = -50;

    t133 = (x885>((x886*x887)*x888));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x889 = 3958U;
	int8_t x890 = INT8_MAX;
	uint8_t x891 = UINT8_MAX;
	int32_t x892 = -1;

    t134 = (x889>((x890*x891)*x892));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x897 = -2;
	uint16_t x898 = 201U;
	uint64_t x899 = 1972954344956LLU;
	int16_t x900 = INT16_MIN;
	int32_t t135 = -167864;

    t135 = (x897>((x898*x899)*x900));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x905 = 615041263524LLU;
	volatile int8_t x906 = INT8_MIN;
	uint8_t x907 = UINT8_MAX;
	static int8_t x908 = INT8_MIN;
	int32_t t136 = 917557;

    t136 = (x905>((x906*x907)*x908));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x909 = 1860439599832LLU;
	uint64_t x910 = UINT64_MAX;
	int32_t x911 = 2342166;
	int32_t t137 = 15;

    t137 = (x909>((x910*x911)*x912));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x925 = 21609735;
	uint64_t x926 = 2142532098596880957LLU;
	int32_t x927 = -1;
	int16_t x928 = INT16_MIN;
	static int32_t t138 = -78;

    t138 = (x925>((x926*x927)*x928));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x929 = INT16_MIN;
	int8_t x930 = 0;
	int8_t x932 = INT8_MAX;
	static int32_t t139 = 3670;

    t139 = (x929>((x930*x931)*x932));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x938 = INT16_MAX;
	int8_t x939 = -1;
	int8_t x940 = 2;
	static volatile int32_t t140 = 242485;

    t140 = (x937>((x938*x939)*x940));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x941 = 5040744147LLU;
	uint64_t x942 = 2468073953910LLU;
	int16_t x944 = -12;
	int32_t t141 = -964;

    t141 = (x941>((x942*x943)*x944));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x945 = -1LL;
	volatile int32_t t142 = -13;

    t142 = (x945>((x946*x947)*x948));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x950 = 4LLU;
	int64_t x951 = INT64_MIN;
	uint8_t x952 = 100U;
	volatile int32_t t143 = 94670;

    t143 = (x949>((x950*x951)*x952));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x953 = INT16_MIN;
	static volatile uint32_t x955 = 72U;
	static int32_t x956 = INT32_MIN;
	volatile int32_t t144 = -3;

    t144 = (x953>((x954*x955)*x956));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x957 = INT16_MIN;
	static uint32_t x958 = UINT32_MAX;
	volatile uint8_t x959 = 1U;
	int32_t t145 = -1234;

    t145 = (x957>((x958*x959)*x960));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x961 = UINT8_MAX;
	static volatile uint16_t x962 = UINT16_MAX;
	static uint32_t x963 = 13839U;
	static volatile int32_t t146 = -68302804;

    t146 = (x961>((x962*x963)*x964));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x969 = INT16_MIN;
	int16_t x970 = 124;
	static uint32_t x971 = 1837U;
	volatile int64_t x972 = -1LL;

    t147 = (x969>((x970*x971)*x972));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x978 = 1;
	int8_t x979 = -6;
	volatile int32_t t148 = 5;

    t148 = (x977>((x978*x979)*x980));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x981 = 233U;
	volatile uint64_t x982 = UINT64_MAX;
	int32_t x983 = INT32_MAX;
	volatile int8_t x984 = -2;
	static volatile int32_t t149 = 1;

    t149 = (x981>((x982*x983)*x984));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x985 = INT8_MIN;
	int16_t x987 = INT16_MAX;
	static int8_t x988 = INT8_MIN;

    t150 = (x985>((x986*x987)*x988));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x1017 = INT64_MAX;
	static int32_t x1018 = 173;
	int16_t x1019 = 1220;
	volatile int16_t x1020 = -1;
	volatile int32_t t151 = 2217;

    t151 = (x1017>((x1018*x1019)*x1020));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x1021 = INT16_MAX;
	volatile uint64_t x1022 = UINT64_MAX;
	static int64_t x1024 = INT64_MAX;

    t152 = (x1021>((x1022*x1023)*x1024));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1029 = -1;
	uint8_t x1030 = 1U;
	int8_t x1032 = INT8_MIN;
	int32_t t153 = 78;

    t153 = (x1029>((x1030*x1031)*x1032));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x1037 = 5LL;
	int8_t x1038 = INT8_MIN;
	uint64_t x1039 = 437310442LLU;
	volatile int8_t x1040 = 47;
	int32_t t154 = -54695;

    t154 = (x1037>((x1038*x1039)*x1040));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1041 = UINT16_MAX;
	int16_t x1042 = -3416;
	uint32_t x1043 = 6U;
	uint8_t x1044 = UINT8_MAX;
	volatile int32_t t155 = 8;

    t155 = (x1041>((x1042*x1043)*x1044));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x1045 = 3U;
	static uint16_t x1046 = 1045U;
	volatile int8_t x1047 = -3;
	static volatile uint32_t x1048 = 6U;
	int32_t t156 = -3499;

    t156 = (x1045>((x1046*x1047)*x1048));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x1049 = UINT32_MAX;
	int32_t x1050 = -1;
	static volatile int8_t x1051 = INT8_MAX;
	int16_t x1052 = INT16_MIN;
	static volatile int32_t t157 = 47;

    t157 = (x1049>((x1050*x1051)*x1052));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1057 = INT64_MIN;
	volatile uint32_t x1058 = 2844U;
	uint8_t x1059 = 33U;
	uint8_t x1060 = UINT8_MAX;
	int32_t t158 = 637;

    t158 = (x1057>((x1058*x1059)*x1060));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1061 = INT64_MAX;
	uint8_t x1062 = UINT8_MAX;
	int64_t x1063 = -1LL;
	volatile int8_t x1064 = INT8_MIN;
	volatile int32_t t159 = -1207;

    t159 = (x1061>((x1062*x1063)*x1064));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1065 = 1LL;
	int64_t x1066 = -1LL;

    t160 = (x1065>((x1066*x1067)*x1068));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1069 = 7534U;
	volatile uint16_t x1070 = 5U;
	int16_t x1071 = -8048;
	uint32_t x1072 = UINT32_MAX;
	int32_t t161 = -328397544;

    t161 = (x1069>((x1070*x1071)*x1072));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x1073 = INT8_MAX;
	uint8_t x1074 = 1U;
	int8_t x1075 = 0;
	int32_t x1076 = INT32_MIN;
	volatile int32_t t162 = 3;

    t162 = (x1073>((x1074*x1075)*x1076));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1077 = 1LL;
	volatile int8_t x1078 = 0;
	int16_t x1079 = INT16_MAX;
	uint32_t x1080 = 9781U;

    t163 = (x1077>((x1078*x1079)*x1080));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x1081 = UINT64_MAX;
	int8_t x1083 = 4;
	int8_t x1084 = 1;
	int32_t t164 = 284101;

    t164 = (x1081>((x1082*x1083)*x1084));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1093 = -1LL;
	static int8_t x1094 = INT8_MIN;
	volatile int32_t t165 = -2663;

    t165 = (x1093>((x1094*x1095)*x1096));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1113 = INT64_MIN;
	int8_t x1114 = INT8_MIN;
	static uint8_t x1115 = 63U;
	int32_t t166 = 77747;

    t166 = (x1113>((x1114*x1115)*x1116));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1117 = INT16_MAX;
	volatile uint8_t x1118 = 7U;

    t167 = (x1117>((x1118*x1119)*x1120));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1122 = 255U;
	int64_t x1123 = -1LL;
	int16_t x1124 = INT16_MIN;

    t168 = (x1121>((x1122*x1123)*x1124));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x1126 = 6674LLU;
	int64_t x1127 = INT64_MIN;
	volatile int32_t t169 = -3084724;

    t169 = (x1125>((x1126*x1127)*x1128));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1133 = 5904774LLU;
	int32_t x1134 = INT32_MIN;
	uint16_t x1135 = 0U;
	static int32_t t170 = 1;

    t170 = (x1133>((x1134*x1135)*x1136));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1138 = 27U;
	int16_t x1139 = 60;

    t171 = (x1137>((x1138*x1139)*x1140));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x1141 = 26982191694524LLU;
	volatile int8_t x1142 = INT8_MAX;
	static uint16_t x1143 = 5U;
	volatile uint16_t x1144 = 1202U;
	int32_t t172 = -1024219;

    t172 = (x1141>((x1142*x1143)*x1144));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1145 = 0U;
	static uint8_t x1146 = 1U;
	uint32_t x1147 = 45404861U;
	volatile uint32_t x1148 = UINT32_MAX;

    t173 = (x1145>((x1146*x1147)*x1148));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1149 = 3;
	static int32_t x1150 = -1655;
	int16_t x1151 = INT16_MIN;
	volatile int64_t x1152 = 124LL;

    t174 = (x1149>((x1150*x1151)*x1152));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1161 = 3LLU;
	int16_t x1162 = 12534;
	static int8_t x1164 = INT8_MIN;
	volatile int32_t t175 = 938127575;

    t175 = (x1161>((x1162*x1163)*x1164));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1173 = INT8_MAX;
	volatile int16_t x1174 = 668;
	uint16_t x1175 = UINT16_MAX;
	int64_t x1176 = 1LL;
	static volatile int32_t t176 = -237811;

    t176 = (x1173>((x1174*x1175)*x1176));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1177 = 22146430721676822LLU;
	int8_t x1178 = -3;
	uint8_t x1179 = 0U;
	uint16_t x1180 = UINT16_MAX;
	volatile int32_t t177 = -8;

    t177 = (x1177>((x1178*x1179)*x1180));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x1181 = 34703U;
	int8_t x1183 = 4;
	uint8_t x1184 = 115U;
	int32_t t178 = -151003201;

    t178 = (x1181>((x1182*x1183)*x1184));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x1189 = INT64_MIN;
	int32_t x1190 = -1;
	static int64_t x1191 = 1034512LL;
	static int64_t x1192 = -1LL;
	static volatile int32_t t179 = 1630;

    t179 = (x1189>((x1190*x1191)*x1192));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1197 = -1LL;
	uint64_t x1198 = 3237318703742452LLU;
	int8_t x1199 = INT8_MIN;
	static volatile uint64_t x1200 = 3278254344662LLU;
	volatile int32_t t180 = -655;

    t180 = (x1197>((x1198*x1199)*x1200));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1202 = -487;
	int8_t x1203 = 0;
	int64_t x1204 = INT64_MIN;
	int32_t t181 = -19455;

    t181 = (x1201>((x1202*x1203)*x1204));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x1205 = 837;
	int8_t x1206 = -52;
	int32_t x1207 = -1;
	uint16_t x1208 = UINT16_MAX;

    t182 = (x1205>((x1206*x1207)*x1208));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1209 = INT8_MIN;
	volatile int64_t x1210 = -1LL;
	volatile int16_t x1211 = INT16_MIN;
	volatile uint64_t x1212 = UINT64_MAX;
	static volatile int32_t t183 = -440978664;

    t183 = (x1209>((x1210*x1211)*x1212));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1213 = 61LLU;
	static int32_t x1215 = -66849916;
	static int32_t t184 = -203123089;

    t184 = (x1213>((x1214*x1215)*x1216));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1217 = -65415892164714LL;
	uint64_t x1218 = 10321LLU;
	static volatile uint64_t x1219 = 819LLU;
	static uint16_t x1220 = 193U;
	int32_t t185 = -487589;

    t185 = (x1217>((x1218*x1219)*x1220));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1221 = 1244544;
	static int32_t x1222 = 1164;
	int16_t x1223 = -1;
	static int8_t x1224 = -1;
	int32_t t186 = -14258386;

    t186 = (x1221>((x1222*x1223)*x1224));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1225 = 347;
	int64_t x1226 = INT64_MIN;
	uint64_t x1227 = 21850146284463LLU;
	uint32_t x1228 = 447799918U;
	volatile int32_t t187 = -455853;

    t187 = (x1225>((x1226*x1227)*x1228));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1230 = INT8_MIN;
	int16_t x1231 = INT16_MAX;
	int8_t x1232 = INT8_MAX;

    t188 = (x1229>((x1230*x1231)*x1232));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1233 = 27092217586LLU;
	volatile uint64_t x1234 = UINT64_MAX;
	volatile int16_t x1235 = INT16_MIN;
	static volatile int64_t x1236 = INT64_MIN;

    t189 = (x1233>((x1234*x1235)*x1236));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x1237 = 1941820437U;
	static uint64_t x1238 = UINT64_MAX;
	static int16_t x1239 = INT16_MIN;
	static uint16_t x1240 = 3U;
	volatile int32_t t190 = -91960793;

    t190 = (x1237>((x1238*x1239)*x1240));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1245 = INT16_MIN;
	volatile uint64_t x1246 = 23751LLU;
	int64_t x1247 = -1LL;
	int16_t x1248 = INT16_MIN;
	int32_t t191 = -8055566;

    t191 = (x1245>((x1246*x1247)*x1248));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x1249 = 97U;
	int64_t x1252 = -6459741182957743LL;
	volatile int32_t t192 = 48;

    t192 = (x1249>((x1250*x1251)*x1252));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1257 = INT16_MAX;
	int32_t x1258 = -1;
	int32_t t193 = -18323420;

    t193 = (x1257>((x1258*x1259)*x1260));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1270 = 412168LLU;
	static int64_t x1271 = -14LL;
	volatile int64_t x1272 = 6LL;
	volatile int32_t t194 = 52441511;

    t194 = (x1269>((x1270*x1271)*x1272));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1273 = 66996U;
	static int8_t x1274 = INT8_MAX;
	static uint64_t x1275 = 4LLU;
	int8_t x1276 = -1;
	int32_t t195 = 49401425;

    t195 = (x1273>((x1274*x1275)*x1276));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1277 = INT8_MIN;
	int8_t x1278 = 0;
	static uint8_t x1280 = 25U;
	volatile int32_t t196 = 5;

    t196 = (x1277>((x1278*x1279)*x1280));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x1281 = 30U;
	int64_t x1282 = -1LL;
	int8_t x1283 = 0;
	int8_t x1284 = INT8_MIN;
	int32_t t197 = 104822;

    t197 = (x1281>((x1282*x1283)*x1284));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x1285 = UINT64_MAX;
	uint16_t x1287 = 4069U;
	uint32_t x1288 = UINT32_MAX;

    t198 = (x1285>((x1286*x1287)*x1288));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x1293 = INT64_MIN;
	uint8_t x1294 = 1U;
	volatile int16_t x1295 = -1;
	uint64_t x1296 = 509528714LLU;
	int32_t t199 = -6517630;

    t199 = (x1293>((x1294*x1295)*x1296));

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

