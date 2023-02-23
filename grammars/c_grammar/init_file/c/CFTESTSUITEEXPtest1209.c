
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

int32_t x11 = -1;
int32_t x13 = 43818866;
uint64_t x18 = UINT64_MAX;
static uint32_t x19 = 444182889U;
int64_t x26 = INT64_MIN;
uint16_t x27 = 288U;
int32_t x34 = INT32_MAX;
int32_t t9 = 48143764;
static int16_t x46 = 832;
int64_t x52 = -872914212885024762LL;
static uint32_t x53 = UINT32_MAX;
int8_t x56 = -15;
int32_t x60 = INT32_MAX;
uint64_t x62 = UINT64_MAX;
int32_t x66 = INT32_MIN;
uint16_t x71 = 4999U;
uint64_t t16 = 440537LLU;
uint64_t t17 = 1LLU;
int64_t x84 = 163337LL;
static int32_t x88 = 8502;
int32_t t25 = 2;
uint8_t x117 = 3U;
uint16_t x118 = UINT16_MAX;
int64_t t26 = -2717LL;
int64_t x121 = -1538817819064154LL;
int32_t x122 = INT32_MAX;
static uint32_t x123 = UINT32_MAX;
int16_t x138 = 6943;
uint16_t x141 = 15440U;
volatile int32_t t31 = 3;
int16_t x151 = -1;
volatile int16_t x152 = -8;
volatile int16_t x154 = -7;
static volatile int8_t x159 = INT8_MIN;
int32_t x161 = INT32_MIN;
int64_t x176 = INT64_MIN;
volatile int64_t t39 = -87952952983LL;
volatile int64_t x186 = -12117LL;
volatile uint64_t x187 = 21042868018000755LLU;
static int16_t x188 = INT16_MIN;
int8_t x189 = INT8_MIN;
volatile int8_t x191 = 1;
int8_t x193 = INT8_MIN;
uint8_t x195 = UINT8_MAX;
uint8_t x203 = 84U;
volatile int64_t t46 = -126971552LL;
uint64_t x205 = 3401592197072LLU;
static uint8_t x208 = UINT8_MAX;
volatile int8_t x226 = -30;
int64_t x229 = -964381085LL;
int8_t x236 = -1;
volatile int32_t t52 = -669;
int32_t x237 = 588930;
int64_t t53 = -21930753585395LL;
volatile uint32_t x252 = 61U;
static uint32_t t56 = 26U;
static volatile uint32_t x253 = 1675U;
volatile uint32_t t57 = 212812U;
uint64_t x267 = 559398537640412884LLU;
static uint16_t x285 = UINT16_MAX;
volatile uint16_t x293 = 955U;
static int64_t x300 = 320365LL;
static volatile uint64_t t67 = 5273839915278849LLU;
uint32_t x310 = 1902470U;
static uint8_t x311 = UINT8_MAX;
static volatile int64_t t70 = 6192032815841822LL;
uint64_t x317 = UINT64_MAX;
static int16_t x330 = INT16_MIN;
int32_t x332 = 986591;
int32_t x333 = -1;
volatile int16_t x334 = -1;
static volatile int32_t t75 = -92259;
int32_t x351 = INT32_MIN;
static volatile int8_t x357 = INT8_MIN;
volatile int32_t t79 = 3729983;
uint16_t x364 = 248U;
int32_t x366 = 228329;
int32_t t81 = -88;
int64_t x370 = -257116827120LL;
int64_t x371 = INT64_MAX;
int64_t x375 = -50246853575LL;
volatile uint32_t x384 = 19U;
volatile int32_t t87 = -16;
int32_t x413 = 487375;
static volatile int32_t t92 = -28777;
uint64_t x428 = UINT64_MAX;
uint32_t x429 = 1U;
volatile uint32_t x433 = UINT32_MAX;
uint32_t x446 = 319U;
uint64_t x450 = UINT64_MAX;
volatile uint8_t x461 = UINT8_MAX;
int64_t x465 = 18034214006543950LL;
int32_t x467 = INT32_MIN;
int64_t x478 = INT64_MIN;
uint32_t x481 = UINT32_MAX;
int8_t x495 = -32;
volatile int32_t t109 = 95201081;
int64_t x498 = 2LL;
static volatile int32_t x500 = 105979;
uint64_t x508 = 11987378592LLU;
uint64_t x510 = 10LLU;
int16_t x512 = -288;
int64_t x513 = INT64_MIN;
volatile int64_t x526 = INT64_MIN;
uint32_t t117 = 0U;
int8_t x533 = INT8_MIN;
static uint32_t x538 = 1U;
volatile int16_t x545 = 0;
int16_t x547 = -119;
static volatile int32_t t121 = 292154339;
int16_t x551 = -1;
volatile int8_t x558 = INT8_MIN;
static int32_t t124 = -4272;
static int8_t x561 = INT8_MIN;
int32_t t125 = 10204054;
int32_t x568 = 425868;
volatile uint64_t t132 = 502LLU;
volatile int64_t x598 = -1LL;
static int16_t x599 = INT16_MIN;
static uint16_t x606 = 134U;
int32_t t135 = -6125;
int64_t x617 = -7557482378850865LL;
int8_t x621 = -1;
volatile int32_t x633 = 1;
static volatile uint32_t x634 = UINT32_MAX;
int32_t t142 = 13680;
static volatile uint16_t x637 = 2U;
static int8_t x653 = INT8_MIN;
volatile int8_t x659 = 0;
uint16_t x669 = 0U;
static int8_t x674 = INT8_MIN;
volatile int64_t x676 = -285299414578370041LL;
int64_t t150 = 1LL;
volatile int32_t x685 = INT32_MIN;
int64_t x686 = -374110LL;
uint64_t t152 = 1LLU;
uint16_t x692 = 3U;
int64_t t153 = -999667912985LL;
static uint8_t x693 = 25U;
static int64_t x701 = -11LL;
static volatile uint8_t x704 = 6U;
static int64_t t156 = 234850LL;
int32_t x716 = INT32_MIN;
volatile int32_t t157 = 0;
volatile int64_t t158 = -861653595275LL;
static uint64_t x731 = 3079593LLU;
volatile int8_t x738 = -4;
int32_t x741 = INT32_MIN;
int32_t x747 = 65;
volatile uint64_t t164 = 28503323393485LLU;
uint64_t x755 = 5LLU;
static int16_t x760 = 10385;
volatile int64_t x765 = -13923LL;
volatile int64_t t169 = -2301294622054581649LL;
static int64_t x769 = -1761942LL;
int8_t x770 = INT8_MIN;
static volatile int16_t x774 = INT16_MIN;
int64_t x775 = INT64_MIN;
int8_t x780 = 62;
static volatile int32_t t172 = 1756312;
static int16_t x781 = -1;
static int16_t x785 = 3952;
int16_t x787 = INT16_MIN;
static int64_t x788 = INT64_MIN;
volatile int64_t x789 = -1LL;
volatile uint16_t x790 = 2476U;
int32_t x792 = INT32_MAX;
int32_t x795 = INT32_MIN;
static uint32_t x800 = 341U;
int32_t x806 = INT32_MAX;
int8_t x808 = -1;
static int64_t t180 = 13223183506368064LL;
int64_t t181 = -65672279307443365LL;
uint32_t x818 = 1066031382U;
uint16_t x825 = 3U;
int32_t x830 = INT32_MIN;
int8_t x854 = -1;
volatile int8_t x857 = -1;
volatile uint64_t x862 = 59587527LLU;
static volatile int8_t x867 = 55;
uint16_t x869 = 114U;
static uint16_t x870 = 6925U;
int16_t x879 = 117;
static int64_t t195 = 7359592LL;
static int64_t x882 = INT64_MIN;
int32_t x894 = INT32_MIN;


