
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

static int8_t x4 = INT8_MIN;
static volatile int64_t x12 = INT64_MIN;
int32_t t3 = -65767891;
int64_t x17 = -1LL;
uint64_t x18 = 511212471116365LLU;
volatile uint64_t x20 = UINT64_MAX;
int8_t x28 = -1;
int64_t x34 = INT64_MAX;
int32_t t9 = -1064362584;
int32_t x42 = -617995388;
static uint64_t x56 = 22293337371LLU;
static volatile int32_t t13 = 1068566480;
volatile uint32_t x57 = UINT32_MAX;
static int32_t x60 = -1;
static int64_t x66 = 0LL;
uint16_t x67 = 421U;
int32_t t17 = 229590500;
int32_t x86 = -742972718;
int64_t x91 = INT64_MAX;
static uint8_t x96 = UINT8_MAX;
uint32_t x99 = UINT32_MAX;
static int32_t t26 = 48048678;
int8_t x114 = INT8_MAX;
int32_t x116 = 169022149;
int32_t x127 = -1;
uint8_t x131 = UINT8_MAX;
volatile int32_t t32 = -4526447;
uint32_t x137 = 11776979U;
uint16_t x138 = 1U;
static int16_t x141 = -1;
int16_t x143 = INT16_MIN;
volatile uint32_t x146 = UINT32_MAX;
static int8_t x149 = -1;
volatile int32_t t37 = 13251;
volatile int8_t x155 = INT8_MAX;
uint16_t x157 = 15U;
int64_t x159 = INT64_MAX;
static uint64_t x160 = 5LLU;
volatile int32_t t39 = 95;
int8_t x164 = -1;
int32_t t41 = -1125379;
static int16_t x169 = 4;
int32_t x171 = INT32_MAX;
static int32_t x172 = INT32_MIN;
uint8_t x175 = 8U;
static volatile int8_t x187 = INT8_MIN;
int64_t x188 = -954069920005LL;
int64_t x194 = -22LL;
int16_t x196 = 556;
volatile int16_t x200 = INT16_MAX;
int32_t t49 = 892;
static int8_t x203 = INT8_MIN;
uint32_t x205 = 9U;
int64_t x206 = INT64_MIN;
int32_t x210 = INT32_MIN;
uint64_t x214 = 40LLU;
static volatile int32_t x215 = -1;
volatile int32_t x216 = -1;
int8_t x219 = INT8_MAX;
int8_t x223 = 16;
static int32_t t55 = 626943386;
int8_t x225 = 15;
volatile int8_t x226 = 10;
volatile uint8_t x230 = UINT8_MAX;
uint64_t x235 = 178695114123841LLU;
uint8_t x236 = UINT8_MAX;
volatile uint16_t x240 = 12U;
static volatile int32_t t59 = -2585;
volatile int16_t x242 = -1;
static uint64_t x244 = 13365LLU;
int8_t x248 = 3;
volatile int32_t t62 = -2131937;
volatile int64_t x253 = -1LL;
int32_t x255 = INT32_MIN;
int16_t x257 = -1;
int32_t t64 = -38905943;
uint32_t x263 = 62443520U;
volatile int32_t x264 = INT32_MIN;
volatile int8_t x265 = INT8_MAX;
uint16_t x266 = 31U;
static volatile int32_t t66 = -1601990;
volatile uint32_t x271 = 39227U;
int32_t t67 = -6392861;
int32_t x273 = -1;
uint64_t x275 = 6973362338321LLU;
int8_t x282 = INT8_MIN;
uint64_t x286 = UINT64_MAX;
volatile int16_t x290 = -31;
volatile int32_t t72 = 716824;
int32_t x293 = INT32_MAX;
int16_t x296 = INT16_MIN;
int32_t t74 = -2;
volatile int32_t t76 = -6277;
volatile int32_t t77 = -154668;
int8_t x314 = -3;
volatile int16_t x316 = -1;
int32_t t78 = 31872527;
volatile int16_t x319 = INT16_MIN;
uint32_t x320 = UINT32_MAX;
static volatile int32_t t79 = 67;
uint64_t x321 = 382LLU;
uint16_t x326 = 72U;
static volatile uint32_t x333 = 359487U;
volatile int8_t x335 = INT8_MAX;
volatile int8_t x336 = -1;
volatile uint32_t x339 = UINT32_MAX;
volatile uint16_t x343 = 16213U;
int16_t x346 = -1;
uint8_t x350 = 33U;
static int32_t t87 = -5;
uint64_t x354 = UINT64_MAX;
int32_t x357 = INT32_MAX;
uint32_t x360 = 390U;
volatile int32_t t89 = -222;
static int32_t x364 = -67082237;
uint8_t x372 = 4U;
uint8_t x373 = UINT8_MAX;
static int16_t x375 = 7232;
volatile int8_t x381 = -1;
uint64_t x382 = 499191831704LLU;
int8_t x384 = -10;
int64_t x392 = INT64_MIN;
static int16_t x394 = INT16_MIN;
volatile int8_t x399 = -1;
volatile int32_t t99 = 2561;
uint64_t x410 = 2597278131461052891LLU;
static int32_t t105 = -2784559;
static int32_t x432 = INT32_MIN;
uint64_t x441 = 69518299LLU;
int32_t t110 = 1;
uint64_t x445 = 110831956004193683LLU;
uint8_t x448 = 0U;
int32_t t113 = -603713500;
static volatile int32_t x458 = -1;
int32_t x459 = INT32_MIN;
static volatile int32_t t114 = -83294471;
int16_t x463 = INT16_MIN;
int32_t x469 = -61103;
int32_t x483 = INT32_MAX;
uint16_t x490 = 3610U;
int32_t x494 = -92599;
volatile int32_t t123 = 90866;
static int16_t x499 = INT16_MAX;
int8_t x505 = INT8_MIN;
uint64_t x508 = 8101815492114024366LLU;
int32_t t126 = 23144465;
int32_t x509 = INT32_MIN;
static volatile int8_t x510 = -1;
volatile int32_t t127 = 17440;
int32_t x514 = -1;
volatile int32_t t129 = 1;
uint32_t x522 = UINT32_MAX;
volatile int8_t x523 = 1;
static int32_t x528 = -28;
volatile int32_t t131 = 0;
static volatile uint8_t x536 = 0U;
volatile int32_t t133 = 1169919;
uint16_t x539 = UINT16_MAX;
int32_t t134 = 10362612;
static int64_t x548 = -1LL;
int8_t x551 = INT8_MAX;
static volatile int32_t x552 = INT32_MAX;
int32_t t139 = -434062277;
static int32_t t140 = -1743979;
int64_t x565 = 29LL;
int64_t x570 = INT64_MAX;
uint8_t x571 = 1U;
int8_t x573 = INT8_MIN;
static int32_t x575 = -1;
static volatile uint16_t x576 = 3412U;
static volatile int32_t t143 = -129476765;
int8_t x578 = 0;
volatile int32_t x580 = INT32_MIN;
static uint64_t x591 = 4663114888642LLU;
int32_t t147 = 3080790;
static int8_t x603 = INT8_MIN;
int64_t x611 = 193510652195238771LL;
volatile int32_t t152 = -1;
int32_t x617 = INT32_MAX;
static int64_t x619 = INT64_MAX;
volatile int32_t t154 = -741;
static int32_t x621 = -3122;
int64_t x623 = 2580LL;
int16_t x625 = INT16_MIN;
static int8_t x638 = INT8_MIN;
volatile int8_t x640 = -1;
int8_t x643 = 33;
volatile uint8_t x648 = 3U;
volatile int32_t t161 = 146162;
volatile uint32_t x653 = UINT32_MAX;
static int32_t x658 = -1;
int64_t x671 = 91020741925946LL;
volatile int8_t x682 = -1;
uint8_t x689 = UINT8_MAX;
volatile int32_t t173 = 188509016;
static volatile int16_t x697 = INT16_MIN;
static volatile int32_t t175 = -10;
static int32_t x708 = -1;
uint8_t x711 = 0U;
volatile int32_t t177 = 72852367;
uint16_t x714 = 1U;
int32_t x715 = -115;
int32_t t179 = -21;
static int32_t x725 = INT32_MAX;
volatile uint32_t x729 = UINT32_MAX;
uint16_t x736 = 9U;
volatile int32_t t183 = 882191;
static volatile int16_t x746 = INT16_MAX;
static int16_t x751 = -285;
uint32_t x758 = 5343U;
uint64_t x760 = 19LLU;
uint32_t x761 = UINT32_MAX;
volatile int32_t t191 = 371848;
uint64_t x770 = UINT64_MAX;
uint64_t x772 = 2458382LLU;
volatile int8_t x780 = INT8_MIN;
volatile int16_t x786 = -259;
static int16_t x791 = -1;
uint8_t x800 = 50U;


