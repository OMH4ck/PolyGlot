
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

static int8_t x1 = -1;
uint64_t x6 = 40024713859806055LLU;
uint8_t x9 = 86U;
volatile int32_t x10 = INT32_MIN;
volatile uint64_t x21 = 207417LLU;
volatile int64_t x24 = INT64_MIN;
volatile int32_t t5 = 115;
volatile int16_t x25 = -19;
uint32_t x29 = 75U;
int16_t x40 = -1;
volatile uint64_t x43 = 481LLU;
uint16_t x51 = UINT16_MAX;
int32_t x52 = -1;
int8_t x54 = 26;
int32_t t14 = -23150;
uint16_t x65 = 3319U;
int32_t t15 = -448368;
volatile int32_t t18 = -8026463;
int16_t x86 = INT16_MAX;
int16_t x88 = -6846;
volatile int32_t t21 = -80;
int64_t x96 = 16510279907796849LL;
int32_t t22 = 403683;
int32_t t23 = -103;
volatile uint64_t x101 = UINT64_MAX;
int16_t x107 = -1;
int32_t t25 = -410977000;
static int32_t x117 = -4079060;
static uint8_t x128 = 2U;
int32_t t30 = 1;
volatile int32_t t31 = 2368;
int32_t x142 = 229618;
int16_t x145 = 5;
uint16_t x147 = 335U;
int8_t x148 = INT8_MIN;
int16_t x149 = INT16_MIN;
static int64_t x152 = INT64_MIN;
int16_t x159 = INT16_MIN;
int16_t x160 = INT16_MAX;
volatile int32_t t36 = -5732;
int8_t x163 = -1;
volatile int64_t x164 = INT64_MAX;
uint32_t x169 = 23822U;
int32_t x172 = INT32_MAX;
uint8_t x176 = 29U;
volatile int32_t t40 = 595;
int64_t x180 = -1LL;
int8_t x191 = INT8_MAX;
static int64_t x195 = INT64_MIN;
int8_t x196 = INT8_MAX;
volatile uint16_t x201 = 14395U;
static uint8_t x208 = 66U;
uint32_t x213 = 597788U;
static int16_t x215 = INT16_MAX;
static volatile int32_t x222 = 111902816;
static volatile int64_t x230 = INT64_MIN;
int64_t x231 = INT64_MIN;
static int64_t x241 = INT64_MIN;
int32_t x244 = INT32_MAX;
int64_t x245 = INT64_MIN;
int32_t x250 = INT32_MIN;
uint8_t x258 = 0U;
static volatile int32_t x261 = 0;
uint16_t x264 = 127U;
static uint8_t x266 = 1U;
volatile int32_t t62 = 1;
int32_t x275 = INT32_MIN;
static int64_t x279 = INT64_MIN;
static int8_t x286 = INT8_MIN;
uint64_t x289 = UINT64_MAX;
volatile int64_t x290 = INT64_MIN;
int32_t x291 = INT32_MIN;
int64_t x298 = INT64_MAX;
volatile int32_t t69 = 202;
int32_t x302 = 0;
int32_t t70 = -20401745;
int64_t x307 = INT64_MIN;
static int16_t x308 = INT16_MIN;
static int16_t x310 = INT16_MIN;
static volatile int32_t t72 = 2376;
int32_t x313 = INT32_MIN;
volatile int32_t x314 = INT32_MIN;
int8_t x317 = INT8_MIN;
volatile uint32_t x321 = UINT32_MAX;
volatile int32_t t76 = -8886642;
static volatile uint32_t x329 = 4389235U;
static int64_t x331 = -1LL;
int32_t t77 = 23194912;
volatile int32_t t78 = 26444435;
volatile int32_t t79 = 3475607;
int32_t t80 = 1954661;
int8_t x346 = -1;
volatile int16_t x350 = -1;
int16_t x354 = INT16_MAX;
int64_t x356 = -1979267LL;
uint32_t x365 = UINT32_MAX;
uint32_t x367 = 1993635023U;
int16_t x370 = INT16_MIN;
int64_t x372 = -148416656LL;
uint8_t x374 = UINT8_MAX;
volatile int8_t x381 = INT8_MIN;
int16_t x382 = -1;
int32_t t90 = 2939050;
volatile int32_t t91 = -386;
int32_t t92 = -31015700;
int64_t x395 = INT64_MAX;
volatile int32_t t93 = -247;
volatile uint64_t x397 = UINT64_MAX;
int16_t x398 = 22;
int8_t x404 = 1;
int64_t x410 = INT64_MAX;
int64_t x413 = INT64_MIN;
int64_t x422 = INT64_MAX;
volatile int64_t x423 = INT64_MIN;
uint16_t x430 = 12755U;
int64_t x431 = INT64_MIN;
volatile uint64_t x445 = UINT64_MAX;
int8_t x450 = INT8_MIN;
int32_t x456 = INT32_MIN;
int8_t x459 = -1;
int64_t x470 = INT64_MIN;
int32_t t112 = 128307;
int32_t t114 = 484306658;
uint8_t x482 = 85U;
int8_t x485 = INT8_MIN;
int8_t x487 = -1;
int16_t x488 = INT16_MIN;
int16_t x490 = INT16_MAX;
volatile uint64_t x492 = 750009LLU;
volatile int32_t t117 = -497001865;
volatile int8_t x493 = INT8_MIN;
volatile int32_t t118 = -126125;
int8_t x497 = INT8_MAX;
int32_t t119 = 92553969;
static int8_t x501 = -1;
uint32_t x502 = 2025498U;
volatile int32_t t121 = 5;
int64_t x510 = -1LL;
uint64_t x513 = UINT64_MAX;
uint64_t x514 = 1518LLU;
static int32_t x517 = -1;
int32_t x518 = -540010352;
static int64_t x526 = -1LL;
volatile int32_t t127 = -127227063;
volatile uint64_t x534 = UINT64_MAX;
volatile int32_t x536 = INT32_MIN;
uint64_t x537 = 1647LLU;
volatile int32_t t129 = -20214;
uint8_t x541 = 3U;
int16_t x545 = -1;
int32_t t133 = -252;
int8_t x559 = -1;
volatile int32_t x565 = INT32_MIN;
static int32_t x572 = INT32_MAX;
volatile int32_t t139 = -15336;
uint16_t x583 = 1103U;
uint32_t x589 = UINT32_MAX;
int32_t x594 = INT32_MIN;
uint64_t x596 = 419LLU;
int64_t x600 = INT64_MIN;
int32_t t144 = -79;
int32_t x601 = -1;
int8_t x607 = 3;
int32_t x611 = -178729354;
volatile int32_t t147 = 98;
static uint8_t x621 = 98U;
volatile int32_t x622 = INT32_MIN;
static int8_t x624 = INT8_MAX;
int32_t x626 = INT32_MIN;
int32_t t152 = 111496803;
volatile int64_t x633 = 2094000521912LL;
static int8_t x635 = INT8_MIN;
static int32_t x637 = INT32_MAX;
volatile int16_t x640 = INT16_MAX;
static volatile int32_t x645 = INT32_MIN;
uint32_t x652 = 649335643U;
int64_t x659 = 0LL;
static uint16_t x660 = 3058U;
volatile int16_t x662 = -1657;
volatile int32_t t160 = 513619770;
uint16_t x665 = 3U;
uint16_t x667 = 69U;
volatile int32_t t162 = 4;
static int64_t x673 = -1LL;
uint16_t x686 = 1U;
volatile int32_t x689 = -2;
static int32_t t167 = -125587202;
static uint32_t x702 = UINT32_MAX;
uint32_t x704 = 7555952U;
int32_t t169 = 157;
uint64_t x707 = 12805435679LLU;
int32_t x710 = -575566839;
uint16_t x711 = 221U;
int16_t x718 = INT16_MIN;
volatile int16_t x722 = -1;
int8_t x730 = INT8_MIN;
static uint8_t x732 = UINT8_MAX;
volatile int32_t x741 = INT32_MIN;
int32_t x751 = INT32_MIN;
int16_t x752 = INT16_MAX;
static volatile int64_t x756 = INT64_MIN;
volatile int32_t t183 = -51;
volatile int16_t x764 = -140;
uint64_t x766 = UINT64_MAX;
uint16_t x772 = 71U;
int64_t x777 = 290098643694708594LL;
volatile int8_t x780 = 1;
volatile int32_t t189 = 509783;
int16_t x788 = -30;
int32_t x790 = 18171273;
int32_t t192 = 1;
int8_t x797 = INT8_MIN;
static volatile int32_t t195 = -39;
uint16_t x814 = UINT16_MAX;
static int64_t x817 = INT64_MAX;
static int32_t t197 = -1439;
int8_t x823 = INT8_MIN;
uint16_t x828 = 761U;


