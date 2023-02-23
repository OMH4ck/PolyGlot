
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

static int32_t x7 = -1;
int8_t x9 = 4;
volatile int64_t x12 = INT64_MIN;
static volatile int64_t x17 = -3LL;
uint16_t x32 = 189U;
int8_t x40 = 0;
int32_t t9 = 98424;
int32_t t10 = 103106920;
uint8_t x48 = 1U;
static volatile int32_t t11 = 0;
int8_t x51 = INT8_MAX;
int64_t x59 = INT64_MIN;
int32_t t14 = 331065;
int64_t x61 = INT64_MIN;
int16_t x67 = INT16_MIN;
static volatile int32_t t17 = 39;
int64_t x75 = INT64_MIN;
int64_t x76 = INT64_MIN;
static int32_t x85 = -1;
static int8_t x87 = INT8_MAX;
int32_t t22 = 3;
int32_t x105 = INT32_MAX;
static int16_t x106 = INT16_MIN;
static int16_t x113 = INT16_MIN;
int32_t t28 = 440;
int32_t x119 = -1;
uint32_t x125 = 228463066U;
volatile int8_t x132 = INT8_MAX;
uint64_t x137 = UINT64_MAX;
int8_t x140 = INT8_MIN;
volatile int32_t x143 = INT32_MIN;
int32_t t37 = -105;
volatile int32_t t38 = -162;
int32_t x168 = -201439534;
volatile int64_t x172 = -36018783LL;
static volatile int64_t x178 = -1LL;
static uint8_t x199 = 7U;
volatile int32_t t48 = -6;
int64_t x209 = -1LL;
volatile int32_t t51 = -2620567;
volatile uint32_t x225 = UINT32_MAX;
int16_t x226 = -841;
uint32_t x235 = 570U;
uint16_t x239 = UINT16_MAX;
volatile uint32_t x247 = 457267668U;
int32_t x248 = INT32_MIN;
int32_t t60 = 1442197;
uint32_t x253 = UINT32_MAX;
uint8_t x259 = 1U;
int8_t x264 = 1;
volatile uint32_t x272 = UINT32_MAX;
uint8_t x274 = 6U;
volatile int64_t x276 = 1219058836947294701LL;
int16_t x278 = INT16_MAX;
volatile int32_t x279 = -2;
static volatile int32_t t69 = 1699006;
int8_t x286 = INT8_MIN;
int64_t x288 = 1515LL;
volatile uint8_t x291 = UINT8_MAX;
uint16_t x298 = 112U;
volatile int64_t x299 = 55724371909520562LL;
uint8_t x307 = 21U;
int32_t t77 = -100618624;
int8_t x317 = -10;
static volatile int64_t x322 = INT64_MIN;
static uint16_t x335 = 1U;
static volatile int32_t x337 = 31;
int64_t x342 = INT64_MIN;
int32_t t84 = 0;
uint8_t x347 = 5U;
int8_t x349 = INT8_MAX;
int64_t x350 = INT64_MIN;
static int64_t x352 = 270772142577177375LL;
int8_t x357 = -1;
static uint32_t x359 = 62246198U;
int64_t x360 = INT64_MIN;
int64_t x365 = INT64_MIN;
volatile int32_t t90 = 0;
static volatile int32_t t91 = 88851764;
volatile int32_t t93 = -806211981;
uint16_t x384 = 261U;
int8_t x385 = INT8_MIN;
static int8_t x388 = INT8_MIN;
static volatile int32_t t95 = 12040;
uint64_t x392 = 2368639510184555LLU;
volatile int32_t t96 = -4627921;
int32_t x400 = INT32_MIN;
int16_t x407 = 702;
uint8_t x411 = 83U;
int16_t x416 = -1;
static int16_t x417 = INT16_MIN;
volatile int32_t t103 = -3;
int16_t x432 = INT16_MAX;
uint16_t x435 = UINT16_MAX;
int32_t x437 = -63;
uint8_t x445 = UINT8_MAX;
volatile int16_t x449 = -16259;
int32_t x450 = 0;
static volatile uint16_t x453 = 632U;
int64_t x455 = INT64_MIN;
volatile int8_t x456 = -1;
int8_t x457 = INT8_MIN;
static int32_t t114 = -49990;
volatile uint64_t x470 = 636521003958LLU;
int32_t x471 = INT32_MIN;
static volatile int32_t x476 = INT32_MIN;
int32_t t118 = -53;
static uint16_t x482 = 2U;
uint16_t x486 = 1317U;
int8_t x489 = INT8_MAX;
volatile int8_t x490 = INT8_MAX;
int32_t t122 = 237482345;
int16_t x497 = 8;
int32_t t124 = 121;
int32_t t125 = -1637;
uint64_t x510 = 2LLU;
static volatile int32_t t126 = 5562984;
uint16_t x514 = 16316U;
int32_t t127 = -4;
volatile int32_t t129 = -11197;
static int8_t x525 = 1;
volatile int64_t x526 = -1497470242558415772LL;
int32_t t130 = 774382022;
int32_t x530 = INT32_MAX;
int16_t x533 = INT16_MIN;
int64_t x535 = 2039861LL;
uint8_t x541 = 1U;
uint64_t x542 = 396054216LLU;
uint16_t x543 = UINT16_MAX;
volatile int32_t t133 = 3;
int64_t x546 = INT64_MIN;
static int64_t x554 = -71LL;
int32_t t137 = 7179;
uint32_t x563 = UINT32_MAX;
uint16_t x566 = UINT16_MAX;
int16_t x568 = -1;
int32_t x592 = 2;
volatile uint32_t x595 = UINT32_MAX;
uint64_t x601 = UINT64_MAX;
static int32_t x628 = -22076;
uint64_t x629 = UINT64_MAX;
uint8_t x632 = 0U;
static int32_t t154 = 1;
volatile int32_t t155 = 1282398;
volatile int32_t x637 = INT32_MAX;
static int32_t t156 = -167283;
int8_t x643 = INT8_MAX;
volatile int32_t t160 = -6872729;
int8_t x674 = INT8_MAX;
uint64_t x675 = 842583950834203388LLU;
int8_t x676 = 1;
volatile int32_t t164 = 62167;
int64_t x681 = -1765172976955150458LL;
int8_t x682 = INT8_MAX;
uint64_t x684 = UINT64_MAX;
uint8_t x686 = 7U;
static uint8_t x692 = 5U;
int8_t x701 = -8;
static uint16_t x705 = 7U;
volatile uint8_t x707 = UINT8_MAX;
int64_t x712 = INT64_MAX;
uint32_t x721 = 3108013U;
static volatile uint16_t x723 = 49U;
int16_t x726 = 1;
static int32_t x728 = -32374;
uint8_t x730 = 12U;
uint16_t x734 = 23U;
static uint32_t x735 = UINT32_MAX;
int32_t x736 = -1;
static int32_t t179 = 118;
static int64_t x747 = -6533545LL;
int8_t x748 = INT8_MIN;
uint64_t x751 = UINT64_MAX;
int64_t x755 = -1LL;
int32_t t184 = 378569770;
int16_t x759 = -1;
int32_t x782 = INT32_MAX;
volatile int32_t x784 = INT32_MAX;
volatile int32_t t193 = 17385;
int8_t x794 = INT8_MAX;
int64_t x799 = -450439827507LL;
volatile int32_t t196 = -2514;
uint16_t x807 = UINT16_MAX;
uint8_t x808 = 17U;
volatile int32_t t197 = 4;
static int16_t x809 = -1;
volatile int32_t t198 = -91651;


