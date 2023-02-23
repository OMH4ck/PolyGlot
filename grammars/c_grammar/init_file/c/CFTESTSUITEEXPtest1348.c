
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

uint32_t x1 = UINT32_MAX;
uint32_t t0 = UINT32_MAX;
int8_t x7 = INT8_MAX;
int8_t x12 = -1;
static volatile uint32_t x29 = 1669U;
static volatile uint16_t x30 = 1019U;
volatile int64_t t8 = 30461322791LL;
int16_t x41 = 5;
volatile int32_t t9 = -76693302;
int32_t x46 = INT32_MIN;
volatile int32_t t10 = 92758;
int64_t x58 = -13663287269527LL;
uint8_t x64 = UINT8_MAX;
static uint8_t x78 = 14U;
int8_t x81 = INT8_MIN;
volatile uint32_t t20 = 557144U;
int8_t x97 = 25;
int16_t x99 = -1;
volatile int32_t x102 = 13567230;
uint16_t x109 = UINT16_MAX;
static int32_t x110 = INT32_MIN;
uint32_t x113 = 170835U;
int64_t x115 = INT64_MAX;
int32_t t27 = 54050;
int32_t x122 = INT32_MIN;
uint64_t x127 = UINT64_MAX;
static int32_t x128 = INT32_MIN;
volatile uint32_t x132 = UINT32_MAX;
static int8_t x133 = -1;
int8_t x135 = -1;
volatile uint16_t x136 = 256U;
static int32_t t31 = -857;
uint64_t x147 = 431949443LLU;
int64_t x149 = -52613677808LL;
volatile int16_t x151 = -1;
volatile int8_t x154 = INT8_MAX;
int64_t x164 = -10069LL;
uint16_t x170 = 72U;
uint16_t x171 = UINT16_MAX;
int16_t x178 = INT16_MAX;
volatile int64_t x182 = -110LL;
int16_t x189 = INT16_MIN;
static int8_t x190 = -1;
int64_t x191 = -6LL;
int16_t x194 = INT16_MIN;
static uint16_t x197 = UINT16_MAX;
uint64_t x200 = UINT64_MAX;
volatile uint64_t t46 = 429420775487LLU;
uint64_t x202 = UINT64_MAX;
int8_t x206 = -1;
volatile int64_t t49 = 2009569271153LL;
static uint64_t x218 = 7018335721092LLU;
volatile int32_t t51 = -206944;
int32_t x228 = INT32_MAX;
uint8_t x231 = UINT8_MAX;
static int8_t x235 = INT8_MIN;
volatile int16_t x236 = 9959;
int64_t x241 = INT64_MIN;
int64_t t57 = 52LL;
static volatile int32_t t58 = -176722889;
static volatile int32_t t59 = 20952195;
int64_t x260 = 1178709256919LL;
int16_t x266 = -224;
uint16_t x268 = UINT16_MAX;
int32_t x275 = INT32_MIN;
volatile uint64_t x276 = 398049478478LLU;
uint64_t x278 = 72356430141407043LLU;
int8_t x291 = INT8_MIN;
uint64_t t68 = 629617LLU;
static int16_t x298 = INT16_MIN;
int64_t x299 = 129LL;
volatile int8_t x304 = INT8_MAX;
int32_t x310 = 1574;
uint8_t x319 = 2U;
int32_t x326 = -1516100;
int64_t x331 = INT64_MAX;
int16_t x341 = -43;
int64_t x348 = INT64_MIN;
static volatile int64_t x350 = -2969LL;
static volatile int64_t x353 = INT64_MIN;
uint8_t x360 = 3U;
uint16_t x366 = 15675U;
volatile uint64_t x367 = 7166339LLU;
int32_t x375 = 2;
int16_t x376 = INT16_MAX;
int32_t t90 = -101252013;
static int16_t x385 = -1;
volatile uint64_t x386 = UINT64_MAX;
volatile int64_t x387 = INT64_MIN;
static int8_t x395 = -1;
volatile uint64_t t95 = 1851541990135387LLU;
volatile int32_t x406 = 3366;
int16_t x407 = INT16_MIN;
volatile int64_t x410 = INT64_MIN;
int16_t x416 = 315;
int8_t x419 = INT8_MIN;
volatile int32_t t99 = -811955;
uint16_t x421 = UINT16_MAX;
int8_t x429 = INT8_MAX;
int32_t t102 = 34682;
volatile uint64_t x437 = 1518002LLU;
int16_t x443 = INT16_MIN;
static int32_t x448 = -1;
int16_t x456 = 2;
static int64_t x457 = 37285971LL;
static int8_t x458 = INT8_MIN;
static int16_t x460 = INT16_MIN;
int16_t x466 = -1;
static int16_t x467 = INT16_MIN;
int32_t x472 = -1;
static int16_t x479 = INT16_MIN;
uint16_t x482 = UINT16_MAX;
volatile uint32_t t115 = 808U;
uint32_t x489 = 1U;
int64_t x503 = -1LL;
int32_t t120 = 128475;
int32_t x506 = INT32_MIN;
uint32_t x509 = UINT32_MAX;
volatile int64_t x520 = INT64_MIN;
static int16_t x523 = INT16_MIN;
static int8_t x526 = -1;
int64_t x531 = -1LL;
static volatile int32_t t127 = 405;
int16_t x537 = INT16_MIN;
int8_t x542 = -2;
static uint16_t x551 = 24U;
uint16_t x561 = 18U;
int64_t x568 = INT64_MIN;
int16_t x573 = INT16_MIN;
static int32_t x579 = -3;
int32_t x582 = -1;
static volatile uint8_t x585 = 20U;
int8_t x586 = INT8_MAX;
uint16_t x592 = UINT16_MAX;
volatile int64_t t143 = -68474430218LL;
static uint16_t x599 = 363U;
volatile int64_t x602 = INT64_MIN;
volatile int8_t x606 = INT8_MIN;
int8_t x613 = INT8_MAX;
volatile uint32_t t148 = 41U;
int16_t x621 = -1;
static int8_t x624 = INT8_MIN;
static volatile uint32_t t151 = 5418U;
volatile int16_t x629 = INT16_MIN;
int8_t x631 = INT8_MIN;
uint8_t x635 = UINT8_MAX;
int64_t x638 = 244801697773LL;
int32_t x640 = INT32_MIN;
int8_t x649 = INT8_MIN;
volatile int64_t x653 = INT64_MIN;
static int64_t t158 = INT64_MIN;
uint64_t x662 = 1020837LLU;
int32_t t160 = -21;
int32_t x672 = 514159006;
int16_t x674 = INT16_MAX;
uint16_t x686 = 10900U;
volatile int8_t x688 = INT8_MAX;
static uint64_t x698 = 32496LLU;
int64_t t170 = -207630690LL;
static int64_t x707 = INT64_MAX;
static int32_t x708 = INT32_MAX;
volatile uint8_t x712 = UINT8_MAX;
int64_t t172 = -31909794153674LL;
int8_t x719 = INT8_MIN;
static volatile int64_t x724 = INT64_MIN;
volatile int64_t t175 = -8755814809075037LL;
int32_t t180 = -1754539;
uint32_t x747 = 783570U;
volatile uint16_t x749 = UINT16_MAX;
uint16_t x752 = UINT16_MAX;
int32_t t182 = -8363;
int32_t x753 = -1;
uint16_t x757 = 666U;
int32_t x758 = 466337;
uint64_t x760 = 134563LLU;
int64_t x768 = -1LL;
uint32_t x769 = 389371947U;
volatile int64_t t187 = 17023270370LL;
int16_t x773 = INT16_MIN;
int64_t x779 = INT64_MIN;
volatile int16_t x782 = INT16_MIN;
static uint16_t x784 = UINT16_MAX;
static int8_t x792 = -26;
volatile uint32_t x795 = UINT32_MAX;
volatile uint8_t x797 = 53U;
uint32_t x803 = 2623517U;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	static volatile int64_t x3 = -325LL;
	uint8_t x4 = 1U;

    t0 = (x1/((x2!=x3)|x4));

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 217107U;
	uint64_t x6 = 2015996201676459LLU;
	volatile uint64_t x8 = 1897768593003004LLU;
	uint64_t t1 = 2189781849695636651LLU;

    t1 = (x5/((x6!=x7)|x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x9 = 69U;
	static uint16_t x10 = 2U;
	volatile int64_t x11 = INT64_MIN;
	uint32_t t2 = 116076U;

    t2 = (x9/((x10!=x11)|x12));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = INT64_MAX;
	static uint8_t x18 = UINT8_MAX;
	uint8_t x19 = 0U;
	static volatile uint64_t x20 = 1445703439LLU;
	volatile uint64_t t3 = 19LLU;

    t3 = (x17/((x18!=x19)|x20));

    if (t3 != 6379850658LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = 47U;
	uint16_t x22 = 1291U;
	int64_t x23 = INT64_MAX;
	uint8_t x24 = 33U;
	int32_t t4 = 34122170;

    t4 = (x21/((x22!=x23)|x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x25 = 219U;
	int8_t x26 = INT8_MIN;
	int64_t x27 = 14947790039854231LL;
	uint64_t x28 = 477607392424697454LLU;
	uint64_t t5 = 8571528159091LLU;

    t5 = (x25/((x26!=x27)|x28));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x31 = 61U;
	int8_t x32 = -27;
	uint32_t t6 = 1082U;

    t6 = (x29/((x30!=x31)|x32));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = 2U;
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = -1;
	uint64_t x36 = 1033844676473595LLU;
	uint64_t t7 = 33723610468LLU;

    t7 = (x33/((x34!=x35)|x36));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = 911340736888128LL;
	int8_t x38 = 19;
	int8_t x39 = -1;
	volatile int32_t x40 = -618;

    t8 = (x37/((x38!=x39)|x40));

    if (t8 != -1477051437419LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x42 = 99914693538LLU;
	int8_t x43 = INT8_MIN;
	static int16_t x44 = -1;

    t9 = (x41/((x42!=x43)|x44));

    if (t9 != -5) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = -1;
	int16_t x47 = -1;
	int32_t x48 = INT32_MAX;

    t10 = (x45/((x46!=x47)|x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x49 = 136LL;
	uint64_t x50 = 7059747198246LLU;
	int8_t x51 = INT8_MIN;
	uint64_t x52 = 23825790988450LLU;
	static uint64_t t11 = 43712015LLU;

    t11 = (x49/((x50!=x51)|x52));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x53 = 6U;
	int8_t x54 = -1;
	static int64_t x55 = -101555145364850644LL;
	static uint16_t x56 = 7U;
	volatile int32_t t12 = 7043;

    t12 = (x53/((x54!=x55)|x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x57 = INT64_MAX;
	static int16_t x59 = -1;
	volatile int64_t x60 = -1LL;
	int64_t t13 = -207239705849306921LL;

    t13 = (x57/((x58!=x59)|x60));

    if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x61 = 234448994717394LL;
	uint16_t x62 = 4U;
	int64_t x63 = INT64_MAX;
	int64_t t14 = 657995089358062478LL;

    t14 = (x61/((x62!=x63)|x64));

    if (t14 != 919407822421LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = 8151LL;
	int32_t x70 = -10434;
	static uint16_t x71 = 1570U;
	int32_t x72 = INT32_MAX;
	static volatile int64_t t15 = -130527342034LL;

    t15 = (x69/((x70!=x71)|x72));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = -1;
	int32_t x74 = 248;
	int8_t x75 = -5;
	uint16_t x76 = 3U;
	volatile int32_t t16 = -42;

    t16 = (x73/((x74!=x75)|x76));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = 587183052373254857LL;
	uint8_t x79 = 0U;
	int16_t x80 = INT16_MIN;
	static volatile int64_t t17 = -634695202654907LL;

    t17 = (x77/((x78!=x79)|x80));

    if (t17 != -17919951547998LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x82 = INT16_MAX;
	int32_t x83 = INT32_MIN;
	volatile int16_t x84 = -1;
	volatile int32_t t18 = -2300829;

    t18 = (x81/((x82!=x83)|x84));

    if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x85 = 0;
	volatile int64_t x86 = 127LL;
	uint16_t x87 = UINT16_MAX;
	static int16_t x88 = INT16_MAX;
	volatile int32_t t19 = -23;

    t19 = (x85/((x86!=x87)|x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = -12715850;
	int8_t x90 = INT8_MIN;
	static uint64_t x91 = UINT64_MAX;
	uint32_t x92 = UINT32_MAX;

    t20 = (x89/((x90!=x91)|x92));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x93 = 66882845612LLU;
	int8_t x94 = INT8_MIN;
	uint64_t x95 = UINT64_MAX;
	int32_t x96 = 0;
	static volatile uint64_t t21 = 3352978LLU;

    t21 = (x93/((x94!=x95)|x96));

    if (t21 != 66882845612LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x98 = 67U;
	int16_t x100 = INT16_MAX;
	int32_t t22 = 661;

    t22 = (x97/((x98!=x99)|x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x101 = -1;
	int64_t x103 = -202507LL;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t23 = -172771762;

    t23 = (x101/((x102!=x103)|x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x105 = INT32_MIN;
	int64_t x106 = -1LL;
	int32_t x107 = 359352;
	int32_t x108 = -20;
	static volatile int32_t t24 = 862294;

    t24 = (x105/((x106!=x107)|x108));

    if (t24 != 113025455) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x111 = INT16_MAX;
	int8_t x112 = 45;
	int32_t t25 = -13889977;

    t25 = (x109/((x110!=x111)|x112));

    if (t25 != 1456) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x114 = -459590849LL;
	volatile int8_t x116 = INT8_MIN;
	static uint32_t t26 = 31362527U;

    t26 = (x113/((x114!=x115)|x116));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x117 = 55;
	int64_t x118 = -1LL;
	int16_t x119 = INT16_MAX;
	int8_t x120 = INT8_MAX;

    t27 = (x117/((x118!=x119)|x120));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = -1;
	static int8_t x123 = -1;
	uint32_t x124 = UINT32_MAX;
	uint32_t t28 = 19U;

    t28 = (x121/((x122!=x123)|x124));

    if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = INT8_MAX;
	volatile int32_t x126 = INT32_MIN;
	int32_t t29 = 17;

    t29 = (x125/((x126!=x127)|x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = -1LL;
	int64_t x130 = INT64_MIN;
	int64_t x131 = 3290703600LL;
	int64_t t30 = 160246260516LL;

    t30 = (x129/((x130!=x131)|x132));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x134 = 268683U;

    t31 = (x133/((x134!=x135)|x136));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x137 = UINT16_MAX;
	uint64_t x138 = 58952917184754256LLU;
	int32_t x139 = INT32_MAX;
	static int64_t x140 = -4193603200014LL;
	volatile int64_t t32 = -383LL;

    t32 = (x137/((x138!=x139)|x140));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = -7;
	volatile int16_t x142 = 0;
	volatile int64_t x143 = INT64_MAX;
	int64_t x144 = -1LL;
	volatile int64_t t33 = 594LL;

    t33 = (x141/((x142!=x143)|x144));

    if (t33 != 7LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x145 = 33759826871027LLU;
	uint8_t x146 = 10U;
	static uint32_t x148 = 26U;
	static volatile uint64_t t34 = 337552946LLU;

    t34 = (x145/((x146!=x147)|x148));

    if (t34 != 1250363958186LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x150 = -1;
	volatile int32_t x152 = INT32_MAX;
	volatile int64_t t35 = 9237LL;

    t35 = (x149/((x150!=x151)|x152));

    if (t35 != -24LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x153 = 9U;
	static volatile int8_t x155 = -1;
	static uint8_t x156 = UINT8_MAX;
	static int32_t t36 = -4;

    t36 = (x153/((x154!=x155)|x156));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x157 = INT16_MAX;
	int16_t x158 = INT16_MIN;
	uint64_t x159 = 48141614LLU;
	int16_t x160 = 7367;
	int32_t t37 = 0;

    t37 = (x157/((x158!=x159)|x160));

    if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x161 = INT16_MIN;
	uint16_t x162 = UINT16_MAX;
	int8_t x163 = -1;
	volatile int64_t t38 = 97272452591013LL;

    t38 = (x161/((x162!=x163)|x164));

    if (t38 != 3LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int64_t x169 = 643924729960269LL;
	int64_t x172 = -1LL;
	int64_t t39 = -2LL;

    t39 = (x169/((x170!=x171)|x172));

    if (t39 != -643924729960269LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = 29;
	int8_t x174 = INT8_MAX;
	volatile uint8_t x175 = 0U;
	static uint8_t x176 = UINT8_MAX;
	volatile int32_t t40 = -2615;

    t40 = (x173/((x174!=x175)|x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x177 = UINT64_MAX;
	uint64_t x179 = 506270700306972590LLU;
	int64_t x180 = 282658479542903516LL;
	uint64_t t41 = 7LLU;

    t41 = (x177/((x178!=x179)|x180));

    if (t41 != 65LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x181 = 1804935187941319007LL;
	volatile int8_t x183 = -1;
	int64_t x184 = -438791362605800LL;
	volatile int64_t t42 = 5885441030323415LL;

    t42 = (x181/((x182!=x183)|x184));

    if (t42 != -4113LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x185 = UINT16_MAX;
	int64_t x186 = -685007538014014LL;
	int8_t x187 = -10;
	int32_t x188 = -1;
	volatile int32_t t43 = 0;

    t43 = (x185/((x186!=x187)|x188));

    if (t43 != -65535) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x192 = INT16_MIN;
	volatile int32_t t44 = 183449559;

    t44 = (x189/((x190!=x191)|x192));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = -1LL;
	volatile int32_t x195 = INT32_MAX;
	static volatile int64_t x196 = INT64_MIN;
	int64_t t45 = -1097912989016LL;

    t45 = (x193/((x194!=x195)|x196));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x198 = -211;
	volatile int32_t x199 = INT32_MIN;

    t46 = (x197/((x198!=x199)|x200));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x201 = -1LL;
	int64_t x203 = -1LL;
	static uint16_t x204 = UINT16_MAX;
	int64_t t47 = -370LL;

    t47 = (x201/((x202!=x203)|x204));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint16_t x205 = 5U;
	uint16_t x207 = UINT16_MAX;
	int64_t x208 = 2080637883907LL;
	int64_t t48 = 899993204249LL;

    t48 = (x205/((x206!=x207)|x208));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x209 = INT64_MIN;
	int8_t x210 = -1;
	volatile uint32_t x211 = 12258269U;
	uint32_t x212 = 13321982U;

    t49 = (x209/((x210!=x211)|x212));

    if (t49 != -692342276435LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x213 = -1;
	static int32_t x214 = -1;
	int64_t x215 = INT64_MAX;
	uint8_t x216 = 65U;
	volatile int32_t t50 = -493256;

    t50 = (x213/((x214!=x215)|x216));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x217 = 41U;
	uint32_t x219 = 532176U;
	uint16_t x220 = 39U;

    t51 = (x217/((x218!=x219)|x220));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x221 = INT32_MIN;
	int8_t x222 = 31;
	volatile int32_t x223 = 160;
	int64_t x224 = INT64_MIN;
	int64_t t52 = 443509797828162904LL;

    t52 = (x221/((x222!=x223)|x224));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x225 = INT8_MAX;
	volatile int64_t x226 = INT64_MAX;
	volatile int8_t x227 = -1;
	static int32_t t53 = 4;

    t53 = (x225/((x226!=x227)|x228));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = INT8_MIN;
	volatile int16_t x230 = -1;
	volatile uint16_t x232 = 0U;
	int32_t t54 = 1;

    t54 = (x229/((x230!=x231)|x232));

    if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x233 = UINT32_MAX;
	int8_t x234 = INT8_MIN;
	static uint32_t t55 = 3780U;

    t55 = (x233/((x234!=x235)|x236));

    if (t55 != 431264U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x237 = INT64_MAX;
	static uint16_t x238 = UINT16_MAX;
	static uint32_t x239 = 160U;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t56 = -137420LL;

    t56 = (x237/((x238!=x239)|x240));

    if (t56 != 140739635871744LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x242 = 221;
	uint64_t x243 = 100047774LLU;
	int8_t x244 = INT8_MIN;

    t57 = (x241/((x242!=x243)|x244));

    if (t57 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x245 = -1;
	int64_t x246 = INT64_MIN;
	uint8_t x247 = UINT8_MAX;
	uint8_t x248 = UINT8_MAX;

    t58 = (x245/((x246!=x247)|x248));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x249 = 7436;
	int32_t x250 = 1;
	volatile uint64_t x251 = 16321LLU;
	volatile uint8_t x252 = 15U;

    t59 = (x249/((x250!=x251)|x252));

    if (t59 != 495) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x253 = 281;
	static int8_t x254 = -1;
	int16_t x255 = -2433;
	uint64_t x256 = 10474297933190LLU;
	uint64_t t60 = 7984418168732340369LLU;

    t60 = (x253/((x254!=x255)|x256));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x257 = 265183U;
	int16_t x258 = INT16_MIN;
	int16_t x259 = INT16_MIN;
	int64_t t61 = 1LL;

    t61 = (x257/((x258!=x259)|x260));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x261 = INT32_MIN;
	int16_t x262 = -1;
	static int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MIN;
	static int32_t t62 = -25922797;

    t62 = (x261/((x262!=x263)|x264));

    if (t62 != 16909320) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x265 = 1U;
	volatile int16_t x267 = INT16_MIN;
	int32_t t63 = -89075;

    t63 = (x265/((x266!=x267)|x268));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x269 = 1;
	int32_t x270 = -10094465;
	int16_t x271 = INT16_MIN;
	int32_t x272 = INT32_MAX;
	int32_t t64 = 60272346;

    t64 = (x269/((x270!=x271)|x272));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x273 = -1;
	int64_t x274 = -1LL;
	uint64_t t65 = 13892222742762141LLU;

    t65 = (x273/((x274!=x275)|x276));

    if (t65 != 46342841LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x277 = 9U;
	static int64_t x279 = INT64_MAX;
	uint64_t x280 = 1955189LLU;
	uint64_t t66 = 252LLU;

    t66 = (x277/((x278!=x279)|x280));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x285 = -24449112LL;
	uint32_t x286 = 2105720U;
	int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MIN;
	volatile int64_t t67 = -17LL;

    t67 = (x285/((x286!=x287)|x288));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x289 = 3057195546975LL;
	uint16_t x290 = UINT16_MAX;
	uint64_t x292 = UINT64_MAX;

    t68 = (x289/((x290!=x291)|x292));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x293 = INT8_MAX;
	uint64_t x294 = 5620588083LLU;
	static uint16_t x295 = 12034U;
	uint16_t x296 = 3311U;
	static int32_t t69 = 252641353;

    t69 = (x293/((x294!=x295)|x296));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x297 = 101261;
	volatile int8_t x300 = INT8_MAX;
	int32_t t70 = -7;

    t70 = (x297/((x298!=x299)|x300));

    if (t70 != 797) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x301 = 0LLU;
	int64_t x302 = -111563606093LL;
	int32_t x303 = INT32_MIN;
	volatile uint64_t t71 = 309043610547LLU;

    t71 = (x301/((x302!=x303)|x304));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x305 = 56789789;
	uint32_t x306 = 9U;
	int32_t x307 = -157;
	int8_t x308 = INT8_MIN;
	volatile int32_t t72 = 7;

    t72 = (x305/((x306!=x307)|x308));

    if (t72 != -447163) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x309 = INT16_MIN;
	uint16_t x311 = 1012U;
	uint64_t x312 = UINT64_MAX;
	uint64_t t73 = 78616692037975LLU;

    t73 = (x309/((x310!=x311)|x312));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x313 = -1;
	uint16_t x314 = 3U;
	int64_t x315 = 890026LL;
	static uint32_t x316 = 109651U;
	static volatile uint32_t t74 = 116517374U;

    t74 = (x313/((x314!=x315)|x316));

    if (t74 != 39169U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x317 = INT32_MIN;
	volatile int8_t x318 = INT8_MAX;
	volatile int64_t x320 = INT64_MIN;
	int64_t t75 = 203482484LL;

    t75 = (x317/((x318!=x319)|x320));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x321 = 2U;
	volatile int64_t x322 = INT64_MIN;
	uint32_t x323 = 7500817U;
	int32_t x324 = -8865087;
	static volatile int32_t t76 = -208;

    t76 = (x321/((x322!=x323)|x324));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x325 = 9LL;
	int64_t x327 = INT64_MAX;
	volatile uint64_t x328 = 498830585891889454LLU;
	uint64_t t77 = 1640039425494728688LLU;

    t77 = (x325/((x326!=x327)|x328));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x329 = -1;
	int8_t x330 = -3;
	volatile int8_t x332 = -1;
	static volatile int32_t t78 = -4719262;

    t78 = (x329/((x330!=x331)|x332));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x333 = -1LL;
	volatile uint64_t x334 = 11671LLU;
	uint64_t x335 = UINT64_MAX;
	static uint8_t x336 = UINT8_MAX;
	int64_t t79 = -14415830227LL;

    t79 = (x333/((x334!=x335)|x336));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x337 = UINT32_MAX;
	uint64_t x338 = 1002LLU;
	static volatile uint16_t x339 = 28U;
	int8_t x340 = -3;
	uint32_t t80 = 977U;

    t80 = (x337/((x338!=x339)|x340));

    if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x342 = 5751865595065265LLU;
	volatile int64_t x343 = INT64_MIN;
	uint8_t x344 = 0U;
	int32_t t81 = -10982;

    t81 = (x341/((x342!=x343)|x344));

    if (t81 != -43) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x345 = 1372150;
	int64_t x346 = 81690886117048986LL;
	uint32_t x347 = UINT32_MAX;
	int64_t t82 = -21097LL;

    t82 = (x345/((x346!=x347)|x348));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x349 = INT16_MAX;
	uint64_t x351 = UINT64_MAX;
	static int16_t x352 = -1;
	static volatile int32_t t83 = -4741205;

    t83 = (x349/((x350!=x351)|x352));

    if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x354 = INT64_MIN;
	uint32_t x355 = 94863176U;
	volatile uint16_t x356 = UINT16_MAX;
	int64_t t84 = -46613931473123926LL;

    t84 = (x353/((x354!=x355)|x356));

    if (t84 != -140739635871744LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x357 = INT8_MIN;
	int64_t x358 = -1LL;
	static int32_t x359 = -1;
	int32_t t85 = -161603;

    t85 = (x357/((x358!=x359)|x360));

    if (t85 != -42) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x361 = 4210285993LLU;
	int64_t x362 = INT64_MIN;
	uint8_t x363 = 1U;
	int8_t x364 = -1;
	volatile uint64_t t86 = 443909769879LLU;

    t86 = (x361/((x362!=x363)|x364));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x365 = INT16_MAX;
	static volatile int16_t x368 = 1;
	volatile int32_t t87 = -560863433;

    t87 = (x365/((x366!=x367)|x368));

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x369 = -295LL;
	static int16_t x370 = 226;
	int64_t x371 = 22116364LL;
	int8_t x372 = 1;
	int64_t t88 = 80LL;

    t88 = (x369/((x370!=x371)|x372));

    if (t88 != -295LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x373 = -795544421;
	int32_t x374 = INT32_MAX;
	volatile int32_t t89 = -305826625;

    t89 = (x373/((x374!=x375)|x376));

    if (t89 != -24278) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x381 = INT8_MAX;
	uint8_t x382 = 3U;
	static uint64_t x383 = UINT64_MAX;
	int8_t x384 = INT8_MAX;

    t90 = (x381/((x382!=x383)|x384));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x388 = 1113LLU;
	volatile uint64_t t91 = 110321176747332590LLU;

    t91 = (x385/((x386!=x387)|x388));

    if (t91 != 16573894046459615LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x389 = 9U;
	int32_t x390 = INT32_MIN;
	uint64_t x391 = 241LLU;
	int8_t x392 = -59;
	volatile int32_t t92 = -149742;

    t92 = (x389/((x390!=x391)|x392));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x393 = INT64_MIN;
	uint64_t x394 = 16951196697192LLU;
	uint16_t x396 = 0U;
	int64_t t93 = INT64_MIN;

    t93 = (x393/((x394!=x395)|x396));

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x397 = INT32_MIN;
	volatile int8_t x398 = INT8_MAX;
	uint16_t x399 = 1U;
	uint32_t x400 = 5413199U;
	volatile uint32_t t94 = 4622U;

    t94 = (x397/((x398!=x399)|x400));

    if (t94 != 396U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x401 = 271835899019LLU;
	int16_t x402 = INT16_MAX;
	int32_t x403 = -44774167;
	uint32_t x404 = UINT32_MAX;

    t95 = (x401/((x402!=x403)|x404));

    if (t95 != 63LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x405 = -1;
	uint8_t x408 = UINT8_MAX;
	static int32_t t96 = -7073747;

    t96 = (x405/((x406!=x407)|x408));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x409 = -20;
	int32_t x411 = -6;
	int32_t x412 = 314200;
	volatile int32_t t97 = 6;

    t97 = (x409/((x410!=x411)|x412));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x413 = 338614623LL;
	static int16_t x414 = INT16_MAX;
	volatile uint32_t x415 = UINT32_MAX;
	int64_t t98 = -15874543507304LL;

    t98 = (x413/((x414!=x415)|x416));

    if (t98 != 1074967LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x417 = 23506U;
	int64_t x418 = 6333360LL;
	int16_t x420 = INT16_MIN;

    t99 = (x417/((x418!=x419)|x420));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x422 = 6829833LLU;
	static int16_t x423 = -1;
	volatile int16_t x424 = INT16_MAX;
	volatile int32_t t100 = -27727803;

    t100 = (x421/((x422!=x423)|x424));

    if (t100 != 2) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x425 = 0;
	int8_t x426 = -12;
	int8_t x427 = INT8_MAX;
	int16_t x428 = 4;
	int32_t t101 = 145;

    t101 = (x425/((x426!=x427)|x428));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x430 = INT8_MIN;
	int32_t x431 = -1;
	volatile int32_t x432 = INT32_MIN;

    t102 = (x429/((x430!=x431)|x432));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x433 = INT64_MAX;
	int32_t x434 = -1989347;
	uint32_t x435 = 6U;
	int64_t x436 = INT64_MIN;
	volatile int64_t t103 = 2321765029LL;

    t103 = (x433/((x434!=x435)|x436));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x438 = 73U;
	volatile int8_t x439 = -1;
	int64_t x440 = -8469732586001079LL;
	volatile uint64_t t104 = 450065722340LLU;

    t104 = (x437/((x438!=x439)|x440));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x441 = 146;
	uint64_t x442 = 64185800894LLU;
	int8_t x444 = -34;
	volatile int32_t t105 = 2115;

    t105 = (x441/((x442!=x443)|x444));

    if (t105 != -4) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x445 = 3982LLU;
	volatile uint64_t x446 = 0LLU;
	volatile int8_t x447 = 45;
	uint64_t t106 = 83574841LLU;

    t106 = (x445/((x446!=x447)|x448));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x449 = INT64_MIN;
	int8_t x450 = INT8_MIN;
	volatile uint64_t x451 = UINT64_MAX;
	static int16_t x452 = INT16_MAX;
	volatile int64_t t107 = 12172379210725568LL;

    t107 = (x449/((x450!=x451)|x452));

    if (t107 != -281483566907400LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x453 = INT8_MIN;
	volatile uint8_t x454 = 4U;
	static uint8_t x455 = 24U;
	int32_t t108 = -31;

    t108 = (x453/((x454!=x455)|x456));

    if (t108 != -42) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x459 = 3U;
	static int64_t t109 = -1LL;

    t109 = (x457/((x458!=x459)|x460));

    if (t109 != -1137LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x461 = 117097245753869426LLU;
	uint8_t x462 = 4U;
	volatile int32_t x463 = -1;
	int16_t x464 = 13;
	static volatile uint64_t t110 = 2659306953LLU;

    t110 = (x461/((x462!=x463)|x464));

    if (t110 != 9007480442605340LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x465 = UINT64_MAX;
	static volatile int64_t x468 = INT64_MIN;
	static uint64_t t111 = 186318784519LLU;

    t111 = (x465/((x466!=x467)|x468));

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x469 = INT8_MIN;
	static int8_t x470 = -1;
	uint16_t x471 = UINT16_MAX;
	volatile int32_t t112 = 4018067;

    t112 = (x469/((x470!=x471)|x472));

    if (t112 != 128) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x473 = INT32_MIN;
	static int16_t x474 = -1;
	int8_t x475 = -35;
	int32_t x476 = 2;
	volatile int32_t t113 = 691269953;

    t113 = (x473/((x474!=x475)|x476));

    if (t113 != -715827882) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x477 = 133905U;
	int16_t x478 = -6508;
	uint16_t x480 = UINT16_MAX;
	volatile uint32_t t114 = 1U;

    t114 = (x477/((x478!=x479)|x480));

    if (t114 != 2U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x481 = UINT32_MAX;
	uint64_t x483 = 542875253LLU;
	int32_t x484 = INT32_MAX;

    t115 = (x481/((x482!=x483)|x484));

    if (t115 != 2U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x485 = 178762146;
	int16_t x486 = 0;
	int64_t x487 = -4961487702LL;
	uint8_t x488 = UINT8_MAX;
	int32_t t116 = 1;

    t116 = (x485/((x486!=x487)|x488));

    if (t116 != 701028) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x490 = INT8_MIN;
	int64_t x491 = INT64_MIN;
	int64_t x492 = -761604586LL;
	int64_t t117 = -6406955LL;

    t117 = (x489/((x490!=x491)|x492));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x493 = -542948960434609475LL;
	int32_t x494 = INT32_MIN;
	int16_t x495 = INT16_MAX;
	int16_t x496 = -234;
	int64_t t118 = 41204710102357347LL;

    t118 = (x493/((x494!=x495)|x496));

    if (t118 != 2330253049075577LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint64_t x497 = 610732941038LLU;
	uint16_t x498 = 5814U;
	int16_t x499 = -1;
	static int64_t x500 = 14141572347LL;
	uint64_t t119 = 8219720028332626LLU;

    t119 = (x497/((x498!=x499)|x500));

    if (t119 != 43LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x501 = 653U;
	int8_t x502 = 1;
	int8_t x504 = INT8_MIN;

    t120 = (x501/((x502!=x503)|x504));

    if (t120 != -5) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x505 = UINT16_MAX;
	static int16_t x507 = INT16_MAX;
	uint8_t x508 = 0U;
	volatile int32_t t121 = 5925896;

    t121 = (x505/((x506!=x507)|x508));

    if (t121 != 65535) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x510 = UINT8_MAX;
	int16_t x511 = INT16_MIN;
	static uint64_t x512 = 94898LLU;
	uint64_t t122 = 49LLU;

    t122 = (x509/((x510!=x511)|x512));

    if (t122 != 45258LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x513 = INT32_MIN;
	int64_t x514 = INT64_MIN;
	uint32_t x515 = 90102U;
	int64_t x516 = -744151LL;
	int64_t t123 = -3838356770LL;

    t123 = (x513/((x514!=x515)|x516));

    if (t123 != 2885LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x517 = -1;
	static int16_t x518 = INT16_MIN;
	uint64_t x519 = UINT64_MAX;
	volatile int64_t t124 = 1869LL;

    t124 = (x517/((x518!=x519)|x520));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x521 = -7;
	volatile uint32_t x522 = 6334099U;
	uint32_t x524 = 464168U;
	uint32_t t125 = 3143U;

    t125 = (x521/((x522!=x523)|x524));

    if (t125 != 9253U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x525 = INT64_MIN;
	static int64_t x527 = INT64_MIN;
	uint8_t x528 = 1U;
	int64_t t126 = INT64_MIN;

    t126 = (x525/((x526!=x527)|x528));

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint16_t x529 = UINT16_MAX;
	int8_t x530 = INT8_MIN;
	int32_t x532 = -1;

    t127 = (x529/((x530!=x531)|x532));

    if (t127 != -65535) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x533 = INT16_MIN;
	uint64_t x534 = UINT64_MAX;
	volatile uint8_t x535 = 76U;
	static int16_t x536 = 484;
	int32_t t128 = 10;

    t128 = (x533/((x534!=x535)|x536));

    if (t128 != -67) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x538 = UINT8_MAX;
	int64_t x539 = INT64_MAX;
	uint32_t x540 = UINT32_MAX;
	static uint32_t t129 = 1019838U;

    t129 = (x537/((x538!=x539)|x540));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x541 = INT16_MIN;
	static int32_t x543 = INT32_MAX;
	static int16_t x544 = -1;
	volatile int32_t t130 = 9148;

    t130 = (x541/((x542!=x543)|x544));

    if (t130 != 32768) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x545 = 20178LL;
	volatile int32_t x546 = INT32_MAX;
	int32_t x547 = 0;
	static uint8_t x548 = UINT8_MAX;
	volatile int64_t t131 = -507LL;

    t131 = (x545/((x546!=x547)|x548));

    if (t131 != 79LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x549 = -1;
	int16_t x550 = INT16_MIN;
	int16_t x552 = -6977;
	static int32_t t132 = -113;

    t132 = (x549/((x550!=x551)|x552));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x553 = UINT64_MAX;
	volatile uint16_t x554 = UINT16_MAX;
	int64_t x555 = 48816222131034LL;
	volatile int8_t x556 = -1;
	volatile uint64_t t133 = 277LLU;

    t133 = (x553/((x554!=x555)|x556));

    if (t133 != 1LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x557 = INT16_MAX;
	volatile int32_t x558 = INT32_MIN;
	int32_t x559 = -156843;
	int16_t x560 = -13;
	static int32_t t134 = 47403;

    t134 = (x557/((x558!=x559)|x560));

    if (t134 != -2520) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x562 = INT16_MAX;
	static volatile uint16_t x563 = UINT16_MAX;
	int16_t x564 = INT16_MIN;
	volatile int32_t t135 = 0;

    t135 = (x561/((x562!=x563)|x564));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x565 = 882707213;
	uint8_t x566 = UINT8_MAX;
	static uint64_t x567 = 3LLU;
	volatile int64_t t136 = -6324828449281LL;

    t136 = (x565/((x566!=x567)|x568));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x569 = INT16_MIN;
	int8_t x570 = INT8_MIN;
	int64_t x571 = -949399643973725992LL;
	static int32_t x572 = INT32_MIN;
	volatile int32_t t137 = -7703;

    t137 = (x569/((x570!=x571)|x572));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x574 = 7U;
	static volatile int16_t x575 = INT16_MAX;
	static volatile int8_t x576 = 30;
	volatile int32_t t138 = 35038281;

    t138 = (x573/((x574!=x575)|x576));

    if (t138 != -1057) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x577 = 439213683LL;
	volatile uint64_t x578 = 265649905869731461LLU;
	int32_t x580 = -1;
	volatile int64_t t139 = -64LL;

    t139 = (x577/((x578!=x579)|x580));

    if (t139 != -439213683LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x581 = -3;
	int8_t x583 = INT8_MIN;
	int32_t x584 = INT32_MIN;
	static volatile int32_t t140 = 262796466;

    t140 = (x581/((x582!=x583)|x584));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x587 = UINT16_MAX;
	int32_t x588 = 10526256;
	volatile int32_t t141 = -5;

    t141 = (x585/((x586!=x587)|x588));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x589 = -1;
	volatile uint8_t x590 = 3U;
	int8_t x591 = -56;
	int32_t t142 = -23694228;

    t142 = (x589/((x590!=x591)|x592));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x593 = 109LL;
	uint64_t x594 = 8625113736101LLU;
	int32_t x595 = 503373;
	int16_t x596 = INT16_MIN;

    t143 = (x593/((x594!=x595)|x596));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x597 = UINT8_MAX;
	int64_t x598 = INT64_MIN;
	int16_t x600 = -1;
	volatile int32_t t144 = -6;

    t144 = (x597/((x598!=x599)|x600));

    if (t144 != -255) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x601 = INT16_MIN;
	int64_t x603 = INT64_MAX;
	int32_t x604 = -1;
	volatile int32_t t145 = 14670;

    t145 = (x601/((x602!=x603)|x604));

    if (t145 != 32768) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x605 = INT8_MIN;
	int8_t x607 = INT8_MIN;
	static int8_t x608 = 2;
	int32_t t146 = -44184;

    t146 = (x605/((x606!=x607)|x608));

    if (t146 != -64) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x609 = INT16_MIN;
	int8_t x610 = INT8_MAX;
	static int64_t x611 = -1LL;
	volatile int64_t x612 = INT64_MIN;
	static int64_t t147 = -106512414LL;

    t147 = (x609/((x610!=x611)|x612));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x614 = INT32_MAX;
	int8_t x615 = INT8_MIN;
	uint32_t x616 = 31232649U;

    t148 = (x613/((x614!=x615)|x616));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint8_t x617 = 1U;
	static int8_t x618 = 1;
	static int8_t x619 = INT8_MAX;
	static int16_t x620 = INT16_MIN;
	volatile int32_t t149 = 0;

    t149 = (x617/((x618!=x619)|x620));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x622 = -1;
	uint32_t x623 = 22051730U;
	volatile int32_t t150 = -242956;

    t150 = (x621/((x622!=x623)|x624));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x625 = 345;
	volatile int32_t x626 = INT32_MIN;
	uint8_t x627 = UINT8_MAX;
	uint32_t x628 = 4616823U;

    t151 = (x625/((x626!=x627)|x628));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x630 = INT32_MIN;
	uint32_t x632 = UINT32_MAX;
	volatile uint32_t t152 = 155U;

    t152 = (x629/((x630!=x631)|x632));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x633 = -7321;
	volatile uint64_t x634 = 309365LLU;
	uint32_t x636 = 15721U;
	uint32_t t153 = 1749790796U;

    t153 = (x633/((x634!=x635)|x636));

    if (t153 != 273198U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x637 = INT16_MIN;
	int8_t x639 = INT8_MIN;
	int32_t t154 = 1;

    t154 = (x637/((x638!=x639)|x640));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x641 = UINT64_MAX;
	static int64_t x642 = INT64_MIN;
	int32_t x643 = INT32_MIN;
	volatile uint32_t x644 = 523402261U;
	volatile uint64_t t155 = 15179255846468265LLU;

    t155 = (x641/((x642!=x643)|x644));

    if (t155 != 35243913617LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x645 = INT32_MAX;
	uint32_t x646 = UINT32_MAX;
	uint64_t x647 = UINT64_MAX;
	int32_t x648 = -2976;
	static volatile int32_t t156 = -526665650;

    t156 = (x645/((x646!=x647)|x648));

    if (t156 != -721843) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x650 = 0U;
	uint8_t x651 = UINT8_MAX;
	int8_t x652 = INT8_MIN;
	volatile int32_t t157 = -22;

    t157 = (x649/((x650!=x651)|x652));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x654 = INT8_MIN;
	volatile uint32_t x655 = 61436U;
	uint32_t x656 = 1U;

    t158 = (x653/((x654!=x655)|x656));

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x657 = 33132;
	static int8_t x658 = INT8_MAX;
	int64_t x659 = INT64_MIN;
	static int32_t x660 = INT32_MIN;
	int32_t t159 = -1434734;

    t159 = (x657/((x658!=x659)|x660));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x661 = -1;
	static int32_t x663 = -3245536;
	uint16_t x664 = 28356U;

    t160 = (x661/((x662!=x663)|x664));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x665 = INT64_MAX;
	int16_t x666 = INT16_MAX;
	int8_t x667 = -1;
	int32_t x668 = INT32_MAX;
	static int64_t t161 = 2013LL;

    t161 = (x665/((x666!=x667)|x668));

    if (t161 != 4294967298LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x669 = -1;
	uint8_t x670 = 10U;
	volatile int64_t x671 = INT64_MIN;
	static volatile int32_t t162 = 1;

    t162 = (x669/((x670!=x671)|x672));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x673 = UINT16_MAX;
	volatile uint64_t x675 = 29071163LLU;
	uint16_t x676 = 613U;
	int32_t t163 = 5270;

    t163 = (x673/((x674!=x675)|x676));

    if (t163 != 106) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x677 = INT64_MIN;
	int8_t x678 = 1;
	uint8_t x679 = 1U;
	volatile int16_t x680 = INT16_MIN;
	int64_t t164 = 28785999LL;

    t164 = (x677/((x678!=x679)|x680));

    if (t164 != 281474976710656LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x681 = 126U;
	uint8_t x682 = 1U;
	int16_t x683 = -1;
	int8_t x684 = -1;
	int32_t t165 = -1950157;

    t165 = (x681/((x682!=x683)|x684));

    if (t165 != -126) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x685 = 3;
	int8_t x687 = INT8_MIN;
	int32_t t166 = -1116260;

    t166 = (x685/((x686!=x687)|x688));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x689 = -13853205961518636LL;
	volatile int64_t x690 = INT64_MIN;
	volatile int32_t x691 = -1;
	int32_t x692 = INT32_MIN;
	static int64_t t167 = -164084754937LL;

    t167 = (x689/((x690!=x691)|x692));

    if (t167 != 6450901LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x693 = 39U;
	uint8_t x694 = 0U;
	volatile int16_t x695 = INT16_MAX;
	volatile uint16_t x696 = 6249U;
	int32_t t168 = 1494953;

    t168 = (x693/((x694!=x695)|x696));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x697 = INT16_MAX;
	int8_t x699 = INT8_MIN;
	int16_t x700 = -961;
	int32_t t169 = -389;

    t169 = (x697/((x698!=x699)|x700));

    if (t169 != -34) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x701 = -1LL;
	uint8_t x702 = 2U;
	uint64_t x703 = 1057724633LLU;
	uint8_t x704 = 24U;

    t170 = (x701/((x702!=x703)|x704));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint64_t x705 = 3823590642805760445LLU;
	int32_t x706 = INT32_MAX;
	uint64_t t171 = 1837223523LLU;

    t171 = (x705/((x706!=x707)|x708));

    if (t171 != 1780498141LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x709 = -1LL;
	int16_t x710 = INT16_MIN;
	int16_t x711 = INT16_MIN;

    t172 = (x709/((x710!=x711)|x712));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x713 = INT32_MIN;
	static int16_t x714 = 275;
	volatile int64_t x715 = -1LL;
	static int32_t x716 = INT32_MIN;
	volatile int32_t t173 = -26985;

    t173 = (x713/((x714!=x715)|x716));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x717 = UINT64_MAX;
	static int64_t x718 = 134990182839209LL;
	int64_t x720 = -5504371619LL;
	volatile uint64_t t174 = 50676108LLU;

    t174 = (x717/((x718!=x719)|x720));

    if (t174 != 1LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x721 = -1;
	int64_t x722 = 73LL;
	int8_t x723 = INT8_MIN;

    t175 = (x721/((x722!=x723)|x724));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x725 = UINT8_MAX;
	int32_t x726 = INT32_MAX;
	int16_t x727 = INT16_MIN;
	int64_t x728 = -1LL;
	static volatile int64_t t176 = -229567756647LL;

    t176 = (x725/((x726!=x727)|x728));

    if (t176 != -255LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x729 = 925LLU;
	uint16_t x730 = 0U;
	int32_t x731 = INT32_MIN;
	int32_t x732 = INT32_MIN;
	volatile uint64_t t177 = 283384LLU;

    t177 = (x729/((x730!=x731)|x732));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x733 = 32125U;
	static uint16_t x734 = 107U;
	volatile int32_t x735 = -4;
	static uint32_t x736 = 1575U;
	volatile uint32_t t178 = 1U;

    t178 = (x733/((x734!=x735)|x736));

    if (t178 != 20U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x737 = INT32_MIN;
	static int16_t x738 = 1235;
	int16_t x739 = -3451;
	uint16_t x740 = 1953U;
	volatile int32_t t179 = 50546;

    t179 = (x737/((x738!=x739)|x740));

    if (t179 != -1099582) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x741 = INT32_MIN;
	int16_t x742 = -1;
	static int64_t x743 = INT64_MAX;
	static uint8_t x744 = UINT8_MAX;

    t180 = (x741/((x742!=x743)|x744));

    if (t180 != -8421504) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x745 = 1;
	uint16_t x746 = 5523U;
	int16_t x748 = -62;
	volatile int32_t t181 = 6837;

    t181 = (x745/((x746!=x747)|x748));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x750 = INT8_MIN;
	static uint16_t x751 = 7788U;

    t182 = (x749/((x750!=x751)|x752));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x754 = INT8_MIN;
	uint32_t x755 = 288067U;
	int8_t x756 = 0;
	static volatile int32_t t183 = 37777172;

    t183 = (x753/((x754!=x755)|x756));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x759 = 354247;
	uint64_t t184 = 20LLU;

    t184 = (x757/((x758!=x759)|x760));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x761 = INT32_MIN;
	volatile uint32_t x762 = 250U;
	int8_t x763 = INT8_MIN;
	int8_t x764 = 26;
	int32_t t185 = -12;

    t185 = (x761/((x762!=x763)|x764));

    if (t185 != -79536431) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x765 = INT64_MAX;
	uint16_t x766 = UINT16_MAX;
	static uint32_t x767 = 138U;
	volatile int64_t t186 = 0LL;

    t186 = (x765/((x766!=x767)|x768));

    if (t186 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x770 = 1733905857U;
	static int32_t x771 = INT32_MAX;
	int64_t x772 = INT64_MIN;

    t187 = (x769/((x770!=x771)|x772));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x774 = UINT16_MAX;
	uint32_t x775 = UINT32_MAX;
	int64_t x776 = 17766205281686LL;
	int64_t t188 = 264824557211326651LL;

    t188 = (x773/((x774!=x775)|x776));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x777 = -1;
	volatile int64_t x778 = INT64_MIN;
	volatile int8_t x780 = 42;
	int32_t t189 = -118253;

    t189 = (x777/((x778!=x779)|x780));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x781 = 11U;
	uint32_t x783 = UINT32_MAX;
	volatile int32_t t190 = -170;

    t190 = (x781/((x782!=x783)|x784));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x785 = 3U;
	int32_t x786 = 112051075;
	int64_t x787 = INT64_MIN;
	volatile uint8_t x788 = UINT8_MAX;
	volatile int32_t t191 = -14;

    t191 = (x785/((x786!=x787)|x788));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x789 = INT32_MIN;
	static int8_t x790 = INT8_MIN;
	int16_t x791 = -1;
	volatile int32_t t192 = -20;

    t192 = (x789/((x790!=x791)|x792));

    if (t192 != 85899345) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x793 = 1401755700LLU;
	volatile int16_t x794 = INT16_MIN;
	static uint64_t x796 = 416116769LLU;
	volatile uint64_t t193 = 810674LLU;

    t193 = (x793/((x794!=x795)|x796));

    if (t193 != 3LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x798 = -1;
	int16_t x799 = INT16_MIN;
	uint64_t x800 = 254LLU;
	volatile uint64_t t194 = 8379936328871548LLU;

    t194 = (x797/((x798!=x799)|x800));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x801 = -1;
	int64_t x802 = INT64_MAX;
	uint16_t x804 = 93U;
	volatile int32_t t195 = 15574170;

    t195 = (x801/((x802!=x803)|x804));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x805 = -10717339212130LL;
	int32_t x806 = -1;
	uint16_t x807 = UINT16_MAX;
	volatile int32_t x808 = -58749362;
	int64_t t196 = -121126LL;

    t196 = (x805/((x806!=x807)|x808));

    if (t196 != 182424LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x809 = 57;
	int64_t x810 = 8317185262151027LL;
	static volatile int8_t x811 = INT8_MAX;
	static int8_t x812 = -1;
	int32_t t197 = -15423887;

    t197 = (x809/((x810!=x811)|x812));

    if (t197 != -57) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x813 = UINT32_MAX;
	static uint64_t x814 = 16753612162029508LLU;
	static int64_t x815 = INT64_MIN;
	int32_t x816 = INT32_MIN;
	volatile uint32_t t198 = 7U;

    t198 = (x813/((x814!=x815)|x816));

    if (t198 != 1U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x821 = -6;
	int32_t x822 = INT32_MAX;
	static uint64_t x823 = 1736707184LLU;
	volatile uint64_t x824 = 5945830092LLU;
	static uint64_t t199 = 804209991LLU;

    t199 = (x821/((x822!=x823)|x824));

    if (t199 != 3102467407LLU) { NG(); } else { ; }
	
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

