
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

int8_t x4 = INT8_MIN;
int16_t x11 = 1;
int32_t x18 = -189233428;
int64_t x32 = 118680532LL;
volatile int64_t t4 = 253LL;
static volatile int64_t t5 = -21852817LL;
int8_t x98 = -1;
volatile uint16_t x100 = UINT16_MAX;
uint8_t x120 = 12U;
uint32_t x125 = 2U;
volatile uint16_t x127 = UINT16_MAX;
uint64_t x134 = 6866399463LLU;
volatile int64_t x136 = -995440382LL;
int16_t x141 = INT16_MAX;
int8_t x142 = 32;
uint64_t x144 = 232616331042305348LLU;
uint16_t x146 = 1324U;
static int32_t t13 = -1018590;
volatile int64_t x161 = INT64_MIN;
volatile int16_t x165 = -31;
static int32_t t16 = -15233300;
int8_t x173 = 0;
uint8_t x211 = 15U;
static volatile int64_t t18 = -5651001LL;
int32_t x215 = INT32_MAX;
int8_t x218 = -1;
uint64_t x237 = UINT64_MAX;
uint8_t x239 = UINT8_MAX;
uint32_t x243 = UINT32_MAX;
static uint32_t t23 = 253848U;
int32_t t25 = -6;
uint16_t x277 = 0U;
volatile int16_t x278 = INT16_MAX;
int16_t x295 = 1;
volatile int8_t x296 = -1;
volatile int16_t x301 = INT16_MIN;
volatile int8_t x302 = -1;
volatile int8_t x310 = INT8_MIN;
volatile uint32_t x313 = 2298U;
static int16_t x317 = -15;
int64_t x328 = INT64_MAX;
static uint16_t x330 = UINT16_MAX;
int16_t x332 = INT16_MIN;
volatile int16_t x334 = -6072;
uint8_t x336 = UINT8_MAX;
volatile uint8_t x342 = 35U;
uint16_t x343 = UINT16_MAX;
int16_t x344 = -11;
uint64_t x365 = 506000372610LLU;
volatile uint16_t x367 = 21337U;
volatile uint64_t t41 = 901366LLU;
static uint32_t t42 = 15U;
int64_t t43 = 4306602359262047315LL;
int8_t x391 = INT8_MIN;
volatile int16_t x400 = INT16_MIN;
uint64_t t46 = 310943257LLU;
static int16_t x413 = -58;
int32_t x416 = 5727748;
volatile uint64_t t49 = 11LLU;
static uint64_t x424 = 46428147LLU;
static uint8_t x425 = 0U;
static volatile int64_t t52 = 2793784029261808LL;
static volatile int16_t x434 = 650;
volatile int64_t x440 = -447188513689LL;
uint32_t x443 = 14755U;
int64_t t55 = 1762635267972LL;
uint8_t x446 = 2U;
volatile int64_t x459 = -1LL;
int16_t x474 = INT16_MAX;
uint64_t t64 = 3LLU;
volatile uint64_t t65 = 36LLU;
uint16_t x513 = UINT16_MAX;
int64_t x517 = INT64_MAX;
uint64_t x529 = 49251388LLU;
int8_t x532 = INT8_MAX;
uint64_t t69 = 65609682LLU;
uint16_t x551 = 5U;
static int16_t x552 = 665;
static uint16_t x556 = 29U;
volatile uint64_t x570 = 17324426889098064LLU;
static uint16_t x571 = 938U;
static uint32_t x577 = UINT32_MAX;
uint8_t x579 = 63U;
uint32_t x588 = 734383U;
uint32_t x601 = 85954U;
int32_t x604 = -1;
volatile uint64_t t83 = 158721487783292LLU;
volatile int64_t x621 = -1LL;
uint32_t x622 = 12U;
volatile int8_t x634 = -1;
uint16_t x635 = 830U;
static volatile int64_t x657 = 33492697771358818LL;
uint32_t x672 = UINT32_MAX;
uint16_t x673 = UINT16_MAX;
int8_t x674 = 3;
uint32_t t91 = 442492U;
uint32_t x680 = 688U;
int32_t x684 = -465;
int8_t x706 = -49;
uint8_t x731 = 66U;
static int8_t x743 = 9;
int64_t x748 = -1LL;
volatile int64_t t102 = -7314906148647LL;
int32_t x758 = INT32_MIN;
int32_t x772 = -41;
volatile int64_t t105 = 1178631240140771650LL;
int64_t x783 = -1LL;
int16_t x789 = INT16_MIN;
int8_t x792 = -1;
static uint8_t x822 = 6U;
int64_t x823 = -113073302994LL;
uint64_t t110 = 67980453626610LLU;
uint64_t x827 = 3438233728111LLU;
volatile uint64_t t111 = 337215068LLU;
int8_t x835 = INT8_MIN;
static uint64_t x838 = 1838099166367163688LLU;
int16_t x843 = 10700;
int64_t x847 = -641734LL;
uint8_t x857 = 9U;
volatile int64_t t117 = -227638144907959083LL;
int8_t x882 = 1;
uint8_t x883 = 102U;
volatile int16_t x896 = INT16_MIN;
int8_t x912 = INT8_MAX;
static uint64_t t122 = 1LLU;
int64_t t123 = -7315894205817813LL;
int64_t t125 = -2407154030758LL;
uint64_t x930 = 361484LLU;
uint64_t t126 = 7759981643LLU;
int16_t x936 = INT16_MIN;
int64_t t128 = -29520217564340481LL;
uint64_t x964 = 134721LLU;
volatile uint8_t x966 = 60U;
static int32_t x994 = -434;
int32_t x1005 = -1;
volatile int8_t x1011 = INT8_MIN;
static int32_t x1025 = 12;
int32_t x1028 = INT32_MAX;
int64_t x1032 = -31847LL;
uint16_t x1035 = 7U;
int32_t x1040 = INT32_MAX;
static volatile int64_t x1065 = -1LL;
static int64_t t144 = -15LL;
static uint16_t x1115 = UINT16_MAX;
int64_t t147 = 945209LL;
volatile int64_t x1128 = -449LL;
volatile int32_t t150 = -126412243;
static uint8_t x1138 = UINT8_MAX;
static int32_t x1182 = -1;
int64_t x1184 = INT64_MIN;
int32_t t153 = -2247327;
int8_t x1189 = INT8_MIN;
static volatile int16_t x1190 = INT16_MIN;
int32_t x1218 = 6;
volatile int16_t x1220 = INT16_MIN;
static volatile int32_t x1221 = -332;
int32_t x1222 = -1;
uint16_t x1228 = 400U;
int16_t x1234 = INT16_MIN;
int16_t x1236 = INT16_MIN;
uint64_t x1246 = 3519447LLU;
volatile int64_t x1248 = -50LL;
volatile uint64_t t164 = 28LLU;
int64_t x1266 = -1LL;
uint64_t x1303 = 4069LLU;
static volatile uint16_t x1305 = 5092U;
uint64_t t171 = 437419LLU;
int16_t x1318 = 61;
uint64_t t174 = 810290LLU;
uint32_t x1326 = UINT32_MAX;
volatile int32_t t177 = 10124;
int8_t x1340 = INT8_MIN;
uint32_t t178 = 63191U;
int32_t x1341 = INT32_MIN;
static uint32_t x1342 = 6278761U;
static uint64_t t180 = 378899LLU;
static uint32_t t181 = 29341537U;
static uint32_t x1379 = 206541329U;
volatile uint16_t x1384 = 372U;
static volatile uint8_t x1416 = UINT8_MAX;
uint8_t x1441 = 6U;
static uint16_t x1443 = 58U;
static int32_t x1444 = -1;
int16_t x1445 = -1;
int32_t x1446 = 1;
uint64_t x1452 = 58900LLU;
int8_t x1458 = -1;
static int64_t x1460 = INT64_MIN;
int32_t x1466 = -1;
int32_t t198 = -384;
int8_t x1473 = INT8_MAX;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	uint64_t x2 = UINT64_MAX;
	static int32_t x3 = INT32_MAX;
	uint64_t t0 = 2737084565473974248LLU;

    t0 = (x1/((x2*x3)&x4));

    if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x9 = INT64_MIN;
	static int16_t x10 = INT16_MIN;
	int8_t x12 = -1;
	volatile int64_t t1 = -1159LL;

    t1 = (x9/((x10*x11)&x12));

    if (t1 != 281474976710656LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x17 = 173U;
	volatile uint64_t x19 = UINT64_MAX;
	int8_t x20 = INT8_MIN;
	volatile uint64_t t2 = 337029633931378558LLU;

    t2 = (x17/((x18*x19)&x20));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x25 = INT32_MIN;
	static int32_t x26 = INT32_MIN;
	volatile int64_t x27 = 121LL;
	static int8_t x28 = -2;
	volatile int64_t t3 = -67446382LL;

    t3 = (x25/((x26*x27)&x28));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint32_t x29 = 864716U;
	int64_t x30 = 12107729210681LL;
	int16_t x31 = INT16_MIN;

    t4 = (x29/((x30*x31)&x32));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x41 = 126837;
	int64_t x42 = -1LL;
	volatile int16_t x43 = -90;
	int64_t x44 = -1LL;

    t5 = (x41/((x42*x43)&x44));

    if (t5 != 1409LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x65 = -2;
	int8_t x66 = -1;
	volatile int8_t x67 = INT8_MAX;
	volatile int64_t x68 = INT64_MAX;
	int64_t t6 = -121010LL;

    t6 = (x65/((x66*x67)&x68));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x97 = 73U;
	int32_t x99 = INT32_MAX;
	int32_t t7 = 0;

    t7 = (x97/((x98*x99)&x100));

    if (t7 != 73) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x109 = INT8_MAX;
	int8_t x110 = -1;
	static int32_t x111 = INT32_MAX;
	int16_t x112 = INT16_MIN;
	int32_t t8 = 120683;

    t8 = (x109/((x110*x111)&x112));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x117 = 3639LLU;
	uint32_t x118 = 43016U;
	volatile int32_t x119 = -3;
	uint64_t t9 = 273084119218LLU;

    t9 = (x117/((x118*x119)&x120));

    if (t9 != 454LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x126 = 7;
	int16_t x128 = -5;
	static volatile uint32_t t10 = 13219U;

    t10 = (x125/((x126*x127)&x128));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x133 = -1;
	static int16_t x135 = -26;
	uint64_t t11 = 423075886466LLU;

    t11 = (x133/((x134*x135)&x136));

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x143 = 15U;
	uint64_t t12 = 20583749873325LLU;

    t12 = (x141/((x142*x143)&x144));

    if (t12 != 102LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x145 = -7;
	static int16_t x147 = -2473;
	int8_t x148 = INT8_MAX;

    t13 = (x145/((x146*x147)&x148));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x162 = 55U;
	int8_t x163 = -1;
	int16_t x164 = -1;
	static int64_t t14 = -8509907963017778LL;

    t14 = (x161/((x162*x163)&x164));

    if (t14 != 167697673397359560LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x166 = -18;
	int8_t x167 = INT8_MIN;
	uint32_t x168 = UINT32_MAX;
	uint32_t t15 = 55564274U;

    t15 = (x165/((x166*x167)&x168));

    if (t15 != 1864135U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x169 = INT32_MIN;
	int16_t x170 = INT16_MAX;
	int16_t x171 = -80;
	uint16_t x172 = 29562U;

    t16 = (x169/((x170*x171)&x172));

    if (t16 != -26843545) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x174 = -5892754;
	static volatile int8_t x175 = -6;
	int64_t x176 = 885366796931LL;
	static volatile int64_t t17 = 6650566LL;

    t17 = (x173/((x174*x175)&x176));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x209 = 24572384;
	int16_t x210 = -1;
	static volatile int64_t x212 = -1LL;

    t18 = (x209/((x210*x211)&x212));

    if (t18 != -1638158LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x213 = INT8_MAX;
	uint32_t x214 = 179302297U;
	int32_t x216 = 407890;
	static volatile uint32_t t19 = 2U;

    t19 = (x213/((x214*x215)&x216));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x217 = INT32_MAX;
	int8_t x219 = INT8_MIN;
	uint64_t x220 = 178232846300829LLU;
	uint64_t t20 = 3325878444960LLU;

    t20 = (x217/((x218*x219)&x220));

    if (t20 != 16777215LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x225 = -1;
	int32_t x226 = -1;
	static int64_t x227 = INT64_MAX;
	int64_t x228 = INT64_MIN;
	int64_t t21 = 40LL;

    t21 = (x225/((x226*x227)&x228));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x238 = 96248U;
	static int8_t x240 = -1;
	static uint64_t t22 = 4468394353625124LLU;

    t22 = (x237/((x238*x239)&x240));

    if (t22 != 751601829005LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x241 = INT16_MIN;
	uint8_t x242 = 1U;
	static volatile uint16_t x244 = UINT16_MAX;

    t23 = (x241/((x242*x243)&x244));

    if (t23 != 65536U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x249 = 1152U;
	int64_t x250 = -1LL;
	int32_t x251 = -820;
	int8_t x252 = INT8_MIN;
	int64_t t24 = -2737596744240LL;

    t24 = (x249/((x250*x251)&x252));

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x273 = -1;
	int8_t x274 = INT8_MIN;
	static uint8_t x275 = 1U;
	static uint16_t x276 = UINT16_MAX;

    t25 = (x273/((x274*x275)&x276));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x279 = -8LL;
	static volatile int64_t x280 = INT64_MAX;
	volatile int64_t t26 = 22531836LL;

    t26 = (x277/((x278*x279)&x280));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x293 = -1;
	int64_t x294 = INT64_MIN;
	volatile int64_t t27 = 13358095589665638LL;

    t27 = (x293/((x294*x295)&x296));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x297 = -20LL;
	static uint16_t x298 = 234U;
	uint8_t x299 = 46U;
	volatile uint8_t x300 = 5U;
	int64_t t28 = -2132752071861899271LL;

    t28 = (x297/((x298*x299)&x300));

    if (t28 != -5LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint16_t x303 = UINT16_MAX;
	int16_t x304 = -1;
	volatile int32_t t29 = 10;

    t29 = (x301/((x302*x303)&x304));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x309 = -1;
	uint16_t x311 = UINT16_MAX;
	uint32_t x312 = UINT32_MAX;
	volatile uint32_t t30 = 19519U;

    t30 = (x309/((x310*x311)&x312));

    if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int16_t x314 = 1;
	static volatile uint32_t x315 = 350561780U;
	uint8_t x316 = 17U;
	uint32_t t31 = 2043U;

    t31 = (x313/((x314*x315)&x316));

    if (t31 != 143U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x318 = INT16_MIN;
	int16_t x319 = -1;
	int8_t x320 = -9;
	static volatile int32_t t32 = 7;

    t32 = (x317/((x318*x319)&x320));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x321 = INT64_MIN;
	int32_t x322 = 14;
	volatile int16_t x323 = INT16_MAX;
	uint8_t x324 = UINT8_MAX;
	int64_t t33 = 2207LL;

    t33 = (x321/((x322*x323)&x324));

    if (t33 != -38113107590308990LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x325 = 0U;
	int64_t x326 = -1LL;
	uint64_t x327 = UINT64_MAX;
	static uint64_t t34 = 75215390LLU;

    t34 = (x325/((x326*x327)&x328));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x329 = -1;
	uint8_t x331 = 27U;
	volatile int32_t t35 = 417;

    t35 = (x329/((x330*x331)&x332));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x333 = -1LL;
	uint32_t x335 = 7U;
	volatile int64_t t36 = -976213966944715LL;

    t36 = (x333/((x334*x335)&x336));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x337 = INT16_MAX;
	uint16_t x338 = 14U;
	uint8_t x339 = 22U;
	static volatile uint64_t x340 = UINT64_MAX;
	volatile uint64_t t37 = 247888352LLU;

    t37 = (x337/((x338*x339)&x340));

    if (t37 != 106LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x341 = -1;
	volatile int32_t t38 = 209286;

    t38 = (x341/((x342*x343)&x344));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x353 = UINT64_MAX;
	uint32_t x354 = 1911607620U;
	volatile int16_t x355 = INT16_MAX;
	int16_t x356 = INT16_MIN;
	volatile uint64_t t39 = 3622892696133LLU;

    t39 = (x353/((x354*x355)&x356));

    if (t39 != 4457032551LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x366 = -1;
	uint64_t x368 = 15574LLU;
	uint64_t t40 = 586LLU;

    t40 = (x365/((x366*x367)&x368));

    if (t40 != 44393785LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x369 = 6101003976666LLU;
	uint32_t x370 = UINT32_MAX;
	static int16_t x371 = INT16_MIN;
	int64_t x372 = -1LL;

    t41 = (x369/((x370*x371)&x372));

    if (t41 != 186187865LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x373 = 2006U;
	uint8_t x374 = UINT8_MAX;
	static int32_t x375 = 98972;
	int8_t x376 = -1;

    t42 = (x373/((x374*x375)&x376));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x377 = INT64_MAX;
	int8_t x378 = -33;
	uint8_t x379 = UINT8_MAX;
	int64_t x380 = INT64_MAX;

    t43 = (x377/((x378*x379)&x380));

    if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x389 = 2U;
	static volatile int32_t x390 = 5860;
	int16_t x392 = INT16_MIN;
	uint32_t t44 = 299U;

    t44 = (x389/((x390*x391)&x392));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x393 = INT8_MIN;
	int32_t x394 = 5989;
	uint64_t x395 = UINT64_MAX;
	int16_t x396 = -1;
	uint64_t t45 = 83431863LLU;

    t45 = (x393/((x394*x395)&x396));

    if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x397 = UINT64_MAX;
	int64_t x398 = -2233718LL;
	uint32_t x399 = UINT32_MAX;

    t46 = (x397/((x398*x399)&x400));

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x405 = INT16_MIN;
	volatile int32_t x406 = INT32_MIN;
	uint32_t x407 = UINT32_MAX;
	int8_t x408 = INT8_MIN;
	uint32_t t47 = 10U;

    t47 = (x405/((x406*x407)&x408));

    if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x409 = INT8_MIN;
	uint32_t x410 = 2041482U;
	int16_t x411 = -1;
	int16_t x412 = INT16_MIN;
	volatile uint32_t t48 = 482109U;

    t48 = (x409/((x410*x411)&x412));

    if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x414 = -1;
	uint64_t x415 = 94350LLU;

    t49 = (x413/((x414*x415)&x416));

    if (t49 != 3272073110431LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x421 = INT16_MIN;
	int8_t x422 = INT8_MAX;
	volatile uint8_t x423 = 56U;
	uint64_t t50 = 491873LLU;

    t50 = (x421/((x422*x423)&x424));

    if (t50 != 6132561194717260LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x426 = 8148792LL;
	volatile int8_t x427 = INT8_MIN;
	static volatile int32_t x428 = INT32_MIN;
	volatile int64_t t51 = -1117515418803864540LL;

    t51 = (x425/((x426*x427)&x428));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x429 = -36LL;
	int32_t x430 = -776;
	static int32_t x431 = 146;
	volatile int32_t x432 = INT32_MIN;

    t52 = (x429/((x430*x431)&x432));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x433 = INT64_MIN;
	uint8_t x435 = UINT8_MAX;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t53 = 28497440724553229LLU;

    t53 = (x433/((x434*x435)&x436));

    if (t53 != 55646286798520LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x437 = 0;
	int16_t x438 = -1;
	volatile int64_t x439 = INT64_MAX;
	volatile int64_t t54 = -64035407525LL;

    t54 = (x437/((x438*x439)&x440));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x441 = 1U;
	int8_t x442 = 6;
	volatile int64_t x444 = 104643592256343027LL;

    t55 = (x441/((x442*x443)&x444));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x445 = -1;
	uint64_t x447 = 239747LLU;
	static volatile int8_t x448 = -1;
	volatile uint64_t t56 = 1724402890LLU;

    t56 = (x445/((x446*x447)&x448));

    if (t56 != 38471271952745LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint16_t x453 = 14274U;
	uint32_t x454 = 460428U;
	static int32_t x455 = INT32_MAX;
	int64_t x456 = -1LL;
	volatile int64_t t57 = -116LL;

    t57 = (x453/((x454*x455)&x456));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x457 = 17300;
	int64_t x458 = -1LL;
	int8_t x460 = -1;
	static volatile int64_t t58 = -2786LL;

    t58 = (x457/((x458*x459)&x460));

    if (t58 != 17300LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x461 = UINT32_MAX;
	static uint32_t x462 = UINT32_MAX;
	int32_t x463 = INT32_MAX;
	volatile int16_t x464 = -7;
	uint32_t t59 = 22876216U;

    t59 = (x461/((x462*x463)&x464));

    if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x473 = INT32_MIN;
	volatile uint8_t x475 = 23U;
	int32_t x476 = INT32_MAX;
	volatile int32_t t60 = 198488;

    t60 = (x473/((x474*x475)&x476));

    if (t60 != -2849) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x481 = -1;
	volatile uint64_t x482 = 339LLU;
	int8_t x483 = INT8_MIN;
	volatile int32_t x484 = INT32_MAX;
	uint64_t t61 = 718712050544891096LLU;

    t61 = (x481/((x482*x483)&x484));

    if (t61 != 8590108163LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x485 = -38615783;
	int32_t x486 = 6;
	int64_t x487 = 42434LL;
	int16_t x488 = INT16_MAX;
	volatile int64_t t62 = -366LL;

    t62 = (x485/((x486*x487)&x488));

    if (t62 != -1530LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint8_t x493 = UINT8_MAX;
	static int32_t x494 = 21901;
	static int32_t x495 = 23410;
	uint16_t x496 = 120U;
	volatile int32_t t63 = -58;

    t63 = (x493/((x494*x495)&x496));

    if (t63 != 3) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x505 = INT16_MAX;
	static int8_t x506 = -1;
	uint16_t x507 = 170U;
	volatile uint64_t x508 = 7438606384188LLU;

    t64 = (x505/((x506*x507)&x508));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x509 = UINT64_MAX;
	int8_t x510 = INT8_MIN;
	uint64_t x511 = 31270LLU;
	volatile int64_t x512 = -10483LL;

    t65 = (x509/((x510*x511)&x512));

    if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x514 = 36U;
	static int32_t x515 = -2037175;
	int32_t x516 = INT32_MAX;
	int32_t t66 = 45903;

    t66 = (x513/((x514*x515)&x516));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x518 = INT32_MIN;
	int64_t x519 = -1LL;
	int8_t x520 = INT8_MIN;
	volatile int64_t t67 = -6414306026LL;

    t67 = (x517/((x518*x519)&x520));

    if (t67 != 4294967295LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x521 = -1LL;
	static volatile uint8_t x522 = UINT8_MAX;
	volatile int16_t x523 = -257;
	static int8_t x524 = INT8_MIN;
	volatile int64_t t68 = 2130026414834624841LL;

    t68 = (x521/((x522*x523)&x524));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x530 = 24;
	uint32_t x531 = 19655U;

    t69 = (x529/((x530*x531)&x532));

    if (t69 != 1231284LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x533 = UINT16_MAX;
	uint16_t x534 = 13U;
	static uint16_t x535 = UINT16_MAX;
	volatile uint64_t x536 = 416764032LLU;
	volatile uint64_t t70 = 7LLU;

    t70 = (x533/((x534*x535)&x536));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x537 = INT16_MIN;
	static int8_t x538 = INT8_MAX;
	int8_t x539 = -39;
	int8_t x540 = -1;
	volatile int32_t t71 = 11512459;

    t71 = (x537/((x538*x539)&x540));

    if (t71 != 6) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x549 = 317022757408882287LLU;
	uint16_t x550 = UINT16_MAX;
	static uint64_t t72 = 578734718530LLU;

    t72 = (x549/((x550*x551)&x552));

    if (t72 != 476725950990800LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x553 = UINT32_MAX;
	uint64_t x554 = 4420LLU;
	volatile int16_t x555 = -1;
	volatile uint64_t t73 = 10057465925649LLU;

    t73 = (x553/((x554*x555)&x556));

    if (t73 != 153391689LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x565 = 2546U;
	int8_t x566 = 23;
	uint32_t x567 = UINT32_MAX;
	volatile int16_t x568 = INT16_MIN;
	volatile uint32_t t74 = 200U;

    t74 = (x565/((x566*x567)&x568));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x569 = -1;
	int16_t x572 = 488;
	volatile uint64_t t75 = 691990692106LLU;

    t75 = (x569/((x570*x571)&x572));

    if (t75 != 64051194700380387LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x578 = 54667U;
	uint64_t x580 = UINT64_MAX;
	uint64_t t76 = 9LLU;

    t76 = (x577/((x578*x579)&x580));

    if (t76 != 1247LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x585 = -1;
	uint64_t x586 = 12721790666701700LLU;
	volatile int16_t x587 = INT16_MAX;
	static volatile uint64_t t77 = 369LLU;

    t77 = (x585/((x586*x587)&x588));

    if (t77 != 31218469828174LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x593 = INT16_MAX;
	int16_t x594 = -945;
	int32_t x595 = 37;
	volatile int32_t x596 = INT32_MIN;
	volatile int32_t t78 = 647327882;

    t78 = (x593/((x594*x595)&x596));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x597 = -718;
	int16_t x598 = 1;
	uint8_t x599 = 1U;
	int32_t x600 = INT32_MAX;
	volatile int32_t t79 = 421;

    t79 = (x597/((x598*x599)&x600));

    if (t79 != -718) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x602 = 485274;
	volatile int64_t x603 = -77LL;
	int64_t t80 = 1440492945513873500LL;

    t80 = (x601/((x602*x603)&x604));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x605 = -1;
	static int32_t x606 = 237;
	int8_t x607 = INT8_MIN;
	volatile int64_t x608 = INT64_MIN;
	volatile int64_t t81 = -1LL;

    t81 = (x605/((x606*x607)&x608));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x609 = -1;
	uint16_t x610 = UINT16_MAX;
	static uint8_t x611 = 92U;
	uint64_t x612 = UINT64_MAX;
	static volatile uint64_t t82 = 229943LLU;

    t82 = (x609/((x610*x611)&x612));

    if (t82 != 3059557301559LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x613 = UINT16_MAX;
	volatile int8_t x614 = INT8_MAX;
	static uint64_t x615 = 43187LLU;
	volatile uint64_t x616 = 4061436LLU;

    t83 = (x613/((x614*x615)&x616));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x623 = 68944507574550784LL;
	int8_t x624 = -1;
	static int64_t t84 = 517485382546327LL;

    t84 = (x621/((x622*x623)&x624));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x625 = 3;
	int16_t x626 = -1;
	int32_t x627 = -1586;
	volatile uint32_t x628 = UINT32_MAX;
	uint32_t t85 = 44235451U;

    t85 = (x625/((x626*x627)&x628));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x629 = 240U;
	static int8_t x630 = INT8_MIN;
	uint64_t x631 = 3003580493900LLU;
	int16_t x632 = INT16_MIN;
	uint64_t t86 = 97645033108LLU;

    t86 = (x629/((x630*x631)&x632));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x633 = -1LL;
	int16_t x636 = 576;
	static volatile int64_t t87 = 1LL;

    t87 = (x633/((x634*x635)&x636));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x637 = INT64_MIN;
	int32_t x638 = INT32_MAX;
	uint64_t x639 = 2303886397508831045LLU;
	static volatile int32_t x640 = 1978;
	volatile uint64_t t88 = 7277237LLU;

    t88 = (x637/((x638*x639)&x640));

    if (t88 != 49588021703520300LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x658 = -2831;
	uint64_t x659 = UINT64_MAX;
	uint16_t x660 = 15U;
	uint64_t t89 = 24067168724971LLU;

    t89 = (x657/((x658*x659)&x660));

    if (t89 != 2232846518090587LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x669 = 125U;
	int64_t x670 = -1LL;
	uint16_t x671 = 491U;
	int64_t t90 = 236135785429391769LL;

    t90 = (x669/((x670*x671)&x672));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x675 = 681U;
	int8_t x676 = INT8_MIN;

    t91 = (x673/((x674*x675)&x676));

    if (t91 != 34U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x677 = -1;
	int8_t x678 = INT8_MIN;
	int32_t x679 = -402705;
	volatile uint32_t t92 = 28397U;

    t92 = (x677/((x678*x679)&x680));

    if (t92 != 33554431U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x681 = UINT32_MAX;
	int16_t x682 = INT16_MAX;
	static int32_t x683 = -1;
	volatile uint32_t t93 = 411807206U;

    t93 = (x681/((x682*x683)&x684));

    if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x685 = 191LLU;
	volatile int32_t x686 = INT32_MAX;
	int64_t x687 = -1LL;
	int8_t x688 = INT8_MAX;
	static volatile uint64_t t94 = 372728LLU;

    t94 = (x685/((x686*x687)&x688));

    if (t94 != 191LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x693 = UINT16_MAX;
	int16_t x694 = INT16_MIN;
	uint16_t x695 = 2051U;
	int64_t x696 = INT64_MIN;
	volatile int64_t t95 = 66812314523489913LL;

    t95 = (x693/((x694*x695)&x696));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x697 = -1;
	static int16_t x698 = INT16_MAX;
	uint32_t x699 = 478U;
	static volatile int8_t x700 = INT8_MIN;
	uint32_t t96 = 15962070U;

    t96 = (x697/((x698*x699)&x700));

    if (t96 != 274U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x705 = -1;
	int64_t x707 = 25265686360300390LL;
	int64_t x708 = INT64_MIN;
	int64_t t97 = 2060719061455LL;

    t97 = (x705/((x706*x707)&x708));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x725 = 31680029074668LLU;
	volatile int16_t x726 = INT16_MIN;
	int32_t x727 = -1;
	int8_t x728 = INT8_MIN;
	uint64_t t98 = 44335924173LLU;

    t98 = (x725/((x726*x727)&x728));

    if (t98 != 966797762LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x729 = 60U;
	int64_t x730 = -8066235928206649LL;
	int64_t x732 = -1LL;
	static volatile int64_t t99 = 6779767812LL;

    t99 = (x729/((x730*x731)&x732));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x741 = 0;
	int8_t x742 = -27;
	int64_t x744 = INT64_MIN;
	static volatile int64_t t100 = 57722LL;

    t100 = (x741/((x742*x743)&x744));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x745 = -1;
	uint32_t x746 = UINT32_MAX;
	static int8_t x747 = INT8_MIN;
	volatile int64_t t101 = 19098270LL;

    t101 = (x745/((x746*x747)&x748));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x753 = INT64_MAX;
	int16_t x754 = -1;
	int16_t x755 = -14;
	volatile int64_t x756 = -1LL;

    t102 = (x753/((x754*x755)&x756));

    if (t102 != 658812288346769700LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x757 = UINT64_MAX;
	volatile uint32_t x759 = 64165835U;
	static int16_t x760 = INT16_MIN;
	static uint64_t t103 = 254302LLU;

    t103 = (x757/((x758*x759)&x760));

    if (t103 != 8589934591LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x765 = 86U;
	volatile uint16_t x766 = UINT16_MAX;
	volatile int16_t x767 = 55;
	volatile int8_t x768 = -1;
	volatile int32_t t104 = 228;

    t104 = (x765/((x766*x767)&x768));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x769 = 286981LL;
	int8_t x770 = -1;
	int16_t x771 = INT16_MIN;

    t105 = (x769/((x770*x771)&x772));

    if (t105 != 8LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x781 = 43LLU;
	int16_t x782 = INT16_MIN;
	int32_t x784 = -2052;
	volatile uint64_t t106 = 195LLU;

    t106 = (x781/((x782*x783)&x784));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x790 = INT8_MIN;
	uint32_t x791 = UINT32_MAX;
	volatile uint32_t t107 = 4071589U;

    t107 = (x789/((x790*x791)&x792));

    if (t107 != 33554176U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x801 = INT64_MAX;
	uint64_t x802 = 7LLU;
	static uint32_t x803 = 59974U;
	static int32_t x804 = INT32_MAX;
	volatile uint64_t t108 = 3457LLU;

    t108 = (x801/((x802*x803)&x804));

    if (t108 != 21969929914521LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint16_t x809 = 1U;
	uint32_t x810 = 695064U;
	uint64_t x811 = 369413836LLU;
	int8_t x812 = INT8_MIN;
	uint64_t t109 = 21LLU;

    t109 = (x809/((x810*x811)&x812));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x821 = 15519U;
	uint64_t x824 = UINT64_MAX;

    t110 = (x821/((x822*x823)&x824));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x825 = -1LL;
	int64_t x826 = 30263040355023736LL;
	uint32_t x828 = 230791519U;

    t111 = (x825/((x826*x827)&x828));

    if (t111 != 209269586640LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x833 = INT64_MIN;
	static int8_t x834 = -1;
	volatile int8_t x836 = INT8_MIN;
	volatile int64_t t112 = -79541LL;

    t112 = (x833/((x834*x835)&x836));

    if (t112 != -72057594037927936LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x837 = 1U;
	uint32_t x839 = UINT32_MAX;
	static int32_t x840 = INT32_MAX;
	volatile uint64_t t113 = 11248LLU;

    t113 = (x837/((x838*x839)&x840));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x841 = INT8_MAX;
	int16_t x842 = -6906;
	uint16_t x844 = 14U;
	int32_t t114 = -458;

    t114 = (x841/((x842*x843)&x844));

    if (t114 != 15) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x845 = 53658U;
	uint8_t x846 = 3U;
	int8_t x848 = -1;
	volatile int64_t t115 = 642620LL;

    t115 = (x845/((x846*x847)&x848));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x849 = -1;
	volatile uint8_t x850 = UINT8_MAX;
	int64_t x851 = -403631LL;
	volatile int64_t x852 = -31251251238LL;
	volatile int64_t t116 = 58326830737948400LL;

    t116 = (x849/((x850*x851)&x852));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x858 = UINT8_MAX;
	static int8_t x859 = INT8_MIN;
	static int64_t x860 = 46236004343340941LL;

    t117 = (x857/((x858*x859)&x860));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x869 = 23U;
	int8_t x870 = -1;
	volatile int16_t x871 = INT16_MIN;
	volatile int16_t x872 = -1;
	volatile int32_t t118 = -5607;

    t118 = (x869/((x870*x871)&x872));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x881 = 2051511394193201LLU;
	uint16_t x884 = 3792U;
	uint64_t t119 = 23374461167193LLU;

    t119 = (x881/((x882*x883)&x884));

    if (t119 != 32054865534268LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x893 = -1LL;
	static int16_t x894 = -1074;
	static int64_t x895 = 15592965LL;
	int64_t t120 = 1058760277844707LL;

    t120 = (x893/((x894*x895)&x896));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x901 = INT32_MAX;
	static int64_t x902 = -1LL;
	int16_t x903 = INT16_MIN;
	int8_t x904 = INT8_MIN;
	volatile int64_t t121 = -114641331576275LL;

    t121 = (x901/((x902*x903)&x904));

    if (t121 != 65535LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x909 = -1LL;
	int64_t x910 = -76395569791059923LL;
	static uint64_t x911 = 38727785850509LLU;

    t122 = (x909/((x910*x911)&x912));

    if (t122 != 252695124297391118LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x913 = 7U;
	int64_t x914 = -1LL;
	volatile int8_t x915 = INT8_MAX;
	int64_t x916 = 520172244307986LL;

    t123 = (x913/((x914*x915)&x916));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x917 = 13733U;
	int16_t x918 = 234;
	volatile int8_t x919 = -1;
	static int8_t x920 = INT8_MAX;
	uint32_t t124 = 6U;

    t124 = (x917/((x918*x919)&x920));

    if (t124 != 624U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x921 = UINT32_MAX;
	int32_t x922 = -1;
	int16_t x923 = -1;
	static int64_t x924 = 409679499226215LL;

    t125 = (x921/((x922*x923)&x924));

    if (t125 != 4294967295LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x929 = INT32_MAX;
	int8_t x931 = INT8_MIN;
	int8_t x932 = -22;

    t126 = (x929/((x930*x931)&x932));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x933 = INT16_MAX;
	int8_t x934 = -4;
	int16_t x935 = INT16_MIN;
	volatile int32_t t127 = -277245;

    t127 = (x933/((x934*x935)&x936));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x937 = INT64_MAX;
	uint16_t x938 = UINT16_MAX;
	uint16_t x939 = 3163U;
	volatile int32_t x940 = INT32_MAX;

    t128 = (x937/((x938*x939)&x940));

    if (t128 != 44495616778LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x961 = -1;
	int8_t x962 = 31;
	uint8_t x963 = 5U;
	static uint64_t t129 = UINT64_MAX;

    t129 = (x961/((x962*x963)&x964));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x965 = 29;
	int16_t x967 = -5;
	int16_t x968 = -619;
	int32_t t130 = 53124;

    t130 = (x965/((x966*x967)&x968));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x985 = -5545944655861742LL;
	uint16_t x986 = UINT16_MAX;
	volatile uint32_t x987 = 115U;
	int8_t x988 = -1;
	int64_t t131 = -19520655830836915LL;

    t131 = (x985/((x986*x987)&x988));

    if (t131 != -735875573LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x993 = INT16_MAX;
	static volatile int16_t x995 = -4;
	static int32_t x996 = -11493307;
	static int32_t t132 = 40715;

    t132 = (x993/((x994*x995)&x996));

    if (t132 != 511) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x1001 = -100LL;
	int32_t x1002 = -1891982;
	uint32_t x1003 = 815U;
	uint64_t x1004 = 3328LLU;
	static volatile uint64_t t133 = 25973553620LLU;

    t133 = (x1001/((x1002*x1003)&x1004));

    if (t133 != 8006399337547548LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x1006 = -23;
	static volatile uint8_t x1007 = 2U;
	int8_t x1008 = -1;
	volatile int32_t t134 = 1;

    t134 = (x1005/((x1006*x1007)&x1008));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1009 = -1;
	int8_t x1010 = INT8_MIN;
	static int64_t x1012 = INT64_MAX;
	volatile int64_t t135 = 105031914260LL;

    t135 = (x1009/((x1010*x1011)&x1012));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1021 = 0;
	int16_t x1022 = INT16_MAX;
	uint64_t x1023 = 5LLU;
	uint8_t x1024 = 28U;
	uint64_t t136 = 5290968835642573LLU;

    t136 = (x1021/((x1022*x1023)&x1024));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1026 = -1;
	int32_t x1027 = INT32_MAX;
	volatile int32_t t137 = -73376560;

    t137 = (x1025/((x1026*x1027)&x1028));

    if (t137 != 12) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x1029 = INT64_MIN;
	volatile uint16_t x1030 = 224U;
	int64_t x1031 = 202196875774397LL;
	int64_t t138 = 86730LL;

    t138 = (x1029/((x1030*x1031)&x1032));

    if (t138 != -203LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1033 = INT8_MAX;
	uint8_t x1034 = 12U;
	uint16_t x1036 = UINT16_MAX;
	int32_t t139 = -22;

    t139 = (x1033/((x1034*x1035)&x1036));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x1037 = 532883LLU;
	uint32_t x1038 = 22U;
	int16_t x1039 = INT16_MAX;
	uint64_t t140 = 6LLU;

    t140 = (x1037/((x1038*x1039)&x1040));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x1041 = UINT16_MAX;
	volatile uint64_t x1042 = 32785646057790LLU;
	static uint32_t x1043 = UINT32_MAX;
	volatile uint8_t x1044 = 14U;
	uint64_t t141 = 268964097624LLU;

    t141 = (x1041/((x1042*x1043)&x1044));

    if (t141 != 32767LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x1049 = 5U;
	int16_t x1050 = INT16_MAX;
	uint32_t x1051 = UINT32_MAX;
	volatile uint8_t x1052 = UINT8_MAX;
	static uint32_t t142 = 498067U;

    t142 = (x1049/((x1050*x1051)&x1052));

    if (t142 != 5U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x1066 = 33LL;
	uint8_t x1067 = UINT8_MAX;
	int32_t x1068 = -1;
	int64_t t143 = -193196LL;

    t143 = (x1065/((x1066*x1067)&x1068));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x1089 = -1;
	static int8_t x1090 = INT8_MIN;
	uint32_t x1091 = 53U;
	int64_t x1092 = -247866957966298799LL;

    t144 = (x1089/((x1090*x1091)&x1092));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1093 = INT8_MIN;
	uint8_t x1094 = UINT8_MAX;
	uint64_t x1095 = UINT64_MAX;
	static int64_t x1096 = 389232848632101LL;
	static uint64_t t145 = 2050LLU;

    t145 = (x1093/((x1094*x1095)&x1096));

    if (t145 != 47392LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x1105 = -1;
	static int16_t x1106 = -1;
	uint16_t x1107 = UINT16_MAX;
	volatile int16_t x1108 = INT16_MIN;
	static int32_t t146 = -117505302;

    t146 = (x1105/((x1106*x1107)&x1108));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x1113 = -1LL;
	volatile int8_t x1114 = INT8_MAX;
	volatile uint32_t x1116 = 693303165U;

    t147 = (x1113/((x1114*x1115)&x1116));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1121 = 23876U;
	int16_t x1122 = 36;
	int16_t x1123 = -581;
	uint16_t x1124 = 362U;
	int32_t t148 = 13;

    t148 = (x1121/((x1122*x1123)&x1124));

    if (t148 != 331) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1125 = INT64_MAX;
	volatile uint16_t x1126 = 41U;
	volatile uint16_t x1127 = UINT16_MAX;
	int64_t t149 = 4320152326491386LL;

    t149 = (x1125/((x1126*x1127)&x1128));

    if (t149 != 3433246480200LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1133 = INT8_MAX;
	static int16_t x1134 = -1;
	int32_t x1135 = -1;
	int8_t x1136 = INT8_MAX;

    t150 = (x1133/((x1134*x1135)&x1136));

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1137 = INT8_MIN;
	uint64_t x1139 = UINT64_MAX;
	int64_t x1140 = -7875LL;
	uint64_t t151 = 234597852LLU;

    t151 = (x1137/((x1138*x1139)&x1140));

    if (t151 != 1LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1181 = INT64_MAX;
	int32_t x1183 = INT32_MAX;
	int64_t t152 = 4399220LL;

    t152 = (x1181/((x1182*x1183)&x1184));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1185 = INT8_MAX;
	static int16_t x1186 = 5545;
	int16_t x1187 = -10;
	int16_t x1188 = -1;

    t153 = (x1185/((x1186*x1187)&x1188));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x1191 = 7418U;
	int64_t x1192 = INT64_MAX;
	int64_t t154 = -211LL;

    t154 = (x1189/((x1190*x1191)&x1192));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1201 = -1LL;
	uint32_t x1202 = 18040U;
	uint32_t x1203 = 213779U;
	static int32_t x1204 = 96680368;
	int64_t t155 = 410455138608579531LL;

    t155 = (x1201/((x1202*x1203)&x1204));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1205 = INT32_MAX;
	int16_t x1206 = INT16_MAX;
	volatile int8_t x1207 = -23;
	int8_t x1208 = INT8_MAX;
	volatile int32_t t156 = 0;

    t156 = (x1205/((x1206*x1207)&x1208));

    if (t156 != 93368854) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x1209 = 1U;
	volatile int16_t x1210 = 286;
	uint32_t x1211 = UINT32_MAX;
	static int64_t x1212 = INT64_MAX;
	static int64_t t157 = 25351555336101LL;

    t157 = (x1209/((x1210*x1211)&x1212));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x1217 = INT16_MIN;
	volatile int16_t x1219 = INT16_MIN;
	int32_t t158 = 8;

    t158 = (x1217/((x1218*x1219)&x1220));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1223 = UINT8_MAX;
	int8_t x1224 = -43;
	volatile int32_t t159 = 6473;

    t159 = (x1221/((x1222*x1223)&x1224));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x1225 = INT16_MAX;
	volatile uint32_t x1226 = UINT32_MAX;
	static uint16_t x1227 = 20U;
	volatile uint32_t t160 = 0U;

    t160 = (x1225/((x1226*x1227)&x1228));

    if (t160 != 85U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x1233 = 37;
	int16_t x1235 = INT16_MAX;
	volatile int32_t t161 = 8066;

    t161 = (x1233/((x1234*x1235)&x1236));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1241 = UINT16_MAX;
	static volatile int16_t x1242 = INT16_MIN;
	volatile int8_t x1243 = INT8_MIN;
	uint64_t x1244 = 11735837337991LLU;
	volatile uint64_t t162 = 2LLU;

    t162 = (x1241/((x1242*x1243)&x1244));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x1245 = 1041954118U;
	uint64_t x1247 = UINT64_MAX;
	uint64_t t163 = 9456141821LLU;

    t163 = (x1245/((x1246*x1247)&x1248));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1253 = 1491LLU;
	int16_t x1254 = -1;
	static int32_t x1255 = INT32_MAX;
	volatile int16_t x1256 = -1;

    t164 = (x1253/((x1254*x1255)&x1256));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x1265 = INT16_MIN;
	int8_t x1267 = INT8_MIN;
	volatile int16_t x1268 = -1;
	volatile int64_t t165 = 11065LL;

    t165 = (x1265/((x1266*x1267)&x1268));

    if (t165 != -256LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1277 = INT8_MIN;
	static int8_t x1278 = -6;
	int64_t x1279 = 39721957380397LL;
	int8_t x1280 = -1;
	static volatile int64_t t166 = 330629307547114565LL;

    t166 = (x1277/((x1278*x1279)&x1280));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1281 = UINT16_MAX;
	static int16_t x1282 = INT16_MIN;
	int8_t x1283 = INT8_MAX;
	int16_t x1284 = INT16_MIN;
	int32_t t167 = 401653153;

    t167 = (x1281/((x1282*x1283)&x1284));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1285 = INT16_MIN;
	static int16_t x1286 = INT16_MAX;
	uint8_t x1287 = 1U;
	uint16_t x1288 = 14U;
	int32_t t168 = -5;

    t168 = (x1285/((x1286*x1287)&x1288));

    if (t168 != -2340) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1289 = 60876301;
	int8_t x1290 = -1;
	int32_t x1291 = 869;
	int32_t x1292 = -1;
	volatile int32_t t169 = -1;

    t169 = (x1289/((x1290*x1291)&x1292));

    if (t169 != -70053) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1301 = -15701;
	int8_t x1302 = INT8_MIN;
	uint32_t x1304 = 192705788U;
	volatile uint64_t t170 = 1791340LLU;

    t170 = (x1301/((x1302*x1303)&x1304));

    if (t170 != 95869649694LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1306 = UINT64_MAX;
	volatile int32_t x1307 = 512316452;
	int64_t x1308 = 468LL;

    t171 = (x1305/((x1306*x1307)&x1308));

    if (t171 != 10LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1309 = 23U;
	volatile int8_t x1310 = -1;
	int16_t x1311 = -1;
	uint16_t x1312 = 1783U;
	volatile int32_t t172 = -1110;

    t172 = (x1309/((x1310*x1311)&x1312));

    if (t172 != 23) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1313 = 39U;
	static volatile int8_t x1314 = INT8_MAX;
	int8_t x1315 = -1;
	uint16_t x1316 = 29U;
	static int32_t t173 = -40374;

    t173 = (x1313/((x1314*x1315)&x1316));

    if (t173 != 39) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1317 = -1;
	uint64_t x1319 = 12177167LLU;
	uint8_t x1320 = 93U;

    t174 = (x1317/((x1318*x1319)&x1320));

    if (t174 != 1085102592571150095LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1321 = -1;
	int32_t x1322 = 167;
	volatile int16_t x1323 = 19;
	uint32_t x1324 = 196281414U;
	static uint32_t t175 = 1U;

    t175 = (x1321/((x1322*x1323)&x1324));

    if (t175 != 3933120U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1325 = UINT64_MAX;
	int16_t x1327 = 767;
	int32_t x1328 = -1557;
	static uint64_t t176 = 24419302257LLU;

    t176 = (x1325/((x1326*x1327)&x1328));

    if (t176 != 4294969087LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1329 = 35U;
	volatile int16_t x1330 = INT16_MIN;
	uint16_t x1331 = UINT16_MAX;
	int16_t x1332 = -1;

    t177 = (x1329/((x1330*x1331)&x1332));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x1337 = UINT32_MAX;
	volatile uint32_t x1338 = UINT32_MAX;
	int16_t x1339 = INT16_MIN;

    t178 = (x1337/((x1338*x1339)&x1340));

    if (t178 != 131071U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1343 = INT16_MIN;
	uint16_t x1344 = UINT16_MAX;
	volatile uint32_t t179 = 11924U;

    t179 = (x1341/((x1342*x1343)&x1344));

    if (t179 != 65536U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1349 = UINT64_MAX;
	uint8_t x1350 = UINT8_MAX;
	int8_t x1351 = 1;
	uint8_t x1352 = 4U;

    t180 = (x1349/((x1350*x1351)&x1352));

    if (t180 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1353 = INT32_MIN;
	int32_t x1354 = 129258962;
	uint32_t x1355 = UINT32_MAX;
	static int8_t x1356 = INT8_MAX;

    t181 = (x1353/((x1354*x1355)&x1356));

    if (t181 != 46684427U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1361 = -445683770008331LL;
	int8_t x1362 = -1;
	uint32_t x1363 = 158722U;
	static int32_t x1364 = INT32_MIN;
	volatile int64_t t182 = -28161665755LL;

    t182 = (x1361/((x1362*x1363)&x1364));

    if (t182 != -207537LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1365 = 52550805296341LLU;
	static uint64_t x1366 = 105583403702542680LLU;
	int64_t x1367 = INT64_MAX;
	int8_t x1368 = INT8_MIN;
	static uint64_t t183 = 2LLU;

    t183 = (x1365/((x1366*x1367)&x1368));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1369 = 311228700;
	static int32_t x1370 = -1;
	volatile int32_t x1371 = -1;
	volatile int64_t x1372 = 15895410607LL;
	int64_t t184 = 6470LL;

    t184 = (x1369/((x1370*x1371)&x1372));

    if (t184 != 311228700LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1377 = 227U;
	int32_t x1378 = 6958703;
	uint16_t x1380 = 4965U;
	volatile uint32_t t185 = 33154U;

    t185 = (x1377/((x1378*x1379)&x1380));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x1381 = 127159880U;
	static int8_t x1382 = 1;
	static int16_t x1383 = 3519;
	volatile uint32_t t186 = 15U;

    t186 = (x1381/((x1382*x1383)&x1384));

    if (t186 != 412856U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1385 = 471LLU;
	uint64_t x1386 = 275243157LLU;
	uint16_t x1387 = 25967U;
	static uint8_t x1388 = 43U;
	volatile uint64_t t187 = 1393318847LLU;

    t187 = (x1385/((x1386*x1387)&x1388));

    if (t187 != 42LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x1389 = -1;
	int32_t x1390 = -1;
	int16_t x1391 = 8;
	int16_t x1392 = INT16_MAX;
	int32_t t188 = -47450890;

    t188 = (x1389/((x1390*x1391)&x1392));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1401 = 4U;
	int64_t x1402 = -1LL;
	uint32_t x1403 = 58121444U;
	volatile int16_t x1404 = 764;
	static int64_t t189 = 57516LL;

    t189 = (x1401/((x1402*x1403)&x1404));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1413 = 2126489U;
	uint64_t x1414 = UINT64_MAX;
	int8_t x1415 = INT8_MIN;
	volatile uint64_t t190 = 254360590LLU;

    t190 = (x1413/((x1414*x1415)&x1416));

    if (t190 != 16613LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1421 = -106;
	uint16_t x1422 = UINT16_MAX;
	int8_t x1423 = -1;
	static uint32_t x1424 = 1665U;
	uint32_t t191 = 0U;

    t191 = (x1421/((x1422*x1423)&x1424));

    if (t191 != 4294967190U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1437 = 186076U;
	uint8_t x1438 = 52U;
	uint16_t x1439 = 13021U;
	uint8_t x1440 = UINT8_MAX;
	uint32_t t192 = 3299U;

    t192 = (x1437/((x1438*x1439)&x1440));

    if (t192 != 816U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x1442 = INT8_MIN;
	int32_t t193 = 904;

    t193 = (x1441/((x1442*x1443)&x1444));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1447 = 202U;
	static int16_t x1448 = -1;
	volatile int32_t t194 = -1288934;

    t194 = (x1445/((x1446*x1447)&x1448));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint8_t x1449 = 1U;
	static int16_t x1450 = -1627;
	uint64_t x1451 = UINT64_MAX;
	volatile uint64_t t195 = 9726696050067032LLU;

    t195 = (x1449/((x1450*x1451)&x1452));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1457 = UINT8_MAX;
	uint64_t x1459 = 2LLU;
	static volatile uint64_t t196 = 376LLU;

    t196 = (x1457/((x1458*x1459)&x1460));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1465 = -1LL;
	volatile uint64_t x1467 = 13419526183LLU;
	volatile uint64_t x1468 = 735170368919LLU;
	uint64_t t197 = 7172745942549LLU;

    t197 = (x1465/((x1466*x1467)&x1468));

    if (t197 != 25546273LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1469 = -1;
	uint8_t x1470 = 2U;
	int16_t x1471 = -1;
	volatile int8_t x1472 = INT8_MIN;

    t198 = (x1469/((x1470*x1471)&x1472));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1474 = -1;
	static uint16_t x1475 = 23U;
	uint32_t x1476 = UINT32_MAX;
	uint32_t t199 = 304591373U;

    t199 = (x1473/((x1474*x1475)&x1476));

    if (t199 != 0U) { NG(); } else { ; }
	
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

