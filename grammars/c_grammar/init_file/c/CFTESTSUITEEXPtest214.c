
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

static uint8_t x16 = 4U;
int32_t t2 = 126;
int16_t x19 = INT16_MIN;
uint16_t x23 = 681U;
int8_t x27 = INT8_MIN;
uint64_t x32 = 15231022220141841LLU;
volatile int64_t t7 = -173716896761116LL;
int8_t x38 = 19;
uint32_t x39 = UINT32_MAX;
static volatile int8_t x50 = INT8_MIN;
uint16_t x57 = UINT16_MAX;
int16_t x58 = 0;
uint32_t x61 = UINT32_MAX;
int32_t x63 = 8217066;
int16_t x67 = -1;
int16_t x69 = -904;
int8_t x72 = -55;
volatile int32_t x77 = -68843159;
static volatile uint64_t t16 = 10704890664839659LLU;
int32_t x86 = INT32_MIN;
volatile int16_t x90 = INT16_MAX;
int64_t x99 = -14278535LL;
int32_t x103 = 14;
uint32_t t22 = 145U;
uint16_t x120 = 19689U;
uint64_t x143 = 2051260801203694585LLU;
int64_t x144 = -1LL;
static uint64_t t29 = 22197302729LLU;
static int8_t x151 = INT8_MIN;
volatile uint32_t x152 = 1330U;
static volatile int32_t x163 = -1599;
static int32_t x172 = -1;
int64_t x177 = -3212475953963958136LL;
int16_t x183 = INT16_MAX;
static int32_t x188 = 6;
int32_t x199 = INT32_MIN;
static int64_t t38 = 37LL;
uint8_t x201 = 40U;
uint32_t x202 = UINT32_MAX;
uint8_t x205 = 0U;
uint64_t x217 = UINT64_MAX;
uint16_t x218 = UINT16_MAX;
volatile uint64_t t43 = 89382054417559093LLU;
int16_t x221 = -1;
uint64_t x222 = 6459582292142678006LLU;
static int32_t x230 = -1;
uint32_t t46 = 9U;
volatile int64_t t47 = -47LL;
uint64_t x254 = 1882922463LLU;
static int32_t x261 = -61831162;
int8_t x262 = INT8_MAX;
static int32_t t50 = -43;
int16_t x276 = 680;
int16_t x285 = -1;
int64_t x286 = INT64_MIN;
int64_t x287 = INT64_MIN;
int64_t x293 = INT64_MAX;
volatile int16_t x296 = -1;
uint16_t x297 = 29U;
static volatile int16_t x301 = INT16_MIN;
int16_t x302 = -1;
volatile int32_t t58 = -23910081;
uint8_t x305 = UINT8_MAX;
int8_t x307 = INT8_MIN;
int64_t x308 = -1LL;
static int64_t x322 = INT64_MIN;
int16_t x327 = -1;
int32_t x330 = -1;
int32_t x337 = -2145;
uint64_t x338 = 129116446LLU;
volatile uint64_t t66 = 2794082061437621LLU;
int8_t x343 = 4;
int32_t x349 = INT32_MAX;
static volatile int32_t t69 = 635042;
uint32_t x359 = 17135479U;
volatile uint32_t t70 = 1U;
int64_t x361 = -250955401977169025LL;
static int16_t x366 = INT16_MIN;
uint32_t t72 = 1918U;
static volatile int8_t x369 = 7;
uint64_t t73 = 1824835451LLU;
int16_t x385 = INT16_MIN;
int64_t t75 = 7053171169397047LL;
int32_t t76 = 776449;
int64_t x394 = -1LL;
int64_t x398 = INT64_MIN;
volatile uint64_t t78 = 854714453135017LLU;
int8_t x403 = INT8_MIN;
volatile uint64_t x406 = 8500004LLU;
int64_t x407 = 2LL;
int64_t x420 = 91318630384015LL;
int32_t x440 = INT32_MIN;
volatile int32_t t83 = 22976;
uint16_t x442 = UINT16_MAX;
int16_t x445 = INT16_MAX;
int32_t x472 = INT32_MIN;
int32_t x479 = 93898;
int64_t x483 = INT64_MIN;
static volatile int32_t t93 = -214010084;
uint32_t x491 = 2892U;
static int16_t x493 = -2;
int32_t x495 = 110587477;
int32_t x500 = INT32_MIN;
int16_t x514 = -1;
int32_t t101 = -7383;
static uint16_t x545 = 9U;
int32_t x548 = 1277314;
int8_t x552 = -1;
static uint32_t x557 = 698U;
int16_t x558 = INT16_MIN;
int32_t x561 = INT32_MIN;
uint32_t x568 = UINT32_MAX;
int16_t x569 = 392;
static int8_t x579 = INT8_MIN;
static int8_t x583 = -1;
uint16_t x585 = UINT16_MAX;
static uint32_t x588 = 10116U;
int16_t x592 = 5355;
uint32_t t116 = 4843U;
uint64_t x593 = UINT64_MAX;
int8_t x602 = 13;
uint16_t x610 = UINT16_MAX;
uint16_t x626 = 2732U;
static uint32_t x630 = UINT32_MAX;
uint64_t x646 = UINT64_MAX;
volatile int8_t x658 = INT8_MIN;
int32_t x661 = 547030288;
static int64_t x662 = -1LL;
uint64_t x663 = UINT64_MAX;
volatile uint64_t t130 = 24301LLU;
int8_t x668 = 5;
int32_t t131 = 10969533;
uint32_t t132 = 212558U;
int16_t x681 = 2569;
volatile int32_t t135 = 12499523;
static int32_t x685 = 13;
static int64_t x687 = INT64_MAX;
volatile int8_t x688 = -1;
int64_t x689 = INT64_MIN;
uint32_t x692 = 136U;
static int32_t x698 = -1;
int8_t x704 = 32;
uint32_t t140 = 12U;
uint64_t t141 = 382473521088870LLU;
uint8_t x709 = 5U;
int8_t x712 = INT8_MIN;
uint16_t x727 = 19U;
uint64_t x738 = 758830566827406LLU;
uint8_t x739 = 0U;
uint16_t x740 = 2687U;
uint64_t t151 = 2048412LLU;
static int16_t x773 = -1;
uint16_t x783 = 10684U;
volatile int16_t x788 = 800;
int64_t x791 = -1LL;
volatile int32_t x792 = INT32_MAX;
volatile int64_t t158 = 1LL;
int32_t x800 = -7235711;
uint64_t t159 = 2150366631277LLU;
int16_t x803 = -1;
volatile uint16_t x806 = 57U;
static volatile uint8_t x810 = 32U;
uint16_t x811 = 3523U;
uint32_t x812 = UINT32_MAX;
static uint8_t x813 = 0U;
uint64_t x818 = 10622150LLU;
static int64_t x823 = INT64_MIN;
uint32_t x824 = 51813576U;
int8_t x831 = -1;
static int16_t x835 = 2913;
volatile int8_t x839 = -29;
int64_t x842 = INT64_MIN;
static volatile uint64_t t171 = 143451LLU;
static volatile uint64_t x861 = 1581LLU;
int8_t x865 = INT8_MIN;
int16_t x868 = INT16_MIN;
int64_t x878 = INT64_MIN;
int32_t x895 = -261629043;
uint8_t x899 = 121U;
uint64_t t182 = 386LLU;
static int32_t x908 = -7723480;
uint32_t x909 = 913295U;
int16_t x910 = INT16_MAX;
uint64_t t184 = 4966LLU;
static int16_t x914 = INT16_MAX;
volatile int8_t x924 = INT8_MAX;
volatile int32_t x930 = 105;
static uint16_t x931 = 11980U;
static volatile int8_t x940 = INT8_MIN;
static volatile uint64_t x943 = 15824LLU;
uint64_t x952 = 32049064582LLU;
static uint64_t t193 = 2LLU;
static volatile uint64_t t194 = 1184LLU;
volatile int64_t t196 = 17LL;
uint32_t x977 = 51918807U;
static int64_t t197 = 869909800LL;
int16_t x984 = 36;
volatile uint64_t t198 = 353777448653996LLU;
int8_t x985 = 55;
int16_t x987 = 0;


