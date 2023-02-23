
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

int32_t t1 = -37;
int8_t x9 = -1;
volatile int16_t x13 = INT16_MAX;
uint8_t x15 = 65U;
int16_t x16 = INT16_MIN;
int64_t t4 = -226217LL;
uint32_t x21 = 32156931U;
static int16_t x22 = INT16_MIN;
int8_t x26 = 11;
static int8_t x28 = 9;
int64_t x32 = INT64_MIN;
volatile uint64_t t8 = 563973675LLU;
int64_t t9 = -48578384323LL;
uint16_t x42 = UINT16_MAX;
int64_t x43 = 31031LL;
volatile int64_t x50 = 19023164LL;
volatile int8_t x52 = 5;
volatile int64_t t15 = -257484201LL;
volatile uint32_t x68 = UINT32_MAX;
volatile int64_t t18 = -4574104288124LL;
int64_t x79 = INT64_MIN;
uint32_t x88 = 2U;
int64_t x90 = -45480382573LL;
int32_t x94 = INT32_MAX;
volatile int64_t x97 = 56384682088398LL;
static int32_t x99 = 56991249;
int16_t x102 = INT16_MIN;
int32_t x106 = INT32_MIN;
int32_t x113 = INT32_MIN;
static uint64_t x127 = 42020LLU;
volatile int8_t x129 = INT8_MIN;
uint32_t x140 = 1496115598U;
int32_t x142 = INT32_MAX;
int8_t x144 = INT8_MIN;
static int32_t x159 = INT32_MIN;
static int32_t t39 = -1032523;
static uint16_t x164 = 2609U;
uint64_t x173 = 35526416406357369LLU;
volatile int16_t x177 = INT16_MIN;
static int64_t x183 = INT64_MAX;
volatile uint64_t t45 = 20LLU;
int8_t x189 = INT8_MIN;
int8_t x193 = -63;
int8_t x201 = 1;
uint8_t x206 = 13U;
static volatile int32_t t50 = -468;
static volatile int16_t x210 = INT16_MIN;
static uint8_t x211 = 8U;
volatile int16_t x213 = -58;
int32_t x216 = INT32_MAX;
int16_t x218 = INT16_MAX;
volatile int32_t x229 = INT32_MAX;
int16_t x233 = INT16_MAX;
int8_t x235 = -1;
uint64_t t57 = 128733925901176871LLU;
int8_t x245 = INT8_MAX;
int32_t x246 = -15;
static int32_t x249 = 16665185;
int16_t x250 = INT16_MAX;
volatile int64_t t59 = -41727236360392LL;
static int64_t x257 = INT64_MIN;
int32_t x263 = -172;
int32_t x264 = -1;
int64_t x267 = INT64_MAX;
volatile int64_t t62 = -3093910404073767LL;
uint16_t x275 = 66U;
volatile uint64_t x281 = UINT64_MAX;
int8_t x284 = 52;
uint64_t x285 = 6616LLU;
int64_t x287 = -1LL;
int16_t x288 = INT16_MAX;
volatile int16_t x291 = -1;
uint32_t x295 = 858922709U;
static volatile int64_t t69 = -891116LL;
int8_t x303 = INT8_MIN;
volatile int64_t x304 = -172897913962LL;
int16_t x305 = INT16_MIN;
uint8_t x308 = UINT8_MAX;
static int64_t x315 = -1LL;
volatile uint64_t x316 = 575LLU;
static uint64_t x324 = 79443290LLU;
uint16_t x325 = 6U;
int16_t x327 = -1;
uint64_t t77 = 107LLU;
int16_t x334 = -1;
int16_t x336 = -10897;
int64_t t80 = -113961037LL;
int32_t x351 = 9;
int64_t x354 = INT64_MIN;
volatile int16_t x355 = 469;
volatile uint8_t x362 = UINT8_MAX;
volatile uint64_t t84 = 35845LLU;
static int64_t x373 = 1LL;
int32_t x374 = INT32_MIN;
int64_t x376 = 5583381844311331LL;
uint32_t t88 = 312U;
uint64_t x399 = UINT64_MAX;
uint64_t x402 = UINT64_MAX;
int64_t x405 = -1LL;
uint8_t x411 = 1U;
static int8_t x420 = -1;
int32_t t97 = -7559963;
static int8_t x433 = 0;
uint16_t x436 = UINT16_MAX;
static volatile int32_t x437 = INT32_MIN;
uint8_t x438 = 0U;
volatile int64_t t102 = -4243009717688733LL;
uint64_t x446 = 397265533888LLU;
volatile int8_t x448 = -1;
volatile uint64_t t105 = 59LLU;
uint32_t x453 = 1U;
volatile int64_t x461 = -1LL;
static int64_t t108 = 3LL;
static int8_t x468 = INT8_MIN;
int16_t x470 = -1;
int32_t x474 = 85;
int64_t x475 = INT64_MIN;
int8_t x480 = INT8_MIN;
uint8_t x481 = UINT8_MAX;
static int64_t x482 = -1LL;
static uint64_t x483 = 50505880LLU;
volatile uint8_t x488 = UINT8_MAX;
volatile int64_t x494 = -432260212443523898LL;
int64_t x495 = -30737LL;
volatile int8_t x506 = -1;
int16_t x507 = INT16_MAX;
static volatile uint64_t t118 = 3LLU;
int64_t t119 = 81488935500310LL;
volatile int8_t x513 = -1;
static uint32_t x514 = 128616U;
uint32_t x515 = UINT32_MAX;
int64_t x519 = INT64_MIN;
int16_t x527 = INT16_MAX;
int64_t x531 = -1LL;
volatile uint8_t x536 = 1U;
int64_t t125 = -64LL;
static volatile int64_t x545 = INT64_MIN;
volatile uint8_t x551 = 1U;
uint64_t x552 = 758235941LLU;
static int64_t t129 = 9680493344LL;
int64_t t130 = 6690821892113LL;
uint32_t x561 = UINT32_MAX;
static uint64_t t132 = 19021176590LLU;
int16_t x577 = -14213;
uint64_t t136 = 3007391120555937366LLU;
volatile int32_t x598 = 100769;
int32_t x599 = INT32_MIN;
int32_t x601 = -1;
int16_t x603 = -1;
uint8_t x605 = 2U;
uint16_t x618 = 3687U;
int8_t x619 = INT8_MAX;
static volatile int32_t x622 = INT32_MAX;
int16_t x628 = -1;
uint32_t x632 = UINT32_MAX;
int32_t t145 = -13978;
int16_t x638 = INT16_MIN;
int64_t x644 = -1735151LL;
int8_t x647 = INT8_MAX;
volatile int16_t x658 = 3;
uint32_t x670 = 27U;
int8_t x676 = INT8_MIN;
uint16_t x677 = UINT16_MAX;
int32_t x678 = 295;
int8_t x679 = -1;
int8_t x681 = 2;
int16_t x684 = -1;
uint64_t t156 = 308717LLU;
int32_t x685 = 42856;
int64_t t157 = 4040530LL;
int16_t x699 = INT16_MIN;
int32_t t162 = 5779;
volatile int16_t x718 = INT16_MIN;
int64_t x720 = INT64_MAX;
int64_t t164 = 2966059072680470471LL;
uint16_t x722 = 32U;
int64_t x732 = -5660128LL;
uint64_t t166 = 61537839965LLU;
int64_t x746 = 22420517020948LL;
static uint64_t x747 = 6LLU;
uint8_t x748 = 1U;
static volatile uint64_t t170 = 11LLU;
int64_t x749 = -12815LL;
static uint64_t x750 = 595888136LLU;
uint8_t x753 = UINT8_MAX;
int16_t x756 = INT16_MIN;
uint64_t x758 = 9205345LLU;
uint64_t x761 = 24861611367LLU;
uint32_t x763 = 2U;
volatile uint64_t t174 = 2087192039LLU;
uint64_t x769 = 59LLU;
static int64_t x771 = INT64_MAX;
int16_t x780 = -1;
int64_t x788 = INT64_MAX;
volatile int8_t x789 = 7;
static uint32_t x797 = 4615U;
uint64_t x798 = UINT64_MAX;
int8_t x800 = INT8_MAX;
static int16_t x805 = 8393;
int64_t x814 = -1LL;
int32_t x816 = INT32_MIN;
volatile int32_t x829 = INT32_MIN;
uint32_t x833 = 207U;
static int8_t x842 = INT8_MAX;
static int16_t x845 = -1;
uint32_t x853 = 5168312U;
int32_t x855 = -1;
int8_t x857 = -1;
volatile uint32_t t194 = 54U;
volatile int8_t x861 = 62;
volatile int32_t t195 = -895;
static uint8_t x865 = 42U;
int64_t x866 = -1LL;
int64_t t196 = -1219738341378LL;
uint8_t x869 = 2U;
int8_t x877 = 0;
int16_t x878 = 12;
int32_t t199 = -1;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int64_t x2 = -1LL;
	int16_t x3 = INT16_MIN;
	uint16_t x4 = 63U;
	int64_t t0 = 2542LL;

    t0 = (x1*((x2|x3)%x4));

    if (t0 != 32768LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int32_t x6 = -1;
	int8_t x7 = -1;
	static int32_t x8 = 12;

    t1 = (x5*((x6|x7)%x8));

    if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = -1;
	volatile uint32_t x11 = UINT32_MAX;
	int32_t x12 = 52;
	volatile uint32_t t2 = 86U;

    t2 = (x9*((x10|x11)%x12));

    if (t2 != 4294967249U) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x14 = -392236;
	int32_t t3 = -26703;

    t3 = (x13*((x14|x15)%x16));

    if (t3 != -1041564629) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = -919;
	int16_t x18 = -1;
	int64_t x19 = 3224LL;
	volatile uint32_t x20 = 1942U;

    t4 = (x17*((x18|x19)%x20));

    if (t4 != 919LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x23 = 31965U;
	uint16_t x24 = 414U;
	volatile uint32_t t5 = 611U;

    t5 = (x21*((x22|x23)%x24));

    if (t5 != 375855729U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x25 = 5U;
	int16_t x27 = -1;
	static volatile uint32_t t6 = 7U;

    t6 = (x25*((x26|x27)%x28));

    if (t6 != 4294967291U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	static uint16_t x30 = UINT16_MAX;
	int16_t x31 = INT16_MAX;
	int64_t t7 = 178909588LL;

    t7 = (x29*((x30|x31)%x32));

    if (t7 != -140735340871680LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 26615600489999787LLU;
	static volatile int64_t x34 = 923070995305718LL;
	uint64_t x35 = 30512LLU;
	uint64_t x36 = 17571898498202LLU;

    t8 = (x33*((x34|x35)%x36));

    if (t8 != 8781272211838943802LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int32_t x38 = INT32_MIN;
	static int64_t x39 = INT64_MIN;
	int64_t x40 = INT64_MAX;

    t9 = (x37*((x38|x39)%x40));

    if (t9 != 274877906944LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 5;
	int16_t x44 = INT16_MIN;
	int64_t t10 = -14979808925LL;

    t10 = (x41*((x42|x43)%x44));

    if (t10 != 163835LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	uint8_t x46 = UINT8_MAX;
	int32_t x47 = INT32_MAX;
	static uint64_t x48 = 29826LLU;
	volatile uint64_t t11 = 415864LLU;

    t11 = (x45*((x46|x47)%x48));

    if (t11 != 18446744073708060800LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x49 = INT64_MIN;
	static int8_t x51 = INT8_MAX;
	volatile int64_t t12 = INT64_MIN;

    t12 = (x49*((x50|x51)%x52));

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 172855LLU;
	int64_t x54 = INT64_MIN;
	static uint16_t x55 = 0U;
	static uint8_t x56 = UINT8_MAX;
	uint64_t t13 = 3317553874787LLU;

    t13 = (x53*((x54|x55)%x56));

    if (t13 != 18446744073687426176LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 11U;
	uint8_t x58 = 22U;
	uint8_t x59 = 118U;
	int32_t x60 = INT32_MIN;
	int32_t t14 = 1;

    t14 = (x57*((x58|x59)%x60));

    if (t14 != 1298) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = -1LL;
	volatile int64_t x62 = -1LL;
	uint16_t x63 = UINT16_MAX;
	static int8_t x64 = INT8_MIN;

    t15 = (x61*((x62|x63)%x64));

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	uint32_t x66 = UINT32_MAX;
	int16_t x67 = -3956;
	uint32_t t16 = 2051U;

    t16 = (x65*((x66|x67)%x68));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x69 = 12LLU;
	uint8_t x70 = 0U;
	int64_t x71 = INT64_MIN;
	static int64_t x72 = -22408048837135620LL;
	uint64_t t17 = 4022892483LLU;

    t17 = (x69*((x70|x71)%x72));

    if (t17 != 18282776496205119760LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 1668U;
	int32_t x74 = INT32_MIN;
	volatile int8_t x75 = INT8_MAX;
	static int64_t x76 = INT64_MIN;

    t18 = (x73*((x74|x75)%x76));

    if (t18 != -3582002513028LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -2420LL;
	int64_t x78 = INT64_MIN;
	volatile int32_t x80 = INT32_MIN;
	int64_t t19 = -14LL;

    t19 = (x77*((x78|x79)%x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	static int16_t x82 = INT16_MAX;
	volatile uint64_t x83 = 8657889444386343LLU;
	int32_t x84 = INT32_MAX;
	uint64_t t20 = 89193LLU;

    t20 = (x81*((x82|x83)%x84));

    if (t20 != 257982089318LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -1LL;
	int16_t x86 = INT16_MIN;
	uint8_t x87 = 67U;
	volatile int64_t t21 = 86463594071239LL;

    t21 = (x85*((x86|x87)%x88));

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MAX;
	int8_t x91 = 0;
	uint16_t x92 = 13131U;
	int64_t t22 = 22912609LL;

    t22 = (x89*((x90|x91)%x92));

    if (t22 != -1085215LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = INT8_MAX;
	static int16_t x95 = -1002;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = -79;

    t23 = (x93*((x94|x95)%x96));

    if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x98 = -1;
	static volatile int16_t x100 = -28;
	volatile int64_t t24 = -27433753LL;

    t24 = (x97*((x98|x99)%x100));

    if (t24 != -56384682088398LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	int64_t x103 = 61939857008047922LL;
	static int16_t x104 = -370;
	volatile int64_t t25 = 13447649204LL;

    t25 = (x101*((x102|x103)%x104));

    if (t25 != 4521984LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x105 = 943U;
	static uint8_t x107 = 0U;
	volatile uint16_t x108 = 52U;
	int32_t t26 = -831;

    t26 = (x105*((x106|x107)%x108));

    if (t26 != -22632) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	volatile int64_t x110 = INT64_MAX;
	volatile int8_t x111 = INT8_MIN;
	int64_t x112 = -27064332668284LL;
	int64_t t27 = -3LL;

    t27 = (x109*((x110|x111)%x112));

    if (t27 != 128LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x114 = 822695397563894112LLU;
	static int64_t x115 = -1LL;
	uint32_t x116 = 8467U;
	uint64_t t28 = 7345LLU;

    t28 = (x113*((x114|x115)%x116));

    if (t28 != 18446732496625205248LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -5639;
	uint16_t x118 = UINT16_MAX;
	int32_t x119 = 38130;
	uint64_t x120 = 147598LLU;
	volatile uint64_t t29 = 305499264916371LLU;

    t29 = (x117*((x118|x119)%x120));

    if (t29 != 18446744073339999751LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = INT32_MAX;
	uint8_t x122 = 1U;
	int8_t x123 = 3;
	uint64_t x124 = 341923065608041LLU;
	static uint64_t t30 = 237124802456578LLU;

    t30 = (x121*((x122|x123)%x124));

    if (t30 != 6442450941LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	int8_t x126 = -1;
	uint64_t x128 = 151322661926616LLU;
	uint64_t t31 = 5LLU;

    t31 = (x125*((x126|x127)%x128));

    if (t31 != 18439369114441536640LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x130 = INT16_MIN;
	int16_t x131 = 3;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = -1609;

    t32 = (x129*((x130|x131)%x132));

    if (t32 != 4193920) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MAX;
	int32_t x134 = -22068;
	int8_t x135 = INT8_MIN;
	static int8_t x136 = -1;
	volatile int32_t t33 = 55826857;

    t33 = (x133*((x134|x135)%x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x137 = 18U;
	uint64_t x138 = UINT64_MAX;
	uint32_t x139 = UINT32_MAX;
	volatile uint64_t t34 = 37LLU;

    t34 = (x137*((x138|x139)%x140));

    if (t34 != 17023123746LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MAX;
	int32_t x143 = -1;
	volatile int32_t t35 = 241376;

    t35 = (x141*((x142|x143)%x144));

    if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x145 = 14526U;
	volatile int32_t x146 = INT32_MAX;
	int16_t x147 = INT16_MIN;
	uint64_t x148 = 431845215831502LLU;
	static uint64_t t36 = 404570701267343421LLU;

    t36 = (x145*((x146|x147)%x148));

    if (t36 != 636736331655570258LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = INT32_MIN;
	static int32_t x150 = INT32_MIN;
	int16_t x151 = INT16_MIN;
	static uint32_t x152 = 20U;
	static volatile uint32_t t37 = 91U;

    t37 = (x149*((x150|x151)%x152));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = INT16_MIN;
	static uint32_t x154 = UINT32_MAX;
	uint16_t x155 = UINT16_MAX;
	int16_t x156 = -87;
	volatile uint32_t t38 = 1852U;

    t38 = (x153*((x154|x155)%x156));

    if (t38 != 4292149248U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x157 = 0;
	int16_t x158 = INT16_MIN;
	int16_t x160 = -1;

    t39 = (x157*((x158|x159)%x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 81U;
	volatile uint32_t x162 = 36964813U;
	static uint32_t x163 = 36951641U;
	volatile uint32_t t40 = 127713672U;

    t40 = (x161*((x162|x163)%x164));

    if (t40 != 117045U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MAX;
	static int8_t x166 = -1;
	int64_t x167 = 1LL;
	int16_t x168 = -1;
	static int64_t t41 = 7LL;

    t41 = (x165*((x166|x167)%x168));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = UINT16_MAX;
	int16_t x170 = -11;
	int16_t x171 = INT16_MAX;
	uint8_t x172 = UINT8_MAX;
	int32_t t42 = 50;

    t42 = (x169*((x170|x171)%x172));

    if (t42 != -65535) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = -350;
	uint16_t x175 = 85U;
	static int32_t x176 = INT32_MIN;
	uint64_t t43 = 5432469467983469LLU;

    t43 = (x173*((x174|x175)%x176));

    if (t43 != 9032243726024848831LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x178 = 9195;
	volatile int32_t x179 = -1;
	uint64_t x180 = 87368253305219LLU;
	uint64_t t44 = 1399538LLU;

    t44 = (x177*((x178|x179)%x180));

    if (t44 != 16048925831780761600LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = 0;
	uint64_t x182 = UINT64_MAX;
	int32_t x184 = -757293671;

    t45 = (x181*((x182|x183)%x184));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x190 = INT16_MAX;
	volatile int8_t x191 = 0;
	int32_t x192 = 83713974;
	int32_t t46 = -20790593;

    t46 = (x189*((x190|x191)%x192));

    if (t46 != -4194176) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x194 = UINT64_MAX;
	volatile uint16_t x195 = 379U;
	static int8_t x196 = INT8_MAX;
	volatile uint64_t t47 = 73LLU;

    t47 = (x193*((x194|x195)%x196));

    if (t47 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x197 = 26U;
	int16_t x198 = INT16_MIN;
	uint8_t x199 = 1U;
	volatile int64_t x200 = -1LL;
	volatile int64_t t48 = 5193707619084LL;

    t48 = (x197*((x198|x199)%x200));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x202 = UINT64_MAX;
	static int16_t x203 = 234;
	int8_t x204 = INT8_MAX;
	uint64_t t49 = 774220617590054LLU;

    t49 = (x201*((x202|x203)%x204));

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = -62527047;
	int16_t x207 = INT16_MIN;
	int8_t x208 = -26;

    t50 = (x205*((x206|x207)%x208));

    if (t50 != 1313067987) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = -38;
	int16_t x212 = -1;
	int32_t t51 = 14764494;

    t51 = (x209*((x210|x211)%x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x214 = UINT64_MAX;
	static uint64_t x215 = 54488LLU;
	uint64_t t52 = 3500LLU;

    t52 = (x213*((x214|x215)%x216));

    if (t52 != 18446744073709551442LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x217 = 459U;
	int16_t x219 = INT16_MIN;
	uint8_t x220 = 8U;
	int32_t t53 = -291;

    t53 = (x217*((x218|x219)%x220));

    if (t53 != -459) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x221 = INT64_MIN;
	volatile int16_t x222 = 1873;
	static uint64_t x223 = 10978998340404516LLU;
	int32_t x224 = INT32_MIN;
	volatile uint64_t t54 = 74809LLU;

    t54 = (x221*((x222|x223)%x224));

    if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x230 = -1;
	int8_t x231 = INT8_MIN;
	int16_t x232 = INT16_MIN;
	volatile int32_t t55 = -79;

    t55 = (x229*((x230|x231)%x232));

    if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x234 = INT64_MIN;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t56 = 15661627307670619LLU;

    t56 = (x233*((x234|x235)%x236));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x241 = 91973LLU;
	static int32_t x242 = -1;
	uint32_t x243 = 228386U;
	uint8_t x244 = 11U;

    t57 = (x241*((x242|x243)%x244));

    if (t57 != 275919LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x247 = UINT64_MAX;
	int8_t x248 = INT8_MAX;
	uint64_t t58 = 274494732LLU;

    t58 = (x245*((x246|x247)%x248));

    if (t58 != 127LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x251 = UINT8_MAX;
	int64_t x252 = INT64_MIN;

    t59 = (x249*((x250|x251)%x252));

    if (t59 != 546068116895LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x258 = 6791216997LLU;
	int8_t x259 = -1;
	static int64_t x260 = INT64_MIN;
	uint64_t t60 = 2699131598LLU;

    t60 = (x257*((x258|x259)%x260));

    if (t60 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x261 = INT16_MIN;
	static int8_t x262 = INT8_MIN;
	volatile int32_t t61 = 32759;

    t61 = (x261*((x262|x263)%x264));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x265 = UINT16_MAX;
	int32_t x266 = INT32_MIN;
	static int16_t x268 = 13406;

    t62 = (x265*((x266|x267)%x268));

    if (t62 != -65535LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x269 = INT32_MIN;
	int32_t x270 = INT32_MIN;
	uint8_t x271 = 0U;
	int16_t x272 = INT16_MIN;
	static int32_t t63 = 5876;

    t63 = (x269*((x270|x271)%x272));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x273 = INT8_MIN;
	int16_t x274 = INT16_MIN;
	uint64_t x276 = 30519650592LLU;
	volatile uint64_t t64 = 515178LLU;

    t64 = (x273*((x274|x275)%x276));

    if (t64 != 18446743461379821312LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x277 = UINT64_MAX;
	uint8_t x278 = 29U;
	static uint8_t x279 = UINT8_MAX;
	volatile int16_t x280 = 21;
	uint64_t t65 = 1001537076326LLU;

    t65 = (x277*((x278|x279)%x280));

    if (t65 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x282 = 3;
	volatile int64_t x283 = INT64_MAX;
	volatile uint64_t t66 = 7LLU;

    t66 = (x281*((x282|x283)%x284));

    if (t66 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x286 = UINT32_MAX;
	volatile uint64_t t67 = 24863205820408LLU;

    t67 = (x285*((x286|x287)%x288));

    if (t67 != 18446744073709545000LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x289 = 5;
	int8_t x290 = INT8_MIN;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t68 = 31535LLU;

    t68 = (x289*((x290|x291)%x292));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x293 = INT8_MAX;
	int64_t x294 = 26124775LL;
	volatile int64_t x296 = INT64_MAX;

    t69 = (x293*((x294|x295)%x296));

    if (t69 != 110253652873LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x301 = -1;
	static int16_t x302 = -1;
	static int64_t t70 = 5LL;

    t70 = (x301*((x302|x303)%x304));

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x306 = 7322;
	int32_t x307 = INT32_MAX;
	volatile int32_t t71 = -1;

    t71 = (x305*((x306|x307)%x308));

    if (t71 != -4161536) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x309 = INT32_MIN;
	volatile uint16_t x310 = 137U;
	int32_t x311 = INT32_MIN;
	static uint32_t x312 = 51U;
	uint32_t t72 = 252122738U;

    t72 = (x309*((x310|x311)%x312));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x313 = 1U;
	int16_t x314 = 7;
	uint64_t t73 = 6454647198927LLU;

    t73 = (x313*((x314|x315)%x316));

    if (t73 != 465LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x317 = 14LLU;
	volatile uint32_t x318 = 1297436U;
	int32_t x319 = 351815053;
	volatile int8_t x320 = 1;
	uint64_t t74 = 2023704756LLU;

    t74 = (x317*((x318|x319)%x320));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x321 = 3;
	uint8_t x322 = 61U;
	int16_t x323 = -2;
	uint64_t t75 = 5240038492562566716LLU;

    t75 = (x321*((x322|x323)%x324));

    if (t75 != 96043515LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x326 = 0LLU;
	uint8_t x328 = 74U;
	uint64_t t76 = 3640906LLU;

    t76 = (x325*((x326|x327)%x328));

    if (t76 != 66LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x329 = INT32_MIN;
	uint8_t x330 = 0U;
	static uint64_t x331 = 8LLU;
	static int16_t x332 = -1;

    t77 = (x329*((x330|x331)%x332));

    if (t77 != 18446744056529682432LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x333 = -674852883LL;
	volatile uint64_t x335 = 3499698840LLU;
	uint64_t t78 = 1890926716612627LLU;

    t78 = (x333*((x334|x335)%x336));

    if (t78 != 18446736720512538448LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x337 = INT8_MIN;
	volatile uint64_t x338 = 408987188063900054LLU;
	uint64_t x339 = 22LLU;
	int64_t x340 = 3214537308LL;
	volatile uint64_t t79 = 3LLU;

    t79 = (x337*((x338|x339)%x340));

    if (t79 != 18446743777652801280LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x341 = -1;
	uint16_t x342 = 1256U;
	int64_t x343 = INT64_MAX;
	static int8_t x344 = -1;

    t80 = (x341*((x342|x343)%x344));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x349 = -450338;
	uint64_t x350 = UINT64_MAX;
	uint64_t x352 = UINT64_MAX;
	uint64_t t81 = 514805015LLU;

    t81 = (x349*((x350|x351)%x352));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x353 = INT32_MIN;
	uint64_t x356 = 68766335402907207LLU;
	uint64_t t82 = 326416405114231LLU;

    t82 = (x353*((x354|x355)%x356));

    if (t82 != 17517827904833060864LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x357 = INT8_MAX;
	int16_t x358 = -1;
	static volatile uint64_t x359 = UINT64_MAX;
	volatile uint16_t x360 = UINT16_MAX;
	static volatile uint64_t t83 = 21954548LLU;

    t83 = (x357*((x358|x359)%x360));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x361 = UINT64_MAX;
	volatile int8_t x363 = -1;
	int64_t x364 = INT64_MIN;

    t84 = (x361*((x362|x363)%x364));

    if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x365 = -13967;
	static int8_t x366 = INT8_MIN;
	volatile int8_t x367 = INT8_MIN;
	int64_t x368 = -1LL;
	int64_t t85 = -3837008LL;

    t85 = (x365*((x366|x367)%x368));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x375 = -1;
	volatile int64_t t86 = -4205326702LL;

    t86 = (x373*((x374|x375)%x376));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x377 = INT16_MIN;
	volatile uint32_t x378 = 46863U;
	static int8_t x379 = -1;
	volatile int16_t x380 = -11665;
	static uint32_t t87 = 564113U;

    t87 = (x377*((x378|x379)%x380));

    if (t87 != 3912761344U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x381 = UINT32_MAX;
	volatile int32_t x382 = INT32_MAX;
	volatile int8_t x383 = INT8_MAX;
	static int8_t x384 = INT8_MAX;

    t88 = (x381*((x382|x383)%x384));

    if (t88 != 4294967289U) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x385 = INT64_MIN;
	static int64_t x386 = -1LL;
	uint64_t x387 = 8618092015818617865LLU;
	uint32_t x388 = UINT32_MAX;
	volatile uint64_t t89 = 4015185386806LLU;

    t89 = (x385*((x386|x387)%x388));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x389 = -1;
	int8_t x390 = INT8_MAX;
	static int32_t x391 = INT32_MAX;
	uint64_t x392 = 104029LLU;
	uint64_t t90 = 784704LLU;

    t90 = (x389*((x390|x391)%x392));

    if (t90 != 18446744073709538616LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x393 = INT64_MAX;
	uint64_t x394 = 34956143527706466LLU;
	int16_t x395 = 1;
	static int64_t x396 = -18091781LL;
	volatile uint64_t t91 = 169099165502LLU;

    t91 = (x393*((x394|x395)%x396));

    if (t91 != 9188415893327069341LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x397 = INT8_MIN;
	uint8_t x398 = UINT8_MAX;
	int8_t x400 = INT8_MIN;
	static volatile uint64_t t92 = 99649033931044073LLU;

    t92 = (x397*((x398|x399)%x400));

    if (t92 != 18446744073709535360LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x401 = UINT32_MAX;
	int32_t x403 = -1;
	int16_t x404 = 725;
	volatile uint64_t t93 = 1641902707101623LLU;

    t93 = (x401*((x402|x403)%x404));

    if (t93 != 2963527433550LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x406 = INT64_MIN;
	int8_t x407 = INT8_MIN;
	static int32_t x408 = INT32_MIN;
	static int64_t t94 = 4136252623LL;

    t94 = (x405*((x406|x407)%x408));

    if (t94 != 128LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x409 = -57;
	volatile uint8_t x410 = 3U;
	int8_t x412 = 1;
	int32_t t95 = 5093336;

    t95 = (x409*((x410|x411)%x412));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x413 = UINT64_MAX;
	int16_t x414 = -11427;
	uint16_t x415 = 3U;
	int8_t x416 = INT8_MAX;
	uint64_t t96 = 18377LLU;

    t96 = (x413*((x414|x415)%x416));

    if (t96 != 122LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x417 = -1;
	volatile int32_t x418 = INT32_MAX;
	uint16_t x419 = UINT16_MAX;

    t97 = (x417*((x418|x419)%x420));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x421 = -1;
	uint32_t x422 = 280198204U;
	int32_t x423 = INT32_MIN;
	int16_t x424 = -1;
	uint32_t t98 = 16560889U;

    t98 = (x421*((x422|x423)%x424));

    if (t98 != 1867285444U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x425 = 71U;
	int64_t x426 = -1LL;
	static int8_t x427 = 2;
	uint32_t x428 = 1U;
	volatile int64_t t99 = -104582729LL;

    t99 = (x425*((x426|x427)%x428));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x429 = 3;
	static uint8_t x430 = 50U;
	int16_t x431 = -3080;
	volatile int8_t x432 = INT8_MIN;
	static volatile int32_t t100 = -104484470;

    t100 = (x429*((x430|x431)%x432));

    if (t100 != -18) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x434 = INT64_MIN;
	int32_t x435 = INT32_MIN;
	int64_t t101 = -27853473LL;

    t101 = (x433*((x434|x435)%x436));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x439 = 19324517899260LL;
	static int8_t x440 = -1;

    t102 = (x437*((x438|x439)%x440));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x441 = 1686;
	int64_t x442 = -67240LL;
	int64_t x443 = -1LL;
	static uint16_t x444 = 4126U;
	int64_t t103 = 1509329743752LL;

    t103 = (x441*((x442|x443)%x444));

    if (t103 != -1686LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x445 = 3828782U;
	int16_t x447 = -311;
	uint64_t t104 = 10169140494754583LLU;

    t104 = (x445*((x446|x447)%x448));

    if (t104 != 18446744073498968606LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x449 = INT8_MIN;
	uint64_t x450 = 5020803017371982LLU;
	static int32_t x451 = 261;
	uint32_t x452 = 2U;

    t105 = (x449*((x450|x451)%x452));

    if (t105 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x454 = 1723U;
	int64_t x455 = INT64_MIN;
	volatile int8_t x456 = -1;
	int64_t t106 = 55LL;

    t106 = (x453*((x454|x455)%x456));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x457 = 0;
	volatile int64_t x458 = 231LL;
	static int8_t x459 = INT8_MIN;
	int8_t x460 = INT8_MIN;
	int64_t t107 = -14367622257347929LL;

    t107 = (x457*((x458|x459)%x460));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x462 = -1;
	uint16_t x463 = 1010U;
	uint32_t x464 = 2U;

    t108 = (x461*((x462|x463)%x464));

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x465 = -1;
	volatile int16_t x466 = INT16_MIN;
	int16_t x467 = 0;
	static volatile int32_t t109 = -268568;

    t109 = (x465*((x466|x467)%x468));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x469 = UINT32_MAX;
	static volatile int32_t x471 = INT32_MIN;
	static uint32_t x472 = UINT32_MAX;
	volatile uint32_t t110 = 8U;

    t110 = (x469*((x470|x471)%x472));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x473 = 6;
	int64_t x476 = -2721963889LL;
	static int64_t t111 = 951LL;

    t111 = (x473*((x474|x475)%x476));

    if (t111 != -7054521642LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x477 = -1;
	volatile uint16_t x478 = 3025U;
	uint32_t x479 = 63U;
	uint32_t t112 = 1466U;

    t112 = (x477*((x478|x479)%x480));

    if (t112 != 4294964225U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x484 = 5;
	uint64_t t113 = 11208912893081762LLU;

    t113 = (x481*((x482|x483)%x484));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x485 = 71723666901LLU;
	int64_t x486 = INT64_MAX;
	int32_t x487 = INT32_MAX;
	static uint64_t t114 = 1LLU;

    t114 = (x485*((x486|x487)%x488));

    if (t114 != 9108905696427LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x489 = 4040U;
	uint32_t x490 = 42039U;
	int64_t x491 = 67290611634240576LL;
	int32_t x492 = INT32_MAX;
	static volatile int64_t t115 = -2230584974589200LL;

    t115 = (x489*((x490|x491)%x492));

    if (t115 != 7391222399800LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x493 = 1U;
	int64_t x496 = 1116571211089758LL;
	int64_t t116 = -8987606366331LL;

    t116 = (x493*((x494|x495)%x496));

    if (t116 != -10257LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x497 = -1;
	int64_t x498 = -1LL;
	int16_t x499 = -25;
	static volatile uint64_t x500 = UINT64_MAX;
	static uint64_t t117 = 147696385970497LLU;

    t117 = (x497*((x498|x499)%x500));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x505 = 95642LLU;
	int32_t x508 = -1;

    t118 = (x505*((x506|x507)%x508));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x509 = INT32_MAX;
	int64_t x510 = INT64_MIN;
	int64_t x511 = -1LL;
	volatile uint16_t x512 = 1U;

    t119 = (x509*((x510|x511)%x512));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x516 = INT32_MIN;
	volatile uint32_t t120 = 1375541223U;

    t120 = (x513*((x514|x515)%x516));

    if (t120 != 2147483649U) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x517 = INT8_MIN;
	static uint16_t x518 = UINT16_MAX;
	volatile int8_t x520 = -47;
	volatile int64_t t121 = 41123LL;

    t121 = (x517*((x518|x519)%x520));

    if (t121 != 2432LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x525 = -601;
	int32_t x526 = -12;
	int16_t x528 = -1;
	int32_t t122 = 1444463;

    t122 = (x525*((x526|x527)%x528));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x529 = INT8_MIN;
	int16_t x530 = INT16_MIN;
	uint32_t x532 = 25U;
	volatile int64_t t123 = 78004012554LL;

    t123 = (x529*((x530|x531)%x532));

    if (t123 != 128LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x533 = -1LL;
	volatile int64_t x534 = -44580168497048LL;
	uint32_t x535 = 1402312U;
	int64_t t124 = -36441LL;

    t124 = (x533*((x534|x535)%x536));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x537 = 99U;
	static int64_t x538 = 56896320LL;
	volatile int16_t x539 = 136;
	static volatile int64_t x540 = -37920LL;

    t125 = (x537*((x538|x539)%x540));

    if (t125 != 1629144LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x541 = -23;
	volatile uint16_t x542 = 0U;
	int8_t x543 = INT8_MAX;
	int64_t x544 = 24676157986559LL;
	int64_t t126 = 1505184639175931LL;

    t126 = (x541*((x542|x543)%x544));

    if (t126 != -2921LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x546 = 8020U;
	int32_t x547 = -1;
	uint64_t x548 = 2678051836630LLU;
	uint64_t t127 = 4653763LLU;

    t127 = (x545*((x546|x547)%x548));

    if (t127 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint32_t x549 = UINT32_MAX;
	volatile uint32_t x550 = 353872U;
	uint64_t t128 = 2075278720676618LLU;

    t128 = (x549*((x550|x551)%x552));

    if (t128 != 1519872961583535LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x553 = -1;
	int64_t x554 = -6726976664316532LL;
	int64_t x555 = INT64_MAX;
	static volatile uint16_t x556 = UINT16_MAX;

    t129 = (x553*((x554|x555)%x556));

    if (t129 != 1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x557 = -13;
	uint8_t x558 = UINT8_MAX;
	volatile int64_t x559 = 0LL;
	static int32_t x560 = INT32_MIN;

    t130 = (x557*((x558|x559)%x560));

    if (t130 != -3315LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x562 = -1;
	static int8_t x563 = -10;
	volatile int16_t x564 = -1;
	uint32_t t131 = 219614U;

    t131 = (x561*((x562|x563)%x564));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x565 = -6857565;
	uint16_t x566 = UINT16_MAX;
	static uint8_t x567 = UINT8_MAX;
	static uint64_t x568 = 1400156285548LLU;

    t132 = (x565*((x566|x567)%x568));

    if (t132 != 18446743624299029341LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x569 = -1LL;
	volatile int8_t x570 = INT8_MIN;
	volatile uint32_t x571 = UINT32_MAX;
	static int16_t x572 = INT16_MIN;
	volatile int64_t t133 = 607LL;

    t133 = (x569*((x570|x571)%x572));

    if (t133 != -32767LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x578 = -1;
	int32_t x579 = -22;
	uint64_t x580 = 118627098LLU;
	uint64_t t134 = 443663957171774LLU;

    t134 = (x577*((x578|x579)%x580));

    if (t134 != 18446743616364277201LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x585 = INT16_MAX;
	int32_t x586 = INT32_MIN;
	int64_t x587 = INT64_MIN;
	static uint32_t x588 = 106202U;
	volatile int64_t t135 = -542026LL;

    t135 = (x585*((x586|x587)%x588));

    if (t135 != -2595408536LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x589 = 1048900901LLU;
	int8_t x590 = INT8_MAX;
	uint64_t x591 = 1143448795946047417LLU;
	int8_t x592 = INT8_MAX;

    t136 = (x589*((x590|x591)%x592));

    if (t136 != 80765369377LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x597 = UINT8_MAX;
	uint8_t x600 = UINT8_MAX;
	volatile int32_t t137 = 4;

    t137 = (x597*((x598|x599)%x600));

    if (t137 != -21420) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x602 = UINT16_MAX;
	uint64_t x604 = UINT64_MAX;
	volatile uint64_t t138 = 377875LLU;

    t138 = (x601*((x602|x603)%x604));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x606 = 47;
	uint32_t x607 = 2001205753U;
	static int8_t x608 = -1;
	uint32_t t139 = 0U;

    t139 = (x605*((x606|x607)%x608));

    if (t139 != 4002411518U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x609 = -3919813LL;
	uint16_t x610 = 768U;
	uint16_t x611 = UINT16_MAX;
	int32_t x612 = INT32_MAX;
	static int64_t t140 = -15LL;

    t140 = (x609*((x610|x611)%x612));

    if (t140 != -256884944955LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x617 = 48U;
	int32_t x620 = -8279977;
	volatile int32_t t141 = 18107025;

    t141 = (x617*((x618|x619)%x620));

    if (t141 != 178128) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x621 = 5U;
	int8_t x623 = INT8_MIN;
	int32_t x624 = INT32_MAX;
	volatile int32_t t142 = 109004;

    t142 = (x621*((x622|x623)%x624));

    if (t142 != -5) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x625 = INT32_MIN;
	int16_t x626 = -6468;
	int8_t x627 = -6;
	int32_t t143 = 47566;

    t143 = (x625*((x626|x627)%x628));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x629 = INT16_MIN;
	static int16_t x630 = 0;
	uint8_t x631 = UINT8_MAX;
	uint32_t t144 = 5032319U;

    t144 = (x629*((x630|x631)%x632));

    if (t144 != 4286611456U) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x633 = 3U;
	int32_t x634 = -1;
	uint16_t x635 = UINT16_MAX;
	int16_t x636 = INT16_MIN;

    t145 = (x633*((x634|x635)%x636));

    if (t145 != -3) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x637 = 29U;
	int64_t x639 = INT64_MIN;
	int64_t x640 = -1LL;
	int64_t t146 = 1546549LL;

    t146 = (x637*((x638|x639)%x640));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x641 = 21U;
	uint32_t x642 = 2244U;
	static int64_t x643 = -100874908736990LL;
	int64_t t147 = -3902938861042852536LL;

    t147 = (x641*((x642|x643)%x644));

    if (t147 != -3232908LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x645 = INT32_MAX;
	uint32_t x646 = 3018034U;
	int16_t x648 = INT16_MIN;
	uint32_t t148 = 236997214U;

    t148 = (x645*((x646|x647)%x648));

    if (t148 != 2144465537U) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x649 = 1U;
	int16_t x650 = -1;
	uint32_t x651 = 115367509U;
	int32_t x652 = INT32_MIN;
	volatile uint32_t t149 = 939U;

    t149 = (x649*((x650|x651)%x652));

    if (t149 != 2147483647U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x657 = 1743902LLU;
	uint64_t x659 = UINT64_MAX;
	int32_t x660 = INT32_MAX;
	uint64_t t150 = 141938928092LLU;

    t150 = (x657*((x658|x659)%x660));

    if (t150 != 5231706LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x661 = UINT32_MAX;
	int64_t x662 = INT64_MIN;
	uint64_t x663 = 192065LLU;
	int64_t x664 = INT64_MIN;
	uint64_t t151 = 2216011709125258LLU;

    t151 = (x661*((x662|x663)%x664));

    if (t151 != 824912893514175LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x665 = -510848LL;
	int8_t x666 = 1;
	static int32_t x667 = INT32_MIN;
	static uint32_t x668 = 16144U;
	volatile int64_t t152 = 3219356532912574891LL;

    t152 = (x665*((x666|x667)%x668));

    if (t152 != -4479626112LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x669 = 5U;
	volatile uint8_t x671 = 1U;
	uint8_t x672 = 1U;
	volatile uint32_t t153 = 1534427U;

    t153 = (x669*((x670|x671)%x672));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x673 = INT16_MIN;
	int64_t x674 = -225803954156371LL;
	volatile int16_t x675 = INT16_MIN;
	int64_t t154 = -8375414138720LL;

    t154 = (x673*((x674|x675)%x676));

    if (t154 != 2719744LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x680 = 18410852LL;
	int64_t t155 = -1591375LL;

    t155 = (x677*((x678|x679)%x680));

    if (t155 != -65535LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint64_t x682 = UINT64_MAX;
	volatile uint32_t x683 = 650481582U;

    t156 = (x681*((x682|x683)%x684));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x686 = INT64_MAX;
	uint8_t x687 = 1U;
	static uint8_t x688 = 41U;

    t157 = (x685*((x686|x687)%x688));

    if (t157 != 299992LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x689 = UINT8_MAX;
	uint16_t x690 = 10U;
	static int64_t x691 = INT64_MIN;
	int64_t x692 = 15275LL;
	volatile int64_t t158 = -2747201338LL;

    t158 = (x689*((x690|x691)%x692));

    if (t158 != -3314490LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x697 = 10U;
	uint16_t x698 = 50U;
	int16_t x700 = -3255;
	int32_t t159 = 16463155;

    t159 = (x697*((x698|x699)%x700));

    if (t159 != -1680) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint8_t x701 = 24U;
	uint32_t x702 = 453554084U;
	static int32_t x703 = -1;
	static uint8_t x704 = 103U;
	uint32_t t160 = 1782588U;

    t160 = (x701*((x702|x703)%x704));

    if (t160 != 1488U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x705 = 0;
	volatile uint64_t x706 = 16LLU;
	uint8_t x707 = 18U;
	int32_t x708 = INT32_MAX;
	volatile uint64_t t161 = 183269596130242597LLU;

    t161 = (x705*((x706|x707)%x708));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x709 = 1831U;
	int16_t x710 = 21;
	uint16_t x711 = 63U;
	static uint16_t x712 = UINT16_MAX;

    t162 = (x709*((x710|x711)%x712));

    if (t162 != 115353) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x713 = -81;
	static int32_t x714 = -3;
	uint8_t x715 = 16U;
	int8_t x716 = INT8_MAX;
	int32_t t163 = 1894061;

    t163 = (x713*((x714|x715)%x716));

    if (t163 != 243) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x717 = INT16_MAX;
	int32_t x719 = 0;

    t164 = (x717*((x718|x719)%x720));

    if (t164 != -1073709056LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x721 = INT16_MAX;
	uint16_t x723 = 29U;
	int32_t x724 = INT32_MIN;
	int32_t t165 = -3931;

    t165 = (x721*((x722|x723)%x724));

    if (t165 != 1998787) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x729 = 203526791LLU;
	static uint64_t x730 = 13172LLU;
	uint32_t x731 = 451787U;

    t166 = (x729*((x730|x731)%x732));

    if (t166 != 92951296030073LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x733 = 7U;
	int8_t x734 = -1;
	uint8_t x735 = 0U;
	int64_t x736 = INT64_MIN;
	int64_t t167 = 2949LL;

    t167 = (x733*((x734|x735)%x736));

    if (t167 != -7LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x737 = -69311;
	uint8_t x738 = UINT8_MAX;
	int32_t x739 = -13660;
	int32_t x740 = INT32_MAX;
	volatile int32_t t168 = 11;

    t168 = (x737*((x738|x739)%x740));

    if (t168 != 940480959) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x741 = INT64_MAX;
	uint64_t x742 = 4663410055767203627LLU;
	int64_t x743 = INT64_MIN;
	uint64_t x744 = 540084LLU;
	uint64_t t169 = 428337241LLU;

    t169 = (x741*((x742|x743)%x744));

    if (t169 != 9223372036854377329LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x745 = INT16_MIN;

    t170 = (x745*((x746|x747)%x748));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x751 = -274438;
	uint16_t x752 = UINT16_MAX;
	uint64_t t171 = 53269468954LLU;

    t171 = (x749*((x750|x751)%x752));

    if (t171 != 18446744073027255386LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x754 = INT32_MIN;
	static volatile uint8_t x755 = UINT8_MAX;
	int32_t t172 = 41085;

    t172 = (x753*((x754|x755)%x756));

    if (t172 != -8290815) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x757 = 16763926538847LL;
	volatile uint64_t x759 = UINT64_MAX;
	int64_t x760 = INT64_MAX;
	static volatile uint64_t t173 = 32883055163675LLU;

    t173 = (x757*((x758|x759)%x760));

    if (t173 != 16763926538847LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x762 = 34;
	uint32_t x764 = 954291U;

    t174 = (x761*((x762|x763)%x764));

    if (t174 != 845294786478LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x765 = 24217U;
	static int64_t x766 = -1017593947LL;
	int8_t x767 = -1;
	int32_t x768 = -44454;
	int64_t t175 = 11LL;

    t175 = (x765*((x766|x767)%x768));

    if (t175 != -24217LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x770 = INT8_MAX;
	static int64_t x772 = INT64_MIN;
	uint64_t t176 = 6561638011365341LLU;

    t176 = (x769*((x770|x771)%x772));

    if (t176 != 9223372036854775749LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x773 = 16275164U;
	int32_t x774 = INT32_MIN;
	uint16_t x775 = 51U;
	int32_t x776 = INT32_MIN;
	volatile uint32_t t177 = 170U;

    t177 = (x773*((x774|x775)%x776));

    if (t177 != 830033364U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x777 = -1;
	static int16_t x778 = -1900;
	static int32_t x779 = -1;
	int32_t t178 = -2755326;

    t178 = (x777*((x778|x779)%x780));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x785 = -1LL;
	volatile int32_t x786 = INT32_MAX;
	int64_t x787 = 290765424LL;
	static volatile int64_t t179 = 447738835640893404LL;

    t179 = (x785*((x786|x787)%x788));

    if (t179 != -2147483647LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x790 = INT64_MIN;
	int8_t x791 = INT8_MAX;
	static int16_t x792 = -1;
	static int64_t t180 = 950218104053LL;

    t180 = (x789*((x790|x791)%x792));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x793 = -1LL;
	static uint64_t x794 = 13727126LLU;
	static uint8_t x795 = 3U;
	volatile uint64_t x796 = 34LLU;
	volatile uint64_t t181 = UINT64_MAX;

    t181 = (x793*((x794|x795)%x796));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x799 = INT32_MIN;
	uint64_t t182 = 194LLU;

    t182 = (x797*((x798|x799)%x800));

    if (t182 != 4615LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint64_t x801 = 51269844163LLU;
	int64_t x802 = -1LL;
	int32_t x803 = -104890;
	uint16_t x804 = UINT16_MAX;
	uint64_t t183 = 3109218354559472768LLU;

    t183 = (x801*((x802|x803)%x804));

    if (t183 != 18446744022439707453LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x806 = INT64_MAX;
	static int64_t x807 = 1561498746407630LL;
	volatile uint8_t x808 = 5U;
	static int64_t t184 = -132241580LL;

    t184 = (x805*((x806|x807)%x808));

    if (t184 != 16786LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x813 = 1;
	int32_t x815 = INT32_MIN;
	volatile int64_t t185 = 38312LL;

    t185 = (x813*((x814|x815)%x816));

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x817 = 14U;
	int16_t x818 = 0;
	static volatile int8_t x819 = INT8_MAX;
	int16_t x820 = -49;
	int32_t t186 = -13559;

    t186 = (x817*((x818|x819)%x820));

    if (t186 != 406) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x830 = UINT64_MAX;
	static uint16_t x831 = 27469U;
	static int32_t x832 = INT32_MAX;
	static uint64_t t187 = 82809623LLU;

    t187 = (x829*((x830|x831)%x832));

    if (t187 != 18446744067267100672LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x834 = -1;
	int16_t x835 = 1725;
	static int8_t x836 = INT8_MIN;
	uint32_t t188 = 89129U;

    t188 = (x833*((x834|x835)%x836));

    if (t188 != 4294967089U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x837 = 109484259LLU;
	static int64_t x838 = INT64_MAX;
	static uint64_t x839 = 4984082550051686035LLU;
	static volatile uint64_t x840 = UINT64_MAX;
	uint64_t t189 = 6854281689531LLU;

    t189 = (x837*((x838|x839)%x840));

    if (t189 != 9223372036745291549LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x841 = INT16_MAX;
	uint64_t x843 = 1366429175136LLU;
	uint32_t x844 = 900U;
	uint64_t t190 = 13003LLU;

    t190 = (x841*((x842|x843)%x844));

    if (t190 != 2195389LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x846 = UINT16_MAX;
	int64_t x847 = -10795589LL;
	static volatile int32_t x848 = 17353723;
	volatile int64_t t191 = -1570064LL;

    t191 = (x845*((x846|x847)%x848));

    if (t191 != 10747905LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x849 = 4132U;
	static int64_t x850 = INT64_MAX;
	uint64_t x851 = 390126168720LLU;
	uint16_t x852 = 13U;
	uint64_t t192 = 10066824729585LLU;

    t192 = (x849*((x850|x851)%x852));

    if (t192 != 28924LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x854 = -76448682524552253LL;
	int8_t x856 = INT8_MIN;
	volatile int64_t t193 = 77LL;

    t193 = (x853*((x854|x855)%x856));

    if (t193 != -5168312LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x858 = INT8_MIN;
	uint32_t x859 = UINT32_MAX;
	int8_t x860 = -1;

    t194 = (x857*((x858|x859)%x860));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x862 = INT16_MIN;
	uint16_t x863 = 10U;
	int32_t x864 = 8;

    t195 = (x861*((x862|x863)%x864));

    if (t195 != -372) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x867 = INT8_MIN;
	int64_t x868 = INT64_MAX;

    t196 = (x865*((x866|x867)%x868));

    if (t196 != -42LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x870 = INT8_MIN;
	int16_t x871 = 6342;
	uint8_t x872 = 7U;
	volatile int32_t t197 = -430662;

    t197 = (x869*((x870|x871)%x872));

    if (t197 != -4) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x873 = 3;
	int32_t x874 = INT32_MAX;
	int32_t x875 = -1;
	volatile int32_t x876 = -1;
	volatile int32_t t198 = 912466388;

    t198 = (x873*((x874|x875)%x876));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int32_t x879 = 666583;
	volatile int8_t x880 = INT8_MIN;

    t199 = (x877*((x878|x879)%x880));

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

