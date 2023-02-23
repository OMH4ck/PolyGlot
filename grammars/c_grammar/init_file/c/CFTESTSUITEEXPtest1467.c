
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

int32_t x3 = INT32_MIN;
int32_t t0 = 259;
uint8_t x13 = UINT8_MAX;
volatile int8_t x14 = INT8_MIN;
volatile uint64_t x15 = UINT64_MAX;
int64_t x20 = INT64_MAX;
volatile int32_t t4 = -1013403;
static int32_t x23 = 520;
int32_t t5 = -29727802;
volatile uint16_t x29 = 0U;
uint16_t x31 = 18134U;
volatile int16_t x67 = -35;
int32_t t10 = 312258;
uint8_t x83 = 2U;
int16_t x102 = INT16_MIN;
uint64_t x139 = UINT64_MAX;
static uint16_t x149 = 218U;
int32_t t21 = -1;
int64_t x166 = -1LL;
static uint16_t x167 = 19U;
int32_t t23 = -308;
int64_t x207 = -509992096803LL;
int32_t t26 = -371872;
int8_t x216 = INT8_MAX;
uint32_t x237 = 60U;
int16_t x268 = -1;
int16_t x284 = INT16_MAX;
int64_t x303 = 455LL;
static uint16_t x305 = UINT16_MAX;
volatile uint8_t x308 = UINT8_MAX;
volatile int32_t t40 = -839906;
volatile uint64_t x314 = UINT64_MAX;
volatile int16_t x332 = -1;
uint8_t x344 = UINT8_MAX;
int16_t x362 = 4;
static int64_t x363 = INT64_MIN;
int16_t x377 = INT16_MAX;
static int16_t x382 = 6464;
uint16_t x383 = UINT16_MAX;
int64_t x408 = 67015645LL;
uint16_t x418 = 1U;
static volatile int64_t x419 = INT64_MAX;
uint64_t x429 = 129040197196LLU;
int64_t x431 = -1LL;
volatile uint64_t x445 = 88719091517493LLU;
uint64_t x448 = 1086912638675096479LLU;
int32_t x457 = 4266170;
volatile int32_t t55 = 5361115;
uint64_t x487 = UINT64_MAX;
uint16_t x489 = 319U;
int32_t x500 = INT32_MAX;
int32_t x506 = INT32_MIN;
volatile int64_t x507 = INT64_MIN;
uint64_t x508 = 1681988162849636LLU;
static uint8_t x517 = 5U;
uint8_t x528 = UINT8_MAX;
volatile int64_t t64 = -18956701861229LL;
static volatile int32_t x536 = INT32_MIN;
int64_t x556 = INT64_MIN;
static uint32_t x573 = 284058928U;
uint32_t x585 = UINT32_MAX;
volatile int16_t x594 = INT16_MIN;
static uint64_t x597 = 166765346LLU;
int32_t x605 = 163;
static int8_t x624 = 1;
static int32_t t78 = 1196218;
volatile uint32_t t79 = 1U;
int32_t x651 = INT32_MAX;
static uint16_t x665 = 30U;
static volatile int32_t t82 = 29363652;
static volatile int32_t t83 = -7;
uint32_t x693 = 1373600U;
uint8_t x702 = 0U;
int8_t x703 = INT8_MIN;
uint8_t x712 = 1U;
uint32_t x725 = 5411643U;
int8_t x730 = 41;
static uint32_t x755 = 21267223U;
static uint8_t x756 = UINT8_MAX;
int16_t x775 = -1;
volatile int16_t x806 = INT16_MIN;
uint32_t x812 = 1147860U;
int64_t t97 = 7014285228681809LL;
int64_t x819 = -780229981088LL;
int32_t t98 = -188905;
static int16_t x831 = -1;
volatile uint32_t x833 = 69U;
int16_t x837 = 0;
uint64_t x838 = 29256537008914127LLU;
volatile int16_t x840 = 1389;
int32_t x862 = -1;
int16_t x863 = 1;
uint8_t x872 = 50U;
static int32_t t107 = 91;
static uint8_t x890 = 33U;
int8_t x891 = -1;
uint32_t t110 = 788265446U;
int64_t x903 = INT64_MIN;
uint16_t x927 = 1415U;
static volatile int64_t x931 = INT64_MIN;
uint16_t x932 = 16U;
static int8_t x933 = 9;
static volatile int32_t t114 = 813064;
static uint32_t x937 = 415U;
volatile uint32_t t115 = 3718U;
int64_t x962 = INT64_MIN;
int64_t x964 = -12762119209LL;
uint16_t x965 = UINT16_MAX;
volatile int32_t t119 = -5505525;
int16_t x977 = 3;
static volatile int64_t x978 = -57LL;
int16_t x981 = 53;
volatile int16_t x984 = INT16_MIN;
volatile int64_t x987 = -266786087LL;
volatile int16_t x992 = INT16_MAX;
uint64_t x1002 = 732922848403493550LLU;
int16_t x1004 = -5;
int8_t x1009 = 25;
static int64_t x1010 = INT64_MAX;
static uint16_t x1011 = 0U;
uint32_t t128 = 0U;
int8_t x1034 = 3;
uint32_t x1043 = 55838105U;
uint32_t t130 = 575277987U;
int8_t x1061 = INT8_MAX;
int8_t x1067 = -15;
int64_t x1068 = 111LL;
int32_t t134 = -183044944;
static int8_t x1073 = 7;
int32_t x1078 = INT32_MIN;
volatile int64_t x1104 = 200003497958LL;
uint8_t x1117 = 3U;
static int32_t t140 = -72;
uint16_t x1135 = UINT16_MAX;
int8_t x1155 = INT8_MAX;
int32_t x1161 = INT32_MAX;
volatile uint16_t x1163 = 9U;
int32_t x1166 = INT32_MIN;
volatile uint16_t x1168 = 3153U;
volatile int32_t t150 = -105420457;
int64_t x1186 = -6LL;
int64_t x1194 = INT64_MIN;
static volatile uint8_t x1195 = 32U;
int32_t x1204 = -277759902;
uint64_t x1209 = 292862112619LLU;
static int64_t x1254 = INT64_MIN;
uint32_t x1261 = 39U;
volatile uint32_t x1271 = 1754U;
static int32_t t166 = 3;
int8_t x1280 = 1;
uint8_t x1285 = UINT8_MAX;
volatile int32_t t170 = -111;
int8_t x1307 = 0;
volatile uint16_t x1308 = 8U;
static uint32_t t173 = 691693299U;
volatile int32_t t176 = 6119;
int32_t t178 = 63935902;
volatile int32_t t179 = 2011451;
static int16_t x1365 = 52;
int32_t x1368 = INT32_MIN;
uint16_t x1370 = 156U;
volatile int32_t t181 = -489047;
int32_t x1375 = INT32_MAX;
int64_t x1377 = 39LL;
int8_t x1378 = 2;
int64_t x1382 = INT64_MIN;
volatile uint64_t x1383 = UINT64_MAX;
int16_t x1384 = INT16_MIN;
uint8_t x1396 = 2U;
int8_t x1399 = INT8_MIN;
volatile int32_t t187 = 434334;
uint32_t x1410 = UINT32_MAX;
int16_t x1416 = 4047;
static uint16_t x1419 = 0U;
int32_t x1425 = 77;
uint64_t x1426 = 21LLU;
volatile int32_t t191 = -2840;
volatile uint64_t x1432 = UINT64_MAX;
uint8_t x1452 = 2U;
volatile int32_t t195 = 322;
volatile int64_t x1465 = 969LL;
static uint64_t x1477 = 2095815238831100397LLU;


