
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

static int16_t x4 = INT16_MAX;
uint32_t t0 = 1U;
int8_t x5 = INT8_MIN;
int8_t x14 = 1;
volatile uint64_t x16 = 52305LLU;
int32_t t3 = -86741;
uint64_t x18 = UINT64_MAX;
static volatile uint32_t t5 = 1342855U;
int32_t t6 = 0;
uint8_t x30 = 1U;
static int8_t x33 = -35;
int8_t x35 = INT8_MAX;
uint16_t x44 = 105U;
uint64_t x50 = 11LLU;
int16_t x53 = INT16_MIN;
static volatile int32_t t13 = -8;
uint8_t x62 = 63U;
int8_t x75 = -53;
volatile uint8_t x76 = UINT8_MAX;
static uint64_t t21 = 222940098LLU;
volatile uint64_t x94 = UINT64_MAX;
volatile int8_t x96 = INT8_MAX;
uint64_t x97 = UINT64_MAX;
uint64_t x99 = UINT64_MAX;
int8_t x102 = INT8_MIN;
int16_t x105 = -1;
static uint8_t x107 = 58U;
volatile uint64_t x110 = UINT64_MAX;
uint64_t x111 = 8622128820LLU;
static int32_t x114 = -23767953;
volatile uint32_t x115 = 4206225U;
int32_t x127 = -1;
static volatile int64_t x130 = -450278427826657LL;
static int16_t x132 = INT16_MIN;
int32_t t33 = -1185943;
uint8_t x142 = UINT8_MAX;
uint16_t x146 = 8442U;
static int16_t x152 = 11;
int16_t x158 = -1;
uint8_t x159 = UINT8_MAX;
int8_t x163 = -1;
static volatile uint64_t t40 = 7822477212098067LLU;
uint8_t x182 = UINT8_MAX;
uint16_t x183 = UINT16_MAX;
int16_t x184 = -20;
uint32_t x194 = 13U;
uint64_t x195 = UINT64_MAX;
uint16_t x198 = UINT16_MAX;
int8_t x210 = -2;
int16_t x211 = -1;
int32_t t48 = 4158716;
int32_t x216 = 8594;
volatile int8_t x219 = 1;
int32_t t50 = 994885;
static int32_t x226 = INT32_MAX;
int16_t x242 = INT16_MIN;
static int32_t t56 = -6531923;
uint8_t x245 = 46U;
static int16_t x249 = INT16_MIN;
int8_t x252 = INT8_MAX;
uint8_t x254 = 0U;
int64_t x267 = -1LL;
uint64_t x268 = 6LLU;
int16_t x271 = -322;
static volatile int64_t x276 = INT64_MAX;
uint32_t x291 = 7091U;
int32_t t68 = -7295277;
static int32_t x294 = INT32_MAX;
int8_t x296 = -1;
volatile uint32_t x297 = 541U;
volatile int32_t t71 = -308382;
static int16_t x307 = 31;
uint64_t x308 = UINT64_MAX;
uint64_t x313 = UINT64_MAX;
int8_t x314 = INT8_MAX;
uint16_t x315 = 5284U;
volatile uint64_t t74 = 457945712LLU;
int16_t x319 = INT16_MIN;
volatile int16_t x324 = 12999;
static int32_t x326 = INT32_MAX;
int64_t x327 = INT64_MAX;
volatile int32_t t77 = 7647680;
static int32_t t78 = 5;
int64_t x334 = 8308466826452LL;
int64_t x335 = -708349162729LL;
int32_t x336 = INT32_MIN;
uint16_t x339 = UINT16_MAX;
uint8_t x344 = 3U;
volatile int16_t x346 = INT16_MIN;
volatile int8_t x348 = INT8_MIN;
static volatile uint64_t x355 = 7LLU;
uint32_t x361 = UINT32_MAX;
volatile int64_t x363 = 112835630393520767LL;
static volatile int8_t x364 = -14;
uint32_t t86 = 175U;
volatile int8_t x368 = INT8_MIN;
uint16_t x373 = 5U;
static int8_t x385 = INT8_MIN;
uint32_t x389 = 215633U;
static uint32_t t92 = 555U;
static int64_t t93 = 134947539068890624LL;
volatile uint64_t x397 = 156575240777LLU;
uint16_t x408 = UINT16_MAX;
int32_t t96 = -182971181;
static volatile int8_t x412 = -1;
uint32_t x420 = UINT32_MAX;
static volatile int64_t x423 = INT64_MAX;
volatile int64_t t101 = 88073627597256631LL;
volatile int64_t x441 = INT64_MIN;
volatile int64_t t105 = 17438505268164LL;
volatile uint32_t x447 = 345979251U;
static int32_t x450 = INT32_MAX;
int32_t x452 = INT32_MAX;
int32_t x464 = INT32_MIN;
int32_t x467 = INT32_MIN;
volatile uint8_t x468 = 1U;
uint32_t x469 = 1905U;
int8_t x470 = INT8_MIN;
int32_t x471 = INT32_MIN;
uint8_t x475 = 69U;
static uint32_t x476 = 30U;
static uint64_t x482 = UINT64_MAX;
int64_t x485 = -70498LL;
volatile int64_t t116 = -2252649126LL;
static int8_t x492 = -1;
uint8_t x493 = UINT8_MAX;
static int32_t t118 = -13;
uint16_t x503 = 93U;
int64_t x513 = -361780464449519353LL;
volatile int64_t t122 = 116694977LL;
int16_t x517 = INT16_MIN;
static volatile int16_t x518 = INT16_MIN;
volatile int8_t x521 = -1;
static int32_t t124 = 181636;
int64_t x531 = 50838260636829LL;
volatile int32_t t126 = -1097184;
static uint64_t x533 = UINT64_MAX;
static volatile int64_t x538 = -1LL;
static uint64_t x544 = 2877641LLU;
volatile uint32_t x545 = UINT32_MAX;
int16_t x549 = 16064;
int16_t x561 = INT16_MAX;
volatile int16_t x562 = INT16_MAX;
static int64_t x564 = INT64_MIN;
int8_t x567 = INT8_MIN;
static uint16_t x578 = 3U;
int32_t x581 = 52;
int32_t x586 = -401907;
volatile int64_t x589 = -1LL;
uint16_t x590 = 5U;
static volatile int64_t t140 = 1331624531281098903LL;
static volatile int32_t t141 = 0;
int8_t x606 = -14;
volatile int32_t t144 = -21;
int64_t x622 = -2LL;
int32_t x626 = INT32_MAX;
volatile int32_t t151 = -115569;
int64_t x639 = 111304601LL;
static int16_t x650 = INT16_MAX;
int32_t x655 = INT32_MIN;
volatile int64_t t156 = 1926584882311LL;
int16_t x657 = INT16_MAX;
volatile int32_t x672 = INT32_MIN;
static volatile int32_t t161 = 130513;
uint32_t t162 = 50250U;
volatile int64_t x682 = 27936LL;
uint16_t x689 = 2U;
int16_t x692 = INT16_MAX;
int32_t t166 = 1;
volatile uint64_t t167 = 6791LLU;
volatile int64_t x706 = -1LL;
uint32_t x709 = UINT32_MAX;
uint64_t x711 = UINT64_MAX;
int8_t x715 = 1;
int64_t x719 = -1LL;
volatile int32_t t172 = -63614;
volatile int64_t x721 = -193071724245LL;
static int8_t x726 = 3;
int16_t x730 = INT16_MIN;
static int32_t x740 = INT32_MIN;
int32_t x743 = -55530184;
int64_t x775 = INT64_MIN;
uint8_t x776 = 0U;
int32_t t188 = -14086;
uint8_t x786 = UINT8_MAX;
static int32_t x795 = INT32_MIN;
static uint32_t x796 = 12907U;
static int8_t x798 = 0;
uint32_t x800 = UINT32_MAX;
volatile uint8_t x807 = 2U;
int64_t x808 = 3941LL;
volatile uint32_t x813 = 14014U;
static volatile int32_t x815 = INT32_MIN;
volatile int64_t x820 = 19990LL;
int32_t x824 = INT32_MIN;


