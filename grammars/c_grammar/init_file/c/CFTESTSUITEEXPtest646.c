
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

uint16_t x1 = UINT16_MAX;
uint8_t x7 = 3U;
volatile uint32_t t1 = 30713450U;
volatile int32_t t3 = 4715;
int8_t x22 = -10;
int64_t x25 = -1LL;
uint16_t x31 = UINT16_MAX;
int32_t t8 = INT32_MIN;
int16_t x37 = INT16_MIN;
static int8_t x42 = -1;
volatile int64_t t10 = -55LL;
int8_t x46 = INT8_MIN;
uint64_t t11 = 271296LLU;
static uint8_t x55 = 4U;
int16_t x57 = -1;
static int64_t x62 = INT64_MIN;
int64_t x72 = -120748LL;
int16_t x75 = -4;
int16_t x84 = 1;
volatile int32_t x87 = INT32_MAX;
volatile int32_t t18 = 779015;
uint8_t x90 = UINT8_MAX;
int32_t t20 = -29649;
int32_t x102 = INT32_MIN;
static int32_t x106 = INT32_MIN;
volatile int8_t x113 = INT8_MIN;
volatile uint8_t x114 = UINT8_MAX;
static int64_t x115 = INT64_MIN;
static uint64_t x116 = 119234967479800262LLU;
static volatile uint32_t t28 = 782422U;
volatile uint8_t x133 = 9U;
volatile uint8_t x135 = 1U;
int8_t x136 = 1;
uint64_t x141 = UINT64_MAX;
uint64_t x151 = 44151LLU;
uint32_t x158 = 0U;
volatile uint16_t x170 = 29U;
static int32_t x176 = INT32_MIN;
volatile int32_t t39 = -1;
volatile int16_t x184 = -1;
uint64_t t43 = 40116LLU;
int16_t x197 = INT16_MAX;
volatile uint64_t t44 = 13684656681802131LLU;
int16_t x204 = -341;
int32_t t46 = -91950;
int64_t x222 = INT64_MIN;
uint16_t x227 = 26568U;
int64_t x230 = INT64_MIN;
uint64_t x232 = UINT64_MAX;
static volatile uint64_t t52 = 152366288769879LLU;
uint64_t x249 = 203LLU;
static uint32_t x251 = 1U;
int8_t x261 = INT8_MIN;
static int32_t x263 = INT32_MAX;
int16_t x266 = -1309;
uint32_t x268 = 51U;
static int8_t x271 = -1;
int32_t x273 = INT32_MIN;
int64_t x274 = INT64_MIN;
uint32_t x277 = 3279U;
static volatile int16_t x280 = INT16_MAX;
int8_t x281 = INT8_MIN;
int64_t x288 = -1LL;
static uint32_t x289 = 89U;
int64_t t68 = 522420LL;
volatile int64_t t69 = 3596480098974655704LL;
volatile int16_t x315 = -1;
volatile int64_t x318 = -59LL;
volatile int64_t x328 = INT64_MIN;
int8_t x330 = INT8_MAX;
volatile int16_t x331 = -1;
int8_t x336 = INT8_MAX;
volatile int16_t x342 = INT16_MAX;
int8_t x369 = -1;
int32_t x375 = 42988346;
static uint64_t t88 = 1258274118489676860LLU;
static int16_t x390 = INT16_MAX;
uint32_t x392 = UINT32_MAX;
int16_t x394 = -1;
int8_t x395 = INT8_MIN;
static int64_t x399 = INT64_MAX;
uint64_t x401 = 86321902LLU;
int32_t x404 = INT32_MIN;
static uint64_t t92 = 7977456550310LLU;
static int64_t x411 = INT64_MIN;
static int8_t x412 = INT8_MAX;
static int64_t x414 = INT64_MAX;
volatile int64_t x416 = INT64_MAX;
static int32_t x420 = -7900;
static uint32_t x423 = UINT32_MAX;
int16_t x427 = -1;
volatile int32_t x429 = INT32_MAX;
volatile int8_t x436 = INT8_MIN;
int16_t x449 = INT16_MAX;
static volatile uint64_t t103 = 10234603122547LLU;
int16_t x455 = -1;
int8_t x466 = 1;
volatile uint64_t x468 = 98LLU;
uint8_t x470 = 15U;
int64_t x472 = INT64_MIN;
int8_t x478 = INT8_MIN;
int64_t x484 = INT64_MAX;
uint16_t x485 = 0U;
uint32_t x488 = 646046U;
static volatile int64_t t112 = 291684219LL;
int16_t x489 = INT16_MAX;
int16_t x490 = -29;
int8_t x492 = 1;
int32_t t113 = 24609;
static uint8_t x497 = UINT8_MAX;
int32_t x498 = INT32_MIN;
volatile uint64_t t116 = UINT64_MAX;
volatile int64_t x509 = -3579622502LL;
int16_t x512 = -1;
int8_t x518 = -1;
uint8_t x519 = UINT8_MAX;
int32_t x525 = -606279283;
int16_t x527 = -4838;
int8_t x530 = -1;
volatile uint8_t x547 = UINT8_MAX;
int16_t x548 = INT16_MIN;
volatile uint64_t t126 = 691859402936625LLU;
static volatile int64_t x558 = -225837671559432372LL;
int16_t x559 = INT16_MAX;
uint16_t x562 = UINT16_MAX;
int16_t x578 = -784;
volatile int64_t t133 = -3226864145LL;
int32_t x588 = 7;
int32_t x603 = -1;
uint8_t x616 = 53U;
static uint16_t x630 = UINT16_MAX;
volatile int16_t x640 = INT16_MIN;
int32_t x641 = -1;
static uint32_t x660 = 9U;
int64_t t151 = -3125290063825837517LL;
int32_t x663 = INT32_MIN;
int64_t t152 = -770379734297LL;
int16_t x669 = INT16_MIN;
int64_t x675 = INT64_MAX;
static volatile int64_t x676 = INT64_MIN;
int16_t x686 = -1899;
volatile int16_t x692 = INT16_MIN;
volatile int64_t t158 = -96464494624LL;
uint64_t t160 = 4LLU;
uint8_t x705 = UINT8_MAX;
uint16_t x706 = UINT16_MAX;
int16_t x707 = 53;
volatile int8_t x708 = INT8_MIN;
int16_t x711 = -1;
uint64_t x712 = 984292LLU;
uint64_t t162 = 451555844LLU;
volatile uint32_t x722 = 6582U;
int64_t x724 = 1348954LL;
int8_t x728 = -1;
static volatile uint64_t t167 = 701LLU;
static uint32_t x738 = 9778326U;
uint8_t x740 = UINT8_MAX;
volatile int8_t x741 = INT8_MAX;
static int32_t x746 = INT32_MAX;
int64_t x749 = 927815382597626LL;
uint64_t x760 = 11878606037LLU;
static volatile uint64_t t174 = 58LLU;
int16_t x768 = INT16_MIN;
static uint16_t x773 = 220U;
volatile uint16_t x778 = 18197U;
int8_t x780 = -7;
int32_t x792 = 101165539;
static volatile int64_t x794 = INT64_MAX;
int64_t t181 = -54LL;
uint32_t x804 = UINT32_MAX;
volatile uint64_t t185 = UINT64_MAX;
uint16_t x817 = UINT16_MAX;
volatile int16_t x819 = -1;
static uint16_t x824 = 2190U;
uint32_t x828 = UINT32_MAX;
int16_t x829 = INT16_MIN;
int16_t x830 = INT16_MIN;
int8_t x839 = -9;
int32_t x842 = INT32_MIN;
int64_t x846 = 1LL;
int64_t x847 = INT64_MIN;
int32_t x852 = -105266913;
int32_t x853 = -3;
uint32_t x857 = 3722589U;
static int16_t x859 = INT16_MIN;
int8_t x874 = INT8_MAX;


