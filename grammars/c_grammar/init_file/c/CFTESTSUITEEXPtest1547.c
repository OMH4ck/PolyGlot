
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

static int16_t x4 = -5;
int16_t x5 = INT16_MIN;
volatile int64_t x8 = -1LL;
int32_t x9 = 1742;
static uint64_t x11 = 4084415079762479LLU;
volatile int32_t t2 = 1;
int32_t x13 = 112;
int8_t x22 = 6;
uint32_t x27 = 22U;
int8_t x29 = INT8_MIN;
uint64_t x30 = UINT64_MAX;
int32_t t8 = -368;
int64_t x41 = -1LL;
int8_t x43 = -1;
int32_t t10 = 29;
volatile uint64_t x46 = UINT64_MAX;
int8_t x48 = INT8_MIN;
int16_t x49 = 3664;
uint32_t x52 = UINT32_MAX;
volatile int32_t t12 = -81352556;
static uint64_t x60 = UINT64_MAX;
int16_t x65 = INT16_MAX;
static int16_t x66 = INT16_MIN;
volatile int32_t x69 = -37;
int64_t x70 = -1LL;
int8_t x73 = INT8_MAX;
uint16_t x74 = 1158U;
int8_t x80 = -38;
int32_t t19 = 59410;
static int16_t x87 = 63;
static int8_t x97 = -1;
int64_t x112 = INT64_MAX;
volatile int32_t t27 = 1123;
int16_t x115 = 19;
volatile int32_t t28 = 216978;
uint32_t x120 = 31U;
int16_t x132 = -1;
int32_t x135 = 153;
static int64_t x144 = INT64_MIN;
volatile int32_t t35 = 0;
int8_t x145 = 0;
int32_t x151 = INT32_MAX;
int32_t x155 = INT32_MAX;
int32_t t39 = 5266;
static volatile int32_t x163 = -1;
int32_t x164 = INT32_MIN;
uint16_t x168 = 1414U;
uint64_t x172 = 324821191LLU;
uint32_t x175 = 800579504U;
int64_t x180 = 235LL;
volatile int32_t t44 = 2165;
volatile int32_t t45 = -2;
static uint32_t x190 = 633U;
static int32_t x194 = -46;
int32_t t49 = 14164906;
int32_t x204 = -1;
int32_t x209 = INT32_MAX;
volatile int32_t t52 = 13;
int32_t x219 = INT32_MIN;
uint8_t x222 = 3U;
static uint64_t x225 = UINT64_MAX;
int64_t x229 = -28634290333LL;
static volatile uint32_t x230 = 98291U;
int32_t x232 = INT32_MIN;
uint32_t x233 = UINT32_MAX;
uint32_t x239 = UINT32_MAX;
volatile uint16_t x243 = UINT16_MAX;
int32_t x245 = -1;
volatile uint64_t x247 = UINT64_MAX;
volatile int32_t t61 = 0;
volatile int32_t t63 = -787632219;
volatile int32_t t64 = 222074;
int32_t x261 = INT32_MIN;
int8_t x264 = -5;
int8_t x265 = INT8_MIN;
int8_t x275 = INT8_MAX;
volatile uint16_t x280 = 13422U;
int64_t x287 = INT64_MAX;
int16_t x288 = INT16_MIN;
int32_t x293 = -1;
volatile int32_t t73 = 1623007;
int32_t t74 = 730;
static volatile int32_t t78 = 3167642;
int32_t t79 = -233173663;
static int32_t x322 = INT32_MIN;
int8_t x331 = INT8_MAX;
volatile int64_t x335 = -1LL;
static int64_t x338 = 35302415LL;
int8_t x343 = INT8_MAX;
int64_t x348 = INT64_MIN;
int32_t t86 = -1;
int32_t x353 = -121043650;
int16_t x371 = INT16_MIN;
uint32_t x375 = UINT32_MAX;
static volatile int32_t t93 = 1087;
int64_t x378 = 1634114204LL;
int16_t x379 = -1;
int8_t x383 = -1;
static int32_t t95 = 13735;
uint32_t x388 = UINT32_MAX;
uint16_t x391 = 22229U;
int32_t t97 = -40755;
int64_t x400 = -379621274LL;
volatile int32_t t99 = 96066474;
volatile int32_t x406 = INT32_MIN;
int32_t x408 = INT32_MIN;
volatile int32_t t101 = -456500759;
static uint64_t x411 = UINT64_MAX;
static int64_t x421 = -1LL;
static int16_t x423 = INT16_MIN;
uint16_t x424 = 11285U;
int8_t x426 = INT8_MAX;
int32_t x433 = -263016621;
int64_t x440 = 42870LL;
static int32_t t109 = -5;
uint32_t x450 = 4730431U;
int32_t t112 = 0;
int8_t x454 = 1;
static int32_t x455 = INT32_MAX;
uint64_t x458 = 369525974033155LLU;
int32_t x461 = INT32_MAX;
int8_t x462 = -1;
uint32_t x465 = 10762663U;
volatile int8_t x471 = -1;
int64_t x472 = -1LL;
volatile int32_t x474 = INT32_MIN;
int64_t x475 = 1405440715915LL;
uint64_t x477 = UINT64_MAX;
static int16_t x478 = -1;
volatile int64_t x480 = INT64_MIN;
static int32_t x485 = -1;
volatile uint64_t x488 = UINT64_MAX;
int8_t x493 = 58;
uint16_t x494 = UINT16_MAX;
int8_t x497 = INT8_MIN;
static volatile int8_t x498 = 0;
int64_t x501 = INT64_MIN;
static int32_t t125 = -2;
int32_t x511 = -1;
int32_t t128 = -63;
volatile int32_t t129 = -5841075;
uint64_t x524 = 299073LLU;
int16_t x528 = -30;
int32_t t132 = 13;
static uint16_t x533 = 29U;
uint16_t x537 = 7944U;
static volatile uint64_t x540 = UINT64_MAX;
int16_t x549 = -1;
int64_t x553 = INT64_MAX;
uint32_t x562 = UINT32_MAX;
int64_t x564 = -2483109LL;
volatile int32_t t141 = 802;
volatile int32_t x577 = INT32_MIN;
static int32_t t144 = 1;
volatile int16_t x583 = INT16_MIN;
uint64_t x585 = 301LLU;
static uint16_t x591 = 25U;
int16_t x594 = INT16_MAX;
int8_t x596 = INT8_MIN;
uint64_t x598 = 1372280611688442LLU;
int32_t x600 = -1;
int8_t x612 = -1;
static int32_t x614 = INT32_MIN;
int16_t x626 = 20;
static int16_t x627 = 4;
static uint8_t x628 = UINT8_MAX;
int32_t x639 = -1;
static int16_t x640 = 663;
uint64_t x642 = UINT64_MAX;
volatile int32_t t160 = -63386;
int8_t x645 = INT8_MIN;
uint8_t x647 = 0U;
int64_t x648 = INT64_MAX;
static int32_t t161 = 254;
int32_t x655 = -261585;
volatile int32_t t163 = 15;
static int64_t x664 = -1LL;
int32_t t165 = 44827261;
int16_t x666 = 2701;
volatile uint16_t x667 = UINT16_MAX;
volatile int32_t t166 = 10731;
int32_t x671 = INT32_MAX;
uint32_t x672 = UINT32_MAX;
int32_t x674 = INT32_MIN;
uint32_t x676 = 66138728U;
int32_t t172 = -402;
int64_t x693 = -1LL;
static int64_t x699 = -108578LL;
static int16_t x703 = INT16_MIN;
int32_t t176 = 97406717;
int8_t x715 = INT8_MIN;
int64_t x721 = INT64_MIN;
static uint16_t x727 = 15U;
int8_t x728 = -1;
int32_t x733 = INT32_MIN;
int32_t x736 = INT32_MIN;
uint8_t x739 = 0U;
uint16_t x748 = 4U;
uint32_t x749 = 5U;
int8_t x751 = INT8_MIN;
volatile int32_t t187 = -2754032;
volatile int64_t x754 = INT64_MAX;
volatile uint64_t x758 = 16025336297032LLU;
uint8_t x762 = 11U;
volatile int32_t x764 = -810100;
volatile int32_t t191 = 296212;
int32_t t192 = -20876;
uint16_t x773 = UINT16_MAX;
int16_t x774 = INT16_MIN;
uint16_t x785 = 7U;
int32_t x789 = 84430350;
int32_t t197 = -54;