void f0(void) {
    	static uint16_t x1 = 3U;
	int32_t x2 = 0;
	uint64_t x3 = UINT64_MAX;
	int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 16531197658997087LLU;

    t0 = (x1/((x2-x3)-x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x9 = 1U;
	int16_t x10 = 14;
	volatile int64_t x11 = 3LL;
	int32_t x12 = 15828075;
	int64_t t1 = -8LL;

    t1 = (x9/((x10-x11)-x12));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = INT16_MIN;
	int8_t x14 = -36;
	int8_t x15 = -2;

    t2 = (x13/((x14-x15)-x16));

    if (t2 != 862) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = UINT8_MAX;
	int64_t x18 = INT64_MIN;
	int8_t x20 = INT8_MAX;
	volatile int64_t t3 = 10917978128558LL;

    t3 = (x17/((x18-x19)-x20));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MIN;
	volatile int8_t x22 = 0;
	int16_t x24 = INT16_MIN;
	int32_t t4 = 3264;

    t4 = (x21/((x22-x23)-x24));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = UINT32_MAX;
	int32_t x26 = INT32_MIN;
	int8_t x28 = -7;
	volatile uint32_t t5 = 28932067U;

    t5 = (x25/((x26-x27)-x28));

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MAX;
	int8_t x30 = -1;
	int32_t x31 = -1;
	volatile uint64_t t6 = 126736221999LLU;

    t6 = (x29/((x30-x31)-x32));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = 15U;
	int32_t x34 = -54045763;
	int32_t x35 = INT32_MIN;
	int64_t x36 = 1533697497193227LL;

    t7 = (x33/((x34-x35)-x36));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 178096LLU;
	volatile uint16_t x40 = UINT16_MAX;
	static uint64_t t8 = 5458528789700295286LLU;

    t8 = (x37/((x38-x39)-x40));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x49 = -1LL;
	uint32_t x51 = UINT32_MAX;
	volatile int16_t x52 = INT16_MIN;
	volatile int64_t t9 = 0LL;

    t9 = (x49/((x50-x51)-x52));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint8_t x53 = 3U;
	uint32_t x54 = 57298594U;
	int32_t x55 = INT32_MAX;
	int64_t x56 = -1LL;
	static volatile int64_t t10 = 27083175947451136LL;

    t10 = (x53/((x54-x55)-x56));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x59 = UINT16_MAX;
	uint16_t x60 = 2222U;
	volatile int32_t t11 = 30864;

    t11 = (x57/((x58-x59)-x60));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x62 = -1;
	int32_t x64 = -5661355;
	static uint32_t t12 = 3547U;

    t12 = (x61/((x62-x63)-x64));

    if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x65 = INT32_MAX;
	static volatile int64_t x66 = INT64_MIN;
	uint64_t x68 = 16770276LLU;
	static volatile uint64_t t13 = 201189943713180719LLU;

    t13 = (x65/((x66-x67)-x68));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x70 = -862663212;
	uint16_t x71 = 12U;
	int32_t t14 = -1;

    t14 = (x69/((x70-x71)-x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = INT64_MIN;
	volatile uint8_t x74 = UINT8_MAX;
	int64_t x75 = INT64_MAX;
	volatile int16_t x76 = INT16_MIN;
	int64_t t15 = 7831LL;

    t15 = (x73/((x74-x75)-x76));

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x78 = 1U;
	uint64_t x79 = 19796029LLU;
	int64_t x80 = -1LL;

    t16 = (x77/((x78-x79)-x80));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x81 = UINT32_MAX;
	uint32_t x82 = UINT32_MAX;
	static uint16_t x83 = 147U;
	volatile int16_t x84 = 171;
	uint32_t t17 = 6U;

    t17 = (x81/((x82-x83)-x84));

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x85 = UINT16_MAX;
	int64_t x87 = 483540160622663910LL;
	uint32_t x88 = 349924U;
	static volatile int64_t t18 = 1275387LL;

    t18 = (x85/((x86-x87)-x88));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x89 = 1761684092563901736LL;
	volatile int64_t x91 = -209438695320950815LL;
	static int32_t x92 = INT32_MAX;
	int64_t t19 = -4319038946LL;

    t19 = (x89/((x90-x91)-x92));

    if (t19 != 8LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x93 = 12U;
	volatile int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	int32_t x96 = 1;
	uint32_t t20 = 52209U;

    t20 = (x93/((x94-x95)-x96));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = 15;
	int8_t x98 = INT8_MIN;
	volatile uint16_t x100 = 31U;
	static int64_t t21 = -234650LL;

    t21 = (x97/((x98-x99)-x100));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x101 = 1048057U;
	static volatile int8_t x102 = 1;
	static volatile int16_t x104 = 4090;

    t22 = (x101/((x102-x103)-x104));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x109 = UINT32_MAX;
	uint32_t x110 = UINT32_MAX;
	static volatile uint32_t x111 = UINT32_MAX;
	int64_t x112 = -1LL;
	int64_t t23 = -75LL;

    t23 = (x109/((x110-x111)-x112));

    if (t23 != 4294967295LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x117 = INT16_MAX;
	int32_t x118 = INT32_MAX;
	int32_t x119 = 10489;
	int32_t t24 = 596;

    t24 = (x117/((x118-x119)-x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MIN;
	uint32_t x123 = UINT32_MAX;
	int8_t x124 = INT8_MIN;
	static int64_t t25 = INT64_MIN;

    t25 = (x121/((x122-x123)-x124));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x125 = 7524;
	volatile int16_t x126 = INT16_MIN;
	uint8_t x127 = 42U;
	volatile int64_t x128 = INT64_MIN;
	int64_t t26 = 54613846363374LL;

    t26 = (x125/((x126-x127)-x128));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x137 = 3528;
	int8_t x138 = INT8_MAX;
	int32_t x139 = 1;
	int32_t x140 = -3;
	volatile int32_t t27 = -461690967;

    t27 = (x137/((x138-x139)-x140));

    if (t27 != 27) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x141 = INT64_MIN;
	volatile uint32_t x142 = 67201657U;
	uint64_t t28 = 291LLU;

    t28 = (x141/((x142-x143)-x144));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x145 = UINT32_MAX;
	static int32_t x146 = INT32_MAX;
	static volatile uint64_t x147 = 321360501LLU;
	int64_t x148 = INT64_MIN;

    t29 = (x145/((x146-x147)-x148));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x149 = INT32_MAX;
	volatile uint32_t x150 = 588373U;
	volatile uint32_t t30 = 5554U;

    t30 = (x149/((x150-x151)-x152));

    if (t30 != 3657U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x161 = INT8_MIN;
	uint64_t x162 = UINT64_MAX;
	int8_t x164 = 50;
	uint64_t t31 = 10LLU;

    t31 = (x161/((x162-x163)-x164));

    if (t31 != 11916501339605653LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x169 = -3;
	int64_t x170 = 16569351378LL;
	volatile uint32_t x171 = 29403U;
	volatile int64_t t32 = -1LL;

    t32 = (x169/((x170-x171)-x172));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x178 = INT64_MIN;
	int8_t x179 = -1;
	volatile int64_t x180 = -1LL;
	int64_t t33 = -51750890211971739LL;

    t33 = (x177/((x178-x179)-x180));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x181 = 15929U;
	static int8_t x182 = 1;
	int8_t x184 = INT8_MIN;
	volatile uint32_t t34 = 47975378U;

    t34 = (x181/((x182-x183)-x184));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x185 = INT8_MAX;
	int8_t x186 = INT8_MIN;
	volatile int32_t x187 = -1453083;
	volatile int32_t t35 = -6;

    t35 = (x185/((x186-x187)-x188));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x189 = -1;
	static int64_t x190 = -1LL;
	int32_t x191 = -197237;
	int16_t x192 = INT16_MIN;
	static int64_t t36 = -2432208594455LL;

    t36 = (x189/((x190-x191)-x192));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x193 = INT8_MIN;
	volatile int8_t x194 = 53;
	static int8_t x195 = INT8_MAX;
	int16_t x196 = INT16_MIN;
	volatile int32_t t37 = 0;

    t37 = (x193/((x194-x195)-x196));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x197 = -2844;
	static int64_t x198 = INT64_MIN;
	int64_t x200 = INT64_MIN;

    t38 = (x197/((x198-x199)-x200));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x203 = 2;
	uint32_t x204 = 5593U;
	volatile uint32_t t39 = 732749545U;

    t39 = (x201/((x202-x203)-x204));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x206 = -9;
	uint32_t x207 = 1U;
	uint8_t x208 = 0U;
	uint32_t t40 = 1U;

    t40 = (x205/((x206-x207)-x208));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x209 = INT64_MIN;
	static volatile int16_t x210 = INT16_MIN;
	volatile uint16_t x211 = 1U;
	uint16_t x212 = 26U;
	int64_t t41 = 2LL;

    t41 = (x209/((x210-x211)-x212));

    if (t41 != 281243239422313LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x213 = INT64_MIN;
	static int64_t x214 = INT64_MIN;
	volatile uint32_t x215 = 0U;
	int8_t x216 = 0;
	int64_t t42 = 188LL;

    t42 = (x213/((x214-x215)-x216));

    if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x219 = -16;
	uint64_t x220 = UINT64_MAX;

    t43 = (x217/((x218-x219)-x220));

    if (t43 != 281406274007040LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x223 = INT64_MIN;
	volatile int32_t x224 = -1312150;
	uint64_t t44 = 55436281736963629LLU;

    t44 = (x221/((x222-x223)-x224));

    if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x229 = 10650U;
	int16_t x231 = INT16_MIN;
	int8_t x232 = -9;
	volatile uint32_t t45 = 12484767U;

    t45 = (x229/((x230-x231)-x232));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x233 = 8990U;
	int32_t x234 = INT32_MIN;
	volatile int32_t x235 = INT32_MIN;
	volatile int16_t x236 = 1;

    t46 = (x233/((x234-x235)-x236));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x245 = INT8_MIN;
	static int32_t x246 = INT32_MAX;
	uint8_t x247 = 3U;
	int64_t x248 = 3294449108LL;

    t47 = (x245/((x246-x247)-x248));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x253 = INT16_MIN;
	uint32_t x255 = 200568U;
	int8_t x256 = -3;
	volatile uint64_t t48 = 102290142299163728LLU;

    t48 = (x253/((x254-x255)-x256));

    if (t48 != 9797912316LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x263 = -56202711093545LL;
	static int16_t x264 = INT16_MIN;
	volatile int64_t t49 = -6391866146051LL;

    t49 = (x261/((x262-x263)-x264));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x265 = 14725;
	uint16_t x266 = 15783U;
	int8_t x267 = INT8_MIN;
	static uint16_t x268 = 5141U;

    t50 = (x265/((x266-x267)-x268));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x269 = -1;
	int64_t x270 = INT64_MIN;
	volatile int32_t x271 = -67174;
	int64_t x272 = INT64_MIN;
	int64_t t51 = 24115988528LL;

    t51 = (x269/((x270-x271)-x272));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x273 = INT8_MAX;
	uint16_t x274 = 1966U;
	uint32_t x275 = 3964264U;
	static volatile uint32_t t52 = 74402U;

    t52 = (x273/((x274-x275)-x276));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x277 = 1008212174U;
	volatile int64_t x278 = INT64_MIN;
	int8_t x279 = INT8_MIN;
	int32_t x280 = -8532;
	static volatile int64_t t53 = -261867944641LL;

    t53 = (x277/((x278-x279)-x280));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x281 = 64;
	uint8_t x282 = UINT8_MAX;
	uint64_t x283 = 11456LLU;
	int8_t x284 = INT8_MIN;
	uint64_t t54 = 648LLU;

    t54 = (x281/((x282-x283)-x284));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x288 = INT32_MAX;
	volatile int64_t t55 = -366512LL;

    t55 = (x285/((x286-x287)-x288));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x294 = INT32_MIN;
	uint64_t x295 = UINT64_MAX;
	uint64_t t56 = 1995847101566LLU;

    t56 = (x293/((x294-x295)-x296));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x298 = INT8_MAX;
	static int64_t x299 = -12LL;
	static int8_t x300 = -1;
	int64_t t57 = 128006169052460LL;

    t57 = (x297/((x298-x299)-x300));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x303 = 254U;
	int32_t x304 = 59056;

    t58 = (x301/((x302-x303)-x304));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x306 = 10;
	volatile int64_t t59 = -38563587318LL;

    t59 = (x305/((x306-x307)-x308));

    if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x309 = INT64_MIN;
	static uint32_t x310 = 5759028U;
	uint32_t x311 = 116299U;
	uint8_t x312 = 7U;
	int64_t t60 = -34LL;

    t60 = (x309/((x310-x311)-x312));

    if (t60 != -1634560773480LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x313 = -1;
	int16_t x314 = INT16_MAX;
	int64_t x315 = -52840401989LL;
	uint8_t x316 = 11U;
	int64_t t61 = 22LL;

    t61 = (x313/((x314-x315)-x316));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x317 = 8U;
	int8_t x318 = -34;
	uint8_t x319 = 62U;
	uint64_t x320 = 6556773795LLU;
	volatile uint64_t t62 = 8525483448LLU;

    t62 = (x317/((x318-x319)-x320));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint8_t x321 = 1U;
	static volatile int8_t x323 = -29;
	volatile int32_t x324 = INT32_MIN;
	volatile int64_t t63 = 9134228LL;

    t63 = (x321/((x322-x323)-x324));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x325 = INT64_MIN;
	int16_t x326 = -166;
	static uint64_t x328 = 36259814LLU;
	volatile uint64_t t64 = 58351991796615071LLU;

    t64 = (x325/((x326-x327)-x328));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x329 = UINT8_MAX;
	static volatile int8_t x331 = INT8_MIN;
	uint16_t x332 = 511U;
	int32_t t65 = 1747000;

    t65 = (x329/((x330-x331)-x332));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x339 = INT16_MAX;
	int64_t x340 = INT64_MAX;

    t66 = (x337/((x338-x339)-x340));

    if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x341 = 264U;
	uint16_t x342 = 11879U;
	uint8_t x344 = 58U;
	volatile uint32_t t67 = 25396U;

    t67 = (x341/((x342-x343)-x344));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x350 = 3811;
	static int64_t x351 = -237175777LL;
	volatile int64_t x352 = -1LL;
	int64_t t68 = 1749LL;

    t68 = (x349/((x350-x351)-x352));

    if (t68 != 9LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x353 = UINT16_MAX;
	static int8_t x354 = INT8_MIN;
	uint16_t x355 = 1368U;
	static volatile uint8_t x356 = UINT8_MAX;

    t69 = (x353/((x354-x355)-x356));

    if (t69 != -37) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x357 = 93287413;
	volatile int16_t x358 = -30;
	uint8_t x360 = UINT8_MAX;

    t70 = (x357/((x358-x359)-x360));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x362 = 47U;
	static volatile int16_t x363 = INT16_MIN;
	volatile uint32_t x364 = UINT32_MAX;
	volatile int64_t t71 = -3LL;

    t71 = (x361/((x362-x363)-x364));

    if (t71 != -7647348914467LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x365 = INT16_MIN;
	static volatile uint32_t x367 = 102913145U;
	int16_t x368 = 0;

    t72 = (x365/((x366-x367)-x368));

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x370 = INT16_MIN;
	static int32_t x371 = 42406773;
	static uint64_t x372 = UINT64_MAX;

    t73 = (x369/((x370-x371)-x372));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x381 = 49;
	volatile int16_t x382 = INT16_MIN;
	int32_t x383 = -120588;
	volatile int8_t x384 = -1;
	volatile int32_t t74 = 31739652;

    t74 = (x381/((x382-x383)-x384));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x386 = 7U;
	int32_t x387 = -1;
	static int64_t x388 = 106831816786262LL;

    t75 = (x385/((x386-x387)-x388));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x389 = -1;
	volatile uint8_t x390 = UINT8_MAX;
	uint8_t x391 = 2U;
	volatile int32_t x392 = INT32_MAX;

    t76 = (x389/((x390-x391)-x392));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x393 = INT16_MAX;
	volatile int32_t x395 = -1;
	static volatile int16_t x396 = INT16_MIN;
	int64_t t77 = -154LL;

    t77 = (x393/((x394-x395)-x396));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x397 = UINT64_MAX;
	volatile uint64_t x399 = UINT64_MAX;
	uint32_t x400 = 3094036U;

    t78 = (x397/((x398-x399)-x400));

    if (t78 != 2LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x401 = INT32_MAX;
	uint8_t x402 = 9U;
	uint32_t x404 = 33271080U;
	uint32_t t79 = 11006916U;

    t79 = (x401/((x402-x403)-x404));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x405 = 6U;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t80 = 9088789LLU;

    t80 = (x405/((x406-x407)-x408));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x417 = INT8_MIN;
	static uint16_t x418 = UINT16_MAX;
	int16_t x419 = -1;
	volatile int64_t t81 = 97193836LL;

    t81 = (x417/((x418-x419)-x420));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x425 = -1;
	static volatile uint64_t x426 = 2399004701770537143LLU;
	uint64_t x427 = 336515685LLU;
	volatile uint32_t x428 = UINT32_MAX;
	uint64_t t82 = 32973017709LLU;

    t82 = (x425/((x426-x427)-x428));

    if (t82 != 7LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x437 = 446;
	int8_t x438 = -1;
	int8_t x439 = 4;

    t83 = (x437/((x438-x439)-x440));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x441 = -1;
	static int32_t x443 = -1768;
	uint32_t x444 = UINT32_MAX;
	uint32_t t84 = 599201U;

    t84 = (x441/((x442-x443)-x444));

    if (t84 != 63814U) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x446 = 27;
	int8_t x447 = 0;
	static int32_t x448 = -4032852;
	int32_t t85 = 64070;

    t85 = (x445/((x446-x447)-x448));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x449 = 166350533266LL;
	volatile uint32_t x450 = UINT32_MAX;
	static int8_t x451 = INT8_MIN;
	volatile int8_t x452 = 3;
	static volatile int64_t t86 = 3133168253373893LL;

    t86 = (x449/((x450-x451)-x452));

    if (t86 != 1341536558LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x453 = 918U;
	uint64_t x454 = 1LLU;
	static volatile int32_t x455 = INT32_MAX;
	volatile int32_t x456 = INT32_MAX;
	volatile uint64_t t87 = 127148408811299074LLU;

    t87 = (x453/((x454-x455)-x456));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x461 = INT32_MIN;
	int32_t x462 = -254780;
	int64_t x463 = 7586050226LL;
	volatile int64_t x464 = 19346558700252LL;
	int64_t t88 = 494LL;

    t88 = (x461/((x462-x463)-x464));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x469 = UINT8_MAX;
	int32_t x470 = INT32_MIN;
	static uint64_t x471 = 62821LLU;
	volatile uint64_t t89 = 24027LLU;

    t89 = (x469/((x470-x471)-x472));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x473 = -1;
	int8_t x474 = INT8_MIN;
	uint32_t x475 = 159U;
	int64_t x476 = 38306328659476LL;
	int64_t t90 = 39247LL;

    t90 = (x473/((x474-x475)-x476));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x477 = INT64_MIN;
	uint64_t x478 = UINT64_MAX;
	uint64_t x480 = 267870143LLU;
	volatile uint64_t t91 = 3132234LLU;

    t91 = (x477/((x478-x479)-x480));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x481 = UINT8_MAX;
	int32_t x482 = -1;
	volatile int8_t x484 = INT8_MAX;
	int64_t t92 = -28399029196LL;

    t92 = (x481/((x482-x483)-x484));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x485 = -1;
	int16_t x486 = -1;
	int8_t x487 = INT8_MIN;
	uint16_t x488 = 2725U;

    t93 = (x485/((x486-x487)-x488));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint8_t x489 = 0U;
	int16_t x490 = -8;
	int32_t x492 = 768;
	uint32_t t94 = 5859U;

    t94 = (x489/((x490-x491)-x492));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x494 = 1;
	uint32_t x496 = 67U;
	volatile uint32_t t95 = 962299121U;

    t95 = (x493/((x494-x495)-x496));

    if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x497 = -1LL;
	volatile int32_t x498 = INT32_MIN;
	int32_t x499 = -1;
	volatile int64_t t96 = -10589419560732218LL;

    t96 = (x497/((x498-x499)-x500));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x501 = 1;
	uint32_t x502 = 1494658U;
	int64_t x503 = 3690LL;
	uint16_t x504 = 29303U;
	int64_t t97 = -32799581826LL;

    t97 = (x501/((x502-x503)-x504));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x505 = -3;
	static uint8_t x506 = 62U;
	static volatile uint16_t x507 = 810U;
	uint32_t x508 = 5746403U;
	static uint32_t t98 = 8U;

    t98 = (x505/((x506-x507)-x508));

    if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x509 = 35U;
	int32_t x510 = -28101735;
	int32_t x511 = INT32_MIN;
	static uint8_t x512 = UINT8_MAX;
	volatile int32_t t99 = -2306;

    t99 = (x509/((x510-x511)-x512));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x513 = -1;
	uint8_t x515 = 3U;
	uint8_t x516 = 7U;
	volatile int32_t t100 = -100;

    t100 = (x513/((x514-x515)-x516));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x525 = UINT8_MAX;
	int8_t x526 = INT8_MIN;
	int8_t x527 = 0;
	static volatile uint8_t x528 = 26U;

    t101 = (x525/((x526-x527)-x528));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x529 = -1;
	uint16_t x530 = 22U;
	static int8_t x531 = -1;
	int16_t x532 = INT16_MAX;
	static volatile int32_t t102 = -41010113;

    t102 = (x529/((x530-x531)-x532));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x533 = -15612;
	int8_t x534 = INT8_MIN;
	int8_t x535 = 1;
	int8_t x536 = -14;
	static volatile int32_t t103 = -146;

    t103 = (x533/((x534-x535)-x536));

    if (t103 != 135) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint16_t x541 = 77U;
	int8_t x542 = INT8_MIN;
	volatile int64_t x543 = 263257308LL;
	volatile uint64_t x544 = 6395650382198LLU;
	volatile uint64_t t104 = 192233119LLU;

    t104 = (x541/((x542-x543)-x544));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x546 = -1;
	uint32_t x547 = 20541395U;
	uint32_t t105 = 0U;

    t105 = (x545/((x546-x547)-x548));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x549 = 955566757;
	volatile uint16_t x550 = 17617U;
	uint16_t x551 = 185U;
	static int32_t t106 = 123817941;

    t106 = (x549/((x550-x551)-x552));

    if (t106 != 54813) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x553 = INT64_MAX;
	int8_t x554 = INT8_MIN;
	volatile int32_t x555 = -1;
	int32_t x556 = INT32_MIN;
	volatile int64_t t107 = 107674LL;

    t107 = (x553/((x554-x555)-x556));

    if (t107 != 4294967550LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x559 = 4U;
	uint64_t x560 = 2831776829LLU;
	static volatile uint64_t t108 = 397608273005914LLU;

    t108 = (x557/((x558-x559)-x560));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x562 = -91LL;
	int16_t x563 = INT16_MIN;
	uint16_t x564 = UINT16_MAX;
	volatile int64_t t109 = -178449905080481144LL;

    t109 = (x561/((x562-x563)-x564));

    if (t109 != 65356LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x565 = INT8_MAX;
	int8_t x566 = INT8_MIN;
	int16_t x567 = INT16_MAX;
	volatile uint32_t t110 = 15549U;

    t110 = (x565/((x566-x567)-x568));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x570 = 30789U;
	volatile uint8_t x571 = 1U;
	static volatile uint8_t x572 = 3U;
	static volatile int32_t t111 = 1065;

    t111 = (x569/((x570-x571)-x572));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x573 = 30U;
	int8_t x574 = -1;
	static uint8_t x575 = UINT8_MAX;
	int32_t x576 = -3267;
	volatile int32_t t112 = -2039;

    t112 = (x573/((x574-x575)-x576));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x577 = -1;
	int16_t x578 = INT16_MIN;
	int16_t x580 = INT16_MIN;
	int32_t t113 = -1;

    t113 = (x577/((x578-x579)-x580));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x581 = INT64_MIN;
	int32_t x582 = 1271;
	int32_t x584 = 40197325;
	int64_t t114 = -12101282LL;

    t114 = (x581/((x582-x583)-x584));

    if (t114 != 229459644628LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x586 = 13404608LLU;
	volatile int64_t x587 = INT64_MAX;
	volatile uint64_t t115 = 278088162418LLU;

    t115 = (x585/((x586-x587)-x588));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x589 = 15141788U;
	static int8_t x590 = INT8_MIN;
	int16_t x591 = INT16_MAX;

    t116 = (x589/((x590-x591)-x592));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x594 = 333229875U;
	int8_t x595 = INT8_MAX;
	int64_t x596 = 121531882LL;
	volatile uint64_t t117 = 463LLU;

    t117 = (x593/((x594-x595)-x596));

    if (t117 != 87137128126LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x597 = 28U;
	int8_t x598 = INT8_MIN;
	uint16_t x599 = UINT16_MAX;
	static int8_t x600 = INT8_MAX;
	static volatile int32_t t118 = 15833145;

    t118 = (x597/((x598-x599)-x600));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x601 = INT64_MIN;
	int16_t x603 = 0;
	int64_t x604 = 947927638423867733LL;
	int64_t t119 = -119889LL;

    t119 = (x601/((x602-x603)-x604));

    if (t119 != 9LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x605 = -2072178481635LL;
	uint32_t x606 = UINT32_MAX;
	uint32_t x607 = UINT32_MAX;
	volatile uint8_t x608 = 1U;
	static int64_t t120 = 285819760312281046LL;

    t120 = (x605/((x606-x607)-x608));

    if (t120 != -482LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x609 = INT32_MIN;
	int8_t x611 = INT8_MIN;
	static int16_t x612 = -20;
	int32_t t121 = -2;

    t121 = (x609/((x610-x611)-x612));

    if (t121 != -32694) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x625 = INT16_MIN;
	int32_t x627 = -3183;
	static int8_t x628 = INT8_MIN;
	int32_t t122 = 3398;

    t122 = (x625/((x626-x627)-x628));

    if (t122 != -5) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x629 = 3U;
	volatile int8_t x631 = 36;
	int64_t x632 = -1LL;
	int64_t t123 = 0LL;

    t123 = (x629/((x630-x631)-x632));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x633 = INT8_MIN;
	uint8_t x634 = 35U;
	int64_t x635 = 11833LL;
	volatile int8_t x636 = INT8_MIN;
	volatile int64_t t124 = 940025751LL;

    t124 = (x633/((x634-x635)-x636));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x637 = 177984354U;
	uint64_t x638 = UINT64_MAX;
	int16_t x639 = 176;
	uint32_t x640 = UINT32_MAX;
	uint64_t t125 = 1368072330960LLU;

    t125 = (x637/((x638-x639)-x640));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint8_t x641 = 1U;
	int32_t x642 = INT32_MAX;
	uint64_t x643 = 4225169882798307464LLU;
	static volatile int8_t x644 = INT8_MAX;
	static volatile uint64_t t126 = 1LLU;

    t126 = (x641/((x642-x643)-x644));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x645 = INT32_MIN;
	int32_t x647 = 46127;
	int8_t x648 = INT8_MIN;
	uint64_t t127 = 2058750945LLU;

    t127 = (x645/((x646-x647)-x648));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x649 = -1;
	uint8_t x650 = 73U;
	uint64_t x651 = UINT64_MAX;
	static int8_t x652 = -28;
	volatile uint64_t t128 = 282763LLU;

    t128 = (x649/((x650-x651)-x652));

    if (t128 != 180850432095191682LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x657 = -1;
	static volatile int16_t x659 = INT16_MIN;
	int16_t x660 = INT16_MIN;
	volatile int32_t t129 = -2393185;

    t129 = (x657/((x658-x659)-x660));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x664 = INT32_MIN;

    t130 = (x661/((x662-x663)-x664));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x665 = INT32_MAX;
	uint16_t x666 = 27U;
	static int16_t x667 = 13785;

    t131 = (x665/((x666-x667)-x668));

    if (t131 != -156033) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x669 = UINT32_MAX;
	int8_t x670 = INT8_MIN;
	int8_t x671 = INT8_MIN;
	static uint8_t x672 = UINT8_MAX;

    t132 = (x669/((x670-x671)-x672));

    if (t132 != 1U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x673 = INT32_MAX;
	int32_t x674 = INT32_MIN;
	int64_t x675 = INT64_MIN;
	int64_t x676 = INT64_MAX;
	int64_t t133 = -6128874116057LL;

    t133 = (x673/((x674-x675)-x676));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x677 = 1U;
	static int32_t x678 = 372359;
	static uint16_t x679 = UINT16_MAX;
	uint32_t x680 = 10U;
	static volatile uint32_t t134 = 1475U;

    t134 = (x677/((x678-x679)-x680));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x682 = 11540U;
	int32_t x683 = -3839;
	int8_t x684 = INT8_MIN;

    t135 = (x681/((x682-x683)-x684));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x686 = INT16_MAX;
	volatile int64_t t136 = -3LL;

    t136 = (x685/((x686-x687)-x688));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x690 = -1;
	uint64_t x691 = UINT64_MAX;
	uint64_t t137 = 15557999551652LLU;

    t137 = (x689/((x690-x691)-x692));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x693 = INT16_MAX;
	uint8_t x694 = UINT8_MAX;
	int8_t x695 = INT8_MAX;
	volatile int64_t x696 = INT64_MAX;
	int64_t t138 = 326948048119LL;

    t138 = (x693/((x694-x695)-x696));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x697 = 1U;
	int64_t x699 = 5032445902921LL;
	uint8_t x700 = 1U;
	volatile int64_t t139 = 212038632505LL;

    t139 = (x697/((x698-x699)-x700));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x701 = INT8_MAX;
	uint32_t x702 = UINT32_MAX;
	static int8_t x703 = INT8_MIN;

    t140 = (x701/((x702-x703)-x704));

    if (t140 != 1U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x705 = 416593222094079613LLU;
	uint64_t x706 = 543971198LLU;
	int64_t x707 = 3531310983616255LL;
	static volatile int64_t x708 = INT64_MAX;

    t141 = (x705/((x706-x707)-x708));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x710 = -13018;
	uint64_t x711 = 432079599409140LLU;
	uint64_t t142 = 978879423487774LLU;

    t142 = (x709/((x710-x711)-x712));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x713 = 8715284832261LLU;
	static uint64_t x714 = 273098633942LLU;
	int16_t x715 = INT16_MAX;
	int64_t x716 = -1LL;
	volatile uint64_t t143 = 17LLU;

    t143 = (x713/((x714-x715)-x716));

    if (t143 != 31LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x717 = -1;
	int64_t x718 = INT64_MIN;
	volatile int16_t x719 = INT16_MIN;
	int16_t x720 = 2846;
	volatile int64_t t144 = -2LL;

    t144 = (x717/((x718-x719)-x720));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x721 = 41170747LLU;
	uint64_t x722 = 8332302282886LLU;
	int64_t x723 = INT64_MAX;
	volatile int32_t x724 = 520795;
	volatile uint64_t t145 = 10051545188LLU;

    t145 = (x721/((x722-x723)-x724));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x725 = -1598;
	volatile uint64_t x726 = 15565838730217LLU;
	int64_t x728 = INT64_MIN;
	uint64_t t146 = 17186700098362867LLU;

    t146 = (x725/((x726-x727)-x728));

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x733 = 171157389;
	volatile int8_t x734 = 27;
	volatile int64_t x735 = 10157129LL;
	uint64_t x736 = 4263120842784LLU;
	volatile uint64_t t147 = 753110567463157350LLU;

    t147 = (x733/((x734-x735)-x736));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x737 = -1;
	volatile uint64_t t148 = 655468379370428502LLU;

    t148 = (x737/((x738-x739)-x740));

    if (t148 != 24309LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x749 = -2001758LL;
	uint16_t x750 = 551U;
	static uint32_t x751 = UINT32_MAX;
	static uint64_t x752 = 108080159996LLU;
	static uint64_t t149 = 231LLU;

    t149 = (x749/((x750-x751)-x752));

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x753 = INT64_MIN;
	int8_t x754 = -1;
	static volatile int16_t x755 = -1;
	uint8_t x756 = UINT8_MAX;
	volatile int64_t t150 = -173645427LL;

    t150 = (x753/((x754-x755)-x756));

    if (t150 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x761 = 26U;
	uint64_t x762 = UINT64_MAX;
	int16_t x763 = -1;
	uint16_t x764 = UINT16_MAX;

    t151 = (x761/((x762-x763)-x764));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x765 = 69U;
	uint64_t x766 = 1842701592152051LLU;
	volatile int16_t x767 = INT16_MIN;
	int8_t x768 = INT8_MAX;
	static volatile uint64_t t152 = 1LLU;

    t152 = (x765/((x766-x767)-x768));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x769 = -1;
	int16_t x770 = INT16_MIN;
	int8_t x771 = INT8_MIN;
	uint16_t x772 = UINT16_MAX;
	static volatile int32_t t153 = 1644;

    t153 = (x769/((x770-x771)-x772));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x774 = INT8_MIN;
	int8_t x775 = 58;
	volatile uint64_t x776 = UINT64_MAX;
	static uint64_t t154 = 2955LLU;

    t154 = (x773/((x774-x775)-x776));

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x777 = INT16_MIN;
	volatile uint16_t x778 = 17932U;
	int32_t x779 = 6;
	int16_t x780 = INT16_MIN;
	volatile int32_t t155 = 2366;

    t155 = (x777/((x778-x779)-x780));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x781 = INT64_MIN;
	volatile int64_t x782 = 10LL;
	volatile uint64_t x784 = 1052748202321663LLU;
	uint64_t t156 = 1044459866188LLU;

    t156 = (x781/((x782-x783)-x784));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x785 = UINT64_MAX;
	volatile uint8_t x786 = UINT8_MAX;
	volatile int8_t x787 = -55;
	volatile uint64_t t157 = 590942260872244804LLU;

    t157 = (x785/((x786-x787)-x788));

    if (t157 != 1LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x789 = 1U;
	int8_t x790 = INT8_MIN;

    t158 = (x789/((x790-x791)-x792));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x797 = 74739LLU;
	int32_t x798 = -1;
	int16_t x799 = -5;

    t159 = (x797/((x798-x799)-x800));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x801 = INT64_MIN;
	uint16_t x802 = UINT16_MAX;
	static uint8_t x804 = 3U;
	volatile int64_t t160 = 60795960523LL;

    t160 = (x801/((x802-x803)-x804));

    if (t160 != -140743931101197LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x805 = INT32_MAX;
	int32_t x807 = -1;
	int8_t x808 = 1;
	static volatile int32_t t161 = 743;

    t161 = (x805/((x806-x807)-x808));

    if (t161 != 37675151) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x809 = 1U;
	static uint32_t t162 = 27388883U;

    t162 = (x809/((x810-x811)-x812));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x814 = INT8_MIN;
	static volatile int8_t x815 = -1;
	uint32_t x816 = 4545462U;
	volatile uint32_t t163 = 21U;

    t163 = (x813/((x814-x815)-x816));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x817 = 1U;
	int16_t x819 = INT16_MAX;
	uint16_t x820 = UINT16_MAX;
	uint64_t t164 = 3537584664628LLU;

    t164 = (x817/((x818-x819)-x820));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x821 = 1LLU;
	volatile int16_t x822 = INT16_MIN;
	static uint64_t t165 = 595620413LLU;

    t165 = (x821/((x822-x823)-x824));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x825 = INT64_MIN;
	static volatile int8_t x826 = -1;
	int32_t x827 = -348011;
	int16_t x828 = INT16_MIN;
	int64_t t166 = -6660732LL;

    t166 = (x825/((x826-x827)-x828));

    if (t166 != -24222439418387LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x829 = 1U;
	uint8_t x830 = 0U;
	int8_t x832 = INT8_MIN;
	int32_t t167 = -419316113;

    t167 = (x829/((x830-x831)-x832));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x833 = 448198;
	volatile uint64_t x834 = UINT64_MAX;
	uint32_t x836 = 2511593U;
	uint64_t t168 = 6417473LLU;

    t168 = (x833/((x834-x835)-x836));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x837 = INT8_MIN;
	uint64_t x838 = UINT64_MAX;
	volatile int64_t x840 = INT64_MIN;
	static volatile uint64_t t169 = 150781352LLU;

    t169 = (x837/((x838-x839)-x840));

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x841 = INT64_MAX;
	uint64_t x843 = 897LLU;
	static int8_t x844 = INT8_MIN;
	uint64_t t170 = 4LLU;

    t170 = (x841/((x842-x843)-x844));

    if (t170 != 1LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x845 = -1LL;
	uint8_t x846 = UINT8_MAX;
	int32_t x847 = -1;
	volatile uint64_t x848 = 2LLU;

    t171 = (x845/((x846-x847)-x848));

    if (t171 != 72624976668147841LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x849 = 169;
	uint64_t x850 = UINT64_MAX;
	static uint32_t x851 = 569181532U;
	static int32_t x852 = -1;
	volatile uint64_t t172 = 15LLU;

    t172 = (x849/((x850-x851)-x852));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x862 = 4895813U;
	static int32_t x863 = INT32_MIN;
	volatile int32_t x864 = -29;
	volatile uint64_t t173 = 4203515089090LLU;

    t173 = (x861/((x862-x863)-x864));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x866 = UINT64_MAX;
	uint16_t x867 = UINT16_MAX;
	volatile uint64_t t174 = 3705792875207358723LLU;

    t174 = (x865/((x866-x867)-x868));

    if (t174 != 1LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x869 = UINT64_MAX;
	int8_t x870 = INT8_MIN;
	int32_t x871 = INT32_MIN;
	int32_t x872 = 234;
	uint64_t t175 = 14460780702LLU;

    t175 = (x869/((x870-x871)-x872));

    if (t175 != 8589936040LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x873 = -505723385842135LL;
	int32_t x874 = INT32_MIN;
	static int32_t x875 = INT32_MIN;
	volatile uint16_t x876 = UINT16_MAX;
	int64_t t176 = -1LL;

    t176 = (x873/((x874-x875)-x876));

    if (t176 != 7716844218LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x877 = INT16_MAX;
	volatile uint64_t x879 = UINT64_MAX;
	static uint32_t x880 = 65001U;
	volatile uint64_t t177 = 60078811LLU;

    t177 = (x877/((x878-x879)-x880));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x885 = INT16_MIN;
	int64_t x886 = -2665375036503LL;
	int8_t x887 = 1;
	static volatile uint64_t x888 = 170086LLU;
	volatile uint64_t t178 = 531283685347LLU;

    t178 = (x885/((x886-x887)-x888));

    if (t178 != 1LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x889 = INT8_MAX;
	volatile uint8_t x890 = 29U;
	int64_t x891 = -1LL;
	int16_t x892 = INT16_MAX;
	volatile int64_t t179 = 396465427387156LL;

    t179 = (x889/((x890-x891)-x892));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x893 = INT8_MAX;
	int64_t x894 = -1LL;
	int32_t x896 = INT32_MIN;
	static int64_t t180 = -93LL;

    t180 = (x893/((x894-x895)-x896));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x897 = 2676434902984019866LLU;
	static int64_t x898 = 1928LL;
	int32_t x900 = -8;
	uint64_t t181 = 104161020413248085LLU;

    t181 = (x897/((x898-x899)-x900));

    if (t181 != 1474619781258413LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x901 = INT64_MIN;
	int8_t x902 = INT8_MAX;
	uint64_t x903 = 132955348676799479LLU;
	int16_t x904 = -1;

    t182 = (x901/((x902-x903)-x904));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x905 = UINT16_MAX;
	static int32_t x906 = -1;
	uint32_t x907 = 913701U;
	uint32_t t183 = 380478U;

    t183 = (x905/((x906-x907)-x908));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x911 = 232510LLU;
	int32_t x912 = -1;

    t184 = (x909/((x910-x911)-x912));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x913 = 708168890466LLU;
	static int16_t x915 = INT16_MIN;
	int8_t x916 = -1;
	static volatile uint64_t t185 = 55003LLU;

    t185 = (x913/((x914-x915)-x916));

    if (t185 != 10805799LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x917 = 1;
	volatile uint8_t x918 = 106U;
	int8_t x919 = INT8_MAX;
	int8_t x920 = -20;
	static int32_t t186 = 35268;

    t186 = (x917/((x918-x919)-x920));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x921 = INT32_MIN;
	int64_t x922 = -1LL;
	uint8_t x923 = UINT8_MAX;
	volatile int64_t t187 = 90282LL;

    t187 = (x921/((x922-x923)-x924));

    if (t187 != 5607006LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x929 = -1;
	int32_t x932 = -29;
	volatile int32_t t188 = -5;

    t188 = (x929/((x930-x931)-x932));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x933 = INT32_MAX;
	static int32_t x934 = 570;
	int16_t x935 = INT16_MAX;
	int32_t x936 = 12771;
	int32_t t189 = 3;

    t189 = (x933/((x934-x935)-x936));

    if (t189 != -47755) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x937 = UINT16_MAX;
	static int64_t x938 = -1734511041982LL;
	int16_t x939 = INT16_MIN;
	static int64_t t190 = -27LL;

    t190 = (x937/((x938-x939)-x940));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x941 = 121U;
	uint64_t x942 = 31079514699LLU;
	static int8_t x944 = INT8_MIN;
	volatile uint64_t t191 = 1528273805883510353LLU;

    t191 = (x941/((x942-x943)-x944));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x949 = 124182;
	int16_t x950 = INT16_MAX;
	int32_t x951 = -971217569;
	volatile uint64_t t192 = 49730596116195124LLU;

    t192 = (x949/((x950-x951)-x952));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x957 = INT64_MIN;
	uint64_t x958 = UINT64_MAX;
	uint32_t x959 = 99227400U;
	uint16_t x960 = 764U;

    t193 = (x957/((x958-x959)-x960));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x965 = 21;
	int64_t x966 = 342LL;
	static volatile int16_t x967 = -1;
	uint64_t x968 = UINT64_MAX;

    t194 = (x965/((x966-x967)-x968));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint8_t x969 = UINT8_MAX;
	uint64_t x970 = UINT64_MAX;
	static int64_t x971 = -1LL;
	uint16_t x972 = 117U;
	uint64_t t195 = 3LLU;

    t195 = (x969/((x970-x971)-x972));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x973 = INT8_MIN;
	int8_t x974 = -1;
	int16_t x975 = -2;
	volatile int64_t x976 = -1LL;

    t196 = (x973/((x974-x975)-x976));

    if (t196 != -64LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x978 = -90754259185LL;
	int8_t x979 = INT8_MIN;
	uint16_t x980 = 22U;

    t197 = (x977/((x978-x979)-x980));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x981 = 472LLU;
	int32_t x982 = -1;
	volatile int64_t x983 = INT64_MIN;

    t198 = (x981/((x982-x983)-x984));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x986 = UINT64_MAX;
	int64_t x988 = INT64_MIN;
	volatile uint64_t t199 = 1911569011880265LLU;

    t199 = (x985/((x986-x987)-x988));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

