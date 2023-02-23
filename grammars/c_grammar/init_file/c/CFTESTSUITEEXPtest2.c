
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

static uint8_t x16 = 1U;
uint32_t x22 = UINT32_MAX;
int8_t x25 = 37;
int32_t x48 = 17051051;
uint64_t x54 = 1523815700522LLU;
int8_t x64 = -1;
volatile int8_t x65 = -6;
volatile uint64_t x67 = UINT64_MAX;
volatile int8_t x73 = INT8_MIN;
uint16_t x75 = 5955U;
int64_t t14 = 3865LL;
int64_t t16 = -26406408603315LL;
uint16_t x95 = UINT16_MAX;
volatile uint64_t x97 = UINT64_MAX;
int16_t x100 = INT16_MIN;
int32_t x153 = INT32_MIN;
int8_t x159 = INT8_MIN;
volatile int64_t t27 = -55LL;
uint64_t x162 = 626526LLU;
volatile int16_t x163 = 1648;
uint64_t x177 = UINT64_MAX;
uint32_t x181 = 71U;
static int32_t x183 = -1;
uint32_t x186 = 41U;
volatile int64_t t32 = 8366238LL;
static int32_t x192 = INT32_MAX;
int32_t t35 = -791156;
static volatile uint32_t x201 = UINT32_MAX;
int32_t x214 = INT32_MIN;
int16_t x216 = INT16_MIN;
uint32_t x219 = 29904822U;
int8_t x225 = INT8_MIN;
static int8_t x228 = 1;
volatile uint32_t t40 = 821113502U;
volatile int8_t x236 = INT8_MAX;
volatile int64_t x252 = INT64_MIN;
int64_t x264 = -967359427012133579LL;
int64_t x270 = INT64_MAX;
static int32_t x271 = -1;
uint16_t x279 = 1U;
static uint8_t x280 = UINT8_MAX;
int8_t x291 = INT8_MIN;
uint16_t x297 = 62U;
int16_t x300 = -1;
volatile uint32_t t51 = 2144253207U;
volatile uint32_t x311 = 0U;
volatile int64_t t53 = -6LL;
int8_t x313 = -1;
int32_t x317 = 591;
static volatile int8_t x319 = 4;
int8_t x328 = -1;
volatile int8_t x329 = 1;
static uint32_t t58 = 1061695U;
volatile int64_t x340 = INT64_MAX;
int16_t x345 = INT16_MAX;
static int64_t x352 = 3225738795LL;
int64_t t62 = -475LL;
volatile uint8_t x357 = 2U;
volatile uint64_t x362 = 131098LLU;
uint32_t x367 = 9U;
volatile int64_t x370 = -130565931928647LL;
static int64_t t66 = -58379LL;
int64_t x376 = -1LL;
uint8_t x390 = UINT8_MAX;
int16_t x409 = INT16_MAX;
int16_t x410 = 751;
volatile uint64_t t74 = 82106349772154LLU;
int8_t x417 = INT8_MIN;
volatile int32_t x420 = -1;
uint64_t x434 = 2523639957LLU;
int64_t x438 = INT64_MIN;
static int64_t x450 = -23360LL;
static int64_t x462 = 1408285919112LL;
volatile int64_t t82 = -27470080423873LL;
uint64_t t84 = 4LLU;
int8_t x474 = INT8_MIN;
int64_t x475 = INT64_MAX;
static uint16_t x479 = UINT16_MAX;
int32_t x480 = -1;
volatile int16_t x483 = 1;
int8_t x484 = INT8_MAX;
uint64_t t87 = 446387LLU;
int64_t x490 = -1LL;
int16_t x494 = INT16_MAX;
volatile int16_t x496 = 999;
volatile int64_t t90 = -646LL;
volatile int32_t x504 = -338;
int32_t x513 = 0;
volatile uint64_t t94 = 31832574196141LLU;
uint32_t x521 = 253043U;
uint32_t x526 = UINT32_MAX;
int32_t x537 = INT32_MIN;
static int32_t x541 = INT32_MIN;
int64_t x550 = -10995198412446LL;
static int64_t x551 = -1LL;
int8_t x552 = -1;
int64_t t103 = 2186097615044984232LL;
uint32_t x561 = 326842U;
uint16_t x569 = 3441U;
volatile int16_t x572 = INT16_MAX;
uint16_t x577 = 2245U;
int64_t x587 = 1853894231701LL;
uint8_t x610 = UINT8_MAX;
static int64_t x622 = -1LL;
volatile uint16_t x630 = 2151U;
volatile int64_t x634 = 42603073835838487LL;
uint64_t x635 = 34LLU;
volatile int64_t t119 = 723978324LL;
int64_t x658 = -1LL;
volatile int16_t x659 = -376;
int64_t t123 = 378465LL;
int64_t x664 = INT64_MIN;
uint64_t x666 = 47882515160429073LLU;
volatile uint64_t t125 = 6701902630LLU;
uint32_t x677 = 371U;
int32_t x678 = 292;
volatile uint32_t t128 = 21936U;
uint16_t x682 = 0U;
int32_t x683 = -1;
volatile int64_t t130 = -96462905157863LL;
volatile int32_t x693 = INT32_MAX;
int32_t x711 = INT32_MIN;
volatile int64_t x712 = 31627271549294LL;
volatile int32_t x721 = -264568675;
volatile uint64_t x725 = 528437LLU;
int16_t x726 = 6;
int16_t x731 = 10237;
int32_t x732 = INT32_MIN;
int32_t t138 = -90;
int16_t x735 = -186;
uint64_t x755 = 3445527390871856054LLU;
uint64_t t142 = 119061LLU;
int8_t x764 = INT8_MIN;
int16_t x777 = INT16_MAX;
uint8_t x778 = 1U;
int64_t x780 = 28177269426LL;
int32_t x793 = INT32_MIN;
int64_t x794 = -1LL;
uint16_t x795 = 14562U;
int32_t x799 = INT32_MAX;
uint16_t x800 = 10U;
uint32_t x804 = 438U;
static volatile uint16_t x805 = 26285U;
static uint64_t x806 = 227162074LLU;
int16_t x808 = INT16_MIN;
volatile int16_t x809 = -1;
int32_t x815 = -15794542;
int64_t x828 = -1LL;
int64_t t157 = -1465678084341LL;
static int32_t x832 = 4962;
int8_t x835 = -1;
int64_t x857 = -71843117155615LL;
volatile uint32_t x858 = UINT32_MAX;
int16_t x860 = INT16_MIN;
static volatile int16_t x864 = -3;
int64_t x866 = -1LL;
volatile uint64_t t166 = 733LLU;
int64_t x874 = INT64_MIN;
volatile uint16_t x880 = 15U;
static int16_t x897 = INT16_MIN;
static uint16_t x903 = 180U;
uint8_t x907 = 29U;
int64_t t173 = -1244953LL;
int64_t x921 = INT64_MIN;
uint8_t x939 = 13U;
static volatile uint64_t t179 = 1188584447727LLU;
static int32_t x958 = -1;
int8_t x977 = 7;
static uint16_t x978 = 692U;
int16_t x983 = -1;
int16_t x991 = INT16_MAX;
static int8_t x992 = -1;
volatile int64_t x998 = -1514806206504410865LL;
static int32_t x1003 = INT32_MAX;
int64_t x1004 = -1LL;
volatile uint64_t t190 = 52780470747046912LLU;
int64_t x1009 = -22089400886LL;
int32_t x1033 = INT32_MIN;
volatile int16_t x1041 = 3858;
volatile int16_t x1042 = 4472;


