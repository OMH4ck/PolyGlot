
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

volatile int32_t x3 = -1;
int64_t x4 = -1LL;
uint32_t x14 = 2982U;
static uint32_t x21 = 32U;
int64_t x25 = 7291LL;
static int32_t x26 = -1;
volatile uint64_t t7 = 5287LLU;
volatile uint32_t x47 = 10555088U;
volatile uint64_t x48 = UINT64_MAX;
static uint32_t x49 = 116752U;
int8_t x51 = INT8_MIN;
int16_t x54 = -1;
int64_t t10 = -67354766418269026LL;
int8_t x68 = INT8_MAX;
static volatile int16_t x76 = INT16_MIN;
int32_t x103 = -1;
int8_t x105 = 6;
static uint64_t x106 = 1991369920310396972LLU;
int32_t t18 = -2617;
static uint16_t x125 = UINT16_MAX;
uint32_t x128 = UINT32_MAX;
int32_t x144 = INT32_MIN;
uint64_t x145 = 356866403LLU;
int8_t x148 = -1;
static uint8_t x152 = UINT8_MAX;
int16_t x159 = -3;
int32_t t25 = -3419005;
uint16_t x192 = UINT16_MAX;
uint32_t x197 = 12U;
static uint16_t x200 = 95U;
uint64_t t31 = 17104061017LLU;
int32_t x219 = INT32_MAX;
volatile int32_t t32 = 176;
uint32_t x232 = 5U;
volatile int32_t x246 = INT32_MIN;
static uint8_t x273 = UINT8_MAX;
volatile int32_t t36 = 169;
uint8_t x281 = 14U;
uint16_t x285 = UINT16_MAX;
uint8_t x286 = 120U;
static uint64_t x287 = 95893967LLU;
uint64_t x296 = UINT64_MAX;
volatile int32_t t40 = -3955844;
uint64_t x297 = 587533027560517573LLU;
uint8_t x301 = UINT8_MAX;
int32_t x302 = INT32_MIN;
int8_t x303 = -10;
int32_t x307 = INT32_MAX;
int16_t x318 = 3514;
uint32_t x319 = UINT32_MAX;
int32_t t46 = 20929;
static uint32_t x331 = 5U;
int64_t x337 = 1097979030LL;
static int32_t t49 = 45;
static int16_t x347 = -1;
uint8_t x348 = UINT8_MAX;
volatile uint32_t t51 = 102U;
int32_t x353 = 24428179;
int16_t x354 = 0;
static uint16_t x361 = 14U;
int64_t x382 = 222327787LL;
static int16_t x396 = INT16_MAX;
volatile int32_t t61 = 87755;
int32_t x423 = INT32_MIN;
volatile int32_t t64 = -7147736;
uint8_t x442 = UINT8_MAX;
uint8_t x453 = UINT8_MAX;
int32_t x454 = -310;
static int32_t x471 = INT32_MIN;
volatile int8_t x472 = 57;
uint64_t x480 = 866403198291328LLU;
static int32_t t74 = 6710657;
volatile int64_t x514 = -1142550430809LL;
int64_t x542 = INT64_MIN;
int64_t x549 = 952393934335LL;
static uint64_t x550 = 1804099631404LLU;
int16_t x565 = 8;
int8_t x572 = -57;
int32_t x574 = -232896095;
static uint64_t x582 = 667276477990711LLU;
static volatile int32_t x583 = INT32_MIN;
int32_t x592 = 23006996;
int8_t x617 = 46;
static uint8_t x623 = 66U;
int16_t x624 = -7928;
int32_t x626 = INT32_MAX;
volatile int32_t t89 = -1;
volatile int64_t x631 = -1LL;
static volatile int64_t x632 = INT64_MAX;
uint32_t t90 = 20995U;
int64_t x644 = INT64_MIN;
volatile int32_t x646 = -1;
int64_t x652 = -2193700287263420LL;
int32_t t93 = -43785;
int32_t t95 = -1;
int16_t x667 = INT16_MIN;
uint32_t t98 = 83117678U;
static int16_t x695 = -1;
int8_t x710 = INT8_MAX;
uint16_t x715 = UINT16_MAX;
static int32_t x718 = -18429868;
volatile uint16_t x735 = 2U;
int8_t x739 = INT8_MIN;
int64_t x750 = 597519LL;
uint64_t x758 = UINT64_MAX;
int32_t x763 = INT32_MIN;
static uint32_t x764 = 857819U;
int32_t x778 = -1;
volatile int64_t x779 = INT64_MIN;
uint16_t x813 = UINT16_MAX;
volatile uint16_t x827 = 9U;
volatile uint16_t x835 = 209U;
static int8_t x836 = -1;
static int32_t x839 = INT32_MIN;
int32_t t120 = 50781732;
uint8_t x864 = 0U;
static volatile int32_t t121 = 79615520;
static int8_t x905 = INT8_MAX;
int8_t x906 = INT8_MIN;
uint8_t x908 = 6U;
static int32_t x918 = INT32_MAX;
int32_t x920 = INT32_MIN;
int32_t t126 = 84024;
int32_t t128 = -6137453;
volatile uint16_t x963 = UINT16_MAX;
int16_t x964 = 0;
volatile uint32_t t129 = 6U;
int32_t x967 = INT32_MAX;
int32_t x976 = INT32_MIN;
volatile int32_t t132 = 5663075;
int16_t x978 = INT16_MIN;
uint32_t x1002 = 649692677U;
static volatile uint64_t t141 = 936663408217641737LLU;
int8_t x1025 = INT8_MAX;
int32_t x1028 = INT32_MIN;
uint32_t x1032 = 543U;
volatile int32_t t143 = 3964052;
static int16_t x1038 = 7;
uint16_t x1040 = 3U;
static int64_t x1074 = INT64_MIN;
int16_t x1093 = INT16_MAX;
uint16_t x1096 = 144U;
static volatile int32_t t149 = -15049285;
volatile int64_t x1109 = 65198817LL;
int16_t x1117 = 60;
int8_t x1122 = INT8_MIN;
volatile int16_t x1135 = -1;
static int16_t x1139 = 81;
uint16_t x1142 = 456U;
volatile int32_t x1145 = 10659790;
static uint16_t x1146 = 3296U;
volatile int32_t t157 = 65953758;
volatile uint8_t x1153 = UINT8_MAX;
volatile int8_t x1166 = INT8_MAX;
uint8_t x1167 = 63U;
uint8_t x1174 = 109U;
volatile int32_t t160 = 388137318;
static int8_t x1205 = 1;
volatile int16_t x1208 = -18;
uint16_t x1209 = UINT16_MAX;
int16_t x1211 = INT16_MAX;
volatile int8_t x1212 = -12;
int16_t x1220 = INT16_MIN;
int32_t x1232 = INT32_MAX;
int32_t x1246 = -1;
int32_t t170 = -372160;
static int32_t x1262 = 2;
int16_t x1266 = 420;
static int8_t x1279 = 13;
volatile uint64_t t175 = 56078726076002630LLU;
volatile int16_t x1282 = -1;
int8_t x1294 = 6;
static int16_t x1295 = -14846;
int32_t x1304 = -45957478;
uint64_t x1305 = 4267586805010LLU;
static int32_t x1308 = INT32_MIN;
volatile int16_t x1309 = 2;
int16_t x1326 = -1;
uint8_t x1328 = UINT8_MAX;
int16_t x1332 = INT16_MAX;
int8_t x1336 = INT8_MIN;
static int16_t x1339 = -10;
int64_t x1352 = -479356894338896986LL;
int64_t x1367 = INT64_MAX;
volatile uint32_t x1369 = 382U;
uint32_t t190 = 3806923U;
int64_t x1376 = INT64_MIN;
static int64_t x1401 = 16281LL;
static uint8_t x1405 = 119U;
volatile int32_t t196 = -1004;
uint32_t x1438 = 0U;
static volatile int16_t x1440 = INT16_MAX;


