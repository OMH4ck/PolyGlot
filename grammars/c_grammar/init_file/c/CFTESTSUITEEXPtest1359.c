
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

int8_t x3 = INT8_MIN;
volatile int8_t x14 = INT8_MIN;
int16_t x18 = -1;
int8_t x21 = -1;
volatile int8_t x28 = INT8_MIN;
volatile int32_t t5 = 16494;
int16_t x38 = INT16_MIN;
int32_t x40 = INT32_MAX;
static volatile uint32_t x53 = 52650U;
int8_t x57 = INT8_MIN;
volatile int32_t t11 = 657;
int32_t x62 = INT32_MIN;
volatile int8_t x68 = INT8_MAX;
volatile int32_t t13 = -1;
uint16_t x70 = 648U;
int8_t x71 = -1;
int32_t t14 = -1402;
volatile int64_t x80 = INT64_MIN;
volatile int64_t t16 = -9775308040020826LL;
int16_t x83 = INT16_MIN;
volatile int64_t t19 = 1710374365188LL;
int8_t x95 = INT8_MAX;
volatile uint64_t t20 = 25115282005763628LLU;
uint32_t x100 = 866673U;
static int32_t x101 = 1;
volatile int16_t x102 = INT16_MIN;
static volatile int64_t x105 = -107812491158884308LL;
int64_t t23 = 2947089545740914053LL;
static int32_t x110 = INT32_MAX;
volatile int32_t x116 = -11167;
static int64_t x118 = 1LL;
static uint8_t x123 = 11U;
static uint8_t x124 = UINT8_MAX;
static volatile uint64_t t28 = 7LLU;
int16_t x138 = INT16_MIN;
static int8_t x139 = INT8_MIN;
uint64_t t31 = 98418877LLU;
static int16_t x146 = -1;
static volatile int64_t x151 = INT64_MAX;
static uint64_t t35 = 241546186595726LLU;
volatile int32_t t36 = 1;
int16_t x164 = -1;
uint32_t x171 = UINT32_MAX;
int64_t x172 = 27709485364933217LL;
int32_t t40 = 181051;
static volatile uint32_t x180 = 115613134U;
static uint32_t t41 = 15051U;
int8_t x186 = -1;
int32_t x187 = -985;
static uint16_t x193 = UINT16_MAX;
int64_t x204 = INT64_MAX;
static volatile int32_t x223 = INT32_MIN;
int8_t x227 = -1;
int64_t x228 = -5LL;
uint64_t x238 = 7491083767LLU;
static int16_t x243 = -1;
uint16_t x245 = UINT16_MAX;
int64_t x251 = INT64_MIN;
int32_t t56 = 1817713;
int8_t x253 = -1;
uint64_t x255 = UINT64_MAX;
int32_t t57 = -204;
uint8_t x258 = 2U;
uint64_t x260 = UINT64_MAX;
int32_t t59 = 467503543;
volatile int32_t t60 = -1992686;
volatile int8_t x271 = 5;
uint16_t x275 = UINT16_MAX;
int32_t x276 = -12095;
int16_t x279 = INT16_MAX;
volatile int32_t t63 = 52235;
int64_t x281 = -1LL;
int8_t x283 = INT8_MIN;
int64_t x287 = INT64_MIN;
static volatile int8_t x290 = -1;
volatile int8_t x294 = -1;
volatile int32_t x303 = INT32_MIN;
uint8_t x309 = 1U;
static int32_t x317 = 8;
int64_t x321 = 2313LL;
uint32_t x322 = 51U;
int32_t x324 = INT32_MIN;
static int64_t x335 = INT64_MIN;
static int16_t x343 = INT16_MAX;
uint8_t x344 = UINT8_MAX;
int64_t x362 = INT64_MIN;
int16_t x364 = -15;
volatile int32_t t81 = -1;
static int64_t x373 = INT64_MAX;
int32_t x374 = INT32_MIN;
uint32_t x386 = UINT32_MAX;
int16_t x388 = INT16_MIN;
int32_t t86 = -19989;
volatile uint8_t x389 = 8U;
int64_t x396 = 56380LL;
uint16_t x400 = UINT16_MAX;
int16_t x404 = -5845;
int32_t x405 = 53408;
static uint64_t x406 = 16890875238427025LLU;
int32_t t91 = 7186;
static int16_t x415 = -1;
int64_t x421 = -70LL;
volatile int64_t t94 = -19762319206893LL;
int8_t x427 = INT8_MIN;
static uint32_t t96 = 6843U;
static uint64_t x433 = 270115926145LLU;
static uint32_t x435 = 83U;
uint64_t t97 = 31LLU;
int32_t x440 = 25135132;
volatile uint8_t x442 = UINT8_MAX;
volatile uint16_t x443 = 1U;
uint64_t x450 = 125114LLU;
volatile int16_t x451 = INT16_MAX;
uint32_t x452 = 7U;
volatile uint8_t x453 = UINT8_MAX;
static uint64_t x456 = UINT64_MAX;
static int8_t x457 = 1;
volatile int32_t t102 = 498939;
uint8_t x473 = UINT8_MAX;
volatile int64_t x474 = -324605770LL;
volatile uint64_t x477 = 42301829LLU;
static volatile uint64_t t106 = 8695855070151869LLU;
static volatile int16_t x490 = INT16_MIN;
uint8_t x495 = 60U;
volatile int8_t x496 = 11;
volatile int64_t t110 = -801241849LL;
int8_t x509 = -1;
volatile uint64_t x510 = 175LLU;
int64_t x511 = -508388034883LL;
static uint64_t t113 = 13469817869884590LLU;
volatile uint64_t x513 = 696064084235LLU;
int64_t x515 = INT64_MAX;
static uint16_t x517 = UINT16_MAX;
int32_t t115 = 1;
int16_t x523 = INT16_MIN;
volatile int8_t x528 = 14;
uint64_t x534 = 15LLU;
int8_t x535 = INT8_MIN;
int32_t x538 = -550;
int32_t t121 = 12227611;
int32_t x551 = INT32_MIN;
volatile int32_t t122 = -43722;
int16_t x553 = INT16_MAX;
int8_t x556 = INT8_MIN;
uint16_t x558 = UINT16_MAX;
uint16_t x564 = 0U;
int32_t x567 = 1;
int8_t x569 = 3;
volatile int32_t t127 = -947923;
static volatile int64_t x582 = 387086222665LL;
int8_t x584 = INT8_MIN;
uint64_t x591 = 1LLU;
uint64_t x601 = 1232111768830519LLU;
uint16_t x607 = 401U;
static volatile int32_t t134 = -28;
uint32_t x612 = 72U;
int32_t x617 = INT32_MIN;
int8_t x626 = -1;
int64_t t139 = -29931549124LL;
int8_t x637 = 13;
int32_t x640 = INT32_MIN;
int32_t x643 = INT32_MAX;
static uint32_t x654 = UINT32_MAX;
volatile int32_t t144 = -17161410;
volatile int64_t x658 = INT64_MIN;
int16_t x667 = 1;
static uint8_t x670 = 27U;
volatile int64_t t148 = 539211385779926LL;
uint32_t x684 = 5485U;
uint8_t x685 = 56U;
int16_t x686 = INT16_MAX;
uint32_t x692 = UINT32_MAX;
uint8_t x698 = 1U;
volatile int8_t x701 = INT8_MAX;
static int64_t x705 = 32583830LL;
int64_t x707 = INT64_MIN;
int8_t x710 = -1;
int16_t x713 = -1;
uint64_t x716 = 994121LLU;
volatile int32_t x717 = INT32_MIN;
int32_t x719 = INT32_MIN;
uint8_t x725 = UINT8_MAX;
uint64_t x726 = 2232052441160146360LLU;
volatile uint8_t x728 = UINT8_MAX;
int16_t x729 = INT16_MAX;
int64_t x731 = -1LL;
volatile int16_t x732 = INT16_MIN;
volatile int32_t x739 = INT32_MIN;
volatile int32_t x740 = INT32_MIN;
int32_t t165 = -1340589;
uint16_t x742 = 25U;
static uint32_t t166 = 3104U;
uint32_t t167 = 5846U;
int16_t x756 = INT16_MIN;
static volatile int8_t x763 = INT8_MIN;
uint16_t x764 = UINT16_MAX;
int8_t x769 = INT8_MAX;
uint32_t t172 = 14U;
volatile uint64_t t175 = 706872761LLU;
volatile uint64_t x787 = UINT64_MAX;
int16_t x788 = 0;
int32_t x794 = 39060;
int32_t x799 = 1149;
volatile uint32_t x800 = 17983629U;
static uint32_t t179 = 247U;
uint32_t x805 = UINT32_MAX;
int16_t x813 = 37;
int64_t x815 = INT64_MAX;
volatile int8_t x817 = 20;
int64_t x818 = INT64_MIN;
uint16_t x819 = 2217U;
static volatile uint32_t x824 = 0U;
int16_t x825 = -1;
volatile uint64_t t186 = 1943806069081047LLU;
int16_t x830 = 4;
int32_t x834 = INT32_MIN;
int32_t x837 = INT32_MIN;
int8_t x841 = INT8_MIN;
static int16_t x859 = INT16_MAX;
volatile int64_t t194 = 8085606574LL;
uint16_t x865 = 53U;
volatile int32_t t195 = -3;
static volatile uint64_t x871 = 2876090970718836LLU;
int64_t t198 = 33100145867541LL;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	static int8_t x2 = 0;
	int8_t x4 = INT8_MAX;
	int64_t t0 = 361233LL;

    t0 = (x1+((x2!=x3)^x4));

    if (t0 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = 1;
	int8_t x10 = INT8_MIN;
	volatile uint64_t x11 = 65517LLU;
	int8_t x12 = INT8_MIN;
	static int32_t t1 = 2850;

    t1 = (x9+((x10!=x11)^x12));

    if (t1 != -126) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = -1;
	int64_t x15 = -1LL;
	uint16_t x16 = UINT16_MAX;
	int32_t t2 = -444;

    t2 = (x13+((x14!=x15)^x16));

    if (t2 != 65533) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 590316634290LLU;
	int64_t x19 = INT64_MIN;
	static volatile int64_t x20 = INT64_MAX;
	volatile uint64_t t3 = 1036913227LLU;

    t3 = (x17+((x18!=x19)^x20));

    if (t3 != 9223372627171410096LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x22 = 12;
	uint64_t x23 = 133453452439842LLU;
	uint8_t x24 = 6U;
	int32_t t4 = 7;

    t4 = (x21+((x22!=x23)^x24));

    if (t4 != 6) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x25 = INT16_MIN;
	static volatile uint16_t x26 = 6972U;
	int8_t x27 = -4;

    t5 = (x25+((x26!=x27)^x28));

    if (t5 != -32895) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x33 = 412341367770911LLU;
	int64_t x34 = INT64_MIN;
	uint64_t x35 = UINT64_MAX;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t6 = 6908410LLU;

    t6 = (x33+((x34!=x35)^x36));

    if (t6 != 412341367770909LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x37 = INT32_MIN;
	static int32_t x39 = INT32_MIN;
	volatile int32_t t7 = -426;

    t7 = (x37+((x38!=x39)^x40));

    if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = -1;
	uint64_t x42 = 9556771LLU;
	volatile int64_t x43 = INT64_MAX;
	uint64_t x44 = 452046239711LLU;
	uint64_t t8 = 522672718325362937LLU;

    t8 = (x41+((x42!=x43)^x44));

    if (t8 != 452046239709LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x45 = INT64_MIN;
	int16_t x46 = INT16_MIN;
	volatile int8_t x47 = -1;
	uint64_t x48 = 106756106LLU;
	static volatile uint64_t t9 = 48353282728504LLU;

    t9 = (x45+((x46!=x47)^x48));

    if (t9 != 9223372036961531915LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x54 = -1;
	int16_t x55 = -1;
	uint16_t x56 = 20754U;
	uint32_t t10 = 10479910U;

    t10 = (x53+((x54!=x55)^x56));

    if (t10 != 73404U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x58 = 76U;
	int32_t x59 = INT32_MIN;
	static uint16_t x60 = UINT16_MAX;

    t11 = (x57+((x58!=x59)^x60));

    if (t11 != 65406) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = -1501;
	volatile int8_t x63 = 1;
	volatile int16_t x64 = INT16_MAX;
	volatile int32_t t12 = -17651;

    t12 = (x61+((x62!=x63)^x64));

    if (t12 != 31265) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x65 = 1;
	uint32_t x66 = UINT32_MAX;
	int32_t x67 = INT32_MIN;

    t13 = (x65+((x66!=x67)^x68));

    if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = INT16_MIN;
	int8_t x72 = INT8_MAX;

    t14 = (x69+((x70!=x71)^x72));

    if (t14 != -32642) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x73 = -13;
	volatile int16_t x74 = INT16_MAX;
	volatile uint8_t x75 = 113U;
	static uint64_t x76 = 8537983395LLU;
	uint64_t t15 = 139523483685LLU;

    t15 = (x73+((x74!=x75)^x76));

    if (t15 != 8537983381LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x77 = INT32_MAX;
	int16_t x78 = INT16_MIN;
	static int64_t x79 = 22769566LL;

    t16 = (x77+((x78!=x79)^x80));

    if (t16 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x81 = INT16_MAX;
	int64_t x82 = 675365LL;
	int16_t x84 = INT16_MIN;
	int32_t t17 = -1;

    t17 = (x81+((x82!=x83)^x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x85 = 1;
	uint16_t x86 = 12U;
	static int64_t x87 = INT64_MIN;
	uint64_t x88 = UINT64_MAX;
	static uint64_t t18 = UINT64_MAX;

    t18 = (x85+((x86!=x87)^x88));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x89 = 52310LL;
	volatile uint64_t x90 = 135954022538LLU;
	int32_t x91 = INT32_MIN;
	int64_t x92 = INT64_MIN;

    t19 = (x89+((x90!=x91)^x92));

    if (t19 != -9223372036854723497LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x93 = INT32_MAX;
	volatile int8_t x94 = 11;
	static volatile uint64_t x96 = 1183854037305713LLU;

    t20 = (x93+((x94!=x95)^x96));

    if (t20 != 1183856184789359LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x97 = -1;
	int32_t x98 = 1819906;
	uint64_t x99 = UINT64_MAX;
	volatile uint32_t t21 = 179036U;

    t21 = (x97+((x98!=x99)^x100));

    if (t21 != 866671U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x103 = 1031403634679805LLU;
	int16_t x104 = -1;
	volatile int32_t t22 = 422169880;

    t22 = (x101+((x102!=x103)^x104));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x106 = UINT32_MAX;
	static uint8_t x107 = UINT8_MAX;
	int32_t x108 = 496312864;

    t23 = (x105+((x106!=x107)^x108));

    if (t23 != -107812490662571443LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x109 = 29U;
	int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t24 = -224;

    t24 = (x109+((x110!=x111)^x112));

    if (t24 != -98) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x113 = 1658;
	int8_t x114 = INT8_MIN;
	int32_t x115 = INT32_MIN;
	int32_t t25 = -46505477;

    t25 = (x113+((x114!=x115)^x116));

    if (t25 != -9510) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x117 = 41U;
	int64_t x119 = 310LL;
	static int16_t x120 = 2873;
	uint32_t t26 = 1937U;

    t26 = (x117+((x118!=x119)^x120));

    if (t26 != 2913U) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x121 = INT16_MIN;
	uint32_t x122 = UINT32_MAX;
	volatile int32_t t27 = 0;

    t27 = (x121+((x122!=x123)^x124));

    if (t27 != -32514) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x125 = 4361248763932189475LLU;
	int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MIN;
	volatile int32_t x128 = -1;

    t28 = (x125+((x126!=x127)^x128));

    if (t28 != 4361248763932189474LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = INT16_MAX;
	static int32_t x130 = INT32_MAX;
	int8_t x131 = INT8_MIN;
	uint16_t x132 = 2U;
	int32_t t29 = 407627;

    t29 = (x129+((x130!=x131)^x132));

    if (t29 != 32770) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint32_t x133 = UINT32_MAX;
	int32_t x134 = INT32_MIN;
	int64_t x135 = 48962977520981LL;
	static int8_t x136 = -1;
	static uint32_t t30 = 0U;

    t30 = (x133+((x134!=x135)^x136));

    if (t30 != 4294967293U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x137 = UINT16_MAX;
	volatile uint64_t x140 = 178632077818421664LLU;

    t31 = (x137+((x138!=x139)^x140));

    if (t31 != 178632077818487200LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = 45221LL;
	int8_t x142 = -1;
	int16_t x143 = INT16_MAX;
	int64_t x144 = INT64_MIN;
	volatile int64_t t32 = 10234706LL;

    t32 = (x141+((x142!=x143)^x144));

    if (t32 != -9223372036854730586LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x145 = UINT16_MAX;
	uint32_t x147 = 216994900U;
	int8_t x148 = INT8_MIN;
	volatile int32_t t33 = -34456;

    t33 = (x145+((x146!=x147)^x148));

    if (t33 != 65408) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x149 = 26U;
	uint8_t x150 = UINT8_MAX;
	uint8_t x152 = 0U;
	static uint32_t t34 = 896117711U;

    t34 = (x149+((x150!=x151)^x152));

    if (t34 != 27U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = -1;
	static int8_t x154 = INT8_MIN;
	static volatile uint8_t x155 = UINT8_MAX;
	volatile uint64_t x156 = UINT64_MAX;

    t35 = (x153+((x154!=x155)^x156));

    if (t35 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x157 = -415331;
	static int32_t x158 = -50;
	static uint8_t x159 = UINT8_MAX;
	static volatile int16_t x160 = -1;

    t36 = (x157+((x158!=x159)^x160));

    if (t36 != -415333) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x161 = -1;
	int32_t x162 = INT32_MIN;
	static volatile int32_t x163 = -908;
	static int32_t t37 = 272202;

    t37 = (x161+((x162!=x163)^x164));

    if (t37 != -3) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = INT32_MIN;
	uint16_t x166 = 9U;
	uint16_t x167 = 15U;
	uint8_t x168 = 1U;
	volatile int32_t t38 = INT32_MIN;

    t38 = (x165+((x166!=x167)^x168));

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = INT8_MAX;
	static volatile uint16_t x170 = 1U;
	volatile int64_t t39 = 215LL;

    t39 = (x169+((x170!=x171)^x172));

    if (t39 != 27709485364933343LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x173 = 12530U;
	int8_t x174 = INT8_MAX;
	volatile uint32_t x175 = 67917314U;
	uint8_t x176 = 60U;

    t40 = (x173+((x174!=x175)^x176));

    if (t40 != 12591) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x177 = 263073000U;
	int32_t x178 = -30;
	int16_t x179 = INT16_MIN;

    t41 = (x177+((x178!=x179)^x180));

    if (t41 != 378686135U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = INT8_MIN;
	int32_t x182 = -3;
	int32_t x183 = -9657;
	static uint16_t x184 = 0U;
	volatile int32_t t42 = 44867;

    t42 = (x181+((x182!=x183)^x184));

    if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = INT8_MIN;
	static volatile uint16_t x188 = UINT16_MAX;
	int32_t t43 = 38791;

    t43 = (x185+((x186!=x187)^x188));

    if (t43 != 65406) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x189 = UINT16_MAX;
	volatile int64_t x190 = 1922700LL;
	int64_t x191 = 10LL;
	uint16_t x192 = 280U;
	int32_t t44 = 47316717;

    t44 = (x189+((x190!=x191)^x192));

    if (t44 != 65816) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x194 = UINT16_MAX;
	static uint64_t x195 = 312LLU;
	int8_t x196 = INT8_MAX;
	int32_t t45 = 7;

    t45 = (x193+((x194!=x195)^x196));

    if (t45 != 65661) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x197 = UINT32_MAX;
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MIN;
	int32_t x200 = INT32_MIN;
	uint32_t t46 = 2240U;

    t46 = (x197+((x198!=x199)^x200));

    if (t46 != 2147483648U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x201 = -105855LL;
	volatile uint8_t x202 = 47U;
	static int32_t x203 = INT32_MIN;
	int64_t t47 = -5418358LL;

    t47 = (x201+((x202!=x203)^x204));

    if (t47 != 9223372036854669951LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x209 = -6320;
	volatile uint64_t x210 = 11562209LLU;
	uint32_t x211 = 31617U;
	volatile int8_t x212 = INT8_MIN;
	int32_t t48 = -5;

    t48 = (x209+((x210!=x211)^x212));

    if (t48 != -6447) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x221 = UINT16_MAX;
	uint8_t x222 = UINT8_MAX;
	uint8_t x224 = 3U;
	static volatile int32_t t49 = 24529098;

    t49 = (x221+((x222!=x223)^x224));

    if (t49 != 65537) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x225 = UINT64_MAX;
	int64_t x226 = INT64_MAX;
	uint64_t t50 = 1339455148897827303LLU;

    t50 = (x225+((x226!=x227)^x228));

    if (t50 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MIN;
	volatile uint8_t x231 = 0U;
	static uint16_t x232 = UINT16_MAX;
	volatile int32_t t51 = -3026;

    t51 = (x229+((x230!=x231)^x232));

    if (t51 != 65406) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x233 = -31;
	uint32_t x234 = 7U;
	volatile int16_t x235 = -5948;
	int8_t x236 = -1;
	volatile int32_t t52 = -328;

    t52 = (x233+((x234!=x235)^x236));

    if (t52 != -33) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x237 = -1LL;
	uint32_t x239 = 55287988U;
	int32_t x240 = INT32_MIN;
	static volatile int64_t t53 = -6LL;

    t53 = (x237+((x238!=x239)^x240));

    if (t53 != -2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x241 = UINT32_MAX;
	int64_t x242 = 29168137009648LL;
	int8_t x244 = INT8_MAX;
	uint32_t t54 = 7396U;

    t54 = (x241+((x242!=x243)^x244));

    if (t54 != 125U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x246 = UINT16_MAX;
	static int8_t x247 = -1;
	uint8_t x248 = 3U;
	int32_t t55 = 1;

    t55 = (x245+((x246!=x247)^x248));

    if (t55 != 65537) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x249 = INT8_MIN;
	uint32_t x250 = UINT32_MAX;
	volatile int16_t x252 = -1;

    t56 = (x249+((x250!=x251)^x252));

    if (t56 != -130) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x254 = INT8_MIN;
	int16_t x256 = INT16_MAX;

    t57 = (x253+((x254!=x255)^x256));

    if (t57 != 32765) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x257 = -669706;
	int8_t x259 = INT8_MIN;
	uint64_t t58 = 3720199212699393LLU;

    t58 = (x257+((x258!=x259)^x260));

    if (t58 != 18446744073708881908LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x261 = INT16_MAX;
	uint64_t x262 = 13065949319LLU;
	static int8_t x263 = INT8_MIN;
	int8_t x264 = -1;

    t59 = (x261+((x262!=x263)^x264));

    if (t59 != 32765) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x265 = UINT8_MAX;
	int8_t x266 = 1;
	int64_t x267 = INT64_MAX;
	uint16_t x268 = 3U;

    t60 = (x265+((x266!=x267)^x268));

    if (t60 != 257) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x269 = 41476167593LL;
	static int8_t x270 = 15;
	uint32_t x272 = UINT32_MAX;
	volatile int64_t t61 = -345246LL;

    t61 = (x269+((x270!=x271)^x272));

    if (t61 != 45771134887LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x273 = -1LL;
	int32_t x274 = -58372;
	volatile int64_t t62 = -2807408LL;

    t62 = (x273+((x274!=x275)^x276));

    if (t62 != -12097LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x277 = UINT8_MAX;
	uint8_t x278 = UINT8_MAX;
	int32_t x280 = INT32_MIN;

    t63 = (x277+((x278!=x279)^x280));

    if (t63 != -2147483392) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x282 = UINT64_MAX;
	int8_t x284 = -1;
	static volatile int64_t t64 = -7046775LL;

    t64 = (x281+((x282!=x283)^x284));

    if (t64 != -3LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x285 = -2;
	static volatile uint8_t x286 = UINT8_MAX;
	static uint64_t x288 = UINT64_MAX;
	uint64_t t65 = 4639213722397582LLU;

    t65 = (x285+((x286!=x287)^x288));

    if (t65 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x289 = 209718225961678LLU;
	uint16_t x291 = 3U;
	uint8_t x292 = UINT8_MAX;
	uint64_t t66 = 30525LLU;

    t66 = (x289+((x290!=x291)^x292));

    if (t66 != 209718225961932LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = INT16_MIN;
	volatile uint16_t x295 = 358U;
	int64_t x296 = -1LL;
	volatile int64_t t67 = -1997LL;

    t67 = (x293+((x294!=x295)^x296));

    if (t67 != -32770LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x301 = UINT32_MAX;
	int32_t x302 = -145;
	uint64_t x304 = 2146LLU;
	volatile uint64_t t68 = 1732493517620756LLU;

    t68 = (x301+((x302!=x303)^x304));

    if (t68 != 4294969442LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x310 = INT16_MAX;
	static volatile int64_t x311 = -879405767LL;
	int32_t x312 = -1;
	int32_t t69 = 171791;

    t69 = (x309+((x310!=x311)^x312));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x313 = 1U;
	volatile int16_t x314 = INT16_MIN;
	static volatile int16_t x315 = 0;
	int8_t x316 = -1;
	int32_t t70 = 29;

    t70 = (x313+((x314!=x315)^x316));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int64_t x318 = INT64_MIN;
	volatile int8_t x319 = INT8_MAX;
	int8_t x320 = 2;
	volatile int32_t t71 = 302413871;

    t71 = (x317+((x318!=x319)^x320));

    if (t71 != 11) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x323 = -2;
	volatile int64_t t72 = -3956670846855LL;

    t72 = (x321+((x322!=x323)^x324));

    if (t72 != -2147481334LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x325 = UINT32_MAX;
	volatile uint64_t x326 = 65LLU;
	int8_t x327 = 6;
	volatile int32_t x328 = INT32_MAX;
	volatile uint32_t t73 = 29037U;

    t73 = (x325+((x326!=x327)^x328));

    if (t73 != 2147483645U) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int8_t x329 = INT8_MAX;
	int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MAX;
	int8_t x332 = INT8_MIN;
	int32_t t74 = -465992223;

    t74 = (x329+((x330!=x331)^x332));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x333 = INT16_MIN;
	int8_t x334 = 58;
	volatile int32_t x336 = 1;
	int32_t t75 = 3;

    t75 = (x333+((x334!=x335)^x336));

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x337 = 4133047LL;
	uint8_t x338 = 6U;
	int16_t x339 = -1750;
	volatile int32_t x340 = -50;
	static int64_t t76 = -546176309031LL;

    t76 = (x337+((x338!=x339)^x340));

    if (t76 != 4132998LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x341 = INT16_MAX;
	int8_t x342 = INT8_MIN;
	volatile int32_t t77 = -64738050;

    t77 = (x341+((x342!=x343)^x344));

    if (t77 != 33021) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x345 = 5051907U;
	static uint64_t x346 = 0LLU;
	int16_t x347 = -1;
	static volatile int8_t x348 = INT8_MIN;
	volatile uint32_t t78 = 243720U;

    t78 = (x345+((x346!=x347)^x348));

    if (t78 != 5051780U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x349 = UINT16_MAX;
	int64_t x350 = INT64_MIN;
	int8_t x351 = INT8_MIN;
	uint32_t x352 = 1804423U;
	uint32_t t79 = 5573820U;

    t79 = (x349+((x350!=x351)^x352));

    if (t79 != 1869957U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x353 = UINT64_MAX;
	static uint64_t x354 = UINT64_MAX;
	int64_t x355 = INT64_MIN;
	volatile int32_t x356 = INT32_MAX;
	volatile uint64_t t80 = 3835860227484990528LLU;

    t80 = (x353+((x354!=x355)^x356));

    if (t80 != 2147483645LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x361 = 0;
	int8_t x363 = INT8_MAX;

    t81 = (x361+((x362!=x363)^x364));

    if (t81 != -16) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x365 = INT8_MIN;
	int16_t x366 = -159;
	int32_t x367 = -1;
	uint64_t x368 = 533757312858LLU;
	volatile uint64_t t82 = 155461075LLU;

    t82 = (x365+((x366!=x367)^x368));

    if (t82 != 533757312731LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x375 = UINT8_MAX;
	volatile int64_t x376 = -1LL;
	volatile int64_t t83 = -5557733767768620LL;

    t83 = (x373+((x374!=x375)^x376));

    if (t83 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x377 = -340090975961179LL;
	static int32_t x378 = INT32_MAX;
	static int8_t x379 = 1;
	int64_t x380 = INT64_MAX;
	volatile int64_t t84 = 928345580917LL;

    t84 = (x377+((x378!=x379)^x380));

    if (t84 != 9223031945878814627LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x381 = 10U;
	static volatile int64_t x382 = 56068118884851574LL;
	uint8_t x383 = 1U;
	int16_t x384 = INT16_MAX;
	volatile int32_t t85 = -3140736;

    t85 = (x381+((x382!=x383)^x384));

    if (t85 != 32776) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x385 = 245U;
	int16_t x387 = INT16_MIN;

    t86 = (x385+((x386!=x387)^x388));

    if (t86 != -32522) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x390 = INT32_MAX;
	static int64_t x391 = 241LL;
	int32_t x392 = -1;
	volatile int32_t t87 = 3917;

    t87 = (x389+((x390!=x391)^x392));

    if (t87 != 6) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x393 = 4U;
	int32_t x394 = INT32_MIN;
	int64_t x395 = -1LL;
	volatile int64_t t88 = 25434990164LL;

    t88 = (x393+((x394!=x395)^x396));

    if (t88 != 56385LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x397 = UINT16_MAX;
	int64_t x398 = 5876LL;
	static int16_t x399 = INT16_MIN;
	int32_t t89 = 385;

    t89 = (x397+((x398!=x399)^x400));

    if (t89 != 131069) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x401 = -11613;
	volatile uint16_t x402 = 11083U;
	volatile int64_t x403 = INT64_MIN;
	volatile int32_t t90 = 14572;

    t90 = (x401+((x402!=x403)^x404));

    if (t90 != -17459) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x407 = 52030273U;
	static int16_t x408 = INT16_MIN;

    t91 = (x405+((x406!=x407)^x408));

    if (t91 != 20641) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x409 = -1;
	uint8_t x410 = 20U;
	int64_t x411 = INT64_MAX;
	static int8_t x412 = INT8_MAX;
	int32_t t92 = 7944175;

    t92 = (x409+((x410!=x411)^x412));

    if (t92 != 125) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x413 = -1;
	int16_t x414 = INT16_MAX;
	static int8_t x416 = 2;
	volatile int32_t t93 = -3074;

    t93 = (x413+((x414!=x415)^x416));

    if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x422 = 121U;
	uint8_t x423 = 56U;
	volatile int32_t x424 = INT32_MAX;

    t94 = (x421+((x422!=x423)^x424));

    if (t94 != 2147483576LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x425 = 52;
	int8_t x426 = -1;
	volatile uint8_t x428 = 0U;
	int32_t t95 = 118385397;

    t95 = (x425+((x426!=x427)^x428));

    if (t95 != 53) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x429 = 8571;
	volatile int8_t x430 = INT8_MAX;
	volatile int16_t x431 = -145;
	uint32_t x432 = 1U;

    t96 = (x429+((x430!=x431)^x432));

    if (t96 != 8571U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x434 = INT16_MAX;
	int64_t x436 = INT64_MIN;

    t97 = (x433+((x434!=x435)^x436));

    if (t97 != 9223372306970701954LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x437 = INT16_MAX;
	static uint32_t x438 = 356413U;
	int8_t x439 = -1;
	volatile int32_t t98 = -1;

    t98 = (x437+((x438!=x439)^x440));

    if (t98 != 25167900) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x441 = 1;
	static uint32_t x444 = 11530045U;
	uint32_t t99 = 169397U;

    t99 = (x441+((x442!=x443)^x444));

    if (t99 != 11530045U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x449 = INT8_MIN;
	uint32_t t100 = 751U;

    t100 = (x449+((x450!=x451)^x452));

    if (t100 != 4294967174U) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x454 = INT16_MIN;
	volatile uint64_t x455 = 7175633710261536682LLU;
	volatile uint64_t t101 = 12880292LLU;

    t101 = (x453+((x454!=x455)^x456));

    if (t101 != 253LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x458 = UINT32_MAX;
	volatile uint64_t x459 = UINT64_MAX;
	volatile int32_t x460 = 9487347;

    t102 = (x457+((x458!=x459)^x460));

    if (t102 != 9487347) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x461 = INT32_MIN;
	int64_t x462 = 44826LL;
	int8_t x463 = -43;
	int8_t x464 = INT8_MAX;
	int32_t t103 = -14134;

    t103 = (x461+((x462!=x463)^x464));

    if (t103 != -2147483522) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x469 = -1LL;
	int32_t x470 = -1;
	volatile int8_t x471 = -17;
	static volatile uint64_t x472 = UINT64_MAX;
	static uint64_t t104 = 735722444644952LLU;

    t104 = (x469+((x470!=x471)^x472));

    if (t104 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x475 = -1;
	uint8_t x476 = 58U;
	int32_t t105 = 274256;

    t105 = (x473+((x474!=x475)^x476));

    if (t105 != 314) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x478 = UINT32_MAX;
	static int64_t x479 = INT64_MAX;
	volatile uint32_t x480 = 35U;

    t106 = (x477+((x478!=x479)^x480));

    if (t106 != 42301863LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x481 = 1;
	static int64_t x482 = -1LL;
	int16_t x483 = -32;
	volatile int64_t x484 = -1LL;
	int64_t t107 = 106LL;

    t107 = (x481+((x482!=x483)^x484));

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x489 = 231098985U;
	int16_t x491 = -2888;
	uint16_t x492 = 424U;
	volatile uint32_t t108 = 5U;

    t108 = (x489+((x490!=x491)^x492));

    if (t108 != 231099410U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x493 = UINT64_MAX;
	int8_t x494 = INT8_MIN;
	volatile uint64_t t109 = 28967639085810313LLU;

    t109 = (x493+((x494!=x495)^x496));

    if (t109 != 9LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x497 = INT64_MIN;
	static int8_t x498 = -1;
	int32_t x499 = 127284;
	static int8_t x500 = 38;

    t110 = (x497+((x498!=x499)^x500));

    if (t110 != -9223372036854775769LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x501 = 4U;
	static int16_t x502 = INT16_MAX;
	uint32_t x503 = 379U;
	volatile uint8_t x504 = 7U;
	int32_t t111 = -1;

    t111 = (x501+((x502!=x503)^x504));

    if (t111 != 10) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x505 = -316;
	static int32_t x506 = 3;
	uint8_t x507 = 2U;
	uint32_t x508 = 108U;
	volatile uint32_t t112 = 88476629U;

    t112 = (x505+((x506!=x507)^x508));

    if (t112 != 4294967089U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x512 = 46929755219012LLU;

    t113 = (x509+((x510!=x511)^x512));

    if (t113 != 46929755219012LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x514 = 0U;
	static volatile uint32_t x516 = 441708U;
	static uint64_t t114 = 46612750802753493LLU;

    t114 = (x513+((x514!=x515)^x516));

    if (t114 != 696064525944LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x518 = 0;
	static int16_t x519 = 6;
	uint8_t x520 = 1U;

    t115 = (x517+((x518!=x519)^x520));

    if (t115 != 65535) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x521 = 46U;
	int8_t x522 = INT8_MAX;
	volatile int8_t x524 = INT8_MIN;
	int32_t t116 = 11834186;

    t116 = (x521+((x522!=x523)^x524));

    if (t116 != -81) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x525 = -1;
	int64_t x526 = INT64_MAX;
	uint8_t x527 = 1U;
	int32_t t117 = 0;

    t117 = (x525+((x526!=x527)^x528));

    if (t117 != 14) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x533 = INT8_MAX;
	int16_t x536 = 7905;
	int32_t t118 = 1617790;

    t118 = (x533+((x534!=x535)^x536));

    if (t118 != 8031) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x537 = INT32_MIN;
	int8_t x539 = INT8_MAX;
	uint64_t x540 = UINT64_MAX;
	uint64_t t119 = 6027562360060LLU;

    t119 = (x537+((x538!=x539)^x540));

    if (t119 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x541 = INT64_MAX;
	int32_t x542 = INT32_MIN;
	uint32_t x543 = 1838473499U;
	int16_t x544 = INT16_MIN;
	volatile int64_t t120 = -21206808LL;

    t120 = (x541+((x542!=x543)^x544));

    if (t120 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x545 = 7761U;
	int16_t x546 = INT16_MIN;
	int8_t x547 = 1;
	int16_t x548 = -1;

    t121 = (x545+((x546!=x547)^x548));

    if (t121 != 7759) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x549 = INT8_MIN;
	uint64_t x550 = 4139924LLU;
	int16_t x552 = -5361;

    t122 = (x549+((x550!=x551)^x552));

    if (t122 != -5490) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x554 = INT32_MIN;
	static int8_t x555 = -15;
	volatile int32_t t123 = -499;

    t123 = (x553+((x554!=x555)^x556));

    if (t123 != 32640) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x557 = 300431171U;
	volatile uint8_t x559 = UINT8_MAX;
	int8_t x560 = INT8_MAX;
	static uint32_t t124 = 31074942U;

    t124 = (x557+((x558!=x559)^x560));

    if (t124 != 300431297U) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x561 = INT64_MIN;
	int8_t x562 = 0;
	uint32_t x563 = 855U;
	volatile int64_t t125 = 11771313696245152LL;

    t125 = (x561+((x562!=x563)^x564));

    if (t125 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x565 = INT16_MIN;
	int32_t x566 = INT32_MAX;
	int8_t x568 = INT8_MIN;
	volatile int32_t t126 = 15795;

    t126 = (x565+((x566!=x567)^x568));

    if (t126 != -32895) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x570 = 46359LL;
	int16_t x571 = INT16_MIN;
	int32_t x572 = -63594964;

    t127 = (x569+((x570!=x571)^x572));

    if (t127 != -63594960) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x581 = 0U;
	int64_t x583 = INT64_MAX;
	volatile int32_t t128 = -1;

    t128 = (x581+((x582!=x583)^x584));

    if (t128 != -127) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x585 = 1926U;
	uint16_t x586 = UINT16_MAX;
	int64_t x587 = INT64_MAX;
	int8_t x588 = -5;
	int32_t t129 = 24731;

    t129 = (x585+((x586!=x587)^x588));

    if (t129 != 1920) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x589 = 0U;
	static int8_t x590 = INT8_MIN;
	int8_t x592 = 3;
	volatile int32_t t130 = -44698;

    t130 = (x589+((x590!=x591)^x592));

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x593 = 1092590LL;
	int64_t x594 = 21972365164470660LL;
	static uint16_t x595 = UINT16_MAX;
	int32_t x596 = INT32_MAX;
	static int64_t t131 = -40966LL;

    t131 = (x593+((x594!=x595)^x596));

    if (t131 != 2148576236LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x597 = INT16_MIN;
	int32_t x598 = INT32_MIN;
	static int64_t x599 = INT64_MIN;
	volatile int32_t x600 = -2;
	static int32_t t132 = -708;

    t132 = (x597+((x598!=x599)^x600));

    if (t132 != -32769) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x602 = -1;
	uint64_t x603 = UINT64_MAX;
	int16_t x604 = 596;
	static uint64_t t133 = 2301LLU;

    t133 = (x601+((x602!=x603)^x604));

    if (t133 != 1232111768831115LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x605 = UINT8_MAX;
	static uint64_t x606 = 2415500430107LLU;
	volatile uint8_t x608 = 125U;

    t134 = (x605+((x606!=x607)^x608));

    if (t134 != 379) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x609 = UINT32_MAX;
	static volatile int32_t x610 = INT32_MAX;
	int64_t x611 = INT64_MIN;
	static volatile uint32_t t135 = 1U;

    t135 = (x609+((x610!=x611)^x612));

    if (t135 != 72U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x613 = INT8_MAX;
	int64_t x614 = INT64_MAX;
	int16_t x615 = INT16_MAX;
	int64_t x616 = INT64_MIN;
	int64_t t136 = 19143174874LL;

    t136 = (x613+((x614!=x615)^x616));

    if (t136 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x618 = UINT8_MAX;
	int8_t x619 = -1;
	uint16_t x620 = 28U;
	static int32_t t137 = 1;

    t137 = (x617+((x618!=x619)^x620));

    if (t137 != -2147483619) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x621 = 759;
	int16_t x622 = INT16_MAX;
	int32_t x623 = 67;
	static int64_t x624 = -1LL;
	int64_t t138 = 6051347455317304LL;

    t138 = (x621+((x622!=x623)^x624));

    if (t138 != 757LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x625 = 1632U;
	static int64_t x627 = INT64_MIN;
	int64_t x628 = INT64_MIN;

    t139 = (x625+((x626!=x627)^x628));

    if (t139 != -9223372036854774175LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x633 = INT16_MAX;
	volatile int16_t x634 = 71;
	int8_t x635 = INT8_MAX;
	int16_t x636 = INT16_MAX;
	static int32_t t140 = -4133714;

    t140 = (x633+((x634!=x635)^x636));

    if (t140 != 65533) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x638 = -132645;
	uint16_t x639 = 1798U;
	int32_t t141 = 14596151;

    t141 = (x637+((x638!=x639)^x640));

    if (t141 != -2147483634) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x641 = -1194733;
	static volatile int8_t x642 = -1;
	int64_t x644 = -700064080431LL;
	static int64_t t142 = 59624907493148LL;

    t142 = (x641+((x642!=x643)^x644));

    if (t142 != -700065275165LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x649 = 2102U;
	static int32_t x650 = INT32_MAX;
	int16_t x651 = 297;
	int64_t x652 = 1298768LL;
	int64_t t143 = 25884256796LL;

    t143 = (x649+((x650!=x651)^x652));

    if (t143 != 1300871LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x653 = 1;
	int64_t x655 = -707508505LL;
	int32_t x656 = INT32_MIN;

    t144 = (x653+((x654!=x655)^x656));

    if (t144 != -2147483646) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x657 = 20U;
	uint64_t x659 = 14065602152464668LLU;
	uint64_t x660 = UINT64_MAX;
	uint64_t t145 = 77020752025305LLU;

    t145 = (x657+((x658!=x659)^x660));

    if (t145 != 18LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x661 = 531U;
	static int8_t x662 = INT8_MIN;
	static volatile uint32_t x663 = 7313U;
	volatile int16_t x664 = -1;
	volatile uint32_t t146 = 1623370U;

    t146 = (x661+((x662!=x663)^x664));

    if (t146 != 529U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x665 = INT8_MIN;
	int32_t x666 = INT32_MIN;
	static uint64_t x668 = UINT64_MAX;
	static uint64_t t147 = 50235228755468LLU;

    t147 = (x665+((x666!=x667)^x668));

    if (t147 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x669 = -1LL;
	int8_t x671 = INT8_MIN;
	int32_t x672 = -1;

    t148 = (x669+((x670!=x671)^x672));

    if (t148 != -3LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x673 = 3682;
	static volatile int64_t x674 = INT64_MAX;
	static int64_t x675 = 1551072LL;
	static volatile int32_t x676 = INT32_MIN;
	int32_t t149 = -3;

    t149 = (x673+((x674!=x675)^x676));

    if (t149 != -2147479965) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x677 = INT8_MIN;
	volatile uint16_t x678 = 2U;
	int32_t x679 = -424610;
	int8_t x680 = -1;
	int32_t t150 = 1276804;

    t150 = (x677+((x678!=x679)^x680));

    if (t150 != -130) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x681 = INT64_MIN;
	static uint64_t x682 = UINT64_MAX;
	int8_t x683 = INT8_MAX;
	int64_t t151 = -30992599LL;

    t151 = (x681+((x682!=x683)^x684));

    if (t151 != -9223372036854770324LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x687 = 4U;
	volatile uint64_t x688 = UINT64_MAX;
	volatile uint64_t t152 = 24717142985343LLU;

    t152 = (x685+((x686!=x687)^x688));

    if (t152 != 54LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x689 = -9;
	volatile int16_t x690 = INT16_MAX;
	uint64_t x691 = 918LLU;
	static uint32_t t153 = 121245U;

    t153 = (x689+((x690!=x691)^x692));

    if (t153 != 4294967285U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x693 = INT32_MIN;
	volatile int32_t x694 = INT32_MIN;
	volatile int64_t x695 = -1517417662413218086LL;
	int8_t x696 = 21;
	int32_t t154 = 3300;

    t154 = (x693+((x694!=x695)^x696));

    if (t154 != -2147483628) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x697 = -2074653304934980100LL;
	int8_t x699 = INT8_MAX;
	int16_t x700 = INT16_MIN;
	int64_t t155 = -1590LL;

    t155 = (x697+((x698!=x699)^x700));

    if (t155 != -2074653304935012867LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x702 = 15603;
	uint8_t x703 = 7U;
	int64_t x704 = -1LL;
	int64_t t156 = 240828205601324LL;

    t156 = (x701+((x702!=x703)^x704));

    if (t156 != 125LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x706 = 8163948893932369923LLU;
	volatile int32_t x708 = INT32_MAX;
	int64_t t157 = 92LL;

    t157 = (x705+((x706!=x707)^x708));

    if (t157 != 2180067476LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x709 = -7;
	static int64_t x711 = -1LL;
	uint8_t x712 = 2U;
	static int32_t t158 = 3;

    t158 = (x709+((x710!=x711)^x712));

    if (t158 != -5) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x714 = UINT32_MAX;
	volatile int16_t x715 = INT16_MAX;
	uint64_t t159 = 124206LLU;

    t159 = (x713+((x714!=x715)^x716));

    if (t159 != 994119LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x718 = -1;
	uint16_t x720 = 0U;
	static volatile int32_t t160 = -129783086;

    t160 = (x717+((x718!=x719)^x720));

    if (t160 != -2147483647) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x721 = -83;
	volatile uint8_t x722 = UINT8_MAX;
	int64_t x723 = INT64_MIN;
	uint8_t x724 = UINT8_MAX;
	volatile int32_t t161 = 521012253;

    t161 = (x721+((x722!=x723)^x724));

    if (t161 != 171) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x727 = UINT8_MAX;
	volatile int32_t t162 = 489215976;

    t162 = (x725+((x726!=x727)^x728));

    if (t162 != 509) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x730 = -21;
	static int32_t t163 = -52246;

    t163 = (x729+((x730!=x731)^x732));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x733 = INT16_MIN;
	uint8_t x734 = UINT8_MAX;
	int16_t x735 = -1;
	volatile int64_t x736 = -1LL;
	int64_t t164 = -487383146674057202LL;

    t164 = (x733+((x734!=x735)^x736));

    if (t164 != -32770LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x737 = 1U;
	int64_t x738 = INT64_MIN;

    t165 = (x737+((x738!=x739)^x740));

    if (t165 != -2147483646) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x741 = 14U;
	int64_t x743 = -1LL;
	int32_t x744 = 755069;

    t166 = (x741+((x742!=x743)^x744));

    if (t166 != 755082U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x745 = INT32_MIN;
	int16_t x746 = -2;
	static int16_t x747 = -7609;
	volatile uint32_t x748 = UINT32_MAX;

    t167 = (x745+((x746!=x747)^x748));

    if (t167 != 2147483646U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x749 = 242;
	static int32_t x750 = INT32_MIN;
	uint8_t x751 = 0U;
	volatile int64_t x752 = INT64_MIN;
	volatile int64_t t168 = -7871350LL;

    t168 = (x749+((x750!=x751)^x752));

    if (t168 != -9223372036854775565LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x753 = UINT16_MAX;
	volatile int32_t x754 = INT32_MIN;
	uint64_t x755 = 1LLU;
	volatile int32_t t169 = -188915;

    t169 = (x753+((x754!=x755)^x756));

    if (t169 != 32768) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x761 = INT32_MIN;
	volatile int64_t x762 = -1LL;
	static volatile int32_t t170 = 52554;

    t170 = (x761+((x762!=x763)^x764));

    if (t170 != -2147418114) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x765 = 106684766674687LLU;
	uint16_t x766 = UINT16_MAX;
	uint32_t x767 = 608155U;
	volatile uint64_t x768 = 479059LLU;
	uint64_t t171 = 3515224352992LLU;

    t171 = (x765+((x766!=x767)^x768));

    if (t171 != 106684767153745LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x770 = INT64_MAX;
	uint32_t x771 = 605943U;
	static uint32_t x772 = UINT32_MAX;

    t172 = (x769+((x770!=x771)^x772));

    if (t172 != 125U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x773 = -110776;
	int16_t x774 = INT16_MIN;
	int8_t x775 = INT8_MAX;
	int32_t x776 = 893;
	static volatile int32_t t173 = 93256869;

    t173 = (x773+((x774!=x775)^x776));

    if (t173 != -109884) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x777 = UINT8_MAX;
	uint32_t x778 = 6376U;
	static int16_t x779 = INT16_MIN;
	int64_t x780 = -1LL;
	volatile int64_t t174 = -3509660735277579LL;

    t174 = (x777+((x778!=x779)^x780));

    if (t174 != 253LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x781 = 661078139565LLU;
	volatile int16_t x782 = INT16_MIN;
	int16_t x783 = INT16_MAX;
	static volatile int16_t x784 = INT16_MAX;

    t175 = (x781+((x782!=x783)^x784));

    if (t175 != 661078172331LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x785 = 121U;
	static int8_t x786 = 1;
	int32_t t176 = -7;

    t176 = (x785+((x786!=x787)^x788));

    if (t176 != 122) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x789 = INT16_MIN;
	static int16_t x790 = 4384;
	int16_t x791 = INT16_MIN;
	int16_t x792 = INT16_MIN;
	volatile int32_t t177 = 2;

    t177 = (x789+((x790!=x791)^x792));

    if (t177 != -65535) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x793 = INT64_MAX;
	int32_t x795 = INT32_MIN;
	uint64_t x796 = UINT64_MAX;
	uint64_t t178 = 8338797505511185LLU;

    t178 = (x793+((x794!=x795)^x796));

    if (t178 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x797 = INT8_MIN;
	volatile int32_t x798 = -1;

    t179 = (x797+((x798!=x799)^x800));

    if (t179 != 17983500U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x801 = -1;
	int64_t x802 = INT64_MIN;
	volatile int64_t x803 = INT64_MIN;
	int32_t x804 = -8;
	volatile int32_t t180 = 198;

    t180 = (x801+((x802!=x803)^x804));

    if (t180 != -9) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x806 = INT64_MAX;
	uint16_t x807 = 44U;
	uint16_t x808 = 114U;
	uint32_t t181 = 801U;

    t181 = (x805+((x806!=x807)^x808));

    if (t181 != 114U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x809 = 3U;
	int8_t x810 = INT8_MIN;
	int16_t x811 = INT16_MIN;
	int8_t x812 = -1;
	static uint32_t t182 = 162U;

    t182 = (x809+((x810!=x811)^x812));

    if (t182 != 1U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x814 = INT16_MAX;
	uint64_t x816 = 24300LLU;
	volatile uint64_t t183 = 2579179069040LLU;

    t183 = (x813+((x814!=x815)^x816));

    if (t183 != 24338LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x820 = -50327858;
	int32_t t184 = 4587209;

    t184 = (x817+((x818!=x819)^x820));

    if (t184 != -50327837) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x821 = INT64_MIN;
	uint32_t x822 = 28737754U;
	uint64_t x823 = UINT64_MAX;
	static volatile int64_t t185 = 39996LL;

    t185 = (x821+((x822!=x823)^x824));

    if (t185 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x826 = UINT64_MAX;
	volatile uint32_t x827 = 179622899U;
	volatile uint64_t x828 = UINT64_MAX;

    t186 = (x825+((x826!=x827)^x828));

    if (t186 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x829 = 73U;
	uint16_t x831 = 45U;
	uint8_t x832 = 13U;
	static volatile uint32_t t187 = 662653U;

    t187 = (x829+((x830!=x831)^x832));

    if (t187 != 85U) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x833 = INT16_MAX;
	int32_t x835 = -1;
	int16_t x836 = INT16_MAX;
	volatile int32_t t188 = 639555;

    t188 = (x833+((x834!=x835)^x836));

    if (t188 != 65533) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x838 = -1;
	int16_t x839 = 11;
	volatile int8_t x840 = INT8_MAX;
	int32_t t189 = 439722;

    t189 = (x837+((x838!=x839)^x840));

    if (t189 != -2147483522) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x842 = 16251;
	int32_t x843 = INT32_MAX;
	uint16_t x844 = UINT16_MAX;
	volatile int32_t t190 = 14;

    t190 = (x841+((x842!=x843)^x844));

    if (t190 != 65406) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x845 = 65721002893038LL;
	int16_t x846 = INT16_MIN;
	uint32_t x847 = 610755216U;
	uint64_t x848 = 250429LLU;
	volatile uint64_t t191 = 101700LLU;

    t191 = (x845+((x846!=x847)^x848));

    if (t191 != 65721003143466LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x849 = 83LLU;
	uint64_t x850 = UINT64_MAX;
	int8_t x851 = 63;
	static int32_t x852 = INT32_MIN;
	volatile uint64_t t192 = 107784113LLU;

    t192 = (x849+((x850!=x851)^x852));

    if (t192 != 18446744071562068052LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x857 = 0;
	int8_t x858 = -1;
	int16_t x860 = -1;
	volatile int32_t t193 = -26;

    t193 = (x857+((x858!=x859)^x860));

    if (t193 != -2) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x861 = -523072438191639LL;
	int64_t x862 = INT64_MAX;
	volatile uint16_t x863 = UINT16_MAX;
	volatile int8_t x864 = -1;

    t194 = (x861+((x862!=x863)^x864));

    if (t194 != -523072438191641LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x866 = INT32_MIN;
	uint16_t x867 = 8248U;
	static int16_t x868 = -4;

    t195 = (x865+((x866!=x867)^x868));

    if (t195 != 50) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x869 = 1429U;
	int16_t x870 = 16;
	int8_t x872 = INT8_MAX;
	volatile uint32_t t196 = 581632U;

    t196 = (x869+((x870!=x871)^x872));

    if (t196 != 1555U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x873 = INT8_MIN;
	volatile uint64_t x874 = 29745843761896030LLU;
	uint64_t x875 = 2259373LLU;
	volatile uint8_t x876 = 59U;
	static int32_t t197 = -82;

    t197 = (x873+((x874!=x875)^x876));

    if (t197 != -70) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x877 = -24877505LL;
	int16_t x878 = -1;
	static volatile int64_t x879 = INT64_MAX;
	static volatile int64_t x880 = INT64_MAX;

    t198 = (x877+((x878!=x879)^x880));

    if (t198 != 9223372036829898301LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x881 = -13489231036781LL;
	int64_t x882 = INT64_MIN;
	uint64_t x883 = 6762601LLU;
	uint32_t x884 = 304303034U;
	int64_t t199 = 62230878LL;

    t199 = (x881+((x882!=x883)^x884));

    if (t199 != -13488926733746LL) { NG(); } else { ; }
	
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

