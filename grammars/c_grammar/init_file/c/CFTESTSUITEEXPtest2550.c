
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

int16_t x1 = INT16_MIN;
static int32_t x3 = INT32_MIN;
int32_t x5 = -1;
volatile int16_t x13 = -3157;
int8_t x18 = -18;
volatile int32_t t3 = 768;
int16_t x24 = 78;
volatile uint64_t t5 = 330368107899391291LLU;
int8_t x33 = -1;
int32_t x36 = -473;
int16_t x45 = -1;
uint16_t x47 = 5U;
int64_t t12 = -41091501387LL;
int8_t x65 = -1;
int64_t x68 = -432LL;
volatile int32_t x71 = -5969;
static volatile int32_t t15 = -104053814;
int64_t x74 = -166207945352LL;
int64_t x76 = -139567403LL;
static int16_t x82 = INT16_MAX;
volatile int64_t t17 = 372677778226175805LL;
int64_t x86 = -6561570266LL;
uint8_t x90 = 18U;
uint8_t x96 = 75U;
static volatile uint8_t x124 = 2U;
int16_t x125 = -578;
int16_t x128 = 6;
int64_t t26 = -1LL;
volatile uint16_t x133 = 1U;
volatile int8_t x135 = 35;
int64_t x137 = -1939364441329171LL;
int16_t x139 = INT16_MAX;
int8_t x141 = -1;
static volatile int32_t t29 = 338;
int8_t x147 = 61;
volatile int8_t x180 = INT8_MAX;
static int32_t x184 = INT32_MAX;
volatile int16_t x187 = -47;
int32_t x188 = -91499;
volatile int8_t x189 = 0;
int32_t x200 = INT32_MIN;
uint64_t x213 = 26LLU;
int32_t x225 = -19652019;
volatile int32_t x238 = INT32_MIN;
int64_t x240 = -4029348773453627228LL;
int32_t x241 = -1;
volatile int64_t x243 = INT64_MIN;
static uint32_t x249 = 12252U;
static int8_t x272 = 1;
int32_t x279 = 63;
uint64_t x284 = UINT64_MAX;
volatile uint64_t t55 = 31LLU;
static uint32_t x300 = UINT32_MAX;
static int64_t t58 = -682LL;
volatile uint64_t x306 = UINT64_MAX;
int16_t x307 = 4997;
volatile uint64_t t59 = 965563539672LLU;
static int64_t x312 = INT64_MAX;
int64_t t60 = 417772791293590LL;
volatile int16_t x313 = -1976;
uint32_t x316 = 201039U;
uint64_t x318 = 648748942LLU;
uint32_t x322 = 515293505U;
volatile int64_t t63 = -3965842565647330LL;
static int16_t x326 = -1;
volatile int32_t t64 = -1;
volatile uint16_t x338 = 909U;
volatile uint32_t x340 = 154442562U;
uint8_t x342 = 0U;
volatile uint32_t t68 = 59042431U;
static int64_t x354 = INT64_MIN;
int16_t x356 = INT16_MIN;
volatile int64_t t70 = 2110108751936446LL;
int8_t x359 = 0;
static volatile int8_t x360 = 35;
uint64_t x362 = 3616399534416433LLU;
static int32_t x365 = -1;
int32_t x366 = INT32_MIN;
uint16_t x379 = 1126U;
int32_t x381 = INT32_MAX;
volatile int32_t t78 = -3952;
volatile uint8_t x390 = 4U;
int8_t x397 = INT8_MAX;
int8_t x408 = -1;
int32_t t82 = 330;
int64_t x412 = INT64_MIN;
volatile int32_t x414 = INT32_MAX;
int64_t t85 = -3105648870383560400LL;
int32_t x421 = -65650074;
volatile int32_t t86 = -1996;
int16_t x432 = INT16_MAX;
uint64_t x447 = 163146LLU;
static volatile int64_t x448 = INT64_MIN;
uint16_t x456 = 29U;
volatile int64_t t93 = -64786217754400654LL;
int64_t x467 = INT64_MIN;
int16_t x470 = INT16_MIN;
int32_t x471 = -2730;
volatile int8_t x474 = INT8_MIN;
volatile int64_t x475 = INT64_MIN;
int64_t x495 = 4014115004045LL;
uint8_t x514 = 97U;
volatile int16_t x516 = 11;
uint8_t x519 = 12U;
int16_t x520 = 0;
volatile uint16_t x523 = UINT16_MAX;
volatile int8_t x526 = INT8_MIN;
int16_t x527 = -1;
uint32_t x532 = 573U;
uint32_t x533 = 799325511U;
static volatile uint32_t x537 = 21735U;
volatile int16_t x550 = -1;
int32_t x551 = -55794865;
int16_t x556 = INT16_MIN;
uint16_t x557 = 11U;
static uint8_t x562 = UINT8_MAX;
volatile uint32_t t117 = 5U;
int8_t x569 = -2;
uint64_t x580 = UINT64_MAX;
int8_t x585 = INT8_MIN;
volatile int64_t t123 = -104032963LL;
uint16_t x596 = 55U;
volatile int16_t x597 = INT16_MAX;
uint16_t x599 = 60U;
int32_t x602 = INT32_MAX;
uint32_t t127 = 429U;
uint32_t x620 = 46U;
int32_t x625 = -1;
int64_t x628 = 1LL;
volatile uint16_t x629 = 224U;
static volatile int32_t x636 = INT32_MAX;
int64_t x641 = INT64_MAX;
int8_t x659 = INT8_MAX;
uint64_t t138 = 1661067049877LLU;
volatile int32_t t140 = 2016;
volatile int8_t x682 = -1;
static uint64_t x684 = 21014200054177LLU;
volatile int32_t x685 = 3252141;
static uint32_t x695 = 64414U;
int8_t x696 = INT8_MAX;
static int32_t x699 = -16;
int8_t x712 = 1;
volatile uint64_t t147 = 529301971103936LLU;
int64_t x713 = INT64_MIN;
int32_t x716 = INT32_MIN;
static int64_t t148 = -535760436621115LL;
uint16_t x717 = 270U;
uint8_t x726 = 10U;
int16_t x727 = INT16_MIN;
uint32_t t151 = 32442U;
int16_t x733 = INT16_MIN;
int64_t x742 = -1037804961509263174LL;
uint8_t x743 = 101U;
int64_t t154 = -20840164647446LL;
volatile int32_t x750 = -121234752;
int32_t x757 = INT32_MAX;
volatile int32_t t157 = 48325093;
int64_t x767 = INT64_MIN;
volatile int64_t t159 = 2293041838LL;
static uint8_t x774 = UINT8_MAX;
volatile uint32_t x777 = UINT32_MAX;
int16_t x784 = INT16_MAX;
uint32_t t163 = 108088936U;
int8_t x792 = INT8_MIN;
int32_t t165 = 79300;
static volatile int64_t x804 = 62948067772LL;
int64_t x811 = -46496897LL;
uint64_t t168 = 3185075336LLU;
uint16_t x816 = 8914U;
volatile int32_t t169 = 7;
static volatile int16_t x829 = INT16_MAX;
int16_t x831 = INT16_MAX;
uint32_t x832 = 112576U;
int8_t x838 = INT8_MIN;
uint64_t x849 = 4805LLU;
int16_t x853 = INT16_MIN;
uint8_t x856 = UINT8_MAX;
uint32_t x872 = 39821U;
static int8_t x876 = 0;
uint64_t x882 = 2492105952LLU;
int16_t x884 = INT16_MAX;
int8_t x898 = 0;
volatile int64_t t187 = -473919377350724767LL;
uint8_t x917 = 0U;
uint64_t x922 = 5080335LLU;
static int8_t x933 = 1;
static volatile int64_t t192 = 22057888661388037LL;
int32_t x937 = -1;
uint32_t x944 = 175080U;
int64_t t195 = 55186272130843LL;
int64_t t197 = -461457996958970LL;
int8_t x963 = INT8_MIN;
uint32_t x967 = UINT32_MAX;
uint16_t x968 = 4164U;


