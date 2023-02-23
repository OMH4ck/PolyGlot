
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

static int32_t x12 = -1;
volatile int64_t t2 = INT64_MIN;
int8_t x31 = -1;
uint16_t x32 = UINT16_MAX;
int8_t x33 = -1;
volatile int16_t x36 = INT16_MIN;
int32_t t6 = -1305534;
volatile int32_t t7 = -1015;
int64_t x41 = -251845888331669LL;
volatile int64_t x42 = INT64_MIN;
uint8_t x44 = UINT8_MAX;
static uint64_t x45 = 430898944877209LLU;
volatile int32_t x46 = INT32_MIN;
uint64_t x47 = UINT64_MAX;
static int32_t t10 = -2022036;
int64_t x57 = -1LL;
int32_t x65 = -1;
volatile int8_t x84 = -1;
static uint16_t x85 = 14433U;
volatile int32_t t20 = INT32_MAX;
int8_t x97 = INT8_MIN;
uint8_t x102 = 10U;
int32_t x107 = INT32_MIN;
int16_t x110 = INT16_MIN;
volatile uint16_t x116 = 8994U;
int32_t x119 = 18296;
int16_t x127 = 1;
uint32_t t27 = 32U;
int32_t t28 = 794;
volatile int8_t x136 = 0;
volatile int64_t x141 = INT64_MIN;
uint32_t x150 = 1144U;
static volatile int64_t x156 = INT64_MAX;
int8_t x157 = INT8_MIN;
int32_t x158 = 242109242;
int32_t t34 = -1;
int16_t x161 = INT16_MIN;
uint16_t x166 = 30U;
int16_t x171 = -1;
static int16_t x176 = INT16_MIN;
int32_t x194 = -1;
volatile int8_t x198 = 3;
volatile int32_t t43 = -24624998;
static uint64_t x207 = 843325253LLU;
uint64_t x210 = 88760666143671603LLU;
static volatile int64_t x218 = INT64_MIN;
static uint64_t x220 = 13LLU;
int32_t t49 = -11;
int64_t x234 = INT64_MAX;
volatile int32_t t52 = 620209;
uint8_t x245 = 1U;
uint32_t x248 = UINT32_MAX;
int64_t t54 = 744430641845LL;
volatile uint64_t x257 = UINT64_MAX;
uint64_t x265 = UINT64_MAX;
uint8_t x266 = 0U;
int32_t x267 = -178;
uint64_t x273 = UINT64_MAX;
static volatile int8_t x276 = -61;
int8_t x281 = INT8_MIN;
uint16_t x282 = 10U;
int32_t t61 = 1254141;
volatile uint8_t x286 = 48U;
int16_t x287 = 35;
int8_t x290 = -1;
int16_t x292 = -3;
int64_t x293 = INT64_MAX;
static int8_t x296 = INT8_MAX;
uint16_t x305 = 4U;
volatile int32_t t67 = 1392687;
volatile uint32_t t68 = 7627U;
volatile int8_t x329 = INT8_MAX;
volatile uint32_t t74 = 11U;
uint64_t t75 = 6698450LLU;
volatile int32_t x348 = -14216596;
volatile uint8_t x353 = UINT8_MAX;
volatile int32_t t77 = 17286;
static uint8_t x357 = UINT8_MAX;
int32_t x365 = INT32_MAX;
static int32_t x368 = INT32_MAX;
int8_t x369 = -1;
uint16_t x371 = UINT16_MAX;
volatile int32_t x382 = 1;
static int32_t x384 = INT32_MIN;
int16_t x388 = -13923;
static int8_t x395 = INT8_MIN;
uint8_t x410 = UINT8_MAX;
static uint8_t x416 = 8U;
volatile uint8_t x417 = 2U;
int64_t x422 = INT64_MIN;
int64_t x424 = 50505885LL;
int64_t x434 = -3LL;
int16_t x441 = INT16_MAX;
int32_t x444 = INT32_MAX;
int32_t x449 = -497548;
int8_t x460 = INT8_MIN;
volatile int32_t x461 = INT32_MAX;
static uint16_t x462 = UINT16_MAX;
int32_t x467 = 371;
static uint64_t x469 = 7638069045LLU;
volatile uint64_t x475 = UINT64_MAX;
uint64_t x477 = 429744213648655LLU;
int8_t x478 = INT8_MAX;
int64_t x482 = INT64_MIN;
static volatile int32_t t108 = 15;
volatile uint16_t x493 = 3U;
static int8_t x503 = INT8_MAX;
volatile int32_t t112 = 364218;
int8_t x507 = 5;
int32_t x509 = 40;
static int64_t x513 = -1LL;
int8_t x515 = INT8_MIN;
int64_t t115 = 33110701LL;
static volatile int16_t x522 = -1;
uint16_t x525 = 3765U;
int32_t x530 = 113238111;
uint32_t x534 = 13U;
int32_t t120 = 1762;
volatile uint8_t x545 = UINT8_MAX;
int16_t x550 = -1;
int32_t x553 = 918330157;
int16_t x568 = INT16_MIN;
volatile int32_t t128 = INT32_MIN;
volatile int64_t x574 = -1254821147LL;
uint16_t x578 = 996U;
uint32_t x581 = 131U;
int8_t x589 = -1;
volatile int32_t t133 = 7706676;
int16_t x595 = 7;
int32_t t134 = 879914;
uint8_t x598 = 1U;
int8_t x599 = -1;
static int16_t x600 = -1;
int64_t x608 = INT64_MAX;
static uint32_t x611 = UINT32_MAX;
uint16_t x618 = 0U;
int64_t x619 = INT64_MIN;
int16_t x622 = -1;
int16_t x623 = INT16_MIN;
int16_t x633 = INT16_MAX;
int16_t x637 = -1;
volatile int8_t x641 = INT8_MIN;
int16_t x642 = INT16_MAX;
int8_t x644 = 15;
volatile int32_t t147 = 1;
int8_t x657 = INT8_MAX;
uint32_t x660 = UINT32_MAX;
static volatile int32_t t148 = -168293944;
static volatile int16_t x670 = INT16_MAX;
int8_t x671 = -20;
uint64_t x679 = UINT64_MAX;
static volatile uint32_t x680 = 0U;
volatile uint16_t x687 = UINT16_MAX;
volatile int32_t x690 = 1;
uint16_t x691 = 2U;
int32_t x697 = -566;
static int32_t t158 = 60819486;
static int16_t x701 = INT16_MIN;
volatile uint8_t x706 = 3U;
static int32_t x708 = -1;
int32_t x714 = 117105951;
volatile int32_t t162 = -334099;
volatile uint64_t x742 = 201LLU;
volatile uint8_t x744 = 2U;
int32_t t169 = -7;
static volatile int32_t x746 = -1;
uint16_t x752 = 42U;
volatile int64_t x753 = -1LL;
volatile int32_t x755 = -1;
static uint16_t x759 = 48U;
int8_t x763 = INT8_MIN;
int32_t x771 = INT32_MAX;
static int32_t x780 = INT32_MIN;
int16_t x784 = INT16_MIN;
uint16_t x797 = 58U;
static int32_t x813 = 699901547;
int8_t x815 = -1;
int8_t x828 = -1;
volatile int32_t t186 = 44520;
static uint64_t x837 = UINT64_MAX;
static uint64_t x839 = 2328LLU;
int8_t x841 = INT8_MIN;
int64_t x844 = INT64_MIN;
static volatile int32_t x845 = -3;
uint16_t x849 = 78U;
volatile int32_t t190 = 1331966;
int64_t x858 = 24497461936329LL;
int16_t x862 = -1;
int64_t x864 = INT64_MAX;
uint64_t x866 = UINT64_MAX;
int16_t x867 = INT16_MAX;
int16_t x868 = 0;
volatile int32_t t194 = 29;
int64_t x879 = -1662LL;
volatile int64_t t196 = INT64_MIN;
uint16_t x886 = 207U;
int32_t t198 = 7836923;