void f0(void) {
    	int8_t x1 = 2;
	uint64_t x2 = 694979956016LLU;
	int8_t x4 = -1;

    t0 = (x1>>((x2==x3)!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 2622LL;
	static uint8_t x6 = 5U;
	static int8_t x7 = -1;
	int64_t x8 = 304497533206895184LL;
	static volatile int64_t t1 = 442LL;

    t1 = (x5>>((x6==x7)!=x8));

    if (t1 != 1311LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 7703U;
	volatile uint16_t x10 = UINT16_MAX;
	int16_t x11 = -1;
	volatile uint16_t x12 = UINT16_MAX;
	static volatile int32_t t2 = 92710788;

    t2 = (x9>>((x10==x11)!=x12));

    if (t2 != 3851) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 145531052;

    t3 = (x13>>((x14==x15)!=x16));

    if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 0U;
	volatile int16_t x18 = -2;
	int32_t x19 = 63839;

    t4 = (x17>>((x18==x19)!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 1U;
	uint32_t x22 = 37811U;
	static uint64_t x24 = 195087386LLU;

    t5 = (x21>>((x22==x23)!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x30 = UINT32_MAX;
	static uint32_t x32 = UINT32_MAX;
	volatile int32_t t6 = 13970724;

    t6 = (x29>>((x30==x31)!=x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = 1;
	volatile int64_t x38 = INT64_MIN;
	static uint8_t x39 = 0U;
	uint64_t x40 = 87261541238199LLU;
	int32_t t7 = 17;

    t7 = (x37>>((x38==x39)!=x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x41 = UINT64_MAX;
	uint8_t x42 = 98U;
	static volatile uint16_t x43 = UINT16_MAX;
	int32_t x44 = -71402688;
	uint64_t t8 = 68620LLU;

    t8 = (x41>>((x42==x43)!=x44));

    if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint32_t x53 = 70U;
	static volatile int32_t x54 = -1;
	int16_t x55 = INT16_MIN;
	int32_t x56 = -5072252;
	volatile uint32_t t9 = 53394U;

    t9 = (x53>>((x54==x55)!=x56));

    if (t9 != 35U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x65 = 0U;
	int64_t x66 = 1LL;
	int32_t x68 = 317338266;

    t10 = (x65>>((x66==x67)!=x68));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x69 = 145;
	int64_t x70 = 341022125649LL;
	int64_t x71 = 7259553551305LL;
	int8_t x72 = -1;
	volatile int32_t t11 = -1399366;

    t11 = (x69>>((x70==x71)!=x72));

    if (t11 != 72) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x81 = INT8_MAX;
	static volatile int64_t x82 = -1061280947011LL;
	int32_t x84 = INT32_MAX;
	static int32_t t12 = -62;

    t12 = (x81>>((x82==x83)!=x84));

    if (t12 != 63) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x97 = INT64_MAX;
	int16_t x98 = INT16_MIN;
	int32_t x99 = INT32_MAX;
	int64_t x100 = INT64_MIN;
	int64_t t13 = 306297785647074LL;

    t13 = (x97>>((x98==x99)!=x100));

    if (t13 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x101 = 2U;
	volatile int32_t x103 = -1;
	volatile uint32_t x104 = UINT32_MAX;
	int32_t t14 = -1;

    t14 = (x101>>((x102==x103)!=x104));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x109 = 120U;
	int16_t x110 = INT16_MAX;
	int64_t x111 = -9589022850LL;
	int16_t x112 = INT16_MAX;
	int32_t t15 = -123478582;

    t15 = (x109>>((x110==x111)!=x112));

    if (t15 != 60) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x117 = INT8_MAX;
	static int32_t x118 = 146813;
	static int64_t x119 = -1LL;
	uint64_t x120 = UINT64_MAX;
	volatile int32_t t16 = 20273;

    t16 = (x117>>((x118==x119)!=x120));

    if (t16 != 63) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x125 = 0U;
	int32_t x126 = -1;
	int64_t x127 = -1LL;
	int8_t x128 = 15;
	int32_t t17 = 4626607;

    t17 = (x125>>((x126==x127)!=x128));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x129 = 0U;
	static volatile int64_t x130 = 6237647LL;
	int64_t x131 = -1LL;
	uint16_t x132 = 1156U;
	static volatile int32_t t18 = 17;

    t18 = (x129>>((x130==x131)!=x132));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x137 = 80U;
	int16_t x138 = INT16_MIN;
	int32_t x140 = -3705;
	int32_t t19 = -1;

    t19 = (x137>>((x138==x139)!=x140));

    if (t19 != 40) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x145 = 274U;
	int16_t x146 = INT16_MAX;
	int16_t x147 = INT16_MAX;
	static int16_t x148 = -3920;
	int32_t t20 = 21233990;

    t20 = (x145>>((x146==x147)!=x148));

    if (t20 != 137) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x150 = 1559879686778416283LL;
	volatile int32_t x151 = -1;
	int64_t x152 = -1LL;

    t21 = (x149>>((x150==x151)!=x152));

    if (t21 != 109) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x153 = 17310U;
	uint64_t x154 = 2792405254543051LLU;
	static volatile int32_t x155 = 1021910;
	int16_t x156 = 1079;
	uint32_t t22 = 3811779U;

    t22 = (x153>>((x154==x155)!=x156));

    if (t22 != 8655U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x165 = 1;
	static int8_t x168 = -1;

    t23 = (x165>>((x166==x167)!=x168));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x169 = 3964428;
	int8_t x170 = -1;
	uint64_t x171 = UINT64_MAX;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t24 = -24;

    t24 = (x169>>((x170==x171)!=x172));

    if (t24 != 1982214) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x193 = 0;
	uint32_t x194 = UINT32_MAX;
	uint32_t x195 = 63U;
	uint8_t x196 = 5U;
	volatile int32_t t25 = -317318;

    t25 = (x193>>((x194==x195)!=x196));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x205 = UINT8_MAX;
	static int64_t x206 = INT64_MIN;
	static int16_t x208 = -1;

    t26 = (x205>>((x206==x207)!=x208));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x213 = UINT64_MAX;
	uint64_t x214 = UINT64_MAX;
	uint64_t x215 = UINT64_MAX;
	volatile uint64_t t27 = 3190221486060739185LLU;

    t27 = (x213>>((x214==x215)!=x216));

    if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x221 = 0;
	static int16_t x222 = INT16_MIN;
	volatile uint64_t x223 = UINT64_MAX;
	int32_t x224 = INT32_MIN;
	int32_t t28 = 32352;

    t28 = (x221>>((x222==x223)!=x224));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x225 = INT64_MAX;
	static int32_t x226 = INT32_MAX;
	int16_t x227 = INT16_MAX;
	int8_t x228 = INT8_MAX;
	static int64_t t29 = -106160948425176LL;

    t29 = (x225>>((x226==x227)!=x228));

    if (t29 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x229 = INT32_MAX;
	uint32_t x230 = UINT32_MAX;
	volatile uint16_t x231 = 1911U;
	volatile int8_t x232 = 0;
	volatile int32_t t30 = INT32_MAX;

    t30 = (x229>>((x230==x231)!=x232));

    if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x238 = UINT16_MAX;
	uint64_t x239 = 48180442113507037LLU;
	volatile int32_t x240 = INT32_MIN;
	volatile uint32_t t31 = 3878205U;

    t31 = (x237>>((x238==x239)!=x240));

    if (t31 != 30U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x245 = 0;
	int16_t x246 = INT16_MIN;
	int32_t x247 = INT32_MIN;
	int8_t x248 = INT8_MAX;
	static int32_t t32 = -58624782;

    t32 = (x245>>((x246==x247)!=x248));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x261 = 97;
	static int8_t x262 = INT8_MAX;
	static int8_t x263 = INT8_MAX;
	volatile int32_t x264 = -1;
	volatile int32_t t33 = 57194;

    t33 = (x261>>((x262==x263)!=x264));

    if (t33 != 48) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x265 = 684442021205307LLU;
	int64_t x266 = INT64_MAX;
	uint16_t x267 = UINT16_MAX;
	uint64_t t34 = 4250133359LLU;

    t34 = (x265>>((x266==x267)!=x268));

    if (t34 != 342221010602653LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x269 = 27;
	uint32_t x270 = 83U;
	int32_t x271 = INT32_MIN;
	volatile int32_t x272 = 13938418;
	int32_t t35 = 311;

    t35 = (x269>>((x270==x271)!=x272));

    if (t35 != 13) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x277 = INT8_MAX;
	uint8_t x278 = UINT8_MAX;
	uint8_t x279 = 0U;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t36 = -1944096;

    t36 = (x277>>((x278==x279)!=x280));

    if (t36 != 63) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x281 = 5;
	int32_t x282 = INT32_MIN;
	static int16_t x283 = INT16_MIN;
	volatile int32_t t37 = 1607;

    t37 = (x281>>((x282==x283)!=x284));

    if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x285 = 36U;
	int8_t x286 = 7;
	uint32_t x287 = 27U;
	uint16_t x288 = 915U;
	volatile int32_t t38 = 1039542302;

    t38 = (x285>>((x286==x287)!=x288));

    if (t38 != 18) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x301 = UINT8_MAX;
	int64_t x302 = INT64_MIN;
	volatile uint32_t x304 = 558U;
	volatile int32_t t39 = -278579;

    t39 = (x301>>((x302==x303)!=x304));

    if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x306 = 11U;
	static volatile int64_t x307 = -42223765699060265LL;

    t40 = (x305>>((x306==x307)!=x308));

    if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x313 = 43452265907197977LLU;
	int8_t x315 = INT8_MIN;
	static volatile uint8_t x316 = 0U;
	volatile uint64_t t41 = 209LLU;

    t41 = (x313>>((x314==x315)!=x316));

    if (t41 != 43452265907197977LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x321 = 55940351U;
	static int64_t x322 = INT64_MIN;
	static int32_t x323 = -1;
	volatile int32_t x324 = -1;
	static uint32_t t42 = 7309U;

    t42 = (x321>>((x322==x323)!=x324));

    if (t42 != 27970175U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x329 = 9U;
	volatile int16_t x330 = -1;
	static int64_t x331 = INT64_MIN;
	volatile int32_t t43 = 56332;

    t43 = (x329>>((x330==x331)!=x332));

    if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x333 = UINT32_MAX;
	uint16_t x334 = UINT16_MAX;
	int64_t x335 = INT64_MIN;
	int8_t x336 = -1;
	uint32_t t44 = 213U;

    t44 = (x333>>((x334==x335)!=x336));

    if (t44 != 2147483647U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x341 = 319;
	int64_t x342 = -1LL;
	volatile int32_t x343 = INT32_MIN;
	volatile int32_t t45 = 27983436;

    t45 = (x341>>((x342==x343)!=x344));

    if (t45 != 159) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x361 = INT8_MAX;
	volatile uint8_t x364 = UINT8_MAX;
	int32_t t46 = 0;

    t46 = (x361>>((x362==x363)!=x364));

    if (t46 != 63) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x369 = 252LL;
	int32_t x370 = INT32_MIN;
	static uint8_t x371 = UINT8_MAX;
	int32_t x372 = -1;
	volatile int64_t t47 = -363476188128LL;

    t47 = (x369>>((x370==x371)!=x372));

    if (t47 != 126LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x378 = INT32_MIN;
	static int16_t x379 = -672;
	int8_t x380 = INT8_MIN;
	volatile int32_t t48 = 8570307;

    t48 = (x377>>((x378==x379)!=x380));

    if (t48 != 16383) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x381 = UINT64_MAX;
	int8_t x384 = -1;
	volatile uint64_t t49 = 48750698562LLU;

    t49 = (x381>>((x382==x383)!=x384));

    if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x405 = 542623812202LLU;
	static int32_t x406 = -1;
	int32_t x407 = 3707701;
	volatile uint64_t t50 = 752177636855LLU;

    t50 = (x405>>((x406==x407)!=x408));

    if (t50 != 271311906101LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x417 = INT32_MAX;
	static int8_t x420 = -35;
	int32_t t51 = 515611984;

    t51 = (x417>>((x418==x419)!=x420));

    if (t51 != 1073741823) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x430 = -47811532841098097LL;
	static int16_t x432 = -1;
	uint64_t t52 = 1872364LLU;

    t52 = (x429>>((x430==x431)!=x432));

    if (t52 != 64520098598LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x437 = 36U;
	uint8_t x438 = UINT8_MAX;
	static int64_t x439 = 125LL;
	static int32_t x440 = INT32_MIN;
	int32_t t53 = -762;

    t53 = (x437>>((x438==x439)!=x440));

    if (t53 != 18) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x446 = -1LL;
	int16_t x447 = INT16_MAX;
	uint64_t t54 = 164937LLU;

    t54 = (x445>>((x446==x447)!=x448));

    if (t54 != 44359545758746LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x458 = INT16_MAX;
	int16_t x459 = 3020;
	volatile uint32_t x460 = 1U;

    t55 = (x457>>((x458==x459)!=x460));

    if (t55 != 2133085) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x469 = 0;
	uint32_t x470 = UINT32_MAX;
	uint32_t x471 = 44603U;
	int8_t x472 = INT8_MIN;
	int32_t t56 = -1;

    t56 = (x469>>((x470==x471)!=x472));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x473 = 4604;
	int32_t x474 = -107;
	int16_t x475 = -1;
	uint64_t x476 = 134234836402579LLU;
	static volatile int32_t t57 = 360471795;

    t57 = (x473>>((x474==x475)!=x476));

    if (t57 != 2302) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x485 = INT64_MAX;
	uint64_t x486 = 998396918698LLU;
	volatile uint32_t x488 = 9778968U;
	int64_t t58 = -222686LL;

    t58 = (x485>>((x486==x487)!=x488));

    if (t58 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x490 = 16;
	static int64_t x491 = 7311LL;
	int8_t x492 = INT8_MIN;
	int32_t t59 = 165;

    t59 = (x489>>((x490==x491)!=x492));

    if (t59 != 159) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x497 = UINT16_MAX;
	uint64_t x498 = 741418116906132111LLU;
	int8_t x499 = INT8_MAX;
	static volatile int32_t t60 = 154032;

    t60 = (x497>>((x498==x499)!=x500));

    if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x505 = UINT64_MAX;
	uint64_t t61 = 393932274852LLU;

    t61 = (x505>>((x506==x507)!=x508));

    if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x518 = INT8_MIN;
	volatile uint8_t x519 = UINT8_MAX;
	int32_t x520 = INT32_MAX;
	int32_t t62 = -409;

    t62 = (x517>>((x518==x519)!=x520));

    if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x525 = UINT32_MAX;
	uint8_t x526 = 1U;
	int32_t x527 = -1;
	volatile uint32_t t63 = 766113281U;

    t63 = (x525>>((x526==x527)!=x528));

    if (t63 != 2147483647U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x529 = INT64_MAX;
	int8_t x530 = 12;
	volatile int64_t x531 = INT64_MIN;
	int32_t x532 = INT32_MIN;

    t64 = (x529>>((x530==x531)!=x532));

    if (t64 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x533 = 118U;
	uint16_t x534 = 9347U;
	volatile int8_t x535 = INT8_MIN;
	volatile int32_t t65 = 953782;

    t65 = (x533>>((x534==x535)!=x536));

    if (t65 != 59) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x537 = 16312U;
	uint64_t x538 = 363461799544690LLU;
	volatile int32_t x539 = INT32_MIN;
	uint64_t x540 = 34LLU;
	volatile int32_t t66 = 3;

    t66 = (x537>>((x538==x539)!=x540));

    if (t66 != 8156) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x549 = 24U;
	int64_t x550 = -1LL;
	static int16_t x551 = INT16_MAX;
	volatile int64_t x552 = INT64_MAX;
	static int32_t t67 = 2500;

    t67 = (x549>>((x550==x551)!=x552));

    if (t67 != 12) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x553 = INT16_MAX;
	int16_t x554 = -13073;
	int16_t x555 = INT16_MAX;
	int32_t t68 = 143845352;

    t68 = (x553>>((x554==x555)!=x556));

    if (t68 != 16383) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x561 = INT32_MAX;
	int64_t x562 = INT64_MIN;
	int64_t x563 = INT64_MIN;
	int64_t x564 = INT64_MAX;
	int32_t t69 = -97752;

    t69 = (x561>>((x562==x563)!=x564));

    if (t69 != 1073741823) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x565 = INT32_MAX;
	int64_t x566 = INT64_MAX;
	volatile uint16_t x567 = UINT16_MAX;
	static uint16_t x568 = 7344U;
	volatile int32_t t70 = -43470;

    t70 = (x565>>((x566==x567)!=x568));

    if (t70 != 1073741823) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x569 = 209139LLU;
	static uint16_t x570 = 0U;
	volatile uint16_t x571 = UINT16_MAX;
	uint16_t x572 = UINT16_MAX;
	volatile uint64_t t71 = 24LLU;

    t71 = (x569>>((x570==x571)!=x572));

    if (t71 != 104569LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x574 = INT8_MIN;
	int16_t x575 = INT16_MIN;
	uint8_t x576 = UINT8_MAX;
	uint32_t t72 = 654997U;

    t72 = (x573>>((x574==x575)!=x576));

    if (t72 != 142029464U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x586 = UINT32_MAX;
	int8_t x587 = INT8_MIN;
	uint8_t x588 = 12U;
	static uint32_t t73 = 162U;

    t73 = (x585>>((x586==x587)!=x588));

    if (t73 != 2147483647U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x593 = 7U;
	int16_t x595 = INT16_MIN;
	uint16_t x596 = 98U;
	int32_t t74 = 2096235;

    t74 = (x593>>((x594==x595)!=x596));

    if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x598 = UINT64_MAX;
	int64_t x599 = INT64_MIN;
	int16_t x600 = -6;
	uint64_t t75 = 801LLU;

    t75 = (x597>>((x598==x599)!=x600));

    if (t75 != 83382673LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x606 = INT64_MAX;
	static int8_t x607 = INT8_MIN;
	volatile int16_t x608 = INT16_MIN;
	volatile int32_t t76 = 1;

    t76 = (x605>>((x606==x607)!=x608));

    if (t76 != 81) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x609 = 6171997407985963LLU;
	uint64_t x610 = UINT64_MAX;
	volatile uint64_t x611 = 90040642563481465LLU;
	int64_t x612 = INT64_MAX;
	volatile uint64_t t77 = 255LLU;

    t77 = (x609>>((x610==x611)!=x612));

    if (t77 != 3085998703992981LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x621 = UINT8_MAX;
	uint16_t x622 = 5301U;
	uint16_t x623 = 5689U;

    t78 = (x621>>((x622==x623)!=x624));

    if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x633 = 253U;
	static uint16_t x634 = UINT16_MAX;
	int32_t x635 = -1;
	uint8_t x636 = UINT8_MAX;

    t79 = (x633>>((x634==x635)!=x636));

    if (t79 != 126U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x649 = UINT32_MAX;
	uint32_t x650 = 439671631U;
	static volatile uint8_t x652 = 2U;
	uint32_t t80 = 14653758U;

    t80 = (x649>>((x650==x651)!=x652));

    if (t80 != 2147483647U) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x666 = 4U;
	int32_t x667 = 19780;
	uint8_t x668 = UINT8_MAX;
	int32_t t81 = -8379;

    t81 = (x665>>((x666==x667)!=x668));

    if (t81 != 15) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x685 = 22671873;
	int64_t x686 = 11LL;
	static int64_t x687 = INT64_MIN;
	int32_t x688 = INT32_MAX;

    t82 = (x685>>((x686==x687)!=x688));

    if (t82 != 11335936) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x689 = 3115U;
	uint64_t x690 = UINT64_MAX;
	int32_t x691 = 1;
	int64_t x692 = -1LL;

    t83 = (x689>>((x690==x691)!=x692));

    if (t83 != 1557) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x694 = 16LLU;
	static int64_t x695 = 29471LL;
	int32_t x696 = -19;
	uint32_t t84 = 24577U;

    t84 = (x693>>((x694==x695)!=x696));

    if (t84 != 686800U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x701 = UINT8_MAX;
	int32_t x704 = INT32_MAX;
	int32_t t85 = 1;

    t85 = (x701>>((x702==x703)!=x704));

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x705 = INT64_MAX;
	uint16_t x706 = 56U;
	volatile int64_t x707 = -62489931291926731LL;
	uint32_t x708 = UINT32_MAX;
	volatile int64_t t86 = -3LL;

    t86 = (x705>>((x706==x707)!=x708));

    if (t86 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x709 = UINT32_MAX;
	static int32_t x710 = INT32_MIN;
	int8_t x711 = 1;
	uint32_t t87 = 1881526U;

    t87 = (x709>>((x710==x711)!=x712));

    if (t87 != 2147483647U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x713 = UINT16_MAX;
	uint64_t x714 = 7162108839278LLU;
	volatile int16_t x715 = -1;
	uint64_t x716 = 2231158328289941506LLU;
	volatile int32_t t88 = 132920;

    t88 = (x713>>((x714==x715)!=x716));

    if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x726 = INT32_MIN;
	uint16_t x727 = UINT16_MAX;
	int32_t x728 = INT32_MAX;
	volatile uint32_t t89 = 96U;

    t89 = (x725>>((x726==x727)!=x728));

    if (t89 != 2705821U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x729 = INT8_MAX;
	volatile int8_t x731 = -14;
	int16_t x732 = INT16_MAX;
	int32_t t90 = -461;

    t90 = (x729>>((x730==x731)!=x732));

    if (t90 != 63) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x741 = UINT16_MAX;
	int16_t x742 = -1;
	int32_t x743 = 745552428;
	int32_t x744 = 793;
	static volatile int32_t t91 = 28475935;

    t91 = (x741>>((x742==x743)!=x744));

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x753 = 46U;
	volatile int64_t x754 = -257074LL;
	int32_t t92 = -17;

    t92 = (x753>>((x754==x755)!=x756));

    if (t92 != 23) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint8_t x757 = 26U;
	volatile uint16_t x758 = 408U;
	int32_t x759 = -1;
	int8_t x760 = 1;
	int32_t t93 = -47;

    t93 = (x757>>((x758==x759)!=x760));

    if (t93 != 13) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x765 = 9U;
	uint64_t x766 = UINT64_MAX;
	int64_t x767 = INT64_MAX;
	int64_t x768 = -52085521826940LL;
	volatile int32_t t94 = -227;

    t94 = (x765>>((x766==x767)!=x768));

    if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x773 = INT16_MAX;
	int8_t x774 = INT8_MIN;
	uint64_t x776 = 280LLU;
	volatile int32_t t95 = -7;

    t95 = (x773>>((x774==x775)!=x776));

    if (t95 != 16383) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x805 = 21600U;
	volatile int32_t x807 = INT32_MIN;
	uint8_t x808 = 0U;
	volatile int32_t t96 = -142674427;

    t96 = (x805>>((x806==x807)!=x808));

    if (t96 != 21600) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x809 = INT64_MAX;
	static volatile int64_t x810 = INT64_MAX;
	static volatile int64_t x811 = -1LL;

    t97 = (x809>>((x810==x811)!=x812));

    if (t97 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x817 = 0;
	volatile uint64_t x818 = UINT64_MAX;
	volatile int16_t x820 = -1;

    t98 = (x817>>((x818==x819)!=x820));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x829 = 2835;
	uint64_t x830 = 22LLU;
	int8_t x832 = -33;
	volatile int32_t t99 = 2846;

    t99 = (x829>>((x830==x831)!=x832));

    if (t99 != 1417) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x834 = INT16_MIN;
	static uint16_t x835 = UINT16_MAX;
	int16_t x836 = INT16_MAX;
	volatile uint32_t t100 = 13711911U;

    t100 = (x833>>((x834==x835)!=x836));

    if (t100 != 34U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x839 = -1;
	int32_t t101 = -1039969411;

    t101 = (x837>>((x838==x839)!=x840));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x841 = INT32_MAX;
	int32_t x842 = 309366454;
	uint16_t x843 = 124U;
	int8_t x844 = -1;
	int32_t t102 = 11;

    t102 = (x841>>((x842==x843)!=x844));

    if (t102 != 1073741823) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x845 = INT8_MAX;
	volatile uint64_t x846 = 55371LLU;
	int64_t x847 = INT64_MIN;
	volatile int32_t x848 = INT32_MIN;
	static volatile int32_t t103 = -299595221;

    t103 = (x845>>((x846==x847)!=x848));

    if (t103 != 63) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x849 = 1;
	int8_t x850 = INT8_MIN;
	int32_t x851 = INT32_MAX;
	int16_t x852 = INT16_MIN;
	int32_t t104 = 36237125;

    t104 = (x849>>((x850==x851)!=x852));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x861 = UINT16_MAX;
	static volatile int16_t x864 = 76;
	int32_t t105 = 1;

    t105 = (x861>>((x862==x863)!=x864));

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x869 = INT32_MAX;
	static int32_t x870 = -5;
	int32_t x871 = -1;
	volatile int32_t t106 = 7;

    t106 = (x869>>((x870==x871)!=x872));

    if (t106 != 1073741823) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x873 = INT32_MAX;
	int64_t x874 = INT64_MIN;
	volatile uint16_t x875 = UINT16_MAX;
	int8_t x876 = 22;

    t107 = (x873>>((x874==x875)!=x876));

    if (t107 != 1073741823) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x885 = 1;
	volatile uint32_t x886 = 5378U;
	int16_t x887 = INT16_MAX;
	uint16_t x888 = UINT16_MAX;
	volatile int32_t t108 = -31;

    t108 = (x885>>((x886==x887)!=x888));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x889 = 363;
	int8_t x892 = 0;
	volatile int32_t t109 = 2;

    t109 = (x889>>((x890==x891)!=x892));

    if (t109 != 363) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint32_t x893 = 114U;
	uint64_t x894 = 4333605142923902LLU;
	volatile int16_t x895 = INT16_MIN;
	uint8_t x896 = UINT8_MAX;

    t110 = (x893>>((x894==x895)!=x896));

    if (t110 != 57U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x901 = 18;
	int8_t x902 = -1;
	static uint64_t x904 = 802LLU;
	int32_t t111 = -452870732;

    t111 = (x901>>((x902==x903)!=x904));

    if (t111 != 9) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x925 = INT8_MAX;
	static int64_t x926 = 25458668265041LL;
	volatile int64_t x928 = INT64_MAX;
	volatile int32_t t112 = -59493460;

    t112 = (x925>>((x926==x927)!=x928));

    if (t112 != 63) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x929 = INT32_MAX;
	static int64_t x930 = 81821950002444LL;
	static int32_t t113 = -1;

    t113 = (x929>>((x930==x931)!=x932));

    if (t113 != 1073741823) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x934 = UINT64_MAX;
	static volatile int32_t x935 = INT32_MAX;
	static int64_t x936 = 2027966113472LL;

    t114 = (x933>>((x934==x935)!=x936));

    if (t114 != 4) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x938 = INT64_MAX;
	int16_t x939 = 25;
	int32_t x940 = -13339;

    t115 = (x937>>((x938==x939)!=x940));

    if (t115 != 207U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x941 = 35;
	static int16_t x942 = 327;
	uint32_t x943 = UINT32_MAX;
	int32_t x944 = INT32_MIN;
	static int32_t t116 = 377645;

    t116 = (x941>>((x942==x943)!=x944));

    if (t116 != 17) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x949 = 2516U;
	uint8_t x950 = 6U;
	int8_t x951 = -1;
	static volatile int64_t x952 = INT64_MIN;
	volatile uint32_t t117 = 14U;

    t117 = (x949>>((x950==x951)!=x952));

    if (t117 != 1258U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x961 = INT8_MAX;
	static int32_t x963 = -224;
	int32_t t118 = -4080174;

    t118 = (x961>>((x962==x963)!=x964));

    if (t118 != 63) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x966 = INT32_MIN;
	uint32_t x967 = 300U;
	uint64_t x968 = 1541191651006LLU;

    t119 = (x965>>((x966==x967)!=x968));

    if (t119 != 32767) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x973 = UINT32_MAX;
	uint16_t x974 = UINT16_MAX;
	uint8_t x975 = 65U;
	uint64_t x976 = 9790113420847500LLU;
	uint32_t t120 = 80U;

    t120 = (x973>>((x974==x975)!=x976));

    if (t120 != 2147483647U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x979 = -1;
	int16_t x980 = -1;
	int32_t t121 = 490620079;

    t121 = (x977>>((x978==x979)!=x980));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x982 = -10;
	int16_t x983 = -23;
	static volatile int32_t t122 = -554333;

    t122 = (x981>>((x982==x983)!=x984));

    if (t122 != 26) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x985 = 38865719745730921LLU;
	int32_t x986 = -130;
	static int16_t x988 = 0;
	volatile uint64_t t123 = 180LLU;

    t123 = (x985>>((x986==x987)!=x988));

    if (t123 != 38865719745730921LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x989 = INT32_MAX;
	static int64_t x990 = INT64_MIN;
	int64_t x991 = INT64_MIN;
	volatile int32_t t124 = 22991396;

    t124 = (x989>>((x990==x991)!=x992));

    if (t124 != 1073741823) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x997 = 26U;
	uint64_t x998 = 1933496635LLU;
	int16_t x999 = -1;
	uint16_t x1000 = 8861U;
	int32_t t125 = 794224;

    t125 = (x997>>((x998==x999)!=x1000));

    if (t125 != 13) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x1001 = UINT8_MAX;
	static volatile uint8_t x1003 = 5U;
	static int32_t t126 = -126398016;

    t126 = (x1001>>((x1002==x1003)!=x1004));

    if (t126 != 127) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x1012 = 1;
	int32_t t127 = 97029;

    t127 = (x1009>>((x1010==x1011)!=x1012));

    if (t127 != 12) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x1029 = 362U;
	int32_t x1030 = INT32_MAX;
	uint64_t x1031 = UINT64_MAX;
	volatile uint64_t x1032 = 107866868940800LLU;

    t128 = (x1029>>((x1030==x1031)!=x1032));

    if (t128 != 181U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x1033 = UINT32_MAX;
	int32_t x1035 = INT32_MIN;
	int64_t x1036 = INT64_MIN;
	volatile uint32_t t129 = 342347708U;

    t129 = (x1033>>((x1034==x1035)!=x1036));

    if (t129 != 2147483647U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x1041 = UINT32_MAX;
	uint16_t x1042 = 8832U;
	volatile int64_t x1044 = INT64_MIN;

    t130 = (x1041>>((x1042==x1043)!=x1044));

    if (t130 != 2147483647U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x1045 = 53266;
	int16_t x1046 = -79;
	int16_t x1047 = INT16_MAX;
	volatile int8_t x1048 = -1;
	volatile int32_t t131 = 3294;

    t131 = (x1045>>((x1046==x1047)!=x1048));

    if (t131 != 26633) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x1053 = 14783278939LLU;
	volatile uint32_t x1054 = 293U;
	static volatile uint32_t x1055 = UINT32_MAX;
	static int8_t x1056 = INT8_MIN;
	uint64_t t132 = 1785670432032968644LLU;

    t132 = (x1053>>((x1054==x1055)!=x1056));

    if (t132 != 7391639469LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x1062 = 4529622743553259LL;
	static int32_t x1063 = 0;
	volatile int64_t x1064 = INT64_MAX;
	volatile int32_t t133 = 128298435;

    t133 = (x1061>>((x1062==x1063)!=x1064));

    if (t133 != 63) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x1065 = 32U;
	static volatile int8_t x1066 = -1;

    t134 = (x1065>>((x1066==x1067)!=x1068));

    if (t134 != 16) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x1074 = 4U;
	uint8_t x1075 = UINT8_MAX;
	int16_t x1076 = INT16_MAX;
	volatile int32_t t135 = 1291;

    t135 = (x1073>>((x1074==x1075)!=x1076));

    if (t135 != 3) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x1077 = 31222;
	int8_t x1079 = INT8_MAX;
	int16_t x1080 = -1377;
	volatile int32_t t136 = -62776;

    t136 = (x1077>>((x1078==x1079)!=x1080));

    if (t136 != 15611) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x1093 = UINT16_MAX;
	int64_t x1094 = INT64_MAX;
	int32_t x1095 = -1;
	uint16_t x1096 = UINT16_MAX;
	volatile int32_t t137 = 0;

    t137 = (x1093>>((x1094==x1095)!=x1096));

    if (t137 != 32767) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x1101 = INT16_MAX;
	int8_t x1102 = -5;
	int8_t x1103 = INT8_MAX;
	volatile int32_t t138 = 2838;

    t138 = (x1101>>((x1102==x1103)!=x1104));

    if (t138 != 16383) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x1118 = 23;
	int32_t x1119 = INT32_MIN;
	int8_t x1120 = -15;
	static int32_t t139 = 3982612;

    t139 = (x1117>>((x1118==x1119)!=x1120));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x1125 = INT8_MAX;
	int8_t x1126 = 0;
	int16_t x1127 = 830;
	uint32_t x1128 = UINT32_MAX;

    t140 = (x1125>>((x1126==x1127)!=x1128));

    if (t140 != 63) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x1129 = 99201123LLU;
	int64_t x1130 = -7577906885495146LL;
	int64_t x1131 = INT64_MIN;
	int64_t x1132 = -1LL;
	volatile uint64_t t141 = 239239674793829LLU;

    t141 = (x1129>>((x1130==x1131)!=x1132));

    if (t141 != 49600561LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x1133 = 884U;
	volatile int16_t x1134 = INT16_MIN;
	uint16_t x1136 = 2002U;
	volatile int32_t t142 = -688;

    t142 = (x1133>>((x1134==x1135)!=x1136));

    if (t142 != 442) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x1145 = 5447LLU;
	uint16_t x1146 = UINT16_MAX;
	uint32_t x1147 = 882716831U;
	volatile uint8_t x1148 = 1U;
	uint64_t t143 = 105236LLU;

    t143 = (x1145>>((x1146==x1147)!=x1148));

    if (t143 != 2723LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1149 = 5U;
	int64_t x1150 = INT64_MAX;
	static uint8_t x1151 = UINT8_MAX;
	uint8_t x1152 = 8U;
	int32_t t144 = 109203969;

    t144 = (x1149>>((x1150==x1151)!=x1152));

    if (t144 != 2) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x1153 = 71;
	int64_t x1154 = 0LL;
	int64_t x1156 = INT64_MIN;
	int32_t t145 = -6078720;

    t145 = (x1153>>((x1154==x1155)!=x1156));

    if (t145 != 35) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x1157 = INT16_MAX;
	uint32_t x1158 = 82023572U;
	volatile int32_t x1159 = INT32_MAX;
	static int8_t x1160 = INT8_MIN;
	volatile int32_t t146 = -1689659;

    t146 = (x1157>>((x1158==x1159)!=x1160));

    if (t146 != 16383) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1162 = 1891;
	volatile int16_t x1164 = 0;
	int32_t t147 = INT32_MAX;

    t147 = (x1161>>((x1162==x1163)!=x1164));

    if (t147 != INT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x1165 = 3256318LL;
	volatile int8_t x1167 = INT8_MIN;
	volatile int64_t t148 = 4804619162LL;

    t148 = (x1165>>((x1166==x1167)!=x1168));

    if (t148 != 1628159LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x1173 = 6LLU;
	uint64_t x1174 = UINT64_MAX;
	volatile int8_t x1175 = -1;
	volatile uint64_t x1176 = UINT64_MAX;
	uint64_t t149 = 48LLU;

    t149 = (x1173>>((x1174==x1175)!=x1176));

    if (t149 != 3LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1181 = 1;
	static int16_t x1182 = INT16_MIN;
	volatile int32_t x1183 = INT32_MIN;
	uint32_t x1184 = 13445918U;

    t150 = (x1181>>((x1182==x1183)!=x1184));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x1185 = 3414U;
	int16_t x1187 = -1;
	int32_t x1188 = -1;
	int32_t t151 = 6151947;

    t151 = (x1185>>((x1186==x1187)!=x1188));

    if (t151 != 1707) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x1189 = UINT16_MAX;
	volatile int64_t x1190 = -1LL;
	int16_t x1191 = -107;
	uint8_t x1192 = 14U;
	volatile int32_t t152 = -373;

    t152 = (x1189>>((x1190==x1191)!=x1192));

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1193 = 22752070967867986LL;
	static uint64_t x1196 = UINT64_MAX;
	static volatile int64_t t153 = -14LL;

    t153 = (x1193>>((x1194==x1195)!=x1196));

    if (t153 != 11376035483933993LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1197 = 1978721;
	int32_t x1198 = INT32_MIN;
	int8_t x1199 = INT8_MIN;
	int32_t x1200 = 23012;
	int32_t t154 = -94192;

    t154 = (x1197>>((x1198==x1199)!=x1200));

    if (t154 != 989360) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x1201 = 0U;
	static int64_t x1202 = INT64_MIN;
	int64_t x1203 = INT64_MIN;
	static int32_t t155 = 426316811;

    t155 = (x1201>>((x1202==x1203)!=x1204));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x1210 = -6923776LL;
	int16_t x1211 = INT16_MIN;
	static volatile int16_t x1212 = INT16_MIN;
	uint64_t t156 = 10LLU;

    t156 = (x1209>>((x1210==x1211)!=x1212));

    if (t156 != 146431056309LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1213 = INT8_MAX;
	uint8_t x1214 = UINT8_MAX;
	int16_t x1215 = -1;
	uint32_t x1216 = UINT32_MAX;
	static volatile int32_t t157 = 797066;

    t157 = (x1213>>((x1214==x1215)!=x1216));

    if (t157 != 63) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x1217 = INT32_MAX;
	uint32_t x1218 = 189U;
	volatile int8_t x1219 = -38;
	static int32_t x1220 = -914406;
	int32_t t158 = -1069195804;

    t158 = (x1217>>((x1218==x1219)!=x1220));

    if (t158 != 1073741823) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1221 = INT64_MAX;
	uint16_t x1222 = UINT16_MAX;
	uint64_t x1223 = 394467318633004283LLU;
	uint8_t x1224 = 0U;
	int64_t t159 = INT64_MAX;

    t159 = (x1221>>((x1222==x1223)!=x1224));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1225 = INT16_MAX;
	int32_t x1226 = INT32_MIN;
	uint8_t x1227 = UINT8_MAX;
	volatile int8_t x1228 = INT8_MIN;
	int32_t t160 = 71844;

    t160 = (x1225>>((x1226==x1227)!=x1228));

    if (t160 != 16383) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1245 = 57075449LL;
	static volatile int16_t x1246 = -1;
	uint64_t x1247 = 3897525113LLU;
	static uint32_t x1248 = 434345733U;
	int64_t t161 = 2700516646556159LL;

    t161 = (x1245>>((x1246==x1247)!=x1248));

    if (t161 != 28537724LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x1249 = INT64_MAX;
	int8_t x1250 = -1;
	volatile int64_t x1251 = -163931LL;
	volatile int32_t x1252 = INT32_MIN;
	int64_t t162 = 315925051830178LL;

    t162 = (x1249>>((x1250==x1251)!=x1252));

    if (t162 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1253 = INT8_MAX;
	uint16_t x1255 = UINT16_MAX;
	int64_t x1256 = INT64_MIN;
	static int32_t t163 = 6793;

    t163 = (x1253>>((x1254==x1255)!=x1256));

    if (t163 != 63) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x1262 = UINT32_MAX;
	int8_t x1263 = INT8_MIN;
	uint64_t x1264 = 1451818708LLU;
	static volatile uint32_t t164 = 4U;

    t164 = (x1261>>((x1262==x1263)!=x1264));

    if (t164 != 19U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1265 = 45;
	static volatile uint32_t x1266 = UINT32_MAX;
	uint64_t x1267 = 1693947598942LLU;
	int8_t x1268 = -23;
	volatile int32_t t165 = -999232;

    t165 = (x1265>>((x1266==x1267)!=x1268));

    if (t165 != 22) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x1269 = INT32_MAX;
	int16_t x1270 = INT16_MIN;
	volatile int64_t x1272 = -1LL;

    t166 = (x1269>>((x1270==x1271)!=x1272));

    if (t166 != 1073741823) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1277 = INT8_MAX;
	volatile uint64_t x1278 = 502848LLU;
	int8_t x1279 = -7;
	volatile int32_t t167 = 0;

    t167 = (x1277>>((x1278==x1279)!=x1280));

    if (t167 != 63) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1286 = -1LL;
	volatile uint16_t x1287 = 11U;
	volatile int64_t x1288 = -891538770095894LL;
	static volatile int32_t t168 = -80;

    t168 = (x1285>>((x1286==x1287)!=x1288));

    if (t168 != 127) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1293 = 58U;
	int16_t x1294 = INT16_MIN;
	uint32_t x1295 = 1U;
	int8_t x1296 = INT8_MIN;
	static volatile uint32_t t169 = 505695642U;

    t169 = (x1293>>((x1294==x1295)!=x1296));

    if (t169 != 29U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1297 = 10U;
	static uint32_t x1298 = UINT32_MAX;
	int32_t x1299 = 387868555;
	int16_t x1300 = INT16_MAX;

    t170 = (x1297>>((x1298==x1299)!=x1300));

    if (t170 != 5) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1305 = 8360793564717LL;
	volatile int16_t x1306 = INT16_MIN;
	static int64_t t171 = -131568LL;

    t171 = (x1305>>((x1306==x1307)!=x1308));

    if (t171 != 4180396782358LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1309 = 0;
	volatile uint16_t x1310 = 8712U;
	volatile int8_t x1311 = 0;
	static uint16_t x1312 = 7U;
	static int32_t t172 = -115931964;

    t172 = (x1309>>((x1310==x1311)!=x1312));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x1317 = 1984U;
	int16_t x1318 = INT16_MIN;
	int32_t x1319 = INT32_MAX;
	int8_t x1320 = -4;

    t173 = (x1317>>((x1318==x1319)!=x1320));

    if (t173 != 992U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x1321 = 1;
	volatile int32_t x1322 = 181547387;
	int16_t x1323 = -1;
	uint16_t x1324 = 482U;
	int32_t t174 = 126472677;

    t174 = (x1321>>((x1322==x1323)!=x1324));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1325 = INT16_MAX;
	int8_t x1326 = INT8_MIN;
	static int64_t x1327 = INT64_MIN;
	uint8_t x1328 = 61U;
	int32_t t175 = 30455935;

    t175 = (x1325>>((x1326==x1327)!=x1328));

    if (t175 != 16383) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1329 = UINT8_MAX;
	volatile uint32_t x1330 = UINT32_MAX;
	uint64_t x1331 = 125408411647299LLU;
	int8_t x1332 = -1;

    t176 = (x1329>>((x1330==x1331)!=x1332));

    if (t176 != 127) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1341 = UINT64_MAX;
	int8_t x1342 = -2;
	volatile int8_t x1343 = -1;
	int8_t x1344 = 0;
	static uint64_t t177 = UINT64_MAX;

    t177 = (x1341>>((x1342==x1343)!=x1344));

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1349 = 0;
	volatile int64_t x1350 = INT64_MAX;
	int16_t x1351 = -1;
	static int16_t x1352 = -119;

    t178 = (x1349>>((x1350==x1351)!=x1352));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1353 = 13U;
	volatile int16_t x1354 = 0;
	static int16_t x1355 = -1;
	volatile uint16_t x1356 = UINT16_MAX;

    t179 = (x1353>>((x1354==x1355)!=x1356));

    if (t179 != 6) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1366 = INT16_MAX;
	int32_t x1367 = 54;
	volatile int32_t t180 = -358644;

    t180 = (x1365>>((x1366==x1367)!=x1368));

    if (t180 != 26) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1369 = UINT16_MAX;
	int64_t x1371 = INT64_MIN;
	uint16_t x1372 = 22U;

    t181 = (x1369>>((x1370==x1371)!=x1372));

    if (t181 != 32767) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1373 = 37180968683260LL;
	uint8_t x1374 = UINT8_MAX;
	uint64_t x1376 = UINT64_MAX;
	int64_t t182 = 149846375757LL;

    t182 = (x1373>>((x1374==x1375)!=x1376));

    if (t182 != 18590484341630LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1379 = 959120254U;
	static volatile int64_t x1380 = INT64_MIN;
	static int64_t t183 = 2047327975278LL;

    t183 = (x1377>>((x1378==x1379)!=x1380));

    if (t183 != 19LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x1381 = 27;
	int32_t t184 = 5956;

    t184 = (x1381>>((x1382==x1383)!=x1384));

    if (t184 != 13) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1385 = INT32_MAX;
	uint64_t x1386 = 172498LLU;
	uint32_t x1387 = UINT32_MAX;
	uint64_t x1388 = UINT64_MAX;
	volatile int32_t t185 = 0;

    t185 = (x1385>>((x1386==x1387)!=x1388));

    if (t185 != 1073741823) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1393 = UINT32_MAX;
	int8_t x1394 = INT8_MAX;
	int32_t x1395 = INT32_MIN;
	uint32_t t186 = 1825U;

    t186 = (x1393>>((x1394==x1395)!=x1396));

    if (t186 != 2147483647U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x1397 = 5U;
	static int8_t x1398 = INT8_MIN;
	int32_t x1400 = -1;

    t187 = (x1397>>((x1398==x1399)!=x1400));

    if (t187 != 2) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1409 = 29334910500102421LLU;
	int64_t x1411 = INT64_MIN;
	static int64_t x1412 = INT64_MIN;
	volatile uint64_t t188 = 127LLU;

    t188 = (x1409>>((x1410==x1411)!=x1412));

    if (t188 != 14667455250051210LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1413 = INT8_MAX;
	uint16_t x1414 = 19332U;
	uint16_t x1415 = 12872U;
	volatile int32_t t189 = -6471804;

    t189 = (x1413>>((x1414==x1415)!=x1416));

    if (t189 != 63) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1417 = 720;
	int8_t x1418 = INT8_MAX;
	int16_t x1420 = INT16_MIN;
	int32_t t190 = 3748440;

    t190 = (x1417>>((x1418==x1419)!=x1420));

    if (t190 != 360) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1427 = INT64_MAX;
	static int32_t x1428 = INT32_MIN;

    t191 = (x1425>>((x1426==x1427)!=x1428));

    if (t191 != 38) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x1429 = 2U;
	int16_t x1430 = INT16_MIN;
	volatile int64_t x1431 = -94113769726LL;
	int32_t t192 = -23310588;

    t192 = (x1429>>((x1430==x1431)!=x1432));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x1441 = 11933U;
	uint16_t x1442 = 4090U;
	int16_t x1443 = 0;
	uint32_t x1444 = 1U;
	int32_t t193 = 333972271;

    t193 = (x1441>>((x1442==x1443)!=x1444));

    if (t193 != 5966) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1449 = 14441U;
	int16_t x1450 = -25;
	static int16_t x1451 = -1;
	static uint32_t t194 = 636495322U;

    t194 = (x1449>>((x1450==x1451)!=x1452));

    if (t194 != 7220U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x1453 = 18;
	uint64_t x1454 = 111LLU;
	int64_t x1455 = 39736971004021LL;
	uint8_t x1456 = 56U;

    t195 = (x1453>>((x1454==x1455)!=x1456));

    if (t195 != 9) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1466 = 2046511U;
	static int8_t x1467 = INT8_MAX;
	int64_t x1468 = -1LL;
	static volatile int64_t t196 = 243LL;

    t196 = (x1465>>((x1466==x1467)!=x1468));

    if (t196 != 484LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1469 = 3932U;
	static int16_t x1470 = INT16_MAX;
	uint32_t x1471 = 6U;
	uint32_t x1472 = 259615U;
	volatile int32_t t197 = 110978;

    t197 = (x1469>>((x1470==x1471)!=x1472));

    if (t197 != 1966) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1478 = UINT64_MAX;
	volatile int32_t x1479 = 5260;
	uint16_t x1480 = 31111U;
	uint64_t t198 = 30470866794915380LLU;

    t198 = (x1477>>((x1478==x1479)!=x1480));

    if (t198 != 1047907619415550198LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1481 = UINT8_MAX;
	static int16_t x1482 = -1;
	int16_t x1483 = -1;
	volatile uint16_t x1484 = 1U;
	int32_t t199 = -2648;

    t199 = (x1481>>((x1482==x1483)!=x1484));

    if (t199 != 255) { NG(); } else { ; }
	
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

