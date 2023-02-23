
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

int32_t x1 = INT32_MIN;
int64_t x5 = INT64_MIN;
static int16_t x10 = 0;
uint32_t x11 = UINT32_MAX;
int16_t x16 = INT16_MAX;
int64_t x25 = INT64_MIN;
static uint16_t x35 = UINT16_MAX;
volatile int64_t x38 = 74025294005LL;
uint8_t x45 = UINT8_MAX;
int16_t x47 = 2215;
int16_t x51 = -1;
uint64_t x57 = 77402437LLU;
int8_t x61 = INT8_MIN;
volatile int32_t t15 = -1327;
volatile int32_t t16 = 15127;
int32_t x69 = -81976;
static int64_t x70 = INT64_MAX;
int64_t x71 = -5LL;
volatile int32_t t17 = 85;
int32_t x73 = -1;
uint8_t x77 = 19U;
volatile int32_t t23 = -8152286;
int64_t x97 = 39190111991622LL;
uint8_t x99 = UINT8_MAX;
volatile int64_t t24 = 113730601LL;
int64_t x105 = INT64_MIN;
volatile uint64_t x106 = UINT64_MAX;
static int64_t x121 = INT64_MIN;
int8_t x125 = INT8_MAX;
int32_t t31 = 6892043;
volatile int64_t x136 = INT64_MIN;
uint32_t x138 = UINT32_MAX;
uint32_t x144 = 502031832U;
uint16_t x148 = 470U;
static int64_t x151 = INT64_MIN;
int16_t x159 = INT16_MIN;
static volatile int32_t t39 = -70957;
static volatile int8_t x161 = INT8_MAX;
uint8_t x174 = 0U;
uint8_t x177 = 23U;
volatile int32_t t44 = 1011290;
int64_t x186 = INT64_MIN;
int32_t x187 = 1;
static volatile int64_t x188 = -48LL;
static int64_t t47 = -1817374LL;
int32_t t48 = -183461511;
volatile int32_t t49 = -3827515;
static int16_t x206 = INT16_MAX;
static uint32_t x210 = 473926131U;
volatile int8_t x211 = INT8_MIN;
int32_t t52 = -72521725;
int8_t x213 = -1;
int8_t x216 = INT8_MIN;
int32_t t53 = -1637635;
int16_t x217 = INT16_MAX;
volatile int64_t x220 = INT64_MIN;
volatile uint16_t x222 = UINT16_MAX;
volatile int32_t t55 = -979;
uint8_t x225 = 8U;
int32_t x227 = INT32_MIN;
static volatile uint64_t x230 = 2293406911523612435LLU;
int16_t x231 = INT16_MAX;
int32_t x232 = 1913058;
static uint32_t t57 = 59882317U;
volatile int32_t t60 = -17535662;
int16_t x250 = INT16_MAX;
uint64_t x251 = 6364314LLU;
int64_t t63 = -57LL;
volatile uint8_t x258 = 2U;
volatile uint64_t t64 = 98268962473837LLU;
volatile int32_t t65 = -35221670;
int32_t x267 = INT32_MIN;
uint8_t x276 = UINT8_MAX;
uint64_t x281 = UINT64_MAX;
int64_t x286 = INT64_MIN;
int64_t x291 = INT64_MAX;
int8_t x294 = -3;
int32_t x295 = INT32_MAX;
volatile uint32_t x309 = 861434912U;
int16_t x316 = 8;
int64_t x317 = -4036975341184857234LL;
static volatile uint32_t x321 = UINT32_MAX;
int32_t x324 = INT32_MIN;
static int8_t x338 = -8;
int32_t x342 = INT32_MIN;
uint64_t x343 = UINT64_MAX;
int8_t x344 = INT8_MAX;
uint16_t x345 = 0U;
volatile int32_t t84 = -2;
volatile uint8_t x349 = 119U;
int32_t x350 = INT32_MIN;
int64_t x352 = INT64_MAX;
volatile uint64_t t86 = 3803LLU;
volatile uint16_t x375 = 852U;
int8_t x377 = INT8_MAX;
static volatile int64_t x378 = -45LL;
volatile uint16_t x382 = UINT16_MAX;
volatile int16_t x383 = -1;
uint32_t x385 = 8U;
static int32_t x392 = -1;
static uint32_t x394 = UINT32_MAX;
int32_t x395 = 109;
static int16_t x396 = 102;
volatile int32_t t96 = 160130;
uint64_t x397 = UINT64_MAX;
int16_t x399 = INT16_MAX;
volatile int32_t x403 = -1;
int32_t t98 = 24;
uint32_t x405 = 7207317U;
int64_t x406 = INT64_MAX;
uint16_t x419 = 3U;
volatile int8_t x420 = -1;
volatile int32_t t102 = 16;
int8_t x425 = INT8_MIN;
static int64_t x427 = -142LL;
int32_t t104 = -718247;
int16_t x429 = INT16_MIN;
int32_t x430 = INT32_MIN;
uint16_t x439 = 742U;
volatile uint64_t x443 = UINT64_MAX;
int16_t x452 = INT16_MAX;
volatile int32_t t110 = -410189420;
uint64_t x457 = 10983527626276LLU;
volatile uint64_t t112 = 408128353887061939LLU;
static uint8_t x471 = 8U;
static volatile uint16_t x472 = 7206U;
volatile int32_t t117 = 61;
uint64_t x482 = 883990930094LLU;
volatile int64_t t119 = 15427LL;
static volatile int16_t x490 = INT16_MAX;
static volatile int8_t x492 = INT8_MIN;
int8_t x498 = INT8_MAX;
volatile int16_t x504 = -2438;
int32_t t123 = 171741;
uint64_t x505 = UINT64_MAX;
uint64_t x507 = 383945061965996LLU;
int8_t x516 = INT8_MIN;
int32_t x519 = -1;
int64_t x520 = -2816187773522085307LL;
uint64_t x525 = 68430679LLU;
uint16_t x529 = UINT16_MAX;
int8_t x534 = -1;
int32_t x536 = INT32_MIN;
volatile int8_t x537 = -1;
static uint16_t x546 = UINT16_MAX;
int16_t x549 = -1;
uint64_t x552 = UINT64_MAX;
int8_t x554 = 5;
volatile int32_t t136 = -20928710;
int8_t x562 = INT8_MIN;
static uint16_t x564 = 105U;
uint32_t x567 = 2U;
uint64_t x568 = 2733408LLU;
uint32_t t139 = UINT32_MAX;
static int8_t x589 = INT8_MIN;
int64_t x591 = -1LL;
uint8_t x608 = 10U;
int16_t x609 = INT16_MIN;
uint16_t x613 = UINT16_MAX;
int32_t x615 = 52086050;
int32_t x617 = -741;
int32_t x618 = -241;
int16_t x622 = INT16_MAX;
volatile uint32_t t152 = 232U;
static volatile int32_t t153 = 108331;
static uint8_t x631 = 5U;
int64_t t154 = INT64_MIN;
int16_t x633 = -1;
uint32_t t157 = 12469807U;
uint32_t x646 = 80448929U;
int32_t x647 = 2365553;
volatile int32_t t159 = 90089648;
volatile uint32_t x662 = UINT32_MAX;
uint32_t x663 = UINT32_MAX;
uint8_t x670 = UINT8_MAX;
int32_t x672 = 19;
int64_t x675 = INT64_MIN;
uint16_t x681 = 14205U;
int8_t x688 = -2;
int64_t x695 = -120692727615LL;
int64_t t170 = INT64_MIN;
volatile int64_t x698 = INT64_MAX;
volatile int32_t x699 = INT32_MIN;
uint32_t x705 = 10863U;
int32_t x706 = -1;
static int64_t x716 = -1LL;
int64_t x724 = INT64_MIN;
volatile int32_t t178 = -614939885;
volatile int64_t t181 = INT64_MIN;
int32_t x755 = INT32_MIN;
uint64_t x758 = UINT64_MAX;
int16_t x759 = INT16_MAX;
volatile int32_t t185 = 2;
volatile uint32_t x769 = 312848U;
uint64_t x771 = UINT64_MAX;
int64_t t189 = 511203970814LL;
static int64_t x777 = -151778483725329174LL;
uint32_t x778 = 12993U;
int16_t x779 = 0;
int8_t x783 = -1;
volatile int32_t t191 = 8210916;
int64_t x786 = INT64_MIN;
int16_t x788 = 427;
int64_t x791 = INT64_MAX;
static uint32_t x792 = 823498U;
volatile int32_t t193 = INT32_MIN;
static uint32_t x796 = 240995U;
int32_t x800 = INT32_MIN;
static int16_t x805 = -1;
uint8_t x811 = UINT8_MAX;
int32_t x814 = INT32_MAX;


