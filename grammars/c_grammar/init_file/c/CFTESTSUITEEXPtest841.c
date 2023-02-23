
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

static int16_t x5 = INT16_MIN;
volatile uint32_t x10 = 830484470U;
int64_t x16 = INT64_MIN;
uint64_t t5 = UINT64_MAX;
uint32_t x29 = 6565880U;
static int32_t x32 = 1848;
int8_t x35 = INT8_MIN;
uint32_t x36 = UINT32_MAX;
uint8_t x41 = UINT8_MAX;
int8_t x46 = -1;
int32_t x54 = INT32_MIN;
volatile uint32_t t11 = 0U;
uint32_t x62 = UINT32_MAX;
int16_t x63 = -1;
volatile uint16_t x64 = 9U;
int64_t x71 = -367489LL;
volatile uint8_t x72 = 3U;
uint64_t x77 = UINT64_MAX;
uint64_t x89 = 31292109810490LLU;
int32_t x90 = INT32_MIN;
uint32_t x91 = UINT32_MAX;
uint8_t x92 = 3U;
uint16_t x93 = 26383U;
uint32_t x104 = UINT32_MAX;
uint32_t x107 = 17841938U;
static int8_t x108 = INT8_MIN;
int16_t x109 = INT16_MIN;
volatile int16_t x111 = -1;
uint8_t x112 = 41U;
static int8_t x114 = 5;
int64_t x118 = -1LL;
static int16_t x119 = -6;
int8_t x127 = INT8_MIN;
int16_t x129 = -1;
volatile uint32_t x130 = 494823U;
int64_t x135 = INT64_MIN;
uint16_t x151 = 90U;
int16_t x166 = INT16_MIN;
volatile int16_t x167 = -13998;
int64_t x169 = -7LL;
uint16_t x173 = 205U;
int32_t x180 = -1;
uint16_t x183 = UINT16_MAX;
int32_t x193 = -1;
int32_t x198 = -1;
volatile uint64_t t45 = 0LLU;
static int64_t x202 = 3057LL;
volatile uint8_t x206 = 2U;
volatile int16_t x212 = INT16_MAX;
volatile uint32_t t48 = 6U;
int16_t x224 = 63;
uint8_t x232 = 22U;
volatile int64_t x238 = 1379589000LL;
volatile int16_t x245 = 0;
int16_t x252 = INT16_MAX;
int16_t x255 = INT16_MIN;
volatile int64_t t59 = 183666042LL;
int64_t x258 = INT64_MIN;
int64_t t61 = -1094131195666LL;
int64_t x266 = INT64_MIN;
static volatile int64_t t62 = 16762255LL;
volatile int16_t x269 = INT16_MIN;
volatile uint64_t t63 = 11922526LLU;
volatile int64_t t66 = 533032860LL;
uint16_t x285 = UINT16_MAX;
int8_t x287 = INT8_MIN;
volatile int64_t t68 = 6904254LL;
static int32_t x300 = INT32_MIN;
int64_t t72 = -268653604017833165LL;
int8_t x317 = INT8_MIN;
uint16_t x319 = UINT16_MAX;
uint16_t x320 = 24U;
int8_t x323 = 26;
static volatile uint32_t t76 = 8U;
uint16_t x332 = 3484U;
uint64_t t80 = 2956028277523437809LLU;
int16_t x347 = INT16_MAX;
static int64_t x348 = -1LL;
volatile int16_t x353 = -1;
int32_t x356 = INT32_MIN;
uint64_t t85 = 873271237658625469LLU;
int8_t x365 = INT8_MIN;
static uint64_t x366 = 3508479LLU;
int32_t x374 = -1;
uint8_t x380 = 1U;
volatile int16_t x381 = INT16_MIN;
static int32_t x391 = INT32_MIN;
volatile int64_t t91 = 1571149028313LL;
int32_t x398 = INT32_MAX;
volatile int64_t x401 = INT64_MIN;
int32_t x403 = INT32_MAX;
uint64_t t95 = 5LLU;
int32_t x410 = INT32_MIN;
volatile uint64_t t97 = 37972106152737063LLU;
static uint32_t x419 = 11U;
int32_t x424 = INT32_MIN;
volatile uint64_t t101 = 502509593386LLU;
int32_t x434 = -1;
uint64_t x441 = 10702199446835140LLU;
int8_t x453 = 1;
int8_t x460 = 1;
int32_t x461 = -323;
uint16_t x467 = UINT16_MAX;
uint16_t x470 = 486U;
volatile uint8_t x486 = 0U;
uint16_t x487 = 191U;
uint8_t x492 = UINT8_MAX;
static volatile int64_t t116 = 286LL;
int16_t x493 = INT16_MAX;
int64_t x496 = INT64_MIN;
uint8_t x502 = UINT8_MAX;
int32_t x503 = 61;
uint16_t x508 = 15U;
uint64_t t121 = 37744448513370896LLU;
int8_t x514 = INT8_MIN;
uint32_t x522 = 233381052U;
int8_t x524 = -7;
volatile int16_t x526 = INT16_MIN;
static int16_t x527 = INT16_MIN;
int8_t x528 = INT8_MIN;
uint8_t x529 = 14U;
volatile uint16_t x531 = UINT16_MAX;
static int64_t t126 = 3019423LL;
int16_t x536 = -127;
static volatile uint8_t x540 = 2U;
static int8_t x547 = -1;
volatile int64_t x548 = -68LL;
static volatile int64_t t130 = 2385050034LL;
uint16_t x552 = 253U;
volatile int64_t t133 = 1368175402914768LL;
int8_t x561 = INT8_MAX;
uint8_t x565 = UINT8_MAX;
int64_t t135 = -89922LL;
uint16_t x580 = 34U;
int64_t x581 = 123079435738819252LL;
static uint64_t x585 = 193010231LLU;
int16_t x597 = INT16_MAX;
int32_t x599 = -2;
int16_t x600 = 1;
int16_t x602 = -32;
int32_t x603 = INT32_MIN;
int64_t x611 = -659053681449146609LL;
int8_t x612 = INT8_MIN;
static int16_t x615 = -1182;
int16_t x617 = INT16_MIN;
volatile uint32_t t149 = 693302U;
static int8_t x631 = -1;
uint32_t x632 = UINT32_MAX;
int8_t x639 = INT8_MIN;
int64_t t153 = 51441701920623LL;
uint16_t x648 = 7U;
uint64_t x653 = 6841749216487LLU;
int32_t x664 = -1;
static int64_t x671 = INT64_MAX;
static int32_t x676 = -8600208;
int64_t t161 = -247LL;
int32_t x679 = -1;
int16_t x681 = INT16_MIN;
volatile int32_t x684 = -973;
int16_t x691 = 1025;
int16_t x695 = -1;
int32_t x698 = INT32_MAX;
int64_t t167 = -307058330LL;
int32_t x703 = INT32_MIN;
int64_t x716 = -1LL;
uint32_t x717 = 167U;
volatile int64_t x719 = INT64_MAX;
static volatile uint32_t t173 = 22084U;
uint32_t x725 = 11403686U;
int64_t x730 = -1LL;
int16_t x736 = -170;
volatile uint64_t t176 = 2268459398336866610LLU;
int64_t x738 = INT64_MIN;
uint32_t x739 = 7617U;
volatile int8_t x741 = INT8_MIN;
int8_t x749 = -1;
static int64_t x751 = -1LL;
static uint64_t x753 = UINT64_MAX;
int64_t x754 = -159279603LL;
int8_t x765 = 1;
int64_t x768 = -1LL;
int64_t x773 = INT64_MAX;
uint64_t x776 = 6793956824369500LLU;
int64_t x782 = 329279908499766587LL;
volatile int16_t x787 = INT16_MIN;
uint32_t x789 = 0U;
volatile int32_t t191 = -89;
static volatile int64_t t194 = -819337253901098254LL;
uint64_t t196 = 4488335442004330LLU;
int32_t x841 = 59016135;


