
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

int16_t x11 = -1;
int16_t x20 = 91;
int64_t x22 = INT64_MAX;
uint32_t x33 = 53U;
static uint32_t x34 = 262032U;
int32_t x35 = INT32_MIN;
volatile int32_t x36 = -274603622;
static uint8_t x38 = UINT8_MAX;
static uint16_t x39 = UINT16_MAX;
int8_t x41 = INT8_MIN;
volatile uint64_t t10 = 4622772372LLU;
int32_t x52 = 154813854;
uint8_t x54 = 5U;
int16_t x60 = -1;
volatile int8_t x64 = 24;
int64_t x71 = INT64_MIN;
static uint64_t t18 = 1LLU;
volatile int32_t x84 = 176940547;
int32_t t20 = -91;
int8_t x87 = INT8_MIN;
static int64_t x90 = -77905458255LL;
int16_t x92 = INT16_MIN;
volatile int8_t x99 = INT8_MIN;
uint16_t x102 = 684U;
volatile int64_t t27 = -28282029537LL;
uint8_t x116 = UINT8_MAX;
int16_t x117 = -1;
static volatile uint64_t x119 = 818050389LLU;
static volatile int64_t x124 = INT64_MIN;
static int8_t x130 = 27;
uint8_t x134 = UINT8_MAX;
int8_t x136 = INT8_MIN;
static uint64_t x140 = 244679819598682534LLU;
volatile int64_t x146 = INT64_MIN;
int16_t x159 = INT16_MAX;
int32_t x160 = -10;
static int64_t x166 = -1LL;
int64_t x171 = -7435568036LL;
uint8_t x172 = 0U;
uint64_t t43 = 38543387435LLU;
int32_t x179 = -2860880;
uint64_t t45 = 2991079LLU;
volatile int8_t x185 = 0;
static uint8_t x190 = 11U;
static int32_t x204 = INT32_MIN;
static int32_t x207 = -1;
static int32_t t51 = 893917;
int8_t x210 = 0;
int32_t x221 = INT32_MIN;
int32_t x227 = -1;
int16_t x229 = 481;
int32_t x231 = -1;
int64_t x239 = INT64_MIN;
int32_t x248 = INT32_MIN;
static volatile int32_t x250 = -950577;
volatile int8_t x252 = INT8_MIN;
uint32_t t64 = 10144U;
uint8_t x261 = UINT8_MAX;
static volatile int8_t x276 = -1;
volatile int64_t x277 = -23531477070843545LL;
volatile int64_t t70 = 179172183380086582LL;
uint32_t x292 = 156485161U;
volatile uint32_t t72 = 1776416U;
static uint64_t x294 = UINT64_MAX;
uint64_t x298 = 12509146519LLU;
int32_t x300 = -1787;
uint64_t t74 = 3128LLU;
int64_t x301 = INT64_MIN;
int64_t t76 = 10400925918192LL;
volatile uint32_t t77 = 3U;
int32_t x314 = 12539;
int64_t x316 = 2183035713099LL;
static uint8_t x319 = 0U;
static int64_t x320 = 0LL;
static uint8_t x329 = 59U;
int8_t x343 = 0;
int32_t x347 = 13372;
uint64_t t86 = 86338509301LLU;
volatile int64_t x351 = -1LL;
int64_t t87 = -4279616303LL;
uint32_t t88 = 252U;
volatile int64_t x359 = -245LL;
static uint32_t x360 = 181664U;
volatile int64_t t89 = 47527917784096807LL;
volatile uint64_t x365 = 53548242LLU;
int64_t x372 = -1LL;
static volatile uint32_t x385 = UINT32_MAX;
int64_t x386 = INT64_MAX;
uint8_t x390 = 46U;
int64_t x392 = INT64_MIN;
volatile int64_t t97 = -5950997714317LL;
static int64_t x395 = INT64_MAX;
static uint32_t x396 = 124229U;
int32_t t101 = 6551;
int8_t x411 = INT8_MAX;
int32_t t102 = -1;
int8_t x416 = -9;
uint64_t x423 = UINT64_MAX;
volatile int16_t x427 = -10313;
int8_t x434 = 1;
static int8_t x435 = INT8_MIN;
int32_t x436 = INT32_MIN;
uint64_t x446 = 226083LLU;
int32_t x453 = -448;
static int64_t x455 = 186633352LL;
int64_t x459 = -742LL;
volatile int64_t t116 = -712265LL;
volatile int32_t x469 = INT32_MAX;
static int32_t x471 = INT32_MAX;
uint64_t x473 = UINT64_MAX;
volatile int32_t x474 = INT32_MIN;
volatile int32_t t119 = -1;
static volatile int64_t t120 = INT64_MIN;
int8_t x486 = INT8_MAX;
static int16_t x495 = -1;
uint16_t x498 = 0U;
int64_t x500 = INT64_MIN;
static int8_t x501 = 12;
uint64_t t125 = 3486LLU;
static int32_t x509 = -1;
static int32_t t127 = -6;
volatile int32_t x516 = -1;
volatile uint32_t x519 = 17U;
int64_t t129 = 1LL;
uint64_t x522 = UINT64_MAX;
uint16_t x525 = 61U;
int16_t x526 = INT16_MIN;
int64_t x527 = 277584634915164472LL;
static int32_t x540 = INT32_MIN;
volatile uint64_t x545 = UINT64_MAX;
int64_t x547 = INT64_MIN;
uint16_t x550 = 6201U;
static uint32_t x556 = 76U;
uint64_t t138 = 4533550LLU;
volatile uint32_t t140 = 722U;
uint32_t x569 = 599901U;
uint8_t x574 = UINT8_MAX;
int64_t x576 = INT64_MIN;
int16_t x581 = INT16_MIN;
volatile int16_t x584 = INT16_MAX;
int32_t x586 = INT32_MIN;
int64_t x588 = INT64_MAX;
uint8_t x591 = 0U;
volatile int64_t t148 = 288931393LL;
int8_t x598 = -25;
int32_t x601 = -664443390;
volatile int32_t x605 = -1;
volatile int64_t x607 = -356663996583234688LL;
int64_t t151 = 111739688977109020LL;
int8_t x609 = 60;
int64_t x611 = 37385286432LL;
int16_t x612 = 0;
uint8_t x622 = 1U;
uint64_t x623 = 6788687LLU;
static int8_t x627 = INT8_MAX;
int32_t x642 = -1;
int64_t x644 = INT64_MIN;
volatile uint64_t t167 = 1570431LLU;
int16_t x673 = INT16_MAX;
uint16_t x674 = 30U;
static uint32_t x679 = UINT32_MAX;
int16_t x683 = INT16_MIN;
int16_t x689 = -1;
uint8_t x691 = 2U;
uint32_t x694 = 3371213U;
int64_t x695 = INT64_MIN;
int64_t x696 = INT64_MAX;
volatile int64_t t173 = -409LL;
volatile int64_t t175 = 13514031391LL;
int64_t x706 = 60296LL;
int64_t t176 = 1871194140852LL;
uint32_t x715 = UINT32_MAX;
volatile uint32_t t178 = 822120409U;
int64_t x719 = INT64_MIN;
int64_t x735 = 816861967LL;
uint16_t x737 = 1516U;
uint16_t x738 = UINT16_MAX;
int32_t x740 = INT32_MAX;
volatile int32_t t184 = 9;
uint32_t x749 = 61243U;
static uint32_t x750 = 38182U;
uint16_t x755 = UINT16_MAX;
uint16_t x758 = 2U;
volatile int32_t x761 = -1;
volatile int16_t x769 = -1;
volatile int64_t x772 = INT64_MAX;
int16_t x781 = INT16_MAX;
volatile int8_t x787 = -1;
int32_t t196 = -6;
static int16_t x795 = INT16_MAX;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	volatile int16_t x2 = INT16_MIN;
	static int8_t x3 = 1;
	int16_t x4 = 0;
	int32_t t0 = -74783;

    t0 = (x1&((x2^x3)^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	int64_t x6 = -1LL;
	int32_t x7 = -7461012;
	int16_t x8 = -2;
	uint64_t t1 = 2186048831LLU;

    t1 = (x5&((x6^x7)^x8));

    if (t1 != 18446744073702090605LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = -1;
	volatile int64_t x10 = 30107492LL;
	int16_t x12 = -1;
	int64_t t2 = 3LL;

    t2 = (x9&((x10^x11)^x12));

    if (t2 != 30107492LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 42U;
	static uint16_t x14 = 39U;
	int64_t x15 = INT64_MAX;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = 895974686LL;

    t3 = (x13&((x14^x15)^x16));

    if (t3 != 8LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int32_t x18 = -1;
	static uint32_t x19 = 7505330U;
	uint32_t t4 = 13308U;

    t4 = (x17&((x18^x19)^x20));

    if (t4 != 4287430656U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = 36U;
	int64_t x23 = INT64_MAX;
	volatile int16_t x24 = INT16_MIN;
	volatile int64_t t5 = -389606106363951498LL;

    t5 = (x21&((x22^x23)^x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = INT8_MIN;
	volatile uint16_t x26 = 15078U;
	int64_t x27 = -1LL;
	int32_t x28 = INT32_MIN;
	int64_t t6 = 89241624742648LL;

    t6 = (x25&((x26^x27)^x28));

    if (t6 != 2147468544LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	volatile int16_t x30 = -1;
	uint32_t x31 = UINT32_MAX;
	int16_t x32 = -1;
	uint32_t t7 = 2U;

    t7 = (x29&((x30^x31)^x32));

    if (t7 != 4294934528U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t t8 = 6U;

    t8 = (x33&((x34^x35)^x36));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MIN;
	volatile int8_t x40 = -3;
	static int32_t t9 = 24;

    t9 = (x37&((x38^x39)^x40));

    if (t9 != -65408) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x42 = 3U;
	uint64_t x43 = 32532314370354LLU;
	volatile int8_t x44 = 38;

    t10 = (x41&((x42^x43)^x44));

    if (t10 != 32532314370304LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	uint16_t x46 = 3U;
	static volatile uint8_t x47 = 5U;
	int64_t x48 = -2836LL;
	int64_t t11 = 94026144901597LL;

    t11 = (x45&((x46^x47)^x48));

    if (t11 != 62698LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = -1LL;
	int32_t x50 = INT32_MIN;
	int32_t x51 = INT32_MIN;
	static volatile int64_t t12 = -199559LL;

    t12 = (x49&((x50^x51)^x52));

    if (t12 != 154813854LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 26111LLU;
	volatile uint32_t x55 = 409U;
	volatile uint8_t x56 = UINT8_MAX;
	uint64_t t13 = 4474844409LLU;

    t13 = (x53&((x54^x55)^x56));

    if (t13 != 355LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = INT64_MIN;
	static int64_t t14 = 25002166LL;

    t14 = (x57&((x58^x59)^x60));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	volatile uint8_t x62 = 0U;
	static int64_t x63 = 1020464674624LL;
	int64_t t15 = -41940222LL;

    t15 = (x61&((x62^x63)^x64));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 15867U;
	uint8_t x66 = UINT8_MAX;
	uint64_t x67 = 13299444LLU;
	volatile int32_t x68 = 85;
	static volatile uint64_t t16 = 6273652382LLU;

    t16 = (x65&((x66^x67)^x68));

    if (t16 != 11354LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 0LLU;
	uint8_t x70 = 24U;
	volatile int32_t x72 = -395207;
	static uint64_t t17 = 518LLU;

    t17 = (x69&((x70^x71)^x72));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = -1161401;
	int64_t x74 = INT64_MAX;
	volatile uint64_t x75 = 46LLU;
	int64_t x76 = -3LL;

    t18 = (x73&((x74^x75)^x76));

    if (t18 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	int16_t x78 = INT16_MAX;
	int8_t x79 = 6;
	uint8_t x80 = 127U;
	volatile int64_t t19 = 49724421LL;

    t19 = (x77&((x78^x79)^x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 39U;
	static int32_t x82 = INT32_MIN;
	int16_t x83 = 29;

    t20 = (x81&((x82^x83)^x84));

    if (t20 != 6) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -1;
	volatile int8_t x86 = INT8_MIN;
	int16_t x88 = INT16_MAX;
	static int32_t t21 = 277457042;

    t21 = (x85&((x86^x87)^x88));

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = INT16_MAX;
	uint32_t x91 = 241204U;
	volatile int64_t t22 = -136LL;

    t22 = (x89&((x90^x91)^x92));

    if (t22 != 9605LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x93 = UINT64_MAX;
	int64_t x94 = INT64_MIN;
	static uint16_t x95 = 0U;
	static uint32_t x96 = 101U;
	uint64_t t23 = 123239365471361LLU;

    t23 = (x93&((x94^x95)^x96));

    if (t23 != 9223372036854775909LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MIN;
	volatile int16_t x98 = INT16_MIN;
	uint32_t x100 = UINT32_MAX;
	int64_t t24 = -100170196LL;

    t24 = (x97&((x98^x99)^x100));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x101 = -22907LL;
	int8_t x103 = INT8_MAX;
	volatile uint32_t x104 = 7U;
	int64_t t25 = -64608190428911LL;

    t25 = (x101&((x102^x103)^x104));

    if (t25 != 644LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -1;
	static uint32_t x106 = 3U;
	int64_t x107 = -20LL;
	static volatile int8_t x108 = INT8_MIN;
	int64_t t26 = 5282123LL;

    t26 = (x105&((x106^x107)^x108));

    if (t26 != 111LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint16_t x109 = 0U;
	int64_t x110 = INT64_MAX;
	int32_t x111 = -3489042;
	int16_t x112 = INT16_MIN;

    t27 = (x109&((x110^x111)^x112));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = INT8_MIN;
	volatile int64_t x114 = INT64_MIN;
	int32_t x115 = INT32_MIN;
	volatile int64_t t28 = 339LL;

    t28 = (x113&((x114^x115)^x116));

    if (t28 != 9223372034707292288LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x118 = 1382099LLU;
	int16_t x120 = INT16_MAX;
	uint64_t t29 = 5807674LLU;

    t29 = (x117&((x118^x119)^x120));

    if (t29 != 819403897LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = 43256697998018662LL;
	int32_t x122 = -1;
	int64_t x123 = INT64_MIN;
	static int64_t t30 = -23290LL;

    t30 = (x121&((x122^x123)^x124));

    if (t30 != 43256697998018662LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = UINT64_MAX;
	volatile int64_t x126 = -114228LL;
	int16_t x127 = INT16_MIN;
	int8_t x128 = INT8_MIN;
	volatile uint64_t t31 = 1128103663LLU;

    t31 = (x125&((x126^x127)^x128));

    if (t31 != 18446744073709436492LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x129 = 838012U;
	int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MIN;
	volatile uint32_t t32 = 24U;

    t32 = (x129&((x130^x131)^x132));

    if (t32 != 837912U) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x133 = 15551U;
	volatile uint8_t x135 = 51U;
	volatile int32_t t33 = 893;

    t33 = (x133&((x134^x135)^x136));

    if (t33 != 15372) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	static uint16_t x138 = UINT16_MAX;
	int32_t x139 = 53;
	static uint64_t t34 = 1891983195LLU;

    t34 = (x137&((x138^x139)^x140));

    if (t34 != 244679817939648512LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = -1;
	volatile int64_t x142 = INT64_MAX;
	int32_t x143 = INT32_MAX;
	uint16_t x144 = UINT16_MAX;
	volatile int64_t t35 = -1LL;

    t35 = (x141&((x142^x143)^x144));

    if (t35 != 9223372034707357695LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = 0;
	static uint64_t x147 = UINT64_MAX;
	volatile int32_t x148 = INT32_MIN;
	volatile uint64_t t36 = 15497179LLU;

    t36 = (x145&((x146^x147)^x148));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 303U;
	static int8_t x150 = INT8_MIN;
	int8_t x151 = 33;
	int64_t x152 = INT64_MIN;
	static volatile int64_t t37 = -482229889380801LL;

    t37 = (x149&((x150^x151)^x152));

    if (t37 != 289LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x153 = -1;
	int64_t x154 = INT64_MIN;
	static int64_t x155 = INT64_MAX;
	int8_t x156 = -1;
	volatile int64_t t38 = -709123999LL;

    t38 = (x153&((x154^x155)^x156));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = UINT16_MAX;
	volatile int32_t x158 = -1;
	volatile int32_t t39 = -49573574;

    t39 = (x157&((x158^x159)^x160));

    if (t39 != 32758) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -1;
	volatile int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MAX;
	static volatile int16_t x164 = INT16_MIN;
	int32_t t40 = 16134156;

    t40 = (x161&((x162^x163)^x164));

    if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	static uint32_t x167 = UINT32_MAX;
	static volatile uint8_t x168 = 1U;
	int64_t t41 = 17820LL;

    t41 = (x165&((x166^x167)^x168));

    if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -1;
	int32_t x170 = 13;
	volatile int64_t t42 = 7LL;

    t42 = (x169&((x170^x171)^x172));

    if (t42 != -7435568047LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = 0;
	uint32_t x174 = 1153U;
	uint64_t x175 = 26429952834860LLU;
	int16_t x176 = -1224;

    t43 = (x173&((x174^x175)^x176));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = -166535;
	int8_t x178 = 11;
	uint8_t x180 = 3U;
	int32_t t44 = -47177;

    t44 = (x177&((x178^x179)^x180));

    if (t44 != -2863048) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = 18458207LLU;
	int8_t x182 = -3;
	int8_t x183 = INT8_MIN;
	uint64_t x184 = 892387047932281927LLU;

    t45 = (x181&((x182^x183)^x184));

    if (t45 != 623642LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x186 = -1;
	static uint16_t x187 = UINT16_MAX;
	volatile uint32_t x188 = 40U;
	volatile uint32_t t46 = 1346U;

    t46 = (x185&((x186^x187)^x188));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x189 = 351960U;
	static int16_t x191 = INT16_MAX;
	static uint16_t x192 = 63U;
	volatile uint32_t t47 = 178U;

    t47 = (x189&((x190^x191)^x192));

    if (t47 != 24264U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -310497;
	static int8_t x194 = 2;
	uint64_t x195 = 275928874550753466LLU;
	volatile int64_t x196 = -1LL;
	uint64_t t48 = 44647939590967LLU;

    t48 = (x193&((x194^x195)^x196));

    if (t48 != 18170815199158797063LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -45772155;
	int8_t x198 = -1;
	int64_t x199 = -1LL;
	volatile uint8_t x200 = 41U;
	static int64_t t49 = -953583592018812264LL;

    t49 = (x197&((x198^x199)^x200));

    if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MAX;
	int64_t x202 = INT64_MIN;
	static int16_t x203 = INT16_MIN;
	volatile int64_t t50 = -214494LL;

    t50 = (x201&((x202^x203)^x204));

    if (t50 != 2147450880LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 1U;
	volatile int32_t x206 = INT32_MIN;
	static uint16_t x208 = 3559U;

    t51 = (x205&((x206^x207)^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x209 = -1;
	int64_t x211 = INT64_MIN;
	int32_t x212 = -130367;
	int64_t t52 = 106824687977498396LL;

    t52 = (x209&((x210^x211)^x212));

    if (t52 != 9223372036854645441LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = UINT8_MAX;
	uint16_t x214 = 4U;
	int8_t x215 = INT8_MIN;
	volatile uint32_t x216 = UINT32_MAX;
	volatile uint32_t t53 = 1046802U;

    t53 = (x213&((x214^x215)^x216));

    if (t53 != 123U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x217 = -94587727567403LL;
	static int32_t x218 = INT32_MAX;
	int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MAX;
	volatile int64_t t54 = 1LL;

    t54 = (x217&((x218^x219)^x220));

    if (t54 != -94588064759808LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x222 = 209258918U;
	volatile uint16_t x223 = UINT16_MAX;
	int64_t x224 = INT64_MAX;
	volatile int64_t t55 = -15LL;

    t55 = (x221&((x222^x223)^x224));

    if (t55 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -17;
	int8_t x226 = INT8_MIN;
	int64_t x228 = INT64_MIN;
	static int64_t t56 = 5569254630539LL;

    t56 = (x225&((x226^x227)^x228));

    if (t56 != -9223372036854775697LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x230 = INT32_MAX;
	int64_t x232 = INT64_MIN;
	volatile int64_t t57 = -11364462533345382LL;

    t57 = (x229&((x230^x231)^x232));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = 1;
	uint64_t x234 = 1464447492457LLU;
	static int8_t x235 = -1;
	int32_t x236 = INT32_MIN;
	static volatile uint64_t t58 = 8589334340962320690LLU;

    t58 = (x233&((x234^x235)^x236));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 11U;
	int8_t x238 = INT8_MAX;
	volatile int64_t x240 = -1LL;
	volatile int64_t t59 = -1LL;

    t59 = (x237&((x238^x239)^x240));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	static int32_t x242 = INT32_MIN;
	static int16_t x243 = 14;
	uint16_t x244 = UINT16_MAX;
	uint64_t t60 = 1907615526997730LLU;

    t60 = (x241&((x242^x243)^x244));

    if (t60 != 18446744071562133489LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -3;
	int16_t x246 = -1;
	static volatile int64_t x247 = -1LL;
	int64_t t61 = -539335949245698LL;

    t61 = (x245&((x246^x247)^x248));

    if (t61 != -2147483648LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x249 = -1501;
	volatile uint32_t x251 = 13529U;
	volatile uint32_t t62 = 264U;

    t62 = (x249&((x250^x251)^x252));

    if (t62 != 962562U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = 3478U;
	static int8_t x254 = -1;
	uint16_t x255 = UINT16_MAX;
	uint64_t x256 = UINT64_MAX;
	static uint64_t t63 = 217LLU;

    t63 = (x253&((x254^x255)^x256));

    if (t63 != 3478LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = -46;
	static volatile int8_t x258 = -13;
	uint32_t x259 = UINT32_MAX;
	static volatile int16_t x260 = INT16_MIN;

    t64 = (x257&((x258^x259)^x260));

    if (t64 != 4294934528U) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x262 = 1LLU;
	uint8_t x263 = 1U;
	int64_t x264 = -535523535533846587LL;
	uint64_t t65 = 776226542430LLU;

    t65 = (x261&((x262^x263)^x264));

    if (t65 != 197LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MAX;
	static int32_t x266 = 5841110;
	uint64_t x267 = UINT64_MAX;
	int64_t x268 = -1LL;
	volatile uint64_t t66 = 599600760LLU;

    t66 = (x265&((x266^x267)^x268));

    if (t66 != 8406LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 11LLU;
	static uint32_t x270 = 80232U;
	int16_t x271 = -1;
	int64_t x272 = 25031414LL;
	volatile uint64_t t67 = 1025LLU;

    t67 = (x269&((x270^x271)^x272));

    if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 1U;
	volatile int32_t x274 = -2427;
	int32_t x275 = INT32_MIN;
	int32_t t68 = 603289788;

    t68 = (x273&((x274^x275)^x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x278 = -1LL;
	int8_t x279 = INT8_MIN;
	static int32_t x280 = INT32_MIN;
	static int64_t t69 = -45339327LL;

    t69 = (x277&((x278^x279)^x280));

    if (t69 != -23531477274722201LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	int64_t x282 = -1LL;
	int64_t x283 = 3674LL;
	int16_t x284 = INT16_MIN;

    t70 = (x281&((x282^x283)^x284));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x285 = -1;
	volatile int32_t x286 = 1;
	int64_t x287 = -1LL;
	int16_t x288 = INT16_MIN;
	volatile int64_t t71 = -47954LL;

    t71 = (x285&((x286^x287)^x288));

    if (t71 != 32766LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x289 = -4;
	uint8_t x290 = 6U;
	volatile int8_t x291 = INT8_MIN;

    t72 = (x289&((x290^x291)^x292));

    if (t72 != 4138482092U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = -5;
	static volatile int64_t x295 = 99806682445LL;
	volatile int64_t x296 = INT64_MAX;
	static uint64_t t73 = 102261974400862LLU;

    t73 = (x293&((x294^x295)^x296));

    if (t73 != 9223372136661458249LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x297 = 2138468112203LLU;
	uint16_t x299 = 4U;

    t74 = (x297&((x298^x299)^x300));

    if (t74 != 2134701609986LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x302 = 0U;
	static uint16_t x303 = 7U;
	int8_t x304 = INT8_MIN;
	volatile int64_t t75 = INT64_MIN;

    t75 = (x301&((x302^x303)^x304));

    if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MAX;
	int8_t x306 = 1;
	int64_t x307 = 2199665056097475995LL;
	volatile int64_t x308 = INT64_MIN;

    t76 = (x305&((x306^x307)^x308));

    if (t76 != 26LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x309 = 0U;
	volatile uint32_t x310 = 160497210U;
	int8_t x311 = INT8_MIN;
	int32_t x312 = INT32_MAX;

    t77 = (x309&((x310^x311)^x312));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	volatile int64_t t78 = 542LL;

    t78 = (x313&((x314^x315)^x316));

    if (t78 != -2183990870016LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x317 = -8347531752560LL;
	volatile int32_t x318 = 903982;
	static volatile int64_t t79 = -764554LL;

    t79 = (x317&((x318^x319)^x320));

    if (t79 != 379648LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x321 = UINT8_MAX;
	int16_t x322 = 5;
	int32_t x323 = INT32_MAX;
	int8_t x324 = -1;
	volatile int32_t t80 = -1;

    t80 = (x321&((x322^x323)^x324));

    if (t80 != 5) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	int64_t x326 = INT64_MIN;
	uint32_t x327 = 71U;
	int16_t x328 = INT16_MAX;
	volatile int64_t t81 = 8071855984421036LL;

    t81 = (x325&((x326^x327)^x328));

    if (t81 != -9223372036854743112LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = -23706797203892311LL;
	volatile int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MIN;
	int64_t t82 = -8538941937321661LL;

    t82 = (x329&((x330^x331)^x332));

    if (t82 != 41LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = -1;
	int16_t x334 = -1;
	int8_t x335 = INT8_MIN;
	uint32_t x336 = 205U;
	volatile uint32_t t83 = 844U;

    t83 = (x333&((x334^x335)^x336));

    if (t83 != 178U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 0U;
	int32_t x338 = 95173;
	int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = 177152437;

    t84 = (x337&((x338^x339)^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x341 = 1U;
	uint64_t x342 = 1191925130682415LLU;
	volatile uint8_t x344 = 127U;
	volatile uint64_t t85 = 2265529171809LLU;

    t85 = (x341&((x342^x343)^x344));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = UINT64_MAX;
	uint32_t x346 = UINT32_MAX;
	static volatile uint64_t x348 = UINT64_MAX;

    t86 = (x345&((x346^x347)^x348));

    if (t86 != 18446744069414597692LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint16_t x349 = 7199U;
	volatile int16_t x350 = INT16_MIN;
	int16_t x352 = INT16_MIN;

    t87 = (x349&((x350^x351)^x352));

    if (t87 != 7199LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 2047U;
	int32_t x354 = INT32_MIN;
	int32_t x355 = -1;
	static uint32_t x356 = UINT32_MAX;

    t88 = (x353&((x354^x355)^x356));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	int16_t x358 = INT16_MIN;

    t89 = (x357&((x358^x359)^x360));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x361 = UINT32_MAX;
	int32_t x362 = -1;
	uint16_t x363 = 294U;
	uint16_t x364 = 12U;
	volatile uint32_t t90 = 927627U;

    t90 = (x361&((x362^x363)^x364));

    if (t90 != 4294966997U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x366 = 39U;
	volatile int64_t x367 = INT64_MAX;
	int32_t x368 = -1;
	volatile uint64_t t91 = 119LLU;

    t91 = (x365&((x366^x367)^x368));

    if (t91 != 2LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -1;
	volatile int8_t x370 = INT8_MIN;
	uint16_t x371 = UINT16_MAX;
	volatile int64_t t92 = 16896613524294LL;

    t92 = (x369&((x370^x371)^x372));

    if (t92 != 65408LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = 1;
	uint8_t x374 = 0U;
	int16_t x375 = -1;
	volatile uint16_t x376 = 1829U;
	volatile int32_t t93 = -31637;

    t93 = (x373&((x374^x375)^x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 3385034937636LLU;
	int8_t x378 = -1;
	int16_t x379 = -1;
	uint64_t x380 = 3LLU;
	volatile uint64_t t94 = 104987056LLU;

    t94 = (x377&((x378^x379)^x380));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x381 = 510;
	int16_t x382 = -1;
	int64_t x383 = INT64_MAX;
	int32_t x384 = 1;
	int64_t t95 = -218096016592089LL;

    t95 = (x381&((x382^x383)^x384));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x387 = INT8_MIN;
	volatile int32_t x388 = 97;
	volatile int64_t t96 = 398354448287LL;

    t96 = (x385&((x386^x387)^x388));

    if (t96 != 30LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	int16_t x391 = INT16_MIN;

    t97 = (x389&((x390^x391)^x392));

    if (t97 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	int64_t x394 = -2111519624LL;
	volatile int64_t t98 = -1167630323598065301LL;

    t98 = (x393&((x394^x395)^x396));

    if (t98 != -9223372034743279934LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x397 = UINT16_MAX;
	int64_t x398 = 2808985LL;
	int8_t x399 = -2;
	uint32_t x400 = 426U;
	volatile int64_t t99 = -5100750LL;

    t99 = (x397&((x398^x399)^x400));

    if (t99 != 8909LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x401 = 2341518;
	volatile uint16_t x402 = 3942U;
	static volatile uint16_t x403 = 2U;
	volatile int32_t x404 = INT32_MIN;
	int32_t t100 = 643258;

    t100 = (x401&((x402^x403)^x404));

    if (t100 != 2564) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = UINT16_MAX;
	static volatile uint16_t x406 = 98U;
	static uint8_t x407 = UINT8_MAX;
	volatile int32_t x408 = -465578959;

    t101 = (x405&((x406^x407)^x408));

    if (t101 != 54444) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	int16_t x410 = INT16_MIN;
	int8_t x412 = INT8_MIN;

    t102 = (x409&((x410^x411)^x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x413 = 63U;
	uint32_t x414 = UINT32_MAX;
	volatile int32_t x415 = INT32_MAX;
	volatile uint32_t t103 = 97593836U;

    t103 = (x413&((x414^x415)^x416));

    if (t103 != 55U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 31546U;
	volatile uint8_t x418 = 16U;
	int8_t x419 = 1;
	uint8_t x420 = 7U;
	volatile uint32_t t104 = 26U;

    t104 = (x417&((x418^x419)^x420));

    if (t104 != 18U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = UINT64_MAX;
	static volatile int32_t x422 = INT32_MIN;
	static int64_t x424 = 1LL;
	volatile uint64_t t105 = 10LLU;

    t105 = (x421&((x422^x423)^x424));

    if (t105 != 2147483646LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 13151U;
	int16_t x426 = -1;
	int64_t x428 = -1LL;
	volatile int64_t t106 = -73598629921LL;

    t106 = (x425&((x426^x427)^x428));

    if (t106 != 4887LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 250LLU;
	static int16_t x430 = 5;
	int32_t x431 = INT32_MIN;
	int32_t x432 = INT32_MAX;
	static uint64_t t107 = 30779LLU;

    t107 = (x429&((x430^x431)^x432));

    if (t107 != 250LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x433 = INT64_MAX;
	volatile int64_t t108 = 441036LL;

    t108 = (x433&((x434^x435)^x436));

    if (t108 != 2147483521LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	static uint32_t x438 = 964757U;
	volatile int32_t x439 = 48;
	int32_t x440 = INT32_MIN;
	volatile uint32_t t109 = 156063U;

    t109 = (x437&((x438^x439)^x440));

    if (t109 != 2147483648U) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x441 = UINT8_MAX;
	static int64_t x442 = -1LL;
	volatile int32_t x443 = INT32_MIN;
	int32_t x444 = INT32_MIN;
	static int64_t t110 = -17634407779268LL;

    t110 = (x441&((x442^x443)^x444));

    if (t110 != 255LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = -1;
	int32_t x447 = INT32_MIN;
	int64_t x448 = INT64_MIN;
	uint64_t t111 = 13331191527852LLU;

    t111 = (x445&((x446^x447)^x448));

    if (t111 != 9223372034707518243LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 214064U;
	volatile int64_t x450 = INT64_MAX;
	static int32_t x451 = INT32_MAX;
	int16_t x452 = INT16_MAX;
	volatile int64_t t112 = 121145387535642LL;

    t112 = (x449&((x450^x451)^x452));

    if (t112 != 17456LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x454 = -1;
	static uint64_t x456 = UINT64_MAX;
	volatile uint64_t t113 = 8684503215490LLU;

    t113 = (x453&((x454^x455)^x456));

    if (t113 != 186633216LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	uint64_t x458 = 1778738790599384648LLU;
	volatile uint8_t x460 = 3U;
	uint64_t t114 = 988615142070LLU;

    t114 = (x457&((x458^x459)^x460));

    if (t114 != 16668005280994295808LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	static int16_t x462 = -1;
	int32_t x463 = 15;
	int32_t x464 = INT32_MIN;
	int32_t t115 = 114;

    t115 = (x461&((x462^x463)^x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MAX;
	uint32_t x466 = 330467514U;
	int64_t x467 = INT64_MAX;
	uint16_t x468 = 15U;

    t116 = (x465&((x466^x467)^x468));

    if (t116 != 74LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x470 = 12946306U;
	volatile uint8_t x472 = UINT8_MAX;
	uint32_t t117 = 9994672U;

    t117 = (x469&((x470^x471)^x472));

    if (t117 != 2134537346U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x475 = 892734710331389LLU;
	static uint16_t x476 = 27U;
	uint64_t t118 = 191LLU;

    t118 = (x473&((x474^x475)^x476));

    if (t118 != 18445851341122811878LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = -1;
	static int32_t x478 = INT32_MIN;
	int32_t x479 = INT32_MIN;
	static int16_t x480 = INT16_MAX;

    t119 = (x477&((x478^x479)^x480));

    if (t119 != 32767) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x481 = INT64_MIN;
	int64_t x482 = -13326437294LL;
	int64_t x483 = -91569764LL;
	int16_t x484 = INT16_MIN;

    t120 = (x481&((x482^x483)^x484));

    if (t120 != INT64_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	int32_t x487 = INT32_MIN;
	volatile int16_t x488 = INT16_MAX;
	volatile int32_t t121 = 8583;

    t121 = (x485&((x486^x487)^x488));

    if (t121 != 32640) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x489 = -46;
	static uint64_t x490 = 3913LLU;
	int8_t x491 = 1;
	int32_t x492 = -50;
	volatile uint64_t t122 = 1058872918829408LLU;

    t122 = (x489&((x490^x491)^x492));

    if (t122 != 18446744073709547650LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 880622280804866LLU;
	static uint16_t x494 = 4084U;
	uint64_t x496 = 63574215856114LLU;
	uint64_t t123 = 14LLU;

    t123 = (x493&((x494^x495)^x496));

    if (t123 != 844604650949120LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x497 = INT32_MIN;
	int16_t x499 = -1;
	int64_t t124 = 24837LL;

    t124 = (x497&((x498^x499)^x500));

    if (t124 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x502 = 0U;
	uint64_t x503 = 127LLU;
	uint16_t x504 = 2U;

    t125 = (x501&((x502^x503)^x504));

    if (t125 != 12LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = INT8_MIN;
	int16_t x506 = INT16_MAX;
	uint16_t x507 = 27271U;
	uint32_t x508 = UINT32_MAX;
	uint32_t t126 = 837896672U;

    t126 = (x505&((x506^x507)^x508));

    if (t126 != 4294961792U) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x510 = -1;
	int8_t x511 = INT8_MAX;
	int8_t x512 = 17;

    t127 = (x509&((x510^x511)^x512));

    if (t127 != -111) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	volatile uint8_t x514 = UINT8_MAX;
	int64_t x515 = -13559657468152LL;
	int64_t t128 = 17468956106776LL;

    t128 = (x513&((x514^x515)^x516));

    if (t128 != 13559657467904LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	int64_t x518 = -1LL;
	int32_t x520 = -1;

    t129 = (x517&((x518^x519)^x520));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MIN;
	static int64_t x523 = -746677219860992LL;
	volatile uint16_t x524 = 1U;
	volatile uint64_t t130 = 1425610666LLU;

    t130 = (x521&((x522^x523)^x524));

    if (t130 != 746677219860864LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x528 = INT32_MIN;
	int64_t t131 = -590378778681578087LL;

    t131 = (x525&((x526^x527)^x528));

    if (t131 != 56LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x529 = INT64_MIN;
	uint64_t x530 = 3038395LLU;
	volatile int16_t x531 = INT16_MAX;
	int16_t x532 = 3;
	volatile uint64_t t132 = 3545180716871953LLU;

    t132 = (x529&((x530^x531)^x532));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint8_t x533 = UINT8_MAX;
	int64_t x534 = 0LL;
	int8_t x535 = INT8_MIN;
	uint64_t x536 = 408711237371LLU;
	uint64_t t133 = 3878489318797400LLU;

    t133 = (x533&((x534^x535)^x536));

    if (t133 != 123LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x537 = 1017U;
	volatile int8_t x538 = INT8_MIN;
	int16_t x539 = INT16_MIN;
	static int32_t t134 = -3;

    t134 = (x537&((x538^x539)^x540));

    if (t134 != 896) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x541 = INT8_MAX;
	uint64_t x542 = UINT64_MAX;
	int8_t x543 = INT8_MIN;
	int8_t x544 = INT8_MAX;
	uint64_t t135 = 1660869807090232366LLU;

    t135 = (x541&((x542^x543)^x544));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x546 = UINT32_MAX;
	int32_t x548 = -1;
	volatile uint64_t t136 = 1303153293031340LLU;

    t136 = (x545&((x546^x547)^x548));

    if (t136 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x549 = 88U;
	uint32_t x551 = 48679087U;
	uint8_t x552 = 0U;
	volatile uint32_t t137 = 231701743U;

    t137 = (x549&((x550^x551)^x552));

    if (t137 != 16U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 42U;
	int16_t x554 = INT16_MIN;
	uint64_t x555 = UINT64_MAX;

    t138 = (x553&((x554^x555)^x556));

    if (t138 != 34LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x557 = INT32_MAX;
	static int8_t x558 = -6;
	int16_t x559 = 6;
	int8_t x560 = INT8_MIN;
	int32_t t139 = -67571534;

    t139 = (x557&((x558^x559)^x560));

    if (t139 != 124) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 451U;
	uint32_t x562 = 430U;
	static int32_t x563 = INT32_MAX;
	uint32_t x564 = 12957U;

    t140 = (x561&((x562^x563)^x564));

    if (t140 != 192U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	uint16_t x566 = UINT16_MAX;
	static uint64_t x567 = 69333657658721049LLU;
	int16_t x568 = INT16_MIN;
	uint64_t t141 = 199429581LLU;

    t141 = (x565&((x566^x567)^x568));

    if (t141 != 18377410414502739968LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x570 = -1;
	static int8_t x571 = INT8_MIN;
	uint64_t x572 = 46607695847LLU;
	volatile uint64_t t142 = 899LLU;

    t142 = (x569&((x570^x571)^x572));

    if (t142 != 534296LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = INT32_MAX;
	uint8_t x575 = 1U;
	volatile int64_t t143 = -571LL;

    t143 = (x573&((x574^x575)^x576));

    if (t143 != 254LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MAX;
	static int16_t x578 = -1;
	static int64_t x579 = INT64_MIN;
	uint64_t x580 = UINT64_MAX;
	volatile uint64_t t144 = 169045722738138LLU;

    t144 = (x577&((x578^x579)^x580));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x582 = 10657;
	int8_t x583 = -1;
	static volatile int32_t t145 = 2;

    t145 = (x581&((x582^x583)^x584));

    if (t145 != -32768) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x585 = INT16_MIN;
	uint32_t x587 = 8019U;
	int64_t t146 = -4218904LL;

    t146 = (x585&((x586^x587)^x588));

    if (t146 != 9223372034707259392LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = -1;
	int32_t x590 = INT32_MAX;
	uint32_t x592 = UINT32_MAX;
	uint32_t t147 = 1641797U;

    t147 = (x589&((x590^x591)^x592));

    if (t147 != 2147483648U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	int16_t x594 = -1;
	int64_t x595 = INT64_MAX;
	int16_t x596 = INT16_MIN;

    t148 = (x593&((x594^x595)^x596));

    if (t148 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = 48;
	static uint8_t x599 = 2U;
	int8_t x600 = -1;
	static volatile int32_t t149 = -3633;

    t149 = (x597&((x598^x599)^x600));

    if (t149 != 16) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x602 = 32U;
	volatile uint16_t x603 = UINT16_MAX;
	static int32_t x604 = -1;
	int32_t t150 = 186;

    t150 = (x601&((x602^x603)^x604));

    if (t150 != -664469504) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x606 = UINT32_MAX;
	volatile int64_t x608 = INT64_MIN;

    t151 = (x605&((x606^x607)^x608));

    if (t151 != 8866708043644259455LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = INT32_MIN;
	int64_t t152 = -873LL;

    t152 = (x609&((x610^x611)^x612));

    if (t152 != 32LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MAX;
	int64_t x614 = 2832472368886LL;
	int8_t x615 = INT8_MIN;
	int8_t x616 = INT8_MAX;
	volatile int64_t t153 = -38390710143092LL;

    t153 = (x613&((x614^x615)^x616));

    if (t153 != 9LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x617 = -4;
	static int64_t x618 = -1048062348484173824LL;
	uint64_t x619 = 3175061LLU;
	uint32_t x620 = 258641788U;
	uint64_t t154 = 39LLU;

    t154 = (x617&((x618^x619)^x620));

    if (t154 != 17398681725482655208LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = 3216;
	uint32_t x624 = 1669941U;
	volatile uint64_t t155 = 1626709052012344LLU;

    t155 = (x621&((x622^x623)^x624));

    if (t155 != 3088LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = 0;
	int8_t x626 = INT8_MIN;
	uint16_t x628 = 46U;
	static volatile int32_t t156 = -60;

    t156 = (x625&((x626^x627)^x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 42U;
	uint32_t x630 = 259891805U;
	uint8_t x631 = 12U;
	static int16_t x632 = 50;
	volatile uint32_t t157 = 700346U;

    t157 = (x629&((x630^x631)^x632));

    if (t157 != 34U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x633 = INT64_MIN;
	uint64_t x634 = UINT64_MAX;
	uint64_t x635 = UINT64_MAX;
	volatile int32_t x636 = INT32_MIN;
	uint64_t t158 = 20068664108894LLU;

    t158 = (x633&((x634^x635)^x636));

    if (t158 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = UINT64_MAX;
	uint8_t x638 = 32U;
	int8_t x639 = -1;
	static int16_t x640 = INT16_MIN;
	static uint64_t t159 = 286892LLU;

    t159 = (x637&((x638^x639)^x640));

    if (t159 != 32735LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = 2936340459770121473LL;
	int8_t x643 = 3;
	volatile int64_t t160 = -159637988365LL;

    t160 = (x641&((x642^x643)^x644));

    if (t160 != 2936340459770121472LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x645 = -1LL;
	int32_t x646 = INT32_MIN;
	volatile int64_t x647 = -1LL;
	int16_t x648 = INT16_MIN;
	int64_t t161 = -2302306969718LL;

    t161 = (x645&((x646^x647)^x648));

    if (t161 != -2147450881LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MIN;
	int64_t x650 = -1LL;
	uint64_t x651 = UINT64_MAX;
	int32_t x652 = INT32_MIN;
	uint64_t t162 = 535293219780844LLU;

    t162 = (x649&((x650^x651)^x652));

    if (t162 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = 2856;
	static int64_t x654 = INT64_MIN;
	volatile int16_t x655 = 432;
	static volatile int64_t x656 = INT64_MIN;
	volatile int64_t t163 = -928579807289784LL;

    t163 = (x653&((x654^x655)^x656));

    if (t163 != 288LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x657 = INT32_MIN;
	int64_t x658 = INT64_MIN;
	static int32_t x659 = 498912;
	volatile int8_t x660 = 15;
	int64_t t164 = INT64_MIN;

    t164 = (x657&((x658^x659)^x660));

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = INT8_MIN;
	uint16_t x662 = UINT16_MAX;
	static int8_t x663 = INT8_MIN;
	int64_t x664 = -1LL;
	static volatile int64_t t165 = -146503285058751LL;

    t165 = (x661&((x662^x663)^x664));

    if (t165 != 65408LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -1;
	int16_t x666 = INT16_MIN;
	uint64_t x667 = UINT64_MAX;
	int16_t x668 = -9;
	volatile uint64_t t166 = 113705LLU;

    t166 = (x665&((x666^x667)^x668));

    if (t166 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 28822445771LLU;
	static uint8_t x670 = 64U;
	static volatile int16_t x671 = INT16_MIN;
	volatile uint64_t x672 = 498296914764LLU;

    t167 = (x669&((x670^x671)^x672));

    if (t167 != 11562648072LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x675 = INT64_MIN;
	int8_t x676 = INT8_MIN;
	volatile int64_t t168 = 367270053584808LL;

    t168 = (x673&((x674^x675)^x676));

    if (t168 != 32670LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	volatile uint16_t x678 = 4014U;
	static int16_t x680 = INT16_MIN;
	uint32_t t169 = 779U;

    t169 = (x677&((x678^x679)^x680));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -1;
	int32_t x682 = 284466;
	int8_t x684 = -1;
	int32_t t170 = -3;

    t170 = (x681&((x682^x683)^x684));

    if (t170 != 272589) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = UINT32_MAX;
	int8_t x686 = INT8_MAX;
	int8_t x687 = -15;
	static volatile int32_t x688 = -1;
	static uint32_t t171 = 4335U;

    t171 = (x685&((x686^x687)^x688));

    if (t171 != 113U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x690 = 3981257LLU;
	static int64_t x692 = 1913075129225028LL;
	static volatile uint64_t t172 = 10561632LLU;

    t172 = (x689&((x690^x691)^x692));

    if (t172 != 1913075133132943LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -39898580LL;

    t173 = (x693&((x694^x695)^x696));

    if (t173 != -41156064LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -1;
	uint64_t x698 = 2822081888556189LLU;
	int16_t x699 = -80;
	uint64_t x700 = 6808096059811744542LLU;
	volatile uint64_t t174 = 1599139LLU;

    t174 = (x697&((x698^x699)^x700));

    if (t174 != 11641468721256570931LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x701 = -1LL;
	volatile int32_t x702 = INT32_MAX;
	int8_t x703 = -1;
	int16_t x704 = INT16_MAX;

    t175 = (x701&((x702^x703)^x704));

    if (t175 != -2147450881LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -1;
	uint16_t x707 = 14545U;
	int16_t x708 = INT16_MIN;

    t176 = (x705&((x706^x707)^x708));

    if (t176 != -44199LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = UINT8_MAX;
	uint16_t x710 = 311U;
	uint16_t x711 = 0U;
	int8_t x712 = 12;
	int32_t t177 = -1787861;

    t177 = (x709&((x710^x711)^x712));

    if (t177 != 59) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = -1;
	static int8_t x714 = INT8_MAX;
	int32_t x716 = INT32_MAX;

    t178 = (x713&((x714^x715)^x716));

    if (t178 != 2147483775U) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = -1;
	static int16_t x718 = INT16_MIN;
	int64_t x720 = INT64_MIN;
	int64_t t179 = -198LL;

    t179 = (x717&((x718^x719)^x720));

    if (t179 != -32768LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x721 = 426226U;
	int16_t x722 = INT16_MIN;
	volatile int16_t x723 = INT16_MIN;
	volatile int32_t x724 = INT32_MIN;
	uint32_t t180 = 95U;

    t180 = (x721&((x722^x723)^x724));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	int16_t x726 = INT16_MIN;
	volatile int16_t x727 = 9;
	static int16_t x728 = 7;
	volatile int32_t t181 = 36212197;

    t181 = (x725&((x726^x727)^x728));

    if (t181 != -32768) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	volatile int8_t x730 = INT8_MAX;
	uint32_t x731 = UINT32_MAX;
	static int32_t x732 = INT32_MIN;
	static int64_t t182 = 1838468019590LL;

    t182 = (x729&((x730^x731)^x732));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = 4755030LL;
	volatile int16_t x734 = 3;
	uint64_t x736 = 119374LLU;
	volatile uint64_t t183 = 929977825429127LLU;

    t183 = (x733&((x734^x735)^x736));

    if (t183 != 32834LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x739 = 1;

    t184 = (x737&((x738^x739)^x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = UINT8_MAX;
	uint64_t x742 = 17049LLU;
	static uint8_t x743 = 79U;
	uint16_t x744 = 3U;
	uint64_t t185 = 21064691613535LLU;

    t185 = (x741&((x742^x743)^x744));

    if (t185 != 213LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = -1;
	uint16_t x746 = UINT16_MAX;
	static int16_t x747 = 0;
	int32_t x748 = -5116;
	int32_t t186 = 37579;

    t186 = (x745&((x746^x747)^x748));

    if (t186 != -60421) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x751 = 42U;
	int16_t x752 = INT16_MIN;
	uint32_t t187 = 6U;

    t187 = (x749&((x750^x751)^x752));

    if (t187 != 1288U) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -1;
	static uint8_t x754 = UINT8_MAX;
	volatile uint64_t x756 = 4415720362170309LLU;
	volatile uint64_t t188 = 14483361322LLU;

    t188 = (x753&((x754^x755)^x756));

    if (t188 != 4415720362191045LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x757 = 424220308LL;
	int8_t x759 = INT8_MIN;
	int32_t x760 = -1;
	static volatile int64_t t189 = 0LL;

    t189 = (x757&((x758^x759)^x760));

    if (t189 != 20LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x762 = -1;
	uint32_t x763 = 123719U;
	int64_t x764 = INT64_MAX;
	int64_t t190 = -711717LL;

    t190 = (x761&((x762^x763)^x764));

    if (t190 != 9223372032559932231LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = -9077;
	uint16_t x766 = 388U;
	static uint32_t x767 = 13U;
	int64_t x768 = 1634LL;
	volatile int64_t t191 = -5691410446834LL;

    t191 = (x765&((x766^x767)^x768));

    if (t191 != 1163LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x770 = 67LLU;
	int16_t x771 = INT16_MIN;
	uint64_t t192 = 146587397489LLU;

    t192 = (x769&((x770^x771)^x772));

    if (t192 != 9223372036854808508LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MAX;
	uint32_t x774 = 137704U;
	int8_t x775 = 0;
	static volatile int8_t x776 = -1;
	static volatile uint32_t t193 = 1U;

    t193 = (x773&((x774^x775)^x776));

    if (t193 != 23U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x777 = INT8_MIN;
	volatile int32_t x778 = -227366;
	uint64_t x779 = 36073071842607LLU;
	uint32_t x780 = 226U;
	volatile uint64_t t194 = 10426LLU;

    t194 = (x777&((x778^x779)^x780));

    if (t194 != 18446708000637751808LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x782 = 1;
	int16_t x783 = INT16_MIN;
	uint32_t x784 = 4882772U;
	volatile uint32_t t195 = 11650U;

    t195 = (x781&((x782^x783)^x784));

    if (t195 != 341U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	uint16_t x786 = UINT16_MAX;
	static int8_t x788 = -1;

    t196 = (x785&((x786^x787)^x788));

    if (t196 != 32768) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 49U;
	int64_t x790 = INT64_MAX;
	int32_t x791 = 2463;
	int16_t x792 = INT16_MIN;
	volatile int64_t t197 = -3998498875106420457LL;

    t197 = (x789&((x790^x791)^x792));

    if (t197 != 32LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x793 = -2827931;
	uint64_t x794 = 708594438457LLU;
	volatile uint8_t x796 = 12U;
	static volatile uint64_t t198 = 78553545298661LLU;

    t198 = (x793&((x794^x795)^x796));

    if (t198 != 708594387008LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	volatile int64_t x798 = 751729061559LL;
	static int8_t x799 = -1;
	uint64_t x800 = 10576760720333788LLU;
	uint64_t t199 = 55222713409194422LLU;

    t199 = (x797&((x798^x799)^x800));

    if (t199 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

