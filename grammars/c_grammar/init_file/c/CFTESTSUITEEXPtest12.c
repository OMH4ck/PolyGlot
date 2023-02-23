
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

uint16_t x3 = 27024U;
int8_t x13 = -1;
int16_t x16 = INT16_MIN;
int32_t t1 = 0;
int8_t x23 = INT8_MIN;
volatile int64_t t4 = 0LL;
static int32_t x45 = INT32_MAX;
uint8_t x47 = UINT8_MAX;
int8_t x49 = INT8_MIN;
uint8_t x54 = 1U;
volatile uint8_t x56 = 15U;
volatile int16_t x60 = INT16_MIN;
int64_t x61 = 2820772631853LL;
int32_t x63 = INT32_MIN;
int8_t x65 = INT8_MAX;
static volatile int8_t x68 = INT8_MAX;
int32_t x75 = -23830;
uint16_t x80 = 6157U;
volatile uint64_t x83 = UINT64_MAX;
volatile int8_t x84 = -1;
int32_t x85 = 9;
volatile int8_t x87 = INT8_MIN;
int32_t t15 = -41809221;
volatile uint64_t x90 = 13910033881886386LLU;
int32_t x92 = -723986685;
int32_t x94 = 11;
static volatile uint32_t x97 = 2201345U;
uint32_t t18 = 832997574U;
int64_t x103 = -83995178102992362LL;
uint64_t t19 = 63908112829LLU;
uint16_t x109 = 2U;
volatile uint64_t t22 = 15898218LLU;
int32_t x125 = INT32_MIN;
int8_t x128 = INT8_MIN;
static int16_t x129 = INT16_MIN;
uint8_t x136 = UINT8_MAX;
static int64_t t26 = 2008593120LL;
int64_t x137 = INT64_MIN;
volatile uint8_t x139 = 10U;
uint8_t x151 = 0U;
int32_t x153 = INT32_MIN;
int8_t x155 = -1;
int16_t x156 = 5529;
static uint64_t x162 = UINT64_MAX;
uint16_t x166 = 2055U;
volatile uint32_t x177 = 113U;
int32_t x210 = INT32_MIN;
int8_t x211 = 14;
uint32_t x212 = 54265U;
volatile uint32_t t40 = 17120024U;
static int8_t x220 = -1;
static uint64_t t42 = 119757LLU;
int8_t x229 = -23;
volatile int32_t t45 = -8588879;
uint32_t t46 = 873U;
volatile int64_t x249 = -8LL;
int8_t x253 = INT8_MAX;
static volatile uint64_t t52 = 195983910918598LLU;
uint32_t x274 = UINT32_MAX;
uint16_t x279 = 25731U;
int32_t t55 = 10076;
int16_t x289 = -1;
int32_t x291 = INT32_MAX;
static int32_t x292 = -1;
volatile int32_t x297 = INT32_MAX;
uint64_t x302 = 276671624181747LLU;
int32_t x304 = 1;
volatile uint64_t t59 = 10733829331343LLU;
int16_t x312 = -8973;
int32_t x313 = INT32_MIN;
uint32_t x328 = UINT32_MAX;
volatile uint16_t x335 = 2253U;
int32_t x342 = INT32_MIN;
int64_t x343 = INT64_MAX;
uint16_t x353 = UINT16_MAX;
volatile int32_t t69 = 0;
uint64_t x372 = 44511053423464850LLU;
static int16_t x374 = 6709;
int64_t x382 = 1644LL;
volatile int8_t x387 = INT8_MIN;
static int8_t x388 = -1;
uint8_t x390 = UINT8_MAX;
int8_t x392 = INT8_MIN;
volatile int64_t t79 = 3679594248LL;
volatile uint64_t t80 = 503946583029983LLU;
static uint8_t x410 = 44U;
uint16_t x411 = UINT16_MAX;
static volatile int32_t x415 = -30981438;
int8_t x416 = INT8_MAX;
volatile int32_t x423 = -1;
volatile uint64_t t85 = 2605350320517208800LLU;
uint32_t x442 = 27209U;
int8_t x446 = -1;
uint32_t t89 = 40968463U;
static int8_t x453 = INT8_MAX;
uint64_t t91 = 1931667LLU;
volatile int32_t x463 = -255;
volatile int32_t t92 = -85;
uint8_t x466 = UINT8_MAX;
int64_t x467 = INT64_MIN;
volatile int8_t x470 = INT8_MAX;
static volatile int8_t x471 = -1;
volatile uint32_t x472 = UINT32_MAX;
int64_t x473 = INT64_MIN;
volatile uint32_t x476 = 17341U;
static int32_t x479 = -1;
volatile int32_t t96 = 1017470920;
uint8_t x482 = 3U;
volatile uint8_t x483 = 1U;
uint8_t x488 = 1U;
int8_t x492 = 0;
static int8_t x495 = -1;
volatile int8_t x502 = -1;
volatile int64_t t103 = -357621230871LL;
volatile int64_t x515 = -1LL;
int32_t x517 = INT32_MAX;
uint16_t x529 = 7U;
volatile uint32_t x531 = 1U;
uint16_t x532 = 3U;
int64_t t110 = -25335282695LL;
uint64_t t112 = 103LLU;
int64_t x549 = -56962627LL;
static uint64_t x563 = 2LLU;
volatile int8_t x567 = -31;
int16_t x568 = -1;
uint8_t x569 = 30U;
uint64_t x571 = 4114436LLU;
static int16_t x575 = INT16_MIN;
int16_t x576 = INT16_MIN;
static int16_t x582 = -14;
uint8_t x584 = UINT8_MAX;
int32_t x586 = -1;
volatile int64_t t120 = 17111854544LL;
volatile int8_t x599 = INT8_MIN;
uint64_t x603 = UINT64_MAX;
int64_t x619 = -3139597902255563183LL;
volatile uint8_t x621 = 14U;
uint8_t x627 = 76U;
uint64_t x631 = UINT64_MAX;
uint64_t t128 = 7802068649726289147LLU;
int16_t x634 = INT16_MAX;
uint32_t x635 = UINT32_MAX;
volatile uint64_t x645 = 32760717023LLU;
volatile int32_t x655 = -75988162;
volatile int64_t t133 = -90787791LL;
uint32_t t134 = 12U;
int32_t x662 = -1;
uint8_t x664 = UINT8_MAX;
uint8_t x667 = 4U;
uint32_t x671 = 485480633U;
volatile int16_t x676 = INT16_MIN;
int64_t x679 = INT64_MIN;
volatile int64_t t139 = 188573904LL;
int16_t x683 = -1;
static uint8_t x694 = 50U;
uint32_t x696 = UINT32_MAX;
uint32_t x702 = 34774U;
static int32_t x705 = INT32_MIN;
volatile int8_t x707 = INT8_MIN;
int16_t x708 = INT16_MAX;
volatile int32_t t145 = 3059;
static volatile uint32_t x713 = 1898293337U;
uint32_t x715 = 57367U;
int64_t x720 = -1LL;
uint32_t x723 = 91180068U;
volatile uint8_t x726 = 44U;
int64_t x735 = -6038273416LL;
volatile uint32_t x737 = 49186U;
uint16_t x738 = 52U;
int16_t x742 = 2;
int8_t x749 = INT8_MIN;
uint8_t x755 = UINT8_MAX;
uint32_t x756 = 1297U;
uint16_t x779 = 252U;
uint8_t x781 = 1U;
static int64_t x786 = INT64_MIN;
volatile int16_t x789 = INT16_MAX;
volatile int64_t t160 = -369958162929684LL;
static int64_t x808 = -1298479262646801LL;
static int32_t x810 = -6660350;
uint8_t x814 = UINT8_MAX;
int8_t x817 = INT8_MIN;
static int32_t x820 = INT32_MIN;
int16_t x821 = -343;
static int64_t x826 = -698773LL;
int64_t t168 = -713930567379222LL;
int32_t x831 = 6;
static uint64_t x844 = 13073990LLU;
uint16_t x849 = UINT16_MAX;
int64_t x861 = 12128609908987816LL;
uint16_t x870 = 3531U;
int64_t x873 = INT64_MIN;
static volatile int16_t x880 = -8943;
uint32_t x892 = UINT32_MAX;
volatile int32_t x897 = -1;
uint8_t x907 = 63U;
int64_t t188 = -1LL;
uint16_t x937 = UINT16_MAX;
int16_t x949 = INT16_MAX;
int16_t x951 = -1;
static uint64_t x959 = 3872829118564191LLU;
int16_t x962 = INT16_MAX;
volatile int16_t x963 = 4;
int16_t x969 = -1;
static volatile int64_t x973 = INT64_MIN;
int32_t t197 = 35868;
static volatile int32_t x984 = INT32_MIN;