void f0(void) {
    	int8_t x1 = -1;
	uint32_t x2 = 183U;
	int8_t x3 = 22;
	static volatile int32_t t0 = 104752958;

    t0 = (x1!=((x2==x3)|x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x6 = UINT32_MAX;
	uint32_t x7 = 2410673U;
	volatile int32_t t1 = 133292738;

    t1 = (x5!=((x6==x7)|x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = -1799;
	int64_t x12 = -47293834707978LL;

    t2 = (x9!=((x10==x11)|x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MIN;
	uint32_t x15 = 102981618U;
	int8_t x16 = 0;
	static int32_t t3 = 0;

    t3 = (x13!=((x14==x15)|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = UINT8_MAX;
	static volatile uint8_t x18 = UINT8_MAX;
	volatile int8_t x19 = INT8_MAX;
	int16_t x20 = -3;
	volatile int32_t t4 = -283131;

    t4 = (x17!=((x18==x19)|x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = UINT64_MAX;
	int32_t x23 = 111565061;
	uint16_t x24 = 8358U;
	volatile int32_t t5 = 54540;

    t5 = (x21!=((x22==x23)|x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x25 = 6446U;
	uint64_t x26 = 1704715857503351LLU;
	volatile int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -161452387;

    t6 = (x25!=((x26==x27)|x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x31 = 16813211U;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -21086;

    t7 = (x29!=((x30==x31)|x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	static uint32_t x34 = UINT32_MAX;
	int8_t x35 = -1;
	uint8_t x36 = 0U;

    t8 = (x33!=((x34==x35)|x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x37 = INT8_MIN;
	volatile int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MIN;
	static uint64_t x40 = UINT64_MAX;
	static int32_t t9 = -408731795;

    t9 = (x37!=((x38==x39)|x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x42 = 2LLU;
	static volatile int32_t x44 = INT32_MIN;

    t10 = (x41!=((x42==x43)|x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	int64_t x47 = -505LL;
	static int32_t t11 = 204878;

    t11 = (x45!=((x46==x47)|x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x50 = -1;
	static int16_t x51 = INT16_MAX;

    t12 = (x49!=((x50==x51)|x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 1468457453990795389LLU;
	int8_t x54 = 14;
	int16_t x55 = INT16_MIN;
	uint16_t x56 = 18U;
	volatile int32_t t13 = 5560178;

    t13 = (x53!=((x54==x55)|x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = 0LL;
	int16_t x58 = INT16_MIN;
	uint8_t x59 = UINT8_MAX;
	volatile int32_t t14 = -731644;

    t14 = (x57!=((x58==x59)|x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x61 = UINT16_MAX;
	int64_t x62 = -270772213LL;
	static uint64_t x63 = UINT64_MAX;
	uint64_t x64 = UINT64_MAX;
	int32_t t15 = 6;

    t15 = (x61!=((x62==x63)|x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x67 = INT64_MIN;
	uint32_t x68 = 410U;
	int32_t t16 = -12033103;

    t16 = (x65!=((x66==x67)|x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x71 = 7;
	int8_t x72 = INT8_MIN;
	int32_t t17 = 12427963;

    t17 = (x69!=((x70==x71)|x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x75 = INT64_MAX;
	int8_t x76 = INT8_MIN;
	int32_t t18 = -4;

    t18 = (x73!=((x74==x75)|x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MAX;
	volatile uint8_t x78 = 1U;
	int16_t x79 = INT16_MAX;

    t19 = (x77!=((x78==x79)|x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	volatile int8_t x82 = -21;
	static uint64_t x83 = 168553LLU;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = -6227832;

    t20 = (x81!=((x82==x83)|x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = 1;
	int32_t x86 = INT32_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 3404666;

    t21 = (x85!=((x86==x87)|x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x89 = -2;
	int8_t x90 = 0;
	volatile int8_t x91 = INT8_MIN;
	static uint16_t x92 = 407U;
	volatile int32_t t22 = 127033045;

    t22 = (x89!=((x90==x91)|x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = 0;
	int32_t x94 = 238770;
	uint16_t x95 = UINT16_MAX;
	int8_t x96 = INT8_MAX;
	int32_t t23 = 101;

    t23 = (x93!=((x94==x95)|x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x98 = INT16_MIN;
	int16_t x99 = INT16_MIN;
	uint32_t x100 = UINT32_MAX;
	static int32_t t24 = -446529375;

    t24 = (x97!=((x98==x99)|x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = 6438;
	int8_t x102 = 0;
	static volatile int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = -130802;

    t25 = (x101!=((x102==x103)|x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = UINT16_MAX;
	int8_t x106 = -2;
	int16_t x107 = -1;
	int16_t x108 = -1;
	int32_t t26 = -1;

    t26 = (x105!=((x106==x107)|x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 1449856831118368LLU;
	int32_t x110 = INT32_MIN;
	static uint16_t x111 = 37U;

    t27 = (x109!=((x110==x111)|x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 7916855946LLU;
	uint32_t x114 = 228620440U;
	static int64_t x116 = -143529512882278506LL;

    t28 = (x113!=((x114==x115)|x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = 2879682509LL;
	int8_t x118 = INT8_MIN;
	volatile uint64_t x119 = 35841262516LLU;
	int32_t t29 = -117577719;

    t29 = (x117!=((x118==x119)|x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = UINT16_MAX;
	int32_t x122 = INT32_MIN;
	volatile int32_t x123 = INT32_MIN;
	volatile int8_t x124 = -21;
	int32_t t30 = -14576;

    t30 = (x121!=((x122==x123)|x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 0;
	uint16_t x126 = 0U;
	int16_t x127 = INT16_MIN;
	int8_t x128 = INT8_MAX;
	int32_t t31 = 4081;

    t31 = (x125!=((x126==x127)|x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 824929266U;
	static uint8_t x130 = UINT8_MAX;
	uint16_t x131 = UINT16_MAX;
	volatile int32_t t32 = -1;

    t32 = (x129!=((x130==x131)|x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	volatile int32_t x134 = INT32_MAX;
	int32_t x136 = -1;
	int32_t t33 = 40;

    t33 = (x133!=((x134==x135)|x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x137 = 0;
	volatile int32_t x138 = 2774;
	uint32_t x139 = 41969U;
	int16_t x140 = 3;
	int32_t t34 = -2220836;

    t34 = (x137!=((x138==x139)|x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -1;
	uint64_t x142 = UINT64_MAX;
	volatile int8_t x143 = INT8_MAX;

    t35 = (x141!=((x142==x143)|x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x146 = 16032244LLU;
	int16_t x147 = INT16_MIN;
	volatile int8_t x148 = INT8_MIN;
	int32_t t36 = -1;

    t36 = (x145!=((x146==x147)|x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 4419802963024972288LLU;
	int32_t x150 = 696976578;
	uint32_t x152 = UINT32_MAX;
	int32_t t37 = 1;

    t37 = (x149!=((x150==x151)|x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = 3;
	int64_t x154 = INT64_MIN;
	int64_t x156 = 7165178011LL;
	volatile int32_t t38 = 1;

    t38 = (x153!=((x154==x155)|x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 54U;
	static int16_t x158 = 10585;
	int64_t x159 = -1268918LL;
	int8_t x160 = INT8_MIN;

    t39 = (x157!=((x158==x159)|x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	int16_t x162 = 4;
	static int32_t t40 = -315731959;

    t40 = (x161!=((x162==x163)|x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = INT64_MIN;
	int8_t x166 = INT8_MAX;
	volatile uint16_t x167 = 4945U;
	int32_t t41 = 249238;

    t41 = (x165!=((x166==x167)|x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = 2U;
	int32_t x170 = 23302;
	volatile uint8_t x171 = 0U;
	volatile int32_t t42 = -2462236;

    t42 = (x169!=((x170==x171)|x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -1;
	uint16_t x174 = UINT16_MAX;
	int8_t x176 = 5;
	volatile int32_t t43 = -461819635;

    t43 = (x173!=((x174==x175)|x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = 25870732LL;
	int32_t x178 = -1;
	static uint32_t x179 = 250759U;

    t44 = (x177!=((x178==x179)|x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = 4;
	volatile int32_t x182 = -6;
	int8_t x183 = -1;
	int16_t x184 = 10;

    t45 = (x181!=((x182==x183)|x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x185 = 3U;
	static volatile uint32_t x186 = 2046608U;
	int32_t x187 = INT32_MIN;
	static int8_t x188 = -1;
	static volatile int32_t t46 = -766330;

    t46 = (x185!=((x186==x187)|x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 8544048U;
	static int32_t x191 = INT32_MIN;
	int64_t x192 = INT64_MAX;
	int32_t t47 = 8;

    t47 = (x189!=((x190==x191)|x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x193 = INT16_MAX;
	static volatile uint8_t x195 = UINT8_MAX;
	int8_t x196 = 7;
	static volatile int32_t t48 = -2520;

    t48 = (x193!=((x194==x195)|x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x197 = INT32_MIN;
	static uint8_t x198 = 103U;
	static uint32_t x199 = 5U;
	int32_t x200 = INT32_MIN;

    t49 = (x197!=((x198==x199)|x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x201 = INT8_MIN;
	static int16_t x202 = 102;
	uint16_t x203 = 11U;
	volatile int32_t t50 = 60702;

    t50 = (x201!=((x202==x203)|x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x205 = 48157U;
	static volatile uint32_t x206 = UINT32_MAX;
	volatile uint16_t x207 = UINT16_MAX;
	uint64_t x208 = 898535671731051LLU;
	volatile int32_t t51 = -25;

    t51 = (x205!=((x206==x207)|x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = INT64_MAX;
	int16_t x211 = -1;
	int32_t x212 = -1;

    t52 = (x209!=((x210==x211)|x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = INT8_MAX;
	int16_t x214 = INT16_MAX;
	int64_t x215 = -15323149LL;
	static uint8_t x216 = UINT8_MAX;
	int32_t t53 = 155753;

    t53 = (x213!=((x214==x215)|x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -1;
	int32_t x218 = -754759;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 1165218;

    t54 = (x217!=((x218==x219)|x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x221 = 1671895614761662LLU;
	static int64_t x223 = -67415348083LL;
	uint64_t x224 = 44LLU;
	volatile int32_t t55 = -1471;

    t55 = (x221!=((x222==x223)|x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x226 = 34U;
	int32_t x227 = INT32_MAX;
	int32_t x228 = -169927;
	volatile int32_t t56 = -68681795;

    t56 = (x225!=((x226==x227)|x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x231 = 4U;
	volatile int32_t t57 = -400;

    t57 = (x229!=((x230==x231)|x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x234 = INT64_MIN;
	volatile int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MIN;
	int32_t t58 = -241;

    t58 = (x233!=((x234==x235)|x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 1420U;
	static int32_t x238 = INT32_MIN;
	static int16_t x240 = INT16_MIN;
	volatile int32_t t59 = 1822;

    t59 = (x237!=((x238==x239)|x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int32_t x241 = -1;
	int64_t x242 = INT64_MIN;
	int16_t x244 = -1;
	int32_t t60 = -802;

    t60 = (x241!=((x242==x243)|x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x246 = INT32_MAX;
	uint64_t x248 = 347391528570LLU;

    t61 = (x245!=((x246==x247)|x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = 86060LLU;
	static int8_t x250 = INT8_MAX;
	int64_t x251 = INT64_MIN;
	volatile int32_t x252 = -182576;
	static int32_t t62 = 1359;

    t62 = (x249!=((x250==x251)|x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MIN;
	int8_t x255 = -1;
	static int8_t x256 = -1;

    t63 = (x253!=((x254==x255)|x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MAX;
	int8_t x258 = INT8_MIN;
	int64_t x259 = INT64_MAX;
	uint32_t x260 = 16080U;

    t64 = (x257!=((x258==x259)|x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x262 = INT8_MIN;
	volatile uint16_t x263 = UINT16_MAX;
	int32_t t65 = -6913;

    t65 = (x261!=((x262==x263)|x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x266 = UINT32_MAX;
	int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MIN;
	volatile int32_t t66 = 0;

    t66 = (x265!=((x266==x267)|x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = INT8_MAX;
	static int16_t x270 = INT16_MIN;
	int16_t x271 = -46;
	int64_t x272 = INT64_MIN;
	int32_t t67 = 20;

    t67 = (x269!=((x270==x271)|x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MAX;
	int64_t x274 = 17374473836LL;
	static uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = -225;

    t68 = (x273!=((x274==x275)|x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 811034351LL;
	volatile uint16_t x278 = 568U;
	static int32_t x279 = 247780;
	static int32_t t69 = -127646;

    t69 = (x277!=((x278==x279)|x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x281 = -1;
	int8_t x282 = INT8_MAX;
	int16_t x283 = INT16_MIN;
	static volatile int64_t x284 = -789223216728LL;
	int32_t t70 = 48;

    t70 = (x281!=((x282==x283)|x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 42546U;
	uint32_t x286 = 28488U;
	volatile int32_t t71 = 0;

    t71 = (x285!=((x286==x287)|x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MAX;
	uint16_t x290 = UINT16_MAX;
	int8_t x291 = INT8_MAX;
	static uint32_t x292 = UINT32_MAX;
	volatile int32_t t72 = -20754296;

    t72 = (x289!=((x290==x291)|x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x294 = 79;
	uint16_t x295 = UINT16_MAX;
	int32_t x296 = 34396903;

    t73 = (x293!=((x294==x295)|x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = INT8_MAX;
	static volatile uint16_t x298 = 405U;
	volatile int32_t x299 = 2778489;
	uint8_t x300 = UINT8_MAX;

    t74 = (x297!=((x298==x299)|x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = INT32_MIN;
	uint32_t x302 = 55000546U;
	int64_t x303 = -14497547297727467LL;
	volatile int64_t x304 = INT64_MIN;
	volatile int32_t t75 = 127883;

    t75 = (x301!=((x302==x303)|x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x305 = 1;
	static int16_t x306 = -220;
	int32_t x307 = INT32_MAX;
	volatile uint8_t x308 = 1U;
	int32_t t76 = -608998;

    t76 = (x305!=((x306==x307)|x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x309 = INT16_MIN;
	uint8_t x310 = UINT8_MAX;
	int16_t x311 = 961;
	int32_t x312 = -1;
	static int32_t t77 = 0;

    t77 = (x309!=((x310==x311)|x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MAX;
	uint64_t x314 = UINT64_MAX;
	static uint16_t x315 = 854U;
	uint8_t x316 = UINT8_MAX;

    t78 = (x313!=((x314==x315)|x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x317 = 1623U;
	uint64_t x318 = UINT64_MAX;
	int64_t x319 = INT64_MIN;
	static volatile int32_t x320 = -248403;

    t79 = (x317!=((x318==x319)|x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	int8_t x323 = -21;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t80 = 523917478;

    t80 = (x321!=((x322==x323)|x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -1;
	volatile int8_t x326 = -1;
	static int64_t x327 = INT64_MIN;
	uint8_t x328 = UINT8_MAX;
	int32_t t81 = 791803340;

    t81 = (x325!=((x326==x327)|x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = 1;
	volatile int64_t x330 = -1LL;
	int32_t x332 = INT32_MIN;
	static int32_t t82 = -72960;

    t82 = (x329!=((x330==x331)|x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x333 = INT16_MAX;
	static int16_t x334 = INT16_MAX;
	int16_t x336 = INT16_MAX;
	volatile int32_t t83 = -3;

    t83 = (x333!=((x334==x335)|x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MAX;
	int8_t x339 = INT8_MIN;
	static int8_t x340 = -1;
	static int32_t t84 = 12704;

    t84 = (x337!=((x338==x339)|x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = -8;
	uint32_t x342 = UINT32_MAX;
	volatile uint32_t x344 = UINT32_MAX;
	int32_t t85 = -1;

    t85 = (x341!=((x342==x343)|x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MAX;
	uint32_t x346 = UINT32_MAX;
	uint8_t x347 = 5U;

    t86 = (x345!=((x346==x347)|x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 20U;
	uint64_t x350 = 975086946LLU;
	volatile int32_t x351 = 3332;
	int16_t x352 = -16;
	int32_t t87 = 15001;

    t87 = (x349!=((x350==x351)|x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x354 = UINT64_MAX;
	volatile uint32_t x355 = 19147442U;
	int64_t x356 = INT64_MIN;
	int32_t t88 = -515;

    t88 = (x353!=((x354==x355)|x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = 0LL;
	static uint32_t x358 = 991U;
	int64_t x359 = INT64_MIN;
	int32_t x360 = INT32_MIN;
	volatile int32_t t89 = -5069610;

    t89 = (x357!=((x358==x359)|x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 68565LLU;
	uint16_t x362 = UINT16_MAX;
	int64_t x363 = INT64_MAX;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t90 = 0;

    t90 = (x361!=((x362==x363)|x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = -1;
	int32_t x366 = INT32_MAX;
	static int16_t x367 = INT16_MIN;
	volatile uint16_t x368 = 0U;
	volatile int32_t t91 = -157200;

    t91 = (x365!=((x366==x367)|x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = 15451;
	int8_t x370 = 12;
	volatile int8_t x372 = INT8_MIN;
	int32_t t92 = -46516;

    t92 = (x369!=((x370==x371)|x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -1;
	uint8_t x374 = 7U;
	int16_t x376 = INT16_MAX;

    t93 = (x373!=((x374==x375)|x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = 1;
	int16_t x380 = INT16_MIN;
	int32_t t94 = 33346464;

    t94 = (x377!=((x378==x379)|x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = 922085U;
	uint16_t x382 = UINT16_MAX;
	static int8_t x384 = -13;

    t95 = (x381!=((x382==x383)|x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = 322;
	uint32_t x386 = UINT32_MAX;
	int8_t x387 = 5;
	volatile int32_t t96 = 21905343;

    t96 = (x385!=((x386==x387)|x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x389 = -6689;
	int8_t x390 = 0;
	static int16_t x392 = INT16_MIN;

    t97 = (x389!=((x390==x391)|x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 6443646982439284LLU;
	uint8_t x394 = 7U;
	uint64_t x395 = 3517016LLU;
	int16_t x396 = -1;
	int32_t t98 = 348;

    t98 = (x393!=((x394==x395)|x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = 0;
	int64_t x398 = -1LL;
	volatile int16_t x399 = INT16_MIN;

    t99 = (x397!=((x398==x399)|x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x401 = -3;
	static volatile uint64_t x402 = UINT64_MAX;
	int32_t x403 = INT32_MIN;
	uint16_t x404 = UINT16_MAX;
	static volatile int32_t t100 = -68834113;

    t100 = (x401!=((x402==x403)|x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MAX;
	static int64_t x407 = INT64_MIN;

    t101 = (x405!=((x406==x407)|x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = UINT32_MAX;
	int8_t x410 = INT8_MIN;
	static int32_t x412 = INT32_MIN;
	static volatile int32_t t102 = 34;

    t102 = (x409!=((x410==x411)|x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -1;
	static volatile uint8_t x414 = 1U;
	uint32_t x415 = 15278U;
	volatile uint32_t x416 = UINT32_MAX;
	int32_t t103 = 397970087;

    t103 = (x413!=((x414==x415)|x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = 0;
	int16_t x418 = INT16_MIN;
	uint8_t x419 = 1U;
	int8_t x420 = INT8_MIN;
	int32_t t104 = -413;

    t104 = (x417!=((x418==x419)|x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x422 = 1;
	volatile int32_t t105 = -8778675;

    t105 = (x421!=((x422==x423)|x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x425 = 88U;
	static volatile int64_t x427 = INT64_MIN;
	int64_t x428 = 84943193626083LL;
	int32_t t106 = -11;

    t106 = (x425!=((x426==x427)|x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = -1LL;
	uint8_t x430 = UINT8_MAX;
	int64_t x431 = INT64_MIN;
	uint16_t x432 = 0U;
	int32_t t107 = 683565091;

    t107 = (x429!=((x430==x431)|x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x434 = -1;
	int32_t x435 = 181;
	int32_t x436 = INT32_MIN;
	int32_t t108 = -26;

    t108 = (x433!=((x434==x435)|x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = UINT16_MAX;
	int8_t x438 = -1;
	int64_t x439 = INT64_MIN;

    t109 = (x437!=((x438==x439)|x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MIN;
	int8_t x442 = INT8_MIN;
	int64_t x443 = -1LL;
	uint32_t x444 = 350U;
	int32_t t110 = -1628;

    t110 = (x441!=((x442==x443)|x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = UINT64_MAX;
	int8_t x446 = -1;
	volatile int16_t x447 = -79;
	static volatile int32_t x448 = 408;
	volatile int32_t t111 = 68740;

    t111 = (x445!=((x446==x447)|x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -16263200520LL;
	static int16_t x451 = 2204;
	int8_t x452 = INT8_MAX;

    t112 = (x449!=((x450==x451)|x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = 1;
	uint32_t x456 = 893009U;
	int32_t t113 = -420800816;

    t113 = (x453!=((x454==x455)|x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x457 = -1;
	uint16_t x459 = 27683U;
	uint8_t x460 = UINT8_MAX;
	int32_t t114 = -1;

    t114 = (x457!=((x458==x459)|x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x463 = -1;
	int8_t x464 = -1;
	volatile int32_t t115 = -127282;

    t115 = (x461!=((x462==x463)|x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x466 = 92;
	uint16_t x467 = 1U;
	int64_t x468 = INT64_MIN;
	int32_t t116 = -81562137;

    t116 = (x465!=((x466==x467)|x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = 84;
	static int32_t x470 = INT32_MAX;
	int32_t t117 = 0;

    t117 = (x469!=((x470==x471)|x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MIN;
	static int8_t x476 = INT8_MIN;
	int32_t t118 = -35;

    t118 = (x473!=((x474==x475)|x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x479 = -28;
	int32_t t119 = -183;

    t119 = (x477!=((x478==x479)|x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -534754924369147LL;
	int64_t x482 = -1LL;
	static volatile int8_t x483 = 1;
	static uint64_t x484 = UINT64_MAX;
	int32_t t120 = 7;

    t120 = (x481!=((x482==x483)|x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x486 = INT32_MIN;
	int8_t x487 = -1;
	volatile int32_t t121 = -314055401;

    t121 = (x485!=((x486==x487)|x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MAX;
	static int32_t x490 = INT32_MIN;
	int16_t x491 = 1;
	uint16_t x492 = 14349U;
	static int32_t t122 = 252022573;

    t122 = (x489!=((x490==x491)|x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x495 = 1U;
	uint16_t x496 = UINT16_MAX;
	int32_t t123 = 109947;

    t123 = (x493!=((x494==x495)|x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x499 = -555395614;
	volatile int64_t x500 = -1LL;
	int32_t t124 = 339;

    t124 = (x497!=((x498==x499)|x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x502 = 20U;
	volatile int32_t x503 = INT32_MIN;
	int64_t x504 = -3942350LL;

    t125 = (x501!=((x502==x503)|x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x505 = 4661031095LLU;
	int8_t x506 = INT8_MAX;
	int16_t x507 = INT16_MIN;
	int8_t x508 = 1;
	int32_t t126 = -8361;

    t126 = (x505!=((x506==x507)|x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 12U;
	volatile int64_t x510 = 76921854920196910LL;
	int16_t x512 = 1;
	volatile int32_t t127 = -95039719;

    t127 = (x509!=((x510==x511)|x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 27U;
	uint16_t x514 = 9704U;
	volatile int32_t x515 = 20214;
	int16_t x516 = INT16_MIN;

    t128 = (x513!=((x514==x515)|x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 497923528LLU;
	int64_t x518 = INT64_MAX;
	int64_t x519 = INT64_MIN;
	uint8_t x520 = 16U;

    t129 = (x517!=((x518==x519)|x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MAX;
	static uint64_t x522 = 1854LLU;
	int32_t x523 = -1;
	volatile int32_t t130 = 19244029;

    t130 = (x521!=((x522==x523)|x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 54537711800038247LLU;
	int32_t x526 = -1;
	int64_t x527 = INT64_MIN;
	volatile int32_t t131 = -14296;

    t131 = (x525!=((x526==x527)|x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x529 = INT64_MIN;
	static int8_t x530 = INT8_MAX;
	int64_t x531 = INT64_MAX;
	uint32_t x532 = 2U;

    t132 = (x529!=((x530==x531)|x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int16_t x534 = -135;
	static int64_t x535 = -1LL;
	int64_t x536 = INT64_MIN;
	volatile int32_t t133 = 39444;

    t133 = (x533!=((x534==x535)|x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x538 = 2597663044139867LLU;
	int16_t x539 = 213;
	volatile int32_t t134 = -19986451;

    t134 = (x537!=((x538==x539)|x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x541 = 8U;
	static int32_t x542 = -1;
	int8_t x543 = INT8_MIN;
	uint16_t x544 = 0U;
	int32_t t135 = 34;

    t135 = (x541!=((x542==x543)|x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = 11;
	uint32_t x546 = UINT32_MAX;
	int32_t x547 = INT32_MIN;
	int16_t x548 = -7;
	volatile int32_t t136 = 0;

    t136 = (x545!=((x546==x547)|x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x550 = INT8_MIN;
	volatile uint8_t x551 = UINT8_MAX;
	uint32_t x552 = 920970834U;
	volatile int32_t t137 = -827950659;

    t137 = (x549!=((x550==x551)|x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x554 = 3U;
	static volatile int64_t x555 = INT64_MIN;
	uint8_t x556 = UINT8_MAX;
	volatile int32_t t138 = -1057;

    t138 = (x553!=((x554==x555)|x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = INT8_MIN;
	int32_t x558 = 1869038;
	uint8_t x559 = 43U;
	static uint8_t x560 = 5U;
	volatile int32_t t139 = 1299;

    t139 = (x557!=((x558==x559)|x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = 51844662719750410LL;
	volatile int16_t x563 = -11;
	volatile int32_t t140 = 19313;

    t140 = (x561!=((x562==x563)|x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = INT8_MAX;
	int8_t x566 = INT8_MIN;
	static int8_t x567 = -1;
	uint8_t x568 = UINT8_MAX;

    t141 = (x565!=((x566==x567)|x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x569 = 184188;
	static uint64_t x570 = 3934021473265LLU;
	static uint64_t x571 = 1895003LLU;
	uint64_t x572 = 239425697306LLU;
	volatile int32_t t142 = -110311117;

    t142 = (x569!=((x570==x571)|x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	uint64_t x574 = 31698LLU;
	uint16_t x575 = 2U;
	volatile int64_t x576 = -15203LL;
	static int32_t t143 = 5833644;

    t143 = (x573!=((x574==x575)|x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x578 = 24714U;
	int32_t x579 = INT32_MIN;
	int8_t x580 = -52;

    t144 = (x577!=((x578==x579)|x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	int64_t x582 = 9842037538603LL;
	static int32_t x584 = INT32_MIN;
	volatile int32_t t145 = -298267;

    t145 = (x581!=((x582==x583)|x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x586 = INT64_MIN;
	int8_t x587 = INT8_MAX;
	uint8_t x588 = UINT8_MAX;
	int32_t t146 = -259;

    t146 = (x585!=((x586==x587)|x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	int64_t x590 = INT64_MAX;
	volatile uint8_t x592 = 44U;
	int32_t t147 = -1;

    t147 = (x589!=((x590==x591)|x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x593 = INT8_MIN;
	uint16_t x595 = 660U;
	volatile int32_t t148 = -98254;

    t148 = (x593!=((x594==x595)|x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MAX;
	int64_t x599 = -1LL;
	int32_t t149 = -1;

    t149 = (x597!=((x598==x599)|x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 6932U;
	int64_t x602 = 297938177867LL;
	volatile uint16_t x603 = UINT16_MAX;
	uint64_t x604 = 685407664578219876LLU;
	int32_t t150 = -121928102;

    t150 = (x601!=((x602==x603)|x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	static int8_t x606 = -6;
	int16_t x607 = -247;
	uint8_t x608 = UINT8_MAX;
	volatile int32_t t151 = -51708;

    t151 = (x605!=((x606==x607)|x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = UINT32_MAX;
	uint8_t x610 = UINT8_MAX;
	uint32_t x611 = 1130U;
	int32_t t152 = -14550;

    t152 = (x609!=((x610==x611)|x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MAX;
	volatile int32_t x615 = 90526;
	volatile uint64_t x616 = 6LLU;
	int32_t t153 = 10628;

    t153 = (x613!=((x614==x615)|x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = UINT8_MAX;
	int32_t x618 = INT32_MIN;
	volatile int64_t x619 = -1664LL;
	uint16_t x620 = 213U;
	int32_t t154 = -33143319;

    t154 = (x617!=((x618==x619)|x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = INT8_MIN;
	int16_t x622 = INT16_MIN;
	static volatile int64_t x623 = -1LL;
	static uint32_t x624 = UINT32_MAX;
	int32_t t155 = -1024;

    t155 = (x621!=((x622==x623)|x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 616U;
	volatile int32_t t156 = -1002873;

    t156 = (x625!=((x626==x627)|x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = INT8_MIN;
	int32_t x630 = 180532099;
	int8_t x631 = 11;
	volatile int8_t x632 = INT8_MAX;
	volatile int32_t t157 = -6627979;

    t157 = (x629!=((x630==x631)|x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x633 = INT64_MIN;
	volatile int16_t x634 = 159;
	int32_t x635 = -1;
	int64_t x636 = -1LL;
	int32_t t158 = -339227;

    t158 = (x633!=((x634==x635)|x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint8_t x637 = UINT8_MAX;
	int8_t x638 = -1;
	volatile int32_t t159 = 217588;

    t159 = (x637!=((x638==x639)|x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = -1;
	static int8_t x643 = INT8_MIN;
	uint32_t x644 = 617525091U;

    t160 = (x641!=((x642==x643)|x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x646 = INT8_MAX;

    t161 = (x645!=((x646==x647)|x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x649 = UINT8_MAX;
	int64_t x650 = INT64_MIN;
	int8_t x651 = -1;
	uint32_t x652 = 138686044U;
	volatile int32_t t162 = -92;

    t162 = (x649!=((x650==x651)|x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -1;
	volatile uint64_t x654 = 4475741329197152LLU;
	static uint64_t x656 = 1051612139633LLU;

    t163 = (x653!=((x654==x655)|x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -1;
	int16_t x658 = INT16_MIN;
	int8_t x659 = -16;
	volatile uint64_t x660 = 57815668551867LLU;
	static volatile int32_t t164 = 2;

    t164 = (x657!=((x658==x659)|x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -2202861;
	int8_t x662 = 2;
	int32_t x663 = -28;

    t165 = (x661!=((x662==x663)|x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x665 = INT64_MAX;
	volatile uint8_t x668 = UINT8_MAX;

    t166 = (x665!=((x666==x667)|x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = 48;
	int32_t x670 = INT32_MIN;
	volatile int32_t t167 = -42101;

    t167 = (x669!=((x670==x671)|x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = -645000;
	int64_t x675 = INT64_MIN;
	int32_t t168 = -218195166;

    t168 = (x673!=((x674==x675)|x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MAX;
	int32_t x678 = INT32_MAX;
	volatile int32_t x679 = INT32_MIN;
	uint32_t x680 = UINT32_MAX;
	volatile int32_t t169 = -5;

    t169 = (x677!=((x678==x679)|x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	int8_t x682 = INT8_MIN;
	int32_t x683 = INT32_MIN;
	int32_t x684 = INT32_MAX;
	int32_t t170 = -24859;

    t170 = (x681!=((x682==x683)|x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = UINT64_MAX;
	int16_t x686 = -3;
	int16_t x687 = INT16_MIN;
	static int8_t x688 = INT8_MAX;
	volatile int32_t t171 = -15;

    t171 = (x685!=((x686==x687)|x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = 0;
	int64_t x690 = INT64_MIN;
	static uint32_t x691 = 202417371U;
	static int64_t x692 = INT64_MIN;

    t172 = (x689!=((x690==x691)|x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = INT64_MAX;
	volatile int16_t x695 = INT16_MAX;
	int64_t x696 = -1LL;
	int32_t t173 = 12;

    t173 = (x693!=((x694==x695)|x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x697 = 155783575;
	static volatile uint32_t x698 = UINT32_MAX;
	int32_t x700 = 1;
	volatile int32_t t174 = -7663150;

    t174 = (x697!=((x698==x699)|x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	int64_t x702 = 1LL;
	uint16_t x704 = UINT16_MAX;
	volatile int32_t t175 = -763091;

    t175 = (x701!=((x702==x703)|x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = UINT8_MAX;
	static volatile uint16_t x706 = UINT16_MAX;
	uint16_t x707 = 6009U;
	int8_t x708 = -21;

    t176 = (x705!=((x706==x707)|x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x709 = -2004;
	static int32_t x710 = 574611;
	int64_t x711 = INT64_MIN;
	int8_t x712 = -23;
	volatile int32_t t177 = -20596;

    t177 = (x709!=((x710==x711)|x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x713 = INT32_MAX;
	int16_t x714 = 2;
	uint32_t x716 = 413728U;
	int32_t t178 = -2195;

    t178 = (x713!=((x714==x715)|x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 52U;
	volatile int64_t x718 = INT64_MAX;
	int8_t x719 = INT8_MIN;
	int8_t x720 = INT8_MAX;
	int32_t t179 = -14;

    t179 = (x717!=((x718==x719)|x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x722 = INT8_MIN;
	uint8_t x723 = UINT8_MAX;
	int64_t x724 = 1328LL;
	int32_t t180 = -26139425;

    t180 = (x721!=((x722==x723)|x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x725 = 23U;
	int8_t x726 = 1;
	volatile int32_t t181 = 53;

    t181 = (x725!=((x726==x727)|x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -22;
	static int64_t x730 = -3468LL;
	uint32_t x731 = UINT32_MAX;
	static int32_t x732 = -5143696;
	volatile int32_t t182 = 138280972;

    t182 = (x729!=((x730==x731)|x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint64_t x734 = 1LLU;
	uint8_t x735 = 34U;
	volatile int32_t t183 = 66;

    t183 = (x733!=((x734==x735)|x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = 80131U;
	int32_t x738 = INT32_MIN;
	uint64_t x740 = UINT64_MAX;
	int32_t t184 = -2886633;

    t184 = (x737!=((x738==x739)|x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x741 = 35083308174799273LLU;
	uint16_t x742 = UINT16_MAX;
	int8_t x743 = -1;
	volatile int16_t x744 = INT16_MIN;
	static volatile int32_t t185 = -9344355;

    t185 = (x741!=((x742==x743)|x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 1662197673673632691LLU;
	int64_t x746 = 122798376940796LL;
	int64_t x747 = INT64_MIN;
	volatile int32_t t186 = -225773;

    t186 = (x745!=((x746==x747)|x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = INT8_MIN;
	volatile uint16_t x752 = 22U;

    t187 = (x749!=((x750==x751)|x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = UINT32_MAX;
	int32_t x755 = 14698454;
	int64_t x756 = -2711661595LL;
	int32_t t188 = 2084;

    t188 = (x753!=((x754==x755)|x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -9;
	volatile int16_t x759 = -15686;
	static volatile uint64_t x760 = 3LLU;
	static int32_t t189 = -25268912;

    t189 = (x757!=((x758==x759)|x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -1;
	int32_t x763 = INT32_MIN;
	int32_t t190 = -1328;

    t190 = (x761!=((x762==x763)|x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -11;
	static int64_t x766 = -678646847742850LL;
	static int32_t x767 = -1;
	static volatile int64_t x768 = -21LL;

    t191 = (x765!=((x766==x767)|x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x769 = -334191073LL;
	volatile int32_t x770 = INT32_MIN;
	int8_t x771 = INT8_MIN;
	int64_t x772 = 822956460LL;

    t192 = (x769!=((x770==x771)|x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x775 = 0U;
	int32_t x776 = -1;
	volatile int32_t t193 = 47;

    t193 = (x773!=((x774==x775)|x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -1;
	int64_t x778 = INT64_MAX;
	uint16_t x779 = 20190U;
	uint8_t x780 = UINT8_MAX;
	volatile int32_t t194 = 100142;

    t194 = (x777!=((x778==x779)|x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 5841538U;
	int8_t x782 = 1;
	static uint8_t x783 = 6U;
	static int64_t x784 = INT64_MAX;
	int32_t t195 = 3063126;

    t195 = (x781!=((x782==x783)|x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x786 = 17U;
	uint16_t x787 = UINT16_MAX;
	volatile uint16_t x788 = UINT16_MAX;
	volatile int32_t t196 = -339;

    t196 = (x785!=((x786==x787)|x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x790 = INT64_MIN;
	int32_t x791 = INT32_MAX;
	int32_t x792 = INT32_MAX;

    t197 = (x789!=((x790==x791)|x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = 2679;
	int64_t x794 = 2LL;
	int32_t x795 = -28823;
	volatile uint32_t x796 = UINT32_MAX;
	int32_t t198 = 12656;

    t198 = (x793!=((x794==x795)|x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -1;
	volatile int8_t x798 = -1;
	static uint64_t x799 = UINT64_MAX;
	static volatile int64_t x800 = INT64_MIN;
	int32_t t199 = -63;

    t199 = (x797!=((x798==x799)|x800));

    if (t199 != 1) { NG(); } else { ; }
	
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

