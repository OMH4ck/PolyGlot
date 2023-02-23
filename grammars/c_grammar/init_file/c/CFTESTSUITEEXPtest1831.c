
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

uint32_t x12 = 84995U;
int64_t x21 = 12192722LL;
volatile uint16_t x22 = 0U;
int16_t x24 = -12986;
static volatile int32_t t3 = 12395;
int64_t x49 = 106180LL;
static volatile int32_t x58 = INT32_MAX;
static int32_t t7 = 1;
uint32_t x69 = 7528U;
int16_t x70 = -1;
uint32_t t8 = 3U;
int16_t x89 = INT16_MAX;
int8_t x109 = INT8_MAX;
static int64_t x110 = 1381LL;
static uint32_t x114 = 475U;
static int32_t t12 = 0;
int8_t x122 = -6;
static int8_t x124 = INT8_MIN;
int32_t x164 = 14990;
volatile int8_t x167 = -1;
int64_t x197 = 2721719LL;
static int64_t x217 = INT64_MAX;
int16_t x227 = INT16_MAX;
static volatile int32_t t26 = -231757915;
uint32_t x230 = 28256U;
int64_t x246 = 256780188LL;
static int8_t x247 = 0;
uint64_t x259 = 499004753136120LLU;
volatile uint16_t x260 = UINT16_MAX;
int32_t t30 = 340580109;
uint64_t x265 = UINT64_MAX;
uint8_t x268 = 6U;
int32_t t33 = -66405;
static int64_t x307 = INT64_MIN;
static volatile int32_t t35 = 0;
int64_t x310 = 453020084LL;
static int32_t x311 = INT32_MAX;
uint8_t x312 = UINT8_MAX;
int8_t x317 = 18;
int64_t x334 = INT64_MIN;
int64_t x349 = INT64_MAX;
int32_t x351 = INT32_MIN;
int64_t t42 = INT64_MAX;
int32_t x371 = -1;
static int8_t x372 = INT8_MIN;
uint8_t x379 = 2U;
volatile int16_t x380 = INT16_MIN;
volatile uint16_t x385 = 2U;
uint16_t x387 = 7632U;
volatile uint8_t x388 = 23U;
int64_t x413 = 981LL;
int32_t t52 = 2;
uint16_t x425 = UINT16_MAX;
uint16_t x428 = UINT16_MAX;
static volatile uint64_t x432 = 8992480673496716LLU;
volatile int32_t t54 = -11;
uint64_t x435 = 17668603334009LLU;
int32_t x437 = INT32_MAX;
uint16_t x438 = 10U;
int8_t x442 = -1;
uint16_t x464 = 7U;
static uint64_t t59 = 2084027169LLU;
int8_t x473 = INT8_MAX;
static int32_t t64 = -17497;
static int32_t x507 = -1432862;
int16_t x515 = INT16_MIN;
volatile int32_t x517 = INT32_MAX;
volatile int32_t t69 = -41333916;
uint32_t x530 = 1596127743U;
volatile uint64_t t72 = UINT64_MAX;
int16_t x550 = 0;
volatile int32_t x561 = 11879;
int32_t x563 = -38468;
static volatile uint32_t x565 = UINT32_MAX;
uint32_t x566 = 6930071U;
uint64_t t77 = 151175556398LLU;
int32_t x574 = 6848501;
static uint8_t x577 = 4U;
uint8_t x579 = 25U;
int8_t x590 = INT8_MIN;
static uint16_t x592 = UINT16_MAX;
int16_t x606 = INT16_MIN;
uint64_t x625 = 1700977340160LLU;
static volatile int16_t x633 = 30;
volatile uint16_t x637 = 10U;
static uint32_t t91 = 2073887632U;
volatile int32_t x666 = -1;
volatile int32_t t92 = -39051;
uint16_t x675 = UINT16_MAX;
static uint16_t x677 = 237U;
static volatile int64_t x681 = INT64_MAX;
static volatile int64_t t95 = INT64_MAX;
int32_t x696 = 27;
uint16_t x702 = UINT16_MAX;
int16_t x703 = -3997;
volatile uint64_t x704 = 56512240710LLU;
volatile int32_t t99 = -114;
uint32_t x705 = 2462U;
uint64_t x711 = 458389161521LLU;
volatile int64_t x712 = INT64_MIN;
volatile int8_t x728 = INT8_MIN;
static int32_t t103 = -721;
static int32_t x749 = 169721;
volatile int32_t t105 = -560616360;
int32_t x762 = INT32_MAX;
int8_t x768 = INT8_MAX;
volatile int32_t t108 = -16762560;
static uint16_t x777 = 13250U;
uint32_t x778 = 52U;
int8_t x788 = INT8_MAX;
int32_t t111 = -21365;
uint64_t x797 = 376825222018LLU;
static int16_t x798 = INT16_MAX;
volatile uint64_t t112 = 106105LLU;
int32_t x805 = 859;
int32_t x807 = -1;
static uint16_t x808 = UINT16_MAX;
static int16_t x816 = 1;
uint16_t x829 = 2404U;
int32_t x833 = 154392;
int32_t t118 = INT32_MAX;
int32_t x845 = 181132866;
volatile int64_t x846 = -1LL;
volatile uint64_t x856 = 247360LLU;
volatile uint64_t t121 = 59834806LLU;
int64_t x858 = -1LL;
int8_t x859 = -14;
int64_t x893 = 5600942LL;
static volatile int64_t x902 = INT64_MIN;
volatile int32_t t128 = 521635969;
uint64_t x911 = 6159882587LLU;
static volatile int8_t x914 = -1;
int32_t x917 = INT32_MAX;
int16_t x920 = INT16_MIN;
static volatile uint64_t x925 = UINT64_MAX;
uint16_t x928 = UINT16_MAX;
static uint64_t x929 = UINT64_MAX;
uint64_t x965 = 121LLU;
int8_t x968 = INT8_MIN;
uint8_t x969 = 5U;
static int8_t x972 = INT8_MAX;
int16_t x976 = -1;
int16_t x981 = INT16_MAX;
volatile int64_t x983 = 2LL;
int64_t x984 = 2563LL;
volatile int32_t t139 = -1;
static volatile uint8_t x1013 = UINT8_MAX;
int16_t x1014 = INT16_MIN;
volatile uint64_t x1025 = UINT64_MAX;
int64_t x1026 = INT64_MIN;
static uint64_t x1028 = 67348196LLU;
volatile uint64_t t142 = 358515750772399570LLU;
volatile int32_t x1046 = INT32_MIN;
int64_t x1049 = INT64_MAX;
uint64_t x1050 = 6LLU;
volatile int16_t x1072 = INT16_MIN;
uint8_t x1110 = 78U;
int64_t x1119 = INT64_MIN;
int16_t x1124 = 2;
uint64_t x1127 = 185LLU;
uint8_t x1131 = UINT8_MAX;
int8_t x1139 = -2;
volatile int64_t x1140 = 1959284309LL;
int64_t x1162 = -12569697487105910LL;
static uint16_t x1168 = 1297U;
int32_t t165 = 698851;
static uint32_t x1170 = 14151281U;
volatile int16_t x1175 = INT16_MAX;
int64_t x1176 = INT64_MIN;
int64_t x1178 = -1LL;
int32_t t169 = 73928959;
uint64_t t171 = 20LLU;
static volatile int16_t x1201 = 12;
static int16_t x1202 = -1;
int32_t t173 = -160;
uint8_t x1205 = 0U;
static uint16_t x1213 = 5U;
volatile uint8_t x1214 = 1U;
uint32_t x1249 = UINT32_MAX;
int8_t x1250 = -6;
static volatile uint64_t x1252 = UINT64_MAX;
int64_t x1260 = -446LL;
int32_t x1262 = -1753;
int16_t x1263 = 15;
int16_t x1272 = INT16_MIN;
int32_t t183 = 9;
int32_t x1317 = INT32_MAX;
int64_t x1326 = INT64_MIN;
uint16_t x1345 = UINT16_MAX;
int16_t x1347 = -26;
uint32_t x1397 = UINT32_MAX;
volatile int8_t x1402 = INT8_MIN;
volatile int32_t t196 = -226393976;
volatile int64_t x1407 = INT64_MIN;


