
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

static uint8_t x5 = 3U;
volatile int8_t x8 = 4;
uint8_t x11 = 42U;
int64_t x23 = INT64_MAX;
int32_t t5 = -15;
int64_t x46 = -1LL;
volatile uint16_t x48 = UINT16_MAX;
volatile int64_t x57 = -1LL;
int64_t x60 = INT64_MAX;
int8_t x63 = 7;
static int8_t x64 = 17;
int64_t x73 = INT64_MIN;
volatile int8_t x75 = INT8_MIN;
uint16_t x80 = 4215U;
int64_t t13 = 1LL;
uint16_t x82 = 27U;
int32_t t14 = -173656865;
uint64_t x95 = 103865588LLU;
uint8_t x97 = 16U;
static volatile int32_t t20 = 219707982;
static int32_t x125 = INT32_MAX;
int64_t x162 = -1LL;
volatile int16_t x170 = INT16_MIN;
int32_t x189 = INT32_MIN;
int8_t x197 = INT8_MIN;
int8_t x199 = -17;
volatile int32_t t29 = 632;
int8_t x205 = 4;
static int64_t x207 = -1LL;
uint64_t x208 = 56LLU;
uint16_t x224 = UINT16_MAX;
uint32_t x226 = 57715455U;
static int32_t x238 = INT32_MAX;
static volatile int8_t x249 = INT8_MAX;
int64_t x253 = INT64_MIN;
volatile int8_t x256 = INT8_MAX;
int16_t x259 = 0;
uint64_t x260 = UINT64_MAX;
int16_t x273 = INT16_MIN;
int16_t x276 = 0;
static int64_t x278 = INT64_MAX;
static int32_t x280 = INT32_MAX;
int16_t x299 = INT16_MIN;
uint8_t x311 = 19U;
volatile int32_t t45 = -1877;
int32_t t46 = 38096;
static volatile int16_t x331 = 552;
volatile uint32_t t49 = 56847366U;
int16_t x337 = -1;
int8_t x340 = INT8_MAX;
int32_t x341 = INT32_MAX;
uint8_t x353 = 33U;
static int16_t x356 = INT16_MAX;
int32_t x366 = INT32_MIN;
uint64_t x384 = 9654081826024093LLU;
static int16_t x390 = -1;
static int16_t x398 = INT16_MIN;
int8_t x399 = INT8_MIN;
volatile int64_t t59 = 1LL;
int32_t t60 = 838;
volatile uint16_t x413 = UINT16_MAX;
uint16_t x420 = UINT16_MAX;
int32_t x422 = -1;
uint64_t x423 = 6700954333445904LLU;
volatile uint8_t x426 = 95U;
volatile uint32_t t65 = 18476U;
volatile int64_t x441 = 1711923411730LL;
int64_t t66 = -81401599448886046LL;
int64_t x450 = 2564318884LL;
static uint32_t t69 = 33338U;
volatile int32_t x461 = -1;
int16_t x465 = -1;
volatile int32_t t71 = 114890102;
int64_t x486 = -1LL;
int32_t t72 = 518171;
static int8_t x493 = 7;
int32_t x496 = 103120902;
uint8_t x513 = UINT8_MAX;
uint8_t x514 = UINT8_MAX;
uint16_t x520 = 10988U;
int64_t t75 = -34157848830511456LL;
int16_t x526 = INT16_MIN;
int32_t t77 = 513376;
static int32_t x535 = INT32_MAX;
int32_t x538 = -1;
int16_t x544 = INT16_MAX;
uint64_t x549 = 11LLU;
volatile uint64_t t81 = 11633842228643006LLU;
uint16_t x560 = 6U;
volatile int32_t t83 = 101734809;
uint64_t t84 = 1240076474LLU;
int64_t x569 = INT64_MIN;
uint16_t x572 = UINT16_MAX;
int64_t t85 = -1881400190231LL;
uint64_t x576 = 8907794LLU;
uint32_t x592 = UINT32_MAX;
volatile int64_t x593 = 58560277LL;
int64_t x594 = INT64_MIN;
static uint16_t x598 = 7720U;
volatile uint64_t t89 = 3468465135807048LLU;
static volatile int32_t t90 = 238850;
static uint32_t x634 = UINT32_MAX;
static int32_t x657 = INT32_MAX;
int64_t x674 = INT64_MAX;
volatile int8_t x676 = 7;
uint16_t x695 = UINT16_MAX;
uint16_t x716 = 64U;
int16_t x739 = 3;
uint64_t x744 = UINT64_MAX;
volatile int64_t t107 = 248211574062000LL;
static int16_t x754 = 0;
int32_t x756 = 470114179;
static int8_t x759 = INT8_MIN;
int32_t t109 = 61597296;
int16_t x767 = 5;
int32_t x769 = -6647889;
volatile int8_t x771 = INT8_MIN;
uint64_t x772 = UINT64_MAX;
static int8_t x801 = 0;
uint32_t x804 = 9571275U;
int64_t x809 = INT64_MAX;
int32_t x810 = INT32_MAX;
volatile int16_t x829 = -1;
static uint64_t x831 = 47039486LLU;
uint64_t x832 = 751541610LLU;
uint16_t x840 = UINT16_MAX;
uint8_t x844 = 7U;
int64_t x846 = INT64_MAX;
uint32_t x849 = 1U;
uint32_t x851 = 1056827083U;
int8_t x861 = INT8_MIN;
static int32_t x866 = INT32_MAX;
uint8_t x867 = UINT8_MAX;
int64_t x868 = 2894548831933266456LL;
uint8_t x908 = UINT8_MAX;
uint8_t x910 = UINT8_MAX;
int32_t x931 = -1;
static int32_t x932 = INT32_MAX;
int64_t x938 = 3293LL;
uint32_t x940 = UINT32_MAX;
int32_t t135 = 1;
static uint16_t x980 = 339U;
volatile int8_t x983 = INT8_MIN;
uint64_t x984 = 25484112982964668LLU;
uint32_t t137 = 20122U;
uint64_t x1008 = UINT64_MAX;
int64_t x1011 = -1LL;
int32_t x1013 = INT32_MAX;
volatile int32_t t145 = -258875696;
static int8_t x1039 = INT8_MIN;
int32_t t146 = 5;
int64_t x1042 = -737LL;
int32_t t147 = 203648;
int8_t x1057 = INT8_MIN;
volatile int32_t t149 = 0;
static int8_t x1063 = INT8_MIN;
uint32_t t150 = 1632325U;
int64_t x1071 = INT64_MIN;
int32_t x1079 = -114774;
static volatile int64_t x1098 = -1LL;
int8_t x1099 = 0;
int32_t x1103 = INT32_MIN;
int16_t x1130 = INT16_MAX;
volatile int32_t t158 = 6082;
uint8_t x1158 = 1U;
uint32_t x1165 = UINT32_MAX;
uint64_t x1168 = 1005783783424242LLU;
int32_t x1177 = -1;
static int64_t x1178 = -1LL;
int64_t x1187 = -1LL;
static int32_t x1191 = INT32_MIN;
int16_t x1193 = INT16_MAX;
volatile int32_t t165 = -10;
int64_t t166 = 65432501997LL;
uint8_t x1219 = UINT8_MAX;
uint64_t x1228 = 1608394867646795LLU;
uint16_t x1254 = 1U;
volatile int32_t x1268 = INT32_MAX;
volatile int64_t t172 = 52607498756359671LL;
int64_t x1287 = -7756976LL;
uint64_t x1290 = 16363294LLU;
uint32_t x1291 = UINT32_MAX;
uint32_t x1292 = UINT32_MAX;
uint8_t x1296 = UINT8_MAX;
volatile uint64_t x1313 = 91471171901LLU;
int16_t x1318 = INT16_MIN;
int64_t x1319 = 3121951959458206LL;
uint32_t x1320 = UINT32_MAX;
int16_t x1329 = INT16_MAX;
int64_t x1336 = INT64_MAX;
static uint8_t x1358 = 3U;
volatile int16_t x1359 = INT16_MIN;
int8_t x1384 = INT8_MAX;
volatile int8_t x1385 = INT8_MIN;
uint32_t x1409 = UINT32_MAX;
int32_t x1419 = -1;
int32_t x1420 = INT32_MAX;
uint8_t x1430 = UINT8_MAX;
int64_t t195 = 1273875974393769LL;
volatile int32_t t197 = -3201;
volatile int16_t x1450 = -1;
uint32_t x1463 = 238003545U;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	uint32_t x2 = 1691442800U;
	volatile int16_t x3 = 806;
	int32_t x4 = 743081;
	volatile int64_t t0 = -60028460010085034LL;

    t0 = (x1%((x2>x3)<=x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 397U;
	int8_t x7 = INT8_MIN;
	volatile int32_t t1 = 0;

    t1 = (x5%((x6>x7)<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 265019856231LLU;
	static int16_t x10 = INT16_MIN;
	volatile int64_t x12 = 567081197LL;
	uint64_t t2 = 14LLU;

    t2 = (x9%((x10>x11)<=x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x13 = 461LLU;
	uint32_t x14 = 7146U;
	uint64_t x15 = 4294995LLU;
	static uint8_t x16 = 6U;
	volatile uint64_t t3 = 48191236879LLU;

    t3 = (x13%((x14>x15)<=x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x21 = -1;
	volatile uint16_t x22 = 248U;
	volatile int8_t x24 = INT8_MAX;
	volatile int32_t t4 = -27;

    t4 = (x21%((x22>x23)<=x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x37 = INT32_MIN;
	uint16_t x38 = 91U;
	int64_t x39 = -209LL;
	uint16_t x40 = UINT16_MAX;

    t5 = (x37%((x38>x39)<=x40));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x41 = 96505986515096LLU;
	int32_t x42 = INT32_MIN;
	int32_t x43 = 61336524;
	uint64_t x44 = 3768322307071LLU;
	volatile uint64_t t6 = 944790LLU;

    t6 = (x41%((x42>x43)<=x44));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x45 = -1LL;
	int64_t x47 = INT64_MIN;
	int64_t t7 = 1LL;

    t7 = (x45%((x46>x47)<=x48));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x49 = -5;
	int8_t x50 = INT8_MAX;
	int16_t x51 = 0;
	volatile uint32_t x52 = 275003U;
	int32_t t8 = 17554;

    t8 = (x49%((x50>x51)<=x52));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x53 = INT16_MIN;
	volatile uint8_t x54 = 39U;
	int16_t x55 = INT16_MAX;
	int16_t x56 = INT16_MAX;
	int32_t t9 = -688698;

    t9 = (x53%((x54>x55)<=x56));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x58 = 3;
	int16_t x59 = INT16_MIN;
	static int64_t t10 = -49806LL;

    t10 = (x57%((x58>x59)<=x60));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x61 = 0U;
	static uint32_t x62 = 1U;
	volatile uint32_t t11 = 1884U;

    t11 = (x61%((x62>x63)<=x64));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x74 = INT16_MIN;
	uint8_t x76 = 14U;
	int64_t t12 = 26966272987529LL;

    t12 = (x73%((x74>x75)<=x76));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x77 = 191777955370896984LL;
	static volatile uint32_t x78 = 68280U;
	int8_t x79 = INT8_MAX;

    t13 = (x77%((x78>x79)<=x80));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x81 = -1;
	uint8_t x83 = 4U;
	volatile uint32_t x84 = 36590077U;

    t14 = (x81%((x82>x83)<=x84));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x89 = INT8_MAX;
	volatile int32_t x90 = -105204;
	static int64_t x91 = INT64_MAX;
	static int16_t x92 = 4598;
	int32_t t15 = 1354;

    t15 = (x89%((x90>x91)<=x92));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x93 = 166LLU;
	int16_t x94 = 3;
	int64_t x96 = 89LL;
	volatile uint64_t t16 = 133538980484LLU;

    t16 = (x93%((x94>x95)<=x96));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x98 = 42345305U;
	static volatile uint8_t x99 = UINT8_MAX;
	int16_t x100 = 343;
	int32_t t17 = 14748073;

    t17 = (x97%((x98>x99)<=x100));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x101 = UINT8_MAX;
	static int8_t x102 = INT8_MAX;
	int32_t x103 = -1;
	volatile uint16_t x104 = UINT16_MAX;
	int32_t t18 = -16;

    t18 = (x101%((x102>x103)<=x104));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x105 = -1;
	static int8_t x106 = INT8_MIN;
	int32_t x107 = 755;
	uint64_t x108 = 12555210139657LLU;
	volatile int32_t t19 = 1905;

    t19 = (x105%((x106>x107)<=x108));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x113 = 229U;
	int32_t x114 = -270951562;
	int32_t x115 = 13;
	uint8_t x116 = 29U;

    t20 = (x113%((x114>x115)<=x116));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x121 = 529437042599LLU;
	volatile int16_t x122 = INT16_MIN;
	uint8_t x123 = UINT8_MAX;
	uint32_t x124 = 324003584U;
	uint64_t t21 = 13354LLU;

    t21 = (x121%((x122>x123)<=x124));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x126 = -3847;
	int32_t x127 = 1;
	uint64_t x128 = 2989198406788837LLU;
	int32_t t22 = -836016792;

    t22 = (x125%((x126>x127)<=x128));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x141 = INT32_MAX;
	uint32_t x142 = 1264487U;
	volatile int32_t x143 = -1;
	uint32_t x144 = 5U;
	volatile int32_t t23 = 941876;

    t23 = (x141%((x142>x143)<=x144));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x161 = -14;
	static uint32_t x163 = 4394098U;
	uint64_t x164 = UINT64_MAX;
	volatile int32_t t24 = 5;

    t24 = (x161%((x162>x163)<=x164));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x169 = 86267U;
	static int64_t x171 = -1LL;
	uint32_t x172 = 1070U;
	volatile uint32_t t25 = 2922U;

    t25 = (x169%((x170>x171)<=x172));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x173 = 3;
	uint16_t x174 = 10924U;
	static int32_t x175 = -1;
	volatile uint16_t x176 = 1956U;
	static volatile int32_t t26 = -4127;

    t26 = (x173%((x174>x175)<=x176));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x190 = 39;
	volatile uint32_t x191 = 48U;
	int64_t x192 = INT64_MAX;
	int32_t t27 = 185959312;

    t27 = (x189%((x190>x191)<=x192));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x193 = -1;
	volatile int16_t x194 = -116;
	static int8_t x195 = -4;
	static volatile int32_t x196 = INT32_MAX;
	static volatile int32_t t28 = -299645;

    t28 = (x193%((x194>x195)<=x196));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x198 = -1;
	int32_t x200 = 665962297;

    t29 = (x197%((x198>x199)<=x200));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x206 = UINT64_MAX;
	int32_t t30 = -129810;

    t30 = (x205%((x206>x207)<=x208));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x217 = UINT32_MAX;
	volatile int64_t x218 = INT64_MIN;
	volatile int8_t x219 = 26;
	static volatile int64_t x220 = INT64_MAX;
	uint32_t t31 = 2277606U;

    t31 = (x217%((x218>x219)<=x220));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x221 = INT16_MIN;
	uint8_t x222 = UINT8_MAX;
	int16_t x223 = INT16_MAX;
	volatile int32_t t32 = 1;

    t32 = (x221%((x222>x223)<=x224));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x225 = 9921U;
	volatile int64_t x227 = -1LL;
	static uint8_t x228 = 3U;
	static int32_t t33 = 0;

    t33 = (x225%((x226>x227)<=x228));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x237 = 58U;
	int8_t x239 = INT8_MIN;
	static volatile int64_t x240 = 309235559751150902LL;
	static volatile int32_t t34 = -1627508;

    t34 = (x237%((x238>x239)<=x240));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x241 = UINT32_MAX;
	int16_t x242 = INT16_MIN;
	static volatile int16_t x243 = INT16_MIN;
	uint32_t x244 = 37637U;
	volatile uint32_t t35 = 194504044U;

    t35 = (x241%((x242>x243)<=x244));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x250 = INT32_MIN;
	int16_t x251 = -55;
	static uint16_t x252 = 26562U;
	volatile int32_t t36 = -774;

    t36 = (x249%((x250>x251)<=x252));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x254 = 281;
	volatile int8_t x255 = INT8_MAX;
	int64_t t37 = 30860105789LL;

    t37 = (x253%((x254>x255)<=x256));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x257 = 9500LLU;
	uint32_t x258 = 11591551U;
	volatile uint64_t t38 = 19858594LLU;

    t38 = (x257%((x258>x259)<=x260));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x265 = INT16_MAX;
	volatile uint16_t x266 = 19U;
	uint16_t x267 = UINT16_MAX;
	int32_t x268 = INT32_MAX;
	int32_t t39 = 476904608;

    t39 = (x265%((x266>x267)<=x268));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x274 = INT32_MIN;
	int64_t x275 = 40788951425849LL;
	volatile int32_t t40 = 18602;

    t40 = (x273%((x274>x275)<=x276));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x277 = INT32_MIN;
	uint16_t x279 = 2U;
	volatile int32_t t41 = -4;

    t41 = (x277%((x278>x279)<=x280));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x285 = INT64_MIN;
	volatile uint64_t x286 = UINT64_MAX;
	volatile int32_t x287 = -3575392;
	int16_t x288 = 43;
	static volatile int64_t t42 = 471459319723393975LL;

    t42 = (x285%((x286>x287)<=x288));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x293 = 21U;
	uint8_t x294 = UINT8_MAX;
	uint64_t x295 = UINT64_MAX;
	static uint16_t x296 = 1675U;
	volatile int32_t t43 = -73214191;

    t43 = (x293%((x294>x295)<=x296));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x297 = -1LL;
	volatile uint8_t x298 = 5U;
	static uint64_t x300 = UINT64_MAX;
	static int64_t t44 = 260057225LL;

    t44 = (x297%((x298>x299)<=x300));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x309 = UINT16_MAX;
	static int8_t x310 = INT8_MAX;
	uint32_t x312 = 1U;

    t45 = (x309%((x310>x311)<=x312));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x321 = INT16_MIN;
	uint32_t x322 = 92U;
	int64_t x323 = INT64_MIN;
	uint8_t x324 = 1U;

    t46 = (x321%((x322>x323)<=x324));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x325 = 18U;
	uint32_t x326 = 203759241U;
	uint32_t x327 = 59876U;
	uint16_t x328 = UINT16_MAX;
	int32_t t47 = -311928795;

    t47 = (x325%((x326>x327)<=x328));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x329 = 4LLU;
	int8_t x330 = INT8_MIN;
	int16_t x332 = 30;
	volatile uint64_t t48 = 4314228066212LLU;

    t48 = (x329%((x330>x331)<=x332));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x333 = 0U;
	int32_t x334 = INT32_MIN;
	int32_t x335 = -1;
	uint16_t x336 = 44U;

    t49 = (x333%((x334>x335)<=x336));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x338 = INT64_MAX;
	int64_t x339 = INT64_MIN;
	static volatile int32_t t50 = 5;

    t50 = (x337%((x338>x339)<=x340));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x342 = -1LL;
	uint32_t x343 = 10320324U;
	uint32_t x344 = UINT32_MAX;
	volatile int32_t t51 = -2;

    t51 = (x341%((x342>x343)<=x344));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x354 = 3U;
	uint32_t x355 = UINT32_MAX;
	volatile int32_t t52 = 281;

    t52 = (x353%((x354>x355)<=x356));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x361 = -26598;
	volatile int16_t x362 = INT16_MAX;
	uint8_t x363 = 4U;
	uint16_t x364 = 49U;
	int32_t t53 = 1504;

    t53 = (x361%((x362>x363)<=x364));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x365 = 7;
	int16_t x367 = INT16_MAX;
	int8_t x368 = INT8_MAX;
	volatile int32_t t54 = -27963997;

    t54 = (x365%((x366>x367)<=x368));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x381 = INT32_MIN;
	uint32_t x382 = 11975767U;
	uint32_t x383 = 111U;
	volatile int32_t t55 = -157;

    t55 = (x381%((x382>x383)<=x384));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x385 = INT64_MAX;
	int8_t x386 = INT8_MIN;
	volatile uint16_t x387 = 392U;
	int8_t x388 = INT8_MAX;
	int64_t t56 = -62701898255572441LL;

    t56 = (x385%((x386>x387)<=x388));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x389 = 935584476742LLU;
	volatile int16_t x391 = 2045;
	int16_t x392 = INT16_MAX;
	uint64_t t57 = 281674355938198LLU;

    t57 = (x389%((x390>x391)<=x392));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x393 = -1;
	int32_t x394 = -275;
	int8_t x395 = -20;
	uint32_t x396 = 36960U;
	volatile int32_t t58 = 1278;

    t58 = (x393%((x394>x395)<=x396));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x397 = INT64_MAX;
	int16_t x400 = INT16_MAX;

    t59 = (x397%((x398>x399)<=x400));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x401 = 2228724;
	static int32_t x402 = -1;
	int64_t x403 = INT64_MIN;
	int8_t x404 = 1;

    t60 = (x401%((x402>x403)<=x404));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x414 = 923430LLU;
	uint16_t x415 = UINT16_MAX;
	static uint8_t x416 = 3U;
	volatile int32_t t61 = -22843385;

    t61 = (x413%((x414>x415)<=x416));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x417 = INT16_MAX;
	int32_t x418 = -1;
	static volatile int32_t x419 = 40118;
	volatile int32_t t62 = -577527;

    t62 = (x417%((x418>x419)<=x420));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x421 = -7;
	uint16_t x424 = 2322U;
	int32_t t63 = -156129;

    t63 = (x421%((x422>x423)<=x424));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x425 = 3LLU;
	uint64_t x427 = 20404550500282LLU;
	volatile uint64_t x428 = 32495637288022195LLU;
	volatile uint64_t t64 = 1036634528168LLU;

    t64 = (x425%((x426>x427)<=x428));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x429 = 57228780U;
	static int64_t x430 = -11300862880970896LL;
	int64_t x431 = INT64_MIN;
	uint32_t x432 = 6752U;

    t65 = (x429%((x430>x431)<=x432));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x442 = UINT32_MAX;
	int8_t x443 = -1;
	uint16_t x444 = 682U;

    t66 = (x441%((x442>x443)<=x444));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x445 = 23205U;
	volatile int32_t x446 = INT32_MIN;
	int64_t x447 = 15LL;
	static volatile uint32_t x448 = 6447557U;
	uint32_t t67 = 93982692U;

    t67 = (x445%((x446>x447)<=x448));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x449 = INT32_MIN;
	int64_t x451 = -61908202279202LL;
	uint32_t x452 = 1107U;
	volatile int32_t t68 = -208;

    t68 = (x449%((x450>x451)<=x452));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x457 = 82255U;
	uint8_t x458 = UINT8_MAX;
	volatile int32_t x459 = INT32_MAX;
	uint32_t x460 = 63U;

    t69 = (x457%((x458>x459)<=x460));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x462 = 8433U;
	volatile int32_t x463 = INT32_MIN;
	uint16_t x464 = 1U;
	int32_t t70 = 24089867;

    t70 = (x461%((x462>x463)<=x464));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x466 = -1;
	int32_t x467 = INT32_MIN;
	static uint8_t x468 = 3U;

    t71 = (x465%((x466>x467)<=x468));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x485 = UINT8_MAX;
	uint16_t x487 = 9U;
	uint8_t x488 = 11U;

    t72 = (x485%((x486>x487)<=x488));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x494 = 374U;
	uint64_t x495 = 26058LLU;
	static int32_t t73 = -33194997;

    t73 = (x493%((x494>x495)<=x496));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x515 = INT64_MAX;
	static volatile uint32_t x516 = 14461101U;
	int32_t t74 = 0;

    t74 = (x513%((x514>x515)<=x516));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x517 = 740432401962146449LL;
	int64_t x518 = 640253945988LL;
	volatile int16_t x519 = 1;

    t75 = (x517%((x518>x519)<=x520));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x521 = 6690393U;
	int8_t x522 = INT8_MIN;
	static int16_t x523 = 15619;
	uint32_t x524 = 1117938U;
	static volatile uint32_t t76 = 6U;

    t76 = (x521%((x522>x523)<=x524));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x525 = 54U;
	int16_t x527 = 1;
	uint16_t x528 = UINT16_MAX;

    t77 = (x525%((x526>x527)<=x528));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x533 = INT16_MIN;
	volatile int8_t x534 = INT8_MIN;
	static volatile uint64_t x536 = 24885386LLU;
	int32_t t78 = 1420;

    t78 = (x533%((x534>x535)<=x536));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x537 = 2U;
	int32_t x539 = -3056;
	int64_t x540 = 61066240783LL;
	volatile int32_t t79 = -15321273;

    t79 = (x537%((x538>x539)<=x540));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x541 = -1744LL;
	uint16_t x542 = 54U;
	volatile uint16_t x543 = UINT16_MAX;
	volatile int64_t t80 = -4287034488815LL;

    t80 = (x541%((x542>x543)<=x544));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x550 = -1;
	volatile int16_t x551 = 1219;
	static uint16_t x552 = 664U;

    t81 = (x549%((x550>x551)<=x552));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x553 = 14U;
	int16_t x554 = INT16_MIN;
	int32_t x555 = INT32_MIN;
	volatile int64_t x556 = INT64_MAX;
	int32_t t82 = 259;

    t82 = (x553%((x554>x555)<=x556));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x557 = INT32_MIN;
	int8_t x558 = -1;
	int64_t x559 = 782776674691069LL;

    t83 = (x557%((x558>x559)<=x560));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x561 = UINT64_MAX;
	int32_t x562 = 909;
	uint64_t x563 = 3LLU;
	int16_t x564 = INT16_MAX;

    t84 = (x561%((x562>x563)<=x564));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x570 = -25;
	static uint32_t x571 = UINT32_MAX;

    t85 = (x569%((x570>x571)<=x572));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x573 = 1U;
	int8_t x574 = INT8_MAX;
	volatile int32_t x575 = INT32_MIN;
	volatile int32_t t86 = -516841;

    t86 = (x573%((x574>x575)<=x576));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x589 = 7848465U;
	int8_t x590 = -1;
	uint8_t x591 = UINT8_MAX;
	volatile uint32_t t87 = 148652717U;

    t87 = (x589%((x590>x591)<=x592));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x595 = -1;
	volatile uint8_t x596 = 5U;
	int64_t t88 = 1LL;

    t88 = (x593%((x594>x595)<=x596));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x597 = 2289624546942628LLU;
	static int64_t x599 = INT64_MIN;
	uint64_t x600 = UINT64_MAX;

    t89 = (x597%((x598>x599)<=x600));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x605 = UINT8_MAX;
	uint32_t x606 = 0U;
	int8_t x607 = INT8_MAX;
	uint16_t x608 = 844U;

    t90 = (x605%((x606>x607)<=x608));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x609 = 7U;
	int8_t x610 = INT8_MIN;
	int8_t x611 = -1;
	uint64_t x612 = 313LLU;
	int32_t t91 = -767;

    t91 = (x609%((x610>x611)<=x612));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint64_t x613 = UINT64_MAX;
	int32_t x614 = -1;
	int32_t x615 = 889850522;
	volatile uint32_t x616 = UINT32_MAX;
	volatile uint64_t t92 = 13873LLU;

    t92 = (x613%((x614>x615)<=x616));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x625 = INT32_MIN;
	volatile uint16_t x626 = UINT16_MAX;
	volatile uint8_t x627 = 85U;
	volatile uint16_t x628 = 1065U;
	static int32_t t93 = 1;

    t93 = (x625%((x626>x627)<=x628));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x629 = 7997861462597150LL;
	uint64_t x630 = 8038243752997LLU;
	int8_t x631 = -7;
	volatile uint16_t x632 = 6U;
	int64_t t94 = -705229211127LL;

    t94 = (x629%((x630>x631)<=x632));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x633 = 1;
	uint8_t x635 = 52U;
	static volatile int8_t x636 = INT8_MAX;
	volatile int32_t t95 = -15042;

    t95 = (x633%((x634>x635)<=x636));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x645 = INT16_MAX;
	int16_t x646 = INT16_MAX;
	int32_t x647 = INT32_MIN;
	uint32_t x648 = 2010816135U;
	static volatile int32_t t96 = 64100;

    t96 = (x645%((x646>x647)<=x648));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x649 = 9366683U;
	uint16_t x650 = 3002U;
	int64_t x651 = INT64_MIN;
	uint32_t x652 = 673U;
	volatile uint32_t t97 = 6096U;

    t97 = (x649%((x650>x651)<=x652));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x658 = INT16_MIN;
	volatile int32_t x659 = 58;
	volatile uint8_t x660 = UINT8_MAX;
	volatile int32_t t98 = 61445;

    t98 = (x657%((x658>x659)<=x660));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x673 = -30;
	uint16_t x675 = UINT16_MAX;
	int32_t t99 = 4256;

    t99 = (x673%((x674>x675)<=x676));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x677 = INT8_MIN;
	static int64_t x678 = INT64_MAX;
	int8_t x679 = INT8_MIN;
	int32_t x680 = INT32_MAX;
	int32_t t100 = 45145777;

    t100 = (x677%((x678>x679)<=x680));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x681 = INT16_MIN;
	static int8_t x682 = -53;
	int64_t x683 = -477299851015607612LL;
	static uint8_t x684 = 1U;
	int32_t t101 = 1656699;

    t101 = (x681%((x682>x683)<=x684));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x693 = 2U;
	int64_t x694 = INT64_MIN;
	static int16_t x696 = INT16_MAX;
	volatile int32_t t102 = 0;

    t102 = (x693%((x694>x695)<=x696));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x697 = -59;
	uint32_t x698 = UINT32_MAX;
	volatile int32_t x699 = INT32_MAX;
	volatile uint8_t x700 = UINT8_MAX;
	static volatile int32_t t103 = -2890;

    t103 = (x697%((x698>x699)<=x700));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x713 = INT32_MIN;
	static uint32_t x714 = UINT32_MAX;
	static int16_t x715 = -237;
	static volatile int32_t t104 = 276326;

    t104 = (x713%((x714>x715)<=x716));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x737 = INT16_MIN;
	uint8_t x738 = 91U;
	static uint32_t x740 = UINT32_MAX;
	int32_t t105 = 0;

    t105 = (x737%((x738>x739)<=x740));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x741 = INT64_MIN;
	volatile uint64_t x742 = UINT64_MAX;
	int32_t x743 = -23;
	int64_t t106 = -883LL;

    t106 = (x741%((x742>x743)<=x744));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x745 = -2343531LL;
	static uint8_t x746 = 2U;
	volatile int64_t x747 = INT64_MAX;
	volatile uint8_t x748 = 66U;

    t107 = (x745%((x746>x747)<=x748));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x753 = INT64_MIN;
	uint16_t x755 = 755U;
	volatile int64_t t108 = 35972386LL;

    t108 = (x753%((x754>x755)<=x756));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x757 = 410U;
	static int16_t x758 = -1;
	int8_t x760 = INT8_MAX;

    t109 = (x757%((x758>x759)<=x760));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x761 = -1LL;
	int16_t x762 = INT16_MIN;
	int32_t x763 = INT32_MIN;
	static int8_t x764 = INT8_MAX;
	volatile int64_t t110 = -3188236761225044LL;

    t110 = (x761%((x762>x763)<=x764));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x765 = INT64_MIN;
	static int32_t x766 = -1;
	static uint8_t x768 = 1U;
	static volatile int64_t t111 = -273608785014LL;

    t111 = (x765%((x766>x767)<=x768));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x770 = -1;
	int32_t t112 = 2;

    t112 = (x769%((x770>x771)<=x772));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x785 = 17U;
	int32_t x786 = -3611038;
	uint64_t x787 = 54786875810963473LLU;
	uint16_t x788 = UINT16_MAX;
	int32_t t113 = 2019182;

    t113 = (x785%((x786>x787)<=x788));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x802 = INT16_MIN;
	int64_t x803 = -1LL;
	volatile int32_t t114 = -41340;

    t114 = (x801%((x802>x803)<=x804));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x805 = -1;
	int16_t x806 = INT16_MIN;
	int64_t x807 = -96276LL;
	uint32_t x808 = 2566U;
	static volatile int32_t t115 = -856;

    t115 = (x805%((x806>x807)<=x808));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x811 = INT64_MIN;
	static uint16_t x812 = UINT16_MAX;
	int64_t t116 = -273LL;

    t116 = (x809%((x810>x811)<=x812));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x821 = 41U;
	int16_t x822 = INT16_MIN;
	uint32_t x823 = UINT32_MAX;
	volatile uint64_t x824 = 3138833359LLU;
	volatile int32_t t117 = -370;

    t117 = (x821%((x822>x823)<=x824));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x830 = INT8_MIN;
	int32_t t118 = 56732;

    t118 = (x829%((x830>x831)<=x832));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x833 = INT64_MAX;
	int64_t x834 = INT64_MAX;
	uint8_t x835 = 4U;
	volatile uint16_t x836 = UINT16_MAX;
	static volatile int64_t t119 = -55860LL;

    t119 = (x833%((x834>x835)<=x836));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x837 = 1;
	static int8_t x838 = INT8_MIN;
	int8_t x839 = -1;
	volatile int32_t t120 = -183;

    t120 = (x837%((x838>x839)<=x840));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x841 = INT64_MIN;
	int16_t x842 = INT16_MIN;
	uint8_t x843 = 13U;
	static int64_t t121 = 95086448827LL;

    t121 = (x841%((x842>x843)<=x844));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x845 = UINT16_MAX;
	static uint8_t x847 = UINT8_MAX;
	int16_t x848 = 10137;
	int32_t t122 = 55663991;

    t122 = (x845%((x846>x847)<=x848));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x850 = INT64_MAX;
	uint64_t x852 = 20LLU;
	volatile uint32_t t123 = 9453U;

    t123 = (x849%((x850>x851)<=x852));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x862 = 23;
	static int8_t x863 = INT8_MIN;
	uint16_t x864 = 9U;
	int32_t t124 = -3;

    t124 = (x861%((x862>x863)<=x864));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x865 = -1;
	volatile int32_t t125 = 5;

    t125 = (x865%((x866>x867)<=x868));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x873 = INT64_MAX;
	int8_t x874 = INT8_MIN;
	int16_t x875 = INT16_MIN;
	uint8_t x876 = 3U;
	int64_t t126 = 4640LL;

    t126 = (x873%((x874>x875)<=x876));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x893 = -1;
	static int64_t x894 = INT64_MAX;
	static volatile int8_t x895 = INT8_MAX;
	uint16_t x896 = 3U;
	volatile int32_t t127 = -7103;

    t127 = (x893%((x894>x895)<=x896));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x905 = INT32_MAX;
	static uint32_t x906 = UINT32_MAX;
	static int64_t x907 = -1418LL;
	int32_t t128 = -4505964;

    t128 = (x905%((x906>x907)<=x908));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x909 = 3U;
	volatile int32_t x911 = INT32_MIN;
	uint64_t x912 = 1174167LLU;
	static volatile uint32_t t129 = 16211930U;

    t129 = (x909%((x910>x911)<=x912));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x921 = INT16_MIN;
	int64_t x922 = 860832043375410LL;
	int16_t x923 = -1;
	uint8_t x924 = 1U;
	volatile int32_t t130 = 106;

    t130 = (x921%((x922>x923)<=x924));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x929 = INT8_MAX;
	static int16_t x930 = INT16_MIN;
	int32_t t131 = 9745;

    t131 = (x929%((x930>x931)<=x932));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x933 = -1359;
	int16_t x934 = INT16_MIN;
	int32_t x935 = 8175766;
	volatile uint64_t x936 = 61LLU;
	volatile int32_t t132 = 267295;

    t132 = (x933%((x934>x935)<=x936));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x937 = 84U;
	int32_t x939 = INT32_MAX;
	static volatile int32_t t133 = -1759;

    t133 = (x937%((x938>x939)<=x940));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x945 = 330788609LLU;
	static volatile int8_t x946 = -11;
	int8_t x947 = INT8_MAX;
	uint8_t x948 = 2U;
	volatile uint64_t t134 = 914294135473LLU;

    t134 = (x945%((x946>x947)<=x948));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x969 = INT16_MAX;
	uint8_t x970 = 32U;
	volatile int64_t x971 = INT64_MIN;
	static uint16_t x972 = 25533U;

    t135 = (x969%((x970>x971)<=x972));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x977 = 1773076893LLU;
	int16_t x978 = -1;
	int16_t x979 = -1;
	volatile uint64_t t136 = 967LLU;

    t136 = (x977%((x978>x979)<=x980));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x981 = 18U;
	static volatile uint64_t x982 = 17LLU;

    t137 = (x981%((x982>x983)<=x984));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x985 = -1;
	uint32_t x986 = 181U;
	uint16_t x987 = 2917U;
	uint32_t x988 = 430749069U;
	int32_t t138 = 37;

    t138 = (x985%((x986>x987)<=x988));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x993 = INT64_MIN;
	int32_t x994 = INT32_MAX;
	int32_t x995 = -1;
	int8_t x996 = INT8_MAX;
	volatile int64_t t139 = 995281625LL;

    t139 = (x993%((x994>x995)<=x996));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1005 = 10808LL;
	static int64_t x1006 = INT64_MAX;
	int64_t x1007 = INT64_MAX;
	volatile int64_t t140 = -3288833881669477LL;

    t140 = (x1005%((x1006>x1007)<=x1008));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1009 = -7LL;
	int8_t x1010 = INT8_MIN;
	uint16_t x1012 = 1131U;
	volatile int64_t t141 = 1424294328135LL;

    t141 = (x1009%((x1010>x1011)<=x1012));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x1014 = INT16_MIN;
	int64_t x1015 = INT64_MIN;
	volatile uint32_t x1016 = UINT32_MAX;
	volatile int32_t t142 = 1;

    t142 = (x1013%((x1014>x1015)<=x1016));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x1021 = UINT16_MAX;
	uint8_t x1022 = UINT8_MAX;
	volatile int32_t x1023 = -1;
	int8_t x1024 = 35;
	volatile int32_t t143 = -24882;

    t143 = (x1021%((x1022>x1023)<=x1024));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1029 = 75U;
	int32_t x1030 = INT32_MIN;
	int64_t x1031 = INT64_MAX;
	uint16_t x1032 = 8479U;
	int32_t t144 = 1;

    t144 = (x1029%((x1030>x1031)<=x1032));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1033 = INT16_MIN;
	int32_t x1034 = INT32_MIN;
	uint8_t x1035 = UINT8_MAX;
	uint16_t x1036 = 2U;

    t145 = (x1033%((x1034>x1035)<=x1036));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1037 = 5U;
	static uint32_t x1038 = 5004499U;
	uint8_t x1040 = UINT8_MAX;

    t146 = (x1037%((x1038>x1039)<=x1040));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x1041 = UINT8_MAX;
	int8_t x1043 = INT8_MAX;
	static uint8_t x1044 = 4U;

    t147 = (x1041%((x1042>x1043)<=x1044));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1049 = INT16_MIN;
	volatile int16_t x1050 = -8984;
	int32_t x1051 = INT32_MAX;
	int8_t x1052 = INT8_MAX;
	int32_t t148 = 93530034;

    t148 = (x1049%((x1050>x1051)<=x1052));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x1058 = 108U;
	int8_t x1059 = 1;
	int16_t x1060 = 3467;

    t149 = (x1057%((x1058>x1059)<=x1060));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1061 = UINT32_MAX;
	volatile int32_t x1062 = INT32_MIN;
	volatile uint32_t x1064 = 62195878U;

    t150 = (x1061%((x1062>x1063)<=x1064));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1065 = 1;
	int16_t x1066 = INT16_MAX;
	int32_t x1067 = INT32_MIN;
	uint32_t x1068 = UINT32_MAX;
	volatile int32_t t151 = 0;

    t151 = (x1065%((x1066>x1067)<=x1068));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x1069 = INT32_MIN;
	volatile int64_t x1070 = INT64_MIN;
	uint64_t x1072 = 47472737892LLU;
	volatile int32_t t152 = 1;

    t152 = (x1069%((x1070>x1071)<=x1072));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1077 = INT64_MIN;
	int32_t x1078 = -67;
	uint32_t x1080 = UINT32_MAX;
	volatile int64_t t153 = 1046900509412LL;

    t153 = (x1077%((x1078>x1079)<=x1080));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x1097 = INT64_MAX;
	uint8_t x1100 = UINT8_MAX;
	int64_t t154 = 188LL;

    t154 = (x1097%((x1098>x1099)<=x1100));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x1101 = 2;
	uint16_t x1102 = UINT16_MAX;
	static volatile uint16_t x1104 = 90U;
	static int32_t t155 = 773651;

    t155 = (x1101%((x1102>x1103)<=x1104));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x1113 = INT64_MIN;
	static uint8_t x1114 = 92U;
	int32_t x1115 = -2655386;
	static int32_t x1116 = INT32_MAX;
	int64_t t156 = 10027645628200432LL;

    t156 = (x1113%((x1114>x1115)<=x1116));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1125 = 380776805785623502LL;
	int64_t x1126 = INT64_MIN;
	int64_t x1127 = 0LL;
	static uint32_t x1128 = 12256U;
	int64_t t157 = -95398LL;

    t157 = (x1125%((x1126>x1127)<=x1128));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x1129 = INT32_MIN;
	int16_t x1131 = 553;
	int64_t x1132 = INT64_MAX;

    t158 = (x1129%((x1130>x1131)<=x1132));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint64_t x1157 = 968LLU;
	int8_t x1159 = -1;
	int32_t x1160 = 20065;
	volatile uint64_t t159 = 9006637LLU;

    t159 = (x1157%((x1158>x1159)<=x1160));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1161 = INT64_MIN;
	int16_t x1162 = -21;
	volatile uint32_t x1163 = 2536U;
	uint16_t x1164 = UINT16_MAX;
	int64_t t160 = 216246007790248LL;

    t160 = (x1161%((x1162>x1163)<=x1164));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x1166 = 267241640071076354LLU;
	static int64_t x1167 = -58228060LL;
	uint32_t t161 = 251U;

    t161 = (x1165%((x1166>x1167)<=x1168));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x1179 = -1LL;
	static uint8_t x1180 = UINT8_MAX;
	int32_t t162 = 3287;

    t162 = (x1177%((x1178>x1179)<=x1180));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x1185 = INT64_MIN;
	int16_t x1186 = INT16_MIN;
	static int64_t x1188 = 56LL;
	volatile int64_t t163 = -233908376735LL;

    t163 = (x1185%((x1186>x1187)<=x1188));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x1189 = 2279165457LLU;
	static volatile int8_t x1190 = -1;
	int64_t x1192 = 17LL;
	volatile uint64_t t164 = 25147LLU;

    t164 = (x1189%((x1190>x1191)<=x1192));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1194 = INT64_MIN;
	uint16_t x1195 = 11U;
	int32_t x1196 = INT32_MAX;

    t165 = (x1193%((x1194>x1195)<=x1196));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1201 = -1LL;
	int32_t x1202 = 3601994;
	uint32_t x1203 = 3U;
	static int64_t x1204 = INT64_MAX;

    t166 = (x1201%((x1202>x1203)<=x1204));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1217 = INT64_MIN;
	static int32_t x1218 = INT32_MIN;
	uint64_t x1220 = 181306474LLU;
	volatile int64_t t167 = 8095678LL;

    t167 = (x1217%((x1218>x1219)<=x1220));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x1225 = INT8_MAX;
	uint16_t x1226 = 23U;
	volatile int8_t x1227 = -1;
	static volatile int32_t t168 = -487546;

    t168 = (x1225%((x1226>x1227)<=x1228));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x1237 = -1;
	int64_t x1238 = 580LL;
	int64_t x1239 = INT64_MIN;
	uint32_t x1240 = UINT32_MAX;
	static volatile int32_t t169 = 172687;

    t169 = (x1237%((x1238>x1239)<=x1240));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x1253 = 59U;
	static int16_t x1255 = -1;
	int16_t x1256 = INT16_MAX;
	volatile int32_t t170 = -247629;

    t170 = (x1253%((x1254>x1255)<=x1256));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1261 = 990625013LLU;
	uint32_t x1262 = 60U;
	int64_t x1263 = 715991559803116LL;
	uint32_t x1264 = 239623U;
	volatile uint64_t t171 = 6941LLU;

    t171 = (x1261%((x1262>x1263)<=x1264));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1265 = 44LL;
	int64_t x1266 = -1LL;
	volatile int16_t x1267 = INT16_MAX;

    t172 = (x1265%((x1266>x1267)<=x1268));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x1273 = -1;
	static volatile int16_t x1274 = INT16_MAX;
	int64_t x1275 = -982LL;
	volatile uint32_t x1276 = 360192U;
	volatile int32_t t173 = 235;

    t173 = (x1273%((x1274>x1275)<=x1276));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1285 = UINT32_MAX;
	static int16_t x1286 = -56;
	uint32_t x1288 = UINT32_MAX;
	volatile uint32_t t174 = 1482824U;

    t174 = (x1285%((x1286>x1287)<=x1288));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1289 = UINT8_MAX;
	volatile int32_t t175 = 85115;

    t175 = (x1289%((x1290>x1291)<=x1292));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x1293 = 14524726983322230LLU;
	uint16_t x1294 = 658U;
	int32_t x1295 = -1;
	uint64_t t176 = 3475LLU;

    t176 = (x1293%((x1294>x1295)<=x1296));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1297 = -1;
	int16_t x1298 = INT16_MAX;
	int16_t x1299 = INT16_MIN;
	volatile uint64_t x1300 = 169350732685LLU;
	volatile int32_t t177 = -37;

    t177 = (x1297%((x1298>x1299)<=x1300));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1314 = UINT64_MAX;
	volatile uint8_t x1315 = UINT8_MAX;
	uint8_t x1316 = UINT8_MAX;
	static uint64_t t178 = 27687908270771068LLU;

    t178 = (x1313%((x1314>x1315)<=x1316));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1317 = INT64_MAX;
	int64_t t179 = 82LL;

    t179 = (x1317%((x1318>x1319)<=x1320));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1325 = INT32_MAX;
	int8_t x1326 = INT8_MIN;
	int64_t x1327 = INT64_MAX;
	uint64_t x1328 = 4394039LLU;
	int32_t t180 = 508;

    t180 = (x1325%((x1326>x1327)<=x1328));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1330 = INT64_MIN;
	static int8_t x1331 = 1;
	uint64_t x1332 = 3744723LLU;
	volatile int32_t t181 = 2208;

    t181 = (x1329%((x1330>x1331)<=x1332));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x1333 = INT64_MAX;
	int8_t x1334 = -1;
	uint32_t x1335 = 3U;
	volatile int64_t t182 = -1150561LL;

    t182 = (x1333%((x1334>x1335)<=x1336));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1345 = UINT64_MAX;
	int64_t x1346 = 198073590376LL;
	uint64_t x1347 = 59LLU;
	static int16_t x1348 = 52;
	uint64_t t183 = 539116454022LLU;

    t183 = (x1345%((x1346>x1347)<=x1348));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1357 = 2122;
	uint8_t x1360 = UINT8_MAX;
	int32_t t184 = 768564;

    t184 = (x1357%((x1358>x1359)<=x1360));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1369 = 47LL;
	static int16_t x1370 = -1;
	static volatile uint16_t x1371 = 8U;
	int8_t x1372 = 1;
	int64_t t185 = -1140761294LL;

    t185 = (x1369%((x1370>x1371)<=x1372));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x1373 = INT8_MIN;
	volatile int64_t x1374 = INT64_MAX;
	static int64_t x1375 = -1LL;
	volatile int8_t x1376 = 2;
	static volatile int32_t t186 = 0;

    t186 = (x1373%((x1374>x1375)<=x1376));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1381 = INT8_MIN;
	volatile int16_t x1382 = 163;
	int64_t x1383 = INT64_MAX;
	static volatile int32_t t187 = -1;

    t187 = (x1381%((x1382>x1383)<=x1384));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1386 = INT64_MIN;
	uint16_t x1387 = 0U;
	volatile uint64_t x1388 = UINT64_MAX;
	volatile int32_t t188 = 72898783;

    t188 = (x1385%((x1386>x1387)<=x1388));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x1389 = 2074059;
	int16_t x1390 = -1;
	int8_t x1391 = -1;
	static volatile int32_t x1392 = INT32_MAX;
	volatile int32_t t189 = -206;

    t189 = (x1389%((x1390>x1391)<=x1392));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1397 = -1;
	int8_t x1398 = INT8_MAX;
	volatile int32_t x1399 = 92720;
	volatile int16_t x1400 = 6;
	volatile int32_t t190 = -3677609;

    t190 = (x1397%((x1398>x1399)<=x1400));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1410 = -1;
	static volatile int8_t x1411 = INT8_MAX;
	volatile uint32_t x1412 = UINT32_MAX;
	uint32_t t191 = 527938583U;

    t191 = (x1409%((x1410>x1411)<=x1412));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1417 = INT64_MIN;
	static uint8_t x1418 = UINT8_MAX;
	volatile int64_t t192 = 33840910428311347LL;

    t192 = (x1417%((x1418>x1419)<=x1420));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x1421 = UINT8_MAX;
	int32_t x1422 = 115;
	int64_t x1423 = -1LL;
	uint32_t x1424 = 93U;
	volatile int32_t t193 = -182;

    t193 = (x1421%((x1422>x1423)<=x1424));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1429 = INT8_MIN;
	volatile int16_t x1431 = -2;
	int64_t x1432 = INT64_MAX;
	static volatile int32_t t194 = -1320846;

    t194 = (x1429%((x1430>x1431)<=x1432));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1437 = -1LL;
	static int32_t x1438 = 0;
	int16_t x1439 = -6537;
	uint32_t x1440 = UINT32_MAX;

    t195 = (x1437%((x1438>x1439)<=x1440));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1441 = INT32_MIN;
	volatile int32_t x1442 = -1;
	int64_t x1443 = 7065LL;
	uint8_t x1444 = 126U;
	volatile int32_t t196 = 4;

    t196 = (x1441%((x1442>x1443)<=x1444));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x1445 = INT8_MIN;
	int32_t x1446 = INT32_MIN;
	volatile int64_t x1447 = INT64_MIN;
	int8_t x1448 = 2;

    t197 = (x1445%((x1446>x1447)<=x1448));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1449 = UINT64_MAX;
	static uint16_t x1451 = 3U;
	uint8_t x1452 = 60U;
	volatile uint64_t t198 = 6588674LLU;

    t198 = (x1449%((x1450>x1451)<=x1452));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1461 = -1LL;
	int8_t x1462 = -18;
	volatile uint8_t x1464 = 60U;
	volatile int64_t t199 = -1991911475LL;

    t199 = (x1461%((x1462>x1463)<=x1464));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