void f0(void) {
    	volatile uint32_t x1 = 64592582U;
	uint64_t x2 = UINT64_MAX;
	int64_t x3 = INT64_MIN;
	volatile int32_t t0 = -655041567;

    t0 = (x1!=((x2<=x3)!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int16_t x6 = 53;
	int64_t x7 = INT64_MAX;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -1;

    t1 = (x5!=((x6<=x7)!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	int16_t x10 = -1;
	int16_t x11 = INT16_MIN;
	static volatile int32_t t2 = 71221;

    t2 = (x9!=((x10<=x11)!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = -29005317133828095LL;
	static int64_t x14 = INT64_MAX;
	int64_t x15 = 145690599LL;
	static volatile uint32_t x16 = 3740934U;

    t3 = (x13!=((x14<=x15)!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x19 = INT64_MIN;
	int32_t t4 = -13;

    t4 = (x17!=((x18<=x19)!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = -1LL;
	static volatile int16_t x22 = INT16_MAX;
	uint16_t x23 = 345U;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -2005876;

    t5 = (x21!=((x22<=x23)!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	static volatile int32_t x26 = INT32_MIN;
	int64_t x27 = -401720038742LL;
	int32_t t6 = 943024;

    t6 = (x25!=((x26<=x27)!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	uint8_t x30 = 31U;
	int16_t x31 = INT16_MIN;
	static int16_t x32 = -1;
	volatile int32_t t7 = 18;

    t7 = (x29!=((x30<=x31)!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 1025697LLU;
	static volatile uint16_t x35 = 179U;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = 33106;

    t8 = (x33!=((x34<=x35)!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x37 = 0LLU;
	volatile uint16_t x38 = UINT16_MAX;
	uint8_t x39 = UINT8_MAX;
	int64_t x40 = INT64_MAX;

    t9 = (x37!=((x38<=x39)!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x41 = INT16_MIN;
	int64_t x43 = INT64_MIN;
	uint16_t x44 = 187U;
	static int32_t t10 = -1;

    t10 = (x41!=((x42<=x43)!=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	static uint32_t x46 = UINT32_MAX;
	int64_t x47 = INT64_MIN;
	int64_t x48 = INT64_MIN;
	int32_t t11 = 63318;

    t11 = (x45!=((x46<=x47)!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x49 = -352;
	int64_t x50 = 5LL;
	int64_t x51 = -483LL;
	int16_t x52 = INT16_MAX;
	int32_t t12 = 3;

    t12 = (x49!=((x50<=x51)!=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = 1;
	volatile int8_t x54 = INT8_MIN;
	static uint64_t x55 = 14317LLU;

    t13 = (x53!=((x54<=x55)!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = 110;
	static int8_t x59 = -1;
	volatile int32_t t14 = -1548756;

    t14 = (x57!=((x58<=x59)!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	int32_t x62 = -1;
	uint32_t x63 = UINT32_MAX;
	int64_t x64 = -1LL;
	int32_t t15 = -399640008;

    t15 = (x61!=((x62<=x63)!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int16_t x68 = 0;
	volatile int32_t t16 = 101989979;

    t16 = (x65!=((x66<=x67)!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = INT8_MAX;
	uint8_t x70 = 4U;
	static uint32_t x71 = 220591783U;
	volatile int16_t x72 = INT16_MIN;

    t17 = (x69!=((x70<=x71)!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x73 = UINT8_MAX;
	volatile int16_t x74 = INT16_MIN;
	int32_t x75 = INT32_MIN;
	int8_t x76 = 6;
	int32_t t18 = -6083447;

    t18 = (x73!=((x74<=x75)!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x77 = 31371U;
	uint64_t x78 = UINT64_MAX;
	uint8_t x79 = 1U;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 1940;

    t19 = (x77!=((x78<=x79)!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = 70;
	int32_t x82 = 62275;
	static uint64_t x83 = 338662326LLU;
	static int64_t x84 = INT64_MAX;
	int32_t t20 = 201889;

    t20 = (x81!=((x82<=x83)!=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 657666LL;
	int8_t x87 = -1;
	int8_t x88 = -1;
	int32_t t21 = 29889;

    t21 = (x85!=((x86<=x87)!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -1LL;
	uint64_t x90 = 2LLU;
	volatile uint64_t x92 = 1002946875192LLU;
	volatile int32_t t22 = 281;

    t22 = (x89!=((x90<=x91)!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x93 = 8026664207955912LLU;
	int16_t x94 = INT16_MIN;
	int8_t x95 = INT8_MIN;
	volatile int32_t t23 = -2603;

    t23 = (x93!=((x94<=x95)!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -1;
	uint16_t x98 = UINT16_MAX;
	volatile int64_t x100 = -499663136LL;
	static int32_t t24 = -45699334;

    t24 = (x97!=((x98<=x99)!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 111U;
	uint32_t x102 = 65286224U;
	volatile int8_t x103 = -1;
	static uint16_t x104 = 2546U;
	static int32_t t25 = -4754611;

    t25 = (x101!=((x102<=x103)!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint64_t x105 = 3911548732854211312LLU;
	uint64_t x106 = UINT64_MAX;
	uint8_t x107 = 81U;
	volatile int8_t x108 = -1;

    t26 = (x105!=((x106<=x107)!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 1;
	uint32_t x110 = 2055U;
	int32_t x111 = INT32_MAX;
	uint64_t x112 = UINT64_MAX;
	int32_t t27 = 1728;

    t27 = (x109!=((x110<=x111)!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 7U;
	int8_t x115 = INT8_MIN;
	int32_t t28 = 268917;

    t28 = (x113!=((x114<=x115)!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -12558537;
	static uint16_t x118 = 70U;
	static uint32_t x119 = 11228U;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = 474036749;

    t29 = (x117!=((x118<=x119)!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MAX;
	static int32_t x122 = INT32_MAX;
	static int32_t x123 = INT32_MIN;
	uint16_t x124 = UINT16_MAX;
	int32_t t30 = -98194;

    t30 = (x121!=((x122<=x123)!=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = 7224;
	int16_t x126 = INT16_MIN;
	volatile uint16_t x128 = UINT16_MAX;
	volatile int32_t t31 = -36;

    t31 = (x125!=((x126<=x127)!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x129 = 209693954570827LLU;
	int16_t x130 = INT16_MIN;
	int8_t x132 = 1;

    t32 = (x129!=((x130<=x131)!=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MIN;
	uint64_t x135 = 6620323845205848210LLU;
	uint8_t x136 = 54U;
	int32_t t33 = -2025238;

    t33 = (x133!=((x134<=x135)!=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x139 = INT64_MIN;
	int64_t x140 = -1LL;
	int32_t t34 = -61;

    t34 = (x137!=((x138<=x139)!=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x142 = -11;
	uint16_t x144 = UINT16_MAX;
	static volatile int32_t t35 = -243151;

    t35 = (x141!=((x142<=x143)!=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 58U;
	volatile uint16_t x147 = 22U;
	int32_t x148 = INT32_MAX;
	volatile int32_t t36 = 1;

    t36 = (x145!=((x146<=x147)!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x150 = -1;
	int8_t x151 = -1;
	int32_t x152 = -89513;

    t37 = (x149!=((x150<=x151)!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -1;
	int16_t x154 = INT16_MAX;
	int8_t x156 = 14;
	int32_t t38 = -2;

    t38 = (x153!=((x154<=x155)!=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x158 = UINT8_MAX;

    t39 = (x157!=((x158<=x159)!=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 3U;
	int64_t x162 = 723036170313566188LL;
	int32_t x163 = -23953;
	int32_t t40 = -93425748;

    t40 = (x161!=((x162<=x163)!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x165 = 7;
	int8_t x166 = INT8_MAX;
	int32_t x167 = -4;
	uint64_t x168 = 132883691769685LLU;

    t41 = (x165!=((x166<=x167)!=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x170 = UINT64_MAX;
	int32_t t42 = -1081671;

    t42 = (x169!=((x170<=x171)!=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x173 = UINT16_MAX;
	static int32_t x174 = -1;
	int32_t x176 = -1;
	int32_t t43 = -897;

    t43 = (x173!=((x174<=x175)!=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	int32_t x178 = INT32_MIN;
	int16_t x179 = -2;
	int8_t x180 = INT8_MAX;
	static int32_t t44 = -4357;

    t44 = (x177!=((x178<=x179)!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	volatile int8_t x182 = INT8_MAX;
	volatile uint8_t x183 = 62U;
	static uint64_t x184 = 912636469204600579LLU;
	int32_t t45 = -366899522;

    t45 = (x181!=((x182<=x183)!=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MAX;
	volatile int32_t t46 = 1;

    t46 = (x185!=((x186<=x187)!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 348U;
	uint64_t x190 = 800054512441682LLU;
	uint8_t x191 = 2U;
	int8_t x192 = -40;
	static volatile int32_t t47 = -131235791;

    t47 = (x189!=((x190<=x191)!=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MAX;
	uint32_t x195 = 1019492U;
	int32_t t48 = -864794357;

    t48 = (x193!=((x194<=x195)!=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = -1;
	int8_t x198 = 1;
	uint16_t x199 = UINT16_MAX;

    t49 = (x197!=((x198<=x199)!=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 131700U;
	volatile uint64_t x202 = 2LLU;
	int8_t x204 = -26;
	volatile int32_t t50 = -158;

    t50 = (x201!=((x202<=x203)!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x207 = INT64_MAX;
	int8_t x208 = 1;
	volatile int32_t t51 = -25352888;

    t51 = (x205!=((x206<=x207)!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	int32_t x211 = -1;
	int8_t x212 = -1;
	int32_t t52 = -5;

    t52 = (x209!=((x210<=x211)!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = UINT64_MAX;
	volatile int32_t t53 = 647;

    t53 = (x213!=((x214<=x215)!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	uint8_t x218 = 20U;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = -517793092;

    t54 = (x217!=((x218<=x219)!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MIN;
	volatile int8_t x222 = 13;
	uint16_t x224 = 11977U;

    t55 = (x221!=((x222<=x223)!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x227 = INT8_MIN;
	static uint64_t x228 = 1811904461LLU;
	volatile int32_t t56 = 226;

    t56 = (x225!=((x226<=x227)!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = INT64_MIN;
	volatile uint8_t x231 = 12U;
	int16_t x232 = -6;
	static volatile int32_t t57 = 2;

    t57 = (x229!=((x230<=x231)!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MAX;
	volatile int16_t x234 = INT16_MAX;
	static volatile int32_t t58 = -44702;

    t58 = (x233!=((x234<=x235)!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = -3;
	int64_t x238 = -1LL;
	int16_t x239 = -1;

    t59 = (x237!=((x238<=x239)!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = INT32_MIN;
	int8_t x243 = INT8_MAX;
	int32_t t60 = 732512;

    t60 = (x241!=((x242<=x243)!=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x245 = 39955422310LLU;
	int64_t x246 = INT64_MIN;
	uint32_t x247 = 336U;
	int32_t t61 = -17;

    t61 = (x245!=((x246<=x247)!=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -1;
	uint8_t x250 = 27U;
	static volatile int32_t x251 = INT32_MIN;
	static int64_t x252 = INT64_MIN;

    t62 = (x249!=((x250<=x251)!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x254 = 9;
	volatile int32_t x256 = -1;
	int32_t t63 = -434337533;

    t63 = (x253!=((x254<=x255)!=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x258 = INT16_MIN;
	uint8_t x259 = UINT8_MAX;
	uint16_t x260 = 250U;

    t64 = (x257!=((x258<=x259)!=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = 16083;
	int64_t x262 = -1LL;
	int32_t t65 = -28005;

    t65 = (x261!=((x262<=x263)!=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x267 = INT8_MIN;
	int16_t x268 = INT16_MAX;

    t66 = (x265!=((x266<=x267)!=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = 6;
	int16_t x270 = INT16_MAX;
	int32_t x272 = INT32_MIN;

    t67 = (x269!=((x270<=x271)!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x274 = INT64_MIN;
	uint32_t x276 = 2821U;
	int32_t t68 = -8252;

    t68 = (x273!=((x274<=x275)!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MAX;
	int32_t x278 = 28887;
	int8_t x279 = 23;
	int8_t x280 = 2;
	volatile int32_t t69 = -28;

    t69 = (x277!=((x278<=x279)!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 6765U;
	uint64_t x283 = 4061095139088513680LLU;
	int16_t x284 = 3;
	int32_t t70 = -133584;

    t70 = (x281!=((x282<=x283)!=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = INT16_MAX;
	int64_t x287 = 8012351337496LL;
	volatile int32_t x288 = -314255;
	static volatile int32_t t71 = 98035347;

    t71 = (x285!=((x286<=x287)!=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	uint64_t x291 = UINT64_MAX;
	static volatile int16_t x292 = INT16_MIN;

    t72 = (x289!=((x290<=x291)!=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x294 = INT16_MAX;
	int32_t x295 = INT32_MIN;
	int32_t t73 = 1861;

    t73 = (x293!=((x294<=x295)!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = -31811282;
	uint32_t x298 = 20624U;
	int32_t x299 = INT32_MIN;
	static int8_t x300 = INT8_MAX;

    t74 = (x297!=((x298<=x299)!=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = 1809;
	int64_t x302 = 4121654324LL;
	uint8_t x303 = UINT8_MAX;
	int32_t x304 = -495;
	volatile int32_t t75 = 63921;

    t75 = (x301!=((x302<=x303)!=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 11724U;
	int16_t x306 = INT16_MAX;
	int64_t x307 = INT64_MIN;
	volatile uint64_t x308 = UINT64_MAX;

    t76 = (x305!=((x306<=x307)!=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 432370451U;
	int16_t x310 = 1065;
	static int32_t x311 = INT32_MAX;
	uint8_t x312 = UINT8_MAX;

    t77 = (x309!=((x310<=x311)!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = UINT8_MAX;
	static volatile uint32_t x315 = 2134425792U;

    t78 = (x313!=((x314<=x315)!=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x317 = INT8_MIN;
	uint64_t x318 = UINT64_MAX;

    t79 = (x317!=((x318<=x319)!=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x322 = INT8_MAX;
	static int64_t x323 = 0LL;
	int64_t x324 = INT64_MIN;
	int32_t t80 = -282;

    t80 = (x321!=((x322<=x323)!=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MAX;
	uint8_t x327 = UINT8_MAX;
	int8_t x328 = 56;
	int32_t t81 = -5;

    t81 = (x325!=((x326<=x327)!=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = 0;
	volatile int64_t x330 = INT64_MAX;
	uint16_t x331 = 771U;
	static int32_t x332 = -248;
	volatile int32_t t82 = -23405;

    t82 = (x329!=((x330<=x331)!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x334 = UINT16_MAX;
	volatile int32_t t83 = 680938;

    t83 = (x333!=((x334<=x335)!=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -33415418533466041LL;
	int16_t x338 = INT16_MIN;
	uint8_t x340 = UINT8_MAX;
	int32_t t84 = -7067131;

    t84 = (x337!=((x338<=x339)!=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x341 = INT8_MIN;
	static uint64_t x342 = 71LLU;
	int32_t x344 = 170710;
	volatile int32_t t85 = -849;

    t85 = (x341!=((x342<=x343)!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MIN;
	static int32_t x347 = 324981781;
	static int16_t x348 = -1;
	volatile int32_t t86 = 448;

    t86 = (x345!=((x346<=x347)!=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = -1;
	int8_t x351 = -3;
	static int8_t x352 = 1;

    t87 = (x349!=((x350<=x351)!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = -255361219;
	volatile uint16_t x355 = 367U;
	volatile int8_t x356 = INT8_MIN;
	volatile int32_t t88 = 665;

    t88 = (x353!=((x354<=x355)!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x358 = -24;
	int32_t x359 = 3539;

    t89 = (x357!=((x358<=x359)!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MAX;
	int32_t x362 = INT32_MIN;
	int32_t x363 = -1;
	volatile int32_t t90 = 723107;

    t90 = (x361!=((x362<=x363)!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x365 = INT32_MIN;
	uint64_t x366 = 5507LLU;
	static int8_t x367 = INT8_MIN;
	volatile int32_t x368 = 5;
	static int32_t t91 = -626279354;

    t91 = (x365!=((x366<=x367)!=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MAX;
	static uint64_t x370 = UINT64_MAX;
	static int32_t x371 = INT32_MIN;
	static int32_t t92 = 0;

    t92 = (x369!=((x370<=x371)!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint32_t x374 = 264294740U;
	static int16_t x376 = INT16_MAX;
	volatile int32_t t93 = 285;

    t93 = (x373!=((x374<=x375)!=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -1;
	int64_t x378 = INT64_MIN;
	uint64_t x379 = 1669LLU;
	static int64_t x380 = INT64_MIN;
	int32_t t94 = 131;

    t94 = (x377!=((x378<=x379)!=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x383 = INT8_MAX;
	volatile int32_t t95 = 268960316;

    t95 = (x381!=((x382<=x383)!=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = 3U;
	static int16_t x386 = -23;
	int8_t x387 = -1;
	volatile uint16_t x388 = UINT16_MAX;
	volatile int32_t t96 = -2136547;

    t96 = (x385!=((x386<=x387)!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 3143117LLU;
	volatile int64_t x390 = INT64_MIN;
	int16_t x391 = INT16_MIN;
	volatile int32_t t97 = -10393;

    t97 = (x389!=((x390<=x391)!=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x393 = INT8_MIN;
	static volatile uint32_t x395 = UINT32_MAX;
	int32_t x396 = INT32_MAX;
	static int32_t t98 = -1029355504;

    t98 = (x393!=((x394<=x395)!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = INT64_MIN;
	int64_t x398 = INT64_MIN;
	volatile int64_t x400 = INT64_MAX;

    t99 = (x397!=((x398<=x399)!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	volatile int32_t x402 = INT32_MIN;
	int16_t x403 = -1;
	int8_t x404 = 1;
	int32_t t100 = -7601;

    t100 = (x401!=((x402<=x403)!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = -1;
	int16_t x406 = INT16_MIN;
	int32_t x407 = INT32_MAX;
	int8_t x408 = -1;
	volatile int32_t t101 = -126;

    t101 = (x405!=((x406<=x407)!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x409 = 0U;
	uint8_t x411 = UINT8_MAX;
	uint64_t x412 = 9893LLU;
	volatile int32_t t102 = 578;

    t102 = (x409!=((x410<=x411)!=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MAX;
	uint16_t x414 = UINT16_MAX;
	int32_t x415 = 245078;
	int8_t x416 = -1;
	static volatile int32_t t103 = 464865;

    t103 = (x413!=((x414<=x415)!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -1;
	int64_t x418 = -1LL;
	int32_t x419 = -211364;
	int32_t x420 = INT32_MAX;
	int32_t t104 = 1614;

    t104 = (x417!=((x418<=x419)!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x421 = 4302946008LL;
	static uint32_t x422 = 69979549U;
	int64_t x423 = INT64_MIN;
	int16_t x424 = INT16_MAX;

    t105 = (x421!=((x422<=x423)!=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x425 = INT8_MAX;
	int64_t x426 = 4830LL;
	int8_t x427 = -1;
	volatile int64_t x428 = -89LL;
	volatile int32_t t106 = 188114157;

    t106 = (x425!=((x426<=x427)!=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = 7U;
	volatile int32_t x430 = -13604;
	int64_t x431 = INT64_MAX;
	int32_t t107 = 0;

    t107 = (x429!=((x430<=x431)!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x433 = INT8_MIN;
	static volatile int32_t x434 = INT32_MAX;
	int64_t x435 = INT64_MIN;
	uint32_t x436 = 20990570U;
	volatile int32_t t108 = -333;

    t108 = (x433!=((x434<=x435)!=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x437 = 874065LL;
	int16_t x438 = -1379;
	volatile int32_t x439 = -112842168;
	volatile int64_t x440 = -425878LL;
	int32_t t109 = 22522;

    t109 = (x437!=((x438<=x439)!=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x442 = UINT16_MAX;
	int32_t x443 = INT32_MIN;
	uint64_t x444 = 511067298712221LLU;

    t110 = (x441!=((x442<=x443)!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x446 = INT32_MIN;
	static int16_t x447 = -62;
	int32_t t111 = -594583325;

    t111 = (x445!=((x446<=x447)!=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x449 = -1LL;
	int64_t x450 = -72660903471753980LL;
	int8_t x451 = INT8_MIN;
	uint16_t x452 = 260U;
	volatile int32_t t112 = 1362;

    t112 = (x449!=((x450<=x451)!=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = -1;
	int8_t x454 = INT8_MIN;
	int64_t x455 = 886219732508LL;
	static int8_t x456 = -1;

    t113 = (x453!=((x454<=x455)!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -6;
	int32_t x460 = INT32_MIN;

    t114 = (x457!=((x458<=x459)!=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = UINT64_MAX;
	int16_t x462 = -2032;
	uint64_t x464 = 49LLU;
	volatile int32_t t115 = -39;

    t115 = (x461!=((x462<=x463)!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -26911156760LL;
	volatile int16_t x466 = -1;
	int16_t x467 = -14;
	volatile int16_t x468 = -1;
	static volatile int32_t t116 = 11201502;

    t116 = (x465!=((x466<=x467)!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x470 = INT16_MIN;
	int8_t x471 = INT8_MIN;
	uint64_t x472 = UINT64_MAX;
	static volatile int32_t t117 = -85903499;

    t117 = (x469!=((x470<=x471)!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MIN;
	uint64_t x474 = 6LLU;
	int16_t x475 = -1;
	static int16_t x476 = INT16_MAX;
	int32_t t118 = 81143;

    t118 = (x473!=((x474<=x475)!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = INT8_MIN;
	int64_t x478 = 28LL;
	volatile int64_t x479 = -5LL;
	int32_t x480 = 45945663;
	int32_t t119 = 1319637;

    t119 = (x477!=((x478<=x479)!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 163U;
	int32_t x482 = INT32_MIN;
	uint32_t x484 = UINT32_MAX;
	int32_t t120 = 410604;

    t120 = (x481!=((x482<=x483)!=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -1;
	int64_t x486 = 21314129245LL;
	volatile uint16_t x487 = UINT16_MAX;
	int64_t x488 = INT64_MAX;
	volatile int32_t t121 = 48;

    t121 = (x485!=((x486<=x487)!=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	uint32_t x491 = 162375U;
	int32_t x492 = 132381475;
	static int32_t t122 = -4639;

    t122 = (x489!=((x490<=x491)!=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -264279812;
	uint8_t x495 = 54U;
	uint16_t x496 = 140U;

    t123 = (x493!=((x494<=x495)!=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = UINT32_MAX;
	int16_t x498 = INT16_MIN;
	volatile int64_t x500 = -1LL;
	volatile int32_t t124 = 25;

    t124 = (x497!=((x498<=x499)!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x501 = -1LL;
	uint16_t x502 = 28U;
	int32_t x503 = -1;
	int64_t x504 = INT64_MIN;
	int32_t t125 = -1;

    t125 = (x501!=((x502<=x503)!=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x506 = 1225U;
	volatile int8_t x507 = INT8_MIN;

    t126 = (x505!=((x506<=x507)!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x511 = -7619;
	static int32_t x512 = 6751051;

    t127 = (x509!=((x510<=x511)!=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x513 = UINT16_MAX;
	int32_t x515 = 158414182;
	volatile int16_t x516 = INT16_MIN;
	int32_t t128 = -8927717;

    t128 = (x513!=((x514<=x515)!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x517 = 0;
	int16_t x518 = -1;
	uint16_t x519 = 279U;
	uint32_t x520 = 58845U;

    t129 = (x517!=((x518<=x519)!=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x521 = UINT16_MAX;
	volatile int16_t x524 = INT16_MIN;
	int32_t t130 = -1395921;

    t130 = (x521!=((x522<=x523)!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = INT64_MAX;
	static int64_t x526 = INT64_MAX;
	int16_t x527 = -50;

    t131 = (x525!=((x526<=x527)!=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MIN;
	uint32_t x530 = 35650U;
	int32_t x531 = -12713278;
	uint16_t x532 = UINT16_MAX;
	int32_t t132 = -1;

    t132 = (x529!=((x530<=x531)!=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x533 = INT32_MAX;
	uint16_t x534 = 2713U;
	static int32_t x535 = INT32_MIN;

    t133 = (x533!=((x534<=x535)!=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint64_t x537 = 23472920774238239LLU;
	volatile int16_t x538 = INT16_MIN;
	uint8_t x540 = 102U;

    t134 = (x537!=((x538<=x539)!=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x541 = 14U;
	int16_t x542 = -6203;
	uint32_t x543 = 126038384U;
	static int8_t x544 = INT8_MIN;
	int32_t t135 = -39692;

    t135 = (x541!=((x542<=x543)!=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = -70289932086LL;
	int32_t x546 = INT32_MIN;
	static uint16_t x547 = 196U;
	int32_t t136 = 1;

    t136 = (x545!=((x546<=x547)!=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	int32_t x550 = 1989;
	static volatile int32_t t137 = -1;

    t137 = (x549!=((x550<=x551)!=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x553 = -6;
	int8_t x554 = INT8_MIN;
	static int32_t x555 = 0;
	int16_t x556 = INT16_MIN;
	static int32_t t138 = 14616;

    t138 = (x553!=((x554<=x555)!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -1;
	static uint16_t x558 = 154U;
	static int8_t x559 = INT8_MIN;
	uint32_t x560 = 1702U;

    t139 = (x557!=((x558<=x559)!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = -1;
	uint16_t x562 = 139U;
	int32_t x563 = -12;
	int32_t x564 = INT32_MAX;

    t140 = (x561!=((x562<=x563)!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x566 = INT8_MAX;
	uint32_t x567 = 30U;
	volatile int8_t x568 = INT8_MIN;
	volatile int32_t t141 = -3;

    t141 = (x565!=((x566<=x567)!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1LL;
	uint8_t x572 = 15U;
	volatile int32_t t142 = -25;

    t142 = (x569!=((x570<=x571)!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x574 = INT8_MIN;

    t143 = (x573!=((x574<=x575)!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	uint8_t x579 = 6U;
	volatile int32_t t144 = 44;

    t144 = (x577!=((x578<=x579)!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MAX;
	int16_t x582 = -11;
	static int16_t x583 = 354;
	int8_t x584 = -1;
	volatile int32_t t145 = 5117;

    t145 = (x581!=((x582<=x583)!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -1;
	int8_t x586 = 4;
	int8_t x587 = INT8_MIN;
	static uint32_t x588 = UINT32_MAX;
	volatile int32_t t146 = 24;

    t146 = (x585!=((x586<=x587)!=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	volatile int64_t x590 = INT64_MIN;
	int64_t x592 = INT64_MIN;

    t147 = (x589!=((x590<=x591)!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	int8_t x594 = INT8_MAX;
	static uint64_t x595 = UINT64_MAX;
	volatile int64_t x596 = 15048LL;
	static volatile int32_t t148 = -2216;

    t148 = (x593!=((x594<=x595)!=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MAX;
	volatile int32_t x598 = -11603;
	int64_t x599 = INT64_MIN;
	static int32_t x600 = INT32_MIN;
	static volatile int32_t t149 = 0;

    t149 = (x597!=((x598<=x599)!=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = INT16_MIN;
	int8_t x602 = -1;
	uint32_t x604 = UINT32_MAX;
	volatile int32_t t150 = -42153;

    t150 = (x601!=((x602<=x603)!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	int64_t x606 = INT64_MIN;
	uint8_t x607 = UINT8_MAX;
	volatile int8_t x608 = 48;
	static volatile int32_t t151 = 7;

    t151 = (x605!=((x606<=x607)!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = 0;
	int64_t x610 = INT64_MIN;
	int32_t x612 = INT32_MIN;

    t152 = (x609!=((x610<=x611)!=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 489610368955395LLU;
	int64_t x614 = -1LL;
	int8_t x615 = -1;
	volatile uint64_t x616 = 3LLU;
	int32_t t153 = -197859807;

    t153 = (x613!=((x614<=x615)!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int64_t x618 = -685558642949LL;
	int64_t x620 = -1LL;

    t154 = (x617!=((x618<=x619)!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x622 = 4001698328706795LL;
	static uint32_t x624 = UINT32_MAX;
	static volatile int32_t t155 = -6210861;

    t155 = (x621!=((x622<=x623)!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x626 = UINT32_MAX;
	volatile uint32_t x627 = 170U;
	int32_t x628 = -415;
	int32_t t156 = -109074;

    t156 = (x625!=((x626<=x627)!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x629 = INT64_MIN;
	static int64_t x630 = INT64_MIN;
	static int64_t x631 = INT64_MIN;
	static int64_t x632 = INT64_MIN;
	static int32_t t157 = -1984;

    t157 = (x629!=((x630<=x631)!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = 188300003157570413LLU;
	uint8_t x634 = 58U;
	volatile uint32_t x635 = 15616U;
	static uint16_t x636 = UINT16_MAX;
	int32_t t158 = 211;

    t158 = (x633!=((x634<=x635)!=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MAX;
	int64_t x639 = INT64_MIN;
	static int32_t t159 = 3401;

    t159 = (x637!=((x638<=x639)!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	static int8_t x642 = 4;
	volatile int32_t x644 = INT32_MIN;
	int32_t t160 = -628421;

    t160 = (x641!=((x642<=x643)!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = INT32_MIN;
	uint32_t x646 = 2212U;
	int64_t x647 = INT64_MAX;

    t161 = (x645!=((x646<=x647)!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = INT8_MIN;
	static int64_t x650 = -1LL;
	int8_t x651 = -3;
	int8_t x652 = -1;
	int32_t t162 = 961;

    t162 = (x649!=((x650<=x651)!=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x654 = 11;
	volatile int32_t x655 = INT32_MIN;
	int32_t x656 = INT32_MIN;
	int32_t t163 = 7741086;

    t163 = (x653!=((x654<=x655)!=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	volatile int8_t x659 = -1;
	volatile int64_t x660 = INT64_MIN;
	volatile int32_t t164 = -24;

    t164 = (x657!=((x658<=x659)!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x661 = -1;
	volatile uint32_t x662 = UINT32_MAX;
	int32_t x663 = INT32_MAX;
	int32_t x664 = INT32_MIN;
	int32_t t165 = -154302;

    t165 = (x661!=((x662<=x663)!=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x665 = UINT64_MAX;
	volatile int16_t x666 = -42;
	static int32_t x667 = -69;
	uint64_t x668 = 113074227501LLU;
	volatile int32_t t166 = -99099;

    t166 = (x665!=((x666<=x667)!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x669 = INT16_MIN;
	uint64_t x670 = 68161305926753LLU;
	int8_t x672 = INT8_MIN;
	int32_t t167 = -31938;

    t167 = (x669!=((x670<=x671)!=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	static volatile uint8_t x674 = UINT8_MAX;
	volatile uint64_t x675 = UINT64_MAX;
	uint64_t x676 = UINT64_MAX;
	volatile int32_t t168 = 144710148;

    t168 = (x673!=((x674<=x675)!=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = 466LLU;
	int32_t x678 = INT32_MIN;
	static int64_t x679 = INT64_MAX;
	volatile uint8_t x680 = 2U;
	int32_t t169 = -66327564;

    t169 = (x677!=((x678<=x679)!=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = 260140594821965LL;
	int8_t x683 = -1;
	static uint8_t x684 = 4U;
	int32_t t170 = 0;

    t170 = (x681!=((x682<=x683)!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = UINT8_MAX;
	static int64_t x686 = INT64_MIN;
	volatile int8_t x687 = -1;
	int32_t x688 = INT32_MIN;
	int32_t t171 = 501;

    t171 = (x685!=((x686<=x687)!=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x690 = UINT64_MAX;
	static uint64_t x691 = 32397224684LLU;
	uint64_t x692 = 3993650142317668162LLU;
	static int32_t t172 = -20381;

    t172 = (x689!=((x690<=x691)!=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -166;
	uint8_t x694 = 92U;
	int16_t x695 = INT16_MAX;
	int64_t x696 = INT64_MIN;

    t173 = (x693!=((x694<=x695)!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x698 = INT64_MIN;
	int64_t x699 = -1LL;
	volatile int32_t x700 = -75798;
	volatile int32_t t174 = -169;

    t174 = (x697!=((x698<=x699)!=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = 11468;
	int8_t x702 = 2;
	int64_t x703 = -4500579664142298LL;
	uint32_t x704 = UINT32_MAX;

    t175 = (x701!=((x702<=x703)!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 0U;
	int16_t x706 = INT16_MIN;
	int16_t x707 = -1;
	volatile int32_t t176 = -463756512;

    t176 = (x705!=((x706<=x707)!=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MAX;
	int32_t x710 = INT32_MAX;
	int8_t x712 = -2;

    t177 = (x709!=((x710<=x711)!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = -1;
	volatile uint64_t x716 = 431846610LLU;
	int32_t t178 = -3153994;

    t178 = (x713!=((x714<=x715)!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -1;
	uint64_t x718 = 120695901333998314LLU;
	volatile uint32_t x719 = 1507245115U;
	int8_t x720 = 0;

    t179 = (x717!=((x718<=x719)!=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -471;
	uint16_t x722 = 14U;
	int32_t x723 = INT32_MAX;
	static volatile uint32_t x724 = 3845133U;
	static volatile int32_t t180 = 0;

    t180 = (x721!=((x722<=x723)!=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x726 = 0U;
	int64_t x727 = INT64_MIN;
	int16_t x728 = -5;
	static int32_t t181 = -40;

    t181 = (x725!=((x726<=x727)!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x730 = 4U;
	static int32_t x731 = INT32_MIN;
	int32_t x732 = 1;
	volatile int32_t t182 = 0;

    t182 = (x729!=((x730<=x731)!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x733 = 58755891LL;
	int16_t x734 = INT16_MAX;
	int64_t x735 = -46660163879344103LL;

    t183 = (x733!=((x734<=x735)!=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x737 = UINT8_MAX;
	uint8_t x738 = 7U;
	static int16_t x739 = INT16_MIN;
	int8_t x740 = INT8_MIN;
	volatile int32_t t184 = 19718;

    t184 = (x737!=((x738<=x739)!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x741 = INT16_MIN;
	static int16_t x742 = INT16_MAX;
	int8_t x743 = INT8_MIN;
	uint8_t x744 = 102U;
	volatile int32_t t185 = 5545793;

    t185 = (x741!=((x742<=x743)!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = INT32_MIN;
	static int8_t x747 = INT8_MIN;
	int32_t x748 = 405;
	volatile int32_t t186 = 1;

    t186 = (x745!=((x746<=x747)!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x749 = UINT64_MAX;
	int16_t x750 = INT16_MIN;
	int32_t x752 = INT32_MAX;
	volatile int32_t t187 = -60;

    t187 = (x749!=((x750<=x751)!=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 24U;
	static uint8_t x754 = 75U;
	static volatile int16_t x755 = INT16_MAX;
	volatile uint64_t x756 = 72673773677LLU;
	int32_t t188 = 58026;

    t188 = (x753!=((x754<=x755)!=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -14008;
	volatile uint16_t x759 = UINT16_MAX;
	int32_t t189 = 722449;

    t189 = (x757!=((x758<=x759)!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x762 = 52552LLU;
	volatile int64_t x763 = 41015720LL;
	uint16_t x764 = 5197U;
	static volatile int32_t t190 = 20;

    t190 = (x761!=((x762<=x763)!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -1852406LL;
	volatile uint32_t x766 = 2U;
	uint64_t x767 = 5LLU;
	volatile int32_t x768 = INT32_MAX;

    t191 = (x765!=((x766<=x767)!=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = -1;
	uint32_t x771 = 20354354U;
	int32_t t192 = 1;

    t192 = (x769!=((x770<=x771)!=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -23;
	volatile int16_t x774 = -1;
	int32_t x775 = INT32_MIN;
	uint16_t x776 = 44U;
	volatile int32_t t193 = -894640;

    t193 = (x773!=((x774<=x775)!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x777 = 41U;
	int8_t x778 = INT8_MIN;
	int16_t x779 = INT16_MIN;
	volatile int32_t t194 = 29;

    t194 = (x777!=((x778<=x779)!=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int32_t x781 = -59;
	uint16_t x782 = UINT16_MAX;
	int8_t x783 = INT8_MIN;
	int8_t x784 = -1;
	static int32_t t195 = -96795;

    t195 = (x781!=((x782<=x783)!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -1;
	int32_t x787 = INT32_MAX;
	static int32_t x788 = -17435101;
	int32_t t196 = -29483870;

    t196 = (x785!=((x786<=x787)!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 3906284U;
	int32_t x790 = -1;
	int8_t x792 = INT8_MIN;
	int32_t t197 = 1824370;

    t197 = (x789!=((x790<=x791)!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x793 = 4;
	static int8_t x794 = -39;
	int8_t x795 = 7;
	int32_t x796 = INT32_MIN;
	volatile int32_t t198 = -84471156;

    t198 = (x793!=((x794<=x795)!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = UINT64_MAX;
	int16_t x798 = INT16_MIN;
	int32_t x799 = INT32_MIN;
	int32_t t199 = 452;

    t199 = (x797!=((x798<=x799)!=x800));

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