void f0(void) {
    	uint64_t x2 = 504600LLU;
	int16_t x3 = -1777;
	int16_t x4 = INT16_MAX;
	uint64_t t0 = 10734260LLU;

    t0 = (x1-((x2/x3)%x4));

    if (t0 != 65535LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint32_t x5 = 29U;
	volatile int16_t x6 = INT16_MIN;
	static int16_t x8 = INT16_MIN;

    t1 = (x5-((x6/x7)%x8));

    if (t1 != 10951U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	static volatile uint16_t x10 = UINT16_MAX;
	int8_t x11 = -1;
	static int16_t x12 = INT16_MAX;
	int32_t t2 = 279;

    t2 = (x9-((x10/x11)%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	static int32_t x14 = 46909510;
	static int16_t x15 = -6;
	volatile uint8_t x16 = UINT8_MAX;

    t3 = (x13-((x14/x15)%x16));

    if (t3 != 65741) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	int8_t x18 = 2;
	uint8_t x19 = 2U;
	static volatile int32_t x20 = -1;
	volatile int32_t t4 = -5;

    t4 = (x17-((x18/x19)%x20));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = 1U;
	static int64_t x23 = -1LL;
	static uint64_t x24 = UINT64_MAX;
	uint64_t t5 = 1090229LLU;

    t5 = (x21-((x22/x23)%x24));

    if (t5 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x26 = INT64_MAX;
	static int32_t x27 = INT32_MAX;
	uint16_t x28 = 2U;
	static int64_t t6 = -2662239090440778998LL;

    t6 = (x25-((x26/x27)%x28));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1658;
	volatile int16_t x30 = 1;
	static int32_t x32 = -369841305;
	volatile int32_t t7 = -13855837;

    t7 = (x29-((x30/x31)%x32));

    if (t7 != -1658) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	uint8_t x34 = 0U;
	static int8_t x35 = 1;
	static int16_t x36 = -1;

    t8 = (x33-((x34/x35)%x36));

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = INT32_MIN;
	uint64_t x39 = 1877439921008515114LLU;
	int16_t x40 = INT16_MIN;
	uint64_t t9 = 2309LLU;

    t9 = (x37-((x38/x39)%x40));

    if (t9 != 18446744073709518839LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 30;
	int64_t x43 = -1LL;
	uint32_t x44 = 75070293U;

    t10 = (x41-((x42/x43)%x44));

    if (t10 != 29LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	uint8_t x47 = UINT8_MAX;
	uint64_t x48 = 119214915881LLU;

    t11 = (x45-((x46/x47)%x48));

    if (t11 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x53 = UINT8_MAX;
	uint8_t x54 = 2U;
	int32_t x56 = INT32_MAX;
	int32_t t12 = 57924;

    t12 = (x53-((x54/x55)%x56));

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x58 = 67110510321LLU;
	int16_t x59 = INT16_MIN;
	int8_t x60 = INT8_MIN;
	uint64_t t13 = UINT64_MAX;

    t13 = (x57-((x58/x59)%x60));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = UINT8_MAX;
	uint8_t x63 = 6U;
	int16_t x64 = 2;
	int64_t t14 = -7490802482LL;

    t14 = (x61-((x62/x63)%x64));

    if (t14 != 256LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint32_t x69 = 637111U;
	int16_t x70 = -1;
	int32_t x71 = 14068519;
	static int64_t t15 = -17LL;

    t15 = (x69-((x70/x71)%x72));

    if (t15 != 637111LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x73 = 0U;
	volatile int64_t x74 = INT64_MIN;
	uint16_t x76 = 2U;
	volatile int64_t t16 = 282932007155595LL;

    t16 = (x73-((x74/x75)%x76));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = 3;
	static int32_t x82 = INT32_MAX;
	volatile int16_t x83 = -1;
	static int32_t t17 = 3463222;

    t17 = (x81-((x82/x83)%x84));

    if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x85 = 1815946;
	int16_t x86 = INT16_MAX;
	int32_t x88 = 156004266;

    t18 = (x85-((x86/x87)%x88));

    if (t18 != 1815946) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x89 = INT8_MIN;
	int16_t x91 = INT16_MIN;
	int8_t x92 = 23;
	volatile int32_t t19 = 0;

    t19 = (x89-((x90/x91)%x92));

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MAX;
	volatile int8_t x95 = -6;
	uint8_t x96 = 56U;

    t20 = (x93-((x94/x95)%x96));

    if (t20 != -32739) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x101 = 1;
	volatile int64_t x103 = INT64_MIN;
	volatile int64_t x104 = INT64_MIN;
	int64_t t21 = 25LL;

    t21 = (x101-((x102/x103)%x104));

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x105 = INT16_MIN;
	static uint8_t x107 = 3U;
	uint16_t x108 = 10U;
	volatile int32_t t22 = 217900452;

    t22 = (x105-((x106/x107)%x108));

    if (t22 != -32766) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x109 = -1;
	static volatile int8_t x110 = -1;
	int8_t x111 = INT8_MAX;
	int64_t x112 = INT64_MAX;
	int64_t t23 = -64594949478920LL;

    t23 = (x109-((x110/x111)%x112));

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t t24 = 8274880153LLU;

    t24 = (x113-((x114/x115)%x116));

    if (t24 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x117 = UINT64_MAX;
	uint8_t x118 = 21U;
	int8_t x119 = -6;
	uint64_t x120 = 583315571719364047LLU;
	uint64_t t25 = 33252LLU;

    t25 = (x117-((x118/x119)%x120));

    if (t25 != 18082782723300285459LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x121 = INT16_MAX;
	int8_t x122 = -1;
	int8_t x123 = INT8_MIN;
	volatile uint32_t x124 = UINT32_MAX;
	uint32_t t26 = 12U;

    t26 = (x121-((x122/x123)%x124));

    if (t26 != 32767U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x125 = -7;
	uint8_t x126 = 3U;
	int32_t x127 = INT32_MIN;
	static int64_t x128 = INT64_MIN;
	static int64_t t27 = 2LL;

    t27 = (x125-((x126/x127)%x128));

    if (t27 != -7LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x129 = 3494763U;
	int8_t x130 = -29;
	uint16_t x131 = 32710U;
	volatile uint16_t x132 = 12706U;

    t28 = (x129-((x130/x131)%x132));

    if (t28 != 3494763U) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint64_t x134 = 870787030067292LLU;
	volatile uint64_t t29 = 2642LLU;

    t29 = (x133-((x134/x135)%x136));

    if (t29 != 9LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x142 = INT32_MAX;
	int16_t x143 = -1;
	int16_t x144 = INT16_MIN;
	volatile uint64_t t30 = 3119LLU;

    t30 = (x141-((x142/x143)%x144));

    if (t30 != 32766LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x145 = INT32_MAX;
	static volatile uint8_t x146 = 2U;
	volatile int64_t x147 = INT64_MIN;
	uint32_t x148 = UINT32_MAX;
	static int64_t t31 = -24LL;

    t31 = (x145-((x146/x147)%x148));

    if (t31 != 2147483647LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x149 = INT32_MIN;
	volatile int16_t x150 = INT16_MIN;
	static volatile uint32_t x152 = 1879289201U;
	static volatile uint64_t t32 = 34590LLU;

    t32 = (x149-((x150/x151)%x152));

    if (t32 != 18446744070440710609LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x153 = -1;
	volatile int32_t x154 = INT32_MIN;
	static int8_t x155 = 19;
	int32_t x156 = -22881065;
	static volatile int32_t t33 = 15;

    t33 = (x153-((x154/x155)%x156));

    if (t33 != 21501194) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x157 = -1065676474560LL;
	uint16_t x159 = 1972U;
	volatile uint16_t x160 = 1U;
	volatile int64_t t34 = 2788325379583656LL;

    t34 = (x157-((x158/x159)%x160));

    if (t34 != -1065676474560LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x161 = INT16_MAX;
	int8_t x162 = INT8_MIN;
	static volatile int32_t x163 = INT32_MIN;
	int64_t x164 = -764627506146LL;
	static int64_t t35 = 3135770738051LL;

    t35 = (x161-((x162/x163)%x164));

    if (t35 != 32767LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x165 = 3;
	uint32_t x166 = UINT32_MAX;
	uint64_t x167 = 1958LLU;
	uint32_t x168 = 16854400U;
	static uint64_t t36 = 24232566015006LLU;

    t36 = (x165-((x166/x167)%x168));

    if (t36 != 18446744073707358071LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x169 = INT8_MIN;
	uint64_t x171 = 1341LLU;
	volatile uint16_t x172 = 31U;
	volatile uint64_t t37 = 9200LLU;

    t37 = (x169-((x170/x171)%x172));

    if (t37 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x173 = UINT64_MAX;
	uint8_t x174 = 60U;
	uint16_t x175 = 98U;
	uint64_t t38 = UINT64_MAX;

    t38 = (x173-((x174/x175)%x176));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x177 = INT8_MIN;
	int8_t x178 = INT8_MAX;
	uint16_t x179 = 190U;
	volatile int8_t x180 = INT8_MIN;

    t39 = (x177-((x178/x179)%x180));

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x181 = -1LL;
	static volatile int64_t x182 = -437724799141LL;
	uint32_t x183 = 3U;
	int64_t t40 = 7262836158423LL;

    t40 = (x181-((x182/x183)%x184));

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x185 = 4U;
	int16_t x186 = INT16_MIN;
	static int8_t x187 = INT8_MIN;
	int16_t x188 = 15902;
	volatile uint32_t t41 = 128159819U;

    t41 = (x185-((x186/x187)%x188));

    if (t41 != 4294967044U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x189 = INT8_MIN;
	int16_t x190 = 5802;
	uint32_t x191 = 12083U;
	static int64_t x192 = INT64_MIN;
	static int64_t t42 = 1251897058786196LL;

    t42 = (x189-((x190/x191)%x192));

    if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x193 = 35601645LLU;
	uint32_t x194 = 1U;
	volatile uint16_t x195 = 14575U;
	int32_t x196 = -1;

    t43 = (x193-((x194/x195)%x196));

    if (t43 != 35601645LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x198 = -31LL;
	static int64_t x199 = 386755705LL;
	uint64_t x200 = UINT64_MAX;

    t44 = (x197-((x198/x199)%x200));

    if (t44 != 32767LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x201 = -1LL;
	volatile uint32_t x202 = UINT32_MAX;
	int64_t x203 = INT64_MAX;
	volatile int64_t t45 = -139LL;

    t45 = (x201-((x202/x203)%x204));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x205 = INT8_MAX;
	static int32_t x206 = INT32_MAX;
	volatile uint16_t x207 = 8961U;
	static int8_t x208 = 19;

    t46 = (x205-((x206/x207)%x208));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = INT8_MIN;
	int32_t x210 = -1102088;
	uint64_t x211 = UINT64_MAX;
	uint16_t x212 = 55U;
	volatile uint64_t t47 = 4660500579LLU;

    t47 = (x209-((x210/x211)%x212));

    if (t47 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x213 = INT64_MIN;
	int32_t x214 = -590537410;
	static uint64_t x215 = UINT64_MAX;
	static uint64_t x216 = UINT64_MAX;
	uint64_t t48 = 2666067506LLU;

    t48 = (x213-((x214/x215)%x216));

    if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x217 = -14;
	uint64_t x218 = 6902218967503LLU;
	static uint64_t x219 = 17963813039LLU;
	static int64_t x220 = INT64_MIN;
	volatile uint64_t t49 = 79403738LLU;

    t49 = (x217-((x218/x219)%x220));

    if (t49 != 18446744073709551218LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x221 = -1LL;
	int16_t x223 = INT16_MIN;
	uint8_t x224 = 2U;
	static int64_t t50 = 1130068LL;

    t50 = (x221-((x222/x223)%x224));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x225 = 3557857442972LLU;
	volatile uint8_t x226 = 1U;
	static int64_t x228 = 108LL;
	volatile uint64_t t51 = 29380480222435LLU;

    t51 = (x225-((x226/x227)%x228));

    if (t51 != 3557857442972LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x229 = INT32_MIN;
	int8_t x231 = INT8_MIN;

    t52 = (x229-((x230/x231)%x232));

    if (t52 != 18374686477524140032LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x233 = 63;
	volatile int32_t x234 = INT32_MAX;
	int64_t x235 = 1909LL;
	uint64_t x236 = 10474LLU;
	uint64_t t53 = 2606LLU;

    t53 = (x233-((x234/x235)%x236));

    if (t53 != 18446744073709547472LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x237 = -1;
	volatile uint16_t x238 = 120U;
	uint8_t x239 = UINT8_MAX;
	int64_t x240 = 11123530263135770LL;
	int64_t t54 = 15490743856LL;

    t54 = (x237-((x238/x239)%x240));

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x241 = UINT64_MAX;
	static int8_t x242 = -1;
	int8_t x243 = INT8_MIN;
	int16_t x244 = -1;
	static volatile uint64_t t55 = UINT64_MAX;

    t55 = (x241-((x242/x243)%x244));

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x250 = 3U;
	uint64_t x252 = 21857630256037673LLU;
	volatile uint64_t t56 = 15LLU;

    t56 = (x249-((x250/x251)%x252));

    if (t56 != 200LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x253 = -1;
	volatile int8_t x254 = -1;
	uint32_t x255 = UINT32_MAX;
	int8_t x256 = -1;
	uint32_t t57 = 117U;

    t57 = (x253-((x254/x255)%x256));

    if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x262 = INT32_MAX;
	int64_t x264 = INT64_MAX;
	int64_t t58 = -372LL;

    t58 = (x261-((x262/x263)%x264));

    if (t58 != -129LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x265 = INT16_MIN;
	static int32_t x267 = -39562342;
	static uint32_t t59 = 121583471U;

    t59 = (x265-((x266/x267)%x268));

    if (t59 != 4294934528U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x269 = -1;
	int64_t x270 = -4LL;
	static volatile uint64_t x272 = 7696LLU;
	uint64_t t60 = 241582839LLU;

    t60 = (x269-((x270/x271)%x272));

    if (t60 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x275 = INT8_MIN;
	int32_t x276 = INT32_MAX;
	volatile int64_t t61 = -1750619396051723770LL;

    t61 = (x273-((x274/x275)%x276));

    if (t61 != -2181038080LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x278 = 20U;
	int16_t x279 = -1839;
	uint32_t t62 = 1839991U;

    t62 = (x277-((x278/x279)%x280));

    if (t62 != 3279U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x282 = -1;
	int8_t x283 = INT8_MIN;
	int8_t x284 = -43;
	static int32_t t63 = 48;

    t63 = (x281-((x282/x283)%x284));

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x285 = INT32_MAX;
	static uint32_t x286 = 79512U;
	int16_t x287 = INT16_MAX;
	volatile int64_t t64 = -29253384048897286LL;

    t64 = (x285-((x286/x287)%x288));

    if (t64 != 2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x290 = INT8_MIN;
	int8_t x291 = -54;
	int8_t x292 = INT8_MIN;
	static volatile uint32_t t65 = 5U;

    t65 = (x289-((x290/x291)%x292));

    if (t65 != 87U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x293 = -1;
	volatile uint16_t x294 = UINT16_MAX;
	uint64_t x295 = 204017602664102LLU;
	static int64_t x296 = -1169313407088279427LL;
	volatile uint64_t t66 = UINT64_MAX;

    t66 = (x293-((x294/x295)%x296));

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x297 = UINT32_MAX;
	volatile int8_t x298 = INT8_MIN;
	int32_t x299 = 1591909;
	uint32_t x300 = 113U;
	volatile uint32_t t67 = UINT32_MAX;

    t67 = (x297-((x298/x299)%x300));

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x301 = 0;
	int8_t x302 = -14;
	volatile int64_t x303 = INT64_MIN;
	static volatile int64_t x304 = INT64_MIN;

    t68 = (x301-((x302/x303)%x304));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x305 = 31U;
	static int64_t x306 = 51LL;
	volatile int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;

    t69 = (x305-((x306/x307)%x308));

    if (t69 != 31LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x309 = INT8_MIN;
	volatile int16_t x310 = 6921;
	int16_t x311 = INT16_MIN;
	int64_t x312 = INT64_MAX;
	static volatile int64_t t70 = 7152338LL;

    t70 = (x309-((x310/x311)%x312));

    if (t70 != -128LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x313 = -1;
	uint16_t x314 = 7U;
	uint64_t x316 = 112324377LLU;
	volatile uint64_t t71 = 90508LLU;

    t71 = (x313-((x314/x315)%x316));

    if (t71 != 18446744073659851197LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x317 = 2U;
	int8_t x319 = INT8_MAX;
	uint32_t x320 = 16U;
	volatile int64_t t72 = -7863LL;

    t72 = (x317-((x318/x319)%x320));

    if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x321 = INT8_MAX;
	int32_t x322 = 0;
	int32_t x323 = -255019;
	static int8_t x324 = INT8_MIN;
	volatile int32_t t73 = 333591604;

    t73 = (x321-((x322/x323)%x324));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x325 = -1;
	volatile int32_t x326 = -171864560;
	int64_t x327 = 117LL;
	int64_t t74 = 110245104271178LL;

    t74 = (x325-((x326/x327)%x328));

    if (t74 != 1468926LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x329 = -1;
	uint16_t x332 = 5219U;
	int32_t t75 = 1;

    t75 = (x329-((x330/x331)%x332));

    if (t75 != 126) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x333 = 0;
	int64_t x334 = 0LL;
	int16_t x335 = INT16_MIN;
	static int64_t t76 = 31214080215193LL;

    t76 = (x333-((x334/x335)%x336));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x337 = INT16_MIN;
	volatile int32_t x338 = INT32_MIN;
	int64_t x339 = 539972411674LL;
	uint8_t x340 = UINT8_MAX;
	volatile int64_t t77 = 515277525773LL;

    t77 = (x337-((x338/x339)%x340));

    if (t77 != -32768LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x341 = 3245673;
	static volatile int64_t x343 = INT64_MIN;
	static int32_t x344 = INT32_MIN;
	int64_t t78 = 0LL;

    t78 = (x341-((x342/x343)%x344));

    if (t78 != 3245673LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x345 = -774073LL;
	volatile int32_t x346 = INT32_MAX;
	uint8_t x347 = 21U;
	uint8_t x348 = 4U;
	volatile int64_t t79 = -68106297LL;

    t79 = (x345-((x346/x347)%x348));

    if (t79 != -774075LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x349 = INT64_MIN;
	volatile uint16_t x350 = 1U;
	static int16_t x351 = INT16_MAX;
	static volatile uint16_t x352 = UINT16_MAX;
	int64_t t80 = INT64_MIN;

    t80 = (x349-((x350/x351)%x352));

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x353 = 288LLU;
	static volatile int32_t x354 = 3934;
	static uint32_t x355 = 434U;
	volatile uint64_t x356 = 3LLU;
	volatile uint64_t t81 = 0LLU;

    t81 = (x353-((x354/x355)%x356));

    if (t81 != 288LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x357 = INT16_MAX;
	static int8_t x358 = INT8_MIN;
	uint16_t x359 = 3U;
	static int16_t x360 = INT16_MIN;
	int32_t t82 = -77180;

    t82 = (x357-((x358/x359)%x360));

    if (t82 != 32809) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x361 = INT64_MIN;
	int32_t x362 = INT32_MIN;
	int16_t x363 = 21;
	static int8_t x364 = 18;
	volatile int64_t t83 = -28107917153LL;

    t83 = (x361-((x362/x363)%x364));

    if (t83 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x365 = 482353;
	uint8_t x366 = UINT8_MAX;
	int32_t x367 = INT32_MIN;
	int16_t x368 = -1;
	volatile int32_t t84 = 6947;

    t84 = (x365-((x366/x367)%x368));

    if (t84 != 482353) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x370 = 106411111618470275LLU;
	volatile uint16_t x371 = 14594U;
	volatile int16_t x372 = -11;
	volatile uint64_t t85 = 73506665699LLU;

    t85 = (x369-((x370/x371)%x372));

    if (t85 != 18446736782280771400LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x373 = INT64_MIN;
	int8_t x374 = -16;
	int8_t x376 = -1;
	static volatile int64_t t86 = INT64_MIN;

    t86 = (x373-((x374/x375)%x376));

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x377 = UINT16_MAX;
	volatile int32_t x378 = INT32_MIN;
	volatile uint64_t x379 = 7762802910000006985LLU;
	static uint32_t x380 = UINT32_MAX;
	volatile uint64_t t87 = 4388858LLU;

    t87 = (x377-((x378/x379)%x380));

    if (t87 != 65533LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x381 = 87624800908LLU;
	static uint64_t x382 = 35743760956941748LLU;
	static int32_t x383 = 19;
	static uint8_t x384 = UINT8_MAX;

    t88 = (x381-((x382/x383)%x384));

    if (t88 != 87624800694LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x389 = 7961;
	volatile int16_t x391 = INT16_MIN;
	static uint32_t t89 = 2U;

    t89 = (x389-((x390/x391)%x392));

    if (t89 != 7961U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x393 = 4508U;
	int32_t x396 = -1;
	static volatile uint32_t t90 = 221130U;

    t90 = (x393-((x394/x395)%x396));

    if (t90 != 4508U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x397 = -1;
	int16_t x398 = 26;
	static uint64_t x400 = UINT64_MAX;
	volatile uint64_t t91 = UINT64_MAX;

    t91 = (x397-((x398/x399)%x400));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x402 = 8U;
	volatile int16_t x403 = -1;

    t92 = (x401-((x402/x403)%x404));

    if (t92 != 86321910LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x405 = -13442517LL;
	volatile uint16_t x406 = 3U;
	int16_t x407 = INT16_MIN;
	int64_t x408 = -10640665LL;
	int64_t t93 = -126560003479059LL;

    t93 = (x405-((x406/x407)%x408));

    if (t93 != -13442517LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x409 = -5;
	uint64_t x410 = 67LLU;
	volatile uint64_t t94 = 182765580LLU;

    t94 = (x409-((x410/x411)%x412));

    if (t94 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x413 = 82U;
	static int64_t x415 = -797LL;
	volatile int64_t t95 = 11LL;

    t95 = (x413-((x414/x415)%x416));

    if (t95 != 11572612342352372LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x417 = UINT8_MAX;
	static uint32_t x418 = 147U;
	volatile int32_t x419 = INT32_MAX;
	uint32_t t96 = 32447U;

    t96 = (x417-((x418/x419)%x420));

    if (t96 != 255U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x421 = INT64_MIN;
	static uint16_t x422 = 6525U;
	static int8_t x424 = INT8_MAX;
	volatile int64_t t97 = INT64_MIN;

    t97 = (x421-((x422/x423)%x424));

    if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x425 = UINT64_MAX;
	int8_t x426 = INT8_MIN;
	int32_t x428 = INT32_MIN;
	uint64_t t98 = 1107LLU;

    t98 = (x425-((x426/x427)%x428));

    if (t98 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x430 = -32241LL;
	int64_t x431 = INT64_MIN;
	int32_t x432 = -3940;
	volatile int64_t t99 = 1959491001209170450LL;

    t99 = (x429-((x430/x431)%x432));

    if (t99 != 2147483647LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x433 = 283955LL;
	static int16_t x434 = -1;
	static int32_t x435 = INT32_MIN;
	static volatile int64_t t100 = -8934531LL;

    t100 = (x433-((x434/x435)%x436));

    if (t100 != 283955LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int16_t x437 = -457;
	volatile int64_t x438 = 1016228LL;
	int64_t x439 = INT64_MIN;
	static volatile int8_t x440 = INT8_MAX;
	int64_t t101 = -1897110649885984780LL;

    t101 = (x437-((x438/x439)%x440));

    if (t101 != -457LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x441 = 130712658267381LLU;
	uint16_t x442 = 20U;
	volatile uint32_t x443 = 1U;
	volatile int16_t x444 = -47;
	volatile uint64_t t102 = 5119874428LLU;

    t102 = (x441-((x442/x443)%x444));

    if (t102 != 130712658267361LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x450 = INT8_MIN;
	uint64_t x451 = 3LLU;
	uint8_t x452 = 30U;

    t103 = (x449-((x450/x451)%x452));

    if (t103 != 32745LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x453 = INT64_MAX;
	static volatile uint16_t x454 = UINT16_MAX;
	uint64_t x456 = UINT64_MAX;
	volatile uint64_t t104 = 446530LLU;

    t104 = (x453-((x454/x455)%x456));

    if (t104 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x457 = 27U;
	int16_t x458 = -309;
	uint8_t x459 = 10U;
	volatile int16_t x460 = INT16_MAX;
	volatile int32_t t105 = 4;

    t105 = (x457-((x458/x459)%x460));

    if (t105 != 57) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x461 = 4779U;
	uint8_t x462 = UINT8_MAX;
	int16_t x463 = INT16_MIN;
	static uint16_t x464 = 47U;
	uint32_t t106 = 3U;

    t106 = (x461-((x462/x463)%x464));

    if (t106 != 4779U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x465 = 589771969LL;
	volatile int8_t x467 = 9;
	volatile uint64_t t107 = 507LLU;

    t107 = (x465-((x466/x467)%x468));

    if (t107 != 589771969LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x469 = 3U;
	int32_t x471 = -123602836;
	int64_t t108 = 352194366LL;

    t108 = (x469-((x470/x471)%x472));

    if (t108 != 3LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x473 = -1;
	uint8_t x474 = 30U;
	int8_t x475 = INT8_MAX;
	int32_t x476 = INT32_MIN;
	static int32_t t109 = 32160;

    t109 = (x473-((x474/x475)%x476));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x477 = 3;
	volatile int16_t x479 = INT16_MAX;
	int16_t x480 = INT16_MIN;
	static int32_t t110 = 1;

    t110 = (x477-((x478/x479)%x480));

    if (t110 != 3) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x481 = -1949416775519168372LL;
	int8_t x482 = -7;
	static volatile int32_t x483 = 1667982;
	int64_t t111 = -80944981910794623LL;

    t111 = (x481-((x482/x483)%x484));

    if (t111 != -1949416775519168372LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x486 = INT32_MAX;
	int64_t x487 = INT64_MAX;

    t112 = (x485-((x486/x487)%x488));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x491 = 8;

    t113 = (x489-((x490/x491)%x492));

    if (t113 != 32767) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x493 = UINT32_MAX;
	static int8_t x494 = INT8_MAX;
	int32_t x495 = INT32_MIN;
	static uint32_t x496 = 902220U;
	uint32_t t114 = UINT32_MAX;

    t114 = (x493-((x494/x495)%x496));

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x499 = -107045850LL;
	volatile int8_t x500 = INT8_MIN;
	volatile int64_t t115 = -26474293863658LL;

    t115 = (x497-((x498/x499)%x500));

    if (t115 != 235LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x505 = UINT64_MAX;
	static int8_t x506 = INT8_MAX;
	volatile int32_t x507 = INT32_MIN;
	int64_t x508 = INT64_MAX;

    t116 = (x505-((x506/x507)%x508));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x510 = UINT8_MAX;
	static int64_t x511 = -2617147390631044LL;
	volatile int64_t t117 = -712644534975526LL;

    t117 = (x509-((x510/x511)%x512));

    if (t117 != -3579622502LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x513 = 4U;
	uint64_t x514 = 3LLU;
	static volatile uint64_t x515 = UINT64_MAX;
	int16_t x516 = 10;
	volatile uint64_t t118 = 320187152LLU;

    t118 = (x513-((x514/x515)%x516));

    if (t118 != 4LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x517 = 320896;
	static int32_t x520 = INT32_MIN;
	static volatile int32_t t119 = -26623;

    t119 = (x517-((x518/x519)%x520));

    if (t119 != 320896) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int64_t x521 = INT64_MIN;
	int64_t x522 = INT64_MIN;
	static volatile uint64_t x523 = 519947473695226795LLU;
	uint16_t x524 = UINT16_MAX;
	uint64_t t120 = 134388LLU;

    t120 = (x521-((x522/x523)%x524));

    if (t120 != 9223372036854775791LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x526 = 1;
	int32_t x528 = -1;
	static volatile int32_t t121 = 878;

    t121 = (x525-((x526/x527)%x528));

    if (t121 != -606279283) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x529 = -1LL;
	static int8_t x531 = -9;
	int64_t x532 = INT64_MIN;
	volatile int64_t t122 = 37089143LL;

    t122 = (x529-((x530/x531)%x532));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x537 = -1;
	static uint64_t x538 = 21634469LLU;
	volatile uint8_t x539 = 58U;
	volatile int16_t x540 = -1;
	static uint64_t t123 = 550775443354543LLU;

    t123 = (x537-((x538/x539)%x540));

    if (t123 != 18446744073709178607LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x541 = 329525U;
	static int64_t x542 = -1LL;
	uint64_t x543 = 38785628146064643LLU;
	int32_t x544 = 461261;
	volatile uint64_t t124 = 16990747163620LLU;

    t124 = (x541-((x542/x543)%x544));

    if (t124 != 329050LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x545 = UINT32_MAX;
	int8_t x546 = -1;
	volatile uint32_t t125 = UINT32_MAX;

    t125 = (x545-((x546/x547)%x548));

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x549 = UINT8_MAX;
	int32_t x550 = -1;
	uint64_t x551 = UINT64_MAX;
	static int64_t x552 = INT64_MIN;

    t126 = (x549-((x550/x551)%x552));

    if (t126 != 254LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x553 = 3351325908084371964LLU;
	static uint8_t x554 = UINT8_MAX;
	static volatile int64_t x555 = -1LL;
	static int32_t x556 = INT32_MIN;
	static uint64_t t127 = 4348165454760LLU;

    t127 = (x553-((x554/x555)%x556));

    if (t127 != 3351325908084372219LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x557 = UINT64_MAX;
	int64_t x560 = -6479924LL;
	uint64_t t128 = 140294064269793LLU;

    t128 = (x557-((x558/x559)%x560));

    if (t128 != 515250LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x561 = 668011601U;
	int64_t x563 = INT64_MIN;
	int16_t x564 = INT16_MAX;
	static int64_t t129 = -829822369983386LL;

    t129 = (x561-((x562/x563)%x564));

    if (t129 != 668011601LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x565 = -6;
	int16_t x566 = -1;
	static volatile int32_t x567 = INT32_MAX;
	int32_t x568 = 10;
	int32_t t130 = 719474034;

    t130 = (x565-((x566/x567)%x568));

    if (t130 != -6) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x569 = UINT64_MAX;
	int8_t x570 = 1;
	int16_t x571 = INT16_MIN;
	static int16_t x572 = INT16_MIN;
	volatile uint64_t t131 = UINT64_MAX;

    t131 = (x569-((x570/x571)%x572));

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x573 = UINT8_MAX;
	uint16_t x574 = 1757U;
	int32_t x575 = INT32_MIN;
	uint64_t x576 = 101598616061LLU;
	static uint64_t t132 = 77580LLU;

    t132 = (x573-((x574/x575)%x576));

    if (t132 != 255LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x577 = -4834397213207LL;
	static int16_t x579 = 13;
	uint32_t x580 = UINT32_MAX;

    t133 = (x577-((x578/x579)%x580));

    if (t133 != -4838692180443LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x581 = UINT8_MAX;
	int8_t x582 = INT8_MIN;
	int16_t x583 = INT16_MIN;
	int64_t x584 = 3693632598817392141LL;
	static int64_t t134 = -20361LL;

    t134 = (x581-((x582/x583)%x584));

    if (t134 != 255LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x585 = INT8_MAX;
	volatile int8_t x586 = -1;
	uint16_t x587 = 30721U;
	static volatile int32_t t135 = 179;

    t135 = (x585-((x586/x587)%x588));

    if (t135 != 127) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x589 = UINT8_MAX;
	uint64_t x590 = 114LLU;
	int64_t x591 = 5979420910420119LL;
	uint64_t x592 = UINT64_MAX;
	uint64_t t136 = 43348340223LLU;

    t136 = (x589-((x590/x591)%x592));

    if (t136 != 255LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x593 = -200028804;
	volatile int64_t x594 = INT64_MAX;
	uint16_t x595 = 81U;
	int16_t x596 = INT16_MIN;
	volatile int64_t t137 = 109461LL;

    t137 = (x593-((x594/x595)%x596));

    if (t137 != -200036490LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x597 = INT16_MIN;
	uint64_t x598 = UINT64_MAX;
	int32_t x599 = -1;
	int32_t x600 = INT32_MIN;
	volatile uint64_t t138 = 2182176947530997688LLU;

    t138 = (x597-((x598/x599)%x600));

    if (t138 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x601 = 46U;
	int16_t x602 = -1;
	int64_t x604 = -1LL;
	static volatile int64_t t139 = 25933LL;

    t139 = (x601-((x602/x603)%x604));

    if (t139 != 46LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x605 = 15;
	int64_t x606 = -1LL;
	uint32_t x607 = UINT32_MAX;
	int8_t x608 = INT8_MIN;
	int64_t t140 = -48034113237246LL;

    t140 = (x605-((x606/x607)%x608));

    if (t140 != 15LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	int64_t x614 = 178924038LL;
	int16_t x615 = -4096;
	int64_t t141 = -45LL;

    t141 = (x613-((x614/x615)%x616));

    if (t141 != 265LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint16_t x617 = 205U;
	int8_t x618 = INT8_MAX;
	static volatile int64_t x619 = 16928090LL;
	int64_t x620 = -1LL;
	static int64_t t142 = -24502LL;

    t142 = (x617-((x618/x619)%x620));

    if (t142 != 205LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x621 = INT16_MIN;
	int32_t x622 = -195738;
	int32_t x623 = INT32_MAX;
	int64_t x624 = 1101394034491193260LL;
	volatile int64_t t143 = 8LL;

    t143 = (x621-((x622/x623)%x624));

    if (t143 != -32768LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x625 = INT16_MIN;
	static volatile int32_t x626 = INT32_MAX;
	uint64_t x627 = UINT64_MAX;
	int16_t x628 = 1091;
	volatile uint64_t t144 = 15309LLU;

    t144 = (x625-((x626/x627)%x628));

    if (t144 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x629 = 1U;
	int8_t x631 = -1;
	static volatile int64_t x632 = INT64_MAX;
	int64_t t145 = 33566703239LL;

    t145 = (x629-((x630/x631)%x632));

    if (t145 != 65536LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x633 = -3382905989LL;
	uint32_t x634 = 3454U;
	uint32_t x635 = 80U;
	static int8_t x636 = 40;
	int64_t t146 = -1LL;

    t146 = (x633-((x634/x635)%x636));

    if (t146 != -3382905992LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x637 = INT16_MIN;
	int16_t x638 = INT16_MIN;
	uint32_t x639 = 1U;
	uint32_t t147 = 76473U;

    t147 = (x637-((x638/x639)%x640));

    if (t147 != 4294934528U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x642 = INT16_MIN;
	volatile int64_t x643 = -11LL;
	int16_t x644 = INT16_MIN;
	static int64_t t148 = 28090679744137175LL;

    t148 = (x641-((x642/x643)%x644));

    if (t148 != -2979LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x645 = 1;
	uint32_t x646 = 1U;
	volatile int16_t x647 = -3;
	static int32_t x648 = 27768994;
	volatile uint32_t t149 = 113888U;

    t149 = (x645-((x646/x647)%x648));

    if (t149 != 1U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x653 = 0U;
	uint8_t x654 = 47U;
	int16_t x655 = INT16_MIN;
	uint16_t x656 = 14U;
	int32_t t150 = 56108;

    t150 = (x653-((x654/x655)%x656));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x657 = 14362U;
	int64_t x658 = INT64_MIN;
	uint16_t x659 = 11U;

    t151 = (x657-((x658/x659)%x660));

    if (t151 != 14362LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x661 = -8906966141LL;
	int64_t x662 = -1LL;
	int64_t x664 = -1LL;

    t152 = (x661-((x662/x663)%x664));

    if (t152 != -8906966141LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int64_t x670 = INT64_MIN;
	static uint32_t x671 = 14U;
	uint8_t x672 = 1U;
	int64_t t153 = 2LL;

    t153 = (x669-((x670/x671)%x672));

    if (t153 != -32768LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x673 = INT32_MIN;
	int32_t x674 = INT32_MIN;
	int64_t t154 = 42672582263828859LL;

    t154 = (x673-((x674/x675)%x676));

    if (t154 != -2147483648LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x677 = -1;
	static int64_t x678 = -1LL;
	static int8_t x679 = 1;
	int64_t x680 = INT64_MIN;
	int64_t t155 = 5336128772240LL;

    t155 = (x677-((x678/x679)%x680));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x681 = 1;
	uint32_t x682 = 10U;
	int64_t x683 = INT64_MIN;
	volatile int8_t x684 = INT8_MAX;
	volatile int64_t t156 = 0LL;

    t156 = (x681-((x682/x683)%x684));

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x685 = 1071150182U;
	uint32_t x687 = 1607U;
	static int16_t x688 = INT16_MIN;
	volatile uint32_t t157 = 29U;

    t157 = (x685-((x686/x687)%x688));

    if (t157 != 1068477522U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x689 = INT32_MIN;
	uint8_t x690 = 0U;
	int64_t x691 = INT64_MIN;

    t158 = (x689-((x690/x691)%x692));

    if (t158 != -2147483648LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x697 = 1;
	volatile int16_t x698 = INT16_MIN;
	volatile int64_t x699 = INT64_MIN;
	static int64_t x700 = INT64_MIN;
	volatile int64_t t159 = -8LL;

    t159 = (x697-((x698/x699)%x700));

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x701 = 94455808815LLU;
	uint8_t x702 = UINT8_MAX;
	volatile int32_t x703 = INT32_MIN;
	volatile uint64_t x704 = UINT64_MAX;

    t160 = (x701-((x702/x703)%x704));

    if (t160 != 94455808815LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t t161 = -228801;

    t161 = (x705-((x706/x707)%x708));

    if (t161 != 171) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x709 = INT64_MAX;
	int16_t x710 = INT16_MAX;

    t162 = (x709-((x710/x711)%x712));

    if (t162 != 9223372036854677678LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x713 = 8807098132LLU;
	int16_t x714 = INT16_MIN;
	static int64_t x715 = -1LL;
	uint64_t x716 = UINT64_MAX;
	uint64_t t163 = 944591462873LLU;

    t163 = (x713-((x714/x715)%x716));

    if (t163 != 8807065364LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x717 = -13251LL;
	uint8_t x718 = 7U;
	static volatile uint8_t x719 = 1U;
	int8_t x720 = 16;
	int64_t t164 = -362370578LL;

    t164 = (x717-((x718/x719)%x720));

    if (t164 != -13258LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x721 = UINT32_MAX;
	static int16_t x723 = INT16_MIN;
	volatile int64_t t165 = 4493267828LL;

    t165 = (x721-((x722/x723)%x724));

    if (t165 != 4294967295LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x725 = 756U;
	int64_t x726 = INT64_MIN;
	int16_t x727 = -2668;
	int64_t t166 = -5480831056LL;

    t166 = (x725-((x726/x727)%x728));

    if (t166 != 756LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x729 = 0;
	int64_t x730 = INT64_MIN;
	uint64_t x731 = UINT64_MAX;
	int32_t x732 = INT32_MIN;

    t167 = (x729-((x730/x731)%x732));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x733 = 4564500U;
	int32_t x734 = -174;
	volatile uint64_t x735 = 1037178843LLU;
	static int32_t x736 = -1543;
	volatile uint64_t t168 = 15777LLU;

    t168 = (x733-((x734/x735)%x736));

    if (t168 != 18446744055928616346LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x737 = INT8_MAX;
	uint64_t x739 = 9389LLU;
	volatile uint64_t t169 = 25667LLU;

    t169 = (x737-((x738/x739)%x740));

    if (t169 != 106LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x742 = 4520LL;
	int32_t x743 = -1;
	uint16_t x744 = UINT16_MAX;
	int64_t t170 = -15295423581164291LL;

    t170 = (x741-((x742/x743)%x744));

    if (t170 != 4647LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x745 = 24613U;
	int8_t x747 = 8;
	uint64_t x748 = UINT64_MAX;
	static uint64_t t171 = 20701772906183990LLU;

    t171 = (x745-((x746/x747)%x748));

    if (t171 != 18446744073441140774LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x750 = INT64_MAX;
	int16_t x751 = INT16_MIN;
	uint8_t x752 = 3U;
	volatile int64_t t172 = -317LL;

    t172 = (x749-((x750/x751)%x752));

    if (t172 != 927815382597626LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x753 = -1LL;
	static int32_t x754 = 116218088;
	int32_t x755 = INT32_MIN;
	static uint8_t x756 = 1U;
	static int64_t t173 = -1543LL;

    t173 = (x753-((x754/x755)%x756));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x757 = INT8_MAX;
	uint32_t x758 = 12859735U;
	static volatile int64_t x759 = INT64_MIN;

    t174 = (x757-((x758/x759)%x760));

    if (t174 != 127LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x761 = 0;
	static int32_t x762 = INT32_MAX;
	volatile uint32_t x763 = UINT32_MAX;
	int64_t x764 = -1LL;
	int64_t t175 = 136318381144LL;

    t175 = (x761-((x762/x763)%x764));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x765 = -2281957LL;
	uint64_t x766 = 713716LLU;
	int16_t x767 = -1;
	volatile uint64_t t176 = 351149251510LLU;

    t176 = (x765-((x766/x767)%x768));

    if (t176 != 18446744073707269659LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x774 = UINT32_MAX;
	static int8_t x775 = 58;
	static int8_t x776 = INT8_MIN;
	uint32_t t177 = 3190U;

    t177 = (x773-((x774/x775)%x776));

    if (t177 != 4220916356U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x777 = 84;
	static int8_t x779 = INT8_MIN;
	volatile int32_t t178 = 56020046;

    t178 = (x777-((x778/x779)%x780));

    if (t178 != 86) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x785 = UINT64_MAX;
	static uint8_t x786 = 120U;
	volatile int64_t x787 = INT64_MIN;
	int32_t x788 = -685284076;
	uint64_t t179 = UINT64_MAX;

    t179 = (x785-((x786/x787)%x788));

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x789 = INT16_MIN;
	static int8_t x790 = 0;
	int16_t x791 = INT16_MAX;
	volatile int32_t t180 = -1036;

    t180 = (x789-((x790/x791)%x792));

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x793 = 1U;
	int32_t x795 = INT32_MIN;
	int8_t x796 = -1;

    t181 = (x793-((x794/x795)%x796));

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x797 = -1;
	uint32_t x798 = UINT32_MAX;
	static int32_t x799 = 16348;
	static uint16_t x800 = 1U;
	uint32_t t182 = UINT32_MAX;

    t182 = (x797-((x798/x799)%x800));

    if (t182 != UINT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint64_t x801 = UINT64_MAX;
	int32_t x802 = 392639;
	static int16_t x803 = 10;
	volatile uint64_t t183 = 134377847883053555LLU;

    t183 = (x801-((x802/x803)%x804));

    if (t183 != 18446744073709512352LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x809 = -1;
	uint64_t x810 = UINT64_MAX;
	volatile int8_t x811 = INT8_MIN;
	int8_t x812 = -1;
	uint64_t t184 = 1732LLU;

    t184 = (x809-((x810/x811)%x812));

    if (t184 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x813 = UINT64_MAX;
	static uint32_t x814 = 11045U;
	static int32_t x815 = INT32_MAX;
	int8_t x816 = -1;

    t185 = (x813-((x814/x815)%x816));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x818 = -1;
	int32_t x820 = INT32_MAX;
	int32_t t186 = 111;

    t186 = (x817-((x818/x819)%x820));

    if (t186 != 65534) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x821 = UINT8_MAX;
	int8_t x822 = 1;
	static int16_t x823 = INT16_MAX;
	int32_t t187 = 148867547;

    t187 = (x821-((x822/x823)%x824));

    if (t187 != 255) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x825 = INT16_MIN;
	int16_t x826 = INT16_MIN;
	int8_t x827 = 1;
	volatile uint32_t t188 = 27304U;

    t188 = (x825-((x826/x827)%x828));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x831 = -282;
	uint8_t x832 = 14U;
	volatile int32_t t189 = -746824118;

    t189 = (x829-((x830/x831)%x832));

    if (t189 != -32772) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x837 = -1LL;
	uint32_t x838 = 50U;
	static int32_t x840 = INT32_MIN;
	volatile int64_t t190 = -8320839807452313LL;

    t190 = (x837-((x838/x839)%x840));

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x841 = -1;
	int8_t x843 = 3;
	int16_t x844 = -1;
	int32_t t191 = 99592;

    t191 = (x841-((x842/x843)%x844));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x845 = -1234;
	uint64_t x848 = 33099275006770LLU;
	volatile uint64_t t192 = 990443401322LLU;

    t192 = (x845-((x846/x847)%x848));

    if (t192 != 18446744073709550382LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x849 = 628U;
	int8_t x850 = INT8_MIN;
	uint16_t x851 = 6U;
	volatile int32_t t193 = -384;

    t193 = (x849-((x850/x851)%x852));

    if (t193 != 649) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x854 = INT8_MIN;
	uint8_t x855 = UINT8_MAX;
	int64_t x856 = -1LL;
	volatile int64_t t194 = -176480267LL;

    t194 = (x853-((x854/x855)%x856));

    if (t194 != -3LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x858 = INT64_MAX;
	int8_t x860 = 9;
	int64_t t195 = -9041948117LL;

    t195 = (x857-((x858/x859)%x860));

    if (t195 != 3722589LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x861 = 1321;
	int64_t x862 = INT64_MIN;
	uint64_t x863 = UINT64_MAX;
	static int16_t x864 = -1;
	volatile uint64_t t196 = 2149LLU;

    t196 = (x861-((x862/x863)%x864));

    if (t196 != 1321LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x865 = 441U;
	static int64_t x866 = INT64_MIN;
	static int64_t x867 = INT64_MIN;
	static int16_t x868 = -1;
	int64_t t197 = 3489081545491787LL;

    t197 = (x865-((x866/x867)%x868));

    if (t197 != 441LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x869 = INT32_MIN;
	static uint8_t x870 = UINT8_MAX;
	uint64_t x871 = 423455850986657918LLU;
	int64_t x872 = -4126434146954988431LL;
	uint64_t t198 = 144116004507LLU;

    t198 = (x869-((x870/x871)%x872));

    if (t198 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x873 = 25U;
	int8_t x875 = -1;
	static uint32_t x876 = UINT32_MAX;
	volatile uint32_t t199 = 718312621U;

    t199 = (x873-((x874/x875)%x876));

    if (t199 != 152U) { NG(); } else { ; }
	
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

