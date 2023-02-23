
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

volatile int16_t x1 = 921;
int16_t x2 = INT16_MIN;
volatile int32_t t1 = -6976;
volatile uint8_t x9 = 1U;
int8_t x11 = INT8_MAX;
volatile int16_t x20 = INT16_MAX;
int32_t t5 = 4265132;
static int16_t x35 = -2;
static uint64_t x36 = UINT64_MAX;
volatile int64_t x38 = INT64_MIN;
static int8_t x41 = INT8_MIN;
uint32_t t11 = 8U;
int16_t x56 = INT16_MIN;
volatile uint64_t t12 = 6LLU;
static int32_t x58 = -48959988;
int32_t t13 = -76;
int16_t x63 = INT16_MAX;
int8_t x65 = INT8_MAX;
int16_t x67 = -13601;
int32_t t17 = -1;
volatile uint64_t x90 = 1059041730705LLU;
uint32_t x91 = 1U;
int32_t x93 = -23511;
static volatile int32_t t22 = -114719516;
int16_t x98 = INT16_MAX;
uint32_t x99 = 202543926U;
int32_t t24 = -63;
volatile int16_t x107 = INT16_MIN;
int32_t x116 = INT32_MIN;
int8_t x128 = INT8_MAX;
volatile uint32_t x130 = 704915275U;
int64_t t31 = 384106423892471LL;
int16_t x139 = INT16_MIN;
static int64_t x141 = 743LL;
int64_t t34 = -460834180706825LL;
int32_t x145 = INT32_MAX;
uint16_t x148 = UINT16_MAX;
volatile int8_t x157 = -38;
int16_t x158 = 53;
int64_t x160 = INT64_MIN;
volatile int64_t t37 = -3LL;
int64_t x165 = INT64_MIN;
static int32_t x170 = -1;
static volatile int64_t x174 = INT64_MIN;
int64_t x175 = -1LL;
int32_t x180 = INT32_MAX;
int32_t x182 = 98763397;
volatile int64_t t44 = INT64_MAX;
uint64_t x194 = UINT64_MAX;
static uint64_t x197 = 36LLU;
static uint16_t x199 = 4U;
volatile int16_t x205 = -10063;
static int8_t x207 = -1;
static volatile int64_t x211 = INT64_MIN;
int8_t x221 = 7;
int32_t x225 = -2462;
volatile uint64_t x229 = 316991876861501LLU;
uint16_t x231 = 644U;
int32_t t55 = 458862448;
uint64_t x240 = 3501703462182833772LLU;
volatile int32_t x245 = 121;
static uint64_t x248 = 6LLU;
volatile int32_t t60 = 988;
static int16_t x257 = INT16_MAX;
int64_t x261 = INT64_MIN;
volatile uint8_t x270 = 78U;
uint32_t x281 = 25909U;
static uint16_t x285 = 9U;
volatile int8_t x286 = -8;
volatile int32_t t69 = 743154;
static uint16_t x304 = UINT16_MAX;
static volatile int64_t x309 = 61215834342716LL;
int32_t x314 = -119;
uint32_t x315 = 40U;
uint32_t x320 = 2794U;
volatile int16_t x321 = INT16_MIN;
int32_t t77 = 101;
static uint32_t x327 = 1593080U;
int16_t x330 = INT16_MIN;
int32_t x333 = -1;
int16_t x338 = INT16_MIN;
static uint64_t x339 = 113558980964695LLU;
static volatile int64_t t84 = 796253998LL;
uint16_t x354 = UINT16_MAX;
int8_t x361 = -1;
volatile int8_t x362 = INT8_MIN;
int8_t x368 = INT8_MIN;
int16_t x369 = INT16_MIN;
static int32_t t91 = -915674;
static uint16_t x390 = 61U;
volatile int32_t t94 = -25;
int8_t x401 = 1;
uint8_t x402 = UINT8_MAX;
uint32_t x403 = UINT32_MAX;
volatile int64_t x410 = -1LL;
int32_t t99 = 1;
uint16_t x421 = 1814U;
uint32_t x423 = 12114201U;
uint32_t x424 = UINT32_MAX;
static int32_t x425 = -3144;
int8_t x427 = -1;
uint32_t x435 = 2396159U;
int64_t t104 = INT64_MIN;
int32_t x439 = INT32_MIN;
static int32_t x446 = INT32_MIN;
volatile int64_t t107 = -508483LL;
volatile int32_t x455 = INT32_MAX;
int64_t x460 = -1LL;
uint32_t t109 = 40159875U;
int32_t x479 = INT32_MIN;
static int16_t x482 = INT16_MIN;
int8_t x483 = INT8_MAX;
volatile int64_t x484 = INT64_MIN;
uint16_t x486 = 4909U;
uint32_t x488 = UINT32_MAX;
int64_t x492 = INT64_MIN;
static uint64_t x494 = 267225LLU;
static volatile int64_t t118 = 1574733173LL;
static int32_t x502 = INT32_MAX;
static int32_t x509 = INT32_MIN;
int32_t x510 = -623727522;
int32_t t122 = 27394940;
int64_t x517 = 5LL;
static int64_t t124 = 123788159202LL;
uint64_t x522 = 711316692777083129LLU;
int8_t x525 = -1;
uint8_t x534 = UINT8_MAX;
volatile int8_t x541 = -1;
int8_t x542 = -1;
int64_t x551 = INT64_MAX;
static volatile uint8_t x559 = 39U;
uint8_t x560 = UINT8_MAX;
int16_t x568 = -1;
volatile int32_t t136 = -32753341;
volatile int32_t t137 = 5;
int32_t t139 = 3;
volatile int32_t t142 = 0;
static uint8_t x593 = 0U;
int64_t x596 = -1LL;
volatile int8_t x610 = INT8_MIN;
static uint64_t x620 = 2451358222624168LLU;
uint32_t t150 = 119563U;
int8_t x639 = INT8_MIN;
static uint16_t x642 = 5573U;
static volatile int8_t x645 = 42;
volatile int32_t t156 = 0;
volatile int8_t x654 = 58;
uint16_t x658 = 34U;
static int64_t x666 = INT64_MIN;
volatile uint32_t t161 = 462U;
static int32_t x683 = INT32_MIN;
uint64_t x685 = 4246843581LLU;
int64_t x689 = -1LL;
uint32_t x691 = 154U;
volatile int32_t x694 = INT32_MIN;
static int64_t x706 = INT64_MAX;
uint16_t x708 = 212U;
uint32_t t169 = 19U;
int64_t x712 = INT64_MIN;
int64_t t171 = 496237247285LL;
int64_t x721 = INT64_MIN;
static int64_t x725 = INT64_MIN;
int16_t x726 = INT16_MIN;
int8_t x730 = -1;
int32_t x742 = -451;
static uint32_t x746 = 55U;
int16_t x759 = INT16_MIN;
int64_t x775 = 69290333736791LL;
int16_t x779 = INT16_MIN;
int16_t x780 = INT16_MIN;
volatile uint64_t x783 = 4535621712602603041LLU;
uint32_t x785 = UINT32_MAX;
uint32_t t189 = UINT32_MAX;
int64_t x791 = INT64_MIN;
int64_t x799 = -1LL;
int16_t x805 = INT16_MIN;
volatile int64_t x806 = -1LL;
int8_t x810 = INT8_MAX;
static int32_t t195 = -65;
static uint64_t x816 = UINT64_MAX;
volatile int32_t x820 = 208;
int32_t x821 = -1;
static volatile uint64_t x825 = 2196643724732331LLU;


