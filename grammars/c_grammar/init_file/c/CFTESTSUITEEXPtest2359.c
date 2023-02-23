
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

static int32_t x6 = INT32_MAX;
static volatile uint32_t x10 = 2U;
uint16_t x18 = UINT16_MAX;
int32_t x21 = INT32_MIN;
volatile int32_t t5 = 1;
uint8_t x31 = 5U;
int32_t t6 = 161805;
uint16_t x43 = UINT16_MAX;
volatile int32_t t8 = 1;
volatile uint32_t x52 = 226875415U;
volatile int32_t t10 = -1;
int8_t x61 = 14;
static int32_t x63 = -1;
static volatile int32_t t12 = -3116473;
int64_t x76 = -1LL;
volatile int64_t x87 = INT64_MAX;
volatile uint16_t x89 = 2250U;
int32_t x90 = INT32_MIN;
uint8_t x93 = 4U;
volatile int32_t t20 = -24;
int8_t x97 = -1;
uint32_t x105 = 146111725U;
int32_t x106 = INT32_MIN;
int32_t t23 = 23;
volatile int64_t x119 = INT64_MIN;
uint32_t x123 = 1591U;
volatile uint64_t x124 = UINT64_MAX;
int64_t x128 = INT64_MIN;
uint8_t x132 = 5U;
int32_t t29 = -10837;
int8_t x134 = INT8_MIN;
volatile int32_t t30 = -636;
uint8_t x138 = 16U;
static int64_t x139 = INT64_MIN;
static uint16_t x142 = 14836U;
int8_t x143 = -1;
int64_t x144 = INT64_MAX;
int8_t x163 = INT8_MIN;
int8_t x166 = -1;
int32_t x168 = -1;
int8_t x172 = 3;
int64_t x182 = INT64_MAX;
int16_t x189 = -1653;
static int32_t t43 = -202;
uint8_t x193 = UINT8_MAX;
uint32_t x194 = 74126098U;
uint64_t x201 = UINT64_MAX;
uint64_t x203 = 2014574LLU;
uint64_t x205 = 183055661393LLU;
static int64_t x210 = INT64_MIN;
volatile int8_t x215 = INT8_MIN;
int32_t t50 = 90976;
int32_t t51 = -36264693;
volatile uint64_t x225 = 28162LLU;
int64_t x227 = INT64_MIN;
int16_t x233 = INT16_MIN;
int64_t x242 = INT64_MIN;
int32_t t57 = 7273;
static int64_t x253 = -1LL;
uint16_t x256 = 5U;
int8_t x263 = 22;
uint64_t x265 = UINT64_MAX;
volatile int32_t t61 = -1109;
int32_t x275 = INT32_MAX;
static volatile int64_t x287 = -465423LL;
volatile int64_t x292 = INT64_MAX;
volatile int64_t x295 = INT64_MIN;
uint16_t x296 = 4U;
static uint32_t x297 = 44691U;
int8_t x300 = INT8_MIN;
int8_t x316 = INT8_MAX;
int64_t x326 = -1LL;
int16_t x328 = INT16_MAX;
static int8_t x329 = 17;
volatile int64_t x335 = INT64_MAX;
int32_t t77 = -3761;
int64_t x349 = -1LL;
static int32_t t79 = 257948684;
static int32_t x360 = 82593249;
uint64_t x362 = 7356360450LLU;
int8_t x368 = INT8_MIN;
int8_t x369 = INT8_MIN;
static int8_t x370 = INT8_MIN;
volatile uint32_t x376 = UINT32_MAX;
volatile uint64_t x380 = 25000280024397LLU;
static volatile int32_t t87 = -198393;
static volatile int32_t t88 = -457406934;
int8_t x398 = 6;
volatile int32_t t89 = -653139956;
int16_t x405 = INT16_MIN;
int32_t t91 = 71;
uint8_t x411 = 97U;
volatile int64_t x413 = -1LL;
uint16_t x415 = UINT16_MAX;
volatile int8_t x423 = -18;
volatile int32_t t94 = 4981920;
static int8_t x427 = -61;
static volatile uint16_t x445 = 9U;
int32_t t100 = 87901;
int32_t t101 = -14;
uint8_t x458 = 0U;
volatile uint8_t x463 = UINT8_MAX;
uint16_t x465 = 109U;
int16_t x475 = INT16_MAX;
volatile int8_t x476 = -1;
static int8_t x485 = 5;
int8_t x488 = -54;
uint8_t x489 = UINT8_MAX;
uint8_t x494 = 7U;
int8_t x505 = INT8_MIN;
int64_t x511 = INT64_MAX;
int64_t x512 = INT64_MIN;
int32_t x523 = 4619237;
int32_t x524 = -1;
volatile int16_t x526 = -1;
int32_t x527 = INT32_MIN;
int16_t x530 = INT16_MIN;
uint64_t x535 = 896LLU;
volatile int32_t x542 = INT32_MIN;
static volatile int32_t t123 = -34125;
int8_t x550 = INT8_MIN;
uint64_t x558 = 0LLU;
static int32_t x559 = 26131;
volatile int16_t x568 = INT16_MIN;
static uint32_t x571 = UINT32_MAX;
static int8_t x578 = INT8_MIN;
static int64_t x582 = 8963704297139704LL;
static int64_t x585 = INT64_MIN;
int64_t x587 = -1LL;
static int16_t x589 = 53;
int32_t x601 = 2167693;
static uint8_t x604 = 5U;
int8_t x605 = INT8_MIN;
volatile int32_t t138 = -24;
uint32_t x613 = UINT32_MAX;
volatile int32_t t139 = -115866;
int32_t t140 = -23;
int32_t x626 = INT32_MIN;
int64_t x639 = -2345522407965170002LL;
int16_t x645 = INT16_MAX;
static volatile int32_t x651 = 5305;
int32_t t149 = 3340921;
uint32_t x661 = 661891321U;
uint8_t x662 = 0U;
int8_t x669 = INT8_MIN;
int32_t x676 = -2691766;
uint16_t x682 = UINT16_MAX;
static int32_t x683 = INT32_MAX;
int32_t t155 = 1552;
uint32_t x687 = 72515721U;
int16_t x690 = 551;
volatile uint32_t x691 = UINT32_MAX;
int32_t x696 = 131;
uint32_t x697 = 746744692U;
volatile int32_t t161 = 2;
int32_t t162 = 125;
volatile int32_t t163 = 47;
int32_t x725 = INT32_MIN;
int32_t x726 = -1;
int16_t x730 = -1;
uint16_t x734 = UINT16_MAX;
int32_t x736 = INT32_MIN;
static volatile int32_t t167 = 772496;
static volatile int32_t t168 = 1;
volatile int8_t x744 = INT8_MAX;
int32_t t169 = 17932328;
int8_t x749 = INT8_MIN;
int64_t x751 = INT64_MAX;
static int64_t x757 = INT64_MAX;
static int32_t x758 = INT32_MAX;
volatile int32_t t173 = 48609;
volatile int16_t x762 = INT16_MIN;
volatile uint8_t x770 = 8U;
int16_t x781 = -1;
int32_t x786 = INT32_MIN;
uint16_t x787 = 82U;
int64_t x794 = -1873LL;
int32_t x795 = 32239882;
volatile int64_t x797 = -1LL;
volatile int8_t x803 = 5;
static uint64_t x807 = 1643268452LLU;
int16_t x813 = -4;
uint32_t x819 = UINT32_MAX;
uint8_t x820 = 108U;
volatile int32_t t187 = 3500;
int8_t x822 = -10;
int64_t x823 = -1LL;
uint32_t x825 = 6U;
uint32_t x834 = 729169U;
int32_t t193 = -1272;
uint64_t x850 = 468200LLU;
volatile int32_t t194 = -1;
int16_t x860 = -1;
int16_t x867 = INT16_MAX;
static int64_t x868 = -3851327279LL;
int64_t x871 = 43356610136LL;