void f0(void) {
    	int8_t x1 = 0;
	int32_t x2 = INT32_MIN;
	uint32_t x4 = 367551U;
	uint32_t t0 = 15U;

    t0 = (x1&((x2+x3)+x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x14 = -1;
	int8_t x15 = INT8_MIN;

    t1 = (x13&((x14+x15)+x16));

    if (t1 != -32897) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x21 = 3U;
	static uint8_t x22 = 3U;
	uint64_t x24 = 23LLU;
	static uint64_t t2 = 40019LLU;

    t2 = (x21&((x22+x23)+x24));

    if (t2 != 2LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x25 = INT32_MIN;
	int16_t x26 = 1;
	int16_t x27 = -1;
	volatile int16_t x28 = -10;
	static volatile int32_t t3 = INT32_MIN;

    t3 = (x25&((x26+x27)+x28));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x37 = INT8_MAX;
	volatile int32_t x38 = -1;
	uint8_t x39 = UINT8_MAX;
	volatile int64_t x40 = 2362942307704055595LL;

    t4 = (x37&((x38+x39)+x40));

    if (t4 != 41LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x41 = 0U;
	int8_t x42 = INT8_MIN;
	uint32_t x43 = 276089U;
	static int8_t x44 = INT8_MIN;
	static volatile uint32_t t5 = 2574U;

    t5 = (x41&((x42+x43)+x44));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x46 = -1;
	volatile int64_t x48 = INT64_MIN;
	int64_t t6 = -4722698008142629LL;

    t6 = (x45&((x46+x47)+x48));

    if (t6 != 254LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x50 = INT8_MIN;
	uint8_t x51 = UINT8_MAX;
	int16_t x52 = INT16_MIN;
	int32_t t7 = 45557;

    t7 = (x49&((x50+x51)+x52));

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x53 = -1;
	static volatile uint16_t x55 = 62U;
	static volatile int32_t t8 = 159;

    t8 = (x53&((x54+x55)+x56));

    if (t8 != 78) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x57 = -1LL;
	uint32_t x58 = 1311U;
	int64_t x59 = -3955300789LL;
	static int64_t t9 = -17081LL;

    t9 = (x57&((x58+x59)+x60));

    if (t9 != -3955332246LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x62 = INT8_MAX;
	static int16_t x64 = 1;
	volatile int64_t t10 = 43044009LL;

    t10 = (x61&((x62+x63)+x64));

    if (t10 != 2819646029824LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x66 = INT64_MIN;
	static uint16_t x67 = 28356U;
	volatile int64_t t11 = -1LL;

    t11 = (x65&((x66+x67)+x68));

    if (t11 != 67LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x73 = INT8_MIN;
	uint8_t x74 = 52U;
	int32_t x76 = -1;
	volatile int32_t t12 = 654392050;

    t12 = (x73&((x74+x75)+x76));

    if (t12 != -23808) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x77 = UINT8_MAX;
	int8_t x78 = -1;
	uint64_t x79 = 950490898741LLU;
	uint64_t t13 = 60LLU;

    t13 = (x77&((x78+x79)+x80));

    if (t13 != 65LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint16_t x81 = 1402U;
	int64_t x82 = INT64_MIN;
	volatile uint64_t t14 = 13785069818616398LLU;

    t14 = (x81&((x82+x83)+x84));

    if (t14 != 1402LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x86 = UINT8_MAX;
	int8_t x88 = INT8_MIN;

    t15 = (x85&((x86+x87)+x88));

    if (t15 != 9) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x89 = -196;
	int8_t x91 = INT8_MIN;
	volatile uint64_t t16 = 735901782890047LLU;

    t16 = (x89&((x90+x91)+x92));

    if (t16 != 13910033157899572LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x93 = 95U;
	volatile int64_t x95 = -1454075333LL;
	int8_t x96 = -1;
	int64_t t17 = 695LL;

    t17 = (x93&((x94+x95)+x96));

    if (t17 != 69LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x98 = INT16_MAX;
	int16_t x99 = -31;
	static uint8_t x100 = UINT8_MAX;

    t18 = (x97&((x98+x99)+x100));

    if (t18 != 32769U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x101 = UINT64_MAX;
	int32_t x102 = INT32_MAX;
	uint16_t x104 = 7U;

    t19 = (x101&((x102+x103)+x104));

    if (t19 != 18362748897754042908LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x105 = INT64_MAX;
	static int64_t x106 = INT64_MIN;
	int16_t x107 = INT16_MAX;
	uint16_t x108 = 7U;
	volatile int64_t t20 = -1898LL;

    t20 = (x105&((x106+x107)+x108));

    if (t20 != 32774LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x110 = 258839U;
	uint8_t x111 = UINT8_MAX;
	int8_t x112 = -1;
	volatile uint32_t t21 = 2U;

    t21 = (x109&((x110+x111)+x112));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x117 = INT16_MIN;
	uint64_t x118 = 182LLU;
	int64_t x119 = 8278169LL;
	uint16_t x120 = UINT16_MAX;

    t22 = (x117&((x118+x119)+x120));

    if (t22 != 8323072LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x121 = 21643;
	int8_t x122 = INT8_MIN;
	static int8_t x123 = INT8_MAX;
	int64_t x124 = 31851LL;
	volatile int64_t t23 = -174LL;

    t23 = (x121&((x122+x123)+x124));

    if (t23 != 21514LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x126 = -44422LL;
	uint8_t x127 = 13U;
	volatile int64_t t24 = -5634873114763265LL;

    t24 = (x125&((x126+x127)+x128));

    if (t24 != -2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x130 = 910105U;
	static uint16_t x131 = UINT16_MAX;
	uint8_t x132 = 0U;
	uint32_t t25 = 144U;

    t25 = (x129&((x130+x131)+x132));

    if (t25 != 950272U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x133 = INT64_MIN;
	static uint32_t x134 = 223464820U;
	uint32_t x135 = 94984U;

    t26 = (x133&((x134+x135)+x136));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x138 = INT16_MAX;
	static int8_t x140 = -1;
	int64_t t27 = 584LL;

    t27 = (x137&((x138+x139)+x140));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x141 = 1992U;
	static int16_t x142 = -23;
	volatile uint32_t x143 = 0U;
	uint16_t x144 = 4957U;
	uint32_t t28 = 5U;

    t28 = (x141&((x142+x143)+x144));

    if (t28 != 832U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x149 = INT16_MAX;
	int32_t x150 = -1;
	static int32_t x152 = 943104503;
	static volatile int32_t t29 = 58696667;

    t29 = (x149&((x150+x151)+x152));

    if (t29 != 8694) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x154 = -3727;
	int32_t t30 = 4804373;

    t30 = (x153&((x154+x155)+x156));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x161 = INT64_MIN;
	int32_t x163 = -1037;
	volatile int16_t x164 = INT16_MIN;
	uint64_t t31 = 754067198908482798LLU;

    t31 = (x161&((x162+x163)+x164));

    if (t31 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x165 = -1LL;
	uint8_t x167 = 12U;
	int32_t x168 = INT32_MIN;
	int64_t t32 = -28LL;

    t32 = (x165&((x166+x167)+x168));

    if (t32 != -2147481581LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x169 = INT16_MIN;
	volatile int16_t x170 = 3;
	int32_t x171 = 32530;
	uint16_t x172 = 45U;
	volatile int32_t t33 = -11264;

    t33 = (x169&((x170+x171)+x172));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x173 = 13742LLU;
	int8_t x174 = INT8_MIN;
	int8_t x175 = INT8_MAX;
	int32_t x176 = -1;
	static volatile uint64_t t34 = 9208996220037449LLU;

    t34 = (x173&((x174+x175)+x176));

    if (t34 != 13742LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x178 = 9U;
	volatile int8_t x179 = INT8_MAX;
	volatile int8_t x180 = INT8_MAX;
	uint32_t t35 = 198446U;

    t35 = (x177&((x178+x179)+x180));

    if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x181 = INT16_MAX;
	uint64_t x182 = UINT64_MAX;
	static uint64_t x183 = 6320834797676LLU;
	int32_t x184 = INT32_MAX;
	uint64_t t36 = 38785667863938LLU;

    t36 = (x181&((x182+x183)+x184));

    if (t36 != 24682LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x189 = -1;
	volatile uint64_t x190 = 1676043LLU;
	volatile uint8_t x191 = UINT8_MAX;
	int8_t x192 = -1;
	uint64_t t37 = 577314984082544LLU;

    t37 = (x189&((x190+x191)+x192));

    if (t37 != 1676297LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x197 = 52U;
	uint16_t x198 = 117U;
	uint32_t x199 = UINT32_MAX;
	int32_t x200 = -2278031;
	static uint32_t t38 = 225U;

    t38 = (x197&((x198+x199)+x200));

    if (t38 != 36U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x205 = 37U;
	static int8_t x206 = INT8_MIN;
	int16_t x207 = INT16_MAX;
	int16_t x208 = INT16_MIN;
	int32_t t39 = 1604;

    t39 = (x205&((x206+x207)+x208));

    if (t39 != 37) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x209 = INT32_MIN;

    t40 = (x209&((x210+x211)+x212));

    if (t40 != 2147483648U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x213 = 763013;
	int64_t x214 = INT64_MIN;
	int8_t x215 = 31;
	static int8_t x216 = 0;
	int64_t t41 = 91140197LL;

    t41 = (x213&((x214+x215)+x216));

    if (t41 != 5LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x217 = 2780145443938077334LLU;
	uint32_t x218 = 0U;
	uint32_t x219 = UINT32_MAX;

    t42 = (x217&((x218+x219)+x220));

    if (t42 != 702122646LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x221 = INT32_MAX;
	static int8_t x222 = 1;
	static int8_t x223 = 0;
	int32_t x224 = -1;
	volatile int32_t t43 = -3900;

    t43 = (x221&((x222+x223)+x224));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x225 = 124U;
	int32_t x226 = -835231;
	static volatile int64_t x227 = -1LL;
	static uint16_t x228 = UINT16_MAX;
	volatile int64_t t44 = -2162LL;

    t44 = (x225&((x226+x227)+x228));

    if (t44 != 92LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x230 = INT16_MAX;
	volatile int16_t x231 = INT16_MIN;
	static int16_t x232 = INT16_MAX;

    t45 = (x229&((x230+x231)+x232));

    if (t45 != 32744) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x237 = UINT32_MAX;
	int8_t x238 = INT8_MAX;
	int32_t x239 = INT32_MIN;
	volatile uint32_t x240 = 38104U;

    t46 = (x237&((x238+x239)+x240));

    if (t46 != 2147521879U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x241 = UINT16_MAX;
	static uint64_t x242 = 14406LLU;
	int16_t x243 = 436;
	uint32_t x244 = 375U;
	static volatile uint64_t t47 = 1390986501547239591LLU;

    t47 = (x241&((x242+x243)+x244));

    if (t47 != 15217LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x250 = 63604646006903550LLU;
	int64_t x251 = 19309994LL;
	int64_t x252 = -1LL;
	uint64_t t48 = 24125085LLU;

    t48 = (x249&((x250+x251)+x252));

    if (t48 != 63604646026213536LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x254 = 0U;
	int64_t x255 = 1965161837342LL;
	static int32_t x256 = INT32_MIN;
	int64_t t49 = 21706156051443804LL;

    t49 = (x253&((x254+x255)+x256));

    if (t49 != 30LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x257 = INT64_MIN;
	static int64_t x258 = -1LL;
	uint16_t x259 = 20U;
	uint8_t x260 = 2U;
	int64_t t50 = 21LL;

    t50 = (x257&((x258+x259)+x260));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x261 = 158882LLU;
	int32_t x262 = INT32_MIN;
	uint32_t x263 = 11077293U;
	int32_t x264 = -972935;
	static volatile uint64_t t51 = 4142894537421LLU;

    t51 = (x261&((x262+x263)+x264));

    if (t51 != 142370LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x265 = INT8_MIN;
	volatile int16_t x266 = 123;
	static uint64_t x267 = UINT64_MAX;
	int8_t x268 = INT8_MAX;

    t52 = (x265&((x266+x267)+x268));

    if (t52 != 128LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x269 = UINT32_MAX;
	volatile int32_t x270 = -3;
	int64_t x271 = 30567270420258LL;
	static int16_t x272 = INT16_MIN;
	int64_t t53 = 1LL;

    t53 = (x269&((x270+x271)+x272));

    if (t53 != 4283109151LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x273 = 961093757;
	static int32_t x275 = INT32_MIN;
	int8_t x276 = 2;
	volatile uint32_t t54 = 1227871U;

    t54 = (x273&((x274+x275)+x276));

    if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x277 = 0U;
	volatile int8_t x278 = -1;
	uint16_t x280 = UINT16_MAX;

    t55 = (x277&((x278+x279)+x280));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x285 = INT32_MIN;
	int8_t x286 = -1;
	uint8_t x287 = 24U;
	int64_t x288 = INT64_MIN;
	volatile int64_t t56 = INT64_MIN;

    t56 = (x285&((x286+x287)+x288));

    if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x290 = 7988U;
	uint32_t t57 = 501433U;

    t57 = (x289&((x290+x291)+x292));

    if (t57 != 2147491634U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x298 = INT16_MIN;
	volatile uint64_t x299 = 4295633783469449LLU;
	static uint16_t x300 = 203U;
	uint64_t t58 = 1925963171499412LLU;

    t58 = (x297&((x298+x299)+x300));

    if (t58 != 767506004LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x301 = INT8_MIN;
	volatile uint64_t x303 = 0LLU;

    t59 = (x301&((x302+x303)+x304));

    if (t59 != 276671624181632LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x305 = 1120532LLU;
	int16_t x306 = -1134;
	uint16_t x307 = UINT16_MAX;
	static int8_t x308 = INT8_MAX;
	volatile uint64_t t60 = 38826LLU;

    t60 = (x305&((x306+x307)+x308));

    if (t60 != 6160LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x309 = INT64_MIN;
	int16_t x310 = 2005;
	int64_t x311 = -7811912LL;
	static volatile int64_t t61 = INT64_MIN;

    t61 = (x309&((x310+x311)+x312));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x314 = UINT16_MAX;
	volatile int8_t x315 = INT8_MIN;
	int8_t x316 = -7;
	int32_t t62 = 2428;

    t62 = (x313&((x314+x315)+x316));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x317 = INT16_MAX;
	uint64_t x318 = 5LLU;
	int8_t x319 = INT8_MAX;
	static uint64_t x320 = UINT64_MAX;
	uint64_t t63 = 1477187419213746449LLU;

    t63 = (x317&((x318+x319)+x320));

    if (t63 != 131LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x325 = UINT64_MAX;
	static uint8_t x326 = 2U;
	static uint64_t x327 = 5305291840859LLU;
	uint64_t t64 = 74797710914LLU;

    t64 = (x325&((x326+x327)+x328));

    if (t64 != 5309586808156LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x333 = -3133506;
	static volatile int64_t x334 = INT64_MIN;
	static int16_t x336 = -7;
	volatile int64_t t65 = -901403877831LL;

    t65 = (x333&((x334+x335)+x336));

    if (t65 != -9223372036854773626LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x341 = INT64_MIN;
	volatile int16_t x344 = 9068;
	static volatile int64_t t66 = -81244LL;

    t66 = (x341&((x342+x343)+x344));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x354 = INT8_MAX;
	uint8_t x355 = UINT8_MAX;
	int16_t x356 = -289;
	static volatile int32_t t67 = 3965636;

    t67 = (x353&((x354+x355)+x356));

    if (t67 != 93) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x357 = 690;
	uint16_t x358 = 987U;
	volatile uint8_t x359 = UINT8_MAX;
	uint16_t x360 = UINT16_MAX;
	int32_t t68 = -2;

    t68 = (x357&((x358+x359)+x360));

    if (t68 != 144) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x361 = INT16_MAX;
	int8_t x362 = -47;
	static uint8_t x363 = 105U;
	int32_t x364 = 4658306;

    t69 = (x361&((x362+x363)+x364));

    if (t69 != 5308) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x365 = UINT32_MAX;
	int16_t x366 = INT16_MIN;
	volatile uint16_t x367 = 648U;
	int8_t x368 = INT8_MIN;
	volatile uint32_t t70 = 41762867U;

    t70 = (x365&((x366+x367)+x368));

    if (t70 != 4294935048U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x369 = 1;
	int64_t x370 = -68141248LL;
	int16_t x371 = INT16_MAX;
	uint64_t t71 = 10844700LLU;

    t71 = (x369&((x370+x371)+x372));

    if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x373 = -1LL;
	static uint8_t x375 = 8U;
	int8_t x376 = INT8_MAX;
	static volatile int64_t t72 = 1327662504449277LL;

    t72 = (x373&((x374+x375)+x376));

    if (t72 != 6844LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x377 = 0U;
	int32_t x378 = INT32_MIN;
	static int64_t x379 = INT64_MAX;
	static int16_t x380 = 221;
	static volatile int64_t t73 = 7LL;

    t73 = (x377&((x378+x379)+x380));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x381 = -117908368960124371LL;
	int32_t x383 = -607;
	int64_t x384 = -1LL;
	volatile int64_t t74 = -295133LL;

    t74 = (x381&((x382+x383)+x384));

    if (t74 != 12LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x385 = -1;
	volatile int8_t x386 = INT8_MIN;
	int32_t t75 = -157037;

    t75 = (x385&((x386+x387)+x388));

    if (t75 != -257) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x389 = -1;
	uint16_t x391 = 26U;
	int32_t t76 = -6804;

    t76 = (x389&((x390+x391)+x392));

    if (t76 != 153) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x393 = -1LL;
	volatile int8_t x394 = -1;
	static volatile int64_t x395 = 53068547915548605LL;
	int64_t x396 = -1901719309LL;
	int64_t t77 = 923LL;

    t77 = (x393&((x394+x395)+x396));

    if (t77 != 53068546013829295LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x397 = INT64_MIN;
	int8_t x398 = 50;
	int32_t x399 = 0;
	int8_t x400 = -1;
	int64_t t78 = -1702287LL;

    t78 = (x397&((x398+x399)+x400));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x401 = 0U;
	int64_t x402 = INT64_MIN;
	int32_t x403 = INT32_MAX;
	static int32_t x404 = -60;

    t79 = (x401&((x402+x403)+x404));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x405 = 162350LLU;
	int16_t x406 = -4;
	int8_t x407 = INT8_MIN;
	static uint32_t x408 = UINT32_MAX;

    t80 = (x405&((x406+x407)+x408));

    if (t80 != 162346LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x409 = UINT32_MAX;
	volatile int8_t x412 = 2;
	uint32_t t81 = 8328U;

    t81 = (x409&((x410+x411)+x412));

    if (t81 != 65581U) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x413 = INT64_MIN;
	int16_t x414 = 8;
	volatile int64_t t82 = INT64_MIN;

    t82 = (x413&((x414+x415)+x416));

    if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x417 = -854602200;
	int16_t x418 = -1;
	static uint16_t x419 = 141U;
	int8_t x420 = -1;
	volatile int32_t t83 = 4;

    t83 = (x417&((x418+x419)+x420));

    if (t83 != 8) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x421 = INT32_MAX;
	static volatile int8_t x422 = INT8_MIN;
	int8_t x424 = INT8_MIN;
	int32_t t84 = 4;

    t84 = (x421&((x422+x423)+x424));

    if (t84 != 2147483391) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x425 = UINT64_MAX;
	int64_t x426 = -145914400LL;
	static uint32_t x427 = UINT32_MAX;
	static int64_t x428 = INT64_MIN;

    t85 = (x425&((x426+x427)+x428));

    if (t85 != 9223372041003828703LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x429 = INT8_MIN;
	int8_t x430 = 1;
	int32_t x431 = INT32_MIN;
	uint16_t x432 = 199U;
	static volatile int32_t t86 = 0;

    t86 = (x429&((x430+x431)+x432));

    if (t86 != -2147483520) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x433 = INT8_MAX;
	int8_t x434 = -1;
	uint64_t x435 = UINT64_MAX;
	uint64_t x436 = 590160LLU;
	volatile uint64_t t87 = 5137918490896357LLU;

    t87 = (x433&((x434+x435)+x436));

    if (t87 != 78LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint64_t x441 = 3823352851LLU;
	int16_t x443 = -120;
	static volatile int32_t x444 = INT32_MIN;
	volatile uint64_t t88 = 149468226614LLU;

    t88 = (x441&((x442+x443)+x444));

    if (t88 != 2147493905LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x445 = 463;
	static volatile uint32_t x447 = 625139U;
	int32_t x448 = INT32_MIN;

    t89 = (x445&((x446+x447)+x448));

    if (t89 != 450U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x449 = 104U;
	static uint32_t x450 = 19650U;
	static int8_t x451 = INT8_MIN;
	int16_t x452 = INT16_MIN;
	uint32_t t90 = 0U;

    t90 = (x449&((x450+x451)+x452));

    if (t90 != 64U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x454 = -475988;
	uint64_t x455 = 7443653926220105640LLU;
	int32_t x456 = INT32_MIN;

    t91 = (x453&((x454+x455)+x456));

    if (t91 != 84LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x461 = 7;
	static int8_t x462 = 1;
	volatile uint8_t x464 = 17U;

    t92 = (x461&((x462+x463)+x464));

    if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x465 = 12212;
	int32_t x468 = -48;
	volatile int64_t t93 = -67654174923732718LL;

    t93 = (x465&((x466+x467)+x468));

    if (t93 != 132LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x469 = -1;
	uint32_t t94 = 741U;

    t94 = (x469&((x470+x471)+x472));

    if (t94 != 125U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x474 = -1;
	uint32_t x475 = UINT32_MAX;
	static volatile int64_t t95 = -513799252813140512LL;

    t95 = (x473&((x474+x475)+x476));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x477 = 629U;
	uint16_t x478 = 68U;
	int32_t x480 = INT32_MIN;

    t96 = (x477&((x478+x479)+x480));

    if (t96 != 65) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x481 = INT8_MAX;
	int16_t x484 = INT16_MIN;
	int32_t t97 = 0;

    t97 = (x481&((x482+x483)+x484));

    if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x485 = 1U;
	int16_t x486 = -4;
	int16_t x487 = -1;
	int32_t t98 = 2936498;

    t98 = (x485&((x486+x487)+x488));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x489 = INT64_MIN;
	uint32_t x490 = UINT32_MAX;
	static int64_t x491 = INT64_MIN;
	volatile int64_t t99 = INT64_MIN;

    t99 = (x489&((x490+x491)+x492));

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x493 = 37640347U;
	volatile int16_t x494 = INT16_MAX;
	static uint64_t x496 = 45855LLU;
	uint64_t t100 = 36561352LLU;

    t100 = (x493&((x494+x495)+x496));

    if (t100 != 4121LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x497 = UINT8_MAX;
	int8_t x498 = -27;
	static uint64_t x499 = 384937LLU;
	int8_t x500 = -51;
	volatile uint64_t t101 = 153011292138747070LLU;

    t101 = (x497&((x498+x499)+x500));

    if (t101 != 91LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x501 = -59905LL;
	int8_t x503 = INT8_MIN;
	uint8_t x504 = UINT8_MAX;
	int64_t t102 = -39514058LL;

    t102 = (x501&((x502+x503)+x504));

    if (t102 != 126LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x505 = INT64_MIN;
	volatile int16_t x506 = INT16_MIN;
	uint32_t x507 = 11135310U;
	int32_t x508 = -29721901;

    t103 = (x505&((x506+x507)+x508));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x513 = INT16_MIN;
	uint8_t x514 = 1U;
	uint8_t x516 = 40U;
	static int64_t t104 = -6LL;

    t104 = (x513&((x514+x515)+x516));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x518 = INT16_MIN;
	uint8_t x519 = 11U;
	volatile int64_t x520 = 2054188834100795LL;
	int64_t t105 = 271270456497071LL;

    t105 = (x517&((x518+x519)+x520));

    if (t105 != 465671750LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x521 = INT32_MIN;
	int8_t x522 = 2;
	uint32_t x523 = 2053243U;
	static volatile int16_t x524 = INT16_MIN;
	uint32_t t106 = 12048533U;

    t106 = (x521&((x522+x523)+x524));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x525 = -1;
	int32_t x526 = -1;
	volatile uint32_t x527 = 7565675U;
	int64_t x528 = -1LL;
	volatile int64_t t107 = -147830638423LL;

    t107 = (x525&((x526+x527)+x528));

    if (t107 != 7565673LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x530 = 16;
	uint32_t t108 = 250923162U;

    t108 = (x529&((x530+x531)+x532));

    if (t108 != 4U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x533 = 1561U;
	int64_t x534 = -36798575LL;
	static uint8_t x535 = 11U;
	int64_t x536 = -62545786998962LL;
	volatile int64_t t109 = -1160973LL;

    t109 = (x533&((x534+x535)+x536));

    if (t109 != 1544LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x537 = INT64_MIN;
	uint16_t x538 = UINT16_MAX;
	uint32_t x539 = UINT32_MAX;
	int8_t x540 = -1;

    t110 = (x537&((x538+x539)+x540));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint64_t x541 = UINT64_MAX;
	uint32_t x542 = UINT32_MAX;
	int8_t x543 = -3;
	int32_t x544 = INT32_MIN;
	uint64_t t111 = 159951LLU;

    t111 = (x541&((x542+x543)+x544));

    if (t111 != 2147483644LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x545 = 1LLU;
	volatile int64_t x546 = INT64_MAX;
	int32_t x547 = INT32_MIN;
	int8_t x548 = INT8_MIN;

    t112 = (x545&((x546+x547)+x548));

    if (t112 != 1LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x550 = UINT64_MAX;
	int8_t x551 = INT8_MAX;
	uint8_t x552 = UINT8_MAX;
	uint64_t t113 = 28119993905913639LLU;

    t113 = (x549&((x550+x551)+x552));

    if (t113 != 317LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x561 = UINT8_MAX;
	int8_t x562 = INT8_MAX;
	static volatile int8_t x564 = INT8_MIN;
	uint64_t t114 = 9282167LLU;

    t114 = (x561&((x562+x563)+x564));

    if (t114 != 1LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x565 = 117U;
	uint8_t x566 = 3U;
	int32_t t115 = -22;

    t115 = (x565&((x566+x567)+x568));

    if (t115 != 97) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x570 = 181912707365LLU;
	int8_t x572 = INT8_MAX;
	uint64_t t116 = 1600611104808952LLU;

    t116 = (x569&((x570+x571)+x572));

    if (t116 != 8LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x573 = INT16_MIN;
	int32_t x574 = -14046579;
	int32_t t117 = 4943074;

    t117 = (x573&((x574+x575)+x576));

    if (t117 != -14123008) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x581 = 395U;
	uint8_t x583 = 1U;
	int32_t t118 = 52062;

    t118 = (x581&((x582+x583)+x584));

    if (t118 != 130) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x585 = 433U;
	int32_t x587 = INT32_MAX;
	int32_t x588 = -99998;
	volatile int32_t t119 = 1;

    t119 = (x585&((x586+x587)+x588));

    if (t119 != 288) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x589 = -1;
	uint8_t x590 = 18U;
	static volatile int64_t x591 = -1LL;
	uint8_t x592 = UINT8_MAX;

    t120 = (x589&((x590+x591)+x592));

    if (t120 != 272LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x597 = INT32_MIN;
	static uint32_t x598 = UINT32_MAX;
	int32_t x600 = -1;
	volatile uint32_t t121 = 882U;

    t121 = (x597&((x598+x599)+x600));

    if (t121 != 2147483648U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x601 = INT64_MIN;
	static volatile int64_t x602 = INT64_MAX;
	int16_t x604 = INT16_MAX;
	volatile uint64_t t122 = 30957687637LLU;

    t122 = (x601&((x602+x603)+x604));

    if (t122 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x609 = UINT32_MAX;
	int64_t x610 = INT64_MAX;
	static int64_t x611 = INT64_MIN;
	int32_t x612 = INT32_MIN;
	int64_t t123 = -106937440259206LL;

    t123 = (x609&((x610+x611)+x612));

    if (t123 != 2147483647LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x613 = INT64_MAX;
	int8_t x614 = -3;
	static uint32_t x615 = UINT32_MAX;
	uint16_t x616 = 7U;
	int64_t t124 = 60144LL;

    t124 = (x613&((x614+x615)+x616));

    if (t124 != 3LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x617 = 137;
	volatile uint64_t x618 = 33909510499692LLU;
	int8_t x620 = INT8_MAX;
	uint64_t t125 = 111892257175395281LLU;

    t125 = (x617&((x618+x619)+x620));

    if (t125 != 8LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x622 = -1;
	int32_t x623 = 1826210;
	int8_t x624 = INT8_MIN;
	volatile int32_t t126 = -1014574556;

    t126 = (x621&((x622+x623)+x624));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x625 = 1U;
	int32_t x626 = 117;
	static uint8_t x628 = 8U;
	static int32_t t127 = 820099;

    t127 = (x625&((x626+x627)+x628));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x629 = -1;
	uint64_t x630 = 4294LLU;
	int64_t x632 = INT64_MIN;

    t128 = (x629&((x630+x631)+x632));

    if (t128 != 9223372036854780101LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x633 = -11693266580876629LL;
	int32_t x636 = INT32_MIN;
	volatile int64_t t129 = -26208223765LL;

    t129 = (x633&((x634+x635)+x636));

    if (t129 != 21162LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x637 = INT64_MAX;
	uint32_t x638 = 18U;
	static int32_t x639 = INT32_MIN;
	int8_t x640 = INT8_MIN;
	static volatile int64_t t130 = 82617LL;

    t130 = (x637&((x638+x639)+x640));

    if (t130 != 2147483538LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x641 = 92U;
	volatile uint32_t x642 = UINT32_MAX;
	uint32_t x643 = 105692U;
	volatile int8_t x644 = -2;
	volatile uint32_t t131 = 29771U;

    t131 = (x641&((x642+x643)+x644));

    if (t131 != 88U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x646 = 19U;
	volatile uint16_t x647 = 0U;
	static int16_t x648 = -2856;
	uint64_t t132 = 314628668368930LLU;

    t132 = (x645&((x646+x647)+x648));

    if (t132 != 32760714443LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x653 = -1126024819339731566LL;
	int16_t x654 = -1;
	int32_t x656 = 4;

    t133 = (x653&((x654+x655)+x656));

    if (t133 != -1126024819348340480LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x657 = 2043064986U;
	uint16_t x658 = UINT16_MAX;
	static int32_t x659 = INT32_MIN;
	int16_t x660 = -3307;

    t134 = (x657&((x658+x659)+x660));

    if (t134 != 45584U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x661 = 8U;
	int16_t x663 = 3991;
	static uint32_t t135 = 1181532U;

    t135 = (x661&((x662+x663)+x664));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x665 = -343028818;
	int64_t x666 = 3273203785057LL;
	int8_t x668 = INT8_MAX;
	static int64_t t136 = -238LL;

    t136 = (x665&((x666+x667)+x668));

    if (t136 != 3272933116324LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x669 = UINT8_MAX;
	int64_t x670 = 1365142LL;
	uint8_t x672 = 0U;
	int64_t t137 = -25487567LL;

    t137 = (x669&((x670+x671)+x672));

    if (t137 != 79LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x673 = 2U;
	volatile uint64_t x674 = 208LLU;
	int16_t x675 = -930;
	uint64_t t138 = 2956563552957244LLU;

    t138 = (x673&((x674+x675)+x676));

    if (t138 != 2LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x677 = UINT16_MAX;
	uint32_t x678 = 107U;
	static int64_t x680 = INT64_MAX;

    t139 = (x677&((x678+x679)+x680));

    if (t139 != 106LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t x681 = INT64_MIN;
	static int64_t x682 = 31732557326LL;
	int8_t x684 = -1;
	static volatile int64_t t140 = 29464240498LL;

    t140 = (x681&((x682+x683)+x684));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x685 = -1LL;
	static volatile int32_t x686 = INT32_MIN;
	int16_t x687 = 13;
	volatile uint32_t x688 = 39U;
	static volatile int64_t t141 = 5570049LL;

    t141 = (x685&((x686+x687)+x688));

    if (t141 != 2147483700LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x689 = INT8_MAX;
	int32_t x690 = -4;
	int64_t x691 = INT64_MAX;
	int8_t x692 = 3;
	volatile int64_t t142 = -7119423077133LL;

    t142 = (x689&((x690+x691)+x692));

    if (t142 != 126LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x693 = UINT32_MAX;
	int32_t x695 = -1;
	static uint32_t t143 = 3671U;

    t143 = (x693&((x694+x695)+x696));

    if (t143 != 48U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x701 = 24;
	int16_t x703 = INT16_MIN;
	uint16_t x704 = 15U;
	static uint32_t t144 = 76844U;

    t144 = (x701&((x702+x703)+x704));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x706 = 43U;

    t145 = (x705&((x706+x707)+x708));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x709 = 395U;
	uint16_t x710 = 17184U;
	static volatile int16_t x711 = INT16_MIN;
	static int8_t x712 = INT8_MIN;
	int32_t t146 = -1153071;

    t146 = (x709&((x710+x711)+x712));

    if (t146 != 128) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x714 = INT32_MIN;
	int32_t x716 = 5671;
	static volatile uint32_t t147 = 6613U;

    t147 = (x713&((x714+x715)+x716));

    if (t147 != 40984U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x717 = 58877LL;
	int16_t x718 = INT16_MIN;
	int32_t x719 = INT32_MAX;
	int64_t t148 = -7174LL;

    t148 = (x717&((x718+x719)+x720));

    if (t148 != 26108LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x721 = INT64_MIN;
	volatile int64_t x722 = INT64_MIN;
	static uint8_t x724 = 3U;
	int64_t t149 = INT64_MIN;

    t149 = (x721&((x722+x723)+x724));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x725 = INT64_MIN;
	int32_t x727 = 1057026;
	volatile uint8_t x728 = 2U;
	volatile int64_t t150 = -3875951LL;

    t150 = (x725&((x726+x727)+x728));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x733 = 3735;
	int32_t x734 = INT32_MIN;
	int32_t x736 = INT32_MIN;
	volatile int64_t t151 = 1966LL;

    t151 = (x733&((x734+x735)+x736));

    if (t151 != 528LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x739 = 4647239251584296993LLU;
	int32_t x740 = -1251;
	static volatile uint64_t t152 = 2389511338857450LLU;

    t152 = (x737&((x738+x739)+x740));

    if (t152 != 34LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x741 = 7U;
	uint8_t x743 = 12U;
	uint16_t x744 = UINT16_MAX;
	int32_t t153 = -3642;

    t153 = (x741&((x742+x743)+x744));

    if (t153 != 5) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x745 = 1316LLU;
	uint64_t x746 = UINT64_MAX;
	int8_t x747 = INT8_MIN;
	int16_t x748 = INT16_MIN;
	static uint64_t t154 = 30958547612731886LLU;

    t154 = (x745&((x746+x747)+x748));

    if (t154 != 1316LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x750 = UINT8_MAX;
	static volatile int64_t x751 = 9LL;
	int64_t x752 = -27592334LL;
	int64_t t155 = -614899LL;

    t155 = (x749&((x750+x751)+x752));

    if (t155 != -27592192LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x753 = INT32_MIN;
	static int8_t x754 = INT8_MIN;
	uint32_t t156 = 40U;

    t156 = (x753&((x754+x755)+x756));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x777 = INT8_MAX;
	uint64_t x778 = 47764470594061LLU;
	uint32_t x780 = 12U;
	volatile uint64_t t157 = 5112625850557866LLU;

    t157 = (x777&((x778+x779)+x780));

    if (t157 != 21LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x782 = -13397150;
	volatile int64_t x783 = -1LL;
	int16_t x784 = 1836;
	static int64_t t158 = 215LL;

    t158 = (x781&((x782+x783)+x784));

    if (t158 != 1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x785 = 1161U;
	volatile uint8_t x787 = UINT8_MAX;
	int8_t x788 = 1;
	int64_t t159 = 61766974227LL;

    t159 = (x785&((x786+x787)+x788));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x790 = INT16_MAX;
	static int64_t x791 = 373142191961972LL;
	int16_t x792 = INT16_MAX;

    t160 = (x789&((x790+x791)+x792));

    if (t160 != 30578LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x793 = 1955;
	volatile uint32_t x794 = UINT32_MAX;
	uint16_t x795 = 7U;
	volatile int16_t x796 = INT16_MIN;
	volatile uint32_t t161 = 1392994629U;

    t161 = (x793&((x794+x795)+x796));

    if (t161 != 2U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x801 = UINT16_MAX;
	volatile int64_t x802 = 4072377LL;
	int8_t x803 = INT8_MAX;
	int8_t x804 = 50;
	static int64_t t162 = -9LL;

    t162 = (x801&((x802+x803)+x804));

    if (t162 != 9322LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x805 = -2089634307LL;
	volatile int8_t x806 = INT8_MAX;
	int8_t x807 = -26;
	static volatile int64_t t163 = 1543LL;

    t163 = (x805&((x806+x807)+x808));

    if (t163 != -1298480278522796LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x809 = -59235880;
	int64_t x811 = 1400909856108112LL;
	uint8_t x812 = 0U;
	volatile int64_t t164 = -265524363810169LL;

    t164 = (x809&((x810+x811)+x812));

    if (t164 != 1400909824262480LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x813 = 5682;
	static uint8_t x815 = 46U;
	uint8_t x816 = 0U;
	volatile int32_t t165 = -1;

    t165 = (x813&((x814+x815)+x816));

    if (t165 != 32) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x818 = -14830942573817399LL;
	int8_t x819 = INT8_MIN;
	int64_t t166 = 191221656504004328LL;

    t166 = (x817&((x818+x819)+x820));

    if (t166 != -14830944721301248LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x822 = 454U;
	uint32_t x823 = 63152U;
	static int16_t x824 = -1;
	static volatile uint32_t t167 = 82185005U;

    t167 = (x821&((x822+x823)+x824));

    if (t167 != 63521U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x825 = 688;
	static uint8_t x827 = 7U;
	int8_t x828 = 0;

    t168 = (x825&((x826+x827)+x828));

    if (t168 != 560LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x829 = -318;
	int64_t x830 = -1LL;
	int16_t x832 = -1;
	int64_t t169 = 64220909957315LL;

    t169 = (x829&((x830+x831)+x832));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x833 = 402444LLU;
	int16_t x834 = INT16_MIN;
	static uint64_t x835 = 29218740388030797LLU;
	static int64_t x836 = 67090947LL;
	uint64_t t170 = 14951076LLU;

    t170 = (x833&((x834+x835)+x836));

    if (t170 != 270336LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x837 = INT32_MIN;
	int64_t x838 = INT64_MIN;
	static uint64_t x839 = 23157LLU;
	uint8_t x840 = UINT8_MAX;
	volatile uint64_t t171 = 206LLU;

    t171 = (x837&((x838+x839)+x840));

    if (t171 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x841 = 3;
	static int64_t x842 = INT64_MAX;
	uint32_t x843 = 0U;
	volatile uint64_t t172 = 2LLU;

    t172 = (x841&((x842+x843)+x844));

    if (t172 != 1LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x850 = 2U;
	int16_t x851 = -1;
	volatile int8_t x852 = -22;
	static volatile int32_t t173 = -1;

    t173 = (x849&((x850+x851)+x852));

    if (t173 != 65515) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x853 = 3U;
	int16_t x854 = -1;
	uint64_t x855 = 16059171906889LLU;
	static int32_t x856 = INT32_MAX;
	uint64_t t174 = 7347152229797LLU;

    t174 = (x853&((x854+x855)+x856));

    if (t174 != 3LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x857 = 8U;
	int64_t x858 = INT64_MIN;
	int8_t x859 = INT8_MAX;
	static int32_t x860 = INT32_MAX;
	int64_t t175 = 496938060542025LL;

    t175 = (x857&((x858+x859)+x860));

    if (t175 != 8LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x862 = -83048699551922697LL;
	uint8_t x863 = 28U;
	uint64_t x864 = 1989905655992LLU;
	uint64_t t176 = 1560LLU;

    t176 = (x861&((x862+x863)+x864));

    if (t176 != 2274202380174984LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x865 = INT16_MIN;
	int16_t x866 = -1947;
	int8_t x867 = INT8_MIN;
	static volatile uint16_t x868 = 1162U;
	int32_t t177 = -28881;

    t177 = (x865&((x866+x867)+x868));

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x869 = INT64_MIN;
	static volatile int64_t x871 = -1LL;
	int64_t x872 = INT64_MIN;
	volatile int64_t t178 = INT64_MIN;

    t178 = (x869&((x870+x871)+x872));

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x874 = 3U;
	uint64_t x875 = 205LLU;
	uint8_t x876 = 7U;
	uint64_t t179 = 982LLU;

    t179 = (x873&((x874+x875)+x876));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x877 = UINT32_MAX;
	int8_t x878 = INT8_MIN;
	uint16_t x879 = 23336U;
	uint32_t t180 = 26612U;

    t180 = (x877&((x878+x879)+x880));

    if (t180 != 14265U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x881 = INT8_MIN;
	int32_t x882 = INT32_MIN;
	int64_t x883 = 115096345903727LL;
	int16_t x884 = INT16_MIN;
	int64_t t181 = -86073236937562LL;

    t181 = (x881&((x882+x883)+x884));

    if (t181 != 115094198387200LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x889 = 0U;
	int8_t x890 = 1;
	uint32_t x891 = UINT32_MAX;
	uint32_t t182 = 38847286U;

    t182 = (x889&((x890+x891)+x892));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x893 = 0;
	int16_t x894 = 0;
	static int16_t x895 = INT16_MIN;
	uint16_t x896 = UINT16_MAX;
	int32_t t183 = -1103;

    t183 = (x893&((x894+x895)+x896));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x898 = 56U;
	volatile int16_t x899 = -1;
	uint8_t x900 = UINT8_MAX;
	volatile int32_t t184 = 247214082;

    t184 = (x897&((x898+x899)+x900));

    if (t184 != 310) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x905 = 32962154LLU;
	int64_t x906 = -1LL;
	volatile int16_t x908 = INT16_MIN;
	volatile uint64_t t185 = 16172663910488336LLU;

    t185 = (x905&((x906+x907)+x908));

    if (t185 != 32931882LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x913 = -694;
	int32_t x914 = INT32_MAX;
	int64_t x915 = -1LL;
	uint16_t x916 = 27U;
	volatile int64_t t186 = -181101LL;

    t186 = (x913&((x914+x915)+x916));

    if (t186 != 2147483656LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x921 = -1;
	uint32_t x922 = 433U;
	uint32_t x923 = UINT32_MAX;
	int16_t x924 = INT16_MAX;
	static uint32_t t187 = 246832U;

    t187 = (x921&((x922+x923)+x924));

    if (t187 != 33199U) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x933 = INT64_MAX;
	int8_t x934 = -1;
	uint32_t x935 = 1U;
	volatile uint16_t x936 = 7381U;

    t188 = (x933&((x934+x935)+x936));

    if (t188 != 7381LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x938 = UINT16_MAX;
	int32_t x939 = INT32_MIN;
	static int32_t x940 = INT32_MAX;
	volatile int32_t t189 = -13267;

    t189 = (x937&((x938+x939)+x940));

    if (t189 != 65534) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x941 = -5421598776443292LL;
	static uint64_t x942 = UINT64_MAX;
	uint32_t x943 = UINT32_MAX;
	volatile int8_t x944 = INT8_MAX;
	static uint64_t t190 = 261039172766LLU;

    t190 = (x941&((x942+x943)+x944));

    if (t190 != 4294967396LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x950 = 4U;
	int32_t x952 = -33;
	uint32_t t191 = 192958U;

    t191 = (x949&((x950+x951)+x952));

    if (t191 != 32738U) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x957 = 35110642U;
	uint16_t x958 = 1U;
	int8_t x960 = -1;
	uint64_t t192 = 1547284906LLU;

    t192 = (x957&((x958+x959)+x960));

    if (t192 != 33752658LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x961 = INT8_MIN;
	volatile uint64_t x964 = UINT64_MAX;
	uint64_t t193 = 25707246509414275LLU;

    t193 = (x961&((x962+x963)+x964));

    if (t193 != 32768LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x965 = -66286;
	static int64_t x966 = INT64_MIN;
	uint64_t x967 = 8735975454955129732LLU;
	static int32_t x968 = INT32_MIN;
	volatile uint64_t t194 = 1514700048300LLU;

    t194 = (x965&((x966+x967)+x968));

    if (t194 != 17959347489662355712LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x970 = 93U;
	uint8_t x971 = UINT8_MAX;
	static int64_t x972 = 26LL;
	static int64_t t195 = 66603647425827543LL;

    t195 = (x969&((x970+x971)+x972));

    if (t195 != 374LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x974 = 20U;
	uint64_t x975 = 27595375LLU;
	int8_t x976 = INT8_MIN;
	volatile uint64_t t196 = 1006374022LLU;

    t196 = (x973&((x974+x975)+x976));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x977 = 60U;
	int32_t x978 = INT32_MAX;
	int8_t x979 = INT8_MIN;
	int16_t x980 = INT16_MIN;

    t197 = (x977&((x978+x979)+x980));

    if (t197 != 60) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x981 = 1LLU;
	int64_t x982 = -122300948LL;
	int64_t x983 = -1LL;
	static uint64_t t198 = 95384865962LLU;

    t198 = (x981&((x982+x983)+x984));

    if (t198 != 1LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x985 = -1LL;
	int64_t x986 = INT64_MIN;
	int8_t x987 = 33;
	uint32_t x988 = 44754766U;
	int64_t t199 = -21374829956LL;

    t199 = (x985&((x986+x987)+x988));

    if (t199 != -9223372036810021009LL) { NG(); } else { ; }
	
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