void f0(void) {
    	uint32_t x6 = UINT32_MAX;
	volatile uint8_t x7 = 116U;
	int16_t x8 = -1;
	volatile uint32_t t0 = 29040559U;

    t0 = (x5+((x6%x7)%x8));

    if (t0 != 4294934543U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MIN;
	volatile int16_t x11 = INT16_MIN;
	volatile int8_t x12 = -1;
	static volatile uint32_t t1 = 1739517U;

    t1 = (x9+((x10%x11)%x12));

    if (t1 != 830451702U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = INT32_MIN;
	int32_t x14 = -1;
	static int64_t x15 = INT64_MAX;
	int64_t t2 = 8182916226648LL;

    t2 = (x13+((x14%x15)%x16));

    if (t2 != -2147483649LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 1U;
	volatile uint64_t x18 = 644278LLU;
	int64_t x19 = 541411357874524LL;
	int64_t x20 = INT64_MAX;
	uint64_t t3 = 855064293479517558LLU;

    t3 = (x17+((x18%x19)%x20));

    if (t3 != 644279LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x21 = INT64_MAX;
	int16_t x22 = INT16_MIN;
	int64_t x23 = -654526040960265LL;
	int8_t x24 = INT8_MAX;
	volatile int64_t t4 = -273LL;

    t4 = (x21+((x22%x23)%x24));

    if (t4 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x25 = -1;
	int8_t x26 = INT8_MIN;
	uint64_t x27 = UINT64_MAX;
	volatile uint16_t x28 = 2U;

    t5 = (x25+((x26%x27)%x28));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x30 = -1;
	static int8_t x31 = -1;
	volatile uint32_t t6 = 1949928U;

    t6 = (x29+((x30%x31)%x32));

    if (t6 != 6565880U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	static volatile int8_t x34 = 1;
	volatile uint32_t t7 = 11598562U;

    t7 = (x33+((x34%x35)%x36));

    if (t7 != 4294967169U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x42 = INT64_MAX;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = INT16_MAX;
	uint64_t t8 = 707167054LLU;

    t8 = (x41+((x42%x43)%x44));

    if (t8 != 262LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x45 = -1;
	int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MIN;
	int64_t t9 = 129436518LL;

    t9 = (x45+((x46%x47)%x48));

    if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x49 = UINT8_MAX;
	uint8_t x50 = 119U;
	int8_t x51 = INT8_MIN;
	int32_t x52 = -1;
	volatile int32_t t10 = 1689170;

    t10 = (x49+((x50%x51)%x52));

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = 28U;
	static uint32_t x55 = UINT32_MAX;
	uint16_t x56 = 70U;

    t11 = (x53+((x54%x55)%x56));

    if (t11 != 86U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = -1;
	static volatile int64_t x58 = INT64_MIN;
	volatile uint16_t x59 = UINT16_MAX;
	static uint64_t x60 = 12033939119017916LLU;
	volatile uint64_t t12 = 2LLU;

    t12 = (x57+((x58%x59)%x60));

    if (t12 != 10749343374071535LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x61 = INT8_MAX;
	static volatile uint32_t t13 = 4082U;

    t13 = (x61+((x62%x63)%x64));

    if (t13 != 127U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = -11;
	static uint64_t x66 = 3740959817550211LLU;
	uint64_t x67 = 19703060562070137LLU;
	int8_t x68 = -2;
	volatile uint64_t t14 = 8730LLU;

    t14 = (x65+((x66%x67)%x68));

    if (t14 != 3740959817550200LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x69 = 5779485289018997495LLU;
	int32_t x70 = -1;
	uint64_t t15 = 3643931592502LLU;

    t15 = (x69+((x70%x71)%x72));

    if (t15 != 5779485289018997494LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x78 = INT32_MIN;
	static int64_t x79 = 4320LL;
	int32_t x80 = -1;
	uint64_t t16 = UINT64_MAX;

    t16 = (x77+((x78%x79)%x80));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x81 = 8U;
	uint16_t x82 = UINT16_MAX;
	int8_t x83 = INT8_MIN;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t17 = 35518901178557LLU;

    t17 = (x81+((x82%x83)%x84));

    if (t17 != 135LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x85 = INT64_MIN;
	int64_t x86 = 5113LL;
	volatile uint16_t x87 = 170U;
	volatile uint16_t x88 = 942U;
	int64_t t18 = 991060726780353640LL;

    t18 = (x85+((x86%x87)%x88));

    if (t18 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t t19 = 145127253LLU;

    t19 = (x89+((x90%x91)%x92));

    if (t19 != 31292109810492LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	volatile int16_t x96 = INT16_MAX;
	static volatile int32_t t20 = 3;

    t20 = (x93+((x94%x95)%x96));

    if (t20 != 26255) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x97 = UINT64_MAX;
	uint64_t x98 = UINT64_MAX;
	int16_t x99 = INT16_MAX;
	static volatile uint64_t x100 = 3713060829400268LLU;
	volatile uint64_t t21 = 3845948544LLU;

    t21 = (x97+((x98%x99)%x100));

    if (t21 != 14LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x101 = -1LL;
	static uint8_t x102 = 15U;
	int64_t x103 = INT64_MIN;
	volatile int64_t t22 = 4117453LL;

    t22 = (x101+((x102%x103)%x104));

    if (t22 != 14LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x105 = 2147358736892580061LLU;
	static int16_t x106 = INT16_MAX;
	uint64_t t23 = 596LLU;

    t23 = (x105+((x106%x107)%x108));

    if (t23 != 2147358736892612828LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x110 = INT16_MIN;
	volatile int32_t t24 = 38;

    t24 = (x109+((x110%x111)%x112));

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x113 = -1LL;
	static int8_t x115 = INT8_MAX;
	int32_t x116 = -1128796;
	volatile int64_t t25 = -7539LL;

    t25 = (x113+((x114%x115)%x116));

    if (t25 != 4LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x117 = INT64_MAX;
	static uint64_t x120 = 68589627650359994LLU;
	static volatile uint64_t t26 = 396143615LLU;

    t26 = (x117+((x118%x119)%x120));

    if (t26 != 9288095900267849030LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = INT8_MIN;
	int32_t x122 = INT32_MIN;
	int64_t x123 = INT64_MIN;
	static int32_t x124 = INT32_MAX;
	volatile int64_t t27 = 128249167377179LL;

    t27 = (x121+((x122%x123)%x124));

    if (t27 != -129LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x125 = 8U;
	uint8_t x126 = 0U;
	int8_t x128 = -38;
	static int32_t t28 = 1;

    t28 = (x125+((x126%x127)%x128));

    if (t28 != 8) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x131 = INT32_MIN;
	int16_t x132 = -347;
	volatile uint32_t t29 = 39920764U;

    t29 = (x129+((x130%x131)%x132));

    if (t29 != 494822U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x133 = 0;
	uint32_t x134 = UINT32_MAX;
	int32_t x136 = INT32_MAX;
	volatile int64_t t30 = 5298406421LL;

    t30 = (x133+((x134%x135)%x136));

    if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x137 = 10U;
	volatile uint16_t x138 = 322U;
	volatile int32_t x139 = -1;
	static volatile int32_t x140 = INT32_MIN;
	volatile int32_t t31 = 1861968;

    t31 = (x137+((x138%x139)%x140));

    if (t31 != 10) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x141 = -1;
	static volatile int16_t x142 = INT16_MIN;
	static int32_t x143 = INT32_MIN;
	int8_t x144 = 13;
	volatile int32_t t32 = 46;

    t32 = (x141+((x142%x143)%x144));

    if (t32 != -9) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = -1;
	volatile int8_t x146 = INT8_MIN;
	int16_t x147 = INT16_MAX;
	int8_t x148 = INT8_MIN;
	int32_t t33 = 6958;

    t33 = (x145+((x146%x147)%x148));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = 9887;
	static uint16_t x150 = 3355U;
	int16_t x152 = -1;
	int32_t t34 = 656328;

    t34 = (x149+((x150%x151)%x152));

    if (t34 != 9887) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x157 = 2U;
	int16_t x158 = -1;
	int16_t x159 = -1;
	int16_t x160 = INT16_MAX;
	volatile int32_t t35 = 122039082;

    t35 = (x157+((x158%x159)%x160));

    if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x161 = INT64_MIN;
	volatile uint16_t x162 = UINT16_MAX;
	static int64_t x163 = -1LL;
	int64_t x164 = -203669LL;
	volatile int64_t t36 = INT64_MIN;

    t36 = (x161+((x162%x163)%x164));

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x165 = -1;
	int64_t x168 = INT64_MIN;
	int64_t t37 = -95921219728364755LL;

    t37 = (x165+((x166%x167)%x168));

    if (t37 != -4773LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x170 = UINT32_MAX;
	int64_t x171 = INT64_MAX;
	static int16_t x172 = INT16_MIN;
	volatile int64_t t38 = 6233417785850LL;

    t38 = (x169+((x170%x171)%x172));

    if (t38 != 32760LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x174 = 183U;
	int64_t x175 = INT64_MAX;
	int64_t x176 = -1LL;
	volatile int64_t t39 = -53174064LL;

    t39 = (x173+((x174%x175)%x176));

    if (t39 != 205LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x177 = 945997614LLU;
	int16_t x178 = 615;
	uint32_t x179 = UINT32_MAX;
	uint64_t t40 = 28307459LLU;

    t40 = (x177+((x178%x179)%x180));

    if (t40 != 945998229LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x181 = 302118LL;
	int64_t x182 = INT64_MIN;
	volatile uint8_t x184 = 7U;
	volatile int64_t t41 = 59316LL;

    t41 = (x181+((x182%x183)%x184));

    if (t41 != 302117LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x185 = 6419623289904891LLU;
	int8_t x186 = -6;
	static int64_t x187 = -1LL;
	int8_t x188 = -1;
	uint64_t t42 = 2158865037011286LLU;

    t42 = (x185+((x186%x187)%x188));

    if (t42 != 6419623289904891LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x189 = -1;
	static int32_t x190 = INT32_MAX;
	uint64_t x191 = 16015LLU;
	uint32_t x192 = 71195U;
	uint64_t t43 = 24255LLU;

    t43 = (x189+((x190%x191)%x192));

    if (t43 != 266LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x194 = 11U;
	uint64_t x195 = UINT64_MAX;
	volatile int32_t x196 = INT32_MIN;
	static volatile uint64_t t44 = 33449328LLU;

    t44 = (x193+((x194%x195)%x196));

    if (t44 != 10LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x197 = 2192347374740LLU;
	int32_t x199 = 1;
	int64_t x200 = 20416185LL;

    t45 = (x197+((x198%x199)%x200));

    if (t45 != 2192347374740LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x201 = INT64_MIN;
	volatile int32_t x203 = -38;
	uint8_t x204 = UINT8_MAX;
	volatile int64_t t46 = -250LL;

    t46 = (x201+((x202%x203)%x204));

    if (t46 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x205 = 0;
	uint8_t x207 = 113U;
	int32_t x208 = -1;
	static int32_t t47 = 124813084;

    t47 = (x205+((x206%x207)%x208));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x209 = INT8_MIN;
	uint32_t x210 = UINT32_MAX;
	uint32_t x211 = 346U;

    t48 = (x209+((x210%x211)%x212));

    if (t48 != 4294967263U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x213 = 8U;
	static int16_t x214 = 188;
	int8_t x215 = INT8_MIN;
	int32_t x216 = INT32_MIN;
	int32_t t49 = -35544959;

    t49 = (x213+((x214%x215)%x216));

    if (t49 != 68) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x217 = 1;
	static uint64_t x218 = UINT64_MAX;
	int64_t x219 = -207547736896158532LL;
	static uint8_t x220 = UINT8_MAX;
	volatile uint64_t t50 = 95LLU;

    t50 = (x217+((x218%x219)%x220));

    if (t50 != 157LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x221 = 7472728U;
	int32_t x222 = INT32_MAX;
	int16_t x223 = 21;
	static uint32_t t51 = 5U;

    t51 = (x221+((x222%x223)%x224));

    if (t51 != 7472729U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x225 = INT8_MIN;
	int8_t x226 = -48;
	uint64_t x227 = 23291154LLU;
	volatile int16_t x228 = 3;
	uint64_t t52 = 515480636395LLU;

    t52 = (x225+((x226%x227)%x228));

    if (t52 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x229 = 269614036765834LL;
	volatile int64_t x230 = INT64_MIN;
	static uint32_t x231 = 162U;
	static int64_t t53 = -92251817715884LL;

    t53 = (x229+((x230%x231)%x232));

    if (t53 != 269614036765830LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x233 = 819;
	volatile int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MAX;
	volatile uint8_t x236 = 97U;
	volatile int32_t t54 = 22003;

    t54 = (x233+((x234%x235)%x236));

    if (t54 != 818) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x237 = 1062148873U;
	int16_t x239 = 127;
	int8_t x240 = INT8_MIN;
	static volatile int64_t t55 = -932054817506742374LL;

    t55 = (x237+((x238%x239)%x240));

    if (t55 != 1062148938LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x241 = 0;
	volatile uint32_t x242 = UINT32_MAX;
	int32_t x243 = -1;
	int16_t x244 = INT16_MAX;
	uint32_t t56 = 919U;

    t56 = (x241+((x242%x243)%x244));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x246 = INT16_MIN;
	int8_t x247 = -1;
	uint32_t x248 = 5262218U;
	uint32_t t57 = 110U;

    t57 = (x245+((x246%x247)%x248));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x249 = INT64_MIN;
	uint16_t x250 = 3985U;
	int8_t x251 = INT8_MAX;
	static volatile int64_t t58 = 1692234LL;

    t58 = (x249+((x250%x251)%x252));

    if (t58 != -9223372036854775760LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x253 = -1;
	volatile int64_t x254 = -1LL;
	volatile int64_t x256 = INT64_MIN;

    t59 = (x253+((x254%x255)%x256));

    if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x257 = INT32_MIN;
	int32_t x259 = INT32_MAX;
	static uint32_t x260 = UINT32_MAX;
	volatile int64_t t60 = -808LL;

    t60 = (x257+((x258%x259)%x260));

    if (t60 != -2147483650LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x261 = INT16_MAX;
	uint32_t x262 = 3U;
	int32_t x263 = 48;
	static int64_t x264 = INT64_MIN;

    t61 = (x261+((x262%x263)%x264));

    if (t61 != 32770LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x265 = -14;
	volatile int16_t x267 = 1572;
	uint8_t x268 = 50U;

    t62 = (x265+((x266%x267)%x268));

    if (t62 != -48LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x270 = 3846U;
	uint64_t x271 = 1496851905480LLU;
	int16_t x272 = INT16_MIN;

    t63 = (x269+((x270%x271)%x272));

    if (t63 != 18446744073709522694LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x273 = 80997000U;
	uint16_t x274 = 98U;
	static int16_t x275 = INT16_MIN;
	uint64_t x276 = 18902537LLU;
	static uint64_t t64 = 73LLU;

    t64 = (x273+((x274%x275)%x276));

    if (t64 != 80997098LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x277 = 42U;
	static uint16_t x278 = 20623U;
	int32_t x279 = 45319037;
	int16_t x280 = 47;
	int32_t t65 = -832384;

    t65 = (x277+((x278%x279)%x280));

    if (t65 != 79) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x281 = INT32_MIN;
	static uint16_t x282 = 644U;
	static volatile uint32_t x283 = UINT32_MAX;
	int64_t x284 = -1LL;

    t66 = (x281+((x282%x283)%x284));

    if (t66 != -2147483648LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x286 = -1;
	static int16_t x288 = INT16_MIN;
	static volatile int32_t t67 = 231;

    t67 = (x285+((x286%x287)%x288));

    if (t67 != 65534) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x289 = UINT8_MAX;
	volatile uint8_t x290 = 0U;
	int64_t x291 = INT64_MAX;
	int16_t x292 = -1;

    t68 = (x289+((x290%x291)%x292));

    if (t68 != 255LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x293 = UINT32_MAX;
	uint64_t x294 = 1LLU;
	int32_t x295 = -1;
	uint32_t x296 = 485086130U;
	static volatile uint64_t t69 = 12507903286010LLU;

    t69 = (x293+((x294%x295)%x296));

    if (t69 != 4294967296LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x297 = INT16_MAX;
	uint8_t x298 = 19U;
	int16_t x299 = INT16_MIN;
	volatile int32_t t70 = -2297093;

    t70 = (x297+((x298%x299)%x300));

    if (t70 != 32786) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x301 = INT8_MIN;
	uint8_t x302 = 5U;
	static volatile int64_t x303 = INT64_MIN;
	static uint64_t x304 = 8401443774524LLU;
	volatile uint64_t t71 = 15214268919LLU;

    t71 = (x301+((x302%x303)%x304));

    if (t71 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x305 = INT32_MAX;
	int16_t x306 = -1;
	volatile int64_t x307 = -1LL;
	int32_t x308 = INT32_MAX;

    t72 = (x305+((x306%x307)%x308));

    if (t72 != 2147483647LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x309 = 0;
	int32_t x310 = -1;
	uint64_t x311 = 318523LLU;
	volatile uint32_t x312 = UINT32_MAX;
	uint64_t t73 = 824063060040866LLU;

    t73 = (x309+((x310%x311)%x312));

    if (t73 != 136682LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x318 = 1344295187U;
	uint32_t t74 = 4U;

    t74 = (x317+((x318%x319)%x320));

    if (t74 != 4294967179U) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x321 = 3221459770936958LL;
	static int64_t x322 = INT64_MIN;
	int8_t x324 = 4;
	volatile int64_t t75 = -67953654361752221LL;

    t75 = (x321+((x322%x323)%x324));

    if (t75 != 3221459770936958LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x325 = INT8_MAX;
	int16_t x326 = INT16_MAX;
	static uint16_t x327 = 1472U;
	volatile uint32_t x328 = 242581528U;

    t76 = (x325+((x326%x327)%x328));

    if (t76 != 510U) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x329 = 30;
	int64_t x330 = INT64_MIN;
	int8_t x331 = -1;
	volatile int64_t t77 = 0LL;

    t77 = (x329+((x330%x331)%x332));

    if (t77 != 30LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x333 = INT64_MIN;
	uint8_t x334 = UINT8_MAX;
	int64_t x335 = -170616LL;
	int32_t x336 = -82203;
	static volatile int64_t t78 = 1055111925947474816LL;

    t78 = (x333+((x334%x335)%x336));

    if (t78 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x337 = 81899LL;
	uint64_t x338 = 445443187LLU;
	uint8_t x339 = 28U;
	uint64_t x340 = UINT64_MAX;
	uint64_t t79 = 111059943LLU;

    t79 = (x337+((x338%x339)%x340));

    if (t79 != 81906LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MIN;
	int8_t x343 = INT8_MIN;
	volatile uint64_t x344 = UINT64_MAX;

    t80 = (x341+((x342%x343)%x344));

    if (t80 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x345 = 53U;
	int8_t x346 = -1;
	volatile int64_t t81 = -30664189760LL;

    t81 = (x345+((x346%x347)%x348));

    if (t81 != 53LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MIN;
	static int16_t x351 = -1;
	volatile int16_t x352 = -1;
	volatile int32_t t82 = -159683897;

    t82 = (x349+((x350%x351)%x352));

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x354 = INT32_MIN;
	int32_t x355 = -77395;
	static int32_t t83 = 28148;

    t83 = (x353+((x354%x355)%x356));

    if (t83 != -4584) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x357 = 941U;
	uint8_t x358 = UINT8_MAX;
	int16_t x359 = -1060;
	int64_t x360 = 122592423838176851LL;
	int64_t t84 = -919717781688LL;

    t84 = (x357+((x358%x359)%x360));

    if (t84 != 1196LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x361 = UINT32_MAX;
	static uint16_t x362 = 3U;
	static uint64_t x363 = 268404571386653212LLU;
	volatile uint64_t x364 = 173583246LLU;

    t85 = (x361+((x362%x363)%x364));

    if (t85 != 4294967298LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x367 = 50139;
	uint64_t x368 = 490523LLU;
	static volatile uint64_t t86 = 3223220LLU;

    t86 = (x365+((x366%x367)%x368));

    if (t86 != 48760LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x373 = -1;
	uint64_t x375 = 3124492417LLU;
	volatile int8_t x376 = INT8_MAX;
	volatile uint64_t t87 = 903491LLU;

    t87 = (x373+((x374%x375)%x376));

    if (t87 != 119LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x377 = INT64_MAX;
	uint8_t x378 = 0U;
	static volatile int64_t x379 = INT64_MIN;
	static int64_t t88 = INT64_MAX;

    t88 = (x377+((x378%x379)%x380));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x382 = 20U;
	int32_t x383 = -1;
	static uint32_t x384 = 191433U;
	volatile uint32_t t89 = 130456551U;

    t89 = (x381+((x382%x383)%x384));

    if (t89 != 4294934528U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x385 = 1LLU;
	int16_t x386 = -1;
	uint16_t x387 = 107U;
	int16_t x388 = INT16_MAX;
	volatile uint64_t t90 = 13723260771036LLU;

    t90 = (x385+((x386%x387)%x388));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x389 = 0U;
	volatile uint8_t x390 = 3U;
	static int64_t x392 = INT64_MIN;

    t91 = (x389+((x390%x391)%x392));

    if (t91 != 3LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x393 = 0LL;
	volatile int8_t x394 = INT8_MAX;
	int64_t x395 = INT64_MAX;
	volatile int16_t x396 = INT16_MIN;
	int64_t t92 = 2031331577956LL;

    t92 = (x393+((x394%x395)%x396));

    if (t92 != 127LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x397 = 100U;
	static uint8_t x399 = 2U;
	volatile int16_t x400 = 3526;
	static int32_t t93 = 406;

    t93 = (x397+((x398%x399)%x400));

    if (t93 != 101) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x402 = INT8_MAX;
	int32_t x404 = INT32_MAX;
	static volatile int64_t t94 = -2418771LL;

    t94 = (x401+((x402%x403)%x404));

    if (t94 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x405 = INT16_MAX;
	uint64_t x406 = 23979956871913LLU;
	uint8_t x407 = UINT8_MAX;
	int32_t x408 = INT32_MAX;

    t95 = (x405+((x406%x407)%x408));

    if (t95 != 32900LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x409 = UINT16_MAX;
	volatile int16_t x411 = INT16_MIN;
	uint64_t x412 = 28913589239LLU;
	volatile uint64_t t96 = 11827LLU;

    t96 = (x409+((x410%x411)%x412));

    if (t96 != 65535LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x413 = 2071359U;
	int8_t x414 = -16;
	static volatile uint64_t x415 = UINT64_MAX;
	static volatile int16_t x416 = 805;

    t97 = (x413+((x414%x415)%x416));

    if (t97 != 2071464LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x417 = 45784U;
	int64_t x418 = -14LL;
	uint8_t x420 = UINT8_MAX;
	int64_t t98 = 4LL;

    t98 = (x417+((x418%x419)%x420));

    if (t98 != 45781LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x421 = INT16_MIN;
	static int8_t x422 = INT8_MIN;
	uint32_t x423 = 1811043U;
	volatile uint32_t t99 = 6884U;

    t99 = (x421+((x422%x423)%x424));

    if (t99 != 951447U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x425 = 156775U;
	uint16_t x426 = 404U;
	int64_t x427 = INT64_MAX;
	int32_t x428 = INT32_MAX;
	int64_t t100 = 65010133234536LL;

    t100 = (x425+((x426%x427)%x428));

    if (t100 != 157179LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x429 = -663;
	uint64_t x430 = UINT64_MAX;
	uint64_t x431 = 1LLU;
	int32_t x432 = INT32_MIN;

    t101 = (x429+((x430%x431)%x432));

    if (t101 != 18446744073709550953LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x433 = UINT64_MAX;
	int16_t x435 = -1;
	uint16_t x436 = 610U;
	uint64_t t102 = UINT64_MAX;

    t102 = (x433+((x434%x435)%x436));

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x437 = INT32_MIN;
	uint32_t x438 = 4822372U;
	static int8_t x439 = INT8_MAX;
	int32_t x440 = INT32_MIN;
	static volatile uint32_t t103 = 24620777U;

    t103 = (x437+((x438%x439)%x440));

    if (t103 != 2147483703U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x442 = 40U;
	int32_t x443 = INT32_MIN;
	volatile int16_t x444 = INT16_MAX;
	uint64_t t104 = 3404843567443LLU;

    t104 = (x441+((x442%x443)%x444));

    if (t104 != 10702199446835180LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x445 = -1LL;
	int32_t x446 = INT32_MIN;
	uint32_t x447 = UINT32_MAX;
	uint32_t x448 = 864116528U;
	static volatile int64_t t105 = -340335595950036288LL;

    t105 = (x445+((x446%x447)%x448));

    if (t105 != 419250591LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x449 = INT64_MIN;
	int32_t x450 = INT32_MIN;
	int16_t x451 = -1;
	int32_t x452 = 120;
	volatile int64_t t106 = INT64_MIN;

    t106 = (x449+((x450%x451)%x452));

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x454 = 84916553816046LLU;
	volatile uint32_t x455 = UINT32_MAX;
	uint64_t x456 = 28217129625LLU;
	volatile uint64_t t107 = 474114387225LLU;

    t107 = (x453+((x454%x455)%x456));

    if (t107 != 755426602LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x457 = 7042522954959LL;
	int32_t x458 = -16394699;
	int64_t x459 = -15434LL;
	volatile int64_t t108 = -3LL;

    t108 = (x457+((x458%x459)%x460));

    if (t108 != 7042522954959LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x462 = UINT64_MAX;
	uint64_t x463 = 259791LLU;
	static uint32_t x464 = 8U;
	volatile uint64_t t109 = 14645142640LLU;

    t109 = (x461+((x462%x463)%x464));

    if (t109 != 18446744073709551296LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x465 = 10U;
	int16_t x466 = 1805;
	int64_t x468 = INT64_MIN;
	static volatile int64_t t110 = -506LL;

    t110 = (x465+((x466%x467)%x468));

    if (t110 != 1815LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x469 = INT64_MIN;
	int64_t x471 = -1LL;
	uint32_t x472 = UINT32_MAX;
	volatile int64_t t111 = INT64_MIN;

    t111 = (x469+((x470%x471)%x472));

    if (t111 != INT64_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x473 = 2120053444U;
	int64_t x474 = -7003LL;
	volatile int32_t x475 = INT32_MIN;
	static int16_t x476 = -1;
	int64_t t112 = 5542617950LL;

    t112 = (x473+((x474%x475)%x476));

    if (t112 != 2120053444LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x477 = INT16_MAX;
	int32_t x478 = 193967635;
	static uint16_t x479 = UINT16_MAX;
	static int16_t x480 = 89;
	static int32_t t113 = 16799021;

    t113 = (x477+((x478%x479)%x480));

    if (t113 != 32853) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x481 = -1LL;
	int16_t x482 = -59;
	volatile int16_t x483 = -1;
	static int16_t x484 = -18;
	volatile int64_t t114 = -1LL;

    t114 = (x481+((x482%x483)%x484));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x485 = -1;
	int16_t x488 = INT16_MAX;
	int32_t t115 = -129298;

    t115 = (x485+((x486%x487)%x488));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x489 = UINT32_MAX;
	int64_t x490 = -1LL;
	uint32_t x491 = 421849298U;

    t116 = (x489+((x490%x491)%x492));

    if (t116 != 4294967294LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int8_t x494 = INT8_MIN;
	volatile uint64_t x495 = UINT64_MAX;
	static volatile uint64_t t117 = 2LLU;

    t117 = (x493+((x494%x495)%x496));

    if (t117 != 9223372036854808447LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x497 = INT32_MAX;
	static int64_t x498 = INT64_MIN;
	volatile uint16_t x499 = 73U;
	uint16_t x500 = UINT16_MAX;
	volatile int64_t t118 = 23573881225LL;

    t118 = (x497+((x498%x499)%x500));

    if (t118 != 2147483646LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x501 = 300187934;
	int32_t x504 = 1800139;
	static volatile int32_t t119 = 46448;

    t119 = (x501+((x502%x503)%x504));

    if (t119 != 300187945) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x505 = 0U;
	uint16_t x506 = 2U;
	int8_t x507 = INT8_MIN;
	volatile int32_t t120 = -1;

    t120 = (x505+((x506%x507)%x508));

    if (t120 != 2) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x509 = 7469LLU;
	uint32_t x510 = UINT32_MAX;
	uint8_t x511 = UINT8_MAX;
	int8_t x512 = -1;

    t121 = (x509+((x510%x511)%x512));

    if (t121 != 7469LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x513 = INT64_MIN;
	volatile uint32_t x515 = 1262143U;
	volatile int8_t x516 = INT8_MIN;
	volatile int64_t t122 = 558582367982LL;

    t122 = (x513+((x514%x515)%x516));

    if (t122 != -9223372036853619126LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x517 = 54562366LLU;
	static uint64_t x518 = 384060069902081LLU;
	int16_t x519 = -1;
	static volatile int8_t x520 = INT8_MIN;
	uint64_t t123 = 16526502908241LLU;

    t123 = (x517+((x518%x519)%x520));

    if (t123 != 384060124464447LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x521 = INT16_MIN;
	int8_t x523 = INT8_MAX;
	volatile uint32_t t124 = 6789783U;

    t124 = (x521+((x522%x523)%x524));

    if (t124 != 4294934538U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x525 = 75U;
	volatile int32_t t125 = -3262180;

    t125 = (x525+((x526%x527)%x528));

    if (t125 != 75) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x530 = -1;
	int64_t x532 = INT64_MAX;

    t126 = (x529+((x530%x531)%x532));

    if (t126 != 13LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x533 = INT16_MIN;
	volatile int64_t x534 = -222LL;
	static int16_t x535 = -474;
	static volatile int64_t t127 = 777579318489116928LL;

    t127 = (x533+((x534%x535)%x536));

    if (t127 != -32863LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x537 = INT32_MIN;
	int8_t x538 = 3;
	int32_t x539 = INT32_MIN;
	volatile int32_t t128 = -14540267;

    t128 = (x537+((x538%x539)%x540));

    if (t128 != -2147483647) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x541 = UINT32_MAX;
	int32_t x542 = INT32_MIN;
	int16_t x543 = -117;
	static volatile uint16_t x544 = UINT16_MAX;
	uint32_t t129 = 577528980U;

    t129 = (x541+((x542%x543)%x544));

    if (t129 != 4294967284U) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint32_t x545 = UINT32_MAX;
	static int32_t x546 = INT32_MIN;

    t130 = (x545+((x546%x547)%x548));

    if (t130 != 4294967295LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x549 = INT64_MAX;
	uint16_t x550 = UINT16_MAX;
	volatile int8_t x551 = 1;
	static int64_t t131 = INT64_MAX;

    t131 = (x549+((x550%x551)%x552));

    if (t131 != INT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x553 = UINT8_MAX;
	uint8_t x554 = UINT8_MAX;
	static int8_t x555 = INT8_MAX;
	uint8_t x556 = 21U;
	volatile int32_t t132 = 105495505;

    t132 = (x553+((x554%x555)%x556));

    if (t132 != 256) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x557 = INT8_MAX;
	int64_t x558 = 0LL;
	uint8_t x559 = 5U;
	uint32_t x560 = UINT32_MAX;

    t133 = (x557+((x558%x559)%x560));

    if (t133 != 127LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x562 = INT32_MIN;
	int32_t x563 = -45;
	uint32_t x564 = 384U;
	volatile uint32_t t134 = 255U;

    t134 = (x561+((x562%x563)%x564));

    if (t134 != 345U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x566 = -949LL;
	uint16_t x567 = UINT16_MAX;
	int32_t x568 = INT32_MAX;

    t135 = (x565+((x566%x567)%x568));

    if (t135 != -694LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x569 = 496U;
	int16_t x570 = -1;
	int32_t x571 = INT32_MIN;
	int8_t x572 = -62;
	int32_t t136 = -5866609;

    t136 = (x569+((x570%x571)%x572));

    if (t136 != 495) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x573 = -1LL;
	static volatile int8_t x574 = 29;
	int32_t x575 = INT32_MAX;
	static uint64_t x576 = 47103LLU;
	uint64_t t137 = 379LLU;

    t137 = (x573+((x574%x575)%x576));

    if (t137 != 28LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x577 = -3;
	uint8_t x578 = 58U;
	static uint64_t x579 = 6258LLU;
	volatile uint64_t t138 = 1LLU;

    t138 = (x577+((x578%x579)%x580));

    if (t138 != 21LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x582 = UINT16_MAX;
	int64_t x583 = INT64_MIN;
	static volatile int32_t x584 = -1;
	static int64_t t139 = 239428554827841600LL;

    t139 = (x581+((x582%x583)%x584));

    if (t139 != 123079435738819252LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x586 = INT16_MIN;
	uint8_t x587 = UINT8_MAX;
	static int32_t x588 = INT32_MAX;
	volatile uint64_t t140 = 202992922652910058LLU;

    t140 = (x585+((x586%x587)%x588));

    if (t140 != 193010103LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x589 = 3;
	uint32_t x590 = 13727462U;
	uint32_t x591 = 13689414U;
	int8_t x592 = INT8_MIN;
	static uint32_t t141 = 939694542U;

    t141 = (x589+((x590%x591)%x592));

    if (t141 != 38051U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x593 = UINT16_MAX;
	int8_t x594 = -2;
	int16_t x595 = 6914;
	int16_t x596 = 3;
	int32_t t142 = 2733805;

    t142 = (x593+((x594%x595)%x596));

    if (t142 != 65533) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x598 = -1;
	int32_t t143 = 216708;

    t143 = (x597+((x598%x599)%x600));

    if (t143 != 32767) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x601 = 1U;
	uint16_t x604 = 4993U;
	static int32_t t144 = -2;

    t144 = (x601+((x602%x603)%x604));

    if (t144 != -31) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x605 = -1;
	int16_t x606 = INT16_MIN;
	int64_t x607 = INT64_MAX;
	int16_t x608 = INT16_MIN;
	int64_t t145 = 7837068LL;

    t145 = (x605+((x606%x607)%x608));

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x609 = INT64_MAX;
	int32_t x610 = -2;
	static int64_t t146 = -1473928517LL;

    t146 = (x609+((x610%x611)%x612));

    if (t146 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x613 = INT32_MIN;
	static int8_t x614 = INT8_MAX;
	int32_t x616 = INT32_MAX;
	static volatile int32_t t147 = -11363;

    t147 = (x613+((x614%x615)%x616));

    if (t147 != -2147483521) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x618 = UINT32_MAX;
	static volatile uint16_t x619 = 2U;
	uint64_t x620 = UINT64_MAX;
	volatile uint64_t t148 = 182146278424811LLU;

    t148 = (x617+((x618%x619)%x620));

    if (t148 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x625 = INT32_MIN;
	int32_t x626 = 30;
	uint32_t x627 = 290U;
	int8_t x628 = INT8_MIN;

    t149 = (x625+((x626%x627)%x628));

    if (t149 != 2147483678U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x629 = 1U;
	int32_t x630 = 0;
	uint32_t t150 = 57426772U;

    t150 = (x629+((x630%x631)%x632));

    if (t150 != 1U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x633 = -1LL;
	uint8_t x634 = 8U;
	int16_t x635 = INT16_MIN;
	static int64_t x636 = INT64_MIN;
	volatile int64_t t151 = 240LL;

    t151 = (x633+((x634%x635)%x636));

    if (t151 != 7LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x637 = -824613522LL;
	static int32_t x638 = INT32_MIN;
	int32_t x640 = INT32_MAX;
	static int64_t t152 = -25065LL;

    t152 = (x637+((x638%x639)%x640));

    if (t152 != -824613522LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x641 = 26;
	volatile int64_t x642 = INT64_MIN;
	static int8_t x643 = -1;
	volatile int8_t x644 = -1;

    t153 = (x641+((x642%x643)%x644));

    if (t153 != 26LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x645 = -17059980633199949LL;
	uint8_t x646 = UINT8_MAX;
	static int64_t x647 = INT64_MIN;
	int64_t t154 = -366724LL;

    t154 = (x645+((x646%x647)%x648));

    if (t154 != -17059980633199946LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x649 = UINT8_MAX;
	static volatile int8_t x650 = 0;
	int8_t x651 = 1;
	int16_t x652 = -83;
	volatile int32_t t155 = -118;

    t155 = (x649+((x650%x651)%x652));

    if (t155 != 255) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x654 = 0;
	static uint8_t x655 = 6U;
	int32_t x656 = -1;
	volatile uint64_t t156 = 6LLU;

    t156 = (x653+((x654%x655)%x656));

    if (t156 != 6841749216487LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x657 = 39;
	volatile uint8_t x658 = 3U;
	static int8_t x659 = 14;
	int16_t x660 = -1;
	int32_t t157 = -1;

    t157 = (x657+((x658%x659)%x660));

    if (t157 != 39) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x661 = UINT32_MAX;
	int64_t x662 = -1LL;
	int16_t x663 = -1;
	int64_t t158 = -23LL;

    t158 = (x661+((x662%x663)%x664));

    if (t158 != 4294967295LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x665 = 1798;
	static int64_t x666 = -1LL;
	uint8_t x667 = UINT8_MAX;
	static int8_t x668 = -50;
	static int64_t t159 = 947213LL;

    t159 = (x665+((x666%x667)%x668));

    if (t159 != 1797LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x669 = 16467972U;
	int32_t x670 = -115059603;
	static volatile int8_t x672 = 11;
	int64_t t160 = -1310971123933496LL;

    t160 = (x669+((x670%x671)%x672));

    if (t160 != 16467962LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x673 = INT16_MAX;
	static int64_t x674 = INT64_MAX;
	int16_t x675 = -1;

    t161 = (x673+((x674%x675)%x676));

    if (t161 != 32767LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x677 = INT16_MIN;
	int8_t x678 = INT8_MIN;
	uint64_t x680 = 19476250792100LLU;
	volatile uint64_t t162 = 215376573134686877LLU;

    t162 = (x677+((x678%x679)%x680));

    if (t162 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x682 = -135;
	int16_t x683 = INT16_MAX;
	volatile int32_t t163 = -307080;

    t163 = (x681+((x682%x683)%x684));

    if (t163 != -32903) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x685 = UINT8_MAX;
	int64_t x686 = 11760486762331244LL;
	int8_t x687 = INT8_MAX;
	int64_t x688 = -1LL;
	int64_t t164 = 1299865LL;

    t164 = (x685+((x686%x687)%x688));

    if (t164 != 255LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x689 = INT8_MIN;
	static int64_t x690 = -6LL;
	int64_t x692 = -436025657681LL;
	int64_t t165 = -8194880991054LL;

    t165 = (x689+((x690%x691)%x692));

    if (t165 != -134LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x693 = INT64_MAX;
	volatile int64_t x694 = 131238541559257318LL;
	int32_t x696 = INT32_MIN;
	volatile int64_t t166 = INT64_MAX;

    t166 = (x693+((x694%x695)%x696));

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x697 = 492786U;
	int8_t x699 = INT8_MIN;
	volatile int64_t x700 = -894718830LL;

    t167 = (x697+((x698%x699)%x700));

    if (t167 != 492913LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x701 = -1237;
	uint8_t x702 = 3U;
	uint64_t x704 = 209438976502LLU;
	uint64_t t168 = 968752557630854LLU;

    t168 = (x701+((x702%x703)%x704));

    if (t168 != 18446744073709550382LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x705 = 0;
	int8_t x706 = INT8_MAX;
	volatile int64_t x707 = INT64_MAX;
	int16_t x708 = INT16_MIN;
	int64_t t169 = 888891385075LL;

    t169 = (x705+((x706%x707)%x708));

    if (t169 != 127LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x709 = 57410LL;
	volatile int32_t x710 = -1;
	static int8_t x711 = INT8_MIN;
	static uint64_t x712 = 10597LLU;
	volatile uint64_t t170 = 390LLU;

    t170 = (x709+((x710%x711)%x712));

    if (t170 != 66914LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x713 = INT8_MAX;
	int64_t x714 = 370091235991401265LL;
	int8_t x715 = INT8_MIN;
	int64_t t171 = 91508543647LL;

    t171 = (x713+((x714%x715)%x716));

    if (t171 != 127LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x718 = INT8_MAX;
	uint16_t x720 = 6050U;
	static volatile int64_t t172 = -5024LL;

    t172 = (x717+((x718%x719)%x720));

    if (t172 != 294LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x721 = -1;
	uint32_t x722 = 37695158U;
	int8_t x723 = INT8_MAX;
	uint16_t x724 = 15347U;

    t173 = (x721+((x722%x723)%x724));

    if (t173 != 33U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x726 = 2981U;
	uint16_t x727 = 149U;
	int8_t x728 = INT8_MIN;
	uint32_t t174 = 122339U;

    t174 = (x725+((x726%x727)%x728));

    if (t174 != 11403687U) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x729 = INT32_MIN;
	int16_t x731 = INT16_MIN;
	int64_t x732 = 6LL;
	volatile int64_t t175 = -4548915165640440LL;

    t175 = (x729+((x730%x731)%x732));

    if (t175 != -2147483649LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x733 = UINT64_MAX;
	static uint32_t x734 = 2071642U;
	uint8_t x735 = 44U;

    t176 = (x733+((x734%x735)%x736));

    if (t176 != 33LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x737 = INT64_MAX;
	static int16_t x740 = INT16_MIN;
	int64_t t177 = 132888938LL;

    t177 = (x737+((x738%x739)%x740));

    if (t177 != 9223372036854775469LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x742 = INT16_MIN;
	int32_t x743 = 235333;
	int16_t x744 = 6062;
	volatile int32_t t178 = 703730;

    t178 = (x741+((x742%x743)%x744));

    if (t178 != -2586) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x750 = -1;
	uint64_t x752 = UINT64_MAX;
	uint64_t t179 = UINT64_MAX;

    t179 = (x749+((x750%x751)%x752));

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x755 = -273965483550LL;
	uint8_t x756 = UINT8_MAX;
	uint64_t t180 = 10782LLU;

    t180 = (x753+((x754%x755)%x756));

    if (t180 != 18446744073709551387LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x766 = -363;
	volatile uint64_t x767 = UINT64_MAX;
	uint64_t t181 = 9192837665114809LLU;

    t181 = (x765+((x766%x767)%x768));

    if (t181 != 18446744073709551254LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x774 = INT16_MIN;
	int8_t x775 = INT8_MAX;
	uint64_t t182 = 1LLU;

    t182 = (x773+((x774%x775)%x776));

    if (t182 != 9224523332401134921LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x777 = 11U;
	int16_t x778 = INT16_MIN;
	static uint64_t x779 = 3487783357LLU;
	static uint8_t x780 = 11U;
	uint64_t t183 = 5905LLU;

    t183 = (x777+((x778%x779)%x780));

    if (t183 != 20LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x781 = INT8_MAX;
	uint64_t x783 = UINT64_MAX;
	uint8_t x784 = 87U;
	uint64_t t184 = 4LLU;

    t184 = (x781+((x782%x783)%x784));

    if (t184 != 189LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x785 = 959026194395LLU;
	static int64_t x786 = 1597363LL;
	uint16_t x788 = 4U;
	uint64_t t185 = 9808454LLU;

    t185 = (x785+((x786%x787)%x788));

    if (t185 != 959026194398LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x790 = -1;
	volatile int8_t x791 = -1;
	volatile int64_t x792 = -1LL;
	volatile int64_t t186 = 5282LL;

    t186 = (x789+((x790%x791)%x792));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x793 = 0LLU;
	volatile int8_t x794 = INT8_MIN;
	uint16_t x795 = UINT16_MAX;
	int16_t x796 = INT16_MAX;
	volatile uint64_t t187 = 7085542852805558773LLU;

    t187 = (x793+((x794%x795)%x796));

    if (t187 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x797 = UINT8_MAX;
	int32_t x798 = -1;
	int16_t x799 = -1;
	int64_t x800 = 910249171330876LL;
	volatile int64_t t188 = 4049861LL;

    t188 = (x797+((x798%x799)%x800));

    if (t188 != 255LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x801 = 25658755559298LLU;
	int8_t x802 = -1;
	static volatile uint8_t x803 = 8U;
	uint32_t x804 = 52058664U;
	static uint64_t t189 = 1836018499000456565LLU;

    t189 = (x801+((x802%x803)%x804));

    if (t189 != 25658781716145LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x809 = 122U;
	int16_t x810 = INT16_MAX;
	int64_t x811 = -1LL;
	volatile int8_t x812 = INT8_MAX;
	int64_t t190 = -32747362LL;

    t190 = (x809+((x810%x811)%x812));

    if (t190 != 122LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x813 = 7;
	int16_t x814 = -1854;
	int16_t x815 = INT16_MIN;
	int8_t x816 = 6;

    t191 = (x813+((x814%x815)%x816));

    if (t191 != 7) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x817 = 612U;
	int8_t x818 = -1;
	int16_t x819 = INT16_MIN;
	int32_t x820 = -1;
	volatile int32_t t192 = 2;

    t192 = (x817+((x818%x819)%x820));

    if (t192 != 612) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x821 = -1;
	uint8_t x822 = 6U;
	volatile int64_t x823 = INT64_MAX;
	volatile int64_t x824 = -27104LL;
	int64_t t193 = 1744699955311918802LL;

    t193 = (x821+((x822%x823)%x824));

    if (t193 != 5LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x825 = -1854LL;
	uint8_t x826 = 24U;
	int16_t x827 = INT16_MAX;
	int8_t x828 = INT8_MIN;

    t194 = (x825+((x826%x827)%x828));

    if (t194 != -1830LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x829 = 531U;
	int64_t x830 = -1LL;
	int16_t x831 = -52;
	uint32_t x832 = UINT32_MAX;
	volatile int64_t t195 = -422LL;

    t195 = (x829+((x830%x831)%x832));

    if (t195 != 530LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x833 = 6U;
	static int8_t x834 = -1;
	uint64_t x835 = 108802043220312066LLU;
	uint16_t x836 = 1830U;

    t196 = (x833+((x834%x835)%x836));

    if (t196 != 1677LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x837 = UINT64_MAX;
	int8_t x838 = INT8_MAX;
	uint16_t x839 = UINT16_MAX;
	static int8_t x840 = INT8_MIN;
	uint64_t t197 = 1127113LLU;

    t197 = (x837+((x838%x839)%x840));

    if (t197 != 126LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x842 = INT64_MIN;
	static int8_t x843 = INT8_MAX;
	int32_t x844 = INT32_MIN;
	int64_t t198 = -115704150627640814LL;

    t198 = (x841+((x842%x843)%x844));

    if (t198 != 59016134LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x845 = INT64_MAX;
	volatile uint8_t x846 = UINT8_MAX;
	int8_t x847 = INT8_MIN;
	volatile int16_t x848 = -1;
	int64_t t199 = INT64_MAX;

    t199 = (x845+((x846%x847)%x848));

    if (t199 != INT64_MAX) { NG(); } else { ; }
	
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