void f0(void) {
    	int16_t x2 = 3915;
	uint64_t x3 = 1593033370094707705LLU;
	int64_t x4 = 1149937126194784931LL;
	volatile int32_t t0 = 8;

    t0 = (x1!=((x2|x3)%x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	static uint32_t x7 = UINT32_MAX;
	static int8_t x8 = INT8_MAX;
	int32_t t1 = 115391;

    t1 = (x5!=((x6|x7)%x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x11 = 1LL;
	int8_t x12 = 1;
	static int32_t t2 = -1641431;

    t2 = (x9!=((x10|x11)%x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 8653690;
	int8_t x14 = INT8_MAX;
	int64_t x15 = INT64_MIN;
	uint64_t x16 = 180850918163212LLU;
	static volatile int32_t t3 = 0;

    t3 = (x13!=((x14|x15)%x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	int8_t x18 = -1;
	uint64_t x19 = UINT64_MAX;
	volatile int32_t x20 = INT32_MAX;
	int32_t t4 = 497;

    t4 = (x17!=((x18|x19)%x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x22 = 1549410744U;
	int32_t x23 = -17753;

    t5 = (x21!=((x22|x23)%x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = -14;
	uint64_t x27 = 228334542LLU;
	static int32_t x28 = 3570;
	int32_t t6 = 886044;

    t6 = (x25!=((x26|x27)%x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x30 = INT8_MAX;
	int8_t x31 = INT8_MIN;
	int32_t x32 = -836120;
	int32_t t7 = -53526269;

    t7 = (x29!=((x30|x31)%x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	static int32_t x34 = INT32_MAX;
	int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	static volatile int32_t t8 = -6934;

    t8 = (x33!=((x34|x35)%x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -2869201LL;
	uint8_t x38 = 47U;
	int64_t x39 = INT64_MIN;
	int32_t t9 = -4680665;

    t9 = (x37!=((x38|x39)%x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = 3807576743129LL;
	uint16_t x42 = 389U;
	volatile uint16_t x44 = UINT16_MAX;
	int32_t t10 = 8181814;

    t10 = (x41!=((x42|x43)%x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = 2U;
	int8_t x50 = 0;
	volatile int32_t t11 = -283480;

    t11 = (x49!=((x50|x51)%x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x53 = 13U;
	volatile uint8_t x55 = 2U;
	int8_t x56 = -1;
	volatile int32_t t12 = -685956861;

    t12 = (x53!=((x54|x55)%x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MIN;
	static uint64_t x58 = 32536028412LLU;
	volatile int64_t x59 = INT64_MIN;
	int16_t x60 = 1;
	volatile int32_t t13 = -154;

    t13 = (x57!=((x58|x59)%x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x61 = -1;
	static int16_t x62 = INT16_MAX;
	uint16_t x63 = 14104U;
	int8_t x64 = -7;

    t14 = (x61!=((x62|x63)%x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x66 = UINT64_MAX;
	int64_t x67 = INT64_MIN;
	uint32_t x68 = 449U;

    t15 = (x65!=((x66|x67)%x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = INT8_MIN;
	uint32_t x70 = 2935131U;
	int8_t x71 = INT8_MIN;
	static int16_t x72 = -135;
	int32_t t16 = 807;

    t16 = (x69!=((x70|x71)%x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = 0U;
	int32_t x74 = -396724;
	volatile int8_t x75 = -1;
	int64_t x76 = -178537658836LL;
	int32_t t17 = -66221770;

    t17 = (x73!=((x74|x75)%x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = -9;
	int64_t x78 = INT64_MAX;
	static int8_t x79 = -1;
	int64_t x80 = -35182077751LL;

    t18 = (x77!=((x78|x79)%x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = 1;
	int8_t x82 = -1;
	uint32_t x83 = 4028U;
	static int8_t x84 = 1;
	volatile int32_t t19 = -33400706;

    t19 = (x81!=((x82|x83)%x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 9U;
	static uint32_t x87 = 8797936U;
	volatile int32_t t20 = -1;

    t20 = (x85!=((x86|x87)%x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = 62;
	int64_t x90 = 23LL;
	volatile uint16_t x91 = 1306U;
	static uint16_t x92 = UINT16_MAX;

    t21 = (x89!=((x90|x91)%x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x93 = INT64_MAX;
	int64_t x94 = -1LL;
	static int16_t x95 = INT16_MIN;

    t22 = (x93!=((x94|x95)%x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = INT64_MIN;
	int32_t x98 = INT32_MAX;
	int8_t x99 = -20;
	uint64_t x100 = UINT64_MAX;

    t23 = (x97!=((x98|x99)%x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x102 = 934101LLU;
	uint16_t x103 = 1U;
	static volatile int32_t x104 = INT32_MIN;
	static volatile int32_t t24 = 143760910;

    t24 = (x101!=((x102|x103)%x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = INT32_MIN;
	int8_t x106 = INT8_MAX;
	uint16_t x108 = UINT16_MAX;

    t25 = (x105!=((x106|x107)%x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x109 = 97U;
	uint8_t x110 = UINT8_MAX;
	static volatile int32_t x111 = -3730238;
	volatile int64_t x112 = INT64_MAX;
	int32_t t26 = -111595408;

    t26 = (x109!=((x110|x111)%x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x118 = -3;
	int64_t x119 = -1LL;
	uint32_t x120 = 42U;
	static int32_t t27 = -17126;

    t27 = (x117!=((x118|x119)%x120));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x121 = 2U;
	int16_t x122 = INT16_MIN;
	static int16_t x123 = INT16_MIN;
	uint8_t x124 = UINT8_MAX;
	int32_t t28 = 7486;

    t28 = (x121!=((x122|x123)%x124));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x125 = 0U;
	int32_t x126 = INT32_MIN;
	int64_t x127 = -1140LL;
	int32_t t29 = 47;

    t29 = (x125!=((x126|x127)%x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = INT64_MIN;
	volatile int32_t x130 = -7;
	uint16_t x131 = 42U;
	int32_t x132 = 15681;

    t30 = (x129!=((x130|x131)%x132));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = -1975092;
	int32_t x138 = -1;
	uint32_t x139 = 1U;
	int16_t x140 = -246;

    t31 = (x137!=((x138|x139)%x140));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x141 = -1;
	volatile uint8_t x143 = 118U;
	uint64_t x144 = UINT64_MAX;
	static int32_t t32 = 3016199;

    t32 = (x141!=((x142|x143)%x144));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x146 = 30U;
	static volatile int32_t t33 = 488303;

    t33 = (x145!=((x146|x147)%x148));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x150 = -1;
	int8_t x151 = 20;
	int32_t t34 = -16994211;

    t34 = (x149!=((x150|x151)%x152));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x153 = INT64_MAX;
	int16_t x154 = -10955;
	int64_t x155 = INT64_MAX;
	static int8_t x156 = -51;
	volatile int32_t t35 = -55921;

    t35 = (x153!=((x154|x155)%x156));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x157 = -1LL;
	int32_t x158 = INT32_MAX;

    t36 = (x157!=((x158|x159)%x160));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x161 = 2348651303667071528LLU;
	static uint16_t x162 = 10103U;
	volatile int32_t t37 = -922863;

    t37 = (x161!=((x162|x163)%x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x165 = INT8_MIN;
	int16_t x166 = INT16_MAX;
	int16_t x167 = INT16_MAX;
	uint16_t x168 = 54U;
	int32_t t38 = -1;

    t38 = (x165!=((x166|x167)%x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x170 = -134955;
	static int16_t x171 = 222;
	static int32_t t39 = 203;

    t39 = (x169!=((x170|x171)%x172));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x173 = 128202678U;
	volatile int32_t x174 = -1;
	int16_t x175 = INT16_MAX;

    t40 = (x173!=((x174|x175)%x176));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x177 = INT16_MAX;
	static uint32_t x178 = 51425U;
	int64_t x179 = INT64_MIN;
	static volatile int32_t t41 = 3039;

    t41 = (x177!=((x178|x179)%x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x181 = 161;
	volatile uint32_t x182 = 710958U;
	int16_t x183 = -2;
	int8_t x184 = -1;
	static int32_t t42 = 9425;

    t42 = (x181!=((x182|x183)%x184));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x185 = -1LL;
	int8_t x186 = 0;
	static uint8_t x187 = UINT8_MAX;
	int8_t x188 = INT8_MIN;
	static volatile int32_t t43 = 167681078;

    t43 = (x185!=((x186|x187)%x188));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x189 = 627950522810LL;
	static int8_t x190 = 1;
	uint32_t x192 = UINT32_MAX;
	int32_t t44 = -1;

    t44 = (x189!=((x190|x191)%x192));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x193 = -1;
	int16_t x194 = INT16_MIN;
	int32_t t45 = -5074;

    t45 = (x193!=((x194|x195)%x196));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x197 = 10U;
	int16_t x198 = INT16_MIN;
	uint16_t x199 = UINT16_MAX;
	uint32_t x200 = 533011U;
	int32_t t46 = -6;

    t46 = (x197!=((x198|x199)%x200));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x202 = -2;
	volatile int8_t x203 = INT8_MAX;
	int64_t x204 = INT64_MAX;
	int32_t t47 = 1;

    t47 = (x201!=((x202|x203)%x204));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x205 = INT32_MIN;
	uint32_t x206 = UINT32_MAX;
	int64_t x207 = INT64_MAX;
	int32_t t48 = 112;

    t48 = (x205!=((x206|x207)%x208));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x209 = 910U;
	static uint32_t x210 = 217745325U;
	uint64_t x211 = 86143119648753LLU;
	static int64_t x212 = -187LL;
	int32_t t49 = 5616682;

    t49 = (x209!=((x210|x211)%x212));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x214 = UINT16_MAX;
	static volatile int32_t x216 = 195910;
	int32_t t50 = -70310;

    t50 = (x213!=((x214|x215)%x216));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x217 = INT16_MIN;
	uint8_t x218 = UINT8_MAX;
	int16_t x219 = 2446;
	uint64_t x220 = UINT64_MAX;
	static volatile int32_t t51 = 285522963;

    t51 = (x217!=((x218|x219)%x220));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x221 = UINT64_MAX;
	int32_t x223 = 5;
	volatile int64_t x224 = INT64_MIN;
	int32_t t52 = -313647471;

    t52 = (x221!=((x222|x223)%x224));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x225 = 5061901525LLU;
	uint64_t x226 = 5LLU;
	int64_t x227 = INT64_MIN;
	volatile uint8_t x228 = UINT8_MAX;
	static volatile int32_t t53 = 15;

    t53 = (x225!=((x226|x227)%x228));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x229 = -20LL;
	uint8_t x232 = 3U;
	int32_t t54 = -132485685;

    t54 = (x229!=((x230|x231)%x232));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x233 = INT32_MAX;
	volatile int16_t x234 = INT16_MIN;
	int32_t x235 = -358;
	uint32_t x236 = 283142U;
	volatile int32_t t55 = -85;

    t55 = (x233!=((x234|x235)%x236));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x242 = INT64_MIN;
	volatile int16_t x243 = INT16_MIN;
	int32_t t56 = -290;

    t56 = (x241!=((x242|x243)%x244));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x246 = 126LL;
	volatile int16_t x247 = INT16_MAX;
	int8_t x248 = 1;
	volatile int32_t t57 = 579287;

    t57 = (x245!=((x246|x247)%x248));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x249 = INT64_MIN;
	uint32_t x251 = 115U;
	int16_t x252 = -2328;
	int32_t t58 = 184352891;

    t58 = (x249!=((x250|x251)%x252));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x253 = INT32_MIN;
	volatile uint64_t x254 = UINT64_MAX;
	static uint16_t x255 = 57U;
	int16_t x256 = INT16_MAX;
	volatile int32_t t59 = 3;

    t59 = (x253!=((x254|x255)%x256));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x257 = 2437U;
	int64_t x259 = INT64_MIN;
	volatile int64_t x260 = -2LL;
	int32_t t60 = 0;

    t60 = (x257!=((x258|x259)%x260));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x262 = -1LL;
	int64_t x263 = -1LL;
	volatile int32_t t61 = -1;

    t61 = (x261!=((x262|x263)%x264));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x265 = 4;
	int64_t x267 = -1LL;
	volatile uint64_t x268 = 120853456LLU;

    t62 = (x265!=((x266|x267)%x268));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x273 = -1;
	static int8_t x274 = -1;
	uint8_t x276 = 2U;
	volatile int32_t t63 = -83;

    t63 = (x273!=((x274|x275)%x276));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x277 = -7980224LL;
	int64_t x278 = INT64_MAX;
	uint16_t x280 = 6042U;
	volatile int32_t t64 = 112330389;

    t64 = (x277!=((x278|x279)%x280));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x281 = INT64_MAX;
	int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MIN;
	uint32_t x284 = 3U;
	volatile int32_t t65 = -1;

    t65 = (x281!=((x282|x283)%x284));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x285 = INT32_MAX;
	static uint32_t x287 = UINT32_MAX;
	int8_t x288 = INT8_MIN;
	int32_t t66 = -5;

    t66 = (x285!=((x286|x287)%x288));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x292 = INT64_MIN;
	static volatile int32_t t67 = 12;

    t67 = (x289!=((x290|x291)%x292));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MAX;
	int32_t x295 = 15032;
	int8_t x296 = -1;
	volatile int32_t t68 = -63;

    t68 = (x293!=((x294|x295)%x296));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x297 = -1LL;
	volatile int64_t x299 = 3650796528311601LL;
	volatile uint16_t x300 = UINT16_MAX;

    t69 = (x297!=((x298|x299)%x300));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x301 = INT8_MIN;
	int32_t x303 = INT32_MIN;
	volatile int8_t x304 = INT8_MAX;

    t70 = (x301!=((x302|x303)%x304));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x305 = INT8_MIN;
	int64_t x306 = INT64_MAX;
	volatile int32_t t71 = -14595;

    t71 = (x305!=((x306|x307)%x308));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x309 = 214U;
	uint64_t x311 = 7158LLU;
	uint32_t x312 = 12U;

    t72 = (x309!=((x310|x311)%x312));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x315 = -1;
	int64_t x316 = -1LL;
	volatile int32_t t73 = 44864;

    t73 = (x313!=((x314|x315)%x316));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x318 = -1;
	static int64_t x319 = -131085876LL;
	uint8_t x320 = UINT8_MAX;
	static int32_t t74 = 132;

    t74 = (x317!=((x318|x319)%x320));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x322 = UINT16_MAX;
	uint64_t x323 = 261832815844351550LLU;
	int32_t x324 = INT32_MIN;
	int32_t t75 = 330736155;

    t75 = (x321!=((x322|x323)%x324));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x325 = INT16_MAX;
	int32_t x326 = INT32_MIN;
	int64_t x327 = INT64_MIN;
	uint64_t x328 = UINT64_MAX;

    t76 = (x325!=((x326|x327)%x328));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x330 = -143261176339LL;
	static int8_t x332 = -11;

    t77 = (x329!=((x330|x331)%x332));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x333 = UINT64_MAX;
	uint16_t x334 = UINT16_MAX;
	volatile uint64_t x335 = UINT64_MAX;
	uint64_t x336 = 1243488181423LLU;

    t78 = (x333!=((x334|x335)%x336));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x337 = INT8_MIN;
	int8_t x338 = INT8_MIN;
	int16_t x339 = -1;
	static int32_t x340 = -1;

    t79 = (x337!=((x338|x339)%x340));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x341 = INT64_MIN;
	int32_t x342 = -1;
	uint8_t x343 = 3U;
	static uint8_t x344 = 96U;

    t80 = (x341!=((x342|x343)%x344));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x345 = 95;
	uint32_t x347 = UINT32_MAX;
	int64_t x348 = INT64_MIN;
	int32_t t81 = -266183;

    t81 = (x345!=((x346|x347)%x348));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x349 = INT64_MIN;
	int64_t x351 = 14546950972650LL;
	uint32_t x352 = 981538U;
	volatile int32_t t82 = -249;

    t82 = (x349!=((x350|x351)%x352));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x353 = 13U;
	int8_t x355 = -1;
	int32_t t83 = 162723202;

    t83 = (x353!=((x354|x355)%x356));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x357 = 6U;
	static int16_t x358 = INT16_MIN;
	volatile int16_t x359 = INT16_MIN;
	static int32_t x360 = 7537577;
	volatile int32_t t84 = -28;

    t84 = (x357!=((x358|x359)%x360));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x361 = 9963U;
	uint32_t x362 = UINT32_MAX;
	static int32_t x363 = 0;
	int16_t x364 = 152;
	int32_t t85 = 3875;

    t85 = (x361!=((x362|x363)%x364));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x366 = INT8_MIN;
	uint64_t x368 = 150911675694259LLU;
	volatile int32_t t86 = -46794256;

    t86 = (x365!=((x366|x367)%x368));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x369 = INT16_MAX;
	static uint64_t x371 = 1233LLU;
	int32_t t87 = -52743;

    t87 = (x369!=((x370|x371)%x372));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x373 = -1;
	volatile int8_t x375 = INT8_MIN;
	uint16_t x376 = 1040U;
	int32_t t88 = -6;

    t88 = (x373!=((x374|x375)%x376));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x377 = UINT64_MAX;
	volatile int32_t x378 = INT32_MAX;
	int64_t x379 = 2LL;
	static volatile int64_t x380 = INT64_MAX;
	static volatile int32_t t89 = 437187704;

    t89 = (x377!=((x378|x379)%x380));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x383 = -408;
	static int32_t x384 = -1;

    t90 = (x381!=((x382|x383)%x384));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x385 = 1;
	int8_t x386 = -1;
	int32_t x387 = -22598;
	int64_t x388 = 3LL;

    t91 = (x385!=((x386|x387)%x388));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x389 = INT8_MIN;
	uint8_t x390 = 8U;
	uint64_t x391 = UINT64_MAX;
	volatile int32_t x392 = INT32_MAX;

    t92 = (x389!=((x390|x391)%x392));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x393 = INT16_MIN;
	static int16_t x394 = INT16_MAX;
	int64_t x396 = INT64_MAX;

    t93 = (x393!=((x394|x395)%x396));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x399 = 3U;
	int64_t x400 = -59LL;
	volatile int32_t t94 = -1;

    t94 = (x397!=((x398|x399)%x400));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x401 = 9449823645789LLU;
	int32_t x402 = INT32_MIN;
	int64_t x403 = INT64_MAX;
	int32_t t95 = 221322;

    t95 = (x401!=((x402|x403)%x404));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x405 = INT16_MAX;
	volatile int32_t x406 = -779828285;
	int32_t x407 = INT32_MAX;
	int8_t x408 = INT8_MAX;
	static int32_t t96 = -1778;

    t96 = (x405!=((x406|x407)%x408));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x409 = INT8_MIN;
	int64_t x411 = -2038052320926650LL;
	int32_t x412 = -432918156;
	volatile int32_t t97 = -1748;

    t97 = (x409!=((x410|x411)%x412));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x414 = UINT16_MAX;
	int64_t x415 = -1LL;
	int16_t x416 = INT16_MIN;
	static volatile int32_t t98 = 6623;

    t98 = (x413!=((x414|x415)%x416));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x417 = 0U;
	static uint8_t x418 = 81U;
	static int64_t x419 = INT64_MIN;
	int8_t x420 = -1;
	int32_t t99 = 374494;

    t99 = (x417!=((x418|x419)%x420));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x421 = INT16_MIN;
	int64_t x424 = -26075395LL;
	int32_t t100 = -2175750;

    t100 = (x421!=((x422|x423)%x424));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x425 = INT8_MAX;
	int32_t x426 = -1;
	static uint16_t x427 = UINT16_MAX;
	int64_t x428 = INT64_MIN;
	int32_t t101 = -139352667;

    t101 = (x425!=((x426|x427)%x428));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x429 = -1;
	int32_t x432 = 7;
	volatile int32_t t102 = -50103140;

    t102 = (x429!=((x430|x431)%x432));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x433 = INT16_MAX;
	static uint32_t x434 = 191U;
	int64_t x435 = INT64_MIN;
	static int32_t x436 = 1;
	static int32_t t103 = -44453;

    t103 = (x433!=((x434|x435)%x436));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x437 = UINT16_MAX;
	static int8_t x438 = -1;
	int16_t x439 = INT16_MIN;
	volatile int8_t x440 = 7;
	volatile int32_t t104 = -2;

    t104 = (x437!=((x438|x439)%x440));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x441 = 1U;
	int64_t x442 = INT64_MAX;
	int16_t x443 = INT16_MAX;
	static int32_t x444 = -1109;
	volatile int32_t t105 = -19465083;

    t105 = (x441!=((x442|x443)%x444));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x446 = -1;
	int32_t x447 = -230930563;
	static int32_t x448 = INT32_MAX;
	volatile int32_t t106 = 66;

    t106 = (x445!=((x446|x447)%x448));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x449 = INT32_MIN;
	static uint32_t x451 = 1234543U;
	volatile int16_t x452 = 7885;
	static int32_t t107 = -1853342;

    t107 = (x449!=((x450|x451)%x452));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x453 = UINT32_MAX;
	uint32_t x454 = 29557U;
	int8_t x455 = INT8_MIN;
	static volatile int32_t t108 = 296573;

    t108 = (x453!=((x454|x455)%x456));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x457 = INT64_MIN;
	uint64_t x458 = 1165601768844881327LLU;
	int8_t x460 = INT8_MIN;
	int32_t t109 = 658;

    t109 = (x457!=((x458|x459)%x460));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x461 = -1;
	int32_t x462 = INT32_MIN;
	uint8_t x463 = 0U;
	volatile int8_t x464 = INT8_MAX;
	int32_t t110 = 1323396;

    t110 = (x461!=((x462|x463)%x464));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x465 = -1;
	volatile uint16_t x466 = 29U;
	int32_t x467 = INT32_MAX;
	int32_t x468 = INT32_MAX;
	static volatile int32_t t111 = 84669087;

    t111 = (x465!=((x466|x467)%x468));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x469 = -6812082;
	int64_t x471 = INT64_MIN;
	volatile uint16_t x472 = 3U;

    t112 = (x469!=((x470|x471)%x472));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x473 = -1LL;
	int32_t x474 = 231002777;
	uint8_t x475 = UINT8_MAX;
	int32_t x476 = -1;
	int32_t t113 = 1294429;

    t113 = (x473!=((x474|x475)%x476));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x477 = 30U;
	volatile int64_t x478 = INT64_MIN;
	uint32_t x479 = 2060789U;
	int32_t x480 = -1;

    t114 = (x477!=((x478|x479)%x480));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x481 = 227;
	int32_t x483 = INT32_MIN;
	static int8_t x484 = INT8_MIN;
	volatile int32_t t115 = 1008865553;

    t115 = (x481!=((x482|x483)%x484));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x486 = INT32_MAX;
	int32_t t116 = -17707113;

    t116 = (x485!=((x486|x487)%x488));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x489 = INT64_MIN;
	uint8_t x491 = 21U;

    t117 = (x489!=((x490|x491)%x492));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x494 = INT64_MAX;
	int64_t x495 = 49348982782LL;
	int16_t x496 = INT16_MIN;

    t118 = (x493!=((x494|x495)%x496));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x498 = INT64_MAX;
	int16_t x499 = INT16_MIN;
	static uint16_t x500 = 3U;

    t119 = (x497!=((x498|x499)%x500));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x503 = -1;
	int64_t x504 = -278674226LL;
	volatile int32_t t120 = -1;

    t120 = (x501!=((x502|x503)%x504));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x505 = -1LL;
	int32_t x506 = INT32_MIN;
	int64_t x507 = INT64_MIN;
	static int32_t x508 = -1;

    t121 = (x505!=((x506|x507)%x508));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x509 = -1;
	uint8_t x511 = 12U;
	static int64_t x512 = INT64_MIN;
	int32_t t122 = -12908;

    t122 = (x509!=((x510|x511)%x512));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x515 = -1;
	int64_t x516 = 102248LL;
	volatile int32_t t123 = 1;

    t123 = (x513!=((x514|x515)%x516));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x519 = 1U;
	uint8_t x520 = 18U;
	static int32_t t124 = 249;

    t124 = (x517!=((x518|x519)%x520));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x521 = -42;
	int8_t x522 = 0;
	static int16_t x523 = INT16_MIN;
	int64_t x524 = INT64_MIN;
	static int32_t t125 = 2736;

    t125 = (x521!=((x522|x523)%x524));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x525 = -2;
	uint8_t x527 = 3U;
	static int16_t x528 = INT16_MIN;
	int32_t t126 = 7119;

    t126 = (x525!=((x526|x527)%x528));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x529 = INT64_MIN;
	static int16_t x530 = INT16_MIN;
	uint8_t x531 = 2U;
	static int8_t x532 = INT8_MAX;

    t127 = (x529!=((x530|x531)%x532));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x533 = -3;
	int16_t x535 = INT16_MAX;
	static int32_t t128 = -343137;

    t128 = (x533!=((x534|x535)%x536));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x538 = INT32_MIN;
	int8_t x539 = INT8_MIN;
	int32_t x540 = INT32_MIN;

    t129 = (x537!=((x538|x539)%x540));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x542 = -52;
	int16_t x543 = -5;
	uint64_t x544 = 83635819479584740LLU;
	static volatile int32_t t130 = 169132493;

    t130 = (x541!=((x542|x543)%x544));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x546 = INT8_MIN;
	volatile int16_t x547 = INT16_MIN;
	int64_t x548 = -1LL;
	static int32_t t131 = -2163;

    t131 = (x545!=((x546|x547)%x548));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x549 = 0U;
	static int64_t x550 = -1324LL;
	volatile int8_t x551 = -1;
	static int16_t x552 = -1;
	int32_t t132 = -1171;

    t132 = (x549!=((x550|x551)%x552));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x553 = 1800454477U;
	int16_t x554 = -1;
	int8_t x555 = INT8_MIN;
	int16_t x556 = 383;

    t133 = (x553!=((x554|x555)%x556));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x557 = INT32_MAX;
	uint8_t x558 = UINT8_MAX;
	volatile int16_t x560 = INT16_MIN;
	int32_t t134 = 937040;

    t134 = (x557!=((x558|x559)%x560));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x561 = INT16_MIN;
	uint64_t x562 = 466479213960097LLU;
	static int32_t x563 = INT32_MIN;
	int32_t x564 = INT32_MIN;
	int32_t t135 = 6;

    t135 = (x561!=((x562|x563)%x564));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x566 = INT16_MIN;
	static volatile int8_t x567 = 0;
	static int16_t x568 = -1;
	volatile int32_t t136 = -6;

    t136 = (x565!=((x566|x567)%x568));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x569 = 14955U;
	static uint16_t x570 = 14795U;
	uint8_t x571 = 7U;
	int32_t t137 = 19181721;

    t137 = (x569!=((x570|x571)%x572));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x573 = -3786;
	int8_t x574 = INT8_MIN;
	static int16_t x575 = INT16_MAX;
	volatile int8_t x576 = INT8_MIN;
	volatile int32_t t138 = -1564;

    t138 = (x573!=((x574|x575)%x576));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint64_t x577 = 0LLU;
	uint8_t x578 = 15U;
	int64_t x579 = INT64_MAX;
	int32_t x580 = 7;

    t139 = (x577!=((x578|x579)%x580));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x581 = -897247660279027765LL;
	static uint8_t x582 = UINT8_MAX;
	uint32_t x584 = 104U;
	int32_t t140 = 120635266;

    t140 = (x581!=((x582|x583)%x584));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x585 = 98U;
	int16_t x586 = 7000;
	static int32_t x587 = INT32_MAX;
	uint16_t x588 = 10U;
	int32_t t141 = -21462852;

    t141 = (x585!=((x586|x587)%x588));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x590 = -1LL;
	int16_t x591 = INT16_MAX;
	volatile int64_t x592 = INT64_MIN;
	volatile int32_t t142 = -276054;

    t142 = (x589!=((x590|x591)%x592));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x593 = INT64_MAX;
	static uint32_t x595 = UINT32_MAX;
	volatile int32_t t143 = 336;

    t143 = (x593!=((x594|x595)%x596));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x597 = INT32_MAX;
	int8_t x598 = INT8_MIN;
	int16_t x599 = -1;

    t144 = (x597!=((x598|x599)%x600));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x602 = -1;
	int32_t x603 = 44;
	int16_t x604 = INT16_MAX;
	int32_t t145 = 111857;

    t145 = (x601!=((x602|x603)%x604));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x605 = -1;
	int8_t x606 = 0;
	int32_t x608 = -1;
	volatile int32_t t146 = -23;

    t146 = (x605!=((x606|x607)%x608));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x609 = INT8_MIN;
	int8_t x610 = -1;
	static volatile int16_t x612 = -4;

    t147 = (x609!=((x610|x611)%x612));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x613 = -1;
	static int16_t x614 = -1;
	static volatile int64_t x615 = INT64_MIN;
	static int64_t x616 = -67030615960LL;
	volatile int32_t t148 = -95296;

    t148 = (x613!=((x614|x615)%x616));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x617 = INT8_MIN;
	int64_t x618 = -1LL;
	int64_t x619 = INT64_MAX;
	int32_t x620 = INT32_MAX;
	volatile int32_t t149 = 91131;

    t149 = (x617!=((x618|x619)%x620));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x623 = INT64_MIN;
	int32_t t150 = 9;

    t150 = (x621!=((x622|x623)%x624));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x625 = INT64_MIN;
	static int32_t x627 = INT32_MAX;
	volatile int32_t x628 = -1967;
	volatile int32_t t151 = -74;

    t151 = (x625!=((x626|x627)%x628));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x629 = -5;
	uint8_t x630 = 2U;
	volatile int16_t x631 = 8182;
	int8_t x632 = INT8_MIN;

    t152 = (x629!=((x630|x631)%x632));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x634 = INT32_MAX;
	int8_t x636 = INT8_MIN;
	volatile int32_t t153 = 38983;

    t153 = (x633!=((x634|x635)%x636));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x638 = -1;
	static uint8_t x639 = 1U;
	int32_t t154 = 48004323;

    t154 = (x637!=((x638|x639)%x640));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x641 = UINT64_MAX;
	volatile uint8_t x642 = UINT8_MAX;
	uint8_t x643 = 1U;
	uint16_t x644 = UINT16_MAX;
	static int32_t t155 = -142;

    t155 = (x641!=((x642|x643)%x644));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x646 = 7U;
	uint64_t x647 = 15814367134LLU;
	volatile uint8_t x648 = 1U;
	volatile int32_t t156 = -87;

    t156 = (x645!=((x646|x647)%x648));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x649 = -1;
	volatile int32_t x650 = -1;
	static int32_t x651 = -1;
	volatile int32_t t157 = -1;

    t157 = (x649!=((x650|x651)%x652));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x653 = -295011641029226LL;
	volatile int32_t x654 = INT32_MAX;
	uint8_t x655 = 8U;
	int32_t x656 = -30908;
	volatile int32_t t158 = 6487257;

    t158 = (x653!=((x654|x655)%x656));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x657 = INT8_MIN;
	static int8_t x658 = INT8_MIN;
	volatile int32_t t159 = -1;

    t159 = (x657!=((x658|x659)%x660));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x661 = INT32_MIN;
	int8_t x663 = INT8_MIN;
	volatile uint64_t x664 = 31900939922986411LLU;

    t160 = (x661!=((x662|x663)%x664));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x666 = INT32_MIN;
	int32_t x668 = INT32_MIN;
	volatile int32_t t161 = 56;

    t161 = (x665!=((x666|x667)%x668));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x669 = -101;
	int8_t x670 = -1;
	uint16_t x671 = UINT16_MAX;
	uint8_t x672 = 28U;

    t162 = (x669!=((x670|x671)%x672));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x674 = -9;
	int8_t x675 = INT8_MAX;
	int64_t x676 = -1LL;
	int32_t t163 = 27258677;

    t163 = (x673!=((x674|x675)%x676));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x677 = 398770U;
	int64_t x678 = INT64_MAX;
	int32_t x679 = -65866689;
	volatile int32_t x680 = 12309;
	int32_t t164 = -11;

    t164 = (x677!=((x678|x679)%x680));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x681 = INT64_MIN;
	int64_t x682 = INT64_MAX;
	int16_t x683 = INT16_MIN;
	static int64_t x684 = -9519058621441200LL;
	volatile int32_t t165 = 14534698;

    t165 = (x681!=((x682|x683)%x684));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x685 = 0;
	volatile int32_t x687 = -379006;
	int32_t x688 = INT32_MIN;
	volatile int32_t t166 = 31;

    t166 = (x685!=((x686|x687)%x688));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x690 = INT64_MIN;
	volatile int16_t x691 = 49;
	uint32_t x692 = UINT32_MAX;

    t167 = (x689!=((x690|x691)%x692));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x693 = INT8_MIN;
	int64_t x694 = 26560016LL;
	int16_t x695 = -23;
	int64_t x696 = INT64_MIN;
	int32_t t168 = 43659;

    t168 = (x693!=((x694|x695)%x696));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x701 = -29;
	volatile int32_t x703 = INT32_MAX;

    t169 = (x701!=((x702|x703)%x704));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x705 = 28;
	int64_t x706 = 18LL;
	int64_t x708 = 216528593724117824LL;
	int32_t t170 = 1;

    t170 = (x705!=((x706|x707)%x708));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x709 = INT16_MIN;
	volatile uint64_t x712 = UINT64_MAX;
	volatile int32_t t171 = 675281489;

    t171 = (x709!=((x710|x711)%x712));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x713 = 215573010301432462LLU;
	int64_t x714 = 126744249LL;
	static uint32_t x715 = UINT32_MAX;
	static int32_t x716 = -21025175;
	int32_t t172 = -9924;

    t172 = (x713!=((x714|x715)%x716));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x717 = INT16_MIN;
	int32_t x719 = INT32_MIN;
	volatile int32_t x720 = 7;
	int32_t t173 = 2144;

    t173 = (x717!=((x718|x719)%x720));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x721 = INT8_MIN;
	uint32_t x723 = 144448U;
	uint32_t x724 = UINT32_MAX;
	int32_t t174 = 925709871;

    t174 = (x721!=((x722|x723)%x724));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x725 = 60U;
	static uint16_t x726 = UINT16_MAX;
	int64_t x727 = -192LL;
	int16_t x728 = 1;
	volatile int32_t t175 = 7;

    t175 = (x725!=((x726|x727)%x728));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x729 = -481778137LL;
	uint32_t x731 = 172U;
	int32_t t176 = 291358634;

    t176 = (x729!=((x730|x731)%x732));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x733 = -1;
	uint8_t x734 = UINT8_MAX;
	int64_t x735 = INT64_MIN;
	int8_t x736 = -23;
	int32_t t177 = 0;

    t177 = (x733!=((x734|x735)%x736));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x737 = UINT64_MAX;
	volatile int16_t x738 = INT16_MAX;
	volatile int16_t x739 = INT16_MIN;
	static uint32_t x740 = 28153U;
	int32_t t178 = -2;

    t178 = (x737!=((x738|x739)%x740));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x742 = INT16_MIN;
	static int8_t x743 = INT8_MIN;
	static volatile int8_t x744 = INT8_MIN;
	volatile int32_t t179 = 4544;

    t179 = (x741!=((x742|x743)%x744));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x745 = 4419U;
	static uint64_t x746 = 55549131530LLU;
	int16_t x747 = -1;
	int64_t x748 = -30LL;
	volatile int32_t t180 = 389197347;

    t180 = (x745!=((x746|x747)%x748));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x749 = 1075816146LL;
	int64_t x750 = 35986518988041LL;
	int32_t t181 = 20756505;

    t181 = (x749!=((x750|x751)%x752));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x753 = -1LL;
	int8_t x754 = -1;
	int64_t x755 = INT64_MIN;
	static volatile int32_t t182 = 130;

    t182 = (x753!=((x754|x755)%x756));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x757 = INT32_MAX;
	int8_t x758 = 1;
	int16_t x759 = 10;
	volatile int16_t x760 = INT16_MIN;

    t183 = (x757!=((x758|x759)%x760));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x761 = UINT8_MAX;
	volatile uint8_t x762 = 0U;
	int64_t x763 = -2417306LL;
	int32_t t184 = -446068530;

    t184 = (x761!=((x762|x763)%x764));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x765 = 29;
	int16_t x767 = INT16_MIN;
	int64_t x768 = -725LL;
	volatile int32_t t185 = 15;

    t185 = (x765!=((x766|x767)%x768));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x769 = 1U;
	int8_t x770 = INT8_MAX;
	uint64_t x771 = 942236114127LLU;
	volatile int32_t t186 = -13199;

    t186 = (x769!=((x770|x771)%x772));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x773 = 2748004104LL;
	int8_t x774 = INT8_MIN;
	uint64_t x775 = 50843725131323LLU;
	uint16_t x776 = 6399U;
	int32_t t187 = 1;

    t187 = (x773!=((x774|x775)%x776));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x778 = UINT64_MAX;
	int32_t x779 = INT32_MIN;
	int32_t t188 = -1;

    t188 = (x777!=((x778|x779)%x780));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x781 = -18;
	uint32_t x782 = 7U;
	volatile int64_t x783 = INT64_MIN;
	uint8_t x784 = 1U;

    t189 = (x781!=((x782|x783)%x784));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x785 = 434U;
	int32_t x786 = -1;
	int64_t x787 = INT64_MIN;
	int32_t t190 = -52018;

    t190 = (x785!=((x786|x787)%x788));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x789 = INT32_MIN;
	uint16_t x791 = 6642U;
	static uint64_t x792 = 1413356453207650LLU;
	int32_t t191 = -168410;

    t191 = (x789!=((x790|x791)%x792));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x793 = -5025;
	volatile int64_t x794 = INT64_MIN;
	int64_t x795 = 2629268875LL;
	int16_t x796 = INT16_MIN;

    t192 = (x793!=((x794|x795)%x796));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x798 = -1;
	int64_t x799 = INT64_MIN;
	volatile int8_t x800 = INT8_MIN;
	static int32_t t193 = -229380;

    t193 = (x797!=((x798|x799)%x800));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x801 = INT16_MIN;
	uint32_t x802 = UINT32_MAX;
	volatile uint64_t x803 = 50844314252571151LLU;
	uint8_t x804 = UINT8_MAX;
	int32_t t194 = 173;

    t194 = (x801!=((x802|x803)%x804));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x805 = INT64_MAX;
	volatile int8_t x806 = -49;
	int8_t x807 = -1;
	int64_t x808 = INT64_MIN;

    t195 = (x805!=((x806|x807)%x808));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x813 = -752LL;
	int32_t x815 = INT32_MIN;
	int64_t x816 = INT64_MIN;
	static int32_t t196 = -1631487;

    t196 = (x813!=((x814|x815)%x816));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x818 = UINT32_MAX;
	static int8_t x819 = INT8_MIN;
	static int16_t x820 = 18;

    t197 = (x817!=((x818|x819)%x820));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x821 = -48833312LL;
	uint8_t x822 = 0U;
	static int64_t x824 = -1LL;
	volatile int32_t t198 = -3236081;

    t198 = (x821!=((x822|x823)%x824));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x825 = INT64_MAX;
	int64_t x826 = -1LL;
	int32_t x827 = 6;
	int32_t t199 = 21835595;

    t199 = (x825!=((x826|x827)%x828));

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

