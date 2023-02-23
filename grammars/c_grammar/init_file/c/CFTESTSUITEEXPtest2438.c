
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

static volatile uint32_t t1 = 40927U;
static uint8_t x13 = 0U;
volatile uint32_t x15 = UINT32_MAX;
volatile int64_t x26 = -313276452293LL;
int32_t x31 = INT32_MIN;
int64_t x35 = INT64_MIN;
int32_t x36 = -1;
volatile uint64_t t8 = 4LLU;
uint64_t x38 = 635LLU;
int16_t x40 = -1;
uint32_t x41 = 138U;
volatile int64_t x42 = 6990497431748LL;
int16_t x43 = -11;
uint32_t t10 = 1U;
volatile int32_t x49 = 81178469;
uint8_t x59 = 5U;
static int32_t t14 = 1622978;
int32_t t15 = -20104;
static int16_t x71 = INT16_MIN;
static int16_t x73 = -1;
uint32_t x94 = UINT32_MAX;
uint64_t t22 = 6011509607988286773LLU;
static uint64_t x98 = 15535LLU;
int16_t x99 = INT16_MIN;
uint32_t x100 = 13303918U;
int16_t x101 = INT16_MAX;
int64_t x104 = INT64_MAX;
uint16_t x111 = UINT16_MAX;
uint64_t x112 = 130549593LLU;
static volatile int32_t t26 = -7628;
int8_t x116 = INT8_MIN;
static volatile int32_t t27 = 19;
int8_t x118 = INT8_MIN;
volatile int32_t x120 = -41441444;
static int16_t x122 = INT16_MIN;
uint16_t x124 = 202U;
uint32_t x125 = 846629579U;
volatile int8_t x127 = -1;
uint64_t x133 = UINT64_MAX;
uint16_t x136 = UINT16_MAX;
volatile int8_t x149 = INT8_MAX;
int32_t x155 = INT32_MIN;
static int32_t x157 = -347;
int8_t x159 = -1;
int64_t x160 = INT64_MIN;
int64_t x162 = -1LL;
static int32_t t40 = 177552;
static int32_t x178 = -1;
volatile int64_t x186 = 1856280294421LL;
volatile int64_t t43 = 236752686LL;
static volatile int32_t t45 = 0;
uint8_t x201 = UINT8_MAX;
uint8_t x209 = 9U;
int32_t x211 = -1;
uint64_t x213 = 1LLU;
int8_t x218 = 3;
volatile uint8_t x234 = 2U;
volatile int32_t t53 = 3;
int8_t x237 = -1;
int8_t x241 = -1;
int8_t x243 = 49;
uint64_t x249 = 13052172904LLU;
uint8_t x250 = 45U;
int64_t x252 = -1LL;
int64_t x260 = INT64_MIN;
static uint8_t x267 = 7U;
volatile int64_t t61 = -911780082093759LL;
int32_t x271 = 0;
int8_t x272 = -11;
volatile int64_t t62 = -1083753999159115716LL;
static volatile int64_t x273 = -1LL;
int8_t x283 = INT8_MIN;
static int32_t t65 = -110341381;
uint32_t x285 = 59406142U;
int32_t t67 = 348690;
int32_t t68 = 1;
uint64_t x311 = 21534919226276LLU;
int8_t x317 = -1;
uint64_t x318 = 52113970438LLU;
int8_t x319 = 1;
static volatile int32_t t74 = 566399716;
uint64_t x333 = UINT64_MAX;
int64_t x334 = INT64_MAX;
static int64_t x336 = -1LL;
volatile uint16_t x357 = 6U;
uint64_t x377 = 507057527171078764LLU;
uint16_t x378 = UINT16_MAX;
volatile uint64_t t84 = 42207197045535LLU;
int8_t x387 = INT8_MAX;
int16_t x388 = INT16_MAX;
int64_t x390 = INT64_MAX;
int8_t x394 = INT8_MIN;
volatile uint32_t x404 = 11873081U;
uint16_t x409 = UINT16_MAX;
uint8_t x414 = 7U;
volatile int32_t x416 = INT32_MIN;
int32_t t93 = 690846;
int16_t x425 = INT16_MAX;
int16_t x441 = -1;
volatile uint8_t x444 = UINT8_MAX;
int32_t t98 = 2280018;
int8_t x450 = INT8_MAX;
int16_t x457 = -322;
int32_t x463 = INT32_MIN;
volatile uint64_t t103 = 94297299693LLU;
int8_t x466 = -1;
uint8_t x486 = 6U;
uint32_t x488 = 402937976U;
int64_t x494 = -1LL;
int16_t x495 = -1;
int16_t x500 = -51;
volatile int32_t t111 = 2;
uint8_t x503 = 3U;
int8_t x504 = INT8_MIN;
uint32_t t112 = 115639U;
static uint16_t x509 = UINT16_MAX;
int32_t t114 = 1469861;
uint16_t x516 = 2U;
static volatile int64_t t117 = 8704584480092897LL;
int64_t x541 = -844407386086605LL;
volatile int64_t x545 = INT64_MAX;
int64_t t123 = -8759645483LL;
uint16_t x566 = 1U;
int64_t t128 = -31375710485355LL;
int16_t x582 = INT16_MIN;
uint64_t t130 = 16493480847LLU;
static uint8_t x585 = UINT8_MAX;
int64_t x587 = -4208045504687154LL;
volatile int16_t x588 = -1;
static volatile uint32_t x592 = 234942089U;
static int32_t x593 = 4;
static int32_t t133 = 16627605;
int32_t t134 = -29023007;
static int16_t x601 = INT16_MIN;
static int16_t x602 = INT16_MAX;
uint32_t x609 = 7375560U;
uint8_t x610 = 1U;
int64_t x614 = 461011835396LL;
uint32_t x618 = UINT32_MAX;
int32_t x623 = INT32_MIN;
int32_t x625 = 6660869;
int16_t x626 = 87;
static uint32_t x637 = UINT32_MAX;
static uint32_t x642 = 7U;
uint32_t x643 = 107U;
static volatile int32_t x644 = INT32_MIN;
static int16_t x650 = 0;
int32_t t147 = 53;
uint64_t t148 = 34133060226178524LLU;
volatile uint32_t x660 = 53076955U;
uint16_t x663 = 137U;
uint32_t x667 = 595723279U;
int8_t x672 = INT8_MIN;
volatile int16_t x676 = INT16_MIN;
int32_t x677 = -1;
static volatile uint8_t x688 = UINT8_MAX;
static volatile int8_t x690 = -1;
static uint32_t x694 = 39751534U;
uint8_t x695 = 13U;
volatile uint8_t x718 = UINT8_MAX;
int16_t x721 = INT16_MIN;
int16_t x729 = INT16_MAX;
int32_t t165 = -234174;
int8_t x735 = INT8_MIN;
static volatile uint16_t x737 = 198U;
volatile int64_t x754 = INT64_MIN;
volatile int32_t t169 = 163479340;
int32_t t172 = 47;
static int64_t x772 = INT64_MIN;
uint32_t x778 = 371U;
static int8_t x784 = INT8_MAX;
volatile int32_t t176 = -8;
volatile int32_t t177 = 15404882;
static volatile int32_t t179 = 115159427;
volatile int8_t x800 = INT8_MIN;
uint32_t x804 = 1183320165U;
int16_t x806 = -1;
int32_t t182 = 8412;
volatile uint32_t x811 = 1565668221U;
int64_t t185 = 114541279387349LL;
volatile uint8_t x826 = 9U;
static int16_t x832 = -1;
int16_t x835 = INT16_MAX;
int16_t x840 = INT16_MIN;
volatile uint64_t t189 = 16765329696769LLU;
int32_t x842 = INT32_MIN;
int32_t t190 = -256821;
volatile int16_t x853 = INT16_MAX;
uint8_t x866 = 98U;
uint16_t x871 = 32U;
int32_t t197 = 10;
volatile int8_t x874 = -2;
int16_t x883 = INT16_MIN;


