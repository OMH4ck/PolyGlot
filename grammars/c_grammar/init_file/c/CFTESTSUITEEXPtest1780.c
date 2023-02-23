
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

int16_t x2 = INT16_MIN;
int32_t x6 = -1;
int8_t x8 = INT8_MIN;
int8_t x12 = 23;
int32_t t2 = -43772;
int8_t x21 = INT8_MIN;
uint64_t x22 = UINT64_MAX;
static int16_t x26 = -1;
int16_t x27 = INT16_MIN;
static volatile uint32_t t6 = 1522941927U;
int64_t x38 = -1LL;
int32_t x39 = INT32_MAX;
int32_t x43 = INT32_MIN;
int16_t x55 = -3901;
volatile int16_t x58 = -386;
uint64_t x59 = 674943047992267210LLU;
uint16_t x60 = UINT16_MAX;
static uint8_t x63 = UINT8_MAX;
int64_t x65 = INT64_MIN;
int32_t x71 = 2859;
volatile int32_t t17 = -120138611;
volatile int32_t x82 = -1;
uint8_t x87 = 2U;
int32_t t19 = 26;
uint8_t x89 = UINT8_MAX;
volatile int64_t x91 = INT64_MAX;
uint64_t x98 = UINT64_MAX;
int32_t x107 = INT32_MIN;
int64_t x116 = INT64_MAX;
volatile int16_t x120 = -1;
static volatile int32_t t26 = -3481906;
int64_t x128 = INT64_MAX;
int64_t x131 = 5375774678547LL;
int64_t x136 = 45085091985206LL;
int64_t x138 = -1LL;
volatile int32_t t32 = 888008;
static uint64_t x154 = 47284652LLU;
volatile int32_t x167 = INT32_MIN;
static int8_t x181 = INT8_MIN;
uint32_t x189 = 0U;
int32_t x200 = INT32_MAX;
static int16_t x204 = INT16_MIN;
uint32_t x205 = 107933U;
uint8_t x208 = 8U;
static int16_t x210 = 985;
uint32_t x211 = 0U;
volatile int64_t x212 = -57537134735909110LL;
int8_t x218 = INT8_MIN;
static int64_t x219 = 7LL;
int32_t t48 = 199661;
uint32_t x229 = 10098188U;
int8_t x236 = INT8_MIN;
int8_t x238 = 0;
static volatile uint32_t x239 = 56U;
volatile int64_t x244 = -3188953089908423284LL;
volatile int64_t t54 = 908244053LL;
int32_t x252 = INT32_MAX;
uint8_t x253 = 11U;
uint64_t x278 = 1946471892LLU;
volatile int64_t x280 = -209LL;
uint64_t x282 = 20972LLU;
volatile int32_t t63 = 3872;
int8_t x290 = -1;
static volatile int32_t x293 = -1;
static uint32_t t66 = 179943474U;
volatile uint32_t t67 = 1U;
static int64_t x324 = -1LL;
int16_t x327 = 19;
int16_t x330 = -1;
int8_t x338 = 0;
uint32_t t77 = 570087656U;
volatile int64_t x371 = -799LL;
volatile int64_t x372 = -52466705568LL;
static uint64_t x378 = 915942LLU;
int8_t x382 = -10;
int16_t x385 = 477;
int32_t x388 = 6074837;
volatile int32_t t83 = -395;
volatile uint32_t t84 = 3U;
volatile int8_t x404 = INT8_MAX;
volatile uint64_t x412 = UINT64_MAX;
uint64_t t86 = 134174432130650LLU;
int32_t x413 = -1;
static int32_t x417 = 14653707;
int16_t x418 = -1;
volatile int32_t t88 = -595000845;
volatile int64_t x428 = 40701342195LL;
int64_t t89 = -37162873015044355LL;
int32_t x434 = -1;
static uint64_t x442 = UINT64_MAX;
volatile uint32_t t92 = 45078U;
static volatile uint64_t x445 = 12842859LLU;
static uint32_t x452 = 9U;
int32_t t98 = -3707;
static int8_t x469 = -1;
int8_t x478 = 19;
int32_t x479 = INT32_MIN;
int16_t x482 = -1;
uint8_t x484 = 1U;
int64_t x491 = INT64_MAX;
int32_t x493 = INT32_MIN;
static volatile int16_t x494 = 3;
uint64_t t103 = 10166272818716391LLU;
int64_t x497 = 1084LL;
int8_t x500 = INT8_MAX;
int32_t t105 = 32643;
static int16_t x511 = INT16_MAX;
int32_t x515 = 123051;
uint16_t x519 = UINT16_MAX;
static uint32_t t108 = 102422780U;
static uint32_t x521 = 12167U;
int8_t x524 = 0;
uint32_t x528 = UINT32_MAX;
uint64_t x532 = UINT64_MAX;
uint8_t x536 = 3U;
int32_t t114 = -1954;
int8_t x553 = 3;
static int8_t x561 = 1;
static int32_t x567 = INT32_MIN;
static uint32_t x575 = 242U;
int16_t x576 = -14255;
static uint16_t x580 = 1U;
static volatile int32_t t121 = -365;
uint8_t x587 = 16U;
uint64_t x589 = UINT64_MAX;
static uint16_t x597 = 2878U;
volatile uint32_t x605 = 1854U;
int64_t x607 = -1LL;
int64_t x613 = -1LL;
int64_t x617 = -1LL;
int32_t x618 = INT32_MIN;
int32_t x627 = -1;
uint64_t x630 = 614LLU;
int64_t x633 = -4407817LL;
uint32_t x634 = 3706U;
uint64_t x646 = UINT64_MAX;
static volatile uint64_t t138 = 746821757123LLU;
int8_t x663 = INT8_MIN;
int64_t x665 = -1LL;
uint16_t x669 = 10U;
volatile int16_t x670 = INT16_MIN;
static int16_t x683 = INT16_MIN;
static int16_t x684 = -1;
int16_t x685 = -43;
volatile int32_t t146 = 6;
uint8_t x703 = 2U;
int64_t x706 = 4020481820892479LL;
static volatile int32_t x711 = -1;
static int8_t x714 = -1;
static uint32_t x715 = 126U;
volatile int32_t t152 = -3;
static int16_t x727 = INT16_MIN;
static uint32_t t153 = 124727U;
int16_t x735 = INT16_MAX;
uint64_t x755 = 889263194098LLU;
int64_t t158 = -386LL;
static int16_t x763 = INT16_MIN;
volatile int64_t x764 = INT64_MAX;
int16_t x766 = -1;
int32_t x770 = 46606;
int8_t x772 = 0;
int64_t t162 = 117689883794LL;
int16_t x780 = INT16_MAX;
int8_t x794 = -19;
int64_t t169 = 233330258250LL;
static int32_t x827 = INT32_MAX;
int64_t x830 = -1LL;
volatile int32_t t172 = 46822;
int16_t x834 = INT16_MAX;
static volatile uint32_t x840 = UINT32_MAX;
static volatile int8_t x841 = -1;
int64_t t175 = -9614009076LL;
static int16_t x849 = INT16_MIN;
uint16_t x851 = 34U;
int32_t x852 = -2220570;
int64_t x853 = INT64_MIN;
volatile uint64_t x859 = UINT64_MAX;
int16_t x862 = 0;
static uint16_t x864 = 74U;
volatile uint32_t x866 = UINT32_MAX;
volatile uint16_t x867 = 15U;
volatile int8_t x873 = INT8_MIN;
uint16_t x876 = UINT16_MAX;
int32_t t182 = 104111408;
volatile uint64_t x877 = UINT64_MAX;
int64_t x880 = -1LL;
static int8_t x888 = 4;
volatile int32_t t185 = -1;
int32_t t188 = 97751;
int8_t x904 = -1;
volatile int32_t t189 = 151;
volatile uint64_t x918 = UINT64_MAX;
static volatile int16_t x927 = -1;
volatile int32_t t194 = 1;
uint64_t x930 = UINT64_MAX;
volatile int16_t x940 = INT16_MIN;
volatile int32_t t197 = 120086;
uint32_t x952 = 4681829U;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	int32_t x3 = 28508422;
	uint32_t x4 = 80U;
	volatile uint32_t t0 = 767104303U;

    t0 = (x1-((x2<=x3)-x4));

    if (t0 != 78U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -47;
	volatile uint32_t x7 = 431U;
	volatile int32_t t1 = -1;

    t1 = (x5-((x6<=x7)-x8));

    if (t1 != -175) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = -735;
	uint8_t x10 = 0U;
	int8_t x11 = INT8_MIN;

    t2 = (x9-((x10<=x11)-x12));

    if (t2 != -712) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int16_t x14 = INT16_MIN;
	volatile uint16_t x15 = 4792U;
	uint64_t x16 = 0LLU;
	uint64_t t3 = 1526583949224LLU;

    t3 = (x13-((x14<=x15)-x16));

    if (t3 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	uint8_t x18 = 0U;
	uint32_t x19 = UINT32_MAX;
	int16_t x20 = 1698;
	static int32_t t4 = -1740364;

    t4 = (x17-((x18<=x19)-x20));

    if (t4 != 1569) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x23 = -1;
	uint8_t x24 = UINT8_MAX;
	static int32_t t5 = 0;

    t5 = (x21-((x22<=x23)-x24));

    if (t5 != 126) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MAX;
	uint32_t x28 = 63567U;

    t6 = (x25-((x26<=x27)-x28));

    if (t6 != 96334U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 5U;
	int8_t x30 = INT8_MIN;
	uint32_t x31 = UINT32_MAX;
	uint64_t x32 = 0LLU;
	volatile uint64_t t7 = 8403428310736776LLU;

    t7 = (x29-((x30<=x31)-x32));

    if (t7 != 4LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = -1;
	int8_t x40 = 0;
	int32_t t8 = -108238990;

    t8 = (x37-((x38<=x39)-x40));

    if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x41 = 24;
	int64_t x42 = -1LL;
	int8_t x44 = 20;
	volatile int32_t t9 = -2617602;

    t9 = (x41-((x42<=x43)-x44));

    if (t9 != 44) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = 108;
	int8_t x46 = INT8_MAX;
	uint32_t x47 = 6476245U;
	uint16_t x48 = 12799U;
	volatile int32_t t10 = 1;

    t10 = (x45-((x46<=x47)-x48));

    if (t10 != 12906) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = 0;
	int8_t x54 = INT8_MIN;
	volatile uint8_t x56 = UINT8_MAX;
	volatile int32_t t11 = 27319;

    t11 = (x53-((x54<=x55)-x56));

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x57 = INT16_MAX;
	volatile int32_t t12 = -1;

    t12 = (x57-((x58<=x59)-x60));

    if (t12 != 98302) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x61 = 484U;
	int16_t x62 = 0;
	int16_t x64 = -1;
	volatile uint32_t t13 = 140447U;

    t13 = (x61-((x62<=x63)-x64));

    if (t13 != 482U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x66 = INT8_MIN;
	int32_t x67 = 4072590;
	uint64_t x68 = 0LLU;
	uint64_t t14 = 159LLU;

    t14 = (x65-((x66<=x67)-x68));

    if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x69 = INT8_MAX;
	int64_t x70 = INT64_MIN;
	volatile int8_t x72 = INT8_MAX;
	static int32_t t15 = 20824134;

    t15 = (x69-((x70<=x71)-x72));

    if (t15 != 253) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x73 = 0;
	int16_t x74 = 78;
	int16_t x75 = INT16_MIN;
	int8_t x76 = -1;
	int32_t t16 = 637483755;

    t16 = (x73-((x74<=x75)-x76));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x77 = -1;
	volatile int32_t x78 = 162714;
	volatile uint16_t x79 = 2018U;
	int16_t x80 = -2;

    t17 = (x77-((x78<=x79)-x80));

    if (t17 != -3) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = INT64_MIN;
	uint32_t x83 = 356626031U;
	int64_t x84 = INT64_MAX;
	volatile int64_t t18 = -1LL;

    t18 = (x81-((x82<=x83)-x84));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x85 = INT16_MIN;
	int32_t x86 = -1;
	volatile int8_t x88 = INT8_MIN;

    t19 = (x85-((x86<=x87)-x88));

    if (t19 != -32897) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x90 = -1;
	volatile uint32_t x92 = 1285U;
	uint32_t t20 = 994U;

    t20 = (x89-((x90<=x91)-x92));

    if (t20 != 1539U) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = -1LL;
	uint16_t x94 = 11915U;
	int32_t x95 = INT32_MAX;
	uint8_t x96 = UINT8_MAX;
	int64_t t21 = -45731149LL;

    t21 = (x93-((x94<=x95)-x96));

    if (t21 != 253LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = 0;
	volatile int32_t x99 = 203196476;
	static int16_t x100 = INT16_MAX;
	volatile int32_t t22 = -16154;

    t22 = (x97-((x98<=x99)-x100));

    if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x105 = -4156;
	volatile uint8_t x106 = 4U;
	int16_t x108 = INT16_MIN;
	int32_t t23 = 1;

    t23 = (x105-((x106<=x107)-x108));

    if (t23 != -36924) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MIN;
	static int32_t x112 = INT32_MAX;
	volatile int32_t t24 = -4097209;

    t24 = (x109-((x110<=x111)-x112));

    if (t24 != 2147450878) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x113 = INT64_MIN;
	uint64_t x114 = 3459064198120416355LLU;
	int32_t x115 = 1;
	int64_t t25 = 7LL;

    t25 = (x113-((x114<=x115)-x116));

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x117 = -1;
	int32_t x118 = INT32_MAX;
	uint8_t x119 = 82U;

    t26 = (x117-((x118<=x119)-x120));

    if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x121 = INT8_MIN;
	int32_t x122 = -167165;
	int32_t x123 = INT32_MAX;
	static volatile int64_t x124 = INT64_MAX;
	volatile int64_t t27 = -1116LL;

    t27 = (x121-((x122<=x123)-x124));

    if (t27 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = INT16_MIN;
	uint64_t x126 = 1018296188LLU;
	int16_t x127 = -1;
	static int64_t t28 = -284945789LL;

    t28 = (x125-((x126<=x127)-x128));

    if (t28 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x129 = -7981491702LL;
	uint32_t x130 = UINT32_MAX;
	uint32_t x132 = 5095U;
	volatile int64_t t29 = 2647536281582LL;

    t29 = (x129-((x130<=x131)-x132));

    if (t29 != -12276453904LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x133 = 1U;
	int64_t x134 = INT64_MAX;
	uint8_t x135 = 4U;
	int64_t t30 = -57767945991LL;

    t30 = (x133-((x134<=x135)-x136));

    if (t30 != 45085091985207LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = INT16_MAX;
	int8_t x139 = -1;
	int64_t x140 = -1LL;
	int64_t t31 = -2201LL;

    t31 = (x137-((x138<=x139)-x140));

    if (t31 != 32765LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x145 = UINT8_MAX;
	int16_t x146 = -1;
	volatile int16_t x147 = -1;
	volatile int8_t x148 = INT8_MAX;

    t32 = (x145-((x146<=x147)-x148));

    if (t32 != 381) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x149 = 312624867592756412LL;
	volatile uint32_t x150 = UINT32_MAX;
	int32_t x151 = 3544945;
	int8_t x152 = INT8_MIN;
	int64_t t33 = -392LL;

    t33 = (x149-((x150<=x151)-x152));

    if (t33 != 312624867592756284LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x153 = 0;
	static uint8_t x155 = 6U;
	int32_t x156 = 4421657;
	int32_t t34 = 265;

    t34 = (x153-((x154<=x155)-x156));

    if (t34 != 4421657) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x157 = 52U;
	uint8_t x158 = UINT8_MAX;
	uint32_t x159 = 3495U;
	static uint32_t x160 = 556U;
	volatile uint32_t t35 = 10U;

    t35 = (x157-((x158<=x159)-x160));

    if (t35 != 607U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x161 = -13;
	int32_t x162 = -1;
	static int8_t x163 = INT8_MAX;
	int16_t x164 = 1;
	int32_t t36 = -26;

    t36 = (x161-((x162<=x163)-x164));

    if (t36 != -13) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x165 = -1;
	volatile uint16_t x166 = 96U;
	int32_t x168 = -14;
	int32_t t37 = 1;

    t37 = (x165-((x166<=x167)-x168));

    if (t37 != -15) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x169 = INT16_MIN;
	int32_t x170 = INT32_MIN;
	uint32_t x171 = 4U;
	int64_t x172 = INT64_MAX;
	static int64_t t38 = 67767786240LL;

    t38 = (x169-((x170<=x171)-x172));

    if (t38 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x173 = INT16_MAX;
	volatile int8_t x174 = 33;
	volatile int32_t x175 = INT32_MIN;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t39 = 10754997;

    t39 = (x173-((x174<=x175)-x176));

    if (t39 != 98302) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x177 = -1111;
	int64_t x178 = INT64_MIN;
	static int8_t x179 = INT8_MAX;
	int8_t x180 = 20;
	volatile int32_t t40 = -28418;

    t40 = (x177-((x178<=x179)-x180));

    if (t40 != -1092) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x182 = UINT8_MAX;
	uint32_t x183 = UINT32_MAX;
	uint16_t x184 = 5U;
	int32_t t41 = -228744;

    t41 = (x181-((x182<=x183)-x184));

    if (t41 != -124) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x185 = 7;
	int16_t x186 = INT16_MIN;
	int16_t x187 = 12;
	int32_t x188 = -8227019;
	static volatile int32_t t42 = -5528;

    t42 = (x185-((x186<=x187)-x188));

    if (t42 != -8227013) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x190 = 99U;
	uint32_t x191 = UINT32_MAX;
	int16_t x192 = 1;
	volatile uint32_t t43 = 83164923U;

    t43 = (x189-((x190<=x191)-x192));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x197 = -16LL;
	static volatile uint64_t x198 = UINT64_MAX;
	int32_t x199 = -1;
	volatile int64_t t44 = 11323356654839LL;

    t44 = (x197-((x198<=x199)-x200));

    if (t44 != 2147483630LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x201 = 17934337767LLU;
	uint16_t x202 = 3891U;
	int8_t x203 = 3;
	uint64_t t45 = 36LLU;

    t45 = (x201-((x202<=x203)-x204));

    if (t45 != 17934304999LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x206 = UINT16_MAX;
	uint16_t x207 = 25U;
	volatile uint32_t t46 = 7U;

    t46 = (x205-((x206<=x207)-x208));

    if (t46 != 107941U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = INT8_MIN;
	int64_t t47 = 12LL;

    t47 = (x209-((x210<=x211)-x212));

    if (t47 != -57537134735909238LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x217 = -6546;
	static int32_t x220 = -112871;

    t48 = (x217-((x218<=x219)-x220));

    if (t48 != -119418) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int64_t x221 = INT64_MIN;
	static uint64_t x222 = UINT64_MAX;
	static uint64_t x223 = 32068963960LLU;
	volatile int8_t x224 = INT8_MAX;
	int64_t t49 = -1030313708891121382LL;

    t49 = (x221-((x222<=x223)-x224));

    if (t49 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x225 = 262460074544808026LLU;
	uint16_t x226 = 7257U;
	volatile int32_t x227 = INT32_MIN;
	int32_t x228 = -110150422;
	volatile uint64_t t50 = 957LLU;

    t50 = (x225-((x226<=x227)-x228));

    if (t50 != 262460074434657604LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x230 = 437867610LLU;
	uint32_t x231 = 360524409U;
	int8_t x232 = INT8_MAX;
	uint32_t t51 = 55081U;

    t51 = (x229-((x230<=x231)-x232));

    if (t51 != 10098315U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x233 = 3555723U;
	volatile uint64_t x234 = 10044LLU;
	uint32_t x235 = 1555U;
	volatile uint32_t t52 = 405565506U;

    t52 = (x233-((x234<=x235)-x236));

    if (t52 != 3555595U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x237 = 0;
	volatile uint16_t x240 = 457U;
	static int32_t t53 = 546407218;

    t53 = (x237-((x238<=x239)-x240));

    if (t53 != 456) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x241 = 15332U;
	volatile int64_t x242 = 2533835274LL;
	int16_t x243 = INT16_MIN;

    t54 = (x241-((x242<=x243)-x244));

    if (t54 != -3188953089908407952LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x245 = INT16_MIN;
	static int16_t x246 = INT16_MAX;
	int8_t x247 = INT8_MIN;
	uint8_t x248 = 12U;
	int32_t t55 = 1527;

    t55 = (x245-((x246<=x247)-x248));

    if (t55 != -32756) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x249 = -1;
	int32_t x250 = INT32_MIN;
	volatile int8_t x251 = 0;
	static int32_t t56 = -5;

    t56 = (x249-((x250<=x251)-x252));

    if (t56 != 2147483645) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x254 = INT64_MAX;
	int32_t x255 = INT32_MIN;
	uint32_t x256 = UINT32_MAX;
	volatile uint32_t t57 = 122878100U;

    t57 = (x253-((x254<=x255)-x256));

    if (t57 != 10U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x261 = INT32_MIN;
	uint16_t x262 = UINT16_MAX;
	static uint16_t x263 = UINT16_MAX;
	int8_t x264 = INT8_MAX;
	static int32_t t58 = -69;

    t58 = (x261-((x262<=x263)-x264));

    if (t58 != -2147483522) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint16_t x265 = UINT16_MAX;
	int8_t x266 = INT8_MIN;
	uint16_t x267 = UINT16_MAX;
	uint8_t x268 = 33U;
	volatile int32_t t59 = -690960;

    t59 = (x265-((x266<=x267)-x268));

    if (t59 != 65567) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x269 = 440988586LLU;
	int64_t x270 = INT64_MIN;
	int32_t x271 = 1;
	volatile int64_t x272 = INT64_MAX;
	volatile uint64_t t60 = 29550605246923LLU;

    t60 = (x269-((x270<=x271)-x272));

    if (t60 != 9223372037295764392LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x273 = -42;
	volatile int64_t x274 = -1LL;
	uint16_t x275 = 3U;
	static int32_t x276 = -21429;
	int32_t t61 = 0;

    t61 = (x273-((x274<=x275)-x276));

    if (t61 != -21472) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x277 = -1;
	static volatile uint16_t x279 = UINT16_MAX;
	int64_t t62 = -163635LL;

    t62 = (x277-((x278<=x279)-x280));

    if (t62 != -210LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x281 = -640829;
	int64_t x283 = -158261442055343LL;
	uint16_t x284 = 161U;

    t63 = (x281-((x282<=x283)-x284));

    if (t63 != -640669) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x285 = -1;
	volatile uint16_t x286 = UINT16_MAX;
	uint64_t x287 = 0LLU;
	static volatile int8_t x288 = INT8_MAX;
	int32_t t64 = 845;

    t64 = (x285-((x286<=x287)-x288));

    if (t64 != 126) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x289 = INT8_MAX;
	int32_t x291 = -1344;
	static volatile uint32_t x292 = 13396U;
	uint32_t t65 = 111U;

    t65 = (x289-((x290<=x291)-x292));

    if (t65 != 13523U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x294 = INT64_MAX;
	int8_t x295 = INT8_MIN;
	uint32_t x296 = 123916U;

    t66 = (x293-((x294<=x295)-x296));

    if (t66 != 123915U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x305 = 139657U;
	int32_t x306 = -1;
	volatile int8_t x307 = -2;
	int16_t x308 = 516;

    t67 = (x305-((x306<=x307)-x308));

    if (t67 != 140173U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x309 = 5882U;
	uint64_t x310 = 13540818380953LLU;
	uint32_t x311 = UINT32_MAX;
	int32_t x312 = -15017602;
	volatile int32_t t68 = -164;

    t68 = (x309-((x310<=x311)-x312));

    if (t68 != -15011720) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x321 = INT16_MIN;
	uint16_t x322 = 856U;
	static int16_t x323 = INT16_MAX;
	static volatile int64_t t69 = -2026537377497632836LL;

    t69 = (x321-((x322<=x323)-x324));

    if (t69 != -32770LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x325 = INT8_MAX;
	static volatile uint64_t x326 = UINT64_MAX;
	static int64_t x328 = 118160038782003552LL;
	volatile int64_t t70 = 33084927LL;

    t70 = (x325-((x326<=x327)-x328));

    if (t70 != 118160038782003679LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x329 = INT32_MIN;
	int32_t x331 = -473316;
	int64_t x332 = INT64_MAX;
	int64_t t71 = -291592844LL;

    t71 = (x329-((x330<=x331)-x332));

    if (t71 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x333 = UINT64_MAX;
	uint16_t x334 = 3295U;
	int16_t x335 = INT16_MIN;
	static int16_t x336 = 0;
	static volatile uint64_t t72 = UINT64_MAX;

    t72 = (x333-((x334<=x335)-x336));

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x337 = 256565476LLU;
	int8_t x339 = -1;
	volatile int64_t x340 = -1LL;
	volatile uint64_t t73 = 464LLU;

    t73 = (x337-((x338<=x339)-x340));

    if (t73 != 256565475LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x341 = 30U;
	int16_t x342 = INT16_MAX;
	uint32_t x343 = UINT32_MAX;
	uint32_t x344 = UINT32_MAX;
	volatile uint32_t t74 = 2866070U;

    t74 = (x341-((x342<=x343)-x344));

    if (t74 != 28U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x345 = INT8_MIN;
	uint64_t x346 = 2LLU;
	int8_t x347 = INT8_MAX;
	int8_t x348 = 9;
	volatile int32_t t75 = -1;

    t75 = (x345-((x346<=x347)-x348));

    if (t75 != -120) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x357 = UINT32_MAX;
	uint16_t x358 = UINT16_MAX;
	static volatile uint16_t x359 = UINT16_MAX;
	static volatile int64_t x360 = -456LL;
	volatile int64_t t76 = 7LL;

    t76 = (x357-((x358<=x359)-x360));

    if (t76 != 4294966838LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x361 = -41;
	int64_t x362 = 11533LL;
	volatile int32_t x363 = -90467994;
	uint32_t x364 = 74172046U;

    t77 = (x361-((x362<=x363)-x364));

    if (t77 != 74172005U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x369 = 18U;
	volatile uint8_t x370 = 57U;
	volatile int64_t t78 = -11637283390840767LL;

    t78 = (x369-((x370<=x371)-x372));

    if (t78 != -52466705550LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x373 = UINT16_MAX;
	static int32_t x374 = INT32_MAX;
	int16_t x375 = INT16_MAX;
	volatile uint64_t x376 = 1LLU;
	uint64_t t79 = 669LLU;

    t79 = (x373-((x374<=x375)-x376));

    if (t79 != 65536LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x377 = INT8_MIN;
	static volatile int8_t x379 = 49;
	uint32_t x380 = UINT32_MAX;
	volatile uint32_t t80 = 3449275U;

    t80 = (x377-((x378<=x379)-x380));

    if (t80 != 4294967167U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x381 = 0U;
	static int8_t x383 = INT8_MIN;
	volatile uint16_t x384 = 1U;
	static int32_t t81 = 326;

    t81 = (x381-((x382<=x383)-x384));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x386 = -1;
	int16_t x387 = INT16_MAX;
	static int32_t t82 = 620162889;

    t82 = (x385-((x386<=x387)-x388));

    if (t82 != 6075313) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x389 = 50U;
	int8_t x390 = INT8_MIN;
	uint8_t x391 = 5U;
	int32_t x392 = -1;

    t83 = (x389-((x390<=x391)-x392));

    if (t83 != 48) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x397 = INT16_MIN;
	uint64_t x398 = UINT64_MAX;
	int64_t x399 = -2521538780029LL;
	static uint32_t x400 = 2087558470U;

    t84 = (x397-((x398<=x399)-x400));

    if (t84 != 2087525702U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x401 = UINT64_MAX;
	uint32_t x402 = 2U;
	int16_t x403 = INT16_MIN;
	static volatile uint64_t t85 = 7868777185430472176LLU;

    t85 = (x401-((x402<=x403)-x404));

    if (t85 != 125LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x409 = 27345016307176LL;
	int64_t x410 = 7750827658597138LL;
	uint8_t x411 = UINT8_MAX;

    t86 = (x409-((x410<=x411)-x412));

    if (t86 != 27345016307175LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x414 = -1;
	int16_t x415 = 1413;
	int16_t x416 = INT16_MIN;
	int32_t t87 = -14100707;

    t87 = (x413-((x414<=x415)-x416));

    if (t87 != -32770) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x419 = -1;
	int8_t x420 = INT8_MIN;

    t88 = (x417-((x418<=x419)-x420));

    if (t88 != 14653578) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x425 = INT32_MIN;
	uint8_t x426 = 4U;
	static volatile uint16_t x427 = 3U;

    t89 = (x425-((x426<=x427)-x428));

    if (t89 != 38553858547LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x429 = 30U;
	uint16_t x430 = UINT16_MAX;
	uint8_t x431 = 2U;
	uint8_t x432 = 1U;
	uint32_t t90 = 6U;

    t90 = (x429-((x430<=x431)-x432));

    if (t90 != 31U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x433 = INT16_MAX;
	int8_t x435 = INT8_MIN;
	static volatile int8_t x436 = -6;
	int32_t t91 = 55;

    t91 = (x433-((x434<=x435)-x436));

    if (t91 != 32761) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x441 = 4U;
	static volatile int8_t x443 = 29;
	int8_t x444 = INT8_MAX;

    t92 = (x441-((x442<=x443)-x444));

    if (t92 != 131U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x446 = 3U;
	int64_t x447 = 239240559478153005LL;
	uint32_t x448 = 533247810U;
	uint64_t t93 = 14029471LLU;

    t93 = (x445-((x446<=x447)-x448));

    if (t93 != 18446744069960674988LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x449 = -729272804296096LL;
	static uint16_t x450 = 8U;
	int32_t x451 = -1997178;
	int64_t t94 = -154910LL;

    t94 = (x449-((x450<=x451)-x452));

    if (t94 != -729277099263383LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x453 = 416434U;
	int8_t x454 = -1;
	uint8_t x455 = UINT8_MAX;
	int32_t x456 = 31929628;
	uint32_t t95 = 474466529U;

    t95 = (x453-((x454<=x455)-x456));

    if (t95 != 32346061U) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x457 = UINT64_MAX;
	int16_t x458 = -16;
	int16_t x459 = INT16_MAX;
	uint16_t x460 = UINT16_MAX;
	volatile uint64_t t96 = 31688LLU;

    t96 = (x457-((x458<=x459)-x460));

    if (t96 != 65533LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x461 = UINT16_MAX;
	int8_t x462 = INT8_MIN;
	static int32_t x463 = INT32_MAX;
	int16_t x464 = INT16_MIN;
	volatile int32_t t97 = -74;

    t97 = (x461-((x462<=x463)-x464));

    if (t97 != 32766) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x465 = 51;
	static uint8_t x466 = UINT8_MAX;
	volatile uint32_t x467 = 33313881U;
	int8_t x468 = INT8_MIN;

    t98 = (x465-((x466<=x467)-x468));

    if (t98 != -78) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x470 = -1LL;
	volatile int32_t x471 = -671;
	uint64_t x472 = UINT64_MAX;
	uint64_t t99 = 100718750068LLU;

    t99 = (x469-((x470<=x471)-x472));

    if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x477 = 2119U;
	uint16_t x480 = 7U;
	volatile int32_t t100 = 716;

    t100 = (x477-((x478<=x479)-x480));

    if (t100 != 2126) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x481 = INT16_MIN;
	uint16_t x483 = UINT16_MAX;
	static volatile int32_t t101 = 44825320;

    t101 = (x481-((x482<=x483)-x484));

    if (t101 != -32768) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x489 = INT8_MIN;
	uint8_t x490 = 5U;
	volatile uint8_t x492 = 6U;
	int32_t t102 = -629325;

    t102 = (x489-((x490<=x491)-x492));

    if (t102 != -123) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x495 = INT8_MIN;
	uint64_t x496 = UINT64_MAX;

    t103 = (x493-((x494<=x495)-x496));

    if (t103 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x498 = -1;
	uint32_t x499 = UINT32_MAX;
	int64_t t104 = 486691LL;

    t104 = (x497-((x498<=x499)-x500));

    if (t104 != 1210LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x505 = -1;
	volatile int16_t x506 = -1;
	uint64_t x507 = 3291LLU;
	volatile int16_t x508 = -216;

    t105 = (x505-((x506<=x507)-x508));

    if (t105 != -217) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x509 = -1;
	volatile int8_t x510 = 24;
	volatile int8_t x512 = 63;
	int32_t t106 = 526914;

    t106 = (x509-((x510<=x511)-x512));

    if (t106 != 61) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x513 = 21639721LLU;
	uint32_t x514 = UINT32_MAX;
	int8_t x516 = INT8_MIN;
	volatile uint64_t t107 = 120847LLU;

    t107 = (x513-((x514<=x515)-x516));

    if (t107 != 21639593LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x517 = 0U;
	static volatile uint16_t x518 = 246U;
	int16_t x520 = INT16_MAX;

    t108 = (x517-((x518<=x519)-x520));

    if (t108 != 32766U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x522 = -1;
	volatile int32_t x523 = INT32_MIN;
	uint32_t t109 = 5337U;

    t109 = (x521-((x522<=x523)-x524));

    if (t109 != 12167U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x525 = -1LL;
	int8_t x526 = INT8_MIN;
	volatile uint32_t x527 = 898355087U;
	int64_t t110 = -281LL;

    t110 = (x525-((x526<=x527)-x528));

    if (t110 != -2LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x529 = -1LL;
	int16_t x530 = 14533;
	static int8_t x531 = 24;
	volatile uint64_t t111 = 244742LLU;

    t111 = (x529-((x530<=x531)-x532));

    if (t111 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x533 = -1;
	int64_t x534 = INT64_MAX;
	int64_t x535 = -40723LL;
	int32_t t112 = -7946839;

    t112 = (x533-((x534<=x535)-x536));

    if (t112 != 2) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x541 = 117LLU;
	int8_t x542 = INT8_MIN;
	volatile uint64_t x543 = UINT64_MAX;
	int8_t x544 = INT8_MIN;
	volatile uint64_t t113 = 4387416401035877LLU;

    t113 = (x541-((x542<=x543)-x544));

    if (t113 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x545 = -1;
	volatile int8_t x546 = INT8_MIN;
	volatile int64_t x547 = INT64_MIN;
	volatile int16_t x548 = -1;

    t114 = (x545-((x546<=x547)-x548));

    if (t114 != -2) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int64_t x549 = -1LL;
	int16_t x550 = INT16_MIN;
	int16_t x551 = INT16_MAX;
	uint16_t x552 = 24U;
	int64_t t115 = -773502138060433909LL;

    t115 = (x549-((x550<=x551)-x552));

    if (t115 != 22LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x554 = UINT64_MAX;
	int16_t x555 = 5;
	uint8_t x556 = 54U;
	volatile int32_t t116 = 86202594;

    t116 = (x553-((x554<=x555)-x556));

    if (t116 != 57) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x557 = -1;
	static uint16_t x558 = 15987U;
	uint64_t x559 = UINT64_MAX;
	uint32_t x560 = 26669344U;
	uint32_t t117 = 250609101U;

    t117 = (x557-((x558<=x559)-x560));

    if (t117 != 26669342U) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x562 = INT32_MIN;
	volatile int64_t x563 = -942530142301LL;
	static volatile uint16_t x564 = 1497U;
	volatile int32_t t118 = -1278;

    t118 = (x561-((x562<=x563)-x564));

    if (t118 != 1498) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x565 = INT8_MIN;
	static volatile int32_t x566 = -1;
	static uint8_t x568 = 84U;
	volatile int32_t t119 = -30232;

    t119 = (x565-((x566<=x567)-x568));

    if (t119 != -44) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x573 = 1501605LL;
	uint64_t x574 = UINT64_MAX;
	int64_t t120 = -907328407LL;

    t120 = (x573-((x574<=x575)-x576));

    if (t120 != 1487350LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x577 = -1;
	uint64_t x578 = UINT64_MAX;
	static int64_t x579 = 0LL;

    t121 = (x577-((x578<=x579)-x580));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x581 = 0U;
	uint32_t x582 = UINT32_MAX;
	volatile uint64_t x583 = 1259211LLU;
	uint64_t x584 = 30564533678001LLU;
	volatile uint64_t t122 = 155838847086101242LLU;

    t122 = (x581-((x582<=x583)-x584));

    if (t122 != 30564533678001LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x585 = INT16_MIN;
	uint32_t x586 = UINT32_MAX;
	volatile int8_t x588 = INT8_MIN;
	int32_t t123 = 1;

    t123 = (x585-((x586<=x587)-x588));

    if (t123 != -32896) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x590 = INT64_MIN;
	int32_t x591 = -18468031;
	int64_t x592 = INT64_MAX;
	uint64_t t124 = 1010223LLU;

    t124 = (x589-((x590<=x591)-x592));

    if (t124 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x593 = INT16_MAX;
	static int64_t x594 = INT64_MIN;
	int8_t x595 = 1;
	uint16_t x596 = 803U;
	static int32_t t125 = -1927167;

    t125 = (x593-((x594<=x595)-x596));

    if (t125 != 33569) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x598 = INT16_MIN;
	int64_t x599 = -1LL;
	uint16_t x600 = 6812U;
	static int32_t t126 = -5450979;

    t126 = (x597-((x598<=x599)-x600));

    if (t126 != 9689) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x606 = INT8_MIN;
	uint64_t x608 = 70020123031LLU;
	volatile uint64_t t127 = 22187896217LLU;

    t127 = (x605-((x606<=x607)-x608));

    if (t127 != 70020124884LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x614 = -690085;
	static uint32_t x615 = UINT32_MAX;
	int16_t x616 = -932;
	volatile int64_t t128 = 289982LL;

    t128 = (x613-((x614<=x615)-x616));

    if (t128 != -934LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x619 = 6886U;
	uint16_t x620 = UINT16_MAX;
	volatile int64_t t129 = 475172LL;

    t129 = (x617-((x618<=x619)-x620));

    if (t129 != 65533LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x621 = 3835U;
	uint32_t x622 = 36U;
	uint8_t x623 = UINT8_MAX;
	static int16_t x624 = INT16_MAX;
	volatile int32_t t130 = 577531137;

    t130 = (x621-((x622<=x623)-x624));

    if (t130 != 36601) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x625 = INT16_MIN;
	static int16_t x626 = INT16_MAX;
	int8_t x628 = INT8_MIN;
	volatile int32_t t131 = -371623505;

    t131 = (x625-((x626<=x627)-x628));

    if (t131 != -32896) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x629 = INT16_MAX;
	uint32_t x631 = UINT32_MAX;
	uint8_t x632 = UINT8_MAX;
	int32_t t132 = 137;

    t132 = (x629-((x630<=x631)-x632));

    if (t132 != 33021) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x635 = -1;
	static int16_t x636 = -32;
	volatile int64_t t133 = 406952968800475LL;

    t133 = (x633-((x634<=x635)-x636));

    if (t133 != -4407850LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x637 = 1124917608015724443LL;
	volatile uint64_t x638 = 12303673601572611LLU;
	int32_t x639 = 44;
	int8_t x640 = INT8_MIN;
	volatile int64_t t134 = -3581LL;

    t134 = (x637-((x638<=x639)-x640));

    if (t134 != 1124917608015724315LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x641 = 893537U;
	volatile int64_t x642 = 2037238109026252LL;
	int32_t x643 = -638588287;
	static int32_t x644 = 9;
	static uint32_t t135 = 1653356106U;

    t135 = (x641-((x642<=x643)-x644));

    if (t135 != 893546U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x645 = -3;
	volatile int8_t x647 = -43;
	static int16_t x648 = INT16_MIN;
	int32_t t136 = 384895;

    t136 = (x645-((x646<=x647)-x648));

    if (t136 != -32771) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x649 = 20315LLU;
	static int8_t x650 = -1;
	int32_t x651 = -1;
	uint32_t x652 = UINT32_MAX;
	volatile uint64_t t137 = 1826638765704219027LLU;

    t137 = (x649-((x650<=x651)-x652));

    if (t137 != 20313LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x653 = 849LLU;
	uint16_t x654 = 0U;
	uint8_t x655 = 0U;
	uint32_t x656 = UINT32_MAX;

    t138 = (x653-((x654<=x655)-x656));

    if (t138 != 847LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x657 = 3;
	int16_t x658 = -1934;
	static volatile uint8_t x659 = 19U;
	int16_t x660 = 2;
	volatile int32_t t139 = -5690472;

    t139 = (x657-((x658<=x659)-x660));

    if (t139 != 4) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x661 = -1;
	uint16_t x662 = 254U;
	static int8_t x664 = -1;
	static int32_t t140 = 15;

    t140 = (x661-((x662<=x663)-x664));

    if (t140 != -2) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x666 = UINT32_MAX;
	volatile uint8_t x667 = 4U;
	uint8_t x668 = 9U;
	volatile int64_t t141 = 34652LL;

    t141 = (x665-((x666<=x667)-x668));

    if (t141 != 8LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x671 = UINT8_MAX;
	int8_t x672 = -53;
	int32_t t142 = -9383066;

    t142 = (x669-((x670<=x671)-x672));

    if (t142 != -44) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x673 = -1LL;
	static volatile int32_t x674 = -1;
	int8_t x675 = -1;
	uint64_t x676 = 304123502321135LLU;
	volatile uint64_t t143 = 3055181392597LLU;

    t143 = (x673-((x674<=x675)-x676));

    if (t143 != 304123502321133LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x677 = INT16_MIN;
	int32_t x678 = INT32_MIN;
	int32_t x679 = -183961;
	volatile uint32_t x680 = UINT32_MAX;
	uint32_t t144 = 13U;

    t144 = (x677-((x678<=x679)-x680));

    if (t144 != 4294934526U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x681 = UINT32_MAX;
	int8_t x682 = INT8_MIN;
	static uint32_t t145 = 57628U;

    t145 = (x681-((x682<=x683)-x684));

    if (t145 != 4294967294U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x686 = -1LL;
	uint8_t x687 = 18U;
	static int16_t x688 = INT16_MIN;

    t146 = (x685-((x686<=x687)-x688));

    if (t146 != -32812) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x693 = UINT32_MAX;
	uint32_t x694 = UINT32_MAX;
	uint64_t x695 = 16537878791LLU;
	static int8_t x696 = 0;
	volatile uint32_t t147 = 2017129U;

    t147 = (x693-((x694<=x695)-x696));

    if (t147 != 4294967294U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x701 = INT8_MIN;
	uint32_t x702 = 1137529213U;
	uint16_t x704 = 1297U;
	volatile int32_t t148 = -13923710;

    t148 = (x701-((x702<=x703)-x704));

    if (t148 != 1169) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x705 = -1LL;
	int16_t x707 = 1;
	uint32_t x708 = UINT32_MAX;
	int64_t t149 = -60039007LL;

    t149 = (x705-((x706<=x707)-x708));

    if (t149 != -2LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x709 = -1;
	uint64_t x710 = UINT64_MAX;
	int16_t x712 = -1;
	volatile int32_t t150 = -6914;

    t150 = (x709-((x710<=x711)-x712));

    if (t150 != -3) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x713 = 179U;
	volatile uint32_t x716 = UINT32_MAX;
	volatile uint32_t t151 = 66541535U;

    t151 = (x713-((x714<=x715)-x716));

    if (t151 != 178U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x721 = 114;
	uint32_t x722 = UINT32_MAX;
	int64_t x723 = INT64_MIN;
	int8_t x724 = INT8_MIN;

    t152 = (x721-((x722<=x723)-x724));

    if (t152 != -14) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x725 = 914736970U;
	int32_t x726 = INT32_MIN;
	int8_t x728 = 0;

    t153 = (x725-((x726<=x727)-x728));

    if (t153 != 914736969U) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x729 = -3927;
	int8_t x730 = INT8_MIN;
	uint8_t x731 = 3U;
	static int16_t x732 = -1;
	int32_t t154 = 14;

    t154 = (x729-((x730<=x731)-x732));

    if (t154 != -3929) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x733 = 26;
	int8_t x734 = INT8_MIN;
	int32_t x736 = -118682689;
	volatile int32_t t155 = -129821;

    t155 = (x733-((x734<=x735)-x736));

    if (t155 != -118682664) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x745 = 1740101U;
	uint8_t x746 = 63U;
	volatile uint8_t x747 = 13U;
	int8_t x748 = INT8_MAX;
	volatile uint32_t t156 = 3879990U;

    t156 = (x745-((x746<=x747)-x748));

    if (t156 != 1740228U) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x753 = INT8_MIN;
	static int32_t x754 = INT32_MIN;
	uint16_t x756 = UINT16_MAX;
	int32_t t157 = -340203009;

    t157 = (x753-((x754<=x755)-x756));

    if (t157 != 65407) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x757 = 23271587047LL;
	int32_t x758 = INT32_MIN;
	volatile int64_t x759 = 0LL;
	int32_t x760 = 125;

    t158 = (x757-((x758<=x759)-x760));

    if (t158 != 23271587171LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x761 = INT32_MIN;
	volatile int64_t x762 = INT64_MIN;
	int64_t t159 = -28LL;

    t159 = (x761-((x762<=x763)-x764));

    if (t159 != 9223372034707292158LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x765 = INT8_MIN;
	int16_t x767 = INT16_MAX;
	uint16_t x768 = UINT16_MAX;
	int32_t t160 = -270385441;

    t160 = (x765-((x766<=x767)-x768));

    if (t160 != 65406) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x769 = UINT32_MAX;
	uint64_t x771 = 96181383670137781LLU;
	static volatile uint32_t t161 = 67662U;

    t161 = (x769-((x770<=x771)-x772));

    if (t161 != 4294967294U) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x773 = -1;
	int32_t x774 = -1;
	volatile int32_t x775 = INT32_MIN;
	static int64_t x776 = 4943272068LL;

    t162 = (x773-((x774<=x775)-x776));

    if (t162 != 4943272067LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x777 = INT8_MIN;
	uint32_t x778 = UINT32_MAX;
	uint8_t x779 = UINT8_MAX;
	int32_t t163 = -3689465;

    t163 = (x777-((x778<=x779)-x780));

    if (t163 != 32639) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x785 = -136;
	volatile int32_t x786 = INT32_MIN;
	volatile uint32_t x787 = 1U;
	static int8_t x788 = 1;
	static int32_t t164 = 0;

    t164 = (x785-((x786<=x787)-x788));

    if (t164 != -135) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x789 = 2U;
	int32_t x790 = INT32_MAX;
	int16_t x791 = -1;
	uint16_t x792 = 146U;
	volatile int32_t t165 = -1918;

    t165 = (x789-((x790<=x791)-x792));

    if (t165 != 148) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x793 = 53U;
	uint64_t x795 = UINT64_MAX;
	uint32_t x796 = 386141U;
	uint32_t t166 = 11096U;

    t166 = (x793-((x794<=x795)-x796));

    if (t166 != 386193U) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x797 = -1554484965322035701LL;
	static int8_t x798 = 1;
	int8_t x799 = INT8_MAX;
	volatile uint8_t x800 = 3U;
	int64_t t167 = 490668LL;

    t167 = (x797-((x798<=x799)-x800));

    if (t167 != -1554484965322035699LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x805 = 0U;
	volatile int32_t x806 = INT32_MIN;
	static int8_t x807 = INT8_MIN;
	uint16_t x808 = 184U;
	volatile int32_t t168 = -939203;

    t168 = (x805-((x806<=x807)-x808));

    if (t168 != 183) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x809 = 12U;
	int8_t x810 = -1;
	static int16_t x811 = -340;
	static volatile int64_t x812 = -48317858500LL;

    t169 = (x809-((x810<=x811)-x812));

    if (t169 != -48317858488LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x821 = 2813U;
	int16_t x822 = 1497;
	uint64_t x823 = 2225614LLU;
	int8_t x824 = -1;
	uint32_t t170 = 6U;

    t170 = (x821-((x822<=x823)-x824));

    if (t170 != 2811U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x825 = INT16_MIN;
	uint32_t x826 = 3762U;
	uint64_t x828 = 101LLU;
	uint64_t t171 = 898980747239856LLU;

    t171 = (x825-((x826<=x827)-x828));

    if (t171 != 18446744073709518948LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x829 = -1;
	int32_t x831 = INT32_MIN;
	volatile int16_t x832 = INT16_MAX;

    t172 = (x829-((x830<=x831)-x832));

    if (t172 != 32766) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x833 = 45;
	int32_t x835 = INT32_MIN;
	int8_t x836 = INT8_MAX;
	static int32_t t173 = -11696535;

    t173 = (x833-((x834<=x835)-x836));

    if (t173 != 172) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x837 = -5924;
	int16_t x838 = INT16_MIN;
	static volatile int32_t x839 = 28620897;
	volatile uint32_t t174 = 13450558U;

    t174 = (x837-((x838<=x839)-x840));

    if (t174 != 4294961370U) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x842 = -1LL;
	volatile int32_t x843 = INT32_MIN;
	int64_t x844 = -190412990LL;

    t175 = (x841-((x842<=x843)-x844));

    if (t175 != -190412991LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x845 = 23612U;
	volatile uint64_t x846 = UINT64_MAX;
	int8_t x847 = INT8_MIN;
	uint32_t x848 = UINT32_MAX;
	volatile uint32_t t176 = 20728405U;

    t176 = (x845-((x846<=x847)-x848));

    if (t176 != 23611U) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x850 = INT16_MIN;
	volatile int32_t t177 = -42898853;

    t177 = (x849-((x850<=x851)-x852));

    if (t177 != -2253339) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x854 = 0U;
	int8_t x855 = -2;
	int16_t x856 = 2;
	volatile int64_t t178 = -7LL;

    t178 = (x853-((x854<=x855)-x856));

    if (t178 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x857 = -584112681;
	int8_t x858 = INT8_MIN;
	uint32_t x860 = 1160U;
	volatile uint32_t t179 = 3335U;

    t179 = (x857-((x858<=x859)-x860));

    if (t179 != 3710855774U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x861 = 279U;
	int16_t x863 = INT16_MIN;
	volatile uint32_t t180 = 9644U;

    t180 = (x861-((x862<=x863)-x864));

    if (t180 != 353U) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x865 = 2442LLU;
	int32_t x868 = -1;
	uint64_t t181 = 23LLU;

    t181 = (x865-((x866<=x867)-x868));

    if (t181 != 2441LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x874 = 0LLU;
	int8_t x875 = -1;

    t182 = (x873-((x874<=x875)-x876));

    if (t182 != 65406) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x878 = -1;
	volatile int32_t x879 = 1;
	volatile uint64_t t183 = 345197954610LLU;

    t183 = (x877-((x878<=x879)-x880));

    if (t183 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x881 = 233264617U;
	static uint32_t x882 = 167163324U;
	int16_t x883 = -1;
	int16_t x884 = -2;
	volatile uint32_t t184 = 1U;

    t184 = (x881-((x882<=x883)-x884));

    if (t184 != 233264614U) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x885 = INT16_MAX;
	volatile int16_t x886 = INT16_MAX;
	uint16_t x887 = UINT16_MAX;

    t185 = (x885-((x886<=x887)-x888));

    if (t185 != 32770) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x889 = INT16_MIN;
	volatile int16_t x890 = INT16_MIN;
	uint16_t x891 = 15U;
	uint64_t x892 = 3434454LLU;
	uint64_t t186 = 1587034558263428LLU;

    t186 = (x889-((x890<=x891)-x892));

    if (t186 != 3401685LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x893 = 1;
	static int16_t x894 = -1;
	int64_t x895 = -1LL;
	static int32_t x896 = 18294;
	int32_t t187 = 439807;

    t187 = (x893-((x894<=x895)-x896));

    if (t187 != 18294) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x897 = -1;
	uint64_t x898 = 65099007609130464LLU;
	int8_t x899 = 55;
	volatile uint8_t x900 = UINT8_MAX;

    t188 = (x897-((x898<=x899)-x900));

    if (t188 != 254) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x901 = INT32_MAX;
	int32_t x902 = -153;
	int32_t x903 = INT32_MIN;

    t189 = (x901-((x902<=x903)-x904));

    if (t189 != 2147483646) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x905 = 0;
	volatile int8_t x906 = INT8_MAX;
	uint16_t x907 = 1329U;
	int16_t x908 = -1;
	int32_t t190 = 191;

    t190 = (x905-((x906<=x907)-x908));

    if (t190 != -2) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x913 = 0U;
	volatile int64_t x914 = -51498LL;
	static int16_t x915 = INT16_MIN;
	int16_t x916 = INT16_MAX;
	static int32_t t191 = -215;

    t191 = (x913-((x914<=x915)-x916));

    if (t191 != 32766) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x917 = INT32_MAX;
	static volatile uint32_t x919 = UINT32_MAX;
	int32_t x920 = -3071;
	int32_t t192 = 19185275;

    t192 = (x917-((x918<=x919)-x920));

    if (t192 != 2147480576) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x921 = 1497347561832889924LLU;
	int8_t x922 = 31;
	int32_t x923 = INT32_MIN;
	uint8_t x924 = 0U;
	uint64_t t193 = 172340984422857LLU;

    t193 = (x921-((x922<=x923)-x924));

    if (t193 != 1497347561832889924LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x925 = -1;
	volatile uint32_t x926 = 45382U;
	static int16_t x928 = -1;

    t194 = (x925-((x926<=x927)-x928));

    if (t194 != -3) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int16_t x929 = -12;
	int32_t x931 = INT32_MIN;
	uint32_t x932 = 29899U;
	uint32_t t195 = 238580916U;

    t195 = (x929-((x930<=x931)-x932));

    if (t195 != 29887U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x933 = 9438;
	int16_t x934 = INT16_MIN;
	uint16_t x935 = 97U;
	uint32_t x936 = UINT32_MAX;
	uint32_t t196 = 36U;

    t196 = (x933-((x934<=x935)-x936));

    if (t196 != 9436U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x937 = 31U;
	int64_t x938 = INT64_MIN;
	static int64_t x939 = INT64_MIN;

    t197 = (x937-((x938<=x939)-x940));

    if (t197 != -32738) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x941 = -7;
	volatile int64_t x942 = INT64_MIN;
	uint32_t x943 = 127212863U;
	int8_t x944 = 15;
	int32_t t198 = -1;

    t198 = (x941-((x942<=x943)-x944));

    if (t198 != 7) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x949 = INT32_MIN;
	uint8_t x950 = 1U;
	int64_t x951 = -7893LL;
	volatile uint32_t t199 = 24U;

    t199 = (x949-((x950<=x951)-x952));

    if (t199 != 2152165477U) { NG(); } else { ; }
	
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

