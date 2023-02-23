
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

int32_t x2 = INT32_MIN;
static int8_t x4 = -32;
uint8_t x12 = 85U;
int8_t x15 = INT8_MAX;
int16_t x17 = -1;
int64_t x18 = INT64_MIN;
int16_t x19 = -31;
int32_t x29 = 32244;
volatile int8_t x30 = -56;
volatile uint64_t x32 = 13LLU;
static uint64_t t7 = 771LLU;
uint32_t t8 = 29846397U;
static int8_t x37 = 0;
int64_t x40 = -1LL;
int64_t x46 = -195742975732LL;
int8_t x50 = INT8_MIN;
uint8_t x68 = UINT8_MAX;
static int32_t x70 = INT32_MAX;
static volatile int32_t t17 = -21517809;
int16_t x73 = 238;
int32_t x81 = 453095;
static int16_t x91 = INT16_MAX;
uint64_t x92 = 223567740905788967LLU;
int32_t x93 = INT32_MIN;
volatile uint8_t x96 = UINT8_MAX;
uint16_t x102 = 1325U;
static uint32_t x103 = 968U;
int8_t x104 = -1;
volatile uint32_t t24 = 19558U;
int8_t x121 = -1;
uint32_t t29 = 5U;
int8_t x135 = 7;
int64_t x138 = -816036548121682765LL;
static int32_t x145 = 17686474;
uint32_t x146 = UINT32_MAX;
static int8_t x149 = INT8_MAX;
uint8_t x152 = UINT8_MAX;
int8_t x155 = INT8_MIN;
volatile int16_t x156 = -15;
volatile uint32_t x157 = 769U;
uint8_t x160 = 17U;
int64_t x161 = INT64_MIN;
int8_t x163 = INT8_MIN;
int32_t x165 = INT32_MIN;
volatile uint32_t x166 = 0U;
int16_t x169 = -2119;
uint64_t x171 = UINT64_MAX;
int16_t x176 = -1;
volatile int32_t t41 = INT32_MIN;
int16_t x185 = -1;
volatile int32_t x195 = INT32_MAX;
int32_t x202 = INT32_MAX;
volatile uint8_t x204 = 106U;
int64_t t47 = -19022133054LL;
int32_t x205 = 966463950;
uint32_t x207 = 11433U;
static int16_t x211 = INT16_MIN;
static uint64_t x212 = 2632753602632345539LLU;
static volatile uint8_t x219 = 1U;
int32_t x221 = INT32_MIN;
int32_t x223 = INT32_MIN;
int64_t x224 = -32639180LL;
int16_t x229 = INT16_MAX;
volatile int32_t x230 = -1;
int8_t x249 = INT8_MIN;
static int16_t x250 = INT16_MIN;
volatile uint64_t t58 = 106874346582762789LLU;
volatile int64_t t59 = -99438LL;
volatile int16_t x258 = INT16_MAX;
static int16_t x266 = -1;
static uint64_t t62 = 2119818354LLU;
volatile int32_t x274 = -1;
int16_t x288 = INT16_MIN;
int32_t t67 = -5195177;
uint16_t x294 = 16036U;
volatile uint32_t t69 = 6161491U;
uint64_t x298 = UINT64_MAX;
uint32_t x305 = 86434043U;
uint8_t x306 = 0U;
int64_t x309 = -1LL;
uint16_t x314 = UINT16_MAX;
static int16_t x315 = -1;
static volatile int64_t x316 = -19LL;
volatile int16_t x341 = -1;
uint32_t x344 = 35U;
uint64_t x349 = UINT64_MAX;
volatile uint16_t x356 = 3U;
uint64_t t83 = 1218442LLU;
volatile uint64_t t84 = 30301756LLU;
volatile int32_t x372 = -1;
static volatile int8_t x376 = 5;
int32_t x377 = INT32_MAX;
int16_t x378 = 1606;
uint32_t x389 = 21U;
int16_t x390 = -1;
int32_t x392 = -3892704;
uint64_t t93 = 124LLU;
volatile uint8_t x407 = UINT8_MAX;
static int8_t x409 = INT8_MIN;
int8_t x410 = -1;
volatile int32_t t95 = 2507476;
int8_t x421 = INT8_MIN;
int16_t x427 = 1;
volatile int32_t t98 = -756356;
uint32_t t99 = 26U;
int32_t x444 = 65786;
static int64_t x449 = INT64_MIN;
static volatile int8_t x453 = -1;
int8_t x455 = INT8_MAX;
uint32_t t105 = 0U;
uint64_t t106 = 150000012474940596LLU;
volatile uint32_t t107 = 4727384U;
static int16_t x465 = -1;
int8_t x470 = -1;
uint64_t x473 = 79476425LLU;
volatile uint16_t x474 = UINT16_MAX;
static int64_t x481 = INT64_MIN;
static volatile uint64_t x482 = 50008167684584LLU;
int32_t x489 = -1;
int64_t x496 = -18696LL;
volatile int64_t x504 = -571143238188312184LL;
static uint8_t x509 = 39U;
uint16_t x512 = 29201U;
volatile int64_t x518 = INT64_MIN;
int16_t x536 = INT16_MIN;
int32_t x537 = INT32_MAX;
static int32_t x539 = INT32_MAX;
static volatile int16_t x540 = INT16_MAX;
static int64_t x542 = -1LL;
int64_t x544 = 1505LL;
int8_t x545 = INT8_MIN;
int8_t x547 = 1;
volatile int8_t x548 = 37;
volatile int32_t t129 = -22;
uint64_t x553 = 10968056943012465LLU;
int64_t x570 = INT64_MAX;
volatile int64_t t134 = 316336706LL;
static int8_t x573 = INT8_MAX;
int8_t x574 = -1;
int64_t x575 = INT64_MIN;
int8_t x582 = INT8_MIN;
int16_t x586 = INT16_MIN;
static volatile int16_t x587 = 1;
int64_t x589 = -5LL;
int16_t x595 = -1;
static uint64_t x602 = 39334040900859LLU;
uint64_t t141 = 378LLU;
static uint32_t x608 = 50507812U;
volatile int64_t t142 = 0LL;
static volatile int64_t x612 = INT64_MAX;
uint64_t t143 = 133640510941998LLU;
int32_t x616 = INT32_MIN;
static volatile int64_t t144 = -13LL;
int16_t x619 = 9;
int32_t t146 = 276412;
static int32_t x631 = -1;
static int8_t x639 = -1;
static int32_t x643 = INT32_MIN;
volatile int16_t x645 = 8076;
int16_t x648 = -1;
int64_t t151 = 33504719908336668LL;
int32_t x650 = INT32_MIN;
volatile int8_t x657 = INT8_MIN;
volatile int32_t x658 = -1;
static uint8_t x660 = UINT8_MAX;
int8_t x662 = INT8_MIN;
int16_t x668 = INT16_MIN;
int16_t x672 = 5;
static uint32_t t157 = 304526U;
int32_t x674 = 57;
int64_t x675 = -1LL;
uint8_t x676 = 8U;
int8_t x688 = -1;
volatile int64_t t161 = -12LL;
uint16_t x694 = UINT16_MAX;
volatile int32_t t163 = 1;
int64_t x697 = INT64_MIN;
static volatile int64_t x702 = INT64_MIN;
int64_t x704 = 0LL;
int32_t x708 = 82;
int32_t x710 = INT32_MIN;
int64_t x715 = -975LL;
int64_t x718 = INT64_MAX;
static int16_t x719 = INT16_MIN;
static volatile int64_t t169 = 13272LL;
static int16_t x721 = 391;
static volatile uint32_t x725 = UINT32_MAX;
int64_t x728 = INT64_MIN;
uint64_t x732 = 508117711LLU;
int8_t x734 = -7;
int16_t x735 = INT16_MAX;
static int32_t t173 = 1;
uint64_t x737 = 6LLU;
static uint8_t x742 = UINT8_MAX;
int64_t t177 = 27379837702889LL;
static uint16_t x756 = 1615U;
volatile int16_t x770 = INT16_MIN;
int32_t t181 = -7853365;
static int32_t x774 = -75;
static uint64_t x776 = 4263790819209442937LLU;
uint16_t x781 = UINT16_MAX;
uint64_t t184 = 59530917058LLU;
int32_t x789 = INT32_MIN;
int32_t t186 = INT32_MIN;
uint16_t x793 = 0U;
volatile uint64_t t187 = 175957153197978LLU;
volatile uint64_t t188 = 3495424963938147LLU;
uint64_t t189 = 175148647410523LLU;
volatile uint32_t x824 = UINT32_MAX;
static int32_t x826 = 7586;
uint32_t x827 = 25818299U;
static volatile uint32_t t193 = 2085112U;
int64_t x829 = INT64_MIN;
int8_t x832 = INT8_MIN;
volatile int64_t x840 = -899833949618LL;
int16_t x841 = 2998;
uint8_t x843 = 115U;