void f0(void) {
    	static int32_t x1 = INT32_MAX;
	static uint8_t x2 = UINT8_MAX;
	int16_t x3 = INT16_MAX;
	volatile int16_t x4 = INT16_MAX;
	int32_t t0 = -84;

    t0 = (x1%((x2!=x3)*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x5 = INT32_MAX;
	uint16_t x6 = 2U;
	uint32_t x7 = 28413U;
	uint64_t x8 = 429373LLU;
	uint64_t t1 = 1137702780LLU;

    t1 = (x5%((x6!=x7)*x8));

    if (t1 != 189274LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = 531339016932LLU;
	uint64_t x10 = 3LLU;
	int16_t x12 = 1284;
	volatile uint64_t t2 = 5140266089LLU;

    t2 = (x9%((x10!=x11)*x12));

    if (t2 != 960LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x14 = INT8_MAX;
	int64_t x15 = INT64_MIN;
	uint32_t x16 = 10U;
	static volatile uint32_t t3 = 0U;

    t3 = (x13%((x14!=x15)*x16));

    if (t3 != 6U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -23;
	uint32_t x20 = UINT32_MAX;
	volatile uint32_t t4 = 33691989U;

    t4 = (x17%((x18!=x19)*x20));

    if (t4 != 4294967273U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	uint8_t x22 = 1U;
	volatile int8_t x23 = INT8_MAX;
	uint32_t x24 = UINT32_MAX;
	static uint32_t t5 = 229537812U;

    t5 = (x21%((x22!=x23)*x24));

    if (t5 != 65535U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	volatile int8_t x28 = -1;
	volatile uint64_t t6 = 28LLU;

    t6 = (x25%((x26!=x27)*x28));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = INT64_MIN;
	int8_t x35 = -1;
	int16_t x36 = INT16_MAX;
	volatile int64_t t7 = -24904578LL;

    t7 = (x33%((x34!=x35)*x36));

    if (t7 != -8LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x37 = 87U;
	int32_t x38 = -1;
	uint8_t x39 = 29U;
	uint32_t x40 = 28075U;
	volatile uint32_t t8 = 1504930046U;

    t8 = (x37%((x38!=x39)*x40));

    if (t8 != 87U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x41 = 3U;
	int32_t x42 = INT32_MIN;
	int8_t x43 = -48;
	int16_t x44 = -21;

    t9 = (x41%((x42!=x43)*x44));

    if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = -1;
	uint64_t x47 = 450473548007115LLU;
	int16_t x48 = INT16_MIN;
	int32_t t10 = -200728629;

    t10 = (x45%((x46!=x47)*x48));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = 90U;
	int16_t x50 = INT16_MAX;
	volatile uint32_t x51 = 48U;
	int64_t t11 = -65256133386182LL;

    t11 = (x49%((x50!=x51)*x52));

    if (t11 != 90LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x54 = 1663710499937221LLU;
	int16_t x55 = -1;
	volatile uint32_t t12 = 25701946U;

    t12 = (x53%((x54!=x55)*x56));

    if (t12 != 14U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x57 = UINT64_MAX;
	uint16_t x58 = 17562U;
	static int8_t x59 = INT8_MAX;
	static uint64_t t13 = 3254853LLU;

    t13 = (x57%((x58!=x59)*x60));

    if (t13 != 3LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = INT32_MAX;
	uint8_t x63 = 3U;
	int32_t x64 = INT32_MIN;
	volatile int32_t t14 = INT32_MAX;

    t14 = (x61%((x62!=x63)*x64));

    if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = UINT32_MAX;
	int64_t x67 = INT64_MIN;
	static uint16_t x68 = 64U;
	volatile uint32_t t15 = 44903U;

    t15 = (x65%((x66!=x67)*x68));

    if (t15 != 63U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x69 = 8143339960960LLU;
	uint64_t x70 = UINT64_MAX;
	volatile int32_t x72 = INT32_MAX;

    t16 = (x69%((x70!=x71)*x72));

    if (t16 != 81971536LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint64_t x73 = 8072462317741811755LLU;
	uint16_t x74 = 187U;
	int8_t x75 = 12;
	volatile int16_t x76 = INT16_MIN;

    t17 = (x73%((x74!=x75)*x76));

    if (t17 != 8072462317741811755LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = 2;
	int16_t x78 = INT16_MAX;
	uint8_t x79 = 3U;
	int32_t x80 = -9;
	volatile int32_t t18 = -7996;

    t18 = (x77%((x78!=x79)*x80));

    if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x81 = -1;
	int32_t x82 = INT32_MIN;
	static uint8_t x83 = 0U;
	int64_t t19 = 208225LL;

    t19 = (x81%((x82!=x83)*x84));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = INT16_MAX;
	volatile int32_t x86 = 925;
	volatile int8_t x87 = INT8_MAX;
	int32_t t20 = -3788;

    t20 = (x85%((x86!=x87)*x88));

    if (t20 != 7261) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x93 = 50U;
	int64_t x94 = INT64_MIN;
	int8_t x95 = INT8_MIN;
	uint64_t x96 = UINT64_MAX;
	static uint64_t t21 = 113LLU;

    t21 = (x93%((x94!=x95)*x96));

    if (t21 != 50LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MAX;
	uint8_t x98 = 121U;
	int8_t x99 = -1;
	int32_t x100 = -1;
	static int32_t t22 = 25;

    t22 = (x97%((x98!=x99)*x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = -15797353LL;
	static volatile int32_t x102 = -1;
	int16_t x103 = -1045;
	int64_t x104 = -1LL;
	volatile int64_t t23 = -66199LL;

    t23 = (x101%((x102!=x103)*x104));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = INT32_MIN;
	volatile int32_t x110 = INT32_MIN;
	int8_t x111 = -60;
	static uint16_t x112 = 21936U;
	volatile int32_t t24 = 7396862;

    t24 = (x109%((x110!=x111)*x112));

    if (t24 != -15056) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x113 = 12914U;
	static uint8_t x114 = 57U;
	uint64_t x115 = UINT64_MAX;
	int8_t x116 = INT8_MIN;

    t25 = (x113%((x114!=x115)*x116));

    if (t25 != 114) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x119 = 0U;
	int64_t x120 = 8191540189623180LL;

    t26 = (x117%((x118!=x119)*x120));

    if (t26 != 3LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x124 = 3U;
	int64_t t27 = 20618119514LL;

    t27 = (x121%((x122!=x123)*x124));

    if (t27 != -2LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = -1;
	int8_t x126 = -26;
	int32_t x127 = -42;
	volatile int32_t x128 = INT32_MIN;
	static volatile int32_t t28 = 161063;

    t28 = (x125%((x126!=x127)*x128));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x133 = 6U;
	uint16_t x134 = UINT16_MAX;
	static uint64_t x135 = UINT64_MAX;
	int8_t x136 = 1;
	int32_t t29 = -164393734;

    t29 = (x133%((x134!=x135)*x136));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x137 = INT8_MAX;
	int8_t x139 = -6;
	static volatile uint32_t x140 = 2082981056U;
	uint32_t t30 = 6659069U;

    t30 = (x137%((x138!=x139)*x140));

    if (t30 != 127U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x142 = INT64_MAX;
	int64_t x143 = -23799302LL;
	int16_t x144 = -1;

    t31 = (x141%((x142!=x143)*x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x145 = INT16_MIN;
	volatile int64_t x146 = -29LL;
	int32_t x147 = -837;
	int32_t x148 = -108;
	int32_t t32 = -8536;

    t32 = (x145%((x146!=x147)*x148));

    if (t32 != -44) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x149 = 7;
	static uint64_t x150 = 117927LLU;
	volatile int32_t t33 = 87;

    t33 = (x149%((x150!=x151)*x152));

    if (t33 != 7) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x153 = INT8_MAX;
	int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MIN;
	volatile int32_t t34 = -5872652;

    t34 = (x153%((x154!=x155)*x156));

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x157 = INT64_MIN;
	volatile uint64_t x158 = 12586803LLU;
	int32_t x160 = INT32_MAX;
	static int64_t t35 = 147710026958LL;

    t35 = (x157%((x158!=x159)*x160));

    if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x162 = INT64_MIN;
	uint8_t x163 = 3U;
	int32_t x164 = INT32_MAX;
	int32_t t36 = -6;

    t36 = (x161%((x162!=x163)*x164));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x165 = -61;
	int32_t x166 = -1;
	static int16_t x167 = INT16_MIN;
	static int64_t x168 = -14605LL;
	volatile int64_t t37 = -2162066LL;

    t37 = (x165%((x166!=x167)*x168));

    if (t37 != -61LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x169 = INT16_MAX;
	int64_t x170 = -1LL;
	int16_t x171 = INT16_MIN;
	int64_t x172 = INT64_MIN;
	volatile int64_t t38 = -7589249LL;

    t38 = (x169%((x170!=x171)*x172));

    if (t38 != 32767LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x173 = 1770703460U;
	static int64_t x174 = -3LL;
	int64_t x175 = INT64_MIN;

    t39 = (x173%((x174!=x175)*x176));

    if (t39 != 1770703460LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x177 = 15U;
	volatile int8_t x178 = -1;
	uint16_t x179 = 12778U;
	int16_t x180 = -1;
	static int32_t t40 = 16230281;

    t40 = (x177%((x178!=x179)*x180));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x181 = UINT32_MAX;
	volatile int64_t x182 = INT64_MIN;
	int32_t x183 = -1;
	volatile int16_t x184 = 3;
	uint32_t t41 = 701U;

    t41 = (x181%((x182!=x183)*x184));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x185 = UINT16_MAX;
	volatile int32_t t42 = 314796;

    t42 = (x185%((x186!=x187)*x188));

    if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x190 = -278754855356686078LL;
	int32_t x192 = -112;
	volatile int32_t t43 = 11475541;

    t43 = (x189%((x190!=x191)*x192));

    if (t43 != -16) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x194 = INT8_MAX;
	uint8_t x196 = 126U;
	volatile int32_t t44 = 31;

    t44 = (x193%((x194!=x195)*x196));

    if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x197 = -1;
	int8_t x198 = INT8_MIN;
	static uint8_t x199 = 5U;
	static uint32_t x200 = 458U;
	static uint32_t t45 = 1008353255U;

    t45 = (x197%((x198!=x199)*x200));

    if (t45 != 389U) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x201 = INT64_MIN;
	volatile int16_t x202 = 111;
	int16_t x204 = INT16_MIN;

    t46 = (x201%((x202!=x203)*x204));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int64_t x206 = INT64_MIN;
	volatile int64_t x207 = -1LL;
	volatile uint64_t t47 = 63970892LLU;

    t47 = (x205%((x206!=x207)*x208));

    if (t47 != 107LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = 439;
	int32_t x214 = -36695;
	static int16_t x215 = 35;
	int8_t x216 = INT8_MIN;
	static volatile int32_t t48 = 350841;

    t48 = (x213%((x214!=x215)*x216));

    if (t48 != 55) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x221 = 24;
	uint64_t x222 = 258023438220424LLU;
	int16_t x223 = INT16_MIN;
	int64_t x224 = -71LL;
	static volatile int64_t t49 = 790629778738945170LL;

    t49 = (x221%((x222!=x223)*x224));

    if (t49 != 24LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x225 = 5LLU;
	volatile uint8_t x227 = 25U;
	static volatile int32_t x228 = -1;
	volatile uint64_t t50 = 2085575501245836LLU;

    t50 = (x225%((x226!=x227)*x228));

    if (t50 != 5LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x230 = 672784U;
	int8_t x231 = -2;
	int32_t x232 = 1775;
	volatile int64_t t51 = 44379142041692340LL;

    t51 = (x229%((x230!=x231)*x232));

    if (t51 != -510LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x233 = 5U;
	int16_t x234 = -1;
	uint8_t x235 = 6U;

    t52 = (x233%((x234!=x235)*x236));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x238 = 92U;
	int64_t x239 = -1LL;
	int64_t x240 = INT64_MIN;

    t53 = (x237%((x238!=x239)*x240));

    if (t53 != 588930LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x241 = 28215492354531373LLU;
	int8_t x242 = 0;
	int8_t x243 = INT8_MAX;
	int8_t x244 = 17;
	volatile uint64_t t54 = 922LLU;

    t54 = (x241%((x242!=x243)*x244));

    if (t54 != 7LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint64_t x245 = UINT64_MAX;
	uint32_t x246 = 1U;
	int16_t x247 = INT16_MIN;
	int8_t x248 = -1;
	uint64_t t55 = 9312432LLU;

    t55 = (x245%((x246!=x247)*x248));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x249 = 4U;
	static int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MIN;

    t56 = (x249%((x250!=x251)*x252));

    if (t56 != 4U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x254 = INT64_MIN;
	uint64_t x255 = 411684207807116871LLU;
	uint32_t x256 = UINT32_MAX;

    t57 = (x253%((x254!=x255)*x256));

    if (t57 != 1675U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x261 = 1573177732384LL;
	uint8_t x262 = 13U;
	static volatile uint16_t x263 = 4U;
	uint16_t x264 = 31U;
	int64_t t58 = 110828LL;

    t58 = (x261%((x262!=x263)*x264));

    if (t58 != 18LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x265 = 1LLU;
	uint16_t x266 = UINT16_MAX;
	static int64_t x268 = -1LL;
	volatile uint64_t t59 = 180530790248966110LLU;

    t59 = (x265%((x266!=x267)*x268));

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x269 = 74337420U;
	static int32_t x270 = INT32_MAX;
	volatile int64_t x271 = -8378908188LL;
	uint16_t x272 = 19U;
	uint32_t t60 = 10073U;

    t60 = (x269%((x270!=x271)*x272));

    if (t60 != 15U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x273 = -1;
	uint8_t x274 = UINT8_MAX;
	int64_t x275 = INT64_MIN;
	volatile int64_t x276 = -1LL;
	static volatile int64_t t61 = 108731573578LL;

    t61 = (x273%((x274!=x275)*x276));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x281 = INT8_MIN;
	int32_t x282 = INT32_MIN;
	int16_t x283 = INT16_MIN;
	int8_t x284 = INT8_MAX;
	int32_t t62 = 1;

    t62 = (x281%((x282!=x283)*x284));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x286 = 210899U;
	static int32_t x287 = INT32_MIN;
	int64_t x288 = -1LL;
	int64_t t63 = -5069LL;

    t63 = (x285%((x286!=x287)*x288));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x289 = 0;
	int8_t x290 = 21;
	static uint8_t x291 = 1U;
	int16_t x292 = 13527;
	volatile int32_t t64 = 9;

    t64 = (x289%((x290!=x291)*x292));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x294 = 0U;
	uint8_t x295 = UINT8_MAX;
	int64_t x296 = INT64_MAX;
	int64_t t65 = 31981321194646LL;

    t65 = (x293%((x294!=x295)*x296));

    if (t65 != 955LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x297 = INT64_MAX;
	static int64_t x298 = INT64_MIN;
	uint32_t x299 = UINT32_MAX;
	static int64_t t66 = 1484510622565LL;

    t66 = (x297%((x298!=x299)*x300));

    if (t66 != 892LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x301 = 211337954640655210LLU;
	uint16_t x302 = 4U;
	uint64_t x303 = UINT64_MAX;
	int32_t x304 = -1;

    t67 = (x301%((x302!=x303)*x304));

    if (t67 != 211337954640655210LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x305 = 2952U;
	static int32_t x306 = INT32_MIN;
	int8_t x307 = -1;
	int16_t x308 = INT16_MIN;
	int32_t t68 = 1178948;

    t68 = (x305%((x306!=x307)*x308));

    if (t68 != 2952) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x309 = 44U;
	static uint8_t x312 = 1U;
	int32_t t69 = -56403;

    t69 = (x309%((x310!=x311)*x312));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x313 = INT64_MAX;
	int32_t x314 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MIN;

    t70 = (x313%((x314!=x315)*x316));

    if (t70 != 2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x318 = INT16_MAX;
	static int16_t x319 = -1;
	int64_t x320 = -1LL;
	volatile uint64_t t71 = 53704611180869549LLU;

    t71 = (x317%((x318!=x319)*x320));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x325 = INT64_MIN;
	static volatile int16_t x326 = -6271;
	int16_t x327 = INT16_MIN;
	static uint8_t x328 = 7U;
	int64_t t72 = 1LL;

    t72 = (x325%((x326!=x327)*x328));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x329 = INT16_MAX;
	int64_t x331 = 696829398LL;
	int32_t t73 = 2;

    t73 = (x329%((x330!=x331)*x332));

    if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x335 = INT16_MIN;
	uint16_t x336 = 161U;
	volatile int32_t t74 = 410068;

    t74 = (x333%((x334!=x335)*x336));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x341 = 0U;
	static int8_t x342 = -1;
	int8_t x343 = INT8_MAX;
	static volatile int32_t x344 = -1;

    t75 = (x341%((x342!=x343)*x344));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x345 = INT32_MIN;
	int16_t x346 = INT16_MIN;
	uint8_t x347 = 0U;
	uint16_t x348 = UINT16_MAX;
	int32_t t76 = -1;

    t76 = (x345%((x346!=x347)*x348));

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x349 = 747013U;
	uint64_t x350 = 2003934737LLU;
	static uint32_t x352 = 25524U;
	uint32_t t77 = 442916171U;

    t77 = (x349%((x350!=x351)*x352));

    if (t77 != 6817U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x353 = -1;
	int8_t x354 = INT8_MIN;
	int64_t x355 = -1554120LL;
	int64_t x356 = INT64_MIN;
	int64_t t78 = -16475725345629LL;

    t78 = (x353%((x354!=x355)*x356));

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x358 = UINT64_MAX;
	volatile int32_t x359 = INT32_MAX;
	int8_t x360 = INT8_MIN;

    t79 = (x357%((x358!=x359)*x360));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x361 = INT64_MAX;
	int32_t x362 = 392410866;
	static int8_t x363 = -50;
	static volatile int64_t t80 = 567179207317LL;

    t80 = (x361%((x362!=x363)*x364));

    if (t80 != 7LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x365 = -1;
	volatile int32_t x367 = 1;
	volatile int32_t x368 = -1;

    t81 = (x365%((x366!=x367)*x368));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x369 = 1168476U;
	static int64_t x372 = 7992478298LL;
	volatile int64_t t82 = 465858LL;

    t82 = (x369%((x370!=x371)*x372));

    if (t82 != 1168476LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x373 = INT32_MAX;
	static int16_t x374 = 0;
	volatile uint32_t x376 = 681404878U;
	volatile uint32_t t83 = 31U;

    t83 = (x373%((x374!=x375)*x376));

    if (t83 != 103269013U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x377 = 988LLU;
	uint64_t x378 = 592LLU;
	int16_t x379 = -1;
	int16_t x380 = INT16_MIN;
	static volatile uint64_t t84 = 65223LLU;

    t84 = (x377%((x378!=x379)*x380));

    if (t84 != 988LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x381 = -1;
	int8_t x382 = -31;
	static volatile uint64_t x383 = UINT64_MAX;
	static volatile uint32_t t85 = 5840U;

    t85 = (x381%((x382!=x383)*x384));

    if (t85 != 5U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x385 = 3888LL;
	volatile uint64_t x386 = UINT64_MAX;
	volatile int64_t x387 = INT64_MIN;
	static int64_t x388 = 2LL;
	int64_t t86 = -3LL;

    t86 = (x385%((x386!=x387)*x388));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x389 = -1;
	volatile uint16_t x390 = 1U;
	volatile int32_t x391 = INT32_MIN;
	uint8_t x392 = 35U;

    t87 = (x389%((x390!=x391)*x392));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x393 = INT16_MIN;
	static int64_t x394 = INT64_MAX;
	uint8_t x395 = UINT8_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t88 = -1;

    t88 = (x393%((x394!=x395)*x396));

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x397 = 73572;
	int32_t x398 = 638;
	static uint32_t x399 = 59197U;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t89 = 225430897921392LLU;

    t89 = (x397%((x398!=x399)*x400));

    if (t89 != 73572LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x401 = 6781843056101LL;
	int64_t x402 = INT64_MAX;
	uint8_t x403 = UINT8_MAX;
	int8_t x404 = INT8_MAX;
	int64_t t90 = 68255414978131178LL;

    t90 = (x401%((x402!=x403)*x404));

    if (t90 != 53LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x405 = UINT32_MAX;
	uint16_t x406 = UINT16_MAX;
	static volatile int32_t x407 = INT32_MAX;
	int32_t x408 = -459976269;
	static volatile uint32_t t91 = 31870U;

    t91 = (x405%((x406!=x407)*x408));

    if (t91 != 459976268U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x414 = 13U;
	int32_t x415 = INT32_MAX;
	uint8_t x416 = 34U;

    t92 = (x413%((x414!=x415)*x416));

    if (t92 != 19) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x417 = INT16_MAX;
	int64_t x418 = -1LL;
	static int32_t x419 = INT32_MIN;
	uint8_t x420 = 114U;
	static volatile int32_t t93 = -3372264;

    t93 = (x417%((x418!=x419)*x420));

    if (t93 != 49) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x421 = INT32_MIN;
	static uint16_t x422 = 7U;
	uint8_t x423 = 2U;
	uint16_t x424 = 475U;
	volatile int32_t t94 = 2377089;

    t94 = (x421%((x422!=x423)*x424));

    if (t94 != -98) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x425 = 22009U;
	uint32_t x426 = UINT32_MAX;
	volatile int16_t x427 = INT16_MIN;
	uint64_t t95 = 43796405459LLU;

    t95 = (x425%((x426!=x427)*x428));

    if (t95 != 22009LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x430 = INT32_MIN;
	uint32_t x431 = 272U;
	volatile int32_t x432 = -176690;
	volatile uint32_t t96 = 128207003U;

    t96 = (x429%((x430!=x431)*x432));

    if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x434 = INT64_MIN;
	int32_t x435 = 255471;
	uint32_t x436 = UINT32_MAX;
	uint32_t t97 = 9U;

    t97 = (x433%((x434!=x435)*x436));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x441 = UINT8_MAX;
	uint64_t x442 = 17900915758LLU;
	int64_t x443 = INT64_MIN;
	static int8_t x444 = -1;
	int32_t t98 = 129;

    t98 = (x441%((x442!=x443)*x444));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x445 = 1999U;
	uint64_t x447 = 212016314891339772LLU;
	static volatile uint8_t x448 = UINT8_MAX;
	volatile uint32_t t99 = 32425U;

    t99 = (x445%((x446!=x447)*x448));

    if (t99 != 214U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x449 = INT8_MAX;
	volatile uint32_t x451 = 4749U;
	volatile int32_t x452 = 554;
	volatile int32_t t100 = 41844;

    t100 = (x449%((x450!=x451)*x452));

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x453 = 59U;
	int32_t x454 = INT32_MIN;
	int16_t x455 = 3;
	int8_t x456 = INT8_MIN;
	int32_t t101 = 240;

    t101 = (x453%((x454!=x455)*x456));

    if (t101 != 59) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x457 = -1LL;
	int16_t x458 = -1;
	static uint16_t x459 = UINT16_MAX;
	volatile uint64_t x460 = 76212426463128297LLU;
	volatile uint64_t t102 = 29760286915LLU;

    t102 = (x457%((x458!=x459)*x460));

    if (t102 != 3336869632503741LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x462 = -1;
	int64_t x463 = INT64_MIN;
	volatile int32_t x464 = -1;
	int32_t t103 = -14720;

    t103 = (x461%((x462!=x463)*x464));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x466 = -1;
	int64_t x468 = INT64_MIN;
	volatile int64_t t104 = -352LL;

    t104 = (x465%((x466!=x467)*x468));

    if (t104 != 18034214006543950LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x469 = 13U;
	static uint32_t x470 = 18U;
	static uint16_t x471 = 15U;
	uint16_t x472 = 1506U;
	int32_t t105 = -167;

    t105 = (x469%((x470!=x471)*x472));

    if (t105 != 13) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x473 = 3U;
	volatile uint64_t x474 = 6759512110111LLU;
	uint64_t x475 = 25074242908LLU;
	volatile uint16_t x476 = 36U;
	volatile int32_t t106 = 283;

    t106 = (x473%((x474!=x475)*x476));

    if (t106 != 3) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x477 = -1539;
	int16_t x479 = 0;
	volatile int64_t x480 = 6LL;
	volatile int64_t t107 = 1886585LL;

    t107 = (x477%((x478!=x479)*x480));

    if (t107 != -3LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x482 = INT16_MAX;
	int32_t x483 = -40;
	int64_t x484 = -180896130576666LL;
	static volatile int64_t t108 = 4199512263627081379LL;

    t108 = (x481%((x482!=x483)*x484));

    if (t108 != 4294967295LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x493 = -1;
	uint32_t x494 = 949343931U;
	int32_t x496 = -1;

    t109 = (x493%((x494!=x495)*x496));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x497 = INT8_MAX;
	uint32_t x499 = 190101379U;
	volatile int32_t t110 = 29462460;

    t110 = (x497%((x498!=x499)*x500));

    if (t110 != 127) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x501 = -1LL;
	int16_t x502 = -1;
	uint32_t x503 = 4159514U;
	static int32_t x504 = INT32_MIN;
	volatile int64_t t111 = -33LL;

    t111 = (x501%((x502!=x503)*x504));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x505 = INT16_MAX;
	int32_t x506 = -1;
	int16_t x507 = INT16_MIN;
	volatile uint64_t t112 = 19LLU;

    t112 = (x505%((x506!=x507)*x508));

    if (t112 != 32767LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x509 = INT32_MIN;
	volatile int16_t x511 = -1;
	static int32_t t113 = 1258577;

    t113 = (x509%((x510!=x511)*x512));

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x514 = INT64_MAX;
	int8_t x515 = INT8_MIN;
	volatile int32_t x516 = -1;
	static int64_t t114 = -7566207524234LL;

    t114 = (x513%((x514!=x515)*x516));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x521 = INT8_MIN;
	volatile uint16_t x522 = 19634U;
	int16_t x523 = INT16_MAX;
	static int64_t x524 = -1LL;
	int64_t t115 = 118169182262145LL;

    t115 = (x521%((x522!=x523)*x524));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x525 = INT64_MIN;
	volatile uint8_t x527 = 1U;
	uint64_t x528 = 405LLU;
	uint64_t t116 = 41465113411266LLU;

    t116 = (x525%((x526!=x527)*x528));

    if (t116 != 188LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x529 = 0U;
	volatile uint16_t x530 = 9721U;
	uint32_t x531 = UINT32_MAX;
	static volatile uint8_t x532 = 44U;

    t117 = (x529%((x530!=x531)*x532));

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x534 = INT16_MIN;
	int32_t x535 = 315;
	volatile int32_t x536 = 103669047;
	volatile int32_t t118 = 1;

    t118 = (x533%((x534!=x535)*x536));

    if (t118 != -128) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x537 = 833597240191891LLU;
	uint32_t x539 = UINT32_MAX;
	static volatile int8_t x540 = INT8_MIN;
	volatile uint64_t t119 = 233183086409LLU;

    t119 = (x537%((x538!=x539)*x540));

    if (t119 != 833597240191891LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x541 = UINT16_MAX;
	int16_t x542 = 1;
	uint32_t x543 = 115U;
	int8_t x544 = -1;
	volatile int32_t t120 = -5;

    t120 = (x541%((x542!=x543)*x544));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x546 = -1;
	int16_t x548 = 862;

    t121 = (x545%((x546!=x547)*x548));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x549 = 7505U;
	uint16_t x550 = 179U;
	static volatile int32_t x552 = INT32_MIN;
	int32_t t122 = -211036;

    t122 = (x549%((x550!=x551)*x552));

    if (t122 != 7505) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x553 = INT16_MIN;
	static uint8_t x554 = 0U;
	uint32_t x555 = 218U;
	int32_t x556 = -41221277;
	volatile int32_t t123 = -11;

    t123 = (x553%((x554!=x555)*x556));

    if (t123 != -32768) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x557 = 546U;
	int64_t x559 = INT64_MIN;
	volatile uint16_t x560 = 1407U;

    t124 = (x557%((x558!=x559)*x560));

    if (t124 != 546) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x562 = INT8_MIN;
	int16_t x563 = INT16_MAX;
	static int8_t x564 = INT8_MAX;

    t125 = (x561%((x562!=x563)*x564));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x565 = UINT32_MAX;
	int8_t x566 = INT8_MIN;
	static int16_t x567 = 1;
	volatile uint32_t t126 = 35687903U;

    t126 = (x565%((x566!=x567)*x568));

    if (t126 != 88515U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x569 = -147;
	static uint16_t x570 = UINT16_MAX;
	static int8_t x571 = INT8_MIN;
	uint8_t x572 = UINT8_MAX;
	volatile int32_t t127 = 3875;

    t127 = (x569%((x570!=x571)*x572));

    if (t127 != -147) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x573 = 27558373U;
	uint8_t x574 = 2U;
	int16_t x575 = INT16_MIN;
	static int16_t x576 = INT16_MAX;
	uint32_t t128 = 56U;

    t128 = (x573%((x574!=x575)*x576));

    if (t128 != 1326U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x581 = -1;
	static int32_t x582 = INT32_MIN;
	int16_t x583 = INT16_MIN;
	int16_t x584 = 6932;
	int32_t t129 = 25477;

    t129 = (x581%((x582!=x583)*x584));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x585 = 8663443195195LLU;
	uint32_t x586 = 49U;
	volatile uint16_t x587 = 632U;
	volatile int64_t x588 = INT64_MAX;
	uint64_t t130 = 2LLU;

    t130 = (x585%((x586!=x587)*x588));

    if (t130 != 8663443195195LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x589 = -3072;
	int16_t x590 = 777;
	uint8_t x591 = 5U;
	volatile int64_t x592 = 550818406LL;
	volatile int64_t t131 = 0LL;

    t131 = (x589%((x590!=x591)*x592));

    if (t131 != -3072LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x593 = 1833056U;
	static int16_t x594 = -1;
	uint16_t x595 = 1707U;
	uint64_t x596 = UINT64_MAX;

    t132 = (x593%((x594!=x595)*x596));

    if (t132 != 1833056LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x597 = UINT32_MAX;
	int8_t x600 = INT8_MAX;
	volatile uint32_t t133 = 1811325495U;

    t133 = (x597%((x598!=x599)*x600));

    if (t133 != 15U) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x601 = -31329682;
	static volatile uint64_t x602 = 123440449151722LLU;
	uint32_t x603 = 261U;
	uint64_t x604 = UINT64_MAX;
	uint64_t t134 = 616074926796931LLU;

    t134 = (x601%((x602!=x603)*x604));

    if (t134 != 18446744073678221934LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x605 = INT8_MAX;
	volatile int64_t x607 = -1LL;
	static volatile int8_t x608 = -1;

    t135 = (x605%((x606!=x607)*x608));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x609 = INT32_MAX;
	uint8_t x610 = 2U;
	volatile uint8_t x611 = 41U;
	uint16_t x612 = UINT16_MAX;
	static int32_t t136 = -4494367;

    t136 = (x609%((x610!=x611)*x612));

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x613 = -112;
	static volatile int64_t x614 = INT64_MIN;
	uint32_t x615 = 33317654U;
	uint16_t x616 = UINT16_MAX;
	static volatile int32_t t137 = 282463053;

    t137 = (x613%((x614!=x615)*x616));

    if (t137 != -112) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x618 = INT32_MAX;
	volatile int32_t x619 = INT32_MIN;
	int64_t x620 = -1LL;
	volatile int64_t t138 = -528308259990791437LL;

    t138 = (x617%((x618!=x619)*x620));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x622 = INT8_MIN;
	int16_t x623 = 534;
	int32_t x624 = -1;
	static int32_t t139 = 1;

    t139 = (x621%((x622!=x623)*x624));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x625 = 11858995883288LLU;
	uint16_t x626 = UINT16_MAX;
	static int16_t x627 = -6;
	uint16_t x628 = 124U;
	volatile uint64_t t140 = 93599628956174LLU;

    t140 = (x625%((x626!=x627)*x628));

    if (t140 != 112LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x629 = -1;
	int16_t x630 = INT16_MIN;
	static int8_t x631 = 2;
	uint16_t x632 = 21613U;
	int32_t t141 = 6166;

    t141 = (x629%((x630!=x631)*x632));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x635 = INT64_MIN;
	int8_t x636 = INT8_MIN;

    t142 = (x633%((x634!=x635)*x636));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x638 = UINT8_MAX;
	int32_t x639 = INT32_MIN;
	uint8_t x640 = UINT8_MAX;
	int32_t t143 = 3;

    t143 = (x637%((x638!=x639)*x640));

    if (t143 != 2) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x641 = 2338U;
	int16_t x642 = INT16_MIN;
	uint64_t x643 = 1308700391643035LLU;
	int64_t x644 = -687LL;
	int64_t t144 = 117LL;

    t144 = (x641%((x642!=x643)*x644));

    if (t144 != 277LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x654 = INT8_MAX;
	int64_t x655 = -17LL;
	volatile int32_t x656 = INT32_MAX;
	static volatile int32_t t145 = 1391;

    t145 = (x653%((x654!=x655)*x656));

    if (t145 != -128) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x657 = 724347U;
	volatile int16_t x658 = 4;
	int16_t x660 = -12075;
	static volatile uint32_t t146 = 1269240504U;

    t146 = (x657%((x658!=x659)*x660));

    if (t146 != 724347U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x661 = 1U;
	int8_t x662 = -1;
	int8_t x663 = 1;
	int16_t x664 = -1;
	volatile int32_t t147 = 97950;

    t147 = (x661%((x662!=x663)*x664));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x665 = INT32_MAX;
	uint32_t x666 = 773085960U;
	static uint16_t x667 = UINT16_MAX;
	int32_t x668 = INT32_MIN;
	int32_t t148 = INT32_MAX;

    t148 = (x665%((x666!=x667)*x668));

    if (t148 != INT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x670 = 0U;
	volatile uint64_t x671 = 5130140474593LLU;
	static uint64_t x672 = UINT64_MAX;
	uint64_t t149 = 181522067681150139LLU;

    t149 = (x669%((x670!=x671)*x672));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x673 = -1LL;
	static uint16_t x675 = 5U;

    t150 = (x673%((x674!=x675)*x676));

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x681 = -1;
	uint8_t x682 = UINT8_MAX;
	static uint8_t x683 = 3U;
	volatile int8_t x684 = INT8_MIN;
	volatile int32_t t151 = -53176;

    t151 = (x681%((x682!=x683)*x684));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x687 = -1;
	static uint64_t x688 = 7971536429495382LLU;

    t152 = (x685%((x686!=x687)*x688));

    if (t152 != 608773709754020LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x689 = -1LL;
	int32_t x690 = -1;
	int8_t x691 = -60;

    t153 = (x689%((x690!=x691)*x692));

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x694 = -1;
	int64_t x695 = INT64_MIN;
	int64_t x696 = INT64_MIN;
	int64_t t154 = -1280170078165778LL;

    t154 = (x693%((x694!=x695)*x696));

    if (t154 != 25LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x702 = 0U;
	volatile int8_t x703 = INT8_MIN;
	volatile int64_t t155 = 0LL;

    t155 = (x701%((x702!=x703)*x704));

    if (t155 != -5LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x709 = -1LL;
	volatile int16_t x710 = INT16_MIN;
	uint8_t x711 = UINT8_MAX;
	static volatile int32_t x712 = INT32_MAX;

    t156 = (x709%((x710!=x711)*x712));

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x713 = 171U;
	static int16_t x714 = INT16_MAX;
	volatile uint8_t x715 = UINT8_MAX;

    t157 = (x713%((x714!=x715)*x716));

    if (t157 != 171) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x717 = INT64_MIN;
	volatile int64_t x718 = INT64_MAX;
	uint32_t x719 = UINT32_MAX;
	uint16_t x720 = UINT16_MAX;

    t158 = (x717%((x718!=x719)*x720));

    if (t158 != -32768LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x721 = UINT16_MAX;
	int32_t x722 = 719;
	uint16_t x723 = 166U;
	volatile int16_t x724 = INT16_MIN;
	volatile int32_t t159 = 60203134;

    t159 = (x721%((x722!=x723)*x724));

    if (t159 != 32767) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x729 = -30;
	uint32_t x730 = 9588267U;
	volatile int16_t x732 = -1;
	int32_t t160 = -8344830;

    t160 = (x729%((x730!=x731)*x732));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x733 = INT32_MIN;
	int16_t x734 = -1;
	int16_t x735 = -1006;
	int16_t x736 = INT16_MIN;
	volatile int32_t t161 = 50455;

    t161 = (x733%((x734!=x735)*x736));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x737 = INT32_MIN;
	int64_t x739 = INT64_MIN;
	uint8_t x740 = 74U;
	int32_t t162 = -677797551;

    t162 = (x737%((x738!=x739)*x740));

    if (t162 != -22) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x742 = INT64_MAX;
	int8_t x743 = INT8_MAX;
	static int64_t x744 = INT64_MAX;
	static int64_t t163 = 17LL;

    t163 = (x741%((x742!=x743)*x744));

    if (t163 != -2147483648LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x745 = 2526LLU;
	uint16_t x746 = 421U;
	static int8_t x748 = INT8_MAX;

    t164 = (x745%((x746!=x747)*x748));

    if (t164 != 113LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x749 = INT32_MAX;
	int16_t x750 = INT16_MIN;
	uint8_t x751 = UINT8_MAX;
	int8_t x752 = INT8_MIN;
	int32_t t165 = 98163;

    t165 = (x749%((x750!=x751)*x752));

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x753 = 30;
	uint64_t x754 = 82876926LLU;
	static uint8_t x756 = UINT8_MAX;
	int32_t t166 = 9410556;

    t166 = (x753%((x754!=x755)*x756));

    if (t166 != 30) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x757 = -443;
	int32_t x758 = 784087844;
	int16_t x759 = INT16_MIN;
	int32_t t167 = 0;

    t167 = (x757%((x758!=x759)*x760));

    if (t167 != -443) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x761 = -1;
	int16_t x762 = -1;
	volatile int64_t x763 = INT64_MAX;
	volatile uint8_t x764 = 2U;
	static int32_t t168 = -340928;

    t168 = (x761%((x762!=x763)*x764));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x766 = INT32_MIN;
	static uint16_t x767 = 4U;
	int16_t x768 = INT16_MIN;

    t169 = (x765%((x766!=x767)*x768));

    if (t169 != -13923LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x771 = INT16_MIN;
	uint8_t x772 = UINT8_MAX;
	volatile int64_t t170 = 7880397717902455LL;

    t170 = (x769%((x770!=x771)*x772));

    if (t170 != -147LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x773 = UINT8_MAX;
	volatile int32_t x776 = -1;
	static volatile int32_t t171 = -382515;

    t171 = (x773%((x774!=x775)*x776));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x777 = INT16_MAX;
	static uint16_t x778 = UINT16_MAX;
	volatile uint64_t x779 = 143LLU;

    t172 = (x777%((x778!=x779)*x780));

    if (t172 != 31) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x782 = INT8_MAX;
	int16_t x783 = -1;
	uint8_t x784 = 93U;
	volatile int32_t t173 = -33;

    t173 = (x781%((x782!=x783)*x784));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x786 = 17267U;
	volatile int64_t t174 = 318687986LL;

    t174 = (x785%((x786!=x787)*x788));

    if (t174 != 3952LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x791 = UINT64_MAX;
	volatile int64_t t175 = 114798317446LL;

    t175 = (x789%((x790!=x791)*x792));

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x793 = 51267964553055LLU;
	uint32_t x794 = 52268426U;
	volatile int16_t x796 = -3;
	volatile uint64_t t176 = 67653295LLU;

    t176 = (x793%((x794!=x795)*x796));

    if (t176 != 51267964553055LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x797 = -154387LL;
	int64_t x798 = INT64_MAX;
	uint64_t x799 = UINT64_MAX;
	int64_t t177 = 68206024062898LL;

    t177 = (x797%((x798!=x799)*x800));

    if (t177 != -255LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x801 = UINT32_MAX;
	int8_t x802 = -51;
	int16_t x803 = INT16_MIN;
	int32_t x804 = INT32_MAX;
	volatile uint32_t t178 = 978U;

    t178 = (x801%((x802!=x803)*x804));

    if (t178 != 1U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x805 = -1;
	volatile uint64_t x807 = UINT64_MAX;
	static volatile int32_t t179 = -3979;

    t179 = (x805%((x806!=x807)*x808));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x809 = INT32_MAX;
	int16_t x810 = INT16_MAX;
	uint64_t x811 = UINT64_MAX;
	int64_t x812 = -191808LL;

    t180 = (x809%((x810!=x811)*x812));

    if (t180 != 1279LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x813 = INT64_MIN;
	int16_t x814 = 1;
	int64_t x815 = INT64_MAX;
	int8_t x816 = INT8_MIN;

    t181 = (x813%((x814!=x815)*x816));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x817 = INT8_MAX;
	static volatile int8_t x819 = INT8_MIN;
	int16_t x820 = INT16_MAX;
	volatile int32_t t182 = -19125986;

    t182 = (x817%((x818!=x819)*x820));

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x826 = UINT16_MAX;
	uint16_t x827 = 2U;
	volatile int64_t x828 = -6LL;
	static volatile int64_t t183 = 1937734LL;

    t183 = (x825%((x826!=x827)*x828));

    if (t183 != 3LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x829 = INT8_MIN;
	static volatile uint16_t x831 = UINT16_MAX;
	int32_t x832 = INT32_MAX;
	static volatile int32_t t184 = 243254219;

    t184 = (x829%((x830!=x831)*x832));

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x837 = 15;
	static int64_t x838 = INT64_MAX;
	int16_t x839 = -1;
	static volatile int8_t x840 = INT8_MIN;
	int32_t t185 = -6014;

    t185 = (x837%((x838!=x839)*x840));

    if (t185 != 15) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x841 = 1661470424U;
	uint16_t x842 = UINT16_MAX;
	uint8_t x843 = UINT8_MAX;
	volatile int8_t x844 = INT8_MAX;
	uint32_t t186 = 165939U;

    t186 = (x841%((x842!=x843)*x844));

    if (t186 != 36U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x845 = INT32_MAX;
	volatile int16_t x846 = INT16_MAX;
	int32_t x847 = INT32_MAX;
	int64_t x848 = INT64_MAX;
	volatile int64_t t187 = -1727258LL;

    t187 = (x845%((x846!=x847)*x848));

    if (t187 != 2147483647LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x849 = 12513964U;
	uint64_t x850 = 5664352109LLU;
	uint64_t x851 = 3808833172645710127LLU;
	int32_t x852 = 9266122;
	static volatile uint32_t t188 = 186626U;

    t188 = (x849%((x850!=x851)*x852));

    if (t188 != 3247842U) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint64_t x853 = 101796657LLU;
	int8_t x855 = INT8_MAX;
	uint16_t x856 = UINT16_MAX;
	uint64_t t189 = 3875LLU;

    t189 = (x853%((x854!=x855)*x856));

    if (t189 != 20802LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x858 = 24636044671882986LLU;
	static uint32_t x859 = 18147U;
	static volatile uint8_t x860 = UINT8_MAX;
	volatile int32_t t190 = 12;

    t190 = (x857%((x858!=x859)*x860));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x861 = UINT32_MAX;
	int8_t x863 = INT8_MIN;
	int8_t x864 = INT8_MIN;
	volatile uint32_t t191 = 420095998U;

    t191 = (x861%((x862!=x863)*x864));

    if (t191 != 127U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x865 = INT16_MAX;
	int16_t x866 = INT16_MIN;
	int32_t x868 = INT32_MAX;
	static volatile int32_t t192 = 6;

    t192 = (x865%((x866!=x867)*x868));

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x871 = 1;
	int64_t x872 = INT64_MIN;
	static volatile int64_t t193 = 614294337801059LL;

    t193 = (x869%((x870!=x871)*x872));

    if (t193 != 114LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x873 = INT64_MIN;
	static volatile int32_t x874 = -74494387;
	volatile int8_t x875 = INT8_MIN;
	static int64_t x876 = 43053375LL;
	int64_t t194 = 40274882363020890LL;

    t194 = (x873%((x874!=x875)*x876));

    if (t194 != -43022183LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x877 = -1;
	int64_t x878 = -884LL;
	static int64_t x880 = INT64_MIN;

    t195 = (x877%((x878!=x879)*x880));

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x881 = 80296U;
	static int32_t x883 = -1;
	int16_t x884 = INT16_MIN;
	volatile uint32_t t196 = 1747U;

    t196 = (x881%((x882!=x883)*x884));

    if (t196 != 80296U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x885 = INT32_MIN;
	uint16_t x886 = UINT16_MAX;
	uint8_t x887 = 18U;
	int16_t x888 = -4294;
	volatile int32_t t197 = -57;

    t197 = (x885%((x886!=x887)*x888));

    if (t197 != -2720) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x889 = UINT64_MAX;
	int8_t x890 = -30;
	volatile uint64_t x891 = 5090551LLU;
	int64_t x892 = INT64_MIN;
	volatile uint64_t t198 = 28580076342737022LLU;

    t198 = (x889%((x890!=x891)*x892));

    if (t198 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x893 = UINT8_MAX;
	int64_t x895 = INT64_MAX;
	int8_t x896 = -1;
	int32_t t199 = -418048;

    t199 = (x893%((x894!=x895)*x896));

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