void f0(void) {
    	static uint16_t x1 = 3U;
	int8_t x2 = 26;
	volatile int32_t t0 = 13635;

    t0 = (x1<<((x2|x3)!=x4));

    if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x9 = 1U;
	int64_t x10 = INT64_MAX;
	static int8_t x11 = -1;
	int16_t x12 = -1;
	static volatile int32_t t1 = 422462913;

    t1 = (x9<<((x10|x11)!=x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = 3U;
	int64_t x15 = -523520LL;
	int64_t x16 = INT64_MAX;
	volatile int32_t t2 = -6368;

    t2 = (x13<<((x14|x15)!=x16));

    if (t2 != 6) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x22 = 7014201LLU;
	int8_t x23 = -27;
	int32_t x24 = -1;
	static uint32_t t3 = 31U;

    t3 = (x21<<((x22|x23)!=x24));

    if (t3 != 64U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x27 = -1;
	int16_t x28 = -1555;
	int64_t t4 = 2081275253340016LL;

    t4 = (x25<<((x26|x27)!=x28));

    if (t4 != 14582LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x29 = 3693328871021756LLU;
	static int16_t x30 = INT16_MIN;
	int64_t x31 = -1LL;
	uint32_t x32 = 8370866U;
	uint64_t t5 = 203232369LLU;

    t5 = (x29<<((x30|x31)!=x32));

    if (t5 != 7386657742043512LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x37 = UINT16_MAX;
	static uint32_t x38 = UINT32_MAX;
	int8_t x39 = 0;
	int32_t x40 = 93;
	int32_t t6 = 0;

    t6 = (x37<<((x38|x39)!=x40));

    if (t6 != 131070) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x41 = 30862575LLU;
	volatile int8_t x42 = -1;
	uint8_t x43 = 3U;
	int16_t x44 = INT16_MAX;

    t7 = (x41<<((x42|x43)!=x44));

    if (t7 != 61725150LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint8_t x45 = 1U;
	static int64_t x46 = -107632LL;
	int32_t t8 = -27;

    t8 = (x45<<((x46|x47)!=x48));

    if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x50 = INT8_MIN;
	int8_t x52 = INT8_MIN;
	uint32_t t9 = 87366U;

    t9 = (x49<<((x50|x51)!=x52));

    if (t9 != 116752U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x53 = 37280405430LL;
	int32_t x55 = INT32_MIN;
	static uint16_t x56 = 367U;

    t10 = (x53<<((x54|x55)!=x56));

    if (t10 != 74560810860LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x65 = 51195U;
	int32_t x66 = 478204;
	uint16_t x67 = 45U;
	static uint32_t t11 = 1U;

    t11 = (x65<<((x66|x67)!=x68));

    if (t11 != 102390U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x69 = UINT64_MAX;
	int64_t x70 = 16575LL;
	int16_t x71 = -4148;
	int64_t x72 = INT64_MAX;
	uint64_t t12 = 8629976735571LLU;

    t12 = (x69<<((x70|x71)!=x72));

    if (t12 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x73 = 9U;
	uint8_t x74 = UINT8_MAX;
	static int64_t x75 = -112903LL;
	volatile int32_t t13 = 512;

    t13 = (x73<<((x74|x75)!=x76));

    if (t13 != 18) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x81 = UINT16_MAX;
	int8_t x82 = INT8_MAX;
	int8_t x83 = INT8_MIN;
	int16_t x84 = 0;
	static int32_t t14 = -1985310;

    t14 = (x81<<((x82|x83)!=x84));

    if (t14 != 131070) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x85 = 9U;
	volatile uint64_t x86 = 4130864LLU;
	static int64_t x87 = INT64_MAX;
	static volatile int16_t x88 = -1;
	static int32_t t15 = 7217;

    t15 = (x85<<((x86|x87)!=x88));

    if (t15 != 18) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x101 = 215;
	volatile int32_t x102 = INT32_MIN;
	uint64_t x104 = 3250719LLU;
	int32_t t16 = -31485;

    t16 = (x101<<((x102|x103)!=x104));

    if (t16 != 430) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x107 = INT64_MIN;
	static uint16_t x108 = 91U;
	volatile int32_t t17 = -2118667;

    t17 = (x105<<((x106|x107)!=x108));

    if (t17 != 12) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x109 = 2U;
	static int64_t x110 = -1LL;
	uint8_t x111 = 0U;
	int32_t x112 = INT32_MIN;

    t18 = (x109<<((x110|x111)!=x112));

    if (t18 != 4) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x121 = 83U;
	uint32_t x122 = 5961174U;
	static int64_t x123 = INT64_MIN;
	volatile uint32_t x124 = 4579551U;
	volatile uint32_t t19 = 455U;

    t19 = (x121<<((x122|x123)!=x124));

    if (t19 != 166U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x126 = INT8_MAX;
	volatile uint64_t x127 = UINT64_MAX;
	volatile int32_t t20 = -1;

    t20 = (x125<<((x126|x127)!=x128));

    if (t20 != 131070) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x141 = UINT8_MAX;
	uint32_t x142 = UINT32_MAX;
	uint32_t x143 = 1U;
	volatile int32_t t21 = -718484574;

    t21 = (x141<<((x142|x143)!=x144));

    if (t21 != 510) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x146 = INT8_MAX;
	uint32_t x147 = 54740U;
	volatile uint64_t t22 = 1363LLU;

    t22 = (x145<<((x146|x147)!=x148));

    if (t22 != 713732806LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x149 = 0;
	int32_t x150 = -905914;
	volatile int32_t x151 = INT32_MIN;
	int32_t t23 = -42217600;

    t23 = (x149<<((x150|x151)!=x152));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x157 = 16335000LLU;
	uint32_t x158 = UINT32_MAX;
	static int16_t x160 = INT16_MAX;
	volatile uint64_t t24 = 1089183720113666LLU;

    t24 = (x157<<((x158|x159)!=x160));

    if (t24 != 32670000LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x161 = 402;
	static int64_t x162 = INT64_MIN;
	int16_t x163 = INT16_MAX;
	uint16_t x164 = UINT16_MAX;

    t25 = (x161<<((x162|x163)!=x164));

    if (t25 != 804) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x177 = 1;
	int8_t x178 = INT8_MIN;
	int8_t x179 = 7;
	static int8_t x180 = INT8_MIN;
	static volatile int32_t t26 = 0;

    t26 = (x177<<((x178|x179)!=x180));

    if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x181 = 165U;
	static uint32_t x182 = UINT32_MAX;
	static uint32_t x183 = UINT32_MAX;
	static int16_t x184 = INT16_MAX;
	volatile int32_t t27 = -1;

    t27 = (x181<<((x182|x183)!=x184));

    if (t27 != 330) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x189 = 216774990616LL;
	volatile int8_t x190 = 0;
	static int16_t x191 = 12343;
	volatile int64_t t28 = 22116069LL;

    t28 = (x189<<((x190|x191)!=x192));

    if (t28 != 433549981232LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x193 = 3U;
	int64_t x194 = -80713173LL;
	int16_t x195 = -971;
	uint16_t x196 = 12176U;
	volatile int32_t t29 = 6406;

    t29 = (x193<<((x194|x195)!=x196));

    if (t29 != 6) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x198 = 32U;
	static int32_t x199 = INT32_MAX;
	volatile uint32_t t30 = 8782985U;

    t30 = (x197<<((x198|x199)!=x200));

    if (t30 != 24U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x209 = 12380643LLU;
	volatile int64_t x210 = 544761927154257143LL;
	static volatile uint8_t x211 = 34U;
	static uint32_t x212 = UINT32_MAX;

    t31 = (x209<<((x210|x211)!=x212));

    if (t31 != 24761286LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x217 = 1520U;
	int8_t x218 = INT8_MIN;
	uint64_t x220 = 10543LLU;

    t32 = (x217<<((x218|x219)!=x220));

    if (t32 != 3040) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x229 = 459U;
	int16_t x230 = -14679;
	uint64_t x231 = UINT64_MAX;
	volatile uint32_t t33 = 91321U;

    t33 = (x229<<((x230|x231)!=x232));

    if (t33 != 918U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x245 = 114413;
	int32_t x247 = 3510;
	uint32_t x248 = UINT32_MAX;
	int32_t t34 = 3;

    t34 = (x245<<((x246|x247)!=x248));

    if (t34 != 228826) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x253 = 1690U;
	int32_t x254 = -1;
	static uint32_t x255 = UINT32_MAX;
	int32_t x256 = INT32_MIN;
	static int32_t t35 = -465987;

    t35 = (x253<<((x254|x255)!=x256));

    if (t35 != 3380) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x274 = -26;
	int32_t x275 = -1;
	int16_t x276 = -1;

    t36 = (x273<<((x274|x275)!=x276));

    if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x277 = 349;
	int16_t x278 = -444;
	int16_t x279 = 1424;
	static int16_t x280 = -1;
	int32_t t37 = 3;

    t37 = (x277<<((x278|x279)!=x280));

    if (t37 != 698) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x282 = 7U;
	uint16_t x283 = 6U;
	int64_t x284 = INT64_MAX;
	volatile int32_t t38 = 2148;

    t38 = (x281<<((x282|x283)!=x284));

    if (t38 != 28) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x288 = 24;
	static volatile int32_t t39 = -123850335;

    t39 = (x285<<((x286|x287)!=x288));

    if (t39 != 131070) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x293 = 20;
	int16_t x294 = -1;
	int8_t x295 = INT8_MAX;

    t40 = (x293<<((x294|x295)!=x296));

    if (t40 != 20) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x298 = -1LL;
	uint32_t x299 = 1106U;
	int8_t x300 = INT8_MIN;
	volatile uint64_t t41 = 200233442917LLU;

    t41 = (x297<<((x298|x299)!=x300));

    if (t41 != 1175066055121035146LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x304 = 8396046422640LLU;
	volatile int32_t t42 = 6924;

    t42 = (x301<<((x302|x303)!=x304));

    if (t42 != 510) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x305 = 63;
	int32_t x306 = 93;
	int16_t x308 = -1;
	volatile int32_t t43 = 325385;

    t43 = (x305<<((x306|x307)!=x308));

    if (t43 != 126) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x309 = 1U;
	volatile uint32_t x310 = 2U;
	volatile int8_t x311 = 1;
	int64_t x312 = -3636105934LL;
	static volatile uint32_t t44 = 865411U;

    t44 = (x309<<((x310|x311)!=x312));

    if (t44 != 2U) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x317 = 4399109457399142026LLU;
	static uint64_t x320 = UINT64_MAX;
	uint64_t t45 = 0LLU;

    t45 = (x317<<((x318|x319)!=x320));

    if (t45 != 8798218914798284052LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x321 = INT16_MAX;
	uint64_t x322 = UINT64_MAX;
	int16_t x323 = -90;
	int64_t x324 = 3914229LL;

    t46 = (x321<<((x322|x323)!=x324));

    if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x329 = INT16_MAX;
	volatile int16_t x330 = INT16_MIN;
	int64_t x332 = INT64_MIN;
	volatile int32_t t47 = -28;

    t47 = (x329<<((x330|x331)!=x332));

    if (t47 != 65534) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x338 = -1;
	int32_t x339 = 5909;
	uint16_t x340 = UINT16_MAX;
	volatile int64_t t48 = 33549641LL;

    t48 = (x337<<((x338|x339)!=x340));

    if (t48 != 2195958060LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x341 = INT16_MAX;
	int32_t x342 = INT32_MIN;
	int32_t x343 = -65;
	int64_t x344 = 48153594LL;

    t49 = (x341<<((x342|x343)!=x344));

    if (t49 != 65534) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x345 = INT16_MAX;
	uint16_t x346 = 250U;
	volatile int32_t t50 = -65298;

    t50 = (x345<<((x346|x347)!=x348));

    if (t50 != 65534) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x349 = UINT32_MAX;
	uint16_t x350 = 16U;
	int16_t x351 = -1921;
	int32_t x352 = -711709;

    t51 = (x349<<((x350|x351)!=x352));

    if (t51 != 4294967294U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x355 = UINT32_MAX;
	int32_t x356 = INT32_MIN;
	int32_t t52 = 97345051;

    t52 = (x353<<((x354|x355)!=x356));

    if (t52 != 48856358) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x357 = 501943211U;
	int64_t x358 = INT64_MIN;
	volatile int32_t x359 = 57276;
	static volatile int64_t x360 = INT64_MIN;
	volatile uint32_t t53 = 0U;

    t53 = (x357<<((x358|x359)!=x360));

    if (t53 != 1003886422U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x362 = -1LL;
	int32_t x363 = INT32_MIN;
	uint32_t x364 = 206U;
	int32_t t54 = -226272;

    t54 = (x361<<((x362|x363)!=x364));

    if (t54 != 28) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x365 = 348;
	int16_t x366 = -1;
	int32_t x367 = -1;
	static int32_t x368 = 579;
	int32_t t55 = 27;

    t55 = (x365<<((x366|x367)!=x368));

    if (t55 != 696) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x369 = 5428995294160620519LLU;
	volatile int16_t x370 = 3;
	int16_t x371 = INT16_MAX;
	static int32_t x372 = INT32_MIN;
	uint64_t t56 = 344166723915LLU;

    t56 = (x369<<((x370|x371)!=x372));

    if (t56 != 10857990588321241038LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x381 = 986823639LLU;
	int32_t x383 = 405194;
	int64_t x384 = -2446365673326LL;
	static uint64_t t57 = 2057750309280091LLU;

    t57 = (x381<<((x382|x383)!=x384));

    if (t57 != 1973647278LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x393 = 1;
	uint64_t x394 = 425339462LLU;
	volatile int8_t x395 = -2;
	static int32_t t58 = 181993173;

    t58 = (x393<<((x394|x395)!=x396));

    if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x397 = INT16_MAX;
	int64_t x398 = INT64_MIN;
	volatile uint64_t x399 = 26057758598439072LLU;
	int32_t x400 = 5;
	int32_t t59 = 0;

    t59 = (x397<<((x398|x399)!=x400));

    if (t59 != 65534) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x405 = 47194221350LL;
	int64_t x406 = INT64_MAX;
	volatile int32_t x407 = -1;
	int16_t x408 = INT16_MIN;
	volatile int64_t t60 = 51747LL;

    t60 = (x405<<((x406|x407)!=x408));

    if (t60 != 94388442700LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x413 = INT16_MAX;
	static int16_t x414 = -3;
	int32_t x415 = INT32_MIN;
	volatile int32_t x416 = INT32_MIN;

    t61 = (x413<<((x414|x415)!=x416));

    if (t61 != 65534) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x417 = 27U;
	static uint32_t x418 = 11217540U;
	uint32_t x419 = 4U;
	volatile uint8_t x420 = UINT8_MAX;
	static volatile int32_t t62 = -361100;

    t62 = (x417<<((x418|x419)!=x420));

    if (t62 != 54) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x421 = 6U;
	int16_t x422 = INT16_MAX;
	int16_t x424 = 0;
	int32_t t63 = -3;

    t63 = (x421<<((x422|x423)!=x424));

    if (t63 != 12) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x437 = UINT8_MAX;
	uint64_t x438 = UINT64_MAX;
	uint8_t x439 = 23U;
	volatile uint16_t x440 = UINT16_MAX;

    t64 = (x437<<((x438|x439)!=x440));

    if (t64 != 510) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x441 = INT8_MAX;
	int16_t x443 = INT16_MAX;
	static int8_t x444 = INT8_MIN;
	static volatile int32_t t65 = -4043032;

    t65 = (x441<<((x442|x443)!=x444));

    if (t65 != 254) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x445 = UINT16_MAX;
	int32_t x446 = -1;
	int8_t x447 = INT8_MIN;
	uint32_t x448 = 246048U;
	volatile int32_t t66 = 160712078;

    t66 = (x445<<((x446|x447)!=x448));

    if (t66 != 131070) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x455 = INT64_MIN;
	static volatile uint64_t x456 = 1133366354570LLU;
	static int32_t t67 = 247;

    t67 = (x453<<((x454|x455)!=x456));

    if (t67 != 510) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x461 = 25388U;
	uint16_t x462 = 18U;
	int8_t x463 = INT8_MIN;
	int16_t x464 = INT16_MIN;
	volatile uint32_t t68 = 6484954U;

    t68 = (x461<<((x462|x463)!=x464));

    if (t68 != 50776U) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x469 = 102U;
	volatile int8_t x470 = INT8_MAX;
	int32_t t69 = 1;

    t69 = (x469<<((x470|x471)!=x472));

    if (t69 != 204) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x477 = 116333305303LLU;
	int16_t x478 = INT16_MAX;
	int64_t x479 = INT64_MAX;
	uint64_t t70 = 1006182755969583LLU;

    t70 = (x477<<((x478|x479)!=x480));

    if (t70 != 232666610606LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x481 = UINT32_MAX;
	int64_t x482 = INT64_MAX;
	uint16_t x483 = 1U;
	int64_t x484 = INT64_MIN;
	static volatile uint32_t t71 = 47U;

    t71 = (x481<<((x482|x483)!=x484));

    if (t71 != 4294967294U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x485 = INT8_MAX;
	static uint64_t x486 = 7173548221493179LLU;
	uint64_t x487 = 3328703631LLU;
	uint16_t x488 = 896U;
	volatile int32_t t72 = -119544;

    t72 = (x485<<((x486|x487)!=x488));

    if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x493 = 920773173U;
	volatile int16_t x494 = INT16_MIN;
	int8_t x495 = 30;
	uint8_t x496 = UINT8_MAX;
	volatile uint32_t t73 = 350U;

    t73 = (x493<<((x494|x495)!=x496));

    if (t73 != 1841546346U) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x501 = UINT16_MAX;
	volatile int32_t x502 = -99;
	int8_t x503 = INT8_MAX;
	uint32_t x504 = 116195459U;

    t74 = (x501<<((x502|x503)!=x504));

    if (t74 != 131070) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x509 = 18;
	int8_t x510 = -1;
	int32_t x511 = -1;
	uint32_t x512 = UINT32_MAX;
	volatile int32_t t75 = 0;

    t75 = (x509<<((x510|x511)!=x512));

    if (t75 != 18) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x513 = UINT16_MAX;
	volatile int32_t x515 = INT32_MIN;
	static int64_t x516 = INT64_MAX;
	int32_t t76 = -278732;

    t76 = (x513<<((x514|x515)!=x516));

    if (t76 != 131070) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x533 = UINT8_MAX;
	static volatile int32_t x534 = 176947;
	int64_t x535 = INT64_MIN;
	volatile int64_t x536 = 6678776245LL;
	volatile int32_t t77 = -4084;

    t77 = (x533<<((x534|x535)!=x536));

    if (t77 != 510) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x541 = 20U;
	static int8_t x543 = INT8_MAX;
	int32_t x544 = -95059;
	static volatile int32_t t78 = 6809;

    t78 = (x541<<((x542|x543)!=x544));

    if (t78 != 40) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x551 = INT16_MIN;
	volatile uint64_t x552 = 146130LLU;
	volatile int64_t t79 = 9840133962LL;

    t79 = (x549<<((x550|x551)!=x552));

    if (t79 != 1904787868670LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x566 = INT32_MAX;
	int8_t x567 = INT8_MAX;
	int32_t x568 = 287;
	int32_t t80 = -2009476;

    t80 = (x565<<((x566|x567)!=x568));

    if (t80 != 16) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x569 = UINT32_MAX;
	uint32_t x570 = UINT32_MAX;
	int16_t x571 = INT16_MIN;
	static uint32_t t81 = 2U;

    t81 = (x569<<((x570|x571)!=x572));

    if (t81 != 4294967294U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x573 = INT8_MAX;
	int32_t x575 = INT32_MAX;
	int32_t x576 = -1;
	volatile int32_t t82 = -1;

    t82 = (x573<<((x574|x575)!=x576));

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x577 = 198U;
	uint8_t x578 = UINT8_MAX;
	uint32_t x579 = UINT32_MAX;
	static volatile uint64_t x580 = 526743479172025LLU;
	volatile int32_t t83 = -2;

    t83 = (x577<<((x578|x579)!=x580));

    if (t83 != 396) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x581 = UINT16_MAX;
	int8_t x584 = 38;
	int32_t t84 = 75556;

    t84 = (x581<<((x582|x583)!=x584));

    if (t84 != 131070) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x589 = 800212013146936LL;
	uint16_t x590 = 1974U;
	int32_t x591 = INT32_MAX;
	static int64_t t85 = 98392719453LL;

    t85 = (x589<<((x590|x591)!=x592));

    if (t85 != 1600424026293872LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x601 = UINT64_MAX;
	int32_t x602 = -18554;
	int8_t x603 = -1;
	static int8_t x604 = 41;
	uint64_t t86 = 6LLU;

    t86 = (x601<<((x602|x603)!=x604));

    if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x618 = 8;
	uint32_t x619 = 242664U;
	static int8_t x620 = -13;
	volatile int32_t t87 = -7150222;

    t87 = (x617<<((x618|x619)!=x620));

    if (t87 != 92) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x621 = 0U;
	static int32_t x622 = INT32_MIN;
	volatile int32_t t88 = 22;

    t88 = (x621<<((x622|x623)!=x624));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x625 = UINT8_MAX;
	volatile int16_t x627 = 84;
	uint32_t x628 = 27454935U;

    t89 = (x625<<((x626|x627)!=x628));

    if (t89 != 510) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x629 = UINT32_MAX;
	int8_t x630 = 14;

    t90 = (x629<<((x630|x631)!=x632));

    if (t90 != 4294967294U) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint8_t x641 = UINT8_MAX;
	int64_t x642 = -244612LL;
	static volatile int16_t x643 = INT16_MIN;
	int32_t t91 = 5146469;

    t91 = (x641<<((x642|x643)!=x644));

    if (t91 != 510) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x645 = 5;
	int64_t x647 = INT64_MIN;
	static volatile uint16_t x648 = 0U;
	int32_t t92 = -4178;

    t92 = (x645<<((x646|x647)!=x648));

    if (t92 != 10) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x649 = 28537154;
	volatile int32_t x650 = INT32_MAX;
	int16_t x651 = INT16_MIN;

    t93 = (x649<<((x650|x651)!=x652));

    if (t93 != 57074308) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x653 = 0;
	int32_t x654 = INT32_MIN;
	volatile int8_t x655 = 35;
	volatile int8_t x656 = -3;
	volatile int32_t t94 = -18;

    t94 = (x653<<((x654|x655)!=x656));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x657 = INT8_MAX;
	int16_t x658 = 457;
	int32_t x659 = INT32_MIN;
	uint8_t x660 = 2U;

    t95 = (x657<<((x658|x659)!=x660));

    if (t95 != 254) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x665 = 89U;
	int32_t x666 = INT32_MAX;
	static uint64_t x668 = 16229401088617541LLU;
	volatile uint32_t t96 = 9371U;

    t96 = (x665<<((x666|x667)!=x668));

    if (t96 != 178U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x669 = 6057U;
	volatile int8_t x670 = INT8_MIN;
	static int16_t x671 = -1;
	static uint16_t x672 = 0U;
	int32_t t97 = 14154757;

    t97 = (x669<<((x670|x671)!=x672));

    if (t97 != 12114) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x673 = UINT32_MAX;
	uint16_t x674 = 121U;
	static int16_t x675 = -1;
	volatile uint8_t x676 = UINT8_MAX;

    t98 = (x673<<((x674|x675)!=x676));

    if (t98 != 4294967294U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x685 = INT8_MAX;
	static int16_t x686 = -3334;
	static int64_t x687 = -1405LL;
	int8_t x688 = 9;
	volatile int32_t t99 = 5262398;

    t99 = (x685<<((x686|x687)!=x688));

    if (t99 != 254) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x693 = 111U;
	volatile int8_t x694 = INT8_MIN;
	int32_t x696 = -6064565;
	static volatile int32_t t100 = -37;

    t100 = (x693<<((x694|x695)!=x696));

    if (t100 != 222) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x709 = 1U;
	static volatile int16_t x711 = INT16_MIN;
	volatile int8_t x712 = INT8_MAX;
	volatile int32_t t101 = 226950;

    t101 = (x709<<((x710|x711)!=x712));

    if (t101 != 2) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x713 = 10;
	uint8_t x714 = 23U;
	int8_t x716 = -6;
	int32_t t102 = 112048739;

    t102 = (x713<<((x714|x715)!=x716));

    if (t102 != 20) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x717 = 3U;
	int64_t x719 = INT64_MIN;
	int32_t x720 = -1;
	volatile int32_t t103 = -1682659;

    t103 = (x717<<((x718|x719)!=x720));

    if (t103 != 6) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x733 = 110U;
	int16_t x734 = INT16_MIN;
	volatile int8_t x736 = INT8_MIN;
	volatile int32_t t104 = 1;

    t104 = (x733<<((x734|x735)!=x736));

    if (t104 != 220) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x737 = 0;
	int64_t x738 = INT64_MIN;
	uint16_t x740 = 3U;
	volatile int32_t t105 = -64;

    t105 = (x737<<((x738|x739)!=x740));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x749 = 11628;
	static uint16_t x751 = UINT16_MAX;
	int64_t x752 = -1LL;
	static volatile int32_t t106 = 18;

    t106 = (x749<<((x750|x751)!=x752));

    if (t106 != 23256) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x757 = UINT64_MAX;
	int32_t x759 = -1;
	uint32_t x760 = 352362438U;
	volatile uint64_t t107 = 454272886230LLU;

    t107 = (x757<<((x758|x759)!=x760));

    if (t107 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x761 = UINT8_MAX;
	int32_t x762 = INT32_MIN;
	volatile int32_t t108 = 7;

    t108 = (x761<<((x762|x763)!=x764));

    if (t108 != 510) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x777 = 0;
	int8_t x780 = 0;
	int32_t t109 = -807;

    t109 = (x777<<((x778|x779)!=x780));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x785 = 47651583964238148LLU;
	int16_t x786 = INT16_MIN;
	static int16_t x787 = -1;
	int64_t x788 = INT64_MAX;
	uint64_t t110 = 27LLU;

    t110 = (x785<<((x786|x787)!=x788));

    if (t110 != 95303167928476296LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x793 = 3656612;
	int64_t x794 = INT64_MIN;
	int8_t x795 = INT8_MIN;
	uint32_t x796 = UINT32_MAX;
	volatile int32_t t111 = 34;

    t111 = (x793<<((x794|x795)!=x796));

    if (t111 != 7313224) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x809 = UINT8_MAX;
	int16_t x810 = INT16_MAX;
	int16_t x811 = INT16_MIN;
	static int32_t x812 = INT32_MIN;
	volatile int32_t t112 = 6;

    t112 = (x809<<((x810|x811)!=x812));

    if (t112 != 510) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x814 = INT32_MIN;
	volatile int32_t x815 = 474446468;
	int64_t x816 = INT64_MAX;
	int32_t t113 = -49383497;

    t113 = (x813<<((x814|x815)!=x816));

    if (t113 != 131070) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x817 = UINT8_MAX;
	int8_t x818 = INT8_MAX;
	int64_t x819 = INT64_MIN;
	uint32_t x820 = UINT32_MAX;
	volatile int32_t t114 = -75833745;

    t114 = (x817<<((x818|x819)!=x820));

    if (t114 != 510) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x821 = 15U;
	uint64_t x822 = 265902413LLU;
	volatile int64_t x823 = 4831652350LL;
	static volatile int64_t x824 = 29618835757LL;
	static int32_t t115 = -18;

    t115 = (x821<<((x822|x823)!=x824));

    if (t115 != 30) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x825 = 3U;
	int32_t x826 = 262;
	uint32_t x828 = 222233593U;
	volatile int32_t t116 = 1240;

    t116 = (x825<<((x826|x827)!=x828));

    if (t116 != 6) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x833 = UINT32_MAX;
	int32_t x834 = 647;
	uint32_t t117 = 8272052U;

    t117 = (x833<<((x834|x835)!=x836));

    if (t117 != 4294967294U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x837 = UINT64_MAX;
	uint8_t x838 = 1U;
	static uint32_t x840 = UINT32_MAX;
	uint64_t t118 = 12937542756580LLU;

    t118 = (x837<<((x838|x839)!=x840));

    if (t118 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x849 = UINT16_MAX;
	static int8_t x850 = INT8_MAX;
	uint32_t x851 = 353533U;
	int32_t x852 = INT32_MIN;
	static volatile int32_t t119 = 0;

    t119 = (x849<<((x850|x851)!=x852));

    if (t119 != 131070) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint8_t x857 = 2U;
	static int32_t x858 = -98;
	int32_t x859 = INT32_MAX;
	volatile uint8_t x860 = 36U;

    t120 = (x857<<((x858|x859)!=x860));

    if (t120 != 4) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x861 = 33U;
	static int8_t x862 = -1;
	uint64_t x863 = UINT64_MAX;

    t121 = (x861<<((x862|x863)!=x864));

    if (t121 != 66) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x877 = 36U;
	int64_t x878 = INT64_MIN;
	volatile int64_t x879 = -1LL;
	uint8_t x880 = 1U;
	volatile int32_t t122 = 29;

    t122 = (x877<<((x878|x879)!=x880));

    if (t122 != 72) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x897 = 5U;
	static volatile int64_t x898 = INT64_MIN;
	volatile uint64_t x899 = UINT64_MAX;
	int32_t x900 = INT32_MIN;
	int32_t t123 = -4475;

    t123 = (x897<<((x898|x899)!=x900));

    if (t123 != 10) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x907 = INT16_MAX;
	volatile int32_t t124 = 17472;

    t124 = (x905<<((x906|x907)!=x908));

    if (t124 != 254) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x917 = 2439U;
	uint8_t x919 = 3U;
	int32_t t125 = -614038;

    t125 = (x917<<((x918|x919)!=x920));

    if (t125 != 4878) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x937 = 74U;
	int16_t x938 = -1;
	volatile uint32_t x939 = 13963445U;
	uint32_t x940 = UINT32_MAX;

    t126 = (x937<<((x938|x939)!=x940));

    if (t126 != 74) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x941 = 82575LLU;
	static int32_t x942 = INT32_MIN;
	uint32_t x943 = 90U;
	int8_t x944 = -6;
	volatile uint64_t t127 = 121652641136817039LLU;

    t127 = (x941<<((x942|x943)!=x944));

    if (t127 != 165150LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x957 = 5U;
	uint32_t x958 = 351753427U;
	static int8_t x959 = INT8_MIN;
	uint8_t x960 = UINT8_MAX;

    t128 = (x957<<((x958|x959)!=x960));

    if (t128 != 10) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x961 = 17U;
	int32_t x962 = INT32_MIN;

    t129 = (x961<<((x962|x963)!=x964));

    if (t129 != 34U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x965 = 727517237LL;
	volatile uint8_t x966 = 4U;
	int16_t x968 = -96;
	int64_t t130 = -3200608LL;

    t130 = (x965<<((x966|x967)!=x968));

    if (t130 != 1455034474LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x969 = UINT16_MAX;
	int64_t x970 = INT64_MIN;
	uint8_t x971 = 0U;
	int8_t x972 = -1;
	static int32_t t131 = 14;

    t131 = (x969<<((x970|x971)!=x972));

    if (t131 != 131070) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x973 = 155736876;
	int32_t x974 = INT32_MIN;
	uint64_t x975 = 647053LLU;

    t132 = (x973<<((x974|x975)!=x976));

    if (t132 != 311473752) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x977 = 47U;
	int32_t x979 = -5;
	static volatile uint16_t x980 = 170U;
	int32_t t133 = 58;

    t133 = (x977<<((x978|x979)!=x980));

    if (t133 != 94) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x985 = 6402U;
	volatile int64_t x986 = INT64_MAX;
	volatile int16_t x987 = INT16_MIN;
	volatile int8_t x988 = INT8_MIN;
	static volatile uint32_t t134 = 985U;

    t134 = (x985<<((x986|x987)!=x988));

    if (t134 != 12804U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x989 = 27U;
	uint32_t x990 = 4812U;
	uint8_t x991 = UINT8_MAX;
	volatile int64_t x992 = INT64_MAX;
	volatile int32_t t135 = -4599;

    t135 = (x989<<((x990|x991)!=x992));

    if (t135 != 54) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x993 = INT16_MAX;
	int8_t x994 = INT8_MIN;
	volatile uint32_t x995 = 5U;
	int16_t x996 = 390;
	volatile int32_t t136 = -430;

    t136 = (x993<<((x994|x995)!=x996));

    if (t136 != 65534) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x997 = 118;
	static uint32_t x998 = 3226298U;
	int64_t x999 = INT64_MIN;
	int16_t x1000 = INT16_MIN;
	int32_t t137 = 190643;

    t137 = (x997<<((x998|x999)!=x1000));

    if (t137 != 236) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x1001 = 2141776128U;
	volatile uint32_t x1003 = 165608215U;
	static volatile uint32_t x1004 = UINT32_MAX;
	volatile uint32_t t138 = 63739884U;

    t138 = (x1001<<((x1002|x1003)!=x1004));

    if (t138 != 4283552256U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x1009 = 26552884291LLU;
	uint8_t x1010 = UINT8_MAX;
	int32_t x1011 = INT32_MIN;
	static uint8_t x1012 = 1U;
	uint64_t t139 = 206452LLU;

    t139 = (x1009<<((x1010|x1011)!=x1012));

    if (t139 != 53105768582LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x1017 = 0LL;
	static volatile int16_t x1018 = INT16_MIN;
	static volatile int32_t x1019 = INT32_MAX;
	static uint32_t x1020 = 11967U;
	int64_t t140 = 376987537LL;

    t140 = (x1017<<((x1018|x1019)!=x1020));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x1021 = 1446225935267038237LLU;
	int64_t x1022 = 71903425LL;
	static int16_t x1023 = INT16_MAX;
	uint64_t x1024 = 116578852207LLU;

    t141 = (x1021<<((x1022|x1023)!=x1024));

    if (t141 != 2892451870534076474LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x1026 = -811852;
	volatile int16_t x1027 = 8;
	int32_t t142 = -3;

    t142 = (x1025<<((x1026|x1027)!=x1028));

    if (t142 != 254) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x1029 = 98U;
	int8_t x1030 = INT8_MAX;
	uint32_t x1031 = 728419198U;

    t143 = (x1029<<((x1030|x1031)!=x1032));

    if (t143 != 196) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x1037 = 3599U;
	volatile uint8_t x1039 = 1U;
	int32_t t144 = 943208;

    t144 = (x1037<<((x1038|x1039)!=x1040));

    if (t144 != 7198) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x1057 = 1;
	static int8_t x1058 = -1;
	int16_t x1059 = -1;
	volatile uint32_t x1060 = UINT32_MAX;
	int32_t t145 = -165;

    t145 = (x1057<<((x1058|x1059)!=x1060));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x1069 = 0;
	int8_t x1070 = INT8_MIN;
	uint64_t x1071 = 376685242329LLU;
	int64_t x1072 = 540439839635LL;
	static volatile int32_t t146 = 791;

    t146 = (x1069<<((x1070|x1071)!=x1072));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1073 = 1762;
	volatile int64_t x1075 = 6659727LL;
	static int32_t x1076 = -1;
	static volatile int32_t t147 = -3;

    t147 = (x1073<<((x1074|x1075)!=x1076));

    if (t147 != 3524) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x1077 = 1U;
	static int8_t x1078 = -1;
	int16_t x1079 = INT16_MAX;
	volatile int32_t x1080 = 2379221;
	volatile int32_t t148 = -83649;

    t148 = (x1077<<((x1078|x1079)!=x1080));

    if (t148 != 2) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x1094 = 505170037348611875LLU;
	uint64_t x1095 = 98LLU;

    t149 = (x1093<<((x1094|x1095)!=x1096));

    if (t149 != 65534) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1110 = INT64_MIN;
	static int32_t x1111 = INT32_MIN;
	uint32_t x1112 = UINT32_MAX;
	int64_t t150 = 180LL;

    t150 = (x1109<<((x1110|x1111)!=x1112));

    if (t150 != 130397634LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1118 = INT32_MIN;
	int32_t x1119 = INT32_MIN;
	uint8_t x1120 = 3U;
	static int32_t t151 = 2;

    t151 = (x1117<<((x1118|x1119)!=x1120));

    if (t151 != 120) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x1121 = 0U;
	uint32_t x1123 = 12672U;
	int64_t x1124 = -1LL;
	volatile int32_t t152 = 1;

    t152 = (x1121<<((x1122|x1123)!=x1124));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int32_t x1125 = 5;
	uint8_t x1126 = 38U;
	static volatile int8_t x1127 = -31;
	int32_t x1128 = -277139053;
	int32_t t153 = -13;

    t153 = (x1125<<((x1126|x1127)!=x1128));

    if (t153 != 10) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x1133 = 4051LLU;
	uint16_t x1134 = 13696U;
	uint32_t x1136 = 30141130U;
	uint64_t t154 = 13650761341LLU;

    t154 = (x1133<<((x1134|x1135)!=x1136));

    if (t154 != 8102LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1137 = 135U;
	int8_t x1138 = INT8_MAX;
	int32_t x1140 = INT32_MAX;
	volatile uint32_t t155 = 47744719U;

    t155 = (x1137<<((x1138|x1139)!=x1140));

    if (t155 != 270U) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint16_t x1141 = 1996U;
	volatile uint16_t x1143 = 1U;
	uint8_t x1144 = 75U;
	int32_t t156 = -46134420;

    t156 = (x1141<<((x1142|x1143)!=x1144));

    if (t156 != 3992) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x1147 = -1;
	uint32_t x1148 = UINT32_MAX;

    t157 = (x1145<<((x1146|x1147)!=x1148));

    if (t157 != 10659790) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x1154 = UINT64_MAX;
	int8_t x1155 = -6;
	uint8_t x1156 = 0U;
	int32_t t158 = -44;

    t158 = (x1153<<((x1154|x1155)!=x1156));

    if (t158 != 510) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1165 = 7292;
	volatile int16_t x1168 = INT16_MIN;
	volatile int32_t t159 = 32518;

    t159 = (x1165<<((x1166|x1167)!=x1168));

    if (t159 != 14584) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1173 = INT8_MAX;
	uint64_t x1175 = 4595764288415058791LLU;
	int8_t x1176 = INT8_MIN;

    t160 = (x1173<<((x1174|x1175)!=x1176));

    if (t160 != 254) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x1177 = 656645625LLU;
	uint8_t x1178 = UINT8_MAX;
	uint32_t x1179 = 16274U;
	int32_t x1180 = INT32_MIN;
	uint64_t t161 = 337061567837LLU;

    t161 = (x1177<<((x1178|x1179)!=x1180));

    if (t161 != 1313291250LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x1181 = 113U;
	int16_t x1182 = -106;
	volatile int32_t x1183 = 105314;
	int8_t x1184 = 29;
	static volatile int32_t t162 = 3112;

    t162 = (x1181<<((x1182|x1183)!=x1184));

    if (t162 != 226) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x1193 = 114475818275024LLU;
	int8_t x1194 = -1;
	uint16_t x1195 = UINT16_MAX;
	int64_t x1196 = -1LL;
	static uint64_t t163 = 125036297725159520LLU;

    t163 = (x1193<<((x1194|x1195)!=x1196));

    if (t163 != 114475818275024LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1201 = 0U;
	int8_t x1202 = 0;
	int32_t x1203 = INT32_MIN;
	static volatile uint32_t x1204 = 73834U;
	static volatile uint32_t t164 = 249373123U;

    t164 = (x1201<<((x1202|x1203)!=x1204));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1206 = 23U;
	static int64_t x1207 = 51813750001LL;
	volatile int32_t t165 = -4150492;

    t165 = (x1205<<((x1206|x1207)!=x1208));

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1210 = INT64_MIN;
	volatile int32_t t166 = -112;

    t166 = (x1209<<((x1210|x1211)!=x1212));

    if (t166 != 131070) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x1217 = 93U;
	uint32_t x1218 = UINT32_MAX;
	int8_t x1219 = INT8_MIN;
	volatile int32_t t167 = -1;

    t167 = (x1217<<((x1218|x1219)!=x1220));

    if (t167 != 186) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1229 = 25;
	int32_t x1230 = INT32_MAX;
	uint64_t x1231 = UINT64_MAX;
	int32_t t168 = 3508;

    t168 = (x1229<<((x1230|x1231)!=x1232));

    if (t168 != 50) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x1241 = INT16_MAX;
	static uint16_t x1242 = UINT16_MAX;
	int64_t x1243 = -1293LL;
	uint16_t x1244 = 108U;
	int32_t t169 = 767;

    t169 = (x1241<<((x1242|x1243)!=x1244));

    if (t169 != 65534) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1245 = 14445U;
	int8_t x1247 = INT8_MIN;
	static uint8_t x1248 = 4U;

    t170 = (x1245<<((x1246|x1247)!=x1248));

    if (t170 != 28890) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x1249 = INT16_MAX;
	volatile uint8_t x1250 = 0U;
	static uint8_t x1251 = 5U;
	uint32_t x1252 = UINT32_MAX;
	volatile int32_t t171 = 1920;

    t171 = (x1249<<((x1250|x1251)!=x1252));

    if (t171 != 65534) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1261 = 979U;
	uint8_t x1263 = UINT8_MAX;
	int8_t x1264 = -9;
	volatile uint32_t t172 = 534113145U;

    t172 = (x1261<<((x1262|x1263)!=x1264));

    if (t172 != 1958U) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1265 = 0;
	static volatile uint64_t x1267 = 1576106LLU;
	static volatile int64_t x1268 = INT64_MIN;
	static int32_t t173 = 785429238;

    t173 = (x1265<<((x1266|x1267)!=x1268));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1273 = 821093590U;
	int64_t x1274 = -7605089923LL;
	static int32_t x1275 = 2044770;
	int32_t x1276 = 108698;
	uint32_t t174 = 364793U;

    t174 = (x1273<<((x1274|x1275)!=x1276));

    if (t174 != 1642187180U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x1277 = 21177492LLU;
	int64_t x1278 = INT64_MIN;
	int8_t x1280 = INT8_MAX;

    t175 = (x1277<<((x1278|x1279)!=x1280));

    if (t175 != 42354984LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1281 = 14U;
	int16_t x1283 = -31;
	static int32_t x1284 = 63;
	int32_t t176 = 2;

    t176 = (x1281<<((x1282|x1283)!=x1284));

    if (t176 != 28) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1293 = 8;
	static int8_t x1296 = INT8_MIN;
	int32_t t177 = -77;

    t177 = (x1293<<((x1294|x1295)!=x1296));

    if (t177 != 16) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1301 = 3LL;
	int16_t x1302 = 667;
	volatile int16_t x1303 = -13078;
	int64_t t178 = 5234001089729LL;

    t178 = (x1301<<((x1302|x1303)!=x1304));

    if (t178 != 6LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x1306 = INT64_MIN;
	uint16_t x1307 = 1987U;
	static uint64_t t179 = 2863882LLU;

    t179 = (x1305<<((x1306|x1307)!=x1308));

    if (t179 != 8535173610020LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x1310 = -1LL;
	volatile int16_t x1311 = -2;
	static uint8_t x1312 = 34U;
	volatile int32_t t180 = 3;

    t180 = (x1309<<((x1310|x1311)!=x1312));

    if (t180 != 4) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1313 = 7227670419079952666LLU;
	int32_t x1314 = INT32_MAX;
	int8_t x1315 = INT8_MAX;
	uint8_t x1316 = UINT8_MAX;
	static volatile uint64_t t181 = 243489LLU;

    t181 = (x1313<<((x1314|x1315)!=x1316));

    if (t181 != 14455340838159905332LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x1321 = 116U;
	int64_t x1322 = INT64_MAX;
	int64_t x1323 = -797407026423575643LL;
	int8_t x1324 = 0;
	volatile uint32_t t182 = 1140839452U;

    t182 = (x1321<<((x1322|x1323)!=x1324));

    if (t182 != 232U) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x1325 = 29772U;
	volatile uint64_t x1327 = 2616735223LLU;
	uint32_t t183 = 734U;

    t183 = (x1325<<((x1326|x1327)!=x1328));

    if (t183 != 59544U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1329 = UINT8_MAX;
	int8_t x1330 = -1;
	uint8_t x1331 = 7U;
	int32_t t184 = -2987612;

    t184 = (x1329<<((x1330|x1331)!=x1332));

    if (t184 != 510) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1333 = 13U;
	uint32_t x1334 = 164U;
	uint16_t x1335 = UINT16_MAX;
	volatile int32_t t185 = -152586;

    t185 = (x1333<<((x1334|x1335)!=x1336));

    if (t185 != 26) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x1337 = 13915973169LL;
	static uint8_t x1338 = 6U;
	int16_t x1340 = -1;
	int64_t t186 = -187LL;

    t186 = (x1337<<((x1338|x1339)!=x1340));

    if (t186 != 27831946338LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1349 = 29849456LLU;
	int64_t x1350 = 276839722LL;
	int32_t x1351 = -1;
	volatile uint64_t t187 = 422LLU;

    t187 = (x1349<<((x1350|x1351)!=x1352));

    if (t187 != 59698912LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1361 = 104807LLU;
	int64_t x1362 = INT64_MIN;
	static int32_t x1363 = INT32_MAX;
	int32_t x1364 = -3050768;
	volatile uint64_t t188 = 49985561151718248LLU;

    t188 = (x1361<<((x1362|x1363)!=x1364));

    if (t188 != 209614LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1365 = 2192U;
	static uint16_t x1366 = 5U;
	int32_t x1368 = -1;
	uint32_t t189 = 292U;

    t189 = (x1365<<((x1366|x1367)!=x1368));

    if (t189 != 4384U) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1370 = INT32_MIN;
	uint32_t x1371 = 13286872U;
	int8_t x1372 = INT8_MAX;

    t190 = (x1369<<((x1370|x1371)!=x1372));

    if (t190 != 764U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1373 = 2657;
	int16_t x1374 = -1;
	volatile uint8_t x1375 = UINT8_MAX;
	static int32_t t191 = 346506917;

    t191 = (x1373<<((x1374|x1375)!=x1376));

    if (t191 != 5314) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1377 = INT8_MAX;
	static uint16_t x1378 = 10717U;
	uint32_t x1379 = UINT32_MAX;
	uint16_t x1380 = 200U;
	volatile int32_t t192 = 105137061;

    t192 = (x1377<<((x1378|x1379)!=x1380));

    if (t192 != 254) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1381 = 306368LL;
	int64_t x1382 = -1LL;
	int16_t x1383 = 0;
	uint8_t x1384 = 83U;
	volatile int64_t t193 = -538061525843561LL;

    t193 = (x1381<<((x1382|x1383)!=x1384));

    if (t193 != 612736LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x1393 = 26U;
	volatile int64_t x1394 = 14796765LL;
	int64_t x1395 = INT64_MAX;
	int16_t x1396 = 20;
	volatile int32_t t194 = -510601;

    t194 = (x1393<<((x1394|x1395)!=x1396));

    if (t194 != 52) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1402 = -40;
	int16_t x1403 = INT16_MAX;
	int16_t x1404 = INT16_MIN;
	volatile int64_t t195 = -808544LL;

    t195 = (x1401<<((x1402|x1403)!=x1404));

    if (t195 != 32562LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1406 = -1LL;
	uint32_t x1407 = 6U;
	int8_t x1408 = INT8_MAX;

    t196 = (x1405<<((x1406|x1407)!=x1408));

    if (t196 != 238) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1425 = UINT8_MAX;
	volatile int32_t x1426 = INT32_MIN;
	uint64_t x1427 = 4758800836LLU;
	int64_t x1428 = -149LL;
	volatile int32_t t197 = -24012;

    t197 = (x1425<<((x1426|x1427)!=x1428));

    if (t197 != 510) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x1437 = 32U;
	int8_t x1439 = -2;
	int32_t t198 = 267;

    t198 = (x1437<<((x1438|x1439)!=x1440));

    if (t198 != 64) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x1441 = 2U;
	int32_t x1442 = INT32_MIN;
	int8_t x1443 = 19;
	uint8_t x1444 = 2U;
	int32_t t199 = -428246371;

    t199 = (x1441<<((x1442|x1443)!=x1444));

    if (t199 != 4) { NG(); } else { ; }
	
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

