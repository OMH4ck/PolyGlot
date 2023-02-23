
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

volatile int8_t x9 = INT8_MAX;
int8_t x14 = -1;
int32_t x18 = INT32_MIN;
static int64_t x20 = INT64_MAX;
volatile int32_t x23 = INT32_MIN;
int32_t t4 = -126;
uint8_t x26 = 9U;
volatile int16_t x27 = -1;
static int32_t x33 = -1;
int8_t x37 = -5;
int16_t x41 = -8740;
static volatile int32_t t8 = -38758;
static int16_t x52 = 16225;
volatile int8_t x55 = 2;
volatile int64_t t11 = -1LL;
int8_t x62 = INT8_MAX;
static int64_t x68 = INT64_MIN;
volatile uint64_t x74 = 124459985587051LLU;
static int64_t x81 = INT64_MAX;
volatile uint16_t x85 = UINT16_MAX;
volatile int32_t t19 = -4018;
volatile uint16_t x109 = 1U;
volatile uint64_t x112 = 140165591997591473LLU;
static volatile int8_t x115 = -1;
static int64_t t21 = 331932621LL;
volatile int32_t x118 = -3;
static int64_t x127 = INT64_MAX;
int32_t x129 = 1451058;
volatile uint64_t x130 = UINT64_MAX;
int64_t x131 = INT64_MIN;
int32_t x133 = -41;
static volatile uint32_t x136 = 1U;
volatile uint32_t x145 = UINT32_MAX;
uint64_t x149 = 4538969LLU;
int64_t x151 = INT64_MIN;
volatile int16_t x158 = 4523;
uint64_t x174 = 294759803596657651LLU;
int32_t x176 = -1;
int32_t x182 = INT32_MAX;
volatile uint64_t t32 = 965997LLU;
static volatile int64_t x190 = -1LL;
int32_t t34 = 68;
volatile uint16_t x195 = UINT16_MAX;
int16_t x196 = INT16_MAX;
int32_t x202 = 61638704;
uint64_t x203 = 6218386062LLU;
volatile int64_t x217 = -135911409983726168LL;
volatile int64_t t38 = -3355LL;
static uint8_t x231 = UINT8_MAX;
uint64_t x234 = 3LLU;
uint16_t x237 = 1933U;
uint8_t x238 = 1U;
volatile int32_t t42 = -10190;
volatile int64_t x241 = INT64_MAX;
uint64_t x246 = 373785704346LLU;
int8_t x276 = INT8_MIN;
uint64_t t46 = 1160LLU;
uint64_t x282 = UINT64_MAX;
int16_t x289 = INT16_MIN;
int8_t x303 = 3;
int32_t t50 = 987879749;
volatile uint64_t x314 = UINT64_MAX;
int32_t x315 = INT32_MIN;
int64_t x321 = INT64_MAX;
static volatile int64_t t53 = -1LL;
int8_t x331 = INT8_MIN;
int64_t x335 = INT64_MAX;
static int32_t t55 = -23;
int64_t t56 = -70219151005LL;
int64_t x345 = -1097492258177LL;
static uint32_t x352 = UINT32_MAX;
volatile uint64_t t59 = 80943757LLU;
uint64_t x374 = 21153294LLU;
static volatile int16_t x376 = -1;
uint32_t x380 = UINT32_MAX;
volatile int32_t t64 = 105361353;
int8_t x387 = INT8_MIN;
static int32_t x400 = -2045;
static int16_t x411 = INT16_MAX;
uint64_t x418 = 252177377401LLU;
volatile uint32_t x419 = UINT32_MAX;
int32_t x420 = -378421;
volatile int64_t x437 = INT64_MIN;
static uint32_t t71 = 121121U;
int64_t x464 = 1019557184983LL;
uint32_t x466 = 13U;
uint16_t x472 = 9U;
volatile int32_t t75 = -52441047;
static int64_t x493 = -1LL;
int64_t t78 = 5967783960LL;
uint8_t x507 = 47U;
volatile int32_t t79 = -237;
int32_t x510 = INT32_MIN;
volatile int8_t x518 = INT8_MAX;
uint8_t x519 = 123U;
int64_t x520 = 1209891879LL;
static int64_t x522 = 30367857LL;
int16_t x524 = 12045;
int32_t t84 = 205143;
uint16_t x543 = 299U;
volatile uint64_t x559 = UINT64_MAX;
uint32_t x560 = UINT32_MAX;
int64_t x567 = INT64_MIN;
int16_t x590 = INT16_MIN;
volatile uint16_t x591 = 229U;
volatile uint8_t x597 = 3U;
int16_t x598 = INT16_MAX;
volatile int64_t x599 = INT64_MIN;
volatile int32_t t92 = -225;
int8_t x610 = -1;
volatile int32_t x612 = INT32_MAX;
uint64_t x618 = UINT64_MAX;
static int64_t x626 = INT64_MIN;
uint8_t x627 = 3U;
int64_t t98 = -4224826452102967616LL;
int32_t x643 = INT32_MIN;
int8_t x662 = INT8_MAX;
volatile int32_t t102 = -56716;
int64_t x667 = 101269767453LL;
static volatile uint8_t x668 = 32U;
int64_t x669 = INT64_MIN;
int8_t x672 = INT8_MIN;
volatile int32_t t105 = 29;
int32_t x677 = 1;
int64_t x679 = 61000039378414601LL;
int32_t x681 = INT32_MIN;
volatile uint16_t x682 = 14U;
volatile int32_t t107 = -51254;
uint32_t x688 = UINT32_MAX;
int32_t x702 = -1;
int64_t x703 = -1LL;
volatile int8_t x716 = INT8_MIN;
volatile uint8_t x725 = 99U;
int16_t x727 = INT16_MIN;
uint8_t x728 = UINT8_MAX;
int32_t t114 = 152843;
static uint64_t x777 = UINT64_MAX;
volatile uint16_t x786 = UINT16_MAX;
static volatile uint32_t t122 = 837851U;
int32_t t124 = 1;
int64_t x809 = INT64_MAX;
uint16_t x810 = UINT16_MAX;
uint32_t x813 = 827500U;
int32_t x814 = INT32_MIN;
volatile uint32_t t126 = 682U;
int64_t t128 = -16771415590159494LL;
uint16_t x850 = 3947U;
int32_t x851 = INT32_MIN;
int64_t x855 = 2376473891LL;
int32_t x861 = 35;
int64_t x863 = 4LL;
volatile int32_t t134 = -1;
int16_t x887 = -1;
int64_t t136 = 48LL;
int64_t x897 = INT64_MIN;
int64_t x898 = 1627942984LL;
int16_t x910 = 9;
int32_t x933 = INT32_MIN;
static int8_t x934 = 12;
volatile int32_t t140 = -7964;
int64_t x943 = INT64_MAX;
int32_t t143 = 142;
int16_t x951 = 113;
volatile int32_t t144 = -10974425;
int32_t x956 = 123791299;
int8_t x978 = INT8_MAX;
volatile int32_t t150 = 52606;
volatile uint32_t t151 = 3U;
int32_t x995 = INT32_MIN;
volatile int32_t t152 = -7888377;
volatile uint64_t x1000 = UINT64_MAX;
uint64_t x1008 = 1697560745443LLU;
uint64_t x1012 = UINT64_MAX;
uint64_t x1023 = UINT64_MAX;
volatile int8_t x1024 = -1;
int64_t t159 = -14LL;
static volatile int8_t x1031 = INT8_MIN;
uint32_t x1034 = UINT32_MAX;
uint32_t x1036 = 49414U;
volatile int32_t t161 = 675306;
volatile uint64_t x1038 = 17322579182955191LLU;
static int64_t x1042 = 204471LL;
volatile uint32_t x1043 = 99180637U;
int16_t x1053 = INT16_MAX;
uint8_t x1057 = 57U;
uint64_t x1065 = 131909128357LLU;
volatile uint8_t x1067 = 75U;
volatile int32_t t169 = -6;
static volatile int32_t t170 = 710586275;
int64_t x1083 = -1LL;
uint64_t x1086 = 2050099901370724LLU;
static volatile int16_t x1094 = INT16_MAX;
static uint8_t x1103 = UINT8_MAX;
int8_t x1110 = -8;
int16_t x1113 = INT16_MAX;
int32_t x1125 = INT32_MIN;
int8_t x1127 = INT8_MAX;
int16_t x1131 = 14568;
uint8_t x1136 = 3U;
int32_t t180 = 1422;
int16_t x1150 = INT16_MIN;
int8_t x1151 = INT8_MIN;
volatile uint64_t x1154 = 12599471323227527LLU;
int32_t x1164 = 40285241;
volatile int32_t t184 = -1532;
volatile int16_t x1170 = -1;
volatile int8_t x1175 = INT8_MIN;
uint8_t x1177 = UINT8_MAX;
volatile int32_t x1178 = INT32_MIN;
int32_t x1183 = -1;
volatile uint16_t x1184 = 14U;
int64_t t188 = -39510874472LL;
static uint8_t x1207 = 11U;
static int64_t x1210 = INT64_MIN;
uint64_t x1214 = 63605595LLU;
static int16_t x1220 = -1;
static uint8_t x1233 = 9U;
volatile int64_t x1234 = INT64_MIN;
int32_t t195 = 0;
uint8_t x1251 = 1U;
int64_t x1252 = 1069497432308LL;
volatile int32_t x1258 = -1;
int32_t x1274 = INT32_MIN;
int16_t x1275 = 74;
int16_t x1283 = INT16_MIN;


