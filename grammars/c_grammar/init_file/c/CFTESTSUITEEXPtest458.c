
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

static uint64_t x16 = 27678972094LLU;
int16_t x18 = INT16_MAX;
uint8_t x24 = UINT8_MAX;
uint16_t x35 = 75U;
int32_t x38 = -1;
static int32_t t6 = 29907;
int32_t t10 = -6627;
int64_t x74 = -1LL;
volatile int32_t t13 = 16;
int32_t t14 = -22;
volatile int64_t x81 = INT64_MIN;
volatile int32_t x83 = -1;
static int8_t x85 = INT8_MIN;
volatile int32_t t17 = 5401058;
static uint32_t x97 = 2868U;
uint8_t x101 = UINT8_MAX;
uint64_t x122 = 931904814246201705LLU;
int32_t x129 = 24126;
static volatile uint8_t x135 = UINT8_MAX;
volatile int32_t t23 = 10;
int16_t x138 = -1;
static volatile int32_t t24 = -10875633;
int32_t t25 = 33;
int16_t x146 = INT16_MIN;
int64_t x147 = 231232LL;
volatile uint64_t x150 = 30707173LLU;
static volatile uint16_t x154 = UINT16_MAX;
static uint16_t x159 = 47U;
int32_t t30 = -1;
volatile int32_t t31 = 368;
uint64_t x176 = 2107981358LLU;
static int64_t x180 = -1LL;
volatile uint64_t x188 = UINT64_MAX;
static int64_t x220 = 505050037483922LL;
int32_t x221 = -308742807;
int64_t x224 = -1LL;
volatile uint8_t x229 = UINT8_MAX;
uint64_t x230 = UINT64_MAX;
int32_t x232 = INT32_MIN;
volatile int32_t t42 = 82574183;
volatile uint32_t x233 = 69700U;
uint64_t x252 = 106333049LLU;
uint16_t x280 = 650U;
volatile int32_t t50 = -1029302869;
uint32_t x291 = 942389U;
volatile uint32_t x298 = UINT32_MAX;
int64_t x304 = 34087291525181LL;
int32_t t54 = -25706;
volatile uint32_t x325 = 27U;
uint8_t x342 = 0U;
int16_t x347 = -1381;
int64_t x359 = -133713739116LL;
volatile int32_t t66 = -1;
int16_t x381 = 3368;
static int64_t x382 = INT64_MIN;
int64_t x384 = 701592723612602422LL;
int32_t t67 = 24768742;
volatile int8_t x392 = 25;
uint32_t x399 = 210449732U;
volatile int32_t t70 = 76323;
volatile int32_t t72 = 31;
volatile int32_t t73 = -13966112;
uint8_t x434 = 1U;
uint16_t x435 = 5U;
volatile int32_t t76 = 2;
int32_t x440 = -2076853;
static int32_t t80 = -89397999;
static int32_t x472 = INT32_MIN;
volatile int32_t t82 = -8044027;
int64_t x490 = INT64_MAX;
int8_t x492 = INT8_MIN;
static int32_t t85 = 2;
uint32_t x507 = UINT32_MAX;
volatile uint16_t x510 = UINT16_MAX;
static volatile int32_t x515 = INT32_MIN;
int32_t t92 = 58;
volatile int8_t x536 = INT8_MIN;
int32_t t93 = -27462139;
static uint32_t x538 = 14224U;
int32_t t94 = 1144594;
int64_t x565 = INT64_MAX;
int16_t x566 = INT16_MIN;
int32_t x568 = -2411;
volatile int32_t t98 = 73;
volatile int8_t x569 = -1;
volatile int32_t t101 = -5314792;
int16_t x605 = 74;
int16_t x610 = INT16_MIN;
int8_t x611 = -4;
uint16_t x627 = UINT16_MAX;
uint8_t x651 = 2U;
volatile int32_t t111 = 188;
volatile int32_t t112 = 11609;
int64_t x671 = -1LL;
volatile uint32_t x672 = 5296U;
static uint16_t x695 = 2U;
int8_t x710 = 0;
uint8_t x716 = 7U;
int32_t t118 = 14081503;
int16_t x724 = -1;
uint8_t x733 = UINT8_MAX;
uint8_t x738 = UINT8_MAX;
int32_t t123 = -11;
volatile int64_t x743 = 61668584151LL;
volatile int16_t x751 = -1;
int32_t x760 = 7;
volatile int32_t t128 = 128063353;
static volatile int32_t x767 = INT32_MAX;
volatile int32_t t132 = -5;
uint32_t x777 = UINT32_MAX;
volatile int64_t x778 = -1LL;
volatile int32_t t133 = 475485908;
static uint32_t x782 = UINT32_MAX;
int8_t x785 = 0;
static volatile int32_t t136 = -907;
int32_t x806 = -1;
int64_t x820 = INT64_MIN;
volatile int8_t x831 = INT8_MAX;
static int32_t t141 = 49670;
static int8_t x837 = -1;
int32_t t143 = -299;
volatile uint8_t x847 = 1U;
static volatile uint16_t x849 = 12U;
static int32_t x851 = INT32_MIN;
int8_t x865 = INT8_MAX;
static uint64_t x866 = 91943LLU;
volatile int32_t t149 = -634;
int16_t x871 = -901;
int8_t x874 = INT8_MIN;
int64_t x882 = 90676873461880480LL;
static uint8_t x883 = 0U;
int8_t x920 = -1;
static int32_t x929 = 44287027;
uint64_t x930 = UINT64_MAX;
int8_t x939 = INT8_MIN;
int8_t x942 = INT8_MIN;
static uint32_t x947 = 7U;
int32_t x954 = INT32_MIN;
int8_t x960 = INT8_MIN;
int64_t x961 = 41LL;
uint64_t x967 = 1020306883315427497LLU;
int16_t x968 = INT16_MAX;
int8_t x982 = INT8_MIN;
volatile int16_t x989 = INT16_MIN;
int32_t t172 = 52266;
int16_t x997 = 1;
int32_t x1016 = -11451;
static uint32_t x1038 = 2816U;
static uint8_t x1040 = UINT8_MAX;
int8_t x1043 = INT8_MIN;
int8_t x1049 = INT8_MIN;
int32_t t180 = 157;
volatile int32_t t181 = 1;
volatile uint8_t x1074 = UINT8_MAX;
volatile int32_t t184 = 116197;
int8_t x1078 = INT8_MAX;
static int64_t x1080 = -14LL;
static int16_t x1083 = -175;
static volatile int64_t x1084 = INT64_MAX;
uint32_t x1093 = UINT32_MAX;
static int64_t x1094 = -1LL;
uint32_t x1095 = 4U;
int32_t t189 = -75514210;
int32_t x1102 = -1;
volatile int32_t t190 = 8846575;
int32_t t195 = -122;
static int64_t x1134 = INT64_MIN;
int32_t t198 = 1027442742;