void f0(void) {
    	int64_t x3 = 3LL;
	static int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -472818;

    t0 = (x1+((x2|x3)<=x4));

    if (t0 != 921) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -1;
	static int64_t x6 = -4380LL;
	volatile uint64_t x7 = 86LLU;
	static int8_t x8 = 51;

    t1 = (x5+((x6|x7)<=x8));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint64_t x10 = UINT64_MAX;
	static int16_t x12 = -4;
	int32_t t2 = -1;

    t2 = (x9+((x10|x11)<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = 101752621U;
	int64_t x14 = INT64_MIN;
	uint64_t x15 = UINT64_MAX;
	int16_t x16 = INT16_MIN;
	volatile uint32_t t3 = 201962011U;

    t3 = (x13+((x14|x15)<=x16));

    if (t3 != 101752621U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 110LLU;
	uint64_t x18 = 102767610446728144LLU;
	int32_t x19 = -1;
	uint64_t t4 = 472LLU;

    t4 = (x17+((x18|x19)<=x20));

    if (t4 != 110LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 0U;
	static uint16_t x22 = UINT16_MAX;
	static uint32_t x23 = 8040U;
	int64_t x24 = -1LL;

    t5 = (x21+((x22|x23)<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	volatile int32_t x26 = INT32_MAX;
	int16_t x27 = INT16_MIN;
	int64_t x28 = -374LL;
	static volatile int32_t t6 = -3878065;

    t6 = (x25+((x26|x27)<=x28));

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = 36564;
	static int16_t x30 = INT16_MAX;
	int8_t x31 = 1;
	int32_t x32 = 518966606;
	int32_t t7 = 105;

    t7 = (x29+((x30|x31)<=x32));

    if (t7 != 36565) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = -1;
	volatile int64_t x34 = INT64_MIN;
	volatile int32_t t8 = -574955495;

    t8 = (x33+((x34|x35)<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -3243;
	int8_t x39 = -29;
	int64_t x40 = -1927LL;
	volatile int32_t t9 = -106423;

    t9 = (x37+((x38|x39)<=x40));

    if (t9 != -3243) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x42 = 7055582LLU;
	uint8_t x43 = 7U;
	int16_t x44 = INT16_MAX;
	volatile int32_t t10 = 424;

    t10 = (x41+((x42|x43)<=x44));

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 387243119U;
	int16_t x46 = INT16_MIN;
	static int8_t x47 = INT8_MAX;
	static int32_t x48 = -1;

    t11 = (x45+((x46|x47)<=x48));

    if (t11 != 387243120U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = UINT64_MAX;
	uint32_t x54 = 80U;
	int16_t x55 = 570;

    t12 = (x53+((x54|x55)<=x56));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = 113U;
	static int32_t x59 = INT32_MAX;
	volatile int32_t x60 = -285;

    t13 = (x57+((x58|x59)<=x60));

    if (t13 != 113) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x61 = INT32_MIN;
	uint16_t x62 = UINT16_MAX;
	uint64_t x64 = UINT64_MAX;
	int32_t t14 = -6;

    t14 = (x61+((x62|x63)<=x64));

    if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x66 = 1U;
	volatile uint16_t x68 = 7831U;
	int32_t t15 = 1048575;

    t15 = (x65+((x66|x67)<=x68));

    if (t15 != 128) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x69 = INT8_MAX;
	int16_t x70 = 3;
	int16_t x71 = -1;
	volatile int16_t x72 = INT16_MAX;
	int32_t t16 = 2;

    t16 = (x69+((x70|x71)<=x72));

    if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = -1;
	volatile int64_t x74 = -3LL;
	static int32_t x75 = 31;
	int32_t x76 = -1;

    t17 = (x73+((x74|x75)<=x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x77 = UINT16_MAX;
	uint16_t x78 = 16344U;
	uint16_t x79 = 8187U;
	int32_t x80 = INT32_MIN;
	volatile int32_t t18 = 750;

    t18 = (x77+((x78|x79)<=x80));

    if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x81 = 120479535736115LLU;
	static volatile uint64_t x82 = 204048577348LLU;
	int32_t x83 = -43528059;
	uint64_t x84 = 1LLU;
	uint64_t t19 = 3251886454703020LLU;

    t19 = (x81+((x82|x83)<=x84));

    if (t19 != 120479535736115LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x85 = 3381494765095657LLU;
	int8_t x86 = -2;
	static uint16_t x87 = 1U;
	static uint16_t x88 = 28U;
	volatile uint64_t t20 = 92LLU;

    t20 = (x85+((x86|x87)<=x88));

    if (t20 != 3381494765095658LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = 36;
	volatile int32_t x92 = INT32_MIN;
	volatile int32_t t21 = -17603;

    t21 = (x89+((x90|x91)<=x92));

    if (t21 != 37) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x94 = INT8_MIN;
	volatile uint64_t x95 = 2273617578489726455LLU;
	int32_t x96 = INT32_MIN;

    t22 = (x93+((x94|x95)<=x96));

    if (t22 != -23511) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x97 = 1;
	static int16_t x100 = INT16_MAX;
	int32_t t23 = -833216252;

    t23 = (x97+((x98|x99)<=x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = INT16_MIN;
	static uint16_t x102 = 1U;
	uint16_t x103 = 13U;
	int16_t x104 = 2;

    t24 = (x101+((x102|x103)<=x104));

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x105 = 5;
	volatile uint32_t x106 = 24U;
	uint64_t x108 = 719779441990319685LLU;
	int32_t t25 = 6;

    t25 = (x105+((x106|x107)<=x108));

    if (t25 != 6) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x109 = 1774U;
	static volatile uint64_t x110 = 84282276833727791LLU;
	volatile int16_t x111 = INT16_MAX;
	static int8_t x112 = 0;
	volatile uint32_t t26 = 4U;

    t26 = (x109+((x110|x111)<=x112));

    if (t26 != 1774U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x113 = INT16_MAX;
	int64_t x114 = INT64_MAX;
	volatile uint64_t x115 = 123565879469923LLU;
	volatile int32_t t27 = -155065790;

    t27 = (x113+((x114|x115)<=x116));

    if (t27 != 32768) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x117 = 12131U;
	static uint64_t x118 = 517LLU;
	int64_t x119 = INT64_MIN;
	static int64_t x120 = INT64_MIN;
	static volatile int32_t t28 = -16471833;

    t28 = (x117+((x118|x119)<=x120));

    if (t28 != 12131) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x121 = 33U;
	static int8_t x122 = -1;
	volatile int8_t x123 = INT8_MIN;
	static int32_t x124 = 1;
	volatile uint32_t t29 = 192U;

    t29 = (x121+((x122|x123)<=x124));

    if (t29 != 34U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x125 = 12918697376309LLU;
	int16_t x126 = 25;
	volatile int16_t x127 = INT16_MAX;
	static volatile uint64_t t30 = 103634371647490900LLU;

    t30 = (x125+((x126|x127)<=x128));

    if (t30 != 12918697376309LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x129 = -892288093625LL;
	static volatile int8_t x131 = 12;
	uint16_t x132 = UINT16_MAX;

    t31 = (x129+((x130|x131)<=x132));

    if (t31 != -892288093625LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MAX;
	int32_t x134 = 349600787;
	uint16_t x135 = 3U;
	uint8_t x136 = 30U;
	int32_t t32 = 690;

    t32 = (x133+((x134|x135)<=x136));

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x137 = -32;
	int8_t x138 = 26;
	volatile int16_t x140 = INT16_MIN;
	int32_t t33 = 402351268;

    t33 = (x137+((x138|x139)<=x140));

    if (t33 != -32) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x142 = INT16_MIN;
	int64_t x143 = INT64_MAX;
	static uint64_t x144 = UINT64_MAX;

    t34 = (x141+((x142|x143)<=x144));

    if (t34 != 744LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x146 = 2784976U;
	int32_t x147 = -1;
	int32_t t35 = INT32_MAX;

    t35 = (x145+((x146|x147)<=x148));

    if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x159 = -20567889LL;
	volatile int32_t t36 = 66086;

    t36 = (x157+((x158|x159)<=x160));

    if (t36 != -38) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MIN;
	volatile int32_t x163 = INT32_MIN;
	int64_t x164 = -1LL;

    t37 = (x161+((x162|x163)<=x164));

    if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x166 = INT8_MIN;
	uint16_t x167 = 7590U;
	static uint8_t x168 = 2U;
	int64_t t38 = 67323LL;

    t38 = (x165+((x166|x167)<=x168));

    if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x169 = 6408;
	volatile uint64_t x171 = UINT64_MAX;
	uint16_t x172 = 208U;
	static volatile int32_t t39 = 34089;

    t39 = (x169+((x170|x171)<=x172));

    if (t39 != 6408) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x173 = 18U;
	volatile int16_t x176 = 1;
	volatile int32_t t40 = -1;

    t40 = (x173+((x174|x175)<=x176));

    if (t40 != 19) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x177 = 43;
	static int16_t x178 = INT16_MIN;
	int32_t x179 = INT32_MAX;
	int32_t t41 = -884242818;

    t41 = (x177+((x178|x179)<=x180));

    if (t41 != 44) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint64_t x181 = 41487LLU;
	static int32_t x183 = -1;
	volatile uint32_t x184 = UINT32_MAX;
	static uint64_t t42 = 13030914250244900LLU;

    t42 = (x181+((x182|x183)<=x184));

    if (t42 != 41488LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x185 = 29971U;
	int16_t x186 = 1193;
	uint16_t x187 = UINT16_MAX;
	static int16_t x188 = INT16_MIN;
	volatile uint32_t t43 = 267179U;

    t43 = (x185+((x186|x187)<=x188));

    if (t43 != 29971U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x189 = INT64_MAX;
	static int16_t x190 = -412;
	static int32_t x191 = INT32_MAX;
	static int16_t x192 = INT16_MIN;

    t44 = (x189+((x190|x191)<=x192));

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = 8504654621732LL;
	volatile int16_t x195 = INT16_MIN;
	int8_t x196 = -1;
	int64_t t45 = -2714LL;

    t45 = (x193+((x194|x195)<=x196));

    if (t45 != 8504654621733LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x198 = 152086312;
	volatile uint16_t x200 = 22726U;
	volatile uint64_t t46 = 32LLU;

    t46 = (x197+((x198|x199)<=x200));

    if (t46 != 36LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x201 = INT64_MIN;
	int16_t x202 = 1;
	volatile uint64_t x203 = 8597233LLU;
	int8_t x204 = -1;
	int64_t t47 = -100911363LL;

    t47 = (x201+((x202|x203)<=x204));

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x206 = 90U;
	uint8_t x208 = 31U;
	volatile int32_t t48 = 75960;

    t48 = (x205+((x206|x207)<=x208));

    if (t48 != -10062) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x209 = 2062835855173162LL;
	uint64_t x210 = 4087774739829538LLU;
	int8_t x212 = 6;
	volatile int64_t t49 = 138967499694070LL;

    t49 = (x209+((x210|x211)<=x212));

    if (t49 != 2062835855173162LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x213 = INT32_MIN;
	int64_t x214 = INT64_MIN;
	int32_t x215 = 116;
	volatile int8_t x216 = -1;
	volatile int32_t t50 = -18404269;

    t50 = (x213+((x214|x215)<=x216));

    if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x217 = INT64_MAX;
	int32_t x218 = -38199052;
	uint8_t x219 = UINT8_MAX;
	int32_t x220 = INT32_MIN;
	static int64_t t51 = INT64_MAX;

    t51 = (x217+((x218|x219)<=x220));

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x222 = 6207U;
	int32_t x223 = INT32_MAX;
	volatile int32_t x224 = 1000343671;
	static int32_t t52 = -432;

    t52 = (x221+((x222|x223)<=x224));

    if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x226 = INT8_MIN;
	int16_t x227 = INT16_MIN;
	int8_t x228 = 0;
	static volatile int32_t t53 = 8510;

    t53 = (x225+((x226|x227)<=x228));

    if (t53 != -2461) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x230 = 625U;
	int64_t x232 = -255743119087363LL;
	volatile uint64_t t54 = 1172095993LLU;

    t54 = (x229+((x230|x231)<=x232));

    if (t54 != 316991876861501LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x233 = 0;
	int16_t x234 = INT16_MIN;
	static int8_t x235 = INT8_MIN;
	int64_t x236 = -1LL;

    t55 = (x233+((x234|x235)<=x236));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x237 = INT64_MIN;
	uint32_t x238 = UINT32_MAX;
	uint8_t x239 = 2U;
	volatile int64_t t56 = 186932646349324LL;

    t56 = (x237+((x238|x239)<=x240));

    if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x241 = UINT32_MAX;
	uint64_t x242 = 190532002164027LLU;
	uint8_t x243 = 27U;
	uint64_t x244 = 4LLU;
	volatile uint32_t t57 = UINT32_MAX;

    t57 = (x241+((x242|x243)<=x244));

    if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x246 = INT64_MIN;
	volatile int64_t x247 = 1194733176LL;
	volatile int32_t t58 = 0;

    t58 = (x245+((x246|x247)<=x248));

    if (t58 != 121) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x249 = INT8_MIN;
	int32_t x250 = -1105;
	volatile int16_t x251 = INT16_MIN;
	int32_t x252 = -341797;
	static volatile int32_t t59 = 0;

    t59 = (x249+((x250|x251)<=x252));

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x253 = 0;
	int64_t x254 = INT64_MIN;
	int32_t x255 = INT32_MIN;
	static volatile uint32_t x256 = 5883556U;

    t60 = (x253+((x254|x255)<=x256));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint16_t x258 = 106U;
	volatile uint16_t x259 = 111U;
	int64_t x260 = INT64_MIN;
	volatile int32_t t61 = -17217568;

    t61 = (x257+((x258|x259)<=x260));

    if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x262 = INT32_MAX;
	int16_t x263 = -17;
	static uint16_t x264 = UINT16_MAX;
	static volatile int64_t t62 = -1473845189LL;

    t62 = (x261+((x262|x263)<=x264));

    if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x265 = UINT32_MAX;
	static volatile int16_t x266 = -1;
	int32_t x267 = -50615;
	static uint8_t x268 = 2U;
	uint32_t t63 = 6431U;

    t63 = (x265+((x266|x267)<=x268));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x269 = INT16_MAX;
	static uint16_t x271 = 985U;
	int32_t x272 = -1;
	int32_t t64 = 13921;

    t64 = (x269+((x270|x271)<=x272));

    if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x273 = INT8_MIN;
	static int16_t x274 = 56;
	uint64_t x275 = 1555LLU;
	uint32_t x276 = 3249859U;
	int32_t t65 = 306716226;

    t65 = (x273+((x274|x275)<=x276));

    if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x277 = 9U;
	static volatile uint16_t x278 = UINT16_MAX;
	int32_t x279 = 28702;
	int16_t x280 = INT16_MAX;
	static int32_t t66 = 46;

    t66 = (x277+((x278|x279)<=x280));

    if (t66 != 9) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x282 = 407875U;
	volatile int8_t x283 = INT8_MAX;
	static volatile int32_t x284 = -5446;
	uint32_t t67 = 62448689U;

    t67 = (x281+((x282|x283)<=x284));

    if (t67 != 25910U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x287 = 329729LLU;
	int16_t x288 = INT16_MIN;
	volatile int32_t t68 = 1684;

    t68 = (x285+((x286|x287)<=x288));

    if (t68 != 9) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x289 = -6948;
	int64_t x290 = INT64_MIN;
	int16_t x291 = INT16_MIN;
	uint32_t x292 = UINT32_MAX;

    t69 = (x289+((x290|x291)<=x292));

    if (t69 != -6947) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x293 = -1;
	uint64_t x294 = UINT64_MAX;
	static uint32_t x295 = UINT32_MAX;
	volatile uint64_t x296 = 14821795LLU;
	static int32_t t70 = 6;

    t70 = (x293+((x294|x295)<=x296));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x297 = INT64_MIN;
	static uint16_t x298 = UINT16_MAX;
	int64_t x299 = -77015LL;
	static uint8_t x300 = UINT8_MAX;
	volatile int64_t t71 = 980LL;

    t71 = (x297+((x298|x299)<=x300));

    if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x301 = INT16_MIN;
	static uint16_t x302 = 149U;
	int8_t x303 = INT8_MIN;
	int32_t t72 = 763989;

    t72 = (x301+((x302|x303)<=x304));

    if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x305 = INT8_MIN;
	int16_t x306 = -1;
	volatile int8_t x307 = INT8_MAX;
	uint64_t x308 = 241727204489LLU;
	int32_t t73 = -323074;

    t73 = (x305+((x306|x307)<=x308));

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x310 = 63;
	volatile uint32_t x311 = 1U;
	volatile int32_t x312 = -218185;
	volatile int64_t t74 = -4560382LL;

    t74 = (x309+((x310|x311)<=x312));

    if (t74 != 61215834342717LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x313 = 7978U;
	int32_t x316 = 327791;
	int32_t t75 = -63375622;

    t75 = (x313+((x314|x315)<=x316));

    if (t75 != 7978) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = INT16_MAX;
	int32_t x318 = INT32_MAX;
	volatile int16_t x319 = -1;
	int32_t t76 = 44;

    t76 = (x317+((x318|x319)<=x320));

    if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x322 = -1;
	volatile uint8_t x323 = 1U;
	int32_t x324 = INT32_MIN;

    t77 = (x321+((x322|x323)<=x324));

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x325 = -149;
	uint16_t x326 = UINT16_MAX;
	int32_t x328 = -1;
	int32_t t78 = 6;

    t78 = (x325+((x326|x327)<=x328));

    if (t78 != -148) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x329 = 16;
	int8_t x331 = -30;
	uint16_t x332 = 211U;
	static int32_t t79 = -7;

    t79 = (x329+((x330|x331)<=x332));

    if (t79 != 17) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x334 = -1LL;
	uint8_t x335 = 2U;
	static uint16_t x336 = 56U;
	int32_t t80 = 4865;

    t80 = (x333+((x334|x335)<=x336));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x337 = 165U;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t81 = -239033;

    t81 = (x337+((x338|x339)<=x340));

    if (t81 != 165) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x341 = UINT8_MAX;
	volatile int16_t x342 = INT16_MIN;
	int64_t x343 = INT64_MIN;
	int64_t x344 = -1LL;
	volatile int32_t t82 = 0;

    t82 = (x341+((x342|x343)<=x344));

    if (t82 != 256) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x345 = INT8_MAX;
	int8_t x346 = INT8_MIN;
	int32_t x347 = -1;
	int64_t x348 = 5906073536LL;
	volatile int32_t t83 = 3;

    t83 = (x345+((x346|x347)<=x348));

    if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x349 = 52561230LL;
	uint32_t x350 = 101797U;
	int16_t x351 = INT16_MIN;
	uint16_t x352 = UINT16_MAX;

    t84 = (x349+((x350|x351)<=x352));

    if (t84 != 52561230LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x353 = -1;
	int32_t x355 = 8;
	static int16_t x356 = 5002;
	int32_t t85 = -10901976;

    t85 = (x353+((x354|x355)<=x356));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x357 = 3LLU;
	volatile uint64_t x358 = UINT64_MAX;
	uint8_t x359 = 0U;
	int32_t x360 = 2247638;
	volatile uint64_t t86 = 82529044335064LLU;

    t86 = (x357+((x358|x359)<=x360));

    if (t86 != 3LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x363 = 0;
	static int8_t x364 = -1;
	int32_t t87 = -1553;

    t87 = (x361+((x362|x363)<=x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x365 = 1736U;
	static int16_t x366 = INT16_MIN;
	int32_t x367 = INT32_MIN;
	int32_t t88 = 1298;

    t88 = (x365+((x366|x367)<=x368));

    if (t88 != 1737) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x370 = INT8_MIN;
	uint8_t x371 = 110U;
	volatile uint8_t x372 = UINT8_MAX;
	int32_t t89 = 145558;

    t89 = (x369+((x370|x371)<=x372));

    if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x373 = 7U;
	volatile int32_t x374 = 181;
	int64_t x375 = -545916497930LL;
	volatile int16_t x376 = 1;
	static volatile uint32_t t90 = 130U;

    t90 = (x373+((x374|x375)<=x376));

    if (t90 != 8U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x377 = -1;
	int32_t x378 = INT32_MIN;
	volatile int16_t x379 = -3305;
	static int64_t x380 = 687481LL;

    t91 = (x377+((x378|x379)<=x380));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x381 = 53290U;
	volatile int64_t x382 = 120281LL;
	int64_t x383 = -303384LL;
	int32_t x384 = INT32_MIN;
	uint32_t t92 = 40381U;

    t92 = (x381+((x382|x383)<=x384));

    if (t92 != 53290U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x389 = -157873149732517908LL;
	volatile uint16_t x391 = 0U;
	int64_t x392 = INT64_MAX;
	volatile int64_t t93 = -1095468225703LL;

    t93 = (x389+((x390|x391)<=x392));

    if (t93 != -157873149732517907LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x393 = -1;
	uint8_t x394 = 3U;
	volatile int16_t x395 = INT16_MIN;
	uint8_t x396 = UINT8_MAX;

    t94 = (x393+((x394|x395)<=x396));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x397 = INT64_MIN;
	uint8_t x398 = UINT8_MAX;
	uint64_t x399 = 6LLU;
	int16_t x400 = INT16_MAX;
	int64_t t95 = 857LL;

    t95 = (x397+((x398|x399)<=x400));

    if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x404 = 776589881U;
	volatile int32_t t96 = -97644217;

    t96 = (x401+((x402|x403)<=x404));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x405 = INT8_MAX;
	uint32_t x406 = UINT32_MAX;
	volatile uint64_t x407 = UINT64_MAX;
	volatile int16_t x408 = INT16_MAX;
	volatile int32_t t97 = -79;

    t97 = (x405+((x406|x407)<=x408));

    if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x409 = UINT16_MAX;
	int64_t x411 = INT64_MIN;
	int16_t x412 = INT16_MIN;
	volatile int32_t t98 = -1;

    t98 = (x409+((x410|x411)<=x412));

    if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x413 = INT8_MIN;
	static int32_t x414 = 69;
	uint8_t x415 = 7U;
	volatile uint16_t x416 = 24U;

    t99 = (x413+((x414|x415)<=x416));

    if (t99 != -128) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x417 = -7;
	volatile int16_t x418 = 209;
	int64_t x419 = INT64_MIN;
	int32_t x420 = -1;
	int32_t t100 = -2;

    t100 = (x417+((x418|x419)<=x420));

    if (t100 != -6) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x422 = -273;
	volatile int32_t t101 = 828;

    t101 = (x421+((x422|x423)<=x424));

    if (t101 != 1815) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x426 = -46376590848199LL;
	int32_t x428 = 515;
	int32_t t102 = 239;

    t102 = (x425+((x426|x427)<=x428));

    if (t102 != -3143) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x429 = 2U;
	volatile int32_t x430 = INT32_MIN;
	static uint64_t x431 = 1030487LLU;
	volatile uint64_t x432 = 92100795875560006LLU;
	volatile int32_t t103 = 105654;

    t103 = (x429+((x430|x431)<=x432));

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x433 = INT64_MIN;
	int16_t x434 = INT16_MIN;
	static int64_t x436 = INT64_MIN;

    t104 = (x433+((x434|x435)<=x436));

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x437 = INT64_MIN;
	static volatile int8_t x438 = -1;
	volatile int8_t x440 = INT8_MIN;
	volatile int64_t t105 = INT64_MIN;

    t105 = (x437+((x438|x439)<=x440));

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x445 = UINT64_MAX;
	int64_t x447 = INT64_MIN;
	int32_t x448 = -1;
	uint64_t t106 = 33537LLU;

    t106 = (x445+((x446|x447)<=x448));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x449 = -1647LL;
	int8_t x450 = INT8_MIN;
	int8_t x451 = 4;
	int32_t x452 = INT32_MIN;

    t107 = (x449+((x450|x451)<=x452));

    if (t107 != -1647LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x453 = -648996569013513771LL;
	volatile uint8_t x454 = 117U;
	int32_t x456 = INT32_MAX;
	static volatile int64_t t108 = 180LL;

    t108 = (x453+((x454|x455)<=x456));

    if (t108 != -648996569013513770LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x457 = 1U;
	volatile int8_t x458 = -2;
	int32_t x459 = INT32_MAX;

    t109 = (x457+((x458|x459)<=x460));

    if (t109 != 2U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x461 = INT64_MIN;
	static int32_t x462 = INT32_MAX;
	int8_t x463 = 41;
	int32_t x464 = INT32_MIN;
	int64_t t110 = INT64_MIN;

    t110 = (x461+((x462|x463)<=x464));

    if (t110 != INT64_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x465 = INT16_MIN;
	int64_t x466 = 48025700631825566LL;
	volatile int64_t x467 = INT64_MIN;
	int16_t x468 = INT16_MIN;
	int32_t t111 = 265859695;

    t111 = (x465+((x466|x467)<=x468));

    if (t111 != -32767) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x469 = UINT32_MAX;
	int16_t x470 = INT16_MAX;
	uint8_t x471 = UINT8_MAX;
	int16_t x472 = INT16_MIN;
	uint32_t t112 = UINT32_MAX;

    t112 = (x469+((x470|x471)<=x472));

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x473 = -1;
	int16_t x474 = -12616;
	int64_t x475 = -2115209965151LL;
	static int8_t x476 = -1;
	static volatile int32_t t113 = 450670;

    t113 = (x473+((x474|x475)<=x476));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x477 = -1834360;
	uint16_t x478 = 15U;
	int32_t x480 = 700155273;
	volatile int32_t t114 = 4099;

    t114 = (x477+((x478|x479)<=x480));

    if (t114 != -1834359) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x481 = INT8_MAX;
	int32_t t115 = 54659921;

    t115 = (x481+((x482|x483)<=x484));

    if (t115 != 127) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x485 = -307475224101LL;
	volatile int64_t x487 = 278032163LL;
	int64_t t116 = -840662029789716LL;

    t116 = (x485+((x486|x487)<=x488));

    if (t116 != -307475224100LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x489 = -1LL;
	uint16_t x490 = 4U;
	static uint8_t x491 = 41U;
	int64_t t117 = -502843232LL;

    t117 = (x489+((x490|x491)<=x492));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x493 = INT64_MIN;
	int8_t x495 = INT8_MAX;
	static int64_t x496 = INT64_MIN;

    t118 = (x493+((x494|x495)<=x496));

    if (t118 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x497 = UINT16_MAX;
	int8_t x498 = INT8_MIN;
	volatile int16_t x499 = INT16_MIN;
	uint16_t x500 = UINT16_MAX;
	int32_t t119 = -1155145;

    t119 = (x497+((x498|x499)<=x500));

    if (t119 != 65536) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x501 = UINT8_MAX;
	static uint16_t x503 = 12U;
	int16_t x504 = INT16_MAX;
	int32_t t120 = 61474157;

    t120 = (x501+((x502|x503)<=x504));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x505 = INT32_MAX;
	int8_t x506 = -8;
	int32_t x507 = -28090349;
	int16_t x508 = INT16_MIN;
	static int32_t t121 = INT32_MAX;

    t121 = (x505+((x506|x507)<=x508));

    if (t121 != INT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x511 = 3;
	uint64_t x512 = UINT64_MAX;

    t122 = (x509+((x510|x511)<=x512));

    if (t122 != -2147483647) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x513 = INT64_MAX;
	volatile int8_t x514 = 1;
	volatile uint64_t x515 = 60571444562LLU;
	uint8_t x516 = UINT8_MAX;
	volatile int64_t t123 = INT64_MAX;

    t123 = (x513+((x514|x515)<=x516));

    if (t123 != INT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x518 = INT64_MIN;
	static volatile int16_t x519 = INT16_MIN;
	int64_t x520 = INT64_MIN;

    t124 = (x517+((x518|x519)<=x520));

    if (t124 != 5LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x521 = INT8_MIN;
	int16_t x523 = -1;
	int64_t x524 = INT64_MIN;
	volatile int32_t t125 = -77269684;

    t125 = (x521+((x522|x523)<=x524));

    if (t125 != -128) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x526 = -1;
	int64_t x527 = 18460514826367LL;
	uint32_t x528 = UINT32_MAX;
	volatile int32_t t126 = -1;

    t126 = (x525+((x526|x527)<=x528));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x529 = -27008023;
	volatile int16_t x530 = 43;
	int64_t x531 = INT64_MIN;
	int16_t x532 = 0;
	int32_t t127 = -3;

    t127 = (x529+((x530|x531)<=x532));

    if (t127 != -27008022) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x533 = -1;
	int16_t x535 = -1;
	int64_t x536 = -7247736141949748LL;
	volatile int32_t t128 = 11;

    t128 = (x533+((x534|x535)<=x536));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x537 = -220677802;
	int16_t x538 = INT16_MAX;
	int32_t x539 = -1;
	volatile uint16_t x540 = UINT16_MAX;
	int32_t t129 = 47;

    t129 = (x537+((x538|x539)<=x540));

    if (t129 != -220677801) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x543 = 3U;
	int64_t x544 = INT64_MIN;
	static int32_t t130 = -480;

    t130 = (x541+((x542|x543)<=x544));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x545 = INT8_MAX;
	volatile int32_t x546 = INT32_MIN;
	uint8_t x547 = UINT8_MAX;
	int64_t x548 = INT64_MIN;
	volatile int32_t t131 = 63536;

    t131 = (x545+((x546|x547)<=x548));

    if (t131 != 127) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x549 = 1U;
	int64_t x550 = INT64_MAX;
	int32_t x552 = 198;
	volatile int32_t t132 = 1501;

    t132 = (x549+((x550|x551)<=x552));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x553 = 14U;
	int8_t x554 = INT8_MAX;
	uint64_t x555 = UINT64_MAX;
	int32_t x556 = INT32_MAX;
	volatile int32_t t133 = -11;

    t133 = (x553+((x554|x555)<=x556));

    if (t133 != 14) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x557 = 53784LL;
	int32_t x558 = INT32_MAX;
	int64_t t134 = -65396690LL;

    t134 = (x557+((x558|x559)<=x560));

    if (t134 != 53784LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x561 = -19;
	uint64_t x562 = UINT64_MAX;
	int32_t x563 = INT32_MAX;
	static uint16_t x564 = 16U;
	int32_t t135 = -514935;

    t135 = (x561+((x562|x563)<=x564));

    if (t135 != -19) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x565 = INT8_MAX;
	int64_t x566 = INT64_MIN;
	static int64_t x567 = -156LL;

    t136 = (x565+((x566|x567)<=x568));

    if (t136 != 128) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x569 = 14715U;
	int8_t x570 = INT8_MAX;
	int8_t x571 = INT8_MIN;
	static volatile uint32_t x572 = UINT32_MAX;

    t137 = (x569+((x570|x571)<=x572));

    if (t137 != 14716) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x573 = 1002312092LL;
	static int32_t x574 = 1301780;
	uint64_t x575 = UINT64_MAX;
	static uint16_t x576 = 1U;
	int64_t t138 = 487235311LL;

    t138 = (x573+((x574|x575)<=x576));

    if (t138 != 1002312092LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x577 = 10;
	int32_t x578 = INT32_MIN;
	uint16_t x579 = 1U;
	int64_t x580 = INT64_MAX;

    t139 = (x577+((x578|x579)<=x580));

    if (t139 != 11) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x581 = 4111323784LL;
	int32_t x582 = INT32_MIN;
	int8_t x583 = -7;
	static uint8_t x584 = 12U;
	volatile int64_t t140 = 97204LL;

    t140 = (x581+((x582|x583)<=x584));

    if (t140 != 4111323785LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x585 = 47U;
	volatile int8_t x586 = INT8_MIN;
	int32_t x587 = 7;
	int8_t x588 = INT8_MIN;
	volatile uint32_t t141 = 57U;

    t141 = (x585+((x586|x587)<=x588));

    if (t141 != 47U) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x589 = -7;
	uint64_t x590 = 641427684LLU;
	volatile int16_t x591 = 1;
	int32_t x592 = INT32_MIN;

    t142 = (x589+((x590|x591)<=x592));

    if (t142 != -6) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x594 = INT32_MIN;
	volatile int8_t x595 = INT8_MIN;
	volatile int32_t t143 = 27311456;

    t143 = (x593+((x594|x595)<=x596));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x597 = INT32_MIN;
	int32_t x598 = INT32_MIN;
	volatile int64_t x599 = 113087643564191278LL;
	int64_t x600 = 77961LL;
	int32_t t144 = 66668;

    t144 = (x597+((x598|x599)<=x600));

    if (t144 != -2147483647) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x601 = INT32_MIN;
	int8_t x602 = -1;
	volatile int16_t x603 = INT16_MIN;
	static volatile int32_t x604 = -57;
	volatile int32_t t145 = INT32_MIN;

    t145 = (x601+((x602|x603)<=x604));

    if (t145 != INT32_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x605 = -1LL;
	uint8_t x606 = UINT8_MAX;
	int32_t x607 = 2;
	int32_t x608 = -124370;
	int64_t t146 = -39LL;

    t146 = (x605+((x606|x607)<=x608));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x609 = 279271325LLU;
	volatile uint16_t x611 = 5092U;
	volatile uint8_t x612 = 52U;
	volatile uint64_t t147 = 27682688885957147LLU;

    t147 = (x609+((x610|x611)<=x612));

    if (t147 != 279271326LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x613 = -176474765;
	volatile int8_t x614 = INT8_MAX;
	uint64_t x615 = UINT64_MAX;
	int8_t x616 = INT8_MIN;
	volatile int32_t t148 = -3078027;

    t148 = (x613+((x614|x615)<=x616));

    if (t148 != -176474765) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x617 = -1;
	volatile int64_t x618 = INT64_MAX;
	static uint64_t x619 = 137532301738LLU;
	int32_t t149 = -14805;

    t149 = (x617+((x618|x619)<=x620));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x621 = 1U;
	int8_t x622 = INT8_MAX;
	static volatile int16_t x623 = -4;
	int32_t x624 = INT32_MIN;

    t150 = (x621+((x622|x623)<=x624));

    if (t150 != 1U) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x625 = INT16_MIN;
	int16_t x626 = 408;
	int16_t x627 = INT16_MIN;
	uint16_t x628 = 10U;
	volatile int32_t t151 = -5664901;

    t151 = (x625+((x626|x627)<=x628));

    if (t151 != -32767) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x629 = -2;
	int64_t x630 = INT64_MAX;
	uint8_t x631 = 24U;
	volatile int64_t x632 = -1LL;
	int32_t t152 = 52;

    t152 = (x629+((x630|x631)<=x632));

    if (t152 != -2) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x633 = -5217LL;
	volatile int64_t x634 = INT64_MIN;
	uint64_t x635 = 12065165190LLU;
	int32_t x636 = -1;
	int64_t t153 = 0LL;

    t153 = (x633+((x634|x635)<=x636));

    if (t153 != -5216LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x637 = -106278740LL;
	uint16_t x638 = 4666U;
	static volatile uint16_t x640 = 252U;
	int64_t t154 = 112171906875LL;

    t154 = (x637+((x638|x639)<=x640));

    if (t154 != -106278739LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x641 = -20062790;
	static int16_t x643 = -1;
	int64_t x644 = -1LL;
	volatile int32_t t155 = 0;

    t155 = (x641+((x642|x643)<=x644));

    if (t155 != -20062789) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x646 = INT8_MAX;
	int8_t x647 = INT8_MAX;
	uint8_t x648 = UINT8_MAX;

    t156 = (x645+((x646|x647)<=x648));

    if (t156 != 43) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x649 = -1;
	static int64_t x650 = -12806168699LL;
	int8_t x651 = INT8_MIN;
	int16_t x652 = 3;
	volatile int32_t t157 = 486704124;

    t157 = (x649+((x650|x651)<=x652));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x653 = 83U;
	int32_t x655 = -1;
	volatile int16_t x656 = 50;
	volatile int32_t t158 = 0;

    t158 = (x653+((x654|x655)<=x656));

    if (t158 != 84) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x657 = INT32_MAX;
	int8_t x659 = 3;
	int8_t x660 = INT8_MIN;
	int32_t t159 = INT32_MAX;

    t159 = (x657+((x658|x659)<=x660));

    if (t159 != INT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x661 = -1;
	static int32_t x662 = INT32_MAX;
	volatile int32_t x663 = -1;
	int32_t x664 = INT32_MAX;
	volatile int32_t t160 = -21;

    t160 = (x661+((x662|x663)<=x664));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x665 = 1753028U;
	int8_t x667 = 2;
	uint64_t x668 = 3429313855649180030LLU;

    t161 = (x665+((x666|x667)<=x668));

    if (t161 != 1753028U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x673 = -1LL;
	static int8_t x674 = INT8_MIN;
	uint32_t x675 = UINT32_MAX;
	volatile int16_t x676 = INT16_MIN;
	static int64_t t162 = 442668997688753155LL;

    t162 = (x673+((x674|x675)<=x676));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint8_t x677 = 54U;
	uint8_t x678 = 0U;
	int8_t x679 = 1;
	static uint16_t x680 = 622U;
	int32_t t163 = -77;

    t163 = (x677+((x678|x679)<=x680));

    if (t163 != 55) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x681 = INT32_MAX;
	int64_t x682 = INT64_MAX;
	static int8_t x684 = INT8_MIN;
	volatile int32_t t164 = INT32_MAX;

    t164 = (x681+((x682|x683)<=x684));

    if (t164 != INT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x686 = UINT8_MAX;
	uint32_t x687 = UINT32_MAX;
	volatile int8_t x688 = INT8_MIN;
	uint64_t t165 = 16110723LLU;

    t165 = (x685+((x686|x687)<=x688));

    if (t165 != 4246843581LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x690 = -4412129623LL;
	uint32_t x692 = 29532U;
	int64_t t166 = -16299992524LL;

    t166 = (x689+((x690|x691)<=x692));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x693 = -1;
	int32_t x695 = INT32_MIN;
	int32_t x696 = INT32_MIN;
	int32_t t167 = -1;

    t167 = (x693+((x694|x695)<=x696));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x701 = 3513939043972LLU;
	uint16_t x702 = UINT16_MAX;
	static int8_t x703 = INT8_MAX;
	static int16_t x704 = 15;
	static uint64_t t168 = 1037136258LLU;

    t168 = (x701+((x702|x703)<=x704));

    if (t168 != 3513939043972LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x705 = 845U;
	int32_t x707 = INT32_MIN;

    t169 = (x705+((x706|x707)<=x708));

    if (t169 != 846U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x709 = 1;
	int8_t x710 = -3;
	int32_t x711 = INT32_MIN;
	volatile int32_t t170 = -638912053;

    t170 = (x709+((x710|x711)<=x712));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x713 = 4138848225566LL;
	uint8_t x714 = 4U;
	uint16_t x715 = UINT16_MAX;
	uint64_t x716 = 43LLU;

    t171 = (x713+((x714|x715)<=x716));

    if (t171 != 4138848225566LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x717 = 21116;
	volatile int32_t x718 = INT32_MIN;
	int32_t x719 = INT32_MAX;
	static volatile int32_t x720 = INT32_MIN;
	static volatile int32_t t172 = 256293;

    t172 = (x717+((x718|x719)<=x720));

    if (t172 != 21116) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x722 = INT64_MAX;
	uint8_t x723 = 1U;
	uint64_t x724 = 16690459265781681LLU;
	static volatile int64_t t173 = INT64_MIN;

    t173 = (x721+((x722|x723)<=x724));

    if (t173 != INT64_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x727 = INT8_MIN;
	int64_t x728 = -1LL;
	volatile int64_t t174 = 203461422944LL;

    t174 = (x725+((x726|x727)<=x728));

    if (t174 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x729 = -304;
	int32_t x731 = 96;
	int8_t x732 = INT8_MIN;
	int32_t t175 = 211281722;

    t175 = (x729+((x730|x731)<=x732));

    if (t175 != -304) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x733 = 23217064832LLU;
	int32_t x734 = INT32_MIN;
	int16_t x735 = INT16_MIN;
	volatile int64_t x736 = 5840110615889930LL;
	uint64_t t176 = 10821865973601360LLU;

    t176 = (x733+((x734|x735)<=x736));

    if (t176 != 23217064833LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x737 = INT64_MIN;
	int64_t x738 = 70513027297LL;
	int16_t x739 = INT16_MAX;
	int16_t x740 = INT16_MIN;
	static volatile int64_t t177 = INT64_MIN;

    t177 = (x737+((x738|x739)<=x740));

    if (t177 != INT64_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x741 = INT32_MAX;
	int64_t x743 = -5LL;
	int16_t x744 = INT16_MIN;
	volatile int32_t t178 = INT32_MAX;

    t178 = (x741+((x742|x743)<=x744));

    if (t178 != INT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x745 = INT64_MAX;
	volatile int32_t x747 = INT32_MAX;
	int16_t x748 = INT16_MAX;
	static volatile int64_t t179 = INT64_MAX;

    t179 = (x745+((x746|x747)<=x748));

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x749 = 456;
	int32_t x750 = INT32_MAX;
	int8_t x751 = 8;
	uint8_t x752 = 0U;
	int32_t t180 = 6689;

    t180 = (x749+((x750|x751)<=x752));

    if (t180 != 456) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x753 = INT8_MAX;
	uint8_t x754 = 23U;
	int16_t x755 = INT16_MAX;
	int8_t x756 = INT8_MIN;
	int32_t t181 = 20265;

    t181 = (x753+((x754|x755)<=x756));

    if (t181 != 127) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x757 = 1153;
	static uint32_t x758 = 4915029U;
	int64_t x760 = 524974191303LL;
	static int32_t t182 = 100984;

    t182 = (x757+((x758|x759)<=x760));

    if (t182 != 1154) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x761 = -57377;
	int32_t x762 = 31178;
	int8_t x763 = INT8_MAX;
	static uint16_t x764 = UINT16_MAX;
	volatile int32_t t183 = 127912;

    t183 = (x761+((x762|x763)<=x764));

    if (t183 != -57376) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x765 = UINT64_MAX;
	static uint16_t x766 = 2445U;
	uint32_t x767 = 1320U;
	int8_t x768 = INT8_MIN;
	uint64_t t184 = 29895312319LLU;

    t184 = (x765+((x766|x767)<=x768));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x769 = 126U;
	volatile uint8_t x770 = 18U;
	int8_t x771 = INT8_MIN;
	uint8_t x772 = 2U;
	int32_t t185 = 3306;

    t185 = (x769+((x770|x771)<=x772));

    if (t185 != 127) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x773 = -1;
	static uint8_t x774 = 5U;
	static uint8_t x776 = 4U;
	volatile int32_t t186 = -122;

    t186 = (x773+((x774|x775)<=x776));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x777 = 44700LLU;
	int32_t x778 = 14;
	volatile uint64_t t187 = 334370102174LLU;

    t187 = (x777+((x778|x779)<=x780));

    if (t187 != 44700LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x781 = -148;
	static int16_t x782 = INT16_MAX;
	int64_t x784 = 15504730375455140LL;
	volatile int32_t t188 = -14;

    t188 = (x781+((x782|x783)<=x784));

    if (t188 != -148) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x786 = INT8_MAX;
	static int8_t x787 = INT8_MIN;
	int64_t x788 = -2LL;

    t189 = (x785+((x786|x787)<=x788));

    if (t189 != UINT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x789 = 1;
	static int16_t x790 = 0;
	uint16_t x792 = 22663U;
	int32_t t190 = -998077;

    t190 = (x789+((x790|x791)<=x792));

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x793 = INT16_MIN;
	volatile int16_t x794 = INT16_MIN;
	uint16_t x795 = UINT16_MAX;
	static int8_t x796 = -7;
	volatile int32_t t191 = 25837469;

    t191 = (x793+((x794|x795)<=x796));

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x797 = -50;
	uint8_t x798 = UINT8_MAX;
	int64_t x800 = -1LL;
	int32_t t192 = 45851873;

    t192 = (x797+((x798|x799)<=x800));

    if (t192 != -49) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x801 = 151839073LLU;
	int8_t x802 = INT8_MIN;
	int8_t x803 = -15;
	int64_t x804 = 34301762819009163LL;
	volatile uint64_t t193 = 9530287792356LLU;

    t193 = (x801+((x802|x803)<=x804));

    if (t193 != 151839074LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x807 = 2070U;
	int64_t x808 = 0LL;
	int32_t t194 = 11781;

    t194 = (x805+((x806|x807)<=x808));

    if (t194 != -32767) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x809 = INT8_MAX;
	static volatile int64_t x811 = INT64_MIN;
	int16_t x812 = INT16_MIN;

    t195 = (x809+((x810|x811)<=x812));

    if (t195 != 128) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x813 = -1;
	static int32_t x814 = INT32_MIN;
	uint16_t x815 = UINT16_MAX;
	int32_t t196 = 215203;

    t196 = (x813+((x814|x815)<=x816));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x817 = UINT32_MAX;
	uint32_t x818 = 1U;
	volatile int32_t x819 = INT32_MAX;
	volatile uint32_t t197 = UINT32_MAX;

    t197 = (x817+((x818|x819)<=x820));

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x822 = 52934214937415LLU;
	volatile uint64_t x823 = 178155970528LLU;
	static volatile int8_t x824 = INT8_MIN;
	volatile int32_t t198 = -47730464;

    t198 = (x821+((x822|x823)<=x824));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x826 = 1394;
	int16_t x827 = -1;
	uint64_t x828 = UINT64_MAX;
	uint64_t t199 = 106250307877876629LLU;

    t199 = (x825+((x826|x827)<=x828));

    if (t199 != 2196643724732332LLU) { NG(); } else { ; }
	
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

