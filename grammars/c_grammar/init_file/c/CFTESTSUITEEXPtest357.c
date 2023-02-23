
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

int8_t x3 = 2;
volatile int16_t x7 = INT16_MIN;
int16_t x26 = INT16_MIN;
volatile int32_t t7 = 16;
volatile int32_t t11 = 2937;
int8_t x58 = -1;
volatile int32_t x62 = INT32_MIN;
static volatile int64_t x63 = 2124491161556381727LL;
int32_t t16 = -3629847;
int8_t x81 = 4;
static int8_t x87 = INT8_MIN;
static int8_t x88 = INT8_MIN;
int32_t t19 = 1763120;
volatile uint64_t x94 = UINT64_MAX;
uint64_t x95 = 2115795753543LLU;
uint8_t x102 = 17U;
int64_t x106 = INT64_MIN;
int32_t x107 = -1;
volatile int32_t t23 = -49263;
uint16_t x109 = 1U;
int16_t x110 = 9747;
int32_t t24 = -6;
uint32_t x113 = 169817U;
int32_t t25 = -29746;
int64_t x120 = INT64_MIN;
int32_t t28 = 123;
uint32_t x133 = UINT32_MAX;
int16_t x136 = -1;
uint16_t x143 = 101U;
int64_t x149 = -10011447LL;
int32_t x160 = INT32_MAX;
volatile int32_t t35 = -2292668;
int16_t x163 = INT16_MIN;
uint8_t x170 = 1U;
static int32_t x177 = INT32_MIN;
volatile int32_t x178 = 11;
volatile int64_t x194 = 3248233185LL;
static int16_t x197 = INT16_MIN;
int8_t x201 = INT8_MAX;
int64_t x202 = -1017842603825012LL;
static int32_t x209 = INT32_MAX;
volatile int8_t x211 = INT8_MIN;
volatile uint8_t x214 = 50U;
int64_t x216 = -10100855LL;
int32_t x225 = INT32_MAX;
static int64_t x227 = 289300508176360LL;
int64_t x229 = -3288972LL;
int8_t x232 = 2;
volatile int32_t x234 = 197303;
volatile int32_t t52 = -7519;
static volatile int32_t t53 = -495;
int8_t x254 = -1;
volatile int64_t x257 = INT64_MIN;
int8_t x263 = 16;
int8_t x270 = -22;
uint16_t x274 = 62U;
static int8_t x276 = 0;
static volatile int32_t t61 = 482561559;
uint8_t x283 = 1U;
int64_t x285 = INT64_MAX;
uint32_t x286 = 478U;
static int32_t x292 = INT32_MIN;
static uint32_t x304 = 127U;
volatile int32_t t67 = 22923758;
int32_t x312 = -1005776313;
volatile int32_t t69 = -56740442;
volatile int8_t x314 = -1;
volatile int32_t t70 = -1866;
static int32_t x321 = INT32_MAX;
static int64_t x323 = -1LL;
uint32_t x331 = UINT32_MAX;
int32_t t75 = -458569247;
static volatile uint8_t x343 = 15U;
int8_t x346 = -1;
int32_t x347 = -720;
static int8_t x348 = INT8_MIN;
int64_t x351 = -569735722308806LL;
int32_t t78 = -1670;
static uint64_t x355 = 80996LLU;
int64_t x357 = INT64_MIN;
int16_t x358 = INT16_MAX;
int32_t x360 = -1;
volatile int32_t t80 = 817205776;
int8_t x361 = -6;
int8_t x371 = 1;
int8_t x373 = INT8_MIN;
int32_t x374 = INT32_MAX;
int64_t x377 = INT64_MIN;
uint16_t x383 = UINT16_MAX;
uint32_t x384 = 97217890U;
int64_t x388 = 1058474970247781LL;
static volatile int32_t t87 = 322742100;
int32_t x391 = INT32_MIN;
static volatile uint32_t x393 = 1U;
int16_t x395 = -1;
static int32_t x396 = INT32_MIN;
static int32_t t89 = 4;
int8_t x404 = -1;
volatile int32_t x409 = -13039852;
int32_t t94 = -5103;
int8_t x418 = INT8_MAX;
static int32_t x422 = -54514;
int16_t x425 = INT16_MAX;
uint16_t x426 = 3U;
int8_t x435 = -28;
int32_t x440 = INT32_MAX;
static int32_t t99 = -388;
int16_t x443 = INT16_MIN;
volatile uint32_t x444 = 30352170U;
int8_t x447 = -7;
int32_t t101 = -1692;
int32_t x451 = INT32_MIN;
uint64_t x454 = UINT64_MAX;
int32_t t104 = -255876;
int8_t x466 = 33;
int8_t x477 = -38;
volatile int32_t t107 = 3834;
int32_t t108 = -14;
int32_t x489 = INT32_MIN;
int32_t t109 = -892209672;
uint8_t x497 = 61U;
int8_t x502 = -56;
int8_t x506 = INT8_MIN;
int64_t x508 = INT64_MIN;
int64_t x510 = 2581LL;
int8_t x518 = INT8_MAX;
uint64_t x519 = 3LLU;
volatile int16_t x528 = INT16_MAX;
int32_t t118 = 612523568;
uint32_t x530 = 3614370U;
volatile int32_t t119 = 897493892;
volatile int8_t x535 = -1;
static int32_t x536 = INT32_MIN;
int64_t x537 = INT64_MIN;
static int64_t x539 = -1LL;
volatile int32_t t121 = -778497302;
int16_t x548 = -119;
int32_t t123 = 0;
uint16_t x550 = 32U;
static volatile int32_t t125 = -1;
volatile int32_t t126 = -310811;
int32_t t127 = 0;
int64_t x568 = -293454134LL;
volatile int32_t t128 = 157194;
int32_t x569 = INT32_MIN;
int16_t x575 = INT16_MIN;
int8_t x576 = INT8_MIN;
int32_t t131 = -12969360;
int16_t x592 = INT16_MIN;
int16_t x598 = INT16_MAX;
uint16_t x619 = 1U;
int8_t x625 = 2;
static int8_t x630 = 1;
int8_t x632 = -1;
volatile int8_t x644 = INT8_MAX;
int16_t x648 = 3773;
uint64_t x650 = 230195321811LLU;
static int16_t x655 = INT16_MIN;
int16_t x656 = INT16_MIN;
int64_t x657 = -1LL;
int64_t x661 = 125392823153634LL;
volatile int16_t x666 = -1;
int8_t x670 = -1;
int16_t x677 = INT16_MAX;
volatile int32_t t154 = 101207065;
static int8_t x681 = INT8_MIN;
volatile int16_t x682 = 1;
int8_t x684 = -5;
static int32_t t155 = 13750;
int64_t x690 = 12LL;
int8_t x691 = INT8_MIN;
volatile int32_t t159 = -101037;
uint32_t x706 = 233088U;
int64_t x709 = -1LL;
static uint8_t x710 = 104U;
int32_t x712 = 48183379;
volatile int32_t x723 = -1;
int64_t x727 = INT64_MAX;
uint64_t x729 = 6538392010223972214LLU;
int8_t x734 = -1;
static int32_t t166 = 0;
int32_t t167 = 84;
int64_t x742 = -27109616261803LL;
uint64_t x755 = 2LLU;
int8_t x757 = -1;
uint32_t x760 = UINT32_MAX;
int32_t t172 = 989;
static int64_t x767 = INT64_MIN;
int64_t x773 = 53521LL;
int64_t x778 = INT64_MIN;
volatile int32_t t176 = 210485705;
uint16_t x787 = 843U;
volatile int64_t x789 = -1LL;
int16_t x798 = -173;
volatile int32_t x799 = INT32_MIN;
volatile uint32_t x802 = 220890795U;
int8_t x805 = INT8_MIN;
int32_t x806 = -1;
volatile int32_t t183 = 0;
int64_t x814 = -66286949187816LL;
volatile int64_t x819 = -1LL;
static volatile uint16_t x824 = 1367U;
int64_t x840 = 11202425LL;
static volatile int32_t t190 = -3;
uint16_t x858 = UINT16_MAX;
int16_t x859 = -6;
int8_t x860 = INT8_MIN;
volatile int32_t x861 = INT32_MIN;
int64_t x863 = -26162363642754LL;
volatile int32_t x878 = INT32_MAX;
uint64_t x879 = 263283130LLU;
uint16_t x882 = 10U;
volatile int32_t x883 = -1;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int64_t x2 = INT64_MAX;
	static volatile int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = 149464;

    t0 = (x1!=((x2-x3)&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -1;
	static uint8_t x6 = UINT8_MAX;
	uint64_t x8 = 61549LLU;
	int32_t t1 = -1571932;

    t1 = (x5!=((x6-x7)&x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	static int32_t x10 = INT32_MIN;
	uint64_t x11 = UINT64_MAX;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 0;

    t2 = (x9!=((x10-x11)&x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	static uint8_t x14 = UINT8_MAX;
	uint64_t x15 = 11LLU;
	uint32_t x16 = 28833951U;
	volatile int32_t t3 = -7798;

    t3 = (x13!=((x14-x15)&x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint32_t x21 = UINT32_MAX;
	volatile int64_t x22 = -427614912LL;
	volatile int8_t x23 = 1;
	volatile uint32_t x24 = UINT32_MAX;
	int32_t t4 = -779;

    t4 = (x21!=((x22-x23)&x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x25 = 5647321218206819647LLU;
	int8_t x27 = INT8_MIN;
	static uint16_t x28 = 5293U;
	volatile int32_t t5 = 29729;

    t5 = (x25!=((x26-x27)&x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = 14;
	uint32_t x30 = 18042267U;
	uint8_t x31 = 1U;
	volatile uint8_t x32 = UINT8_MAX;
	int32_t t6 = 6;

    t6 = (x29!=((x30-x31)&x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = UINT32_MAX;
	int64_t x34 = 60330730738226249LL;
	volatile int16_t x35 = INT16_MIN;
	static uint8_t x36 = UINT8_MAX;

    t7 = (x33!=((x34-x35)&x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint8_t x37 = UINT8_MAX;
	uint64_t x38 = UINT64_MAX;
	int32_t x39 = 6568138;
	int64_t x40 = -1LL;
	static volatile int32_t t8 = 399122;

    t8 = (x37!=((x38-x39)&x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x41 = 16867510497155LL;
	uint8_t x42 = 3U;
	int32_t x43 = 530215913;
	int8_t x44 = -1;
	volatile int32_t t9 = 56;

    t9 = (x41!=((x42-x43)&x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MIN;
	static volatile int64_t x46 = INT64_MAX;
	int32_t x47 = 111854554;
	int8_t x48 = INT8_MIN;
	static volatile int32_t t10 = 47504;

    t10 = (x45!=((x46-x47)&x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x49 = 4120496611964352LL;
	static int64_t x50 = 279337873711143LL;
	uint32_t x51 = 917417606U;
	uint16_t x52 = UINT16_MAX;

    t11 = (x49!=((x50-x51)&x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x57 = 1U;
	int16_t x59 = -1;
	uint32_t x60 = 5833400U;
	volatile int32_t t12 = -42;

    t12 = (x57!=((x58-x59)&x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x61 = UINT16_MAX;
	volatile int32_t x64 = -58;
	int32_t t13 = 1397;

    t13 = (x61!=((x62-x63)&x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x65 = -1593242524205999LL;
	int64_t x66 = -1LL;
	int64_t x67 = -129081028102028551LL;
	int64_t x68 = INT64_MAX;
	static int32_t t14 = -15;

    t14 = (x65!=((x66-x67)&x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = INT32_MAX;
	uint32_t x70 = UINT32_MAX;
	uint8_t x71 = UINT8_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t15 = -2273134;

    t15 = (x69!=((x70-x71)&x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x73 = 45U;
	volatile int64_t x74 = -226LL;
	static int32_t x75 = -62009;
	int32_t x76 = INT32_MIN;

    t16 = (x73!=((x74-x75)&x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x77 = INT8_MIN;
	static int8_t x78 = 43;
	volatile uint16_t x79 = UINT16_MAX;
	uint32_t x80 = 1430937115U;
	static int32_t t17 = -10899;

    t17 = (x77!=((x78-x79)&x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x82 = UINT16_MAX;
	volatile int32_t x83 = INT32_MAX;
	volatile int64_t x84 = 848655LL;
	static volatile int32_t t18 = -7979;

    t18 = (x81!=((x82-x83)&x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x85 = 24235249U;
	static int64_t x86 = INT64_MIN;

    t19 = (x85!=((x86-x87)&x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = INT32_MIN;
	int8_t x90 = INT8_MAX;
	volatile int8_t x91 = -19;
	int16_t x92 = INT16_MAX;
	int32_t t20 = 746831212;

    t20 = (x89!=((x90-x91)&x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x93 = -323368;
	int8_t x96 = INT8_MIN;
	int32_t t21 = 1;

    t21 = (x93!=((x94-x95)&x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x101 = INT32_MIN;
	int64_t x103 = -128997121080539294LL;
	int16_t x104 = -1;
	int32_t t22 = 584;

    t22 = (x101!=((x102-x103)&x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x105 = -29;
	static int16_t x108 = INT16_MAX;

    t23 = (x105!=((x106-x107)&x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x111 = 16713358U;
	int32_t x112 = INT32_MIN;

    t24 = (x109!=((x110-x111)&x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x114 = -1LL;
	volatile int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MIN;

    t25 = (x113!=((x114-x115)&x116));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x117 = -1LL;
	uint8_t x118 = 1U;
	int8_t x119 = INT8_MAX;
	volatile int32_t t26 = 268312;

    t26 = (x117!=((x118-x119)&x120));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x121 = INT64_MAX;
	static int16_t x122 = -1;
	volatile int32_t x123 = -1;
	volatile uint64_t x124 = 1653846184807826LLU;
	int32_t t27 = 1;

    t27 = (x121!=((x122-x123)&x124));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x125 = INT8_MIN;
	int16_t x126 = 6;
	uint16_t x127 = 0U;
	uint64_t x128 = 465604221068306LLU;

    t28 = (x125!=((x126-x127)&x128));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x129 = -2;
	static int16_t x130 = INT16_MAX;
	uint8_t x131 = 0U;
	int8_t x132 = 3;
	int32_t t29 = -391256003;

    t29 = (x129!=((x130-x131)&x132));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x134 = -1;
	int8_t x135 = -19;
	volatile int32_t t30 = 238;

    t30 = (x133!=((x134-x135)&x136));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x141 = INT64_MAX;
	int8_t x142 = 57;
	int64_t x144 = -1LL;
	volatile int32_t t31 = 14787652;

    t31 = (x141!=((x142-x143)&x144));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x145 = INT16_MIN;
	uint64_t x146 = 184LLU;
	int8_t x147 = INT8_MAX;
	static int32_t x148 = -1;
	volatile int32_t t32 = 0;

    t32 = (x145!=((x146-x147)&x148));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x150 = INT32_MAX;
	uint16_t x151 = 94U;
	volatile int64_t x152 = -1LL;
	volatile int32_t t33 = 29563514;

    t33 = (x149!=((x150-x151)&x152));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x153 = 29638U;
	int64_t x154 = -1LL;
	volatile uint32_t x155 = 561861U;
	volatile int16_t x156 = -1;
	volatile int32_t t34 = 25;

    t34 = (x153!=((x154-x155)&x156));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x157 = 81U;
	int64_t x158 = INT64_MIN;
	static int32_t x159 = -136958;

    t35 = (x157!=((x158-x159)&x160));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x161 = -17;
	static int16_t x162 = -1;
	uint8_t x164 = 14U;
	int32_t t36 = 57417;

    t36 = (x161!=((x162-x163)&x164));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x165 = UINT32_MAX;
	uint64_t x166 = 8060670684827373651LLU;
	uint8_t x167 = UINT8_MAX;
	uint8_t x168 = 2U;
	volatile int32_t t37 = -1707;

    t37 = (x165!=((x166-x167)&x168));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x169 = 7;
	int16_t x171 = INT16_MIN;
	int8_t x172 = INT8_MIN;
	static int32_t t38 = 234;

    t38 = (x169!=((x170-x171)&x172));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x173 = INT8_MIN;
	volatile uint32_t x174 = 460U;
	uint8_t x175 = 8U;
	volatile int64_t x176 = -1LL;
	volatile int32_t t39 = 2;

    t39 = (x173!=((x174-x175)&x176));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x179 = -3;
	uint64_t x180 = UINT64_MAX;
	int32_t t40 = -990496595;

    t40 = (x177!=((x178-x179)&x180));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x181 = INT8_MIN;
	static volatile int16_t x182 = INT16_MIN;
	static volatile int16_t x183 = -331;
	uint64_t x184 = UINT64_MAX;
	int32_t t41 = 0;

    t41 = (x181!=((x182-x183)&x184));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x189 = UINT16_MAX;
	static volatile int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MIN;
	int32_t x192 = 40527724;
	volatile int32_t t42 = -198385;

    t42 = (x189!=((x190-x191)&x192));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x193 = UINT8_MAX;
	int8_t x195 = -1;
	int64_t x196 = INT64_MIN;
	int32_t t43 = 20286594;

    t43 = (x193!=((x194-x195)&x196));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x198 = -1;
	int8_t x199 = INT8_MIN;
	int32_t x200 = -1;
	int32_t t44 = -15;

    t44 = (x197!=((x198-x199)&x200));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x203 = INT8_MIN;
	volatile int64_t x204 = -14LL;
	volatile int32_t t45 = 516;

    t45 = (x201!=((x202-x203)&x204));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x210 = INT16_MIN;
	uint8_t x212 = 1U;
	static volatile int32_t t46 = 57789;

    t46 = (x209!=((x210-x211)&x212));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x213 = -1;
	static int8_t x215 = -1;
	static volatile int32_t t47 = -933171;

    t47 = (x213!=((x214-x215)&x216));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x226 = -2289LL;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t48 = 180915710;

    t48 = (x225!=((x226-x227)&x228));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x230 = INT8_MIN;
	uint32_t x231 = 1130793298U;
	volatile int32_t t49 = 114373;

    t49 = (x229!=((x230-x231)&x232));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x233 = INT16_MIN;
	int64_t x235 = 49672767317600LL;
	volatile uint8_t x236 = 48U;
	volatile int32_t t50 = -13985;

    t50 = (x233!=((x234-x235)&x236));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x237 = -1761;
	static int16_t x238 = -1;
	static int16_t x239 = -1;
	static int8_t x240 = -2;
	static volatile int32_t t51 = 1;

    t51 = (x237!=((x238-x239)&x240));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x241 = -1656;
	static uint16_t x242 = 769U;
	static uint8_t x243 = 0U;
	uint16_t x244 = 0U;

    t52 = (x241!=((x242-x243)&x244));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x245 = -670LL;
	static int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MIN;
	int32_t x248 = 197178;

    t53 = (x245!=((x246-x247)&x248));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x249 = -17;
	static int32_t x250 = -1;
	uint8_t x251 = UINT8_MAX;
	static int32_t x252 = -43406;
	int32_t t54 = -7848964;

    t54 = (x249!=((x250-x251)&x252));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x253 = -1;
	uint16_t x255 = UINT16_MAX;
	volatile uint16_t x256 = 1838U;
	int32_t t55 = -5327319;

    t55 = (x253!=((x254-x255)&x256));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x258 = INT16_MIN;
	int16_t x259 = -1;
	int8_t x260 = INT8_MIN;
	static int32_t t56 = 526210423;

    t56 = (x257!=((x258-x259)&x260));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x261 = INT8_MAX;
	static uint64_t x262 = UINT64_MAX;
	static uint32_t x264 = 3U;
	int32_t t57 = 17439;

    t57 = (x261!=((x262-x263)&x264));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x265 = UINT16_MAX;
	uint64_t x266 = UINT64_MAX;
	int32_t x267 = -1;
	uint16_t x268 = UINT16_MAX;
	static volatile int32_t t58 = -2;

    t58 = (x265!=((x266-x267)&x268));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x269 = 689179211004134296LLU;
	int32_t x271 = -1;
	int32_t x272 = -5;
	int32_t t59 = -204970119;

    t59 = (x269!=((x270-x271)&x272));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x273 = -1;
	volatile int32_t x275 = INT32_MAX;
	volatile int32_t t60 = 0;

    t60 = (x273!=((x274-x275)&x276));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x277 = -1813501339LL;
	int16_t x278 = -1;
	int8_t x279 = -16;
	int16_t x280 = INT16_MAX;

    t61 = (x277!=((x278-x279)&x280));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x281 = 0;
	int32_t x282 = -1;
	static int32_t x284 = -1;
	int32_t t62 = 297169;

    t62 = (x281!=((x282-x283)&x284));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x287 = -1;
	int32_t x288 = -1;
	volatile int32_t t63 = 3768976;

    t63 = (x285!=((x286-x287)&x288));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x289 = INT16_MIN;
	int16_t x290 = 1;
	int64_t x291 = INT64_MAX;
	static volatile int32_t t64 = 117146;

    t64 = (x289!=((x290-x291)&x292));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x293 = -63;
	volatile int8_t x294 = -13;
	static int8_t x295 = -1;
	uint8_t x296 = UINT8_MAX;
	int32_t t65 = 62407652;

    t65 = (x293!=((x294-x295)&x296));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x297 = -1;
	int64_t x298 = -1LL;
	int8_t x299 = INT8_MAX;
	uint16_t x300 = 2U;
	int32_t t66 = -31983892;

    t66 = (x297!=((x298-x299)&x300));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x301 = -2809;
	uint64_t x302 = 56129796LLU;
	int8_t x303 = INT8_MAX;

    t67 = (x301!=((x302-x303)&x304));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MIN;
	int8_t x307 = -3;
	uint16_t x308 = UINT16_MAX;
	int32_t t68 = -440678;

    t68 = (x305!=((x306-x307)&x308));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x309 = 60U;
	volatile int64_t x310 = -1LL;
	int64_t x311 = INT64_MIN;

    t69 = (x309!=((x310-x311)&x312));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x313 = -1;
	int32_t x315 = INT32_MIN;
	static volatile int32_t x316 = -1;

    t70 = (x313!=((x314-x315)&x316));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x317 = UINT64_MAX;
	int16_t x318 = -1;
	static volatile uint16_t x319 = 2041U;
	int8_t x320 = INT8_MIN;
	int32_t t71 = 14634018;

    t71 = (x317!=((x318-x319)&x320));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x322 = 6282513U;
	volatile int64_t x324 = -6610LL;
	volatile int32_t t72 = -32126;

    t72 = (x321!=((x322-x323)&x324));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x329 = -1;
	static int64_t x330 = -65372913LL;
	int8_t x332 = 0;
	volatile int32_t t73 = -4694739;

    t73 = (x329!=((x330-x331)&x332));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x333 = INT64_MIN;
	volatile int16_t x334 = 1;
	static uint64_t x335 = UINT64_MAX;
	int32_t x336 = INT32_MAX;
	volatile int32_t t74 = 996706;

    t74 = (x333!=((x334-x335)&x336));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x337 = INT16_MAX;
	static int8_t x338 = -1;
	uint16_t x339 = 202U;
	int64_t x340 = 4223500897545LL;

    t75 = (x337!=((x338-x339)&x340));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x341 = 1004LLU;
	uint8_t x342 = UINT8_MAX;
	volatile uint64_t x344 = 4227218171521417LLU;
	int32_t t76 = 2028;

    t76 = (x341!=((x342-x343)&x344));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x345 = -1LL;
	volatile int32_t t77 = 6975714;

    t77 = (x345!=((x346-x347)&x348));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x349 = INT32_MAX;
	uint8_t x350 = 20U;
	int8_t x352 = 13;

    t78 = (x349!=((x350-x351)&x352));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x353 = UINT64_MAX;
	int64_t x354 = INT64_MIN;
	uint16_t x356 = UINT16_MAX;
	int32_t t79 = 356615027;

    t79 = (x353!=((x354-x355)&x356));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x359 = UINT16_MAX;

    t80 = (x357!=((x358-x359)&x360));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x362 = INT32_MAX;
	uint8_t x363 = UINT8_MAX;
	static int16_t x364 = INT16_MAX;
	volatile int32_t t81 = -217598;

    t81 = (x361!=((x362-x363)&x364));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x365 = INT64_MAX;
	int8_t x366 = INT8_MIN;
	volatile int16_t x367 = -1;
	int64_t x368 = INT64_MIN;
	volatile int32_t t82 = 4044;

    t82 = (x365!=((x366-x367)&x368));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x369 = -6476;
	int8_t x370 = INT8_MIN;
	int32_t x372 = INT32_MIN;
	int32_t t83 = 2670;

    t83 = (x369!=((x370-x371)&x372));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x375 = 238327140762LLU;
	int16_t x376 = -56;
	static volatile int32_t t84 = 758358381;

    t84 = (x373!=((x374-x375)&x376));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x378 = -1LL;
	int16_t x379 = 83;
	int8_t x380 = -8;
	int32_t t85 = -1;

    t85 = (x377!=((x378-x379)&x380));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x381 = 6;
	int64_t x382 = 14346915313201204LL;
	int32_t t86 = 155176;

    t86 = (x381!=((x382-x383)&x384));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x385 = INT8_MAX;
	static uint8_t x386 = 11U;
	volatile int64_t x387 = 1604LL;

    t87 = (x385!=((x386-x387)&x388));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x389 = -38;
	volatile int8_t x390 = -5;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t88 = -1496837;

    t88 = (x389!=((x390-x391)&x392));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x394 = 0LLU;

    t89 = (x393!=((x394-x395)&x396));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x397 = -1LL;
	int8_t x398 = 2;
	int32_t x399 = -11580;
	volatile int8_t x400 = -1;
	volatile int32_t t90 = -239792;

    t90 = (x397!=((x398-x399)&x400));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x401 = INT32_MIN;
	uint32_t x402 = 463674753U;
	static int32_t x403 = INT32_MIN;
	int32_t t91 = -155458;

    t91 = (x401!=((x402-x403)&x404));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x405 = INT64_MIN;
	int32_t x406 = 21156;
	uint8_t x407 = 10U;
	uint8_t x408 = 32U;
	volatile int32_t t92 = 15340434;

    t92 = (x405!=((x406-x407)&x408));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x410 = -1;
	uint8_t x411 = UINT8_MAX;
	uint8_t x412 = 7U;
	volatile int32_t t93 = -8113384;

    t93 = (x409!=((x410-x411)&x412));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x413 = -224672600LL;
	int8_t x414 = INT8_MIN;
	uint8_t x415 = 114U;
	static int64_t x416 = -1LL;

    t94 = (x413!=((x414-x415)&x416));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x417 = -1;
	int32_t x419 = -63701;
	static int16_t x420 = INT16_MIN;
	int32_t t95 = 12412;

    t95 = (x417!=((x418-x419)&x420));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x421 = UINT8_MAX;
	uint8_t x423 = 0U;
	uint64_t x424 = UINT64_MAX;
	int32_t t96 = 4334;

    t96 = (x421!=((x422-x423)&x424));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint8_t x427 = 1U;
	int32_t x428 = INT32_MAX;
	static int32_t t97 = -2;

    t97 = (x425!=((x426-x427)&x428));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x433 = 4U;
	static volatile int8_t x434 = INT8_MIN;
	int8_t x436 = -1;
	static int32_t t98 = 137;

    t98 = (x433!=((x434-x435)&x436));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x437 = 21;
	int8_t x438 = INT8_MIN;
	volatile int16_t x439 = -1;

    t99 = (x437!=((x438-x439)&x440));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x441 = 22U;
	static int64_t x442 = INT64_MIN;
	int32_t t100 = -5471364;

    t100 = (x441!=((x442-x443)&x444));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x445 = 14240U;
	int64_t x446 = -1LL;
	uint16_t x448 = UINT16_MAX;

    t101 = (x445!=((x446-x447)&x448));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x449 = UINT8_MAX;
	uint64_t x450 = 45758073LLU;
	static volatile uint64_t x452 = 69001362589643730LLU;
	volatile int32_t t102 = -15;

    t102 = (x449!=((x450-x451)&x452));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x453 = -1;
	volatile int32_t x455 = INT32_MIN;
	volatile uint16_t x456 = 10183U;
	int32_t t103 = -1;

    t103 = (x453!=((x454-x455)&x456));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x457 = INT64_MAX;
	static int32_t x458 = INT32_MAX;
	int8_t x459 = 7;
	uint16_t x460 = 2176U;

    t104 = (x457!=((x458-x459)&x460));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x465 = -1;
	uint64_t x467 = UINT64_MAX;
	int16_t x468 = 3;
	static volatile int32_t t105 = -1739;

    t105 = (x465!=((x466-x467)&x468));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x469 = INT8_MIN;
	int64_t x470 = 1LL;
	volatile int32_t x471 = -2314;
	uint32_t x472 = 1U;
	int32_t t106 = 106436749;

    t106 = (x469!=((x470-x471)&x472));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x478 = UINT8_MAX;
	uint32_t x479 = UINT32_MAX;
	uint64_t x480 = 431687LLU;

    t107 = (x477!=((x478-x479)&x480));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint32_t x481 = 819541U;
	uint64_t x482 = 28077636936450LLU;
	int16_t x483 = INT16_MIN;
	volatile int64_t x484 = INT64_MIN;

    t108 = (x481!=((x482-x483)&x484));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x490 = INT32_MIN;
	int32_t x491 = INT32_MIN;
	int16_t x492 = INT16_MIN;

    t109 = (x489!=((x490-x491)&x492));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x493 = INT8_MAX;
	volatile int8_t x494 = INT8_MAX;
	volatile int8_t x495 = INT8_MAX;
	volatile int8_t x496 = INT8_MAX;
	int32_t t110 = -15;

    t110 = (x493!=((x494-x495)&x496));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x498 = INT32_MIN;
	int8_t x499 = INT8_MIN;
	volatile uint64_t x500 = UINT64_MAX;
	static int32_t t111 = -42512291;

    t111 = (x497!=((x498-x499)&x500));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x501 = 4040LLU;
	static int16_t x503 = -1;
	static int8_t x504 = INT8_MIN;
	volatile int32_t t112 = -119872569;

    t112 = (x501!=((x502-x503)&x504));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x505 = 1963U;
	int64_t x507 = -1LL;
	volatile int32_t t113 = 6735457;

    t113 = (x505!=((x506-x507)&x508));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x509 = 1514U;
	uint64_t x511 = 77954969030331LLU;
	uint8_t x512 = 1U;
	int32_t t114 = 5597474;

    t114 = (x509!=((x510-x511)&x512));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x513 = INT8_MIN;
	uint64_t x514 = 57919106824050742LLU;
	int16_t x515 = INT16_MAX;
	int64_t x516 = INT64_MAX;
	volatile int32_t t115 = -235;

    t115 = (x513!=((x514-x515)&x516));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x517 = -1;
	volatile int32_t x520 = -1;
	volatile int32_t t116 = 13630165;

    t116 = (x517!=((x518-x519)&x520));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x521 = INT8_MIN;
	uint8_t x522 = 11U;
	int32_t x523 = -1;
	int16_t x524 = -1;
	static volatile int32_t t117 = -24;

    t117 = (x521!=((x522-x523)&x524));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x525 = 836891434121LLU;
	volatile int8_t x526 = INT8_MIN;
	static uint8_t x527 = 12U;

    t118 = (x525!=((x526-x527)&x528));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint8_t x529 = 0U;
	int8_t x531 = INT8_MIN;
	uint8_t x532 = 24U;

    t119 = (x529!=((x530-x531)&x532));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x533 = -1;
	uint32_t x534 = UINT32_MAX;
	static volatile int32_t t120 = -3783027;

    t120 = (x533!=((x534-x535)&x536));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x538 = -1;
	int32_t x540 = 0;

    t121 = (x537!=((x538-x539)&x540));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x541 = UINT64_MAX;
	int8_t x542 = INT8_MAX;
	static int8_t x543 = 15;
	uint32_t x544 = 56215348U;
	int32_t t122 = 2;

    t122 = (x541!=((x542-x543)&x544));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x545 = 69U;
	volatile uint32_t x546 = UINT32_MAX;
	int16_t x547 = INT16_MIN;

    t123 = (x545!=((x546-x547)&x548));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x549 = -1LL;
	uint32_t x551 = 35547U;
	static int32_t x552 = INT32_MIN;
	int32_t t124 = -215;

    t124 = (x549!=((x550-x551)&x552));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x553 = UINT8_MAX;
	volatile uint64_t x554 = UINT64_MAX;
	volatile int16_t x555 = -1;
	int64_t x556 = INT64_MIN;

    t125 = (x553!=((x554-x555)&x556));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x557 = 1U;
	volatile int32_t x558 = -955729;
	volatile int32_t x559 = INT32_MIN;
	uint64_t x560 = UINT64_MAX;

    t126 = (x557!=((x558-x559)&x560));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x561 = -1;
	int16_t x562 = 679;
	int16_t x563 = INT16_MIN;
	volatile uint8_t x564 = UINT8_MAX;

    t127 = (x561!=((x562-x563)&x564));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x565 = 156234;
	int32_t x566 = INT32_MAX;
	uint32_t x567 = 306U;

    t128 = (x565!=((x566-x567)&x568));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x570 = 203620271LLU;
	uint32_t x571 = UINT32_MAX;
	int8_t x572 = INT8_MIN;
	static int32_t t129 = 2361;

    t129 = (x569!=((x570-x571)&x572));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x573 = 356430811101485906LLU;
	static int8_t x574 = INT8_MAX;
	volatile int32_t t130 = -51;

    t130 = (x573!=((x574-x575)&x576));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x577 = -1LL;
	volatile int16_t x578 = -1;
	volatile int16_t x579 = INT16_MIN;
	volatile int64_t x580 = INT64_MAX;

    t131 = (x577!=((x578-x579)&x580));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x581 = -412;
	uint16_t x582 = 1358U;
	int16_t x583 = INT16_MIN;
	int64_t x584 = -64054875LL;
	static int32_t t132 = -612783687;

    t132 = (x581!=((x582-x583)&x584));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x585 = INT8_MAX;
	volatile uint32_t x586 = 190088072U;
	int32_t x587 = INT32_MIN;
	uint32_t x588 = 63352U;
	volatile int32_t t133 = 1022;

    t133 = (x585!=((x586-x587)&x588));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x589 = -1;
	int16_t x590 = 2;
	uint32_t x591 = 851902U;
	int32_t t134 = -34133;

    t134 = (x589!=((x590-x591)&x592));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x597 = UINT8_MAX;
	static int8_t x599 = -1;
	volatile int16_t x600 = INT16_MAX;
	static int32_t t135 = -305851720;

    t135 = (x597!=((x598-x599)&x600));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x601 = -5394199876956LL;
	int32_t x602 = 26782370;
	int8_t x603 = INT8_MAX;
	volatile int16_t x604 = -1;
	static volatile int32_t t136 = 1742;

    t136 = (x601!=((x602-x603)&x604));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x605 = -1;
	uint8_t x606 = UINT8_MAX;
	int64_t x607 = -5951099501LL;
	int32_t x608 = INT32_MAX;
	volatile int32_t t137 = 36187813;

    t137 = (x605!=((x606-x607)&x608));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x613 = 51U;
	int8_t x614 = 4;
	int16_t x615 = 26;
	uint32_t x616 = UINT32_MAX;
	volatile int32_t t138 = -796;

    t138 = (x613!=((x614-x615)&x616));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x617 = UINT64_MAX;
	int16_t x618 = -1;
	static int32_t x620 = 1325;
	volatile int32_t t139 = -42029434;

    t139 = (x617!=((x618-x619)&x620));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x621 = UINT32_MAX;
	static int64_t x622 = INT64_MIN;
	uint64_t x623 = 50653677430188LLU;
	uint64_t x624 = 675213504LLU;
	int32_t t140 = 20669;

    t140 = (x621!=((x622-x623)&x624));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x626 = 113298002881758LL;
	static uint8_t x627 = 24U;
	int8_t x628 = 4;
	volatile int32_t t141 = 31;

    t141 = (x625!=((x626-x627)&x628));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x629 = -1;
	volatile int32_t x631 = 2996;
	volatile int32_t t142 = 1274309;

    t142 = (x629!=((x630-x631)&x632));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x633 = -14136;
	volatile int16_t x634 = INT16_MIN;
	uint8_t x635 = 2U;
	static uint64_t x636 = 25752377868202487LLU;
	int32_t t143 = -9869958;

    t143 = (x633!=((x634-x635)&x636));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x637 = INT64_MAX;
	int32_t x638 = INT32_MIN;
	static int16_t x639 = -1;
	static volatile uint64_t x640 = 700722685LLU;
	int32_t t144 = -1333016;

    t144 = (x637!=((x638-x639)&x640));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x641 = 1U;
	int32_t x642 = -78756;
	volatile int32_t x643 = -2679;
	static int32_t t145 = -404;

    t145 = (x641!=((x642-x643)&x644));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x645 = -161392456;
	volatile int8_t x646 = INT8_MIN;
	static volatile int64_t x647 = INT64_MIN;
	int32_t t146 = -301;

    t146 = (x645!=((x646-x647)&x648));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x649 = -1LL;
	int16_t x651 = INT16_MAX;
	static volatile int32_t x652 = -67;
	static int32_t t147 = -1;

    t147 = (x649!=((x650-x651)&x652));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x653 = UINT32_MAX;
	uint64_t x654 = 1264994LLU;
	volatile int32_t t148 = 281667179;

    t148 = (x653!=((x654-x655)&x656));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x658 = INT8_MIN;
	volatile int16_t x659 = 2298;
	uint32_t x660 = 1230U;
	int32_t t149 = 14;

    t149 = (x657!=((x658-x659)&x660));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x662 = UINT64_MAX;
	static uint32_t x663 = 406459835U;
	volatile int8_t x664 = -1;
	int32_t t150 = 217753295;

    t150 = (x661!=((x662-x663)&x664));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x665 = -5231310;
	int64_t x667 = INT64_MIN;
	volatile int64_t x668 = 76998495741LL;
	volatile int32_t t151 = 5937;

    t151 = (x665!=((x666-x667)&x668));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x669 = 895U;
	volatile uint8_t x671 = 8U;
	int8_t x672 = INT8_MIN;
	volatile int32_t t152 = -124;

    t152 = (x669!=((x670-x671)&x672));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x673 = -1;
	volatile int32_t x674 = -2;
	int32_t x675 = -24;
	int8_t x676 = INT8_MAX;
	volatile int32_t t153 = 480349791;

    t153 = (x673!=((x674-x675)&x676));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x678 = UINT32_MAX;
	static uint16_t x679 = 54U;
	int16_t x680 = INT16_MIN;

    t154 = (x677!=((x678-x679)&x680));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x683 = INT8_MIN;

    t155 = (x681!=((x682-x683)&x684));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x685 = INT32_MIN;
	int16_t x686 = -219;
	int64_t x687 = INT64_MIN;
	int8_t x688 = INT8_MIN;
	int32_t t156 = 2;

    t156 = (x685!=((x686-x687)&x688));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x689 = 9191669968LLU;
	volatile uint16_t x692 = 13282U;
	static int32_t t157 = -267224;

    t157 = (x689!=((x690-x691)&x692));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x693 = 1;
	volatile int64_t x694 = INT64_MAX;
	uint16_t x695 = 1118U;
	static int8_t x696 = -1;
	volatile int32_t t158 = -3;

    t158 = (x693!=((x694-x695)&x696));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x697 = -1;
	static int64_t x698 = INT64_MIN;
	int8_t x699 = -2;
	uint8_t x700 = 38U;

    t159 = (x697!=((x698-x699)&x700));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x705 = 2881U;
	int16_t x707 = -1;
	uint16_t x708 = UINT16_MAX;
	int32_t t160 = 28261111;

    t160 = (x705!=((x706-x707)&x708));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x711 = 3214;
	volatile int32_t t161 = 828;

    t161 = (x709!=((x710-x711)&x712));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x717 = UINT16_MAX;
	int16_t x718 = INT16_MIN;
	uint16_t x719 = 1U;
	int64_t x720 = INT64_MIN;
	volatile int32_t t162 = -49597;

    t162 = (x717!=((x718-x719)&x720));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x721 = 16611859LLU;
	static uint8_t x722 = 0U;
	int32_t x724 = INT32_MIN;
	static volatile int32_t t163 = -17598932;

    t163 = (x721!=((x722-x723)&x724));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x725 = -46185LL;
	static volatile uint8_t x726 = UINT8_MAX;
	volatile int32_t x728 = -694;
	int32_t t164 = -25949;

    t164 = (x725!=((x726-x727)&x728));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x730 = -31499;
	uint8_t x731 = UINT8_MAX;
	volatile int64_t x732 = INT64_MAX;
	int32_t t165 = -17083979;

    t165 = (x729!=((x730-x731)&x732));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x733 = 426;
	int32_t x735 = -1;
	uint32_t x736 = 933U;

    t166 = (x733!=((x734-x735)&x736));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x737 = -1;
	int16_t x738 = INT16_MIN;
	int64_t x739 = -9LL;
	int16_t x740 = 1;

    t167 = (x737!=((x738-x739)&x740));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x741 = 5729;
	static uint32_t x743 = UINT32_MAX;
	int16_t x744 = INT16_MIN;
	int32_t t168 = 3163;

    t168 = (x741!=((x742-x743)&x744));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x745 = 11;
	int64_t x746 = INT64_MAX;
	int64_t x747 = 148608LL;
	int64_t x748 = -1LL;
	int32_t t169 = -50;

    t169 = (x745!=((x746-x747)&x748));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x749 = INT16_MAX;
	static int32_t x750 = -3792738;
	int16_t x751 = -1;
	static int64_t x752 = INT64_MIN;
	volatile int32_t t170 = 58000929;

    t170 = (x749!=((x750-x751)&x752));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int8_t x753 = -1;
	int64_t x754 = -1LL;
	volatile uint16_t x756 = 7U;
	volatile int32_t t171 = 1011223492;

    t171 = (x753!=((x754-x755)&x756));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x758 = UINT64_MAX;
	uint16_t x759 = 53U;

    t172 = (x757!=((x758-x759)&x760));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x765 = INT32_MAX;
	int8_t x766 = INT8_MIN;
	uint32_t x768 = UINT32_MAX;
	volatile int32_t t173 = 23;

    t173 = (x765!=((x766-x767)&x768));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x769 = INT8_MIN;
	uint32_t x770 = 84908U;
	volatile int16_t x771 = INT16_MAX;
	int64_t x772 = -24602247525667LL;
	int32_t t174 = 149336277;

    t174 = (x769!=((x770-x771)&x772));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x774 = -27;
	int16_t x775 = INT16_MAX;
	int32_t x776 = 91;
	static int32_t t175 = 808038079;

    t175 = (x773!=((x774-x775)&x776));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x777 = INT64_MAX;
	int8_t x779 = -1;
	int16_t x780 = INT16_MIN;

    t176 = (x777!=((x778-x779)&x780));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x781 = -1;
	int8_t x782 = INT8_MIN;
	volatile uint8_t x783 = 21U;
	int64_t x784 = -1LL;
	static volatile int32_t t177 = 426;

    t177 = (x781!=((x782-x783)&x784));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x785 = 2260804807614770LLU;
	int8_t x786 = -1;
	volatile int16_t x788 = -12950;
	int32_t t178 = 3177278;

    t178 = (x785!=((x786-x787)&x788));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x790 = -842;
	static int16_t x791 = -1;
	uint8_t x792 = 76U;
	static int32_t t179 = -5496178;

    t179 = (x789!=((x790-x791)&x792));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x793 = 1LL;
	volatile uint64_t x794 = 24102209146507LLU;
	int64_t x795 = INT64_MAX;
	int64_t x796 = -1LL;
	int32_t t180 = 1;

    t180 = (x793!=((x794-x795)&x796));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x797 = INT8_MAX;
	uint8_t x800 = 42U;
	int32_t t181 = 12;

    t181 = (x797!=((x798-x799)&x800));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x801 = 1U;
	int64_t x803 = INT64_MAX;
	volatile int16_t x804 = 2;
	static int32_t t182 = -8;

    t182 = (x801!=((x802-x803)&x804));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x807 = -1LL;
	uint16_t x808 = UINT16_MAX;

    t183 = (x805!=((x806-x807)&x808));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x809 = INT64_MIN;
	uint16_t x810 = 21U;
	volatile uint8_t x811 = 0U;
	static int32_t x812 = 1006707;
	int32_t t184 = -1661154;

    t184 = (x809!=((x810-x811)&x812));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x813 = INT64_MAX;
	volatile int16_t x815 = 362;
	volatile int64_t x816 = INT64_MIN;
	volatile int32_t t185 = 742;

    t185 = (x813!=((x814-x815)&x816));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x817 = INT64_MIN;
	int16_t x818 = INT16_MAX;
	int8_t x820 = -9;
	volatile int32_t t186 = -31617641;

    t186 = (x817!=((x818-x819)&x820));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x821 = INT16_MAX;
	int32_t x822 = -1;
	int8_t x823 = INT8_MIN;
	volatile int32_t t187 = -20407;

    t187 = (x821!=((x822-x823)&x824));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x825 = INT16_MIN;
	int64_t x826 = 1323828772047866160LL;
	int16_t x827 = 0;
	static int64_t x828 = 109416097766LL;
	int32_t t188 = -197370;

    t188 = (x825!=((x826-x827)&x828));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x833 = 0U;
	int16_t x834 = INT16_MIN;
	static int8_t x835 = 20;
	int64_t x836 = INT64_MIN;
	int32_t t189 = 237499;

    t189 = (x833!=((x834-x835)&x836));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x837 = UINT16_MAX;
	int8_t x838 = INT8_MAX;
	volatile uint16_t x839 = 423U;

    t190 = (x837!=((x838-x839)&x840));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x841 = INT64_MAX;
	uint8_t x842 = UINT8_MAX;
	volatile int64_t x843 = -1LL;
	int8_t x844 = 0;
	volatile int32_t t191 = 2191;

    t191 = (x841!=((x842-x843)&x844));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x845 = 15U;
	static uint8_t x846 = 40U;
	volatile uint64_t x847 = UINT64_MAX;
	int16_t x848 = INT16_MAX;
	volatile int32_t t192 = -360384185;

    t192 = (x845!=((x846-x847)&x848));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x849 = INT32_MAX;
	int64_t x850 = INT64_MIN;
	volatile int8_t x851 = INT8_MIN;
	static int64_t x852 = -841LL;
	volatile int32_t t193 = -266420;

    t193 = (x849!=((x850-x851)&x852));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x857 = UINT16_MAX;
	static volatile int32_t t194 = -253315;

    t194 = (x857!=((x858-x859)&x860));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x862 = 4U;
	int64_t x864 = INT64_MAX;
	int32_t t195 = 1225859;

    t195 = (x861!=((x862-x863)&x864));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x869 = INT32_MAX;
	uint8_t x870 = UINT8_MAX;
	uint64_t x871 = 359282366LLU;
	uint64_t x872 = 153010263866855541LLU;
	volatile int32_t t196 = -3913;

    t196 = (x869!=((x870-x871)&x872));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x873 = 11376767840404LLU;
	uint64_t x874 = 1639099435229620377LLU;
	int32_t x875 = INT32_MAX;
	int32_t x876 = INT32_MIN;
	int32_t t197 = 73880796;

    t197 = (x873!=((x874-x875)&x876));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x877 = INT64_MIN;
	static volatile uint8_t x880 = 0U;
	int32_t t198 = -813367;

    t198 = (x877!=((x878-x879)&x880));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x881 = UINT16_MAX;
	int64_t x884 = -1LL;
	volatile int32_t t199 = 0;

    t199 = (x881!=((x882-x883)&x884));

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