void f0(void) {
    	volatile int8_t x1 = -1;
	int32_t x2 = INT32_MAX;
	int16_t x3 = -1;
	volatile int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 967;

    t0 = (x1-((x2%x3)<=x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1702;
	static volatile int32_t x6 = -17743554;
	static int8_t x7 = 54;
	int64_t x8 = -1LL;
	volatile int32_t t1 = -128365;

    t1 = (x5-((x6%x7)<=x8));

    if (t1 != -1703) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	volatile int8_t x10 = INT8_MAX;
	int8_t x11 = INT8_MIN;

    t2 = (x9-((x10%x11)<=x12));

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x21 = 0U;
	uint8_t x22 = 7U;
	volatile int32_t x23 = -1;
	int16_t x24 = -42;
	volatile int32_t t3 = 6;

    t3 = (x21-((x22%x23)<=x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = -1;
	static uint8_t x26 = UINT8_MAX;
	int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MIN;
	static int32_t t4 = 6;

    t4 = (x25-((x26%x27)<=x28));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x29 = INT16_MIN;
	int64_t x30 = -1LL;
	int32_t t5 = 0;

    t5 = (x29-((x30%x31)<=x32));

    if (t5 != -32769) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x34 = INT64_MIN;
	volatile int32_t x35 = INT32_MIN;

    t6 = (x33-((x34%x35)<=x36));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	int16_t x39 = -11;
	uint16_t x40 = 3231U;

    t7 = (x37-((x38%x39)<=x40));

    if (t7 != -129) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x43 = UINT64_MAX;
	static volatile int64_t t8 = 4483452269LL;

    t8 = (x41-((x42%x43)<=x44));

    if (t8 != -251845888331669LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x48 = 409LL;
	volatile uint64_t t9 = 1060227081LLU;

    t9 = (x45-((x46%x47)<=x48));

    if (t9 != 430898944877209LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x49 = 51U;
	volatile int16_t x50 = -10254;
	uint8_t x51 = 60U;
	int16_t x52 = INT16_MAX;

    t10 = (x49-((x50%x51)<=x52));

    if (t10 != 50) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x53 = 292532863U;
	int32_t x54 = INT32_MAX;
	uint32_t x55 = 14U;
	int16_t x56 = 0;
	volatile uint32_t t11 = 32U;

    t11 = (x53-((x54%x55)<=x56));

    if (t11 != 292532863U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x58 = INT32_MIN;
	uint8_t x59 = 1U;
	static int8_t x60 = INT8_MIN;
	static int64_t t12 = 51440LL;

    t12 = (x57-((x58%x59)<=x60));

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x61 = 1726LLU;
	static uint64_t x62 = 47649372544LLU;
	uint32_t x63 = 65261U;
	int64_t x64 = -1LL;
	uint64_t t13 = 998139888LLU;

    t13 = (x61-((x62%x63)<=x64));

    if (t13 != 1725LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x66 = INT32_MIN;
	int16_t x67 = INT16_MAX;
	int8_t x68 = INT8_MIN;
	static volatile int32_t t14 = 131329143;

    t14 = (x65-((x66%x67)<=x68));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = INT16_MIN;
	int32_t x70 = INT32_MIN;
	int32_t x71 = INT32_MAX;
	int64_t x72 = -1LL;
	volatile int32_t t15 = 5018842;

    t15 = (x69-((x70%x71)<=x72));

    if (t15 != -32769) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x77 = UINT64_MAX;
	volatile int32_t x78 = INT32_MIN;
	uint8_t x79 = UINT8_MAX;
	static uint64_t x80 = 219639192LLU;
	uint64_t t16 = UINT64_MAX;

    t16 = (x77-((x78%x79)<=x80));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = INT8_MIN;
	uint32_t x82 = 5U;
	int32_t x83 = INT32_MIN;
	int32_t t17 = -792965;

    t17 = (x81-((x82%x83)<=x84));

    if (t17 != -129) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x86 = -3;
	uint64_t x87 = 32332509133LLU;
	int64_t x88 = 1904279908LL;
	volatile int32_t t18 = 3958418;

    t18 = (x85-((x86%x87)<=x88));

    if (t18 != 14433) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x89 = 100231075U;
	int64_t x90 = 24440294720832LL;
	int8_t x91 = INT8_MIN;
	int32_t x92 = INT32_MIN;
	volatile uint32_t t19 = 127U;

    t19 = (x89-((x90%x91)<=x92));

    if (t19 != 100231075U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x93 = INT32_MAX;
	volatile uint32_t x94 = UINT32_MAX;
	int64_t x95 = -757029LL;
	int32_t x96 = -1;

    t20 = (x93-((x94%x95)<=x96));

    if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x98 = 3U;
	volatile int16_t x99 = -548;
	uint16_t x100 = 22533U;
	int32_t t21 = -16106469;

    t21 = (x97-((x98%x99)<=x100));

    if (t21 != -129) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = INT16_MAX;
	int16_t x103 = INT16_MIN;
	int8_t x104 = -1;
	volatile int32_t t22 = 21015942;

    t22 = (x101-((x102%x103)<=x104));

    if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x105 = INT32_MAX;
	static uint64_t x106 = 110LLU;
	int32_t x108 = INT32_MAX;
	int32_t t23 = 451531666;

    t23 = (x105-((x106%x107)<=x108));

    if (t23 != 2147483646) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x109 = -1;
	uint8_t x111 = 1U;
	int64_t x112 = 2945107621LL;
	int32_t t24 = -81752;

    t24 = (x109-((x110%x111)<=x112));

    if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = -1;
	int32_t x114 = 0;
	volatile int32_t x115 = -293;
	volatile int32_t t25 = -58;

    t25 = (x113-((x114%x115)<=x116));

    if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x117 = 374906982U;
	volatile int16_t x118 = -1;
	uint64_t x120 = 236693LLU;
	volatile uint32_t t26 = 80U;

    t26 = (x117-((x118%x119)<=x120));

    if (t26 != 374906982U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x125 = UINT32_MAX;
	static int32_t x126 = -9555;
	uint16_t x128 = 48U;

    t27 = (x125-((x126%x127)<=x128));

    if (t27 != 4294967294U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x129 = 19;
	int16_t x130 = -8;
	static int16_t x131 = -4;
	uint32_t x132 = UINT32_MAX;

    t28 = (x129-((x130%x131)<=x132));

    if (t28 != 18) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x133 = -11565;
	static int64_t x134 = INT64_MIN;
	volatile uint64_t x135 = 56LLU;
	volatile int32_t t29 = -7144843;

    t29 = (x133-((x134%x135)<=x136));

    if (t29 != -11565) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x137 = 0U;
	int64_t x138 = 1581702497700LL;
	volatile int16_t x139 = -7127;
	int8_t x140 = -1;
	volatile int32_t t30 = -1;

    t30 = (x137-((x138%x139)<=x140));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x142 = -3;
	int64_t x143 = INT64_MAX;
	static int8_t x144 = INT8_MIN;
	volatile int64_t t31 = INT64_MIN;

    t31 = (x141-((x142%x143)<=x144));

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x149 = UINT8_MAX;
	int16_t x151 = 2519;
	int8_t x152 = 4;
	volatile int32_t t32 = -1221313;

    t32 = (x149-((x150%x151)<=x152));

    if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x153 = -1;
	int16_t x154 = INT16_MIN;
	int32_t x155 = INT32_MIN;
	static int32_t t33 = 8;

    t33 = (x153-((x154%x155)<=x156));

    if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x159 = INT64_MAX;
	int32_t x160 = -14;

    t34 = (x157-((x158%x159)<=x160));

    if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x162 = 1U;
	int32_t x163 = -209809;
	volatile uint64_t x164 = UINT64_MAX;
	int32_t t35 = 3832089;

    t35 = (x161-((x162%x163)<=x164));

    if (t35 != -32769) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x165 = 0U;
	int8_t x167 = -7;
	uint64_t x168 = UINT64_MAX;
	uint32_t t36 = UINT32_MAX;

    t36 = (x165-((x166%x167)<=x168));

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x169 = 0;
	int8_t x170 = -23;
	volatile int8_t x172 = 5;
	volatile int32_t t37 = 34532014;

    t37 = (x169-((x170%x171)<=x172));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x173 = INT8_MAX;
	static int16_t x174 = INT16_MAX;
	uint32_t x175 = 1U;
	int32_t t38 = 10;

    t38 = (x173-((x174%x175)<=x176));

    if (t38 != 126) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x181 = 1519;
	uint64_t x182 = UINT64_MAX;
	uint8_t x183 = 116U;
	int16_t x184 = INT16_MAX;
	int32_t t39 = 765904;

    t39 = (x181-((x182%x183)<=x184));

    if (t39 != 1518) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x189 = -1689;
	int8_t x190 = -1;
	int8_t x191 = -1;
	int32_t x192 = INT32_MIN;
	volatile int32_t t40 = -73019490;

    t40 = (x189-((x190%x191)<=x192));

    if (t40 != -1689) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x193 = -1;
	uint32_t x195 = UINT32_MAX;
	volatile int8_t x196 = 0;
	int32_t t41 = 17832;

    t41 = (x193-((x194%x195)<=x196));

    if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x197 = 26635914;
	int16_t x199 = -53;
	static int64_t x200 = INT64_MIN;
	int32_t t42 = 15675525;

    t42 = (x197-((x198%x199)<=x200));

    if (t42 != 26635914) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x201 = 1U;
	int8_t x202 = -1;
	int64_t x203 = INT64_MIN;
	int8_t x204 = INT8_MIN;

    t43 = (x201-((x202%x203)<=x204));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x205 = INT16_MIN;
	int8_t x206 = INT8_MAX;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t44 = -200197922;

    t44 = (x205-((x206%x207)<=x208));

    if (t44 != -32769) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x209 = UINT32_MAX;
	static int32_t x211 = INT32_MAX;
	uint64_t x212 = UINT64_MAX;
	volatile uint32_t t45 = 939732339U;

    t45 = (x209-((x210%x211)<=x212));

    if (t45 != 4294967294U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x213 = UINT32_MAX;
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = -1LL;
	int32_t x216 = -29089;
	static volatile uint32_t t46 = UINT32_MAX;

    t46 = (x213-((x214%x215)<=x216));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x217 = 0;
	uint32_t x219 = 89134961U;
	volatile int32_t t47 = -3689;

    t47 = (x217-((x218%x219)<=x220));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x221 = INT16_MIN;
	volatile int8_t x222 = INT8_MAX;
	uint16_t x223 = 3845U;
	volatile uint32_t x224 = 37783U;
	static volatile int32_t t48 = 1019570599;

    t48 = (x221-((x222%x223)<=x224));

    if (t48 != -32769) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x225 = UINT16_MAX;
	int8_t x226 = INT8_MIN;
	uint16_t x227 = 361U;
	int8_t x228 = INT8_MAX;

    t49 = (x225-((x226%x227)<=x228));

    if (t49 != 65534) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x229 = 742147U;
	volatile int16_t x230 = INT16_MIN;
	volatile int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MIN;
	volatile uint32_t t50 = 202U;

    t50 = (x229-((x230%x231)<=x232));

    if (t50 != 742146U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x233 = -244;
	int16_t x235 = 12301;
	static int32_t x236 = -2886;
	volatile int32_t t51 = 258782680;

    t51 = (x233-((x234%x235)<=x236));

    if (t51 != -244) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x237 = -1;
	static int8_t x238 = -22;
	int32_t x239 = INT32_MIN;
	static int64_t x240 = -2160355672555LL;

    t52 = (x237-((x238%x239)<=x240));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x246 = INT32_MAX;
	int8_t x247 = INT8_MIN;
	int32_t t53 = -24;

    t53 = (x245-((x246%x247)<=x248));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x249 = -1LL;
	int8_t x250 = 1;
	int8_t x251 = -2;
	uint32_t x252 = UINT32_MAX;

    t54 = (x249-((x250%x251)<=x252));

    if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x253 = INT64_MIN;
	volatile int64_t x254 = -1LL;
	uint64_t x255 = 3787219021621821578LLU;
	int64_t x256 = 361080164108218LL;
	volatile int64_t t55 = INT64_MIN;

    t55 = (x253-((x254%x255)<=x256));

    if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x258 = 89U;
	static int32_t x259 = INT32_MIN;
	static volatile int64_t x260 = INT64_MAX;
	uint64_t t56 = 23410043726970LLU;

    t56 = (x257-((x258%x259)<=x260));

    if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x261 = UINT8_MAX;
	int32_t x262 = -1;
	int8_t x263 = -22;
	uint32_t x264 = 50110006U;
	int32_t t57 = -12;

    t57 = (x261-((x262%x263)<=x264));

    if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x268 = INT64_MIN;
	uint64_t t58 = UINT64_MAX;

    t58 = (x265-((x266%x267)<=x268));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x269 = -19954;
	int64_t x270 = INT64_MAX;
	int64_t x271 = INT64_MIN;
	int8_t x272 = INT8_MAX;
	int32_t t59 = 4690045;

    t59 = (x269-((x270%x271)<=x272));

    if (t59 != -19954) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x274 = -1;
	int8_t x275 = -3;
	volatile uint64_t t60 = UINT64_MAX;

    t60 = (x273-((x274%x275)<=x276));

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x283 = -1;
	int32_t x284 = 6524;

    t61 = (x281-((x282%x283)<=x284));

    if (t61 != -129) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x285 = INT16_MIN;
	int32_t x288 = INT32_MAX;
	volatile int32_t t62 = 5265;

    t62 = (x285-((x286%x287)<=x288));

    if (t62 != -32769) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x289 = 46U;
	int32_t x291 = INT32_MAX;
	static volatile int32_t t63 = -20801776;

    t63 = (x289-((x290%x291)<=x292));

    if (t63 != 46) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x294 = INT64_MAX;
	int64_t x295 = -1LL;
	static volatile int64_t t64 = 534653687LL;

    t64 = (x293-((x294%x295)<=x296));

    if (t64 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x301 = INT8_MIN;
	int64_t x302 = 536LL;
	uint64_t x303 = 21951352769LLU;
	static int32_t x304 = INT32_MIN;
	volatile int32_t t65 = -169341881;

    t65 = (x301-((x302%x303)<=x304));

    if (t65 != -129) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x306 = 54U;
	static int16_t x307 = -1;
	uint32_t x308 = UINT32_MAX;
	int32_t t66 = 7833481;

    t66 = (x305-((x306%x307)<=x308));

    if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x309 = INT8_MAX;
	int16_t x310 = INT16_MAX;
	int8_t x311 = 17;
	static volatile uint64_t x312 = 15LLU;

    t67 = (x309-((x310%x311)<=x312));

    if (t67 != 126) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x313 = 62414U;
	volatile int32_t x314 = -8553226;
	volatile uint64_t x315 = UINT64_MAX;
	volatile int16_t x316 = INT16_MIN;

    t68 = (x313-((x314%x315)<=x316));

    if (t68 != 62413U) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x317 = INT8_MIN;
	static uint32_t x318 = 4U;
	int64_t x319 = INT64_MIN;
	uint16_t x320 = 6774U;
	int32_t t69 = 85782;

    t69 = (x317-((x318%x319)<=x320));

    if (t69 != -129) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x321 = -7134746;
	volatile int8_t x322 = INT8_MAX;
	int8_t x323 = 59;
	int16_t x324 = 415;
	volatile int32_t t70 = 280128760;

    t70 = (x321-((x322%x323)<=x324));

    if (t70 != -7134747) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x325 = -1;
	static int32_t x326 = -692227684;
	static int8_t x327 = INT8_MIN;
	volatile int16_t x328 = INT16_MAX;
	volatile int32_t t71 = 143457;

    t71 = (x325-((x326%x327)<=x328));

    if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x330 = -1;
	int32_t x331 = INT32_MAX;
	static int16_t x332 = -1;
	volatile int32_t t72 = 175104270;

    t72 = (x329-((x330%x331)<=x332));

    if (t72 != 126) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x333 = INT16_MIN;
	uint16_t x334 = 79U;
	int16_t x335 = -1;
	int8_t x336 = INT8_MAX;
	int32_t t73 = 22;

    t73 = (x333-((x334%x335)<=x336));

    if (t73 != -32769) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x337 = 268422132U;
	volatile int16_t x338 = INT16_MIN;
	uint16_t x339 = 4110U;
	int8_t x340 = INT8_MIN;

    t74 = (x337-((x338%x339)<=x340));

    if (t74 != 268422131U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x341 = 51753LLU;
	static volatile int64_t x342 = INT64_MIN;
	static int64_t x343 = 166048978LL;
	static int32_t x344 = INT32_MIN;

    t75 = (x341-((x342%x343)<=x344));

    if (t75 != 51753LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x345 = -1LL;
	int32_t x346 = 3906710;
	int32_t x347 = INT32_MIN;
	int64_t t76 = -1LL;

    t76 = (x345-((x346%x347)<=x348));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x354 = INT16_MIN;
	int16_t x355 = 1;
	int16_t x356 = INT16_MAX;

    t77 = (x353-((x354%x355)<=x356));

    if (t77 != 254) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x358 = INT8_MIN;
	static volatile uint8_t x359 = UINT8_MAX;
	static uint32_t x360 = 6596285U;
	volatile int32_t t78 = -478846653;

    t78 = (x357-((x358%x359)<=x360));

    if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x366 = 100U;
	int8_t x367 = INT8_MIN;
	int32_t t79 = -1;

    t79 = (x365-((x366%x367)<=x368));

    if (t79 != 2147483646) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x370 = -1;
	int8_t x372 = -23;
	int32_t t80 = -4637;

    t80 = (x369-((x370%x371)<=x372));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x373 = 7008;
	int64_t x374 = -9329539471061555LL;
	static uint64_t x375 = UINT64_MAX;
	static int16_t x376 = INT16_MIN;
	static int32_t t81 = -70698;

    t81 = (x373-((x374%x375)<=x376));

    if (t81 != 7007) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x377 = -1;
	int16_t x378 = -1;
	int32_t x379 = -345355;
	uint32_t x380 = 65538U;
	volatile int32_t t82 = 390146698;

    t82 = (x377-((x378%x379)<=x380));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x381 = -1;
	volatile uint32_t x383 = 229U;
	volatile int32_t t83 = -123854;

    t83 = (x381-((x382%x383)<=x384));

    if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x385 = UINT8_MAX;
	int16_t x386 = 4709;
	int64_t x387 = 2LL;
	static volatile int32_t t84 = -8862;

    t84 = (x385-((x386%x387)<=x388));

    if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x389 = -430;
	int32_t x390 = 58468530;
	int16_t x391 = -1;
	uint8_t x392 = 12U;
	static volatile int32_t t85 = -1;

    t85 = (x389-((x390%x391)<=x392));

    if (t85 != -431) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x393 = -1LL;
	static int8_t x394 = INT8_MAX;
	uint16_t x396 = UINT16_MAX;
	volatile int64_t t86 = 0LL;

    t86 = (x393-((x394%x395)<=x396));

    if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x397 = -8LL;
	int32_t x398 = -6;
	static uint8_t x399 = 22U;
	static uint16_t x400 = 7806U;
	volatile int64_t t87 = 1674LL;

    t87 = (x397-((x398%x399)<=x400));

    if (t87 != -9LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x401 = UINT16_MAX;
	int64_t x402 = INT64_MIN;
	static volatile uint32_t x403 = UINT32_MAX;
	int64_t x404 = 5823595960769LL;
	int32_t t88 = 121692;

    t88 = (x401-((x402%x403)<=x404));

    if (t88 != 65534) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int8_t x405 = INT8_MAX;
	uint8_t x406 = 110U;
	uint64_t x407 = UINT64_MAX;
	uint8_t x408 = UINT8_MAX;
	int32_t t89 = -458;

    t89 = (x405-((x406%x407)<=x408));

    if (t89 != 126) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x409 = 2;
	static int16_t x411 = -1;
	int64_t x412 = INT64_MIN;
	int32_t t90 = 11;

    t90 = (x409-((x410%x411)<=x412));

    if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x413 = 830LLU;
	uint16_t x414 = 6U;
	static uint64_t x415 = 1376836644053168LLU;
	volatile uint64_t t91 = 3153269404135LLU;

    t91 = (x413-((x414%x415)<=x416));

    if (t91 != 829LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x418 = INT64_MAX;
	uint16_t x419 = UINT16_MAX;
	volatile int64_t x420 = -877LL;
	int32_t t92 = 1;

    t92 = (x417-((x418%x419)<=x420));

    if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x421 = -1;
	static int32_t x423 = -1;
	int32_t t93 = 816;

    t93 = (x421-((x422%x423)<=x424));

    if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x425 = 19534375566LLU;
	static int16_t x426 = -1;
	uint64_t x427 = 326707948202551LLU;
	uint8_t x428 = 91U;
	volatile uint64_t t94 = 11095078385970647LLU;

    t94 = (x425-((x426%x427)<=x428));

    if (t94 != 19534375566LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x429 = 188U;
	int64_t x430 = 24LL;
	volatile uint16_t x431 = UINT16_MAX;
	volatile uint16_t x432 = 111U;
	volatile int32_t t95 = -528532414;

    t95 = (x429-((x430%x431)<=x432));

    if (t95 != 187) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x433 = INT16_MAX;
	int8_t x435 = INT8_MIN;
	int64_t x436 = INT64_MAX;
	static int32_t t96 = -357269677;

    t96 = (x433-((x434%x435)<=x436));

    if (t96 != 32766) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x437 = 12;
	int16_t x438 = INT16_MAX;
	static int32_t x439 = INT32_MAX;
	int16_t x440 = -1;
	static int32_t t97 = 3266383;

    t97 = (x437-((x438%x439)<=x440));

    if (t97 != 12) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x442 = -1;
	int16_t x443 = 43;
	static int32_t t98 = -46;

    t98 = (x441-((x442%x443)<=x444));

    if (t98 != 32766) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x445 = -1LL;
	uint8_t x446 = UINT8_MAX;
	uint64_t x447 = UINT64_MAX;
	volatile int64_t x448 = -18723LL;
	static int64_t t99 = -696027557925096LL;

    t99 = (x445-((x446%x447)<=x448));

    if (t99 != -2LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x450 = -515;
	uint16_t x451 = UINT16_MAX;
	volatile uint32_t x452 = 6251U;
	static int32_t t100 = -482593983;

    t100 = (x449-((x450%x451)<=x452));

    if (t100 != -497548) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x453 = INT16_MIN;
	static int8_t x454 = 1;
	volatile int16_t x455 = INT16_MIN;
	int16_t x456 = 14;
	int32_t t101 = -1381819;

    t101 = (x453-((x454%x455)<=x456));

    if (t101 != -32769) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x457 = 1U;
	int8_t x458 = INT8_MIN;
	int32_t x459 = INT32_MIN;
	volatile int32_t t102 = -8026087;

    t102 = (x457-((x458%x459)<=x460));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x463 = INT8_MAX;
	int64_t x464 = 99083767447935818LL;
	int32_t t103 = 15543;

    t103 = (x461-((x462%x463)<=x464));

    if (t103 != 2147483646) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x465 = INT64_MIN;
	static uint8_t x466 = 28U;
	volatile int64_t x468 = -1LL;
	static volatile int64_t t104 = INT64_MIN;

    t104 = (x465-((x466%x467)<=x468));

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x470 = 10U;
	uint64_t x471 = 38LLU;
	static int16_t x472 = INT16_MIN;
	volatile uint64_t t105 = 0LLU;

    t105 = (x469-((x470%x471)<=x472));

    if (t105 != 7638069044LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x473 = 362621633LLU;
	uint16_t x474 = 0U;
	static int8_t x476 = INT8_MIN;
	volatile uint64_t t106 = 54085627470693LLU;

    t106 = (x473-((x474%x475)<=x476));

    if (t106 != 362621632LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x479 = 6;
	uint8_t x480 = 7U;
	volatile uint64_t t107 = 2669563550016LLU;

    t107 = (x477-((x478%x479)<=x480));

    if (t107 != 429744213648654LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x481 = INT16_MIN;
	static int32_t x483 = INT32_MIN;
	int64_t x484 = -1LL;

    t108 = (x481-((x482%x483)<=x484));

    if (t108 != -32768) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x485 = -16LL;
	static uint64_t x486 = 976513LLU;
	volatile int8_t x487 = -1;
	volatile uint64_t x488 = UINT64_MAX;
	int64_t t109 = -6LL;

    t109 = (x485-((x486%x487)<=x488));

    if (t109 != -17LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x494 = 1833316LLU;
	volatile int16_t x495 = INT16_MAX;
	volatile int64_t x496 = -1639174498187353528LL;
	static volatile int32_t t110 = 81313;

    t110 = (x493-((x494%x495)<=x496));

    if (t110 != 2) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x497 = 133276434LLU;
	int8_t x498 = INT8_MIN;
	int32_t x499 = INT32_MIN;
	int32_t x500 = -1;
	volatile uint64_t t111 = 1415LLU;

    t111 = (x497-((x498%x499)<=x500));

    if (t111 != 133276433LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x501 = INT32_MAX;
	uint8_t x502 = 0U;
	static volatile int16_t x504 = 194;

    t112 = (x501-((x502%x503)<=x504));

    if (t112 != 2147483646) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x505 = INT16_MIN;
	int64_t x506 = INT64_MIN;
	int64_t x508 = -1LL;
	volatile int32_t t113 = 46;

    t113 = (x505-((x506%x507)<=x508));

    if (t113 != -32769) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x510 = 87;
	int16_t x511 = INT16_MAX;
	uint64_t x512 = 2906796884843LLU;
	volatile int32_t t114 = -1;

    t114 = (x509-((x510%x511)<=x512));

    if (t114 != 39) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x514 = 188419LLU;
	static volatile int8_t x516 = INT8_MAX;

    t115 = (x513-((x514%x515)<=x516));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x517 = UINT32_MAX;
	int16_t x518 = -1;
	uint8_t x519 = 6U;
	int8_t x520 = INT8_MIN;
	uint32_t t116 = UINT32_MAX;

    t116 = (x517-((x518%x519)<=x520));

    if (t116 != UINT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x521 = INT16_MIN;
	static uint32_t x523 = UINT32_MAX;
	volatile uint8_t x524 = 57U;
	volatile int32_t t117 = 773698225;

    t117 = (x521-((x522%x523)<=x524));

    if (t117 != -32769) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x526 = 3337;
	volatile int16_t x527 = -1;
	int32_t x528 = INT32_MIN;
	static int32_t t118 = 116;

    t118 = (x525-((x526%x527)<=x528));

    if (t118 != 3765) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x529 = UINT16_MAX;
	uint64_t x531 = 984LLU;
	int64_t x532 = INT64_MIN;
	static volatile int32_t t119 = -9825;

    t119 = (x529-((x530%x531)<=x532));

    if (t119 != 65534) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x533 = UINT8_MAX;
	volatile int32_t x535 = INT32_MIN;
	int64_t x536 = INT64_MIN;

    t120 = (x533-((x534%x535)<=x536));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x537 = 36U;
	volatile int8_t x538 = INT8_MAX;
	static uint64_t x539 = 508423730464LLU;
	int16_t x540 = 8209;
	volatile int32_t t121 = -388523;

    t121 = (x537-((x538%x539)<=x540));

    if (t121 != 35) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x541 = 35U;
	int16_t x542 = -1;
	int32_t x543 = INT32_MAX;
	uint8_t x544 = 1U;
	static int32_t t122 = -6297;

    t122 = (x541-((x542%x543)<=x544));

    if (t122 != 34) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x546 = -3900499812LL;
	uint8_t x547 = UINT8_MAX;
	uint8_t x548 = 25U;
	int32_t t123 = -161372562;

    t123 = (x545-((x546%x547)<=x548));

    if (t123 != 254) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x549 = UINT64_MAX;
	int16_t x551 = INT16_MIN;
	volatile int8_t x552 = -1;
	static uint64_t t124 = 27LLU;

    t124 = (x549-((x550%x551)<=x552));

    if (t124 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x554 = 76817343101438979LLU;
	int8_t x555 = INT8_MIN;
	uint64_t x556 = 5LLU;
	int32_t t125 = -508206408;

    t125 = (x553-((x554%x555)<=x556));

    if (t125 != 918330157) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x557 = 1U;
	uint32_t x558 = 15482U;
	volatile int16_t x559 = INT16_MAX;
	static int64_t x560 = 1606570477550LL;
	volatile int32_t t126 = 3370;

    t126 = (x557-((x558%x559)<=x560));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x561 = 8U;
	int32_t x562 = -28012023;
	volatile int16_t x563 = INT16_MAX;
	static uint16_t x564 = 14756U;
	static uint32_t t127 = 22U;

    t127 = (x561-((x562%x563)<=x564));

    if (t127 != 7U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x565 = INT32_MIN;
	int32_t x566 = -1;
	int64_t x567 = INT64_MIN;

    t128 = (x565-((x566%x567)<=x568));

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x573 = INT32_MAX;
	int16_t x575 = 49;
	int64_t x576 = 761LL;
	volatile int32_t t129 = -188141324;

    t129 = (x573-((x574%x575)<=x576));

    if (t129 != 2147483646) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x577 = UINT16_MAX;
	uint32_t x579 = UINT32_MAX;
	static int16_t x580 = 141;
	int32_t t130 = 1;

    t130 = (x577-((x578%x579)<=x580));

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x582 = -12440;
	static int32_t x583 = INT32_MIN;
	int8_t x584 = INT8_MIN;
	volatile uint32_t t131 = 393668U;

    t131 = (x581-((x582%x583)<=x584));

    if (t131 != 130U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x585 = 891569;
	uint8_t x586 = 50U;
	uint8_t x587 = 15U;
	int16_t x588 = -1;
	int32_t t132 = -1877;

    t132 = (x585-((x586%x587)<=x588));

    if (t132 != 891569) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x590 = UINT32_MAX;
	int8_t x591 = -1;
	uint32_t x592 = 1172U;

    t133 = (x589-((x590%x591)<=x592));

    if (t133 != -2) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x593 = 9;
	volatile int16_t x594 = -1;
	int16_t x596 = -1;

    t134 = (x593-((x594%x595)<=x596));

    if (t134 != 8) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x597 = -1;
	volatile int32_t t135 = 1739397;

    t135 = (x597-((x598%x599)<=x600));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x601 = 75U;
	static int16_t x602 = INT16_MAX;
	int64_t x603 = -1LL;
	uint8_t x604 = 7U;
	uint32_t t136 = 29236U;

    t136 = (x601-((x602%x603)<=x604));

    if (t136 != 74U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x605 = -1;
	uint64_t x606 = 138926023249429LLU;
	volatile uint64_t x607 = 92484LLU;
	static int32_t t137 = 25675;

    t137 = (x605-((x606%x607)<=x608));

    if (t137 != -2) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x609 = 5U;
	uint32_t x610 = 698456745U;
	static volatile uint32_t x612 = 95549118U;
	int32_t t138 = -112525;

    t138 = (x609-((x610%x611)<=x612));

    if (t138 != 5) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x613 = 155LLU;
	int32_t x614 = INT32_MAX;
	int8_t x615 = -1;
	uint64_t x616 = 138568344718270548LLU;
	volatile uint64_t t139 = 119544331839763569LLU;

    t139 = (x613-((x614%x615)<=x616));

    if (t139 != 154LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x617 = 971;
	int16_t x620 = INT16_MIN;
	volatile int32_t t140 = -8633678;

    t140 = (x617-((x618%x619)<=x620));

    if (t140 != 971) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x621 = 0U;
	int32_t x624 = INT32_MAX;
	uint32_t t141 = UINT32_MAX;

    t141 = (x621-((x622%x623)<=x624));

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x625 = -6;
	int16_t x626 = -1;
	static int32_t x627 = INT32_MIN;
	int16_t x628 = -1;
	int32_t t142 = -1;

    t142 = (x625-((x626%x627)<=x628));

    if (t142 != -7) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x629 = INT16_MIN;
	int32_t x630 = 12242900;
	int32_t x631 = -9;
	int8_t x632 = INT8_MIN;
	volatile int32_t t143 = 1;

    t143 = (x629-((x630%x631)<=x632));

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x634 = 26U;
	uint64_t x635 = 105508040LLU;
	int16_t x636 = -1896;
	static volatile int32_t t144 = -1;

    t144 = (x633-((x634%x635)<=x636));

    if (t144 != 32766) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x638 = 12201001LLU;
	int64_t x639 = -1LL;
	uint64_t x640 = 137142663LLU;
	volatile int32_t t145 = 52156122;

    t145 = (x637-((x638%x639)<=x640));

    if (t145 != -2) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x643 = -1;
	volatile int32_t t146 = -2;

    t146 = (x641-((x642%x643)<=x644));

    if (t146 != -129) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x653 = -1;
	uint64_t x654 = UINT64_MAX;
	int8_t x655 = INT8_MAX;
	uint64_t x656 = 752120LLU;

    t147 = (x653-((x654%x655)<=x656));

    if (t147 != -2) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x658 = 0;
	uint16_t x659 = 7U;

    t148 = (x657-((x658%x659)<=x660));

    if (t148 != 126) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x661 = UINT16_MAX;
	int64_t x662 = INT64_MIN;
	int32_t x663 = -39215454;
	int32_t x664 = INT32_MAX;
	static int32_t t149 = 8028087;

    t149 = (x661-((x662%x663)<=x664));

    if (t149 != 65534) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x665 = INT16_MIN;
	int8_t x666 = -1;
	uint8_t x667 = UINT8_MAX;
	static int64_t x668 = -1LL;
	int32_t t150 = 5488;

    t150 = (x665-((x666%x667)<=x668));

    if (t150 != -32769) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x669 = UINT32_MAX;
	int32_t x672 = INT32_MIN;
	uint32_t t151 = UINT32_MAX;

    t151 = (x669-((x670%x671)<=x672));

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x673 = -1;
	int64_t x674 = INT64_MAX;
	int64_t x675 = INT64_MIN;
	int8_t x676 = -1;
	int32_t t152 = -543174;

    t152 = (x673-((x674%x675)<=x676));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x677 = UINT64_MAX;
	uint16_t x678 = 0U;
	static uint64_t t153 = 13LLU;

    t153 = (x677-((x678%x679)<=x680));

    if (t153 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x681 = 7052LLU;
	volatile int32_t x682 = -1;
	uint32_t x683 = 48U;
	volatile int8_t x684 = -1;
	volatile uint64_t t154 = 1LLU;

    t154 = (x681-((x682%x683)<=x684));

    if (t154 != 7051LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x685 = 0U;
	int64_t x686 = -408879258366396630LL;
	int64_t x688 = 1401443781802489204LL;
	static int32_t t155 = 298738;

    t155 = (x685-((x686%x687)<=x688));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x689 = 1U;
	uint32_t x692 = 164126U;
	int32_t t156 = 26;

    t156 = (x689-((x690%x691)<=x692));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x693 = -1;
	volatile uint8_t x694 = UINT8_MAX;
	int32_t x695 = INT32_MIN;
	static int32_t x696 = -1;
	static volatile int32_t t157 = 4;

    t157 = (x693-((x694%x695)<=x696));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x698 = 87;
	uint8_t x699 = UINT8_MAX;
	int8_t x700 = INT8_MIN;

    t158 = (x697-((x698%x699)<=x700));

    if (t158 != -566) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x702 = -7168195LL;
	int32_t x703 = INT32_MIN;
	uint64_t x704 = 12504LLU;
	volatile int32_t t159 = -3056965;

    t159 = (x701-((x702%x703)<=x704));

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x705 = INT32_MAX;
	int32_t x707 = 28;
	static volatile int32_t t160 = INT32_MAX;

    t160 = (x705-((x706%x707)<=x708));

    if (t160 != INT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x709 = -1;
	int16_t x710 = -2;
	uint8_t x711 = 17U;
	uint16_t x712 = UINT16_MAX;
	volatile int32_t t161 = 5;

    t161 = (x709-((x710%x711)<=x712));

    if (t161 != -2) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x713 = -1;
	volatile int32_t x715 = -23678988;
	static int32_t x716 = INT32_MIN;

    t162 = (x713-((x714%x715)<=x716));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x717 = UINT32_MAX;
	int8_t x718 = -14;
	static int32_t x719 = INT32_MIN;
	int8_t x720 = INT8_MIN;
	uint32_t t163 = UINT32_MAX;

    t163 = (x717-((x718%x719)<=x720));

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x721 = -43;
	uint8_t x722 = 3U;
	int32_t x723 = 4;
	static int32_t x724 = INT32_MIN;
	volatile int32_t t164 = 801610;

    t164 = (x721-((x722%x723)<=x724));

    if (t164 != -43) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x725 = -455;
	volatile int64_t x726 = 420167945247LL;
	static volatile int16_t x727 = -1;
	uint64_t x728 = 1333129LLU;
	int32_t t165 = 17396323;

    t165 = (x725-((x726%x727)<=x728));

    if (t165 != -456) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x729 = 1;
	volatile int64_t x730 = INT64_MAX;
	static int16_t x731 = -6501;
	uint64_t x732 = 57LLU;
	volatile int32_t t166 = 8;

    t166 = (x729-((x730%x731)<=x732));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x733 = 4U;
	int16_t x734 = -92;
	int32_t x735 = INT32_MIN;
	uint32_t x736 = 1272779U;
	static uint32_t t167 = 34143971U;

    t167 = (x733-((x734%x735)<=x736));

    if (t167 != 4U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x737 = UINT64_MAX;
	int8_t x738 = 19;
	uint16_t x739 = 3U;
	volatile int64_t x740 = INT64_MAX;
	volatile uint64_t t168 = 309LLU;

    t168 = (x737-((x738%x739)<=x740));

    if (t168 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x741 = -6;
	uint16_t x743 = 1U;

    t169 = (x741-((x742%x743)<=x744));

    if (t169 != -7) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x745 = UINT32_MAX;
	uint16_t x747 = 24095U;
	static uint16_t x748 = 6U;
	uint32_t t170 = 106U;

    t170 = (x745-((x746%x747)<=x748));

    if (t170 != 4294967294U) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x749 = 6797651962439497316LLU;
	int32_t x750 = 179089;
	volatile uint8_t x751 = 41U;
	volatile uint64_t t171 = 3027685937LLU;

    t171 = (x749-((x750%x751)<=x752));

    if (t171 != 6797651962439497315LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x754 = 305466LL;
	uint8_t x756 = UINT8_MAX;
	static int64_t t172 = 1996949LL;

    t172 = (x753-((x754%x755)<=x756));

    if (t172 != -2LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x757 = INT16_MIN;
	static uint32_t x758 = UINT32_MAX;
	volatile int32_t x760 = -1;
	volatile int32_t t173 = -55319;

    t173 = (x757-((x758%x759)<=x760));

    if (t173 != -32769) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x761 = INT32_MIN;
	int32_t x762 = -2;
	volatile int64_t x764 = INT64_MIN;
	volatile int32_t t174 = INT32_MIN;

    t174 = (x761-((x762%x763)<=x764));

    if (t174 != INT32_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x769 = -1LL;
	static int8_t x770 = -1;
	int16_t x772 = INT16_MIN;
	static volatile int64_t t175 = 3569984LL;

    t175 = (x769-((x770%x771)<=x772));

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint32_t x773 = 194707560U;
	volatile int16_t x774 = INT16_MIN;
	volatile uint64_t x775 = UINT64_MAX;
	static int8_t x776 = -1;
	uint32_t t176 = 416U;

    t176 = (x773-((x774%x775)<=x776));

    if (t176 != 194707559U) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x777 = INT16_MIN;
	int8_t x778 = 1;
	int64_t x779 = 133LL;
	volatile int32_t t177 = -5101801;

    t177 = (x777-((x778%x779)<=x780));

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x781 = INT64_MAX;
	static int32_t x782 = -23;
	int16_t x783 = INT16_MIN;
	volatile int64_t t178 = INT64_MAX;

    t178 = (x781-((x782%x783)<=x784));

    if (t178 != INT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x789 = INT16_MAX;
	int8_t x790 = INT8_MIN;
	volatile int16_t x791 = INT16_MIN;
	volatile int32_t x792 = INT32_MIN;
	int32_t t179 = -61212598;

    t179 = (x789-((x790%x791)<=x792));

    if (t179 != 32767) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint16_t x793 = 9390U;
	int8_t x794 = INT8_MAX;
	int64_t x795 = INT64_MAX;
	int8_t x796 = -22;
	int32_t t180 = -32366;

    t180 = (x793-((x794%x795)<=x796));

    if (t180 != 9390) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x798 = 0U;
	uint32_t x799 = 1008928U;
	uint8_t x800 = 55U;
	volatile int32_t t181 = 2203994;

    t181 = (x797-((x798%x799)<=x800));

    if (t181 != 57) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x801 = INT8_MIN;
	int8_t x802 = -1;
	int64_t x803 = -1LL;
	uint32_t x804 = 3537994U;
	volatile int32_t t182 = 156737;

    t182 = (x801-((x802%x803)<=x804));

    if (t182 != -129) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x814 = INT8_MIN;
	int32_t x816 = 30;
	static int32_t t183 = 470011989;

    t183 = (x813-((x814%x815)<=x816));

    if (t183 != 699901546) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x817 = 5993U;
	uint32_t x818 = UINT32_MAX;
	int32_t x819 = INT32_MIN;
	int16_t x820 = INT16_MIN;
	int32_t t184 = 7;

    t184 = (x817-((x818%x819)<=x820));

    if (t184 != 5992) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x825 = -1;
	int32_t x826 = -1;
	uint64_t x827 = UINT64_MAX;
	int32_t t185 = 1059607007;

    t185 = (x825-((x826%x827)<=x828));

    if (t185 != -2) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x829 = INT16_MAX;
	volatile uint8_t x830 = 34U;
	uint8_t x831 = UINT8_MAX;
	static uint64_t x832 = UINT64_MAX;

    t186 = (x829-((x830%x831)<=x832));

    if (t186 != 32766) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x838 = INT8_MAX;
	volatile int32_t x840 = INT32_MAX;
	volatile uint64_t t187 = 7530599LLU;

    t187 = (x837-((x838%x839)<=x840));

    if (t187 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x842 = 45U;
	int32_t x843 = -7585;
	int32_t t188 = -163716798;

    t188 = (x841-((x842%x843)<=x844));

    if (t188 != -128) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x846 = 1012;
	int32_t x847 = INT32_MIN;
	uint32_t x848 = 2U;
	static volatile int32_t t189 = -1765997;

    t189 = (x845-((x846%x847)<=x848));

    if (t189 != -3) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x850 = 3;
	int64_t x851 = INT64_MIN;
	int16_t x852 = -1;

    t190 = (x849-((x850%x851)<=x852));

    if (t190 != 78) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x853 = 223782998430LLU;
	uint16_t x854 = 172U;
	int8_t x855 = -1;
	int64_t x856 = 46342557LL;
	static volatile uint64_t t191 = 9LLU;

    t191 = (x853-((x854%x855)<=x856));

    if (t191 != 223782998429LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x857 = -4;
	int16_t x859 = -1;
	static int16_t x860 = -1;
	int32_t t192 = 6842;

    t192 = (x857-((x858%x859)<=x860));

    if (t192 != -4) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x861 = 45LLU;
	int16_t x863 = INT16_MAX;
	uint64_t t193 = 1LLU;

    t193 = (x861-((x862%x863)<=x864));

    if (t193 != 44LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x865 = 1;

    t194 = (x865-((x866%x867)<=x868));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x869 = 3515377063400LLU;
	int8_t x870 = INT8_MIN;
	volatile int16_t x871 = INT16_MIN;
	static int64_t x872 = INT64_MIN;
	static uint64_t t195 = 247LLU;

    t195 = (x869-((x870%x871)<=x872));

    if (t195 != 3515377063400LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x877 = INT64_MIN;
	uint16_t x878 = 0U;
	volatile int8_t x880 = -1;

    t196 = (x877-((x878%x879)<=x880));

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x881 = UINT8_MAX;
	volatile int32_t x882 = INT32_MAX;
	uint8_t x883 = 107U;
	int16_t x884 = -506;
	int32_t t197 = -129241;

    t197 = (x881-((x882%x883)<=x884));

    if (t197 != 255) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x885 = UINT8_MAX;
	int32_t x887 = INT32_MAX;
	uint8_t x888 = 0U;

    t198 = (x885-((x886%x887)<=x888));

    if (t198 != 255) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x889 = INT32_MAX;
	int32_t x890 = -1055801;
	int32_t x891 = INT32_MAX;
	int16_t x892 = INT16_MAX;
	static volatile int32_t t199 = -198704;

    t199 = (x889-((x890%x891)<=x892));

    if (t199 != 2147483646) { NG(); } else { ; }
	
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

