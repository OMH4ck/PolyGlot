
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

static uint16_t x9 = 502U;
int32_t x11 = -1;
volatile uint32_t x43 = 0U;
int64_t x49 = INT64_MAX;
volatile int32_t x52 = INT32_MAX;
int32_t x59 = -1;
static uint16_t x60 = 1341U;
volatile uint64_t x61 = UINT64_MAX;
int8_t x80 = -1;
int8_t x105 = -2;
int32_t x106 = -1;
static uint32_t x121 = 4U;
volatile int8_t x124 = 0;
volatile int8_t x129 = INT8_MAX;
volatile int32_t t13 = -5839779;
int32_t x138 = -135;
volatile uint64_t x147 = 299LLU;
volatile int8_t x157 = -1;
static volatile int32_t x158 = INT32_MAX;
static volatile int64_t x159 = 591LL;
int64_t x163 = 2143095LL;
int64_t t18 = 11313612LL;
int8_t x174 = INT8_MIN;
int8_t x209 = INT8_MIN;
volatile int32_t t23 = 1263710;
uint64_t x219 = UINT64_MAX;
volatile uint32_t x235 = 1U;
volatile uint64_t t28 = 14185327567368LLU;
uint32_t x249 = 894U;
int8_t x264 = INT8_MAX;
int32_t t30 = -184991;
int8_t x268 = -7;
uint64_t x270 = 73054929LLU;
uint64_t x271 = 96413195622LLU;
int16_t x279 = 63;
uint64_t x291 = 8199201225273LLU;
int8_t x292 = INT8_MIN;
uint64_t x303 = 8LLU;
uint64_t t36 = 37LLU;
int64_t x306 = 233932645496461880LL;
static uint32_t x310 = 15468U;
int64_t x315 = -823578LL;
int64_t x322 = -1LL;
int32_t x326 = INT32_MIN;
static int16_t x327 = INT16_MIN;
uint64_t t43 = 28LLU;
static volatile int8_t x359 = INT8_MIN;
uint8_t x363 = UINT8_MAX;
volatile int32_t x364 = -1;
static int32_t t47 = 116;
uint32_t x370 = 2111U;
volatile int16_t x373 = INT16_MIN;
volatile uint8_t x375 = UINT8_MAX;
uint64_t t49 = 1194839625076470LLU;
volatile int32_t x383 = -205;
volatile int8_t x393 = -1;
int8_t x397 = INT8_MAX;
uint16_t x401 = UINT16_MAX;
uint16_t x403 = UINT16_MAX;
volatile int16_t x409 = 2008;
static volatile uint64_t t56 = 7354570896172288LLU;
static int8_t x442 = INT8_MIN;
uint8_t x444 = 1U;
volatile int32_t t57 = 269669;
volatile uint8_t x449 = UINT8_MAX;
static int64_t x451 = -1LL;
static volatile int8_t x452 = INT8_MAX;
static uint32_t x460 = 2685U;
uint32_t t59 = 27402U;
uint64_t x485 = 8332580071251370160LLU;
int32_t x486 = 133000580;
volatile uint64_t t62 = 22LLU;
int32_t x493 = -1;
uint32_t x495 = UINT32_MAX;
int8_t x498 = -1;
uint8_t x504 = UINT8_MAX;
uint32_t t65 = 794353U;
uint8_t x508 = 13U;
uint8_t x518 = 121U;
volatile uint64_t t68 = 40213LLU;
int16_t x529 = INT16_MIN;
uint64_t x541 = 4358654536LLU;
int32_t x544 = 0;
int64_t x546 = INT64_MIN;
int64_t x550 = INT64_MIN;
uint64_t x552 = 92562774LLU;
int64_t x553 = -6603515LL;
volatile uint64_t t74 = 329945LLU;
uint16_t x558 = 1565U;
static uint32_t x567 = UINT32_MAX;
int8_t x574 = 1;
uint64_t t78 = 14135LLU;
int8_t x579 = -38;
uint64_t x580 = 8777503336008250468LLU;
volatile int8_t x582 = INT8_MIN;
uint64_t x584 = 1758LLU;
volatile uint8_t x585 = 63U;
static volatile uint64_t t81 = 11432838571517LLU;
int8_t x589 = INT8_MIN;
static uint32_t x594 = UINT32_MAX;
volatile int8_t x598 = INT8_MAX;
static volatile uint64_t t84 = 2712821429835471LLU;
static int16_t x606 = -2565;
int32_t x608 = -1;
uint64_t x618 = 44LLU;
int8_t x640 = INT8_MIN;
static uint64_t x660 = UINT64_MAX;
volatile uint64_t t94 = 112708229857LLU;
volatile int64_t x672 = 25677LL;
volatile uint32_t t96 = 873738561U;
uint64_t x688 = 154156LLU;
static int8_t x689 = INT8_MIN;
int64_t t98 = -956LL;
int16_t x697 = INT16_MIN;
static uint32_t x701 = 1U;
uint32_t x704 = 910U;
volatile uint32_t t100 = 70431U;
volatile uint8_t x705 = 0U;
uint8_t x708 = 1U;
int16_t x713 = -232;
int8_t x732 = INT8_MIN;
int32_t x737 = INT32_MIN;
int8_t x738 = -7;
int16_t x741 = 2;
static int8_t x743 = 2;
uint32_t t106 = 1U;
uint16_t x749 = 51U;
static int32_t x755 = 54;
int32_t x770 = INT32_MIN;
int8_t x774 = 1;
volatile int16_t x782 = -1;
volatile uint64_t t114 = 34007206905077LLU;
int16_t x789 = INT16_MAX;
int8_t x790 = 1;
volatile uint16_t x796 = UINT16_MAX;
volatile int32_t x797 = 1;
static int64_t x800 = 368924947117909440LL;
static int8_t x802 = -58;
static uint8_t x804 = 17U;
int8_t x841 = INT8_MIN;
uint32_t x843 = 412U;
volatile int32_t x844 = -116;
int32_t x859 = INT32_MIN;
int8_t x860 = INT8_MIN;
int16_t x873 = 1859;
int8_t x874 = INT8_MIN;
volatile uint64_t x881 = 6406283864LLU;
int64_t x882 = 139897116964929LL;
int32_t x885 = INT32_MIN;
static volatile int64_t t128 = -319692LL;
int32_t x916 = INT32_MIN;
volatile uint64_t t131 = 2346983062263LLU;
uint64_t t134 = 73LLU;
static volatile int32_t t137 = -1;
uint64_t x970 = 74987151984849329LLU;
static uint64_t t138 = 5409066151LLU;
uint64_t x1004 = 3892368012LLU;
static uint32_t x1021 = 59U;
int16_t x1022 = INT16_MIN;
int16_t x1033 = INT16_MIN;
int8_t x1035 = 4;
static uint8_t x1038 = 11U;
int8_t x1039 = -1;
static uint16_t x1049 = UINT16_MAX;
uint64_t x1051 = UINT64_MAX;
int16_t x1057 = 1;
static uint64_t x1059 = 3172989352768193LLU;
static uint16_t x1097 = 6U;
volatile int64_t t152 = 54561703372LL;
uint8_t x1109 = 3U;
uint32_t t153 = 16172305U;
int8_t x1118 = -1;
uint64_t x1122 = 39596540057569775LLU;
static int8_t x1123 = INT8_MAX;
static int32_t x1124 = -297;
volatile int64_t t157 = -39686601LL;
int16_t x1157 = 577;
volatile int32_t t159 = -40;
uint8_t x1164 = 3U;
static uint8_t x1167 = 3U;
static int32_t x1173 = -1;
static volatile uint16_t x1174 = UINT16_MAX;
uint32_t t165 = 1U;
uint32_t x1196 = 131618952U;
volatile uint32_t t167 = 85995933U;
static uint16_t x1213 = UINT16_MAX;
uint32_t x1215 = UINT32_MAX;
static volatile int64_t x1218 = 668LL;
static volatile int8_t x1234 = -6;
int8_t x1235 = INT8_MIN;
volatile uint16_t x1236 = 1830U;
int16_t x1283 = -6;
uint8_t x1284 = 38U;
uint32_t x1293 = 151055858U;
uint64_t t178 = 7851742749048410LLU;
uint32_t x1313 = 0U;
static uint64_t x1317 = UINT64_MAX;
volatile uint16_t x1320 = UINT16_MAX;
uint16_t x1337 = UINT16_MAX;
uint8_t x1350 = 3U;
int8_t x1355 = 61;
int64_t x1385 = -3LL;
int64_t t189 = 4684LL;
volatile int32_t x1406 = INT32_MAX;
volatile int64_t x1417 = INT64_MIN;
int16_t x1418 = 0;
uint64_t x1445 = 193LLU;
uint8_t x1453 = 1U;
int32_t x1473 = INT32_MAX;
int8_t x1476 = -1;
int64_t x1480 = -289981957306637LL;
uint64_t t199 = 3389634060401988LLU;