void f0(void) {
    	int64_t x2 = -1LL;
	int16_t x4 = INT16_MAX;
	volatile int64_t t0 = -6932506LL;

    t0 = (x1-((x2^x3)+x4));

    if (t0 != -2147549182LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MAX;
	int16_t x8 = INT16_MAX;
	int32_t t1 = 121;

    t1 = (x5-((x6^x7)+x8));

    if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x14 = -1;
	volatile uint32_t x15 = 859538U;
	static uint32_t x16 = 60U;
	volatile uint32_t t2 = 6348U;

    t2 = (x13-((x14^x15)+x16));

    if (t2 != 856322U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = -1;
	static int8_t x19 = INT8_MIN;
	int8_t x20 = INT8_MAX;

    t3 = (x17-((x18^x19)+x20));

    if (t3 != -238) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MAX;
	int64_t x22 = INT64_MAX;
	int32_t x23 = -570982333;
	int64_t t4 = -10LL;

    t4 = (x21-((x22^x23)+x24));

    if (t4 != 9223372036283826165LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MAX;
	volatile int8_t x26 = -20;
	uint64_t x27 = 76165592171992555LLU;
	int8_t x28 = -1;

    t5 = (x25-((x26^x27)+x28));

    if (t5 != 76165592171992697LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x29 = -206934;
	static volatile int8_t x30 = -1;
	static uint32_t x31 = UINT32_MAX;
	uint32_t x32 = 0U;
	static volatile uint32_t t6 = 8202U;

    t6 = (x29-((x30^x31)+x32));

    if (t6 != 4294760362U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x34 = INT16_MIN;
	int32_t x35 = INT32_MIN;
	volatile int32_t t7 = 209450827;

    t7 = (x33-((x34^x35)+x36));

    if (t7 != -2147450408) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 118109408158045114LLU;
	volatile int16_t x38 = INT16_MIN;
	int16_t x39 = 1;
	int8_t x40 = INT8_MAX;
	volatile uint64_t t8 = 544403318LLU;

    t8 = (x37-((x38^x39)+x40));

    if (t8 != 118109408158077754LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x41 = -120976190846LL;
	int64_t x42 = INT64_MIN;
	volatile uint8_t x43 = UINT8_MAX;
	int64_t x44 = 3922504066080950952LL;
	volatile int64_t t9 = 16420LL;

    t9 = (x41-((x42^x43)+x44));

    if (t9 != 5300867849797633755LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x46 = 140LLU;
	uint8_t x48 = 77U;
	uint64_t t10 = 456LLU;

    t10 = (x45-((x46^x47)+x48));

    if (t10 != 18446744073709551401LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x53 = INT16_MIN;
	static uint64_t x54 = 564663781LLU;
	volatile int32_t x55 = INT32_MIN;
	uint32_t x56 = 378854644U;
	volatile uint64_t t11 = 25817207018029249LLU;

    t11 = (x53-((x54^x55)+x56));

    if (t11 != 1203932455LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x57 = 48U;
	int64_t x58 = 1074091640403428LL;
	int16_t x59 = INT16_MAX;
	int32_t x60 = -260454;

    t12 = (x57-((x58^x59)+x60));

    if (t12 != -1074091640148101LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x61 = 0U;
	uint32_t x62 = 4U;
	int16_t x63 = INT16_MAX;
	int32_t x64 = INT32_MIN;
	uint32_t t13 = 396U;

    t13 = (x61-((x62^x63)+x64));

    if (t13 != 2147450885U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x66 = INT64_MIN;
	int16_t x67 = -70;
	volatile int64_t t14 = 636436LL;

    t14 = (x65-((x66^x67)+x68));

    if (t14 != -9223372036854775307LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x69 = -52;
	int8_t x70 = INT8_MIN;
	volatile int32_t x72 = INT32_MIN;

    t15 = (x69-((x70^x71)+x72));

    if (t15 != 2147477661) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x73 = INT8_MIN;
	volatile uint32_t x75 = 25U;
	int64_t t16 = -336800805041730151LL;

    t16 = (x73-((x74^x75)+x76));

    if (t16 != 166347512650LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = -16228;
	uint16_t x83 = UINT16_MAX;
	int64_t x84 = -7465LL;

    t17 = (x81-((x82^x83)+x84));

    if (t17 != -41531LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x85 = INT64_MAX;
	int16_t x87 = -1;
	uint32_t x88 = 32300U;
	int64_t t18 = 5095692428LL;

    t18 = (x85-((x86^x87)+x88));

    if (t18 != 9223372030293173242LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x89 = -1;
	volatile int16_t x91 = INT16_MAX;
	uint8_t x92 = 4U;
	volatile int32_t t19 = -1276046;

    t19 = (x89-((x90^x91)+x92));

    if (t19 != -32754) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x93 = 65859570690LLU;
	uint8_t x94 = UINT8_MAX;
	int16_t x95 = -1;
	uint64_t t20 = 26482912117085768LLU;

    t20 = (x93-((x94^x95)+x96));

    if (t20 != 65859570871LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x105 = UINT8_MAX;
	volatile int32_t x106 = INT32_MAX;
	int16_t x107 = 1779;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t21 = 0;

    t21 = (x105-((x106^x107)+x108));

    if (t21 != -2147481868) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x109 = 212;
	uint64_t x110 = 6254183598838248LLU;
	uint8_t x111 = 0U;
	uint16_t x112 = UINT16_MAX;
	uint64_t t22 = 52219108LLU;

    t22 = (x109-((x110^x111)+x112));

    if (t22 != 18440489890110648045LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x117 = -1590;
	int64_t x118 = -1LL;
	static volatile int32_t x119 = INT32_MIN;
	static int8_t x120 = -32;
	static volatile int64_t t23 = -3641812LL;

    t23 = (x117-((x118^x119)+x120));

    if (t23 != -2147485205LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x121 = 27LLU;
	static uint8_t x122 = UINT8_MAX;
	int32_t x123 = -10900;
	uint64_t t24 = 55185301615428532LLU;

    t24 = (x121-((x122^x123)+x124));

    if (t24 != 10886LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x126 = 3298225;
	static volatile int16_t x127 = 340;
	static int32_t t25 = 39216;

    t25 = (x125-((x126^x127)+x128));

    if (t25 != -3298605) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x129 = INT16_MIN;
	int64_t x130 = -1LL;
	int8_t x131 = -1;
	uint32_t x132 = UINT32_MAX;

    t26 = (x129-((x130^x131)+x132));

    if (t26 != -4295000063LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x134 = -1;
	uint32_t x136 = 11968U;
	volatile uint32_t t27 = 1809U;

    t27 = (x133-((x134^x135)+x136));

    if (t27 != 4294955365U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x138 = 20681U;
	static int8_t x140 = 0;
	int64_t t28 = 26034077LL;

    t28 = (x137-((x138^x139)+x140));

    if (t28 != -1939364441341257LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x142 = UINT16_MAX;
	uint8_t x143 = 0U;
	uint16_t x144 = 24512U;

    t29 = (x141-((x142^x143)+x144));

    if (t29 != -90048) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x145 = 62;
	int32_t x146 = -316;
	static int16_t x148 = -1;
	int32_t t30 = 3250;

    t30 = (x145-((x146^x147)+x148));

    if (t30 != 326) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x153 = INT16_MIN;
	int64_t x154 = -1LL;
	int16_t x155 = INT16_MIN;
	uint64_t x156 = 210LLU;
	uint64_t t31 = 259LLU;

    t31 = (x153-((x154^x155)+x156));

    if (t31 != 18446744073709485871LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x161 = -112;
	uint8_t x162 = UINT8_MAX;
	uint16_t x163 = UINT16_MAX;
	volatile uint8_t x164 = 5U;
	int32_t t32 = 57;

    t32 = (x161-((x162^x163)+x164));

    if (t32 != -65397) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x169 = 76U;
	uint64_t x170 = 54293LLU;
	uint64_t x171 = 384LLU;
	uint16_t x172 = UINT16_MAX;
	uint64_t t33 = 34289869680979479LLU;

    t33 = (x169-((x170^x171)+x172));

    if (t33 != 18446744073709431480LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x177 = UINT32_MAX;
	uint64_t x178 = UINT64_MAX;
	static int8_t x179 = INT8_MIN;
	uint64_t t34 = 26578LLU;

    t34 = (x177-((x178^x179)+x180));

    if (t34 != 4294967041LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x181 = 0;
	static int32_t x182 = INT32_MIN;
	volatile uint32_t x183 = 342U;
	volatile uint32_t t35 = 3U;

    t35 = (x181-((x182^x183)+x184));

    if (t35 != 4294966955U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x185 = -3;
	int64_t x186 = -1LL;
	static int64_t t36 = -608855LL;

    t36 = (x185-((x186^x187)+x188));

    if (t36 != 91450LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x190 = INT16_MAX;
	int8_t x191 = -1;
	int16_t x192 = INT16_MIN;
	static int32_t t37 = -10371452;

    t37 = (x189-((x190^x191)+x192));

    if (t37 != 65536) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x197 = INT16_MAX;
	int64_t x198 = INT64_MIN;
	int32_t x199 = -24;
	int64_t t38 = 1522536LL;

    t38 = (x197-((x198^x199)+x200));

    if (t38 != -9223372034707259369LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x201 = INT16_MIN;
	int16_t x202 = INT16_MIN;
	int64_t x203 = INT64_MIN;
	volatile uint64_t x204 = 427LLU;
	uint64_t t39 = 4290569895309LLU;

    t39 = (x201-((x202^x203)+x204));

    if (t39 != 9223372036854775381LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x214 = -1LL;
	uint8_t x215 = 22U;
	int64_t x216 = 956LL;
	uint64_t t40 = 266437460982275639LLU;

    t40 = (x213-((x214^x215)+x216));

    if (t40 != 18446744073709550709LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x217 = 2;
	int8_t x218 = -54;
	int8_t x219 = INT8_MIN;
	int64_t x220 = -1LL;
	int64_t t41 = 1LL;

    t41 = (x217-((x218^x219)+x220));

    if (t41 != -71LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x221 = -1;
	static uint16_t x222 = 28504U;
	static int32_t x223 = INT32_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t42 = -24895382;

    t42 = (x221-((x222^x223)+x224));

    if (t42 != -2147422376) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x226 = 637914994908828508LLU;
	static int32_t x227 = -450655;
	int64_t x228 = -42LL;
	static volatile uint64_t t43 = 32857319608388085LLU;

    t43 = (x225-((x226^x227)+x228));

    if (t43 != 637914994888775034LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x229 = UINT32_MAX;
	int16_t x230 = -1;
	static volatile uint8_t x231 = UINT8_MAX;
	int16_t x232 = -1;
	static volatile uint32_t t44 = 7313678U;

    t44 = (x229-((x230^x231)+x232));

    if (t44 != 256U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x237 = -1;
	int8_t x239 = -31;
	int64_t t45 = 0LL;

    t45 = (x237-((x238^x239)+x240));

    if (t45 != 4029348771306143610LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x242 = -1;
	volatile int16_t x244 = INT16_MIN;
	static volatile int64_t t46 = -11827010LL;

    t46 = (x241-((x242^x243)+x244));

    if (t46 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x245 = -2;
	static uint8_t x246 = 1U;
	int32_t x247 = 114993;
	static uint16_t x248 = 9448U;
	volatile int32_t t47 = 34;

    t47 = (x245-((x246^x247)+x248));

    if (t47 != -124442) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x250 = 1LLU;
	uint8_t x251 = UINT8_MAX;
	static volatile int64_t x252 = INT64_MIN;
	volatile uint64_t t48 = 1673LLU;

    t48 = (x249-((x250^x251)+x252));

    if (t48 != 9223372036854787806LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x257 = -1;
	volatile int8_t x258 = INT8_MIN;
	uint32_t x259 = 0U;
	static int16_t x260 = -1;
	uint32_t t49 = 698934U;

    t49 = (x257-((x258^x259)+x260));

    if (t49 != 128U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x261 = 2910U;
	static int64_t x262 = -605762968593781LL;
	int32_t x263 = INT32_MAX;
	uint8_t x264 = UINT8_MAX;
	volatile int64_t t50 = -29LL;

    t50 = (x261-((x262^x263)+x264));

    if (t50 != 605763553748203LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x269 = -3703LL;
	uint32_t x270 = UINT32_MAX;
	static volatile int8_t x271 = 0;
	int64_t t51 = -62053562534LL;

    t51 = (x269-((x270^x271)+x272));

    if (t51 != -3703LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x273 = UINT64_MAX;
	int32_t x274 = INT32_MAX;
	int32_t x275 = INT32_MIN;
	uint16_t x276 = UINT16_MAX;
	static volatile uint64_t t52 = 7615486328060LLU;

    t52 = (x273-((x274^x275)+x276));

    if (t52 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x277 = 118U;
	int8_t x278 = INT8_MIN;
	volatile uint32_t x280 = UINT32_MAX;
	static volatile uint32_t t53 = 26U;

    t53 = (x277-((x278^x279)+x280));

    if (t53 != 184U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x281 = -484224;
	int64_t x282 = INT64_MIN;
	static int8_t x283 = INT8_MIN;
	uint64_t t54 = 14LLU;

    t54 = (x281-((x282^x283)+x284));

    if (t54 != 9223372036854291713LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x289 = UINT64_MAX;
	int8_t x290 = INT8_MAX;
	int8_t x291 = INT8_MIN;
	volatile int64_t x292 = INT64_MAX;

    t55 = (x289-((x290^x291)+x292));

    if (t55 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x293 = 1U;
	int16_t x294 = 1634;
	int8_t x295 = INT8_MIN;
	uint32_t x296 = 91008056U;
	volatile uint32_t t56 = 4699U;

    t56 = (x293-((x294^x295)+x296));

    if (t56 != 4203960807U) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x297 = INT16_MIN;
	int64_t x298 = -1LL;
	int8_t x299 = 9;
	int64_t t57 = 2701476315LL;

    t57 = (x297-((x298^x299)+x300));

    if (t57 != -4295000053LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x301 = 2067;
	int64_t x302 = -1LL;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = INT16_MIN;

    t58 = (x301-((x302^x303)+x304));

    if (t58 != 35091LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x305 = 0;
	int16_t x308 = INT16_MAX;

    t59 = (x305-((x306^x307)+x308));

    if (t59 != 18446744073709523847LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint8_t x309 = 2U;
	static int8_t x310 = INT8_MAX;
	int64_t x311 = INT64_MIN;

    t60 = (x309-((x310^x311)+x312));

    if (t60 != -124LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x314 = 719712U;
	int16_t x315 = 1;
	static uint32_t t61 = 8576415U;

    t61 = (x313-((x314^x315)+x316));

    if (t61 != 4294044568U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x317 = -1;
	static int8_t x319 = INT8_MIN;
	uint8_t x320 = 2U;
	volatile uint64_t t62 = 3LLU;

    t62 = (x317-((x318^x319)+x320));

    if (t62 != 648749039LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x321 = INT32_MAX;
	static int16_t x323 = -1;
	int64_t x324 = INT64_MIN;

    t63 = (x321-((x322^x323)+x324));

    if (t63 != 9223372035222585665LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x325 = -1;
	uint16_t x327 = UINT16_MAX;
	int32_t x328 = -1;

    t64 = (x325-((x326^x327)+x328));

    if (t64 != 65536) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x329 = -23;
	uint16_t x330 = 80U;
	volatile int16_t x331 = -1;
	uint64_t x332 = UINT64_MAX;
	uint64_t t65 = 211463LLU;

    t65 = (x329-((x330^x331)+x332));

    if (t65 != 59LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x337 = UINT32_MAX;
	int64_t x339 = -1LL;
	int64_t t66 = -64793233733LL;

    t66 = (x337-((x338^x339)+x340));

    if (t66 != 4140525643LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x341 = INT16_MIN;
	int8_t x343 = -1;
	int8_t x344 = INT8_MIN;
	static int32_t t67 = 3758;

    t67 = (x341-((x342^x343)+x344));

    if (t67 != -32639) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x345 = 19395U;
	static int32_t x346 = 340;
	int32_t x347 = INT32_MIN;
	uint32_t x348 = 14U;

    t68 = (x345-((x346^x347)+x348));

    if (t68 != 2147502689U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x349 = INT32_MIN;
	uint64_t x350 = 156094664068588LLU;
	int8_t x351 = -1;
	int32_t x352 = INT32_MAX;
	static volatile uint64_t t69 = 33962133008072LLU;

    t69 = (x349-((x350^x351)+x352));

    if (t69 != 156090369101294LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x353 = INT16_MIN;
	int32_t x355 = INT32_MIN;

    t70 = (x353-((x354^x355)+x356));

    if (t70 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x357 = INT64_MIN;
	volatile int32_t x358 = INT32_MIN;
	int64_t t71 = -458660LL;

    t71 = (x357-((x358^x359)+x360));

    if (t71 != -9223372034707292195LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x361 = -1;
	static int16_t x363 = INT16_MIN;
	static volatile int32_t x364 = -302;
	uint64_t t72 = 2900159903083314LLU;

    t72 = (x361-((x362^x363)+x364));

    if (t72 != 3616399534399228LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x367 = 1U;
	uint8_t x368 = UINT8_MAX;
	int32_t t73 = 1371;

    t73 = (x365-((x366^x367)+x368));

    if (t73 != 2147483391) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x369 = INT16_MIN;
	static uint32_t x370 = 16U;
	static int16_t x371 = INT16_MIN;
	int8_t x372 = -1;
	volatile uint32_t t74 = 3996941U;

    t74 = (x369-((x370^x371)+x372));

    if (t74 != 4294967281U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x373 = INT16_MAX;
	volatile uint64_t x374 = 16775004LLU;
	int8_t x375 = 46;
	uint32_t x376 = 13015185U;
	volatile uint64_t t75 = 6912039LLU;

    t75 = (x373-((x374^x375)+x376));

    if (t75 != 18446744073679794172LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x377 = 2U;
	volatile uint8_t x378 = 1U;
	int64_t x380 = -1LL;
	volatile int64_t t76 = 61394849951LL;

    t76 = (x377-((x378^x379)+x380));

    if (t76 != -1124LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x382 = -1;
	static int8_t x383 = INT8_MAX;
	int16_t x384 = 7022;
	static volatile int32_t t77 = -46;

    t77 = (x381-((x382^x383)+x384));

    if (t77 != 2147476753) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x385 = INT32_MIN;
	volatile int16_t x386 = INT16_MIN;
	static volatile uint8_t x387 = 61U;
	int8_t x388 = 13;

    t78 = (x385-((x386^x387)+x388));

    if (t78 != -2147450954) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x389 = -1;
	static volatile int8_t x391 = -1;
	volatile int8_t x392 = INT8_MAX;
	volatile int32_t t79 = 131;

    t79 = (x389-((x390^x391)+x392));

    if (t79 != -123) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x398 = INT32_MIN;
	int8_t x399 = INT8_MAX;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t80 = 4529591U;

    t80 = (x397-((x398^x399)+x400));

    if (t80 != 2147483649U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x401 = INT16_MIN;
	int16_t x402 = INT16_MIN;
	int64_t x403 = 89LL;
	uint16_t x404 = UINT16_MAX;
	volatile int64_t t81 = 959885305958LL;

    t81 = (x401-((x402^x403)+x404));

    if (t81 != -65624LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x405 = 1031U;
	static int32_t x406 = INT32_MIN;
	volatile int16_t x407 = INT16_MIN;

    t82 = (x405-((x406^x407)+x408));

    if (t82 != -2147449848) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x409 = 159LLU;
	int16_t x410 = INT16_MAX;
	uint64_t x411 = 10LLU;
	volatile uint64_t t83 = 3641LLU;

    t83 = (x409-((x410^x411)+x412));

    if (t83 != 9223372036854743210LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x413 = INT8_MIN;
	int64_t x415 = 2411165772654LL;
	int16_t x416 = 477;
	int64_t t84 = -536060130772650478LL;

    t84 = (x413-((x414^x415)+x416));

    if (t84 != -2409935017710LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x417 = INT16_MIN;
	static int16_t x418 = INT16_MIN;
	volatile int64_t x419 = -1LL;
	int32_t x420 = -7065534;

    t85 = (x417-((x418^x419)+x420));

    if (t85 != 6999999LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x422 = 2338U;
	static int32_t x423 = INT32_MIN;
	uint16_t x424 = UINT16_MAX;

    t86 = (x421-((x422^x423)+x424));

    if (t86 != 2081765701) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x425 = INT16_MIN;
	uint16_t x426 = UINT16_MAX;
	static int64_t x427 = -1LL;
	int16_t x428 = -1;
	int64_t t87 = -134589640250939LL;

    t87 = (x425-((x426^x427)+x428));

    if (t87 != 32769LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x429 = 24;
	volatile int64_t x430 = INT64_MIN;
	int16_t x431 = 0;
	volatile int64_t t88 = -53161LL;

    t88 = (x429-((x430^x431)+x432));

    if (t88 != 9223372036854743065LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x433 = 9179008LL;
	volatile uint16_t x434 = 329U;
	static int16_t x435 = -1;
	int16_t x436 = -1;
	volatile int64_t t89 = 8438698879431095LL;

    t89 = (x433-((x434^x435)+x436));

    if (t89 != 9179339LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x437 = 24U;
	int8_t x438 = INT8_MAX;
	uint64_t x439 = UINT64_MAX;
	static uint32_t x440 = 59697U;
	uint64_t t90 = 15997LLU;

    t90 = (x437-((x438^x439)+x440));

    if (t90 != 18446744073709492071LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x445 = 5U;
	uint32_t x446 = UINT32_MAX;
	uint64_t t91 = 2167050624584831LLU;

    t91 = (x445-((x446^x447)+x448));

    if (t91 != 9223372032559971664LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x453 = INT64_MAX;
	uint16_t x454 = 57U;
	uint16_t x455 = 2U;
	volatile int64_t t92 = 818433615812LL;

    t92 = (x453-((x454^x455)+x456));

    if (t92 != 9223372036854775719LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x457 = 3U;
	static int64_t x458 = 1165377LL;
	static int8_t x459 = -11;
	int16_t x460 = INT16_MAX;

    t93 = (x457-((x458^x459)+x460));

    if (t93 != 1132624LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x461 = 7712770614214780LLU;
	int8_t x462 = INT8_MAX;
	static volatile uint8_t x463 = 1U;
	int64_t x464 = -27385118043626606LL;
	uint64_t t94 = 42168305LLU;

    t94 = (x461-((x462^x463)+x464));

    if (t94 != 35097888657841260LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x465 = 1LL;
	uint8_t x466 = 108U;
	static uint8_t x468 = 31U;
	int64_t t95 = -9296262356LL;

    t95 = (x465-((x466^x467)+x468));

    if (t95 != 9223372036854775670LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x469 = -2798LL;
	uint8_t x472 = UINT8_MAX;
	volatile int64_t t96 = 117480897644LL;

    t96 = (x469-((x470^x471)+x472));

    if (t96 != -33091LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x473 = UINT8_MAX;
	volatile int16_t x476 = INT16_MIN;
	int64_t t97 = -16360994119LL;

    t97 = (x473-((x474^x475)+x476));

    if (t97 != -9223372036854742657LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x477 = INT8_MIN;
	volatile int32_t x478 = INT32_MAX;
	static int64_t x479 = INT64_MIN;
	static volatile int32_t x480 = 1;
	int64_t t98 = -40761841LL;

    t98 = (x477-((x478^x479)+x480));

    if (t98 != 9223372034707292032LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x481 = 24828915793LL;
	int8_t x482 = INT8_MIN;
	int16_t x483 = 7020;
	volatile uint8_t x484 = UINT8_MAX;
	volatile int64_t t99 = 16140466358802LL;

    t99 = (x481-((x482^x483)+x484));

    if (t99 != 24828922470LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x485 = -1LL;
	static int8_t x486 = INT8_MIN;
	int32_t x487 = 0;
	uint64_t x488 = UINT64_MAX;
	static uint64_t t100 = 3422023777831LLU;

    t100 = (x485-((x486^x487)+x488));

    if (t100 != 128LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x489 = INT16_MIN;
	volatile int8_t x490 = INT8_MAX;
	int32_t x491 = INT32_MIN;
	uint8_t x492 = 1U;
	volatile int32_t t101 = -5;

    t101 = (x489-((x490^x491)+x492));

    if (t101 != 2147450752) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x493 = 455;
	int8_t x494 = -1;
	int16_t x496 = -4787;
	volatile int64_t t102 = -21476653237062LL;

    t102 = (x493-((x494^x495)+x496));

    if (t102 != 4014115009288LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x509 = -1LL;
	int32_t x510 = INT32_MAX;
	uint16_t x511 = 21U;
	int64_t x512 = 4266941LL;
	volatile int64_t t103 = 15973777LL;

    t103 = (x509-((x510^x511)+x512));

    if (t103 != -2151750568LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x513 = -1755;
	int8_t x515 = -38;
	int32_t t104 = -14;

    t104 = (x513-((x514^x515)+x516));

    if (t104 != -1697) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x517 = INT32_MAX;
	uint8_t x518 = UINT8_MAX;
	volatile int32_t t105 = 20;

    t105 = (x517-((x518^x519)+x520));

    if (t105 != 2147483404) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x521 = UINT32_MAX;
	int64_t x522 = 87900574377180LL;
	int8_t x524 = -4;
	volatile int64_t t106 = -19462666636247LL;

    t106 = (x521-((x522^x523)+x524));

    if (t106 != -87896279358240LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x525 = 875U;
	static int16_t x528 = INT16_MIN;
	volatile int32_t t107 = 28197;

    t107 = (x525-((x526^x527)+x528));

    if (t107 != 33516) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x529 = 123;
	static int16_t x530 = INT16_MIN;
	uint32_t x531 = UINT32_MAX;
	volatile uint32_t t108 = 37190247U;

    t108 = (x529-((x530^x531)+x532));

    if (t108 != 4294934079U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x534 = 21326U;
	uint32_t x535 = 763636U;
	int16_t x536 = INT16_MAX;
	static volatile uint32_t t109 = 28U;

    t109 = (x533-((x534^x535)+x536));

    if (t109 != 798508942U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x538 = 77U;
	int64_t x539 = INT64_MAX;
	uint64_t x540 = 119951318LLU;
	uint64_t t110 = 738610848432026754LLU;

    t110 = (x537-((x538^x539)+x540));

    if (t110 != 9223372036734846303LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x541 = -1LL;
	uint16_t x542 = 291U;
	uint64_t x543 = 8564450LLU;
	volatile uint8_t x544 = 22U;
	volatile uint64_t t111 = 15LLU;

    t111 = (x541-((x542^x543)+x544));

    if (t111 != 18446744073700986920LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x545 = INT16_MIN;
	volatile int16_t x546 = -7396;
	uint16_t x547 = UINT16_MAX;
	volatile uint32_t x548 = 394770211U;
	uint32_t t112 = 41U;

    t112 = (x545-((x546^x547)+x548));

    if (t112 != 3900222458U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x549 = 25;
	static int16_t x552 = INT16_MIN;
	static volatile int32_t t113 = 384101;

    t113 = (x549-((x550^x551)+x552));

    if (t113 != -55762071) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x553 = 1;
	static int32_t x554 = 885195630;
	int32_t x555 = INT32_MIN;
	volatile int32_t t114 = -3807;

    t114 = (x553-((x554^x555)+x556));

    if (t114 != 1262320787) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x558 = -1;
	volatile int32_t x559 = 9869446;
	uint16_t x560 = 6046U;
	volatile int32_t t115 = 245;

    t115 = (x557-((x558^x559)+x560));

    if (t115 != 9863412) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x561 = UINT16_MAX;
	int8_t x563 = INT8_MIN;
	static int16_t x564 = 25;
	static volatile int32_t t116 = 46;

    t116 = (x561-((x562^x563)+x564));

    if (t116 != 65639) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x565 = UINT32_MAX;
	uint32_t x566 = 56U;
	static int16_t x567 = INT16_MAX;
	int32_t x568 = -1;

    t117 = (x565-((x566^x567)+x568));

    if (t117 != 4294934585U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x570 = INT8_MIN;
	volatile int64_t x571 = 1403609040808314LL;
	uint16_t x572 = UINT16_MAX;
	volatile int64_t t118 = 1935LL;

    t118 = (x569-((x570^x571)+x572));

    if (t118 != 1403609040742661LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x573 = UINT16_MAX;
	int8_t x574 = 27;
	int16_t x575 = -1;
	uint8_t x576 = 0U;
	volatile int32_t t119 = 11629343;

    t119 = (x573-((x574^x575)+x576));

    if (t119 != 65563) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x577 = 5662445372178916746LLU;
	int64_t x578 = INT64_MIN;
	static volatile int32_t x579 = -1;
	uint64_t t120 = 37323634173439LLU;

    t120 = (x577-((x578^x579)+x580));

    if (t120 != 14885817409033692556LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x581 = INT32_MIN;
	int64_t x582 = -1LL;
	int64_t x583 = -11LL;
	int8_t x584 = INT8_MIN;
	int64_t t121 = -43606090922925LL;

    t121 = (x581-((x582^x583)+x584));

    if (t121 != -2147483530LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x586 = 230676;
	int32_t x587 = 2870354;
	static int8_t x588 = -13;
	static volatile int32_t t122 = -6027;

    t122 = (x585-((x586^x587)+x588));

    if (t122 != -2640313) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x589 = 53;
	uint8_t x590 = 51U;
	uint16_t x591 = 181U;
	int64_t x592 = -15358663434503LL;

    t123 = (x589-((x590^x591)+x592));

    if (t123 != 15358663434422LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x593 = 374U;
	uint32_t x594 = 14U;
	int16_t x595 = INT16_MAX;
	volatile uint32_t t124 = 87552U;

    t124 = (x593-((x594^x595)+x596));

    if (t124 != 4294934862U) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x598 = UINT16_MAX;
	uint8_t x600 = 70U;
	volatile int32_t t125 = -7926;

    t125 = (x597-((x598^x599)+x600));

    if (t125 != -32778) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x601 = INT64_MIN;
	uint32_t x603 = UINT32_MAX;
	int32_t x604 = INT32_MIN;
	static int64_t t126 = INT64_MIN;

    t126 = (x601-((x602^x603)+x604));

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x609 = UINT16_MAX;
	volatile uint32_t x610 = UINT32_MAX;
	int8_t x611 = -4;
	int16_t x612 = -2;

    t127 = (x609-((x610^x611)+x612));

    if (t127 != 65534U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x613 = UINT32_MAX;
	int32_t x614 = -1;
	uint8_t x615 = UINT8_MAX;
	volatile uint32_t x616 = 38U;
	static uint32_t t128 = 2U;

    t128 = (x613-((x614^x615)+x616));

    if (t128 != 217U) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x617 = INT64_MAX;
	uint8_t x618 = UINT8_MAX;
	static int16_t x619 = 52;
	volatile int64_t t129 = 2369848909LL;

    t129 = (x617-((x618^x619)+x620));

    if (t129 != 9223372036854775558LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x621 = -28807LL;
	static int32_t x622 = INT32_MIN;
	static uint16_t x623 = UINT16_MAX;
	int32_t x624 = INT32_MAX;
	int64_t t130 = 12258337152516160LL;

    t130 = (x621-((x622^x623)+x624));

    if (t130 != -94341LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x626 = INT32_MIN;
	static uint16_t x627 = 2168U;
	volatile int64_t t131 = 0LL;

    t131 = (x625-((x626^x627)+x628));

    if (t131 != 2147481478LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x630 = 74U;
	static int32_t x631 = 1;
	static uint8_t x632 = 13U;
	volatile int32_t t132 = 0;

    t132 = (x629-((x630^x631)+x632));

    if (t132 != 136) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x633 = 7U;
	uint32_t x634 = 1157032752U;
	int32_t x635 = INT32_MIN;
	volatile uint32_t t133 = 7780091U;

    t133 = (x633-((x634^x635)+x636));

    if (t133 != 3137934552U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x642 = 33U;
	volatile uint16_t x643 = UINT16_MAX;
	volatile uint64_t x644 = 186983066568675275LLU;
	uint64_t t134 = 2706LLU;

    t134 = (x641-((x642^x643)+x644));

    if (t134 != 9036388970286035030LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x645 = 1851870185LLU;
	uint32_t x646 = 22469671U;
	int16_t x647 = 33;
	static int64_t x648 = -1LL;
	uint64_t t135 = 3470847LLU;

    t135 = (x645-((x646^x647)+x648));

    if (t135 != 1829400548LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x649 = 2U;
	int64_t x650 = -51219241LL;
	volatile int8_t x651 = INT8_MAX;
	int32_t x652 = INT32_MAX;
	static volatile int64_t t136 = 110101886961LL;

    t136 = (x649-((x650^x651)+x652));

    if (t136 != -2096264357LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x653 = 2031738U;
	int64_t x654 = INT64_MAX;
	int32_t x655 = 264429445;
	int32_t x656 = -2778793;
	volatile int64_t t137 = -976687238168672LL;

    t137 = (x653-((x654^x655)+x656));

    if (t137 != -9223372036585535831LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x657 = UINT64_MAX;
	int32_t x658 = 16308;
	int64_t x660 = -459LL;

    t138 = (x657-((x658^x659)+x660));

    if (t138 != 18446744073709535743LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x661 = 15225U;
	int32_t x662 = INT32_MIN;
	volatile int32_t x663 = INT32_MIN;
	int64_t x664 = -1LL;
	int64_t t139 = 1100542614LL;

    t139 = (x661-((x662^x663)+x664));

    if (t139 != 15226LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int8_t x669 = INT8_MIN;
	static int8_t x670 = -3;
	int8_t x671 = -6;
	static int32_t x672 = 3;

    t140 = (x669-((x670^x671)+x672));

    if (t140 != -138) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x677 = INT8_MIN;
	int16_t x678 = -1;
	uint32_t x679 = 278U;
	volatile int32_t x680 = INT32_MAX;
	uint32_t t141 = 975171990U;

    t141 = (x677-((x678^x679)+x680));

    if (t141 != 2147483800U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x681 = -807299825;
	int16_t x683 = INT16_MIN;
	uint64_t t142 = 6994546025437LLU;

    t142 = (x681-((x682^x683)+x684));

    if (t142 != 18446723058702164847LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x686 = INT32_MIN;
	int64_t x687 = -1LL;
	volatile int64_t x688 = -1LL;
	volatile int64_t t143 = -42214LL;

    t143 = (x685-((x686^x687)+x688));

    if (t143 != -2144231505LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x693 = UINT64_MAX;
	int32_t x694 = 16936;
	volatile uint64_t t144 = 1425LLU;

    t144 = (x693-((x694^x695)+x696));

    if (t144 != 18446744073709503946LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x697 = UINT32_MAX;
	int8_t x698 = -1;
	volatile int16_t x700 = INT16_MAX;
	uint32_t t145 = 178821054U;

    t145 = (x697-((x698^x699)+x700));

    if (t145 != 4294934513U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x705 = 22348U;
	int8_t x706 = INT8_MIN;
	int64_t x707 = INT64_MIN;
	int8_t x708 = -1;
	volatile int64_t t146 = 14450LL;

    t146 = (x705-((x706^x707)+x708));

    if (t146 != -9223372036854753331LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x709 = -1LL;
	uint64_t x710 = 10LLU;
	static uint32_t x711 = 9U;

    t147 = (x709-((x710^x711)+x712));

    if (t147 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint16_t x714 = 7U;
	int64_t x715 = -1LL;

    t148 = (x713-((x714^x715)+x716));

    if (t148 != -9223372034707292152LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x718 = INT32_MIN;
	int8_t x719 = -1;
	int64_t x720 = INT64_MIN;
	int64_t t149 = 6456LL;

    t149 = (x717-((x718^x719)+x720));

    if (t149 != 9223372034707292431LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x721 = INT8_MIN;
	int64_t x722 = INT64_MIN;
	int64_t x723 = INT64_MAX;
	static uint64_t x724 = 40339LLU;
	volatile uint64_t t150 = 726362143022890LLU;

    t150 = (x721-((x722^x723)+x724));

    if (t150 != 18446744073709511150LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x725 = UINT32_MAX;
	uint8_t x728 = 27U;

    t151 = (x725-((x726^x727)+x728));

    if (t151 != 32730U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x734 = 0;
	int64_t x735 = INT64_MIN;
	volatile int8_t x736 = 7;
	volatile int64_t t152 = 0LL;

    t152 = (x733-((x734^x735)+x736));

    if (t152 != 9223372036854743033LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x737 = UINT16_MAX;
	int8_t x738 = -1;
	uint64_t x739 = 3288LLU;
	static uint8_t x740 = UINT8_MAX;
	uint64_t t153 = 16LLU;

    t153 = (x737-((x738^x739)+x740));

    if (t153 != 68569LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x741 = INT16_MAX;
	int64_t x744 = INT64_MAX;

    t154 = (x741-((x742^x743)+x744));

    if (t154 != -8185567075345479903LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x745 = INT8_MIN;
	int8_t x746 = INT8_MIN;
	int64_t x747 = -32424LL;
	static int32_t x748 = INT32_MIN;
	int64_t t155 = -417793853780582767LL;

    t155 = (x745-((x746^x747)+x748));

    if (t155 != 2147451048LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x749 = -1LL;
	static int64_t x751 = INT64_MAX;
	int32_t x752 = 28300;
	int64_t t156 = -33332LL;

    t156 = (x749-((x750^x751)+x752));

    if (t156 != 9223372036733512756LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x758 = INT32_MIN;
	static int16_t x759 = INT16_MIN;
	volatile uint8_t x760 = UINT8_MAX;

    t157 = (x757-((x758^x759)+x760));

    if (t157 != 32512) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x761 = 26;
	uint64_t x762 = UINT64_MAX;
	uint8_t x763 = 0U;
	int64_t x764 = INT64_MIN;
	volatile uint64_t t158 = 7148966203286677LLU;

    t158 = (x761-((x762^x763)+x764));

    if (t158 != 9223372036854775835LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x765 = 11775U;
	int32_t x766 = INT32_MAX;
	int16_t x768 = -1;

    t159 = (x765-((x766^x767)+x768));

    if (t159 != 9223372034707303937LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x769 = -1;
	volatile int32_t x770 = -67450;
	volatile int32_t x771 = INT32_MAX;
	static volatile int64_t x772 = -1LL;
	int64_t t160 = -260LL;

    t160 = (x769-((x770^x771)+x772));

    if (t160 != 2147416199LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x773 = -1;
	static uint16_t x775 = 664U;
	int64_t x776 = -1LL;
	volatile int64_t t161 = 256047973016656LL;

    t161 = (x773-((x774^x775)+x776));

    if (t161 != -615LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x778 = -1LL;
	int8_t x779 = -1;
	static volatile int64_t x780 = INT64_MAX;
	int64_t t162 = 348316656529762773LL;

    t162 = (x777-((x778^x779)+x780));

    if (t162 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x781 = UINT32_MAX;
	int32_t x782 = 386914449;
	int8_t x783 = INT8_MIN;

    t163 = (x781-((x782^x783)+x784));

    if (t163 != 386881775U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x785 = 4;
	uint64_t x786 = 2441LLU;
	int64_t x787 = 25LL;
	static volatile uint64_t x788 = UINT64_MAX;
	volatile uint64_t t164 = 940857398697067942LLU;

    t164 = (x785-((x786^x787)+x788));

    if (t164 != 18446744073709549173LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x789 = INT16_MIN;
	int8_t x790 = INT8_MIN;
	uint16_t x791 = 14U;

    t165 = (x789-((x790^x791)+x792));

    if (t165 != -32526) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x793 = UINT8_MAX;
	uint8_t x794 = 17U;
	int32_t x795 = -127345;
	static volatile int8_t x796 = INT8_MIN;
	volatile int32_t t166 = -10;

    t166 = (x793-((x794^x795)+x796));

    if (t166 != 127713) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x801 = 33469743;
	int8_t x802 = 7;
	volatile int64_t x803 = INT64_MIN;
	static volatile int64_t t167 = -1710409LL;

    t167 = (x801-((x802^x803)+x804));

    if (t167 != 9223371973940177772LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint64_t x809 = UINT64_MAX;
	int32_t x810 = 15505479;
	uint16_t x812 = 31267U;

    t168 = (x809-((x810^x811)+x812));

    if (t168 != 36268708LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x813 = -1;
	volatile int16_t x814 = INT16_MAX;
	int8_t x815 = INT8_MIN;

    t169 = (x813-((x814^x815)+x816));

    if (t169 != 23726) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x817 = 193774245179LL;
	volatile int16_t x818 = -482;
	int8_t x819 = -9;
	int16_t x820 = 30;
	int64_t t170 = 242LL;

    t170 = (x817-((x818^x819)+x820));

    if (t170 != 193774244660LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x821 = 1;
	static uint8_t x822 = 0U;
	uint8_t x823 = UINT8_MAX;
	uint16_t x824 = UINT16_MAX;
	volatile int32_t t171 = 770;

    t171 = (x821-((x822^x823)+x824));

    if (t171 != -65789) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x825 = 2000U;
	int16_t x826 = -1;
	uint16_t x827 = 133U;
	uint16_t x828 = 579U;
	static volatile int32_t t172 = -6;

    t172 = (x825-((x826^x827)+x828));

    if (t172 != 1555) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x830 = 6645U;
	static volatile uint32_t t173 = 54238U;

    t173 = (x829-((x830^x831)+x832));

    if (t173 != 4294861365U) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x837 = -1LL;
	uint64_t x839 = 11616074925206LLU;
	volatile uint32_t x840 = UINT32_MAX;
	static uint64_t t174 = 950804037879075LLU;

    t174 = (x837-((x838^x839)+x840));

    if (t174 != 11611779957994LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x841 = -1LL;
	uint64_t x842 = 192184LLU;
	int64_t x843 = INT64_MAX;
	int8_t x844 = INT8_MAX;
	uint64_t t175 = 15392393704005LLU;

    t175 = (x841-((x842^x843)+x844));

    if (t175 != 9223372036854967865LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x845 = INT16_MIN;
	uint16_t x846 = 505U;
	int32_t x847 = 160;
	volatile int16_t x848 = INT16_MIN;
	int32_t t176 = -210;

    t176 = (x845-((x846^x847)+x848));

    if (t176 != -345) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x850 = -519;
	int32_t x851 = -1;
	static int64_t x852 = -1LL;
	volatile uint64_t t177 = 236430295109963839LLU;

    t177 = (x849-((x850^x851)+x852));

    if (t177 != 4288LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x854 = INT64_MIN;
	uint64_t x855 = 824945LLU;
	uint64_t t178 = 5562799163998LLU;

    t178 = (x853-((x854^x855)+x856));

    if (t178 != 9223372036853917840LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x857 = UINT16_MAX;
	uint32_t x858 = 167987U;
	int16_t x859 = INT16_MAX;
	volatile int16_t x860 = -1008;
	volatile uint32_t t179 = 986346U;

    t179 = (x857-((x858^x859)+x860));

    if (t179 != 4294841379U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x861 = INT8_MAX;
	uint32_t x862 = UINT32_MAX;
	uint8_t x863 = 1U;
	int16_t x864 = INT16_MIN;
	volatile uint32_t t180 = 65422571U;

    t180 = (x861-((x862^x863)+x864));

    if (t180 != 32897U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x869 = -295;
	uint64_t x870 = 357LLU;
	uint32_t x871 = 869111609U;
	volatile uint64_t t181 = 1047391984539LLU;

    t181 = (x869-((x870^x871)+x872));

    if (t181 != 18446744072840400112LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x873 = 1904762321997693LLU;
	int32_t x874 = -8143064;
	static int32_t x875 = INT32_MIN;
	static volatile uint64_t t182 = 1032835595076LLU;

    t182 = (x873-((x874^x875)+x876));

    if (t182 != 1904760182657109LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x877 = 63LL;
	uint16_t x878 = 3U;
	volatile int16_t x879 = -6028;
	uint32_t x880 = 50193487U;
	volatile int64_t t183 = -21LL;

    t183 = (x877-((x878^x879)+x880));

    if (t183 != -50187399LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x881 = 11926U;
	int16_t x883 = INT16_MIN;
	volatile uint64_t t184 = 57184787LLU;

    t184 = (x881-((x882^x883)+x884));

    if (t184 != 2492115383LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x889 = 0U;
	volatile int8_t x890 = INT8_MAX;
	volatile uint32_t x891 = 681U;
	volatile int64_t x892 = -3LL;
	static int64_t t185 = -9970LL;

    t185 = (x889-((x890^x891)+x892));

    if (t185 != -723LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x897 = -1LL;
	uint64_t x899 = 32592250025556LLU;
	volatile uint8_t x900 = 1U;
	volatile uint64_t t186 = 2524LLU;

    t186 = (x897-((x898^x899)+x900));

    if (t186 != 18446711481459526058LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x905 = 2817U;
	int64_t x906 = -1LL;
	int32_t x907 = -28;
	int32_t x908 = -6891192;

    t187 = (x905-((x906^x907)+x908));

    if (t187 != 6893982LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x918 = INT64_MAX;
	int16_t x919 = INT16_MIN;
	volatile uint16_t x920 = UINT16_MAX;
	static volatile int64_t t188 = -117567267LL;

    t188 = (x917-((x918^x919)+x920));

    if (t188 != 9223372036854677506LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x921 = 3U;
	volatile int16_t x923 = INT16_MAX;
	int64_t x924 = 1798LL;
	volatile uint64_t t189 = 7724382910LLU;

    t189 = (x921-((x922^x923)+x924));

    if (t189 != 18446744073704439309LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x925 = 7U;
	static int64_t x926 = 157229577767425LL;
	uint64_t x927 = UINT64_MAX;
	int32_t x928 = INT32_MIN;
	volatile uint64_t t190 = 15518949383568401LLU;

    t190 = (x925-((x926^x927)+x928));

    if (t190 != 157231725251081LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x929 = INT8_MAX;
	uint32_t x930 = 14U;
	int32_t x931 = -44980;
	int8_t x932 = INT8_MIN;
	static volatile uint32_t t191 = 24U;

    t191 = (x929-((x930^x931)+x932));

    if (t191 != 45245U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x934 = -1;
	int64_t x935 = -1LL;
	uint8_t x936 = 1U;

    t192 = (x933-((x934^x935)+x936));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x938 = INT16_MIN;
	static volatile uint32_t x939 = 1021772U;
	volatile uint8_t x940 = 95U;
	uint32_t t193 = 2778U;

    t193 = (x937-((x938^x939)+x940));

    if (t193 != 1042516U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x941 = UINT8_MAX;
	int64_t x942 = INT64_MIN;
	volatile uint32_t x943 = 732U;
	volatile int64_t t194 = -42846399427724332LL;

    t194 = (x941-((x942^x943)+x944));

    if (t194 != 9223372036854600251LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x945 = INT32_MAX;
	int64_t x946 = INT64_MIN;
	int16_t x947 = -1;
	int64_t x948 = -1LL;

    t195 = (x945-((x946^x947)+x948));

    if (t195 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x953 = -36849771678968382LL;
	int32_t x954 = INT32_MAX;
	static uint16_t x955 = 68U;
	static uint64_t x956 = UINT64_MAX;
	volatile uint64_t t196 = 55752992779LLU;

    t196 = (x953-((x954^x955)+x956));

    if (t196 != 18409894299883099656LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x957 = 0;
	volatile int32_t x958 = -7;
	int32_t x959 = INT32_MAX;
	int64_t x960 = -1918271155342906523LL;

    t197 = (x957-((x958^x959)+x960));

    if (t197 != 1918271157490390165LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x961 = -1;
	uint16_t x962 = UINT16_MAX;
	int64_t x964 = -1LL;
	volatile int64_t t198 = -262285982948120395LL;

    t198 = (x961-((x962^x963)+x964));

    if (t198 != 65409LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x965 = -10LL;
	volatile int64_t x966 = -1LL;
	int64_t t199 = -38377165LL;

    t199 = (x965-((x966^x967)+x968));

    if (t199 != 4294963122LL) { NG(); } else { ; }
	
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