void f0(void) {
    	int16_t x1 = -1706;
	uint16_t x3 = 6U;
	static volatile int32_t t0 = 121491;

    t0 = (x1&((x2|x3)-x4));

    if (t0 != -2147483642) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int16_t x6 = -1;
	int16_t x7 = INT16_MIN;
	int32_t x8 = -1288789;
	static int32_t t1 = -40473;

    t1 = (x5&((x6|x7)-x8));

    if (t1 != 1288704) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint8_t x9 = 19U;
	int16_t x10 = INT16_MIN;
	int8_t x11 = 0;
	volatile int32_t t2 = 1;

    t2 = (x9&((x10|x11)-x12));

    if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	int32_t x14 = 64894108;
	static volatile uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 867540584086049LLU;

    t3 = (x13&((x14|x15)-x16));

    if (t3 != 64894208LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x20 = INT16_MIN;
	volatile int64_t t4 = 2131991043528LL;

    t4 = (x17&((x18|x19)-x20));

    if (t4 != 32737LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -304;
	uint16_t x22 = 3U;
	uint32_t x23 = 326645207U;
	int32_t x24 = 732222463;
	uint32_t t5 = 180U;

    t5 = (x21&((x22|x23)-x24));

    if (t5 != 3889389776U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = INT8_MIN;
	int16_t x26 = INT16_MIN;
	int8_t x27 = -5;
	uint16_t x28 = 1U;
	int32_t t6 = 1791980;

    t6 = (x25&((x26|x27)-x28));

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x31 = 30326U;

    t7 = (x29&((x30|x31)-x32));

    if (t7 != 32240LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	uint32_t x34 = UINT32_MAX;
	int32_t x35 = -1;
	volatile uint8_t x36 = 25U;

    t8 = (x33&((x34|x35)-x36));

    if (t8 != 65510U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x38 = 0U;
	static uint32_t x39 = 14230U;
	volatile int64_t t9 = 6284031859146LL;

    t9 = (x37&((x38|x39)-x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = INT64_MIN;
	uint64_t x42 = 967537582760472LLU;
	static int8_t x43 = 14;
	uint8_t x44 = UINT8_MAX;
	uint64_t t10 = 93745302532738LLU;

    t10 = (x41&((x42|x43)-x44));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MAX;
	uint8_t x47 = UINT8_MAX;
	static volatile int32_t x48 = INT32_MIN;
	int64_t t11 = -9LL;

    t11 = (x45&((x46|x47)-x48));

    if (t11 != 127LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x49 = -1;
	int64_t x51 = INT64_MIN;
	volatile int32_t x52 = INT32_MAX;
	int64_t t12 = -1856800LL;

    t12 = (x49&((x50|x51)-x52));

    if (t12 != -2147483775LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	static uint8_t x54 = UINT8_MAX;
	int8_t x55 = INT8_MAX;
	static uint64_t x56 = 25886624704LLU;
	volatile uint64_t t13 = 1934521877144LLU;

    t13 = (x53&((x54|x55)-x56));

    if (t13 != 18446744045792264192LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x57 = 11U;
	static uint32_t x58 = 2U;
	int32_t x59 = INT32_MAX;
	static volatile int8_t x60 = INT8_MIN;
	volatile uint32_t t14 = 8131U;

    t14 = (x57&((x58|x59)-x60));

    if (t14 != 11U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x61 = 8190450LLU;
	uint8_t x62 = UINT8_MAX;
	int16_t x63 = INT16_MAX;
	int8_t x64 = -1;
	uint64_t t15 = 217937791999178LLU;

    t15 = (x61&((x62|x63)-x64));

    if (t15 != 32768LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = 2;
	volatile uint16_t x66 = UINT16_MAX;
	uint64_t x67 = 6083519855409793LLU;
	volatile uint64_t t16 = 8174213310412369704LLU;

    t16 = (x65&((x66|x67)-x68));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 26910U;
	static int8_t x71 = INT8_MIN;
	volatile int8_t x72 = 0;

    t17 = (x69&((x70|x71)-x72));

    if (t17 != 26910) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = 41;
	int32_t x75 = INT32_MIN;
	int16_t x76 = -15;
	int32_t t18 = -13541149;

    t18 = (x73&((x74|x75)-x76));

    if (t18 != 40) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MAX;
	int32_t x78 = INT32_MAX;
	static int16_t x79 = INT16_MIN;
	volatile int16_t x80 = INT16_MAX;
	int32_t t19 = -1525047;

    t19 = (x77&((x78|x79)-x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = -1;
	int32_t x83 = -1;
	int8_t x84 = 49;
	static int32_t t20 = -55948;

    t20 = (x81&((x82|x83)-x84));

    if (t20 != 453062) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = -1;
	volatile uint32_t x90 = 4508U;
	volatile uint64_t t21 = 920465848307LLU;

    t21 = (x89&((x90|x91)-x92));

    if (t21 != 18223176332803795416LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x94 = INT8_MIN;
	static uint8_t x95 = 1U;
	volatile int32_t t22 = INT32_MIN;

    t22 = (x93&((x94|x95)-x96));

    if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = INT64_MIN;
	int32_t x98 = 248602396;
	uint64_t x99 = 86LLU;
	int16_t x100 = -3148;
	uint64_t t23 = 28301036592308631LLU;

    t23 = (x97&((x98|x99)-x100));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x101 = INT32_MIN;

    t24 = (x101&((x102|x103)-x104));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x113 = UINT8_MAX;
	static int16_t x114 = INT16_MIN;
	static int64_t x115 = -5899615LL;
	volatile int16_t x116 = 0;
	static int64_t t25 = -297255585132804006LL;

    t25 = (x113&((x114|x115)-x116));

    if (t25 != 161LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x117 = INT64_MIN;
	uint16_t x118 = 180U;
	int8_t x119 = -11;
	static int32_t x120 = -1;
	int64_t t26 = INT64_MIN;

    t26 = (x117&((x118|x119)-x120));

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x122 = -4295730378090LL;
	static int64_t x123 = INT64_MIN;
	int8_t x124 = -1;
	volatile int64_t t27 = 98011LL;

    t27 = (x121&((x122|x123)-x124));

    if (t27 != -4295730378089LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int32_t x125 = -7;
	static uint32_t x126 = 0U;
	uint16_t x127 = 78U;
	volatile int8_t x128 = INT8_MAX;
	uint32_t t28 = 1538647348U;

    t28 = (x125&((x126|x127)-x128));

    if (t28 != 4294967241U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x129 = UINT8_MAX;
	int32_t x130 = 643;
	uint32_t x131 = 5753U;
	int32_t x132 = 2;

    t29 = (x129&((x130|x131)-x132));

    if (t29 != 249U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = -1;
	static uint64_t x134 = 8521705830LLU;
	static uint32_t x136 = UINT32_MAX;
	uint64_t t30 = 40LLU;

    t30 = (x133&((x134|x135)-x136));

    if (t30 != 4226738536LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = -80;
	int8_t x139 = INT8_MAX;
	int16_t x140 = INT16_MAX;
	volatile int64_t t31 = 4342322238979189231LL;

    t31 = (x137&((x138|x139)-x140));

    if (t31 != -816036548121715456LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x141 = -6761;
	static int8_t x142 = -1;
	int32_t x143 = INT32_MIN;
	static int64_t x144 = INT64_MIN;
	int64_t t32 = -15LL;

    t32 = (x141&((x142|x143)-x144));

    if (t32 != 9223372036854769047LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x147 = UINT8_MAX;
	static int64_t x148 = -1LL;
	volatile int64_t t33 = -398248599705LL;

    t33 = (x145&((x146|x147)-x148));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x150 = -1LL;
	int32_t x151 = INT32_MAX;
	volatile int64_t t34 = -107580178901365LL;

    t34 = (x149&((x150|x151)-x152));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = -4;
	uint64_t x154 = 916958616380LLU;
	volatile uint64_t t35 = 405LLU;

    t35 = (x153&((x154|x155)-x156));

    if (t35 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x158 = INT8_MIN;
	int32_t x159 = INT32_MIN;
	static volatile uint32_t t36 = 6833639U;

    t36 = (x157&((x158|x159)-x160));

    if (t36 != 769U) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int16_t x162 = INT16_MAX;
	uint16_t x164 = 196U;
	volatile int64_t t37 = INT64_MIN;

    t37 = (x161&((x162|x163)-x164));

    if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x167 = 2U;
	static int16_t x168 = INT16_MAX;
	volatile uint32_t t38 = 5865U;

    t38 = (x165&((x166|x167)-x168));

    if (t38 != 2147483648U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x170 = INT32_MIN;
	int16_t x172 = INT16_MIN;
	uint64_t t39 = 13175LLU;

    t39 = (x169&((x170|x171)-x172));

    if (t39 != 30649LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x173 = -7306;
	uint32_t x174 = 909617558U;
	int16_t x175 = INT16_MIN;
	uint32_t t40 = 2U;

    t40 = (x173&((x174|x175)-x176));

    if (t40 != 4294942998U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x177 = INT32_MIN;
	uint16_t x178 = 1U;
	int16_t x179 = -1;
	static int8_t x180 = 9;

    t41 = (x177&((x178|x179)-x180));

    if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x181 = UINT16_MAX;
	uint32_t x182 = 4004655U;
	uint64_t x183 = 23827544473112606LLU;
	uint32_t x184 = 10978U;
	uint64_t t42 = 9121629739LLU;

    t42 = (x181&((x182|x183)-x184));

    if (t42 != 28765LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x186 = INT16_MIN;
	uint8_t x187 = UINT8_MAX;
	volatile int16_t x188 = -1;
	static volatile int32_t t43 = 96550;

    t43 = (x185&((x186|x187)-x188));

    if (t43 != -32512) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x189 = INT16_MIN;
	int64_t x190 = 14265910027LL;
	static uint8_t x191 = UINT8_MAX;
	int8_t x192 = INT8_MIN;
	int64_t t44 = -50LL;

    t44 = (x189&((x190|x191)-x192));

    if (t44 != 14265909248LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x193 = -8;
	uint16_t x194 = UINT16_MAX;
	volatile int64_t x196 = INT64_MAX;
	volatile int64_t t45 = 113679908286431LL;

    t45 = (x193&((x194|x195)-x196));

    if (t45 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x197 = INT16_MAX;
	int32_t x198 = -1;
	uint64_t x199 = 208741762LLU;
	int64_t x200 = INT64_MIN;
	static uint64_t t46 = 2LLU;

    t46 = (x197&((x198|x199)-x200));

    if (t46 != 32767LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x201 = -17889344653LL;
	int8_t x203 = -1;

    t47 = (x201&((x202|x203)-x204));

    if (t47 != -17889344751LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x206 = INT8_MIN;
	int16_t x208 = INT16_MIN;
	volatile uint32_t t48 = 5U;

    t48 = (x205&((x206|x207)-x208));

    if (t48 != 4488U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x209 = UINT32_MAX;
	int16_t x210 = -1;
	uint64_t t49 = 202301163LLU;

    t49 = (x209&((x210|x211)-x212));

    if (t49 != 502798396LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = -1;
	int8_t x214 = -1;
	int8_t x215 = -1;
	int32_t x216 = -3323;
	int32_t t50 = -27840;

    t50 = (x213&((x214|x215)-x216));

    if (t50 != 3322) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x217 = 21374U;
	static volatile int32_t x218 = -6339741;
	int64_t x220 = -2LL;
	volatile int64_t t51 = -4LL;

    t51 = (x217&((x218|x219)-x220));

    if (t51 != 17252LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x222 = -1;
	int64_t t52 = -56195925969841814LL;

    t52 = (x221&((x222|x223)-x224));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x225 = 1;
	int64_t x226 = -1LL;
	static uint64_t x227 = 95992LLU;
	int8_t x228 = -7;
	uint64_t t53 = 291028304872LLU;

    t53 = (x225&((x226|x227)-x228));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x231 = -1984LL;
	volatile uint16_t x232 = 7U;
	int64_t t54 = 1593965979983LL;

    t54 = (x229&((x230|x231)-x232));

    if (t54 != 32760LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x233 = INT16_MAX;
	volatile int64_t x234 = -1LL;
	int8_t x235 = INT8_MIN;
	int32_t x236 = -1;
	volatile int64_t t55 = -6058481878939LL;

    t55 = (x233&((x234|x235)-x236));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x241 = -1;
	int64_t x242 = 237162019LL;
	int64_t x243 = -961LL;
	int32_t x244 = -1;
	volatile int64_t t56 = -196113401LL;

    t56 = (x241&((x242|x243)-x244));

    if (t56 != -448LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x245 = INT16_MIN;
	volatile int8_t x246 = -48;
	int16_t x247 = -1;
	static int32_t x248 = -1;
	volatile int32_t t57 = -98;

    t57 = (x245&((x246|x247)-x248));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x251 = 2316174LLU;
	int16_t x252 = -1;

    t58 = (x249&((x250|x251)-x252));

    if (t58 != 18446744073709541248LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x253 = INT32_MIN;
	static int32_t x254 = -1;
	int64_t x255 = -32713595782LL;
	volatile int64_t x256 = 5LL;

    t59 = (x253&((x254|x255)-x256));

    if (t59 != -2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x257 = -1;
	int32_t x259 = 3;
	int8_t x260 = -1;
	volatile int32_t t60 = -12271;

    t60 = (x257&((x258|x259)-x260));

    if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x261 = 119;
	static uint16_t x262 = UINT16_MAX;
	uint32_t x263 = 2U;
	static int32_t x264 = -1;
	uint32_t t61 = 10064U;

    t61 = (x261&((x262|x263)-x264));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x265 = -1LL;
	int64_t x267 = -1LL;
	uint64_t x268 = UINT64_MAX;

    t62 = (x265&((x266|x267)-x268));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x269 = INT16_MAX;
	int8_t x270 = INT8_MIN;
	uint8_t x271 = UINT8_MAX;
	int8_t x272 = INT8_MIN;
	volatile int32_t t63 = 196;

    t63 = (x269&((x270|x271)-x272));

    if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x273 = INT32_MIN;
	volatile int32_t x275 = -1;
	int16_t x276 = INT16_MIN;
	static volatile int32_t t64 = 20326160;

    t64 = (x273&((x274|x275)-x276));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x277 = 973397464951357880LLU;
	int8_t x278 = -1;
	volatile int64_t x279 = -1LL;
	int8_t x280 = INT8_MIN;
	uint64_t t65 = 7622133352682033234LLU;

    t65 = (x277&((x278|x279)-x280));

    if (t65 != 56LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x281 = INT64_MIN;
	uint8_t x282 = 1U;
	volatile int64_t x283 = 2307203644LL;
	uint16_t x284 = UINT16_MAX;
	int64_t t66 = 29730907120LL;

    t66 = (x281&((x282|x283)-x284));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x285 = -1;
	int8_t x286 = INT8_MIN;
	volatile int8_t x287 = INT8_MAX;

    t67 = (x285&((x286|x287)-x288));

    if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x289 = UINT32_MAX;
	static int32_t x290 = INT32_MIN;
	uint16_t x291 = 6605U;
	volatile int32_t x292 = -114;
	uint32_t t68 = 9558395U;

    t68 = (x289&((x290|x291)-x292));

    if (t68 != 2147490367U) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x293 = UINT32_MAX;
	int8_t x295 = -4;
	uint8_t x296 = 14U;

    t69 = (x293&((x294|x295)-x296));

    if (t69 != 4294967278U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x297 = INT8_MIN;
	int16_t x299 = 4753;
	static int64_t x300 = -1LL;
	uint64_t t70 = 54887LLU;

    t70 = (x297&((x298|x299)-x300));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x307 = -165486;
	int8_t x308 = -1;
	volatile uint32_t t71 = 223677U;

    t71 = (x305&((x306|x307)-x308));

    if (t71 != 86270099U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x310 = INT32_MIN;
	int64_t x311 = INT64_MAX;
	volatile uint16_t x312 = 4018U;
	int64_t t72 = -59884450241498816LL;

    t72 = (x309&((x310|x311)-x312));

    if (t72 != -4019LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x313 = -42512672505581708LL;
	volatile int64_t t73 = -357LL;

    t73 = (x313&((x314|x315)-x316));

    if (t73 != 16LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x321 = INT8_MAX;
	int8_t x322 = INT8_MAX;
	int64_t x323 = -1086LL;
	uint64_t x324 = UINT64_MAX;
	static uint64_t t74 = 10981845134220LLU;

    t74 = (x321&((x322|x323)-x324));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x325 = -2;
	int8_t x326 = INT8_MAX;
	uint32_t x327 = 31U;
	uint32_t x328 = 2U;
	volatile uint32_t t75 = 8755U;

    t75 = (x325&((x326|x327)-x328));

    if (t75 != 124U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x329 = -1;
	uint64_t x330 = UINT64_MAX;
	static int16_t x331 = INT16_MIN;
	int64_t x332 = -1LL;
	volatile uint64_t t76 = 1547LLU;

    t76 = (x329&((x330|x331)-x332));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x333 = 440LL;
	static int8_t x334 = INT8_MIN;
	uint16_t x335 = 79U;
	static int16_t x336 = INT16_MAX;
	volatile int64_t t77 = 171304LL;

    t77 = (x333&((x334|x335)-x336));

    if (t77 != 400LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x337 = INT32_MIN;
	volatile uint8_t x338 = 3U;
	static int16_t x339 = INT16_MIN;
	int8_t x340 = -1;
	static volatile int32_t t78 = INT32_MIN;

    t78 = (x337&((x338|x339)-x340));

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x342 = UINT16_MAX;
	uint32_t x343 = UINT32_MAX;
	volatile uint32_t t79 = 809847665U;

    t79 = (x341&((x342|x343)-x344));

    if (t79 != 4294967260U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x345 = -1LL;
	int16_t x346 = -12;
	volatile int16_t x347 = -82;
	volatile uint8_t x348 = UINT8_MAX;
	int64_t t80 = -22657895289LL;

    t80 = (x345&((x346|x347)-x348));

    if (t80 != -257LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x350 = UINT8_MAX;
	int16_t x351 = INT16_MAX;
	uint8_t x352 = 58U;
	volatile uint64_t t81 = 19537320466743951LLU;

    t81 = (x349&((x350|x351)-x352));

    if (t81 != 32709LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x353 = -1;
	int8_t x354 = 38;
	volatile int64_t x355 = INT64_MIN;
	volatile int64_t t82 = -533LL;

    t82 = (x353&((x354|x355)-x356));

    if (t82 != -9223372036854775773LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x357 = UINT32_MAX;
	uint16_t x358 = 37U;
	uint64_t x359 = 10013275LLU;
	int16_t x360 = -1;

    t83 = (x357&((x358|x359)-x360));

    if (t83 != 10013312LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x361 = -1;
	static int8_t x362 = INT8_MIN;
	volatile uint64_t x363 = 14801705727110LLU;
	int8_t x364 = INT8_MAX;

    t84 = (x361&((x362|x363)-x364));

    if (t84 != 18446744073709551367LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x365 = -1;
	uint32_t x366 = 9950020U;
	uint8_t x367 = 1U;
	int8_t x368 = INT8_MAX;
	uint32_t t85 = 1907390451U;

    t85 = (x365&((x366|x367)-x368));

    if (t85 != 9949894U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x369 = 62LLU;
	uint64_t x370 = 13LLU;
	int8_t x371 = 50;
	static uint64_t t86 = 1899340LLU;

    t86 = (x369&((x370|x371)-x372));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x373 = INT32_MAX;
	int32_t x374 = -13220372;
	static int8_t x375 = INT8_MIN;
	static volatile int32_t t87 = -27311;

    t87 = (x373&((x374|x375)-x376));

    if (t87 != 2147483623) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x379 = -1;
	static volatile int8_t x380 = INT8_MIN;
	int32_t t88 = -41;

    t88 = (x377&((x378|x379)-x380));

    if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x381 = -1;
	static int64_t x382 = -1LL;
	volatile uint64_t x383 = 32618706937123LLU;
	static int16_t x384 = 138;
	static volatile uint64_t t89 = 7593119600384811LLU;

    t89 = (x381&((x382|x383)-x384));

    if (t89 != 18446744073709551477LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x385 = 62U;
	int8_t x386 = -7;
	int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	volatile int32_t t90 = 22238;

    t90 = (x385&((x386|x387)-x388));

    if (t90 != 56) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x391 = 1;
	static uint32_t t91 = 117U;

    t91 = (x389&((x390|x391)-x392));

    if (t91 != 21U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x393 = -234371060;
	int8_t x394 = -62;
	int32_t x395 = INT32_MIN;
	volatile int8_t x396 = 0;
	static volatile int32_t t92 = 207642;

    t92 = (x393&((x394|x395)-x396));

    if (t92 != -234371072) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x401 = 76098840U;
	volatile int16_t x402 = 0;
	int8_t x403 = 1;
	uint64_t x404 = UINT64_MAX;

    t93 = (x401&((x402|x403)-x404));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x405 = -306306;
	static int32_t x406 = 59912093;
	int64_t x408 = -1LL;
	int64_t t94 = 60056015LL;

    t94 = (x405&((x406|x407)-x408));

    if (t94 != 59904000LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x411 = UINT16_MAX;
	int16_t x412 = -1;

    t95 = (x409&((x410|x411)-x412));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x417 = -1;
	uint8_t x418 = 58U;
	static int16_t x419 = INT16_MIN;
	int8_t x420 = -44;
	volatile int32_t t96 = -56060086;

    t96 = (x417&((x418|x419)-x420));

    if (t96 != -32666) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x422 = 224174443U;
	int8_t x423 = -10;
	int32_t x424 = 89261;
	uint32_t t97 = 983454571U;

    t97 = (x421&((x422|x423)-x424));

    if (t97 != 4294877952U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x425 = INT8_MAX;
	static uint16_t x426 = 1728U;
	static uint16_t x428 = UINT16_MAX;

    t98 = (x425&((x426|x427)-x428));

    if (t98 != 66) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x429 = UINT16_MAX;
	uint32_t x430 = UINT32_MAX;
	static int16_t x431 = INT16_MAX;
	int32_t x432 = -1;

    t99 = (x429&((x430|x431)-x432));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x433 = UINT64_MAX;
	uint64_t x434 = UINT64_MAX;
	uint8_t x435 = 124U;
	int64_t x436 = INT64_MAX;
	volatile uint64_t t100 = 2720811104LLU;

    t100 = (x433&((x434|x435)-x436));

    if (t100 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x437 = 100817LLU;
	int32_t x438 = INT32_MIN;
	int32_t x439 = INT32_MIN;
	int16_t x440 = -474;
	volatile uint64_t t101 = 0LLU;

    t101 = (x437&((x438|x439)-x440));

    if (t101 != 464LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x441 = 13068;
	static uint16_t x442 = 1U;
	int8_t x443 = INT8_MIN;
	int32_t t102 = -83;

    t102 = (x441&((x442|x443)-x444));

    if (t102 != 12804) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x445 = UINT32_MAX;
	uint16_t x446 = 4U;
	volatile uint32_t x447 = 1U;
	uint16_t x448 = 8U;
	uint32_t t103 = 407U;

    t103 = (x445&((x446|x447)-x448));

    if (t103 != 4294967293U) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x450 = -1;
	int8_t x451 = INT8_MIN;
	int16_t x452 = -320;
	int64_t t104 = 989185375LL;

    t104 = (x449&((x450|x451)-x452));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x454 = 121;
	uint32_t x456 = UINT32_MAX;

    t105 = (x453&((x454|x455)-x456));

    if (t105 != 128U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x457 = INT32_MIN;
	uint16_t x458 = 2U;
	int16_t x459 = -1;
	static volatile uint64_t x460 = UINT64_MAX;

    t106 = (x457&((x458|x459)-x460));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x461 = -1;
	uint8_t x462 = 1U;
	uint32_t x463 = UINT32_MAX;
	int16_t x464 = -1;

    t107 = (x461&((x462|x463)-x464));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x466 = INT32_MIN;
	volatile int16_t x467 = INT16_MIN;
	volatile uint8_t x468 = 0U;
	int32_t t108 = 1959811;

    t108 = (x465&((x466|x467)-x468));

    if (t108 != -32768) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x469 = INT32_MAX;
	static volatile int32_t x471 = -1;
	int64_t x472 = INT64_MIN;
	volatile int64_t t109 = -209LL;

    t109 = (x469&((x470|x471)-x472));

    if (t109 != 2147483647LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x475 = INT16_MIN;
	uint64_t x476 = 17609454145LLU;
	volatile uint64_t t110 = 120201667630LLU;

    t110 = (x473&((x474|x475)-x476));

    if (t110 != 69469320LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x477 = 11963U;
	int64_t x478 = -1LL;
	int8_t x479 = 13;
	uint64_t x480 = 243175888438774218LLU;
	volatile uint64_t t111 = 80LLU;

    t111 = (x477&((x478|x479)-x480));

    if (t111 != 9777LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x483 = INT32_MIN;
	int16_t x484 = INT16_MIN;
	volatile uint64_t t112 = 216306240LLU;

    t112 = (x481&((x482|x483)-x484));

    if (t112 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x485 = 3353578U;
	volatile uint16_t x486 = 2825U;
	int16_t x487 = -12727;
	uint8_t x488 = 5U;
	uint32_t t113 = 1596692U;

    t113 = (x485&((x486|x487)-x488));

    if (t113 != 3345216U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x490 = 18U;
	static volatile int32_t x491 = -1;
	int64_t x492 = -415996618LL;
	int64_t t114 = -7377LL;

    t114 = (x489&((x490|x491)-x492));

    if (t114 != 415996617LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x493 = 15414U;
	static int8_t x494 = INT8_MIN;
	int32_t x495 = 2;
	int64_t t115 = 4690495LL;

    t115 = (x493&((x494|x495)-x496));

    if (t115 != 2050LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x497 = -1;
	static int32_t x498 = 1563925;
	uint16_t x499 = 1U;
	static int32_t x500 = INT32_MAX;
	int32_t t116 = 164954;

    t116 = (x497&((x498|x499)-x500));

    if (t116 != -2145919722) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x501 = INT8_MIN;
	volatile uint8_t x502 = UINT8_MAX;
	static uint32_t x503 = 230151U;
	int64_t t117 = -883224LL;

    t117 = (x501&((x502|x503)-x504));

    if (t117 != 571143238188542464LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x505 = 8489356U;
	static int32_t x506 = -50289178;
	uint16_t x507 = 0U;
	static int16_t x508 = INT16_MIN;
	volatile uint32_t t118 = 617009037U;

    t118 = (x505&((x506|x507)-x508));

    if (t118 != 65924U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x510 = 505242LLU;
	int64_t x511 = -881LL;
	volatile uint64_t t119 = 942691659LLU;

    t119 = (x509&((x510|x511)-x512));

    if (t119 != 6LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x513 = -1;
	static volatile int64_t x514 = -2979792141705655LL;
	int64_t x515 = -1LL;
	static volatile int16_t x516 = 2;
	int64_t t120 = 507781695LL;

    t120 = (x513&((x514|x515)-x516));

    if (t120 != -3LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x517 = -1;
	uint8_t x519 = UINT8_MAX;
	int16_t x520 = INT16_MIN;
	static int64_t t121 = 1LL;

    t121 = (x517&((x518|x519)-x520));

    if (t121 != -9223372036854742785LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x521 = INT16_MIN;
	volatile int64_t x522 = INT64_MIN;
	int64_t x523 = -3029748LL;
	volatile uint64_t x524 = 127615580953031046LLU;
	volatile uint64_t t122 = 343102130505782LLU;

    t122 = (x521&((x522|x523)-x524));

    if (t122 != 18319128492753485824LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x525 = INT8_MIN;
	int16_t x526 = 14551;
	int64_t x527 = INT64_MIN;
	int64_t x528 = -1LL;
	int64_t t123 = 3121726LL;

    t123 = (x525&((x526|x527)-x528));

    if (t123 != -9223372036854761344LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x529 = INT64_MIN;
	uint32_t x530 = 234089456U;
	int8_t x531 = INT8_MAX;
	uint32_t x532 = 70U;
	int64_t t124 = -178LL;

    t124 = (x529&((x530|x531)-x532));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x533 = -1;
	int16_t x534 = INT16_MIN;
	int64_t x535 = INT64_MIN;
	volatile int64_t t125 = 3479800257056031LL;

    t125 = (x533&((x534|x535)-x536));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x538 = INT32_MIN;
	int32_t t126 = -21;

    t126 = (x537&((x538|x539)-x540));

    if (t126 != 2147450880) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x541 = INT8_MAX;
	int16_t x543 = INT16_MAX;
	volatile int64_t t127 = -855260LL;

    t127 = (x541&((x542|x543)-x544));

    if (t127 != 30LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x546 = INT16_MIN;
	volatile int32_t t128 = 8626026;

    t128 = (x545&((x546|x547)-x548));

    if (t128 != -32896) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x549 = 11U;
	static uint16_t x550 = 5U;
	volatile uint8_t x551 = UINT8_MAX;
	int16_t x552 = -1;

    t129 = (x549&((x550|x551)-x552));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x554 = 15U;
	int64_t x555 = INT64_MIN;
	static uint64_t x556 = 84050573100481LLU;
	volatile uint64_t t130 = 6331780661LLU;

    t130 = (x553&((x554|x555)-x556));

    if (t130 != 10892871384328768LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint8_t x557 = 5U;
	uint16_t x558 = UINT16_MAX;
	static uint8_t x559 = UINT8_MAX;
	int16_t x560 = -1825;
	int32_t t131 = -382660;

    t131 = (x557&((x558|x559)-x560));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x561 = INT16_MAX;
	int32_t x562 = INT32_MAX;
	uint64_t x563 = 1561385912987LLU;
	uint64_t x564 = 114674555LLU;
	static volatile uint64_t t132 = 404705LLU;

    t132 = (x561&((x562|x563)-x564));

    if (t132 != 13444LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x565 = -26;
	int16_t x566 = -1;
	static uint16_t x567 = UINT16_MAX;
	int64_t x568 = -1LL;
	static volatile int64_t t133 = -318747LL;

    t133 = (x565&((x566|x567)-x568));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x569 = -1;
	uint16_t x571 = 83U;
	uint32_t x572 = 6114U;

    t134 = (x569&((x570|x571)-x572));

    if (t134 != 9223372036854769693LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x576 = -2975;
	int64_t t135 = -2542377209669923942LL;

    t135 = (x573&((x574|x575)-x576));

    if (t135 != 30LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x577 = -1;
	int64_t x578 = INT64_MIN;
	volatile uint8_t x579 = 10U;
	int16_t x580 = INT16_MIN;
	int64_t t136 = -11753LL;

    t136 = (x577&((x578|x579)-x580));

    if (t136 != -9223372036854743030LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x581 = -1939205597LL;
	int64_t x583 = INT64_MIN;
	int16_t x584 = INT16_MAX;
	int64_t t137 = -2766552773LL;

    t137 = (x581&((x582|x583)-x584));

    if (t137 != -1939205631LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x585 = 551LLU;
	volatile uint16_t x588 = UINT16_MAX;
	volatile uint64_t t138 = 2522819LLU;

    t138 = (x585&((x586|x587)-x588));

    if (t138 != 2LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x590 = UINT32_MAX;
	int16_t x591 = INT16_MIN;
	uint8_t x592 = 18U;
	volatile int64_t t139 = 47213217811LL;

    t139 = (x589&((x590|x591)-x592));

    if (t139 != 4294967273LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x593 = INT64_MIN;
	uint32_t x594 = 1912142U;
	int8_t x596 = INT8_MIN;
	static volatile int64_t t140 = -3725145LL;

    t140 = (x593&((x594|x595)-x596));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x601 = INT64_MIN;
	int16_t x603 = INT16_MIN;
	uint8_t x604 = UINT8_MAX;

    t141 = (x601&((x602|x603)-x604));

    if (t141 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x605 = -4;
	int32_t x606 = -18813;
	static int64_t x607 = -40834796708819LL;

    t142 = (x605&((x606|x607)-x608));

    if (t142 != -50524536LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x609 = UINT64_MAX;
	uint8_t x610 = UINT8_MAX;
	uint32_t x611 = 1756103U;

    t143 = (x609&((x610|x611)-x612));

    if (t143 != 9223372036856531968LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x613 = -1;
	static int8_t x614 = INT8_MIN;
	int64_t x615 = 112999LL;

    t144 = (x613&((x614|x615)-x616));

    if (t144 != 2147483623LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x617 = INT8_MIN;
	static int16_t x618 = -1;
	volatile uint16_t x620 = 9522U;
	int32_t t145 = 256348291;

    t145 = (x617&((x618|x619)-x620));

    if (t145 != -9600) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x621 = 220;
	static uint8_t x622 = 1U;
	int32_t x623 = -5;
	static int32_t x624 = INT32_MIN;

    t146 = (x621&((x622|x623)-x624));

    if (t146 != 216) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x625 = -1LL;
	volatile int64_t x626 = 2LL;
	static uint64_t x627 = 144433174491LLU;
	uint16_t x628 = 30U;
	volatile uint64_t t147 = 36979246004383673LLU;

    t147 = (x625&((x626|x627)-x628));

    if (t147 != 144433174461LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x629 = INT16_MIN;
	int8_t x630 = INT8_MIN;
	int32_t x632 = INT32_MAX;
	int32_t t148 = INT32_MIN;

    t148 = (x629&((x630|x631)-x632));

    if (t148 != INT32_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x637 = INT16_MIN;
	static uint32_t x638 = UINT32_MAX;
	static int32_t x640 = -1;
	uint32_t t149 = 134919U;

    t149 = (x637&((x638|x639)-x640));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x641 = UINT8_MAX;
	uint64_t x642 = 14443615LLU;
	int64_t x644 = INT64_MIN;
	volatile uint64_t t150 = 3099307901524175595LLU;

    t150 = (x641&((x642|x643)-x644));

    if (t150 != 95LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x646 = INT32_MAX;
	int64_t x647 = 24522898LL;

    t151 = (x645&((x646|x647)-x648));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x649 = 0;
	volatile int8_t x651 = -1;
	int64_t x652 = -1LL;
	static volatile int64_t t152 = 17LL;

    t152 = (x649&((x650|x651)-x652));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x653 = -1;
	static int8_t x654 = INT8_MIN;
	uint16_t x655 = 6U;
	int32_t x656 = -7;
	int32_t t153 = -423801;

    t153 = (x653&((x654|x655)-x656));

    if (t153 != -115) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x659 = 276U;
	volatile int32_t t154 = -4918747;

    t154 = (x657&((x658|x659)-x660));

    if (t154 != -256) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x661 = 32151871LLU;
	uint32_t x663 = UINT32_MAX;
	int64_t x664 = -158219010229366LL;
	volatile uint64_t t155 = 133914229768LLU;

    t155 = (x661&((x662|x663)-x664));

    if (t155 != 31621173LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x665 = -1;
	static uint64_t x666 = 424162492371207LLU;
	static int16_t x667 = 1230;
	static uint64_t t156 = 361011577LLU;

    t156 = (x665&((x666|x667)-x668));

    if (t156 != 424162492405199LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x669 = 19U;
	int8_t x670 = -1;
	static int16_t x671 = -1;

    t157 = (x669&((x670|x671)-x672));

    if (t157 != 18U) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x673 = INT64_MIN;
	int64_t t158 = INT64_MIN;

    t158 = (x673&((x674|x675)-x676));

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x677 = INT16_MAX;
	static int64_t x678 = INT64_MAX;
	int16_t x679 = 0;
	uint8_t x680 = UINT8_MAX;
	int64_t t159 = -25454688631976LL;

    t159 = (x677&((x678|x679)-x680));

    if (t159 != 32512LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x681 = 280;
	int8_t x682 = 13;
	static int32_t x683 = -1;
	uint64_t x684 = 703656LLU;
	uint64_t t160 = 480375LLU;

    t160 = (x681&((x682|x683)-x684));

    if (t160 != 272LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x685 = 129348920761LL;
	volatile int16_t x686 = -1;
	static volatile int32_t x687 = INT32_MAX;

    t161 = (x685&((x686|x687)-x688));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x689 = -1;
	int8_t x690 = -1;
	int64_t x691 = -1LL;
	uint16_t x692 = 181U;
	static volatile int64_t t162 = -2LL;

    t162 = (x689&((x690|x691)-x692));

    if (t162 != -182LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x693 = INT8_MIN;
	static uint8_t x695 = 6U;
	int32_t x696 = INT32_MAX;

    t163 = (x693&((x694|x695)-x696));

    if (t163 != -2147418112) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x698 = UINT16_MAX;
	volatile uint64_t x699 = 1590438313673LLU;
	uint32_t x700 = 5U;
	static uint64_t t164 = 443752490004422155LLU;

    t164 = (x697&((x698|x699)-x700));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x701 = INT16_MIN;
	static int8_t x703 = -1;
	volatile int64_t t165 = 416371055892LL;

    t165 = (x701&((x702|x703)-x704));

    if (t165 != -32768LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x705 = INT16_MIN;
	int32_t x706 = INT32_MIN;
	static volatile int16_t x707 = INT16_MAX;
	static volatile int32_t t166 = INT32_MIN;

    t166 = (x705&((x706|x707)-x708));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x709 = UINT8_MAX;
	int16_t x711 = -1;
	uint16_t x712 = UINT16_MAX;
	int32_t t167 = -108744834;

    t167 = (x709&((x710|x711)-x712));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x713 = 0;
	int64_t x714 = INT64_MIN;
	static int8_t x716 = -1;
	static volatile int64_t t168 = 81640424154726681LL;

    t168 = (x713&((x714|x715)-x716));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x717 = INT8_MIN;
	int64_t x720 = INT64_MIN;

    t169 = (x717&((x718|x719)-x720));

    if (t169 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x722 = -1;
	uint32_t x723 = 4U;
	static int8_t x724 = INT8_MIN;
	uint32_t t170 = 39550217U;

    t170 = (x721&((x722|x723)-x724));

    if (t170 != 7U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x726 = 7604504LL;
	int8_t x727 = -1;
	volatile int64_t t171 = -68409899420906LL;

    t171 = (x725&((x726|x727)-x728));

    if (t171 != 4294967295LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x729 = 461513058LLU;
	int16_t x730 = 5;
	int16_t x731 = 0;
	volatile uint64_t t172 = 1LLU;

    t172 = (x729&((x730|x731)-x732));

    if (t172 != 25305378LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x733 = INT32_MAX;
	int8_t x736 = INT8_MIN;

    t173 = (x733&((x734|x735)-x736));

    if (t173 != 127) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x738 = INT8_MIN;
	int64_t x739 = INT64_MIN;
	static uint8_t x740 = UINT8_MAX;
	volatile uint64_t t174 = 6629272868297292LLU;

    t174 = (x737&((x738|x739)-x740));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x741 = INT32_MIN;
	uint64_t x743 = 105868366328050LLU;
	static int16_t x744 = INT16_MIN;
	static volatile uint64_t t175 = 468132737340137LLU;

    t175 = (x741&((x742|x743)-x744));

    if (t175 != 105866648879104LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x745 = -1;
	uint64_t x746 = 10LLU;
	volatile int16_t x747 = 437;
	uint64_t x748 = UINT64_MAX;
	static uint64_t t176 = 66438393422LLU;

    t176 = (x745&((x746|x747)-x748));

    if (t176 != 448LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x749 = INT8_MIN;
	static volatile int16_t x750 = INT16_MAX;
	int64_t x751 = INT64_MAX;
	int8_t x752 = INT8_MAX;

    t177 = (x749&((x750|x751)-x752));

    if (t177 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x753 = -1;
	int8_t x754 = INT8_MIN;
	int16_t x755 = INT16_MAX;
	static int32_t t178 = -162182977;

    t178 = (x753&((x754|x755)-x756));

    if (t178 != -1616) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x757 = -2025;
	int32_t x758 = -1;
	static volatile uint16_t x759 = UINT16_MAX;
	volatile int8_t x760 = -1;
	int32_t t179 = 0;

    t179 = (x757&((x758|x759)-x760));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x761 = 11U;
	uint8_t x762 = UINT8_MAX;
	uint32_t x763 = 8812089U;
	volatile uint64_t x764 = 404LLU;
	uint64_t t180 = 1603384583LLU;

    t180 = (x761&((x762|x763)-x764));

    if (t180 != 11LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x769 = INT16_MIN;
	uint8_t x771 = 26U;
	int32_t x772 = 210012407;

    t181 = (x769&((x770|x771)-x772));

    if (t181 != -210075648) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x773 = 4044889135666LLU;
	int16_t x775 = INT16_MAX;
	static uint64_t t182 = 7327770748920LLU;

    t182 = (x773&((x774|x775)-x776));

    if (t182 != 571232880642LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x777 = -2;
	volatile uint32_t x778 = 20352U;
	int32_t x779 = 12226;
	uint16_t x780 = 85U;
	volatile uint32_t t183 = 17623U;

    t183 = (x777&((x778|x779)-x780));

    if (t183 != 28524U) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x782 = INT8_MAX;
	uint64_t x783 = 31571194LLU;
	int64_t x784 = -28701122780168LL;

    t184 = (x781&((x782|x783)-x784));

    if (t184 != 6407LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x785 = INT32_MIN;
	int8_t x786 = INT8_MIN;
	int32_t x787 = INT32_MIN;
	static uint8_t x788 = UINT8_MAX;
	static volatile int32_t t185 = INT32_MIN;

    t185 = (x785&((x786|x787)-x788));

    if (t185 != INT32_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x790 = INT8_MAX;
	volatile int32_t x791 = INT32_MIN;
	int8_t x792 = INT8_MIN;

    t186 = (x789&((x790|x791)-x792));

    if (t186 != INT32_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x794 = 5;
	int64_t x795 = INT64_MIN;
	uint64_t x796 = 91991LLU;

    t187 = (x793&((x794|x795)-x796));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x797 = -1;
	int64_t x798 = INT64_MIN;
	uint8_t x799 = UINT8_MAX;
	uint64_t x800 = 3732994790974292060LLU;

    t188 = (x797&((x798|x799)-x800));

    if (t188 != 5490377245880484003LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x801 = 849976928U;
	uint64_t x802 = 8769344LLU;
	static int16_t x803 = -1;
	uint8_t x804 = UINT8_MAX;

    t189 = (x801&((x802|x803)-x804));

    if (t189 != 849976832LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x805 = INT8_MIN;
	int16_t x806 = -1;
	int16_t x807 = INT16_MIN;
	static int8_t x808 = INT8_MIN;
	volatile int32_t t190 = -1145550;

    t190 = (x805&((x806|x807)-x808));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x809 = UINT32_MAX;
	int64_t x810 = -1LL;
	int8_t x811 = INT8_MIN;
	volatile int16_t x812 = INT16_MAX;
	int64_t t191 = 12815184176LL;

    t191 = (x809&((x810|x811)-x812));

    if (t191 != 4294934528LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x821 = 1845LLU;
	static uint16_t x822 = 561U;
	int8_t x823 = 0;
	uint64_t t192 = 4857736LLU;

    t192 = (x821&((x822|x823)-x824));

    if (t192 != 560LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x825 = -1;
	int16_t x828 = 258;

    t193 = (x825&((x826|x827)-x828));

    if (t193 != 25820345U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x830 = -1;
	volatile int32_t x831 = INT32_MIN;
	int64_t t194 = -16264LL;

    t194 = (x829&((x830|x831)-x832));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x833 = -11685097LL;
	static int8_t x834 = INT8_MIN;
	int64_t x835 = -1546091LL;
	int64_t x836 = 11848653551482LL;
	int64_t t195 = 8154050437441LL;

    t195 = (x833&((x834|x835)-x836));

    if (t195 != -11848656846829LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x837 = INT64_MIN;
	int16_t x838 = INT16_MIN;
	int64_t x839 = INT64_MIN;
	volatile int64_t t196 = -140LL;

    t196 = (x837&((x838|x839)-x840));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x842 = -4177;
	static int32_t x844 = INT32_MIN;
	static volatile int32_t t197 = -28;

    t197 = (x841&((x842|x843)-x844));

    if (t197 != 2998) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x845 = -1574;
	int64_t x846 = -3760608199150LL;
	volatile uint64_t x847 = UINT64_MAX;
	uint16_t x848 = 27950U;
	volatile uint64_t t198 = 250513454LLU;

    t198 = (x845&((x846|x847)-x848));

    if (t198 != 18446744073709523152LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x849 = -9473;
	int64_t x850 = INT64_MIN;
	int8_t x851 = INT8_MIN;
	static int16_t x852 = INT16_MAX;
	volatile int64_t t199 = 1838358892787536LL;

    t199 = (x849&((x850|x851)-x852));

    if (t199 != -42367LL) { NG(); } else { ; }
	
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