void f0(void) {
    	static int64_t x1 = INT64_MIN;
	int8_t x2 = INT8_MAX;
	uint16_t x3 = UINT16_MAX;
	uint64_t x4 = 3762371880422106LLU;
	static int32_t t0 = 191;

    t0 = (x1!=((x2|x3)+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	volatile int8_t x7 = -1;
	int8_t x8 = -1;
	volatile int32_t t1 = 0;

    t1 = (x5!=((x6|x7)+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 60;
	uint8_t x11 = 6U;
	int32_t x12 = INT32_MIN;
	int32_t t2 = 1366;

    t2 = (x9!=((x10|x11)+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 69907805U;
	int16_t x14 = INT16_MAX;
	int16_t x15 = INT16_MAX;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = 78830482;

    t3 = (x13!=((x14|x15)+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 9998175LLU;
	int8_t x19 = -4;
	uint32_t x20 = UINT32_MAX;
	int32_t t4 = 74949;

    t4 = (x17!=((x18|x19)+x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = -1;
	int8_t x23 = -23;
	uint32_t x24 = 118U;

    t5 = (x21!=((x22|x23)+x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = 1540187U;
	volatile int32_t x30 = 370252;
	int32_t x32 = -2047159;

    t6 = (x29!=((x30|x31)+x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = -13;
	int32_t x38 = INT32_MAX;
	volatile uint64_t x39 = 536630914774108161LLU;
	uint64_t x40 = UINT64_MAX;
	int32_t t7 = -1394518;

    t7 = (x37!=((x38|x39)+x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = -1;
	int8_t x42 = -1;
	int32_t x44 = -34104;

    t8 = (x41!=((x42|x43)+x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = INT8_MIN;
	int64_t x46 = INT64_MIN;
	uint16_t x47 = 1455U;
	int32_t x48 = INT32_MAX;
	volatile int32_t t9 = 6;

    t9 = (x45!=((x46|x47)+x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = -1LL;
	volatile int32_t x50 = INT32_MIN;
	uint8_t x51 = 46U;

    t10 = (x49!=((x50|x51)+x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x57 = INT16_MIN;
	int64_t x58 = 123655794779620932LL;
	int8_t x59 = INT8_MAX;
	static int32_t x60 = -1;
	static int32_t t11 = 977;

    t11 = (x57!=((x58|x59)+x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x62 = 0;
	volatile int32_t x64 = 760230;

    t12 = (x61!=((x62|x63)+x64));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x65 = INT16_MIN;
	volatile int32_t x66 = -3;
	int64_t x67 = -9143226736001LL;
	int16_t x68 = -1;
	volatile int32_t t13 = -1978957;

    t13 = (x65!=((x66|x67)+x68));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x69 = 18566500;
	volatile int64_t x70 = INT64_MIN;
	int8_t x71 = INT8_MIN;
	static int32_t x72 = INT32_MIN;
	volatile int32_t t14 = -177;

    t14 = (x69!=((x70|x71)+x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x73 = 21419U;
	volatile int8_t x74 = INT8_MAX;
	volatile int64_t x75 = INT64_MAX;
	int32_t t15 = 26703;

    t15 = (x73!=((x74|x75)+x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = -7463844942169648LL;
	volatile int8_t x78 = INT8_MIN;
	uint32_t x79 = UINT32_MAX;
	volatile int8_t x80 = INT8_MIN;
	int32_t t16 = 1;

    t16 = (x77!=((x78|x79)+x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x81 = -1;
	static volatile int32_t x82 = INT32_MIN;
	int16_t x83 = -1;
	volatile int64_t x84 = 2278LL;
	int32_t t17 = 267092662;

    t17 = (x81!=((x82|x83)+x84));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x85 = INT8_MIN;
	uint16_t x86 = UINT16_MAX;
	int16_t x88 = INT16_MIN;
	int32_t t18 = 85;

    t18 = (x85!=((x86|x87)+x88));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x91 = 131533425311499LLU;
	uint64_t x92 = UINT64_MAX;
	volatile int32_t t19 = 14962495;

    t19 = (x89!=((x90|x91)+x92));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x94 = -1;
	int32_t x95 = -32242899;
	volatile int16_t x96 = 1009;

    t20 = (x93!=((x94|x95)+x96));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x98 = -1;
	static int16_t x99 = -2;
	uint64_t x100 = 757238LLU;
	int32_t t21 = 108386667;

    t21 = (x97!=((x98|x99)+x100));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = INT16_MAX;
	volatile uint8_t x102 = 61U;
	int16_t x103 = INT16_MAX;
	uint64_t x104 = 2948203446LLU;
	volatile int32_t t22 = 112;

    t22 = (x101!=((x102|x103)+x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x107 = UINT64_MAX;
	uint32_t x108 = 158390896U;

    t23 = (x105!=((x106|x107)+x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = INT32_MAX;
	int16_t x110 = INT16_MIN;
	uint64_t x111 = UINT64_MAX;
	uint32_t x112 = 2089674U;
	volatile int32_t t24 = 100043;

    t24 = (x109!=((x110|x111)+x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = INT16_MIN;
	uint64_t x114 = 6208LLU;
	int32_t x115 = -4502014;
	int16_t x116 = INT16_MAX;
	volatile int32_t t25 = 981563;

    t25 = (x113!=((x114|x115)+x116));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = 4;
	volatile int64_t x118 = -261186LL;
	volatile uint8_t x120 = 2U;
	static volatile int32_t t26 = -45;

    t26 = (x117!=((x118|x119)+x120));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x121 = UINT16_MAX;
	volatile int8_t x122 = INT8_MIN;
	int32_t t27 = -247524;

    t27 = (x121!=((x122|x123)+x124));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x125 = -1;
	int32_t x126 = INT32_MAX;
	uint32_t x127 = 5U;
	int32_t t28 = 91422175;

    t28 = (x125!=((x126|x127)+x128));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x129 = -706865294436416LL;
	uint64_t x130 = 23615458455879LLU;
	volatile int64_t x131 = -1LL;

    t29 = (x129!=((x130|x131)+x132));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint64_t x133 = 277709173LLU;
	uint16_t x135 = 1U;
	int16_t x136 = INT16_MAX;

    t30 = (x133!=((x134|x135)+x136));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = INT16_MIN;
	volatile int32_t x140 = 435389;
	volatile int32_t t31 = 9034;

    t31 = (x137!=((x138|x139)+x140));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint64_t x141 = 17109LLU;
	static volatile int32_t t32 = 467420858;

    t32 = (x141!=((x142|x143)+x144));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x149 = INT16_MIN;
	static uint64_t x150 = UINT64_MAX;
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = -1;
	static volatile int32_t t33 = 200480238;

    t33 = (x149!=((x150|x151)+x152));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x153 = UINT8_MAX;
	int64_t x154 = -424275418390551850LL;
	int32_t x155 = -502944;
	static volatile int8_t x156 = INT8_MIN;
	volatile int32_t t34 = -23596;

    t34 = (x153!=((x154|x155)+x156));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x157 = -1;
	uint16_t x158 = 7032U;
	volatile uint16_t x159 = 15340U;
	uint32_t x160 = UINT32_MAX;
	static volatile int32_t t35 = 15404318;

    t35 = (x157!=((x158|x159)+x160));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x161 = -1560;
	volatile int64_t x162 = -2913LL;
	int16_t x164 = INT16_MIN;
	int32_t t36 = 4;

    t36 = (x161!=((x162|x163)+x164));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x165 = INT8_MIN;
	static int8_t x167 = -1;
	volatile int32_t t37 = 4;

    t37 = (x165!=((x166|x167)+x168));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x169 = INT64_MIN;
	volatile int16_t x170 = INT16_MAX;
	volatile uint64_t x171 = 503085032021842LLU;
	int32_t t38 = -219059;

    t38 = (x169!=((x170|x171)+x172));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x173 = UINT8_MAX;
	uint32_t x174 = 62098434U;
	int8_t x175 = INT8_MIN;
	uint16_t x176 = 7000U;
	volatile int32_t t39 = -3038429;

    t39 = (x173!=((x174|x175)+x176));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x177 = -1;
	int32_t x178 = INT32_MIN;
	static int16_t x179 = INT16_MIN;
	volatile int64_t x180 = -1LL;
	static int32_t t40 = -256690;

    t40 = (x177!=((x178|x179)+x180));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int32_t x181 = 3635213;
	int16_t x183 = 0;
	static int32_t x184 = -248845;
	static volatile int32_t t41 = -65;

    t41 = (x181!=((x182|x183)+x184));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x185 = -1LL;
	int8_t x186 = -1;
	int8_t x187 = 7;
	uint16_t x188 = 7928U;
	int32_t t42 = -1818;

    t42 = (x185!=((x186|x187)+x188));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x190 = UINT16_MAX;
	int32_t x191 = INT32_MIN;
	uint64_t x192 = 0LLU;

    t43 = (x189!=((x190|x191)+x192));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x195 = -5675692;
	int64_t x196 = -1LL;
	volatile int32_t t44 = -1435950;

    t44 = (x193!=((x194|x195)+x196));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x197 = 2958755298973LLU;
	uint64_t x198 = 15146593LLU;
	int64_t x199 = INT64_MIN;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t45 = -95446;

    t45 = (x197!=((x198|x199)+x200));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x202 = INT8_MIN;
	int8_t x204 = INT8_MAX;
	int32_t t46 = 41967638;

    t46 = (x201!=((x202|x203)+x204));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x206 = -1;
	static volatile uint64_t x207 = 1731LLU;
	static volatile int16_t x208 = INT16_MAX;
	int32_t t47 = -1675389;

    t47 = (x205!=((x206|x207)+x208));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x209 = INT16_MAX;
	int32_t x211 = INT32_MIN;
	volatile int32_t x212 = -18;
	volatile int32_t t48 = 2458;

    t48 = (x209!=((x210|x211)+x212));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x213 = UINT16_MAX;
	int64_t x214 = -1LL;
	int64_t x216 = 2093298LL;
	volatile int32_t t49 = 10201810;

    t49 = (x213!=((x214|x215)+x216));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x217 = INT16_MIN;
	uint32_t x218 = UINT32_MAX;
	int64_t x219 = -367752376004LL;
	int8_t x220 = INT8_MIN;

    t50 = (x217!=((x218|x219)+x220));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint16_t x221 = 41U;
	static volatile int32_t x222 = INT32_MIN;
	int8_t x223 = 9;
	uint8_t x224 = UINT8_MAX;

    t51 = (x221!=((x222|x223)+x224));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint32_t x226 = 150043033U;
	volatile uint64_t x228 = 3489424628956LLU;
	int32_t t52 = 24737;

    t52 = (x225!=((x226|x227)+x228));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x229 = INT16_MAX;
	volatile int64_t x230 = INT64_MAX;
	int32_t x231 = INT32_MIN;
	int32_t x232 = -72823;
	volatile int32_t t53 = 1;

    t53 = (x229!=((x230|x231)+x232));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x234 = INT8_MAX;
	int8_t x235 = 1;
	volatile uint64_t x236 = UINT64_MAX;
	volatile int32_t t54 = -41485;

    t54 = (x233!=((x234|x235)+x236));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x237 = 16582U;
	volatile int64_t x238 = INT64_MIN;
	static int32_t x239 = INT32_MIN;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t55 = -68086045;

    t55 = (x237!=((x238|x239)+x240));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x241 = -1;
	uint16_t x243 = 8653U;
	int16_t x244 = -1;
	volatile int32_t t56 = 7;

    t56 = (x241!=((x242|x243)+x244));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x249 = 1430293U;
	uint8_t x250 = UINT8_MAX;
	int64_t x251 = -1LL;
	uint8_t x252 = UINT8_MAX;

    t57 = (x249!=((x250|x251)+x252));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x254 = -52250589;
	uint32_t x255 = 4683680U;
	volatile int32_t t58 = 5636965;

    t58 = (x253!=((x254|x255)+x256));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x257 = INT32_MIN;
	int32_t x258 = INT32_MIN;
	uint64_t x259 = UINT64_MAX;
	static int64_t x260 = -466556162785590287LL;
	int32_t t59 = 14;

    t59 = (x257!=((x258|x259)+x260));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x261 = INT16_MIN;
	int8_t x262 = -13;
	static int16_t x264 = -1345;
	int32_t t60 = -80951370;

    t60 = (x261!=((x262|x263)+x264));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x266 = INT64_MAX;
	volatile int8_t x267 = -28;
	static int32_t x268 = INT32_MIN;

    t61 = (x265!=((x266|x267)+x268));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x269 = 29;
	int64_t x270 = INT64_MAX;
	int16_t x271 = INT16_MIN;
	int32_t x272 = -6143703;
	int32_t t62 = -117341908;

    t62 = (x269!=((x270|x271)+x272));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x273 = 64691680027LL;
	int16_t x274 = INT16_MIN;
	int16_t x276 = INT16_MAX;
	int32_t t63 = 9;

    t63 = (x273!=((x274|x275)+x276));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x277 = INT16_MAX;
	static int64_t x278 = 764991054558LL;
	int64_t x279 = 0LL;
	static int64_t x280 = -3462911LL;
	int32_t t64 = 92949;

    t64 = (x277!=((x278|x279)+x280));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x281 = 19U;
	int32_t x282 = -251034897;
	uint64_t x283 = UINT64_MAX;
	volatile uint8_t x284 = 1U;
	volatile int32_t t65 = 86;

    t65 = (x281!=((x282|x283)+x284));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x285 = -273662;
	int32_t x286 = INT32_MAX;
	int16_t x288 = -1;
	volatile int32_t t66 = 7638;

    t66 = (x285!=((x286|x287)+x288));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int8_t x289 = 1;
	int64_t x290 = INT64_MAX;
	static uint64_t x291 = 10030LLU;
	volatile int32_t t67 = -281667554;

    t67 = (x289!=((x290|x291)+x292));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x293 = INT64_MAX;
	static uint8_t x294 = UINT8_MAX;
	static volatile int32_t t68 = 2967;

    t68 = (x293!=((x294|x295)+x296));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x298 = 718LLU;
	int32_t x299 = 3905292;
	static int32_t t69 = -109054491;

    t69 = (x297!=((x298|x299)+x300));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x301 = 37980739253710294LL;
	volatile int8_t x302 = INT8_MIN;
	volatile uint16_t x303 = 2151U;
	static volatile int64_t x304 = -1LL;
	static volatile int32_t t70 = -269099399;

    t70 = (x301!=((x302|x303)+x304));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x309 = -1;
	int32_t x310 = -1;
	int16_t x311 = INT16_MIN;
	static int8_t x312 = INT8_MAX;
	int32_t t71 = 602717611;

    t71 = (x309!=((x310|x311)+x312));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x313 = -36;
	volatile int64_t x314 = 1380LL;
	static int64_t x315 = -1LL;
	static volatile int32_t t72 = 111393068;

    t72 = (x313!=((x314|x315)+x316));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x317 = INT16_MIN;
	static uint64_t x318 = 4070566544987691429LLU;
	int32_t x319 = INT32_MAX;
	static uint32_t x320 = 39842U;
	volatile int32_t t73 = 956;

    t73 = (x317!=((x318|x319)+x320));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x321 = INT16_MAX;
	int16_t x322 = -1;
	static volatile int16_t x323 = INT16_MIN;
	int16_t x324 = -110;
	volatile int32_t t74 = 133555547;

    t74 = (x321!=((x322|x323)+x324));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x325 = INT32_MAX;
	static uint64_t x327 = 0LLU;
	static int32_t t75 = 12;

    t75 = (x325!=((x326|x327)+x328));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x330 = -1LL;
	volatile uint64_t x331 = 74LLU;
	int16_t x332 = INT16_MIN;
	static int32_t t76 = 3666984;

    t76 = (x329!=((x330|x331)+x332));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x333 = -1;
	uint64_t x334 = UINT64_MAX;
	volatile int64_t x336 = INT64_MIN;

    t77 = (x333!=((x334|x335)+x336));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x341 = INT32_MIN;
	uint8_t x342 = 98U;
	int16_t x343 = INT16_MIN;
	static int8_t x344 = -1;
	int32_t t78 = 659353;

    t78 = (x341!=((x342|x343)+x344));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x350 = 258360510354LLU;
	static int64_t x351 = INT64_MIN;
	static volatile int64_t x352 = INT64_MIN;

    t79 = (x349!=((x350|x351)+x352));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x353 = 1;
	uint8_t x354 = 24U;
	int16_t x355 = INT16_MIN;
	uint64_t x356 = 46902548LLU;
	static int32_t t80 = 1465672;

    t80 = (x353!=((x354|x355)+x356));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x357 = UINT8_MAX;
	int64_t x358 = -87LL;
	volatile int32_t x359 = 14076;
	int32_t t81 = -82807;

    t81 = (x357!=((x358|x359)+x360));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x361 = UINT32_MAX;
	static uint64_t x363 = 4199LLU;
	volatile uint32_t x364 = 820206U;
	volatile int32_t t82 = 85615674;

    t82 = (x361!=((x362|x363)+x364));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x365 = 3U;
	static int8_t x366 = 7;
	int32_t x367 = 7866712;
	int32_t t83 = 2021002;

    t83 = (x365!=((x366|x367)+x368));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x371 = INT8_MIN;
	uint32_t x372 = 643168001U;
	int32_t t84 = 4;

    t84 = (x369!=((x370|x371)+x372));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x373 = UINT16_MAX;
	int32_t x374 = -1;
	int16_t x375 = INT16_MIN;
	volatile int32_t t85 = 23;

    t85 = (x373!=((x374|x375)+x376));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x377 = INT16_MAX;
	int8_t x378 = INT8_MAX;
	volatile int32_t x379 = INT32_MIN;
	volatile int32_t t86 = 1972413;

    t86 = (x377!=((x378|x379)+x380));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x381 = 444100610047LLU;
	volatile uint32_t x382 = 1130U;
	static int64_t x383 = -15534LL;
	uint32_t x384 = UINT32_MAX;

    t87 = (x381!=((x382|x383)+x384));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x385 = 15519650719873920LLU;
	int8_t x386 = INT8_MIN;
	int32_t x387 = INT32_MIN;
	static uint16_t x388 = UINT16_MAX;

    t88 = (x385!=((x386|x387)+x388));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x397 = -1;
	int64_t x399 = 2297670978896671889LL;
	int64_t x400 = -74LL;

    t89 = (x397!=((x398|x399)+x400));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x401 = -234509;
	int16_t x402 = 3;
	uint8_t x403 = 1U;
	volatile int32_t x404 = -358643;
	static int32_t t90 = 2586754;

    t90 = (x401!=((x402|x403)+x404));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x406 = -1;
	int16_t x407 = 176;
	int8_t x408 = 6;

    t91 = (x405!=((x406|x407)+x408));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x409 = -64730595711774842LL;
	int64_t x410 = INT64_MAX;
	static volatile int64_t x412 = -1LL;
	static int32_t t92 = -2;

    t92 = (x409!=((x410|x411)+x412));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x414 = 971560U;
	int16_t x416 = INT16_MAX;
	int32_t t93 = 78;

    t93 = (x413!=((x414|x415)+x416));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x421 = INT64_MAX;
	static int32_t x422 = 115297;
	static int32_t x424 = INT32_MAX;

    t94 = (x421!=((x422|x423)+x424));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x425 = INT32_MAX;
	int16_t x426 = -4;
	int64_t x428 = -1LL;
	static volatile int32_t t95 = 730510;

    t95 = (x425!=((x426|x427)+x428));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x429 = UINT16_MAX;
	int32_t x430 = -1;
	volatile int32_t x431 = -680995;
	uint64_t x432 = 1341707410343LLU;
	volatile int32_t t96 = 2116;

    t96 = (x429!=((x430|x431)+x432));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x433 = -1;
	int32_t x434 = INT32_MIN;
	static int64_t x435 = INT64_MAX;
	uint16_t x436 = 2U;
	int32_t t97 = 790574273;

    t97 = (x433!=((x434|x435)+x436));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x437 = -1;
	uint8_t x438 = 11U;
	int8_t x439 = 20;
	int64_t x440 = INT64_MIN;
	volatile int32_t t98 = -36627;

    t98 = (x437!=((x438|x439)+x440));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x441 = INT64_MIN;
	volatile int64_t x442 = -1LL;
	volatile int16_t x443 = -91;
	static int32_t x444 = INT32_MAX;
	int32_t t99 = 16836;

    t99 = (x441!=((x442|x443)+x444));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x446 = 340851160721417754LLU;
	int32_t x447 = -136178;
	uint32_t x448 = 120U;

    t100 = (x445!=((x446|x447)+x448));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x449 = 1;
	uint32_t x450 = 190U;
	volatile int16_t x451 = 807;
	uint64_t x452 = 22LLU;

    t101 = (x449!=((x450|x451)+x452));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x453 = UINT32_MAX;
	int32_t x454 = 301650;
	static uint32_t x455 = 421670U;
	int8_t x456 = -1;
	int32_t t102 = 0;

    t102 = (x453!=((x454|x455)+x456));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x457 = -2;
	volatile uint32_t x459 = 14649U;
	static int8_t x460 = INT8_MIN;
	volatile int32_t t103 = -499764030;

    t103 = (x457!=((x458|x459)+x460));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x461 = INT32_MIN;
	uint16_t x462 = 4U;
	int64_t x464 = 550LL;
	int32_t t104 = -15;

    t104 = (x461!=((x462|x463)+x464));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x466 = INT32_MAX;
	int32_t x467 = -1;
	int64_t x468 = 3610214LL;
	int32_t t105 = -7880225;

    t105 = (x465!=((x466|x467)+x468));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x469 = 2U;
	int16_t x470 = INT16_MAX;
	uint32_t x471 = 7717175U;
	volatile int16_t x472 = -1;
	volatile int32_t t106 = 2446683;

    t106 = (x469!=((x470|x471)+x472));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x473 = -21;
	int64_t x474 = 2LL;
	volatile int32_t t107 = 1559;

    t107 = (x473!=((x474|x475)+x476));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x477 = INT64_MIN;
	int64_t x478 = INT64_MIN;
	static int16_t x479 = -1;
	int8_t x480 = INT8_MAX;
	volatile int32_t t108 = -2339728;

    t108 = (x477!=((x478|x479)+x480));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x481 = INT32_MAX;
	int16_t x482 = 5901;
	uint8_t x483 = 1U;
	volatile int8_t x484 = INT8_MIN;
	static int32_t t109 = -16;

    t109 = (x481!=((x482|x483)+x484));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x486 = 28417;
	static uint64_t x487 = 1029566LLU;
	volatile int32_t t110 = -540588;

    t110 = (x485!=((x486|x487)+x488));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x490 = -1587132720581801916LL;
	uint32_t x491 = 332159755U;
	static int8_t x492 = -44;
	static volatile int32_t t111 = 14;

    t111 = (x489!=((x490|x491)+x492));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x493 = -2756;
	int32_t x495 = INT32_MIN;
	volatile int64_t x496 = -1LL;
	volatile int32_t t112 = 719014;

    t112 = (x493!=((x494|x495)+x496));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x497 = INT16_MIN;
	int16_t x498 = -8;
	int16_t x499 = -1;
	int16_t x500 = 2362;
	int32_t t113 = 124960775;

    t113 = (x497!=((x498|x499)+x500));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x506 = INT16_MIN;
	static volatile int64_t x507 = -1LL;
	int32_t x508 = -853874;
	int32_t t114 = -1194;

    t114 = (x505!=((x506|x507)+x508));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x509 = 9372459;
	uint8_t x510 = 0U;
	int32_t t115 = -3054;

    t115 = (x509!=((x510|x511)+x512));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x513 = 13U;
	volatile int8_t x514 = INT8_MIN;
	uint8_t x515 = 31U;
	int16_t x516 = 2238;
	static volatile int32_t t116 = 223517;

    t116 = (x513!=((x514|x515)+x516));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x517 = 60033LLU;
	uint8_t x518 = 23U;
	static volatile int16_t x519 = INT16_MAX;
	int32_t x520 = 0;
	volatile int32_t t117 = 15656778;

    t117 = (x517!=((x518|x519)+x520));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x521 = 6265U;
	uint32_t x522 = UINT32_MAX;
	int32_t t118 = -7777;

    t118 = (x521!=((x522|x523)+x524));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x525 = 6U;
	uint16_t x528 = 649U;
	static volatile int32_t t119 = 1361352;

    t119 = (x525!=((x526|x527)+x528));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint64_t x529 = UINT64_MAX;
	static int32_t x531 = INT32_MIN;
	volatile int32_t x532 = INT32_MAX;
	volatile int32_t t120 = 95446;

    t120 = (x529!=((x530|x531)+x532));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x533 = INT64_MAX;
	volatile int16_t x534 = -1;
	static uint32_t x536 = UINT32_MAX;
	volatile int32_t t121 = -1586;

    t121 = (x533!=((x534|x535)+x536));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x537 = UINT64_MAX;
	static uint16_t x538 = UINT16_MAX;
	volatile int16_t x539 = -868;
	static int16_t x540 = -1;
	int32_t t122 = 3;

    t122 = (x537!=((x538|x539)+x540));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x541 = 45;
	int8_t x543 = INT8_MIN;
	int64_t x544 = INT64_MAX;

    t123 = (x541!=((x542|x543)+x544));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x545 = 0U;
	int8_t x546 = INT8_MIN;
	volatile int32_t x547 = 1722251;
	int16_t x548 = 2;
	int32_t t124 = 286336;

    t124 = (x545!=((x546|x547)+x548));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x549 = INT32_MAX;
	int16_t x551 = -2;
	static int32_t x552 = INT32_MAX;
	int32_t t125 = 12065584;

    t125 = (x549!=((x550|x551)+x552));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x553 = INT32_MIN;
	int16_t x554 = 1;
	int16_t x555 = -1;
	uint16_t x556 = 6378U;
	static volatile int32_t t126 = 596627;

    t126 = (x553!=((x554|x555)+x556));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x557 = 1U;
	static int64_t x560 = -1LL;
	volatile int32_t t127 = 0;

    t127 = (x557!=((x558|x559)+x560));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x561 = 24;
	volatile int64_t x562 = -128359152640394779LL;
	int16_t x563 = -1;
	static int16_t x564 = -1;
	volatile int32_t t128 = -7;

    t128 = (x561!=((x562|x563)+x564));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x565 = INT16_MIN;
	int16_t x566 = INT16_MAX;
	volatile int64_t x567 = -13283061299484643LL;
	int32_t t129 = -11616;

    t129 = (x565!=((x566|x567)+x568));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x569 = 48U;
	static uint8_t x570 = 16U;
	int64_t x572 = 13LL;
	volatile int32_t t130 = 1;

    t130 = (x569!=((x570|x571)+x572));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x573 = -1LL;
	int16_t x574 = INT16_MAX;
	uint32_t x575 = UINT32_MAX;
	int8_t x576 = 6;
	volatile int32_t t131 = 10797;

    t131 = (x573!=((x574|x575)+x576));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x577 = 257949U;
	static int64_t x579 = -1LL;
	volatile int32_t x580 = INT32_MIN;
	int32_t t132 = -5905861;

    t132 = (x577!=((x578|x579)+x580));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x581 = INT8_MAX;
	static int64_t x583 = -1LL;
	int8_t x584 = -3;
	volatile int32_t t133 = 1;

    t133 = (x581!=((x582|x583)+x584));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x586 = UINT64_MAX;
	uint32_t x588 = 26994549U;
	static volatile int32_t t134 = 255764053;

    t134 = (x585!=((x586|x587)+x588));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x590 = 453LL;
	int8_t x591 = -6;
	volatile int32_t x592 = INT32_MIN;
	int32_t t135 = 32883185;

    t135 = (x589!=((x590|x591)+x592));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x597 = -3852LL;
	int64_t x598 = INT64_MIN;
	uint32_t x599 = 5U;
	uint16_t x600 = 1766U;
	volatile int32_t t136 = 14;

    t136 = (x597!=((x598|x599)+x600));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x602 = -1LL;
	int64_t x603 = 366505434734LL;
	volatile int32_t t137 = 3351;

    t137 = (x601!=((x602|x603)+x604));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x606 = INT64_MIN;
	volatile int16_t x607 = INT16_MIN;
	int32_t x608 = INT32_MIN;

    t138 = (x605!=((x606|x607)+x608));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x614 = UINT64_MAX;
	int16_t x615 = -4917;
	uint16_t x616 = UINT16_MAX;

    t139 = (x613!=((x614|x615)+x616));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x621 = INT16_MAX;
	int8_t x622 = INT8_MAX;
	uint64_t x623 = 33739932893LLU;
	int16_t x624 = -1;

    t140 = (x621!=((x622|x623)+x624));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x625 = INT8_MAX;
	volatile int8_t x627 = -1;
	static uint64_t x628 = 354958609LLU;
	int32_t t141 = -49627;

    t141 = (x625!=((x626|x627)+x628));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x629 = UINT64_MAX;
	int64_t x630 = INT64_MIN;
	uint32_t x631 = 7260755U;
	int16_t x632 = INT16_MIN;
	volatile int32_t t142 = 4742920;

    t142 = (x629!=((x630|x631)+x632));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x633 = -1;
	uint8_t x634 = 106U;
	static uint32_t x635 = UINT32_MAX;
	int16_t x636 = -228;
	int32_t t143 = -32;

    t143 = (x633!=((x634|x635)+x636));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x637 = -1;
	int64_t x638 = -3712291LL;
	int64_t x640 = -2602922916LL;
	int32_t t144 = -1341;

    t144 = (x637!=((x638|x639)+x640));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x641 = INT32_MIN;
	int64_t x642 = INT64_MIN;
	uint8_t x643 = UINT8_MAX;
	static volatile uint32_t x644 = UINT32_MAX;
	volatile int32_t t145 = 61784;

    t145 = (x641!=((x642|x643)+x644));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x646 = UINT8_MAX;
	int32_t x647 = -1226093;
	uint16_t x648 = 8U;
	volatile int32_t t146 = -15;

    t146 = (x645!=((x646|x647)+x648));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x649 = INT8_MIN;
	uint64_t x650 = 43711093864439LLU;
	volatile uint8_t x652 = 90U;
	volatile int32_t t147 = -56991;

    t147 = (x649!=((x650|x651)+x652));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x653 = -65305;
	int64_t x654 = -1LL;
	int16_t x655 = INT16_MIN;
	int16_t x656 = INT16_MIN;
	volatile int32_t t148 = 41;

    t148 = (x653!=((x654|x655)+x656));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x657 = -20;
	int8_t x658 = INT8_MAX;
	static uint32_t x659 = 336U;
	volatile int8_t x660 = INT8_MAX;

    t149 = (x657!=((x658|x659)+x660));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x663 = 6U;
	static volatile int8_t x664 = INT8_MIN;
	volatile int32_t t150 = -9;

    t150 = (x661!=((x662|x663)+x664));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x665 = INT64_MIN;
	uint32_t x666 = 525643U;
	uint64_t x667 = UINT64_MAX;
	int8_t x668 = INT8_MAX;
	volatile int32_t t151 = -974;

    t151 = (x665!=((x666|x667)+x668));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x670 = 2U;
	static volatile int32_t x671 = INT32_MIN;
	volatile uint8_t x672 = 19U;
	volatile int32_t t152 = -104752;

    t152 = (x669!=((x670|x671)+x672));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x673 = INT32_MIN;
	int16_t x674 = -1;
	uint8_t x675 = UINT8_MAX;
	int32_t t153 = 116;

    t153 = (x673!=((x674|x675)+x676));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x677 = INT32_MIN;
	static volatile int64_t x678 = INT64_MIN;
	volatile uint64_t x679 = 433LLU;
	static int16_t x680 = -17;
	static volatile int32_t t154 = -61422;

    t154 = (x677!=((x678|x679)+x680));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x681 = UINT64_MAX;
	volatile int64_t x684 = INT64_MIN;

    t155 = (x681!=((x682|x683)+x684));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x685 = 13;
	uint32_t x686 = 1731684U;
	int32_t x688 = INT32_MIN;
	static volatile int32_t t156 = 7;

    t156 = (x685!=((x686|x687)+x688));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x689 = UINT32_MAX;
	int8_t x692 = INT8_MIN;
	static volatile int32_t t157 = -201587633;

    t157 = (x689!=((x690|x691)+x692));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x693 = -1;
	int64_t x694 = 5LL;
	volatile int16_t x695 = INT16_MIN;
	int32_t t158 = -868;

    t158 = (x693!=((x694|x695)+x696));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x698 = -10641870570551674LL;
	uint16_t x699 = UINT16_MAX;
	static volatile uint8_t x700 = 0U;
	static volatile int32_t t159 = 86;

    t159 = (x697!=((x698|x699)+x700));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x701 = 2U;
	volatile uint64_t x702 = UINT64_MAX;
	static volatile int16_t x703 = INT16_MAX;
	int32_t x704 = INT32_MIN;
	int32_t t160 = 4;

    t160 = (x701!=((x702|x703)+x704));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x705 = 3053883850116050906LL;
	static volatile int8_t x706 = INT8_MAX;
	int8_t x707 = INT8_MAX;
	volatile int8_t x708 = INT8_MAX;

    t161 = (x705!=((x706|x707)+x708));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x713 = 2050279938938716LL;
	int8_t x714 = INT8_MIN;
	static int64_t x715 = 820LL;
	uint64_t x716 = 798227291LLU;

    t162 = (x713!=((x714|x715)+x716));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x717 = -1;
	int16_t x718 = INT16_MIN;
	int16_t x719 = 296;
	uint8_t x720 = UINT8_MAX;

    t163 = (x717!=((x718|x719)+x720));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x721 = INT8_MAX;
	uint8_t x722 = 49U;
	uint8_t x723 = UINT8_MAX;
	int16_t x724 = INT16_MAX;
	static int32_t t164 = 1;

    t164 = (x721!=((x722|x723)+x724));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x727 = INT32_MIN;
	uint8_t x728 = UINT8_MAX;
	static volatile int32_t t165 = 25158;

    t165 = (x725!=((x726|x727)+x728));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint64_t x729 = 21LLU;
	uint64_t x731 = UINT64_MAX;
	static uint32_t x732 = UINT32_MAX;
	static volatile int32_t t166 = 54552;

    t166 = (x729!=((x730|x731)+x732));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x733 = 1393444LLU;
	uint64_t x735 = 126856027781LLU;

    t167 = (x733!=((x734|x735)+x736));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x737 = 944U;
	uint32_t x738 = 951941U;
	int32_t x739 = -1;
	int64_t x740 = INT64_MIN;

    t168 = (x737!=((x738|x739)+x740));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x741 = -30LL;
	int32_t x742 = 0;
	uint16_t x743 = UINT16_MAX;

    t169 = (x741!=((x742|x743)+x744));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x745 = 105898U;
	volatile int64_t x746 = -1LL;
	uint64_t x747 = UINT64_MAX;
	uint16_t x748 = UINT16_MAX;
	int32_t t170 = 32241153;

    t170 = (x745!=((x746|x747)+x748));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x750 = 1;
	int32_t x752 = -189491937;
	int32_t t171 = -14054;

    t171 = (x749!=((x750|x751)+x752));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x753 = 13353U;
	int16_t x754 = INT16_MIN;
	static uint32_t x755 = UINT32_MAX;
	int32_t x756 = 5817087;
	int32_t t172 = 37767;

    t172 = (x753!=((x754|x755)+x756));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x759 = INT8_MIN;
	static volatile uint8_t x760 = 2U;

    t173 = (x757!=((x758|x759)+x760));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x761 = -1LL;
	volatile uint64_t x763 = 248197820255LLU;
	static uint8_t x764 = UINT8_MAX;
	volatile int32_t t174 = 2013876;

    t174 = (x761!=((x762|x763)+x764));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x765 = -1LL;
	int64_t x766 = INT64_MIN;
	uint32_t x767 = 3212132U;
	int32_t x768 = INT32_MAX;
	volatile int32_t t175 = 179452301;

    t175 = (x765!=((x766|x767)+x768));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x769 = -45;
	volatile int16_t x771 = 846;
	int32_t x772 = INT32_MIN;
	volatile int32_t t176 = -104989503;

    t176 = (x769!=((x770|x771)+x772));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int8_t x773 = 1;
	int32_t x774 = INT32_MAX;
	volatile int64_t x775 = 616230LL;
	uint64_t x776 = UINT64_MAX;
	static volatile int32_t t177 = 3451404;

    t177 = (x773!=((x774|x775)+x776));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x777 = 26625658732LLU;
	volatile uint8_t x778 = 8U;
	uint32_t x779 = 107951123U;
	static int16_t x780 = 1;
	volatile int32_t t178 = -15182260;

    t178 = (x777!=((x778|x779)+x780));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x782 = 78U;
	int16_t x783 = -6;
	int64_t x784 = 2962724LL;
	int32_t t179 = 15313;

    t179 = (x781!=((x782|x783)+x784));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x785 = UINT16_MAX;
	int32_t x788 = -1;
	static volatile int32_t t180 = 82667;

    t180 = (x785!=((x786|x787)+x788));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x789 = -1LL;
	volatile uint8_t x790 = UINT8_MAX;
	int16_t x791 = INT16_MIN;
	static volatile uint64_t x792 = 11LLU;
	volatile int32_t t181 = -680629589;

    t181 = (x789!=((x790|x791)+x792));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x793 = 1901U;
	static int16_t x796 = INT16_MIN;
	volatile int32_t t182 = -767;

    t182 = (x793!=((x794|x795)+x796));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x798 = INT32_MIN;
	static int16_t x799 = 13;
	int64_t x800 = 29394027922852800LL;
	volatile int32_t t183 = 2030;

    t183 = (x797!=((x798|x799)+x800));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x801 = 20558U;
	uint8_t x802 = 1U;
	volatile int8_t x804 = 2;
	int32_t t184 = 5445645;

    t184 = (x801!=((x802|x803)+x804));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint32_t x805 = 227311324U;
	static int64_t x806 = -1LL;
	uint8_t x808 = 1U;
	volatile int32_t t185 = 749048;

    t185 = (x805!=((x806|x807)+x808));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x814 = -1;
	uint64_t x815 = 3779488262491LLU;
	int8_t x816 = -3;
	volatile int32_t t186 = 0;

    t186 = (x813!=((x814|x815)+x816));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x817 = INT64_MIN;
	volatile int8_t x818 = INT8_MAX;

    t187 = (x817!=((x818|x819)+x820));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x821 = 2830311756289081LLU;
	volatile int64_t x824 = INT64_MAX;
	int32_t t188 = -1;

    t188 = (x821!=((x822|x823)+x824));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x826 = INT64_MIN;
	static uint32_t x827 = 10U;
	static volatile int32_t x828 = INT32_MAX;
	volatile int32_t t189 = 929033;

    t189 = (x825!=((x826|x827)+x828));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x829 = -8297795884599LL;
	static int8_t x830 = -2;
	volatile int64_t x831 = INT64_MIN;
	static int8_t x832 = INT8_MIN;
	volatile int32_t t190 = -2903713;

    t190 = (x829!=((x830|x831)+x832));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x833 = 253LLU;
	static uint32_t x835 = 756U;
	static int16_t x836 = 706;
	volatile int32_t t191 = -107299064;

    t191 = (x833!=((x834|x835)+x836));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x837 = INT8_MIN;
	volatile int8_t x838 = -4;
	int8_t x839 = INT8_MIN;
	int8_t x840 = -11;
	int32_t t192 = -3047;

    t192 = (x837!=((x838|x839)+x840));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x845 = INT64_MAX;
	uint16_t x846 = UINT16_MAX;
	uint16_t x847 = 642U;
	uint32_t x848 = 158248U;

    t193 = (x845!=((x846|x847)+x848));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x849 = INT32_MAX;
	static int64_t x851 = 42485803507197LL;
	uint16_t x852 = UINT16_MAX;

    t194 = (x849!=((x850|x851)+x852));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x853 = 475062U;
	static volatile int8_t x854 = INT8_MIN;
	int64_t x855 = INT64_MIN;
	uint32_t x856 = 108272315U;
	volatile int32_t t195 = 20;

    t195 = (x853!=((x854|x855)+x856));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x857 = -753;
	uint32_t x858 = UINT32_MAX;
	int32_t x859 = -1;
	volatile int32_t t196 = -1;

    t196 = (x857!=((x858|x859)+x860));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x861 = -1;
	int64_t x862 = -29621LL;
	int16_t x863 = 2073;
	volatile int8_t x864 = 5;
	int32_t t197 = -3801;

    t197 = (x861!=((x862|x863)+x864));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x865 = INT8_MAX;
	uint16_t x866 = 9645U;
	volatile int32_t t198 = 2;

    t198 = (x865!=((x866|x867)+x868));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x869 = 73U;
	int32_t x870 = 0;
	uint32_t x872 = 7999U;
	int32_t t199 = -1;

    t199 = (x869!=((x870|x871)+x872));

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

