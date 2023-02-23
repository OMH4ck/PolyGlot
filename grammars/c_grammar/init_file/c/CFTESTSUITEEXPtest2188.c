
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

int8_t x10 = 3;
uint32_t x12 = 1033472222U;
volatile uint32_t x13 = 1447258U;
static volatile int16_t x14 = INT16_MAX;
int16_t x16 = INT16_MIN;
static int64_t x23 = INT64_MAX;
volatile int64_t x30 = INT64_MAX;
static volatile int64_t x37 = -1LL;
uint32_t x39 = UINT32_MAX;
uint16_t x49 = 0U;
int8_t x51 = INT8_MIN;
int32_t x61 = -1;
int64_t x64 = -1LL;
int16_t x67 = 920;
uint64_t x69 = 2007635118284586285LLU;
volatile int64_t x71 = -1LL;
volatile int8_t x74 = 3;
volatile int32_t t12 = 55;
int64_t x89 = -1LL;
static volatile int64_t t15 = -238189743387795LL;
volatile int16_t x109 = -947;
int64_t x111 = INT64_MAX;
int32_t x113 = INT32_MIN;
int64_t x116 = 26234537LL;
volatile int64_t t18 = 353765LL;
int64_t x124 = INT64_MAX;
static volatile uint64_t t22 = 6276729606835LLU;
int64_t t24 = -3119267547176552LL;
static int32_t x169 = -1;
uint8_t x170 = UINT8_MAX;
uint64_t x172 = 31056LLU;
volatile uint64_t t26 = 107851LLU;
static uint16_t x174 = 220U;
volatile int32_t t27 = -3077;
int8_t x180 = INT8_MIN;
int32_t x187 = INT32_MAX;
int8_t x190 = INT8_MAX;
int16_t x191 = 3;
volatile int8_t x201 = -1;
static int16_t x202 = INT16_MAX;
int32_t x218 = INT32_MAX;
uint16_t x220 = 84U;
int8_t x223 = -31;
static int8_t x224 = 1;
volatile uint64_t t36 = 7571828LLU;
int16_t x260 = -1;
volatile uint32_t x270 = 36U;
static int8_t x272 = -33;
volatile uint64_t t41 = 4077863673112424911LLU;
volatile int64_t t42 = 54339784LL;
int64_t t44 = 3708LL;
static int8_t x293 = -4;
static int64_t x310 = INT64_MAX;
volatile int16_t x325 = INT16_MIN;
int64_t x328 = -1LL;
int16_t x331 = INT16_MAX;
int16_t x335 = INT16_MIN;
volatile int32_t x358 = INT32_MIN;
static int16_t x378 = 1;
int64_t x411 = -1LL;
volatile int64_t t61 = -200328916576760LL;
uint32_t x416 = UINT32_MAX;
volatile uint32_t t62 = 481U;
int8_t x421 = -2;
int32_t x422 = INT32_MIN;
static volatile uint64_t x423 = UINT64_MAX;
int32_t x425 = INT32_MIN;
static uint64_t x427 = 31LLU;
uint64_t t65 = 66770224157288LLU;
int64_t x429 = -1LL;
int32_t x431 = 1743;
uint8_t x435 = 7U;
uint64_t x436 = 684057981648679811LLU;
uint16_t x479 = 56U;
static int16_t x493 = -7663;
uint16_t x496 = 246U;
static volatile int32_t t72 = -1;
uint64_t t73 = 7298432LLU;
uint32_t x515 = UINT32_MAX;
uint32_t x533 = 90463U;
uint64_t x534 = 125603039741433LLU;
uint8_t x548 = 63U;
int8_t x555 = INT8_MAX;
uint16_t x566 = UINT16_MAX;
int32_t t85 = 7046;
static volatile uint64_t t86 = 151289245359687232LLU;
static int8_t x575 = INT8_MIN;
int32_t x587 = -1;
uint32_t x596 = UINT32_MAX;
int8_t x613 = INT8_MAX;
int32_t x614 = INT32_MAX;
static volatile uint64_t x619 = 25371625391645LLU;
uint64_t t94 = 143LLU;
int32_t x622 = 265182351;
static uint64_t x623 = 263005109447350LLU;
volatile int8_t x626 = INT8_MIN;
volatile uint32_t t97 = 25797260U;
int64_t x641 = INT64_MAX;
uint32_t x642 = UINT32_MAX;
volatile uint64_t t98 = 3093290711461089229LLU;
volatile uint64_t x663 = 4558348001434LLU;
uint32_t x673 = 11665739U;
volatile int32_t x680 = INT32_MIN;
uint64_t x687 = UINT64_MAX;
int16_t x689 = -1;
static volatile int16_t x701 = INT16_MIN;
int8_t x703 = INT8_MAX;
int8_t x707 = INT8_MAX;
static int64_t x708 = 15706658854338656LL;
int16_t x709 = 3;
uint64_t x710 = UINT64_MAX;
volatile int64_t x711 = -1LL;
int8_t x714 = INT8_MIN;
volatile int64_t t115 = 443897798851163LL;
volatile uint64_t t116 = 32723613875337528LLU;
int16_t x762 = INT16_MAX;
uint32_t x763 = 76563U;
int16_t x766 = INT16_MIN;
int64_t t122 = -3399714LL;
uint16_t x782 = UINT16_MAX;
uint64_t x787 = 424LLU;
int8_t x790 = 7;
static volatile int16_t x807 = -977;
static int16_t x808 = INT16_MIN;
volatile int32_t x840 = INT32_MAX;
int16_t x843 = -79;
int16_t x844 = INT16_MIN;
int32_t t131 = 157;
uint16_t x850 = 22U;
static int8_t x854 = INT8_MIN;
int8_t x857 = INT8_MAX;
int16_t x878 = -1;
int16_t x884 = -1;
static volatile int32_t t139 = 94477;
static int32_t t140 = 3;
uint64_t x897 = 2984995800088659134LLU;
int16_t x899 = INT16_MAX;
volatile int8_t x900 = INT8_MIN;
volatile uint64_t t142 = 2968309930647289885LLU;
static volatile uint64_t x902 = 117LLU;
uint32_t x904 = UINT32_MAX;
uint32_t x905 = 98946466U;
int16_t x908 = INT16_MIN;
static volatile uint32_t t144 = 843U;
static uint64_t x918 = 150202527728LLU;
int64_t x919 = INT64_MAX;
static volatile uint32_t x929 = UINT32_MAX;
uint32_t x932 = 8U;
int8_t x952 = INT8_MIN;
uint64_t t148 = 9282LLU;
uint32_t x953 = 1906560U;
int16_t x954 = -1;
volatile int16_t x965 = -2940;
static int32_t x971 = -1352508;
uint64_t t151 = 4138LLU;
uint64_t x980 = 353730804618193553LLU;
volatile uint64_t t152 = 23789LLU;
uint64_t x982 = 173753000LLU;
volatile int8_t x983 = -1;
static uint8_t x993 = UINT8_MAX;
uint64_t x994 = 22962303624335LLU;
uint16_t x1000 = 56U;
uint64_t t159 = 13177682015LLU;
int8_t x1057 = 9;
int32_t x1060 = -1;
volatile uint16_t x1063 = 13U;
int8_t x1066 = -13;
static volatile uint64_t t162 = 152303295LLU;
int8_t x1074 = -1;
volatile uint8_t x1079 = 84U;
uint64_t t168 = 193LLU;
volatile uint64_t t169 = 8009LLU;
int16_t x1146 = -1;
static uint8_t x1147 = UINT8_MAX;
int64_t x1161 = INT64_MIN;
uint8_t x1175 = UINT8_MAX;
int16_t x1176 = INT16_MIN;
int64_t t173 = -9182373460388LL;
uint64_t t174 = 15528889979LLU;
uint16_t x1186 = 1U;
volatile int64_t t176 = -500775404LL;
static int8_t x1228 = 6;
int32_t t177 = 818614;
int16_t x1229 = INT16_MAX;
static int8_t x1233 = -1;
volatile int32_t x1234 = -184;
static int32_t t179 = 2154268;
uint32_t x1250 = 91831U;
int8_t x1254 = INT8_MIN;
volatile uint32_t t181 = 169U;
uint8_t x1257 = 16U;
int64_t x1275 = INT64_MAX;
int8_t x1286 = -6;
volatile uint64_t x1290 = UINT64_MAX;
int8_t x1296 = -1;
volatile int16_t x1301 = INT16_MAX;
int8_t x1305 = INT8_MIN;
int8_t x1316 = INT8_MIN;
volatile uint64_t x1318 = 2209381663LLU;
static volatile int8_t x1319 = INT8_MIN;
int64_t x1323 = 2218LL;
int32_t x1324 = INT32_MIN;
volatile int16_t x1338 = INT16_MIN;
int8_t x1349 = 0;
static uint16_t x1352 = 59U;
int32_t x1362 = 237407;
volatile int32_t t197 = -3414;
int8_t x1373 = INT8_MIN;
uint16_t x1374 = UINT16_MAX;
uint64_t x1381 = 6699257218932LLU;
uint64_t t199 = 14LLU;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int16_t x2 = 76;
	int64_t x3 = -1LL;
	int8_t x4 = 28;
	int64_t t0 = 0LL;

    t0 = (x1/((x2&x3)*x4));

    if (t0 != -1009155LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MAX;
	static volatile int64_t x11 = INT64_MAX;
	int64_t t1 = -44LL;

    t1 = (x9/((x10&x11)*x12));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x15 = UINT8_MAX;
	volatile uint32_t t2 = 210966U;

    t2 = (x13/((x14&x15)*x16));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MAX;
	static int32_t x18 = -5;
	uint64_t x19 = 446LLU;
	static uint32_t x20 = UINT32_MAX;
	uint64_t t3 = 34LLU;

    t3 = (x17/((x18&x19)*x20));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x21 = UINT8_MAX;
	int16_t x22 = INT16_MIN;
	uint64_t x24 = UINT64_MAX;
	static uint64_t t4 = 29229542155618LLU;

    t4 = (x21/((x22&x23)*x24));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = -3481215948236436LL;
	int8_t x26 = INT8_MIN;
	uint16_t x27 = 358U;
	volatile int32_t x28 = -1;
	static volatile int64_t t5 = 1576949LL;

    t5 = (x25/((x26&x27)*x28));

    if (t5 != 13598499797798LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = 10;
	uint16_t x31 = 29U;
	uint8_t x32 = UINT8_MAX;
	int64_t t6 = -4254571709587914388LL;

    t6 = (x29/((x30&x31)*x32));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x38 = 6U;
	uint64_t x40 = UINT64_MAX;
	uint64_t t7 = 9041042167606LLU;

    t7 = (x37/((x38&x39)*x40));

    if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x50 = -8005;
	uint32_t x52 = 86150U;
	uint32_t t8 = 114081646U;

    t8 = (x49/((x50&x51)*x52));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x62 = 1251U;
	uint16_t x63 = UINT16_MAX;
	volatile int64_t t9 = 1LL;

    t9 = (x61/((x62&x63)*x64));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x65 = -1;
	static uint64_t x66 = 49919672618LLU;
	static uint16_t x68 = UINT16_MAX;
	uint64_t t10 = 7LLU;

    t10 = (x65/((x66&x67)*x68));

    if (t10 != 1066209362664LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x70 = -1;
	int8_t x72 = -2;
	volatile uint64_t t11 = 7924336307LLU;

    t11 = (x69/((x70&x71)*x72));

    if (t11 != 1003817559142293142LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x73 = INT32_MIN;
	volatile int16_t x75 = -43;
	volatile int32_t x76 = INT32_MIN;

    t12 = (x73/((x74&x75)*x76));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x81 = 892105U;
	static uint64_t x82 = 33457834698438LLU;
	uint32_t x83 = UINT32_MAX;
	int16_t x84 = -1;
	volatile uint64_t t13 = 54536548211881LLU;

    t13 = (x81/((x82&x83)*x84));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x90 = -21825758800979947LL;
	int32_t x91 = -4;
	static uint8_t x92 = UINT8_MAX;
	volatile int64_t t14 = 14932083LL;

    t14 = (x89/((x90&x91)*x92));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x101 = 0U;
	static volatile int64_t x102 = -4160806962538009LL;
	volatile uint16_t x103 = 35U;
	static int32_t x104 = INT32_MIN;

    t15 = (x101/((x102&x103)*x104));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x105 = UINT64_MAX;
	static int16_t x106 = -1;
	volatile int32_t x107 = INT32_MIN;
	static volatile uint8_t x108 = 1U;
	volatile uint64_t t16 = 1937436707296966LLU;

    t16 = (x105/((x106&x107)*x108));

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x110 = 6799660;
	int16_t x112 = -11250;
	volatile int64_t t17 = -2466748379888420LL;

    t17 = (x109/((x110&x111)*x112));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x114 = -1;
	volatile uint16_t x115 = 49U;

    t18 = (x113/((x114&x115)*x116));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x117 = 12U;
	int8_t x118 = 2;
	uint16_t x119 = UINT16_MAX;
	int64_t x120 = 1113952LL;
	volatile int64_t t19 = 266300092656LL;

    t19 = (x117/((x118&x119)*x120));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x121 = -1;
	uint32_t x122 = 1U;
	uint32_t x123 = UINT32_MAX;
	int64_t t20 = 19139470LL;

    t20 = (x121/((x122&x123)*x124));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x137 = INT8_MIN;
	uint8_t x138 = UINT8_MAX;
	int16_t x139 = 8440;
	int32_t x140 = -1;
	volatile int32_t t21 = 78000;

    t21 = (x137/((x138&x139)*x140));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x141 = 28;
	uint64_t x142 = 60LLU;
	int64_t x143 = -1LL;
	volatile int16_t x144 = INT16_MIN;

    t22 = (x141/((x142&x143)*x144));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x145 = 17645;
	int8_t x146 = 5;
	volatile uint32_t x147 = 579U;
	uint32_t x148 = 9U;
	volatile uint32_t t23 = 17917U;

    t23 = (x145/((x146&x147)*x148));

    if (t23 != 1960U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x157 = INT64_MIN;
	int64_t x158 = -1LL;
	uint8_t x159 = UINT8_MAX;
	static int64_t x160 = 27583451817192LL;

    t24 = (x157/((x158&x159)*x160));

    if (t24 != -1311LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x165 = -1;
	uint8_t x166 = 118U;
	volatile int32_t x167 = INT32_MAX;
	uint32_t x168 = 72U;
	volatile uint32_t t25 = 1783361396U;

    t25 = (x165/((x166&x167)*x168));

    if (t25 != 505528U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x171 = -5052299917LL;

    t26 = (x169/((x170&x171)*x172));

    if (t26 != 5165071812408LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x173 = INT32_MIN;
	int16_t x175 = -2;
	uint8_t x176 = UINT8_MAX;

    t27 = (x173/((x174&x175)*x176));

    if (t27 != -38279) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x177 = -2390160LL;
	volatile int32_t x178 = 1781967;
	static int64_t x179 = -1LL;
	int64_t t28 = 144791860952LL;

    t28 = (x177/((x178&x179)*x180));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x185 = 119U;
	volatile int32_t x186 = INT32_MAX;
	volatile uint32_t x188 = 21029196U;
	static uint32_t t29 = 4U;

    t29 = (x185/((x186&x187)*x188));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x189 = INT16_MAX;
	static volatile uint16_t x192 = 4164U;
	int32_t t30 = 1;

    t30 = (x189/((x190&x191)*x192));

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x197 = -1;
	uint8_t x198 = UINT8_MAX;
	static int16_t x199 = -220;
	int32_t x200 = -452;
	volatile int32_t t31 = -3;

    t31 = (x197/((x198&x199)*x200));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x203 = -1043298;
	int32_t x204 = 3954;
	volatile int32_t t32 = 21;

    t32 = (x201/((x202&x203)*x204));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x217 = INT32_MIN;
	uint32_t x219 = 600315083U;
	static volatile uint32_t t33 = 2U;

    t33 = (x217/((x218&x219)*x220));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x221 = 4;
	int8_t x222 = INT8_MIN;
	int32_t t34 = -461229;

    t34 = (x221/((x222&x223)*x224));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x225 = -1;
	static int32_t x226 = INT32_MAX;
	uint32_t x227 = 270U;
	static int64_t x228 = 269355517LL;
	int64_t t35 = -412492407903LL;

    t35 = (x225/((x226&x227)*x228));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x229 = 1;
	static uint64_t x230 = 2431060230437799LLU;
	int64_t x231 = INT64_MAX;
	int16_t x232 = INT16_MIN;

    t36 = (x229/((x230&x231)*x232));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x241 = UINT64_MAX;
	int64_t x242 = -1LL;
	uint16_t x243 = UINT16_MAX;
	volatile int16_t x244 = INT16_MIN;
	volatile uint64_t t37 = 14LLU;

    t37 = (x241/((x242&x243)*x244));

    if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x245 = -116;
	volatile uint16_t x246 = UINT16_MAX;
	uint32_t x247 = 1593U;
	uint32_t x248 = UINT32_MAX;
	volatile uint32_t t38 = 2U;

    t38 = (x245/((x246&x247)*x248));

    if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x257 = INT8_MIN;
	volatile int64_t x258 = 98209177290LL;
	volatile uint64_t x259 = 26283404467174175LLU;
	uint64_t t39 = 35LLU;

    t39 = (x257/((x258&x259)*x260));

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x265 = -1;
	uint32_t x266 = UINT32_MAX;
	int32_t x267 = 7498;
	int8_t x268 = 2;
	uint32_t t40 = 26015708U;

    t40 = (x265/((x266&x267)*x268));

    if (t40 != 286407U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x269 = 0LLU;
	int32_t x271 = -501393;

    t41 = (x269/((x270&x271)*x272));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x273 = INT64_MIN;
	volatile int64_t x274 = -1LL;
	int64_t x275 = -1LL;
	int32_t x276 = INT32_MIN;

    t42 = (x273/((x274&x275)*x276));

    if (t42 != -4294967296LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x277 = 1U;
	uint32_t x278 = 114U;
	uint16_t x279 = 28U;
	uint64_t x280 = 7177626023993308916LLU;
	static uint64_t t43 = 3130375LLU;

    t43 = (x277/((x278&x279)*x280));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x289 = UINT8_MAX;
	int16_t x290 = INT16_MAX;
	int64_t x291 = -1LL;
	static int8_t x292 = 1;

    t44 = (x289/((x290&x291)*x292));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x294 = UINT8_MAX;
	volatile int64_t x295 = INT64_MAX;
	static int8_t x296 = 20;
	int64_t t45 = -22772574LL;

    t45 = (x293/((x294&x295)*x296));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x301 = 3LL;
	volatile uint8_t x302 = 1U;
	static int64_t x303 = -1LL;
	int8_t x304 = 1;
	volatile int64_t t46 = 32408807394436855LL;

    t46 = (x301/((x302&x303)*x304));

    if (t46 != 3LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x309 = 22648042486LL;
	uint16_t x311 = UINT16_MAX;
	uint32_t x312 = UINT32_MAX;
	volatile int64_t t47 = -9799192LL;

    t47 = (x309/((x310&x311)*x312));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x321 = 14LLU;
	int16_t x322 = INT16_MIN;
	static volatile int32_t x323 = -630;
	int16_t x324 = INT16_MIN;
	volatile uint64_t t48 = 7LLU;

    t48 = (x321/((x322&x323)*x324));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x326 = -142;
	int64_t x327 = -1LL;
	volatile int64_t t49 = 180767LL;

    t49 = (x325/((x326&x327)*x328));

    if (t49 != -230LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x329 = 8981;
	static int16_t x330 = -11;
	static volatile int8_t x332 = INT8_MIN;
	volatile int32_t t50 = -56222;

    t50 = (x329/((x330&x331)*x332));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x333 = -1524051322291422403LL;
	int8_t x334 = INT8_MIN;
	static uint64_t x336 = 849330079458549LLU;
	static uint64_t t51 = 2180461639671LLU;

    t51 = (x333/((x334&x335)*x336));

    if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x345 = UINT64_MAX;
	uint16_t x346 = UINT16_MAX;
	int32_t x347 = INT32_MAX;
	int16_t x348 = INT16_MAX;
	uint64_t t52 = 696424867660LLU;

    t52 = (x345/((x346&x347)*x348));

    if (t52 != 8590327822LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x353 = 23;
	int16_t x354 = INT16_MIN;
	uint16_t x355 = UINT16_MAX;
	static int8_t x356 = INT8_MIN;
	int32_t t53 = -15;

    t53 = (x353/((x354&x355)*x356));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x357 = 1;
	uint64_t x359 = 213299123792LLU;
	static uint64_t x360 = UINT64_MAX;
	volatile uint64_t t54 = 47747747616072317LLU;

    t54 = (x357/((x358&x359)*x360));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MAX;
	uint32_t x371 = UINT32_MAX;
	static int32_t x372 = -1;
	static volatile uint32_t t55 = 1850576U;

    t55 = (x369/((x370&x371)*x372));

    if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x373 = INT64_MIN;
	static int64_t x374 = INT64_MAX;
	volatile int16_t x375 = INT16_MAX;
	int16_t x376 = -1;
	int64_t t56 = -96047680LL;

    t56 = (x373/((x374&x375)*x376));

    if (t56 != 281483566907400LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x377 = -477169575;
	uint8_t x379 = 91U;
	volatile int64_t x380 = INT64_MIN;
	volatile int64_t t57 = -1050610821LL;

    t57 = (x377/((x378&x379)*x380));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x385 = 2645LLU;
	uint16_t x386 = 24563U;
	volatile int8_t x387 = INT8_MAX;
	int8_t x388 = 2;
	uint64_t t58 = 143488174364669801LLU;

    t58 = (x385/((x386&x387)*x388));

    if (t58 != 11LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x393 = INT16_MAX;
	int32_t x394 = -1;
	uint8_t x395 = 12U;
	volatile uint8_t x396 = 29U;
	volatile int32_t t59 = 5733743;

    t59 = (x393/((x394&x395)*x396));

    if (t59 != 94) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x405 = INT32_MIN;
	int8_t x406 = INT8_MIN;
	static int64_t x407 = 13960545470LL;
	uint16_t x408 = UINT16_MAX;
	int64_t t60 = -234221110587LL;

    t60 = (x405/((x406&x407)*x408));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x409 = -11;
	int16_t x410 = INT16_MAX;
	uint8_t x412 = UINT8_MAX;

    t61 = (x409/((x410&x411)*x412));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x413 = INT32_MIN;
	volatile uint16_t x414 = 588U;
	int8_t x415 = -1;

    t62 = (x413/((x414&x415)*x416));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x417 = 4085U;
	uint32_t x418 = 31668U;
	uint32_t x419 = UINT32_MAX;
	static int8_t x420 = -1;
	volatile uint32_t t63 = 96362588U;

    t63 = (x417/((x418&x419)*x420));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x424 = 138603U;
	volatile uint64_t t64 = 4523138LLU;

    t64 = (x421/((x422&x423)*x424));

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x426 = 53;
	int8_t x428 = 23;

    t65 = (x425/((x426&x427)*x428));

    if (t65 != 38192016711308629LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x430 = -1LL;
	uint16_t x432 = 4U;
	int64_t t66 = 0LL;

    t66 = (x429/((x430&x431)*x432));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x433 = INT64_MAX;
	uint16_t x434 = UINT16_MAX;
	uint64_t t67 = 91722437914337LLU;

    t67 = (x433/((x434&x435)*x436));

    if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x441 = INT64_MAX;
	int8_t x442 = -1;
	int32_t x443 = -1;
	int8_t x444 = 1;
	static int64_t t68 = -5735531922616LL;

    t68 = (x441/((x442&x443)*x444));

    if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x445 = INT64_MIN;
	int16_t x446 = INT16_MIN;
	static uint64_t x447 = UINT64_MAX;
	volatile int64_t x448 = -15848LL;
	volatile uint64_t t69 = 6LLU;

    t69 = (x445/((x446&x447)*x448));

    if (t69 != 17760914734LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x477 = INT64_MIN;
	uint64_t x478 = 3147351774220LLU;
	volatile int8_t x480 = INT8_MAX;
	volatile uint64_t t70 = 1380109253857370LLU;

    t70 = (x477/((x478&x479)*x480));

    if (t70 != 9078122083518480LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x489 = -15322221009LL;
	int16_t x490 = -1855;
	static uint32_t x491 = 8180U;
	volatile int16_t x492 = -1;
	int64_t t71 = -83520476170616LL;

    t71 = (x489/((x490&x491)*x492));

    if (t71 != -3LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint16_t x494 = 3U;
	volatile int8_t x495 = INT8_MAX;

    t72 = (x493/((x494&x495)*x496));

    if (t72 != -10) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x497 = INT16_MIN;
	volatile int32_t x498 = 41826614;
	int64_t x499 = 3278385443LL;
	static volatile uint64_t x500 = UINT64_MAX;

    t73 = (x497/((x498&x499)*x500));

    if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x509 = UINT32_MAX;
	int16_t x510 = -7855;
	volatile int32_t x511 = INT32_MIN;
	static int64_t x512 = -1LL;
	static int64_t t74 = -115LL;

    t74 = (x509/((x510&x511)*x512));

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x513 = INT16_MIN;
	static uint16_t x514 = UINT16_MAX;
	int32_t x516 = INT32_MIN;
	static volatile uint32_t t75 = 55U;

    t75 = (x513/((x514&x515)*x516));

    if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x521 = 1U;
	int8_t x522 = -1;
	uint32_t x523 = UINT32_MAX;
	int32_t x524 = -1;
	uint32_t t76 = 36U;

    t76 = (x521/((x522&x523)*x524));

    if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x525 = UINT16_MAX;
	volatile uint64_t x526 = 9891LLU;
	int16_t x527 = -13753;
	static int32_t x528 = 101468;
	volatile uint64_t t77 = 1694115591932LLU;

    t77 = (x525/((x526&x527)*x528));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x529 = UINT64_MAX;
	static uint16_t x530 = 13346U;
	int32_t x531 = -1;
	int8_t x532 = INT8_MAX;
	volatile uint64_t t78 = 94LLU;

    t78 = (x529/((x530&x531)*x532));

    if (t78 != 10883407263322LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x535 = UINT8_MAX;
	int64_t x536 = INT64_MIN;
	volatile uint64_t t79 = 79112590785LLU;

    t79 = (x533/((x534&x535)*x536));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int16_t x545 = INT16_MAX;
	int64_t x546 = INT64_MAX;
	uint32_t x547 = UINT32_MAX;
	int64_t t80 = 787562102863719393LL;

    t80 = (x545/((x546&x547)*x548));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x549 = -1;
	uint16_t x550 = 3514U;
	uint64_t x551 = UINT64_MAX;
	volatile uint16_t x552 = UINT16_MAX;
	volatile uint64_t t81 = 23364LLU;

    t81 = (x549/((x550&x551)*x552));

    if (t81 != 80102240109LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x553 = 21490U;
	static uint32_t x554 = 126125U;
	int16_t x556 = INT16_MIN;
	uint32_t t82 = 128U;

    t82 = (x553/((x554&x555)*x556));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x557 = INT64_MAX;
	int32_t x558 = -1;
	int16_t x559 = -1;
	volatile int8_t x560 = -1;
	volatile int64_t t83 = INT64_MAX;

    t83 = (x557/((x558&x559)*x560));

    if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x561 = 0U;
	volatile uint16_t x562 = UINT16_MAX;
	int16_t x563 = INT16_MAX;
	int16_t x564 = INT16_MAX;
	int32_t t84 = -1;

    t84 = (x561/((x562&x563)*x564));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x565 = -18165;
	volatile int32_t x567 = -1;
	static volatile int32_t x568 = -654;

    t85 = (x565/((x566&x567)*x568));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x569 = INT16_MAX;
	uint64_t x570 = 292736LLU;
	uint32_t x571 = 301U;
	int16_t x572 = INT16_MIN;

    t86 = (x569/((x570&x571)*x572));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x573 = -22;
	static int16_t x574 = INT16_MIN;
	volatile int16_t x576 = 2526;
	volatile int32_t t87 = -2901;

    t87 = (x573/((x574&x575)*x576));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint8_t x581 = 10U;
	uint32_t x582 = UINT32_MAX;
	int32_t x583 = 707;
	int64_t x584 = -88814878574LL;
	int64_t t88 = -15LL;

    t88 = (x581/((x582&x583)*x584));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x585 = 460169516720LLU;
	uint16_t x586 = UINT16_MAX;
	int16_t x588 = -1;
	volatile uint64_t t89 = 273334714424LLU;

    t89 = (x585/((x586&x587)*x588));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x593 = INT16_MAX;
	static uint64_t x594 = UINT64_MAX;
	volatile int32_t x595 = INT32_MAX;
	volatile uint64_t t90 = 9LLU;

    t90 = (x593/((x594&x595)*x596));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x601 = 3LLU;
	static uint64_t x602 = UINT64_MAX;
	int16_t x603 = -1;
	int64_t x604 = INT64_MIN;
	volatile uint64_t t91 = 148339LLU;

    t91 = (x601/((x602&x603)*x604));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x605 = INT32_MIN;
	uint32_t x606 = UINT32_MAX;
	int32_t x607 = -1;
	volatile int8_t x608 = 1;
	uint32_t t92 = 1134253U;

    t92 = (x605/((x606&x607)*x608));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x615 = -1LL;
	int16_t x616 = 4;
	volatile int64_t t93 = -13703LL;

    t93 = (x613/((x614&x615)*x616));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x617 = 4;
	volatile uint32_t x618 = UINT32_MAX;
	int16_t x620 = INT16_MIN;

    t94 = (x617/((x618&x619)*x620));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x621 = 406309;
	int64_t x624 = INT64_MAX;
	volatile uint64_t t95 = 7658235917034155LLU;

    t95 = (x621/((x622&x623)*x624));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x625 = 39311041U;
	static int64_t x627 = INT64_MAX;
	int16_t x628 = -1;
	static volatile int64_t t96 = 516927059383LL;

    t96 = (x625/((x626&x627)*x628));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x637 = UINT32_MAX;
	uint8_t x638 = UINT8_MAX;
	uint32_t x639 = 30U;
	static uint32_t x640 = UINT32_MAX;

    t97 = (x637/((x638&x639)*x640));

    if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x643 = -56;
	uint64_t x644 = 23856189LLU;

    t98 = (x641/((x642&x643)*x644));

    if (t98 != 90LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x645 = INT64_MAX;
	uint16_t x646 = 5U;
	static volatile int64_t x647 = 2341289311LL;
	uint64_t x648 = 3578LLU;
	uint64_t t99 = 2373287733860456LLU;

    t99 = (x645/((x646&x647)*x648));

    if (t99 != 515560203289814LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x649 = INT64_MIN;
	int16_t x650 = -562;
	uint8_t x651 = 40U;
	int16_t x652 = INT16_MAX;
	volatile int64_t t100 = -81541369LL;

    t100 = (x649/((x650&x651)*x652));

    if (t100 != -35185445863425LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x657 = INT8_MIN;
	static uint8_t x658 = 2U;
	uint64_t x659 = UINT64_MAX;
	uint16_t x660 = 336U;
	volatile uint64_t t101 = 29833894508LLU;

    t101 = (x657/((x658&x659)*x660));

    if (t101 != 27450512014448737LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x661 = 0U;
	uint8_t x662 = UINT8_MAX;
	volatile int32_t x664 = INT32_MAX;
	static volatile uint64_t t102 = 1548719440034271LLU;

    t102 = (x661/((x662&x663)*x664));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x665 = INT32_MIN;
	uint8_t x666 = UINT8_MAX;
	static int64_t x667 = 31LL;
	int16_t x668 = INT16_MAX;
	int64_t t103 = -1794209012385LL;

    t103 = (x665/((x666&x667)*x668));

    if (t103 != -2114LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint8_t x669 = 4U;
	uint8_t x670 = UINT8_MAX;
	volatile int32_t x671 = INT32_MAX;
	static int32_t x672 = 2179073;
	volatile int32_t t104 = -2078893;

    t104 = (x669/((x670&x671)*x672));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x674 = INT16_MIN;
	static int64_t x675 = -12098056LL;
	int16_t x676 = INT16_MAX;
	volatile int64_t t105 = 26LL;

    t105 = (x673/((x674&x675)*x676));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x677 = 481145U;
	int8_t x678 = -1;
	int64_t x679 = -1LL;
	volatile int64_t t106 = -268165497912LL;

    t106 = (x677/((x678&x679)*x680));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x681 = UINT32_MAX;
	static int16_t x682 = 7;
	uint64_t x683 = UINT64_MAX;
	static uint8_t x684 = 37U;
	static volatile uint64_t t107 = 3098883046155507LLU;

    t107 = (x681/((x682&x683)*x684));

    if (t107 != 16582885LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x685 = UINT16_MAX;
	static uint64_t x686 = 890592940LLU;
	int16_t x688 = 1;
	uint64_t t108 = 57048529904919214LLU;

    t108 = (x685/((x686&x687)*x688));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x690 = 1;
	uint64_t x691 = UINT64_MAX;
	int32_t x692 = INT32_MIN;
	uint64_t t109 = 32205278950LLU;

    t109 = (x689/((x690&x691)*x692));

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x693 = 3U;
	static int32_t x694 = INT32_MIN;
	volatile int64_t x695 = -1LL;
	int8_t x696 = -1;
	volatile int64_t t110 = -1912755165LL;

    t110 = (x693/((x694&x695)*x696));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x697 = -1;
	uint32_t x698 = 733U;
	int16_t x699 = 1;
	uint8_t x700 = 1U;
	volatile uint32_t t111 = UINT32_MAX;

    t111 = (x697/((x698&x699)*x700));

    if (t111 != UINT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x702 = -436;
	uint64_t x704 = 2077483608783LLU;
	uint64_t t112 = 181977250LLU;

    t112 = (x701/((x702&x703)*x704));

    if (t112 != 116833LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x705 = -1;
	uint16_t x706 = 100U;
	int64_t t113 = -3774316692275128055LL;

    t113 = (x705/((x706&x707)*x708));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x712 = INT64_MIN;
	volatile uint64_t t114 = 20244341LLU;

    t114 = (x709/((x710&x711)*x712));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x713 = -66;
	int16_t x715 = INT16_MIN;
	volatile int64_t x716 = -1LL;

    t115 = (x713/((x714&x715)*x716));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x717 = -1630;
	int8_t x718 = -1;
	volatile uint64_t x719 = 769154716LLU;
	static uint16_t x720 = UINT16_MAX;

    t116 = (x717/((x718&x719)*x720));

    if (t116 != 365959LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x729 = 292U;
	int32_t x730 = 545;
	int64_t x731 = -9882043646LL;
	uint8_t x732 = UINT8_MAX;
	volatile int64_t t117 = 30233052020816LL;

    t117 = (x729/((x730&x731)*x732));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x733 = UINT64_MAX;
	static volatile uint32_t x734 = 7U;
	int16_t x735 = -1;
	volatile int32_t x736 = INT32_MIN;
	static uint64_t t118 = 1800528903378LLU;

    t118 = (x733/((x734&x735)*x736));

    if (t118 != 8589934591LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x761 = INT16_MIN;
	uint8_t x764 = 1U;
	uint32_t t119 = 73589U;

    t119 = (x761/((x762&x763)*x764));

    if (t119 != 389492U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x765 = 2144U;
	volatile uint64_t x767 = UINT64_MAX;
	int32_t x768 = 1;
	uint64_t t120 = 129355LLU;

    t120 = (x765/((x766&x767)*x768));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x769 = INT64_MIN;
	int8_t x770 = 28;
	volatile int64_t x771 = INT64_MAX;
	uint8_t x772 = 116U;
	volatile int64_t t121 = 3LL;

    t121 = (x769/((x770&x771)*x772));

    if (t121 != -2839708139425731LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x777 = -29225;
	int64_t x778 = 88042757697LL;
	static int8_t x779 = INT8_MAX;
	uint32_t x780 = UINT32_MAX;

    t122 = (x777/((x778&x779)*x780));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x781 = INT8_MAX;
	int16_t x783 = INT16_MIN;
	static uint16_t x784 = 29855U;
	static int32_t t123 = -239646884;

    t123 = (x781/((x782&x783)*x784));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x785 = 1U;
	uint64_t x786 = 2366786765730106LLU;
	uint64_t x788 = 4751200LLU;
	volatile uint64_t t124 = 8LLU;

    t124 = (x785/((x786&x787)*x788));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x789 = INT16_MIN;
	int64_t x791 = -1LL;
	int8_t x792 = INT8_MIN;
	int64_t t125 = 1049260851523301LL;

    t125 = (x789/((x790&x791)*x792));

    if (t125 != 36LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x793 = 569;
	uint8_t x794 = UINT8_MAX;
	int8_t x795 = INT8_MIN;
	int32_t x796 = 1005;
	int32_t t126 = -1179;

    t126 = (x793/((x794&x795)*x796));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x805 = INT16_MIN;
	static int16_t x806 = 45;
	volatile int32_t t127 = 0;

    t127 = (x805/((x806&x807)*x808));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x817 = INT32_MIN;
	int8_t x818 = INT8_MIN;
	uint16_t x819 = 1800U;
	int8_t x820 = INT8_MIN;
	volatile int32_t t128 = -2;

    t128 = (x817/((x818&x819)*x820));

    if (t128 != 9362) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x833 = 512985882LLU;
	uint32_t x834 = UINT32_MAX;
	volatile int16_t x835 = -1;
	volatile uint32_t x836 = 344358U;
	uint64_t t129 = 57742567416LLU;

    t129 = (x833/((x834&x835)*x836));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x837 = UINT16_MAX;
	int64_t x838 = -4052884LL;
	int32_t x839 = INT32_MAX;
	int64_t t130 = -971063440579636LL;

    t130 = (x837/((x838&x839)*x840));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x841 = 123;
	int8_t x842 = -1;

    t131 = (x841/((x842&x843)*x844));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x845 = 182154782U;
	volatile int8_t x846 = INT8_MIN;
	static int32_t x847 = -24;
	int16_t x848 = 9;
	volatile uint32_t t132 = 244598988U;

    t132 = (x845/((x846&x847)*x848));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x849 = 30;
	uint8_t x851 = 28U;
	int32_t x852 = -1;
	int32_t t133 = 9;

    t133 = (x849/((x850&x851)*x852));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x853 = 409794392;
	int32_t x855 = -3;
	uint16_t x856 = UINT16_MAX;
	volatile int32_t t134 = -56185100;

    t134 = (x853/((x854&x855)*x856));

    if (t134 != -48) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x858 = -1;
	static int8_t x859 = INT8_MIN;
	uint8_t x860 = 42U;
	int32_t t135 = 0;

    t135 = (x857/((x858&x859)*x860));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x861 = 8U;
	static uint16_t x862 = UINT16_MAX;
	static uint64_t x863 = UINT64_MAX;
	static int16_t x864 = 25;
	volatile uint64_t t136 = 8136845627LLU;

    t136 = (x861/((x862&x863)*x864));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int64_t x873 = -1LL;
	int8_t x874 = -1;
	static int16_t x875 = INT16_MIN;
	int8_t x876 = -1;
	int64_t t137 = 3792838LL;

    t137 = (x873/((x874&x875)*x876));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x877 = UINT8_MAX;
	static uint8_t x879 = 6U;
	uint32_t x880 = 52U;
	static volatile uint32_t t138 = 1U;

    t138 = (x877/((x878&x879)*x880));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x881 = UINT16_MAX;
	int32_t x882 = -1;
	int8_t x883 = -1;

    t139 = (x881/((x882&x883)*x884));

    if (t139 != 65535) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x885 = 3;
	static volatile uint8_t x886 = 19U;
	static int8_t x887 = INT8_MAX;
	static int8_t x888 = 1;

    t140 = (x885/((x886&x887)*x888));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x889 = -1;
	uint16_t x890 = UINT16_MAX;
	volatile int8_t x891 = 1;
	volatile int8_t x892 = INT8_MAX;
	static int32_t t141 = 26634673;

    t141 = (x889/((x890&x891)*x892));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x898 = UINT16_MAX;

    t142 = (x897/((x898&x899)*x900));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x901 = INT16_MIN;
	static int16_t x903 = INT16_MAX;
	volatile uint64_t t143 = 1881LLU;

    t143 = (x901/((x902&x903)*x904));

    if (t143 != 36709122LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x906 = UINT32_MAX;
	int32_t x907 = -1;

    t144 = (x905/((x906&x907)*x908));

    if (t144 != 3019U) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x917 = UINT16_MAX;
	int16_t x920 = INT16_MAX;
	uint64_t t145 = 34014280LLU;

    t145 = (x917/((x918&x919)*x920));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x925 = UINT8_MAX;
	int64_t x926 = -1LL;
	uint16_t x927 = 10U;
	volatile uint16_t x928 = 14U;
	volatile int64_t t146 = 536363556614LL;

    t146 = (x925/((x926&x927)*x928));

    if (t146 != 1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x930 = INT8_MAX;
	volatile int8_t x931 = -13;
	volatile uint32_t t147 = 0U;

    t147 = (x929/((x930&x931)*x932));

    if (t147 != 4668442U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x949 = 6329650769LL;
	uint64_t x950 = 38268LLU;
	uint64_t x951 = 9175570045292395209LLU;

    t148 = (x949/((x950&x951)*x952));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x955 = UINT8_MAX;
	static int8_t x956 = INT8_MIN;
	uint32_t t149 = 0U;

    t149 = (x953/((x954&x955)*x956));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x966 = INT8_MIN;
	int64_t x967 = INT64_MAX;
	uint64_t x968 = 231137286266525433LLU;
	uint64_t t150 = 375LLU;

    t150 = (x965/((x966&x967)*x968));

    if (t150 != 1LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x969 = 31LLU;
	volatile uint32_t x970 = 15U;
	uint8_t x972 = 13U;

    t151 = (x969/((x970&x971)*x972));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x977 = INT8_MAX;
	int16_t x978 = INT16_MAX;
	volatile uint8_t x979 = 13U;

    t152 = (x977/((x978&x979)*x980));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x981 = 57;
	int8_t x984 = -1;
	static uint64_t t153 = 934348322823LLU;

    t153 = (x981/((x982&x983)*x984));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x995 = INT8_MAX;
	int16_t x996 = INT16_MIN;
	volatile uint64_t t154 = 2449253180453139LLU;

    t154 = (x993/((x994&x995)*x996));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x997 = 2U;
	int8_t x998 = 46;
	volatile int8_t x999 = -1;
	volatile int32_t t155 = 0;

    t155 = (x997/((x998&x999)*x1000));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1005 = -1;
	int32_t x1006 = -1;
	int64_t x1007 = -1LL;
	int64_t x1008 = INT64_MAX;
	int64_t t156 = 16013LL;

    t156 = (x1005/((x1006&x1007)*x1008));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1037 = -1;
	volatile uint64_t x1038 = UINT64_MAX;
	static int16_t x1039 = INT16_MAX;
	static int8_t x1040 = INT8_MAX;
	uint64_t t157 = 3215LLU;

    t157 = (x1037/((x1038&x1039)*x1040));

    if (t157 != 4432812077281LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1041 = -2203;
	static volatile int32_t x1042 = -1;
	volatile int64_t x1043 = -1LL;
	volatile uint64_t x1044 = 1646558804199LLU;
	uint64_t t158 = 4545658589799173656LLU;

    t158 = (x1041/((x1042&x1043)*x1044));

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x1049 = INT32_MIN;
	uint32_t x1050 = 248907U;
	uint64_t x1051 = UINT64_MAX;
	uint32_t x1052 = UINT32_MAX;

    t159 = (x1049/((x1050&x1051)*x1052));

    if (t159 != 17255LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x1058 = -1LL;
	uint16_t x1059 = UINT16_MAX;
	int64_t t160 = -97691921912LL;

    t160 = (x1057/((x1058&x1059)*x1060));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x1061 = 163;
	int16_t x1062 = INT16_MAX;
	int16_t x1064 = 15006;
	static volatile int32_t t161 = -37303;

    t161 = (x1061/((x1062&x1063)*x1064));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x1065 = 857LLU;
	static uint8_t x1067 = 23U;
	static int8_t x1068 = INT8_MAX;

    t162 = (x1065/((x1066&x1067)*x1068));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1073 = UINT64_MAX;
	volatile int8_t x1075 = 29;
	uint64_t x1076 = 4705639297435954LLU;
	static uint64_t t163 = 202029LLU;

    t163 = (x1073/((x1074&x1075)*x1076));

    if (t163 != 135LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x1077 = UINT64_MAX;
	volatile int16_t x1078 = -25;
	int64_t x1080 = -442244LL;
	volatile uint64_t t164 = 55LLU;

    t164 = (x1077/((x1078&x1079)*x1080));

    if (t164 != 1LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1081 = 30U;
	int8_t x1082 = INT8_MIN;
	int32_t x1083 = -1;
	static int64_t x1084 = -1LL;
	int64_t t165 = -104LL;

    t165 = (x1081/((x1082&x1083)*x1084));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1085 = -1;
	int8_t x1086 = INT8_MAX;
	uint8_t x1087 = 1U;
	static int32_t x1088 = INT32_MAX;
	volatile int32_t t166 = -139675;

    t166 = (x1085/((x1086&x1087)*x1088));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1097 = INT8_MIN;
	int32_t x1098 = 434307733;
	uint64_t x1099 = 57LLU;
	int8_t x1100 = INT8_MAX;
	static uint64_t t167 = 20475586228796LLU;

    t167 = (x1097/((x1098&x1099)*x1100));

    if (t167 != 8544114902135040LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1125 = 31U;
	volatile uint64_t x1126 = 9711LLU;
	int32_t x1127 = -1;
	uint8_t x1128 = UINT8_MAX;

    t168 = (x1125/((x1126&x1127)*x1128));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1137 = 285U;
	uint32_t x1138 = 102U;
	uint64_t x1139 = 575072021610228LLU;
	int32_t x1140 = -395;

    t169 = (x1137/((x1138&x1139)*x1140));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1145 = 3LL;
	static uint8_t x1148 = 8U;
	int64_t t170 = -1597884292LL;

    t170 = (x1145/((x1146&x1147)*x1148));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1162 = INT16_MIN;
	volatile uint32_t x1163 = 9521779U;
	static uint64_t x1164 = 46815LLU;
	uint64_t t171 = 420815186066793LLU;

    t171 = (x1161/((x1162&x1163)*x1164));

    if (t171 != 20732743LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x1173 = INT8_MIN;
	uint16_t x1174 = UINT16_MAX;
	int32_t t172 = 6444108;

    t172 = (x1173/((x1174&x1175)*x1176));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1177 = INT64_MIN;
	int32_t x1178 = INT32_MAX;
	int16_t x1179 = INT16_MIN;
	volatile uint32_t x1180 = 40U;

    t173 = (x1177/((x1178&x1179)*x1180));

    if (t173 != -2148139208LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1181 = 445463583LLU;
	volatile int16_t x1182 = INT16_MAX;
	int8_t x1183 = -1;
	uint8_t x1184 = UINT8_MAX;

    t174 = (x1181/((x1182&x1183)*x1184));

    if (t174 != 53LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1185 = -1LL;
	int32_t x1187 = -1;
	volatile uint32_t x1188 = 833825U;
	static int64_t t175 = -1108LL;

    t175 = (x1185/((x1186&x1187)*x1188));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1197 = INT8_MIN;
	int32_t x1198 = INT32_MIN;
	int16_t x1199 = -1;
	volatile int64_t x1200 = -1LL;

    t176 = (x1197/((x1198&x1199)*x1200));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x1225 = 14086480;
	uint8_t x1226 = 51U;
	int32_t x1227 = -1;

    t177 = (x1225/((x1226&x1227)*x1228));

    if (t177 != 46034) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1230 = -105;
	uint16_t x1231 = 14U;
	int16_t x1232 = INT16_MIN;
	volatile int32_t t178 = 4750;

    t178 = (x1229/((x1230&x1231)*x1232));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1235 = INT16_MIN;
	static volatile uint16_t x1236 = UINT16_MAX;

    t179 = (x1233/((x1234&x1235)*x1236));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1249 = -1;
	static uint64_t x1251 = 1925LLU;
	int32_t x1252 = INT32_MIN;
	volatile uint64_t t180 = 1791062878LLU;

    t180 = (x1249/((x1250&x1251)*x1252));

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x1253 = UINT8_MAX;
	int8_t x1255 = INT8_MIN;
	uint32_t x1256 = 48U;

    t181 = (x1253/((x1254&x1255)*x1256));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1258 = -1;
	uint8_t x1259 = UINT8_MAX;
	int64_t x1260 = -1LL;
	int64_t t182 = -586651472353153461LL;

    t182 = (x1257/((x1258&x1259)*x1260));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1261 = INT64_MIN;
	int32_t x1262 = INT32_MAX;
	volatile int64_t x1263 = INT64_MAX;
	int32_t x1264 = -1;
	int64_t t183 = 374361LL;

    t183 = (x1261/((x1262&x1263)*x1264));

    if (t183 != 4294967298LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1273 = -1;
	static volatile uint32_t x1274 = UINT32_MAX;
	int16_t x1276 = INT16_MAX;
	volatile int64_t t184 = 256879738334867360LL;

    t184 = (x1273/((x1274&x1275)*x1276));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1285 = -1;
	uint8_t x1287 = UINT8_MAX;
	volatile int8_t x1288 = INT8_MAX;
	volatile int32_t t185 = 1;

    t185 = (x1285/((x1286&x1287)*x1288));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1289 = UINT16_MAX;
	static volatile uint64_t x1291 = 542960145550054LLU;
	int16_t x1292 = INT16_MIN;
	uint64_t t186 = 57400385542504LLU;

    t186 = (x1289/((x1290&x1291)*x1292));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x1293 = -1LL;
	static volatile uint16_t x1294 = 13527U;
	uint8_t x1295 = 33U;
	volatile int64_t t187 = -18362LL;

    t187 = (x1293/((x1294&x1295)*x1296));

    if (t187 != 1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1302 = INT64_MAX;
	uint8_t x1303 = UINT8_MAX;
	int16_t x1304 = INT16_MIN;
	int64_t t188 = -162600165280564875LL;

    t188 = (x1301/((x1302&x1303)*x1304));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1306 = 292963898U;
	int8_t x1307 = -1;
	static uint32_t x1308 = 2050122882U;
	uint32_t t189 = 3550826U;

    t189 = (x1305/((x1306&x1307)*x1308));

    if (t189 != 2U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1309 = UINT8_MAX;
	volatile int8_t x1310 = INT8_MAX;
	int64_t x1311 = INT64_MAX;
	int32_t x1312 = INT32_MIN;
	static int64_t t190 = 822478LL;

    t190 = (x1309/((x1310&x1311)*x1312));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x1313 = 1;
	static volatile int64_t x1314 = -186515492326677LL;
	int16_t x1315 = -1;
	static int64_t t191 = -1120776662836611845LL;

    t191 = (x1313/((x1314&x1315)*x1316));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1317 = INT64_MAX;
	volatile uint32_t x1320 = 9882U;
	uint64_t t192 = 1613381660LLU;

    t192 = (x1317/((x1318&x1319)*x1320));

    if (t192 != 422448LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1321 = INT16_MIN;
	volatile uint64_t x1322 = UINT64_MAX;
	volatile uint64_t t193 = 2027174578LLU;

    t193 = (x1321/((x1322&x1323)*x1324));

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1337 = INT64_MAX;
	int32_t x1339 = -57;
	uint32_t x1340 = 316973U;
	int64_t t194 = 99490264391846409LL;

    t194 = (x1337/((x1338&x1339)*x1340));

    if (t194 != 3691814025LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1350 = 2U;
	int8_t x1351 = INT8_MAX;
	int32_t t195 = -135;

    t195 = (x1349/((x1350&x1351)*x1352));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1353 = UINT16_MAX;
	int32_t x1354 = INT32_MAX;
	int16_t x1355 = -1;
	int8_t x1356 = 1;
	volatile int32_t t196 = 12085;

    t196 = (x1353/((x1354&x1355)*x1356));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1361 = INT8_MIN;
	static uint8_t x1363 = UINT8_MAX;
	int32_t x1364 = -1;

    t197 = (x1361/((x1362&x1363)*x1364));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x1375 = 394983LLU;
	int64_t x1376 = -3824417LL;
	static volatile uint64_t t198 = 1486080837045LLU;

    t198 = (x1373/((x1374&x1375)*x1376));

    if (t198 != 1LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1382 = 46122;
	int32_t x1383 = INT32_MAX;
	uint8_t x1384 = 7U;

    t199 = (x1381/((x1382&x1383)*x1384));

    if (t199 != 20750113LLU) { NG(); } else { ; }
	
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

