
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

uint8_t x8 = 15U;
int32_t x14 = INT32_MIN;
int32_t x19 = INT32_MIN;
int16_t x20 = INT16_MIN;
int32_t x25 = INT32_MIN;
static int16_t x26 = INT16_MIN;
uint16_t x27 = 24U;
uint32_t x28 = 170807563U;
int16_t x31 = INT16_MAX;
int16_t x32 = INT16_MAX;
int64_t x34 = -1LL;
int32_t t13 = -17499;
int8_t x80 = INT8_MIN;
uint32_t x81 = UINT32_MAX;
static int16_t x87 = INT16_MIN;
uint8_t x106 = 2U;
volatile int8_t x111 = -1;
uint64_t x137 = 63658067LLU;
int16_t x138 = -1;
uint16_t x143 = 198U;
int32_t x144 = INT32_MIN;
int16_t x145 = INT16_MIN;
int16_t x149 = INT16_MIN;
int32_t x157 = 448657;
int16_t x158 = INT16_MAX;
volatile uint32_t x159 = 1745U;
int32_t t30 = 18;
static uint16_t x166 = 622U;
int16_t x170 = -1;
int32_t x171 = -363;
static int16_t x174 = -1663;
int16_t x175 = -1654;
int64_t x177 = -1LL;
uint32_t x178 = UINT32_MAX;
static int32_t t35 = -529593686;
int8_t x187 = 6;
int64_t x193 = 31453234212090LL;
volatile int16_t x195 = 0;
static volatile int32_t t38 = 279818;
static volatile int8_t x204 = 40;
int64_t x205 = 14989625636285LL;
static uint8_t x214 = UINT8_MAX;
uint32_t x216 = 38U;
int64_t x219 = -1LL;
int8_t x220 = INT8_MIN;
int32_t t44 = 2015;
uint64_t x233 = UINT64_MAX;
int8_t x234 = -1;
int8_t x235 = INT8_MIN;
volatile int32_t t46 = -6642;
volatile int32_t t48 = -377576107;
static uint64_t x249 = 48644LLU;
volatile int16_t x250 = INT16_MAX;
volatile int16_t x253 = -15;
static volatile uint64_t x256 = 1LLU;
volatile int32_t t50 = 54740;
static int32_t x261 = -483;
int64_t x262 = INT64_MIN;
int32_t t51 = 963291;
volatile int32_t t53 = 0;
volatile int16_t x284 = -1;
int32_t t56 = 23300973;
int32_t t57 = 144;
static volatile uint64_t x303 = 46578LLU;
int64_t x306 = 115755701279LL;
int32_t x311 = INT32_MAX;
uint32_t x318 = 503148U;
static volatile int32_t t64 = -73240439;
static int32_t x339 = 108577;
int64_t x340 = 5259768803554364LL;
static int8_t x370 = 0;
int32_t t70 = -3042;
volatile uint64_t x373 = 5959657LLU;
uint64_t x374 = 1128570LLU;
int64_t x376 = INT64_MAX;
static int64_t x378 = -1LL;
int8_t x380 = -1;
int64_t x399 = INT64_MIN;
volatile int16_t x407 = -1;
int32_t x422 = INT32_MIN;
static uint8_t x424 = 0U;
static volatile uint64_t x426 = 34273LLU;
int8_t x429 = INT8_MAX;
volatile int64_t x437 = INT64_MIN;
uint16_t x440 = 875U;
uint64_t x442 = 93222560LLU;
volatile int32_t t85 = -154;
static int32_t x455 = 22566784;
int16_t x456 = INT16_MIN;
uint8_t x469 = 1U;
int16_t x478 = INT16_MIN;
int32_t x487 = 1;
static volatile int32_t t91 = -1;
int32_t x493 = INT32_MIN;
static volatile uint64_t x494 = UINT64_MAX;
uint64_t x500 = 1127LLU;
volatile int8_t x501 = 0;
int8_t x504 = -1;
volatile int32_t t95 = -1;
static uint32_t x506 = 18456U;
int8_t x508 = -1;
int8_t x517 = -1;
static int8_t x520 = 1;
static int32_t t99 = -45478612;
int16_t x526 = INT16_MIN;
uint16_t x531 = 68U;
int16_t x543 = 0;
int32_t t102 = -113914;
static int64_t x549 = INT64_MIN;
int32_t x550 = -71829;
int32_t x579 = 175604906;
uint16_t x581 = UINT16_MAX;
volatile int32_t t109 = 242047846;
uint8_t x597 = 43U;
int8_t x607 = INT8_MAX;
uint16_t x614 = 19U;
volatile int8_t x620 = -1;
static volatile uint8_t x621 = 1U;
int16_t x630 = -1;
uint8_t x636 = UINT8_MAX;
volatile int8_t x642 = INT8_MIN;
static uint32_t x644 = 3U;
int64_t x657 = INT64_MIN;
int16_t x677 = INT16_MIN;
int32_t x679 = -40081;
int8_t x691 = INT8_MIN;
int32_t x702 = INT32_MIN;
uint8_t x705 = 19U;
volatile int64_t x707 = -1LL;
uint16_t x713 = UINT16_MAX;
uint64_t x720 = 2LLU;
volatile int32_t x730 = INT32_MIN;
static int64_t x731 = 571360835720950449LL;
volatile int16_t x734 = INT16_MIN;
int8_t x738 = INT8_MIN;
int32_t x747 = INT32_MIN;
uint32_t x748 = UINT32_MAX;
int64_t x759 = -1LL;
static volatile int16_t x764 = INT16_MIN;
int8_t x769 = INT8_MIN;
volatile int16_t x779 = INT16_MIN;
static volatile int16_t x791 = -15559;
static uint16_t x799 = 24U;
static int16_t x810 = INT16_MIN;
volatile int8_t x812 = INT8_MAX;
uint16_t x830 = 12U;
static volatile int32_t x831 = -9497;
int16_t x832 = INT16_MAX;
volatile int8_t x842 = 10;
uint8_t x852 = 0U;
int16_t x853 = -1;
uint16_t x857 = UINT16_MAX;
volatile uint64_t x858 = UINT64_MAX;
volatile int32_t t167 = -294;
static int16_t x863 = 0;
static int16_t x864 = -160;
int32_t x866 = 1775;
uint64_t x870 = 290399219974302538LLU;
uint64_t x878 = UINT64_MAX;
volatile uint64_t x879 = 4644721340LLU;
int32_t t174 = -372266;
volatile int32_t t175 = 16440059;
int32_t t177 = 208648488;
static int8_t x914 = 0;
volatile int32_t t180 = -2399623;
volatile int64_t x929 = INT64_MAX;
static uint16_t x930 = 27U;
volatile int32_t t182 = -1861;
int32_t x950 = -1;
uint32_t x954 = 51303545U;
volatile int16_t x956 = INT16_MAX;
static int32_t t185 = -28569;
uint64_t x968 = 2970206017LLU;
uint32_t x969 = 4U;
int64_t x972 = -58806LL;
static int64_t x978 = INT64_MIN;
int16_t x986 = 78;
int64_t x993 = INT64_MIN;
int32_t x997 = INT32_MAX;
uint8_t x1004 = 55U;
int64_t x1005 = INT64_MAX;
volatile int16_t x1006 = 35;
int8_t x1011 = INT8_MIN;


