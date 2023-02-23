
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

int32_t x12 = INT32_MIN;
int8_t x28 = INT8_MIN;
static uint32_t x29 = UINT32_MAX;
uint32_t x31 = 455U;
static uint8_t x32 = UINT8_MAX;
int32_t x36 = -220771;
static volatile int16_t x41 = INT16_MIN;
volatile int32_t t8 = 1;
int16_t x49 = INT16_MIN;
static uint32_t t9 = 2063U;
uint64_t x60 = 6928186244613LLU;
static volatile uint64_t t12 = UINT64_MAX;
volatile int8_t x69 = INT8_MIN;
int16_t x86 = -118;
static volatile int32_t x87 = -2;
volatile int8_t x88 = INT8_MIN;
uint8_t x90 = UINT8_MAX;
uint64_t x92 = 2LLU;
int64_t x98 = INT64_MIN;
volatile int8_t x111 = INT8_MAX;
int32_t x113 = -20048848;
static volatile int8_t x117 = INT8_MIN;
int16_t x119 = -80;
uint64_t x129 = UINT64_MAX;
uint16_t x136 = 783U;
int32_t x148 = INT32_MIN;
static volatile int64_t x160 = 14817569746906475LL;
int16_t x163 = 1559;
uint8_t x164 = UINT8_MAX;
uint16_t x165 = 2234U;
uint32_t x175 = 14802U;
int32_t x188 = 37834;
static volatile uint8_t x198 = 84U;
int64_t x200 = INT64_MIN;
int32_t x201 = INT32_MAX;
int16_t x206 = INT16_MIN;
static int32_t x211 = INT32_MIN;
volatile int16_t x213 = INT16_MIN;
int8_t x214 = INT8_MIN;
int32_t x225 = INT32_MIN;
volatile int64_t x228 = 2627LL;
static int64_t t46 = -7422LL;
volatile int64_t t48 = -5974483471453557LL;
int8_t x244 = INT8_MAX;
uint64_t x245 = 2945628955310499LLU;
static volatile uint8_t x246 = 3U;
uint32_t x247 = 222253U;
int16_t x250 = -1;
int8_t x253 = -1;
int64_t x269 = 780LL;
static int16_t x273 = INT16_MAX;
volatile int32_t t58 = 931561585;
int16_t x281 = -19;
uint8_t x286 = 2U;
int16_t x289 = INT16_MIN;
int32_t t62 = 415213842;
int16_t x297 = -1;
volatile int8_t x310 = -55;
volatile uint16_t x312 = UINT16_MAX;
uint32_t x331 = UINT32_MAX;
uint64_t x333 = UINT64_MAX;
static int32_t x335 = -35900;
volatile int64_t x341 = INT64_MAX;
int64_t x346 = INT64_MIN;
int8_t x352 = 1;
int32_t x358 = -1;
int8_t x359 = -15;
uint32_t x363 = 83717911U;
uint16_t x364 = 125U;
int64_t x366 = -1LL;
static volatile uint32_t x368 = 1028833741U;
int8_t x372 = INT8_MIN;
int64_t t77 = 263202231684LL;
volatile uint16_t x373 = 16461U;
uint32_t x381 = UINT32_MAX;
int64_t x383 = -507LL;
int16_t x392 = INT16_MAX;
int8_t x402 = -1;
static int32_t x416 = INT32_MAX;
static uint16_t x445 = 13835U;
uint32_t x450 = 51088U;
volatile int64_t x453 = 527916638794470915LL;
volatile uint32_t x455 = 1U;
int16_t x459 = INT16_MIN;
int32_t t94 = 0;
volatile int64_t t95 = -286363438839021612LL;
int64_t x467 = INT64_MAX;
int16_t x491 = INT16_MAX;
volatile int8_t x492 = INT8_MIN;
static int8_t x493 = 0;
int64_t x499 = INT64_MIN;
volatile uint64_t t104 = 16864LLU;
static int64_t x501 = INT64_MIN;
uint16_t x506 = UINT16_MAX;
int32_t t107 = -2899953;
uint64_t x521 = 55107600019LLU;
static uint64_t t110 = 0LLU;
int32_t x534 = 1;
uint64_t x535 = 48228276LLU;
int32_t x537 = -6070556;
int16_t x538 = -145;
uint16_t x540 = 47U;
int64_t x544 = INT64_MAX;
int32_t x546 = 40346;
uint32_t x561 = UINT32_MAX;
uint32_t x565 = 0U;
int32_t x566 = 67;
uint32_t t121 = 872467U;
volatile int32_t x595 = INT32_MIN;
static int64_t t126 = 258LL;
int16_t x602 = 2704;
uint64_t x605 = 73645125331049784LLU;
volatile int16_t x606 = -1;
int16_t x608 = INT16_MIN;
uint64_t x611 = 342147422046856LLU;
int64_t x616 = -3790764881064627267LL;
static uint32_t x622 = 1U;
int32_t x623 = INT32_MAX;
int32_t x648 = INT32_MIN;
int64_t t140 = 35309224704630668LL;
uint64_t x666 = UINT64_MAX;
int16_t x668 = INT16_MIN;
static uint8_t x669 = 51U;
uint64_t x671 = 499LLU;
uint64_t t143 = 28LLU;
static volatile int32_t x675 = -1;
int32_t x676 = -6441;
volatile uint16_t x690 = 1067U;
int64_t x696 = INT64_MAX;
volatile uint64_t t149 = 6764224336872359475LLU;
static volatile int8_t x701 = INT8_MAX;
uint8_t x703 = 1U;
static int32_t t151 = 12;
uint64_t x710 = 221403LLU;
int16_t x717 = INT16_MIN;
volatile int32_t x719 = -3050274;
int32_t x720 = INT32_MIN;
static int32_t x721 = -13027401;
static int64_t x722 = -944809679536696934LL;
uint32_t x724 = 21226U;
int16_t x726 = -348;
uint16_t x729 = 12325U;
volatile int64_t t159 = 85458040708LL;
volatile int32_t x744 = INT32_MIN;
int64_t x748 = INT64_MAX;
static int16_t x755 = -1;
int64_t x760 = INT64_MAX;
int16_t x762 = INT16_MIN;
static int32_t t164 = -345;
uint16_t x765 = 20U;
uint64_t x770 = 764142618LLU;
static int64_t x771 = INT64_MAX;
int8_t x780 = INT8_MAX;
volatile int64_t x792 = -1LL;
int64_t t170 = -3621577516LL;
static uint64_t t171 = 2287498291182675704LLU;
volatile int32_t x797 = -132;
volatile int8_t x801 = 19;
int32_t x809 = INT32_MAX;
volatile int64_t x810 = -1LL;
uint16_t x811 = UINT16_MAX;
static uint8_t x812 = UINT8_MAX;
volatile int32_t x814 = -25073;
static int8_t x821 = 2;
int32_t x822 = 19682;
static uint16_t x830 = 3U;
int16_t x832 = INT16_MIN;
volatile uint64_t x836 = UINT64_MAX;
int32_t x843 = INT32_MIN;
static int64_t x853 = 46144961009306773LL;
int64_t t185 = -350789846729524664LL;
int8_t x866 = -30;
int64_t x870 = -1LL;
int64_t x879 = INT64_MIN;
uint16_t x885 = UINT16_MAX;
int64_t x898 = INT64_MIN;
int32_t x900 = -16592277;
uint64_t x901 = 6865LLU;
int8_t x902 = INT8_MAX;
static uint64_t t195 = 2681155629542871850LLU;
int32_t x913 = -1;
int16_t x914 = -3;
uint32_t x916 = 247294U;
int32_t x923 = -600296;
volatile int64_t t197 = -95854LL;
int64_t x932 = INT64_MIN;
static uint32_t x934 = 2U;