void f0(void) {
    	uint64_t x1 = 653283307LLU;
	uint32_t x2 = 11581U;
	int16_t x3 = INT16_MIN;
	int32_t x4 = -484130;
	uint64_t t0 = 27568548079731577LLU;

    t0 = (x1-((x2+x3)+x4));

    if (t0 != 18446744070068372944LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 0U;
	uint64_t x6 = UINT64_MAX;
	volatile int32_t x7 = INT32_MAX;
	uint64_t x8 = 787275170790LLU;
	static volatile uint64_t t1 = 174LLU;

    t1 = (x5-((x6+x7)+x8));

    if (t1 != 18446743284286897180LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 47546U;
	static uint16_t x10 = UINT16_MAX;
	uint16_t x11 = UINT16_MAX;
	uint8_t x12 = 4U;
	volatile uint32_t t2 = 12503941U;

    t2 = (x9-((x10+x11)+x12));

    if (t2 != 4294883768U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	static int8_t x14 = INT8_MAX;
	int8_t x15 = -1;
	int32_t t3 = -438758;

    t3 = (x13-((x14+x15)+x16));

    if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x21 = 155556390U;
	int32_t x23 = INT32_MIN;
	uint64_t x24 = 34692351LLU;
	volatile uint64_t t4 = 22158887254948318LLU;

    t4 = (x21-((x22+x23)+x24));

    if (t4 != 18446744071682932008LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x26 = 25922756U;
	static int32_t x27 = INT32_MAX;
	int16_t x28 = -1;
	static uint32_t t5 = 235183U;

    t5 = (x25-((x26+x27)+x28));

    if (t5 != 2121560931U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = UINT32_MAX;
	int64_t x30 = -16873319089841LL;
	int32_t x31 = 78;
	volatile int32_t x32 = 10273;
	volatile int64_t t6 = 611966241053561812LL;

    t6 = (x29-((x30+x31)+x32));

    if (t6 != 16877614046785LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = 28U;
	volatile uint64_t x34 = 3LLU;
	int64_t x35 = INT64_MIN;
	int16_t x36 = 5175;
	volatile uint64_t t7 = 19LLU;

    t7 = (x33-((x34+x35)+x36));

    if (t7 != 9223372036854770658LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = -29;
	int16_t x38 = -1;
	uint32_t x39 = UINT32_MAX;
	static volatile int16_t x40 = -7;
	static volatile uint32_t t8 = 3161664U;

    t8 = (x37-((x38+x39)+x40));

    if (t8 != 4294967276U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x45 = INT32_MIN;
	volatile uint64_t x46 = UINT64_MAX;
	int16_t x47 = -1;
	static volatile uint64_t t9 = 987LLU;

    t9 = (x45-((x46+x47)+x48));

    if (t9 != 18446744071545016919LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x53 = 818;
	uint8_t x55 = UINT8_MAX;
	volatile int32_t x56 = 16;
	static volatile uint64_t t10 = 70476365981LLU;

    t10 = (x53-((x54+x55)+x56));

    if (t10 != 18446742549893851641LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x57 = -1;
	int32_t x58 = INT32_MIN;
	uint16_t x59 = 20460U;
	static uint8_t x60 = 18U;
	int32_t t11 = -22525;

    t11 = (x57-((x58+x59)+x60));

    if (t11 != 2147463169) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x61 = 31U;
	volatile int32_t x62 = -1;
	int8_t x63 = -4;
	volatile int32_t t12 = 1001944028;

    t12 = (x61-((x62+x63)+x64));

    if (t12 != 37) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint64_t x66 = 849615898997174LLU;
	int16_t x68 = INT16_MAX;
	volatile uint64_t t13 = 63301LLU;

    t13 = (x65-((x66+x67)+x68));

    if (t13 != 18445894457810521670LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x74 = 38269724265347872LL;
	int64_t x76 = -1LL;

    t14 = (x73-((x74+x75)+x76));

    if (t14 != -38269724265353954LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x81 = -1;
	int32_t x82 = INT32_MIN;
	int8_t x83 = 5;
	static int64_t x84 = -351216133LL;
	static volatile int64_t t15 = 191237LL;

    t15 = (x81-((x82+x83)+x84));

    if (t15 != 2498699775LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x89 = 1;
	int64_t x90 = 6605924LL;
	int8_t x91 = INT8_MAX;
	volatile int64_t x92 = INT64_MIN;

    t16 = (x89-((x90+x91)+x92));

    if (t16 != 9223372036848169758LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x93 = -721;
	volatile int8_t x94 = -3;
	uint32_t x96 = 26188003U;
	volatile uint32_t t17 = 10U;

    t17 = (x93-((x94+x95)+x96));

    if (t17 != 4268713040U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x98 = 15282913430LL;
	uint32_t x99 = 250061244U;
	volatile uint64_t t18 = 456135854LLU;

    t18 = (x97-((x98+x99)+x100));

    if (t18 != 18446744058176609709LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x101 = 0U;
	static uint32_t x102 = 5880459U;
	uint64_t x103 = 98LLU;
	volatile int64_t x104 = INT64_MIN;
	volatile uint64_t t19 = 450883672650826465LLU;

    t19 = (x101-((x102+x103)+x104));

    if (t19 != 9223372036848895251LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x109 = -1;
	static volatile int8_t x110 = -1;
	uint8_t x111 = 6U;
	uint16_t x112 = UINT16_MAX;
	static int32_t t20 = 617;

    t20 = (x109-((x110+x111)+x112));

    if (t20 != -65541) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x117 = -7;
	uint64_t x118 = 39279228230796LLU;
	uint16_t x119 = 7228U;
	static volatile int8_t x120 = -6;
	uint64_t t21 = 409LLU;

    t21 = (x117-((x118+x119)+x120));

    if (t21 != 18446704794481313591LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint16_t x125 = UINT16_MAX;
	int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MAX;
	int64_t x128 = -920590LL;
	volatile int64_t t22 = -597864430552448LL;

    t22 = (x125-((x126+x127)+x128));

    if (t22 != 986126LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x129 = UINT64_MAX;
	uint8_t x130 = 3U;
	uint16_t x131 = 943U;
	int8_t x132 = INT8_MIN;
	volatile uint64_t t23 = 3990187835285140LLU;

    t23 = (x129-((x130+x131)+x132));

    if (t23 != 18446744073709550797LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint16_t x137 = 43U;
	int32_t x138 = -1619860;
	int32_t x139 = 57394220;
	uint32_t x140 = UINT32_MAX;
	uint32_t t24 = 113U;

    t24 = (x137-((x138+x139)+x140));

    if (t24 != 4239192980U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x141 = -1;
	int64_t x142 = INT64_MIN;
	int16_t x143 = INT16_MAX;
	int16_t x144 = INT16_MAX;
	int64_t t25 = -3393LL;

    t25 = (x141-((x142+x143)+x144));

    if (t25 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x154 = 179LL;
	static int32_t x155 = -1;
	int16_t x156 = -1;
	int64_t t26 = -10322262439LL;

    t26 = (x153-((x154+x155)+x156));

    if (t26 != -2147483825LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x157 = 2270U;
	int32_t x158 = INT32_MAX;
	int64_t x160 = 7248525646292LL;

    t27 = (x157-((x158+x159)+x160));

    if (t27 != -7250673127541LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x161 = -1;
	static volatile int16_t x164 = INT16_MAX;
	volatile uint64_t t28 = 34215LLU;

    t28 = (x161-((x162+x163)+x164));

    if (t28 != 18446744073708890674LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x169 = 76661661071504LLU;
	uint64_t x170 = 8467335LLU;
	volatile int32_t x171 = -443;
	static int64_t x172 = INT64_MIN;
	uint64_t t29 = 8389780194357LLU;

    t29 = (x169-((x170+x171)+x172));

    if (t29 != 9223448698507380420LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x178 = -1;
	uint64_t x179 = 5223678826696751LLU;
	volatile uint8_t x180 = 30U;
	static volatile uint64_t t30 = 168632929871LLU;

    t30 = (x177-((x178+x179)+x180));

    if (t30 != 18441520394882854835LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x182 = INT64_MAX;
	uint8_t x184 = 0U;
	int64_t t31 = -17689LL;

    t31 = (x181-((x182+x183)+x184));

    if (t31 != -9223372036854775735LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x185 = -64153558423LL;
	int32_t x187 = -1;
	volatile uint16_t x188 = 5305U;

    t32 = (x185-((x186+x187)+x188));

    if (t32 != -64153563768LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x189 = INT16_MAX;
	uint32_t x190 = 2118692U;
	int64_t x191 = -1LL;
	volatile int64_t t33 = 85595832391LL;

    t33 = (x189-((x190+x191)+x192));

    if (t33 != -2149569571LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x193 = 325084391LLU;
	static int64_t x194 = 266235293860LL;
	uint16_t x195 = 43U;
	static uint16_t x196 = 3365U;
	volatile uint64_t t34 = 1409520589749123215LLU;

    t34 = (x193-((x194+x195)+x196));

    if (t34 != 18446743807799338739LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x197 = -1;
	int8_t x198 = -31;
	uint8_t x199 = UINT8_MAX;
	static int16_t x200 = INT16_MIN;

    t35 = (x197-((x198+x199)+x200));

    if (t35 != 32543) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x202 = UINT16_MAX;
	uint64_t x203 = 7582083LLU;
	int16_t x204 = INT16_MIN;
	static uint64_t t36 = 546086296946LLU;

    t36 = (x201-((x202+x203)+x204));

    if (t36 != 4287352445LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x213 = 5U;
	int64_t x215 = -1LL;
	volatile int64_t t37 = -4078859378692987LL;

    t37 = (x213-((x214+x215)+x216));

    if (t37 != 2147516422LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x217 = 0;
	int64_t x218 = -1LL;
	static int16_t x220 = INT16_MIN;
	static int64_t t38 = 4120746062124843LL;

    t38 = (x217-((x218+x219)+x220));

    if (t38 != -29872053LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x226 = 9613U;
	int32_t x227 = -30;
	uint32_t t39 = 20539U;

    t39 = (x225-((x226+x227)+x228));

    if (t39 != 4294957584U) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x229 = -5752148;
	static uint32_t x230 = 26U;
	uint16_t x231 = 1U;
	uint8_t x232 = 1U;

    t40 = (x229-((x230+x231)+x232));

    if (t40 != 4289215120U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x233 = -1;
	volatile uint16_t x234 = UINT16_MAX;
	static int8_t x235 = INT8_MAX;
	int32_t t41 = -7866275;

    t41 = (x233-((x234+x235)+x236));

    if (t41 != -65790) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x245 = UINT8_MAX;
	int64_t x246 = -7386LL;
	static int32_t x247 = 8141;
	int32_t x248 = INT32_MAX;
	volatile int64_t t42 = -165LL;

    t42 = (x245-((x246+x247)+x248));

    if (t42 != -2147484147LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x249 = 26742;
	uint16_t x250 = UINT16_MAX;
	volatile int8_t x251 = INT8_MAX;
	volatile int64_t t43 = -874LL;

    t43 = (x249-((x250+x251)+x252));

    if (t43 != 9223372036854736888LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x261 = INT32_MIN;
	int64_t x262 = -595764226968344LL;
	int64_t x263 = 7LL;
	volatile int64_t t44 = -4992015607786LL;

    t44 = (x261-((x262+x263)+x264));

    if (t44 != 967955189091618268LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x265 = 1;
	int64_t x266 = -3966893469LL;
	static uint64_t x267 = 3102052230199LLU;
	int8_t x268 = INT8_MIN;
	static volatile uint64_t t45 = 422LLU;

    t45 = (x265-((x266+x267)+x268));

    if (t45 != 18446740975624215015LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x269 = INT32_MIN;
	int64_t x272 = INT64_MIN;
	static int64_t t46 = 7176341195510839LL;

    t46 = (x269-((x270+x271)+x272));

    if (t46 != -2147483646LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x273 = -1;
	int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MAX;
	int8_t x276 = INT8_MIN;
	volatile int64_t t47 = 366392460LL;

    t47 = (x273-((x274+x275)+x276));

    if (t47 != 9223372034707292288LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x277 = UINT16_MAX;
	static int32_t x278 = -3;
	volatile int32_t t48 = 106260200;

    t48 = (x277-((x278+x279)+x280));

    if (t48 != 65282) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x281 = -704930684;
	uint32_t x282 = 679708U;
	static int64_t x283 = INT64_MIN;
	int16_t x284 = -1;
	static volatile int64_t t49 = 7752038630888LL;

    t49 = (x281-((x282+x283)+x284));

    if (t49 != 9223372036149165417LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x289 = 75804LL;
	int16_t x290 = INT16_MIN;
	int8_t x292 = INT8_MAX;
	volatile int64_t t50 = -174468080LL;

    t50 = (x289-((x290+x291)+x292));

    if (t50 != 108573LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x298 = UINT32_MAX;
	int8_t x299 = -59;

    t51 = (x297-((x298+x299)+x300));

    if (t51 != 123U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x301 = 30;
	uint32_t x302 = 4U;
	static int8_t x303 = -1;
	uint8_t x304 = 0U;
	uint32_t t52 = 2739U;

    t52 = (x301-((x302+x303)+x304));

    if (t52 != 27U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x309 = -1;
	static int64_t x310 = 29LL;
	static int8_t x312 = -6;

    t53 = (x309-((x310+x311)+x312));

    if (t53 != -24LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x314 = 154095237U;
	int8_t x315 = -1;
	volatile int16_t x316 = 1;
	uint32_t t54 = 164498U;

    t54 = (x313-((x314+x315)+x316));

    if (t54 != 4140872058U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x318 = UINT64_MAX;
	static int8_t x320 = -1;
	uint64_t t55 = 204575454591LLU;

    t55 = (x317-((x318+x319)+x320));

    if (t55 != 589LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x321 = -51;
	int64_t x322 = -1LL;
	int16_t x323 = INT16_MIN;
	static uint64_t x324 = UINT64_MAX;
	uint64_t t56 = 215508LLU;

    t56 = (x321-((x322+x323)+x324));

    if (t56 != 32719LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x325 = 11051799LLU;
	uint32_t x326 = 2081U;
	int16_t x327 = -1;
	volatile uint64_t t57 = 86LLU;

    t57 = (x325-((x326+x327)+x328));

    if (t57 != 11049720LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x330 = UINT8_MAX;
	int16_t x331 = -1;
	volatile uint32_t x332 = 9960U;

    t58 = (x329-((x330+x331)+x332));

    if (t58 != 4294957083U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x337 = 4;
	int32_t x338 = -1;
	int32_t x339 = -111529069;
	volatile int64_t t59 = 10LL;

    t59 = (x337-((x338+x339)+x340));

    if (t59 != -9223372036743246733LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x346 = 387923784730LL;
	uint8_t x347 = 84U;
	uint8_t x348 = UINT8_MAX;
	volatile int64_t t60 = 199LL;

    t60 = (x345-((x346+x347)+x348));

    if (t60 != -387923752302LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x349 = INT32_MAX;
	int8_t x350 = 5;
	int8_t x351 = -1;
	volatile int64_t t61 = 1511LL;

    t61 = (x349-((x350+x351)+x352));

    if (t61 != -1078255152LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x353 = -1;
	int32_t x354 = -1;
	int64_t x355 = 0LL;
	volatile int16_t x356 = 3;

    t62 = (x353-((x354+x355)+x356));

    if (t62 != -3LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x358 = 588U;
	volatile uint32_t x359 = UINT32_MAX;
	int32_t x360 = -1;
	uint32_t t63 = 5U;

    t63 = (x357-((x358+x359)+x360));

    if (t63 != 4294966712U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x361 = INT32_MAX;
	int64_t x363 = 2603202963659LL;
	int32_t x364 = -1;
	volatile uint64_t t64 = 683LLU;

    t64 = (x361-((x362+x363)+x364));

    if (t64 != 18446741472653940507LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x365 = -1LL;
	static int32_t x366 = 10638944;
	uint16_t x368 = UINT16_MAX;
	static int64_t t65 = -331576036LL;

    t65 = (x365-((x366+x367)+x368));

    if (t65 != -10704489LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x369 = -16339109;
	static volatile int8_t x371 = -1;
	uint8_t x372 = 42U;

    t66 = (x369-((x370+x371)+x372));

    if (t66 != 130565915589497LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x373 = 29634006LL;
	int8_t x374 = 0;
	int32_t x375 = INT32_MIN;
	volatile int64_t t67 = -3722453LL;

    t67 = (x373-((x374+x375)+x376));

    if (t67 != 2177117655LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x381 = 143;
	uint16_t x382 = 1295U;
	int16_t x383 = -1;
	volatile uint32_t x384 = 1222521U;
	volatile uint32_t t68 = 9625U;

    t68 = (x381-((x382+x383)+x384));

    if (t68 != 4293743624U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x385 = 125U;
	int64_t x386 = -1LL;
	volatile uint64_t x387 = UINT64_MAX;
	int64_t x388 = 624163080598245LL;
	volatile uint64_t t69 = 892315LLU;

    t69 = (x385-((x386+x387)+x388));

    if (t69 != 18446119910628953498LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x389 = -8277;
	uint64_t x391 = 12388464626896LLU;
	int32_t x392 = INT32_MAX;
	volatile uint64_t t70 = 762891357194713383LLU;

    t70 = (x389-((x390+x391)+x392));

    if (t70 != 18446731683097432541LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x401 = 99245689995977780LLU;
	static volatile int32_t x402 = 0;
	uint8_t x403 = UINT8_MAX;
	uint8_t x404 = UINT8_MAX;
	volatile uint64_t t71 = 3LLU;

    t71 = (x401-((x402+x403)+x404));

    if (t71 != 99245689995977270LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x405 = UINT32_MAX;
	static int64_t x406 = 510147LL;
	int32_t x407 = -356326;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t72 = 432LLU;

    t72 = (x405-((x406+x407)+x408));

    if (t72 != 4294813475LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int64_t x411 = -2408956495511012110LL;
	int64_t x412 = INT64_MAX;
	static int64_t t73 = -23LL;

    t73 = (x409-((x410+x411)+x412));

    if (t73 != -6814415541343731681LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x413 = INT32_MAX;
	static volatile uint64_t x414 = UINT64_MAX;
	static volatile int16_t x415 = -4;
	int8_t x416 = -1;

    t74 = (x413-((x414+x415)+x416));

    if (t74 != 2147483653LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x418 = UINT64_MAX;
	int64_t x419 = -157LL;
	volatile uint64_t t75 = 222LLU;

    t75 = (x417-((x418+x419)+x420));

    if (t75 != 31LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x421 = 7U;
	int64_t x422 = -1LL;
	int8_t x423 = -1;
	volatile int16_t x424 = INT16_MIN;
	static int64_t t76 = -2018LL;

    t76 = (x421-((x422+x423)+x424));

    if (t76 != 32777LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x429 = INT64_MAX;
	volatile int8_t x430 = -1;
	int8_t x431 = 1;
	int16_t x432 = INT16_MAX;
	int64_t t77 = 176451LL;

    t77 = (x429-((x430+x431)+x432));

    if (t77 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x433 = INT64_MAX;
	volatile int32_t x435 = 110234491;
	volatile uint32_t x436 = UINT32_MAX;
	uint64_t t78 = 64LLU;

    t78 = (x433-((x434+x435)+x436));

    if (t78 != 9223372029925934064LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x437 = INT8_MIN;
	static int16_t x439 = INT16_MAX;
	uint32_t x440 = 1U;
	volatile int64_t t79 = 3082LL;

    t79 = (x437-((x438+x439)+x440));

    if (t79 != 9223372036854742912LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x449 = -32822;
	int8_t x451 = INT8_MIN;
	uint16_t x452 = 6U;
	volatile int64_t t80 = 1021273755338081LL;

    t80 = (x449-((x450+x451)+x452));

    if (t80 != -9340LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x457 = 329515268LL;
	static int8_t x458 = INT8_MAX;
	uint32_t x459 = UINT32_MAX;
	int16_t x460 = 2;
	static volatile int64_t t81 = -27162483748106577LL;

    t81 = (x457-((x458+x459)+x460));

    if (t81 != 329515140LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x461 = UINT8_MAX;
	volatile int64_t x463 = INT64_MIN;
	static int64_t x464 = INT64_MAX;

    t82 = (x461-((x462+x463)+x464));

    if (t82 != -1408285918856LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x465 = 2U;
	int64_t x466 = INT64_MIN;
	static uint8_t x467 = 5U;
	int32_t x468 = -1;
	static int64_t t83 = -1491805257960032742LL;

    t83 = (x465-((x466+x467)+x468));

    if (t83 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x469 = INT8_MIN;
	uint64_t x470 = 5051057LLU;
	uint16_t x471 = UINT16_MAX;
	volatile int16_t x472 = INT16_MAX;

    t84 = (x469-((x470+x471)+x472));

    if (t84 != 18446744073704402129LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x473 = INT8_MAX;
	uint8_t x476 = 3U;
	int64_t t85 = -1LL;

    t85 = (x473-((x474+x475)+x476));

    if (t85 != -9223372036854775555LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x477 = INT16_MAX;
	static int32_t x478 = INT32_MIN;
	static volatile int32_t t86 = -267525;

    t86 = (x477-((x478+x479)+x480));

    if (t86 != 2147450881) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x481 = UINT64_MAX;
	static int32_t x482 = INT32_MIN;

    t87 = (x481-((x482+x483)+x484));

    if (t87 != 2147483519LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x489 = -2;
	uint32_t x491 = UINT32_MAX;
	uint32_t x492 = 1871134U;
	static volatile int64_t t88 = -23253897447408LL;

    t88 = (x489-((x490+x491)+x492));

    if (t88 != -4296838430LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint16_t x493 = 4U;
	uint32_t x495 = 18282U;
	uint32_t t89 = 148762843U;

    t89 = (x493-((x494+x495)+x496));

    if (t89 != 4294915252U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x497 = -116914077LL;
	volatile int16_t x498 = INT16_MIN;
	static int32_t x499 = 487126540;
	int16_t x500 = INT16_MIN;

    t90 = (x497-((x498+x499)+x500));

    if (t90 != -603975081LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x501 = 10399357786114LLU;
	int8_t x502 = INT8_MAX;
	volatile uint16_t x503 = 7U;
	static volatile uint64_t t91 = 424328788LLU;

    t91 = (x501-((x502+x503)+x504));

    if (t91 != 10399357786318LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x505 = INT32_MAX;
	int16_t x506 = INT16_MIN;
	uint64_t x507 = UINT64_MAX;
	static int32_t x508 = INT32_MIN;
	volatile uint64_t t92 = 59062578LLU;

    t92 = (x505-((x506+x507)+x508));

    if (t92 != 4295000064LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x509 = 394914526U;
	int8_t x510 = INT8_MIN;
	uint32_t x511 = 1U;
	uint32_t x512 = 2998984U;
	volatile uint32_t t93 = 7U;

    t93 = (x509-((x510+x511)+x512));

    if (t93 != 391915669U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x514 = INT8_MIN;
	uint32_t x515 = 116674U;
	volatile uint64_t x516 = 9LLU;

    t94 = (x513-((x514+x515)+x516));

    if (t94 != 18446744073709435061LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x517 = -1;
	int16_t x518 = 23;
	int16_t x519 = -1;
	uint16_t x520 = UINT16_MAX;
	volatile int32_t t95 = -23;

    t95 = (x517-((x518+x519)+x520));

    if (t95 != -65558) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x522 = INT8_MIN;
	int32_t x523 = -2245760;
	static int64_t x524 = 9235988098LL;
	volatile int64_t t96 = -36677596871439882LL;

    t96 = (x521-((x522+x523)+x524));

    if (t96 != -9233489167LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x525 = INT32_MIN;
	uint16_t x527 = 56U;
	int64_t x528 = 81578664LL;
	static int64_t t97 = -95LL;

    t97 = (x525-((x526+x527)+x528));

    if (t97 != -2229062367LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x529 = 11327U;
	volatile int32_t x530 = -20549;
	int32_t x531 = -121844;
	int8_t x532 = INT8_MIN;
	volatile int32_t t98 = 211312375;

    t98 = (x529-((x530+x531)+x532));

    if (t98 != 153848) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x538 = -1;
	static volatile int16_t x539 = INT16_MAX;
	int32_t x540 = INT32_MIN;
	static volatile int32_t t99 = -325417870;

    t99 = (x537-((x538+x539)+x540));

    if (t99 != -32766) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x542 = 7947U;
	volatile uint64_t x543 = UINT64_MAX;
	static volatile uint8_t x544 = 76U;
	uint64_t t100 = 1875284537LLU;

    t100 = (x541-((x542+x543)+x544));

    if (t100 != 18446744071562059946LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x545 = INT8_MAX;
	uint64_t x546 = UINT64_MAX;
	int16_t x547 = -1;
	volatile int64_t x548 = -8958LL;
	uint64_t t101 = 1501868599680070256LLU;

    t101 = (x545-((x546+x547)+x548));

    if (t101 != 9087LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x549 = INT8_MIN;
	int64_t t102 = 180373709LL;

    t102 = (x549-((x550+x551)+x552));

    if (t102 != 10995198412320LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x553 = -7115;
	int64_t x554 = INT64_MIN;
	volatile int32_t x555 = INT32_MAX;
	static int16_t x556 = -4057;

    t103 = (x553-((x554+x555)+x556));

    if (t103 != 9223372034707289103LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x557 = UINT64_MAX;
	int64_t x558 = INT64_MIN;
	uint16_t x559 = UINT16_MAX;
	uint64_t x560 = UINT64_MAX;
	volatile uint64_t t104 = 4181646792LLU;

    t104 = (x557-((x558+x559)+x560));

    if (t104 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x562 = -31LL;
	int8_t x563 = -15;
	uint8_t x564 = UINT8_MAX;
	int64_t t105 = -233640386LL;

    t105 = (x561-((x562+x563)+x564));

    if (t105 != 326633LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x565 = -1912;
	static uint8_t x566 = UINT8_MAX;
	static uint16_t x567 = UINT16_MAX;
	static uint8_t x568 = 15U;
	volatile int32_t t106 = 97;

    t106 = (x565-((x566+x567)+x568));

    if (t106 != -67717) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x570 = INT32_MIN;
	uint8_t x571 = 119U;
	int32_t t107 = -645415;

    t107 = (x569-((x570+x571)+x572));

    if (t107 != 2147454203) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x578 = -1;
	int16_t x579 = INT16_MIN;
	uint16_t x580 = UINT16_MAX;
	int32_t t108 = 0;

    t108 = (x577-((x578+x579)+x580));

    if (t108 != -30521) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x581 = INT16_MAX;
	int64_t x582 = -1LL;
	int32_t x583 = -254074;
	static int8_t x584 = INT8_MAX;
	int64_t t109 = 364679104374402LL;

    t109 = (x581-((x582+x583)+x584));

    if (t109 != 286715LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x585 = INT8_MAX;
	static int64_t x586 = 3809014246LL;
	int8_t x588 = INT8_MIN;
	static volatile int64_t t110 = -255453324LL;

    t110 = (x585-((x586+x587)+x588));

    if (t110 != -1857703245692LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x593 = INT8_MAX;
	uint8_t x594 = UINT8_MAX;
	volatile uint16_t x595 = 6440U;
	int64_t x596 = INT64_MIN;
	volatile int64_t t111 = 4LL;

    t111 = (x593-((x594+x595)+x596));

    if (t111 != 9223372036854769240LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x597 = 805U;
	int16_t x598 = INT16_MIN;
	volatile int16_t x599 = INT16_MAX;
	volatile int16_t x600 = INT16_MIN;
	uint32_t t112 = 230694984U;

    t112 = (x597-((x598+x599)+x600));

    if (t112 != 33574U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x601 = INT16_MIN;
	int64_t x602 = INT64_MIN;
	uint16_t x603 = 2210U;
	static int64_t x604 = 27700LL;
	int64_t t113 = -6LL;

    t113 = (x601-((x602+x603)+x604));

    if (t113 != 9223372036854713130LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x609 = -1;
	volatile uint16_t x611 = 235U;
	volatile int8_t x612 = INT8_MIN;
	volatile int32_t t114 = 16;

    t114 = (x609-((x610+x611)+x612));

    if (t114 != -363) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x621 = INT16_MIN;
	int32_t x623 = -1;
	volatile int32_t x624 = 510;
	volatile int64_t t115 = -2LL;

    t115 = (x621-((x622+x623)+x624));

    if (t115 != -33276LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x625 = 2281;
	uint16_t x626 = 4U;
	uint8_t x627 = 3U;
	int8_t x628 = INT8_MAX;
	int32_t t116 = -1541393;

    t116 = (x625-((x626+x627)+x628));

    if (t116 != 2147) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x629 = -1;
	uint32_t x631 = 263994871U;
	int16_t x632 = INT16_MAX;
	uint32_t t117 = 2124223783U;

    t117 = (x629-((x630+x631)+x632));

    if (t117 != 4030937506U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x633 = UINT16_MAX;
	uint32_t x636 = UINT32_MAX;
	volatile uint64_t t118 = 408407502028244908LLU;

    t118 = (x633-((x634+x635)+x636));

    if (t118 != 18404140995578811335LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x641 = INT64_MAX;
	int64_t x642 = 1LL;
	static uint32_t x643 = 3U;
	uint32_t x644 = UINT32_MAX;

    t119 = (x641-((x642+x643)+x644));

    if (t119 != 9223372032559808508LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x645 = INT32_MIN;
	int16_t x646 = INT16_MIN;
	int64_t x647 = 132728825179LL;
	uint16_t x648 = 13U;
	static volatile int64_t t120 = 67266LL;

    t120 = (x645-((x646+x647)+x648));

    if (t120 != -134876276072LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x649 = INT8_MAX;
	int8_t x650 = -21;
	int16_t x651 = -451;
	int8_t x652 = INT8_MIN;
	volatile int32_t t121 = -332911092;

    t121 = (x649-((x650+x651)+x652));

    if (t121 != 727) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x653 = UINT32_MAX;
	int32_t x654 = -1357655;
	int32_t x655 = 471512763;
	uint8_t x656 = 15U;
	volatile uint32_t t122 = 1715U;

    t122 = (x653-((x654+x655)+x656));

    if (t122 != 3824812172U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x657 = INT32_MAX;
	uint32_t x660 = 0U;

    t123 = (x657-((x658+x659)+x660));

    if (t123 != 2147484024LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x661 = INT8_MIN;
	uint64_t x662 = UINT64_MAX;
	int16_t x663 = INT16_MAX;
	uint64_t t124 = 9560604879100LLU;

    t124 = (x661-((x662+x663)+x664));

    if (t124 != 9223372036854742914LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x665 = 388;
	static int64_t x667 = 22217293324LL;
	int8_t x668 = 61;

    t125 = (x665-((x666+x667)+x668));

    if (t125 != 18398861536331829546LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x669 = INT8_MAX;
	int16_t x670 = 3;
	static int8_t x671 = 51;
	uint8_t x672 = 111U;
	volatile int32_t t126 = 45;

    t126 = (x669-((x670+x671)+x672));

    if (t126 != -38) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x673 = 25829U;
	volatile uint8_t x674 = 45U;
	static int8_t x675 = -1;
	static int32_t x676 = -7732;
	int32_t t127 = -4687;

    t127 = (x673-((x674+x675)+x676));

    if (t127 != 33517) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x679 = -1;
	static volatile uint16_t x680 = 1242U;

    t128 = (x677-((x678+x679)+x680));

    if (t128 != 4294966134U) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x681 = -1;
	uint8_t x684 = UINT8_MAX;
	static volatile int32_t t129 = 5492692;

    t129 = (x681-((x682+x683)+x684));

    if (t129 != -255) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x685 = 13U;
	uint8_t x686 = 21U;
	int64_t x687 = -15119816LL;
	volatile int32_t x688 = 1568;

    t130 = (x685-((x686+x687)+x688));

    if (t130 != 15118240LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x689 = 6;
	uint32_t x690 = UINT32_MAX;
	static uint32_t x691 = 131U;
	int32_t x692 = INT32_MIN;
	static uint32_t t131 = 187001U;

    t131 = (x689-((x690+x691)+x692));

    if (t131 != 2147483524U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x694 = 63U;
	uint32_t x695 = 177955460U;
	int64_t x696 = 5521252454964LL;
	int64_t t132 = 5960598040779696LL;

    t132 = (x693-((x694+x695)+x696));

    if (t132 != -5519282926840LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x709 = 429U;
	uint32_t x710 = 4583U;
	int64_t t133 = -10188019777690456LL;

    t133 = (x709-((x710+x711)+x712));

    if (t133 != -31629419037096LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x713 = UINT64_MAX;
	uint64_t x714 = 206213911323LLU;
	uint16_t x715 = UINT16_MAX;
	int8_t x716 = INT8_MAX;
	uint64_t t134 = 617291761LLU;

    t134 = (x713-((x714+x715)+x716));

    if (t134 != 18446743867495574630LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x717 = UINT8_MAX;
	static int8_t x718 = INT8_MIN;
	volatile int32_t x719 = -1;
	int8_t x720 = INT8_MAX;
	volatile int32_t t135 = 0;

    t135 = (x717-((x718+x719)+x720));

    if (t135 != 257) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x722 = INT16_MAX;
	uint8_t x723 = 9U;
	uint16_t x724 = 7289U;
	volatile int32_t t136 = 16173;

    t136 = (x721-((x722+x723)+x724));

    if (t136 != -264608740) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x727 = -3184264LL;
	uint32_t x728 = 152953844U;
	volatile uint64_t t137 = 3206118789LLU;

    t137 = (x725-((x726+x727)+x728));

    if (t137 != 18446744073560310467LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x729 = -1;
	static uint8_t x730 = 32U;

    t138 = (x729-((x730+x731)+x732));

    if (t138 != 2147473378) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x733 = 5U;
	volatile uint16_t x734 = 5322U;
	uint64_t x736 = 6017758359022639LLU;
	volatile uint64_t t139 = 279350492896191LLU;

    t139 = (x733-((x734+x735)+x736));

    if (t139 != 18440726315350523846LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x737 = -1;
	volatile uint32_t x738 = 58357U;
	uint64_t x739 = 31934697317LLU;
	int16_t x740 = -98;
	volatile uint64_t t140 = 879552918588880779LLU;

    t140 = (x737-((x738+x739)+x740));

    if (t140 != 18446744041774796039LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x749 = 24590U;
	uint32_t x750 = UINT32_MAX;
	int32_t x751 = INT32_MAX;
	static int8_t x752 = -1;
	uint32_t t141 = 18102U;

    t141 = (x749-((x750+x751)+x752));

    if (t141 != 2147508241U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x753 = INT8_MIN;
	int64_t x754 = -1LL;
	int64_t x756 = -240685626958LL;

    t142 = (x753-((x754+x755)+x756));

    if (t142 != 15001216923523322393LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x757 = -1LL;
	int64_t x758 = -14636382181745LL;
	static int64_t x759 = -1LL;
	static volatile int32_t x760 = 98;
	int64_t t143 = 3379LL;

    t143 = (x757-((x758+x759)+x760));

    if (t143 != 14636382181647LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x761 = 82037796676714629LLU;
	uint8_t x762 = 0U;
	uint32_t x763 = 180814676U;
	volatile uint64_t t144 = 7792410745LLU;

    t144 = (x761-((x762+x763)+x764));

    if (t144 != 82037796495900081LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x765 = INT16_MAX;
	volatile uint64_t x766 = 584553LLU;
	int32_t x767 = INT32_MIN;
	int64_t x768 = INT64_MAX;
	uint64_t t145 = 710595706000LLU;

    t145 = (x765-((x766+x767)+x768));

    if (t145 != 9223372039001707671LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x769 = INT8_MAX;
	volatile int8_t x770 = INT8_MIN;
	int8_t x771 = INT8_MIN;
	volatile uint16_t x772 = 19232U;
	int32_t t146 = -1;

    t146 = (x769-((x770+x771)+x772));

    if (t146 != -18849) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x773 = 1921227U;
	int16_t x774 = INT16_MIN;
	int8_t x775 = -1;
	int32_t x776 = 17;
	uint32_t t147 = 183068936U;

    t147 = (x773-((x774+x775)+x776));

    if (t147 != 1953979U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x779 = 2U;
	volatile int64_t t148 = 97173519421LL;

    t148 = (x777-((x778+x779)+x780));

    if (t148 != -28177236662LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x789 = INT32_MAX;
	int8_t x790 = -1;
	volatile int32_t x791 = INT32_MAX;
	volatile uint32_t x792 = 428549885U;
	uint32_t t149 = 123483U;

    t149 = (x789-((x790+x791)+x792));

    if (t149 != 3866417412U) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x796 = 88U;
	int64_t t150 = 25201066094312459LL;

    t150 = (x793-((x794+x795)+x796));

    if (t150 != -2147498297LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x797 = 110194;
	uint32_t x798 = 1566848U;
	uint32_t t151 = 3U;

    t151 = (x797-((x798+x799)+x800));

    if (t151 != 2146026985U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x801 = -1;
	static volatile int64_t x802 = -814299545657LL;
	int8_t x803 = 0;
	int64_t t152 = -3511436048839808LL;

    t152 = (x801-((x802+x803)+x804));

    if (t152 != 814299545218LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x807 = -1;
	volatile uint64_t t153 = 167449796242821725LLU;

    t153 = (x805-((x806+x807)+x808));

    if (t153 != 18446744073482448596LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x810 = INT8_MAX;
	int32_t x811 = -1;
	int32_t x812 = INT32_MIN;
	static volatile int32_t t154 = 49454399;

    t154 = (x809-((x810+x811)+x812));

    if (t154 != 2147483521) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x813 = -265429755274LL;
	volatile int16_t x814 = INT16_MIN;
	volatile uint32_t x816 = 11U;
	int64_t t155 = -1126063643147000996LL;

    t155 = (x813-((x814+x815)+x816));

    if (t155 != -269708895271LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x821 = 2U;
	static int32_t x822 = -1;
	int16_t x823 = INT16_MIN;
	int8_t x824 = INT8_MIN;
	volatile int32_t t156 = -48990;

    t156 = (x821-((x822+x823)+x824));

    if (t156 != 32899) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x825 = UINT8_MAX;
	static int8_t x826 = -23;
	static int32_t x827 = INT32_MAX;

    t157 = (x825-((x826+x827)+x828));

    if (t157 != -2147483368LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x829 = INT32_MIN;
	volatile int64_t x830 = 64340843523459LL;
	volatile int16_t x831 = 4388;
	volatile int64_t t158 = 468933390962931LL;

    t158 = (x829-((x830+x831)+x832));

    if (t158 != -64342991016457LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x833 = UINT16_MAX;
	static int8_t x834 = -1;
	int32_t x836 = INT32_MAX;
	int32_t t159 = 1508447;

    t159 = (x833-((x834+x835)+x836));

    if (t159 != -2147418110) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x837 = UINT16_MAX;
	static volatile uint8_t x838 = 1U;
	int8_t x839 = 5;
	int16_t x840 = INT16_MIN;
	int32_t t160 = 847055692;

    t160 = (x837-((x838+x839)+x840));

    if (t160 != 98297) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x841 = UINT64_MAX;
	uint64_t x842 = 3697714754618260558LLU;
	int8_t x843 = INT8_MAX;
	int8_t x844 = INT8_MIN;
	volatile uint64_t t161 = 67581008547369LLU;

    t161 = (x841-((x842+x843)+x844));

    if (t161 != 14749029319091291058LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x845 = UINT32_MAX;
	volatile int64_t x846 = -39685199637803869LL;
	uint64_t x847 = UINT64_MAX;
	int32_t x848 = -1;
	volatile uint64_t t162 = 9475831880LLU;

    t162 = (x845-((x846+x847)+x848));

    if (t162 != 39685203932771166LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x853 = 2U;
	int16_t x854 = INT16_MIN;
	int32_t x855 = -3639023;
	static uint32_t x856 = UINT32_MAX;
	uint32_t t163 = 12034433U;

    t163 = (x853-((x854+x855)+x856));

    if (t163 != 3671794U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x859 = 0;
	volatile int64_t t164 = -71980LL;

    t164 = (x857-((x858+x859)+x860));

    if (t164 != -71847412090142LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x861 = -14136;
	int32_t x862 = 70;
	int16_t x863 = -1;
	volatile int32_t t165 = 8;

    t165 = (x861-((x862+x863)+x864));

    if (t165 != -14202) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x865 = 0U;
	uint64_t x867 = 2769LLU;
	static uint16_t x868 = UINT16_MAX;

    t166 = (x865-((x866+x867)+x868));

    if (t166 != 18446744073709483313LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x873 = 927525U;
	volatile int64_t x875 = INT64_MAX;
	uint16_t x876 = 19U;
	int64_t t167 = 198209487LL;

    t167 = (x873-((x874+x875)+x876));

    if (t167 != 927507LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x877 = -234822571LL;
	int32_t x878 = INT32_MIN;
	volatile uint8_t x879 = 8U;
	volatile int64_t t168 = -6294999LL;

    t168 = (x877-((x878+x879)+x880));

    if (t168 != 1912661054LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x898 = 36U;
	uint64_t x899 = UINT64_MAX;
	uint8_t x900 = UINT8_MAX;
	volatile uint64_t t169 = 1875231608441LLU;

    t169 = (x897-((x898+x899)+x900));

    if (t169 != 18446744073709518558LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x901 = -1LL;
	int32_t x902 = INT32_MIN;
	uint64_t x904 = UINT64_MAX;
	uint64_t t170 = 5043530218437555LLU;

    t170 = (x901-((x902+x903)+x904));

    if (t170 != 2147483468LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x905 = 3;
	int16_t x906 = INT16_MIN;
	volatile int32_t x908 = 375;
	volatile int32_t t171 = 825333621;

    t171 = (x905-((x906+x907)+x908));

    if (t171 != 32367) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x913 = -1;
	int16_t x914 = 3;
	int32_t x915 = -1910;
	volatile uint8_t x916 = 22U;
	int32_t t172 = 386501;

    t172 = (x913-((x914+x915)+x916));

    if (t172 != 1884) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x917 = INT64_MIN;
	uint8_t x918 = 10U;
	int64_t x919 = -1LL;
	int8_t x920 = INT8_MIN;

    t173 = (x917-((x918+x919)+x920));

    if (t173 != -9223372036854775689LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x922 = INT16_MIN;
	int16_t x923 = INT16_MAX;
	volatile int32_t x924 = -1;
	volatile int64_t t174 = -5617LL;

    t174 = (x921-((x922+x923)+x924));

    if (t174 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x925 = 16U;
	static volatile int8_t x926 = INT8_MAX;
	uint8_t x927 = UINT8_MAX;
	static int32_t x928 = -1;
	static int32_t t175 = -3486249;

    t175 = (x925-((x926+x927)+x928));

    if (t175 != -365) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x933 = 122U;
	uint8_t x934 = 7U;
	volatile uint32_t x935 = UINT32_MAX;
	static int32_t x936 = -1;
	volatile uint32_t t176 = 35533U;

    t176 = (x933-((x934+x935)+x936));

    if (t176 != 117U) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x937 = INT16_MIN;
	static uint16_t x938 = UINT16_MAX;
	int64_t x940 = INT64_MIN;
	int64_t t177 = -433639817179944LL;

    t177 = (x937-((x938+x939)+x940));

    if (t177 != 9223372036854677492LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x941 = INT32_MIN;
	static uint32_t x942 = 670638700U;
	static volatile int64_t x943 = 2087086249LL;
	static volatile int32_t x944 = 6708;
	volatile int64_t t178 = -90410288LL;

    t178 = (x941-((x942+x943)+x944));

    if (t178 != -4905215305LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x949 = 56799460U;
	volatile uint64_t x950 = 551LLU;
	int16_t x951 = -1;
	int64_t x952 = 256466414737352698LL;

    t179 = (x949-((x950+x951)+x952));

    if (t179 != 18190277659028997828LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x953 = UINT32_MAX;
	uint8_t x954 = 20U;
	int32_t x955 = INT32_MIN;
	static int16_t x956 = 171;
	volatile uint32_t t180 = 111884U;

    t180 = (x953-((x954+x955)+x956));

    if (t180 != 2147483456U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x957 = 3;
	int16_t x959 = 3439;
	int16_t x960 = INT16_MIN;
	static int32_t t181 = 457;

    t181 = (x957-((x958+x959)+x960));

    if (t181 != 29333) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x965 = 13U;
	volatile uint64_t x966 = UINT64_MAX;
	int32_t x967 = INT32_MIN;
	static int32_t x968 = INT32_MIN;
	static volatile uint64_t t182 = 95907719201737LLU;

    t182 = (x965-((x966+x967)+x968));

    if (t182 != 4294967310LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x973 = INT32_MIN;
	uint8_t x974 = UINT8_MAX;
	uint32_t x975 = UINT32_MAX;
	uint8_t x976 = 1U;
	volatile uint32_t t183 = 3848U;

    t183 = (x973-((x974+x975)+x976));

    if (t183 != 2147483393U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x979 = 793138926120281LL;
	int32_t x980 = INT32_MIN;
	int64_t t184 = 5846378LL;

    t184 = (x977-((x978+x979)+x980));

    if (t184 != -793136778637318LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x981 = UINT32_MAX;
	static int32_t x982 = -1709115;
	int16_t x984 = INT16_MIN;
	uint32_t t185 = 23287883U;

    t185 = (x981-((x982+x983)+x984));

    if (t185 != 1741883U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x985 = -17240963;
	uint32_t x986 = UINT32_MAX;
	volatile int64_t x987 = 381720018667603LL;
	int8_t x988 = INT8_MAX;
	volatile int64_t t186 = 117327785631LL;

    t186 = (x985-((x986+x987)+x988));

    if (t186 != -381724330875988LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x989 = INT16_MIN;
	int32_t x990 = 13291;
	int32_t t187 = -2292595;

    t187 = (x989-((x990+x991)+x992));

    if (t187 != -78825) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x993 = UINT64_MAX;
	uint32_t x994 = 2283088U;
	volatile uint64_t x995 = UINT64_MAX;
	volatile int16_t x996 = -74;
	static volatile uint64_t t188 = 3638610968106LLU;

    t188 = (x993-((x994+x995)+x996));

    if (t188 != 18446744073707268602LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x997 = -1;
	int64_t x999 = -1LL;
	volatile int32_t x1000 = INT32_MAX;
	volatile int64_t t189 = 909490353LL;

    t189 = (x997-((x998+x999)+x1000));

    if (t189 != 1514806204356927218LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1001 = INT16_MIN;
	uint64_t x1002 = UINT64_MAX;

    t190 = (x1001-((x1002+x1003)+x1004));

    if (t190 != 18446744071562035203LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1010 = INT64_MIN;
	int32_t x1011 = INT32_MAX;
	static uint16_t x1012 = UINT16_MAX;
	volatile int64_t t191 = -12512LL;

    t191 = (x1009-((x1010+x1011)+x1012));

    if (t191 != 9223372012617825740LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1013 = -1;
	uint16_t x1014 = 3U;
	int32_t x1015 = -126807980;
	uint32_t x1016 = UINT32_MAX;
	volatile uint32_t t192 = 3U;

    t192 = (x1013-((x1014+x1015)+x1016));

    if (t192 != 126807977U) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint16_t x1017 = UINT16_MAX;
	uint64_t x1018 = UINT64_MAX;
	int16_t x1019 = 1;
	int16_t x1020 = 86;
	volatile uint64_t t193 = 256497480294LLU;

    t193 = (x1017-((x1018+x1019)+x1020));

    if (t193 != 65449LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1021 = -1;
	uint64_t x1022 = 42107LLU;
	uint8_t x1023 = 52U;
	uint16_t x1024 = 0U;
	uint64_t t194 = 92250201546LLU;

    t194 = (x1021-((x1022+x1023)+x1024));

    if (t194 != 18446744073709509456LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x1034 = 1;
	int32_t x1035 = INT32_MIN;
	static uint16_t x1036 = UINT16_MAX;
	int32_t t195 = -279;

    t195 = (x1033-((x1034+x1035)+x1036));

    if (t195 != -65536) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1037 = 88U;
	int16_t x1038 = -1;
	uint16_t x1039 = 44U;
	static uint64_t x1040 = UINT64_MAX;
	volatile uint64_t t196 = 7217998975LLU;

    t196 = (x1037-((x1038+x1039)+x1040));

    if (t196 != 46LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x1043 = -1;
	static uint64_t x1044 = 1436LLU;
	uint64_t t197 = 0LLU;

    t197 = (x1041-((x1042+x1043)+x1044));

    if (t197 != 18446744073709549567LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x1045 = UINT8_MAX;
	static int64_t x1046 = -1LL;
	uint8_t x1047 = 2U;
	volatile uint16_t x1048 = 132U;
	volatile int64_t t198 = -116447942808516LL;

    t198 = (x1045-((x1046+x1047)+x1048));

    if (t198 != 122LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1049 = 4480715695214708297LL;
	uint32_t x1050 = 1494189U;
	static uint16_t x1051 = UINT16_MAX;
	int8_t x1052 = INT8_MIN;
	volatile int64_t t199 = 4270161600771832689LL;

    t199 = (x1049-((x1050+x1051)+x1052));

    if (t199 != 4480715695213148701LL) { NG(); } else { ; }
	
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