void f0(void) {
    	static int16_t x1 = -10;
	int8_t x2 = INT8_MIN;
	static int16_t x3 = INT16_MIN;
	uint16_t x4 = 7248U;
	int32_t t0 = -52421;

    t0 = (x1%((x2/x3)<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x10 = INT32_MIN;
	uint64_t x11 = 3846070138035655132LLU;
	int64_t x12 = INT64_MIN;
	static volatile int32_t t1 = -911201;

    t1 = (x9%((x10/x11)<=x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = 32854LLU;
	uint64_t x15 = UINT64_MAX;
	int64_t x16 = INT64_MAX;
	uint64_t t2 = 126427310434LLU;

    t2 = (x13%((x14/x15)<=x16));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x17 = UINT32_MAX;
	int16_t x19 = INT16_MIN;
	uint32_t t3 = 21896U;

    t3 = (x17%((x18/x19)<=x20));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = -1;
	int8_t x22 = -1;
	static int32_t x24 = 1561669;

    t4 = (x21%((x22/x23)<=x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = 874U;
	uint16_t x28 = 1U;
	uint32_t t5 = 49495U;

    t5 = (x25%((x26/x27)<=x28));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x34 = INT32_MIN;
	uint32_t x35 = 112578654U;
	int16_t x36 = INT16_MIN;
	static volatile int32_t t6 = 519106800;

    t6 = (x33%((x34/x35)<=x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x38 = INT8_MIN;
	static int64_t x39 = INT64_MIN;
	int8_t x40 = 18;
	static int32_t t7 = -116;

    t7 = (x37%((x38/x39)<=x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x42 = INT8_MAX;
	int8_t x43 = -22;
	static uint16_t x44 = 62U;

    t8 = (x41%((x42/x43)<=x44));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x45 = INT16_MIN;
	static uint32_t x46 = 73912U;
	static int8_t x47 = 2;
	uint16_t x48 = UINT16_MAX;
	int32_t t9 = -22922;

    t9 = (x45%((x46/x47)<=x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x49 = INT64_MIN;
	uint8_t x50 = 3U;
	volatile int64_t x51 = -3444665578793757270LL;
	volatile int64_t t10 = -5518632329LL;

    t10 = (x49%((x50/x51)<=x52));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x53 = 1621328969936LL;
	static uint16_t x54 = 11U;
	uint32_t x56 = UINT32_MAX;

    t11 = (x53%((x54/x55)<=x56));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x61 = 14;
	int16_t x63 = INT16_MAX;
	uint64_t x64 = UINT64_MAX;
	int32_t t12 = 64855;

    t12 = (x61%((x62/x63)<=x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = 25;
	uint32_t x66 = UINT32_MAX;
	uint64_t x67 = UINT64_MAX;
	volatile int32_t t13 = 3;

    t13 = (x65%((x66/x67)<=x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x69 = INT64_MIN;
	int32_t x70 = INT32_MAX;
	int64_t x71 = -2403274LL;
	static int16_t x72 = -1;
	int64_t t14 = 1LL;

    t14 = (x69%((x70/x71)<=x72));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x73 = 3;
	int32_t x75 = 791469161;
	uint64_t x76 = UINT64_MAX;
	static volatile int32_t t15 = -20;

    t15 = (x73%((x74/x75)<=x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x82 = UINT64_MAX;
	int32_t x83 = INT32_MIN;
	volatile uint16_t x84 = 535U;
	int64_t t16 = 1112971480LL;

    t16 = (x81%((x82/x83)<=x84));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x86 = 3U;
	int32_t x87 = INT32_MIN;
	uint16_t x88 = UINT16_MAX;
	int32_t t17 = -150903292;

    t17 = (x85%((x86/x87)<=x88));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x93 = 8454U;
	uint8_t x94 = UINT8_MAX;
	int8_t x95 = INT8_MIN;
	static volatile uint8_t x96 = UINT8_MAX;
	static uint32_t t18 = 2460954U;

    t18 = (x93%((x94/x95)<=x96));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x97 = 42U;
	uint64_t x98 = UINT64_MAX;
	int32_t x99 = INT32_MAX;
	static int32_t x100 = INT32_MIN;

    t19 = (x97%((x98/x99)<=x100));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x110 = -13;
	volatile int64_t x111 = INT64_MAX;
	static volatile int32_t t20 = 1;

    t20 = (x109%((x110/x111)<=x112));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x113 = -69678653449LL;
	int16_t x114 = INT16_MIN;
	volatile int64_t x116 = 201425234103635LL;

    t21 = (x113%((x114/x115)<=x116));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x117 = -1;
	uint64_t x119 = 1449041LLU;
	int16_t x120 = INT16_MIN;
	int32_t t22 = 646098829;

    t22 = (x117%((x118/x119)<=x120));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x125 = -1;
	static int32_t x126 = 1;
	uint32_t x128 = 3U;
	int32_t t23 = 8;

    t23 = (x125%((x126/x127)<=x128));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x132 = INT16_MAX;
	int32_t t24 = -99368;

    t24 = (x129%((x130/x131)<=x132));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x134 = UINT64_MAX;
	volatile int16_t x135 = -1;
	int32_t t25 = 1;

    t25 = (x133%((x134/x135)<=x136));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x146 = UINT64_MAX;
	int64_t x147 = -223496360328386101LL;
	uint16_t x148 = UINT16_MAX;
	uint32_t t26 = 118304U;

    t26 = (x145%((x146/x147)<=x148));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x150 = -1;
	volatile int16_t x152 = INT16_MAX;
	uint64_t t27 = 63362538546647636LLU;

    t27 = (x149%((x150/x151)<=x152));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x153 = 4106;
	int32_t x154 = INT32_MIN;
	int64_t x155 = 21274059002101042LL;
	uint64_t x156 = UINT64_MAX;
	int32_t t28 = -2115;

    t28 = (x153%((x154/x155)<=x156));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x157 = INT64_MIN;
	int64_t x159 = INT64_MAX;
	uint32_t x160 = UINT32_MAX;
	static int64_t t29 = 12288281072125LL;

    t29 = (x157%((x158/x159)<=x160));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x173 = -1LL;
	int16_t x175 = INT16_MIN;
	int64_t t30 = 181329LL;

    t30 = (x173%((x174/x175)<=x176));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x177 = -1474;
	int32_t x178 = INT32_MAX;
	volatile int16_t x179 = 1818;
	uint32_t x180 = UINT32_MAX;
	volatile int32_t t31 = -1;

    t31 = (x177%((x178/x179)<=x180));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x181 = 3594981LLU;
	uint32_t x183 = UINT32_MAX;
	int16_t x184 = INT16_MIN;

    t32 = (x181%((x182/x183)<=x184));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x185 = 1;
	int32_t x186 = 0;
	int32_t x187 = -5092608;
	volatile uint16_t x188 = UINT16_MAX;
	volatile int32_t t33 = -9;

    t33 = (x185%((x186/x187)<=x188));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x189 = -1;
	int32_t x191 = INT32_MAX;
	int64_t x192 = INT64_MAX;

    t34 = (x189%((x190/x191)<=x192));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x193 = INT16_MAX;
	uint32_t x194 = 30U;
	volatile int32_t t35 = 2571;

    t35 = (x193%((x194/x195)<=x196));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x201 = -58;
	volatile int64_t x204 = INT64_MAX;
	int32_t t36 = -4581;

    t36 = (x201%((x202/x203)<=x204));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x205 = 180;
	uint64_t x206 = UINT64_MAX;
	volatile int8_t x207 = -1;
	static int8_t x208 = -1;
	volatile int32_t t37 = 27;

    t37 = (x205%((x206/x207)<=x208));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x218 = 12;
	static volatile int64_t x219 = -1LL;
	uint8_t x220 = 2U;

    t38 = (x217%((x218/x219)<=x220));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x221 = 397;
	static int8_t x222 = -60;
	int16_t x223 = INT16_MIN;
	int16_t x224 = INT16_MAX;
	int32_t t39 = 0;

    t39 = (x221%((x222/x223)<=x224));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint8_t x229 = 12U;
	int16_t x230 = INT16_MIN;
	volatile uint16_t x232 = UINT16_MAX;
	volatile int32_t t40 = 6;

    t40 = (x229%((x230/x231)<=x232));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x233 = UINT32_MAX;
	int16_t x235 = INT16_MIN;
	uint32_t x236 = 0U;
	volatile uint32_t t41 = 1U;

    t41 = (x233%((x234/x235)<=x236));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x239 = INT16_MIN;
	static int32_t x240 = INT32_MAX;

    t42 = (x237%((x238/x239)<=x240));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x242 = -8042;
	volatile int64_t x243 = INT64_MAX;
	int16_t x244 = 227;
	int64_t t43 = -81794469764LL;

    t43 = (x241%((x242/x243)<=x244));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x245 = -292494LL;
	int16_t x247 = -3;
	static int8_t x248 = INT8_MAX;
	int64_t t44 = -4205950319LL;

    t44 = (x245%((x246/x247)<=x248));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x273 = 4061734245389LLU;
	int64_t x274 = INT64_MAX;
	static int32_t x275 = -1;
	volatile uint64_t t45 = 1784128024615253LLU;

    t45 = (x273%((x274/x275)<=x276));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x277 = UINT64_MAX;
	int16_t x278 = INT16_MAX;
	static uint16_t x279 = UINT16_MAX;
	volatile uint16_t x280 = 45U;

    t46 = (x277%((x278/x279)<=x280));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x281 = 3197LLU;
	int32_t x283 = -1;
	static int32_t x284 = -105758;
	static uint64_t t47 = 6LLU;

    t47 = (x281%((x282/x283)<=x284));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x290 = INT8_MAX;
	uint32_t x291 = 804658U;
	int16_t x292 = -1;
	int32_t t48 = 13386;

    t48 = (x289%((x290/x291)<=x292));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x297 = INT64_MAX;
	volatile int8_t x298 = INT8_MAX;
	int8_t x299 = INT8_MIN;
	volatile uint8_t x300 = 20U;
	volatile int64_t t49 = 9132615159376470LL;

    t49 = (x297%((x298/x299)<=x300));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x301 = INT8_MIN;
	int16_t x302 = -10372;
	int8_t x304 = -1;

    t50 = (x301%((x302/x303)<=x304));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x305 = 1U;
	int16_t x306 = INT16_MAX;
	int8_t x307 = -1;
	uint16_t x308 = 13U;
	static int32_t t51 = 2455;

    t51 = (x305%((x306/x307)<=x308));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x313 = INT8_MIN;
	volatile uint16_t x316 = 14U;
	static volatile int32_t t52 = 364925135;

    t52 = (x313%((x314/x315)<=x316));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x322 = -1;
	uint32_t x323 = 11827U;
	int32_t x324 = -1;

    t53 = (x321%((x322/x323)<=x324));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x329 = INT8_MIN;
	int16_t x330 = -1;
	static uint16_t x332 = UINT16_MAX;
	int32_t t54 = 946;

    t54 = (x329%((x330/x331)<=x332));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x333 = INT16_MAX;
	int32_t x334 = -5;
	uint32_t x336 = 237805802U;

    t55 = (x333%((x334/x335)<=x336));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x337 = 523934LL;
	int32_t x338 = -1;
	static int8_t x339 = INT8_MIN;
	volatile uint16_t x340 = UINT16_MAX;

    t56 = (x337%((x338/x339)<=x340));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x341 = INT16_MIN;
	int32_t x342 = INT32_MIN;
	uint8_t x343 = UINT8_MAX;
	int32_t x344 = -1;
	volatile int32_t t57 = -1041724599;

    t57 = (x341%((x342/x343)<=x344));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x346 = INT8_MIN;
	volatile int8_t x347 = 4;
	int32_t x348 = -1;
	static int64_t t58 = 6502331334262LL;

    t58 = (x345%((x346/x347)<=x348));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x349 = UINT64_MAX;
	int8_t x350 = INT8_MIN;
	uint16_t x351 = UINT16_MAX;

    t59 = (x349%((x350/x351)<=x352));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x353 = INT64_MAX;
	static int64_t x354 = INT64_MAX;
	static int64_t x355 = INT64_MIN;
	int32_t x356 = INT32_MAX;
	int64_t t60 = 2190LL;

    t60 = (x353%((x354/x355)<=x356));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x361 = INT8_MAX;
	volatile int16_t x362 = INT16_MAX;
	uint16_t x363 = UINT16_MAX;
	int64_t x364 = INT64_MAX;
	static int32_t t61 = -125;

    t61 = (x361%((x362/x363)<=x364));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x369 = 4664248LLU;
	static uint32_t x370 = UINT32_MAX;
	uint8_t x371 = UINT8_MAX;
	volatile int8_t x372 = INT8_MIN;
	uint64_t t62 = 468523247517091LLU;

    t62 = (x369%((x370/x371)<=x372));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x373 = UINT32_MAX;
	int8_t x375 = 62;
	volatile uint32_t t63 = 0U;

    t63 = (x373%((x374/x375)<=x376));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x377 = INT32_MIN;
	uint64_t x378 = 1004503832296334511LLU;
	uint64_t x379 = 128566240038393LLU;

    t64 = (x377%((x378/x379)<=x380));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x385 = -8;
	uint32_t x386 = UINT32_MAX;
	int32_t x388 = INT32_MIN;
	volatile int32_t t65 = 35;

    t65 = (x385%((x386/x387)<=x388));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x397 = 399802179;
	static int64_t x398 = 1694101440852920404LL;
	volatile int32_t x399 = -1;
	volatile int32_t t66 = -81849;

    t66 = (x397%((x398/x399)<=x400));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x409 = -1865LL;
	static int32_t x410 = -11016;
	int64_t x412 = INT64_MAX;
	int64_t t67 = 17148841226450304LL;

    t67 = (x409%((x410/x411)<=x412));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x417 = UINT8_MAX;
	int32_t t68 = -29901;

    t68 = (x417%((x418/x419)<=x420));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x438 = 3580606;
	uint64_t x439 = 74542LLU;
	int64_t x440 = INT64_MAX;
	int64_t t69 = 20936023348LL;

    t69 = (x437%((x438/x439)<=x440));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x445 = 60561LLU;
	uint16_t x446 = UINT16_MAX;
	volatile int32_t x447 = INT32_MAX;
	uint32_t x448 = 3158219U;
	uint64_t t70 = 281623028106411517LLU;

    t70 = (x445%((x446/x447)<=x448));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x453 = 1475529U;
	static uint32_t x454 = UINT32_MAX;
	volatile int64_t x455 = INT64_MIN;
	uint16_t x456 = UINT16_MAX;

    t71 = (x453%((x454/x455)<=x456));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x461 = INT32_MIN;
	int16_t x462 = INT16_MIN;
	volatile uint16_t x463 = UINT16_MAX;
	volatile int32_t t72 = -319575;

    t72 = (x461%((x462/x463)<=x464));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x465 = 6645650183762LL;
	uint32_t x467 = UINT32_MAX;
	uint64_t x468 = UINT64_MAX;
	volatile int64_t t73 = 1077605396738153LL;

    t73 = (x465%((x466/x467)<=x468));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x469 = -1;
	static int8_t x470 = -2;
	int16_t x471 = -1;
	volatile int32_t t74 = 25972200;

    t74 = (x469%((x470/x471)<=x472));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x473 = -754;
	volatile int64_t x474 = INT64_MAX;
	int8_t x475 = -1;
	int32_t x476 = INT32_MIN;

    t75 = (x473%((x474/x475)<=x476));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x485 = 1U;
	static int8_t x486 = INT8_MAX;
	volatile uint8_t x487 = UINT8_MAX;
	volatile int32_t x488 = 682461361;
	volatile int32_t t76 = -9;

    t76 = (x485%((x486/x487)<=x488));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x494 = 415357224487803356LLU;
	int16_t x495 = 15;
	int32_t x496 = -1;
	int64_t t77 = -9424768084034375LL;

    t77 = (x493%((x494/x495)<=x496));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x497 = 182093699LL;
	int16_t x498 = INT16_MIN;
	int32_t x499 = INT32_MIN;
	uint8_t x500 = 1U;

    t78 = (x497%((x498/x499)<=x500));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x505 = -1;
	int64_t x506 = INT64_MIN;
	uint32_t x508 = 13U;

    t79 = (x505%((x506/x507)<=x508));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x509 = 2U;
	static uint32_t x511 = 411366728U;
	volatile uint16_t x512 = 39U;
	volatile int32_t t80 = -6030753;

    t80 = (x509%((x510/x511)<=x512));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x517 = 4734;
	volatile int32_t t81 = -167;

    t81 = (x517%((x518/x519)<=x520));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x521 = INT8_MAX;
	int16_t x523 = INT16_MIN;
	volatile int32_t t82 = -21717;

    t82 = (x521%((x522/x523)<=x524));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x529 = -7319LL;
	int32_t x530 = -1;
	uint16_t x531 = UINT16_MAX;
	int8_t x532 = INT8_MAX;
	static int64_t t83 = -1069524799035212LL;

    t83 = (x529%((x530/x531)<=x532));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x533 = INT8_MIN;
	volatile int8_t x534 = INT8_MAX;
	volatile uint64_t x535 = UINT64_MAX;
	int8_t x536 = -24;

    t84 = (x533%((x534/x535)<=x536));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x541 = -1;
	int16_t x542 = -49;
	static uint32_t x544 = 42785111U;
	int32_t t85 = 1;

    t85 = (x541%((x542/x543)<=x544));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x557 = -1;
	static uint16_t x558 = 45U;
	int32_t t86 = -148;

    t86 = (x557%((x558/x559)<=x560));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x565 = 7089656LLU;
	int32_t x566 = INT32_MIN;
	uint64_t x568 = UINT64_MAX;
	volatile uint64_t t87 = 155285988286185782LLU;

    t87 = (x565%((x566/x567)<=x568));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x573 = 32U;
	int32_t x574 = INT32_MAX;
	static uint64_t x575 = UINT64_MAX;
	static int32_t x576 = INT32_MAX;
	int32_t t88 = -547817;

    t88 = (x573%((x574/x575)<=x576));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x581 = 5834;
	static uint64_t x582 = UINT64_MAX;
	int16_t x583 = -7976;
	int32_t x584 = 385;
	int32_t t89 = -17945;

    t89 = (x581%((x582/x583)<=x584));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x589 = INT32_MIN;
	volatile int32_t x592 = -1;
	int32_t t90 = -87874454;

    t90 = (x589%((x590/x591)<=x592));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x593 = -1621;
	int32_t x594 = INT32_MIN;
	static int8_t x595 = INT8_MAX;
	int32_t x596 = -1;
	int32_t t91 = -14898;

    t91 = (x593%((x594/x595)<=x596));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x600 = 30220461;

    t92 = (x597%((x598/x599)<=x600));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x601 = INT32_MIN;
	uint16_t x602 = 149U;
	volatile int8_t x603 = -1;
	static uint32_t x604 = UINT32_MAX;
	int32_t t93 = -157;

    t93 = (x601%((x602/x603)<=x604));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x609 = 1688872U;
	int16_t x611 = 7425;
	volatile uint32_t t94 = 59U;

    t94 = (x609%((x610/x611)<=x612));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x617 = 321770669600402989LL;
	int32_t x619 = -3875687;
	uint32_t x620 = UINT32_MAX;
	int64_t t95 = -56172LL;

    t95 = (x617%((x618/x619)<=x620));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x621 = 4U;
	int64_t x622 = INT64_MAX;
	int16_t x623 = INT16_MIN;
	volatile int16_t x624 = INT16_MAX;
	volatile uint32_t t96 = 3845U;

    t96 = (x621%((x622/x623)<=x624));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x625 = -126111242933121054LL;
	int32_t x628 = INT32_MAX;
	static int64_t t97 = 121229578LL;

    t97 = (x625%((x626/x627)<=x628));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x633 = INT64_MAX;
	static volatile int16_t x634 = -128;
	int32_t x635 = 1;
	int16_t x636 = -1;

    t98 = (x633%((x634/x635)<=x636));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x641 = 24U;
	int64_t x642 = INT64_MAX;
	static int8_t x644 = -1;
	volatile int32_t t99 = 431;

    t99 = (x641%((x642/x643)<=x644));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x645 = UINT16_MAX;
	uint64_t x646 = UINT64_MAX;
	volatile int8_t x647 = 1;
	int16_t x648 = -1;
	volatile int32_t t100 = 524196;

    t100 = (x645%((x646/x647)<=x648));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x653 = -17;
	uint32_t x654 = 897469U;
	int16_t x655 = INT16_MIN;
	uint16_t x656 = UINT16_MAX;
	int32_t t101 = -175;

    t101 = (x653%((x654/x655)<=x656));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x661 = -60;
	int32_t x663 = -1;
	int16_t x664 = -1;

    t102 = (x661%((x662/x663)<=x664));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x665 = INT32_MIN;
	uint64_t x666 = 55628LLU;
	int32_t t103 = -99732552;

    t103 = (x665%((x666/x667)<=x668));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x670 = UINT32_MAX;
	int16_t x671 = -58;
	volatile int64_t t104 = 3281LL;

    t104 = (x669%((x670/x671)<=x672));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x673 = INT16_MAX;
	static uint8_t x674 = UINT8_MAX;
	int16_t x675 = INT16_MAX;
	uint16_t x676 = UINT16_MAX;

    t105 = (x673%((x674/x675)<=x676));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x678 = -1LL;
	int16_t x680 = INT16_MAX;
	static int32_t t106 = -53332078;

    t106 = (x677%((x678/x679)<=x680));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x683 = 7U;
	int64_t x684 = 1913950LL;

    t107 = (x681%((x682/x683)<=x684));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x685 = -1;
	int8_t x686 = -1;
	int8_t x687 = INT8_MAX;
	int32_t t108 = -17262876;

    t108 = (x685%((x686/x687)<=x688));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x701 = INT32_MAX;
	uint32_t x704 = UINT32_MAX;
	int32_t t109 = 1004362;

    t109 = (x701%((x702/x703)<=x704));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x705 = INT8_MIN;
	int64_t x706 = INT64_MIN;
	int8_t x707 = 46;
	int64_t x708 = INT64_MAX;
	int32_t t110 = 40886443;

    t110 = (x705%((x706/x707)<=x708));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x713 = 3U;
	volatile int16_t x714 = INT16_MAX;
	int8_t x715 = -1;
	volatile int32_t t111 = -5696099;

    t111 = (x713%((x714/x715)<=x716));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x717 = INT32_MAX;
	uint64_t x718 = 7271469LLU;
	static uint16_t x719 = UINT16_MAX;
	uint16_t x720 = UINT16_MAX;
	int32_t t112 = -10;

    t112 = (x717%((x718/x719)<=x720));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x726 = UINT16_MAX;
	int32_t t113 = 102302;

    t113 = (x725%((x726/x727)<=x728));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x729 = -1;
	volatile uint64_t x730 = 134123014LLU;
	static volatile int64_t x731 = INT64_MIN;
	uint16_t x732 = 587U;

    t114 = (x729%((x730/x731)<=x732));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x745 = 1878U;
	volatile uint64_t x746 = 8240453174LLU;
	static int64_t x747 = INT64_MAX;
	uint32_t x748 = 148446U;
	static int32_t t115 = -171;

    t115 = (x745%((x746/x747)<=x748));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x749 = INT8_MIN;
	static uint16_t x750 = 2051U;
	volatile uint64_t x751 = UINT64_MAX;
	int8_t x752 = 1;
	int32_t t116 = -572875601;

    t116 = (x749%((x750/x751)<=x752));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x765 = UINT16_MAX;
	uint32_t x766 = 2U;
	uint8_t x767 = 97U;
	int16_t x768 = -1;
	volatile int32_t t117 = 36;

    t117 = (x765%((x766/x767)<=x768));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x773 = -1;
	static int32_t x774 = -4488;
	uint8_t x775 = UINT8_MAX;
	uint32_t x776 = UINT32_MAX;
	volatile int32_t t118 = -3036;

    t118 = (x773%((x774/x775)<=x776));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x778 = 348;
	volatile uint32_t x779 = 2U;
	static volatile int16_t x780 = INT16_MAX;
	uint64_t t119 = 89636744699614LLU;

    t119 = (x777%((x778/x779)<=x780));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x785 = -2;
	int32_t x787 = INT32_MIN;
	uint8_t x788 = 2U;
	static volatile int32_t t120 = 10828;

    t120 = (x785%((x786/x787)<=x788));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x793 = UINT64_MAX;
	static int16_t x794 = INT16_MIN;
	int8_t x795 = INT8_MAX;
	int8_t x796 = INT8_MAX;
	volatile uint64_t t121 = 136LLU;

    t121 = (x793%((x794/x795)<=x796));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x797 = 23U;
	uint16_t x798 = 3U;
	int16_t x799 = INT16_MIN;
	uint8_t x800 = 3U;

    t122 = (x797%((x798/x799)<=x800));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x801 = UINT64_MAX;
	int16_t x802 = INT16_MAX;
	int64_t x803 = INT64_MAX;
	uint8_t x804 = UINT8_MAX;
	volatile uint64_t t123 = 50772188LLU;

    t123 = (x801%((x802/x803)<=x804));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x805 = INT16_MIN;
	uint8_t x806 = 89U;
	int32_t x807 = INT32_MIN;
	uint32_t x808 = UINT32_MAX;

    t124 = (x805%((x806/x807)<=x808));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x811 = 8624;
	uint8_t x812 = 122U;
	volatile int64_t t125 = 12890968397810714LL;

    t125 = (x809%((x810/x811)<=x812));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x815 = 169735;
	static int8_t x816 = INT8_MIN;

    t126 = (x813%((x814/x815)<=x816));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x825 = INT16_MIN;
	uint16_t x826 = 5U;
	uint32_t x827 = 12048U;
	int16_t x828 = -16005;
	int32_t t127 = -940621;

    t127 = (x825%((x826/x827)<=x828));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x845 = -2096516LL;
	static int16_t x846 = INT16_MIN;
	static int32_t x847 = 142703267;
	int8_t x848 = INT8_MAX;

    t128 = (x845%((x846/x847)<=x848));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x849 = 32U;
	static int16_t x852 = INT16_MAX;
	static volatile int32_t t129 = -54724609;

    t129 = (x849%((x850/x851)<=x852));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x853 = 26U;
	int8_t x854 = -19;
	uint64_t x856 = UINT64_MAX;
	static int32_t t130 = -394153468;

    t130 = (x853%((x854/x855)<=x856));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x862 = INT32_MIN;
	uint8_t x864 = UINT8_MAX;
	int32_t t131 = -1374;

    t131 = (x861%((x862/x863)<=x864));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x869 = 1392159U;
	static volatile int16_t x870 = INT16_MIN;
	uint64_t x871 = UINT64_MAX;
	int32_t x872 = 91321717;
	static uint32_t t132 = 1U;

    t132 = (x869%((x870/x871)<=x872));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x873 = -52;
	volatile int32_t x874 = INT32_MIN;
	int32_t x875 = INT32_MIN;
	uint64_t x876 = 233258LLU;
	int32_t t133 = 1556589;

    t133 = (x873%((x874/x875)<=x876));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x877 = 0;
	volatile int32_t x878 = INT32_MAX;
	volatile int32_t x879 = INT32_MAX;
	volatile int16_t x880 = INT16_MAX;

    t134 = (x877%((x878/x879)<=x880));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x885 = -110395775879LL;
	uint32_t x886 = UINT32_MAX;
	volatile int8_t x888 = -55;
	int64_t t135 = 468824LL;

    t135 = (x885%((x886/x887)<=x888));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x893 = -664990427257772LL;
	int8_t x894 = 0;
	uint16_t x895 = 716U;
	uint32_t x896 = 1113523929U;

    t136 = (x893%((x894/x895)<=x896));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x899 = -1LL;
	volatile int32_t x900 = -577;
	volatile int64_t t137 = -1LL;

    t137 = (x897%((x898/x899)<=x900));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x909 = -1;
	static volatile uint64_t x911 = 2181392346LLU;
	uint32_t x912 = 999U;
	volatile int32_t t138 = 1454;

    t138 = (x909%((x910/x911)<=x912));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x921 = UINT8_MAX;
	int8_t x922 = -1;
	uint64_t x923 = UINT64_MAX;
	static volatile uint64_t x924 = 55134263LLU;
	int32_t t139 = -3562413;

    t139 = (x921%((x922/x923)<=x924));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x935 = 1865092150LLU;
	volatile int32_t x936 = -1;

    t140 = (x933%((x934/x935)<=x936));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x937 = INT16_MIN;
	uint32_t x938 = UINT32_MAX;
	uint32_t x939 = 15502U;
	static int8_t x940 = INT8_MIN;
	volatile int32_t t141 = -38739221;

    t141 = (x937%((x938/x939)<=x940));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x941 = INT64_MIN;
	uint32_t x942 = 1782297464U;
	uint32_t x944 = 42158U;
	volatile int64_t t142 = 247020277551733814LL;

    t142 = (x941%((x942/x943)<=x944));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x945 = 935;
	uint32_t x946 = UINT32_MAX;
	uint64_t x947 = UINT64_MAX;
	int8_t x948 = INT8_MAX;

    t143 = (x945%((x946/x947)<=x948));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x949 = 12;
	volatile uint16_t x950 = 24U;
	int16_t x952 = INT16_MAX;

    t144 = (x949%((x950/x951)<=x952));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x953 = 32U;
	volatile int8_t x954 = INT8_MAX;
	static uint64_t x955 = 526LLU;
	volatile uint32_t t145 = 0U;

    t145 = (x953%((x954/x955)<=x956));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x957 = INT16_MIN;
	int32_t x958 = INT32_MAX;
	int64_t x959 = -56585875330959910LL;
	volatile uint32_t x960 = 417U;
	static volatile int32_t t146 = 63798;

    t146 = (x957%((x958/x959)<=x960));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x965 = 342U;
	int32_t x966 = INT32_MIN;
	uint64_t x967 = 3997LLU;
	static int64_t x968 = INT64_MAX;
	volatile uint32_t t147 = 454373U;

    t147 = (x965%((x966/x967)<=x968));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x973 = INT8_MIN;
	int16_t x974 = INT16_MIN;
	volatile int16_t x975 = -93;
	uint64_t x976 = UINT64_MAX;
	volatile int32_t t148 = 1693791;

    t148 = (x973%((x974/x975)<=x976));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x977 = INT16_MAX;
	volatile int64_t x979 = INT64_MAX;
	uint32_t x980 = UINT32_MAX;
	int32_t t149 = 8;

    t149 = (x977%((x978/x979)<=x980));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x985 = INT16_MIN;
	int64_t x986 = -1LL;
	int32_t x987 = INT32_MAX;
	static uint32_t x988 = 3U;

    t150 = (x985%((x986/x987)<=x988));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x989 = 628U;
	volatile int64_t x990 = INT64_MAX;
	int8_t x991 = INT8_MIN;
	uint8_t x992 = UINT8_MAX;

    t151 = (x989%((x990/x991)<=x992));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x993 = 3;
	uint8_t x994 = 11U;
	int16_t x996 = 4070;

    t152 = (x993%((x994/x995)<=x996));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x997 = INT16_MIN;
	int16_t x998 = INT16_MIN;
	int16_t x999 = 305;
	int32_t t153 = -24201;

    t153 = (x997%((x998/x999)<=x1000));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1001 = INT32_MAX;
	volatile int64_t x1002 = INT64_MAX;
	int32_t x1003 = INT32_MIN;
	volatile int64_t x1004 = INT64_MAX;
	int32_t t154 = -9;

    t154 = (x1001%((x1002/x1003)<=x1004));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1005 = 17266627308407LL;
	int16_t x1006 = -1;
	int32_t x1007 = 23952;
	volatile int64_t t155 = -8073673434LL;

    t155 = (x1005%((x1006/x1007)<=x1008));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1009 = INT8_MIN;
	volatile int16_t x1010 = 3;
	int32_t x1011 = INT32_MIN;
	volatile int32_t t156 = 378110;

    t156 = (x1009%((x1010/x1011)<=x1012));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1017 = 32536U;
	int16_t x1018 = -1;
	int32_t x1019 = INT32_MIN;
	uint64_t x1020 = 196LLU;
	volatile uint32_t t157 = 110477U;

    t157 = (x1017%((x1018/x1019)<=x1020));

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1021 = INT16_MIN;
	int32_t x1022 = INT32_MIN;
	volatile int32_t t158 = 70569065;

    t158 = (x1021%((x1022/x1023)<=x1024));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x1025 = -144580424901LL;
	int16_t x1026 = -1;
	int32_t x1027 = -90;
	uint16_t x1028 = 0U;

    t159 = (x1025%((x1026/x1027)<=x1028));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1029 = INT64_MAX;
	int32_t x1030 = INT32_MIN;
	static int64_t x1032 = INT64_MAX;
	int64_t t160 = 499353031LL;

    t160 = (x1029%((x1030/x1031)<=x1032));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x1033 = UINT8_MAX;
	int16_t x1035 = -1;

    t161 = (x1033%((x1034/x1035)<=x1036));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x1037 = 128322LLU;
	volatile uint16_t x1039 = 5102U;
	int16_t x1040 = INT16_MIN;
	uint64_t t162 = 13157LLU;

    t162 = (x1037%((x1038/x1039)<=x1040));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1041 = -1;
	uint8_t x1044 = 1U;
	int32_t t163 = 9;

    t163 = (x1041%((x1042/x1043)<=x1044));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1045 = -63;
	uint32_t x1046 = UINT32_MAX;
	int16_t x1047 = -13;
	static uint8_t x1048 = UINT8_MAX;
	static int32_t t164 = 300;

    t164 = (x1045%((x1046/x1047)<=x1048));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1054 = UINT64_MAX;
	volatile int32_t x1055 = -22125027;
	volatile int16_t x1056 = -10;
	volatile int32_t t165 = -101106;

    t165 = (x1053%((x1054/x1055)<=x1056));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x1058 = -1;
	static int64_t x1059 = INT64_MIN;
	int8_t x1060 = INT8_MAX;
	volatile int32_t t166 = 44875;

    t166 = (x1057%((x1058/x1059)<=x1060));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x1066 = -1;
	static volatile uint8_t x1068 = UINT8_MAX;
	uint64_t t167 = 320605LLU;

    t167 = (x1065%((x1066/x1067)<=x1068));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1069 = INT8_MIN;
	int64_t x1070 = INT64_MIN;
	int16_t x1071 = 941;
	int16_t x1072 = INT16_MIN;
	volatile int32_t t168 = -1;

    t168 = (x1069%((x1070/x1071)<=x1072));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x1073 = INT16_MIN;
	volatile int8_t x1074 = INT8_MIN;
	uint64_t x1075 = 8761917193277LLU;
	int8_t x1076 = -3;

    t169 = (x1073%((x1074/x1075)<=x1076));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x1077 = 140566852;
	int8_t x1078 = INT8_MAX;
	uint32_t x1079 = 3092609U;
	int8_t x1080 = -1;

    t170 = (x1077%((x1078/x1079)<=x1080));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1081 = -12478;
	uint8_t x1082 = 3U;
	int8_t x1084 = INT8_MAX;
	volatile int32_t t171 = 37;

    t171 = (x1081%((x1082/x1083)<=x1084));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x1085 = INT64_MAX;
	int8_t x1087 = INT8_MIN;
	int64_t x1088 = INT64_MIN;
	int64_t t172 = 239797891638164LL;

    t172 = (x1085%((x1086/x1087)<=x1088));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1093 = 1813168;
	volatile int32_t x1095 = INT32_MIN;
	int64_t x1096 = INT64_MAX;
	volatile int32_t t173 = -4159603;

    t173 = (x1093%((x1094/x1095)<=x1096));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x1101 = 30U;
	int16_t x1102 = -1;
	uint32_t x1104 = 1U;
	int32_t t174 = 24253;

    t174 = (x1101%((x1102/x1103)<=x1104));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1109 = -145165004LL;
	int8_t x1111 = INT8_MAX;
	uint8_t x1112 = UINT8_MAX;
	volatile int64_t t175 = -227608494061LL;

    t175 = (x1109%((x1110/x1111)<=x1112));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1114 = INT8_MIN;
	int32_t x1115 = 19966;
	int16_t x1116 = 1;
	int32_t t176 = -496953;

    t176 = (x1113%((x1114/x1115)<=x1116));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1117 = INT32_MIN;
	uint32_t x1118 = UINT32_MAX;
	int16_t x1119 = -1;
	uint32_t x1120 = UINT32_MAX;
	volatile int32_t t177 = -5;

    t177 = (x1117%((x1118/x1119)<=x1120));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1126 = INT8_MIN;
	int16_t x1128 = INT16_MAX;
	volatile int32_t t178 = 6401;

    t178 = (x1125%((x1126/x1127)<=x1128));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1129 = 1706201275U;
	int8_t x1130 = INT8_MIN;
	static int8_t x1132 = 1;
	uint32_t t179 = 8994029U;

    t179 = (x1129%((x1130/x1131)<=x1132));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1133 = INT32_MIN;
	static uint32_t x1134 = 37U;
	static int8_t x1135 = -1;

    t180 = (x1133%((x1134/x1135)<=x1136));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1149 = 1837U;
	uint32_t x1152 = 356571U;
	static volatile int32_t t181 = 806;

    t181 = (x1149%((x1150/x1151)<=x1152));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x1153 = 1U;
	static volatile uint8_t x1155 = 7U;
	int16_t x1156 = -3333;
	int32_t t182 = 58565709;

    t182 = (x1153%((x1154/x1155)<=x1156));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x1161 = 3340U;
	int8_t x1162 = INT8_MIN;
	volatile int32_t x1163 = INT32_MIN;
	volatile int32_t t183 = -78016;

    t183 = (x1161%((x1162/x1163)<=x1164));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1165 = INT32_MAX;
	static uint32_t x1166 = 60U;
	static uint64_t x1167 = 111150637105535345LLU;
	int16_t x1168 = INT16_MIN;

    t184 = (x1165%((x1166/x1167)<=x1168));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1169 = -879LL;
	static int16_t x1171 = INT16_MIN;
	int32_t x1172 = 514111759;
	volatile int64_t t185 = -182843LL;

    t185 = (x1169%((x1170/x1171)<=x1172));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1173 = -39869047684LL;
	volatile uint16_t x1174 = UINT16_MAX;
	int8_t x1176 = INT8_MAX;
	volatile int64_t t186 = -7659LL;

    t186 = (x1173%((x1174/x1175)<=x1176));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1179 = UINT16_MAX;
	static int8_t x1180 = INT8_MIN;
	volatile int32_t t187 = 545170;

    t187 = (x1177%((x1178/x1179)<=x1180));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1181 = -1LL;
	uint16_t x1182 = UINT16_MAX;

    t188 = (x1181%((x1182/x1183)<=x1184));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1189 = UINT8_MAX;
	int32_t x1190 = INT32_MAX;
	volatile int64_t x1191 = INT64_MIN;
	uint64_t x1192 = 0LLU;
	volatile int32_t t189 = -1;

    t189 = (x1189%((x1190/x1191)<=x1192));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1205 = -1;
	int8_t x1206 = -1;
	uint16_t x1208 = 2742U;
	int32_t t190 = 62539523;

    t190 = (x1205%((x1206/x1207)<=x1208));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1209 = INT16_MIN;
	static uint8_t x1211 = UINT8_MAX;
	uint16_t x1212 = 249U;
	int32_t t191 = 7;

    t191 = (x1209%((x1210/x1211)<=x1212));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1213 = INT8_MAX;
	static uint8_t x1215 = 5U;
	int64_t x1216 = INT64_MIN;
	int32_t t192 = -1;

    t192 = (x1213%((x1214/x1215)<=x1216));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x1217 = UINT64_MAX;
	int16_t x1218 = 20;
	uint64_t x1219 = UINT64_MAX;
	uint64_t t193 = 360372LLU;

    t193 = (x1217%((x1218/x1219)<=x1220));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1235 = INT16_MAX;
	int8_t x1236 = 7;
	int32_t t194 = 71;

    t194 = (x1233%((x1234/x1235)<=x1236));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int32_t x1241 = INT32_MIN;
	uint64_t x1242 = UINT64_MAX;
	int64_t x1243 = INT64_MAX;
	static uint32_t x1244 = UINT32_MAX;

    t195 = (x1241%((x1242/x1243)<=x1244));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x1249 = 10U;
	uint16_t x1250 = 1U;
	volatile int32_t t196 = 526888456;

    t196 = (x1249%((x1250/x1251)<=x1252));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1257 = -1LL;
	volatile int8_t x1259 = INT8_MIN;
	uint16_t x1260 = 12U;
	int64_t t197 = 357989610796300LL;

    t197 = (x1257%((x1258/x1259)<=x1260));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1273 = UINT32_MAX;
	volatile int32_t x1276 = INT32_MAX;
	volatile uint32_t t198 = 0U;

    t198 = (x1273%((x1274/x1275)<=x1276));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x1281 = 1U;
	static uint64_t x1282 = 26526102126529LLU;
	int64_t x1284 = INT64_MIN;
	int32_t t199 = 10187371;

    t199 = (x1281%((x1282/x1283)<=x1284));

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

