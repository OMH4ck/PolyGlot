
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

int8_t x11 = 14;
volatile int8_t x17 = INT8_MIN;
int16_t x23 = -1;
volatile int64_t x40 = INT64_MIN;
int64_t x80 = INT64_MIN;
volatile int32_t x81 = INT32_MAX;
uint8_t x83 = 0U;
static int8_t x92 = INT8_MIN;
int16_t x100 = -1107;
static int32_t t13 = -1497;
uint16_t x118 = UINT16_MAX;
int32_t x134 = -1;
static volatile int32_t t17 = -1037645298;
int64_t x145 = -1LL;
static int64_t x161 = INT64_MAX;
volatile int64_t x162 = INT64_MAX;
static int16_t x163 = INT16_MIN;
int64_t t22 = -14286374438539030LL;
int16_t x185 = -4766;
int8_t x188 = INT8_MIN;
int32_t t25 = -435;
uint16_t x197 = 43U;
uint16_t x200 = UINT16_MAX;
static int16_t x221 = INT16_MIN;
volatile int8_t x222 = INT8_MIN;
static volatile int32_t x223 = -1;
int32_t t27 = 1004756178;
int64_t x229 = 184300411529LL;
int8_t x235 = -1;
int16_t x255 = 5976;
static volatile uint8_t x256 = UINT8_MAX;
int16_t x261 = 1;
volatile uint16_t x263 = UINT16_MAX;
volatile uint16_t x277 = UINT16_MAX;
uint16_t x280 = UINT16_MAX;
volatile int8_t x281 = 9;
int16_t x282 = INT16_MIN;
int32_t t33 = -24533;
int8_t x289 = -3;
uint64_t x298 = 83476057751747LLU;
int64_t x304 = -1LL;
volatile uint32_t t36 = 933430605U;
int64_t t39 = 31968LL;
int64_t x354 = INT64_MAX;
int16_t x355 = 0;
uint64_t t41 = 134521152194672LLU;
static int16_t x386 = -1;
static volatile int32_t t43 = 5528155;
int32_t x408 = INT32_MAX;
uint8_t x432 = 47U;
volatile int16_t x433 = -1;
volatile int8_t x448 = -1;
int32_t t52 = -13;
int16_t x485 = INT16_MIN;
static int16_t x490 = INT16_MIN;
static int8_t x491 = -1;
static uint16_t x495 = 16740U;
volatile int16_t x515 = 375;
static int8_t x516 = INT8_MIN;
volatile int64_t t57 = -1322635202101528LL;
static int16_t x524 = INT16_MAX;
int16_t x528 = INT16_MIN;
volatile int32_t t61 = -649013334;
int32_t x553 = INT32_MIN;
volatile int64_t x555 = INT64_MIN;
static int64_t x556 = 653520539241182232LL;
int16_t x576 = -1;
volatile int32_t t64 = -7989;
static volatile uint32_t x618 = 256807321U;
volatile int32_t t66 = 506;
int8_t x622 = -1;
int64_t x670 = -155716769554LL;
uint64_t x671 = 6181897666367748681LLU;
int32_t x672 = 75017344;
volatile int32_t t70 = 1;
static volatile int64_t x675 = 15817180643553LL;
int8_t x679 = -1;
uint64_t x702 = 25572638939736832LLU;
int64_t x704 = 858923735LL;
volatile int8_t x706 = INT8_MIN;
int16_t x709 = INT16_MIN;
uint8_t x725 = 25U;
static uint8_t x726 = UINT8_MAX;
int32_t x728 = INT32_MIN;
int32_t x753 = INT32_MIN;
static uint16_t x754 = UINT16_MAX;
int32_t x756 = INT32_MIN;
uint8_t x784 = 60U;
int32_t x793 = INT32_MAX;
static volatile int8_t x794 = -16;
uint16_t x795 = UINT16_MAX;
static int8_t x796 = -13;
int8_t x800 = -1;
volatile int32_t t82 = 416;
volatile int32_t x812 = -1;
uint8_t x837 = 2U;
int8_t x838 = -1;
uint8_t x839 = 73U;
int8_t x840 = -1;
volatile int32_t t86 = 32502;
uint16_t x845 = 7U;
int32_t x857 = INT32_MAX;
volatile int16_t x858 = -1;
static int32_t x860 = INT32_MAX;
int32_t t88 = -11298;
int32_t t89 = 363;
int16_t x868 = INT16_MAX;
uint64_t x906 = 16767992235LLU;
static uint32_t x930 = UINT32_MAX;
static int64_t x932 = INT64_MIN;
int32_t x937 = INT32_MIN;
static int32_t t98 = -5012;
int8_t x999 = INT8_MAX;
uint32_t t102 = 399107U;
int32_t t105 = -3759;
uint8_t x1051 = UINT8_MAX;
static int32_t t107 = 13014;
int32_t x1061 = INT32_MAX;
int8_t x1062 = INT8_MIN;
volatile int16_t x1064 = 10;
volatile int32_t t108 = 107292;
int8_t x1073 = -1;
static uint8_t x1083 = 28U;
static volatile int8_t x1094 = -20;
int64_t x1095 = INT64_MAX;
uint8_t x1096 = 3U;
static int8_t x1119 = -1;
uint64_t x1145 = 146400310557LLU;
uint64_t t116 = 206245214614131021LLU;
uint64_t x1150 = UINT64_MAX;
volatile int8_t x1154 = -1;
int16_t x1155 = INT16_MIN;
volatile int32_t t118 = 788401212;
uint64_t x1199 = UINT64_MAX;
int16_t x1202 = INT16_MIN;
volatile int64_t x1203 = 3899066096161LL;
uint8_t x1223 = 18U;
static int64_t x1230 = -1LL;
volatile int64_t x1231 = 140LL;
volatile int32_t t124 = 738446;
int32_t t125 = 7312;
static volatile uint64_t x1242 = UINT64_MAX;
int32_t t127 = -704909602;
static volatile int64_t t128 = 90142533LL;
int32_t x1254 = INT32_MIN;
static int64_t x1256 = INT64_MIN;
volatile int8_t x1257 = INT8_MIN;
uint32_t x1258 = 4967981U;
volatile int64_t x1268 = INT64_MIN;
uint8_t x1277 = UINT8_MAX;
volatile uint8_t x1281 = UINT8_MAX;
static int32_t t133 = -18866207;
volatile uint8_t x1305 = 51U;
volatile int32_t x1316 = -689214550;
int64_t x1327 = -1LL;
int64_t x1341 = INT64_MAX;
volatile uint32_t x1343 = 5297U;
int8_t x1345 = INT8_MIN;
static volatile int16_t x1360 = INT16_MIN;
volatile uint32_t x1366 = UINT32_MAX;
int32_t t144 = -24;
volatile int32_t x1373 = INT32_MIN;
volatile int16_t x1376 = INT16_MIN;
uint32_t x1382 = UINT32_MAX;
uint64_t x1385 = 5LLU;
uint32_t x1387 = UINT32_MAX;
int16_t x1388 = INT16_MIN;
static volatile uint64_t t148 = 155592LLU;
static int8_t x1389 = 1;
int64_t x1401 = 212240453065LL;
uint32_t x1403 = UINT32_MAX;
volatile int8_t x1404 = INT8_MAX;
volatile int32_t t151 = -55625;
int32_t t152 = 1;
int16_t x1423 = -1;
int32_t t155 = 5186;
uint8_t x1439 = 11U;
int16_t x1440 = 8;
static volatile int32_t t157 = 3;
static int64_t x1485 = -1LL;
volatile int8_t x1506 = -6;
static volatile int32_t x1518 = INT32_MAX;
static volatile int32_t t164 = 88478262;
int8_t x1528 = INT8_MAX;
int32_t x1565 = 843853820;
volatile uint16_t x1568 = 11U;
int32_t t169 = 11316920;
int16_t x1573 = -15651;
static uint64_t t174 = 8135LLU;
static uint64_t x1625 = UINT64_MAX;
int16_t x1627 = -15;
static int8_t x1639 = -5;
int32_t x1641 = -1;
int32_t t178 = -23152663;
volatile int64_t x1682 = 2218LL;
int8_t x1753 = -1;
int32_t x1769 = INT32_MIN;
static int64_t x1772 = 5623733306LL;
int8_t x1781 = -1;
int32_t x1786 = -14;
int32_t t190 = -184344;
int64_t x1803 = -2058908897LL;
int8_t x1837 = INT8_MAX;
static int8_t x1846 = -1;
int8_t x1849 = INT8_MIN;
int8_t x1863 = -1;
int32_t t198 = -68;