void f0(void) {
    	int64_t x5 = INT64_MIN;
	int32_t x6 = INT32_MIN;
	int64_t x7 = -1LL;
	int32_t t0 = -2753393;

    t0 = (x5<=((x6-x7)-x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x13 = INT32_MAX;
	int64_t x15 = -1LL;
	int16_t x16 = INT16_MAX;
	static int32_t t1 = -90661147;

    t1 = (x13<=((x14-x15)-x16));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x17 = 3947712375956LL;
	uint32_t x18 = 1221U;
	volatile int32_t t2 = -1619853;

    t2 = (x17<=((x18-x19)-x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x21 = 5325944159LLU;
	int8_t x22 = -1;
	int64_t x23 = -1LL;
	uint16_t x24 = 3727U;
	int32_t t3 = -1390;

    t3 = (x21<=((x22-x23)-x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t t4 = -231869125;

    t4 = (x25<=((x26-x27)-x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MIN;
	volatile int32_t t5 = 253700;

    t5 = (x29<=((x30-x31)-x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x33 = INT64_MIN;
	uint16_t x35 = 120U;
	static int16_t x36 = -1;
	static volatile int32_t t6 = -3849024;

    t6 = (x33<=((x34-x35)-x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = -1;
	int64_t x38 = -1LL;
	int32_t x39 = -1;
	volatile int8_t x40 = 10;
	int32_t t7 = 560530;

    t7 = (x37<=((x38-x39)-x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x41 = 15084U;
	int64_t x42 = INT64_MIN;
	static int16_t x43 = INT16_MIN;
	int8_t x44 = -1;
	volatile int32_t t8 = -957382;

    t8 = (x41<=((x42-x43)-x44));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x45 = INT8_MAX;
	volatile int16_t x46 = INT16_MIN;
	int8_t x47 = -6;
	volatile int8_t x48 = 0;
	int32_t t9 = -1;

    t9 = (x45<=((x46-x47)-x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x53 = -45518;
	uint16_t x54 = 7U;
	int16_t x55 = -1;
	uint64_t x56 = 1LLU;
	int32_t t10 = -10;

    t10 = (x53<=((x54-x55)-x56));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x57 = 2U;
	uint64_t x58 = 1688053131761107LLU;
	int32_t x59 = INT32_MIN;
	int8_t x60 = 0;
	volatile int32_t t11 = 923;

    t11 = (x57<=((x58-x59)-x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = INT16_MIN;
	int16_t x62 = INT16_MIN;
	int8_t x63 = -1;
	uint16_t x64 = 41U;
	static int32_t t12 = 29410;

    t12 = (x61<=((x62-x63)-x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x65 = 1U;
	int32_t x66 = -1;
	uint16_t x67 = UINT16_MAX;
	static uint8_t x68 = 13U;

    t13 = (x65<=((x66-x67)-x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x69 = -1LL;
	int8_t x70 = INT8_MIN;
	static int64_t x71 = 965419LL;
	uint64_t x72 = 20667871859LLU;
	int32_t t14 = 79582;

    t14 = (x69<=((x70-x71)-x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x73 = 915356LLU;
	static int8_t x74 = INT8_MIN;
	static uint8_t x75 = UINT8_MAX;
	int8_t x76 = INT8_MIN;
	volatile int32_t t15 = -1132146;

    t15 = (x73<=((x74-x75)-x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x77 = INT32_MAX;
	static uint16_t x78 = 1551U;
	int32_t x79 = -1;
	volatile int32_t t16 = 50553;

    t16 = (x77<=((x78-x79)-x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x82 = INT32_MAX;
	uint32_t x83 = UINT32_MAX;
	uint8_t x84 = 2U;
	int32_t t17 = -233499300;

    t17 = (x81<=((x82-x83)-x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x85 = INT64_MIN;
	int8_t x86 = INT8_MIN;
	volatile int16_t x88 = -6900;
	volatile int32_t t18 = -40186;

    t18 = (x85<=((x86-x87)-x88));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x105 = UINT32_MAX;
	uint32_t x107 = 0U;
	int8_t x108 = INT8_MIN;
	int32_t t19 = -93693646;

    t19 = (x105<=((x106-x107)-x108));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x109 = 6U;
	uint16_t x110 = 56U;
	uint16_t x112 = UINT16_MAX;
	int32_t t20 = 853092;

    t20 = (x109<=((x110-x111)-x112));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x113 = INT16_MIN;
	static volatile uint16_t x114 = UINT16_MAX;
	static uint64_t x115 = 124136009LLU;
	int16_t x116 = INT16_MIN;
	volatile int32_t t21 = -82;

    t21 = (x113<=((x114-x115)-x116));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x121 = UINT32_MAX;
	static int32_t x122 = 151;
	int32_t x123 = -15615;
	int16_t x124 = -14;
	int32_t t22 = -2018276;

    t22 = (x121<=((x122-x123)-x124));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x129 = 77;
	volatile int16_t x130 = 1;
	static int64_t x131 = -132673843474909538LL;
	static int8_t x132 = 1;
	volatile int32_t t23 = -750585394;

    t23 = (x129<=((x130-x131)-x132));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x133 = UINT32_MAX;
	volatile uint64_t x134 = 1492093770830062LLU;
	int32_t x135 = -1;
	static volatile int32_t x136 = INT32_MIN;
	volatile int32_t t24 = 0;

    t24 = (x133<=((x134-x135)-x136));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x139 = INT8_MAX;
	uint8_t x140 = 108U;
	volatile int32_t t25 = -7950737;

    t25 = (x137<=((x138-x139)-x140));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x141 = INT64_MAX;
	volatile int64_t x142 = -16679520608733768LL;
	int32_t t26 = -4420;

    t26 = (x141<=((x142-x143)-x144));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x146 = INT8_MAX;
	int8_t x147 = 10;
	int8_t x148 = -1;
	int32_t t27 = -130957661;

    t27 = (x145<=((x146-x147)-x148));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MAX;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t28 = 1;

    t28 = (x149<=((x150-x151)-x152));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x153 = UINT64_MAX;
	int32_t x154 = INT32_MIN;
	int64_t x155 = 8512822320580247LL;
	volatile int64_t x156 = INT64_MIN;
	int32_t t29 = -676;

    t29 = (x153<=((x154-x155)-x156));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x160 = -28679;

    t30 = (x157<=((x158-x159)-x160));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x165 = INT64_MIN;
	static int32_t x167 = -1;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t31 = 53;

    t31 = (x165<=((x166-x167)-x168));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x169 = INT64_MIN;
	static uint16_t x172 = 1U;
	int32_t t32 = -8174;

    t32 = (x169<=((x170-x171)-x172));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x173 = 20U;
	static uint16_t x176 = 1556U;
	volatile int32_t t33 = -1;

    t33 = (x173<=((x174-x175)-x176));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x179 = 1;
	uint64_t x180 = 3828838LLU;
	int32_t t34 = 27364030;

    t34 = (x177<=((x178-x179)-x180));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x181 = INT64_MIN;
	uint8_t x182 = 7U;
	volatile int64_t x183 = INT64_MAX;
	int32_t x184 = -1;

    t35 = (x181<=((x182-x183)-x184));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x185 = -1;
	uint16_t x186 = 10U;
	int16_t x188 = INT16_MAX;
	static volatile int32_t t36 = -5658353;

    t36 = (x185<=((x186-x187)-x188));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x189 = -188445015LL;
	int16_t x190 = 16041;
	int32_t x191 = INT32_MAX;
	uint32_t x192 = 7396U;
	static int32_t t37 = 103887;

    t37 = (x189<=((x190-x191)-x192));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint8_t x194 = UINT8_MAX;
	int32_t x196 = -1;

    t38 = (x193<=((x194-x195)-x196));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x197 = -208;
	int8_t x198 = -1;
	volatile uint16_t x199 = 3312U;
	static uint64_t x200 = 2144348344894658LLU;
	int32_t t39 = -113465;

    t39 = (x197<=((x198-x199)-x200));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x201 = INT8_MIN;
	int16_t x202 = -16147;
	static volatile int32_t x203 = -1;
	int32_t t40 = -8088;

    t40 = (x201<=((x202-x203)-x204));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x206 = 233;
	volatile int64_t x207 = -1LL;
	int32_t x208 = INT32_MIN;
	int32_t t41 = 9686;

    t41 = (x205<=((x206-x207)-x208));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x213 = INT16_MIN;
	static volatile int8_t x215 = INT8_MIN;
	int32_t t42 = -30455;

    t42 = (x213<=((x214-x215)-x216));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x217 = INT8_MAX;
	int8_t x218 = INT8_MIN;
	int32_t t43 = -11588;

    t43 = (x217<=((x218-x219)-x220));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x221 = INT64_MIN;
	static volatile int32_t x222 = 0;
	volatile int64_t x223 = 129965280260904672LL;
	int64_t x224 = 2105LL;

    t44 = (x221<=((x222-x223)-x224));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x229 = -1;
	int8_t x230 = -1;
	int8_t x231 = INT8_MAX;
	int64_t x232 = -1LL;
	volatile int32_t t45 = -19135;

    t45 = (x229<=((x230-x231)-x232));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x236 = UINT64_MAX;

    t46 = (x233<=((x234-x235)-x236));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x237 = 2U;
	int64_t x238 = INT64_MAX;
	uint64_t x239 = 237848LLU;
	uint32_t x240 = UINT32_MAX;
	static int32_t t47 = -939;

    t47 = (x237<=((x238-x239)-x240));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x245 = -1;
	volatile uint32_t x246 = 600347U;
	volatile uint8_t x247 = UINT8_MAX;
	int32_t x248 = -322;

    t48 = (x245<=((x246-x247)-x248));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x251 = INT32_MAX;
	int32_t x252 = INT32_MIN;
	int32_t t49 = -101315;

    t49 = (x249<=((x250-x251)-x252));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x254 = 3U;
	int32_t x255 = -1;

    t50 = (x253<=((x254-x255)-x256));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x263 = 26LLU;
	int32_t x264 = INT32_MAX;

    t51 = (x261<=((x262-x263)-x264));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MIN;
	static uint64_t x267 = 4055458789LLU;
	int8_t x268 = -1;
	volatile int32_t t52 = -386873;

    t52 = (x265<=((x266-x267)-x268));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x269 = UINT8_MAX;
	int64_t x270 = -1LL;
	int8_t x271 = INT8_MAX;
	static uint8_t x272 = 0U;

    t53 = (x269<=((x270-x271)-x272));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x277 = INT64_MIN;
	int64_t x278 = -4943451LL;
	int8_t x279 = 26;
	static int32_t x280 = INT32_MIN;
	volatile int32_t t54 = -8;

    t54 = (x277<=((x278-x279)-x280));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x281 = 0U;
	int32_t x282 = -26483;
	static volatile int16_t x283 = INT16_MIN;
	int32_t t55 = -5484;

    t55 = (x281<=((x282-x283)-x284));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x285 = -55;
	int64_t x286 = INT64_MIN;
	int16_t x287 = INT16_MIN;
	uint8_t x288 = 8U;

    t56 = (x285<=((x286-x287)-x288));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x289 = -1;
	static int64_t x290 = -18425LL;
	uint16_t x291 = UINT16_MAX;
	volatile uint64_t x292 = 2571806LLU;

    t57 = (x289<=((x290-x291)-x292));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x297 = -11002LL;
	uint64_t x298 = 29498643591930LLU;
	int64_t x299 = INT64_MAX;
	uint32_t x300 = 19U;
	int32_t t58 = 66231276;

    t58 = (x297<=((x298-x299)-x300));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x301 = -1LL;
	uint16_t x302 = 95U;
	uint8_t x304 = 14U;
	static volatile int32_t t59 = 223461722;

    t59 = (x301<=((x302-x303)-x304));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x305 = UINT64_MAX;
	int8_t x307 = 1;
	uint16_t x308 = UINT16_MAX;
	int32_t t60 = -230;

    t60 = (x305<=((x306-x307)-x308));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x309 = -16744720541LL;
	int64_t x310 = INT64_MAX;
	static int16_t x312 = INT16_MIN;
	static int32_t t61 = -453;

    t61 = (x309<=((x310-x311)-x312));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x313 = INT32_MIN;
	static volatile int8_t x314 = INT8_MAX;
	uint32_t x315 = 739U;
	uint32_t x316 = 502085U;
	static int32_t t62 = 169789;

    t62 = (x313<=((x314-x315)-x316));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x317 = 62220492983567LL;
	uint16_t x319 = 4338U;
	uint8_t x320 = 27U;
	int32_t t63 = 4190;

    t63 = (x317<=((x318-x319)-x320));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x321 = INT16_MAX;
	volatile int8_t x322 = 1;
	int64_t x323 = 441046520693628LL;
	int64_t x324 = -1LL;

    t64 = (x321<=((x322-x323)-x324));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x333 = 11454U;
	uint16_t x334 = 20485U;
	uint64_t x335 = 4372889771LLU;
	static int32_t x336 = -307894947;
	int32_t t65 = 38;

    t65 = (x333<=((x334-x335)-x336));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint16_t x337 = UINT16_MAX;
	int16_t x338 = 1;
	volatile int32_t t66 = -1;

    t66 = (x337<=((x338-x339)-x340));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x345 = -1699;
	static int8_t x346 = 0;
	static volatile uint16_t x347 = 2791U;
	volatile int16_t x348 = INT16_MIN;
	volatile int32_t t67 = -345986587;

    t67 = (x345<=((x346-x347)-x348));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x357 = -1LL;
	int64_t x358 = INT64_MAX;
	uint8_t x359 = UINT8_MAX;
	int64_t x360 = -55LL;
	volatile int32_t t68 = 46922;

    t68 = (x357<=((x358-x359)-x360));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x365 = INT8_MIN;
	uint32_t x366 = 14U;
	int8_t x367 = INT8_MAX;
	static volatile int32_t x368 = INT32_MIN;
	volatile int32_t t69 = 8248;

    t69 = (x365<=((x366-x367)-x368));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x369 = INT32_MIN;
	static uint64_t x371 = 1745826928291LLU;
	volatile uint32_t x372 = 4101974U;

    t70 = (x369<=((x370-x371)-x372));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int8_t x375 = -1;
	int32_t t71 = 58396970;

    t71 = (x373<=((x374-x375)-x376));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x377 = UINT8_MAX;
	int8_t x379 = -1;
	volatile int32_t t72 = 1223;

    t72 = (x377<=((x378-x379)-x380));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int64_t x389 = -1LL;
	int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MIN;
	int32_t x392 = -9142;
	int32_t t73 = -1835;

    t73 = (x389<=((x390-x391)-x392));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x393 = UINT8_MAX;
	volatile int16_t x394 = -1;
	int8_t x395 = INT8_MIN;
	int8_t x396 = -6;
	volatile int32_t t74 = -27;

    t74 = (x393<=((x394-x395)-x396));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x397 = INT32_MAX;
	volatile int64_t x398 = INT64_MIN;
	volatile int16_t x400 = INT16_MIN;
	int32_t t75 = 17786;

    t75 = (x397<=((x398-x399)-x400));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x401 = 2U;
	volatile uint32_t x402 = 32762U;
	uint16_t x403 = 4874U;
	int64_t x404 = -451287848420052LL;
	int32_t t76 = 491;

    t76 = (x401<=((x402-x403)-x404));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x405 = INT16_MIN;
	int16_t x406 = 5;
	uint64_t x408 = 1215429627996426024LLU;
	static volatile int32_t t77 = -375678958;

    t77 = (x405<=((x406-x407)-x408));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x417 = INT16_MAX;
	int16_t x418 = -23;
	uint16_t x419 = UINT16_MAX;
	uint16_t x420 = UINT16_MAX;
	int32_t t78 = -2976058;

    t78 = (x417<=((x418-x419)-x420));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x421 = UINT32_MAX;
	uint64_t x423 = 3807327307236LLU;
	int32_t t79 = -114;

    t79 = (x421<=((x422-x423)-x424));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x425 = 157U;
	int32_t x427 = -556890;
	volatile int8_t x428 = -1;
	static volatile int32_t t80 = -37292340;

    t80 = (x425<=((x426-x427)-x428));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x430 = 20436LLU;
	static int16_t x431 = INT16_MIN;
	volatile uint16_t x432 = 5932U;
	int32_t t81 = -216470;

    t81 = (x429<=((x430-x431)-x432));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x433 = INT64_MIN;
	int32_t x434 = INT32_MAX;
	static uint32_t x435 = 1517208559U;
	int16_t x436 = INT16_MAX;
	volatile int32_t t82 = 46410900;

    t82 = (x433<=((x434-x435)-x436));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x438 = 12U;
	volatile int16_t x439 = -1;
	int32_t t83 = 10970;

    t83 = (x437<=((x438-x439)-x440));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x441 = -36;
	int8_t x443 = INT8_MIN;
	static int64_t x444 = 383341122LL;
	int32_t t84 = -3208714;

    t84 = (x441<=((x442-x443)-x444));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x449 = -7241513546586612LL;
	static uint8_t x450 = 0U;
	int8_t x451 = INT8_MIN;
	static int16_t x452 = 1889;

    t85 = (x449<=((x450-x451)-x452));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x453 = INT16_MIN;
	uint16_t x454 = UINT16_MAX;
	volatile int32_t t86 = 0;

    t86 = (x453<=((x454-x455)-x456));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x461 = -1;
	int64_t x462 = -1LL;
	uint16_t x463 = 33U;
	int64_t x464 = 57316LL;
	volatile int32_t t87 = -4;

    t87 = (x461<=((x462-x463)-x464));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x470 = UINT16_MAX;
	uint64_t x471 = 173856616465833LLU;
	int32_t x472 = INT32_MAX;
	volatile int32_t t88 = 308181471;

    t88 = (x469<=((x470-x471)-x472));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x473 = -1;
	static int8_t x474 = INT8_MIN;
	int16_t x475 = INT16_MIN;
	int16_t x476 = -1;
	static int32_t t89 = -65147;

    t89 = (x473<=((x474-x475)-x476));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x477 = 3201737051LL;
	uint8_t x479 = 26U;
	int64_t x480 = INT64_MIN;
	static volatile int32_t t90 = 16962801;

    t90 = (x477<=((x478-x479)-x480));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x485 = 6U;
	int8_t x486 = INT8_MIN;
	volatile int64_t x488 = INT64_MIN;

    t91 = (x485<=((x486-x487)-x488));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x489 = 0;
	int64_t x490 = 2008LL;
	static volatile uint64_t x491 = 2222660024569632404LLU;
	volatile int32_t x492 = 5;
	int32_t t92 = 1;

    t92 = (x489<=((x490-x491)-x492));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x495 = 9030U;
	static volatile uint64_t x496 = 513LLU;
	volatile int32_t t93 = 251260;

    t93 = (x493<=((x494-x495)-x496));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x497 = 13U;
	static int16_t x498 = INT16_MAX;
	volatile int64_t x499 = -36587357676LL;
	static volatile int32_t t94 = 0;

    t94 = (x497<=((x498-x499)-x500));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x502 = INT8_MIN;
	static volatile int64_t x503 = INT64_MIN;

    t95 = (x501<=((x502-x503)-x504));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x505 = INT8_MIN;
	volatile uint64_t x507 = UINT64_MAX;
	int32_t t96 = 517;

    t96 = (x505<=((x506-x507)-x508));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x513 = INT64_MIN;
	static int8_t x514 = -1;
	volatile uint64_t x515 = 65884373392533877LLU;
	int8_t x516 = INT8_MAX;
	volatile int32_t t97 = -767066772;

    t97 = (x513<=((x514-x515)-x516));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x518 = 1922697314761LLU;
	uint64_t x519 = UINT64_MAX;
	int32_t t98 = 19124;

    t98 = (x517<=((x518-x519)-x520));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x521 = -1;
	int32_t x522 = 20180;
	volatile uint32_t x523 = 42629U;
	uint16_t x524 = 32U;

    t99 = (x521<=((x522-x523)-x524));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x525 = 3102U;
	int64_t x527 = -1LL;
	int32_t x528 = -1;
	static int32_t t100 = 150698;

    t100 = (x525<=((x526-x527)-x528));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x529 = -215414;
	int16_t x530 = -1848;
	int16_t x532 = INT16_MIN;
	volatile int32_t t101 = 2;

    t101 = (x529<=((x530-x531)-x532));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x541 = INT32_MIN;
	int32_t x542 = 2;
	uint32_t x544 = 32090082U;

    t102 = (x541<=((x542-x543)-x544));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x551 = 1301U;
	uint8_t x552 = 0U;
	volatile int32_t t103 = -27718037;

    t103 = (x549<=((x550-x551)-x552));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x553 = 10400;
	int16_t x554 = INT16_MIN;
	uint16_t x555 = 3332U;
	uint16_t x556 = 0U;
	volatile int32_t t104 = 44883427;

    t104 = (x553<=((x554-x555)-x556));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x557 = 2;
	int32_t x558 = -1;
	volatile uint32_t x559 = 91355U;
	volatile int8_t x560 = -1;
	int32_t t105 = 0;

    t105 = (x557<=((x558-x559)-x560));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x565 = 1015U;
	int16_t x566 = INT16_MIN;
	static uint8_t x567 = UINT8_MAX;
	static int64_t x568 = INT64_MIN;
	static volatile int32_t t106 = -8;

    t106 = (x565<=((x566-x567)-x568));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x573 = UINT32_MAX;
	int64_t x574 = -2261683979911519LL;
	static int16_t x575 = INT16_MIN;
	int8_t x576 = INT8_MIN;
	static volatile int32_t t107 = -810;

    t107 = (x573<=((x574-x575)-x576));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x577 = 2361020U;
	int16_t x578 = INT16_MAX;
	int16_t x580 = -1;
	volatile int32_t t108 = 24921;

    t108 = (x577<=((x578-x579)-x580));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x582 = INT16_MIN;
	int16_t x583 = INT16_MIN;
	volatile int8_t x584 = INT8_MIN;

    t109 = (x581<=((x582-x583)-x584));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x585 = INT16_MIN;
	int16_t x586 = -1372;
	int16_t x587 = INT16_MIN;
	uint64_t x588 = UINT64_MAX;
	int32_t t110 = -3871011;

    t110 = (x585<=((x586-x587)-x588));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x589 = UINT32_MAX;
	int16_t x590 = -1;
	volatile int16_t x591 = INT16_MIN;
	volatile int64_t x592 = -520777344951LL;
	int32_t t111 = 812733036;

    t111 = (x589<=((x590-x591)-x592));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x593 = -5;
	int64_t x594 = -245143969056860649LL;
	int32_t x595 = -7731155;
	int8_t x596 = 1;
	volatile int32_t t112 = 2074063;

    t112 = (x593<=((x594-x595)-x596));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x598 = -1;
	uint16_t x599 = UINT16_MAX;
	int8_t x600 = -1;
	static volatile int32_t t113 = -109;

    t113 = (x597<=((x598-x599)-x600));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x601 = INT8_MIN;
	int8_t x602 = INT8_MAX;
	static uint8_t x603 = 0U;
	uint8_t x604 = 1U;
	volatile int32_t t114 = 1;

    t114 = (x601<=((x602-x603)-x604));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x605 = -33;
	int32_t x606 = -692824894;
	int16_t x608 = INT16_MIN;
	int32_t t115 = -11112884;

    t115 = (x605<=((x606-x607)-x608));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x609 = INT64_MAX;
	int32_t x610 = -1;
	int16_t x611 = INT16_MIN;
	volatile int64_t x612 = INT64_MAX;
	volatile int32_t t116 = -8705;

    t116 = (x609<=((x610-x611)-x612));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x613 = -31309121281372LL;
	static int8_t x615 = INT8_MAX;
	static int8_t x616 = INT8_MIN;
	static int32_t t117 = 224;

    t117 = (x613<=((x614-x615)-x616));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x617 = 56U;
	static uint64_t x618 = 0LLU;
	int16_t x619 = 1766;
	volatile int32_t t118 = -14;

    t118 = (x617<=((x618-x619)-x620));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x622 = INT8_MIN;
	int8_t x623 = -3;
	int32_t x624 = -179;
	volatile int32_t t119 = 166;

    t119 = (x621<=((x622-x623)-x624));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x629 = INT8_MIN;
	static volatile int16_t x631 = -568;
	int8_t x632 = 1;
	volatile int32_t t120 = -32746271;

    t120 = (x629<=((x630-x631)-x632));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x633 = 1935;
	int8_t x634 = INT8_MAX;
	static int16_t x635 = INT16_MAX;
	static volatile int32_t t121 = 2100603;

    t121 = (x633<=((x634-x635)-x636));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x641 = -1750;
	volatile int64_t x643 = 193895900LL;
	int32_t t122 = 51;

    t122 = (x641<=((x642-x643)-x644));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x645 = UINT32_MAX;
	static int64_t x646 = INT64_MAX;
	uint8_t x647 = UINT8_MAX;
	volatile int8_t x648 = INT8_MAX;
	volatile int32_t t123 = -1475906;

    t123 = (x645<=((x646-x647)-x648));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x653 = INT32_MIN;
	int64_t x654 = -41LL;
	volatile int32_t x655 = -1;
	static int8_t x656 = INT8_MIN;
	volatile int32_t t124 = 1;

    t124 = (x653<=((x654-x655)-x656));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x658 = 1;
	int16_t x659 = INT16_MIN;
	static uint16_t x660 = UINT16_MAX;
	static int32_t t125 = 3796;

    t125 = (x657<=((x658-x659)-x660));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x661 = -1;
	int64_t x662 = INT64_MAX;
	uint64_t x663 = 83768362LLU;
	int8_t x664 = -1;
	volatile int32_t t126 = 430;

    t126 = (x661<=((x662-x663)-x664));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x665 = 0;
	uint64_t x666 = UINT64_MAX;
	volatile uint32_t x667 = UINT32_MAX;
	int64_t x668 = -919LL;
	int32_t t127 = -5814;

    t127 = (x665<=((x666-x667)-x668));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x669 = -1;
	uint64_t x670 = 38826899LLU;
	static int32_t x671 = INT32_MAX;
	int16_t x672 = INT16_MAX;
	volatile int32_t t128 = 14596407;

    t128 = (x669<=((x670-x671)-x672));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x673 = 4990U;
	volatile int16_t x674 = 7;
	static uint64_t x675 = 480925826358050923LLU;
	uint64_t x676 = 2120773298222038LLU;
	static int32_t t129 = 5971;

    t129 = (x673<=((x674-x675)-x676));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x678 = -1;
	uint64_t x680 = 63850392822715LLU;
	volatile int32_t t130 = -121574;

    t130 = (x677<=((x678-x679)-x680));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x681 = UINT32_MAX;
	uint16_t x682 = 1U;
	uint64_t x683 = UINT64_MAX;
	int32_t x684 = -119559827;
	int32_t t131 = 219881;

    t131 = (x681<=((x682-x683)-x684));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x685 = UINT32_MAX;
	int32_t x686 = 152;
	int32_t x687 = 282748981;
	int16_t x688 = -1;
	int32_t t132 = -510923;

    t132 = (x685<=((x686-x687)-x688));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x689 = 1162576860185548726LL;
	static int8_t x690 = -1;
	uint16_t x692 = UINT16_MAX;
	volatile int32_t t133 = 16;

    t133 = (x689<=((x690-x691)-x692));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x693 = 9604945U;
	int8_t x694 = INT8_MIN;
	static int32_t x695 = -1;
	uint16_t x696 = 13651U;
	int32_t t134 = 901331;

    t134 = (x693<=((x694-x695)-x696));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x697 = 4890U;
	int8_t x698 = INT8_MAX;
	int16_t x699 = -1;
	int32_t x700 = INT32_MAX;
	int32_t t135 = 120455367;

    t135 = (x697<=((x698-x699)-x700));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x701 = 32098U;
	volatile uint64_t x703 = UINT64_MAX;
	int32_t x704 = INT32_MAX;
	static int32_t t136 = 12;

    t136 = (x701<=((x702-x703)-x704));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x706 = 376221272258007274LLU;
	static uint32_t x708 = UINT32_MAX;
	volatile int32_t t137 = -5789;

    t137 = (x705<=((x706-x707)-x708));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x714 = -1;
	uint8_t x715 = 0U;
	int8_t x716 = INT8_MAX;
	int32_t t138 = -435978447;

    t138 = (x713<=((x714-x715)-x716));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x717 = INT8_MAX;
	static uint32_t x718 = UINT32_MAX;
	static uint16_t x719 = 14U;
	int32_t t139 = -110135759;

    t139 = (x717<=((x718-x719)-x720));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x729 = INT64_MIN;
	int64_t x732 = -1LL;
	static volatile int32_t t140 = -2519;

    t140 = (x729<=((x730-x731)-x732));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x733 = UINT16_MAX;
	volatile int8_t x735 = INT8_MAX;
	int16_t x736 = INT16_MAX;
	volatile int32_t t141 = 578917366;

    t141 = (x733<=((x734-x735)-x736));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x737 = UINT16_MAX;
	int64_t x739 = INT64_MIN;
	int16_t x740 = 39;
	volatile int32_t t142 = 31;

    t142 = (x737<=((x738-x739)-x740));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x741 = 10163835;
	int16_t x742 = INT16_MIN;
	volatile int8_t x743 = -1;
	int32_t x744 = -1;
	int32_t t143 = -8;

    t143 = (x741<=((x742-x743)-x744));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x745 = 59U;
	static int8_t x746 = INT8_MIN;
	volatile int32_t t144 = -1;

    t144 = (x745<=((x746-x747)-x748));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x749 = INT8_MIN;
	static int16_t x750 = 0;
	int16_t x751 = INT16_MAX;
	volatile uint16_t x752 = 13394U;
	int32_t t145 = -1574164;

    t145 = (x749<=((x750-x751)-x752));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x753 = UINT8_MAX;
	static volatile int64_t x754 = -1350298341542573LL;
	volatile uint32_t x755 = 69U;
	int64_t x756 = INT64_MIN;
	volatile int32_t t146 = 0;

    t146 = (x753<=((x754-x755)-x756));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x757 = 26U;
	int16_t x758 = 1;
	volatile int32_t x760 = INT32_MIN;
	int32_t t147 = 122040495;

    t147 = (x757<=((x758-x759)-x760));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x761 = UINT32_MAX;
	uint16_t x762 = 510U;
	static volatile uint16_t x763 = 4725U;
	static volatile int32_t t148 = -475270;

    t148 = (x761<=((x762-x763)-x764));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x770 = UINT16_MAX;
	int32_t x771 = -1;
	int16_t x772 = -1018;
	int32_t t149 = -15231;

    t149 = (x769<=((x770-x771)-x772));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x777 = UINT16_MAX;
	static uint8_t x778 = 0U;
	uint64_t x780 = 1541981643169503179LLU;
	volatile int32_t t150 = 17644556;

    t150 = (x777<=((x778-x779)-x780));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x781 = 1747;
	volatile uint16_t x782 = 2434U;
	static volatile int64_t x783 = INT64_MAX;
	uint8_t x784 = 0U;
	int32_t t151 = 1820;

    t151 = (x781<=((x782-x783)-x784));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x785 = 0LL;
	static int32_t x786 = 216864093;
	int64_t x787 = 3588778618677995742LL;
	volatile int32_t x788 = INT32_MIN;
	volatile int32_t t152 = -11112;

    t152 = (x785<=((x786-x787)-x788));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x789 = -27;
	int16_t x790 = INT16_MIN;
	int8_t x792 = INT8_MIN;
	int32_t t153 = 274;

    t153 = (x789<=((x790-x791)-x792));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x793 = INT16_MIN;
	volatile int32_t x794 = INT32_MIN;
	static volatile int32_t x795 = INT32_MIN;
	static int32_t x796 = -1;
	static int32_t t154 = -3;

    t154 = (x793<=((x794-x795)-x796));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x797 = INT8_MIN;
	int16_t x798 = INT16_MAX;
	static volatile int8_t x800 = -1;
	int32_t t155 = 3;

    t155 = (x797<=((x798-x799)-x800));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x801 = 0;
	int64_t x802 = 2LL;
	volatile int8_t x803 = INT8_MAX;
	int8_t x804 = INT8_MIN;
	volatile int32_t t156 = 539219212;

    t156 = (x801<=((x802-x803)-x804));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x805 = -189933LL;
	volatile int16_t x806 = INT16_MIN;
	static int32_t x807 = -357803613;
	int8_t x808 = INT8_MIN;
	int32_t t157 = -2;

    t157 = (x805<=((x806-x807)-x808));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x809 = 365U;
	uint8_t x811 = 3U;
	static int32_t t158 = -156927895;

    t158 = (x809<=((x810-x811)-x812));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x813 = 11611455003LLU;
	volatile int8_t x814 = -8;
	static int8_t x815 = INT8_MIN;
	static uint16_t x816 = UINT16_MAX;
	int32_t t159 = 428;

    t159 = (x813<=((x814-x815)-x816));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x817 = 39;
	int64_t x818 = 7LL;
	int16_t x819 = INT16_MAX;
	int16_t x820 = -24;
	int32_t t160 = 200450025;

    t160 = (x817<=((x818-x819)-x820));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x821 = UINT8_MAX;
	volatile int16_t x822 = -1;
	int64_t x823 = 6250909034404617LL;
	uint64_t x824 = 4LLU;
	int32_t t161 = 1;

    t161 = (x821<=((x822-x823)-x824));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x829 = INT64_MIN;
	int32_t t162 = 1029263962;

    t162 = (x829<=((x830-x831)-x832));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x837 = 57;
	static volatile int16_t x838 = INT16_MAX;
	static int16_t x839 = -1;
	uint32_t x840 = 3U;
	int32_t t163 = 46912;

    t163 = (x837<=((x838-x839)-x840));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x841 = INT32_MAX;
	int64_t x843 = INT64_MAX;
	volatile int64_t x844 = INT64_MIN;
	volatile int32_t t164 = 144374;

    t164 = (x841<=((x842-x843)-x844));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x849 = INT16_MIN;
	static int16_t x850 = INT16_MAX;
	static uint8_t x851 = 5U;
	volatile int32_t t165 = 1041344334;

    t165 = (x849<=((x850-x851)-x852));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x854 = 916633395LLU;
	int16_t x855 = 4216;
	static uint16_t x856 = UINT16_MAX;
	volatile int32_t t166 = -21;

    t166 = (x853<=((x854-x855)-x856));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x859 = 1811;
	int64_t x860 = INT64_MAX;

    t167 = (x857<=((x858-x859)-x860));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x861 = -1;
	int8_t x862 = -8;
	int32_t t168 = -776687171;

    t168 = (x861<=((x862-x863)-x864));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x865 = -1;
	int64_t x867 = -610214LL;
	volatile uint8_t x868 = UINT8_MAX;
	static int32_t t169 = -238;

    t169 = (x865<=((x866-x867)-x868));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x869 = INT16_MIN;
	int64_t x871 = -19532791827502LL;
	int8_t x872 = 7;
	static int32_t t170 = -7937;

    t170 = (x869<=((x870-x871)-x872));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x877 = 0U;
	int8_t x880 = -1;
	volatile int32_t t171 = -588999;

    t171 = (x877<=((x878-x879)-x880));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x881 = UINT32_MAX;
	volatile uint32_t x882 = 835695U;
	int64_t x883 = INT64_MAX;
	static uint8_t x884 = UINT8_MAX;
	volatile int32_t t172 = 529736001;

    t172 = (x881<=((x882-x883)-x884));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x889 = 3U;
	static int32_t x890 = INT32_MIN;
	int64_t x891 = INT64_MIN;
	int8_t x892 = 18;
	int32_t t173 = 39;

    t173 = (x889<=((x890-x891)-x892));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x893 = -5;
	int64_t x894 = 4346868631781LL;
	int64_t x895 = 2398764130LL;
	int64_t x896 = 274LL;

    t174 = (x893<=((x894-x895)-x896));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x897 = 91U;
	static uint8_t x898 = 1U;
	static uint8_t x899 = 24U;
	uint64_t x900 = 79099611900310355LLU;

    t175 = (x897<=((x898-x899)-x900));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x901 = INT64_MIN;
	int8_t x902 = -2;
	uint8_t x903 = 5U;
	int8_t x904 = INT8_MIN;
	int32_t t176 = 122;

    t176 = (x901<=((x902-x903)-x904));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x905 = INT8_MIN;
	uint32_t x906 = 12154877U;
	volatile int32_t x907 = INT32_MAX;
	static int64_t x908 = -64339968833814879LL;

    t177 = (x905<=((x906-x907)-x908));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x913 = 7;
	static uint64_t x915 = UINT64_MAX;
	int16_t x916 = INT16_MIN;
	volatile int32_t t178 = -8004;

    t178 = (x913<=((x914-x915)-x916));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x917 = INT16_MAX;
	int8_t x918 = 0;
	int8_t x919 = -1;
	uint32_t x920 = 3480289U;
	int32_t t179 = 464713518;

    t179 = (x917<=((x918-x919)-x920));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x921 = INT16_MAX;
	uint8_t x922 = 62U;
	static int16_t x923 = INT16_MIN;
	static int64_t x924 = -1LL;

    t180 = (x921<=((x922-x923)-x924));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x931 = -903;
	int8_t x932 = 1;
	volatile int32_t t181 = -6113;

    t181 = (x929<=((x930-x931)-x932));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x933 = INT32_MIN;
	volatile int32_t x934 = INT32_MIN;
	int32_t x935 = -1;
	int16_t x936 = INT16_MIN;

    t182 = (x933<=((x934-x935)-x936));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x941 = 0;
	uint64_t x942 = 98611LLU;
	static int8_t x943 = INT8_MIN;
	int8_t x944 = INT8_MIN;
	volatile int32_t t183 = 24672155;

    t183 = (x941<=((x942-x943)-x944));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x949 = -1;
	int16_t x951 = -14;
	uint8_t x952 = 8U;
	volatile int32_t t184 = 93204196;

    t184 = (x949<=((x950-x951)-x952));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x953 = 838224462;
	int8_t x955 = 1;

    t185 = (x953<=((x954-x955)-x956));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x965 = 9269606878915LLU;
	static int64_t x966 = INT64_MIN;
	int32_t x967 = -1;
	int32_t t186 = 244632117;

    t186 = (x965<=((x966-x967)-x968));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x970 = UINT32_MAX;
	static int16_t x971 = -1;
	volatile int32_t t187 = 11568;

    t187 = (x969<=((x970-x971)-x972));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x973 = -422587;
	int32_t x974 = -1;
	int32_t x975 = INT32_MIN;
	uint8_t x976 = UINT8_MAX;
	int32_t t188 = 7227221;

    t188 = (x973<=((x974-x975)-x976));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x977 = -1;
	static volatile int16_t x979 = INT16_MIN;
	volatile int16_t x980 = -1;
	volatile int32_t t189 = 650510;

    t189 = (x977<=((x978-x979)-x980));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x981 = 0U;
	uint8_t x982 = UINT8_MAX;
	int8_t x983 = -1;
	uint32_t x984 = 53U;
	volatile int32_t t190 = 23439719;

    t190 = (x981<=((x982-x983)-x984));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x985 = 25867U;
	uint8_t x987 = UINT8_MAX;
	uint32_t x988 = UINT32_MAX;
	static int32_t t191 = -792157;

    t191 = (x985<=((x986-x987)-x988));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x989 = INT64_MIN;
	uint32_t x990 = 38U;
	int64_t x991 = INT64_MAX;
	static uint8_t x992 = 1U;
	int32_t t192 = -123521555;

    t192 = (x989<=((x990-x991)-x992));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x994 = 15U;
	volatile int16_t x995 = INT16_MAX;
	static uint32_t x996 = 12022U;
	volatile int32_t t193 = -1;

    t193 = (x993<=((x994-x995)-x996));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x998 = -1;
	volatile uint8_t x999 = 0U;
	int8_t x1000 = INT8_MIN;
	int32_t t194 = 0;

    t194 = (x997<=((x998-x999)-x1000));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1001 = INT64_MAX;
	uint32_t x1002 = 15U;
	static uint32_t x1003 = 908916U;
	volatile int32_t t195 = -20;

    t195 = (x1001<=((x1002-x1003)-x1004));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x1007 = 4153172918512330LLU;
	static uint8_t x1008 = UINT8_MAX;
	volatile int32_t t196 = -4676;

    t196 = (x1005<=((x1006-x1007)-x1008));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1009 = 518377231495890LL;
	int8_t x1010 = INT8_MIN;
	volatile uint8_t x1012 = UINT8_MAX;
	int32_t t197 = -444;

    t197 = (x1009<=((x1010-x1011)-x1012));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1013 = INT32_MIN;
	static int64_t x1014 = -1LL;
	static uint8_t x1015 = 14U;
	int16_t x1016 = INT16_MIN;
	volatile int32_t t198 = -6577;

    t198 = (x1013<=((x1014-x1015)-x1016));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1017 = -1489;
	static int32_t x1018 = 13;
	int8_t x1019 = INT8_MAX;
	uint32_t x1020 = 32123U;
	int32_t t199 = 26421;

    t199 = (x1017<=((x1018-x1019)-x1020));

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