void f0(void) {
    	uint64_t x9 = 24060LLU;
	uint16_t x10 = 8U;
	int8_t x11 = -39;
	volatile uint64_t t0 = 6768419517LLU;

    t0 = (x9>>((x10<=x11)%x12));

    if (t0 != 24060LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x13 = UINT32_MAX;
	volatile int16_t x14 = INT16_MIN;
	int8_t x15 = -5;
	static int8_t x16 = 55;
	volatile uint32_t t1 = 499565U;

    t1 = (x13>>((x14<=x15)%x16));

    if (t1 != 2147483647U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x23 = 19;
	static int64_t t2 = -583LL;

    t2 = (x21>>((x22<=x23)%x24));

    if (t2 != 6096361LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x33 = 0U;
	int8_t x34 = -1;
	int64_t x35 = INT64_MAX;
	int16_t x36 = -1;

    t3 = (x33>>((x34<=x35)%x36));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x37 = 72535020794LL;
	int64_t x38 = -1LL;
	static uint16_t x39 = 1U;
	int32_t x40 = INT32_MAX;
	int64_t t4 = 863831LL;

    t4 = (x37>>((x38<=x39)%x40));

    if (t4 != 36267510397LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x45 = INT32_MAX;
	uint32_t x46 = 1437U;
	int32_t x47 = -1;
	int64_t x48 = 1LL;
	volatile int32_t t5 = INT32_MAX;

    t5 = (x45>>((x46<=x47)%x48));

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x50 = INT64_MIN;
	int8_t x51 = -1;
	uint64_t x52 = 1244027944547632LLU;
	volatile int64_t t6 = 547766951984978394LL;

    t6 = (x49>>((x50<=x51)%x52));

    if (t6 != 53090LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x57 = INT16_MAX;
	int64_t x59 = INT64_MAX;
	volatile uint8_t x60 = 1U;

    t7 = (x57>>((x58<=x59)%x60));

    if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x71 = -176;
	uint8_t x72 = 1U;

    t8 = (x69>>((x70<=x71)%x72));

    if (t8 != 7528U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x77 = 14290242192077LLU;
	uint64_t x78 = 3004821LLU;
	int32_t x79 = -961184;
	uint32_t x80 = UINT32_MAX;
	volatile uint64_t t9 = 46225480350441LLU;

    t9 = (x77>>((x78<=x79)%x80));

    if (t9 != 7145121096038LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x90 = -17;
	int16_t x91 = INT16_MIN;
	int8_t x92 = 3;
	static int32_t t10 = 36;

    t10 = (x89>>((x90<=x91)%x92));

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x111 = INT64_MIN;
	int32_t x112 = -1;
	static int32_t t11 = -11;

    t11 = (x109>>((x110<=x111)%x112));

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x113 = INT8_MAX;
	int16_t x115 = INT16_MIN;
	uint16_t x116 = UINT16_MAX;

    t12 = (x113>>((x114<=x115)%x116));

    if (t12 != 63) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x121 = 1902102271781756546LLU;
	static int64_t x123 = -1LL;
	volatile uint64_t t13 = 168369LLU;

    t13 = (x121>>((x122<=x123)%x124));

    if (t13 != 951051135890878273LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x129 = UINT64_MAX;
	uint16_t x130 = 6U;
	static uint64_t x131 = UINT64_MAX;
	int8_t x132 = INT8_MIN;
	volatile uint64_t t14 = 178LLU;

    t14 = (x129>>((x130<=x131)%x132));

    if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x133 = 9U;
	static int16_t x134 = INT16_MIN;
	int8_t x135 = -1;
	uint8_t x136 = 3U;
	volatile int32_t t15 = -2587572;

    t15 = (x133>>((x134<=x135)%x136));

    if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x149 = 9500U;
	int16_t x150 = -4856;
	int8_t x151 = INT8_MIN;
	int32_t x152 = -1;
	volatile int32_t t16 = -312759242;

    t16 = (x149>>((x150<=x151)%x152));

    if (t16 != 9500) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x157 = 1538;
	int16_t x158 = INT16_MIN;
	volatile int8_t x159 = -1;
	static int64_t x160 = 12660636545165LL;
	volatile int32_t t17 = -4109346;

    t17 = (x157>>((x158<=x159)%x160));

    if (t17 != 769) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x161 = 501350770U;
	int8_t x162 = INT8_MAX;
	int32_t x163 = INT32_MIN;
	volatile uint32_t t18 = 572556671U;

    t18 = (x161>>((x162<=x163)%x164));

    if (t18 != 501350770U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x165 = 24695U;
	int32_t x166 = INT32_MIN;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t19 = -356;

    t19 = (x165>>((x166<=x167)%x168));

    if (t19 != 12347) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x177 = UINT64_MAX;
	volatile uint16_t x178 = 3275U;
	int8_t x179 = -1;
	uint32_t x180 = 20208U;
	static uint64_t t20 = UINT64_MAX;

    t20 = (x177>>((x178<=x179)%x180));

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x198 = 4U;
	static int16_t x199 = -763;
	uint64_t x200 = 671214582806120LLU;
	volatile int64_t t21 = 6080149659LL;

    t21 = (x197>>((x198<=x199)%x200));

    if (t21 != 2721719LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x209 = 12U;
	int32_t x210 = -2891964;
	int32_t x211 = INT32_MAX;
	static uint32_t x212 = UINT32_MAX;
	volatile int32_t t22 = -226;

    t22 = (x209>>((x210<=x211)%x212));

    if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x213 = UINT8_MAX;
	uint32_t x214 = 2117080U;
	uint8_t x215 = UINT8_MAX;
	int32_t x216 = INT32_MIN;
	volatile int32_t t23 = 183524;

    t23 = (x213>>((x214<=x215)%x216));

    if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x218 = 362130LLU;
	volatile uint8_t x219 = 104U;
	volatile int64_t x220 = 135907866635489LL;
	volatile int64_t t24 = INT64_MAX;

    t24 = (x217>>((x218<=x219)%x220));

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x221 = 5U;
	uint32_t x222 = 1526U;
	int64_t x223 = INT64_MAX;
	int8_t x224 = -1;
	int32_t t25 = 1513557;

    t25 = (x221>>((x222<=x223)%x224));

    if (t25 != 5) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x225 = 2U;
	int32_t x226 = 0;
	int32_t x228 = INT32_MIN;

    t26 = (x225>>((x226<=x227)%x228));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x229 = 17U;
	uint16_t x231 = 3U;
	uint32_t x232 = UINT32_MAX;
	static volatile int32_t t27 = -45669549;

    t27 = (x229>>((x230<=x231)%x232));

    if (t27 != 17) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x233 = 349U;
	int16_t x234 = INT16_MAX;
	volatile int16_t x235 = INT16_MIN;
	int64_t x236 = INT64_MAX;
	volatile int32_t t28 = 4;

    t28 = (x233>>((x234<=x235)%x236));

    if (t28 != 349) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x245 = INT32_MAX;
	volatile uint8_t x248 = 1U;
	static volatile int32_t t29 = INT32_MAX;

    t29 = (x245>>((x246<=x247)%x248));

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x257 = UINT8_MAX;
	int8_t x258 = INT8_MAX;

    t30 = (x257>>((x258<=x259)%x260));

    if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x266 = 103014399271558311LL;
	volatile int32_t x267 = -236;
	volatile uint64_t t31 = UINT64_MAX;

    t31 = (x265>>((x266<=x267)%x268));

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x269 = 5U;
	uint8_t x270 = 7U;
	uint32_t x271 = UINT32_MAX;
	int64_t x272 = 977598730970LL;
	static volatile int32_t t32 = 1936;

    t32 = (x269>>((x270<=x271)%x272));

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x273 = 295948;
	int64_t x274 = 1351116809LL;
	static volatile int32_t x275 = -106;
	int32_t x276 = -1;

    t33 = (x273>>((x274<=x275)%x276));

    if (t33 != 295948) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x301 = 0;
	int64_t x302 = -245369LL;
	volatile uint64_t x303 = UINT64_MAX;
	int8_t x304 = INT8_MIN;
	static int32_t t34 = 860716754;

    t34 = (x301>>((x302<=x303)%x304));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x305 = INT8_MAX;
	static int32_t x306 = INT32_MAX;
	uint32_t x308 = UINT32_MAX;

    t35 = (x305>>((x306<=x307)%x308));

    if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x309 = INT64_MAX;
	volatile int64_t t36 = -18LL;

    t36 = (x309>>((x310<=x311)%x312));

    if (t36 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x318 = 103U;
	static int64_t x319 = INT64_MIN;
	static int8_t x320 = INT8_MAX;
	volatile int32_t t37 = -6;

    t37 = (x317>>((x318<=x319)%x320));

    if (t37 != 18) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x325 = 1813;
	uint32_t x326 = UINT32_MAX;
	int64_t x327 = INT64_MIN;
	uint64_t x328 = 116278795964610246LLU;
	static int32_t t38 = -8898745;

    t38 = (x325>>((x326<=x327)%x328));

    if (t38 != 1813) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x333 = INT64_MAX;
	int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MAX;
	static volatile int64_t t39 = -57286261986874LL;

    t39 = (x333>>((x334<=x335)%x336));

    if (t39 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x337 = 3613202U;
	int32_t x338 = 47271;
	int8_t x339 = INT8_MIN;
	int64_t x340 = INT64_MIN;
	volatile uint32_t t40 = 12U;

    t40 = (x337>>((x338<=x339)%x340));

    if (t40 != 3613202U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x341 = 114U;
	static volatile uint32_t x342 = UINT32_MAX;
	int64_t x343 = -119014753590916533LL;
	static int16_t x344 = -1028;
	int32_t t41 = 2704061;

    t41 = (x341>>((x342<=x343)%x344));

    if (t41 != 114) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x350 = 17;
	int64_t x352 = INT64_MIN;

    t42 = (x349>>((x350<=x351)%x352));

    if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x353 = UINT32_MAX;
	static uint8_t x354 = 54U;
	volatile uint32_t x355 = 217194U;
	int32_t x356 = -1;
	volatile uint32_t t43 = UINT32_MAX;

    t43 = (x353>>((x354<=x355)%x356));

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x357 = 7074222026LL;
	volatile int32_t x358 = INT32_MIN;
	uint8_t x359 = UINT8_MAX;
	int16_t x360 = INT16_MIN;
	static volatile int64_t t44 = 504843766LL;

    t44 = (x357>>((x358<=x359)%x360));

    if (t44 != 3537111013LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x369 = INT8_MAX;
	uint64_t x370 = 336258LLU;
	volatile int32_t t45 = 1051;

    t45 = (x369>>((x370<=x371)%x372));

    if (t45 != 63) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x377 = INT16_MAX;
	uint32_t x378 = 3U;
	int32_t t46 = 357213333;

    t46 = (x377>>((x378<=x379)%x380));

    if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x386 = INT64_MAX;
	volatile int32_t t47 = 0;

    t47 = (x385>>((x386<=x387)%x388));

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x389 = INT64_MAX;
	uint16_t x390 = UINT16_MAX;
	uint32_t x391 = 733U;
	volatile uint64_t x392 = UINT64_MAX;
	volatile int64_t t48 = INT64_MAX;

    t48 = (x389>>((x390<=x391)%x392));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x397 = 12000865691052970LLU;
	int8_t x398 = INT8_MIN;
	static volatile int16_t x399 = INT16_MIN;
	static int16_t x400 = INT16_MIN;
	uint64_t t49 = 111LLU;

    t49 = (x397>>((x398<=x399)%x400));

    if (t49 != 12000865691052970LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x405 = UINT8_MAX;
	volatile uint8_t x406 = 57U;
	volatile int32_t x407 = -179314660;
	int64_t x408 = 67563962985LL;
	volatile int32_t t50 = 200294;

    t50 = (x405>>((x406<=x407)%x408));

    if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x414 = INT32_MAX;
	int64_t x415 = INT64_MIN;
	int64_t x416 = -1LL;
	volatile int64_t t51 = -2683040393343LL;

    t51 = (x413>>((x414<=x415)%x416));

    if (t51 != 981LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x421 = 873U;
	int16_t x422 = INT16_MIN;
	static int64_t x423 = INT64_MIN;
	int8_t x424 = INT8_MIN;

    t52 = (x421>>((x422<=x423)%x424));

    if (t52 != 873) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x426 = -1LL;
	volatile int16_t x427 = -6457;
	int32_t t53 = 22820906;

    t53 = (x425>>((x426<=x427)%x428));

    if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x429 = 0;
	static int8_t x430 = INT8_MIN;
	volatile int32_t x431 = 205712864;

    t54 = (x429>>((x430<=x431)%x432));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x433 = INT8_MAX;
	int32_t x434 = -890261;
	static int16_t x436 = 867;
	volatile int32_t t55 = 1;

    t55 = (x433>>((x434<=x435)%x436));

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x439 = INT8_MIN;
	int64_t x440 = INT64_MIN;
	volatile int32_t t56 = INT32_MAX;

    t56 = (x437>>((x438<=x439)%x440));

    if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x441 = UINT64_MAX;
	int64_t x443 = 904008060LL;
	int8_t x444 = INT8_MIN;
	uint64_t t57 = 3039398350LLU;

    t57 = (x441>>((x442<=x443)%x444));

    if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x453 = 10U;
	int64_t x454 = INT64_MIN;
	uint8_t x455 = 49U;
	int64_t x456 = INT64_MIN;
	int32_t t58 = 0;

    t58 = (x453>>((x454<=x455)%x456));

    if (t58 != 5) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x461 = 57106112LLU;
	int64_t x462 = INT64_MIN;
	int32_t x463 = -307590366;

    t59 = (x461>>((x462<=x463)%x464));

    if (t59 != 28553056LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x465 = 1U;
	volatile uint16_t x466 = 587U;
	int16_t x467 = -14;
	int8_t x468 = 1;
	int32_t t60 = -51;

    t60 = (x465>>((x466<=x467)%x468));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x474 = -3;
	int16_t x475 = INT16_MIN;
	int64_t x476 = INT64_MAX;
	int32_t t61 = 368;

    t61 = (x473>>((x474<=x475)%x476));

    if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x477 = 1U;
	int16_t x478 = INT16_MIN;
	int8_t x479 = INT8_MAX;
	int32_t x480 = INT32_MAX;
	volatile int32_t t62 = -551950;

    t62 = (x477>>((x478<=x479)%x480));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x489 = UINT32_MAX;
	int16_t x490 = -99;
	uint16_t x491 = UINT16_MAX;
	uint32_t x492 = UINT32_MAX;
	uint32_t t63 = 51620U;

    t63 = (x489>>((x490<=x491)%x492));

    if (t63 != 2147483647U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x493 = INT32_MAX;
	int32_t x494 = 0;
	volatile uint64_t x495 = 43426985299907LLU;
	volatile uint64_t x496 = 85078995LLU;

    t64 = (x493>>((x494<=x495)%x496));

    if (t64 != 1073741823) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x497 = 218170395531335LLU;
	uint16_t x498 = 131U;
	int32_t x499 = -1;
	int16_t x500 = INT16_MAX;
	uint64_t t65 = 2538615996048097848LLU;

    t65 = (x497>>((x498<=x499)%x500));

    if (t65 != 218170395531335LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x505 = 6397U;
	int16_t x506 = INT16_MAX;
	int8_t x508 = INT8_MIN;
	volatile uint32_t t66 = 6445U;

    t66 = (x505>>((x506<=x507)%x508));

    if (t66 != 6397U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x513 = INT8_MAX;
	static volatile int16_t x514 = -9633;
	int16_t x516 = INT16_MIN;
	volatile int32_t t67 = 303203666;

    t67 = (x513>>((x514<=x515)%x516));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x518 = 2759U;
	int8_t x519 = 12;
	uint16_t x520 = 10U;
	int32_t t68 = INT32_MAX;

    t68 = (x517>>((x518<=x519)%x520));

    if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x525 = 40177;
	int8_t x526 = INT8_MIN;
	static int16_t x527 = 149;
	int64_t x528 = -1LL;

    t69 = (x525>>((x526<=x527)%x528));

    if (t69 != 40177) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x529 = INT16_MAX;
	uint32_t x531 = UINT32_MAX;
	int64_t x532 = -1LL;
	volatile int32_t t70 = -4;

    t70 = (x529>>((x530<=x531)%x532));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x533 = 27U;
	int64_t x534 = -1LL;
	int8_t x535 = INT8_MIN;
	static uint16_t x536 = 6223U;
	int32_t t71 = -5632;

    t71 = (x533>>((x534<=x535)%x536));

    if (t71 != 27) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x541 = UINT64_MAX;
	uint32_t x542 = 0U;
	int64_t x543 = 201963LL;
	static int8_t x544 = -1;

    t72 = (x541>>((x542<=x543)%x544));

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x545 = 817U;
	int16_t x546 = INT16_MIN;
	int16_t x547 = -2749;
	volatile int64_t x548 = -1LL;
	uint32_t t73 = 6841U;

    t73 = (x545>>((x546<=x547)%x548));

    if (t73 != 817U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x549 = UINT32_MAX;
	int64_t x551 = 456LL;
	static uint64_t x552 = 455513161129LLU;
	uint32_t t74 = 31U;

    t74 = (x549>>((x550<=x551)%x552));

    if (t74 != 2147483647U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x562 = 6U;
	uint8_t x564 = 61U;
	volatile int32_t t75 = -324510352;

    t75 = (x561>>((x562<=x563)%x564));

    if (t75 != 11879) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x567 = UINT32_MAX;
	uint32_t x568 = 176584630U;
	static uint32_t t76 = 7777U;

    t76 = (x565>>((x566<=x567)%x568));

    if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x569 = UINT64_MAX;
	int64_t x570 = INT64_MIN;
	static int8_t x571 = -1;
	int16_t x572 = INT16_MAX;

    t77 = (x569>>((x570<=x571)%x572));

    if (t77 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x573 = 1736;
	int64_t x575 = INT64_MAX;
	static int32_t x576 = INT32_MIN;
	volatile int32_t t78 = 250;

    t78 = (x573>>((x574<=x575)%x576));

    if (t78 != 868) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x578 = INT64_MAX;
	static volatile int8_t x580 = 1;
	static volatile int32_t t79 = 32296041;

    t79 = (x577>>((x578<=x579)%x580));

    if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x589 = 4U;
	uint8_t x591 = 52U;
	static volatile int32_t t80 = 1;

    t80 = (x589>>((x590<=x591)%x592));

    if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x601 = UINT64_MAX;
	int8_t x602 = INT8_MIN;
	uint32_t x603 = UINT32_MAX;
	uint64_t x604 = 2188147480371545LLU;
	volatile uint64_t t81 = 1LLU;

    t81 = (x601>>((x602<=x603)%x604));

    if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x605 = 0U;
	int8_t x607 = 41;
	int16_t x608 = INT16_MAX;
	static int32_t t82 = 1;

    t82 = (x605>>((x606<=x607)%x608));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x609 = INT32_MAX;
	uint8_t x610 = 41U;
	uint64_t x611 = UINT64_MAX;
	int16_t x612 = 11713;
	int32_t t83 = 5;

    t83 = (x609>>((x610<=x611)%x612));

    if (t83 != 1073741823) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x613 = 449U;
	int16_t x614 = INT16_MAX;
	int64_t x615 = INT64_MAX;
	static volatile int8_t x616 = 50;
	static int32_t t84 = -114076137;

    t84 = (x613>>((x614<=x615)%x616));

    if (t84 != 224) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x626 = -1;
	uint8_t x627 = UINT8_MAX;
	int64_t x628 = -9611349414144LL;
	volatile uint64_t t85 = 1896370083LLU;

    t85 = (x625>>((x626<=x627)%x628));

    if (t85 != 850488670080LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x629 = UINT32_MAX;
	int16_t x630 = INT16_MAX;
	volatile uint8_t x631 = UINT8_MAX;
	static volatile int8_t x632 = INT8_MIN;
	uint32_t t86 = UINT32_MAX;

    t86 = (x629>>((x630<=x631)%x632));

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x634 = INT8_MAX;
	uint8_t x635 = 0U;
	int64_t x636 = -4119715832LL;
	int32_t t87 = -1651719;

    t87 = (x633>>((x634<=x635)%x636));

    if (t87 != 30) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x638 = INT32_MIN;
	int32_t x639 = -125;
	volatile int16_t x640 = -1;
	int32_t t88 = -87;

    t88 = (x637>>((x638<=x639)%x640));

    if (t88 != 10) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x641 = UINT16_MAX;
	int16_t x642 = INT16_MAX;
	uint8_t x643 = 25U;
	uint64_t x644 = 632699LLU;
	volatile int32_t t89 = -681;

    t89 = (x641>>((x642<=x643)%x644));

    if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x645 = 0U;
	int64_t x646 = -830109833754751LL;
	static uint8_t x647 = 0U;
	uint32_t x648 = UINT32_MAX;
	int32_t t90 = -92;

    t90 = (x645>>((x646<=x647)%x648));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x649 = 2393973U;
	int64_t x650 = 85745757146LL;
	static uint8_t x651 = UINT8_MAX;
	int8_t x652 = INT8_MIN;

    t91 = (x649>>((x650<=x651)%x652));

    if (t91 != 2393973U) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x665 = UINT8_MAX;
	static int64_t x667 = 325096557170864980LL;
	volatile int8_t x668 = INT8_MIN;

    t92 = (x665>>((x666<=x667)%x668));

    if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x673 = 15;
	int8_t x674 = INT8_MAX;
	volatile int64_t x676 = 1237LL;
	int32_t t93 = -196;

    t93 = (x673>>((x674<=x675)%x676));

    if (t93 != 7) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x678 = INT8_MIN;
	uint8_t x679 = 1U;
	int16_t x680 = -1;
	static volatile int32_t t94 = 6774807;

    t94 = (x677>>((x678<=x679)%x680));

    if (t94 != 237) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x682 = 492;
	static int16_t x683 = INT16_MIN;
	static int8_t x684 = INT8_MAX;

    t95 = (x681>>((x682<=x683)%x684));

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x689 = 0;
	int64_t x690 = INT64_MIN;
	int16_t x691 = INT16_MAX;
	volatile uint8_t x692 = 1U;
	static volatile int32_t t96 = 80283084;

    t96 = (x689>>((x690<=x691)%x692));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint8_t x693 = UINT8_MAX;
	uint8_t x694 = UINT8_MAX;
	int64_t x695 = -1LL;
	int32_t t97 = -141907614;

    t97 = (x693>>((x694<=x695)%x696));

    if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x697 = 9LLU;
	int64_t x698 = -300667LL;
	volatile int32_t x699 = -3;
	int32_t x700 = INT32_MAX;
	volatile uint64_t t98 = 64760LLU;

    t98 = (x697>>((x698<=x699)%x700));

    if (t98 != 4LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x701 = INT16_MAX;

    t99 = (x701>>((x702<=x703)%x704));

    if (t99 != 32767) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x706 = INT8_MAX;
	volatile int64_t x707 = INT64_MIN;
	static uint8_t x708 = 54U;
	static uint32_t t100 = 1629U;

    t100 = (x705>>((x706<=x707)%x708));

    if (t100 != 2462U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x709 = 3U;
	static volatile int16_t x710 = 1;
	uint32_t t101 = 20474U;

    t101 = (x709>>((x710<=x711)%x712));

    if (t101 != 1U) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x725 = 3116265554959654LLU;
	volatile int16_t x726 = 13840;
	int64_t x727 = INT64_MIN;
	uint64_t t102 = 13971392501589LLU;

    t102 = (x725>>((x726<=x727)%x728));

    if (t102 != 3116265554959654LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint8_t x741 = 30U;
	uint16_t x742 = 30U;
	static uint32_t x743 = 1984U;
	int32_t x744 = -1;

    t103 = (x741>>((x742<=x743)%x744));

    if (t103 != 30) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x750 = 119988;
	uint64_t x751 = 2447754995420LLU;
	volatile uint8_t x752 = 8U;
	volatile int32_t t104 = 279462;

    t104 = (x749>>((x750<=x751)%x752));

    if (t104 != 84860) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x753 = INT16_MAX;
	uint16_t x754 = 6259U;
	int64_t x755 = 11058809721596LL;
	int8_t x756 = INT8_MIN;

    t105 = (x753>>((x754<=x755)%x756));

    if (t105 != 16383) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x761 = 96772LLU;
	uint32_t x763 = UINT32_MAX;
	volatile uint64_t x764 = 444917871207710168LLU;
	volatile uint64_t t106 = 1012LLU;

    t106 = (x761>>((x762<=x763)%x764));

    if (t106 != 48386LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x765 = 181;
	static uint32_t x766 = 2350167U;
	int32_t x767 = INT32_MIN;
	volatile int32_t t107 = -148578;

    t107 = (x765>>((x766<=x767)%x768));

    if (t107 != 90) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x769 = 45254173;
	volatile int8_t x770 = -1;
	volatile int16_t x771 = INT16_MAX;
	int8_t x772 = INT8_MAX;

    t108 = (x769>>((x770<=x771)%x772));

    if (t108 != 22627086) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x773 = 2U;
	static uint32_t x774 = 44268175U;
	uint8_t x775 = 0U;
	static int16_t x776 = INT16_MIN;
	int32_t t109 = -1097;

    t109 = (x773>>((x774<=x775)%x776));

    if (t109 != 2) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x779 = 3237U;
	uint16_t x780 = 2755U;
	int32_t t110 = -692;

    t110 = (x777>>((x778<=x779)%x780));

    if (t110 != 6625) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x785 = 1U;
	int16_t x786 = -1;
	int16_t x787 = 65;

    t111 = (x785>>((x786<=x787)%x788));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x799 = 32841230473LLU;
	volatile int16_t x800 = 245;

    t112 = (x797>>((x798<=x799)%x800));

    if (t112 != 188412611009LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x806 = UINT16_MAX;
	volatile int32_t t113 = 142303304;

    t113 = (x805>>((x806<=x807)%x808));

    if (t113 != 859) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x813 = 11U;
	volatile int64_t x814 = INT64_MIN;
	volatile int64_t x815 = 4992557LL;
	volatile int32_t t114 = -31421496;

    t114 = (x813>>((x814<=x815)%x816));

    if (t114 != 11) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x825 = UINT8_MAX;
	static uint16_t x826 = 1U;
	static int16_t x827 = INT16_MIN;
	int32_t x828 = INT32_MAX;
	volatile int32_t t115 = 1;

    t115 = (x825>>((x826<=x827)%x828));

    if (t115 != 255) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x830 = -1;
	uint64_t x831 = 17108164898447937LLU;
	int16_t x832 = INT16_MAX;
	volatile int32_t t116 = -169362;

    t116 = (x829>>((x830<=x831)%x832));

    if (t116 != 2404) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x834 = INT16_MIN;
	int16_t x835 = INT16_MIN;
	volatile uint32_t x836 = UINT32_MAX;
	static volatile int32_t t117 = -1;

    t117 = (x833>>((x834<=x835)%x836));

    if (t117 != 77196) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x837 = INT32_MAX;
	int32_t x838 = INT32_MAX;
	int32_t x839 = -1;
	int8_t x840 = 1;

    t118 = (x837>>((x838<=x839)%x840));

    if (t118 != INT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x841 = INT64_MAX;
	static uint8_t x842 = 67U;
	volatile int32_t x843 = 4598563;
	uint64_t x844 = 2111159981190LLU;
	int64_t t119 = 201LL;

    t119 = (x841>>((x842<=x843)%x844));

    if (t119 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x847 = 14927U;
	uint32_t x848 = UINT32_MAX;
	volatile int32_t t120 = 1819425;

    t120 = (x845>>((x846<=x847)%x848));

    if (t120 != 90566433) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x853 = 40713LLU;
	int32_t x854 = -1;
	int8_t x855 = INT8_MIN;

    t121 = (x853>>((x854<=x855)%x856));

    if (t121 != 40713LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x857 = INT16_MAX;
	int32_t x860 = -1;
	static int32_t t122 = -1;

    t122 = (x857>>((x858<=x859)%x860));

    if (t122 != 32767) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x865 = INT16_MAX;
	int32_t x866 = -9194273;
	uint32_t x867 = UINT32_MAX;
	static int64_t x868 = -1LL;
	static volatile int32_t t123 = 2416;

    t123 = (x865>>((x866<=x867)%x868));

    if (t123 != 32767) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x869 = UINT16_MAX;
	static int8_t x870 = 1;
	static uint8_t x871 = 1U;
	int64_t x872 = INT64_MAX;
	int32_t t124 = -11172;

    t124 = (x869>>((x870<=x871)%x872));

    if (t124 != 32767) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x881 = INT8_MAX;
	static int64_t x882 = INT64_MIN;
	int64_t x883 = 9772712300511447LL;
	volatile int64_t x884 = -1LL;
	int32_t t125 = 3;

    t125 = (x881>>((x882<=x883)%x884));

    if (t125 != 127) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x894 = INT64_MAX;
	volatile int16_t x895 = INT16_MAX;
	static int8_t x896 = INT8_MAX;
	int64_t t126 = -5307299476000LL;

    t126 = (x893>>((x894<=x895)%x896));

    if (t126 != 5600942LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x897 = 9;
	uint32_t x898 = 3084U;
	volatile uint32_t x899 = 5916855U;
	int8_t x900 = INT8_MAX;
	int32_t t127 = 0;

    t127 = (x897>>((x898<=x899)%x900));

    if (t127 != 4) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x901 = 0U;
	uint32_t x903 = 6U;
	uint16_t x904 = 75U;

    t128 = (x901>>((x902<=x903)%x904));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x909 = 1059558254955940251LLU;
	static int16_t x910 = INT16_MIN;
	int32_t x912 = -3040232;
	static volatile uint64_t t129 = 3101021LLU;

    t129 = (x909>>((x910<=x911)%x912));

    if (t129 != 1059558254955940251LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x913 = 15U;
	int8_t x915 = INT8_MIN;
	uint64_t x916 = 643444438624985386LLU;
	int32_t t130 = 28;

    t130 = (x913>>((x914<=x915)%x916));

    if (t130 != 15) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x918 = UINT32_MAX;
	uint64_t x919 = 14942496682340862LLU;
	volatile int32_t t131 = 4143421;

    t131 = (x917>>((x918<=x919)%x920));

    if (t131 != 1073741823) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x926 = 3U;
	static uint64_t x927 = 2044521480LLU;
	volatile uint64_t t132 = 158225201LLU;

    t132 = (x925>>((x926<=x927)%x928));

    if (t132 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x930 = INT16_MIN;
	uint32_t x931 = 6506U;
	static int16_t x932 = -1;
	volatile uint64_t t133 = UINT64_MAX;

    t133 = (x929>>((x930<=x931)%x932));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x937 = UINT8_MAX;
	int16_t x938 = INT16_MAX;
	int8_t x939 = INT8_MIN;
	static int64_t x940 = -1LL;
	static volatile int32_t t134 = 14;

    t134 = (x937>>((x938<=x939)%x940));

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x953 = 1U;
	uint16_t x954 = 1U;
	int16_t x955 = -1;
	volatile int64_t x956 = INT64_MAX;
	static int32_t t135 = -4870;

    t135 = (x953>>((x954<=x955)%x956));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x966 = INT64_MIN;
	int16_t x967 = INT16_MIN;
	volatile uint64_t t136 = 338112266370992100LLU;

    t136 = (x965>>((x966<=x967)%x968));

    if (t136 != 60LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x970 = 1U;
	int32_t x971 = 112188786;
	volatile int32_t t137 = -504;

    t137 = (x969>>((x970<=x971)%x972));

    if (t137 != 2) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x973 = 2U;
	static uint8_t x974 = UINT8_MAX;
	static int8_t x975 = INT8_MIN;
	volatile int32_t t138 = 297095;

    t138 = (x973>>((x974<=x975)%x976));

    if (t138 != 2) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x982 = -643989356903480579LL;

    t139 = (x981>>((x982<=x983)%x984));

    if (t139 != 16383) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1015 = -832051185631195362LL;
	static int32_t x1016 = 406;
	static volatile int32_t t140 = -101403;

    t140 = (x1013>>((x1014<=x1015)%x1016));

    if (t140 != 255) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x1021 = 0U;
	static int8_t x1022 = -1;
	uint16_t x1023 = UINT16_MAX;
	int16_t x1024 = -1;
	int32_t t141 = -1;

    t141 = (x1021>>((x1022<=x1023)%x1024));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x1027 = INT64_MIN;

    t142 = (x1025>>((x1026<=x1027)%x1028));

    if (t142 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x1037 = INT16_MAX;
	int16_t x1038 = INT16_MIN;
	int8_t x1039 = 6;
	int8_t x1040 = 14;
	int32_t t143 = -79755;

    t143 = (x1037>>((x1038<=x1039)%x1040));

    if (t143 != 16383) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1045 = 60U;
	volatile int16_t x1047 = INT16_MIN;
	int64_t x1048 = INT64_MIN;
	volatile int32_t t144 = 272248;

    t144 = (x1045>>((x1046<=x1047)%x1048));

    if (t144 != 30) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1051 = INT64_MIN;
	static uint16_t x1052 = UINT16_MAX;
	int64_t t145 = -25LL;

    t145 = (x1049>>((x1050<=x1051)%x1052));

    if (t145 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x1061 = UINT8_MAX;
	int32_t x1062 = INT32_MIN;
	int8_t x1063 = 9;
	volatile int64_t x1064 = INT64_MAX;
	volatile int32_t t146 = -31575340;

    t146 = (x1061>>((x1062<=x1063)%x1064));

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x1065 = INT32_MAX;
	uint8_t x1066 = UINT8_MAX;
	uint8_t x1067 = UINT8_MAX;
	int8_t x1068 = INT8_MIN;
	int32_t t147 = 3088016;

    t147 = (x1065>>((x1066<=x1067)%x1068));

    if (t147 != 1073741823) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1069 = 60321LLU;
	static int32_t x1070 = INT32_MAX;
	uint32_t x1071 = UINT32_MAX;
	volatile uint64_t t148 = 1987540791LLU;

    t148 = (x1069>>((x1070<=x1071)%x1072));

    if (t148 != 30160LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x1081 = 13235LLU;
	uint64_t x1082 = UINT64_MAX;
	int8_t x1083 = -7;
	volatile uint32_t x1084 = 7899292U;
	static uint64_t t149 = 23832244176830017LLU;

    t149 = (x1081>>((x1082<=x1083)%x1084));

    if (t149 != 13235LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1093 = 2U;
	volatile int16_t x1094 = INT16_MAX;
	volatile int32_t x1095 = -8072;
	int32_t x1096 = -248916021;
	uint32_t t150 = 24594241U;

    t150 = (x1093>>((x1094<=x1095)%x1096));

    if (t150 != 2U) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x1097 = 11U;
	int64_t x1098 = -1LL;
	uint8_t x1099 = UINT8_MAX;
	static int8_t x1100 = -1;
	volatile int32_t t151 = 1745060;

    t151 = (x1097>>((x1098<=x1099)%x1100));

    if (t151 != 11) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x1101 = UINT8_MAX;
	uint32_t x1102 = 1U;
	uint64_t x1103 = UINT64_MAX;
	volatile int32_t x1104 = -7117876;
	static volatile int32_t t152 = 499;

    t152 = (x1101>>((x1102<=x1103)%x1104));

    if (t152 != 127) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1105 = INT64_MAX;
	static int8_t x1106 = INT8_MIN;
	uint16_t x1107 = UINT16_MAX;
	uint16_t x1108 = 557U;
	static volatile int64_t t153 = -823870976534672809LL;

    t153 = (x1105>>((x1106<=x1107)%x1108));

    if (t153 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1109 = 1;
	int8_t x1111 = -1;
	volatile int16_t x1112 = INT16_MAX;
	volatile int32_t t154 = 30;

    t154 = (x1109>>((x1110<=x1111)%x1112));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1113 = 29337U;
	int8_t x1114 = -31;
	int64_t x1115 = INT64_MIN;
	static int32_t x1116 = 8099820;
	volatile int32_t t155 = -598903;

    t155 = (x1113>>((x1114<=x1115)%x1116));

    if (t155 != 29337) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x1117 = 5668255723400987LL;
	int64_t x1118 = INT64_MIN;
	volatile uint8_t x1120 = UINT8_MAX;
	volatile int64_t t156 = 505382456247LL;

    t156 = (x1117>>((x1118<=x1119)%x1120));

    if (t156 != 2834127861700493LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x1121 = UINT64_MAX;
	volatile int8_t x1122 = -1;
	uint16_t x1123 = UINT16_MAX;
	volatile uint64_t t157 = 40103LLU;

    t157 = (x1121>>((x1122<=x1123)%x1124));

    if (t157 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1125 = 106U;
	static int16_t x1126 = -1;
	int8_t x1128 = INT8_MAX;
	volatile int32_t t158 = 35068340;

    t158 = (x1125>>((x1126<=x1127)%x1128));

    if (t158 != 106) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1129 = 303025276U;
	int64_t x1130 = INT64_MIN;
	int8_t x1132 = INT8_MAX;
	uint32_t t159 = 40349U;

    t159 = (x1129>>((x1130<=x1131)%x1132));

    if (t159 != 151512638U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x1133 = 5U;
	volatile int64_t x1134 = 170498337609266820LL;
	static int32_t x1135 = INT32_MIN;
	uint16_t x1136 = 322U;
	int32_t t160 = 7;

    t160 = (x1133>>((x1134<=x1135)%x1136));

    if (t160 != 5) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x1137 = 7471900U;
	static volatile uint32_t x1138 = 1U;
	static uint32_t t161 = 74266475U;

    t161 = (x1137>>((x1138<=x1139)%x1140));

    if (t161 != 3735950U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x1145 = UINT32_MAX;
	volatile int32_t x1146 = INT32_MIN;
	uint8_t x1147 = UINT8_MAX;
	volatile int64_t x1148 = INT64_MIN;
	volatile uint32_t t162 = 3077U;

    t162 = (x1145>>((x1146<=x1147)%x1148));

    if (t162 != 2147483647U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1153 = INT16_MAX;
	int8_t x1154 = INT8_MAX;
	volatile int32_t x1155 = 898382642;
	int32_t x1156 = -1;
	volatile int32_t t163 = 144;

    t163 = (x1153>>((x1154<=x1155)%x1156));

    if (t163 != 32767) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint16_t x1161 = 2003U;
	static int64_t x1163 = INT64_MIN;
	int16_t x1164 = 10505;
	int32_t t164 = 4252240;

    t164 = (x1161>>((x1162<=x1163)%x1164));

    if (t164 != 2003) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x1165 = 19;
	static int16_t x1166 = -30;
	static int64_t x1167 = INT64_MIN;

    t165 = (x1165>>((x1166<=x1167)%x1168));

    if (t165 != 19) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1169 = 1676079573220176906LL;
	uint32_t x1171 = UINT32_MAX;
	static uint64_t x1172 = UINT64_MAX;
	volatile int64_t t166 = -1LL;

    t166 = (x1169>>((x1170<=x1171)%x1172));

    if (t166 != 838039786610088453LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x1173 = 227;
	uint32_t x1174 = 1U;
	int32_t t167 = 658;

    t167 = (x1173>>((x1174<=x1175)%x1176));

    if (t167 != 113) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1177 = UINT16_MAX;
	volatile uint8_t x1179 = 1U;
	int64_t x1180 = -8228LL;
	static int32_t t168 = 497677;

    t168 = (x1177>>((x1178<=x1179)%x1180));

    if (t168 != 32767) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1181 = INT32_MAX;
	int64_t x1182 = -1LL;
	static uint16_t x1183 = 2173U;
	static int64_t x1184 = INT64_MIN;

    t169 = (x1181>>((x1182<=x1183)%x1184));

    if (t169 != 1073741823) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1185 = 152229171U;
	uint32_t x1186 = UINT32_MAX;
	int32_t x1187 = 3891341;
	uint64_t x1188 = UINT64_MAX;
	volatile uint32_t t170 = 13263U;

    t170 = (x1185>>((x1186<=x1187)%x1188));

    if (t170 != 152229171U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1189 = 4827024LLU;
	static uint16_t x1190 = UINT16_MAX;
	static volatile uint16_t x1191 = 1U;
	int16_t x1192 = INT16_MAX;

    t171 = (x1189>>((x1190<=x1191)%x1192));

    if (t171 != 4827024LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1197 = 11305U;
	int32_t x1198 = -1733386;
	int8_t x1199 = INT8_MIN;
	int64_t x1200 = INT64_MIN;
	volatile int32_t t172 = -1;

    t172 = (x1197>>((x1198<=x1199)%x1200));

    if (t172 != 5652) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x1203 = INT8_MIN;
	static int64_t x1204 = INT64_MIN;

    t173 = (x1201>>((x1202<=x1203)%x1204));

    if (t173 != 12) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x1206 = UINT16_MAX;
	int64_t x1207 = -1692808402239340LL;
	int16_t x1208 = -1;
	volatile int32_t t174 = 14676786;

    t174 = (x1205>>((x1206<=x1207)%x1208));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1209 = UINT32_MAX;
	volatile int64_t x1210 = 399083032671LL;
	uint32_t x1211 = 92U;
	static uint64_t x1212 = UINT64_MAX;
	uint32_t t175 = UINT32_MAX;

    t175 = (x1209>>((x1210<=x1211)%x1212));

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1215 = 71107076U;
	int64_t x1216 = 1402809965LL;
	volatile int32_t t176 = -63;

    t176 = (x1213>>((x1214<=x1215)%x1216));

    if (t176 != 2) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x1251 = UINT8_MAX;
	volatile uint32_t t177 = 890351U;

    t177 = (x1249>>((x1250<=x1251)%x1252));

    if (t177 != 2147483647U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1257 = 0;
	uint64_t x1258 = UINT64_MAX;
	static int8_t x1259 = INT8_MIN;
	int32_t t178 = -8;

    t178 = (x1257>>((x1258<=x1259)%x1260));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1261 = 9U;
	int16_t x1264 = INT16_MIN;
	volatile int32_t t179 = -11404082;

    t179 = (x1261>>((x1262<=x1263)%x1264));

    if (t179 != 4) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x1269 = INT32_MAX;
	int16_t x1270 = INT16_MIN;
	int64_t x1271 = -1LL;
	int32_t t180 = -2;

    t180 = (x1269>>((x1270<=x1271)%x1272));

    if (t180 != 1073741823) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1273 = 302U;
	volatile int32_t x1274 = 355;
	static int8_t x1275 = INT8_MAX;
	static int16_t x1276 = INT16_MIN;
	int32_t t181 = 6746646;

    t181 = (x1273>>((x1274<=x1275)%x1276));

    if (t181 != 302) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x1277 = 30499U;
	int8_t x1278 = INT8_MIN;
	volatile int64_t x1279 = -788485998026395LL;
	int32_t x1280 = -6;
	uint32_t t182 = 30U;

    t182 = (x1277>>((x1278<=x1279)%x1280));

    if (t182 != 30499U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x1281 = 1206U;
	uint8_t x1282 = UINT8_MAX;
	int64_t x1283 = -1LL;
	static int32_t x1284 = 1571223;

    t183 = (x1281>>((x1282<=x1283)%x1284));

    if (t183 != 1206) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1289 = INT64_MAX;
	int64_t x1290 = 59706LL;
	int64_t x1291 = INT64_MIN;
	uint32_t x1292 = 12219U;
	int64_t t184 = INT64_MAX;

    t184 = (x1289>>((x1290<=x1291)%x1292));

    if (t184 != INT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1318 = 15U;
	static int8_t x1319 = -1;
	uint32_t x1320 = 56U;
	static int32_t t185 = INT32_MAX;

    t185 = (x1317>>((x1318<=x1319)%x1320));

    if (t185 != INT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x1325 = 111U;
	volatile uint64_t x1327 = 1LLU;
	static uint64_t x1328 = 112266LLU;
	int32_t t186 = -542118;

    t186 = (x1325>>((x1326<=x1327)%x1328));

    if (t186 != 111) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x1329 = INT8_MAX;
	int32_t x1330 = INT32_MIN;
	int64_t x1331 = INT64_MIN;
	uint16_t x1332 = 23433U;
	volatile int32_t t187 = 142;

    t187 = (x1329>>((x1330<=x1331)%x1332));

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x1337 = 57639LLU;
	int8_t x1338 = -1;
	static uint16_t x1339 = 31446U;
	volatile int32_t x1340 = -247393957;
	volatile uint64_t t188 = 48844300152421749LLU;

    t188 = (x1337>>((x1338<=x1339)%x1340));

    if (t188 != 28819LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint16_t x1346 = 2U;
	static uint32_t x1348 = 10U;
	static int32_t t189 = -17065;

    t189 = (x1345>>((x1346<=x1347)%x1348));

    if (t189 != 65535) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x1353 = UINT32_MAX;
	int64_t x1354 = INT64_MAX;
	int32_t x1355 = -1;
	static int8_t x1356 = 15;
	volatile uint32_t t190 = UINT32_MAX;

    t190 = (x1353>>((x1354<=x1355)%x1356));

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1357 = UINT32_MAX;
	uint64_t x1358 = 1LLU;
	uint64_t x1359 = UINT64_MAX;
	int16_t x1360 = INT16_MIN;
	volatile uint32_t t191 = 58563496U;

    t191 = (x1357>>((x1358<=x1359)%x1360));

    if (t191 != 2147483647U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1365 = 44;
	int32_t x1366 = -6181;
	static int32_t x1367 = INT32_MIN;
	uint32_t x1368 = 2026482U;
	int32_t t192 = 24;

    t192 = (x1365>>((x1366<=x1367)%x1368));

    if (t192 != 44) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1381 = UINT64_MAX;
	int32_t x1382 = INT32_MIN;
	uint8_t x1383 = UINT8_MAX;
	int64_t x1384 = -241919206LL;
	uint64_t t193 = 18226LLU;

    t193 = (x1381>>((x1382<=x1383)%x1384));

    if (t193 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1389 = 140;
	static uint16_t x1390 = UINT16_MAX;
	volatile uint8_t x1391 = UINT8_MAX;
	uint32_t x1392 = 4719649U;
	static int32_t t194 = -47;

    t194 = (x1389>>((x1390<=x1391)%x1392));

    if (t194 != 140) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1398 = INT8_MIN;
	volatile uint64_t x1399 = 24454LLU;
	volatile uint64_t x1400 = UINT64_MAX;
	uint32_t t195 = UINT32_MAX;

    t195 = (x1397>>((x1398<=x1399)%x1400));

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x1401 = 1U;
	int32_t x1403 = -1;
	static int64_t x1404 = -1LL;

    t196 = (x1401>>((x1402<=x1403)%x1404));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1405 = UINT16_MAX;
	volatile int16_t x1406 = INT16_MIN;
	int8_t x1408 = INT8_MIN;
	static volatile int32_t t197 = 474;

    t197 = (x1405>>((x1406<=x1407)%x1408));

    if (t197 != 65535) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1417 = 61864707U;
	volatile uint64_t x1418 = UINT64_MAX;
	int8_t x1419 = -28;
	int32_t x1420 = -1;
	static volatile uint32_t t198 = 3U;

    t198 = (x1417>>((x1418<=x1419)%x1420));

    if (t198 != 61864707U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1421 = 27;
	int8_t x1422 = -19;
	int8_t x1423 = INT8_MIN;
	volatile uint16_t x1424 = 2U;
	volatile int32_t t199 = 100801;

    t199 = (x1421>>((x1422<=x1423)%x1424));

    if (t199 != 27) { NG(); } else { ; }
	
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