void f0(void) {
    	int64_t x5 = INT64_MIN;
	int32_t x6 = INT32_MAX;
	uint32_t x7 = 4438U;
	static uint32_t x8 = 1274U;
	volatile int32_t t0 = -10;

    t0 = (x5<=((x6*x7)%x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x13 = -15;
	uint32_t x14 = UINT32_MAX;
	uint8_t x15 = 30U;
	int32_t t1 = -4532709;

    t1 = (x13<=((x14*x15)%x16));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x17 = -15019;
	int16_t x19 = INT16_MAX;
	int16_t x20 = 2487;
	volatile int32_t t2 = 11035;

    t2 = (x17<=((x18*x19)%x20));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x21 = INT8_MIN;
	int16_t x22 = INT16_MIN;
	static uint32_t x23 = 12397843U;
	volatile int32_t t3 = 2;

    t3 = (x21<=((x22*x23)%x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x25 = 3281U;
	static int8_t x26 = -1;
	int16_t x27 = -318;
	int8_t x28 = -1;
	volatile int32_t t4 = 324953;

    t4 = (x25<=((x26*x27)%x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x33 = 1U;
	volatile uint16_t x34 = 0U;
	volatile int64_t x36 = 5538735615182041LL;
	volatile int32_t t5 = -580052790;

    t5 = (x33<=((x34*x35)%x36));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x37 = -20184044731218181LL;
	volatile int32_t x39 = -89890466;
	volatile uint64_t x40 = 604651939LLU;

    t6 = (x37<=((x38*x39)%x40));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x41 = -1;
	int16_t x42 = INT16_MAX;
	uint8_t x43 = UINT8_MAX;
	uint32_t x44 = 31463U;
	int32_t t7 = -12;

    t7 = (x41<=((x42*x43)%x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x45 = INT16_MAX;
	int32_t x46 = INT32_MIN;
	uint64_t x47 = 27495139LLU;
	uint16_t x48 = 4182U;
	volatile int32_t t8 = -218113;

    t8 = (x45<=((x46*x47)%x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x49 = 0U;
	uint64_t x50 = 13941368LLU;
	static int64_t x51 = -2300LL;
	int8_t x52 = -1;
	volatile int32_t t9 = -8433810;

    t9 = (x49<=((x50*x51)%x52));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x53 = 14U;
	static int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MIN;

    t10 = (x53<=((x54*x55)%x56));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x57 = INT64_MIN;
	int8_t x58 = INT8_MIN;
	static int8_t x59 = INT8_MIN;
	static int64_t x60 = -525033LL;
	int32_t t11 = -7;

    t11 = (x57<=((x58*x59)%x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x65 = -6;
	volatile int16_t x66 = 5460;
	volatile uint16_t x67 = UINT16_MAX;
	static int32_t x68 = INT32_MAX;
	volatile int32_t t12 = -39;

    t12 = (x65<=((x66*x67)%x68));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x73 = -1LL;
	volatile int32_t x75 = INT32_MAX;
	int32_t x76 = INT32_MIN;

    t13 = (x73<=((x74*x75)%x76));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x77 = INT16_MIN;
	int16_t x78 = -1483;
	int16_t x79 = INT16_MAX;
	static int16_t x80 = -1;

    t14 = (x77<=((x78*x79)%x80));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x82 = INT16_MIN;
	int16_t x84 = INT16_MIN;
	int32_t t15 = 129525397;

    t15 = (x81<=((x82*x83)%x84));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x86 = UINT64_MAX;
	int8_t x87 = INT8_MIN;
	uint8_t x88 = UINT8_MAX;
	int32_t t16 = 867;

    t16 = (x85<=((x86*x87)%x88));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x89 = 72U;
	static int8_t x90 = 1;
	int32_t x91 = INT32_MIN;
	static int8_t x92 = INT8_MAX;

    t17 = (x89<=((x90*x91)%x92));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x98 = 1;
	static int8_t x99 = -51;
	volatile int64_t x100 = INT64_MIN;
	static volatile int32_t t18 = -162252464;

    t18 = (x97<=((x98*x99)%x100));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x102 = 10U;
	int16_t x103 = -85;
	int16_t x104 = 2;
	volatile int32_t t19 = 220;

    t19 = (x101<=((x102*x103)%x104));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x117 = UINT8_MAX;
	static uint8_t x118 = 5U;
	volatile int16_t x119 = INT16_MIN;
	int64_t x120 = 22810114LL;
	volatile int32_t t20 = 55984197;

    t20 = (x117<=((x118*x119)%x120));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x121 = INT32_MIN;
	int16_t x123 = INT16_MIN;
	int16_t x124 = 48;
	volatile int32_t t21 = -7669123;

    t21 = (x121<=((x122*x123)%x124));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x130 = -1LL;
	static int32_t x131 = 16564;
	static uint8_t x132 = 14U;
	int32_t t22 = 246;

    t22 = (x129<=((x130*x131)%x132));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x133 = -9722849LL;
	int8_t x134 = INT8_MIN;
	int32_t x136 = INT32_MIN;

    t23 = (x133<=((x134*x135)%x136));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x137 = UINT8_MAX;
	int8_t x139 = -1;
	int16_t x140 = INT16_MAX;

    t24 = (x137<=((x138*x139)%x140));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x141 = UINT8_MAX;
	int8_t x142 = INT8_MIN;
	int8_t x143 = -1;
	int8_t x144 = -3;

    t25 = (x141<=((x142*x143)%x144));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x145 = 168U;
	uint64_t x148 = UINT64_MAX;
	int32_t t26 = 253293;

    t26 = (x145<=((x146*x147)%x148));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x149 = 2674233;
	int16_t x151 = INT16_MIN;
	int8_t x152 = INT8_MAX;
	volatile int32_t t27 = 62201;

    t27 = (x149<=((x150*x151)%x152));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x153 = 1U;
	int16_t x155 = INT16_MIN;
	int16_t x156 = -4708;
	static volatile int32_t t28 = 1;

    t28 = (x153<=((x154*x155)%x156));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x157 = 1294U;
	int8_t x158 = 1;
	int64_t x160 = -60118098LL;
	volatile int32_t t29 = 242183;

    t29 = (x157<=((x158*x159)%x160));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x161 = INT64_MAX;
	volatile uint32_t x162 = UINT32_MAX;
	volatile int8_t x163 = INT8_MIN;
	static volatile int64_t x164 = -1LL;

    t30 = (x161<=((x162*x163)%x164));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x169 = 0U;
	volatile uint16_t x170 = 1U;
	static volatile uint32_t x171 = 14319192U;
	int16_t x172 = INT16_MIN;

    t31 = (x169<=((x170*x171)%x172));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x173 = INT16_MIN;
	static volatile int16_t x174 = INT16_MAX;
	volatile int8_t x175 = INT8_MAX;
	volatile int32_t t32 = 373507093;

    t32 = (x173<=((x174*x175)%x176));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x177 = UINT32_MAX;
	volatile uint64_t x178 = 2LLU;
	int64_t x179 = INT64_MIN;
	static int32_t t33 = -46364;

    t33 = (x177<=((x178*x179)%x180));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x185 = INT16_MAX;
	int8_t x186 = INT8_MAX;
	uint64_t x187 = 33253861515LLU;
	int32_t t34 = -1;

    t34 = (x185<=((x186*x187)%x188));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x189 = 24U;
	int16_t x190 = INT16_MIN;
	int64_t x191 = -1LL;
	int32_t x192 = INT32_MIN;
	int32_t t35 = -296487607;

    t35 = (x189<=((x190*x191)%x192));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x197 = 3U;
	volatile int8_t x198 = INT8_MIN;
	uint16_t x199 = UINT16_MAX;
	uint64_t x200 = UINT64_MAX;
	static volatile int32_t t36 = 8662;

    t36 = (x197<=((x198*x199)%x200));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x201 = 115972044802207LL;
	int32_t x202 = 0;
	volatile int32_t x203 = -1;
	int8_t x204 = 27;
	int32_t t37 = 117;

    t37 = (x201<=((x202*x203)%x204));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x213 = -1;
	int32_t x214 = -1;
	static volatile uint32_t x215 = 1269280U;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t38 = 0;

    t38 = (x213<=((x214*x215)%x216));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x217 = -1;
	volatile int16_t x218 = 1;
	volatile uint64_t x219 = 19692847198177LLU;
	volatile int32_t t39 = 26143050;

    t39 = (x217<=((x218*x219)%x220));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x222 = INT8_MAX;
	uint8_t x223 = 19U;
	int32_t t40 = -515932;

    t40 = (x221<=((x222*x223)%x224));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x225 = 18348U;
	int8_t x226 = INT8_MIN;
	int8_t x227 = -1;
	int64_t x228 = INT64_MAX;
	volatile int32_t t41 = -14;

    t41 = (x225<=((x226*x227)%x228));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x231 = -66;

    t42 = (x229<=((x230*x231)%x232));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x234 = UINT8_MAX;
	uint8_t x235 = 0U;
	int32_t x236 = INT32_MIN;
	static volatile int32_t t43 = 28418;

    t43 = (x233<=((x234*x235)%x236));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x249 = INT64_MAX;
	int32_t x250 = -1;
	int64_t x251 = -3085LL;
	int32_t t44 = 110;

    t44 = (x249<=((x250*x251)%x252));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x253 = 375912;
	int8_t x254 = INT8_MAX;
	int8_t x255 = INT8_MAX;
	int8_t x256 = -1;
	volatile int32_t t45 = -3;

    t45 = (x253<=((x254*x255)%x256));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x261 = 2408736962234706LLU;
	static volatile uint16_t x262 = 179U;
	volatile int16_t x263 = -342;
	int64_t x264 = -4253LL;
	int32_t t46 = -23550;

    t46 = (x261<=((x262*x263)%x264));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x273 = INT16_MIN;
	int16_t x274 = INT16_MIN;
	int8_t x275 = INT8_MIN;
	static volatile int16_t x276 = 122;
	static int32_t t47 = 62099;

    t47 = (x273<=((x274*x275)%x276));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x277 = INT64_MAX;
	int8_t x278 = -1;
	volatile int8_t x279 = -5;
	static int32_t t48 = 0;

    t48 = (x277<=((x278*x279)%x280));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x281 = INT16_MAX;
	int32_t x282 = INT32_MIN;
	uint32_t x283 = UINT32_MAX;
	int64_t x284 = INT64_MIN;
	volatile int32_t t49 = -8;

    t49 = (x281<=((x282*x283)%x284));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x285 = 730U;
	static int8_t x286 = INT8_MIN;
	int16_t x287 = 212;
	int32_t x288 = INT32_MIN;

    t50 = (x285<=((x286*x287)%x288));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x289 = 55U;
	int8_t x290 = -3;
	volatile int8_t x292 = INT8_MIN;
	volatile int32_t t51 = 2815;

    t51 = (x289<=((x290*x291)%x292));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x297 = 2179143LL;
	static volatile int64_t x299 = 13363LL;
	uint64_t x300 = UINT64_MAX;
	static int32_t t52 = -384765;

    t52 = (x297<=((x298*x299)%x300));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x301 = -1;
	int32_t x302 = INT32_MIN;
	static uint64_t x303 = 1487LLU;
	static int32_t t53 = 26671108;

    t53 = (x301<=((x302*x303)%x304));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x309 = UINT64_MAX;
	volatile int32_t x310 = -123724299;
	int8_t x311 = 1;
	static int8_t x312 = -1;

    t54 = (x309<=((x310*x311)%x312));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x313 = -259;
	int64_t x314 = INT64_MIN;
	static uint64_t x315 = 408550451LLU;
	int32_t x316 = INT32_MAX;
	volatile int32_t t55 = 467;

    t55 = (x313<=((x314*x315)%x316));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x321 = 1990237;
	volatile int8_t x322 = 43;
	static int8_t x323 = INT8_MIN;
	uint64_t x324 = 989480374LLU;
	int32_t t56 = 123;

    t56 = (x321<=((x322*x323)%x324));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x326 = 201795U;
	uint16_t x327 = UINT16_MAX;
	uint8_t x328 = 15U;
	static volatile int32_t t57 = -1;

    t57 = (x325<=((x326*x327)%x328));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x337 = 288399U;
	int16_t x338 = -327;
	int32_t x339 = 0;
	int32_t x340 = INT32_MIN;
	int32_t t58 = -1;

    t58 = (x337<=((x338*x339)%x340));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x341 = INT8_MAX;
	int16_t x343 = INT16_MAX;
	int8_t x344 = INT8_MAX;
	volatile int32_t t59 = 622663;

    t59 = (x341<=((x342*x343)%x344));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x345 = INT32_MAX;
	uint8_t x346 = 4U;
	int32_t x348 = -1;
	volatile int32_t t60 = -15928563;

    t60 = (x345<=((x346*x347)%x348));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x349 = 1U;
	static volatile int16_t x350 = INT16_MAX;
	int64_t x351 = 7969016416LL;
	uint8_t x352 = UINT8_MAX;
	int32_t t61 = 1652;

    t61 = (x349<=((x350*x351)%x352));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x353 = -1LL;
	static uint8_t x354 = 0U;
	int8_t x355 = 0;
	int32_t x356 = INT32_MIN;
	volatile int32_t t62 = -373;

    t62 = (x353<=((x354*x355)%x356));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x357 = UINT16_MAX;
	uint16_t x358 = 7091U;
	int32_t x360 = -66747391;
	int32_t t63 = 151545;

    t63 = (x357<=((x358*x359)%x360));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x361 = INT64_MIN;
	uint8_t x362 = 14U;
	uint64_t x363 = 76612LLU;
	int32_t x364 = INT32_MAX;
	volatile int32_t t64 = -1;

    t64 = (x361<=((x362*x363)%x364));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x369 = 148U;
	int8_t x370 = -1;
	volatile uint32_t x371 = 4356258U;
	volatile int32_t x372 = INT32_MIN;
	int32_t t65 = 673000556;

    t65 = (x369<=((x370*x371)%x372));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x377 = 49;
	int64_t x378 = -1LL;
	uint16_t x379 = 18531U;
	static int64_t x380 = 245LL;

    t66 = (x377<=((x378*x379)%x380));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x383 = 1U;

    t67 = (x381<=((x382*x383)%x384));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x385 = INT32_MIN;
	uint32_t x386 = 89022U;
	int16_t x387 = INT16_MIN;
	int64_t x388 = -1LL;
	int32_t t68 = 195;

    t68 = (x385<=((x386*x387)%x388));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint8_t x389 = 12U;
	int16_t x390 = -1;
	static int16_t x391 = INT16_MIN;
	int32_t t69 = 56597118;

    t69 = (x389<=((x390*x391)%x392));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x397 = 3661U;
	uint8_t x398 = 20U;
	uint8_t x400 = UINT8_MAX;

    t70 = (x397<=((x398*x399)%x400));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x401 = 113U;
	static uint8_t x402 = 54U;
	int64_t x403 = -53307086LL;
	int8_t x404 = 1;
	int32_t t71 = 23;

    t71 = (x401<=((x402*x403)%x404));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x405 = 6803597385224279LLU;
	uint32_t x406 = 214419U;
	int16_t x407 = 7249;
	uint16_t x408 = 69U;

    t72 = (x405<=((x406*x407)%x408));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x409 = UINT64_MAX;
	int64_t x410 = -32899744LL;
	static int16_t x411 = INT16_MIN;
	uint32_t x412 = UINT32_MAX;

    t73 = (x409<=((x410*x411)%x412));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x425 = UINT16_MAX;
	int16_t x426 = INT16_MIN;
	uint8_t x427 = UINT8_MAX;
	int64_t x428 = 5LL;
	int32_t t74 = 1;

    t74 = (x425<=((x426*x427)%x428));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x429 = UINT32_MAX;
	uint64_t x430 = UINT64_MAX;
	int16_t x431 = INT16_MAX;
	int8_t x432 = INT8_MIN;
	int32_t t75 = 0;

    t75 = (x429<=((x430*x431)%x432));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x433 = INT64_MAX;
	int8_t x436 = INT8_MAX;

    t76 = (x433<=((x434*x435)%x436));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x437 = UINT64_MAX;
	int16_t x438 = INT16_MIN;
	static int32_t x439 = 6;
	int32_t t77 = 41;

    t77 = (x437<=((x438*x439)%x440));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x441 = 7;
	int16_t x442 = INT16_MIN;
	int32_t x443 = 1;
	int16_t x444 = INT16_MIN;
	volatile int32_t t78 = -3473661;

    t78 = (x441<=((x442*x443)%x444));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x445 = INT16_MAX;
	int64_t x446 = -1LL;
	uint64_t x447 = 6545643692LLU;
	int8_t x448 = INT8_MAX;
	static int32_t t79 = 708;

    t79 = (x445<=((x446*x447)%x448));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x449 = 13050;
	int8_t x450 = INT8_MIN;
	uint32_t x451 = UINT32_MAX;
	volatile int8_t x452 = -6;

    t80 = (x449<=((x450*x451)%x452));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x461 = 178132U;
	static int32_t x462 = -457;
	volatile int32_t x463 = 3362;
	static int16_t x464 = INT16_MIN;
	volatile int32_t t81 = 581856;

    t81 = (x461<=((x462*x463)%x464));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x469 = 7LLU;
	volatile uint16_t x470 = 0U;
	static int32_t x471 = 236226138;

    t82 = (x469<=((x470*x471)%x472));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x473 = 2116;
	int64_t x474 = -1041658LL;
	int16_t x475 = INT16_MIN;
	int16_t x476 = INT16_MIN;
	int32_t t83 = 613;

    t83 = (x473<=((x474*x475)%x476));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x481 = INT8_MIN;
	uint16_t x482 = 9U;
	static uint16_t x483 = 45U;
	static uint16_t x484 = 25U;
	volatile int32_t t84 = 1;

    t84 = (x481<=((x482*x483)%x484));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x489 = 74U;
	uint64_t x491 = UINT64_MAX;

    t85 = (x489<=((x490*x491)%x492));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x493 = INT8_MIN;
	uint64_t x494 = UINT64_MAX;
	uint16_t x495 = UINT16_MAX;
	static uint64_t x496 = 1LLU;
	static int32_t t86 = -903;

    t86 = (x493<=((x494*x495)%x496));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x501 = INT64_MAX;
	static int16_t x502 = -775;
	volatile int32_t x503 = -5;
	volatile int8_t x504 = INT8_MAX;
	static int32_t t87 = -1716;

    t87 = (x501<=((x502*x503)%x504));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x505 = -1;
	int16_t x506 = INT16_MIN;
	int16_t x508 = -1;
	int32_t t88 = 244017424;

    t88 = (x505<=((x506*x507)%x508));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x509 = INT64_MAX;
	int32_t x511 = 337;
	uint16_t x512 = 13547U;
	static volatile int32_t t89 = -1;

    t89 = (x509<=((x510*x511)%x512));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x513 = UINT64_MAX;
	uint32_t x514 = 16400U;
	uint8_t x516 = 3U;
	volatile int32_t t90 = 738953006;

    t90 = (x513<=((x514*x515)%x516));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x517 = 9;
	uint8_t x518 = UINT8_MAX;
	static volatile int64_t x519 = -1LL;
	volatile int8_t x520 = INT8_MIN;
	int32_t t91 = -5;

    t91 = (x517<=((x518*x519)%x520));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x529 = -96239062LL;
	int64_t x530 = INT64_MIN;
	int8_t x531 = 1;
	int16_t x532 = 4;

    t92 = (x529<=((x530*x531)%x532));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x533 = 348967LLU;
	int32_t x534 = -1;
	int32_t x535 = INT32_MAX;

    t93 = (x533<=((x534*x535)%x536));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x537 = UINT32_MAX;
	volatile int8_t x539 = INT8_MIN;
	uint8_t x540 = UINT8_MAX;

    t94 = (x537<=((x538*x539)%x540));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x541 = INT8_MAX;
	static uint8_t x542 = 0U;
	int64_t x543 = INT64_MAX;
	volatile uint32_t x544 = 1014U;
	int32_t t95 = -30666;

    t95 = (x541<=((x542*x543)%x544));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x545 = INT64_MIN;
	int8_t x546 = 26;
	int8_t x547 = INT8_MAX;
	volatile int8_t x548 = INT8_MIN;
	volatile int32_t t96 = 285;

    t96 = (x545<=((x546*x547)%x548));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x553 = -1;
	uint32_t x554 = UINT32_MAX;
	int16_t x555 = -1;
	int32_t x556 = INT32_MAX;
	int32_t t97 = -37;

    t97 = (x553<=((x554*x555)%x556));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x567 = UINT16_MAX;

    t98 = (x565<=((x566*x567)%x568));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x570 = 8655662;
	uint32_t x571 = 0U;
	static int32_t x572 = -3446;
	int32_t t99 = 6959608;

    t99 = (x569<=((x570*x571)%x572));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x573 = UINT16_MAX;
	uint16_t x574 = 0U;
	int32_t x575 = INT32_MIN;
	uint64_t x576 = 2113707259598163LLU;
	int32_t t100 = 8114089;

    t100 = (x573<=((x574*x575)%x576));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int16_t x577 = 234;
	int32_t x578 = 326674;
	int64_t x579 = -1LL;
	static int16_t x580 = INT16_MIN;

    t101 = (x577<=((x578*x579)%x580));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x589 = 207U;
	int8_t x590 = -1;
	volatile uint16_t x591 = 16U;
	volatile int16_t x592 = -1018;
	volatile int32_t t102 = -1665;

    t102 = (x589<=((x590*x591)%x592));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x601 = UINT64_MAX;
	volatile uint32_t x602 = UINT32_MAX;
	static volatile uint16_t x603 = UINT16_MAX;
	int64_t x604 = -1LL;
	static volatile int32_t t103 = 1;

    t103 = (x601<=((x602*x603)%x604));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x606 = 206668U;
	int16_t x607 = INT16_MIN;
	int8_t x608 = INT8_MAX;
	int32_t t104 = 5;

    t104 = (x605<=((x606*x607)%x608));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x609 = UINT32_MAX;
	static uint64_t x612 = 2690296827039LLU;
	volatile int32_t t105 = 25528;

    t105 = (x609<=((x610*x611)%x612));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x613 = INT16_MIN;
	volatile uint64_t x614 = UINT64_MAX;
	uint16_t x615 = 3U;
	uint16_t x616 = 23642U;
	int32_t t106 = 164;

    t106 = (x613<=((x614*x615)%x616));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x617 = -12958;
	uint32_t x618 = 19U;
	int64_t x619 = 89781LL;
	int16_t x620 = INT16_MIN;
	int32_t t107 = -10923188;

    t107 = (x617<=((x618*x619)%x620));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x625 = -38176;
	static uint16_t x626 = 31U;
	volatile int64_t x628 = INT64_MAX;
	int32_t t108 = 16328766;

    t108 = (x625<=((x626*x627)%x628));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x633 = -1;
	int8_t x634 = -1;
	volatile uint8_t x635 = 38U;
	static volatile int64_t x636 = INT64_MAX;
	volatile int32_t t109 = 57;

    t109 = (x633<=((x634*x635)%x636));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x645 = INT8_MAX;
	int16_t x646 = INT16_MAX;
	uint16_t x647 = 51U;
	int8_t x648 = INT8_MIN;
	volatile int32_t t110 = 6811;

    t110 = (x645<=((x646*x647)%x648));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x649 = INT64_MAX;
	int8_t x650 = 1;
	int64_t x652 = -2431LL;

    t111 = (x649<=((x650*x651)%x652));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x665 = 2137U;
	int16_t x666 = -1;
	volatile int64_t x667 = INT64_MAX;
	int32_t x668 = 767231;

    t112 = (x665<=((x666*x667)%x668));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x669 = 4U;
	int8_t x670 = -1;
	volatile int32_t t113 = -4027278;

    t113 = (x669<=((x670*x671)%x672));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x681 = 1;
	static int32_t x682 = INT32_MIN;
	uint64_t x683 = UINT64_MAX;
	uint8_t x684 = UINT8_MAX;
	volatile int32_t t114 = 3;

    t114 = (x681<=((x682*x683)%x684));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x685 = UINT32_MAX;
	volatile int32_t x686 = INT32_MIN;
	uint32_t x687 = 409576U;
	int8_t x688 = INT8_MAX;
	volatile int32_t t115 = -1058748163;

    t115 = (x685<=((x686*x687)%x688));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x693 = 3933264LLU;
	static int16_t x694 = -27;
	uint64_t x696 = 3254617194206LLU;
	int32_t t116 = -500;

    t116 = (x693<=((x694*x695)%x696));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x709 = 267054866U;
	uint32_t x711 = 534U;
	uint32_t x712 = UINT32_MAX;
	int32_t t117 = -15;

    t117 = (x709<=((x710*x711)%x712));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x713 = INT64_MIN;
	volatile int8_t x714 = INT8_MAX;
	int8_t x715 = 25;

    t118 = (x713<=((x714*x715)%x716));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x717 = INT16_MAX;
	int64_t x718 = INT64_MIN;
	uint8_t x719 = 0U;
	int16_t x720 = INT16_MIN;
	int32_t t119 = 2;

    t119 = (x717<=((x718*x719)%x720));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x721 = INT8_MIN;
	static int32_t x722 = -410276146;
	volatile int64_t x723 = -2784897LL;
	static volatile int32_t t120 = 348848;

    t120 = (x721<=((x722*x723)%x724));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x729 = -10361;
	volatile int8_t x730 = 1;
	int16_t x731 = INT16_MAX;
	int32_t x732 = -505;
	volatile int32_t t121 = -7;

    t121 = (x729<=((x730*x731)%x732));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x734 = INT32_MIN;
	uint64_t x735 = 63LLU;
	static int64_t x736 = INT64_MIN;
	volatile int32_t t122 = 33;

    t122 = (x733<=((x734*x735)%x736));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x737 = INT32_MIN;
	static volatile uint16_t x739 = 2U;
	int8_t x740 = INT8_MIN;

    t123 = (x737<=((x738*x739)%x740));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x741 = INT64_MIN;
	static int16_t x742 = INT16_MIN;
	int64_t x744 = 76630489439229LL;
	int32_t t124 = 4115826;

    t124 = (x741<=((x742*x743)%x744));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x745 = INT16_MIN;
	int32_t x746 = INT32_MAX;
	int64_t x747 = -1LL;
	static int32_t x748 = INT32_MIN;
	int32_t t125 = -329596885;

    t125 = (x745<=((x746*x747)%x748));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x749 = -1;
	int8_t x750 = 0;
	uint16_t x752 = UINT16_MAX;
	static volatile int32_t t126 = 9898957;

    t126 = (x749<=((x750*x751)%x752));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x753 = 1136U;
	static volatile uint32_t x754 = 9719458U;
	static uint32_t x755 = 176177U;
	int16_t x756 = -7464;
	volatile int32_t t127 = 424811688;

    t127 = (x753<=((x754*x755)%x756));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x757 = 1049865766;
	uint8_t x758 = UINT8_MAX;
	uint32_t x759 = 42304021U;

    t128 = (x757<=((x758*x759)%x760));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x761 = INT32_MIN;
	static uint64_t x762 = 62029264371098548LLU;
	int64_t x763 = INT64_MAX;
	int64_t x764 = -1LL;
	int32_t t129 = 0;

    t129 = (x761<=((x762*x763)%x764));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x765 = 64U;
	int64_t x766 = -1LL;
	int32_t x768 = INT32_MIN;
	volatile int32_t t130 = -114305;

    t130 = (x765<=((x766*x767)%x768));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x769 = 59;
	int16_t x770 = -6084;
	int16_t x771 = 1;
	static volatile uint8_t x772 = 67U;
	int32_t t131 = 1827;

    t131 = (x769<=((x770*x771)%x772));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x773 = UINT16_MAX;
	static volatile int16_t x774 = -13641;
	volatile int64_t x775 = -1LL;
	int32_t x776 = -11161;

    t132 = (x773<=((x774*x775)%x776));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x779 = -1LL;
	volatile int64_t x780 = INT64_MIN;

    t133 = (x777<=((x778*x779)%x780));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x781 = UINT32_MAX;
	static volatile uint32_t x783 = UINT32_MAX;
	static int8_t x784 = INT8_MAX;
	static volatile int32_t t134 = 1;

    t134 = (x781<=((x782*x783)%x784));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x786 = 1;
	int16_t x787 = -1;
	int64_t x788 = 19495LL;
	volatile int32_t t135 = 12353;

    t135 = (x785<=((x786*x787)%x788));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x801 = UINT32_MAX;
	uint32_t x802 = 765805U;
	int32_t x803 = 5;
	int32_t x804 = -81169;

    t136 = (x801<=((x802*x803)%x804));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x805 = INT32_MIN;
	static int16_t x807 = INT16_MIN;
	volatile uint32_t x808 = 4U;
	static int32_t t137 = 406069;

    t137 = (x805<=((x806*x807)%x808));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x817 = -114332964;
	static uint32_t x818 = UINT32_MAX;
	int32_t x819 = 99250442;
	volatile int32_t t138 = 266;

    t138 = (x817<=((x818*x819)%x820));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x821 = UINT16_MAX;
	static int8_t x822 = 1;
	int64_t x823 = 31LL;
	volatile int32_t x824 = INT32_MIN;
	int32_t t139 = -103082993;

    t139 = (x821<=((x822*x823)%x824));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x825 = INT16_MAX;
	uint32_t x826 = 814003192U;
	int16_t x827 = INT16_MIN;
	int64_t x828 = INT64_MIN;
	static volatile int32_t t140 = -6284;

    t140 = (x825<=((x826*x827)%x828));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x829 = 0;
	int16_t x830 = -1;
	volatile int32_t x832 = INT32_MIN;

    t141 = (x829<=((x830*x831)%x832));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x833 = -6;
	volatile uint64_t x834 = 2LLU;
	uint64_t x835 = UINT64_MAX;
	int16_t x836 = -1;
	volatile int32_t t142 = -599768251;

    t142 = (x833<=((x834*x835)%x836));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x838 = INT8_MIN;
	int32_t x839 = 1;
	int16_t x840 = INT16_MAX;

    t143 = (x837<=((x838*x839)%x840));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x845 = INT32_MIN;
	uint8_t x846 = UINT8_MAX;
	int8_t x848 = INT8_MIN;
	volatile int32_t t144 = -15292501;

    t144 = (x845<=((x846*x847)%x848));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x850 = -1LL;
	int16_t x852 = INT16_MIN;
	volatile int32_t t145 = 6140;

    t145 = (x849<=((x850*x851)%x852));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x853 = INT32_MIN;
	int32_t x854 = INT32_MAX;
	int32_t x855 = -1;
	int32_t x856 = INT32_MAX;
	static int32_t t146 = 0;

    t146 = (x853<=((x854*x855)%x856));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x857 = 66U;
	uint32_t x858 = UINT32_MAX;
	uint8_t x859 = 4U;
	int8_t x860 = -14;
	volatile int32_t t147 = -896232;

    t147 = (x857<=((x858*x859)%x860));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x861 = 1;
	int8_t x862 = INT8_MAX;
	int16_t x863 = -45;
	uint16_t x864 = UINT16_MAX;
	volatile int32_t t148 = -5;

    t148 = (x861<=((x862*x863)%x864));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x867 = -25458219;
	int8_t x868 = INT8_MIN;

    t149 = (x865<=((x866*x867)%x868));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x869 = 99543502145994167LL;
	uint8_t x870 = 51U;
	int32_t x872 = -1;
	static int32_t t150 = 18;

    t150 = (x869<=((x870*x871)%x872));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x873 = UINT8_MAX;
	int64_t x875 = -2164485LL;
	static int32_t x876 = 58;
	int32_t t151 = -46452157;

    t151 = (x873<=((x874*x875)%x876));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x881 = INT32_MIN;
	volatile int8_t x884 = INT8_MAX;
	volatile int32_t t152 = -21412441;

    t152 = (x881<=((x882*x883)%x884));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x885 = 337;
	uint32_t x886 = 0U;
	static uint8_t x887 = 110U;
	static int64_t x888 = -53142514LL;
	volatile int32_t t153 = 246987258;

    t153 = (x885<=((x886*x887)%x888));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x889 = INT32_MAX;
	int16_t x890 = INT16_MIN;
	uint64_t x891 = 1162798234111960080LLU;
	volatile int64_t x892 = INT64_MIN;
	int32_t t154 = 31;

    t154 = (x889<=((x890*x891)%x892));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x901 = -11;
	uint8_t x902 = 104U;
	uint64_t x903 = UINT64_MAX;
	int8_t x904 = -1;
	int32_t t155 = 126812472;

    t155 = (x901<=((x902*x903)%x904));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x917 = 48236997;
	uint32_t x918 = 19U;
	volatile int32_t x919 = INT32_MIN;
	int32_t t156 = 7;

    t156 = (x917<=((x918*x919)%x920));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x921 = 119U;
	volatile int16_t x922 = INT16_MIN;
	int16_t x923 = -2285;
	volatile uint64_t x924 = 7089567361114317LLU;
	volatile int32_t t157 = -87682;

    t157 = (x921<=((x922*x923)%x924));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x931 = -1;
	volatile uint16_t x932 = 6022U;
	volatile int32_t t158 = -1637;

    t158 = (x929<=((x930*x931)%x932));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x933 = 10U;
	uint64_t x934 = UINT64_MAX;
	uint8_t x935 = 89U;
	int64_t x936 = -102067LL;
	int32_t t159 = -9;

    t159 = (x933<=((x934*x935)%x936));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x937 = INT64_MIN;
	volatile int16_t x938 = INT16_MIN;
	volatile int16_t x940 = -1;
	int32_t t160 = 63;

    t160 = (x937<=((x938*x939)%x940));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x941 = INT8_MIN;
	int16_t x943 = INT16_MIN;
	int64_t x944 = 7265811552270404LL;
	static int32_t t161 = -2915;

    t161 = (x941<=((x942*x943)%x944));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x945 = 903U;
	static volatile uint16_t x946 = 22U;
	uint16_t x948 = 16114U;
	static int32_t t162 = -3874;

    t162 = (x945<=((x946*x947)%x948));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x953 = UINT64_MAX;
	uint64_t x955 = UINT64_MAX;
	volatile int64_t x956 = INT64_MAX;
	int32_t t163 = -972;

    t163 = (x953<=((x954*x955)%x956));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x957 = UINT8_MAX;
	volatile int32_t x958 = -1;
	int8_t x959 = 9;
	volatile int32_t t164 = -2353;

    t164 = (x957<=((x958*x959)%x960));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x962 = 836941861477363476LLU;
	int16_t x963 = INT16_MAX;
	uint16_t x964 = 2125U;
	volatile int32_t t165 = -24148;

    t165 = (x961<=((x962*x963)%x964));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x965 = INT64_MIN;
	uint32_t x966 = 5U;
	volatile int32_t t166 = 4763;

    t166 = (x965<=((x966*x967)%x968));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int32_t x969 = 21357447;
	int32_t x970 = -75641;
	volatile uint8_t x971 = UINT8_MAX;
	int16_t x972 = -1;
	volatile int32_t t167 = -1;

    t167 = (x969<=((x970*x971)%x972));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x973 = INT8_MAX;
	static int8_t x974 = INT8_MAX;
	int16_t x975 = 138;
	uint8_t x976 = 43U;
	int32_t t168 = -74;

    t168 = (x973<=((x974*x975)%x976));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x977 = -444023114640899LL;
	int8_t x978 = INT8_MAX;
	volatile int8_t x979 = INT8_MIN;
	uint8_t x980 = UINT8_MAX;
	volatile int32_t t169 = -26625;

    t169 = (x977<=((x978*x979)%x980));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x981 = INT32_MIN;
	static volatile int8_t x983 = INT8_MIN;
	int8_t x984 = -1;
	volatile int32_t t170 = -8;

    t170 = (x981<=((x982*x983)%x984));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x990 = UINT8_MAX;
	int64_t x991 = -36181381440392LL;
	uint64_t x992 = 66885665LLU;
	volatile int32_t t171 = -314467213;

    t171 = (x989<=((x990*x991)%x992));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x993 = 3;
	int16_t x994 = INT16_MIN;
	uint32_t x995 = UINT32_MAX;
	int16_t x996 = 7;

    t172 = (x993<=((x994*x995)%x996));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x998 = UINT16_MAX;
	volatile uint8_t x999 = UINT8_MAX;
	static volatile int64_t x1000 = -1LL;
	volatile int32_t t173 = -100584;

    t173 = (x997<=((x998*x999)%x1000));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1005 = 15485584868135839LLU;
	uint16_t x1006 = 3U;
	int64_t x1007 = -1LL;
	uint16_t x1008 = 14U;
	volatile int32_t t174 = 0;

    t174 = (x1005<=((x1006*x1007)%x1008));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1013 = -1;
	volatile int32_t x1014 = 394;
	int32_t x1015 = -1;
	volatile int32_t t175 = -15;

    t175 = (x1013<=((x1014*x1015)%x1016));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1021 = -860391532LL;
	volatile uint16_t x1022 = 254U;
	uint16_t x1023 = UINT16_MAX;
	int16_t x1024 = INT16_MIN;
	volatile int32_t t176 = -17357;

    t176 = (x1021<=((x1022*x1023)%x1024));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1033 = INT8_MIN;
	volatile uint8_t x1034 = 7U;
	uint32_t x1035 = UINT32_MAX;
	int64_t x1036 = INT64_MIN;
	static int32_t t177 = 4;

    t177 = (x1033<=((x1034*x1035)%x1036));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1037 = -1;
	uint32_t x1039 = 4U;
	int32_t t178 = 58;

    t178 = (x1037<=((x1038*x1039)%x1040));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x1041 = UINT64_MAX;
	static uint64_t x1042 = UINT64_MAX;
	uint32_t x1044 = 3U;
	volatile int32_t t179 = -2339137;

    t179 = (x1041<=((x1042*x1043)%x1044));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1050 = -961754114;
	uint64_t x1051 = 217399769LLU;
	volatile uint8_t x1052 = 9U;

    t180 = (x1049<=((x1050*x1051)%x1052));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x1057 = INT8_MIN;
	int16_t x1058 = -2;
	uint8_t x1059 = 0U;
	int32_t x1060 = INT32_MIN;

    t181 = (x1057<=((x1058*x1059)%x1060));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x1065 = INT64_MAX;
	int64_t x1066 = INT64_MIN;
	uint16_t x1067 = 1U;
	uint8_t x1068 = 60U;
	int32_t t182 = 27229065;

    t182 = (x1065<=((x1066*x1067)%x1068));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1069 = INT16_MAX;
	volatile int8_t x1070 = INT8_MIN;
	static int32_t x1071 = -1;
	volatile int16_t x1072 = -5;
	int32_t t183 = -19526664;

    t183 = (x1069<=((x1070*x1071)%x1072));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x1073 = 259330;
	volatile int64_t x1075 = 3654LL;
	static int64_t x1076 = INT64_MAX;

    t184 = (x1073<=((x1074*x1075)%x1076));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x1077 = -1;
	volatile int16_t x1079 = INT16_MAX;
	volatile int32_t t185 = -3998193;

    t185 = (x1077<=((x1078*x1079)%x1080));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1081 = INT8_MAX;
	uint32_t x1082 = 364U;
	volatile int32_t t186 = -22322;

    t186 = (x1081<=((x1082*x1083)%x1084));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1085 = -1;
	uint16_t x1086 = 1U;
	static int8_t x1087 = INT8_MIN;
	int32_t x1088 = INT32_MAX;
	volatile int32_t t187 = -592588;

    t187 = (x1085<=((x1086*x1087)%x1088));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1096 = 12060U;
	int32_t t188 = 12629;

    t188 = (x1093<=((x1094*x1095)%x1096));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1097 = 10634174059090LLU;
	int64_t x1098 = 506022319368933187LL;
	volatile int32_t x1099 = -1;
	volatile int32_t x1100 = -16;

    t189 = (x1097<=((x1098*x1099)%x1100));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x1101 = 18161U;
	int8_t x1103 = INT8_MIN;
	int16_t x1104 = 1950;

    t190 = (x1101<=((x1102*x1103)%x1104));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1105 = 43U;
	int64_t x1106 = -1LL;
	static volatile int32_t x1107 = -1;
	uint8_t x1108 = UINT8_MAX;
	static int32_t t191 = 1915;

    t191 = (x1105<=((x1106*x1107)%x1108));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1109 = INT64_MAX;
	int8_t x1110 = -1;
	int8_t x1111 = INT8_MIN;
	int32_t x1112 = INT32_MIN;
	int32_t t192 = -15028344;

    t192 = (x1109<=((x1110*x1111)%x1112));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1113 = -1;
	int16_t x1114 = INT16_MAX;
	volatile int64_t x1115 = 239LL;
	int8_t x1116 = 1;
	int32_t t193 = 698467619;

    t193 = (x1113<=((x1114*x1115)%x1116));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x1117 = INT16_MIN;
	volatile int8_t x1118 = INT8_MIN;
	int8_t x1119 = -41;
	uint8_t x1120 = UINT8_MAX;
	volatile int32_t t194 = 1544;

    t194 = (x1117<=((x1118*x1119)%x1120));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x1121 = INT8_MIN;
	int8_t x1122 = INT8_MIN;
	uint32_t x1123 = 79835U;
	uint8_t x1124 = 2U;

    t195 = (x1121<=((x1122*x1123)%x1124));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1125 = 1;
	int64_t x1126 = 173212702047LL;
	static int64_t x1127 = -1LL;
	volatile int64_t x1128 = 674LL;
	volatile int32_t t196 = -626;

    t196 = (x1125<=((x1126*x1127)%x1128));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1129 = 2;
	int32_t x1130 = -1;
	static uint8_t x1131 = UINT8_MAX;
	int16_t x1132 = -1;
	static int32_t t197 = 21;

    t197 = (x1129<=((x1130*x1131)%x1132));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1133 = 2;
	uint64_t x1135 = 20602956744789306LLU;
	uint16_t x1136 = 5U;

    t198 = (x1133<=((x1134*x1135)%x1136));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1137 = 38U;
	int8_t x1138 = INT8_MAX;
	static int16_t x1139 = -1;
	static int64_t x1140 = INT64_MIN;
	static int32_t t199 = -69;

    t199 = (x1137<=((x1138*x1139)%x1140));

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