void f0(void) {
    	int16_t x2 = -1;
	volatile uint32_t x3 = 57737908U;
	uint16_t x4 = 22U;
	static int32_t t0 = INT32_MIN;

    t0 = (x1+((x2<=x3)>x4));

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x6 = UINT8_MAX;
	int32_t x7 = INT32_MIN;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int64_t t1 = INT64_MIN;

    t1 = (x5+((x6<=x7)>x8));

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	volatile uint8_t x12 = 0U;
	volatile int32_t t2 = -11646;

    t2 = (x9+((x10<=x11)>x12));

    if (t2 != 256) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -557;
	uint8_t x14 = 1U;
	int8_t x15 = 1;
	int32_t t3 = -3735;

    t3 = (x13+((x14<=x15)>x16));

    if (t3 != -557) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MIN;
	uint32_t x18 = 370418046U;
	uint64_t x19 = 504565745498632761LLU;
	static int16_t x20 = -1;
	int32_t t4 = -990693;

    t4 = (x17+((x18<=x19)>x20));

    if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = 30282002764LLU;
	volatile int16_t x24 = 110;
	static int32_t t5 = -40;

    t5 = (x21+((x22<=x23)>x24));

    if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x26 = UINT8_MAX;
	volatile int32_t x27 = INT32_MAX;
	uint64_t x28 = UINT64_MAX;
	int64_t t6 = INT64_MIN;

    t6 = (x25+((x26<=x27)>x28));

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 0;
	int8_t x30 = -1;
	uint32_t x31 = 18U;
	int16_t x32 = -1;
	volatile int32_t t7 = 728104741;

    t7 = (x29+((x30<=x31)>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int16_t x34 = 1742;
	volatile int8_t x36 = INT8_MIN;
	int32_t t8 = -76062;

    t8 = (x33+((x34<=x35)>x36));

    if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x37 = INT8_MIN;
	uint16_t x39 = 13U;
	int8_t x40 = 2;
	int32_t t9 = 222;

    t9 = (x37+((x38<=x39)>x40));

    if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 34U;
	uint8_t x42 = 11U;
	uint8_t x43 = 0U;
	int64_t x44 = 89529636538629233LL;
	volatile int32_t t10 = 223577;

    t10 = (x41+((x42<=x43)>x44));

    if (t10 != 34) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x46 = 2U;
	uint16_t x48 = 647U;
	volatile int32_t t11 = -44;

    t11 = (x45+((x46<=x47)>x48));

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 2191552U;
	int16_t x50 = INT16_MIN;
	static int8_t x52 = -2;
	static volatile uint32_t t12 = 341U;

    t12 = (x49+((x50<=x51)>x52));

    if (t12 != 2191553U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	static int16_t x54 = INT16_MIN;
	static int64_t x55 = INT64_MAX;
	int16_t x56 = -8;
	uint32_t t13 = 6752U;

    t13 = (x53+((x54<=x55)>x56));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x58 = 7580838743230LLU;
	uint64_t x59 = UINT64_MAX;
	uint16_t x60 = 4055U;
	uint64_t t14 = 71764444LLU;

    t14 = (x57+((x58<=x59)>x60));

    if (t14 != 77402437LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x62 = UINT8_MAX;
	int32_t x63 = -1;
	volatile int32_t x64 = INT32_MIN;

    t15 = (x61+((x62<=x63)>x64));

    if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x65 = UINT16_MAX;
	volatile int16_t x66 = 17;
	volatile uint8_t x67 = 1U;
	int16_t x68 = -43;

    t16 = (x65+((x66<=x67)>x68));

    if (t16 != 65536) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x72 = INT16_MIN;

    t17 = (x69+((x70<=x71)>x72));

    if (t17 != -81975) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x74 = 52U;
	volatile int16_t x75 = -1;
	volatile int8_t x76 = INT8_MAX;
	volatile int32_t t18 = 122818159;

    t18 = (x73+((x74<=x75)>x76));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x78 = 13LLU;
	uint16_t x79 = UINT16_MAX;
	int32_t x80 = INT32_MIN;
	int32_t t19 = -298;

    t19 = (x77+((x78<=x79)>x80));

    if (t19 != 20) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 109U;
	volatile int16_t x82 = 4904;
	volatile int16_t x83 = 49;
	static int16_t x84 = -1;
	volatile int32_t t20 = 6;

    t20 = (x81+((x82<=x83)>x84));

    if (t20 != 110) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -1474;
	static volatile int16_t x86 = 1;
	int64_t x87 = INT64_MAX;
	static int32_t x88 = 25105;
	int32_t t21 = -304997643;

    t21 = (x85+((x86<=x87)>x88));

    if (t21 != -1474) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 12U;
	uint64_t x90 = 9729273167132LLU;
	int16_t x91 = INT16_MIN;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t22 = -27350727;

    t22 = (x89+((x90<=x91)>x92));

    if (t22 != 12) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = 5;
	int64_t x94 = 1535203LL;
	static int16_t x95 = -40;
	int64_t x96 = INT64_MIN;

    t23 = (x93+((x94<=x95)>x96));

    if (t23 != 6) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x98 = -1;
	uint8_t x100 = 2U;

    t24 = (x97+((x98<=x99)>x100));

    if (t24 != 39190111991622LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -14526501;
	uint16_t x102 = 7032U;
	uint8_t x103 = UINT8_MAX;
	int16_t x104 = -20;
	volatile int32_t t25 = -1;

    t25 = (x101+((x102<=x103)>x104));

    if (t25 != -14526500) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x107 = UINT8_MAX;
	int64_t x108 = 6948547361LL;
	int64_t t26 = INT64_MIN;

    t26 = (x105+((x106<=x107)>x108));

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = INT16_MIN;
	static int32_t x110 = -3;
	int16_t x111 = 7572;
	static volatile int32_t x112 = -809824355;
	volatile int32_t t27 = 433997018;

    t27 = (x109+((x110<=x111)>x112));

    if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	int8_t x114 = -18;
	uint8_t x115 = 88U;
	uint64_t x116 = 55086LLU;
	volatile int32_t t28 = -17;

    t28 = (x113+((x114<=x115)>x116));

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 1U;
	int64_t x118 = INT64_MAX;
	volatile int64_t x119 = 32116033365311659LL;
	int64_t x120 = -1LL;
	volatile int32_t t29 = -21198791;

    t29 = (x117+((x118<=x119)>x120));

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x122 = 247U;
	volatile uint16_t x123 = UINT16_MAX;
	int64_t x124 = INT64_MIN;
	volatile int64_t t30 = 14802526851311511LL;

    t30 = (x121+((x122<=x123)>x124));

    if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = -742;
	uint16_t x127 = 7452U;
	uint16_t x128 = UINT16_MAX;

    t31 = (x125+((x126<=x127)>x128));

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MAX;
	static int16_t x130 = 15;
	volatile uint8_t x131 = 123U;
	static int64_t x132 = INT64_MIN;
	volatile int32_t t32 = -21677358;

    t32 = (x129+((x130<=x131)>x132));

    if (t32 != 32768) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x133 = INT64_MIN;
	volatile int64_t x134 = -3156890092LL;
	int8_t x135 = -1;
	volatile int64_t t33 = -32539512398LL;

    t33 = (x133+((x134<=x135)>x136));

    if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MIN;
	static int64_t x139 = INT64_MIN;
	int8_t x140 = -1;
	static volatile int32_t t34 = 13266273;

    t34 = (x137+((x138<=x139)>x140));

    if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = UINT16_MAX;
	volatile uint32_t x142 = 6284U;
	static volatile int8_t x143 = INT8_MIN;
	volatile int32_t t35 = 89;

    t35 = (x141+((x142<=x143)>x144));

    if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MAX;
	int8_t x146 = 1;
	static int8_t x147 = 28;
	volatile int32_t t36 = INT32_MAX;

    t36 = (x145+((x146<=x147)>x148));

    if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MIN;
	int64_t x150 = INT64_MIN;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = -39479;

    t37 = (x149+((x150<=x151)>x152));

    if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = -10;
	static volatile int8_t x154 = INT8_MIN;
	static int64_t x155 = INT64_MIN;
	static int8_t x156 = -17;
	volatile int32_t t38 = 167255;

    t38 = (x153+((x154<=x155)>x156));

    if (t38 != -9) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	uint32_t x158 = 10214924U;
	volatile int64_t x160 = INT64_MIN;

    t39 = (x157+((x158<=x159)>x160));

    if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x162 = 5U;
	volatile int8_t x163 = -1;
	int32_t x164 = -60007109;
	volatile int32_t t40 = -1;

    t40 = (x161+((x162<=x163)>x164));

    if (t40 != 128) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	volatile uint16_t x166 = UINT16_MAX;
	uint64_t x167 = 13811652279512640LLU;
	int32_t x168 = 55112;
	volatile int32_t t41 = INT32_MIN;

    t41 = (x165+((x166<=x167)>x168));

    if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = INT32_MIN;
	int64_t x170 = INT64_MIN;
	int32_t x171 = INT32_MIN;
	int32_t x172 = -10706999;
	int32_t t42 = -90;

    t42 = (x169+((x170<=x171)>x172));

    if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 246386U;
	volatile uint8_t x175 = 13U;
	volatile uint32_t x176 = 3852U;
	uint32_t t43 = 263731541U;

    t43 = (x173+((x174<=x175)>x176));

    if (t43 != 246386U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x178 = -1;
	int64_t x179 = -28LL;
	int16_t x180 = -1;

    t44 = (x177+((x178<=x179)>x180));

    if (t44 != 24) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 6686U;
	volatile uint16_t x182 = 25U;
	volatile int8_t x183 = -1;
	uint8_t x184 = 30U;
	static volatile int32_t t45 = 89;

    t45 = (x181+((x182<=x183)>x184));

    if (t45 != 6686) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = 0;
	volatile int32_t t46 = -23;

    t46 = (x185+((x186<=x187)>x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	volatile uint32_t x190 = UINT32_MAX;
	volatile int64_t x191 = -1LL;
	static int32_t x192 = INT32_MIN;

    t47 = (x189+((x190<=x191)>x192));

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x193 = UINT8_MAX;
	volatile int64_t x194 = -1LL;
	volatile uint16_t x195 = 3U;
	uint32_t x196 = 46426U;

    t48 = (x193+((x194<=x195)>x196));

    if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -1;
	int16_t x198 = INT16_MIN;
	int8_t x199 = 1;
	volatile int32_t x200 = INT32_MIN;

    t49 = (x197+((x198<=x199)>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -25;
	volatile uint64_t x202 = 42LLU;
	int32_t x203 = 16;
	int64_t x204 = INT64_MAX;
	volatile int32_t t50 = -11224072;

    t50 = (x201+((x202<=x203)>x204));

    if (t50 != -25) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -1;
	int8_t x207 = -1;
	uint8_t x208 = UINT8_MAX;
	int32_t t51 = -24200;

    t51 = (x205+((x206<=x207)>x208));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 462U;
	int8_t x212 = INT8_MIN;

    t52 = (x209+((x210<=x211)>x212));

    if (t52 != 463) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x214 = INT64_MIN;
	int64_t x215 = -83468984228668097LL;

    t53 = (x213+((x214<=x215)>x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x218 = -1;
	int16_t x219 = INT16_MIN;
	static int32_t t54 = 9398;

    t54 = (x217+((x218<=x219)>x220));

    if (t54 != 32768) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -4;
	int64_t x223 = 100896667986LL;
	uint32_t x224 = 84U;

    t55 = (x221+((x222<=x223)>x224));

    if (t55 != -4) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x226 = UINT64_MAX;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -30;

    t56 = (x225+((x226<=x227)>x228));

    if (t56 != 9) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint32_t x229 = 1858U;

    t57 = (x229+((x230<=x231)>x232));

    if (t57 != 1858U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	static int8_t x234 = -22;
	static volatile int8_t x235 = 6;
	int64_t x236 = -330LL;
	int32_t t58 = -4537482;

    t58 = (x233+((x234<=x235)>x236));

    if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	int64_t x238 = INT64_MIN;
	int64_t x239 = -1LL;
	int32_t x240 = -4693;
	volatile int32_t t59 = 70348;

    t59 = (x237+((x238<=x239)>x240));

    if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MAX;
	int64_t x242 = INT64_MIN;
	int32_t x243 = -1;
	static uint16_t x244 = 2398U;

    t60 = (x241+((x242<=x243)>x244));

    if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = INT16_MIN;
	volatile int16_t x246 = -1;
	int64_t x247 = -1LL;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t61 = 2666;

    t61 = (x245+((x246<=x247)>x248));

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	uint64_t x252 = 13119690253LLU;
	volatile int32_t t62 = -994;

    t62 = (x249+((x250<=x251)>x252));

    if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -1747LL;
	static int16_t x254 = INT16_MIN;
	int64_t x255 = 175167969LL;
	static int64_t x256 = INT64_MIN;

    t63 = (x253+((x254<=x255)>x256));

    if (t63 != -1746LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 22441532777092904LLU;
	uint64_t x259 = UINT64_MAX;
	int8_t x260 = INT8_MIN;

    t64 = (x257+((x258<=x259)>x260));

    if (t64 != 22441532777092905LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = INT16_MAX;
	static uint64_t x262 = UINT64_MAX;
	static int64_t x263 = INT64_MAX;
	volatile int8_t x264 = INT8_MAX;

    t65 = (x261+((x262<=x263)>x264));

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 1LLU;
	int64_t x266 = -7157068069152LL;
	int32_t x268 = INT32_MIN;
	static volatile uint64_t t66 = 3316561593499347079LLU;

    t66 = (x265+((x266<=x267)>x268));

    if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x273 = 162801169504992LLU;
	static uint64_t x274 = 165005006989766LLU;
	static uint64_t x275 = 15901070118LLU;
	volatile uint64_t t67 = 5295551LLU;

    t67 = (x273+((x274<=x275)>x276));

    if (t67 != 162801169504992LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x282 = UINT64_MAX;
	uint32_t x283 = UINT32_MAX;
	int32_t x284 = 1721;
	uint64_t t68 = UINT64_MAX;

    t68 = (x281+((x282<=x283)>x284));

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x285 = INT16_MAX;
	static uint8_t x287 = 28U;
	int16_t x288 = -5758;
	static int32_t t69 = -8961432;

    t69 = (x285+((x286<=x287)>x288));

    if (t69 != 32768) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x289 = UINT64_MAX;
	int8_t x290 = INT8_MIN;
	int64_t x292 = 3604957LL;
	volatile uint64_t t70 = UINT64_MAX;

    t70 = (x289+((x290<=x291)>x292));

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x293 = -98890LL;
	volatile int16_t x296 = INT16_MAX;
	int64_t t71 = -10711157LL;

    t71 = (x293+((x294<=x295)>x296));

    if (t71 != -98890LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = 1;
	volatile int16_t x298 = INT16_MAX;
	int8_t x299 = 2;
	volatile int16_t x300 = INT16_MIN;
	volatile int32_t t72 = 7625840;

    t72 = (x297+((x298<=x299)>x300));

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x301 = -1;
	int16_t x302 = INT16_MAX;
	int8_t x303 = -2;
	int8_t x304 = 0;
	int32_t t73 = -1;

    t73 = (x301+((x302<=x303)>x304));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x305 = INT16_MIN;
	int64_t x306 = -1LL;
	int64_t x307 = -1LL;
	uint64_t x308 = UINT64_MAX;
	static int32_t t74 = -832;

    t74 = (x305+((x306<=x307)>x308));

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x310 = 346776424U;
	int32_t x311 = 920979;
	static uint8_t x312 = UINT8_MAX;
	uint32_t t75 = 87U;

    t75 = (x309+((x310<=x311)>x312));

    if (t75 != 861434912U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = -48;
	volatile int8_t x314 = -1;
	static int64_t x315 = INT64_MIN;
	int32_t t76 = -1837255;

    t76 = (x313+((x314<=x315)>x316));

    if (t76 != -48) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x318 = -11;
	int64_t x319 = 2144788545813LL;
	volatile int64_t x320 = -3137LL;
	volatile int64_t t77 = -252169700634591LL;

    t77 = (x317+((x318<=x319)>x320));

    if (t77 != -4036975341184857233LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x322 = INT16_MIN;
	static uint8_t x323 = 0U;
	static uint32_t t78 = 33785U;

    t78 = (x321+((x322<=x323)>x324));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x325 = UINT64_MAX;
	int8_t x326 = -5;
	volatile uint32_t x327 = UINT32_MAX;
	static int8_t x328 = INT8_MIN;
	volatile uint64_t t79 = 83534846169LLU;

    t79 = (x325+((x326<=x327)>x328));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x329 = UINT32_MAX;
	uint64_t x330 = UINT64_MAX;
	int32_t x331 = INT32_MIN;
	volatile int64_t x332 = INT64_MIN;
	volatile uint32_t t80 = 22U;

    t80 = (x329+((x330<=x331)>x332));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x333 = UINT8_MAX;
	int32_t x334 = -1;
	static int16_t x335 = INT16_MIN;
	uint64_t x336 = 897LLU;
	volatile int32_t t81 = -4636519;

    t81 = (x333+((x334<=x335)>x336));

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x337 = INT64_MIN;
	volatile int64_t x339 = -1LL;
	int8_t x340 = INT8_MAX;
	int64_t t82 = INT64_MIN;

    t82 = (x337+((x338<=x339)>x340));

    if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x341 = UINT8_MAX;
	int32_t t83 = 2;

    t83 = (x341+((x342<=x343)>x344));

    if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x346 = UINT64_MAX;
	uint32_t x347 = UINT32_MAX;
	volatile int8_t x348 = INT8_MIN;

    t84 = (x345+((x346<=x347)>x348));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x351 = 78LLU;
	int32_t t85 = -217572247;

    t85 = (x349+((x350<=x351)>x352));

    if (t85 != 119) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x353 = 61949206283638LLU;
	uint8_t x354 = 7U;
	uint32_t x355 = 14U;
	volatile int16_t x356 = INT16_MIN;

    t86 = (x353+((x354<=x355)>x356));

    if (t86 != 61949206283639LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x357 = 99U;
	volatile int64_t x358 = INT64_MIN;
	static int8_t x359 = INT8_MAX;
	volatile uint8_t x360 = 24U;
	int32_t t87 = 7383772;

    t87 = (x357+((x358<=x359)>x360));

    if (t87 != 99) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x361 = 0U;
	int32_t x362 = INT32_MIN;
	uint8_t x363 = 5U;
	uint32_t x364 = 89U;
	int32_t t88 = 11;

    t88 = (x361+((x362<=x363)>x364));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x365 = INT32_MAX;
	static volatile int64_t x366 = INT64_MIN;
	volatile int64_t x367 = 292LL;
	uint8_t x368 = 2U;
	volatile int32_t t89 = INT32_MAX;

    t89 = (x365+((x366<=x367)>x368));

    if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x369 = INT8_MAX;
	static int64_t x370 = -1LL;
	uint32_t x371 = 104669U;
	int16_t x372 = INT16_MAX;
	volatile int32_t t90 = 7;

    t90 = (x369+((x370<=x371)>x372));

    if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x373 = -10;
	int64_t x374 = INT64_MIN;
	int32_t x376 = -1;
	int32_t t91 = -579907955;

    t91 = (x373+((x374<=x375)>x376));

    if (t91 != -9) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x379 = -9;
	volatile int32_t x380 = INT32_MIN;
	volatile int32_t t92 = -1;

    t92 = (x377+((x378<=x379)>x380));

    if (t92 != 128) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x381 = INT64_MIN;
	static int32_t x384 = INT32_MIN;
	int64_t t93 = -49237674674LL;

    t93 = (x381+((x382<=x383)>x384));

    if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x386 = 42035028U;
	static int16_t x387 = -24;
	static int64_t x388 = 1444793872LL;
	uint32_t t94 = 319U;

    t94 = (x385+((x386<=x387)>x388));

    if (t94 != 8U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x389 = INT16_MAX;
	int8_t x390 = INT8_MAX;
	uint16_t x391 = 1U;
	int32_t t95 = -5504;

    t95 = (x389+((x390<=x391)>x392));

    if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x393 = 3;

    t96 = (x393+((x394<=x395)>x396));

    if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x398 = -1;
	int32_t x400 = -31072663;
	volatile uint64_t t97 = 198483283293LLU;

    t97 = (x397+((x398<=x399)>x400));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x401 = -1;
	int32_t x402 = INT32_MAX;
	uint8_t x404 = UINT8_MAX;

    t98 = (x401+((x402<=x403)>x404));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x407 = -1;
	int32_t x408 = INT32_MIN;
	uint32_t t99 = 2368396U;

    t99 = (x405+((x406<=x407)>x408));

    if (t99 != 7207318U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x409 = 1660902108U;
	int16_t x410 = -13;
	static uint64_t x411 = 1290LLU;
	volatile int32_t x412 = 13;
	uint32_t t100 = 1218U;

    t100 = (x409+((x410<=x411)>x412));

    if (t100 != 1660902108U) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x413 = 0U;
	uint16_t x414 = UINT16_MAX;
	volatile uint64_t x415 = UINT64_MAX;
	volatile uint8_t x416 = 9U;
	int32_t t101 = 157391967;

    t101 = (x413+((x414<=x415)>x416));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x417 = INT8_MIN;
	int8_t x418 = INT8_MIN;

    t102 = (x417+((x418<=x419)>x420));

    if (t102 != -127) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x421 = UINT8_MAX;
	static int16_t x422 = -1;
	int32_t x423 = INT32_MAX;
	int16_t x424 = INT16_MIN;
	int32_t t103 = -24;

    t103 = (x421+((x422<=x423)>x424));

    if (t103 != 256) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x426 = 97080LL;
	uint16_t x428 = 24834U;

    t104 = (x425+((x426<=x427)>x428));

    if (t104 != -128) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x431 = 11159U;
	uint64_t x432 = 7702316286760411LLU;
	volatile int32_t t105 = -396069089;

    t105 = (x429+((x430<=x431)>x432));

    if (t105 != -32768) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x433 = 167093978947343399LL;
	uint16_t x434 = 105U;
	uint32_t x435 = 493U;
	static uint16_t x436 = UINT16_MAX;
	int64_t t106 = -45623943344675LL;

    t106 = (x433+((x434<=x435)>x436));

    if (t106 != 167093978947343399LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x437 = -6719000;
	uint8_t x438 = 26U;
	volatile uint16_t x440 = 1U;
	int32_t t107 = -28953063;

    t107 = (x437+((x438<=x439)>x440));

    if (t107 != -6719000) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x441 = INT64_MIN;
	static int16_t x442 = INT16_MAX;
	static int8_t x444 = -1;
	int64_t t108 = -15319217370876LL;

    t108 = (x441+((x442<=x443)>x444));

    if (t108 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x445 = 140U;
	uint8_t x446 = 48U;
	int8_t x447 = INT8_MIN;
	int64_t x448 = INT64_MIN;
	volatile uint32_t t109 = 185215218U;

    t109 = (x445+((x446<=x447)>x448));

    if (t109 != 141U) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x449 = INT16_MIN;
	int8_t x450 = 0;
	uint8_t x451 = 1U;

    t110 = (x449+((x450<=x451)>x452));

    if (t110 != -32768) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x453 = INT16_MAX;
	int32_t x454 = INT32_MIN;
	static int8_t x455 = -1;
	int16_t x456 = 1;
	volatile int32_t t111 = 133834141;

    t111 = (x453+((x454<=x455)>x456));

    if (t111 != 32767) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x458 = 107;
	volatile uint8_t x459 = UINT8_MAX;
	int32_t x460 = INT32_MIN;

    t112 = (x457+((x458<=x459)>x460));

    if (t112 != 10983527626277LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x461 = -1;
	int64_t x462 = INT64_MAX;
	static uint8_t x463 = UINT8_MAX;
	uint16_t x464 = UINT16_MAX;
	static volatile int32_t t113 = 13;

    t113 = (x461+((x462<=x463)>x464));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x465 = INT32_MIN;
	static int16_t x466 = -48;
	int64_t x467 = INT64_MIN;
	int8_t x468 = INT8_MAX;
	volatile int32_t t114 = INT32_MIN;

    t114 = (x465+((x466<=x467)>x468));

    if (t114 != INT32_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x469 = -109178115;
	int64_t x470 = INT64_MAX;
	int32_t t115 = 776920511;

    t115 = (x469+((x470<=x471)>x472));

    if (t115 != -109178115) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x473 = INT32_MIN;
	uint32_t x474 = 10479U;
	uint8_t x475 = UINT8_MAX;
	int8_t x476 = -1;
	volatile int32_t t116 = -4;

    t116 = (x473+((x474<=x475)>x476));

    if (t116 != -2147483647) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x477 = 2U;
	static uint32_t x478 = UINT32_MAX;
	int64_t x479 = -1LL;
	int64_t x480 = INT64_MIN;

    t117 = (x477+((x478<=x479)>x480));

    if (t117 != 3) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x481 = INT8_MIN;
	int16_t x483 = 203;
	int8_t x484 = INT8_MIN;
	volatile int32_t t118 = 1;

    t118 = (x481+((x482<=x483)>x484));

    if (t118 != -127) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x485 = 0LL;
	int64_t x486 = INT64_MAX;
	uint64_t x487 = 9897480556907939LLU;
	int32_t x488 = INT32_MIN;

    t119 = (x485+((x486<=x487)>x488));

    if (t119 != 1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x489 = INT16_MAX;
	uint32_t x491 = UINT32_MAX;
	int32_t t120 = 46320;

    t120 = (x489+((x490<=x491)>x492));

    if (t120 != 32768) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x493 = 1261U;
	static int64_t x494 = -1LL;
	uint64_t x495 = 8079341684345545488LLU;
	int8_t x496 = -1;
	uint32_t t121 = 90775246U;

    t121 = (x493+((x494<=x495)>x496));

    if (t121 != 1262U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x497 = -1;
	int8_t x499 = -1;
	uint32_t x500 = 968250U;
	volatile int32_t t122 = 120533320;

    t122 = (x497+((x498<=x499)>x500));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x501 = INT16_MIN;
	int16_t x502 = INT16_MIN;
	uint64_t x503 = 253668178LLU;

    t123 = (x501+((x502<=x503)>x504));

    if (t123 != -32767) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x506 = -9;
	uint8_t x508 = UINT8_MAX;
	static uint64_t t124 = UINT64_MAX;

    t124 = (x505+((x506<=x507)>x508));

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x509 = -1;
	uint64_t x510 = 218044679588076220LLU;
	int64_t x511 = INT64_MIN;
	volatile uint8_t x512 = UINT8_MAX;
	static int32_t t125 = -63217;

    t125 = (x509+((x510<=x511)>x512));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x513 = UINT8_MAX;
	uint8_t x514 = 0U;
	int64_t x515 = INT64_MAX;
	static volatile int32_t t126 = -2;

    t126 = (x513+((x514<=x515)>x516));

    if (t126 != 256) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x517 = 24U;
	uint8_t x518 = UINT8_MAX;
	int32_t t127 = -2403;

    t127 = (x517+((x518<=x519)>x520));

    if (t127 != 25) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x521 = 0;
	int64_t x522 = INT64_MIN;
	int32_t x523 = INT32_MAX;
	int32_t x524 = INT32_MIN;
	volatile int32_t t128 = -16484;

    t128 = (x521+((x522<=x523)>x524));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x526 = INT16_MIN;
	int8_t x527 = -1;
	uint8_t x528 = 3U;
	volatile uint64_t t129 = 4LLU;

    t129 = (x525+((x526<=x527)>x528));

    if (t129 != 68430679LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x530 = UINT8_MAX;
	uint32_t x531 = 54452670U;
	uint16_t x532 = 5U;
	int32_t t130 = -18;

    t130 = (x529+((x530<=x531)>x532));

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x533 = INT32_MIN;
	static int16_t x535 = -265;
	int32_t t131 = -866143;

    t131 = (x533+((x534<=x535)>x536));

    if (t131 != -2147483647) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x538 = INT8_MIN;
	uint16_t x539 = 1U;
	volatile int16_t x540 = -1324;
	int32_t t132 = -33166;

    t132 = (x537+((x538<=x539)>x540));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x545 = INT64_MIN;
	int32_t x547 = INT32_MIN;
	static int32_t x548 = -108657;
	int64_t t133 = 277379511873463LL;

    t133 = (x545+((x546<=x547)>x548));

    if (t133 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x550 = -1;
	int64_t x551 = -1LL;
	volatile int32_t t134 = 54006;

    t134 = (x549+((x550<=x551)>x552));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x553 = INT32_MIN;
	static int8_t x555 = INT8_MIN;
	static int32_t x556 = INT32_MIN;
	int32_t t135 = 7;

    t135 = (x553+((x554<=x555)>x556));

    if (t135 != -2147483647) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x557 = INT8_MAX;
	uint8_t x558 = UINT8_MAX;
	int64_t x559 = INT64_MIN;
	uint8_t x560 = UINT8_MAX;

    t136 = (x557+((x558<=x559)>x560));

    if (t136 != 127) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x561 = INT16_MIN;
	int16_t x563 = 442;
	volatile int32_t t137 = 7;

    t137 = (x561+((x562<=x563)>x564));

    if (t137 != -32768) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x565 = INT16_MAX;
	static int16_t x566 = INT16_MIN;
	int32_t t138 = 18;

    t138 = (x565+((x566<=x567)>x568));

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x569 = UINT32_MAX;
	volatile int16_t x570 = -1244;
	uint64_t x571 = UINT64_MAX;
	uint32_t x572 = UINT32_MAX;

    t139 = (x569+((x570<=x571)>x572));

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x573 = -1LL;
	int32_t x574 = INT32_MIN;
	int16_t x575 = 0;
	uint64_t x576 = 252LLU;
	int64_t t140 = 94LL;

    t140 = (x573+((x574<=x575)>x576));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x577 = UINT64_MAX;
	static int16_t x578 = -9;
	static uint8_t x579 = UINT8_MAX;
	uint16_t x580 = 24494U;
	uint64_t t141 = UINT64_MAX;

    t141 = (x577+((x578<=x579)>x580));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x581 = UINT32_MAX;
	int8_t x582 = -1;
	volatile int32_t x583 = -1;
	int16_t x584 = INT16_MIN;
	volatile uint32_t t142 = 5U;

    t142 = (x581+((x582<=x583)>x584));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x585 = INT8_MAX;
	int32_t x586 = INT32_MIN;
	uint8_t x587 = 18U;
	int64_t x588 = INT64_MIN;
	volatile int32_t t143 = -13922;

    t143 = (x585+((x586<=x587)>x588));

    if (t143 != 128) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x590 = -1;
	volatile uint32_t x592 = 40U;
	static int32_t t144 = 49709720;

    t144 = (x589+((x590<=x591)>x592));

    if (t144 != -128) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x593 = -1;
	int64_t x594 = -1LL;
	int32_t x595 = 0;
	static uint16_t x596 = 100U;
	int32_t t145 = 304118493;

    t145 = (x593+((x594<=x595)>x596));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x597 = 650938355U;
	uint64_t x598 = UINT64_MAX;
	uint8_t x599 = 22U;
	uint32_t x600 = 1U;
	uint32_t t146 = 27440939U;

    t146 = (x597+((x598<=x599)>x600));

    if (t146 != 650938355U) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int32_t x601 = INT32_MAX;
	volatile int16_t x602 = INT16_MIN;
	int16_t x603 = -4206;
	int64_t x604 = 93653875LL;
	static volatile int32_t t147 = INT32_MAX;

    t147 = (x601+((x602<=x603)>x604));

    if (t147 != INT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x605 = INT8_MIN;
	uint32_t x606 = 7449082U;
	int32_t x607 = INT32_MIN;
	volatile int32_t t148 = 923639;

    t148 = (x605+((x606<=x607)>x608));

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x610 = -1;
	uint32_t x611 = 373351U;
	uint8_t x612 = UINT8_MAX;
	volatile int32_t t149 = -1;

    t149 = (x609+((x610<=x611)>x612));

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x614 = -1;
	volatile int8_t x616 = INT8_MIN;
	int32_t t150 = 440;

    t150 = (x613+((x614<=x615)>x616));

    if (t150 != 65536) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x619 = -1;
	int32_t x620 = -1;
	static volatile int32_t t151 = 63778488;

    t151 = (x617+((x618<=x619)>x620));

    if (t151 != -740) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x621 = UINT32_MAX;
	int8_t x623 = INT8_MIN;
	int64_t x624 = INT64_MIN;

    t152 = (x621+((x622<=x623)>x624));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x625 = INT16_MIN;
	volatile uint8_t x626 = 13U;
	uint32_t x627 = 43775327U;
	uint16_t x628 = 3U;

    t153 = (x625+((x626<=x627)>x628));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x629 = INT64_MIN;
	volatile int32_t x630 = -19110353;
	volatile int64_t x632 = INT64_MAX;

    t154 = (x629+((x630<=x631)>x632));

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x634 = INT8_MIN;
	int16_t x635 = 5;
	int32_t x636 = 12;
	volatile int32_t t155 = 27;

    t155 = (x633+((x634<=x635)>x636));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x637 = 245;
	static volatile int32_t x638 = 1;
	int16_t x639 = -1;
	int64_t x640 = INT64_MIN;
	static volatile int32_t t156 = 7;

    t156 = (x637+((x638<=x639)>x640));

    if (t156 != 246) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x641 = 5138U;
	volatile int8_t x642 = INT8_MIN;
	uint32_t x643 = UINT32_MAX;
	static volatile uint64_t x644 = UINT64_MAX;

    t157 = (x641+((x642<=x643)>x644));

    if (t157 != 5138U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x645 = 215585728886516281LL;
	static volatile uint32_t x648 = 1696204528U;
	int64_t t158 = -14161LL;

    t158 = (x645+((x646<=x647)>x648));

    if (t158 != 215585728886516281LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x649 = INT32_MIN;
	volatile int32_t x650 = INT32_MIN;
	int32_t x651 = INT32_MAX;
	int32_t x652 = INT32_MIN;

    t159 = (x649+((x650<=x651)>x652));

    if (t159 != -2147483647) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x653 = -1;
	volatile int64_t x654 = -2583739451353277671LL;
	uint16_t x655 = 8458U;
	int8_t x656 = -4;
	int32_t t160 = -64866;

    t160 = (x653+((x654<=x655)>x656));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x657 = 1513U;
	uint64_t x658 = 25485827LLU;
	static int8_t x659 = 3;
	int16_t x660 = INT16_MAX;
	static volatile int32_t t161 = 3739;

    t161 = (x657+((x658<=x659)>x660));

    if (t161 != 1513) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x661 = 144855381U;
	uint16_t x664 = 7073U;
	volatile uint32_t t162 = 3U;

    t162 = (x661+((x662<=x663)>x664));

    if (t162 != 144855381U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x665 = -71010222;
	volatile int64_t x666 = -2022029LL;
	uint64_t x667 = UINT64_MAX;
	static uint8_t x668 = UINT8_MAX;
	volatile int32_t t163 = -85214802;

    t163 = (x665+((x666<=x667)>x668));

    if (t163 != -71010222) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x669 = INT8_MIN;
	uint64_t x671 = UINT64_MAX;
	int32_t t164 = -31997;

    t164 = (x669+((x670<=x671)>x672));

    if (t164 != -128) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x673 = INT64_MAX;
	static uint64_t x674 = 112LLU;
	uint8_t x676 = UINT8_MAX;
	int64_t t165 = INT64_MAX;

    t165 = (x673+((x674<=x675)>x676));

    if (t165 != INT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x677 = INT8_MIN;
	static int64_t x678 = -1LL;
	int16_t x679 = 1;
	int64_t x680 = INT64_MIN;
	int32_t t166 = -23847542;

    t166 = (x677+((x678<=x679)>x680));

    if (t166 != -127) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x682 = -369;
	int16_t x683 = INT16_MIN;
	uint64_t x684 = UINT64_MAX;
	int32_t t167 = -315565832;

    t167 = (x681+((x682<=x683)>x684));

    if (t167 != 14205) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x685 = -1;
	static volatile int64_t x686 = 450648758774222LL;
	int8_t x687 = -1;
	volatile int32_t t168 = -50826311;

    t168 = (x685+((x686<=x687)>x688));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x689 = INT8_MIN;
	int64_t x690 = -1LL;
	uint64_t x691 = 278276488832LLU;
	int64_t x692 = INT64_MIN;
	int32_t t169 = -23442404;

    t169 = (x689+((x690<=x691)>x692));

    if (t169 != -127) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x693 = INT64_MIN;
	static volatile int64_t x694 = -228761849940039507LL;
	uint64_t x696 = UINT64_MAX;

    t170 = (x693+((x694<=x695)>x696));

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x697 = UINT32_MAX;
	static int8_t x700 = INT8_MAX;
	static volatile uint32_t t171 = UINT32_MAX;

    t171 = (x697+((x698<=x699)>x700));

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x701 = -1;
	uint16_t x702 = UINT16_MAX;
	static int32_t x703 = INT32_MAX;
	int64_t x704 = 26150428113LL;
	int32_t t172 = -7218882;

    t172 = (x701+((x702<=x703)>x704));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x707 = UINT32_MAX;
	int8_t x708 = INT8_MIN;
	uint32_t t173 = 153U;

    t173 = (x705+((x706<=x707)>x708));

    if (t173 != 10864U) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint32_t x709 = UINT32_MAX;
	int64_t x710 = INT64_MAX;
	int16_t x711 = -1;
	int64_t x712 = INT64_MIN;
	uint32_t t174 = 15U;

    t174 = (x709+((x710<=x711)>x712));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x713 = 36U;
	int8_t x714 = -1;
	int8_t x715 = 1;
	int32_t t175 = -2044367;

    t175 = (x713+((x714<=x715)>x716));

    if (t175 != 37) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x717 = INT64_MIN;
	uint64_t x718 = UINT64_MAX;
	volatile int16_t x719 = INT16_MAX;
	uint8_t x720 = 0U;
	static volatile int64_t t176 = INT64_MIN;

    t176 = (x717+((x718<=x719)>x720));

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x721 = INT32_MIN;
	int16_t x722 = INT16_MIN;
	uint64_t x723 = UINT64_MAX;
	int32_t t177 = -21;

    t177 = (x721+((x722<=x723)>x724));

    if (t177 != -2147483647) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x725 = INT16_MIN;
	int16_t x726 = 1;
	static uint16_t x727 = UINT16_MAX;
	int32_t x728 = -1;

    t178 = (x725+((x726<=x727)>x728));

    if (t178 != -32767) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x729 = INT16_MIN;
	volatile int32_t x730 = INT32_MAX;
	uint32_t x731 = 478829U;
	int64_t x732 = INT64_MIN;
	volatile int32_t t179 = 425583;

    t179 = (x729+((x730<=x731)>x732));

    if (t179 != -32767) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x733 = INT8_MAX;
	int16_t x734 = -917;
	int64_t x735 = INT64_MIN;
	int32_t x736 = INT32_MIN;
	volatile int32_t t180 = 0;

    t180 = (x733+((x734<=x735)>x736));

    if (t180 != 128) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x741 = INT64_MIN;
	static volatile int64_t x742 = INT64_MIN;
	volatile int8_t x743 = 1;
	volatile int32_t x744 = 26723790;

    t181 = (x741+((x742<=x743)>x744));

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x745 = INT8_MAX;
	uint8_t x746 = UINT8_MAX;
	int32_t x747 = INT32_MIN;
	int16_t x748 = 23;
	int32_t t182 = 5;

    t182 = (x745+((x746<=x747)>x748));

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x749 = -1;
	uint32_t x750 = 4U;
	volatile uint32_t x751 = 8U;
	int8_t x752 = -2;
	static volatile int32_t t183 = 3312;

    t183 = (x749+((x750<=x751)>x752));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x753 = 197167964;
	volatile int16_t x754 = INT16_MAX;
	static int16_t x756 = INT16_MIN;
	volatile int32_t t184 = -120404;

    t184 = (x753+((x754<=x755)>x756));

    if (t184 != 197167965) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x757 = 58;
	int16_t x760 = -1;

    t185 = (x757+((x758<=x759)>x760));

    if (t185 != 59) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x761 = INT8_MIN;
	uint8_t x762 = UINT8_MAX;
	int8_t x763 = -1;
	uint16_t x764 = 1U;
	static volatile int32_t t186 = 511;

    t186 = (x761+((x762<=x763)>x764));

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x765 = 82U;
	int32_t x766 = -1;
	int8_t x767 = -2;
	int64_t x768 = -1LL;
	volatile int32_t t187 = 136;

    t187 = (x765+((x766<=x767)>x768));

    if (t187 != 83) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x770 = 466LL;
	static int32_t x772 = -1;
	uint32_t t188 = 1U;

    t188 = (x769+((x770<=x771)>x772));

    if (t188 != 312849U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x773 = INT64_MIN;
	uint64_t x774 = 641536307LLU;
	static int16_t x775 = INT16_MAX;
	static volatile int64_t x776 = -1LL;

    t189 = (x773+((x774<=x775)>x776));

    if (t189 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x780 = -1;
	int64_t t190 = 3373466845766LL;

    t190 = (x777+((x778<=x779)>x780));

    if (t190 != -151778483725329173LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x781 = -1;
	uint16_t x782 = UINT16_MAX;
	int8_t x784 = INT8_MIN;

    t191 = (x781+((x782<=x783)>x784));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x785 = INT32_MIN;
	static int64_t x787 = -13LL;
	volatile int32_t t192 = INT32_MIN;

    t192 = (x785+((x786<=x787)>x788));

    if (t192 != INT32_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x789 = INT32_MIN;
	static int32_t x790 = -7444504;

    t193 = (x789+((x790<=x791)>x792));

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x793 = 102U;
	int64_t x794 = INT64_MIN;
	uint64_t x795 = 6163264253LLU;
	int32_t t194 = 77;

    t194 = (x793+((x794<=x795)>x796));

    if (t194 != 102) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x797 = -39;
	uint32_t x798 = UINT32_MAX;
	uint32_t x799 = 69U;
	volatile int32_t t195 = 38;

    t195 = (x797+((x798<=x799)>x800));

    if (t195 != -38) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x801 = INT16_MIN;
	int16_t x802 = -22;
	static int8_t x803 = INT8_MIN;
	static int64_t x804 = -15994056LL;
	static int32_t t196 = -75095;

    t196 = (x801+((x802<=x803)>x804));

    if (t196 != -32767) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x806 = INT32_MIN;
	volatile uint32_t x807 = 3U;
	uint64_t x808 = UINT64_MAX;
	int32_t t197 = -106956;

    t197 = (x805+((x806<=x807)>x808));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x809 = UINT32_MAX;
	uint16_t x810 = 1U;
	static uint64_t x812 = 29410243816235382LLU;
	volatile uint32_t t198 = UINT32_MAX;

    t198 = (x809+((x810<=x811)>x812));

    if (t198 != UINT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x813 = 288657647LL;
	volatile int8_t x815 = INT8_MIN;
	uint8_t x816 = 0U;
	volatile int64_t t199 = 66911674LL;

    t199 = (x813+((x814<=x815)>x816));

    if (t199 != 288657647LL) { NG(); } else { ; }
	
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