void f0(void) {
    	int16_t x10 = -1;
	volatile uint64_t x12 = 41431906903LLU;
	volatile uint64_t t0 = 18909105873689LLU;

    t0 = (x9*((x10-x11)*x12));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x13 = UINT64_MAX;
	volatile int8_t x14 = INT8_MAX;
	uint8_t x15 = 6U;
	uint8_t x16 = 65U;
	static volatile uint64_t t1 = 131697126606957LLU;

    t1 = (x13*((x14-x15)*x16));

    if (t1 != 18446744073709543751LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x17 = UINT64_MAX;
	uint16_t x18 = UINT16_MAX;
	static uint16_t x19 = UINT16_MAX;
	int16_t x20 = 42;
	uint64_t t2 = 542553LLU;

    t2 = (x17*((x18-x19)*x20));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x21 = INT16_MIN;
	volatile uint64_t x22 = UINT64_MAX;
	uint8_t x23 = UINT8_MAX;
	static volatile int64_t x24 = INT64_MIN;
	uint64_t t3 = 2021682228LLU;

    t3 = (x21*((x22-x23)*x24));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x37 = -27;
	int16_t x38 = INT16_MIN;
	uint16_t x39 = 200U;
	static volatile int32_t x40 = -1;
	static volatile int32_t t4 = -206;

    t4 = (x37*((x38-x39)*x40));

    if (t4 != -890136) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x41 = 6710539;
	int8_t x42 = -1;
	uint16_t x44 = 0U;
	volatile uint32_t t5 = 0U;

    t5 = (x41*((x42-x43)*x44));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x50 = 583LLU;
	uint8_t x51 = 10U;
	volatile uint64_t t6 = 4137626320662077LLU;

    t6 = (x49*((x50-x51)*x52));

    if (t6 != 9223370806346646077LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x57 = 716103LL;
	int8_t x58 = INT8_MAX;
	int64_t t7 = -51LL;

    t7 = (x57*((x58-x59)*x60));

    if (t7 != 122917647744LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x62 = 3U;
	int32_t x63 = 7;
	static uint32_t x64 = 593307887U;
	uint64_t t8 = 35331172235829578LLU;

    t8 = (x61*((x62-x63)*x64));

    if (t8 != 18446744071787815868LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MIN;
	static int16_t x79 = INT16_MAX;
	int32_t t9 = 33;

    t9 = (x77*((x78-x79)*x80));

    if (t9 != -4210560) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x101 = -1LL;
	int8_t x102 = INT8_MIN;
	static int32_t x103 = -1;
	int8_t x104 = INT8_MIN;
	volatile int64_t t10 = -170LL;

    t10 = (x101*((x102-x103)*x104));

    if (t10 != -16256LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x107 = INT16_MIN;
	volatile uint32_t x108 = 0U;
	volatile uint32_t t11 = 34U;

    t11 = (x105*((x106-x107)*x108));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x122 = UINT32_MAX;
	int32_t x123 = INT32_MAX;
	uint32_t t12 = 2727U;

    t12 = (x121*((x122-x123)*x124));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x130 = 1413U;
	volatile int8_t x131 = 12;
	uint16_t x132 = 2928U;

    t13 = (x129*((x130-x131)*x132));

    if (t13 != 520970256) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x133 = 1475788U;
	int64_t x134 = INT64_MIN;
	uint64_t x135 = 738400342LLU;
	int32_t x136 = INT32_MIN;
	static volatile uint64_t t14 = 126LLU;

    t14 = (x133*((x134-x135)*x136));

    if (t14 != 7004186229130395648LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x137 = UINT16_MAX;
	volatile int16_t x139 = -7;
	int8_t x140 = INT8_MAX;
	static volatile int32_t t15 = -16378777;

    t15 = (x137*((x138-x139)*x140));

    if (t15 != -1065336960) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x145 = 0;
	int64_t x146 = INT64_MAX;
	volatile int16_t x148 = -24;
	static volatile uint64_t t16 = 130056LLU;

    t16 = (x145*((x146-x147)*x148));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x160 = 1U;
	static volatile int64_t t17 = -313171LL;

    t17 = (x157*((x158-x159)*x160));

    if (t17 != -2147483056LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x161 = INT32_MIN;
	int16_t x162 = -1;
	static int16_t x164 = -131;

    t18 = (x161*((x162-x163)*x164));

    if (t18 != -602896533708341248LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x173 = 0U;
	int16_t x175 = 11;
	uint16_t x176 = 9322U;
	volatile uint32_t t19 = 227U;

    t19 = (x173*((x174-x175)*x176));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x181 = 89414095882962843LLU;
	volatile uint64_t x182 = 2340LLU;
	uint8_t x183 = 4U;
	int8_t x184 = -3;
	volatile uint64_t t20 = 408LLU;

    t20 = (x181*((x182-x183)*x184));

    if (t20 != 575314558321151200LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x185 = 1U;
	int64_t x186 = 3744097LL;
	int8_t x187 = 1;
	uint8_t x188 = UINT8_MAX;
	volatile int64_t t21 = 30085LL;

    t21 = (x185*((x186-x187)*x188));

    if (t21 != 954744480LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x201 = INT16_MIN;
	volatile int32_t x202 = INT32_MIN;
	uint64_t x203 = UINT64_MAX;
	int16_t x204 = INT16_MIN;
	volatile uint64_t t22 = 2686416182795322LLU;

    t22 = (x201*((x202-x203)*x204));

    if (t22 != 16140901065569599488LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x210 = 0U;
	uint8_t x211 = 2U;
	int16_t x212 = -3740;

    t23 = (x209*((x210-x211)*x212));

    if (t23 != -957440) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x213 = UINT8_MAX;
	int16_t x214 = 207;
	static int8_t x215 = 3;
	uint64_t x216 = UINT64_MAX;
	uint64_t t24 = 28642503106697LLU;

    t24 = (x213*((x214-x215)*x216));

    if (t24 != 18446744073709499596LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x217 = 178762U;
	static int16_t x218 = 26;
	uint8_t x220 = 35U;
	volatile uint64_t t25 = 41141202069146LLU;

    t25 = (x217*((x218-x219)*x220));

    if (t25 != 168930090LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x221 = UINT8_MAX;
	int32_t x222 = -31;
	uint64_t x223 = UINT64_MAX;
	static int32_t x224 = 223663;
	volatile uint64_t t26 = 7371129904LLU;

    t26 = (x221*((x222-x223)*x224));

    if (t26 != 18446744071998529666LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x225 = INT16_MIN;
	static uint32_t x226 = 8399829U;
	int32_t x227 = INT32_MAX;
	static int16_t x228 = INT16_MIN;
	static volatile uint32_t t27 = 745363U;

    t27 = (x225*((x226-x227)*x228));

    if (t27 != 2147483648U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x233 = INT16_MIN;
	static uint64_t x234 = 3494494LLU;
	static volatile int64_t x236 = INT64_MIN;

    t28 = (x233*((x234-x235)*x236));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x250 = -87518;
	volatile int64_t x251 = -27291LL;
	static int64_t x252 = -9939LL;
	static int64_t t29 = 2040LL;

    t29 = (x249*((x250-x251)*x252));

    if (t29 != 535144960782LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x261 = -1;
	int16_t x262 = INT16_MIN;
	static int8_t x263 = INT8_MIN;

    t30 = (x261*((x262-x263)*x264));

    if (t30 != 4145280) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x265 = UINT32_MAX;
	int16_t x266 = INT16_MAX;
	uint16_t x267 = UINT16_MAX;
	volatile uint32_t t31 = 67U;

    t31 = (x265*((x266-x267)*x268));

    if (t31 != 4294737920U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x269 = -1LL;
	static int32_t x272 = 0;
	uint64_t t32 = 9377905935LLU;

    t32 = (x269*((x270-x271)*x272));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x277 = 73U;
	static volatile int16_t x278 = INT16_MIN;
	int16_t x280 = 607;
	int32_t t33 = 16072;

    t33 = (x277*((x278-x279)*x280));

    if (t33 != -1454774441) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x289 = 31720U;
	int32_t x290 = -3319;
	static volatile uint64_t t34 = 12352136574LLU;

    t34 = (x289*((x290-x291)*x292));

    if (t34 != 14843324786570543104LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x293 = INT32_MAX;
	volatile uint32_t x294 = 485870U;
	static uint64_t x295 = 748653302046734LLU;
	static uint32_t x296 = 23262U;
	volatile uint64_t t35 = 76LLU;

    t35 = (x293*((x294-x295)*x296));

    if (t35 != 13466123295562379200LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x301 = INT8_MAX;
	volatile int16_t x302 = 49;
	int32_t x304 = INT32_MAX;

    t36 = (x301*((x302-x303)*x304));

    if (t36 != 11181947349929LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x305 = 25U;
	static uint64_t x307 = 971979481531LLU;
	static volatile int16_t x308 = 506;
	volatile uint64_t t37 = 483234LLU;

    t37 = (x305*((x306-x307)*x308));

    if (t37 != 7756618196273156290LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x309 = UINT8_MAX;
	int8_t x311 = INT8_MIN;
	static volatile int8_t x312 = 3;
	uint32_t t38 = 392507473U;

    t38 = (x309*((x310-x311)*x312));

    if (t38 != 11930940U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x313 = -2;
	uint32_t x314 = 745107134U;
	uint16_t x316 = 1492U;
	int64_t t39 = -28813LL;

    t39 = (x313*((x314-x315)*x316));

    if (t39 != -2225857244608LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x321 = INT16_MIN;
	static volatile int32_t x323 = -1;
	uint32_t x324 = 2190U;
	volatile int64_t t40 = 45519672951264LL;

    t40 = (x321*((x322-x323)*x324));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x325 = UINT16_MAX;
	int8_t x328 = 0;
	volatile int32_t t41 = 25232055;

    t41 = (x325*((x326-x327)*x328));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x329 = -696196;
	volatile int16_t x330 = INT16_MAX;
	volatile int16_t x331 = INT16_MIN;
	uint64_t x332 = UINT64_MAX;
	volatile uint64_t t42 = 3637583487LLU;

    t42 = (x329*((x330-x331)*x332));

    if (t42 != 45625204860LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x333 = -4;
	volatile uint64_t x334 = UINT64_MAX;
	int16_t x335 = -1;
	int8_t x336 = 2;

    t43 = (x333*((x334-x335)*x336));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x337 = -32;
	static uint32_t x338 = 55U;
	uint32_t x339 = 829325989U;
	volatile int16_t x340 = INT16_MAX;
	uint32_t t44 = 30855U;

    t44 = (x337*((x338-x339)*x340));

    if (t44 != 4178555456U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x353 = INT8_MIN;
	int64_t x354 = 12415918439LL;
	uint16_t x355 = UINT16_MAX;
	int16_t x356 = INT16_MAX;
	volatile int64_t t45 = -573649255544504LL;

    t45 = (x353*((x354-x355)*x356));

    if (t45 != -52074272269487104LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x357 = UINT8_MAX;
	volatile int8_t x358 = 0;
	static int64_t x360 = -108459736163812LL;
	int64_t t46 = 1033225003666LL;

    t46 = (x357*((x358-x359)*x360));

    if (t46 != -3540125788386823680LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MIN;

    t47 = (x361*((x362-x363)*x364));

    if (t47 != -4226944) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x369 = UINT8_MAX;
	int8_t x371 = INT8_MIN;
	static volatile uint16_t x372 = 2769U;
	volatile uint32_t t48 = 123789634U;

    t48 = (x369*((x370-x371)*x372));

    if (t48 != 1580946705U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x374 = INT64_MAX;
	uint64_t x376 = UINT64_MAX;

    t49 = (x373*((x374-x375)*x376));

    if (t49 != 18446744073701163008LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x381 = INT8_MIN;
	int16_t x382 = -1980;
	uint8_t x384 = UINT8_MAX;
	static int32_t t50 = 51016;

    t50 = (x381*((x382-x383)*x384));

    if (t50 != 57936000) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x394 = 1;
	static int64_t x395 = -1LL;
	int16_t x396 = INT16_MIN;
	static volatile int64_t t51 = -29666LL;

    t51 = (x393*((x394-x395)*x396));

    if (t51 != 65536LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x398 = UINT32_MAX;
	int32_t x399 = INT32_MIN;
	int32_t x400 = -274;
	uint32_t t52 = 2954U;

    t52 = (x397*((x398-x399)*x400));

    if (t52 != 34798U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x402 = 27U;
	uint32_t x404 = UINT32_MAX;
	static uint32_t t53 = 4465686U;

    t53 = (x401*((x402-x403)*x404));

    if (t53 != 4293066780U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x410 = INT16_MIN;
	uint32_t x411 = 12933U;
	uint16_t x412 = UINT16_MAX;
	volatile uint32_t t54 = 1U;

    t54 = (x409*((x410-x411)*x412));

    if (t54 != 3258991416U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x429 = 3336U;
	int8_t x430 = INT8_MIN;
	int16_t x431 = -1;
	int8_t x432 = 1;
	static volatile uint32_t t55 = 184U;

    t55 = (x429*((x430-x431)*x432));

    if (t55 != 4294543624U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x433 = UINT32_MAX;
	uint32_t x434 = 23543674U;
	int64_t x435 = -8551747472LL;
	uint64_t x436 = 67LLU;

    t56 = (x433*((x434-x435)*x436));

    if (t56 != 14232904347225329762LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x441 = -1;
	static uint16_t x443 = 18682U;

    t57 = (x441*((x442-x443)*x444));

    if (t57 != 18810) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x450 = -1;
	int64_t t58 = 2382242LL;

    t58 = (x449*((x450-x451)*x452));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x457 = INT32_MAX;
	int16_t x458 = -1;
	int8_t x459 = -1;

    t59 = (x457*((x458-x459)*x460));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x465 = -1LL;
	uint8_t x466 = 6U;
	static int8_t x467 = INT8_MIN;
	int8_t x468 = INT8_MAX;
	int64_t t60 = 6LL;

    t60 = (x465*((x466-x467)*x468));

    if (t60 != -17018LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x481 = -1;
	static uint32_t x482 = 424277U;
	int8_t x483 = INT8_MAX;
	uint32_t x484 = UINT32_MAX;
	static uint32_t t61 = 1U;

    t61 = (x481*((x482-x483)*x484));

    if (t61 != 424150U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x487 = 8374883U;
	int32_t x488 = 41705;

    t62 = (x485*((x486-x487)*x488));

    if (t62 != 10264877050138293808LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x494 = -1;
	int8_t x496 = INT8_MIN;
	volatile uint32_t t63 = 857061974U;

    t63 = (x493*((x494-x495)*x496));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x497 = 23U;
	uint64_t x499 = UINT64_MAX;
	int8_t x500 = 27;
	volatile uint64_t t64 = 44088661282222709LLU;

    t64 = (x497*((x498-x499)*x500));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x501 = 252596U;
	static int16_t x502 = -1;
	volatile uint16_t x503 = UINT16_MAX;

    t65 = (x501*((x502-x503)*x504));

    if (t65 != 649330688U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x505 = INT8_MAX;
	int16_t x506 = INT16_MIN;
	int32_t x507 = -23877;
	static int32_t t66 = 140156717;

    t66 = (x505*((x506-x507)*x508));

    if (t66 != -14679041) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x513 = 13736082U;
	int32_t x514 = 13992;
	int16_t x515 = INT16_MIN;
	int16_t x516 = INT16_MAX;
	volatile uint32_t t67 = 1154775912U;

    t67 = (x513*((x514-x515)*x516));

    if (t67 != 1776555056U) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x517 = 3;
	int16_t x519 = 53;
	uint64_t x520 = 118571285467837LLU;

    t68 = (x517*((x518-x519)*x520));

    if (t68 != 24188542235438748LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x521 = INT8_MIN;
	static int32_t x522 = -1;
	static uint64_t x523 = 733378371149770974LLU;
	int8_t x524 = INT8_MAX;
	uint64_t t69 = 1886054214959LLU;

    t69 = (x521*((x522-x523)*x524));

    if (t69 != 5202129794306625664LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x530 = 0U;
	int64_t x531 = -1LL;
	int8_t x532 = INT8_MAX;
	int64_t t70 = -920245341581LL;

    t70 = (x529*((x530-x531)*x532));

    if (t70 != -4161536LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x542 = 884682U;
	int8_t x543 = INT8_MAX;
	volatile uint64_t t71 = 137747716606LLU;

    t71 = (x541*((x542-x543)*x544));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x545 = UINT8_MAX;
	int64_t x547 = INT64_MIN;
	uint8_t x548 = UINT8_MAX;
	volatile int64_t t72 = 127359041LL;

    t72 = (x545*((x546-x547)*x548));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x549 = INT16_MAX;
	int32_t x551 = INT32_MIN;
	volatile uint64_t t73 = 167820768229477LLU;

    t73 = (x549*((x550-x551)*x552));

    if (t73 != 1626728917878439936LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x554 = INT16_MIN;
	uint64_t x555 = 9219047LLU;
	int16_t x556 = 172;

    t74 = (x553*((x554-x555)*x556));

    if (t74 != 10508253850312700LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x557 = -1LL;
	uint64_t x559 = 2LLU;
	int8_t x560 = INT8_MIN;
	uint64_t t75 = 764LLU;

    t75 = (x557*((x558-x559)*x560));

    if (t75 != 200064LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x565 = -1LL;
	uint16_t x566 = UINT16_MAX;
	volatile uint64_t x568 = 8119716750820138LLU;
	uint64_t t76 = 58239314LLU;

    t76 = (x565*((x566-x567)*x568));

    if (t76 != 2821821155828432896LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x569 = INT64_MIN;
	int16_t x570 = INT16_MIN;
	static uint64_t x571 = 13506875873967LLU;
	volatile int32_t x572 = INT32_MAX;
	volatile uint64_t t77 = 68582115LLU;

    t77 = (x569*((x570-x571)*x572));

    if (t77 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x573 = UINT32_MAX;
	uint64_t x575 = 33069810LLU;
	int64_t x576 = 1LL;

    t78 = (x573*((x574-x575)*x576));

    if (t78 != 18304710325602654961LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x577 = INT8_MIN;
	static uint64_t x578 = 67122214317750193LLU;
	volatile uint64_t t79 = 38590975851611583LLU;

    t79 = (x577*((x578-x579)*x580));

    if (t79 != 9890037246241931776LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x581 = INT64_MAX;
	int64_t x583 = 30730253504653LL;
	volatile uint64_t t80 = 801201854617LLU;

    t80 = (x581*((x582-x583)*x584));

    if (t80 != 54023785661404998LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x586 = -1;
	uint64_t x587 = 447799291974960LLU;
	uint32_t x588 = 3017254U;

    t81 = (x585*((x586-x587)*x588));

    if (t81 != 10898990926585150918LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x590 = UINT8_MAX;
	volatile int32_t x591 = -1;
	int16_t x592 = -9;
	int32_t t82 = 379;

    t82 = (x589*((x590-x591)*x592));

    if (t82 != 294912) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x593 = -10;
	int16_t x595 = 16278;
	int16_t x596 = 0;
	uint32_t t83 = 849949033U;

    t83 = (x593*((x594-x595)*x596));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x597 = -1;
	int32_t x599 = 3800;
	uint64_t x600 = 293346027LLU;

    t84 = (x597*((x598-x599)*x600));

    if (t84 != 1077459957171LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x601 = 1048U;
	volatile int8_t x602 = 6;
	int8_t x603 = INT8_MIN;
	uint32_t x604 = 788952U;
	volatile uint32_t t85 = 543909U;

    t85 = (x601*((x602-x603)*x604));

    if (t85 != 3419924864U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x605 = -1LL;
	int8_t x607 = 3;
	volatile int64_t t86 = 224933LL;

    t86 = (x605*((x606-x607)*x608));

    if (t86 != -2568LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x617 = 94U;
	uint64_t x619 = 5LLU;
	int64_t x620 = -1LL;
	volatile uint64_t t87 = 2153330678316044694LLU;

    t87 = (x617*((x618-x619)*x620));

    if (t87 != 18446744073709547950LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x625 = 7120979704252301LLU;
	static uint32_t x626 = UINT32_MAX;
	int8_t x627 = INT8_MIN;
	int64_t x628 = -1LL;
	static uint64_t t88 = 7815568LLU;

    t88 = (x625*((x626-x627)*x628));

    if (t88 != 17542379651269509389LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x629 = 28;
	static int16_t x630 = INT16_MAX;
	int64_t x631 = -1LL;
	volatile int32_t x632 = 1;
	volatile int64_t t89 = 1975658389822LL;

    t89 = (x629*((x630-x631)*x632));

    if (t89 != 917504LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x637 = INT8_MIN;
	static int16_t x638 = -1;
	int8_t x639 = -1;
	int32_t t90 = -5368;

    t90 = (x637*((x638-x639)*x640));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x649 = -1;
	int16_t x650 = -1;
	int16_t x651 = -1;
	volatile int8_t x652 = INT8_MIN;
	volatile int32_t t91 = -3;

    t91 = (x649*((x650-x651)*x652));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x657 = 29U;
	int8_t x658 = INT8_MIN;
	int32_t x659 = INT32_MIN;
	uint64_t t92 = 850127LLU;

    t92 = (x657*((x658-x659)*x660));

    if (t92 != 18446744011432529536LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x661 = UINT16_MAX;
	volatile int32_t x662 = -1;
	int64_t x663 = 826202883752LL;
	int8_t x664 = INT8_MAX;
	volatile int64_t t93 = 20239387442LL;

    t93 = (x661*((x662-x663)*x664));

    if (t93 != -6876441160317612585LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x665 = -1;
	volatile uint64_t x666 = UINT64_MAX;
	volatile int16_t x667 = INT16_MIN;
	static volatile uint32_t x668 = 269U;

    t94 = (x665*((x666-x667)*x668));

    if (t94 != 18446744073700737293LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x669 = 3731435855LLU;
	int8_t x670 = INT8_MIN;
	int16_t x671 = -1;
	uint64_t t95 = 891540830638LLU;

    t95 = (x669*((x670-x671)*x672));

    if (t95 != 18434575939746549571LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x677 = 31U;
	int8_t x678 = 1;
	int16_t x679 = INT16_MIN;
	uint32_t x680 = UINT32_MAX;

    t96 = (x677*((x678-x679)*x680));

    if (t96 != 4293951457U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x685 = 956387383161LLU;
	int64_t x686 = -1LL;
	int8_t x687 = INT8_MAX;
	uint64_t t97 = 4269973203LLU;

    t97 = (x685*((x686-x687)*x688));

    if (t97 != 18022082907282512384LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x690 = -1LL;
	int32_t x691 = -9;
	uint8_t x692 = UINT8_MAX;

    t98 = (x689*((x690-x691)*x692));

    if (t98 != -261120LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x698 = -1;
	int32_t x699 = -1;
	int8_t x700 = -1;
	int32_t t99 = 209546;

    t99 = (x697*((x698-x699)*x700));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x702 = INT16_MIN;
	int16_t x703 = INT16_MIN;

    t100 = (x701*((x702-x703)*x704));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x706 = UINT32_MAX;
	static int8_t x707 = INT8_MIN;
	volatile uint32_t t101 = 20231U;

    t101 = (x705*((x706-x707)*x708));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x714 = UINT32_MAX;
	static uint32_t x715 = 220880147U;
	uint32_t x716 = UINT32_MAX;
	volatile uint32_t t102 = 1438869U;

    t102 = (x713*((x714-x715)*x716));

    if (t102 != 295413216U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x725 = 1U;
	volatile uint32_t x726 = 130488U;
	static int32_t x727 = -1;
	int32_t x728 = -1;
	volatile uint32_t t103 = 248243888U;

    t103 = (x725*((x726-x727)*x728));

    if (t103 != 4294836807U) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x729 = INT16_MIN;
	int16_t x730 = -440;
	static int32_t x731 = -2;
	int32_t t104 = 22884765;

    t104 = (x729*((x730-x731)*x732));

    if (t104 != -1837105152) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x739 = UINT8_MAX;
	uint32_t x740 = 2U;
	volatile uint32_t t105 = 227738U;

    t105 = (x737*((x738-x739)*x740));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x742 = -1;
	uint32_t x744 = 9545U;

    t106 = (x741*((x742-x743)*x744));

    if (t106 != 4294910026U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x745 = UINT16_MAX;
	volatile uint32_t x746 = 52U;
	int8_t x747 = INT8_MAX;
	uint16_t x748 = UINT16_MAX;
	volatile uint32_t t107 = 3U;

    t107 = (x745*((x746-x747)*x748));

    if (t107 != 9830325U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x750 = 445320730830352LLU;
	volatile int64_t x751 = INT64_MIN;
	static int32_t x752 = 0;
	static uint64_t t108 = 3389756LLU;

    t108 = (x749*((x750-x751)*x752));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x753 = INT8_MIN;
	int8_t x754 = 7;
	uint8_t x756 = 0U;
	int32_t t109 = -3382;

    t109 = (x753*((x754-x755)*x756));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x761 = 48U;
	int32_t x762 = -477856;
	static uint32_t x763 = 6U;
	uint32_t x764 = 114696689U;
	static volatile uint32_t t110 = 8U;

    t110 = (x761*((x762-x763)*x764));

    if (t110 != 2480911072U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x769 = INT32_MIN;
	uint64_t x771 = 11216363755206369LLU;
	static uint8_t x772 = 8U;
	volatile uint64_t t111 = 490LLU;

    t111 = (x769*((x770-x771)*x772));

    if (t111 != 14209942609266212864LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x773 = 1;
	static uint8_t x775 = 15U;
	uint8_t x776 = 15U;
	int32_t t112 = 65432710;

    t112 = (x773*((x774-x775)*x776));

    if (t112 != -210) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x777 = INT8_MAX;
	int32_t x778 = INT32_MIN;
	static volatile int16_t x779 = -1;
	int64_t x780 = -1LL;
	int64_t t113 = 218748428758033LL;

    t113 = (x777*((x778-x779)*x780));

    if (t113 != 272730423169LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x781 = INT8_MAX;
	static int32_t x783 = INT32_MAX;
	static uint64_t x784 = 412027526LLU;

    t114 = (x781*((x782-x783)*x784));

    if (t114 != 16754766940383215616LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x791 = INT16_MIN;
	uint8_t x792 = 2U;
	volatile int32_t t115 = -5;

    t115 = (x789*((x790-x791)*x792));

    if (t115 != 2147483646) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x793 = UINT32_MAX;
	static uint32_t x794 = 39840414U;
	uint64_t x795 = 1629223814119714415LLU;
	static uint64_t t116 = 204044381864553LLU;

    t116 = (x793*((x794-x795)*x796));

    if (t116 != 15696913021722590255LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x798 = 0U;
	uint64_t x799 = 2458017129328217LLU;
	uint64_t t117 = 737895LLU;

    t117 = (x797*((x798-x799)*x800));

    if (t117 != 18141740715635138624LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x801 = 4;
	uint8_t x803 = 6U;
	volatile int32_t t118 = 2;

    t118 = (x801*((x802-x803)*x804));

    if (t118 != -4352) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x833 = INT8_MAX;
	int64_t x834 = INT64_MIN;
	volatile int16_t x835 = -5694;
	uint8_t x836 = 0U;
	volatile int64_t t119 = 320928898LL;

    t119 = (x833*((x834-x835)*x836));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x842 = 173293555487941660LLU;
	volatile uint64_t t120 = 370LLU;

    t120 = (x841*((x842-x843)*x844));

    if (t120 != 8965285639323975680LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x849 = 3850;
	int16_t x850 = 1;
	uint32_t x851 = UINT32_MAX;
	static int16_t x852 = INT16_MIN;
	volatile uint32_t t121 = 41U;

    t121 = (x849*((x850-x851)*x852));

    if (t121 != 4042653696U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x853 = 23U;
	int64_t x854 = -1LL;
	int16_t x855 = -2;
	uint8_t x856 = 1U;
	int64_t t122 = -25LL;

    t122 = (x853*((x854-x855)*x856));

    if (t122 != 23LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x857 = -1;
	uint32_t x858 = 0U;
	volatile uint32_t t123 = 57947U;

    t123 = (x857*((x858-x859)*x860));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x865 = INT8_MIN;
	volatile uint32_t x866 = 1994U;
	int16_t x867 = -1;
	uint8_t x868 = 0U;
	static uint32_t t124 = 44U;

    t124 = (x865*((x866-x867)*x868));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x875 = -9661879;
	uint64_t x876 = UINT64_MAX;
	volatile uint64_t t125 = 3126LLU;

    t125 = (x873*((x874-x875)*x876));

    if (t125 != 18446744055748356507LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x877 = UINT16_MAX;
	uint8_t x878 = 50U;
	static volatile int8_t x879 = INT8_MIN;
	static uint64_t x880 = UINT64_MAX;
	volatile uint64_t t126 = 1450797LLU;

    t126 = (x877*((x878-x879)*x880));

    if (t126 != 18446744073697886386LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x883 = -9;
	uint64_t x884 = 8526LLU;
	uint64_t t127 = 3663973709500LLU;

    t127 = (x881*((x882-x883)*x884));

    if (t127 != 3037111616922404896LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x886 = INT8_MAX;
	static int32_t x887 = INT32_MAX;
	int64_t x888 = -1LL;

    t128 = (x885*((x886-x887)*x888));

    if (t128 != -4611685743549480960LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x889 = INT64_MIN;
	int64_t x890 = INT64_MIN;
	static int64_t x891 = INT64_MIN;
	uint64_t x892 = 24480LLU;
	volatile uint64_t t129 = 726775451851247LLU;

    t129 = (x889*((x890-x891)*x892));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x913 = UINT8_MAX;
	int64_t x914 = -1LL;
	volatile int16_t x915 = -1;
	int64_t t130 = -54101684LL;

    t130 = (x913*((x914-x915)*x916));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x917 = UINT8_MAX;
	int16_t x918 = -1;
	uint64_t x919 = 5LLU;
	volatile int16_t x920 = -1;

    t131 = (x917*((x918-x919)*x920));

    if (t131 != 1530LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x921 = -1;
	uint32_t x922 = 29324508U;
	volatile uint8_t x923 = 39U;
	volatile uint64_t x924 = 88651341785304316LLU;
	uint64_t t132 = 21309LLU;

    t132 = (x921*((x922-x923)*x924));

    if (t132 != 9224828178620031444LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x925 = INT32_MIN;
	static int8_t x926 = -1;
	static uint32_t x927 = 100U;
	uint32_t x928 = UINT32_MAX;
	volatile uint32_t t133 = 443746914U;

    t133 = (x925*((x926-x927)*x928));

    if (t133 != 2147483648U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x941 = -1;
	static uint16_t x942 = 151U;
	int32_t x943 = 9;
	uint64_t x944 = UINT64_MAX;

    t134 = (x941*((x942-x943)*x944));

    if (t134 != 142LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x953 = -1;
	int64_t x954 = -1LL;
	int8_t x955 = -4;
	int32_t x956 = 35293;
	int64_t t135 = 1470LL;

    t135 = (x953*((x954-x955)*x956));

    if (t135 != -105879LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x961 = -1LL;
	int64_t x962 = 113854522LL;
	int8_t x963 = -1;
	uint8_t x964 = UINT8_MAX;
	int64_t t136 = -471998LL;

    t136 = (x961*((x962-x963)*x964));

    if (t136 != -29032903365LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x965 = 43;
	uint8_t x966 = 7U;
	static int8_t x967 = INT8_MAX;
	uint16_t x968 = UINT16_MAX;

    t137 = (x965*((x966-x967)*x968));

    if (t137 != -338160600) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x969 = 6888152752LL;
	volatile int64_t x971 = 1498303LL;
	static int32_t x972 = -1017;

    t138 = (x969*((x970-x971)*x972));

    if (t138 != 6024681276436926624LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x985 = 323600754LLU;
	int8_t x986 = -1;
	int8_t x987 = -1;
	volatile int16_t x988 = INT16_MIN;
	static uint64_t t139 = 601849224690044LLU;

    t139 = (x985*((x986-x987)*x988));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x989 = 3U;
	int16_t x990 = 0;
	int32_t x991 = -1;
	static int64_t x992 = -1LL;
	int64_t t140 = 44LL;

    t140 = (x989*((x990-x991)*x992));

    if (t140 != -3LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x1001 = -1;
	int64_t x1002 = -1LL;
	int64_t x1003 = INT64_MIN;
	uint64_t t141 = 257535053380LLU;

    t141 = (x1001*((x1002-x1003)*x1004));

    if (t141 != 3892368012LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x1009 = 3U;
	uint32_t x1010 = 206U;
	uint64_t x1011 = 588839229633LLU;
	int64_t x1012 = INT64_MIN;
	uint64_t t142 = 1LLU;

    t142 = (x1009*((x1010-x1011)*x1012));

    if (t142 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x1023 = 14U;
	int32_t x1024 = -24;
	uint32_t t143 = 126132U;

    t143 = (x1021*((x1022-x1023)*x1024));

    if (t143 != 46419312U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x1034 = 227827437U;
	int32_t x1036 = -1;
	volatile uint32_t t144 = 172890419U;

    t144 = (x1033*((x1034-x1035)*x1036));

    if (t144 != 796164096U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x1037 = -1;
	int8_t x1040 = 0;
	int32_t t145 = -11043;

    t145 = (x1037*((x1038-x1039)*x1040));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1050 = -1;
	uint64_t x1052 = 181LLU;
	volatile uint64_t t146 = 69560LLU;

    t146 = (x1049*((x1050-x1051)*x1052));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1053 = INT32_MAX;
	int8_t x1054 = -1;
	uint32_t x1055 = 816U;
	uint64_t x1056 = 4929812479LLU;
	volatile uint64_t t147 = 11708LLU;

    t147 = (x1053*((x1054-x1055)*x1056));

    if (t147 != 8692599580108092623LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1058 = INT64_MAX;
	uint16_t x1060 = 22447U;
	uint64_t t148 = 3683399448780814LLU;

    t148 = (x1057*((x1058-x1059)*x1060));

    if (t148 != 11786256330105331554LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1065 = -1;
	uint8_t x1066 = 25U;
	uint16_t x1067 = 2831U;
	static int8_t x1068 = 2;
	int32_t t149 = 707;

    t149 = (x1065*((x1066-x1067)*x1068));

    if (t149 != 5612) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x1085 = 2U;
	int64_t x1086 = 227LL;
	int8_t x1087 = INT8_MIN;
	int32_t x1088 = INT32_MAX;
	volatile int64_t t150 = -10889LL;

    t150 = (x1085*((x1086-x1087)*x1088));

    if (t150 != 1524713389370LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1093 = 0;
	static int32_t x1094 = INT32_MIN;
	static int32_t x1095 = INT32_MIN;
	static uint64_t x1096 = 2407156251915LLU;
	volatile uint64_t t151 = 167LLU;

    t151 = (x1093*((x1094-x1095)*x1096));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1098 = INT16_MIN;
	int64_t x1099 = 11236071130LL;
	int8_t x1100 = -1;

    t152 = (x1097*((x1098-x1099)*x1100));

    if (t152 != 67416623388LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x1110 = 168U;
	int16_t x1111 = 10;
	int16_t x1112 = -7732;

    t153 = (x1109*((x1110-x1111)*x1112));

    if (t153 != 4291302328U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x1117 = -1;
	uint64_t x1119 = UINT64_MAX;
	uint8_t x1120 = UINT8_MAX;
	static volatile uint64_t t154 = 176LLU;

    t154 = (x1117*((x1118-x1119)*x1120));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x1121 = -1;
	volatile uint64_t t155 = 2619571414654LLU;

    t155 = (x1121*((x1122-x1123)*x1124));

    if (t155 != 11760172397098185456LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint16_t x1137 = 1U;
	int8_t x1138 = 2;
	static int32_t x1139 = -1;
	int64_t x1140 = -1LL;
	int64_t t156 = -14828LL;

    t156 = (x1137*((x1138-x1139)*x1140));

    if (t156 != -3LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x1141 = INT8_MAX;
	int16_t x1142 = INT16_MIN;
	int64_t x1143 = -3919909LL;
	int32_t x1144 = 4;

    t157 = (x1141*((x1142-x1143)*x1144));

    if (t157 != 1974667628LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x1145 = 432U;
	int8_t x1146 = -1;
	int16_t x1147 = 2;
	uint64_t x1148 = UINT64_MAX;
	volatile uint64_t t158 = 14498112740391LLU;

    t158 = (x1145*((x1146-x1147)*x1148));

    if (t158 != 1296LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1158 = INT16_MAX;
	int8_t x1159 = 0;
	volatile int32_t x1160 = 1;

    t159 = (x1157*((x1158-x1159)*x1160));

    if (t159 != 18906559) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x1161 = INT8_MIN;
	static uint64_t x1162 = 145161329829460LLU;
	int8_t x1163 = INT8_MIN;
	volatile uint64_t t160 = 10198612489890LLU;

    t160 = (x1161*((x1162-x1163)*x1164));

    if (t160 != 18391002123054989824LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x1165 = 410U;
	static volatile int64_t x1166 = -11LL;
	uint64_t x1168 = 8533137419818LLU;
	uint64_t t161 = 1389177LLU;

    t161 = (x1165*((x1166-x1167)*x1168));

    if (t161 != 18397763864919796296LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x1169 = 0U;
	uint32_t x1170 = 4192146U;
	static int32_t x1171 = 927652809;
	static uint8_t x1172 = 90U;
	uint32_t t162 = 8343083U;

    t162 = (x1169*((x1170-x1171)*x1172));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1175 = UINT64_MAX;
	volatile uint8_t x1176 = 72U;
	volatile uint64_t t163 = 352501412531562282LLU;

    t163 = (x1173*((x1174-x1175)*x1176));

    if (t163 != 18446744073704833024LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1181 = 9LL;
	volatile uint32_t x1182 = 1009909808U;
	volatile uint16_t x1183 = 3733U;
	int32_t x1184 = 20186260;
	volatile int64_t t164 = -19921788LL;

    t164 = (x1181*((x1182-x1183)*x1184));

    if (t164 != 10136774268LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1185 = -817;
	volatile int32_t x1186 = -1;
	volatile uint32_t x1187 = 542920U;
	int32_t x1188 = 1571;

    t165 = (x1185*((x1186-x1187)*x1188));

    if (t165 != 1058201995U) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x1189 = INT8_MIN;
	int16_t x1190 = INT16_MIN;
	int8_t x1191 = 0;
	static int32_t x1192 = -1;
	int32_t t166 = -405318376;

    t166 = (x1189*((x1190-x1191)*x1192));

    if (t166 != -4194304) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1193 = 50U;
	int16_t x1194 = -4010;
	int16_t x1195 = INT16_MIN;

    t167 = (x1193*((x1194-x1195)*x1196));

    if (t167 != 1452149856U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x1197 = 42U;
	volatile uint16_t x1198 = 1U;
	static int64_t x1199 = -1LL;
	int32_t x1200 = INT32_MIN;
	int64_t t168 = -3017LL;

    t168 = (x1197*((x1198-x1199)*x1200));

    if (t168 != -180388626432LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1201 = 59U;
	int64_t x1202 = -116LL;
	volatile int32_t x1203 = INT32_MIN;
	uint64_t x1204 = 588010410LLU;
	volatile uint64_t t169 = 1066962LLU;

    t169 = (x1201*((x1202-x1203)*x1204));

    if (t169 != 714841360216312616LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1214 = UINT32_MAX;
	uint32_t x1216 = 53291U;
	static uint32_t t170 = 21U;

    t170 = (x1213*((x1214-x1215)*x1216));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x1217 = 54U;
	int16_t x1219 = -2490;
	int64_t x1220 = -7LL;
	volatile int64_t t171 = -267181392559415LL;

    t171 = (x1217*((x1218-x1219)*x1220));

    if (t171 != -1193724LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x1225 = 15;
	static int64_t x1226 = 66191197193LL;
	static int32_t x1227 = INT32_MIN;
	static uint64_t x1228 = UINT64_MAX;
	volatile uint64_t t172 = 249LLU;

    t172 = (x1225*((x1226-x1227)*x1228));

    if (t172 != 18446743048629339001LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1233 = 9U;
	static volatile int32_t t173 = 16291669;

    t173 = (x1233*((x1234-x1235)*x1236));

    if (t173 != 2009340) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1237 = 41095U;
	int16_t x1238 = INT16_MIN;
	uint64_t x1239 = 46259645LLU;
	volatile int64_t x1240 = INT64_MIN;
	volatile uint64_t t174 = 696LLU;

    t174 = (x1237*((x1238-x1239)*x1240));

    if (t174 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1257 = 264410812431LL;
	int64_t x1258 = 1030144LL;
	uint64_t x1259 = 96859LLU;
	int64_t x1260 = INT64_MAX;
	volatile uint64_t t175 = 14871LLU;

    t175 = (x1257*((x1258-x1259)*x1260));

    if (t175 != 8976601391775109973LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1281 = -1LL;
	static int16_t x1282 = INT16_MIN;
	static volatile int64_t t176 = -122020937574628LL;

    t176 = (x1281*((x1282-x1283)*x1284));

    if (t176 != 1244956LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1294 = 13264LLU;
	int16_t x1295 = INT16_MAX;
	int16_t x1296 = 1;
	volatile uint64_t t177 = 158485994LLU;

    t177 = (x1293*((x1294-x1295)*x1296));

    if (t177 != 18446741127667153042LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1297 = 1LL;
	volatile uint8_t x1298 = UINT8_MAX;
	static volatile int32_t x1299 = 11916565;
	static uint64_t x1300 = 14565LLU;

    t178 = (x1297*((x1298-x1299)*x1300));

    if (t178 != 18446743900148496466LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1301 = 45U;
	uint32_t x1302 = 943576924U;
	static volatile int8_t x1303 = -1;
	static volatile uint32_t x1304 = 5057U;
	volatile uint32_t t179 = 3964U;

    t179 = (x1301*((x1302-x1303)*x1304));

    if (t179 != 2487941401U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x1305 = 110U;
	static int32_t x1306 = INT32_MAX;
	uint8_t x1307 = 17U;
	static uint8_t x1308 = 0U;
	int32_t t180 = 383343350;

    t180 = (x1305*((x1306-x1307)*x1308));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x1314 = UINT64_MAX;
	int64_t x1315 = -247497932LL;
	static int16_t x1316 = -15162;
	volatile uint64_t t181 = 5238002353941629839LLU;

    t181 = (x1313*((x1314-x1315)*x1316));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1318 = 34409360029959496LLU;
	uint16_t x1319 = 66U;
	static volatile uint64_t t182 = 107LLU;

    t182 = (x1317*((x1318-x1319)*x1320));

    if (t182 != 13932111502883603718LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x1321 = 1726428LLU;
	int32_t x1322 = -1;
	int32_t x1323 = -1;
	static uint8_t x1324 = 7U;
	static volatile uint64_t t183 = 2871567844266LLU;

    t183 = (x1321*((x1322-x1323)*x1324));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1338 = INT16_MIN;
	volatile int64_t x1339 = -1LL;
	int32_t x1340 = -51377;
	volatile int64_t t184 = -146LL;

    t184 = (x1337*((x1338-x1339)*x1340));

    if (t184 != 110326216870065LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1349 = 266947953522840LLU;
	int8_t x1351 = 0;
	int64_t x1352 = -1494782493239LL;
	volatile uint64_t t185 = 12804798486965LLU;

    t185 = (x1349*((x1350-x1351)*x1352));

    if (t185 != 17648638779845752328LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1353 = 1;
	int64_t x1354 = INT64_MAX;
	volatile uint64_t x1356 = 476032287761LLU;
	volatile uint64_t t186 = 21141380286774295LLU;

    t186 = (x1353*((x1354-x1355)*x1356));

    if (t186 != 9223342522852934626LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x1357 = 0;
	static volatile int64_t x1358 = INT64_MIN;
	volatile int32_t x1359 = INT32_MIN;
	volatile uint64_t x1360 = UINT64_MAX;
	volatile uint64_t t187 = 3LLU;

    t187 = (x1357*((x1358-x1359)*x1360));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1386 = -1;
	int8_t x1387 = 12;
	uint32_t x1388 = UINT32_MAX;
	int64_t t188 = -122829867147156LL;

    t188 = (x1385*((x1386-x1387)*x1388));

    if (t188 != -39LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1397 = INT32_MAX;
	volatile int16_t x1398 = INT16_MIN;
	int64_t x1399 = -15LL;
	int16_t x1400 = INT16_MAX;

    t189 = (x1397*((x1398-x1399)*x1400));

    if (t189 != -2304717140445888497LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1405 = 59891813LL;
	static uint32_t x1407 = 7457U;
	static uint32_t x1408 = UINT32_MAX;
	volatile int64_t t190 = -278LL;

    t190 = (x1405*((x1406-x1407)*x1408));

    if (t190 != 128617135739715178LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1409 = 12086397393769LL;
	uint64_t x1410 = UINT64_MAX;
	int16_t x1411 = 0;
	volatile int32_t x1412 = INT32_MAX;
	volatile uint64_t t191 = 11746137018LLU;

    t191 = (x1409*((x1410-x1411)*x1412));

    if (t191 != 17674901520701479785LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1419 = 1265500287826620849LLU;
	int8_t x1420 = INT8_MIN;
	volatile uint64_t t192 = 846850LLU;

    t192 = (x1417*((x1418-x1419)*x1420));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1429 = -48758529867808537LL;
	static volatile uint32_t x1430 = 213956U;
	uint64_t x1431 = 1936888228131658LLU;
	uint64_t x1432 = 17773473LLU;
	uint64_t t193 = 8413LLU;

    t193 = (x1429*((x1430-x1431)*x1432));

    if (t193 != 16166378350327139798LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1433 = 32754U;
	static int32_t x1434 = INT32_MIN;
	int64_t x1435 = 195554532LL;
	volatile int16_t x1436 = 809;
	int64_t t194 = 0LL;

    t194 = (x1433*((x1434-x1435)*x1436));

    if (t194 != -62085792891105480LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1441 = 255288855142LLU;
	int8_t x1442 = 22;
	uint16_t x1443 = 102U;
	int8_t x1444 = INT8_MIN;
	static uint64_t t195 = 492375068252816146LLU;

    t195 = (x1441*((x1442-x1443)*x1444));

    if (t195 != 2614157876654080LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1446 = 118322938LLU;
	int16_t x1447 = INT16_MIN;
	int64_t x1448 = -1LL;
	volatile uint64_t t196 = 3755LLU;

    t196 = (x1445*((x1446-x1447)*x1448));

    if (t196 != 18446744050866900358LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x1454 = 38080633326219LLU;
	int64_t x1455 = INT64_MAX;
	uint16_t x1456 = 32414U;
	volatile uint64_t t197 = 191182139053790LLU;

    t197 = (x1453*((x1454-x1455)*x1456));

    if (t197 != 1234345648636095080LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1474 = 2;
	uint32_t x1475 = 30U;
	uint32_t t198 = 5541042U;

    t198 = (x1473*((x1474-x1475)*x1476));

    if (t198 != 4294967268U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1477 = INT16_MIN;
	uint64_t x1478 = 64860612LLU;
	uint32_t x1479 = UINT32_MAX;

    t199 = (x1477*((x1478-x1479)*x1480));

    if (t199 != 1511134451843760128LLU) { NG(); } else { ; }
	
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

