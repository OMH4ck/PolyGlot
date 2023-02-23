
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

int8_t x2 = -3;
uint8_t x3 = UINT8_MAX;
uint64_t x4 = 24LLU;
volatile int32_t t1 = 5070116;
volatile uint64_t x10 = UINT64_MAX;
uint32_t x17 = 1U;
uint16_t x19 = 5098U;
uint64_t x20 = 35800410547894441LLU;
int8_t x22 = INT8_MIN;
volatile int64_t x23 = INT64_MIN;
uint8_t x27 = 2U;
volatile int8_t x39 = 0;
uint8_t x49 = UINT8_MAX;
static int64_t x54 = -1586862167707697108LL;
volatile int32_t x56 = -1;
int8_t x58 = INT8_MAX;
uint8_t x68 = UINT8_MAX;
volatile uint32_t x71 = UINT32_MAX;
uint16_t x72 = 29976U;
static int64_t x76 = -1LL;
int16_t x84 = -1;
static int16_t x105 = INT16_MAX;
int8_t x106 = INT8_MAX;
int32_t x111 = INT32_MAX;
int32_t x112 = INT32_MAX;
volatile int32_t t23 = -8282344;
int64_t x118 = -1LL;
int32_t t24 = 196730295;
static int16_t x125 = 6;
static volatile uint8_t x133 = 29U;
int16_t x134 = 7;
static volatile uint8_t x135 = 0U;
static int16_t x143 = INT16_MAX;
volatile int32_t t31 = 260934;
uint32_t x167 = 51U;
volatile int64_t x170 = -1LL;
static uint32_t x174 = 236775U;
int16_t x180 = INT16_MAX;
static uint8_t x187 = 62U;
int32_t x197 = INT32_MIN;
static uint64_t x201 = 259431LLU;
static int8_t x204 = -11;
int8_t x205 = INT8_MIN;
volatile int8_t x213 = 5;
uint16_t x216 = UINT16_MAX;
uint32_t x217 = 1549241U;
volatile int32_t t47 = 688941663;
int16_t x229 = INT16_MIN;
static volatile int16_t x232 = INT16_MIN;
volatile int32_t t49 = -400886;
static uint8_t x238 = UINT8_MAX;
volatile uint64_t x245 = UINT64_MAX;
volatile int32_t t52 = 514;
static uint64_t x251 = UINT64_MAX;
static int16_t x261 = INT16_MAX;
static int8_t x263 = INT8_MAX;
static int64_t x266 = -1LL;
int64_t x267 = INT64_MAX;
volatile uint16_t x282 = UINT16_MAX;
int8_t x294 = INT8_MIN;
uint16_t x307 = 103U;
int32_t t63 = -1;
static uint8_t x310 = 48U;
int32_t t64 = -254052262;
int32_t x313 = -1;
int32_t x326 = INT32_MAX;
int32_t t68 = -816948;
static int8_t x332 = -1;
int8_t x336 = -1;
uint8_t x337 = 103U;
int16_t x338 = INT16_MIN;
volatile uint8_t x339 = UINT8_MAX;
static uint64_t x340 = UINT64_MAX;
volatile int32_t t71 = 4;
volatile int32_t t72 = -2585;
static int32_t t73 = 36240;
int8_t x358 = -38;
uint16_t x359 = UINT16_MAX;
uint16_t x360 = 1U;
uint32_t x363 = 14U;
static volatile uint32_t x366 = 3U;
static int8_t x368 = INT8_MAX;
uint32_t x379 = 20669350U;
static volatile int32_t t79 = 1109;
uint32_t x405 = 954882300U;
static volatile int32_t t83 = 1367847;
int32_t x420 = -31321175;
int32_t t88 = -3477;
int32_t t89 = 287891;
uint64_t x439 = 655640397221896LLU;
int64_t x453 = -1LL;
int64_t x461 = INT64_MAX;
int8_t x464 = 17;
static int16_t x469 = 0;
int32_t x471 = 9;
uint16_t x472 = 7U;
volatile int32_t t94 = 53;
int32_t x475 = INT32_MAX;
static uint16_t x490 = 1096U;
uint16_t x491 = 3U;
int32_t t100 = -31021;
volatile int8_t x501 = -1;
uint64_t x502 = 12366595937585550LLU;
static volatile uint32_t x503 = UINT32_MAX;
uint32_t x505 = 974479321U;
int16_t x507 = INT16_MAX;
volatile int32_t t104 = 1;
static int32_t t105 = -150145987;
uint32_t x522 = 647016586U;
int32_t t106 = 206827;
uint16_t x525 = UINT16_MAX;
int64_t x528 = -1LL;
static uint64_t x548 = UINT64_MAX;
int32_t x552 = INT32_MAX;
volatile int32_t t111 = 17441748;
int64_t x558 = INT64_MIN;
int16_t x560 = INT16_MAX;
int8_t x566 = -1;
volatile int32_t t114 = 4;
volatile int32_t x569 = -42;
uint16_t x577 = 20U;
volatile int32_t t117 = 27294534;
int32_t x582 = -58;
int64_t x602 = -3LL;
int16_t x614 = -1097;
int8_t x616 = -1;
int32_t t125 = -328253;
int8_t x617 = INT8_MIN;
static volatile int16_t x619 = -2926;
volatile uint16_t x628 = 6513U;
volatile int32_t t130 = -22;
volatile uint16_t x654 = 28090U;
uint8_t x656 = 12U;
volatile int32_t t135 = -15;
volatile int16_t x669 = INT16_MAX;
volatile int8_t x678 = INT8_MIN;
volatile int32_t t139 = -435;
int64_t x689 = INT64_MAX;
uint16_t x703 = 4806U;
int32_t t142 = 87653616;
static int8_t x707 = 32;
volatile int32_t x709 = -1;
int64_t x712 = INT64_MIN;
int8_t x713 = -11;
static volatile int32_t t145 = 13795;
volatile int64_t x726 = -1LL;
uint16_t x728 = 15652U;
static int64_t x729 = -1LL;
uint8_t x734 = UINT8_MAX;
int32_t t150 = -41;
static int64_t x738 = 9223462983784LL;
static uint16_t x740 = 2018U;
volatile int32_t t152 = 0;
uint64_t x749 = 48748863993008LLU;
static uint8_t x752 = 1U;
volatile int32_t t155 = -278630309;
int32_t x766 = -304070246;
volatile uint8_t x767 = 1U;
static int16_t x768 = -1;
uint16_t x769 = UINT16_MAX;
int16_t x770 = INT16_MIN;
volatile int64_t x778 = INT64_MIN;
int8_t x783 = INT8_MIN;
static uint32_t x786 = UINT32_MAX;
int16_t x787 = INT16_MAX;
int16_t x790 = INT16_MAX;
int16_t x792 = INT16_MIN;
uint8_t x794 = 10U;
int8_t x795 = INT8_MIN;
int32_t t164 = 2139;
static volatile uint32_t x816 = 1617U;
int32_t t167 = 763920289;
static volatile int32_t t168 = 31842931;
volatile int32_t t170 = -1027849262;
int16_t x843 = 24;
int32_t t171 = -799824;
int8_t x848 = -1;
uint16_t x854 = UINT16_MAX;
volatile int32_t t174 = -389018645;
int8_t x866 = INT8_MIN;
int16_t x870 = INT16_MIN;
int16_t x871 = INT16_MIN;
int64_t x872 = -1LL;
int64_t x878 = 183881865942LL;
int16_t x880 = INT16_MIN;
int32_t x881 = 27;
int8_t x885 = -1;
int16_t x898 = 2361;
volatile int16_t x904 = 286;
volatile uint32_t x910 = 29U;
uint64_t x919 = UINT64_MAX;
int16_t x927 = INT16_MIN;
int64_t x937 = -14224791173584948LL;
int64_t x939 = -2LL;
volatile int32_t t191 = 37810;
static volatile int32_t x944 = INT32_MIN;
int8_t x953 = -2;
uint16_t x956 = UINT16_MAX;
uint8_t x958 = 14U;
volatile int16_t x959 = -1;
static uint32_t x965 = 557202378U;
int32_t t197 = -227;
volatile int32_t t198 = -115560530;
int8_t x973 = 11;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	static volatile int32_t t0 = -2;

    t0 = (x1==((x2-x3)+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -7589;
	volatile int16_t x6 = INT16_MAX;
	uint16_t x7 = 23194U;
	int16_t x8 = INT16_MIN;

    t1 = (x5==((x6-x7)+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 1370879444U;
	int32_t x11 = INT32_MIN;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 863036;

    t2 = (x9==((x10-x11)+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	int8_t x14 = INT8_MIN;
	int16_t x15 = -4494;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = 796339;

    t3 = (x13==((x14-x15)+x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = UINT64_MAX;
	int32_t t4 = 1854;

    t4 = (x17==((x18-x19)+x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = INT8_MIN;
	int16_t x24 = -1;
	volatile int32_t t5 = 950928966;

    t5 = (x21==((x22-x23)+x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = -1LL;
	uint64_t x26 = 3352LLU;
	uint16_t x28 = 10U;
	volatile int32_t t6 = -1;

    t6 = (x25==((x26-x27)+x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	volatile uint64_t x34 = 1882370050212255742LLU;
	volatile uint64_t x35 = 1464005150822085LLU;
	uint16_t x36 = UINT16_MAX;
	int32_t t7 = 64193;

    t7 = (x33==((x34-x35)+x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MAX;
	int32_t x38 = 119;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t8 = 1894;

    t8 = (x37==((x38-x39)+x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x50 = 1;
	int8_t x51 = INT8_MAX;
	uint16_t x52 = 2U;
	static int32_t t9 = -465590835;

    t9 = (x49==((x50-x51)+x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x53 = INT16_MAX;
	uint8_t x55 = 3U;
	static volatile int32_t t10 = -4;

    t10 = (x53==((x54-x55)+x56));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x57 = INT32_MIN;
	static uint16_t x59 = 3U;
	uint32_t x60 = UINT32_MAX;
	static volatile int32_t t11 = 15352;

    t11 = (x57==((x58-x59)+x60));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x65 = 14U;
	static int32_t x66 = 92622;
	uint32_t x67 = 0U;
	int32_t t12 = 1774558;

    t12 = (x65==((x66-x67)+x68));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x69 = INT32_MAX;
	uint8_t x70 = 7U;
	int32_t t13 = -514061;

    t13 = (x69==((x70-x71)+x72));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x73 = INT64_MAX;
	uint8_t x74 = UINT8_MAX;
	uint16_t x75 = 78U;
	int32_t t14 = 389;

    t14 = (x73==((x74-x75)+x76));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x81 = INT32_MIN;
	volatile int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MAX;
	int32_t t15 = -1644093;

    t15 = (x81==((x82-x83)+x84));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x85 = -20;
	int16_t x86 = 2568;
	int16_t x87 = INT16_MIN;
	volatile int8_t x88 = -13;
	int32_t t16 = -26;

    t16 = (x85==((x86-x87)+x88));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x89 = -1;
	uint8_t x90 = UINT8_MAX;
	int8_t x91 = INT8_MIN;
	int16_t x92 = INT16_MAX;
	int32_t t17 = 4471;

    t17 = (x89==((x90-x91)+x92));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x93 = UINT32_MAX;
	volatile int64_t x94 = -1LL;
	uint64_t x95 = 24LLU;
	int8_t x96 = -1;
	int32_t t18 = 0;

    t18 = (x93==((x94-x95)+x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x97 = 42;
	static int16_t x98 = -1;
	uint16_t x99 = UINT16_MAX;
	int64_t x100 = -512679674LL;
	int32_t t19 = -59;

    t19 = (x97==((x98-x99)+x100));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x101 = -1;
	volatile uint16_t x102 = 29010U;
	volatile int8_t x103 = INT8_MIN;
	static int32_t x104 = INT32_MIN;
	int32_t t20 = 1985;

    t20 = (x101==((x102-x103)+x104));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x107 = -3;
	int8_t x108 = 1;
	int32_t t21 = 7100244;

    t21 = (x105==((x106-x107)+x108));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x109 = UINT8_MAX;
	uint32_t x110 = 745846540U;
	int32_t t22 = 163;

    t22 = (x109==((x110-x111)+x112));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x113 = INT32_MIN;
	static int16_t x114 = -1;
	static uint32_t x115 = 28476U;
	int64_t x116 = INT64_MIN;

    t23 = (x113==((x114-x115)+x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x117 = -1;
	int32_t x119 = INT32_MAX;
	int32_t x120 = -1;

    t24 = (x117==((x118-x119)+x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x126 = INT32_MIN;
	int64_t x127 = -99517122533056089LL;
	uint64_t x128 = 112094517418591375LLU;
	volatile int32_t t25 = -222092;

    t25 = (x125==((x126-x127)+x128));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x136 = UINT8_MAX;
	int32_t t26 = -236729625;

    t26 = (x133==((x134-x135)+x136));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x141 = -1;
	uint8_t x142 = 0U;
	int8_t x144 = INT8_MAX;
	volatile int32_t t27 = -398;

    t27 = (x141==((x142-x143)+x144));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x149 = 0U;
	static int8_t x150 = INT8_MAX;
	uint64_t x151 = 117464LLU;
	volatile int64_t x152 = INT64_MIN;
	int32_t t28 = -6;

    t28 = (x149==((x150-x151)+x152));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x153 = -1;
	int16_t x154 = INT16_MIN;
	int16_t x155 = INT16_MAX;
	int16_t x156 = -45;
	static volatile int32_t t29 = -17;

    t29 = (x153==((x154-x155)+x156));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x157 = 506;
	volatile uint16_t x158 = 7U;
	int16_t x159 = -1;
	static uint64_t x160 = 557748721338062LLU;
	int32_t t30 = -698;

    t30 = (x157==((x158-x159)+x160));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x161 = UINT64_MAX;
	uint16_t x162 = UINT16_MAX;
	static uint32_t x163 = 495870U;
	uint64_t x164 = 351578274LLU;

    t31 = (x161==((x162-x163)+x164));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x165 = UINT64_MAX;
	volatile int32_t x166 = INT32_MIN;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t32 = -1;

    t32 = (x165==((x166-x167)+x168));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x169 = UINT16_MAX;
	uint16_t x171 = 2U;
	int64_t x172 = -1LL;
	int32_t t33 = -511695069;

    t33 = (x169==((x170-x171)+x172));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x173 = INT8_MIN;
	static volatile int16_t x175 = 114;
	int32_t x176 = INT32_MAX;
	int32_t t34 = 3300;

    t34 = (x173==((x174-x175)+x176));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x177 = 9U;
	uint32_t x178 = 55004143U;
	uint8_t x179 = 42U;
	volatile int32_t t35 = -913966;

    t35 = (x177==((x178-x179)+x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x181 = UINT16_MAX;
	uint64_t x182 = 16532426717LLU;
	int16_t x183 = 32;
	uint64_t x184 = 29482487859675LLU;
	volatile int32_t t36 = 8028;

    t36 = (x181==((x182-x183)+x184));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x185 = UINT32_MAX;
	uint32_t x186 = 2U;
	uint64_t x188 = 217088LLU;
	int32_t t37 = -205;

    t37 = (x185==((x186-x187)+x188));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x189 = -1;
	static volatile int16_t x190 = INT16_MIN;
	uint8_t x191 = 73U;
	int64_t x192 = -308LL;
	volatile int32_t t38 = 1;

    t38 = (x189==((x190-x191)+x192));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x193 = INT8_MAX;
	static int16_t x194 = -1;
	int64_t x195 = INT64_MIN;
	volatile int8_t x196 = INT8_MIN;
	volatile int32_t t39 = 5126215;

    t39 = (x193==((x194-x195)+x196));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x198 = 12;
	int64_t x199 = 4702LL;
	int8_t x200 = 1;
	volatile int32_t t40 = -449;

    t40 = (x197==((x198-x199)+x200));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x202 = UINT8_MAX;
	static int16_t x203 = 0;
	int32_t t41 = 131495720;

    t41 = (x201==((x202-x203)+x204));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x206 = UINT32_MAX;
	int32_t x207 = -890698973;
	int32_t x208 = 600;
	volatile int32_t t42 = 113;

    t42 = (x205==((x206-x207)+x208));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x209 = 93U;
	int16_t x210 = 940;
	static volatile uint16_t x211 = UINT16_MAX;
	int16_t x212 = -1;
	int32_t t43 = -9445;

    t43 = (x209==((x210-x211)+x212));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x214 = UINT16_MAX;
	volatile int32_t x215 = -1;
	int32_t t44 = -540846427;

    t44 = (x213==((x214-x215)+x216));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x218 = UINT8_MAX;
	int64_t x219 = INT64_MAX;
	static int8_t x220 = INT8_MAX;
	int32_t t45 = -2;

    t45 = (x217==((x218-x219)+x220));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x221 = -6429996816064160LL;
	int16_t x222 = INT16_MIN;
	int32_t x223 = -4863;
	uint32_t x224 = 56U;
	static int32_t t46 = 144;

    t46 = (x221==((x222-x223)+x224));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x225 = INT8_MIN;
	uint8_t x226 = 0U;
	volatile int32_t x227 = -1;
	int64_t x228 = INT64_MIN;

    t47 = (x225==((x226-x227)+x228));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x230 = UINT16_MAX;
	uint8_t x231 = 60U;
	volatile int32_t t48 = -1180;

    t48 = (x229==((x230-x231)+x232));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MIN;
	uint64_t x235 = UINT64_MAX;
	volatile int8_t x236 = 7;

    t49 = (x233==((x234-x235)+x236));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x237 = INT32_MIN;
	static uint16_t x239 = 171U;
	static uint16_t x240 = 1150U;
	volatile int32_t t50 = 0;

    t50 = (x237==((x238-x239)+x240));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x241 = INT64_MAX;
	int32_t x242 = -1;
	int8_t x243 = -5;
	volatile int16_t x244 = 1;
	static int32_t t51 = -36;

    t51 = (x241==((x242-x243)+x244));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x246 = UINT8_MAX;
	int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MAX;

    t52 = (x245==((x246-x247)+x248));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x249 = UINT64_MAX;
	int64_t x250 = -1LL;
	int8_t x252 = 1;
	volatile int32_t t53 = -422;

    t53 = (x249==((x250-x251)+x252));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x253 = INT32_MIN;
	uint16_t x254 = UINT16_MAX;
	uint8_t x255 = UINT8_MAX;
	static volatile uint64_t x256 = UINT64_MAX;
	volatile int32_t t54 = -948343;

    t54 = (x253==((x254-x255)+x256));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x257 = -2211878LL;
	uint8_t x258 = 3U;
	static int64_t x259 = INT64_MAX;
	uint8_t x260 = 0U;
	volatile int32_t t55 = -17313;

    t55 = (x257==((x258-x259)+x260));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x262 = INT16_MIN;
	int8_t x264 = -1;
	static volatile int32_t t56 = 2796838;

    t56 = (x261==((x262-x263)+x264));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x265 = UINT64_MAX;
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t57 = -7590;

    t57 = (x265==((x266-x267)+x268));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x277 = INT32_MIN;
	int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MIN;
	volatile int32_t x280 = -264231473;
	volatile int32_t t58 = 272792;

    t58 = (x277==((x278-x279)+x280));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x281 = 2582357566080148967LLU;
	int16_t x283 = INT16_MIN;
	int16_t x284 = INT16_MIN;
	int32_t t59 = 3;

    t59 = (x281==((x282-x283)+x284));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x285 = 2340U;
	int16_t x286 = 3917;
	uint8_t x287 = 3U;
	int32_t x288 = 0;
	static volatile int32_t t60 = -3;

    t60 = (x285==((x286-x287)+x288));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x293 = INT16_MIN;
	uint8_t x295 = 1U;
	static uint32_t x296 = 7U;
	volatile int32_t t61 = 8;

    t61 = (x293==((x294-x295)+x296));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MIN;
	static int32_t x303 = -1;
	int8_t x304 = INT8_MAX;
	int32_t t62 = -760;

    t62 = (x301==((x302-x303)+x304));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x305 = 64;
	volatile int8_t x306 = INT8_MAX;
	int16_t x308 = INT16_MIN;

    t63 = (x305==((x306-x307)+x308));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x309 = INT8_MIN;
	int8_t x311 = -1;
	int64_t x312 = INT64_MIN;

    t64 = (x309==((x310-x311)+x312));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x314 = INT8_MAX;
	volatile int32_t x315 = -40;
	uint64_t x316 = 609037794LLU;
	volatile int32_t t65 = -832;

    t65 = (x313==((x314-x315)+x316));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x317 = UINT64_MAX;
	int16_t x318 = 1;
	int32_t x319 = -29419;
	int64_t x320 = -313006586634110LL;
	int32_t t66 = 1;

    t66 = (x317==((x318-x319)+x320));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x321 = 10005U;
	int8_t x322 = -1;
	volatile uint32_t x323 = 1U;
	int8_t x324 = -1;
	volatile int32_t t67 = -3;

    t67 = (x321==((x322-x323)+x324));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x325 = -1;
	uint16_t x327 = 31904U;
	int32_t x328 = -1;

    t68 = (x325==((x326-x327)+x328));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x329 = UINT64_MAX;
	int16_t x330 = INT16_MIN;
	static int16_t x331 = INT16_MIN;
	int32_t t69 = -6;

    t69 = (x329==((x330-x331)+x332));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x333 = INT32_MAX;
	int32_t x334 = -1;
	uint16_t x335 = UINT16_MAX;
	int32_t t70 = -4169732;

    t70 = (x333==((x334-x335)+x336));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    

    t71 = (x337==((x338-x339)+x340));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x341 = INT64_MIN;
	int32_t x342 = INT32_MIN;
	int16_t x343 = -1;
	uint32_t x344 = 1599440U;

    t72 = (x341==((x342-x343)+x344));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x353 = INT32_MAX;
	static int64_t x354 = 21LL;
	volatile int8_t x355 = 0;
	volatile uint8_t x356 = UINT8_MAX;

    t73 = (x353==((x354-x355)+x356));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x357 = UINT8_MAX;
	static int32_t t74 = 1332;

    t74 = (x357==((x358-x359)+x360));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x361 = 10853U;
	int16_t x362 = -1;
	volatile int8_t x364 = INT8_MAX;
	volatile int32_t t75 = 9;

    t75 = (x361==((x362-x363)+x364));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x365 = UINT32_MAX;
	int8_t x367 = INT8_MIN;
	volatile int32_t t76 = -1332;

    t76 = (x365==((x366-x367)+x368));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x369 = 654669875899920LLU;
	int8_t x370 = INT8_MIN;
	int8_t x371 = INT8_MAX;
	static int64_t x372 = -1LL;
	static volatile int32_t t77 = -48;

    t77 = (x369==((x370-x371)+x372));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x377 = -1;
	uint16_t x378 = 485U;
	volatile uint16_t x380 = UINT16_MAX;
	int32_t t78 = -17322519;

    t78 = (x377==((x378-x379)+x380));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x381 = INT16_MIN;
	static int8_t x382 = INT8_MAX;
	uint64_t x383 = UINT64_MAX;
	uint32_t x384 = 463U;

    t79 = (x381==((x382-x383)+x384));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x389 = INT64_MAX;
	static uint16_t x390 = UINT16_MAX;
	int64_t x391 = 3747736020324147LL;
	static uint32_t x392 = UINT32_MAX;
	volatile int32_t t80 = -2970825;

    t80 = (x389==((x390-x391)+x392));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x393 = 5U;
	static uint64_t x394 = UINT64_MAX;
	static volatile int64_t x395 = 221774767995683LL;
	int64_t x396 = 14180651771236LL;
	static volatile int32_t t81 = 754401;

    t81 = (x393==((x394-x395)+x396));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x397 = -197;
	uint16_t x398 = UINT16_MAX;
	int32_t x399 = INT32_MAX;
	int16_t x400 = -10245;
	int32_t t82 = 1770246;

    t82 = (x397==((x398-x399)+x400));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x406 = UINT64_MAX;
	volatile int64_t x407 = -1LL;
	uint32_t x408 = UINT32_MAX;

    t83 = (x405==((x406-x407)+x408));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x413 = -3813;
	uint64_t x414 = 65012184LLU;
	int16_t x415 = -1;
	int8_t x416 = -1;
	int32_t t84 = 44650;

    t84 = (x413==((x414-x415)+x416));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x417 = 0U;
	volatile int64_t x418 = 13LL;
	uint16_t x419 = UINT16_MAX;
	static int32_t t85 = -523384;

    t85 = (x417==((x418-x419)+x420));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x421 = 3U;
	volatile int64_t x422 = -1LL;
	int8_t x423 = -1;
	int64_t x424 = INT64_MIN;
	volatile int32_t t86 = 277659;

    t86 = (x421==((x422-x423)+x424));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x425 = 103;
	uint16_t x426 = 28U;
	int16_t x427 = 0;
	static int32_t x428 = -1;
	volatile int32_t t87 = -28;

    t87 = (x425==((x426-x427)+x428));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x429 = UINT8_MAX;
	int8_t x430 = INT8_MIN;
	int16_t x431 = -1;
	volatile int16_t x432 = INT16_MIN;

    t88 = (x429==((x430-x431)+x432));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x433 = -1;
	volatile int16_t x434 = INT16_MIN;
	static int16_t x435 = INT16_MIN;
	int8_t x436 = INT8_MIN;

    t89 = (x433==((x434-x435)+x436));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x437 = 1;
	static volatile int64_t x438 = 1LL;
	static int64_t x440 = 1743141728LL;
	static int32_t t90 = -3;

    t90 = (x437==((x438-x439)+x440));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x449 = UINT8_MAX;
	static volatile int32_t x450 = -1;
	int16_t x451 = INT16_MAX;
	uint64_t x452 = UINT64_MAX;
	static volatile int32_t t91 = 14;

    t91 = (x449==((x450-x451)+x452));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x454 = UINT8_MAX;
	int32_t x455 = -1;
	static volatile uint8_t x456 = UINT8_MAX;
	int32_t t92 = -7885891;

    t92 = (x453==((x454-x455)+x456));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x462 = INT32_MIN;
	uint64_t x463 = 1708LLU;
	static volatile int32_t t93 = 34;

    t93 = (x461==((x462-x463)+x464));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x470 = UINT8_MAX;

    t94 = (x469==((x470-x471)+x472));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x473 = 27U;
	volatile uint32_t x474 = 16023U;
	int32_t x476 = INT32_MIN;
	int32_t t95 = 1105;

    t95 = (x473==((x474-x475)+x476));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x477 = INT32_MAX;
	static int8_t x478 = INT8_MIN;
	int64_t x479 = -205178893472571LL;
	int16_t x480 = INT16_MAX;
	int32_t t96 = -1;

    t96 = (x477==((x478-x479)+x480));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x481 = 89U;
	static uint64_t x482 = UINT64_MAX;
	int16_t x483 = INT16_MIN;
	volatile int16_t x484 = INT16_MIN;
	int32_t t97 = 1;

    t97 = (x481==((x482-x483)+x484));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x489 = 2LLU;
	int32_t x492 = INT32_MIN;
	int32_t t98 = -800551538;

    t98 = (x489==((x490-x491)+x492));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x493 = -3;
	static uint32_t x494 = UINT32_MAX;
	uint8_t x495 = UINT8_MAX;
	int8_t x496 = 0;
	volatile int32_t t99 = 12950;

    t99 = (x493==((x494-x495)+x496));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x497 = 4U;
	static uint8_t x498 = UINT8_MAX;
	uint16_t x499 = UINT16_MAX;
	static uint32_t x500 = 873365U;

    t100 = (x497==((x498-x499)+x500));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x504 = -1;
	volatile int32_t t101 = -43889;

    t101 = (x501==((x502-x503)+x504));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x506 = 24U;
	static volatile int8_t x508 = INT8_MAX;
	int32_t t102 = -3;

    t102 = (x505==((x506-x507)+x508));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x509 = -1;
	uint16_t x510 = 345U;
	int8_t x511 = -1;
	int8_t x512 = INT8_MIN;
	static volatile int32_t t103 = 457074920;

    t103 = (x509==((x510-x511)+x512));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x513 = 4796U;
	int8_t x514 = 0;
	int16_t x515 = INT16_MIN;
	uint64_t x516 = UINT64_MAX;

    t104 = (x513==((x514-x515)+x516));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x517 = 14LL;
	volatile uint32_t x518 = UINT32_MAX;
	int16_t x519 = INT16_MIN;
	uint32_t x520 = 8021184U;

    t105 = (x517==((x518-x519)+x520));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint32_t x521 = 4U;
	int32_t x523 = 126122;
	static uint16_t x524 = 0U;

    t106 = (x521==((x522-x523)+x524));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x526 = INT8_MAX;
	uint64_t x527 = UINT64_MAX;
	volatile int32_t t107 = -5561425;

    t107 = (x525==((x526-x527)+x528));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x533 = 4090351304699163937LLU;
	uint64_t x534 = 7915014751LLU;
	volatile int32_t x535 = INT32_MAX;
	uint32_t x536 = 40U;
	volatile int32_t t108 = -5395991;

    t108 = (x533==((x534-x535)+x536));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x537 = -1;
	int8_t x538 = INT8_MIN;
	static uint16_t x539 = UINT16_MAX;
	uint64_t x540 = 199275736554313LLU;
	volatile int32_t t109 = 75;

    t109 = (x537==((x538-x539)+x540));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x545 = INT32_MIN;
	int16_t x546 = INT16_MIN;
	int16_t x547 = INT16_MIN;
	volatile int32_t t110 = 71;

    t110 = (x545==((x546-x547)+x548));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x549 = INT32_MAX;
	volatile uint16_t x550 = 136U;
	volatile int64_t x551 = -1LL;

    t111 = (x549==((x550-x551)+x552));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x553 = UINT64_MAX;
	volatile uint16_t x554 = 29334U;
	static int16_t x555 = INT16_MIN;
	uint8_t x556 = 1U;
	int32_t t112 = -220;

    t112 = (x553==((x554-x555)+x556));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x557 = -8;
	static int32_t x559 = -36922417;
	volatile int32_t t113 = 2710515;

    t113 = (x557==((x558-x559)+x560));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x565 = INT8_MAX;
	int8_t x567 = INT8_MAX;
	static uint16_t x568 = 5880U;

    t114 = (x565==((x566-x567)+x568));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x570 = 1;
	uint32_t x571 = UINT32_MAX;
	static uint32_t x572 = 11361194U;
	static volatile int32_t t115 = 222;

    t115 = (x569==((x570-x571)+x572));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x573 = 68762854771LLU;
	int32_t x574 = -1;
	int64_t x575 = 2LL;
	uint32_t x576 = 44585U;
	int32_t t116 = -7415052;

    t116 = (x573==((x574-x575)+x576));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x578 = INT8_MAX;
	int32_t x579 = -2976;
	volatile uint16_t x580 = 188U;

    t117 = (x577==((x578-x579)+x580));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x581 = INT64_MIN;
	uint16_t x583 = 6733U;
	int64_t x584 = INT64_MAX;
	static int32_t t118 = 7604514;

    t118 = (x581==((x582-x583)+x584));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x585 = -1;
	static int16_t x586 = -1;
	volatile uint8_t x587 = 13U;
	volatile uint16_t x588 = 9149U;
	int32_t t119 = -6669913;

    t119 = (x585==((x586-x587)+x588));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x589 = UINT16_MAX;
	int8_t x590 = INT8_MIN;
	static int64_t x591 = INT64_MIN;
	int32_t x592 = -1;
	static int32_t t120 = -1;

    t120 = (x589==((x590-x591)+x592));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x597 = 6U;
	uint64_t x598 = 353080085873LLU;
	int16_t x599 = -10;
	int64_t x600 = INT64_MIN;
	volatile int32_t t121 = -155633174;

    t121 = (x597==((x598-x599)+x600));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x601 = INT32_MIN;
	int16_t x603 = INT16_MIN;
	int8_t x604 = INT8_MIN;
	volatile int32_t t122 = -997882;

    t122 = (x601==((x602-x603)+x604));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x605 = -43;
	volatile int8_t x606 = INT8_MIN;
	static int16_t x607 = INT16_MIN;
	volatile uint32_t x608 = 2662U;
	volatile int32_t t123 = -1;

    t123 = (x605==((x606-x607)+x608));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x609 = INT16_MIN;
	uint8_t x610 = 39U;
	int16_t x611 = INT16_MIN;
	int16_t x612 = INT16_MAX;
	int32_t t124 = -41;

    t124 = (x609==((x610-x611)+x612));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x613 = 3;
	uint8_t x615 = UINT8_MAX;

    t125 = (x613==((x614-x615)+x616));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x618 = INT16_MIN;
	static uint8_t x620 = 3U;
	volatile int32_t t126 = -2;

    t126 = (x617==((x618-x619)+x620));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x625 = INT16_MIN;
	int8_t x626 = -13;
	int16_t x627 = INT16_MAX;
	int32_t t127 = -9;

    t127 = (x625==((x626-x627)+x628));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x629 = 60886645U;
	uint64_t x630 = UINT64_MAX;
	volatile int32_t x631 = INT32_MAX;
	uint16_t x632 = UINT16_MAX;
	volatile int32_t t128 = -6563;

    t128 = (x629==((x630-x631)+x632));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x637 = UINT8_MAX;
	int8_t x638 = INT8_MAX;
	static uint16_t x639 = 15325U;
	int64_t x640 = INT64_MAX;
	volatile int32_t t129 = 268999;

    t129 = (x637==((x638-x639)+x640));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x641 = -1LL;
	int32_t x642 = INT32_MAX;
	static int16_t x643 = 473;
	int64_t x644 = -1LL;

    t130 = (x641==((x642-x643)+x644));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x645 = 11502691U;
	uint64_t x646 = UINT64_MAX;
	volatile int32_t x647 = INT32_MIN;
	int32_t x648 = 0;
	volatile int32_t t131 = 1943969;

    t131 = (x645==((x646-x647)+x648));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x649 = -49;
	uint32_t x650 = 1U;
	int16_t x651 = -1;
	volatile uint32_t x652 = 44934078U;
	int32_t t132 = -312378;

    t132 = (x649==((x650-x651)+x652));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x653 = UINT16_MAX;
	volatile int16_t x655 = 9194;
	volatile int32_t t133 = -34;

    t133 = (x653==((x654-x655)+x656));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x657 = INT32_MIN;
	int32_t x658 = -1;
	static volatile int32_t x659 = -9867;
	int16_t x660 = INT16_MAX;
	int32_t t134 = 455782;

    t134 = (x657==((x658-x659)+x660));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x665 = 57U;
	int32_t x666 = 1;
	int32_t x667 = -74275696;
	uint16_t x668 = UINT16_MAX;

    t135 = (x665==((x666-x667)+x668));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x670 = UINT64_MAX;
	static volatile int64_t x671 = INT64_MIN;
	int64_t x672 = INT64_MIN;
	volatile int32_t t136 = -12215;

    t136 = (x669==((x670-x671)+x672));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x673 = 317U;
	int16_t x674 = 1;
	static int8_t x675 = INT8_MIN;
	uint64_t x676 = 69428LLU;
	int32_t t137 = -25765;

    t137 = (x673==((x674-x675)+x676));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x677 = UINT8_MAX;
	int8_t x679 = INT8_MAX;
	uint16_t x680 = UINT16_MAX;
	int32_t t138 = 703;

    t138 = (x677==((x678-x679)+x680));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x681 = -1LL;
	static volatile int8_t x682 = INT8_MIN;
	int8_t x683 = -12;
	int32_t x684 = 11752990;

    t139 = (x681==((x682-x683)+x684));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x690 = 38U;
	uint8_t x691 = UINT8_MAX;
	volatile int32_t x692 = -88497087;
	volatile int32_t t140 = -5904;

    t140 = (x689==((x690-x691)+x692));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x693 = INT32_MIN;
	int16_t x694 = INT16_MIN;
	uint16_t x695 = 20112U;
	volatile int16_t x696 = INT16_MIN;
	static volatile int32_t t141 = -2;

    t141 = (x693==((x694-x695)+x696));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x701 = INT16_MAX;
	uint16_t x702 = UINT16_MAX;
	int64_t x704 = INT64_MIN;

    t142 = (x701==((x702-x703)+x704));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x705 = 0;
	int8_t x706 = 6;
	int64_t x708 = INT64_MAX;
	static int32_t t143 = 1;

    t143 = (x705==((x706-x707)+x708));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x710 = 1528U;
	uint16_t x711 = 58U;
	static volatile int32_t t144 = -312017091;

    t144 = (x709==((x710-x711)+x712));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x714 = -13;
	volatile int16_t x715 = -443;
	static uint16_t x716 = 17399U;

    t145 = (x713==((x714-x715)+x716));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x717 = 2U;
	int32_t x718 = INT32_MIN;
	int16_t x719 = INT16_MIN;
	int32_t x720 = INT32_MAX;
	static int32_t t146 = -68712;

    t146 = (x717==((x718-x719)+x720));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x721 = -1;
	int8_t x722 = 20;
	int8_t x723 = 16;
	int8_t x724 = INT8_MIN;
	volatile int32_t t147 = -954;

    t147 = (x721==((x722-x723)+x724));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x725 = 34551U;
	static int8_t x727 = -1;
	int32_t t148 = 89;

    t148 = (x725==((x726-x727)+x728));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x730 = INT16_MIN;
	volatile uint64_t x731 = 210274125LLU;
	int16_t x732 = INT16_MAX;
	int32_t t149 = -57281;

    t149 = (x729==((x730-x731)+x732));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x733 = -1LL;
	int64_t x735 = -2739103805151556543LL;
	static int32_t x736 = INT32_MAX;

    t150 = (x733==((x734-x735)+x736));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x737 = INT8_MIN;
	static int32_t x739 = INT32_MAX;
	int32_t t151 = -10;

    t151 = (x737==((x738-x739)+x740));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x741 = UINT16_MAX;
	int32_t x742 = 56816;
	int16_t x743 = 7;
	int32_t x744 = INT32_MIN;

    t152 = (x741==((x742-x743)+x744));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x750 = UINT32_MAX;
	int32_t x751 = INT32_MAX;
	volatile int32_t t153 = 84059289;

    t153 = (x749==((x750-x751)+x752));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x753 = INT8_MIN;
	int32_t x754 = INT32_MAX;
	volatile uint64_t x755 = 5271532859627593LLU;
	uint64_t x756 = UINT64_MAX;
	int32_t t154 = 12659946;

    t154 = (x753==((x754-x755)+x756));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x757 = INT32_MIN;
	uint64_t x758 = UINT64_MAX;
	uint16_t x759 = UINT16_MAX;
	int16_t x760 = INT16_MIN;

    t155 = (x757==((x758-x759)+x760));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x761 = -1LL;
	static uint16_t x762 = 0U;
	uint16_t x763 = UINT16_MAX;
	uint16_t x764 = 5533U;
	int32_t t156 = -225492;

    t156 = (x761==((x762-x763)+x764));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x765 = INT32_MIN;
	int32_t t157 = -50;

    t157 = (x765==((x766-x767)+x768));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x771 = INT32_MIN;
	int8_t x772 = INT8_MIN;
	int32_t t158 = -260973486;

    t158 = (x769==((x770-x771)+x772));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x777 = INT8_MIN;
	int16_t x779 = INT16_MIN;
	static uint8_t x780 = 1U;
	volatile int32_t t159 = -39425373;

    t159 = (x777==((x778-x779)+x780));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x781 = 92523;
	uint64_t x782 = 53120884094087041LLU;
	uint32_t x784 = 12484U;
	int32_t t160 = 132674805;

    t160 = (x781==((x782-x783)+x784));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x785 = UINT8_MAX;
	uint8_t x788 = 1U;
	volatile int32_t t161 = 909789320;

    t161 = (x785==((x786-x787)+x788));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x789 = UINT16_MAX;
	volatile int64_t x791 = -3930887913627265LL;
	static volatile int32_t t162 = 5;

    t162 = (x789==((x790-x791)+x792));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x793 = INT8_MIN;
	uint64_t x796 = 475163588930994LLU;
	static volatile int32_t t163 = -1050;

    t163 = (x793==((x794-x795)+x796));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x805 = -3319842016089218LL;
	int16_t x806 = INT16_MIN;
	uint8_t x807 = 4U;
	uint16_t x808 = UINT16_MAX;

    t164 = (x805==((x806-x807)+x808));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x809 = -1;
	static int64_t x810 = INT64_MAX;
	static volatile uint16_t x811 = UINT16_MAX;
	uint8_t x812 = 0U;
	static volatile int32_t t165 = 193479306;

    t165 = (x809==((x810-x811)+x812));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x813 = -1;
	volatile int32_t x814 = -1;
	int32_t x815 = INT32_MIN;
	int32_t t166 = -14144793;

    t166 = (x813==((x814-x815)+x816));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x817 = 1544864678791016LLU;
	volatile int8_t x818 = INT8_MIN;
	uint8_t x819 = 25U;
	int16_t x820 = INT16_MIN;

    t167 = (x817==((x818-x819)+x820));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x821 = -1;
	int32_t x822 = INT32_MIN;
	uint32_t x823 = 99678U;
	int16_t x824 = -935;

    t168 = (x821==((x822-x823)+x824));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int64_t x833 = -33412518220948LL;
	uint8_t x834 = 2U;
	static int64_t x835 = INT64_MAX;
	int64_t x836 = -1LL;
	int32_t t169 = -148507;

    t169 = (x833==((x834-x835)+x836));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x837 = INT32_MIN;
	int8_t x838 = -1;
	int16_t x839 = -1;
	volatile uint8_t x840 = 106U;

    t170 = (x837==((x838-x839)+x840));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x841 = -1LL;
	int16_t x842 = 118;
	static uint32_t x844 = 8U;

    t171 = (x841==((x842-x843)+x844));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x845 = INT32_MIN;
	static volatile int8_t x846 = -1;
	int64_t x847 = -1LL;
	int32_t t172 = 7;

    t172 = (x845==((x846-x847)+x848));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x849 = -1;
	int16_t x850 = -1;
	int32_t x851 = -1;
	static int64_t x852 = INT64_MIN;
	volatile int32_t t173 = -15137376;

    t173 = (x849==((x850-x851)+x852));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x853 = -1LL;
	static volatile int8_t x855 = -1;
	int16_t x856 = -1;

    t174 = (x853==((x854-x855)+x856));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x857 = INT32_MAX;
	int64_t x858 = INT64_MIN;
	volatile int16_t x859 = -1;
	volatile int64_t x860 = 65813628LL;
	int32_t t175 = -37;

    t175 = (x857==((x858-x859)+x860));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x861 = -1;
	uint64_t x862 = 1056456338378335545LLU;
	int64_t x863 = -122800350587LL;
	int8_t x864 = INT8_MIN;
	volatile int32_t t176 = 0;

    t176 = (x861==((x862-x863)+x864));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x865 = INT8_MAX;
	int8_t x867 = -4;
	int8_t x868 = INT8_MIN;
	int32_t t177 = 1632;

    t177 = (x865==((x866-x867)+x868));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x869 = 1U;
	static volatile int32_t t178 = 639662180;

    t178 = (x869==((x870-x871)+x872));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x873 = -1;
	volatile int16_t x874 = -25;
	int64_t x875 = INT64_MIN;
	int16_t x876 = 0;
	volatile int32_t t179 = -17414;

    t179 = (x873==((x874-x875)+x876));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x877 = -1;
	static uint16_t x879 = UINT16_MAX;
	int32_t t180 = -2872805;

    t180 = (x877==((x878-x879)+x880));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x882 = -1469090657731027LL;
	volatile uint16_t x883 = UINT16_MAX;
	volatile uint32_t x884 = 1063416726U;
	static volatile int32_t t181 = 2765280;

    t181 = (x881==((x882-x883)+x884));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x886 = UINT8_MAX;
	volatile int16_t x887 = -393;
	uint64_t x888 = 1531097000LLU;
	int32_t t182 = -362;

    t182 = (x885==((x886-x887)+x888));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x893 = INT8_MIN;
	int8_t x894 = INT8_MIN;
	int64_t x895 = 1LL;
	static uint8_t x896 = 6U;
	int32_t t183 = -885543424;

    t183 = (x893==((x894-x895)+x896));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x897 = -2;
	int8_t x899 = 0;
	uint64_t x900 = 28770LLU;
	volatile int32_t t184 = -7460;

    t184 = (x897==((x898-x899)+x900));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x901 = -1;
	uint16_t x902 = UINT16_MAX;
	int32_t x903 = INT32_MAX;
	int32_t t185 = 0;

    t185 = (x901==((x902-x903)+x904));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x905 = UINT16_MAX;
	volatile uint16_t x906 = 0U;
	int64_t x907 = INT64_MAX;
	static uint16_t x908 = UINT16_MAX;
	static volatile int32_t t186 = -3998003;

    t186 = (x905==((x906-x907)+x908));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x909 = INT64_MIN;
	uint8_t x911 = UINT8_MAX;
	static int32_t x912 = -4187;
	static int32_t t187 = 424192;

    t187 = (x909==((x910-x911)+x912));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x913 = INT8_MAX;
	int8_t x914 = INT8_MAX;
	int16_t x915 = -1;
	uint32_t x916 = 1U;
	volatile int32_t t188 = -1927;

    t188 = (x913==((x914-x915)+x916));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x917 = 559759868112162LLU;
	int8_t x918 = -1;
	static volatile uint32_t x920 = 4U;
	static int32_t t189 = -8420509;

    t189 = (x917==((x918-x919)+x920));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x925 = INT32_MIN;
	uint8_t x926 = 0U;
	uint32_t x928 = 1592420U;
	static volatile int32_t t190 = -1946;

    t190 = (x925==((x926-x927)+x928));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x938 = 30912LLU;
	int64_t x940 = -1LL;

    t191 = (x937==((x938-x939)+x940));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x941 = 167U;
	int32_t x942 = -29817;
	int16_t x943 = INT16_MIN;
	volatile int32_t t192 = -13832167;

    t192 = (x941==((x942-x943)+x944));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x945 = -1;
	static uint16_t x946 = 50U;
	static uint32_t x947 = UINT32_MAX;
	volatile uint64_t x948 = UINT64_MAX;
	static int32_t t193 = 868264;

    t193 = (x945==((x946-x947)+x948));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x954 = 62593090822971681LLU;
	uint64_t x955 = 9833609397LLU;
	int32_t t194 = 13530;

    t194 = (x953==((x954-x955)+x956));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x957 = UINT8_MAX;
	int32_t x960 = INT32_MIN;
	int32_t t195 = -404741;

    t195 = (x957==((x958-x959)+x960));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x961 = INT16_MIN;
	static int32_t x962 = INT32_MAX;
	uint16_t x963 = 1U;
	static volatile uint8_t x964 = 1U;
	volatile int32_t t196 = -33823229;

    t196 = (x961==((x962-x963)+x964));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x966 = -1LL;
	uint8_t x967 = UINT8_MAX;
	int8_t x968 = INT8_MIN;

    t197 = (x965==((x966-x967)+x968));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x969 = 0;
	volatile int64_t x970 = 56LL;
	int16_t x971 = -1;
	uint64_t x972 = 1753510176351017LLU;

    t198 = (x969==((x970-x971)+x972));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x974 = 93622LLU;
	static int8_t x975 = INT8_MIN;
	volatile int64_t x976 = INT64_MIN;
	int32_t t199 = 16;

    t199 = (x973==((x974-x975)+x976));

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