void f0(void) {
    	volatile int64_t x5 = INT64_MAX;
	static uint64_t x6 = UINT64_MAX;
	static int8_t x7 = 0;
	static int32_t x8 = INT32_MIN;
	int64_t t0 = -30190326LL;

    t0 = (x5%((x6+x7)>x8));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x9 = -1;
	volatile int16_t x10 = INT16_MAX;
	uint16_t x12 = 743U;
	volatile int32_t t1 = 763;

    t1 = (x9%((x10+x11)>x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MIN;
	uint8_t x14 = 3U;
	int16_t x15 = -1;
	int32_t x16 = -1;
	volatile int64_t t2 = -29936763138LL;

    t2 = (x13%((x14+x15)>x16));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x18 = 30360820U;
	volatile int8_t x19 = INT8_MIN;
	static volatile int8_t x20 = INT8_MAX;
	static volatile int32_t t3 = -4273;

    t3 = (x17%((x18+x19)>x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = -1;
	int16_t x22 = INT16_MAX;
	static int32_t x24 = -1;
	int32_t t4 = 1;

    t4 = (x21%((x22+x23)>x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x33 = INT64_MIN;
	int32_t x34 = -807;
	volatile int8_t x35 = -6;
	int16_t x36 = INT16_MIN;
	static volatile int64_t t5 = -813086411413LL;

    t5 = (x33%((x34+x35)>x36));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x37 = 0;
	static volatile int32_t x38 = -959;
	volatile int32_t x39 = 1879581;
	int32_t t6 = 1;

    t6 = (x37%((x38+x39)>x40));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x65 = INT32_MIN;
	uint16_t x66 = UINT16_MAX;
	uint64_t x67 = 329003139387LLU;
	static volatile uint32_t x68 = UINT32_MAX;
	volatile int32_t t7 = -184;

    t7 = (x65%((x66+x67)>x68));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x69 = 57119690379LLU;
	static int16_t x70 = 25;
	static int32_t x71 = -1;
	int64_t x72 = -30331101464LL;
	volatile uint64_t t8 = 8813129041LLU;

    t8 = (x69%((x70+x71)>x72));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x73 = 28U;
	uint64_t x74 = 58201LLU;
	static uint16_t x75 = 3U;
	volatile int32_t x76 = 581;
	static int32_t t9 = 77983072;

    t9 = (x73%((x74+x75)>x76));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x77 = -1;
	int32_t x78 = -1;
	int16_t x79 = 1;
	int32_t t10 = 8104;

    t10 = (x77%((x78+x79)>x80));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint32_t x82 = UINT32_MAX;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t11 = 449731;

    t11 = (x81%((x82+x83)>x84));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MAX;
	int16_t x91 = INT16_MIN;
	volatile int32_t t12 = 342891333;

    t12 = (x89%((x90+x91)>x92));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x97 = 11U;
	volatile int64_t x98 = INT64_MAX;
	int64_t x99 = INT64_MIN;

    t13 = (x97%((x98+x99)>x100));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x101 = INT8_MIN;
	volatile int64_t x102 = -1LL;
	int16_t x103 = INT16_MAX;
	uint16_t x104 = 54U;
	static int32_t t14 = 94576;

    t14 = (x101%((x102+x103)>x104));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x117 = INT8_MIN;
	int8_t x119 = 40;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t15 = 123871307;

    t15 = (x117%((x118+x119)>x120));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x125 = -64969LL;
	uint8_t x126 = 119U;
	int16_t x127 = 3659;
	uint64_t x128 = 17LLU;
	static volatile int64_t t16 = -11950059LL;

    t16 = (x125%((x126+x127)>x128));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x133 = -2;
	int8_t x135 = 3;
	uint8_t x136 = 1U;

    t17 = (x133%((x134+x135)>x136));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint32_t x137 = UINT32_MAX;
	int64_t x138 = 26989639234LL;
	uint64_t x139 = 14615032LLU;
	uint32_t x140 = 99146U;
	static volatile uint32_t t18 = 108741U;

    t18 = (x137%((x138+x139)>x140));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x141 = UINT32_MAX;
	static uint64_t x142 = UINT64_MAX;
	volatile int16_t x143 = 449;
	uint32_t x144 = 226U;
	uint32_t t19 = 1096U;

    t19 = (x141%((x142+x143)>x144));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x146 = 0;
	uint8_t x147 = 63U;
	int32_t x148 = -200693;
	volatile int64_t t20 = -66905021927831LL;

    t20 = (x145%((x146+x147)>x148));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x157 = 7;
	int16_t x158 = INT16_MIN;
	int64_t x159 = 1956445275196815LL;
	int32_t x160 = -1;
	volatile int32_t t21 = -357100877;

    t21 = (x157%((x158+x159)>x160));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x164 = 914731998U;

    t22 = (x161%((x162+x163)>x164));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MIN;
	uint16_t x183 = UINT16_MAX;
	int32_t x184 = INT32_MIN;
	int32_t t23 = 283179;

    t23 = (x181%((x182+x183)>x184));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x186 = UINT64_MAX;
	int8_t x187 = -1;
	volatile int32_t t24 = 13;

    t24 = (x185%((x186+x187)>x188));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MIN;
	uint64_t x191 = UINT64_MAX;
	int8_t x192 = INT8_MAX;

    t25 = (x189%((x190+x191)>x192));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x198 = 17059U;
	volatile uint32_t x199 = 44795240U;
	int32_t t26 = 841829128;

    t26 = (x197%((x198+x199)>x200));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x224 = 595LLU;

    t27 = (x221%((x222+x223)>x224));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x230 = UINT16_MAX;
	int32_t x231 = -1;
	uint8_t x232 = 0U;
	static int64_t t28 = -2835121787701LL;

    t28 = (x229%((x230+x231)>x232));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x233 = -1LL;
	int8_t x234 = -1;
	int32_t x236 = -33;
	volatile int64_t t29 = -28113043304LL;

    t29 = (x233%((x234+x235)>x236));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x253 = INT16_MIN;
	static uint32_t x254 = 9593U;
	volatile int32_t t30 = 1016914525;

    t30 = (x253%((x254+x255)>x256));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x262 = 147U;
	volatile uint16_t x264 = 747U;
	int32_t t31 = 6309;

    t31 = (x261%((x262+x263)>x264));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x278 = INT64_MIN;
	uint64_t x279 = 4LLU;
	int32_t t32 = 7475159;

    t32 = (x277%((x278+x279)>x280));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x283 = UINT8_MAX;
	int32_t x284 = -13184381;

    t33 = (x281%((x282+x283)>x284));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x290 = INT16_MIN;
	int16_t x291 = -1;
	static volatile int32_t x292 = INT32_MIN;
	volatile int32_t t34 = -2;

    t34 = (x289%((x290+x291)>x292));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x297 = INT64_MIN;
	uint32_t x299 = 564323245U;
	static volatile uint16_t x300 = 0U;
	volatile int64_t t35 = 97498147LL;

    t35 = (x297%((x298+x299)>x300));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x301 = 4351721U;
	uint32_t x302 = 418425802U;
	int16_t x303 = INT16_MAX;

    t36 = (x301%((x302+x303)>x304));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x309 = INT64_MIN;
	uint64_t x310 = 8360LLU;
	volatile int64_t x311 = -1LL;
	uint32_t x312 = 8149U;
	int64_t t37 = 105369605790398LL;

    t37 = (x309%((x310+x311)>x312));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x317 = INT32_MIN;
	volatile int16_t x318 = -1;
	uint32_t x319 = 128321U;
	uint8_t x320 = UINT8_MAX;
	int32_t t38 = -36361;

    t38 = (x317%((x318+x319)>x320));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x321 = -1LL;
	uint16_t x322 = UINT16_MAX;
	uint32_t x323 = UINT32_MAX;
	int16_t x324 = INT16_MAX;

    t39 = (x321%((x322+x323)>x324));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x337 = INT32_MIN;
	static int16_t x338 = -1;
	int32_t x339 = INT32_MAX;
	volatile int8_t x340 = INT8_MIN;
	int32_t t40 = -641740334;

    t40 = (x337%((x338+x339)>x340));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x353 = 3387413231373LLU;
	uint32_t x356 = 899688741U;

    t41 = (x353%((x354+x355)>x356));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x357 = INT32_MIN;
	int32_t x358 = INT32_MIN;
	int64_t x359 = 335040911466985479LL;
	uint64_t x360 = 28425226LLU;
	static int32_t t42 = 1;

    t42 = (x357%((x358+x359)>x360));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x385 = 1U;
	uint64_t x387 = UINT64_MAX;
	static int32_t x388 = INT32_MIN;

    t43 = (x385%((x386+x387)>x388));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x393 = INT64_MIN;
	volatile uint16_t x394 = 1830U;
	static int16_t x395 = INT16_MAX;
	static int64_t x396 = -1LL;
	int64_t t44 = 120684016380507157LL;

    t44 = (x393%((x394+x395)>x396));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x405 = INT8_MIN;
	int64_t x406 = 9362960812901LL;
	int32_t x407 = INT32_MIN;
	volatile int32_t t45 = 4;

    t45 = (x405%((x406+x407)>x408));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x425 = INT64_MAX;
	static volatile int16_t x426 = INT16_MAX;
	volatile int8_t x427 = -1;
	uint16_t x428 = 159U;
	int64_t t46 = 36LL;

    t46 = (x425%((x426+x427)>x428));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x429 = -1LL;
	static int16_t x430 = INT16_MAX;
	static uint32_t x431 = 100065U;
	volatile int64_t t47 = 1909639LL;

    t47 = (x429%((x430+x431)>x432));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x434 = INT8_MAX;
	int16_t x435 = INT16_MAX;
	int8_t x436 = 33;
	int32_t t48 = 1;

    t48 = (x433%((x434+x435)>x436));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x437 = UINT64_MAX;
	static int32_t x438 = 1041299;
	int8_t x439 = 0;
	static int32_t x440 = INT32_MIN;
	volatile uint64_t t49 = 506788637966LLU;

    t49 = (x437%((x438+x439)>x440));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x445 = -29;
	int16_t x446 = 12111;
	volatile int8_t x447 = -1;
	int32_t t50 = 19;

    t50 = (x445%((x446+x447)>x448));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x461 = INT8_MIN;
	int16_t x462 = INT16_MIN;
	volatile uint32_t x463 = UINT32_MAX;
	uint16_t x464 = 28U;
	int32_t t51 = 0;

    t51 = (x461%((x462+x463)>x464));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x481 = -1;
	int16_t x482 = -1;
	int16_t x483 = -1;
	int32_t x484 = INT32_MIN;

    t52 = (x481%((x482+x483)>x484));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x486 = 292393948879LLU;
	int32_t x487 = INT32_MIN;
	uint64_t x488 = 3045999LLU;
	int32_t t53 = -8335758;

    t53 = (x485%((x486+x487)>x488));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x489 = INT64_MIN;
	int32_t x492 = INT32_MIN;
	int64_t t54 = -419708LL;

    t54 = (x489%((x490+x491)>x492));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x493 = 7516U;
	static int16_t x494 = INT16_MAX;
	static int32_t x496 = -1;
	volatile int32_t t55 = 108188;

    t55 = (x493%((x494+x495)>x496));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x501 = INT32_MIN;
	uint16_t x502 = UINT16_MAX;
	volatile int32_t x503 = -1;
	int16_t x504 = 640;
	int32_t t56 = -3981743;

    t56 = (x501%((x502+x503)>x504));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x513 = -1LL;
	volatile uint16_t x514 = 7190U;

    t57 = (x513%((x514+x515)>x516));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x517 = 33803LLU;
	uint16_t x518 = UINT16_MAX;
	static uint16_t x519 = UINT16_MAX;
	int32_t x520 = -138038;
	uint64_t t58 = 4545481LLU;

    t58 = (x517%((x518+x519)>x520));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x521 = INT64_MAX;
	static int32_t x522 = INT32_MIN;
	uint32_t x523 = 18U;
	static int64_t t59 = -9993049LL;

    t59 = (x521%((x522+x523)>x524));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x525 = 23;
	volatile uint16_t x526 = UINT16_MAX;
	uint8_t x527 = UINT8_MAX;
	int32_t t60 = 9009;

    t60 = (x525%((x526+x527)>x528));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x545 = INT8_MAX;
	uint16_t x546 = 100U;
	uint64_t x547 = 291LLU;
	static uint32_t x548 = 49U;

    t61 = (x545%((x546+x547)>x548));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint64_t x554 = 1LLU;
	int32_t t62 = 833466455;

    t62 = (x553%((x554+x555)>x556));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x561 = UINT32_MAX;
	int16_t x562 = INT16_MIN;
	uint8_t x563 = 29U;
	int64_t x564 = INT64_MIN;
	uint32_t t63 = 623243U;

    t63 = (x561%((x562+x563)>x564));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x573 = -1;
	uint16_t x574 = UINT16_MAX;
	int32_t x575 = -1;

    t64 = (x573%((x574+x575)>x576));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x593 = -28914;
	volatile int8_t x594 = INT8_MIN;
	static int32_t x595 = INT32_MAX;
	int16_t x596 = -2352;
	volatile int32_t t65 = -26;

    t65 = (x593%((x594+x595)>x596));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x617 = -19;
	int8_t x619 = 36;
	int16_t x620 = 15737;

    t66 = (x617%((x618+x619)>x620));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x621 = 2U;
	int16_t x623 = INT16_MAX;
	static int32_t x624 = INT32_MIN;
	static volatile int32_t t67 = 8;

    t67 = (x621%((x622+x623)>x624));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x629 = UINT64_MAX;
	int32_t x630 = -1;
	int8_t x631 = -1;
	int32_t x632 = INT32_MIN;
	uint64_t t68 = 12127816077276261LLU;

    t68 = (x629%((x630+x631)>x632));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x657 = INT64_MAX;
	uint16_t x658 = UINT16_MAX;
	int64_t x659 = -268216LL;
	volatile int32_t x660 = INT32_MIN;
	int64_t t69 = -1LL;

    t69 = (x657%((x658+x659)>x660));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x669 = INT16_MIN;

    t70 = (x669%((x670+x671)>x672));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x673 = -61;
	static int32_t x674 = INT32_MIN;
	static int32_t x676 = -1;
	static int32_t t71 = 3001999;

    t71 = (x673%((x674+x675)>x676));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x677 = 0;
	static int16_t x678 = 0;
	int32_t x680 = INT32_MIN;
	int32_t t72 = 35604;

    t72 = (x677%((x678+x679)>x680));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x681 = 1914145064397LL;
	int64_t x682 = INT64_MAX;
	int64_t x683 = -1LL;
	int16_t x684 = -1;
	int64_t t73 = 109LL;

    t73 = (x681%((x682+x683)>x684));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x693 = UINT16_MAX;
	static int64_t x694 = -5LL;
	int64_t x695 = 911300842427LL;
	static int64_t x696 = INT64_MIN;
	volatile int32_t t74 = 53;

    t74 = (x693%((x694+x695)>x696));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x701 = UINT32_MAX;
	int8_t x703 = INT8_MIN;
	static volatile uint32_t t75 = 2U;

    t75 = (x701%((x702+x703)>x704));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x705 = 87150083U;
	volatile int16_t x707 = -11858;
	static int16_t x708 = INT16_MIN;
	volatile uint32_t t76 = 443927935U;

    t76 = (x705%((x706+x707)>x708));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x710 = 31709LLU;
	int64_t x711 = INT64_MIN;
	volatile uint64_t x712 = 4077LLU;
	int32_t t77 = -445244045;

    t77 = (x709%((x710+x711)>x712));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x727 = INT8_MIN;
	volatile int32_t t78 = 8;

    t78 = (x725%((x726+x727)>x728));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x755 = -1LL;
	int32_t t79 = 543;

    t79 = (x753%((x754+x755)>x756));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x781 = 10;
	int16_t x782 = -1;
	uint32_t x783 = UINT32_MAX;
	volatile int32_t t80 = -36;

    t80 = (x781%((x782+x783)>x784));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t t81 = 64;

    t81 = (x793%((x794+x795)>x796));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x797 = -1;
	volatile int16_t x798 = INT16_MAX;
	static volatile int16_t x799 = -1;

    t82 = (x797%((x798+x799)>x800));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x809 = 57;
	int8_t x810 = 7;
	int64_t x811 = -1LL;
	int32_t t83 = 12121;

    t83 = (x809%((x810+x811)>x812));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x813 = -10113;
	uint32_t x814 = 1001U;
	int64_t x815 = 170244790700380588LL;
	volatile uint16_t x816 = 1584U;
	int32_t t84 = 20;

    t84 = (x813%((x814+x815)>x816));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x821 = -1;
	static uint32_t x822 = 23771U;
	static int16_t x823 = INT16_MIN;
	int16_t x824 = INT16_MAX;
	int32_t t85 = -3944;

    t85 = (x821%((x822+x823)>x824));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    

    t86 = (x837%((x838+x839)>x840));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x846 = INT32_MIN;
	static volatile int64_t x847 = INT64_MAX;
	int8_t x848 = -1;
	static volatile int32_t t87 = -1;

    t87 = (x845%((x846+x847)>x848));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x859 = UINT32_MAX;

    t88 = (x857%((x858+x859)>x860));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x861 = -6437;
	int32_t x862 = 6422;
	int16_t x863 = -5979;
	static int8_t x864 = -6;

    t89 = (x861%((x862+x863)>x864));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x865 = INT64_MIN;
	int64_t x866 = 471222061311LL;
	int16_t x867 = INT16_MAX;
	volatile int64_t t90 = 1272498355810470761LL;

    t90 = (x865%((x866+x867)>x868));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x869 = INT16_MAX;
	uint64_t x870 = UINT64_MAX;
	int16_t x871 = INT16_MIN;
	static uint64_t x872 = 102237386691LLU;
	volatile int32_t t91 = 1267447;

    t91 = (x869%((x870+x871)>x872));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x901 = UINT16_MAX;
	int8_t x902 = INT8_MIN;
	static uint64_t x903 = 50LLU;
	int32_t x904 = INT32_MAX;
	volatile int32_t t92 = -15372158;

    t92 = (x901%((x902+x903)>x904));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x905 = 33U;
	int32_t x907 = INT32_MIN;
	uint64_t x908 = 1842956044LLU;
	int32_t t93 = 2423;

    t93 = (x905%((x906+x907)>x908));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x929 = 13411522LLU;
	int8_t x931 = INT8_MIN;
	uint64_t t94 = 336134LLU;

    t94 = (x929%((x930+x931)>x932));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x938 = 21068U;
	uint8_t x939 = 3U;
	int32_t x940 = INT32_MIN;
	volatile int32_t t95 = -1;

    t95 = (x937%((x938+x939)>x940));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x941 = 0U;
	uint32_t x942 = UINT32_MAX;
	static uint16_t x943 = UINT16_MAX;
	int16_t x944 = 396;
	volatile int32_t t96 = 1;

    t96 = (x941%((x942+x943)>x944));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x945 = -1808LL;
	static int16_t x946 = INT16_MAX;
	int16_t x947 = -1;
	int16_t x948 = 37;
	volatile int64_t t97 = -377LL;

    t97 = (x945%((x946+x947)>x948));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x957 = -1;
	int32_t x958 = INT32_MAX;
	int64_t x959 = 4376959549LL;
	uint8_t x960 = 3U;

    t98 = (x957%((x958+x959)>x960));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x977 = -1LL;
	int32_t x978 = -1;
	uint16_t x979 = 419U;
	static uint64_t x980 = 71LLU;
	int64_t t99 = 3537401LL;

    t99 = (x977%((x978+x979)>x980));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x985 = INT16_MIN;
	int32_t x986 = -2679085;
	volatile int32_t x987 = -1;
	uint32_t x988 = 126924810U;
	int32_t t100 = -22;

    t100 = (x985%((x986+x987)>x988));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x997 = -2070959LL;
	volatile int16_t x998 = INT16_MIN;
	uint32_t x1000 = 6105424U;
	int64_t t101 = -80642095514301LL;

    t101 = (x997%((x998+x999)>x1000));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x1001 = 3079U;
	static volatile int16_t x1002 = INT16_MAX;
	uint64_t x1003 = 100386039987776LLU;
	int8_t x1004 = 0;

    t102 = (x1001%((x1002+x1003)>x1004));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x1021 = 1282665207842LL;
	int32_t x1022 = INT32_MIN;
	uint64_t x1023 = 5436551542LLU;
	uint8_t x1024 = 21U;
	volatile int64_t t103 = 26999252379295LL;

    t103 = (x1021%((x1022+x1023)>x1024));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint8_t x1029 = 1U;
	int64_t x1030 = -1LL;
	uint64_t x1031 = UINT64_MAX;
	int32_t x1032 = 1804;
	volatile int32_t t104 = 11431629;

    t104 = (x1029%((x1030+x1031)>x1032));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x1037 = -1;
	uint32_t x1038 = 2U;
	int32_t x1039 = INT32_MAX;
	volatile uint32_t x1040 = 12294U;

    t105 = (x1037%((x1038+x1039)>x1040));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x1045 = -1LL;
	int8_t x1046 = 3;
	int8_t x1047 = INT8_MAX;
	int8_t x1048 = INT8_MIN;
	static int64_t t106 = 1934652240623LL;

    t106 = (x1045%((x1046+x1047)>x1048));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x1049 = 3715;
	int32_t x1050 = 1056998;
	volatile uint8_t x1052 = UINT8_MAX;

    t107 = (x1049%((x1050+x1051)>x1052));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x1063 = 309252LLU;

    t108 = (x1061%((x1062+x1063)>x1064));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x1065 = 6;
	int8_t x1066 = 0;
	volatile uint32_t x1067 = 448U;
	uint8_t x1068 = UINT8_MAX;
	int32_t t109 = 52773;

    t109 = (x1065%((x1066+x1067)>x1068));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x1074 = -573;
	int64_t x1075 = 33871623LL;
	int32_t x1076 = INT32_MIN;
	volatile int32_t t110 = -31777835;

    t110 = (x1073%((x1074+x1075)>x1076));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x1081 = INT8_MAX;
	uint16_t x1082 = 7U;
	int32_t x1084 = -1;
	int32_t t111 = 10645160;

    t111 = (x1081%((x1082+x1083)>x1084));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x1093 = UINT32_MAX;
	uint32_t t112 = 11167980U;

    t112 = (x1093%((x1094+x1095)>x1096));

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x1101 = INT8_MIN;
	int32_t x1102 = -301638;
	uint16_t x1103 = 9U;
	uint32_t x1104 = 1U;
	volatile int32_t t113 = 93;

    t113 = (x1101%((x1102+x1103)>x1104));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x1117 = INT32_MIN;
	uint32_t x1118 = UINT32_MAX;
	int32_t x1120 = -474;
	int32_t t114 = -164;

    t114 = (x1117%((x1118+x1119)>x1120));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x1137 = 15U;
	volatile int8_t x1138 = 14;
	volatile int32_t x1139 = -1;
	int16_t x1140 = -1400;
	uint32_t t115 = 112231590U;

    t115 = (x1137%((x1138+x1139)>x1140));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x1146 = 104LLU;
	int64_t x1147 = -280330LL;
	static uint64_t x1148 = 17LLU;

    t116 = (x1145%((x1146+x1147)>x1148));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x1149 = -119;
	uint32_t x1151 = UINT32_MAX;
	uint8_t x1152 = 9U;
	volatile int32_t t117 = -1333;

    t117 = (x1149%((x1150+x1151)>x1152));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x1153 = 121U;
	uint32_t x1156 = 108995U;

    t118 = (x1153%((x1154+x1155)>x1156));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x1177 = 272959442589111LL;
	static volatile int32_t x1178 = 31081;
	int8_t x1179 = -1;
	static int16_t x1180 = INT16_MIN;
	int64_t t119 = 4985923LL;

    t119 = (x1177%((x1178+x1179)>x1180));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x1197 = UINT64_MAX;
	int32_t x1198 = INT32_MAX;
	static uint16_t x1200 = 0U;
	volatile uint64_t t120 = 5031066LLU;

    t120 = (x1197%((x1198+x1199)>x1200));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x1201 = 1LLU;
	int32_t x1204 = 1;
	uint64_t t121 = 626LLU;

    t121 = (x1201%((x1202+x1203)>x1204));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x1209 = 125345119U;
	uint32_t x1210 = 15105U;
	int8_t x1211 = 0;
	int64_t x1212 = INT64_MIN;
	volatile uint32_t t122 = 50709U;

    t122 = (x1209%((x1210+x1211)>x1212));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x1221 = -28;
	uint16_t x1222 = 81U;
	uint32_t x1224 = 0U;
	int32_t t123 = 33;

    t123 = (x1221%((x1222+x1223)>x1224));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x1229 = -1656;
	static int8_t x1232 = INT8_MIN;

    t124 = (x1229%((x1230+x1231)>x1232));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x1233 = INT32_MIN;
	static int64_t x1234 = INT64_MIN;
	uint64_t x1235 = 1339136955212359LLU;
	uint32_t x1236 = UINT32_MAX;

    t125 = (x1233%((x1234+x1235)>x1236));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x1237 = INT16_MIN;
	static uint64_t x1238 = 147520LLU;
	int64_t x1239 = INT64_MIN;
	uint32_t x1240 = 18406U;
	int32_t t126 = -251095;

    t126 = (x1237%((x1238+x1239)>x1240));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x1241 = INT16_MIN;
	int16_t x1243 = INT16_MIN;
	int64_t x1244 = INT64_MAX;

    t127 = (x1241%((x1242+x1243)>x1244));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x1245 = INT64_MIN;
	int64_t x1246 = -1LL;
	uint64_t x1247 = UINT64_MAX;
	uint32_t x1248 = 157235782U;

    t128 = (x1245%((x1246+x1247)>x1248));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x1253 = 206;
	int64_t x1255 = 425299LL;
	int32_t t129 = -1773190;

    t129 = (x1253%((x1254+x1255)>x1256));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x1259 = -207;
	uint16_t x1260 = 9U;
	volatile int32_t t130 = 1437;

    t130 = (x1257%((x1258+x1259)>x1260));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x1265 = 507;
	int8_t x1266 = INT8_MAX;
	static uint8_t x1267 = 31U;
	int32_t t131 = -1;

    t131 = (x1265%((x1266+x1267)>x1268));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x1278 = 15LL;
	int16_t x1279 = 53;
	int32_t x1280 = INT32_MIN;
	int32_t t132 = 345281951;

    t132 = (x1277%((x1278+x1279)>x1280));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x1282 = UINT32_MAX;
	int32_t x1283 = 7304;
	static volatile int64_t x1284 = -141LL;

    t133 = (x1281%((x1282+x1283)>x1284));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x1285 = INT32_MIN;
	uint64_t x1286 = UINT64_MAX;
	static uint32_t x1287 = UINT32_MAX;
	volatile int64_t x1288 = 27LL;
	static volatile int32_t t134 = -7;

    t134 = (x1285%((x1286+x1287)>x1288));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x1289 = INT64_MAX;
	int16_t x1290 = INT16_MAX;
	int8_t x1291 = INT8_MIN;
	int8_t x1292 = -1;
	int64_t t135 = -3LL;

    t135 = (x1289%((x1290+x1291)>x1292));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1306 = 32875688081LL;
	uint64_t x1307 = 190LLU;
	volatile uint32_t x1308 = 4U;
	int32_t t136 = 343;

    t136 = (x1305%((x1306+x1307)>x1308));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x1313 = 66986836227361231LLU;
	static uint16_t x1314 = 8U;
	uint8_t x1315 = UINT8_MAX;
	static volatile uint64_t t137 = 1LLU;

    t137 = (x1313%((x1314+x1315)>x1316));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x1317 = -2;
	int8_t x1318 = INT8_MAX;
	static volatile int32_t x1319 = INT32_MIN;
	volatile uint64_t x1320 = 1LLU;
	volatile int32_t t138 = 48150;

    t138 = (x1317%((x1318+x1319)>x1320));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1325 = 0;
	uint32_t x1326 = 1453783U;
	uint8_t x1328 = UINT8_MAX;
	volatile int32_t t139 = 956321159;

    t139 = (x1325%((x1326+x1327)>x1328));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x1333 = -1;
	int16_t x1334 = INT16_MIN;
	uint32_t x1335 = UINT32_MAX;
	uint32_t x1336 = 0U;
	volatile int32_t t140 = 1380;

    t140 = (x1333%((x1334+x1335)>x1336));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x1342 = -20;
	uint32_t x1344 = 3U;
	int64_t t141 = 623699550LL;

    t141 = (x1341%((x1342+x1343)>x1344));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x1346 = 124609553392252LLU;
	volatile int32_t x1347 = -10560200;
	int8_t x1348 = 7;
	int32_t t142 = 1739274;

    t142 = (x1345%((x1346+x1347)>x1348));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x1357 = 5;
	volatile int8_t x1358 = INT8_MIN;
	static int64_t x1359 = -3481LL;
	int32_t t143 = -30341;

    t143 = (x1357%((x1358+x1359)>x1360));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1365 = -1;
	int8_t x1367 = INT8_MIN;
	int32_t x1368 = INT32_MIN;

    t144 = (x1365%((x1366+x1367)>x1368));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x1369 = 843665U;
	uint16_t x1370 = 10113U;
	int16_t x1371 = INT16_MAX;
	uint8_t x1372 = UINT8_MAX;
	uint32_t t145 = 21150U;

    t145 = (x1369%((x1370+x1371)>x1372));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x1374 = INT16_MIN;
	int8_t x1375 = INT8_MAX;
	int32_t t146 = -2382;

    t146 = (x1373%((x1374+x1375)>x1376));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1381 = 1;
	int64_t x1383 = -245LL;
	int32_t x1384 = 7852942;
	int32_t t147 = -55123350;

    t147 = (x1381%((x1382+x1383)>x1384));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1386 = -1LL;

    t148 = (x1385%((x1386+x1387)>x1388));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x1390 = -1LL;
	static uint8_t x1391 = 1U;
	int8_t x1392 = INT8_MIN;
	volatile int32_t t149 = 9658281;

    t149 = (x1389%((x1390+x1391)>x1392));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x1402 = UINT32_MAX;
	int64_t t150 = -1950LL;

    t150 = (x1401%((x1402+x1403)>x1404));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1409 = 838;
	uint8_t x1410 = 0U;
	volatile int64_t x1411 = INT64_MAX;
	volatile int64_t x1412 = INT64_MIN;

    t151 = (x1409%((x1410+x1411)>x1412));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x1417 = -280;
	int64_t x1418 = -1LL;
	static uint8_t x1419 = 6U;
	volatile uint8_t x1420 = 3U;

    t152 = (x1417%((x1418+x1419)>x1420));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1421 = 367;
	int16_t x1422 = INT16_MAX;
	int16_t x1424 = INT16_MIN;
	volatile int32_t t153 = 598;

    t153 = (x1421%((x1422+x1423)>x1424));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int64_t x1425 = INT64_MIN;
	int16_t x1426 = -5886;
	static volatile int32_t x1427 = INT32_MAX;
	int16_t x1428 = -105;
	int64_t t154 = -10560LL;

    t154 = (x1425%((x1426+x1427)>x1428));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x1433 = 28U;
	volatile int64_t x1434 = INT64_MAX;
	static int16_t x1435 = -2136;
	int32_t x1436 = INT32_MIN;

    t155 = (x1433%((x1434+x1435)>x1436));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x1437 = INT8_MIN;
	uint32_t x1438 = 977868718U;
	volatile int32_t t156 = 99528;

    t156 = (x1437%((x1438+x1439)>x1440));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1453 = -18;
	uint8_t x1454 = 0U;
	uint8_t x1455 = 100U;
	volatile int8_t x1456 = INT8_MIN;

    t157 = (x1453%((x1454+x1455)>x1456));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x1465 = 7U;
	volatile int64_t x1466 = INT64_MAX;
	int32_t x1467 = -1;
	volatile int16_t x1468 = 6;
	static uint32_t t158 = 0U;

    t158 = (x1465%((x1466+x1467)>x1468));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1469 = INT16_MIN;
	uint16_t x1470 = 2U;
	uint64_t x1471 = 1771712544691336LLU;
	int8_t x1472 = 0;
	int32_t t159 = -1;

    t159 = (x1469%((x1470+x1471)>x1472));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1486 = -1557;
	uint32_t x1487 = UINT32_MAX;
	volatile uint16_t x1488 = 132U;
	static int64_t t160 = -787963361571005275LL;

    t160 = (x1485%((x1486+x1487)>x1488));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x1493 = INT8_MIN;
	int32_t x1494 = 68888456;
	uint8_t x1495 = 2U;
	static uint32_t x1496 = 1U;
	volatile int32_t t161 = 9849;

    t161 = (x1493%((x1494+x1495)>x1496));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x1505 = 2865U;
	int8_t x1507 = INT8_MIN;
	int32_t x1508 = INT32_MIN;
	static uint32_t t162 = 40005411U;

    t162 = (x1505%((x1506+x1507)>x1508));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1517 = INT16_MAX;
	volatile int32_t x1519 = -1;
	uint8_t x1520 = 0U;
	int32_t t163 = -1;

    t163 = (x1517%((x1518+x1519)>x1520));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x1521 = -63;
	uint32_t x1522 = 224153U;
	int8_t x1523 = -30;
	static volatile uint8_t x1524 = UINT8_MAX;

    t164 = (x1521%((x1522+x1523)>x1524));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1525 = INT64_MIN;
	static int32_t x1526 = 15540287;
	static int64_t x1527 = -1LL;
	static volatile int64_t t165 = 1359031560983LL;

    t165 = (x1525%((x1526+x1527)>x1528));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int64_t x1545 = 81225478236420716LL;
	uint64_t x1546 = 904241303154656464LLU;
	int8_t x1547 = -17;
	int8_t x1548 = INT8_MAX;
	int64_t t166 = -2005382026LL;

    t166 = (x1545%((x1546+x1547)>x1548));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1549 = UINT32_MAX;
	uint16_t x1550 = 3U;
	static uint16_t x1551 = 215U;
	int64_t x1552 = -1LL;
	uint32_t t167 = 4U;

    t167 = (x1549%((x1550+x1551)>x1552));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint8_t x1557 = 3U;
	int64_t x1558 = 1866LL;
	int16_t x1559 = 829;
	uint32_t x1560 = 1U;
	int32_t t168 = 355;

    t168 = (x1557%((x1558+x1559)>x1560));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1566 = UINT32_MAX;
	static int32_t x1567 = INT32_MIN;

    t169 = (x1565%((x1566+x1567)>x1568));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1569 = -1LL;
	static volatile int32_t x1570 = 312738401;
	static uint16_t x1571 = 3504U;
	uint32_t x1572 = 17033U;
	static int64_t t170 = 45406350LL;

    t170 = (x1569%((x1570+x1571)>x1572));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1574 = 34U;
	int32_t x1575 = 172292;
	volatile int8_t x1576 = 0;
	volatile int32_t t171 = -169;

    t171 = (x1573%((x1574+x1575)>x1576));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x1581 = 696U;
	uint32_t x1582 = 727377U;
	int32_t x1583 = -1;
	int8_t x1584 = 1;
	int32_t t172 = 20;

    t172 = (x1581%((x1582+x1583)>x1584));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1585 = INT64_MIN;
	volatile int32_t x1586 = 0;
	uint32_t x1587 = 110205223U;
	int64_t x1588 = INT64_MIN;
	int64_t t173 = 243423LL;

    t173 = (x1585%((x1586+x1587)>x1588));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1605 = UINT64_MAX;
	uint32_t x1606 = UINT32_MAX;
	static uint64_t x1607 = 29105LLU;
	volatile uint16_t x1608 = 57U;

    t174 = (x1605%((x1606+x1607)>x1608));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1626 = 52U;
	uint8_t x1628 = 12U;
	volatile uint64_t t175 = 1833LLU;

    t175 = (x1625%((x1626+x1627)>x1628));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1637 = INT32_MIN;
	static int32_t x1638 = 1;
	uint32_t x1640 = 11884956U;
	int32_t t176 = -28777;

    t176 = (x1637%((x1638+x1639)>x1640));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1642 = 1582U;
	int8_t x1643 = 6;
	static volatile int64_t x1644 = -1LL;
	int32_t t177 = -44925673;

    t177 = (x1641%((x1642+x1643)>x1644));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x1661 = INT32_MAX;
	static int8_t x1662 = INT8_MIN;
	int64_t x1663 = 1011644495917200620LL;
	int64_t x1664 = INT64_MIN;

    t178 = (x1661%((x1662+x1663)>x1664));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1673 = -132741791LL;
	static uint32_t x1674 = UINT32_MAX;
	volatile uint32_t x1675 = 6U;
	int64_t x1676 = -1LL;
	int64_t t179 = -9977602439376LL;

    t179 = (x1673%((x1674+x1675)>x1676));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1677 = -14;
	uint8_t x1678 = UINT8_MAX;
	int64_t x1679 = -1LL;
	volatile int8_t x1680 = INT8_MIN;
	int32_t t180 = -37;

    t180 = (x1677%((x1678+x1679)>x1680));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint32_t x1681 = 3726U;
	uint32_t x1683 = 132741238U;
	uint8_t x1684 = 28U;
	uint32_t t181 = 5066954U;

    t181 = (x1681%((x1682+x1683)>x1684));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x1693 = INT32_MIN;
	int64_t x1694 = 72382703LL;
	static int32_t x1695 = INT32_MIN;
	volatile uint64_t x1696 = 2721815245192LLU;
	int32_t t182 = -106682;

    t182 = (x1693%((x1694+x1695)>x1696));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1713 = INT64_MAX;
	uint8_t x1714 = 4U;
	uint32_t x1715 = 3650953U;
	volatile int8_t x1716 = INT8_MAX;
	int64_t t183 = -1237LL;

    t183 = (x1713%((x1714+x1715)>x1716));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1717 = UINT16_MAX;
	uint8_t x1718 = 9U;
	int8_t x1719 = INT8_MIN;
	volatile int16_t x1720 = INT16_MIN;
	int32_t t184 = -1;

    t184 = (x1717%((x1718+x1719)>x1720));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1721 = 8U;
	uint64_t x1722 = UINT64_MAX;
	volatile int16_t x1723 = INT16_MIN;
	volatile int8_t x1724 = INT8_MAX;
	volatile int32_t t185 = 23107;

    t185 = (x1721%((x1722+x1723)>x1724));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x1745 = INT16_MAX;
	volatile int16_t x1746 = 8012;
	int16_t x1747 = -1;
	int8_t x1748 = -23;
	int32_t t186 = 1;

    t186 = (x1745%((x1746+x1747)>x1748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x1754 = -1LL;
	volatile uint32_t x1755 = UINT32_MAX;
	int64_t x1756 = 62507LL;
	int32_t t187 = -7;

    t187 = (x1753%((x1754+x1755)>x1756));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1770 = 392571755899115LL;
	volatile int8_t x1771 = -1;
	int32_t t188 = 17;

    t188 = (x1769%((x1770+x1771)>x1772));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1782 = INT8_MAX;
	volatile uint8_t x1783 = 58U;
	static int8_t x1784 = INT8_MAX;
	volatile int32_t t189 = 13279;

    t189 = (x1781%((x1782+x1783)>x1784));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1785 = INT32_MIN;
	uint32_t x1787 = 0U;
	int8_t x1788 = INT8_MAX;

    t190 = (x1785%((x1786+x1787)>x1788));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1801 = INT8_MIN;
	uint32_t x1802 = UINT32_MAX;
	volatile uint16_t x1804 = 38U;
	int32_t t191 = 433377255;

    t191 = (x1801%((x1802+x1803)>x1804));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1829 = -19;
	static volatile int16_t x1830 = INT16_MAX;
	volatile int16_t x1831 = INT16_MIN;
	volatile int64_t x1832 = -20107LL;
	volatile int32_t t192 = -115;

    t192 = (x1829%((x1830+x1831)>x1832));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1833 = 35582620;
	static int64_t x1834 = -110469LL;
	int64_t x1835 = INT64_MAX;
	uint8_t x1836 = UINT8_MAX;
	int32_t t193 = 0;

    t193 = (x1833%((x1834+x1835)>x1836));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1838 = INT16_MAX;
	int32_t x1839 = 3;
	volatile int32_t x1840 = INT32_MIN;
	volatile int32_t t194 = -1532;

    t194 = (x1837%((x1838+x1839)>x1840));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1841 = 0;
	static int32_t x1842 = -1;
	static uint16_t x1843 = 2392U;
	uint8_t x1844 = UINT8_MAX;
	int32_t t195 = 44;

    t195 = (x1841%((x1842+x1843)>x1844));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1845 = UINT64_MAX;
	int8_t x1847 = INT8_MIN;
	int32_t x1848 = INT32_MIN;
	uint64_t t196 = 441115587906330106LLU;

    t196 = (x1845%((x1846+x1847)>x1848));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1850 = 153;
	static int16_t x1851 = INT16_MIN;
	static int32_t x1852 = -1966523;
	int32_t t197 = 12747446;

    t197 = (x1849%((x1850+x1851)>x1852));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1861 = -1;
	static volatile int8_t x1862 = INT8_MIN;
	int64_t x1864 = INT64_MIN;

    t198 = (x1861%((x1862+x1863)>x1864));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1865 = -5;
	volatile uint16_t x1866 = 9892U;
	int8_t x1867 = INT8_MIN;
	int32_t x1868 = -1;
	int32_t t199 = -594939;

    t199 = (x1865%((x1866+x1867)>x1868));

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