void f0(void) {
    	volatile int64_t x1 = 144LL;
	static int16_t x2 = INT16_MAX;
	int64_t x3 = INT64_MIN;
	volatile int32_t x4 = -1;
	static int32_t t0 = -234;

    t0 = (x1==((x2%x3)>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = 1531LL;
	int32_t x6 = INT32_MIN;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = 15512;

    t1 = (x5==((x6%x7)>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MIN;
	uint64_t x11 = UINT64_MAX;
	static int32_t t2 = -486;

    t2 = (x9==((x10%x11)>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 2843757LL;
	uint64_t x14 = 25795098333509753LLU;
	volatile uint64_t x15 = 59508379978LLU;
	static volatile uint8_t x16 = 3U;
	volatile int32_t t3 = -28161;

    t3 = (x13==((x14%x15)>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = 0U;
	uint32_t x19 = 5U;
	int16_t x20 = -4;
	volatile int32_t t4 = 148361;

    t4 = (x17==((x18%x19)>x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = UINT64_MAX;
	static uint32_t x22 = 3914U;
	uint32_t x23 = 2886U;
	int32_t x24 = -1;
	int32_t t5 = -5119873;

    t5 = (x21==((x22%x23)>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MIN;
	static uint8_t x26 = 1U;
	static int64_t x27 = INT64_MIN;
	uint8_t x28 = UINT8_MAX;
	int32_t t6 = -171;

    t6 = (x25==((x26%x27)>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	int32_t x30 = -1;
	volatile int8_t x31 = -1;
	volatile int32_t t7 = 50732248;

    t7 = (x29==((x30%x31)>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -1;
	volatile uint64_t x34 = 62224971652LLU;
	int64_t x35 = -1LL;
	int32_t x36 = -1;
	int32_t t8 = -653999228;

    t8 = (x33==((x34%x35)>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -1153710931819980LL;
	int16_t x38 = -1;
	static uint8_t x39 = UINT8_MAX;

    t9 = (x37==((x38%x39)>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 31201LLU;
	uint32_t x42 = 1344U;
	int32_t x43 = 10853;
	int8_t x44 = INT8_MIN;

    t10 = (x41==((x42%x43)>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	volatile int64_t x46 = -1LL;
	volatile int8_t x47 = -1;

    t11 = (x45==((x46%x47)>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -1;
	int16_t x50 = INT16_MIN;
	int16_t x52 = -14931;
	static int32_t t12 = 213386;

    t12 = (x49==((x50%x51)>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 996947U;
	static int64_t x54 = -1LL;
	uint32_t x55 = 30665955U;
	int32_t x56 = INT32_MIN;
	static int32_t t13 = 157;

    t13 = (x53==((x54%x55)>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int8_t x58 = -41;
	int8_t x60 = INT8_MAX;

    t14 = (x57==((x58%x59)>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x62 = UINT64_MAX;
	static int16_t x63 = -1;
	int64_t x64 = INT64_MAX;
	int32_t t15 = -10;

    t15 = (x61==((x62%x63)>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = UINT8_MAX;
	volatile int32_t x66 = INT32_MAX;
	int64_t x68 = -250243082525727LL;
	int32_t t16 = 1815;

    t16 = (x65==((x66%x67)>x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = -5;
	static int8_t x70 = INT8_MIN;
	static volatile int16_t x71 = -1;
	int32_t x72 = INT32_MIN;

    t17 = (x69==((x70%x71)>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -224LL;
	uint32_t x74 = 2075030027U;
	int32_t t18 = -1012080;

    t18 = (x73==((x74%x75)>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MIN;
	int32_t x79 = -32149392;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 93802;

    t19 = (x77==((x78%x79)>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = UINT8_MAX;
	static int16_t x82 = 63;
	uint64_t x83 = 15154251LLU;
	int32_t x84 = 98273;
	int32_t t20 = -956485;

    t20 = (x81==((x82%x83)>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x86 = -1;
	volatile uint8_t x88 = UINT8_MAX;
	static int32_t t21 = 2476;

    t21 = (x85==((x86%x87)>x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 17U;
	int32_t x90 = INT32_MIN;
	static int32_t x91 = INT32_MIN;
	uint8_t x92 = UINT8_MAX;

    t22 = (x89==((x90%x91)>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 2324;
	volatile int64_t x94 = INT64_MAX;
	int16_t x95 = INT16_MAX;
	int32_t x96 = INT32_MIN;
	static int32_t t23 = 206;

    t23 = (x93==((x94%x95)>x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = INT64_MAX;
	volatile int64_t x98 = INT64_MIN;
	int8_t x99 = INT8_MIN;
	volatile int64_t x100 = INT64_MIN;
	int32_t t24 = -4012104;

    t24 = (x97==((x98%x99)>x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	volatile int8_t x102 = INT8_MAX;
	uint16_t x103 = 8724U;
	uint32_t x104 = UINT32_MAX;
	static int32_t t25 = -125294685;

    t25 = (x101==((x102%x103)>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x107 = -792058636150790LL;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = 0;

    t26 = (x105==((x106%x107)>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MAX;
	int16_t x110 = -2;
	uint8_t x111 = 26U;
	uint8_t x112 = UINT8_MAX;
	int32_t t27 = 11212;

    t27 = (x109==((x110%x111)>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x114 = -805;
	static int16_t x115 = INT16_MIN;
	int16_t x116 = INT16_MIN;

    t28 = (x113==((x114%x115)>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = 21;
	int64_t x118 = INT64_MIN;
	uint64_t x120 = 143195LLU;
	static volatile int32_t t29 = -50477031;

    t29 = (x117==((x118%x119)>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 2U;
	int32_t x122 = INT32_MAX;
	int8_t x123 = -1;
	int32_t x124 = 125724602;
	static int32_t t30 = -2;

    t30 = (x121==((x122%x123)>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = -1;
	int64_t x127 = -1LL;
	uint32_t x128 = 243U;
	volatile int32_t t31 = 0;

    t31 = (x125==((x126%x127)>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x129 = 4352280U;
	uint32_t x130 = 1083693558U;
	static int8_t x131 = -63;
	int32_t t32 = 26;

    t32 = (x129==((x130%x131)>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -1;
	int64_t x134 = INT64_MAX;
	uint16_t x135 = 8268U;
	static uint64_t x136 = 183641352877033129LLU;
	volatile int32_t t33 = 60;

    t33 = (x133==((x134%x135)>x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x138 = 8411990;
	uint32_t x139 = 15U;
	int32_t t34 = -1792;

    t34 = (x137==((x138%x139)>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x141 = UINT32_MAX;
	volatile int8_t x142 = 4;
	int32_t x144 = INT32_MIN;
	int32_t t35 = -62279;

    t35 = (x141==((x142%x143)>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 13400LLU;
	static int16_t x146 = -231;
	int64_t x147 = -1LL;
	int16_t x148 = INT16_MAX;
	int32_t t36 = 15;

    t36 = (x145==((x146%x147)>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = -1;
	static uint8_t x150 = 74U;
	uint64_t x151 = 42LLU;
	static volatile int32_t x152 = 6;

    t37 = (x149==((x150%x151)>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 38U;
	static uint64_t x154 = 9LLU;
	uint32_t x155 = UINT32_MAX;
	uint32_t x156 = 36030U;

    t38 = (x153==((x154%x155)>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x157 = 958LLU;
	int16_t x158 = -1;
	static uint32_t x159 = UINT32_MAX;
	volatile uint64_t x160 = 7616860220089LLU;
	int32_t t39 = 7724365;

    t39 = (x157==((x158%x159)>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int64_t x161 = INT64_MAX;
	uint32_t x162 = 7744U;
	int16_t x163 = -1;
	int16_t x164 = INT16_MAX;
	int32_t t40 = 6;

    t40 = (x161==((x162%x163)>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 229242U;
	int8_t x166 = INT8_MIN;
	uint32_t x167 = UINT32_MAX;
	static volatile int32_t t41 = -481667;

    t41 = (x165==((x166%x167)>x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 727608LLU;
	int32_t x170 = INT32_MIN;
	uint8_t x171 = 1U;
	int32_t t42 = -168631403;

    t42 = (x169==((x170%x171)>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 411U;
	static int8_t x174 = -1;
	int8_t x175 = 2;
	uint16_t x176 = 41U;
	volatile int32_t t43 = -132204435;

    t43 = (x173==((x174%x175)>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 387614663LLU;
	static int32_t x179 = -1;
	uint16_t x180 = UINT16_MAX;
	int32_t t44 = 15608;

    t44 = (x177==((x178%x179)>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = UINT32_MAX;
	int64_t x182 = -1LL;
	int16_t x183 = -1;
	int32_t x184 = INT32_MIN;
	volatile int32_t t45 = 3989202;

    t45 = (x181==((x182%x183)>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;
	int32_t x186 = -1908;
	int8_t x187 = -1;
	volatile int8_t x188 = 1;
	int32_t t46 = -99;

    t46 = (x185==((x186%x187)>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	int32_t x190 = INT32_MAX;
	int32_t x191 = -1;
	int16_t x192 = -1013;
	int32_t t47 = 4604;

    t47 = (x189==((x190%x191)>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x197 = INT32_MIN;
	int32_t x198 = -7440013;
	volatile int64_t x200 = INT64_MIN;

    t48 = (x197==((x198%x199)>x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x201 = UINT16_MAX;
	static uint16_t x202 = UINT16_MAX;
	int16_t x203 = 1;
	int8_t x204 = INT8_MIN;
	int32_t t49 = -190;

    t49 = (x201==((x202%x203)>x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x205 = 13230533430LLU;
	static int64_t x206 = -1LL;
	int64_t x207 = INT64_MIN;
	static int8_t x208 = INT8_MAX;
	int32_t t50 = -58018;

    t50 = (x205==((x206%x207)>x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x210 = 185690;
	static volatile int8_t x211 = INT8_MIN;
	uint32_t x212 = 9254U;

    t51 = (x209==((x210%x211)>x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x213 = -1;
	volatile int8_t x214 = -1;
	int16_t x215 = INT16_MIN;
	uint16_t x216 = 124U;
	int32_t t52 = -425860;

    t52 = (x213==((x214%x215)>x216));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = INT64_MIN;
	int8_t x218 = INT8_MAX;
	int32_t x219 = -384384;
	int16_t x220 = -1;
	int32_t t53 = -2064;

    t53 = (x217==((x218%x219)>x220));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x221 = INT8_MIN;
	uint16_t x222 = 30U;
	int8_t x223 = -3;
	volatile int32_t x224 = 23248662;
	int32_t t54 = 1;

    t54 = (x221==((x222%x223)>x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x227 = INT64_MIN;
	volatile uint32_t x228 = 687U;
	int32_t t55 = 5076661;

    t55 = (x225==((x226%x227)>x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x229 = INT32_MIN;
	int64_t x230 = -222081LL;
	int64_t x231 = INT64_MIN;
	static uint8_t x232 = 3U;
	static volatile int32_t t56 = -453;

    t56 = (x229==((x230%x231)>x232));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x233 = INT32_MIN;
	static uint16_t x234 = UINT16_MAX;
	volatile int32_t x236 = 1544;
	volatile int32_t t57 = -12;

    t57 = (x233==((x234%x235)>x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x237 = INT32_MIN;
	int16_t x238 = INT16_MAX;
	uint8_t x240 = UINT8_MAX;
	int32_t t58 = -1;

    t58 = (x237==((x238%x239)>x240));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x241 = INT8_MIN;
	volatile int8_t x242 = INT8_MIN;
	static uint32_t x243 = 27661U;
	volatile int64_t x244 = 987572027978LL;
	int32_t t59 = -74288582;

    t59 = (x241==((x242%x243)>x244));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x245 = -6;
	uint64_t x246 = UINT64_MAX;

    t60 = (x245==((x246%x247)>x248));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x249 = 6LLU;
	int8_t x250 = 1;
	volatile uint16_t x251 = 1U;
	int32_t x252 = -1;
	static volatile int32_t t61 = 1274;

    t61 = (x249==((x250%x251)>x252));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x254 = -1;
	uint16_t x255 = 3225U;
	static int16_t x256 = -1;
	volatile int32_t t62 = -189862768;

    t62 = (x253==((x254%x255)>x256));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x257 = INT8_MIN;
	int64_t x258 = -1LL;
	int16_t x260 = 31;
	volatile int32_t t63 = -1;

    t63 = (x257==((x258%x259)>x260));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x261 = UINT64_MAX;
	static int8_t x262 = -1;
	int32_t x263 = INT32_MIN;
	volatile int32_t t64 = 199089;

    t64 = (x261==((x262%x263)>x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x265 = -60304471210194429LL;
	int16_t x266 = 859;
	uint64_t x267 = 8472609903361370LLU;
	volatile int32_t x268 = INT32_MAX;
	static volatile int32_t t65 = 924;

    t65 = (x265==((x266%x267)>x268));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x269 = UINT32_MAX;
	int16_t x270 = -1;
	int16_t x271 = INT16_MIN;
	volatile int32_t t66 = -29219709;

    t66 = (x269==((x270%x271)>x272));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = 5016073;
	int16_t x275 = INT16_MAX;
	volatile int32_t t67 = 5911;

    t67 = (x273==((x274%x275)>x276));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x277 = -27079974LL;
	uint8_t x280 = 0U;
	static volatile int32_t t68 = 7;

    t68 = (x277==((x278%x279)>x280));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x281 = INT8_MIN;
	uint32_t x282 = 15076U;
	static int64_t x283 = INT64_MAX;
	static int16_t x284 = 35;

    t69 = (x281==((x282%x283)>x284));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x285 = INT64_MAX;
	int32_t x287 = INT32_MIN;
	volatile int32_t t70 = -5220;

    t70 = (x285==((x286%x287)>x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x289 = UINT8_MAX;
	static int64_t x290 = INT64_MIN;
	int16_t x292 = INT16_MIN;
	int32_t t71 = 52907649;

    t71 = (x289==((x290%x291)>x292));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x293 = INT8_MIN;
	volatile int16_t x294 = INT16_MIN;
	volatile int8_t x295 = INT8_MAX;
	uint16_t x296 = 32599U;
	static int32_t t72 = 110692852;

    t72 = (x293==((x294%x295)>x296));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x297 = -3111346LL;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t73 = 234336;

    t73 = (x297==((x298%x299)>x300));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x301 = -3190737145009024730LL;
	int16_t x302 = -34;
	int8_t x303 = -1;
	uint8_t x304 = 121U;
	volatile int32_t t74 = 419;

    t74 = (x301==((x302%x303)>x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x305 = 10;
	uint32_t x306 = 1U;
	uint32_t x308 = UINT32_MAX;
	static volatile int32_t t75 = -12783;

    t75 = (x305==((x306%x307)>x308));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x309 = 843769U;
	volatile int16_t x310 = 4;
	int16_t x311 = -1;
	volatile int8_t x312 = INT8_MAX;
	volatile int32_t t76 = -2330;

    t76 = (x309==((x310%x311)>x312));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x313 = 61U;
	int64_t x314 = 38400231846603LL;
	static int32_t x315 = INT32_MIN;
	static int64_t x316 = INT64_MAX;

    t77 = (x313==((x314%x315)>x316));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x318 = -1;
	uint16_t x319 = 9426U;
	static int8_t x320 = INT8_MIN;
	volatile int32_t t78 = 1517227;

    t78 = (x317==((x318%x319)>x320));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x321 = 21U;
	int8_t x323 = INT8_MAX;
	static volatile int16_t x324 = INT16_MIN;
	int32_t t79 = -3;

    t79 = (x321==((x322%x323)>x324));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x325 = INT32_MIN;
	int32_t x326 = -1071822;
	int16_t x327 = -1;
	volatile uint16_t x328 = 13346U;
	int32_t t80 = 162;

    t80 = (x325==((x326%x327)>x328));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x329 = -497LL;
	int64_t x330 = -1LL;
	int16_t x331 = INT16_MIN;
	static int64_t x332 = 104302LL;
	int32_t t81 = 4566405;

    t81 = (x329==((x330%x331)>x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x333 = INT64_MAX;
	static int16_t x334 = INT16_MIN;
	uint64_t x336 = 144051458492654939LLU;
	volatile int32_t t82 = 17627;

    t82 = (x333==((x334%x335)>x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x338 = -1;
	volatile int16_t x339 = INT16_MIN;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t83 = 173;

    t83 = (x337==((x338%x339)>x340));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x341 = 158818183U;
	int64_t x343 = INT64_MIN;
	uint32_t x344 = 53950U;

    t84 = (x341==((x342%x343)>x344));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x345 = INT64_MAX;
	static int8_t x346 = INT8_MAX;
	static int16_t x348 = 3;
	int32_t t85 = -8090;

    t85 = (x345==((x346%x347)>x348));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x351 = -1;
	volatile int32_t t86 = 6;

    t86 = (x349==((x350%x351)>x352));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x353 = -98187450387LL;
	int32_t x354 = -17534550;
	int64_t x355 = INT64_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t87 = 63;

    t87 = (x353==((x354%x355)>x356));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x358 = INT64_MIN;
	static volatile int32_t t88 = 64112422;

    t88 = (x357==((x358%x359)>x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x361 = UINT64_MAX;
	uint8_t x362 = UINT8_MAX;
	volatile int8_t x363 = INT8_MIN;
	static uint16_t x364 = 1U;
	int32_t t89 = 418;

    t89 = (x361==((x362%x363)>x364));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x366 = -274077LL;
	int32_t x367 = -71692042;
	volatile int8_t x368 = INT8_MIN;

    t90 = (x365==((x366%x367)>x368));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x369 = INT32_MAX;
	int64_t x370 = INT64_MAX;
	uint64_t x371 = 124227968315452LLU;
	int32_t x372 = -20222578;

    t91 = (x369==((x370%x371)>x372));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x373 = UINT64_MAX;
	uint16_t x374 = UINT16_MAX;
	static int8_t x375 = INT8_MIN;
	uint64_t x376 = 4185560973005011104LLU;
	int32_t t92 = -2532567;

    t92 = (x373==((x374%x375)>x376));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x377 = 34048732338LLU;
	int16_t x378 = INT16_MAX;
	static int32_t x379 = INT32_MIN;
	int32_t x380 = 33921478;

    t93 = (x377==((x378%x379)>x380));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x381 = INT16_MIN;
	int32_t x382 = 1034216;
	uint64_t x383 = 8270263005299LLU;
	int32_t t94 = -315238;

    t94 = (x381==((x382%x383)>x384));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x386 = 98U;
	static int64_t x387 = INT64_MIN;

    t95 = (x385==((x386%x387)>x388));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x389 = -1;
	int32_t x390 = -238758;
	uint16_t x391 = 16483U;

    t96 = (x389==((x390%x391)>x392));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x393 = 3U;
	static uint8_t x394 = UINT8_MAX;
	volatile int16_t x395 = -1;
	int16_t x396 = -1;
	volatile int32_t t97 = 185;

    t97 = (x393==((x394%x395)>x396));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x397 = -1LL;
	static int64_t x398 = INT64_MAX;
	int8_t x399 = INT8_MIN;
	int32_t t98 = -10639593;

    t98 = (x397==((x398%x399)>x400));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x401 = -519;
	int16_t x402 = 2228;
	uint8_t x403 = UINT8_MAX;
	uint32_t x404 = 0U;
	volatile int32_t t99 = 4600574;

    t99 = (x401==((x402%x403)>x404));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x405 = -1;
	int32_t x406 = INT32_MIN;
	int16_t x408 = INT16_MIN;
	static int32_t t100 = -1;

    t100 = (x405==((x406%x407)>x408));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x409 = INT32_MAX;
	static int16_t x410 = -252;
	int32_t x412 = INT32_MAX;
	volatile int32_t t101 = 3173;

    t101 = (x409==((x410%x411)>x412));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x413 = UINT16_MAX;
	int16_t x414 = INT16_MAX;
	int32_t x415 = INT32_MAX;
	volatile int32_t t102 = -8070;

    t102 = (x413==((x414%x415)>x416));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x418 = 1;
	static uint64_t x419 = UINT64_MAX;
	int64_t x420 = INT64_MIN;

    t103 = (x417==((x418%x419)>x420));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x421 = -2;
	uint64_t x422 = 15LLU;
	int64_t x423 = 5629611139378LL;
	int8_t x424 = INT8_MIN;
	volatile int32_t t104 = -13;

    t104 = (x421==((x422%x423)>x424));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x425 = -88;
	static uint8_t x426 = 30U;
	uint8_t x427 = 4U;
	uint32_t x428 = 1U;
	volatile int32_t t105 = 115887126;

    t105 = (x425==((x426%x427)>x428));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x429 = INT32_MIN;
	volatile int8_t x430 = INT8_MIN;
	volatile uint16_t x431 = UINT16_MAX;
	int32_t t106 = -206892;

    t106 = (x429==((x430%x431)>x432));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x433 = INT64_MIN;
	volatile int32_t x434 = 2373;
	volatile uint16_t x436 = UINT16_MAX;
	volatile int32_t t107 = 1;

    t107 = (x433==((x434%x435)>x436));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x438 = INT8_MIN;
	static uint16_t x439 = 92U;
	int16_t x440 = -7;
	int32_t t108 = 390272533;

    t108 = (x437==((x438%x439)>x440));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x441 = 32;
	int8_t x442 = INT8_MAX;
	volatile int16_t x443 = -1;
	int8_t x444 = INT8_MIN;
	volatile int32_t t109 = -60169;

    t109 = (x441==((x442%x443)>x444));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x446 = 255418LL;
	uint16_t x447 = 404U;
	int64_t x448 = INT64_MAX;
	int32_t t110 = 0;

    t110 = (x445==((x446%x447)>x448));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x451 = INT32_MIN;
	static int8_t x452 = -1;
	int32_t t111 = 52;

    t111 = (x449==((x450%x451)>x452));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x454 = INT32_MIN;
	volatile int32_t t112 = 32355;

    t112 = (x453==((x454%x455)>x456));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x458 = INT8_MIN;
	int8_t x459 = INT8_MIN;
	uint64_t x460 = 4281435873601LLU;
	volatile int32_t t113 = 438012149;

    t113 = (x457==((x458%x459)>x460));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x461 = 5;
	int16_t x462 = INT16_MIN;
	uint8_t x463 = UINT8_MAX;
	volatile int8_t x464 = INT8_MIN;

    t114 = (x461==((x462%x463)>x464));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x465 = INT32_MAX;
	volatile int64_t x466 = -1LL;
	volatile int16_t x467 = 14031;
	static int32_t x468 = INT32_MIN;
	int32_t t115 = 276061;

    t115 = (x465==((x466%x467)>x468));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x469 = 77U;
	int16_t x472 = -15;
	int32_t t116 = -1744;

    t116 = (x469==((x470%x471)>x472));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x473 = INT32_MIN;
	static int16_t x474 = -1;
	int16_t x475 = INT16_MIN;
	int32_t t117 = 0;

    t117 = (x473==((x474%x475)>x476));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x477 = INT64_MAX;
	uint32_t x478 = 4852U;
	volatile int32_t x479 = 2006207;
	int8_t x480 = INT8_MIN;

    t118 = (x477==((x478%x479)>x480));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x481 = -1636;
	static uint8_t x483 = 3U;
	uint64_t x484 = 1LLU;
	volatile int32_t t119 = 650324;

    t119 = (x481==((x482%x483)>x484));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x485 = 0U;
	volatile int64_t x487 = INT64_MIN;
	int16_t x488 = INT16_MIN;
	int32_t t120 = -741517;

    t120 = (x485==((x486%x487)>x488));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x491 = INT32_MAX;
	static int64_t x492 = -1LL;
	int32_t t121 = -393949745;

    t121 = (x489==((x490%x491)>x492));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x493 = -1LL;
	int32_t x494 = 52;
	volatile int64_t x495 = INT64_MIN;
	static int8_t x496 = 0;

    t122 = (x493==((x494%x495)>x496));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x498 = 57U;
	int8_t x499 = -5;
	uint64_t x500 = 965218203110202887LLU;
	int32_t t123 = 28;

    t123 = (x497==((x498%x499)>x500));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x501 = INT32_MIN;
	uint32_t x502 = 699U;
	int16_t x503 = INT16_MIN;
	uint32_t x504 = 1612998384U;

    t124 = (x501==((x502%x503)>x504));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x505 = 23U;
	int64_t x506 = INT64_MIN;
	static volatile uint16_t x507 = 3U;
	uint8_t x508 = UINT8_MAX;

    t125 = (x505==((x506%x507)>x508));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x509 = INT64_MAX;
	uint32_t x511 = UINT32_MAX;
	static int32_t x512 = INT32_MAX;

    t126 = (x509==((x510%x511)>x512));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x513 = UINT64_MAX;
	int16_t x515 = -656;
	uint64_t x516 = UINT64_MAX;

    t127 = (x513==((x514%x515)>x516));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x517 = 14U;
	int8_t x518 = 48;
	uint32_t x519 = 332178217U;
	static int16_t x520 = 3;
	volatile int32_t t128 = -8;

    t128 = (x517==((x518%x519)>x520));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x521 = 61U;
	volatile uint64_t x522 = 89LLU;
	uint64_t x523 = UINT64_MAX;
	uint16_t x524 = 5U;

    t129 = (x521==((x522%x523)>x524));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x527 = INT8_MAX;
	static int64_t x528 = INT64_MAX;

    t130 = (x525==((x526%x527)>x528));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x529 = UINT32_MAX;
	uint32_t x531 = UINT32_MAX;
	static int16_t x532 = INT16_MIN;
	volatile int32_t t131 = -549;

    t131 = (x529==((x530%x531)>x532));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x534 = 5;
	static uint8_t x536 = 72U;
	volatile int32_t t132 = -127819451;

    t132 = (x533==((x534%x535)>x536));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x544 = INT8_MIN;

    t133 = (x541==((x542%x543)>x544));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x545 = 127LLU;
	volatile int16_t x547 = 55;
	uint32_t x548 = 421914403U;
	volatile int32_t t134 = -883300386;

    t134 = (x545==((x546%x547)>x548));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x549 = INT32_MIN;
	int64_t x550 = 10062761294364861LL;
	volatile uint8_t x551 = 1U;
	static volatile int16_t x552 = -1;
	static volatile int32_t t135 = -22705967;

    t135 = (x549==((x550%x551)>x552));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x553 = INT16_MIN;
	volatile int8_t x555 = INT8_MIN;
	static int16_t x556 = -1;
	static int32_t t136 = -165572234;

    t136 = (x553==((x554%x555)>x556));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x557 = INT64_MIN;
	volatile int64_t x558 = -15602802724LL;
	uint8_t x559 = UINT8_MAX;
	volatile int8_t x560 = -1;

    t137 = (x557==((x558%x559)>x560));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x561 = 1U;
	uint64_t x562 = 23960343240612LLU;
	static uint8_t x564 = UINT8_MAX;
	int32_t t138 = 39;

    t138 = (x561==((x562%x563)>x564));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x565 = -12;
	int8_t x567 = INT8_MIN;
	volatile int32_t t139 = 3903;

    t139 = (x565==((x566%x567)>x568));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x569 = INT8_MAX;
	int32_t x570 = 28;
	int32_t x571 = INT32_MIN;
	int64_t x572 = INT64_MIN;
	volatile int32_t t140 = 341876582;

    t140 = (x569==((x570%x571)>x572));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x573 = 4355390004529048401LLU;
	int8_t x574 = -9;
	uint16_t x575 = 230U;
	int32_t x576 = INT32_MIN;
	int32_t t141 = -1602720;

    t141 = (x573==((x574%x575)>x576));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x577 = 105U;
	volatile int32_t x578 = INT32_MIN;
	uint64_t x579 = 741LLU;
	int32_t x580 = INT32_MIN;
	volatile int32_t t142 = -16686;

    t142 = (x577==((x578%x579)>x580));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x581 = 1015U;
	int32_t x582 = INT32_MIN;
	static int64_t x583 = -1598534174921LL;
	uint8_t x584 = 4U;
	volatile int32_t t143 = 14299;

    t143 = (x581==((x582%x583)>x584));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint16_t x589 = 81U;
	static volatile int16_t x590 = 1;
	int64_t x591 = -1LL;
	volatile int32_t t144 = 5;

    t144 = (x589==((x590%x591)>x592));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x593 = 21U;
	static volatile uint16_t x594 = 16889U;
	volatile int16_t x596 = 0;
	int32_t t145 = -1419759;

    t145 = (x593==((x594%x595)>x596));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x597 = 9U;
	int64_t x598 = INT64_MAX;
	uint8_t x599 = 5U;
	static int64_t x600 = INT64_MIN;
	int32_t t146 = 648;

    t146 = (x597==((x598%x599)>x600));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x602 = -1;
	uint16_t x603 = 101U;
	int16_t x604 = 35;
	volatile int32_t t147 = -29;

    t147 = (x601==((x602%x603)>x604));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x605 = INT32_MAX;
	uint64_t x606 = 1546398317266981266LLU;
	int8_t x607 = INT8_MAX;
	int8_t x608 = 4;
	volatile int32_t t148 = -332;

    t148 = (x605==((x606%x607)>x608));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x609 = 9362U;
	int16_t x610 = 5106;
	static int64_t x611 = 60LL;
	int64_t x612 = INT64_MIN;
	volatile int32_t t149 = 803;

    t149 = (x609==((x610%x611)>x612));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x613 = 1;
	uint8_t x614 = 6U;
	int8_t x615 = -1;
	int8_t x616 = -3;
	volatile int32_t t150 = 841;

    t150 = (x613==((x614%x615)>x616));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x617 = -1;
	static volatile int64_t x618 = -1LL;
	int8_t x619 = -1;
	int8_t x620 = INT8_MIN;
	static int32_t t151 = -236469046;

    t151 = (x617==((x618%x619)>x620));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x621 = -14058;
	int16_t x622 = 1904;
	static int64_t x623 = INT64_MAX;
	int8_t x624 = INT8_MIN;
	int32_t t152 = 4048;

    t152 = (x621==((x622%x623)>x624));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x625 = INT64_MAX;
	volatile uint32_t x626 = 368494U;
	uint16_t x627 = 2U;
	volatile int32_t t153 = -1702;

    t153 = (x625==((x626%x627)>x628));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x630 = 30U;
	static int32_t x631 = 13;

    t154 = (x629==((x630%x631)>x632));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x633 = 386150877732944904LL;
	static uint32_t x634 = 25800U;
	uint64_t x635 = UINT64_MAX;
	static int64_t x636 = INT64_MIN;

    t155 = (x633==((x634%x635)>x636));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x638 = 66822837156732094LLU;
	volatile int64_t x639 = -1LL;
	static volatile int8_t x640 = -1;

    t156 = (x637==((x638%x639)>x640));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x641 = 273914210LLU;
	static int16_t x642 = INT16_MIN;
	volatile uint64_t x644 = 6733927046LLU;
	static volatile int32_t t157 = 10139;

    t157 = (x641==((x642%x643)>x644));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x645 = INT64_MIN;
	int32_t x646 = INT32_MAX;
	static int8_t x647 = INT8_MIN;
	static uint64_t x648 = 71LLU;
	int32_t t158 = -367056084;

    t158 = (x645==((x646%x647)>x648));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x649 = INT32_MIN;
	volatile int16_t x650 = INT16_MAX;
	int8_t x651 = INT8_MAX;
	uint64_t x652 = 54681551058958803LLU;
	int32_t t159 = 18843;

    t159 = (x649==((x650%x651)>x652));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x653 = INT64_MIN;
	int8_t x654 = -38;
	int8_t x655 = INT8_MIN;
	int64_t x656 = -1LL;

    t160 = (x653==((x654%x655)>x656));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x657 = 30410402;
	static int32_t x658 = -4005;
	volatile int64_t x659 = -109LL;
	int64_t x660 = INT64_MAX;
	int32_t t161 = 7130844;

    t161 = (x657==((x658%x659)>x660));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x665 = INT16_MIN;
	int8_t x666 = INT8_MIN;
	uint16_t x667 = 2U;
	static int16_t x668 = INT16_MIN;
	int32_t t162 = 58;

    t162 = (x665==((x666%x667)>x668));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x669 = INT64_MAX;
	int64_t x670 = -1LL;
	int64_t x671 = INT64_MIN;
	static int8_t x672 = INT8_MIN;
	int32_t t163 = 13232918;

    t163 = (x669==((x670%x671)>x672));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x673 = INT64_MIN;

    t164 = (x673==((x674%x675)>x676));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x677 = INT16_MIN;
	uint32_t x678 = UINT32_MAX;
	int64_t x679 = INT64_MAX;
	int16_t x680 = 1;
	int32_t t165 = 355977965;

    t165 = (x677==((x678%x679)>x680));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x683 = UINT32_MAX;
	int32_t t166 = 768;

    t166 = (x681==((x682%x683)>x684));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x685 = -123692669186362LL;
	int8_t x687 = INT8_MAX;
	static int16_t x688 = INT16_MIN;
	static volatile int32_t t167 = -955;

    t167 = (x685==((x686%x687)>x688));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x689 = 27153;
	int32_t x690 = INT32_MIN;
	volatile int16_t x691 = INT16_MIN;
	static int32_t t168 = -1;

    t168 = (x689==((x690%x691)>x692));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x693 = 802U;
	uint32_t x694 = UINT32_MAX;
	volatile int32_t x695 = INT32_MAX;
	uint64_t x696 = 3090511251724LLU;
	volatile int32_t t169 = 64058212;

    t169 = (x693==((x694%x695)>x696));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x697 = INT64_MIN;
	int32_t x698 = INT32_MIN;
	int32_t x699 = INT32_MIN;
	uint64_t x700 = 16587869LLU;
	volatile int32_t t170 = -302;

    t170 = (x697==((x698%x699)>x700));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x702 = -1;
	uint8_t x703 = 2U;
	static int8_t x704 = INT8_MAX;
	volatile int32_t t171 = -116;

    t171 = (x701==((x702%x703)>x704));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x706 = 5517;
	uint16_t x708 = 1101U;
	volatile int32_t t172 = -4032192;

    t172 = (x705==((x706%x707)>x708));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x709 = INT16_MAX;
	int16_t x710 = -1;
	static uint16_t x711 = UINT16_MAX;
	int32_t t173 = 252653608;

    t173 = (x709==((x710%x711)>x712));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x713 = -3475;
	static int8_t x714 = -19;
	int16_t x715 = -1;
	int64_t x716 = 3721602976912LL;
	int32_t t174 = -89550893;

    t174 = (x713==((x714%x715)>x716));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x717 = UINT64_MAX;
	int16_t x718 = INT16_MIN;
	int8_t x719 = INT8_MIN;
	int16_t x720 = INT16_MIN;
	static int32_t t175 = 55243;

    t175 = (x717==((x718%x719)>x720));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x722 = INT8_MAX;
	int64_t x724 = -1LL;
	volatile int32_t t176 = -224;

    t176 = (x721==((x722%x723)>x724));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x725 = -1;
	int32_t x727 = INT32_MIN;
	static int32_t t177 = -753864939;

    t177 = (x725==((x726%x727)>x728));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x729 = 713716U;
	static uint32_t x731 = 1671178109U;
	int64_t x732 = INT64_MAX;
	int32_t t178 = -15;

    t178 = (x729==((x730%x731)>x732));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x733 = 74750879959697286LL;

    t179 = (x733==((x734%x735)>x736));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x737 = INT64_MIN;
	uint64_t x738 = 123LLU;
	static uint8_t x739 = UINT8_MAX;
	volatile uint16_t x740 = 7116U;
	volatile int32_t t180 = 25247658;

    t180 = (x737==((x738%x739)>x740));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x741 = UINT64_MAX;
	int64_t x742 = -1253737153436552LL;
	static int8_t x743 = -1;
	volatile uint16_t x744 = 8U;
	int32_t t181 = -34;

    t181 = (x741==((x742%x743)>x744));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x745 = 29014U;
	uint64_t x746 = UINT64_MAX;
	int32_t t182 = -994512;

    t182 = (x745==((x746%x747)>x748));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x749 = INT32_MIN;
	static volatile int64_t x750 = INT64_MIN;
	volatile int16_t x752 = -32;
	volatile int32_t t183 = -6863204;

    t183 = (x749==((x750%x751)>x752));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x753 = UINT32_MAX;
	uint16_t x754 = 7583U;
	volatile int64_t x756 = -1LL;

    t184 = (x753==((x754%x755)>x756));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x757 = INT16_MAX;
	int64_t x758 = -1LL;
	int8_t x760 = -60;
	volatile int32_t t185 = -2702497;

    t185 = (x757==((x758%x759)>x760));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x761 = -1;
	static int8_t x762 = 63;
	static int16_t x763 = 1;
	volatile uint64_t x764 = 145LLU;
	int32_t t186 = 506;

    t186 = (x761==((x762%x763)>x764));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x765 = -506476549LL;
	int32_t x766 = INT32_MIN;
	uint16_t x767 = 5821U;
	volatile int8_t x768 = -1;
	static volatile int32_t t187 = 27;

    t187 = (x765==((x766%x767)>x768));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x769 = -1;
	uint32_t x770 = UINT32_MAX;
	int8_t x771 = INT8_MAX;
	static int8_t x772 = -1;
	int32_t t188 = 50084975;

    t188 = (x769==((x770%x771)>x772));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x773 = -1LL;
	uint32_t x774 = UINT32_MAX;
	uint64_t x775 = UINT64_MAX;
	int32_t x776 = INT32_MAX;
	int32_t t189 = 0;

    t189 = (x773==((x774%x775)>x776));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x777 = 14771U;
	int16_t x778 = -1;
	static volatile int32_t x779 = INT32_MAX;
	int16_t x780 = -1;
	static volatile int32_t t190 = -511;

    t190 = (x777==((x778%x779)>x780));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x781 = UINT64_MAX;
	int16_t x783 = INT16_MAX;
	int32_t t191 = 2513925;

    t191 = (x781==((x782%x783)>x784));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x785 = UINT64_MAX;
	uint64_t x786 = 13LLU;
	static volatile int64_t x787 = INT64_MIN;
	static uint64_t x788 = 1393174701164463038LLU;
	volatile int32_t t192 = 6;

    t192 = (x785==((x786%x787)>x788));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x789 = INT32_MAX;
	int8_t x790 = -54;
	static uint8_t x791 = UINT8_MAX;
	static uint32_t x792 = UINT32_MAX;

    t193 = (x789==((x790%x791)>x792));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x793 = 22097477457545279LLU;
	int32_t x795 = INT32_MIN;
	static volatile int16_t x796 = -1;
	int32_t t194 = 118929;

    t194 = (x793==((x794%x795)>x796));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x797 = INT32_MAX;
	static uint16_t x798 = UINT16_MAX;
	int16_t x800 = -1;
	int32_t t195 = 1283743;

    t195 = (x797==((x798%x799)>x800));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x801 = INT8_MIN;
	volatile int16_t x802 = -1;
	uint8_t x803 = 2U;
	int32_t x804 = -1;

    t196 = (x801==((x802%x803)>x804));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x805 = INT32_MIN;
	int32_t x806 = INT32_MAX;

    t197 = (x805==((x806%x807)>x808));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x810 = -1;
	int8_t x811 = -7;
	static volatile int8_t x812 = INT8_MIN;

    t198 = (x809==((x810%x811)>x812));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x813 = 129U;
	int16_t x814 = INT16_MIN;
	static int32_t x815 = INT32_MIN;
	static uint16_t x816 = UINT16_MAX;
	volatile int32_t t199 = -7;

    t199 = (x813==((x814%x815)>x816));

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