void f0(void) {
    	volatile uint32_t x1 = UINT32_MAX;
	uint64_t x2 = 23514643LLU;
	uint32_t x3 = UINT32_MAX;

    t0 = (x1&((x2%x3)>x4));

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x6 = -4;
	int16_t x7 = INT16_MAX;
	int32_t x8 = INT32_MIN;
	int32_t t1 = -420;

    t1 = (x5&((x6%x7)>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int16_t x10 = -1;
	int32_t x11 = INT32_MIN;
	static int32_t x12 = INT32_MAX;
	volatile int32_t t2 = 0;

    t2 = (x9&((x10%x11)>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	uint32_t x15 = 239380U;

    t3 = (x13&((x14%x15)>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	volatile int16_t x19 = INT16_MIN;
	int32_t x20 = INT32_MIN;
	uint64_t t4 = 25671871000LLU;

    t4 = (x17&((x18%x19)>x20));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x21 = 16201U;
	int64_t x22 = 6099262646229468LL;
	uint8_t x23 = 116U;
	volatile uint16_t x24 = 1U;

    t5 = (x21&((x22%x23)>x24));

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = -1;
	int64_t x26 = INT64_MIN;
	int8_t x27 = -1;
	volatile int64_t x28 = -209119279314705340LL;

    t6 = (x25&((x26%x27)>x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	int64_t x31 = 95LL;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -266149419;

    t7 = (x29&((x30%x31)>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x34 = INT64_MAX;
	static int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 1211270;

    t8 = (x33&((x34%x35)>x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MIN;
	uint8_t x38 = 1U;
	volatile uint64_t x39 = UINT64_MAX;
	uint16_t x40 = 19018U;
	int32_t t9 = 236526238;

    t9 = (x37&((x38%x39)>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	uint8_t x42 = 0U;
	int32_t x43 = -1;
	volatile int32_t t10 = -1;

    t10 = (x41&((x42%x43)>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	int16_t x46 = 1692;
	int32_t x47 = INT32_MAX;
	uint32_t x48 = UINT32_MAX;
	uint64_t t11 = 2717314795548LLU;

    t11 = (x45&((x46%x47)>x48));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int64_t x51 = -1LL;
	uint64_t x52 = 20284LLU;
	int32_t t12 = 3863430;

    t12 = (x49&((x50%x51)>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x54 = INT32_MIN;
	int32_t x55 = -3;
	uint64_t x56 = 555878309801327LLU;

    t13 = (x53&((x54%x55)>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 39U;
	uint64_t x58 = UINT64_MAX;
	uint64_t x59 = 5793903419042529LLU;
	static int8_t x60 = INT8_MAX;
	int32_t t14 = 1;

    t14 = (x57&((x58%x59)>x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = -1LL;
	static int16_t x63 = INT16_MIN;
	static uint16_t x64 = 1001U;
	static int64_t t15 = -11695487622283LL;

    t15 = (x61&((x62%x63)>x64));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int32_t x66 = -697;
	static int64_t x67 = -1LL;
	static int16_t x68 = INT16_MAX;
	static int32_t t16 = -18566;

    t16 = (x65&((x66%x67)>x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x69 = 4447U;
	uint32_t x70 = 1767910U;
	int32_t x71 = -1;
	volatile uint8_t x72 = 13U;
	uint32_t t17 = 260437466U;

    t17 = (x69&((x70%x71)>x72));

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	volatile uint32_t x74 = 1899021U;
	int32_t t18 = 31;

    t18 = (x73&((x74%x75)>x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = UINT64_MAX;
	int32_t x78 = 301935348;
	int8_t x79 = -5;
	int64_t x80 = 1170912733885439545LL;
	volatile uint64_t t19 = 1261939858394861549LLU;

    t19 = (x77&((x78%x79)>x80));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = 517;
	uint64_t x82 = UINT64_MAX;
	static uint16_t x83 = 3426U;
	int64_t x84 = -1LL;
	static int32_t t20 = -12;

    t20 = (x81&((x82%x83)>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = UINT64_MAX;
	int64_t x86 = INT64_MAX;
	uint32_t x87 = UINT32_MAX;
	uint16_t x88 = 8237U;

    t21 = (x85&((x86%x87)>x88));

    if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 3U;
	volatile int8_t x90 = INT8_MIN;
	static volatile uint32_t x91 = UINT32_MAX;
	uint8_t x92 = UINT8_MAX;
	int32_t t22 = -29771;

    t22 = (x89&((x90%x91)>x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MAX;
	uint64_t x95 = UINT64_MAX;
	int32_t t23 = -1009731;

    t23 = (x93&((x94%x95)>x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = 1;
	int16_t x100 = 7175;
	static volatile uint64_t t24 = 34808209462245244LLU;

    t24 = (x97&((x98%x99)>x100));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -1;
	static uint8_t x103 = UINT8_MAX;
	int16_t x104 = -1;
	volatile int32_t t25 = 163566;

    t25 = (x101&((x102%x103)>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = -54470578;
	int8_t x108 = INT8_MIN;
	int32_t t26 = 3095;

    t26 = (x105&((x106%x107)>x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x109 = INT32_MIN;
	static int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -1822;

    t27 = (x109&((x110%x111)>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	static int64_t x116 = INT64_MAX;
	volatile int64_t t28 = -160060173466905LL;

    t28 = (x113&((x114%x115)>x116));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MAX;
	int32_t x118 = INT32_MIN;
	static int32_t x119 = INT32_MIN;
	volatile uint64_t x120 = 14012799648637LLU;
	volatile int32_t t29 = -101480217;

    t29 = (x117&((x118%x119)>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x121 = INT32_MIN;
	int32_t x122 = -1;
	static uint32_t x123 = 693480U;
	uint64_t x124 = UINT64_MAX;
	volatile int32_t t30 = -795651;

    t30 = (x121&((x122%x123)>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1;
	uint32_t x126 = 29364U;
	uint8_t x128 = 1U;
	volatile int32_t t31 = -513948984;

    t31 = (x125&((x126%x127)>x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	int32_t x131 = -1;
	int32_t t32 = 837937078;

    t32 = (x129&((x130%x131)>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = 27;
	volatile int32_t x134 = -1;
	int8_t x135 = 2;
	static volatile int32_t x136 = INT32_MIN;

    t33 = (x133&((x134%x135)>x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x141 = -1;
	volatile int64_t x143 = -985398516955855LL;
	uint32_t x144 = 8982U;
	volatile int32_t t34 = 1719057;

    t34 = (x141&((x142%x143)>x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x145 = -1LL;
	int16_t x147 = -1;
	int64_t x148 = INT64_MAX;
	volatile int64_t t35 = 269351851382LL;

    t35 = (x145&((x146%x147)>x148));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = -1LL;
	uint16_t x150 = 402U;
	uint16_t x151 = 5882U;
	int64_t t36 = 14LL;

    t36 = (x149&((x150%x151)>x152));

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x153 = -7339;
	volatile int64_t x154 = INT64_MIN;
	int32_t x155 = -1;
	int8_t x156 = -1;
	static int32_t t37 = -990;

    t37 = (x153&((x154%x155)>x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x157 = 4957063U;
	volatile int32_t x160 = INT32_MAX;
	uint32_t t38 = 0U;

    t38 = (x157&((x158%x159)>x160));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x161 = 5684737U;
	uint8_t x162 = 3U;
	int8_t x164 = -33;
	uint32_t t39 = 30118926U;

    t39 = (x161&((x162%x163)>x164));

    if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x169 = UINT64_MAX;
	int64_t x170 = -255435380848939LL;
	uint32_t x171 = UINT32_MAX;
	int16_t x172 = 1;

    t40 = (x169&((x170%x171)>x172));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x177 = 1243U;
	static int8_t x178 = INT8_MIN;
	uint64_t x179 = 3332113927459LLU;
	volatile int8_t x180 = INT8_MIN;
	volatile int32_t t41 = -6097;

    t41 = (x177&((x178%x179)>x180));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x181 = -1;
	volatile int32_t t42 = -358938749;

    t42 = (x181&((x182%x183)>x184));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = INT8_MIN;
	static int64_t x186 = INT64_MIN;
	int16_t x187 = INT16_MIN;
	int16_t x188 = -1;
	volatile int32_t t43 = 1773;

    t43 = (x185&((x186%x187)>x188));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x189 = 300209LL;
	int64_t x190 = -1LL;
	int64_t x191 = 9643885505915935LL;
	uint8_t x192 = 2U;
	volatile int64_t t44 = 425028675061251014LL;

    t44 = (x189&((x190%x191)>x192));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x193 = INT8_MIN;
	uint8_t x196 = UINT8_MAX;
	int32_t t45 = 209;

    t45 = (x193&((x194%x195)>x196));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x197 = 82748LLU;
	int32_t x199 = INT32_MIN;
	int32_t x200 = INT32_MAX;
	uint64_t t46 = 73800LLU;

    t46 = (x197&((x198%x199)>x200));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x201 = 5;
	uint8_t x202 = 98U;
	int64_t x203 = 129866LL;
	static uint32_t x204 = 0U;
	static volatile int32_t t47 = -122;

    t47 = (x201&((x202%x203)>x204));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x209 = INT16_MIN;
	uint16_t x212 = UINT16_MAX;

    t48 = (x209&((x210%x211)>x212));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x213 = 0;
	int8_t x214 = -21;
	int16_t x215 = INT16_MIN;
	volatile int32_t t49 = -3435;

    t49 = (x213&((x214%x215)>x216));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x217 = 0U;
	uint16_t x218 = UINT16_MAX;
	static volatile int32_t x220 = INT32_MIN;

    t50 = (x217&((x218%x219)>x220));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x221 = -29406LL;
	static int64_t x222 = -43985LL;
	uint8_t x223 = 1U;
	static volatile uint32_t x224 = UINT32_MAX;
	int64_t t51 = 32322LL;

    t51 = (x221&((x222%x223)>x224));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x225 = INT8_MIN;
	volatile int16_t x227 = INT16_MAX;
	static int16_t x228 = INT16_MAX;
	int32_t t52 = -417627;

    t52 = (x225&((x226%x227)>x228));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x229 = 6910LL;
	uint8_t x230 = 14U;
	uint64_t x231 = 33364LLU;
	int32_t x232 = -1;
	static volatile int64_t t53 = 296385795236500823LL;

    t53 = (x229&((x230%x231)>x232));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x233 = -185795809222612LL;
	static uint32_t x234 = UINT32_MAX;
	uint32_t x235 = 952101751U;
	static int64_t x236 = INT64_MIN;
	volatile int64_t t54 = 30025182687400168LL;

    t54 = (x233&((x234%x235)>x236));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MIN;
	int16_t x239 = -1;
	uint32_t x240 = 10U;
	int32_t t55 = 508;

    t55 = (x237&((x238%x239)>x240));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint8_t x241 = UINT8_MAX;
	int8_t x243 = 7;
	int16_t x244 = -1;

    t56 = (x241&((x242%x243)>x244));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x246 = 477993191LL;
	int8_t x247 = -1;
	static int8_t x248 = -1;
	volatile int32_t t57 = -5;

    t57 = (x245&((x246%x247)>x248));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x250 = 8;
	static int32_t x251 = 32663;
	volatile int32_t t58 = 35705;

    t58 = (x249&((x250%x251)>x252));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint64_t x253 = 272213992470974070LLU;
	uint64_t x255 = UINT64_MAX;
	uint16_t x256 = 114U;
	volatile uint64_t t59 = 62285111855LLU;

    t59 = (x253&((x254%x255)>x256));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x257 = 7384;
	int16_t x258 = 17;
	volatile int64_t x259 = 671945476783LL;
	int32_t x260 = INT32_MIN;
	int32_t t60 = 1;

    t60 = (x257&((x258%x259)>x260));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x261 = INT64_MAX;
	uint64_t x262 = 622868864760LLU;
	uint16_t x263 = 53U;
	int8_t x264 = INT8_MIN;
	int64_t t61 = 0LL;

    t61 = (x261&((x262%x263)>x264));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x265 = -2;
	static int32_t x266 = INT32_MIN;
	int32_t t62 = -2137856;

    t62 = (x265&((x266%x267)>x268));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x269 = -1;
	int8_t x270 = -11;
	static int16_t x272 = -1;
	volatile int32_t t63 = 14494;

    t63 = (x269&((x270%x271)>x272));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x273 = -46;
	int16_t x274 = 4927;
	volatile int32_t x275 = -1;
	volatile int32_t t64 = -15;

    t64 = (x273&((x274%x275)>x276));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x277 = INT8_MIN;
	int64_t x278 = INT64_MIN;
	uint64_t x279 = UINT64_MAX;
	int8_t x280 = -1;
	static int32_t t65 = 10;

    t65 = (x277&((x278%x279)>x280));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x281 = INT8_MIN;
	volatile uint8_t x282 = 3U;
	uint32_t x283 = 254748066U;
	static volatile int8_t x284 = -1;
	volatile int32_t t66 = 43775286;

    t66 = (x281&((x282%x283)>x284));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x285 = 8926501432886391LL;
	uint32_t x286 = UINT32_MAX;
	static int8_t x287 = 3;
	int64_t x288 = INT64_MIN;
	int64_t t67 = 1LL;

    t67 = (x285&((x286%x287)>x288));

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x289 = 3U;
	static volatile int8_t x290 = INT8_MIN;
	int64_t x292 = INT64_MIN;

    t68 = (x289&((x290%x291)>x292));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint64_t x293 = 1727245641LLU;
	uint32_t x295 = 38196547U;
	volatile uint64_t t69 = 325802LLU;

    t69 = (x293&((x294%x295)>x296));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x298 = UINT16_MAX;
	uint16_t x299 = UINT16_MAX;
	int32_t x300 = INT32_MIN;
	static volatile uint32_t t70 = 58712013U;

    t70 = (x297&((x298%x299)>x300));

    if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x301 = -1;
	static int16_t x302 = 7585;
	uint16_t x303 = 2782U;
	volatile int8_t x304 = -11;

    t71 = (x301&((x302%x303)>x304));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x305 = UINT32_MAX;
	volatile int64_t x306 = -17904309297656LL;
	volatile uint32_t t72 = 1646U;

    t72 = (x305&((x306%x307)>x308));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x309 = -1;
	volatile int64_t x310 = -171185LL;
	uint16_t x311 = 3U;
	static int8_t x312 = INT8_MIN;
	int32_t t73 = 0;

    t73 = (x309&((x310%x311)>x312));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x316 = -1;

    t74 = (x313&((x314%x315)>x316));

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x317 = 1;
	volatile int32_t x318 = INT32_MIN;
	static int32_t x320 = INT32_MIN;
	volatile int32_t t75 = 186;

    t75 = (x317&((x318%x319)>x320));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x321 = 220U;
	uint32_t x322 = 1U;
	uint32_t x323 = UINT32_MAX;
	uint32_t t76 = 10U;

    t76 = (x321&((x322%x323)>x324));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x325 = -1;
	volatile int32_t x328 = -3455;

    t77 = (x325&((x326%x327)>x328));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x329 = 11U;
	int32_t x330 = INT32_MIN;
	volatile uint8_t x331 = UINT8_MAX;
	volatile int16_t x332 = INT16_MAX;

    t78 = (x329&((x330%x331)>x332));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x333 = -1LL;
	volatile int64_t t79 = -178032LL;

    t79 = (x333&((x334%x335)>x336));

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x337 = 508974836752297LLU;
	int32_t x338 = INT32_MIN;
	int64_t x340 = -1LL;
	volatile uint64_t t80 = 8520919LLU;

    t80 = (x337&((x338%x339)>x340));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x341 = 3532649U;
	volatile uint64_t x342 = 28LLU;
	uint32_t x343 = UINT32_MAX;
	uint32_t t81 = 342535766U;

    t81 = (x341&((x342%x343)>x344));

    if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x345 = -489722;
	static uint16_t x347 = 620U;
	volatile int32_t t82 = 24031382;

    t82 = (x345&((x346%x347)>x348));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x349 = INT16_MIN;
	volatile int32_t x350 = -1;
	uint8_t x351 = 1U;
	static int32_t x352 = -1;
	static int32_t t83 = 20;

    t83 = (x349&((x350%x351)>x352));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x353 = INT8_MIN;
	int8_t x354 = INT8_MAX;
	uint64_t x356 = 8LLU;
	static int32_t t84 = -723493;

    t84 = (x353&((x354%x355)>x356));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x357 = INT32_MAX;
	volatile uint16_t x358 = 15U;
	int64_t x359 = INT64_MAX;
	uint8_t x360 = 7U;
	volatile int32_t t85 = 14440121;

    t85 = (x357&((x358%x359)>x360));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x362 = UINT32_MAX;

    t86 = (x361&((x362%x363)>x364));

    if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x365 = INT8_MIN;
	int32_t x366 = -2;
	int32_t x367 = INT32_MIN;
	volatile int32_t t87 = -15367;

    t87 = (x365&((x366%x367)>x368));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x369 = UINT32_MAX;
	uint16_t x370 = UINT16_MAX;
	int16_t x371 = INT16_MIN;
	int16_t x372 = INT16_MIN;
	volatile uint32_t t88 = 803789U;

    t88 = (x369&((x370%x371)>x372));

    if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x374 = 28U;
	static int64_t x375 = INT64_MIN;
	int64_t x376 = -333276708937LL;
	int32_t t89 = -660253;

    t89 = (x373&((x374%x375)>x376));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x377 = 44U;
	int64_t x378 = -1LL;
	int64_t x379 = INT64_MIN;
	static int32_t x380 = 4019074;
	int32_t t90 = -70218;

    t90 = (x377&((x378%x379)>x380));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x386 = UINT64_MAX;
	int32_t x387 = -1;
	int8_t x388 = 3;
	int32_t t91 = 378057;

    t91 = (x385&((x386%x387)>x388));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x390 = 732892LL;
	int64_t x391 = -24LL;
	int8_t x392 = INT8_MIN;

    t92 = (x389&((x390%x391)>x392));

    if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x393 = -1LL;
	static int64_t x394 = 79660945746660177LL;
	int8_t x395 = -1;
	volatile int64_t x396 = -10265122713935LL;

    t93 = (x393&((x394%x395)>x396));

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x398 = 3;
	static int32_t x399 = -23537824;
	int64_t x400 = INT64_MAX;
	uint64_t t94 = 654726717433284LLU;

    t94 = (x397&((x398%x399)>x400));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x401 = 1752U;
	static int32_t x402 = -46;
	uint8_t x403 = 13U;
	int16_t x404 = -1;
	volatile int32_t t95 = 0;

    t95 = (x401&((x402%x403)>x404));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int32_t x405 = INT32_MIN;
	static uint32_t x406 = 6906919U;
	volatile int32_t x407 = -1;

    t96 = (x405&((x406%x407)>x408));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x409 = 22348483LL;
	static int32_t x410 = -29631;
	int32_t x411 = INT32_MIN;
	volatile int64_t t97 = -1LL;

    t97 = (x409&((x410%x411)>x412));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x413 = 20914U;
	int32_t x414 = INT32_MIN;
	uint8_t x415 = 37U;
	int8_t x416 = -4;
	static volatile uint32_t t98 = 107494864U;

    t98 = (x413&((x414%x415)>x416));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x417 = INT64_MIN;
	static volatile int64_t x418 = -339LL;
	static int8_t x419 = INT8_MIN;
	static int64_t t99 = -27LL;

    t99 = (x417&((x418%x419)>x420));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x421 = 1741U;
	static int16_t x422 = -1;
	int32_t x424 = -1;
	volatile int32_t t100 = -257475134;

    t100 = (x421&((x422%x423)>x424));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x425 = -1LL;
	int64_t x426 = INT64_MAX;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = INT8_MIN;

    t101 = (x425&((x426%x427)>x428));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int16_t x429 = INT16_MIN;
	int8_t x430 = INT8_MIN;
	static uint32_t x431 = UINT32_MAX;
	int16_t x432 = 1197;
	volatile int32_t t102 = -44744131;

    t102 = (x429&((x430%x431)>x432));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x433 = UINT64_MAX;
	int32_t x434 = -1;
	int8_t x435 = -1;
	int32_t x436 = INT32_MIN;
	uint64_t t103 = 276780306175512LLU;

    t103 = (x433&((x434%x435)>x436));

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x437 = 15U;
	int64_t x438 = -1LL;
	uint8_t x439 = 115U;
	uint64_t x440 = 4933313603749LLU;
	static volatile int32_t t104 = -945;

    t104 = (x437&((x438%x439)>x440));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x442 = UINT8_MAX;
	volatile int8_t x443 = -1;
	volatile uint32_t x444 = 4166U;

    t105 = (x441&((x442%x443)>x444));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x445 = 1U;
	volatile int64_t x446 = -1LL;
	int32_t x448 = -1;
	volatile int32_t t106 = 39;

    t106 = (x445&((x446%x447)>x448));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x449 = INT32_MIN;
	static int8_t x451 = 37;
	int32_t t107 = 3;

    t107 = (x449&((x450%x451)>x452));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x453 = UINT64_MAX;
	static int64_t x454 = -384075045LL;
	int64_t x455 = INT64_MAX;
	uint32_t x456 = 12418U;
	uint64_t t108 = 4277LLU;

    t108 = (x453&((x454%x455)>x456));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x457 = 2;
	int8_t x458 = -37;
	int64_t x459 = -1LL;
	static volatile int64_t x460 = INT64_MIN;
	int32_t t109 = 23700;

    t109 = (x457&((x458%x459)>x460));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x461 = -14;
	int8_t x462 = 4;
	uint32_t x463 = 37U;
	volatile int32_t t110 = -1436;

    t110 = (x461&((x462%x463)>x464));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x465 = INT32_MIN;
	uint32_t x466 = 47857625U;
	static int32_t t111 = 0;

    t111 = (x465&((x466%x467)>x468));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x472 = -186;
	uint32_t t112 = 65717962U;

    t112 = (x469&((x470%x471)>x472));

    if (t112 != 1U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x473 = INT32_MIN;
	uint32_t x474 = 14390429U;
	int32_t t113 = 5817644;

    t113 = (x473&((x474%x475)>x476));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x477 = INT16_MIN;
	int16_t x478 = INT16_MAX;
	int64_t x479 = INT64_MIN;
	volatile int16_t x480 = INT16_MAX;
	int32_t t114 = 3;

    t114 = (x477&((x478%x479)>x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x481 = UINT32_MAX;
	static int16_t x483 = -1;
	int64_t x484 = -1LL;
	uint32_t t115 = 0U;

    t115 = (x481&((x482%x483)>x484));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x486 = INT64_MIN;
	volatile int32_t x487 = 167;
	int64_t x488 = INT64_MAX;

    t116 = (x485&((x486%x487)>x488));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x489 = -199;
	int8_t x490 = -3;
	uint64_t x491 = 4744065817134203264LLU;
	volatile int32_t t117 = 2;

    t117 = (x489&((x490%x491)>x492));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x494 = 23U;
	int64_t x495 = INT64_MAX;
	static int16_t x496 = INT16_MIN;

    t118 = (x493&((x494%x495)>x496));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x501 = 4062918945868874LLU;
	int8_t x502 = INT8_MIN;
	volatile int64_t x504 = -84114LL;
	uint64_t t119 = 7143305441900528168LLU;

    t119 = (x501&((x502%x503)>x504));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x505 = -1;
	int64_t x506 = INT64_MAX;
	static uint16_t x507 = UINT16_MAX;
	int64_t x508 = -21LL;
	int32_t t120 = 1;

    t120 = (x505&((x506%x507)>x508));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x509 = 16332;
	static uint8_t x510 = 27U;
	uint64_t x511 = UINT64_MAX;
	volatile uint16_t x512 = UINT16_MAX;
	int32_t t121 = -173282;

    t121 = (x509&((x510%x511)>x512));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x514 = 16U;
	static int16_t x515 = -247;
	uint16_t x516 = UINT16_MAX;

    t122 = (x513&((x514%x515)>x516));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x519 = -1;
	int64_t x520 = INT64_MIN;
	int32_t t123 = -27278007;

    t123 = (x517&((x518%x519)>x520));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x522 = -226;
	int32_t x523 = INT32_MIN;
	static int16_t x524 = INT16_MAX;

    t124 = (x521&((x522%x523)>x524));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x525 = INT64_MIN;
	int32_t x526 = -1;
	static int8_t x527 = INT8_MIN;
	volatile int16_t x528 = -4;
	volatile int64_t t125 = -18622LL;

    t125 = (x525&((x526%x527)>x528));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x529 = 0U;
	volatile int32_t x530 = INT32_MAX;
	uint8_t x532 = 22U;

    t126 = (x529&((x530%x531)>x532));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x534 = INT32_MIN;
	volatile int64_t x535 = -1LL;
	uint64_t x536 = 20LLU;
	volatile uint64_t t127 = 160712680921639LLU;

    t127 = (x533&((x534%x535)>x536));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x537 = INT16_MIN;
	static int8_t x539 = INT8_MIN;
	volatile uint32_t x540 = UINT32_MAX;
	static int32_t t128 = -3314;

    t128 = (x537&((x538%x539)>x540));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x541 = -88721;
	static int16_t x542 = -22;
	int8_t x543 = INT8_MIN;
	volatile int32_t t129 = 10;

    t129 = (x541&((x542%x543)>x544));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x546 = INT8_MIN;
	int32_t x547 = INT32_MIN;
	static volatile int16_t x548 = INT16_MAX;
	uint32_t t130 = 5509085U;

    t130 = (x545&((x546%x547)>x548));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x550 = INT64_MAX;
	volatile uint64_t x551 = 40LLU;
	volatile uint8_t x552 = 18U;
	int32_t t131 = 1746;

    t131 = (x549&((x550%x551)>x552));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x557 = INT16_MIN;
	int16_t x558 = INT16_MIN;
	uint8_t x559 = 1U;
	volatile int16_t x560 = INT16_MIN;
	volatile int32_t t132 = -132;

    t132 = (x557&((x558%x559)>x560));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x563 = 3519U;
	int32_t t133 = 1;

    t133 = (x561&((x562%x563)>x564));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x565 = INT64_MIN;
	volatile int8_t x566 = 3;
	static volatile uint64_t x568 = UINT64_MAX;
	volatile int64_t t134 = -968956LL;

    t134 = (x565&((x566%x567)>x568));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x569 = INT64_MAX;
	int8_t x570 = 6;
	int64_t x571 = INT64_MAX;
	uint8_t x572 = UINT8_MAX;
	volatile int64_t t135 = 539530932LL;

    t135 = (x569&((x570%x571)>x572));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x573 = 18;
	volatile int16_t x574 = INT16_MIN;
	uint32_t x575 = 746046U;
	int64_t x576 = INT64_MIN;
	volatile int32_t t136 = -9;

    t136 = (x573&((x574%x575)>x576));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x577 = 399342LLU;
	int64_t x579 = INT64_MIN;
	int8_t x580 = INT8_MIN;
	static uint64_t t137 = 624911986787718LLU;

    t137 = (x577&((x578%x579)>x580));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x582 = 373319147044015LL;
	int8_t x583 = INT8_MIN;
	volatile uint32_t x584 = 85867U;
	static int32_t t138 = -14177789;

    t138 = (x581&((x582%x583)>x584));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x585 = INT32_MIN;
	int32_t x587 = 42098478;
	static int32_t x588 = INT32_MIN;
	static int32_t t139 = 0;

    t139 = (x585&((x586%x587)>x588));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x591 = INT16_MAX;
	uint8_t x592 = 20U;

    t140 = (x589&((x590%x591)>x592));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x593 = 0;
	int32_t x594 = -1988;
	int8_t x595 = INT8_MAX;
	volatile int32_t x596 = -2717;

    t141 = (x593&((x594%x595)>x596));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x597 = 42U;
	uint64_t x598 = 203770LLU;
	int16_t x599 = 396;
	int32_t x600 = INT32_MIN;
	volatile int32_t t142 = 3355;

    t142 = (x597&((x598%x599)>x600));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x601 = UINT64_MAX;
	int32_t x602 = INT32_MIN;
	volatile int8_t x603 = -10;
	volatile int64_t x604 = INT64_MIN;
	static volatile uint64_t t143 = 461394247595LLU;

    t143 = (x601&((x602%x603)>x604));

    if (t143 != 1LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x605 = -801;
	uint8_t x607 = 15U;
	int32_t x608 = INT32_MIN;

    t144 = (x605&((x606%x607)>x608));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x609 = -1;
	static int32_t x610 = INT32_MIN;
	volatile uint32_t x611 = UINT32_MAX;
	static int8_t x612 = INT8_MAX;
	volatile int32_t t145 = 9643;

    t145 = (x609&((x610%x611)>x612));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x613 = INT16_MIN;
	static uint64_t x614 = 64573LLU;
	volatile uint16_t x615 = UINT16_MAX;
	int16_t x616 = 1;
	volatile int32_t t146 = -4693;

    t146 = (x613&((x614%x615)>x616));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x617 = INT16_MIN;
	int32_t x618 = INT32_MIN;
	int64_t x619 = INT64_MAX;
	static uint16_t x620 = 1U;
	volatile int32_t t147 = 51;

    t147 = (x617&((x618%x619)>x620));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x621 = INT32_MAX;
	int16_t x623 = -1;
	uint16_t x624 = 2851U;
	volatile int32_t t148 = -881;

    t148 = (x621&((x622%x623)>x624));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x625 = -1LL;
	static uint32_t x627 = 29285024U;
	int32_t x628 = -27;
	int64_t t149 = -579488404698LL;

    t149 = (x625&((x626%x627)>x628));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x629 = INT8_MAX;
	int16_t x630 = INT16_MIN;
	volatile int64_t x631 = INT64_MIN;
	int16_t x632 = INT16_MIN;
	volatile int32_t t150 = 504536257;

    t150 = (x629&((x630%x631)>x632));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x633 = INT16_MAX;
	int16_t x634 = INT16_MIN;
	uint32_t x635 = 17178U;
	int32_t x636 = -34965173;

    t151 = (x633&((x634%x635)>x636));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x637 = UINT16_MAX;
	static uint64_t x638 = UINT64_MAX;
	int16_t x640 = -1;
	volatile int32_t t152 = -468718;

    t152 = (x637&((x638%x639)>x640));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x641 = -1LL;
	static int64_t x642 = -1LL;
	int8_t x643 = 51;
	uint64_t x644 = 71581756LLU;
	volatile int64_t t153 = -3461991103LL;

    t153 = (x641&((x642%x643)>x644));

    if (t153 != 1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x645 = INT64_MIN;
	uint16_t x646 = UINT16_MAX;
	int64_t x647 = -484LL;
	uint8_t x648 = UINT8_MAX;
	static volatile int64_t t154 = 167LL;

    t154 = (x645&((x646%x647)>x648));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x649 = 8717779557LLU;
	static int8_t x651 = INT8_MAX;
	uint32_t x652 = 31U;
	uint64_t t155 = 126797LLU;

    t155 = (x649&((x650%x651)>x652));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x653 = -347091565261824LL;
	static uint8_t x654 = 112U;
	int8_t x656 = -24;

    t156 = (x653&((x654%x655)>x656));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x658 = 8;
	int32_t x659 = INT32_MIN;
	uint32_t x660 = UINT32_MAX;
	volatile int32_t t157 = -494728595;

    t157 = (x657&((x658%x659)>x660));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x661 = 125U;
	static volatile uint32_t x662 = 163962U;
	int64_t x663 = 313240916416LL;
	int32_t x664 = -2805809;
	int32_t t158 = 412596;

    t158 = (x661&((x662%x663)>x664));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x665 = INT8_MIN;
	uint64_t x666 = 8278586LLU;
	volatile int32_t x667 = 180;
	volatile int8_t x668 = -1;
	volatile int32_t t159 = 24879559;

    t159 = (x665&((x666%x667)>x668));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x669 = 15785109563484LLU;
	volatile uint32_t x670 = 108U;
	int32_t x671 = INT32_MAX;
	static uint64_t t160 = 1096790706LLU;

    t160 = (x669&((x670%x671)>x672));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x673 = INT8_MIN;
	static uint16_t x674 = 9845U;
	int64_t x675 = INT64_MIN;
	static int8_t x676 = 1;

    t161 = (x673&((x674%x675)>x676));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x677 = UINT32_MAX;
	int8_t x678 = INT8_MAX;
	uint16_t x679 = UINT16_MAX;
	static int32_t x680 = -1;

    t162 = (x677&((x678%x679)>x680));

    if (t162 != 1U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x681 = 1533112037U;
	int32_t x683 = -1;
	int16_t x684 = -1;
	uint32_t t163 = 108466U;

    t163 = (x681&((x682%x683)>x684));

    if (t163 != 1U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x685 = INT64_MIN;
	int64_t x686 = -1LL;
	volatile uint8_t x687 = 46U;
	int8_t x688 = INT8_MIN;
	volatile int64_t t164 = 4594668LL;

    t164 = (x685&((x686%x687)>x688));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x690 = 8U;
	static int16_t x691 = -489;
	volatile int32_t t165 = 1351;

    t165 = (x689&((x690%x691)>x692));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x693 = INT32_MAX;
	int8_t x694 = INT8_MAX;
	static int8_t x695 = INT8_MIN;
	uint8_t x696 = UINT8_MAX;

    t166 = (x693&((x694%x695)>x696));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x697 = 8886315LLU;
	volatile uint16_t x698 = 11156U;
	int64_t x699 = -1LL;
	static uint32_t x700 = 17153919U;

    t167 = (x697&((x698%x699)>x700));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x701 = -1;
	volatile int64_t x702 = INT64_MIN;
	static uint8_t x703 = 24U;
	int32_t x704 = 7120377;
	int32_t t168 = -106165913;

    t168 = (x701&((x702%x703)>x704));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x705 = 8215U;
	uint16_t x707 = UINT16_MAX;
	int16_t x708 = INT16_MAX;
	int32_t t169 = -330809805;

    t169 = (x705&((x706%x707)>x708));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x710 = -1;
	uint32_t x712 = 68U;
	volatile uint32_t t170 = 650537U;

    t170 = (x709&((x710%x711)>x712));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x713 = INT64_MIN;
	volatile int16_t x714 = INT16_MIN;
	volatile int64_t x716 = INT64_MIN;
	volatile int64_t t171 = 10071058418252968LL;

    t171 = (x713&((x714%x715)>x716));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x717 = UINT16_MAX;
	volatile int64_t x718 = 130494LL;
	uint64_t x720 = UINT64_MAX;

    t172 = (x717&((x718%x719)>x720));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x722 = 0;
	static int32_t x723 = INT32_MIN;
	int64_t x724 = INT64_MIN;
	int64_t t173 = -137LL;

    t173 = (x721&((x722%x723)>x724));

    if (t173 != 1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x725 = -435323LL;
	uint32_t x727 = 2122985382U;
	static int8_t x728 = -1;
	int64_t t174 = 683LL;

    t174 = (x725&((x726%x727)>x728));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x729 = -1;
	uint32_t x731 = UINT32_MAX;
	uint32_t x732 = 738816U;
	volatile int32_t t175 = -10239899;

    t175 = (x729&((x730%x731)>x732));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x733 = -1;
	uint32_t x734 = 24975U;
	volatile int8_t x735 = INT8_MIN;
	uint64_t x736 = UINT64_MAX;
	volatile int32_t t176 = -720852;

    t176 = (x733&((x734%x735)>x736));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x737 = 7829934881206898LLU;
	volatile uint16_t x738 = 0U;
	static uint8_t x739 = UINT8_MAX;
	static uint64_t t177 = 22846143559LLU;

    t177 = (x737&((x738%x739)>x740));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x741 = 9193;
	volatile int32_t x742 = INT32_MAX;
	uint16_t x744 = 5340U;
	int32_t t178 = 1;

    t178 = (x741&((x742%x743)>x744));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x745 = -1LL;
	static volatile uint8_t x746 = 7U;
	int32_t x747 = INT32_MIN;
	uint64_t x748 = UINT64_MAX;
	int64_t t179 = -5618648849140LL;

    t179 = (x745&((x746%x747)>x748));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x749 = -36800055871938LL;
	static uint64_t x750 = 2346566640LLU;
	uint8_t x751 = 72U;
	int32_t x752 = INT32_MIN;
	volatile int64_t t180 = 0LL;

    t180 = (x749&((x750%x751)>x752));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x753 = UINT32_MAX;
	int32_t x754 = -1;
	volatile int32_t x755 = INT32_MAX;
	static volatile int64_t x756 = -18822706913LL;
	volatile uint32_t t181 = 1995714U;

    t181 = (x753&((x754%x755)>x756));

    if (t181 != 1U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x757 = UINT32_MAX;
	static uint64_t x758 = 419079858694499LLU;
	int32_t x759 = -1;
	int16_t x760 = -6342;
	volatile uint32_t t182 = 219U;

    t182 = (x757&((x758%x759)>x760));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x761 = -1;
	uint16_t x762 = 13155U;
	int16_t x763 = -5;
	uint32_t x764 = UINT32_MAX;
	static volatile int32_t t183 = 0;

    t183 = (x761&((x762%x763)>x764));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x765 = 0;
	volatile int32_t x766 = INT32_MIN;
	int32_t x767 = 2734;
	volatile uint64_t x768 = 337591208402301654LLU;
	static volatile int32_t t184 = 196;

    t184 = (x765&((x766%x767)>x768));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x769 = INT64_MIN;
	static int8_t x770 = INT8_MIN;
	int32_t x771 = INT32_MAX;
	uint8_t x772 = UINT8_MAX;
	volatile int64_t t185 = -1311LL;

    t185 = (x769&((x770%x771)>x772));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint32_t x773 = 4834U;
	volatile int8_t x774 = INT8_MIN;
	static uint32_t t186 = 174U;

    t186 = (x773&((x774%x775)>x776));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x777 = INT8_MIN;
	volatile uint16_t x778 = 3U;
	uint16_t x779 = 12576U;
	int64_t x780 = INT64_MIN;
	static volatile int32_t t187 = -17261;

    t187 = (x777&((x778%x779)>x780));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x781 = INT8_MIN;
	uint8_t x782 = 63U;
	int8_t x783 = 8;
	int8_t x784 = INT8_MIN;

    t188 = (x781&((x782%x783)>x784));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x785 = -1LL;
	int32_t x787 = INT32_MIN;
	volatile int16_t x788 = -1;
	static volatile int64_t t189 = 222930688LL;

    t189 = (x785&((x786%x787)>x788));

    if (t189 != 1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x789 = INT16_MAX;
	int32_t x790 = -1;
	static int32_t x791 = INT32_MIN;
	static int8_t x792 = INT8_MIN;
	static volatile int32_t t190 = -367;

    t190 = (x789&((x790%x791)>x792));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x793 = INT32_MAX;
	int8_t x794 = -1;
	static int32_t t191 = 21840986;

    t191 = (x793&((x794%x795)>x796));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x797 = -1;
	uint32_t x799 = 40017U;
	int32_t t192 = -12;

    t192 = (x797&((x798%x799)>x800));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x801 = INT32_MIN;
	volatile int16_t x802 = -1;
	volatile uint8_t x803 = 16U;
	volatile int32_t x804 = INT32_MIN;
	int32_t t193 = 0;

    t193 = (x801&((x802%x803)>x804));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x805 = -1;
	uint8_t x806 = UINT8_MAX;
	int32_t t194 = 15;

    t194 = (x805&((x806%x807)>x808));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x809 = 4U;
	uint64_t x810 = 7734LLU;
	int32_t x811 = INT32_MIN;
	static int8_t x812 = INT8_MAX;
	volatile int32_t t195 = 30046950;

    t195 = (x809&((x810%x811)>x812));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x814 = INT64_MIN;
	volatile int32_t x816 = INT32_MIN;
	static uint32_t t196 = 8U;

    t196 = (x813&((x814%x815)>x816));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x817 = -1;
	volatile int64_t x818 = INT64_MIN;
	int32_t x819 = INT32_MIN;
	volatile int32_t t197 = 1;

    t197 = (x817&((x818%x819)>x820));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x821 = UINT16_MAX;
	int16_t x822 = INT16_MAX;
	static int32_t x823 = -1;
	int32_t t198 = -63093;

    t198 = (x821&((x822%x823)>x824));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x825 = 24;
	int32_t x826 = -1;
	int64_t x827 = -3312566156623LL;
	int8_t x828 = INT8_MIN;
	int32_t t199 = 2;

    t199 = (x825&((x826%x827)>x828));

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