void f0(void) {
    	int16_t x1 = 706;
	volatile int64_t x2 = INT64_MAX;
	int16_t x3 = INT16_MIN;
	static int64_t x4 = -1LL;
	static volatile int32_t t0 = -2904200;

    t0 = (x1-((x2|x3)!=x4));

    if (t0 != 706) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 176U;
	int8_t x6 = -54;
	uint8_t x7 = 0U;
	uint32_t x8 = 27U;

    t1 = (x5-((x6|x7)!=x8));

    if (t1 != 175U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 4035U;
	static int16_t x10 = -1;
	int8_t x11 = -5;
	uint32_t x12 = 0U;
	static uint32_t t2 = 85631U;

    t2 = (x9-((x10|x11)!=x12));

    if (t2 != 4034U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = 1;
	static uint64_t x16 = 74905291391703LLU;
	static int32_t t3 = -116665735;

    t3 = (x13-((x14|x15)!=x16));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = -1;
	static volatile int64_t x18 = 21760214236482LL;
	static int64_t x19 = -18431LL;
	uint64_t x20 = 1420250450LLU;
	int32_t t4 = -7868;

    t4 = (x17-((x18|x19)!=x20));

    if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 7;
	uint64_t x22 = 441312165463845LLU;
	volatile int32_t x23 = INT32_MAX;
	uint16_t x24 = 2U;
	int32_t t5 = -731;

    t5 = (x21-((x22|x23)!=x24));

    if (t5 != 6) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint16_t x25 = 41U;
	int8_t x27 = INT8_MIN;
	uint64_t x28 = UINT64_MAX;
	static volatile int32_t t6 = 35664;

    t6 = (x25-((x26|x27)!=x28));

    if (t6 != 40) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	static uint64_t x30 = 7883390LLU;
	int64_t x32 = -1LL;
	volatile int32_t t7 = 10369;

    t7 = (x29-((x30|x31)!=x32));

    if (t7 != 2147483646) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = 14LLU;
	int16_t x34 = INT16_MIN;

    t8 = (x33-((x34|x35)!=x36));

    if (t8 != 13LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	int16_t x39 = -1;
	static volatile int32_t t9 = 40;

    t9 = (x37-((x38|x39)!=x40));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x44 = INT16_MIN;

    t10 = (x41-((x42|x43)!=x44));

    if (t10 != 137U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = -1;
	int16_t x46 = INT16_MIN;
	uint32_t x47 = UINT32_MAX;
	uint32_t x48 = 498U;
	volatile int32_t t11 = 1;

    t11 = (x45-((x46|x47)!=x48));

    if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x50 = 287796U;
	int32_t x51 = -51655099;
	int32_t x52 = INT32_MIN;
	int32_t t12 = 81;

    t12 = (x49-((x50|x51)!=x52));

    if (t12 != 81178468) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x53 = 44U;
	uint64_t x54 = 11119269764820LLU;
	uint8_t x55 = UINT8_MAX;
	int64_t x56 = INT64_MIN;
	int32_t t13 = 69411;

    t13 = (x53-((x54|x55)!=x56));

    if (t13 != 43) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -39;
	int64_t x58 = INT64_MAX;
	uint64_t x60 = UINT64_MAX;

    t14 = (x57-((x58|x59)!=x60));

    if (t14 != -40) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	int16_t x62 = -1;
	int16_t x63 = INT16_MIN;
	int64_t x64 = 43LL;

    t15 = (x61-((x62|x63)!=x64));

    if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	static int16_t x66 = -9;
	static int64_t x67 = -4049826795LL;
	volatile uint8_t x68 = 33U;
	volatile int32_t t16 = -43341234;

    t16 = (x65-((x66|x67)!=x68));

    if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = -1;
	uint32_t x70 = UINT32_MAX;
	static volatile int16_t x72 = -1;
	int32_t t17 = 59496;

    t17 = (x69-((x70|x71)!=x72));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = INT32_MIN;
	int64_t x75 = -19LL;
	int64_t x76 = INT64_MIN;
	volatile int32_t t18 = -108022423;

    t18 = (x73-((x74|x75)!=x76));

    if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = INT32_MAX;
	uint16_t x78 = 6903U;
	int32_t x79 = -330891;
	volatile int8_t x80 = INT8_MIN;
	static int32_t t19 = 4440;

    t19 = (x77-((x78|x79)!=x80));

    if (t19 != 2147483646) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x85 = 1035U;
	int32_t x86 = 2353741;
	volatile int16_t x87 = -6897;
	int16_t x88 = -357;
	volatile uint32_t t20 = 440U;

    t20 = (x85-((x86|x87)!=x88));

    if (t20 != 1034U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MIN;
	uint64_t x92 = UINT64_MAX;
	volatile int32_t t21 = 43975977;

    t21 = (x89-((x90|x91)!=x92));

    if (t21 != -129) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = 140405758547849LLU;
	volatile uint64_t x95 = 8LLU;
	volatile int8_t x96 = -1;

    t22 = (x93-((x94|x95)!=x96));

    if (t22 != 140405758547848LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x97 = 3U;
	static volatile int32_t t23 = 15;

    t23 = (x97-((x98|x99)!=x100));

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x102 = INT8_MIN;
	int64_t x103 = 2126152856699744504LL;
	static int32_t t24 = -3;

    t24 = (x101-((x102|x103)!=x104));

    if (t24 != 32766) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = -1;
	int32_t x106 = -19953492;
	int8_t x107 = -1;
	volatile int16_t x108 = 14014;
	int32_t t25 = 85;

    t25 = (x105-((x106|x107)!=x108));

    if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = -1;
	int8_t x110 = INT8_MAX;

    t26 = (x109-((x110|x111)!=x112));

    if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x113 = -1;
	uint16_t x114 = 417U;
	int32_t x115 = INT32_MIN;

    t27 = (x113-((x114|x115)!=x116));

    if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x117 = -1LL;
	int64_t x119 = INT64_MIN;
	volatile int64_t t28 = 2814565298286069487LL;

    t28 = (x117-((x118|x119)!=x120));

    if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = INT8_MAX;
	int16_t x123 = INT16_MIN;
	volatile int32_t t29 = 455;

    t29 = (x121-((x122|x123)!=x124));

    if (t29 != 126) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x126 = 23U;
	volatile int8_t x128 = INT8_MAX;
	volatile uint32_t t30 = 130968U;

    t30 = (x125-((x126|x127)!=x128));

    if (t30 != 846629578U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = INT16_MIN;
	int16_t x130 = -1;
	int64_t x131 = 37145186LL;
	uint64_t x132 = UINT64_MAX;
	volatile int32_t t31 = 52;

    t31 = (x129-((x130|x131)!=x132));

    if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x134 = -1LL;
	int16_t x135 = INT16_MAX;
	uint64_t t32 = 229411785297632270LLU;

    t32 = (x133-((x134|x135)!=x136));

    if (t32 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x137 = 25U;
	uint16_t x138 = 16U;
	volatile uint32_t x139 = UINT32_MAX;
	uint8_t x140 = UINT8_MAX;
	static int32_t t33 = 62381;

    t33 = (x137-((x138|x139)!=x140));

    if (t33 != 24) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x145 = UINT64_MAX;
	int8_t x146 = -1;
	uint16_t x147 = 1U;
	uint16_t x148 = UINT16_MAX;
	uint64_t t34 = 1909270270LLU;

    t34 = (x145-((x146|x147)!=x148));

    if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x150 = 57610736594391LLU;
	static int32_t x151 = INT32_MIN;
	static int32_t x152 = 27297426;
	volatile int32_t t35 = 343;

    t35 = (x149-((x150|x151)!=x152));

    if (t35 != 126) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = 15;
	int16_t x154 = 320;
	static int16_t x156 = 2626;
	volatile int32_t t36 = -24479958;

    t36 = (x153-((x154|x155)!=x156));

    if (t36 != 14) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x158 = 3U;
	volatile int32_t t37 = 0;

    t37 = (x157-((x158|x159)!=x160));

    if (t37 != -348) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x161 = INT8_MAX;
	int64_t x163 = -1LL;
	int16_t x164 = INT16_MIN;
	volatile int32_t t38 = -160768317;

    t38 = (x161-((x162|x163)!=x164));

    if (t38 != 126) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x165 = UINT16_MAX;
	int64_t x166 = INT64_MIN;
	int16_t x167 = 3331;
	int32_t x168 = INT32_MIN;
	volatile int32_t t39 = -61492;

    t39 = (x165-((x166|x167)!=x168));

    if (t39 != 65534) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = INT16_MAX;
	static int32_t x170 = 701;
	int64_t x171 = 66080127LL;
	static int64_t x172 = INT64_MAX;

    t40 = (x169-((x170|x171)!=x172));

    if (t40 != 32766) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint64_t x173 = 101305458284986661LLU;
	int32_t x174 = -387487;
	int32_t x175 = -345841;
	static int16_t x176 = -9;
	uint64_t t41 = 2472797LLU;

    t41 = (x173-((x174|x175)!=x176));

    if (t41 != 101305458284986660LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = 1835;
	static int32_t x179 = INT32_MIN;
	static uint64_t x180 = 22473113LLU;
	volatile int32_t t42 = -72691;

    t42 = (x177-((x178|x179)!=x180));

    if (t42 != 1834) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x185 = INT64_MAX;
	uint16_t x187 = UINT16_MAX;
	volatile uint8_t x188 = UINT8_MAX;

    t43 = (x185-((x186|x187)!=x188));

    if (t43 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x189 = INT16_MIN;
	int16_t x190 = INT16_MAX;
	int8_t x191 = INT8_MIN;
	static uint16_t x192 = UINT16_MAX;
	volatile int32_t t44 = -119;

    t44 = (x189-((x190|x191)!=x192));

    if (t44 != -32769) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x193 = -1057760071;
	static int8_t x194 = -1;
	int16_t x195 = INT16_MIN;
	uint8_t x196 = 3U;

    t45 = (x193-((x194|x195)!=x196));

    if (t45 != -1057760072) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x202 = INT64_MAX;
	volatile int8_t x203 = 55;
	uint64_t x204 = 2025LLU;
	volatile int32_t t46 = 0;

    t46 = (x201-((x202|x203)!=x204));

    if (t46 != 254) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint8_t x205 = 12U;
	uint8_t x206 = 11U;
	int64_t x207 = 695930304031465LL;
	uint16_t x208 = UINT16_MAX;
	int32_t t47 = -57212791;

    t47 = (x205-((x206|x207)!=x208));

    if (t47 != 11) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x210 = INT32_MIN;
	volatile int16_t x212 = -7;
	volatile int32_t t48 = 0;

    t48 = (x209-((x210|x211)!=x212));

    if (t48 != 8) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x214 = INT8_MIN;
	static uint64_t x215 = 31424954LLU;
	volatile int16_t x216 = INT16_MIN;
	volatile uint64_t t49 = 205512LLU;

    t49 = (x213-((x214|x215)!=x216));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x217 = INT8_MAX;
	static uint64_t x219 = 4851201606493563LLU;
	int8_t x220 = INT8_MIN;
	int32_t t50 = 393;

    t50 = (x217-((x218|x219)!=x220));

    if (t50 != 126) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x221 = 390U;
	static int8_t x222 = -12;
	uint64_t x223 = UINT64_MAX;
	int16_t x224 = INT16_MIN;
	volatile uint32_t t51 = 72924U;

    t51 = (x221-((x222|x223)!=x224));

    if (t51 != 389U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x229 = -1;
	uint64_t x230 = 101LLU;
	uint16_t x231 = 1U;
	int16_t x232 = 119;
	static volatile int32_t t52 = -81381117;

    t52 = (x229-((x230|x231)!=x232));

    if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x233 = 6U;
	volatile int16_t x235 = INT16_MAX;
	int8_t x236 = 36;

    t53 = (x233-((x234|x235)!=x236));

    if (t53 != 5) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x238 = INT8_MIN;
	int8_t x239 = INT8_MIN;
	static int32_t x240 = INT32_MIN;
	volatile int32_t t54 = 1;

    t54 = (x237-((x238|x239)!=x240));

    if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x242 = -1LL;
	int16_t x244 = 1;
	int32_t t55 = 2806;

    t55 = (x241-((x242|x243)!=x244));

    if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x245 = -1;
	int32_t x246 = -1;
	volatile int32_t x247 = INT32_MAX;
	int16_t x248 = 41;
	int32_t t56 = -1;

    t56 = (x245-((x246|x247)!=x248));

    if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x251 = INT64_MIN;
	volatile uint64_t t57 = 121928830LLU;

    t57 = (x249-((x250|x251)!=x252));

    if (t57 != 13052172903LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x253 = 31U;
	uint16_t x254 = 8U;
	int16_t x255 = -1;
	uint32_t x256 = UINT32_MAX;
	volatile int32_t t58 = -858;

    t58 = (x253-((x254|x255)!=x256));

    if (t58 != 31) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x257 = 0U;
	uint16_t x258 = 17221U;
	int64_t x259 = -34609960LL;
	volatile uint32_t t59 = UINT32_MAX;

    t59 = (x257-((x258|x259)!=x260));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x261 = UINT16_MAX;
	int8_t x262 = INT8_MAX;
	volatile int32_t x263 = -11;
	static int16_t x264 = INT16_MIN;
	volatile int32_t t60 = 250352679;

    t60 = (x261-((x262|x263)!=x264));

    if (t60 != 65534) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x265 = INT64_MAX;
	uint64_t x266 = 5LLU;
	int64_t x268 = INT64_MAX;

    t61 = (x265-((x266|x267)!=x268));

    if (t61 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x269 = 501823106246940LL;
	int32_t x270 = -1;

    t62 = (x269-((x270|x271)!=x272));

    if (t62 != 501823106246939LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x274 = UINT8_MAX;
	static int32_t x275 = INT32_MIN;
	static volatile int8_t x276 = INT8_MIN;
	int64_t t63 = -31727513092LL;

    t63 = (x273-((x274|x275)!=x276));

    if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x277 = INT8_MIN;
	static int8_t x278 = INT8_MAX;
	static int16_t x279 = 23;
	volatile int8_t x280 = INT8_MIN;
	volatile int32_t t64 = 750333;

    t64 = (x277-((x278|x279)!=x280));

    if (t64 != -129) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x281 = -1;
	uint8_t x282 = 0U;
	volatile int64_t x284 = INT64_MIN;

    t65 = (x281-((x282|x283)!=x284));

    if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x286 = INT16_MAX;
	int8_t x287 = -1;
	uint64_t x288 = 18LLU;
	static volatile uint32_t t66 = 62U;

    t66 = (x285-((x286|x287)!=x288));

    if (t66 != 59406141U) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x289 = -510;
	static volatile int8_t x290 = INT8_MAX;
	int8_t x291 = INT8_MIN;
	int32_t x292 = INT32_MIN;

    t67 = (x289-((x290|x291)!=x292));

    if (t67 != -511) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x293 = 4564U;
	volatile uint8_t x294 = 18U;
	uint8_t x295 = UINT8_MAX;
	static int64_t x296 = -697832LL;

    t68 = (x293-((x294|x295)!=x296));

    if (t68 != 4563) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x297 = 48062U;
	uint32_t x298 = 1419U;
	static int8_t x299 = INT8_MAX;
	static uint16_t x300 = 1U;
	uint32_t t69 = 328U;

    t69 = (x297-((x298|x299)!=x300));

    if (t69 != 48061U) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x301 = INT16_MAX;
	static int32_t x302 = -1;
	int64_t x303 = INT64_MIN;
	volatile int8_t x304 = 13;
	int32_t t70 = 110437;

    t70 = (x301-((x302|x303)!=x304));

    if (t70 != 32766) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x309 = UINT8_MAX;
	static volatile int32_t x310 = INT32_MIN;
	int16_t x312 = INT16_MAX;
	static int32_t t71 = -21;

    t71 = (x309-((x310|x311)!=x312));

    if (t71 != 254) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x313 = INT8_MIN;
	int8_t x314 = -42;
	volatile int16_t x315 = INT16_MAX;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t72 = -33048;

    t72 = (x313-((x314|x315)!=x316));

    if (t72 != -129) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x320 = INT32_MIN;
	int32_t t73 = -4;

    t73 = (x317-((x318|x319)!=x320));

    if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x329 = -1;
	volatile int64_t x330 = -56185041545LL;
	int64_t x331 = -1LL;
	int32_t x332 = INT32_MIN;

    t74 = (x329-((x330|x331)!=x332));

    if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x335 = 224870U;
	uint64_t t75 = 8536059708345173LLU;

    t75 = (x333-((x334|x335)!=x336));

    if (t75 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x337 = 1190U;
	int8_t x338 = INT8_MIN;
	uint32_t x339 = 3674U;
	static uint64_t x340 = 1LLU;
	volatile int32_t t76 = -1;

    t76 = (x337-((x338|x339)!=x340));

    if (t76 != 1189) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x345 = UINT32_MAX;
	static int64_t x346 = -377LL;
	uint32_t x347 = UINT32_MAX;
	static int32_t x348 = 3088;
	uint32_t t77 = 789U;

    t77 = (x345-((x346|x347)!=x348));

    if (t77 != 4294967294U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x349 = 21;
	uint16_t x350 = 13U;
	int32_t x351 = 54162;
	int32_t x352 = -1701;
	static volatile int32_t t78 = 669;

    t78 = (x349-((x350|x351)!=x352));

    if (t78 != 20) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x353 = INT16_MIN;
	uint16_t x354 = 22124U;
	int64_t x355 = INT64_MIN;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t79 = 4682868;

    t79 = (x353-((x354|x355)!=x356));

    if (t79 != -32769) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x358 = 23U;
	static volatile uint32_t x359 = 129275415U;
	uint8_t x360 = UINT8_MAX;
	int32_t t80 = -3;

    t80 = (x357-((x358|x359)!=x360));

    if (t80 != 5) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x361 = INT32_MAX;
	int8_t x362 = INT8_MIN;
	uint32_t x363 = 9362U;
	uint32_t x364 = 607762U;
	volatile int32_t t81 = 13788;

    t81 = (x361-((x362|x363)!=x364));

    if (t81 != 2147483646) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x365 = INT8_MIN;
	static volatile int16_t x366 = INT16_MIN;
	volatile int8_t x367 = INT8_MAX;
	volatile int8_t x368 = INT8_MAX;
	int32_t t82 = 108513;

    t82 = (x365-((x366|x367)!=x368));

    if (t82 != -129) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x373 = 2766LLU;
	static uint8_t x374 = 0U;
	static uint32_t x375 = 878566852U;
	int64_t x376 = INT64_MAX;
	uint64_t t83 = 11452751395612076LLU;

    t83 = (x373-((x374|x375)!=x376));

    if (t83 != 2765LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x379 = INT16_MIN;
	int64_t x380 = -28109LL;

    t84 = (x377-((x378|x379)!=x380));

    if (t84 != 507057527171078763LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x381 = UINT64_MAX;
	static uint64_t x382 = 46LLU;
	static volatile int32_t x383 = INT32_MIN;
	int64_t x384 = -1650330072238046679LL;
	uint64_t t85 = 12266956LLU;

    t85 = (x381-((x382|x383)!=x384));

    if (t85 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x385 = 439LLU;
	int32_t x386 = INT32_MAX;
	volatile uint64_t t86 = 326LLU;

    t86 = (x385-((x386|x387)!=x388));

    if (t86 != 438LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x389 = UINT8_MAX;
	volatile int32_t x391 = INT32_MIN;
	uint32_t x392 = 31836024U;
	volatile int32_t t87 = -7;

    t87 = (x389-((x390|x391)!=x392));

    if (t87 != 254) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x393 = 3LLU;
	uint64_t x395 = 232LLU;
	static int32_t x396 = INT32_MIN;
	volatile uint64_t t88 = 229187208296084LLU;

    t88 = (x393-((x394|x395)!=x396));

    if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x397 = INT64_MAX;
	uint32_t x398 = UINT32_MAX;
	int16_t x399 = -7;
	static volatile int64_t x400 = INT64_MIN;
	volatile int64_t t89 = -95847880441584LL;

    t89 = (x397-((x398|x399)!=x400));

    if (t89 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x401 = INT16_MIN;
	int16_t x402 = INT16_MIN;
	volatile uint16_t x403 = UINT16_MAX;
	int32_t t90 = -188;

    t90 = (x401-((x402|x403)!=x404));

    if (t90 != -32769) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x410 = UINT64_MAX;
	int16_t x411 = INT16_MAX;
	uint16_t x412 = 58U;
	int32_t t91 = -612;

    t91 = (x409-((x410|x411)!=x412));

    if (t91 != 65534) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x413 = 0;
	int16_t x415 = 12;
	volatile int32_t t92 = 1;

    t92 = (x413-((x414|x415)!=x416));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x417 = -1;
	int64_t x418 = 2204789LL;
	uint64_t x419 = UINT64_MAX;
	static int16_t x420 = INT16_MAX;

    t93 = (x417-((x418|x419)!=x420));

    if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x421 = UINT8_MAX;
	volatile int8_t x422 = INT8_MIN;
	uint64_t x423 = 8944766521659LLU;
	volatile int16_t x424 = INT16_MAX;
	volatile int32_t t94 = -1805;

    t94 = (x421-((x422|x423)!=x424));

    if (t94 != 254) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x426 = -1;
	int8_t x427 = INT8_MAX;
	volatile int8_t x428 = 2;
	int32_t t95 = -1728776;

    t95 = (x425-((x426|x427)!=x428));

    if (t95 != 32766) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint32_t x429 = 121U;
	int64_t x430 = INT64_MIN;
	int8_t x431 = INT8_MIN;
	int16_t x432 = INT16_MAX;
	volatile uint32_t t96 = 2473699U;

    t96 = (x429-((x430|x431)!=x432));

    if (t96 != 120U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x433 = 0;
	int64_t x434 = INT64_MIN;
	int16_t x435 = INT16_MAX;
	int8_t x436 = 40;
	static int32_t t97 = -225826;

    t97 = (x433-((x434|x435)!=x436));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x442 = -1;
	static int16_t x443 = INT16_MAX;

    t98 = (x441-((x442|x443)!=x444));

    if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x445 = 63U;
	int32_t x446 = 781;
	volatile int16_t x447 = -1;
	int32_t x448 = 1772;
	static volatile int32_t t99 = -540602241;

    t99 = (x445-((x446|x447)!=x448));

    if (t99 != 62) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x449 = 3;
	int16_t x451 = 57;
	uint32_t x452 = UINT32_MAX;
	volatile int32_t t100 = 580426;

    t100 = (x449-((x450|x451)!=x452));

    if (t100 != 2) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x453 = INT64_MAX;
	static volatile int64_t x454 = INT64_MIN;
	uint8_t x455 = 44U;
	int8_t x456 = -1;
	int64_t t101 = 654795LL;

    t101 = (x453-((x454|x455)!=x456));

    if (t101 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x458 = INT8_MAX;
	static volatile int16_t x459 = -153;
	uint32_t x460 = 2578U;
	volatile int32_t t102 = -391;

    t102 = (x457-((x458|x459)!=x460));

    if (t102 != -323) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x461 = 1LLU;
	static uint64_t x462 = 2333350LLU;
	int16_t x464 = INT16_MIN;

    t103 = (x461-((x462|x463)!=x464));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x465 = -1LL;
	static volatile uint8_t x467 = UINT8_MAX;
	int16_t x468 = -1;
	volatile int64_t t104 = -1LL;

    t104 = (x465-((x466|x467)!=x468));

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x469 = INT8_MAX;
	static int16_t x470 = 3178;
	uint32_t x471 = 3317U;
	volatile int8_t x472 = -1;
	volatile int32_t t105 = 44381;

    t105 = (x469-((x470|x471)!=x472));

    if (t105 != 126) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x477 = -1LL;
	uint32_t x478 = 346012014U;
	uint8_t x479 = 0U;
	int16_t x480 = -1;
	int64_t t106 = -55LL;

    t106 = (x477-((x478|x479)!=x480));

    if (t106 != -2LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x481 = -1;
	int32_t x482 = -1;
	uint64_t x483 = 54071LLU;
	uint16_t x484 = 2703U;
	int32_t t107 = -10036;

    t107 = (x481-((x482|x483)!=x484));

    if (t107 != -2) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x485 = -8102;
	int16_t x487 = INT16_MIN;
	int32_t t108 = 1369906;

    t108 = (x485-((x486|x487)!=x488));

    if (t108 != -8103) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x489 = 700LLU;
	uint32_t x490 = 553110148U;
	uint64_t x491 = 16747080LLU;
	volatile int16_t x492 = INT16_MIN;
	uint64_t t109 = 528440LLU;

    t109 = (x489-((x490|x491)!=x492));

    if (t109 != 699LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x493 = 20;
	volatile int8_t x496 = -1;
	int32_t t110 = 1;

    t110 = (x493-((x494|x495)!=x496));

    if (t110 != 20) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x497 = -3;
	int16_t x498 = INT16_MIN;
	uint32_t x499 = 185343U;

    t111 = (x497-((x498|x499)!=x500));

    if (t111 != -4) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x501 = 3389247U;
	int64_t x502 = INT64_MIN;

    t112 = (x501-((x502|x503)!=x504));

    if (t112 != 3389246U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x505 = INT16_MIN;
	static int32_t x506 = INT32_MIN;
	static uint64_t x507 = 1LLU;
	static volatile uint64_t x508 = UINT64_MAX;
	volatile int32_t t113 = -3015;

    t113 = (x505-((x506|x507)!=x508));

    if (t113 != -32769) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x510 = INT8_MIN;
	uint64_t x511 = UINT64_MAX;
	uint16_t x512 = 25U;

    t114 = (x509-((x510|x511)!=x512));

    if (t114 != 65534) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x513 = INT8_MIN;
	static int16_t x514 = -1;
	int64_t x515 = -1LL;
	volatile int32_t t115 = 47367;

    t115 = (x513-((x514|x515)!=x516));

    if (t115 != -129) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x517 = 389245;
	static volatile int16_t x518 = -20;
	int64_t x519 = INT64_MIN;
	int8_t x520 = -54;
	int32_t t116 = -11;

    t116 = (x517-((x518|x519)!=x520));

    if (t116 != 389244) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x521 = 37382914962LL;
	static uint16_t x522 = 108U;
	int32_t x523 = 0;
	int8_t x524 = INT8_MIN;

    t117 = (x521-((x522|x523)!=x524));

    if (t117 != 37382914961LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x525 = INT8_MIN;
	static int64_t x526 = -7757015350449LL;
	static int8_t x527 = INT8_MIN;
	int8_t x528 = -1;
	int32_t t118 = -2393;

    t118 = (x525-((x526|x527)!=x528));

    if (t118 != -129) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x529 = INT16_MIN;
	volatile int64_t x530 = -1LL;
	int16_t x531 = INT16_MIN;
	static uint8_t x532 = 19U;
	volatile int32_t t119 = 0;

    t119 = (x529-((x530|x531)!=x532));

    if (t119 != -32769) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x533 = 31U;
	uint64_t x534 = UINT64_MAX;
	int16_t x535 = INT16_MIN;
	volatile int8_t x536 = INT8_MIN;
	volatile int32_t t120 = -6;

    t120 = (x533-((x534|x535)!=x536));

    if (t120 != 30) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x537 = INT16_MIN;
	static uint8_t x538 = 7U;
	int8_t x539 = -1;
	static int64_t x540 = INT64_MIN;
	int32_t t121 = 28508932;

    t121 = (x537-((x538|x539)!=x540));

    if (t121 != -32769) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x542 = 7695;
	int8_t x543 = INT8_MIN;
	static volatile uint64_t x544 = UINT64_MAX;
	volatile int64_t t122 = 2224937486207LL;

    t122 = (x541-((x542|x543)!=x544));

    if (t122 != -844407386086606LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x546 = INT64_MIN;
	uint32_t x547 = 27007U;
	int16_t x548 = 4253;

    t123 = (x545-((x546|x547)!=x548));

    if (t123 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x549 = 108U;
	int32_t x550 = INT32_MIN;
	uint8_t x551 = 3U;
	int64_t x552 = INT64_MIN;
	int32_t t124 = 917981697;

    t124 = (x549-((x550|x551)!=x552));

    if (t124 != 107) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x557 = UINT64_MAX;
	uint32_t x558 = 1U;
	uint32_t x559 = 15U;
	static int16_t x560 = INT16_MAX;
	volatile uint64_t t125 = 138508477151135262LLU;

    t125 = (x557-((x558|x559)!=x560));

    if (t125 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x561 = -1;
	int16_t x562 = 0;
	int64_t x563 = -1LL;
	uint32_t x564 = UINT32_MAX;
	volatile int32_t t126 = 0;

    t126 = (x561-((x562|x563)!=x564));

    if (t126 != -2) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x565 = 196U;
	int32_t x567 = -132572;
	uint32_t x568 = 24157697U;
	uint32_t t127 = 125262560U;

    t127 = (x565-((x566|x567)!=x568));

    if (t127 != 195U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x569 = 10865LL;
	uint32_t x570 = 1649453U;
	volatile uint16_t x571 = UINT16_MAX;
	volatile int32_t x572 = INT32_MIN;

    t128 = (x569-((x570|x571)!=x572));

    if (t128 != 10864LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x577 = 12U;
	int64_t x578 = -2LL;
	int16_t x579 = 6;
	int8_t x580 = INT8_MIN;
	volatile int32_t t129 = -1;

    t129 = (x577-((x578|x579)!=x580));

    if (t129 != 11) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x581 = UINT64_MAX;
	static uint64_t x583 = 2837LLU;
	volatile int8_t x584 = 12;

    t130 = (x581-((x582|x583)!=x584));

    if (t130 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x586 = INT32_MAX;
	volatile int32_t t131 = -1359246;

    t131 = (x585-((x586|x587)!=x588));

    if (t131 != 254) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x589 = -5400045;
	volatile int16_t x590 = INT16_MIN;
	uint16_t x591 = 0U;
	volatile int32_t t132 = -155517526;

    t132 = (x589-((x590|x591)!=x592));

    if (t132 != -5400046) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x594 = 58;
	int32_t x595 = -2571;
	int16_t x596 = INT16_MIN;

    t133 = (x593-((x594|x595)!=x596));

    if (t133 != 3) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x597 = UINT8_MAX;
	volatile uint8_t x598 = UINT8_MAX;
	int32_t x599 = INT32_MIN;
	int32_t x600 = -22;

    t134 = (x597-((x598|x599)!=x600));

    if (t134 != 254) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x603 = INT64_MIN;
	int8_t x604 = INT8_MIN;
	static int32_t t135 = -1061;

    t135 = (x601-((x602|x603)!=x604));

    if (t135 != -32769) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x605 = INT8_MIN;
	volatile uint8_t x606 = UINT8_MAX;
	static int64_t x607 = INT64_MIN;
	static int64_t x608 = INT64_MIN;
	int32_t t136 = 392;

    t136 = (x605-((x606|x607)!=x608));

    if (t136 != -129) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x611 = INT16_MAX;
	static int8_t x612 = -1;
	volatile uint32_t t137 = 271484U;

    t137 = (x609-((x610|x611)!=x612));

    if (t137 != 7375559U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x613 = 0LLU;
	volatile uint32_t x615 = UINT32_MAX;
	static int16_t x616 = INT16_MIN;
	uint64_t t138 = UINT64_MAX;

    t138 = (x613-((x614|x615)!=x616));

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x617 = 41U;
	static volatile uint8_t x619 = UINT8_MAX;
	uint8_t x620 = 1U;
	volatile int32_t t139 = 28923;

    t139 = (x617-((x618|x619)!=x620));

    if (t139 != 40) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x621 = -1;
	static int16_t x622 = INT16_MIN;
	int32_t x624 = INT32_MIN;
	int32_t t140 = 274;

    t140 = (x621-((x622|x623)!=x624));

    if (t140 != -2) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x627 = -54;
	static volatile int32_t x628 = 5762561;
	static int32_t t141 = 383833726;

    t141 = (x625-((x626|x627)!=x628));

    if (t141 != 6660868) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x629 = 0U;
	int64_t x630 = INT64_MIN;
	volatile int64_t x631 = -7447LL;
	static int16_t x632 = INT16_MAX;
	int32_t t142 = 447897;

    t142 = (x629-((x630|x631)!=x632));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x633 = INT8_MAX;
	uint8_t x634 = UINT8_MAX;
	uint64_t x635 = UINT64_MAX;
	int64_t x636 = -1LL;
	int32_t t143 = -73;

    t143 = (x633-((x634|x635)!=x636));

    if (t143 != 127) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x638 = -112;
	uint16_t x639 = UINT16_MAX;
	volatile int32_t x640 = 588;
	volatile uint32_t t144 = 9U;

    t144 = (x637-((x638|x639)!=x640));

    if (t144 != 4294967294U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x641 = INT16_MIN;
	int32_t t145 = 99;

    t145 = (x641-((x642|x643)!=x644));

    if (t145 != -32769) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x645 = -1;
	volatile uint64_t x646 = 2374950LLU;
	int8_t x647 = 7;
	uint8_t x648 = UINT8_MAX;
	int32_t t146 = 62;

    t146 = (x645-((x646|x647)!=x648));

    if (t146 != -2) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x649 = INT8_MAX;
	uint64_t x651 = 11005669591640387LLU;
	static int64_t x652 = 1782446LL;

    t147 = (x649-((x650|x651)!=x652));

    if (t147 != 126) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x653 = 1445LLU;
	int64_t x654 = -11957119372586918LL;
	int32_t x655 = INT32_MIN;
	int64_t x656 = INT64_MIN;

    t148 = (x653-((x654|x655)!=x656));

    if (t148 != 1444LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x657 = 45U;
	uint64_t x658 = 2927677LLU;
	static int16_t x659 = INT16_MIN;
	int32_t t149 = 245035;

    t149 = (x657-((x658|x659)!=x660));

    if (t149 != 44) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x661 = 6U;
	int64_t x662 = -458958347LL;
	int16_t x664 = 13099;
	volatile int32_t t150 = -2922942;

    t150 = (x661-((x662|x663)!=x664));

    if (t150 != 5) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x665 = UINT32_MAX;
	uint16_t x666 = 31626U;
	uint32_t x668 = UINT32_MAX;
	static uint32_t t151 = 46U;

    t151 = (x665-((x666|x667)!=x668));

    if (t151 != 4294967294U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x669 = -29092682286LL;
	int32_t x670 = INT32_MAX;
	int64_t x671 = INT64_MIN;
	volatile int64_t t152 = -40288766304LL;

    t152 = (x669-((x670|x671)!=x672));

    if (t152 != -29092682287LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int8_t x673 = INT8_MIN;
	uint64_t x674 = 1116479LLU;
	int32_t x675 = -65632;
	volatile int32_t t153 = 5284212;

    t153 = (x673-((x674|x675)!=x676));

    if (t153 != -129) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x678 = 7990;
	static volatile int16_t x679 = -1;
	static int16_t x680 = INT16_MIN;
	static volatile int32_t t154 = -138978085;

    t154 = (x677-((x678|x679)!=x680));

    if (t154 != -2) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int8_t x681 = INT8_MIN;
	int64_t x682 = INT64_MIN;
	uint16_t x683 = 139U;
	int64_t x684 = 1729099558517477LL;
	volatile int32_t t155 = 1846;

    t155 = (x681-((x682|x683)!=x684));

    if (t155 != -129) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x685 = INT8_MIN;
	int32_t x686 = -7704;
	static int8_t x687 = INT8_MAX;
	int32_t t156 = -517365198;

    t156 = (x685-((x686|x687)!=x688));

    if (t156 != -129) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x689 = -2;
	int16_t x691 = INT16_MIN;
	static uint8_t x692 = UINT8_MAX;
	volatile int32_t t157 = 1067019810;

    t157 = (x689-((x690|x691)!=x692));

    if (t157 != -3) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x693 = INT16_MIN;
	int8_t x696 = -3;
	volatile int32_t t158 = 3647;

    t158 = (x693-((x694|x695)!=x696));

    if (t158 != -32769) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x701 = 1071937112334398LL;
	int16_t x702 = 5574;
	int16_t x703 = INT16_MAX;
	uint8_t x704 = 0U;
	int64_t t159 = -4837396LL;

    t159 = (x701-((x702|x703)!=x704));

    if (t159 != 1071937112334397LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x705 = UINT64_MAX;
	static volatile int32_t x706 = -370;
	volatile uint16_t x707 = 455U;
	static int16_t x708 = 10263;
	volatile uint64_t t160 = 56LLU;

    t160 = (x705-((x706|x707)!=x708));

    if (t160 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x713 = INT32_MAX;
	static int64_t x714 = -1LL;
	volatile int32_t x715 = INT32_MAX;
	int64_t x716 = -4064412934LL;
	static volatile int32_t t161 = 43;

    t161 = (x713-((x714|x715)!=x716));

    if (t161 != 2147483646) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint32_t x717 = 770574U;
	int16_t x719 = INT16_MAX;
	int16_t x720 = -1;
	volatile uint32_t t162 = 1923252424U;

    t162 = (x717-((x718|x719)!=x720));

    if (t162 != 770573U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x722 = 94979745500LLU;
	uint64_t x723 = 5LLU;
	int64_t x724 = -1LL;
	volatile int32_t t163 = -2199;

    t163 = (x721-((x722|x723)!=x724));

    if (t163 != -32769) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x725 = 1U;
	volatile int64_t x726 = 3758LL;
	volatile uint32_t x727 = 2U;
	volatile int32_t x728 = 3;
	static int32_t t164 = -20931615;

    t164 = (x725-((x726|x727)!=x728));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x730 = 14474U;
	volatile int8_t x731 = INT8_MAX;
	int16_t x732 = INT16_MIN;

    t165 = (x729-((x730|x731)!=x732));

    if (t165 != 32766) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x733 = 205LLU;
	int16_t x734 = -48;
	int8_t x736 = INT8_MIN;
	uint64_t t166 = 53LLU;

    t166 = (x733-((x734|x735)!=x736));

    if (t166 != 204LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x738 = INT64_MIN;
	volatile uint32_t x739 = 29444898U;
	static int16_t x740 = INT16_MIN;
	static volatile int32_t t167 = 69;

    t167 = (x737-((x738|x739)!=x740));

    if (t167 != 197) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x741 = INT8_MAX;
	volatile uint16_t x742 = 5U;
	uint64_t x743 = UINT64_MAX;
	int64_t x744 = INT64_MAX;
	int32_t t168 = -631729902;

    t168 = (x741-((x742|x743)!=x744));

    if (t168 != 126) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x753 = 18U;
	static int64_t x755 = INT64_MIN;
	int8_t x756 = INT8_MAX;

    t169 = (x753-((x754|x755)!=x756));

    if (t169 != 17) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x757 = 39LLU;
	int16_t x758 = INT16_MIN;
	static int32_t x759 = -22794;
	uint64_t x760 = 9609597023935540LLU;
	uint64_t t170 = 1633624LLU;

    t170 = (x757-((x758|x759)!=x760));

    if (t170 != 38LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x761 = 462U;
	volatile uint32_t x762 = 1175621U;
	int64_t x763 = INT64_MIN;
	volatile int8_t x764 = INT8_MIN;
	volatile int32_t t171 = 0;

    t171 = (x761-((x762|x763)!=x764));

    if (t171 != 461) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x765 = 856049;
	int32_t x766 = -1;
	int8_t x767 = INT8_MAX;
	int8_t x768 = INT8_MIN;

    t172 = (x765-((x766|x767)!=x768));

    if (t172 != 856048) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x769 = INT16_MIN;
	volatile int8_t x770 = INT8_MIN;
	uint32_t x771 = 2126555965U;
	int32_t t173 = 476886697;

    t173 = (x769-((x770|x771)!=x772));

    if (t173 != -32769) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x773 = INT8_MIN;
	int8_t x774 = INT8_MIN;
	uint16_t x775 = UINT16_MAX;
	int8_t x776 = 0;
	int32_t t174 = -248;

    t174 = (x773-((x774|x775)!=x776));

    if (t174 != -129) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x777 = 4132LLU;
	volatile uint64_t x779 = UINT64_MAX;
	static volatile int32_t x780 = -1;
	uint64_t t175 = 239104517LLU;

    t175 = (x777-((x778|x779)!=x780));

    if (t175 != 4132LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x781 = INT32_MAX;
	static int64_t x782 = INT64_MIN;
	int64_t x783 = -4LL;

    t176 = (x781-((x782|x783)!=x784));

    if (t176 != 2147483646) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x785 = 158;
	uint16_t x786 = 172U;
	int16_t x787 = INT16_MIN;
	int32_t x788 = -1;

    t177 = (x785-((x786|x787)!=x788));

    if (t177 != 157) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x789 = -1LL;
	int64_t x790 = INT64_MAX;
	static uint32_t x791 = 10044270U;
	int8_t x792 = 0;
	volatile int64_t t178 = -21041LL;

    t178 = (x789-((x790|x791)!=x792));

    if (t178 != -2LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x793 = -1;
	uint8_t x794 = 60U;
	int64_t x795 = 11811LL;
	static int32_t x796 = 42143103;

    t179 = (x793-((x794|x795)!=x796));

    if (t179 != -2) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x797 = 1U;
	static volatile uint16_t x798 = 6U;
	volatile int8_t x799 = INT8_MIN;
	volatile int32_t t180 = -1478278;

    t180 = (x797-((x798|x799)!=x800));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x801 = -1LL;
	uint64_t x802 = 86178877898978LLU;
	volatile int32_t x803 = -1;
	int64_t t181 = 13784651710LL;

    t181 = (x801-((x802|x803)!=x804));

    if (t181 != -2LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x805 = 386085;
	uint64_t x807 = 712839LLU;
	volatile int64_t x808 = INT64_MIN;

    t182 = (x805-((x806|x807)!=x808));

    if (t182 != 386084) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x809 = INT32_MAX;
	int32_t x810 = INT32_MIN;
	uint8_t x812 = 1U;
	int32_t t183 = -5;

    t183 = (x809-((x810|x811)!=x812));

    if (t183 != 2147483646) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x813 = INT16_MIN;
	volatile uint32_t x814 = UINT32_MAX;
	uint32_t x815 = UINT32_MAX;
	uint16_t x816 = 1760U;
	int32_t t184 = 14;

    t184 = (x813-((x814|x815)!=x816));

    if (t184 != -32769) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x817 = INT64_MAX;
	volatile int64_t x818 = INT64_MIN;
	int64_t x819 = INT64_MIN;
	uint32_t x820 = 2002464954U;

    t185 = (x817-((x818|x819)!=x820));

    if (t185 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x825 = INT8_MAX;
	int32_t x827 = -1;
	int16_t x828 = INT16_MIN;
	int32_t t186 = 127815;

    t186 = (x825-((x826|x827)!=x828));

    if (t186 != 126) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x829 = 11003U;
	uint16_t x830 = 3301U;
	int8_t x831 = 9;
	volatile int32_t t187 = 1;

    t187 = (x829-((x830|x831)!=x832));

    if (t187 != 11002) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x833 = 1U;
	uint16_t x834 = UINT16_MAX;
	static int8_t x836 = INT8_MIN;
	static volatile int32_t t188 = -218485;

    t188 = (x833-((x834|x835)!=x836));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x837 = 178026767818LLU;
	volatile int8_t x838 = 0;
	int64_t x839 = INT64_MAX;

    t189 = (x837-((x838|x839)!=x840));

    if (t189 != 178026767817LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x841 = 1;
	int16_t x843 = INT16_MIN;
	int16_t x844 = 291;

    t190 = (x841-((x842|x843)!=x844));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x845 = 0U;
	int16_t x846 = INT16_MIN;
	static volatile uint8_t x847 = 1U;
	int64_t x848 = INT64_MIN;
	volatile uint32_t t191 = UINT32_MAX;

    t191 = (x845-((x846|x847)!=x848));

    if (t191 != UINT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x849 = 4U;
	volatile uint16_t x850 = UINT16_MAX;
	int16_t x851 = -5143;
	static int32_t x852 = -3;
	uint32_t t192 = 350781305U;

    t192 = (x849-((x850|x851)!=x852));

    if (t192 != 3U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x854 = -1314190;
	uint8_t x855 = UINT8_MAX;
	uint32_t x856 = UINT32_MAX;
	int32_t t193 = -47715;

    t193 = (x853-((x854|x855)!=x856));

    if (t193 != 32766) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x857 = INT16_MAX;
	int8_t x858 = -29;
	volatile int64_t x859 = 8148346077836LL;
	volatile int8_t x860 = INT8_MIN;
	volatile int32_t t194 = -21326899;

    t194 = (x857-((x858|x859)!=x860));

    if (t194 != 32766) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x861 = -1;
	int16_t x862 = INT16_MIN;
	int8_t x863 = INT8_MIN;
	int16_t x864 = -1;
	volatile int32_t t195 = -26;

    t195 = (x861-((x862|x863)!=x864));

    if (t195 != -2) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x865 = -1;
	uint64_t x867 = 529760LLU;
	int16_t x868 = -20;
	volatile int32_t t196 = -94874;

    t196 = (x865-((x866|x867)!=x868));

    if (t196 != -2) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x869 = 4;
	uint16_t x870 = UINT16_MAX;
	static volatile int16_t x872 = 190;

    t197 = (x869-((x870|x871)!=x872));

    if (t197 != 3) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x873 = 12853942U;
	int32_t x875 = 10370;
	uint64_t x876 = 344564LLU;
	uint32_t t198 = 4U;

    t198 = (x873-((x874|x875)!=x876));

    if (t198 != 12853941U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x881 = -1;
	volatile uint64_t x882 = 48LLU;
	uint8_t x884 = 109U;
	static int32_t t199 = -7;

    t199 = (x881-((x882|x883)!=x884));

    if (t199 != -2) { NG(); } else { ; }
	
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