void f0(void) {
    	uint32_t x1 = 89213U;
	int8_t x2 = INT8_MAX;
	int64_t x3 = -60951645LL;
	static int16_t x4 = INT16_MAX;
	volatile int64_t t0 = 193429742LL;

    t0 = (x1-((x2-x3)/x4));

    if (t0 != 87353LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	int8_t x6 = INT8_MAX;
	static uint32_t x7 = UINT32_MAX;
	uint32_t x8 = 1796U;
	uint64_t t1 = UINT64_MAX;

    t1 = (x5-((x6-x7)/x8));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	static int8_t x10 = 44;
	static volatile int8_t x11 = 0;
	int32_t t2 = 31732;

    t2 = (x9-((x10-x11)/x12));

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = -9413;
	volatile int8_t x18 = -49;
	static int16_t x19 = INT16_MIN;
	volatile int32_t x20 = INT32_MIN;
	static volatile int32_t t3 = 280002617;

    t3 = (x17-((x18-x19)/x20));

    if (t3 != -9413) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = INT8_MIN;
	int64_t x26 = INT64_MIN;
	static int64_t x27 = INT64_MIN;
	volatile int64_t t4 = -417658029LL;

    t4 = (x25-((x26-x27)/x28));

    if (t4 != -128LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x30 = -1;
	uint32_t t5 = 179U;

    t5 = (x29-((x30-x31)/x32));

    if (t5 != 4278124288U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x33 = UINT64_MAX;
	uint16_t x34 = 6U;
	static volatile uint32_t x35 = 1U;
	static uint64_t t6 = UINT64_MAX;

    t6 = (x33-((x34-x35)/x36));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x37 = 22838952208183988LL;
	volatile int32_t x38 = -18102;
	int32_t x39 = INT32_MIN;
	int32_t x40 = 814;
	static volatile int64_t t7 = -1032431460670074LL;

    t7 = (x37-((x38-x39)/x40));

    if (t7 != 22838952205545824LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x42 = -11;
	int32_t x43 = -1;
	int8_t x44 = INT8_MIN;

    t8 = (x41-((x42-x43)/x44));

    if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x50 = 19U;
	volatile int32_t x51 = -70;
	uint16_t x52 = 116U;

    t9 = (x49-((x50-x51)/x52));

    if (t9 != 4294934528U) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x53 = UINT32_MAX;
	volatile int16_t x54 = -1;
	int32_t x55 = 1;
	volatile uint64_t x56 = 572912391616649LLU;
	uint64_t t10 = 36102310LLU;

    t10 = (x53-((x54-x55)/x56));

    if (t10 != 4294935097LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = -1;
	uint8_t x58 = UINT8_MAX;
	volatile int64_t x59 = INT64_MAX;
	uint64_t t11 = 36289674LLU;

    t11 = (x57-((x58-x59)/x60));

    if (t11 != 18446744073708220333LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x61 = UINT64_MAX;
	uint64_t x62 = 7412219489265453LLU;
	int64_t x63 = INT64_MAX;
	static int64_t x64 = -433742595LL;

    t12 = (x61-((x62-x63)/x64));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x65 = UINT64_MAX;
	volatile uint16_t x66 = UINT16_MAX;
	static uint8_t x67 = UINT8_MAX;
	static uint32_t x68 = UINT32_MAX;
	static volatile uint64_t t13 = UINT64_MAX;

    t13 = (x65-((x66-x67)/x68));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x70 = INT16_MIN;
	int16_t x71 = INT16_MIN;
	static uint64_t x72 = 2222688551876233LLU;
	volatile uint64_t t14 = 6553554LLU;

    t14 = (x69-((x70-x71)/x72));

    if (t14 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x77 = INT64_MAX;
	static int32_t x78 = INT32_MIN;
	int16_t x79 = INT16_MIN;
	volatile int8_t x80 = -22;
	static volatile int64_t t15 = -4222902114527431LL;

    t15 = (x77-((x78-x79)/x80));

    if (t15 != 9223372036757164404LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x81 = INT8_MAX;
	static int32_t x82 = -60;
	static int8_t x83 = -1;
	static int16_t x84 = -931;
	int32_t t16 = 474;

    t16 = (x81-((x82-x83)/x84));

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = INT64_MAX;
	volatile int64_t t17 = INT64_MAX;

    t17 = (x85-((x86-x87)/x88));

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x89 = -7;
	uint64_t x91 = 377397175767024245LLU;
	uint64_t t18 = 2791002LLU;

    t18 = (x89-((x90-x91)/x92));

    if (t18 != 9412070624738287796LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint8_t x97 = 85U;
	uint64_t x99 = UINT64_MAX;
	volatile int8_t x100 = -1;
	volatile uint64_t t19 = 4872406866LLU;

    t19 = (x97-((x98-x99)/x100));

    if (t19 != 85LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int32_t x105 = -1;
	static volatile int32_t x106 = 35;
	static uint16_t x107 = UINT16_MAX;
	int8_t x108 = INT8_MAX;
	volatile int32_t t20 = -33735;

    t20 = (x105-((x106-x107)/x108));

    if (t20 != 514) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x109 = 27U;
	uint16_t x110 = UINT16_MAX;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t21 = 1;

    t21 = (x109-((x110-x111)/x112));

    if (t21 != 27) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x114 = INT16_MIN;
	static uint16_t x115 = UINT16_MAX;
	int32_t x116 = -1;
	int32_t t22 = -1;

    t22 = (x113-((x114-x115)/x116));

    if (t22 != -20147151) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x118 = 1203U;
	static int64_t x120 = 15LL;
	int64_t t23 = 816686873324LL;

    t23 = (x117-((x118-x119)/x120));

    if (t23 != -213LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x125 = -814375;
	uint32_t x126 = 98994U;
	int8_t x127 = INT8_MAX;
	volatile int32_t x128 = -543892290;
	uint32_t t24 = 2160293U;

    t24 = (x125-((x126-x127)/x128));

    if (t24 != 4294152921U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x130 = INT32_MAX;
	static uint64_t x131 = 51963087929LLU;
	uint16_t x132 = UINT16_MAX;
	uint64_t t25 = 49636252462LLU;

    t25 = (x129-((x130-x131)/x132));

    if (t25 != 18446462594438568264LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x133 = -1;
	int16_t x134 = -1;
	static int32_t x135 = -56690;
	int32_t t26 = 310875;

    t26 = (x133-((x134-x135)/x136));

    if (t26 != -73) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x137 = -30959031897082157LL;
	volatile int64_t x138 = -1LL;
	static int8_t x139 = 1;
	uint8_t x140 = 104U;
	volatile int64_t t27 = 835988190LL;

    t27 = (x137-((x138-x139)/x140));

    if (t27 != -30959031897082157LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x145 = -1LL;
	volatile uint32_t x146 = 45U;
	uint32_t x147 = 2801459U;
	volatile int64_t t28 = -1558596233284042282LL;

    t28 = (x145-((x146-x147)/x148));

    if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x149 = 3U;
	uint32_t x150 = 295618U;
	int32_t x151 = 478;
	int16_t x152 = INT16_MIN;
	static volatile uint32_t t29 = 10U;

    t29 = (x149-((x150-x151)/x152));

    if (t29 != 3U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x157 = INT8_MAX;
	int64_t x158 = -238147593947851737LL;
	int16_t x159 = 942;
	int64_t t30 = -137LL;

    t30 = (x157-((x158-x159)/x160));

    if (t30 != 143LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x161 = 1495338347633391765LL;
	volatile int64_t x162 = 4LL;
	volatile int64_t t31 = 12171640LL;

    t31 = (x161-((x162-x163)/x164));

    if (t31 != 1495338347633391771LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x166 = 179U;
	uint8_t x167 = 7U;
	static int16_t x168 = 1;
	volatile int32_t t32 = -3546608;

    t32 = (x165-((x166-x167)/x168));

    if (t32 != 2062) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MIN;
	int32_t x171 = -81694;
	uint8_t x172 = 15U;
	static int64_t t33 = -50LL;

    t33 = (x169-((x170-x171)/x172));

    if (t33 != 614891469123646146LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x173 = INT64_MIN;
	int8_t x174 = INT8_MIN;
	int16_t x176 = -1;
	volatile int64_t t34 = INT64_MIN;

    t34 = (x173-((x174-x175)/x176));

    if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x177 = 21920LLU;
	volatile int32_t x178 = INT32_MIN;
	int16_t x179 = -1;
	static int32_t x180 = INT32_MAX;
	volatile uint64_t t35 = 3529550LLU;

    t35 = (x177-((x178-x179)/x180));

    if (t35 != 21921LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x181 = -11405597;
	int16_t x182 = INT16_MIN;
	uint32_t x183 = 1372587711U;
	static int64_t x184 = -4867775578LL;
	int64_t t36 = 294935937646142001LL;

    t36 = (x181-((x182-x183)/x184));

    if (t36 != -11405597LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x185 = 106;
	static uint64_t x186 = 6445942703LLU;
	uint32_t x187 = UINT32_MAX;
	volatile uint64_t t37 = 0LLU;

    t37 = (x185-((x186-x187)/x188));

    if (t37 != 18446744073709494870LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x193 = 0U;
	int8_t x194 = 3;
	static int8_t x195 = INT8_MAX;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t38 = 622283878381222960LLU;

    t38 = (x193-((x194-x195)/x196));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x197 = -1411;
	int32_t x199 = INT32_MAX;
	volatile int64_t t39 = 733925257380218LL;

    t39 = (x197-((x198-x199)/x200));

    if (t39 != -1411LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x202 = -1LL;
	volatile int16_t x203 = 27;
	int8_t x204 = 1;
	int64_t t40 = 5662367481852008LL;

    t40 = (x201-((x202-x203)/x204));

    if (t40 != 2147483675LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x205 = UINT32_MAX;
	int64_t x207 = INT64_MIN;
	int32_t x208 = INT32_MIN;
	volatile int64_t t41 = -3138LL;

    t41 = (x205-((x206-x207)/x208));

    if (t41 != 8589934590LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x209 = UINT32_MAX;
	int32_t x210 = INT32_MIN;
	int32_t x212 = INT32_MIN;
	static uint32_t t42 = UINT32_MAX;

    t42 = (x209-((x210-x211)/x212));

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x215 = UINT8_MAX;
	int16_t x216 = 11;
	int32_t t43 = -724;

    t43 = (x213-((x214-x215)/x216));

    if (t43 != -32734) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x217 = -1;
	int16_t x218 = -1;
	int16_t x219 = INT16_MIN;
	int64_t x220 = -5708889755LL;
	volatile int64_t t44 = -917752311LL;

    t44 = (x217-((x218-x219)/x220));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x221 = 47U;
	uint16_t x222 = 931U;
	volatile uint64_t x223 = 1113602414622060202LLU;
	static int32_t x224 = INT32_MIN;
	uint64_t t45 = 31683LLU;

    t45 = (x221-((x222-x223)/x224));

    if (t45 != 47LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x226 = INT32_MIN;
	int64_t x227 = INT64_MIN;

    t46 = (x225-((x226-x227)/x228));

    if (t46 != -3510992644136595LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x229 = INT8_MIN;
	int16_t x230 = -1;
	uint32_t x231 = UINT32_MAX;
	int8_t x232 = -6;
	uint32_t t47 = 46U;

    t47 = (x229-((x230-x231)/x232));

    if (t47 != 4294967168U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x233 = INT32_MIN;
	volatile int64_t x234 = -1LL;
	volatile uint8_t x235 = 30U;
	volatile uint16_t x236 = 234U;

    t48 = (x233-((x234-x235)/x236));

    if (t48 != -2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x237 = INT32_MIN;
	static int64_t x238 = INT64_MAX;
	int64_t x239 = 765123494032667717LL;
	volatile int16_t x240 = INT16_MAX;
	volatile int64_t t49 = -32763LL;

    t49 = (x237-((x238-x239)/x240));

    if (t49 != -258135285788103LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x241 = -1;
	int8_t x242 = INT8_MAX;
	static int8_t x243 = -14;
	static volatile int32_t t50 = -754757928;

    t50 = (x241-((x242-x243)/x244));

    if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x248 = INT32_MIN;
	uint64_t t51 = 2213465LLU;

    t51 = (x245-((x246-x247)/x248));

    if (t51 != 2945628955310498LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x249 = -1;
	static int64_t x251 = -1LL;
	uint16_t x252 = 953U;
	int64_t t52 = -139441472LL;

    t52 = (x249-((x250-x251)/x252));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x254 = 23320U;
	int16_t x255 = -45;
	volatile int32_t x256 = 1035550;
	uint32_t t53 = UINT32_MAX;

    t53 = (x253-((x254-x255)/x256));

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x257 = -392400787LL;
	int32_t x258 = -1;
	int32_t x259 = 530502915;
	int8_t x260 = 1;
	volatile int64_t t54 = -207279634050LL;

    t54 = (x257-((x258-x259)/x260));

    if (t54 != 138102129LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x261 = -1;
	int64_t x262 = INT64_MAX;
	int32_t x263 = INT32_MAX;
	int8_t x264 = INT8_MIN;
	volatile int64_t t55 = -170690LL;

    t55 = (x261-((x262-x263)/x264));

    if (t55 != 72057594021150719LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x270 = INT16_MAX;
	int8_t x271 = INT8_MAX;
	int8_t x272 = -20;
	volatile int64_t t56 = -2546272857799636705LL;

    t56 = (x269-((x270-x271)/x272));

    if (t56 != 2412LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x274 = INT8_MAX;
	static uint64_t x275 = UINT64_MAX;
	static int16_t x276 = -1;
	uint64_t t57 = 2315420485513LLU;

    t57 = (x273-((x274-x275)/x276));

    if (t57 != 32767LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x277 = -1;
	uint16_t x278 = 21U;
	volatile uint8_t x279 = 108U;
	int8_t x280 = -1;

    t58 = (x277-((x278-x279)/x280));

    if (t58 != -88) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x282 = INT32_MIN;
	int64_t x283 = INT64_MIN;
	static int16_t x284 = INT16_MAX;
	volatile int64_t t59 = -460LL;

    t59 = (x281-((x282-x283)/x284));

    if (t59 != -281483566841881LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x285 = INT16_MAX;
	int8_t x287 = 1;
	int8_t x288 = 18;
	volatile int32_t t60 = -602620352;

    t60 = (x285-((x286-x287)/x288));

    if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x290 = INT16_MIN;
	uint64_t x291 = 11786LLU;
	int16_t x292 = 2887;
	uint64_t t61 = 4121653670LLU;

    t61 = (x289-((x290-x291)/x292));

    if (t61 != 18440354484491053484LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x293 = 21U;
	int16_t x294 = INT16_MIN;
	int32_t x295 = -309;
	int8_t x296 = -1;

    t62 = (x293-((x294-x295)/x296));

    if (t62 != -32438) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x298 = UINT8_MAX;
	uint16_t x299 = 1852U;
	int16_t x300 = -17;
	volatile int32_t t63 = -1;

    t63 = (x297-((x298-x299)/x300));

    if (t63 != -94) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x301 = 737U;
	uint64_t x302 = UINT64_MAX;
	int16_t x303 = INT16_MIN;
	uint16_t x304 = 32240U;
	static uint64_t t64 = 180148483768317478LLU;

    t64 = (x301-((x302-x303)/x304));

    if (t64 != 736LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x305 = UINT32_MAX;
	int8_t x306 = INT8_MIN;
	volatile uint8_t x307 = 0U;
	int8_t x308 = -1;
	static uint32_t t65 = 1U;

    t65 = (x305-((x306-x307)/x308));

    if (t65 != 4294967167U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x309 = INT8_MAX;
	int32_t x311 = -1;
	int32_t t66 = 1;

    t66 = (x309-((x310-x311)/x312));

    if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint8_t x317 = UINT8_MAX;
	int32_t x318 = -1;
	static volatile int32_t x319 = INT32_MAX;
	volatile int64_t x320 = INT64_MAX;
	volatile int64_t t67 = -219826LL;

    t67 = (x317-((x318-x319)/x320));

    if (t67 != 255LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x325 = INT32_MAX;
	volatile int32_t x326 = -1;
	static uint8_t x327 = UINT8_MAX;
	int32_t x328 = -1;
	int32_t t68 = 252071;

    t68 = (x325-((x326-x327)/x328));

    if (t68 != 2147483391) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x329 = INT16_MAX;
	uint64_t x330 = 17938228784442LLU;
	int8_t x332 = INT8_MAX;
	uint64_t t69 = 159748LLU;

    t69 = (x329-((x330-x331)/x332));

    if (t69 != 18446743932497507083LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x334 = INT16_MIN;
	volatile int8_t x336 = INT8_MIN;
	volatile uint64_t t70 = 6957LLU;

    t70 = (x333-((x334-x335)/x336));

    if (t70 != 23LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x342 = UINT32_MAX;
	static uint16_t x343 = 8U;
	int8_t x344 = INT8_MIN;
	int64_t t71 = -7546LL;

    t71 = (x341-((x342-x343)/x344));

    if (t71 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x345 = -1;
	int16_t x347 = -5;
	int32_t x348 = INT32_MAX;
	volatile int64_t t72 = 44LL;

    t72 = (x345-((x346-x347)/x348));

    if (t72 != 4294967296LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x349 = 85U;
	volatile int64_t x350 = 14327367LL;
	static uint64_t x351 = UINT64_MAX;
	volatile uint64_t t73 = 268260640522926LLU;

    t73 = (x349-((x350-x351)/x352));

    if (t73 != 18446744073695224333LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x357 = 2U;
	volatile int32_t x360 = 513038781;
	int32_t t74 = 42423;

    t74 = (x357-((x358-x359)/x360));

    if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x361 = -70;
	static uint32_t x362 = 85U;
	static volatile uint32_t t75 = 130U;

    t75 = (x361-((x362-x363)/x364));

    if (t75 != 4261277231U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x365 = INT8_MIN;
	int64_t x367 = -116050134LL;
	int64_t t76 = 3418882150LL;

    t76 = (x365-((x366-x367)/x368));

    if (t76 != -128LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x369 = -2;
	static int64_t x370 = INT64_MIN;
	int16_t x371 = INT16_MIN;

    t77 = (x369-((x370-x371)/x372));

    if (t77 != -72057594037927682LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x374 = INT64_MAX;
	static int32_t x375 = 29;
	int16_t x376 = -8574;
	static volatile int64_t t78 = -38LL;

    t78 = (x373-((x374-x375)/x376));

    if (t78 != 1075737349777923LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x382 = INT64_MIN;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t79 = 5646LLU;

    t79 = (x381-((x382-x383)/x384));

    if (t79 != 4294967295LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x389 = 29LLU;
	static volatile uint16_t x390 = 6887U;
	uint64_t x391 = UINT64_MAX;
	volatile uint64_t t80 = 8861794034371908LLU;

    t80 = (x389-((x390-x391)/x392));

    if (t80 != 29LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x397 = UINT8_MAX;
	volatile int64_t x398 = -1LL;
	int8_t x399 = INT8_MAX;
	volatile int16_t x400 = -405;
	volatile int64_t t81 = -660566297LL;

    t81 = (x397-((x398-x399)/x400));

    if (t81 != 255LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x401 = INT64_MIN;
	int64_t x403 = INT64_MIN;
	volatile int8_t x404 = INT8_MIN;
	volatile int64_t t82 = 373821480LL;

    t82 = (x401-((x402-x403)/x404));

    if (t82 != -9151314442816847873LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x405 = INT64_MAX;
	volatile int64_t x406 = -1LL;
	uint8_t x407 = 51U;
	int8_t x408 = INT8_MIN;
	int64_t t83 = INT64_MAX;

    t83 = (x405-((x406-x407)/x408));

    if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x409 = 43;
	int8_t x410 = 9;
	static volatile int64_t x411 = INT64_MAX;
	uint32_t x412 = UINT32_MAX;
	volatile int64_t t84 = -1154239367LL;

    t84 = (x409-((x410-x411)/x412));

    if (t84 != 2147483691LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x413 = -15838;
	uint16_t x414 = UINT16_MAX;
	static uint64_t x415 = 8326038462322LLU;
	uint64_t t85 = 57250LLU;

    t85 = (x413-((x414-x415)/x416));

    if (t85 != 18446744065119605060LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x421 = INT32_MIN;
	volatile int32_t x422 = INT32_MAX;
	uint64_t x423 = 109473124LLU;
	volatile uint32_t x424 = 165U;
	volatile uint64_t t86 = 2130105154377817572LLU;

    t86 = (x421-((x422-x423)/x424));

    if (t86 != 18446744071549716390LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x425 = UINT8_MAX;
	int8_t x426 = 1;
	int8_t x427 = 1;
	int8_t x428 = INT8_MIN;
	static volatile int32_t t87 = 53;

    t87 = (x425-((x426-x427)/x428));

    if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x433 = 1030312515892645LLU;
	int16_t x434 = INT16_MIN;
	uint64_t x435 = UINT64_MAX;
	int8_t x436 = INT8_MIN;
	volatile uint64_t t88 = 10LLU;

    t88 = (x433-((x434-x435)/x436));

    if (t88 != 1030312515892645LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x437 = 0;
	int16_t x438 = INT16_MIN;
	int8_t x439 = -1;
	int8_t x440 = -1;
	int32_t t89 = 108177526;

    t89 = (x437-((x438-x439)/x440));

    if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x441 = -228;
	int32_t x442 = -1;
	int64_t x443 = -1LL;
	int16_t x444 = INT16_MIN;
	static volatile int64_t t90 = -29098843466LL;

    t90 = (x441-((x442-x443)/x444));

    if (t90 != -228LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x446 = INT32_MIN;
	volatile uint32_t x447 = 49512009U;
	int64_t x448 = -1LL;
	int64_t t91 = -120558366LL;

    t91 = (x445-((x446-x447)/x448));

    if (t91 != 2097985474LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x449 = 30U;
	volatile uint8_t x451 = 1U;
	static int8_t x452 = INT8_MIN;
	uint32_t t92 = 7U;

    t92 = (x449-((x450-x451)/x452));

    if (t92 != 30U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x454 = INT32_MIN;
	int32_t x456 = INT32_MAX;
	int64_t t93 = 258604673068574LL;

    t93 = (x453-((x454-x455)/x456));

    if (t93 != 527916638794470914LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x457 = INT8_MAX;
	int8_t x458 = INT8_MIN;
	int32_t x460 = INT32_MAX;

    t94 = (x457-((x458-x459)/x460));

    if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x461 = -1;
	uint32_t x462 = 0U;
	int16_t x463 = -7219;
	volatile int64_t x464 = 204682575626LL;

    t95 = (x461-((x462-x463)/x464));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x465 = 1U;
	uint32_t x466 = 436U;
	int8_t x468 = -1;
	int64_t t96 = -16272LL;

    t96 = (x465-((x466-x467)/x468));

    if (t96 != -9223372036854775370LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x469 = -1;
	static int32_t x470 = INT32_MIN;
	int16_t x471 = -1;
	uint32_t x472 = UINT32_MAX;
	static uint32_t t97 = UINT32_MAX;

    t97 = (x469-((x470-x471)/x472));

    if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x473 = -1;
	volatile int64_t x474 = INT64_MAX;
	static int32_t x475 = INT32_MAX;
	int16_t x476 = INT16_MIN;
	volatile int64_t t98 = -32061774203714LL;

    t98 = (x473-((x474-x475)/x476));

    if (t98 != 281474976645119LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x477 = INT64_MIN;
	static volatile int8_t x478 = -1;
	uint32_t x479 = UINT32_MAX;
	int16_t x480 = 1;
	volatile int64_t t99 = INT64_MIN;

    t99 = (x477-((x478-x479)/x480));

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x481 = INT16_MIN;
	static int16_t x482 = INT16_MAX;
	int16_t x483 = 6588;
	volatile int32_t x484 = INT32_MIN;
	volatile int32_t t100 = 5293870;

    t100 = (x481-((x482-x483)/x484));

    if (t100 != -32768) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x485 = UINT16_MAX;
	int32_t x486 = -1;
	volatile uint64_t x487 = 31690LLU;
	int32_t x488 = 105804;
	volatile uint64_t t101 = 16009234LLU;

    t101 = (x485-((x486-x487)/x488));

    if (t101 != 18446569725442314313LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x489 = -13204LL;
	int8_t x490 = 1;
	int64_t t102 = -188253688420972LL;

    t102 = (x489-((x490-x491)/x492));

    if (t102 != -13459LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x494 = UINT16_MAX;
	int8_t x495 = INT8_MAX;
	volatile int32_t x496 = 10618876;
	int32_t t103 = -598213;

    t103 = (x493-((x494-x495)/x496));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x497 = UINT32_MAX;
	volatile int32_t x498 = -27899;
	uint64_t x500 = 11288810682LLU;

    t104 = (x497-((x498-x499)/x500));

    if (t104 != 3477930648LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x502 = INT16_MAX;
	int8_t x503 = -12;
	volatile int16_t x504 = -1;
	int64_t t105 = 0LL;

    t105 = (x501-((x502-x503)/x504));

    if (t105 != -9223372036854743029LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint64_t x505 = 23185193525753542LLU;
	uint32_t x507 = UINT32_MAX;
	uint64_t x508 = UINT64_MAX;
	uint64_t t106 = 2387449816LLU;

    t106 = (x505-((x506-x507)/x508));

    if (t106 != 23185193525753542LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x509 = INT16_MAX;
	static volatile int32_t x510 = -953078;
	volatile int16_t x511 = 206;
	static volatile uint8_t x512 = 2U;

    t107 = (x509-((x510-x511)/x512));

    if (t107 != 509409) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x513 = -118;
	int64_t x514 = -1LL;
	static int64_t x515 = INT64_MIN;
	uint16_t x516 = UINT16_MAX;
	int64_t t108 = -500440094689LL;

    t108 = (x513-((x514-x515)/x516));

    if (t108 != -140739635871862LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x517 = -1;
	volatile uint64_t x518 = 20261098426331336LLU;
	uint64_t x519 = UINT64_MAX;
	static int16_t x520 = 3;
	uint64_t t109 = 122790292635LLU;

    t109 = (x517-((x518-x519)/x520));

    if (t109 != 18439990374234107836LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x522 = INT8_MAX;
	uint8_t x523 = 105U;
	int16_t x524 = -1;

    t110 = (x521-((x522-x523)/x524));

    if (t110 != 55107600041LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x525 = INT8_MIN;
	volatile int8_t x526 = INT8_MIN;
	int8_t x527 = -1;
	uint8_t x528 = 1U;
	static int32_t t111 = -2430;

    t111 = (x525-((x526-x527)/x528));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x529 = 1U;
	static volatile int16_t x530 = -1;
	uint32_t x531 = UINT32_MAX;
	uint64_t x532 = 7428829046291LLU;
	volatile uint64_t t112 = 13793298LLU;

    t112 = (x529-((x530-x531)/x532));

    if (t112 != 1LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x533 = 13LLU;
	volatile int16_t x536 = INT16_MIN;
	static volatile uint64_t t113 = 4832LLU;

    t113 = (x533-((x534-x535)/x536));

    if (t113 != 13LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x539 = 0U;
	volatile int32_t t114 = 57;

    t114 = (x537-((x538-x539)/x540));

    if (t114 != -6070553) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x541 = 2980U;
	int16_t x542 = -19;
	int64_t x543 = 49568564LL;
	int64_t t115 = 0LL;

    t115 = (x541-((x542-x543)/x544));

    if (t115 != 2980LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x545 = 12;
	volatile uint64_t x547 = 287314221612196LLU;
	int64_t x548 = 7729148LL;
	volatile uint64_t t116 = 124LLU;

    t116 = (x545-((x546-x547)/x548));

    if (t116 != 18446741687100217781LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x549 = INT16_MIN;
	int8_t x550 = INT8_MIN;
	int16_t x551 = INT16_MAX;
	int32_t x552 = INT32_MAX;
	int32_t t117 = 87517239;

    t117 = (x549-((x550-x551)/x552));

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x553 = -1;
	volatile int64_t x554 = 18858731165759505LL;
	int8_t x555 = INT8_MIN;
	uint32_t x556 = UINT32_MAX;
	volatile int64_t t118 = -897597LL;

    t118 = (x553-((x554-x555)/x556));

    if (t118 != -4390891LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x562 = -160210130;
	uint16_t x563 = 8172U;
	volatile int64_t x564 = -1LL;
	static volatile int64_t t119 = 462044735LL;

    t119 = (x561-((x562-x563)/x564));

    if (t119 != 4134748993LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x567 = 59862LLU;
	int64_t x568 = INT64_MIN;
	uint64_t t120 = UINT64_MAX;

    t120 = (x565-((x566-x567)/x568));

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x573 = 455235312U;
	static uint32_t x574 = 482017228U;
	int8_t x575 = -2;
	static uint16_t x576 = UINT16_MAX;

    t121 = (x573-((x574-x575)/x576));

    if (t121 != 455227957U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x577 = -1LL;
	volatile int8_t x578 = INT8_MAX;
	int8_t x579 = 7;
	uint64_t x580 = UINT64_MAX;
	uint64_t t122 = UINT64_MAX;

    t122 = (x577-((x578-x579)/x580));

    if (t122 != UINT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x581 = INT16_MIN;
	uint64_t x582 = 2418158462224965306LLU;
	int64_t x583 = INT64_MIN;
	static volatile uint16_t x584 = UINT16_MAX;
	volatile uint64_t t123 = 836530348238222LLU;

    t123 = (x581-((x582-x583)/x584));

    if (t123 != 18446566435340722332LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x585 = INT8_MAX;
	static uint32_t x586 = UINT32_MAX;
	int16_t x587 = -1;
	volatile int64_t x588 = INT64_MIN;
	volatile int64_t t124 = 66LL;

    t124 = (x585-((x586-x587)/x588));

    if (t124 != 127LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x593 = -1;
	int16_t x594 = INT16_MIN;
	int16_t x596 = -1;
	volatile int32_t t125 = -1;

    t125 = (x593-((x594-x595)/x596));

    if (t125 != 2147450879) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x597 = 0U;
	static volatile int64_t x598 = INT64_MIN;
	int64_t x599 = INT64_MIN;
	int8_t x600 = INT8_MIN;

    t126 = (x597-((x598-x599)/x600));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x601 = INT16_MIN;
	uint32_t x603 = UINT32_MAX;
	int32_t x604 = INT32_MAX;
	static volatile uint32_t t127 = 557738723U;

    t127 = (x601-((x602-x603)/x604));

    if (t127 != 4294934528U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x607 = 1U;
	volatile uint64_t t128 = 2111231223891715LLU;

    t128 = (x605-((x606-x607)/x608));

    if (t128 != 73645125331049784LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x609 = -1LL;
	static uint32_t x610 = 0U;
	int64_t x612 = INT64_MIN;
	volatile uint64_t t129 = 10LLU;

    t129 = (x609-((x610-x611)/x612));

    if (t129 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x613 = -4;
	volatile int32_t x614 = -1;
	static int16_t x615 = INT16_MAX;
	int64_t t130 = -12789524LL;

    t130 = (x613-((x614-x615)/x616));

    if (t130 != -4LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x617 = -1LL;
	int16_t x618 = INT16_MIN;
	int64_t x619 = INT64_MIN;
	int32_t x620 = INT32_MAX;
	volatile int64_t t131 = 2811LL;

    t131 = (x617-((x618-x619)/x620));

    if (t131 != -4294967298LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x621 = 0U;
	int32_t x624 = INT32_MIN;
	uint32_t t132 = UINT32_MAX;

    t132 = (x621-((x622-x623)/x624));

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x625 = 1012LLU;
	int16_t x626 = -1;
	static int8_t x627 = -7;
	volatile int64_t x628 = -1610671557522882LL;
	volatile uint64_t t133 = 145800LLU;

    t133 = (x625-((x626-x627)/x628));

    if (t133 != 1012LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x629 = INT32_MIN;
	int32_t x630 = 6858518;
	int16_t x631 = INT16_MIN;
	int64_t x632 = INT64_MIN;
	volatile int64_t t134 = 952094036LL;

    t134 = (x629-((x630-x631)/x632));

    if (t134 != -2147483648LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x633 = INT32_MIN;
	int8_t x634 = 0;
	volatile int64_t x635 = -1LL;
	uint32_t x636 = 15851U;
	int64_t t135 = 594067776LL;

    t135 = (x633-((x634-x635)/x636));

    if (t135 != -2147483648LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x637 = INT16_MIN;
	int64_t x638 = 21601333LL;
	static int8_t x639 = -1;
	volatile uint32_t x640 = 7538U;
	int64_t t136 = -1016590723LL;

    t136 = (x637-((x638-x639)/x640));

    if (t136 != -35633LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x645 = -1LL;
	uint16_t x646 = 1515U;
	int32_t x647 = 511582325;
	volatile int64_t t137 = 2LL;

    t137 = (x645-((x646-x647)/x648));

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x649 = 50U;
	volatile int64_t x650 = -1LL;
	int8_t x651 = -1;
	uint32_t x652 = UINT32_MAX;
	int64_t t138 = 34683704798846LL;

    t138 = (x649-((x650-x651)/x652));

    if (t138 != 50LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x653 = INT32_MIN;
	static int8_t x654 = -1;
	static int8_t x655 = INT8_MIN;
	volatile uint32_t x656 = 260919U;
	volatile uint32_t t139 = 677013887U;

    t139 = (x653-((x654-x655)/x656));

    if (t139 != 2147483648U) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x657 = -4;
	uint8_t x658 = 4U;
	int64_t x659 = INT64_MAX;
	uint16_t x660 = UINT16_MAX;

    t140 = (x657-((x658-x659)/x660));

    if (t140 != 140739635871740LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x661 = UINT32_MAX;
	int8_t x662 = INT8_MAX;
	int16_t x663 = 970;
	volatile int64_t x664 = INT64_MIN;
	static volatile int64_t t141 = -3843539674967LL;

    t141 = (x661-((x662-x663)/x664));

    if (t141 != 4294967295LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x665 = INT32_MIN;
	volatile int8_t x667 = INT8_MAX;
	uint64_t t142 = 516LLU;

    t142 = (x665-((x666-x667)/x668));

    if (t142 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x670 = -1;
	int16_t x672 = INT16_MIN;

    t143 = (x669-((x670-x671)/x672));

    if (t143 != 50LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x673 = 31U;
	int8_t x674 = INT8_MIN;
	int32_t t144 = 81493484;

    t144 = (x673-((x674-x675)/x676));

    if (t144 != 31) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x677 = UINT32_MAX;
	int64_t x678 = INT64_MAX;
	int32_t x679 = 118;
	volatile uint16_t x680 = UINT16_MAX;
	int64_t t145 = -12LL;

    t145 = (x677-((x678-x679)/x680));

    if (t145 != -140735340904449LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x681 = 961370190870828LLU;
	int8_t x682 = INT8_MAX;
	uint64_t x683 = 1435LLU;
	uint32_t x684 = 27544015U;
	static volatile uint64_t t146 = 238051469LLU;

    t146 = (x681-((x682-x683)/x684));

    if (t146 != 960700472092585LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x685 = INT32_MIN;
	static int16_t x686 = 0;
	volatile int64_t x687 = -1LL;
	uint16_t x688 = 11827U;
	static int64_t t147 = 76020LL;

    t147 = (x685-((x686-x687)/x688));

    if (t147 != -2147483648LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x689 = 2U;
	uint8_t x691 = 28U;
	int32_t x692 = 1;
	uint32_t t148 = 2670U;

    t148 = (x689-((x690-x691)/x692));

    if (t148 != 4294966259U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x693 = 3553748910527191058LLU;
	volatile int64_t x694 = INT64_MIN;
	volatile int16_t x695 = -1;

    t149 = (x693-((x694-x695)/x696));

    if (t149 != 3553748910527191059LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x697 = 0;
	int64_t x698 = -1LL;
	int8_t x699 = -3;
	int32_t x700 = -13841;
	int64_t t150 = 101585762LL;

    t150 = (x697-((x698-x699)/x700));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x702 = UINT8_MAX;
	int32_t x704 = INT32_MAX;

    t151 = (x701-((x702-x703)/x704));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x705 = UINT16_MAX;
	int8_t x706 = -4;
	int16_t x707 = INT16_MIN;
	static volatile int16_t x708 = INT16_MIN;
	int32_t t152 = -28534699;

    t152 = (x705-((x706-x707)/x708));

    if (t152 != 65535) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x709 = INT16_MAX;
	int8_t x711 = INT8_MAX;
	int16_t x712 = -1;
	uint64_t t153 = 242972887540935LLU;

    t153 = (x709-((x710-x711)/x712));

    if (t153 != 32767LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x718 = INT64_MIN;
	int64_t t154 = 30484762763LL;

    t154 = (x717-((x718-x719)/x720));

    if (t154 != -4295000063LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x723 = INT64_MIN;
	volatile int64_t t155 = -12980LL;

    t155 = (x721-((x722-x723)/x724));

    if (t155 != -390019911139060LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x725 = INT8_MAX;
	uint16_t x727 = 1U;
	static uint32_t x728 = UINT32_MAX;
	uint32_t t156 = 47U;

    t156 = (x725-((x726-x727)/x728));

    if (t156 != 127U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x730 = -1;
	static int32_t x731 = INT32_MAX;
	int64_t x732 = INT64_MAX;
	int64_t t157 = -15LL;

    t157 = (x729-((x730-x731)/x732));

    if (t157 != 12325LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x733 = -354952378544LL;
	uint64_t x734 = 2075795069716561LLU;
	static int8_t x735 = INT8_MIN;
	int32_t x736 = INT32_MIN;
	uint64_t t158 = 1281LLU;

    t158 = (x733-((x734-x735)/x736));

    if (t158 != 18446743718757173072LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x737 = UINT32_MAX;
	volatile uint32_t x738 = 1U;
	static int8_t x739 = -1;
	volatile int64_t x740 = INT64_MIN;

    t159 = (x737-((x738-x739)/x740));

    if (t159 != 4294967295LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x741 = UINT16_MAX;
	int8_t x742 = INT8_MIN;
	int16_t x743 = INT16_MIN;
	int32_t t160 = -205;

    t160 = (x741-((x742-x743)/x744));

    if (t160 != 65535) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x745 = INT8_MIN;
	int32_t x746 = -1;
	int64_t x747 = -71302431359LL;
	volatile int64_t t161 = -126LL;

    t161 = (x745-((x746-x747)/x748));

    if (t161 != -128LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x753 = UINT64_MAX;
	int8_t x754 = INT8_MAX;
	int8_t x756 = INT8_MAX;
	uint64_t t162 = 2913337241LLU;

    t162 = (x753-((x754-x755)/x756));

    if (t162 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x757 = UINT64_MAX;
	volatile int32_t x758 = -1;
	int32_t x759 = INT32_MAX;
	volatile uint64_t t163 = UINT64_MAX;

    t163 = (x757-((x758-x759)/x760));

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x761 = INT32_MAX;
	uint16_t x763 = UINT16_MAX;
	static int16_t x764 = -1;

    t164 = (x761-((x762-x763)/x764));

    if (t164 != 2147385344) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x766 = -1;
	int32_t x767 = 13;
	int8_t x768 = -4;
	static volatile int32_t t165 = 273586;

    t165 = (x765-((x766-x767)/x768));

    if (t165 != 17) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x769 = -1267589549LL;
	uint8_t x772 = 1U;
	uint64_t t166 = 1327586LLU;

    t166 = (x769-((x770-x771)/x772));

    if (t166 != 9223372034823043640LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x773 = 12968U;
	uint16_t x774 = 1U;
	static int64_t x775 = -5LL;
	volatile uint8_t x776 = UINT8_MAX;
	volatile int64_t t167 = 69319383264LL;

    t167 = (x773-((x774-x775)/x776));

    if (t167 != 12968LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x777 = 2U;
	volatile uint16_t x778 = UINT16_MAX;
	int16_t x779 = 12384;
	int32_t t168 = 3649933;

    t168 = (x777-((x778-x779)/x780));

    if (t168 != -416) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x781 = 92909;
	volatile int16_t x782 = 424;
	volatile uint64_t x783 = 6743498LLU;
	int16_t x784 = INT16_MAX;
	uint64_t t169 = 194893517424865LLU;

    t169 = (x781-((x782-x783)/x784));

    if (t169 != 18446181106575829931LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x789 = INT8_MIN;
	static int32_t x790 = INT32_MAX;
	volatile uint8_t x791 = 13U;

    t170 = (x789-((x790-x791)/x792));

    if (t170 != 2147483506LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x793 = 1308;
	uint64_t x794 = 1964215483083LLU;
	static uint64_t x795 = 16LLU;
	int64_t x796 = -86188625121962LL;

    t171 = (x793-((x794-x795)/x796));

    if (t171 != 1308LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x798 = INT32_MAX;
	uint32_t x799 = UINT32_MAX;
	int64_t x800 = INT64_MIN;
	volatile int64_t t172 = 2603794980197307LL;

    t172 = (x797-((x798-x799)/x800));

    if (t172 != -132LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x802 = UINT8_MAX;
	static uint16_t x803 = 118U;
	static int8_t x804 = INT8_MIN;
	int32_t t173 = 2699;

    t173 = (x801-((x802-x803)/x804));

    if (t173 != 20) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x805 = 412196344U;
	int8_t x806 = -4;
	static int32_t x807 = -4;
	int64_t x808 = INT64_MIN;
	int64_t t174 = -677222602541903LL;

    t174 = (x805-((x806-x807)/x808));

    if (t174 != 412196344LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t t175 = -1524LL;

    t175 = (x809-((x810-x811)/x812));

    if (t175 != 2147483904LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x813 = -268409228LL;
	uint8_t x815 = UINT8_MAX;
	int16_t x816 = -1529;
	int64_t t176 = 5569209294906LL;

    t176 = (x813-((x814-x815)/x816));

    if (t176 != -268409244LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x817 = INT64_MIN;
	static volatile int32_t x818 = -568;
	int16_t x819 = INT16_MIN;
	static uint16_t x820 = UINT16_MAX;
	int64_t t177 = INT64_MIN;

    t177 = (x817-((x818-x819)/x820));

    if (t177 != INT64_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x823 = 0;
	int8_t x824 = -1;
	volatile int32_t t178 = -21057136;

    t178 = (x821-((x822-x823)/x824));

    if (t178 != 19684) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x825 = 680U;
	int32_t x826 = -6292;
	int32_t x827 = -1;
	static uint32_t x828 = 2743U;
	volatile uint32_t t179 = 29342U;

    t179 = (x825-((x826-x827)/x828));

    if (t179 != 4293402187U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x829 = -1LL;
	uint16_t x831 = 239U;
	volatile int64_t t180 = 1LL;

    t180 = (x829-((x830-x831)/x832));

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x833 = INT32_MIN;
	static volatile int8_t x834 = -19;
	volatile uint32_t x835 = 419U;
	uint64_t t181 = 1909422679LLU;

    t181 = (x833-((x834-x835)/x836));

    if (t181 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x841 = 849;
	volatile int8_t x842 = INT8_MIN;
	volatile int8_t x844 = INT8_MIN;
	static int32_t t182 = 24;

    t182 = (x841-((x842-x843)/x844));

    if (t182 != 16778064) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x845 = 144691LLU;
	static volatile int16_t x846 = INT16_MIN;
	static uint8_t x847 = 14U;
	int8_t x848 = INT8_MAX;
	static uint64_t t183 = 56979LLU;

    t183 = (x845-((x846-x847)/x848));

    if (t183 != 144949LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x854 = 3U;
	static int32_t x855 = INT32_MAX;
	int8_t x856 = 5;
	volatile int64_t t184 = 14724LL;

    t184 = (x853-((x854-x855)/x856));

    if (t184 != 46144960579810043LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x857 = 2243;
	uint8_t x858 = 81U;
	static volatile int64_t x859 = -1LL;
	volatile int8_t x860 = 1;

    t185 = (x857-((x858-x859)/x860));

    if (t185 != 2161LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x861 = -1LL;
	int8_t x862 = -1;
	uint16_t x863 = 12483U;
	int16_t x864 = INT16_MIN;
	volatile int64_t t186 = 435982875368039647LL;

    t186 = (x861-((x862-x863)/x864));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x865 = 37100069888LLU;
	volatile int64_t x867 = -1LL;
	int32_t x868 = INT32_MIN;
	static volatile uint64_t t187 = 829531368650661LLU;

    t187 = (x865-((x866-x867)/x868));

    if (t187 != 37100069888LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x869 = -35;
	int32_t x871 = -313;
	int64_t x872 = INT64_MAX;
	int64_t t188 = -60432608582959239LL;

    t188 = (x869-((x870-x871)/x872));

    if (t188 != -35LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x873 = -1;
	int64_t x874 = -459800653086771377LL;
	volatile int16_t x875 = -1;
	int8_t x876 = INT8_MIN;
	int64_t t189 = 22950595679LL;

    t189 = (x873-((x874-x875)/x876));

    if (t189 != -3592192602240402LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x877 = -47189363289714LL;
	static int16_t x878 = -3339;
	volatile uint16_t x880 = 23U;
	int64_t t190 = 1348337427LL;

    t190 = (x877-((x878-x879)/x880));

    if (t190 != -401063364878714603LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x886 = -238333019;
	uint8_t x887 = UINT8_MAX;
	uint16_t x888 = 1143U;
	static volatile int32_t t191 = -1;

    t191 = (x885-((x886-x887)/x888));

    if (t191 != 274050) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x889 = -1LL;
	uint8_t x890 = 2U;
	uint64_t x891 = UINT64_MAX;
	uint16_t x892 = 40U;
	uint64_t t192 = UINT64_MAX;

    t192 = (x889-((x890-x891)/x892));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x893 = INT64_MIN;
	static uint64_t x894 = 2429602643873485LLU;
	int8_t x895 = INT8_MAX;
	uint64_t x896 = 32LLU;
	uint64_t t193 = 14937617375476LLU;

    t193 = (x893-((x894-x895)/x896));

    if (t193 != 9223296111772154766LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x897 = -1;
	int16_t x899 = INT16_MIN;
	int64_t t194 = 702LL;

    t194 = (x897-((x898-x899)/x900));

    if (t194 != -555883441246LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x903 = INT16_MAX;
	static uint32_t x904 = 4002U;

    t195 = (x901-((x902-x903)/x904));

    if (t195 != 18446744073708485284LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint8_t x915 = 37U;
	static uint32_t t196 = 1188121U;

    t196 = (x913-((x914-x915)/x916));

    if (t196 != 4294949928U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x921 = INT8_MIN;
	int16_t x922 = -1;
	int64_t x924 = INT64_MIN;

    t197 = (x921-((x922-x923)/x924));

    if (t197 != -128LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x929 = INT8_MAX;
	volatile int32_t x930 = INT32_MIN;
	int16_t x931 = -528;
	int64_t t198 = -94677010LL;

    t198 = (x929-((x930-x931)/x932));

    if (t198 != 127LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x933 = 879186419;
	int64_t x935 = -45081964LL;
	static uint16_t x936 = UINT16_MAX;
	int64_t t199 = -1LL;

    t199 = (x933-((x934-x935)/x936));

    if (t199 != 879185732LL) { NG(); } else { ; }
	
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

