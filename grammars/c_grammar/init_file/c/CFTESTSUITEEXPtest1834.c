
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

uint32_t x2 = UINT32_MAX;
static int8_t x10 = INT8_MIN;
int8_t x13 = -1;
static volatile int32_t t5 = 141544;
int32_t t6 = 97350;
static int8_t x34 = INT8_MAX;
uint8_t x36 = UINT8_MAX;
int64_t x39 = 224143LL;
uint16_t x41 = 5U;
static int16_t x42 = INT16_MIN;
int32_t x49 = -33;
uint64_t x50 = UINT64_MAX;
int32_t t12 = 1028994646;
static int16_t x54 = INT16_MIN;
int16_t x58 = INT16_MIN;
uint32_t x62 = 523741796U;
int16_t x69 = 15;
int64_t x71 = 3899313LL;
static int32_t t17 = 691;
int64_t x73 = -16689398021LL;
uint8_t x78 = UINT8_MAX;
int32_t t19 = -14;
volatile uint32_t t20 = 51553136U;
static int8_t x86 = INT8_MIN;
int32_t x91 = -317114569;
uint32_t x93 = 318340377U;
static int16_t x98 = INT16_MAX;
int64_t x101 = INT64_MAX;
uint8_t x102 = 39U;
int64_t x103 = 271596843750LL;
int32_t x104 = -252930;
int16_t x105 = -344;
uint64_t x106 = 47662510635LLU;
int8_t x115 = 2;
int32_t x116 = INT32_MIN;
static int32_t t28 = 101109935;
volatile int32_t x118 = INT32_MIN;
int16_t x120 = INT16_MIN;
uint16_t x123 = UINT16_MAX;
int16_t x124 = -17;
static int64_t x125 = -15LL;
int8_t x137 = INT8_MIN;
int64_t x141 = INT64_MIN;
static int64_t x147 = -1LL;
int64_t x153 = -5457826893LL;
volatile uint32_t x154 = 7626209U;
static int64_t x156 = INT64_MIN;
volatile int16_t x158 = INT16_MIN;
int16_t x164 = -3;
int64_t x170 = -1LL;
int32_t t41 = -899;
int64_t t43 = -148LL;
volatile int16_t x182 = INT16_MIN;
int64_t x193 = 377904269916563LL;
static int64_t x200 = INT64_MAX;
int16_t x202 = INT16_MIN;
int16_t x204 = 119;
volatile uint64_t t49 = 95651835464734LLU;
static uint8_t x208 = 1U;
volatile int32_t x209 = INT32_MIN;
volatile int32_t t54 = 136200150;
uint16_t x226 = 18U;
int8_t x232 = -30;
volatile int64_t t57 = 195056333860LL;
uint64_t x239 = 4073LLU;
int64_t t59 = INT64_MIN;
static uint16_t x257 = UINT16_MAX;
volatile int64_t x263 = INT64_MAX;
static int64_t x273 = INT64_MIN;
volatile int8_t x274 = INT8_MIN;
int32_t t68 = 181815;
int16_t x284 = INT16_MIN;
int32_t x293 = 1282940;
uint32_t t75 = 22U;
volatile int16_t x311 = INT16_MIN;
uint64_t t76 = 292944858LLU;
int16_t x321 = 16342;
volatile uint8_t x337 = 45U;
int32_t t82 = 3304319;
int64_t t83 = -9128040078094LL;
volatile int16_t x345 = INT16_MAX;
static volatile int8_t x346 = 2;
static volatile int16_t x362 = -40;
int32_t x367 = INT32_MIN;
int8_t x370 = INT8_MAX;
volatile uint64_t t91 = 0LLU;
volatile int32_t t92 = 3868541;
uint32_t x383 = 8542618U;
static volatile int8_t x390 = -3;
int16_t x392 = INT16_MAX;
uint16_t x399 = 230U;
uint32_t x400 = UINT32_MAX;
int32_t x401 = INT32_MAX;
static volatile int16_t x402 = INT16_MIN;
static int8_t x404 = INT8_MIN;
int32_t t98 = INT32_MAX;
int16_t x407 = 28;
int64_t x409 = INT64_MAX;
uint32_t x414 = UINT32_MAX;
volatile int32_t t101 = -4895;
int16_t x424 = INT16_MIN;
uint64_t x432 = 2336965LLU;
volatile uint64_t t105 = 16922064937LLU;
int16_t x434 = INT16_MAX;
int64_t x436 = -1LL;
uint64_t x442 = 7185LLU;
uint8_t x445 = 1U;
volatile int32_t x448 = INT32_MAX;
static volatile uint8_t x453 = 1U;
volatile int32_t x454 = -1;
int32_t x457 = -1;
volatile int64_t x458 = INT64_MIN;
volatile int32_t t111 = -992116324;
volatile int64_t x464 = -510067381694651LL;
uint32_t x467 = 8176U;
uint32_t x470 = UINT32_MAX;
uint8_t x475 = 82U;
volatile int8_t x478 = INT8_MIN;
uint8_t x480 = 6U;
volatile int8_t x486 = INT8_MIN;
int8_t x491 = INT8_MAX;
volatile uint32_t x496 = 135814U;
int8_t x507 = -1;
int16_t x511 = -1081;
int8_t x512 = -28;
static int64_t x513 = INT64_MAX;
int64_t x520 = -2071065680LL;
volatile int16_t x525 = INT16_MAX;
static volatile uint64_t x532 = UINT64_MAX;
uint16_t x534 = 0U;
static int16_t x535 = INT16_MIN;
int64_t t131 = -22006286140LL;
uint64_t x555 = UINT64_MAX;
int16_t x561 = INT16_MIN;
volatile int64_t t136 = 156555851LL;
static uint32_t x568 = 152715372U;
static uint32_t x571 = 1841U;
static uint64_t x573 = 1LLU;
uint8_t x574 = UINT8_MAX;
int16_t x579 = INT16_MIN;
static volatile int8_t x593 = -1;
volatile uint64_t x594 = 35456168035948550LLU;
int16_t x598 = -103;
volatile uint16_t x601 = UINT16_MAX;
int8_t x606 = 1;
int16_t x612 = INT16_MAX;
volatile int32_t t149 = -17930;
volatile int64_t t150 = 247038386LL;
int64_t x622 = INT64_MAX;
int8_t x624 = -4;
static volatile int32_t t151 = -389023;
uint32_t x628 = UINT32_MAX;
volatile int32_t x633 = -763812212;
int16_t x638 = INT16_MAX;
int64_t x641 = 226538708730451LL;
static int8_t x646 = 3;
static int32_t x648 = INT32_MIN;
int16_t x651 = INT16_MIN;
int64_t t160 = 89817LL;
int16_t x662 = 126;
static int16_t x664 = INT16_MIN;
int8_t x666 = 25;
volatile int64_t x671 = INT64_MIN;
uint32_t x676 = UINT32_MAX;
volatile int8_t x677 = 54;
volatile int32_t t165 = -8606490;
int16_t x689 = -549;
static uint16_t x695 = UINT16_MAX;
int8_t x703 = -1;
volatile int32_t t172 = 521;
volatile int64_t x710 = -1118445LL;
static volatile uint32_t t180 = 496580U;
uint16_t x741 = 53U;
int8_t x743 = 4;
int16_t x748 = INT16_MIN;
int32_t x750 = -1;
volatile int32_t x751 = INT32_MAX;
int8_t x752 = INT8_MIN;
int32_t t185 = 173;
static int16_t x766 = INT16_MIN;
int32_t t187 = -51265;
int64_t t190 = 1LL;
int64_t x781 = INT64_MIN;
int32_t x784 = 87272;
int32_t x786 = 2;
uint8_t x787 = 4U;
int32_t x788 = INT32_MIN;
volatile int64_t t194 = INT64_MIN;
int32_t x797 = INT32_MAX;
int16_t x798 = 98;
int32_t x799 = INT32_MIN;
uint16_t x800 = 11U;
volatile int64_t x807 = -1LL;
int16_t x809 = INT16_MIN;
uint16_t x816 = 529U;


void f0(void) {
    	volatile uint16_t x1 = 50U;
	volatile uint64_t x3 = UINT64_MAX;
	volatile uint16_t x4 = 7792U;
	volatile int32_t t0 = 6602041;

    t0 = (x1^((x2<=x3)%x4));

    if (t0 != 51) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x5 = 407949283U;
	static volatile uint8_t x6 = UINT8_MAX;
	int32_t x7 = INT32_MAX;
	volatile uint8_t x8 = 3U;
	uint32_t t1 = 16U;

    t1 = (x5^((x6<=x7)%x8));

    if (t1 != 407949282U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = 1194588384LL;
	volatile int8_t x11 = INT8_MIN;
	int64_t x12 = 683498526321775215LL;
	int64_t t2 = -754738LL;

    t2 = (x9^((x10<=x11)%x12));

    if (t2 != 1194588385LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int8_t x14 = INT8_MAX;
	static int16_t x15 = INT16_MAX;
	int32_t x16 = -1;
	int32_t t3 = -197;

    t3 = (x13^((x14<=x15)%x16));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x17 = INT16_MAX;
	volatile int16_t x18 = -1;
	volatile int64_t x19 = -1LL;
	uint16_t x20 = 12608U;
	volatile int32_t t4 = -61697;

    t4 = (x17^((x18<=x19)%x20));

    if (t4 != 32766) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 1;
	int64_t x22 = INT64_MIN;
	static uint64_t x23 = 35366213968541520LLU;
	volatile uint16_t x24 = 687U;

    t5 = (x21^((x22<=x23)%x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 51U;
	int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	uint8_t x28 = 1U;

    t6 = (x25^((x26<=x27)%x28));

    if (t6 != 51) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = INT8_MIN;
	static int64_t x30 = -1LL;
	static uint8_t x31 = UINT8_MAX;
	volatile uint32_t x32 = 14580U;
	volatile uint32_t t7 = 10886U;

    t7 = (x29^((x30<=x31)%x32));

    if (t7 != 4294967169U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x33 = UINT8_MAX;
	int16_t x35 = INT16_MAX;
	int32_t t8 = 30;

    t8 = (x33^((x34<=x35)%x36));

    if (t8 != 254) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 122943670275LLU;
	uint64_t x38 = UINT64_MAX;
	static int64_t x40 = 92486LL;
	uint64_t t9 = 7893586LLU;

    t9 = (x37^((x38<=x39)%x40));

    if (t9 != 122943670275LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x43 = 59555LLU;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = 2;

    t10 = (x41^((x42<=x43)%x44));

    if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	int32_t x46 = -1;
	volatile int16_t x47 = -1;
	int32_t x48 = 218;
	int32_t t11 = 12673628;

    t11 = (x45^((x46<=x47)%x48));

    if (t11 != 254) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x51 = -289138LL;
	uint16_t x52 = 10820U;

    t12 = (x49^((x50<=x51)%x52));

    if (t12 != -33) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	int64_t x55 = INT64_MIN;
	static uint8_t x56 = UINT8_MAX;
	volatile int64_t t13 = INT64_MIN;

    t13 = (x53^((x54<=x55)%x56));

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 502607419708128LLU;
	uint32_t x59 = 175U;
	static int8_t x60 = INT8_MAX;
	uint64_t t14 = 18414979186096LLU;

    t14 = (x57^((x58<=x59)%x60));

    if (t14 != 502607419708128LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 32;
	int16_t x63 = 84;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -27027982;

    t15 = (x61^((x62<=x63)%x64));

    if (t15 != 32) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = INT8_MIN;
	int8_t x66 = 1;
	int16_t x67 = INT16_MAX;
	static int8_t x68 = INT8_MAX;
	int32_t t16 = -378926;

    t16 = (x65^((x66<=x67)%x68));

    if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = INT8_MIN;
	int8_t x72 = -1;

    t17 = (x69^((x70<=x71)%x72));

    if (t17 != 15) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = 42299;
	static int32_t x75 = -1;
	uint16_t x76 = 1025U;
	volatile int64_t t18 = -5876188LL;

    t18 = (x73^((x74<=x75)%x76));

    if (t18 != -16689398021LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = 1984;
	int8_t x79 = -1;
	int16_t x80 = INT16_MIN;

    t19 = (x77^((x78<=x79)%x80));

    if (t19 != 1984) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x81 = 499377635U;
	volatile int16_t x82 = -1;
	int8_t x83 = INT8_MIN;
	uint16_t x84 = 804U;

    t20 = (x81^((x82<=x83)%x84));

    if (t20 != 499377635U) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int16_t x85 = INT16_MIN;
	static uint16_t x87 = 1U;
	volatile uint8_t x88 = 60U;
	static int32_t t21 = -1;

    t21 = (x85^((x86<=x87)%x88));

    if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x89 = 458LLU;
	uint32_t x90 = UINT32_MAX;
	int32_t x92 = INT32_MIN;
	uint64_t t22 = 44060LLU;

    t22 = (x89^((x90<=x91)%x92));

    if (t22 != 458LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x94 = 0;
	uint64_t x95 = 138243LLU;
	static int64_t x96 = INT64_MIN;
	static int64_t t23 = 9931839LL;

    t23 = (x93^((x94<=x95)%x96));

    if (t23 != 318340376LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MIN;
	int64_t x99 = 1132LL;
	int32_t x100 = INT32_MIN;
	volatile int64_t t24 = INT64_MIN;

    t24 = (x97^((x98<=x99)%x100));

    if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t t25 = -4146250964216087LL;

    t25 = (x101^((x102<=x103)%x104));

    if (t25 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x107 = INT64_MAX;
	int64_t x108 = 689537253782951LL;
	int64_t t26 = -5654LL;

    t26 = (x105^((x106<=x107)%x108));

    if (t26 != -343LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 0U;
	int32_t x110 = INT32_MIN;
	int16_t x111 = INT16_MIN;
	volatile int16_t x112 = INT16_MIN;
	volatile uint32_t t27 = 7628U;

    t27 = (x109^((x110<=x111)%x112));

    if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	int8_t x114 = -1;

    t28 = (x113^((x114<=x115)%x116));

    if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = INT64_MIN;
	volatile uint16_t x119 = UINT16_MAX;
	static volatile int64_t t29 = 2116807262LL;

    t29 = (x117^((x118<=x119)%x120));

    if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = -21;
	int16_t x122 = INT16_MIN;
	int32_t t30 = -1412;

    t30 = (x121^((x122<=x123)%x124));

    if (t30 != -22) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x126 = INT32_MIN;
	int16_t x127 = INT16_MAX;
	uint64_t x128 = 92566551905438LLU;
	uint64_t t31 = 4176338540025LLU;

    t31 = (x125^((x126<=x127)%x128));

    if (t31 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint32_t x129 = 421U;
	static int8_t x130 = 1;
	int16_t x131 = INT16_MIN;
	int16_t x132 = -1;
	volatile uint32_t t32 = 48806192U;

    t32 = (x129^((x130<=x131)%x132));

    if (t32 != 421U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MAX;
	uint8_t x135 = UINT8_MAX;
	volatile uint64_t x136 = 81391975076213491LLU;
	volatile uint64_t t33 = 22684LLU;

    t33 = (x133^((x134<=x135)%x136));

    if (t33 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = -1LL;
	static int32_t x139 = INT32_MAX;
	int16_t x140 = 30;
	volatile int32_t t34 = 8680;

    t34 = (x137^((x138<=x139)%x140));

    if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x142 = UINT32_MAX;
	volatile int32_t x143 = INT32_MAX;
	static volatile int8_t x144 = 6;
	volatile int64_t t35 = INT64_MIN;

    t35 = (x141^((x142<=x143)%x144));

    if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x145 = UINT8_MAX;
	int16_t x146 = -1;
	uint32_t x148 = 3U;
	uint32_t t36 = 5U;

    t36 = (x145^((x146<=x147)%x148));

    if (t36 != 254U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x155 = -1;
	static int64_t t37 = 16108016372928LL;

    t37 = (x153^((x154<=x155)%x156));

    if (t37 != -5457826894LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = INT8_MAX;
	int8_t x159 = -1;
	int64_t x160 = -1LL;
	int64_t t38 = 157656764776LL;

    t38 = (x157^((x158<=x159)%x160));

    if (t38 != 127LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x161 = -11;
	int8_t x162 = 11;
	int64_t x163 = INT64_MIN;
	volatile int32_t t39 = -2011938;

    t39 = (x161^((x162<=x163)%x164));

    if (t39 != -11) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x165 = 7528U;
	int8_t x166 = INT8_MIN;
	uint32_t x167 = UINT32_MAX;
	uint32_t x168 = 672555650U;
	static volatile uint32_t t40 = 269U;

    t40 = (x165^((x166<=x167)%x168));

    if (t40 != 7529U) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = -10;
	static uint64_t x171 = UINT64_MAX;
	int16_t x172 = INT16_MIN;

    t41 = (x169^((x170<=x171)%x172));

    if (t41 != -9) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x173 = -103399421;
	int16_t x174 = 32;
	int8_t x175 = INT8_MAX;
	int16_t x176 = -1;
	static volatile int32_t t42 = 243694;

    t42 = (x173^((x174<=x175)%x176));

    if (t42 != -103399421) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x177 = UINT16_MAX;
	volatile int8_t x178 = -29;
	uint64_t x179 = UINT64_MAX;
	int64_t x180 = -1LL;

    t43 = (x177^((x178<=x179)%x180));

    if (t43 != 65535LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x181 = INT16_MIN;
	volatile int16_t x183 = INT16_MAX;
	int64_t x184 = INT64_MAX;
	int64_t t44 = 551729809140538LL;

    t44 = (x181^((x182<=x183)%x184));

    if (t44 != -32767LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x185 = INT32_MIN;
	static int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MIN;
	uint16_t x188 = 154U;
	volatile int32_t t45 = INT32_MIN;

    t45 = (x185^((x186<=x187)%x188));

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = INT8_MIN;
	static int16_t x190 = 9;
	static volatile int64_t x191 = 0LL;
	int8_t x192 = INT8_MIN;
	int32_t t46 = -5255538;

    t46 = (x189^((x190<=x191)%x192));

    if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x194 = INT64_MAX;
	int64_t x195 = 2269636242765LL;
	volatile int32_t x196 = -1;
	int64_t t47 = 788LL;

    t47 = (x193^((x194<=x195)%x196));

    if (t47 != 377904269916563LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = -1;
	int64_t x198 = INT64_MIN;
	int16_t x199 = -1;
	volatile int64_t t48 = -1LL;

    t48 = (x197^((x198<=x199)%x200));

    if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x201 = UINT64_MAX;
	static int64_t x203 = 18259082721LL;

    t49 = (x201^((x202<=x203)%x204));

    if (t49 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x205 = UINT32_MAX;
	int16_t x206 = 2832;
	static int8_t x207 = INT8_MAX;
	volatile uint32_t t50 = UINT32_MAX;

    t50 = (x205^((x206<=x207)%x208));

    if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x210 = -1LL;
	uint32_t x211 = UINT32_MAX;
	int64_t x212 = INT64_MAX;
	volatile int64_t t51 = -341235440703506166LL;

    t51 = (x209^((x210<=x211)%x212));

    if (t51 != -2147483647LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = 1;
	volatile uint32_t x214 = 9279487U;
	static int32_t x215 = -1;
	int32_t x216 = -6542;
	volatile int32_t t52 = 1380;

    t52 = (x213^((x214<=x215)%x216));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x217 = INT16_MIN;
	int64_t x218 = INT64_MIN;
	int32_t x219 = INT32_MAX;
	uint8_t x220 = 80U;
	int32_t t53 = -250;

    t53 = (x217^((x218<=x219)%x220));

    if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x221 = 1474U;
	static int64_t x222 = INT64_MAX;
	int32_t x223 = INT32_MAX;
	int16_t x224 = -251;

    t54 = (x221^((x222<=x223)%x224));

    if (t54 != 1474) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x225 = -1LL;
	uint16_t x227 = 2031U;
	int16_t x228 = 80;
	int64_t t55 = 258590365109410LL;

    t55 = (x225^((x226<=x227)%x228));

    if (t55 != -2LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x229 = INT8_MIN;
	static volatile int16_t x230 = -1;
	uint8_t x231 = UINT8_MAX;
	volatile int32_t t56 = -1;

    t56 = (x229^((x230<=x231)%x232));

    if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x233 = UINT8_MAX;
	uint16_t x234 = 10U;
	uint16_t x235 = UINT16_MAX;
	volatile int64_t x236 = INT64_MIN;

    t57 = (x233^((x234<=x235)%x236));

    if (t57 != 254LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = 0LL;
	uint32_t x238 = 9822986U;
	int16_t x240 = -1;
	int64_t t58 = 5LL;

    t58 = (x237^((x238<=x239)%x240));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x241 = INT64_MIN;
	int32_t x242 = 402;
	int32_t x243 = INT32_MIN;
	int16_t x244 = -1;

    t59 = (x241^((x242<=x243)%x244));

    if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x245 = 13608395245392LLU;
	uint64_t x246 = 1341639LLU;
	static uint32_t x247 = 753878U;
	int16_t x248 = -1;
	uint64_t t60 = 31738541388909732LLU;

    t60 = (x245^((x246<=x247)%x248));

    if (t60 != 13608395245392LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = -2182074355242LL;
	uint8_t x250 = 20U;
	int32_t x251 = INT32_MAX;
	int32_t x252 = INT32_MIN;
	volatile int64_t t61 = 6915061LL;

    t61 = (x249^((x250<=x251)%x252));

    if (t61 != -2182074355241LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x253 = UINT8_MAX;
	int8_t x254 = INT8_MIN;
	uint32_t x255 = 281U;
	uint32_t x256 = 255U;
	volatile uint32_t t62 = 0U;

    t62 = (x253^((x254<=x255)%x256));

    if (t62 != 255U) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x258 = -7;
	int16_t x259 = -3;
	static uint32_t x260 = UINT32_MAX;
	volatile uint32_t t63 = 104151U;

    t63 = (x257^((x258<=x259)%x260));

    if (t63 != 65534U) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x261 = 337;
	uint16_t x262 = 1U;
	int16_t x264 = INT16_MIN;
	static int32_t t64 = 102592255;

    t64 = (x261^((x262<=x263)%x264));

    if (t64 != 336) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x265 = INT16_MAX;
	static uint32_t x266 = 30557120U;
	int64_t x267 = -62510909LL;
	int16_t x268 = INT16_MIN;
	int32_t t65 = -11550690;

    t65 = (x265^((x266<=x267)%x268));

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x269 = 1U;
	int8_t x270 = 4;
	int32_t x271 = 19427;
	static int32_t x272 = -2757;
	volatile int32_t t66 = -58768;

    t66 = (x269^((x270<=x271)%x272));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x275 = 462991897754LLU;
	static int64_t x276 = 1358932075561273LL;
	volatile int64_t t67 = INT64_MIN;

    t67 = (x273^((x274<=x275)%x276));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x277 = UINT16_MAX;
	int8_t x278 = 0;
	int8_t x279 = INT8_MIN;
	int32_t x280 = -1;

    t68 = (x277^((x278<=x279)%x280));

    if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x281 = INT64_MIN;
	int8_t x282 = -3;
	int32_t x283 = INT32_MIN;
	static int64_t t69 = INT64_MIN;

    t69 = (x281^((x282<=x283)%x284));

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x285 = UINT16_MAX;
	volatile uint32_t x286 = 29162941U;
	int32_t x287 = 8674526;
	uint16_t x288 = UINT16_MAX;
	int32_t t70 = -92;

    t70 = (x285^((x286<=x287)%x288));

    if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int16_t x289 = 1;
	uint64_t x290 = 6897953846562LLU;
	int8_t x291 = -36;
	volatile int8_t x292 = INT8_MIN;
	volatile int32_t t71 = 103054680;

    t71 = (x289^((x290<=x291)%x292));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x294 = 3;
	volatile int64_t x295 = 2833724444040LL;
	volatile int64_t x296 = -1LL;
	int64_t t72 = -62LL;

    t72 = (x293^((x294<=x295)%x296));

    if (t72 != 1282940LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x297 = 213611571;
	volatile int8_t x298 = INT8_MAX;
	int32_t x299 = INT32_MIN;
	int8_t x300 = INT8_MIN;
	static volatile int32_t t73 = -1451753;

    t73 = (x297^((x298<=x299)%x300));

    if (t73 != 213611571) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x301 = 0U;
	uint32_t x302 = 772891421U;
	int32_t x303 = INT32_MIN;
	int32_t x304 = INT32_MIN;
	volatile int32_t t74 = -643236;

    t74 = (x301^((x302<=x303)%x304));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x305 = 11U;
	uint16_t x306 = UINT16_MAX;
	uint16_t x307 = 1066U;
	uint32_t x308 = 111527U;

    t75 = (x305^((x306<=x307)%x308));

    if (t75 != 11U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x309 = -4;
	int16_t x310 = INT16_MAX;
	static uint64_t x312 = UINT64_MAX;

    t76 = (x309^((x310<=x311)%x312));

    if (t76 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x317 = INT8_MIN;
	int64_t x318 = -1LL;
	uint64_t x319 = 9LLU;
	int32_t x320 = INT32_MAX;
	int32_t t77 = 17311271;

    t77 = (x317^((x318<=x319)%x320));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x322 = 28LLU;
	volatile int8_t x323 = INT8_MIN;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t78 = -4;

    t78 = (x321^((x322<=x323)%x324));

    if (t78 != 16343) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x325 = 612923U;
	int8_t x326 = 1;
	static int8_t x327 = INT8_MIN;
	static int32_t x328 = 727281031;
	static volatile uint32_t t79 = 188U;

    t79 = (x325^((x326<=x327)%x328));

    if (t79 != 612923U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x329 = 29;
	int64_t x330 = -1LL;
	volatile int16_t x331 = INT16_MIN;
	int32_t x332 = INT32_MIN;
	int32_t t80 = -1169229;

    t80 = (x329^((x330<=x331)%x332));

    if (t80 != 29) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x333 = -11555;
	int32_t x334 = INT32_MIN;
	volatile int32_t x335 = 18973;
	int32_t x336 = -1;
	int32_t t81 = -23;

    t81 = (x333^((x334<=x335)%x336));

    if (t81 != -11555) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x338 = 92LLU;
	static uint64_t x339 = 1928339460LLU;
	static int32_t x340 = INT32_MIN;

    t82 = (x337^((x338<=x339)%x340));

    if (t82 != 44) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x341 = INT32_MAX;
	int16_t x342 = 1;
	int8_t x343 = 0;
	static int64_t x344 = INT64_MAX;

    t83 = (x341^((x342<=x343)%x344));

    if (t83 != 2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x347 = 39U;
	int8_t x348 = INT8_MAX;
	volatile int32_t t84 = 1268;

    t84 = (x345^((x346<=x347)%x348));

    if (t84 != 32766) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x349 = -1;
	int32_t x350 = INT32_MIN;
	int16_t x351 = -1;
	int16_t x352 = -1;
	volatile int32_t t85 = -139;

    t85 = (x349^((x350<=x351)%x352));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x353 = 947835034464757235LL;
	int8_t x354 = INT8_MIN;
	int64_t x355 = -1LL;
	int16_t x356 = INT16_MAX;
	static int64_t t86 = -931263776LL;

    t86 = (x353^((x354<=x355)%x356));

    if (t86 != 947835034464757234LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x357 = -26;
	static int32_t x358 = INT32_MIN;
	uint16_t x359 = UINT16_MAX;
	volatile uint64_t x360 = UINT64_MAX;
	uint64_t t87 = 418439219523504LLU;

    t87 = (x357^((x358<=x359)%x360));

    if (t87 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x361 = INT16_MIN;
	uint32_t x363 = 74U;
	int8_t x364 = INT8_MIN;
	int32_t t88 = -2;

    t88 = (x361^((x362<=x363)%x364));

    if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x365 = -1;
	uint16_t x366 = 497U;
	int64_t x368 = 1049661578LL;
	int64_t t89 = 1301LL;

    t89 = (x365^((x366<=x367)%x368));

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x369 = 42U;
	int8_t x371 = -1;
	uint16_t x372 = 1666U;
	int32_t t90 = 122320;

    t90 = (x369^((x370<=x371)%x372));

    if (t90 != 42) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x373 = 1LLU;
	int32_t x374 = INT32_MAX;
	volatile int16_t x375 = INT16_MIN;
	volatile int16_t x376 = -1;

    t91 = (x373^((x374<=x375)%x376));

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x377 = 17U;
	static volatile int32_t x378 = 32581;
	int8_t x379 = INT8_MIN;
	int16_t x380 = -225;

    t92 = (x377^((x378<=x379)%x380));

    if (t92 != 17) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x381 = UINT64_MAX;
	int16_t x382 = INT16_MIN;
	static volatile int32_t x384 = -2;
	volatile uint64_t t93 = UINT64_MAX;

    t93 = (x381^((x382<=x383)%x384));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x385 = -1;
	int8_t x386 = INT8_MIN;
	uint32_t x387 = 69U;
	uint64_t x388 = 9530994873LLU;
	uint64_t t94 = UINT64_MAX;

    t94 = (x385^((x386<=x387)%x388));

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x389 = UINT16_MAX;
	int64_t x391 = -1LL;
	volatile int32_t t95 = 231761579;

    t95 = (x389^((x390<=x391)%x392));

    if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int32_t x393 = INT32_MIN;
	int64_t x394 = INT64_MIN;
	static volatile uint8_t x395 = 2U;
	uint64_t x396 = 35608017LLU;
	static volatile uint64_t t96 = 9271363LLU;

    t96 = (x393^((x394<=x395)%x396));

    if (t96 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x397 = INT64_MAX;
	static int32_t x398 = -1;
	int64_t t97 = 947661449LL;

    t97 = (x397^((x398<=x399)%x400));

    if (t97 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint32_t x403 = 7U;

    t98 = (x401^((x402<=x403)%x404));

    if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x405 = 17U;
	volatile int64_t x406 = INT64_MIN;
	int8_t x408 = -1;
	static int32_t t99 = -130420840;

    t99 = (x405^((x406<=x407)%x408));

    if (t99 != 17) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x410 = INT64_MAX;
	static uint64_t x411 = UINT64_MAX;
	int16_t x412 = INT16_MIN;
	int64_t t100 = 119842833000LL;

    t100 = (x409^((x410<=x411)%x412));

    if (t100 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint16_t x413 = 25U;
	uint32_t x415 = 231U;
	int16_t x416 = 10;

    t101 = (x413^((x414<=x415)%x416));

    if (t101 != 25) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x417 = 1U;
	volatile int64_t x418 = 15265414092LL;
	static int16_t x419 = INT16_MIN;
	volatile int32_t x420 = -148;
	uint32_t t102 = 26126U;

    t102 = (x417^((x418<=x419)%x420));

    if (t102 != 1U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x421 = INT64_MIN;
	int32_t x422 = 573414;
	int64_t x423 = INT64_MIN;
	volatile int64_t t103 = INT64_MIN;

    t103 = (x421^((x422<=x423)%x424));

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x425 = INT64_MIN;
	static volatile int8_t x426 = INT8_MIN;
	volatile int32_t x427 = INT32_MIN;
	uint32_t x428 = 3378U;
	int64_t t104 = INT64_MIN;

    t104 = (x425^((x426<=x427)%x428));

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x429 = INT32_MAX;
	uint32_t x430 = UINT32_MAX;
	int32_t x431 = INT32_MIN;

    t105 = (x429^((x430<=x431)%x432));

    if (t105 != 2147483647LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x433 = INT8_MIN;
	int8_t x435 = -51;
	volatile int64_t t106 = -84LL;

    t106 = (x433^((x434<=x435)%x436));

    if (t106 != -128LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x437 = 41;
	int64_t x438 = INT64_MIN;
	int8_t x439 = INT8_MIN;
	int16_t x440 = -1;
	static int32_t t107 = 97570896;

    t107 = (x437^((x438<=x439)%x440));

    if (t107 != 41) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x441 = -14;
	int32_t x443 = -1;
	uint8_t x444 = 1U;
	volatile int32_t t108 = 86647;

    t108 = (x441^((x442<=x443)%x444));

    if (t108 != -14) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x446 = 8;
	int16_t x447 = 1272;
	int32_t t109 = 800;

    t109 = (x445^((x446<=x447)%x448));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x455 = INT8_MAX;
	static int16_t x456 = INT16_MIN;
	static volatile int32_t t110 = -5012252;

    t110 = (x453^((x454<=x455)%x456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x459 = INT32_MIN;
	uint8_t x460 = UINT8_MAX;

    t111 = (x457^((x458<=x459)%x460));

    if (t111 != -2) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x461 = INT32_MAX;
	static uint16_t x462 = 65U;
	uint64_t x463 = 152LLU;
	int64_t t112 = -21448155LL;

    t112 = (x461^((x462<=x463)%x464));

    if (t112 != 2147483646LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x465 = -3;
	uint16_t x466 = UINT16_MAX;
	int64_t x468 = -134369534191LL;
	int64_t t113 = 1096501408970515408LL;

    t113 = (x465^((x466<=x467)%x468));

    if (t113 != -3LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x469 = -1;
	static int32_t x471 = INT32_MIN;
	static int64_t x472 = INT64_MIN;
	int64_t t114 = 8559908680881LL;

    t114 = (x469^((x470<=x471)%x472));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x473 = -1;
	int16_t x474 = INT16_MIN;
	int64_t x476 = -1LL;
	int64_t t115 = -9080241728LL;

    t115 = (x473^((x474<=x475)%x476));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x477 = 415776311U;
	static uint64_t x479 = 338315443360895563LLU;
	volatile uint32_t t116 = 31608U;

    t116 = (x477^((x478<=x479)%x480));

    if (t116 != 415776311U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x481 = 15;
	volatile int32_t x482 = 19375137;
	uint16_t x483 = UINT16_MAX;
	uint16_t x484 = 871U;
	int32_t t117 = -465006293;

    t117 = (x481^((x482<=x483)%x484));

    if (t117 != 15) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x485 = -1;
	int8_t x487 = 1;
	int8_t x488 = 1;
	int32_t t118 = -1;

    t118 = (x485^((x486<=x487)%x488));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x489 = INT16_MIN;
	int64_t x490 = -56544LL;
	static uint16_t x492 = 1U;
	volatile int32_t t119 = -125;

    t119 = (x489^((x490<=x491)%x492));

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x493 = -1;
	volatile int32_t x494 = 1677;
	volatile int8_t x495 = INT8_MIN;
	static uint32_t t120 = UINT32_MAX;

    t120 = (x493^((x494<=x495)%x496));

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x497 = 5U;
	volatile uint8_t x498 = 40U;
	uint64_t x499 = 498164532559575LLU;
	uint8_t x500 = UINT8_MAX;
	int32_t t121 = 1;

    t121 = (x497^((x498<=x499)%x500));

    if (t121 != 4) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x501 = -1;
	int8_t x502 = -1;
	int8_t x503 = INT8_MIN;
	int64_t x504 = -7020889675446LL;
	volatile int64_t t122 = 104623329LL;

    t122 = (x501^((x502<=x503)%x504));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x505 = 1U;
	uint16_t x506 = 11U;
	static int8_t x508 = -1;
	volatile int32_t t123 = 73964;

    t123 = (x505^((x506<=x507)%x508));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x509 = INT64_MIN;
	int32_t x510 = INT32_MAX;
	static int64_t t124 = INT64_MIN;

    t124 = (x509^((x510<=x511)%x512));

    if (t124 != INT64_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x514 = 2U;
	uint32_t x515 = 207U;
	int64_t x516 = INT64_MIN;
	int64_t t125 = 200524100668LL;

    t125 = (x513^((x514<=x515)%x516));

    if (t125 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x517 = INT32_MIN;
	int32_t x518 = -98;
	int32_t x519 = INT32_MIN;
	volatile int64_t t126 = 34941457328087812LL;

    t126 = (x517^((x518<=x519)%x520));

    if (t126 != -2147483648LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x521 = 0U;
	static uint64_t x522 = UINT64_MAX;
	uint16_t x523 = 3362U;
	static volatile int32_t x524 = INT32_MIN;
	volatile int32_t t127 = -3113;

    t127 = (x521^((x522<=x523)%x524));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x526 = INT16_MIN;
	uint64_t x527 = 2276074647199LLU;
	volatile uint64_t x528 = UINT64_MAX;
	volatile uint64_t t128 = 155LLU;

    t128 = (x525^((x526<=x527)%x528));

    if (t128 != 32767LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x529 = UINT8_MAX;
	int16_t x530 = 3949;
	static int64_t x531 = INT64_MAX;
	uint64_t t129 = 54710496LLU;

    t129 = (x529^((x530<=x531)%x532));

    if (t129 != 254LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x533 = -1;
	int8_t x536 = -1;
	int32_t t130 = -598;

    t130 = (x533^((x534<=x535)%x536));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x537 = INT8_MIN;
	uint64_t x538 = 28990481983626LLU;
	volatile uint32_t x539 = UINT32_MAX;
	int64_t x540 = 196449222LL;

    t131 = (x537^((x538<=x539)%x540));

    if (t131 != -128LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x541 = 55;
	int64_t x542 = INT64_MIN;
	uint64_t x543 = 38918LLU;
	static uint32_t x544 = 89U;
	static uint32_t t132 = 1599U;

    t132 = (x541^((x542<=x543)%x544));

    if (t132 != 55U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x545 = 0;
	int32_t x546 = INT32_MIN;
	volatile int32_t x547 = INT32_MIN;
	int16_t x548 = INT16_MIN;
	volatile int32_t t133 = 49688;

    t133 = (x545^((x546<=x547)%x548));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x553 = -1;
	uint32_t x554 = UINT32_MAX;
	int16_t x556 = INT16_MIN;
	static int32_t t134 = 4717;

    t134 = (x553^((x554<=x555)%x556));

    if (t134 != -2) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x557 = 115282395026809719LLU;
	int16_t x558 = INT16_MIN;
	int64_t x559 = INT64_MIN;
	uint64_t x560 = UINT64_MAX;
	uint64_t t135 = 2517950074650549LLU;

    t135 = (x557^((x558<=x559)%x560));

    if (t135 != 115282395026809719LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x562 = -1;
	uint16_t x563 = 29757U;
	int64_t x564 = INT64_MAX;

    t136 = (x561^((x562<=x563)%x564));

    if (t136 != -32767LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x565 = -431LL;
	volatile int64_t x566 = -1LL;
	volatile uint64_t x567 = 24883476041312139LLU;
	volatile int64_t t137 = 11904853659268LL;

    t137 = (x565^((x566<=x567)%x568));

    if (t137 != -431LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x569 = 15;
	static int64_t x570 = INT64_MIN;
	uint8_t x572 = UINT8_MAX;
	int32_t t138 = 1;

    t138 = (x569^((x570<=x571)%x572));

    if (t138 != 14) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x575 = -1297592217LL;
	volatile int32_t x576 = -137;
	uint64_t t139 = 5984095819LLU;

    t139 = (x573^((x574<=x575)%x576));

    if (t139 != 1LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x577 = INT32_MIN;
	int8_t x578 = 0;
	uint32_t x580 = UINT32_MAX;
	volatile uint32_t t140 = 1U;

    t140 = (x577^((x578<=x579)%x580));

    if (t140 != 2147483648U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x581 = 195U;
	int16_t x582 = INT16_MIN;
	int8_t x583 = 1;
	uint8_t x584 = 18U;
	volatile uint32_t t141 = 949675U;

    t141 = (x581^((x582<=x583)%x584));

    if (t141 != 194U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x585 = 144299649;
	int32_t x586 = -7031210;
	int32_t x587 = -1;
	int16_t x588 = INT16_MAX;
	volatile int32_t t142 = 235802;

    t142 = (x585^((x586<=x587)%x588));

    if (t142 != 144299648) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x589 = INT16_MAX;
	uint8_t x590 = UINT8_MAX;
	static int16_t x591 = INT16_MAX;
	static uint64_t x592 = 2210566266935623LLU;
	static uint64_t t143 = 2LLU;

    t143 = (x589^((x590<=x591)%x592));

    if (t143 != 32766LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x595 = 1U;
	volatile int32_t x596 = INT32_MIN;
	int32_t t144 = 7713383;

    t144 = (x593^((x594<=x595)%x596));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x597 = INT8_MAX;
	int32_t x599 = INT32_MIN;
	volatile uint32_t x600 = UINT32_MAX;
	uint32_t t145 = 393U;

    t145 = (x597^((x598<=x599)%x600));

    if (t145 != 127U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x602 = INT16_MIN;
	volatile int32_t x603 = INT32_MIN;
	static int8_t x604 = 17;
	int32_t t146 = 2795;

    t146 = (x601^((x602<=x603)%x604));

    if (t146 != 65535) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x605 = 2U;
	uint32_t x607 = 3U;
	int32_t x608 = -1;
	static volatile int32_t t147 = 253708;

    t147 = (x605^((x606<=x607)%x608));

    if (t147 != 2) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x609 = INT8_MAX;
	int16_t x610 = INT16_MAX;
	volatile int16_t x611 = INT16_MIN;
	int32_t t148 = -873947;

    t148 = (x609^((x610<=x611)%x612));

    if (t148 != 127) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x613 = UINT16_MAX;
	static uint32_t x614 = 7219688U;
	uint64_t x615 = 9LLU;
	int16_t x616 = -8;

    t149 = (x613^((x614<=x615)%x616));

    if (t149 != 65535) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x617 = UINT8_MAX;
	static volatile uint16_t x618 = 164U;
	int64_t x619 = -1LL;
	volatile int64_t x620 = -1LL;

    t150 = (x617^((x618<=x619)%x620));

    if (t150 != 255LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x621 = -1;
	int16_t x623 = INT16_MIN;

    t151 = (x621^((x622<=x623)%x624));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x625 = INT64_MAX;
	int8_t x626 = INT8_MAX;
	int16_t x627 = INT16_MIN;
	static int64_t t152 = INT64_MAX;

    t152 = (x625^((x626<=x627)%x628));

    if (t152 != INT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x629 = -1LL;
	int64_t x630 = 17682077841760LL;
	volatile int16_t x631 = INT16_MIN;
	static volatile uint32_t x632 = 2669U;
	static volatile int64_t t153 = 6999623LL;

    t153 = (x629^((x630<=x631)%x632));

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x634 = 211;
	uint32_t x635 = 11452U;
	uint64_t x636 = 9172949189LLU;
	volatile uint64_t t154 = 3LLU;

    t154 = (x633^((x634<=x635)%x636));

    if (t154 != 18446744072945739405LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x637 = 98LLU;
	int32_t x639 = INT32_MIN;
	static int64_t x640 = 8028LL;
	uint64_t t155 = 34652503981804LLU;

    t155 = (x637^((x638<=x639)%x640));

    if (t155 != 98LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x642 = 5403938866LL;
	volatile uint32_t x643 = 22U;
	uint16_t x644 = UINT16_MAX;
	int64_t t156 = -739408LL;

    t156 = (x641^((x642<=x643)%x644));

    if (t156 != 226538708730451LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x645 = -1;
	uint8_t x647 = 123U;
	int32_t t157 = -1;

    t157 = (x645^((x646<=x647)%x648));

    if (t157 != -2) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x649 = 134U;
	int64_t x650 = INT64_MIN;
	int64_t x652 = INT64_MIN;
	int64_t t158 = 113LL;

    t158 = (x649^((x650<=x651)%x652));

    if (t158 != 135LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x653 = 58U;
	int64_t x654 = INT64_MAX;
	int64_t x655 = -127899826LL;
	int64_t x656 = -163373417230389LL;
	static volatile int64_t t159 = -373138272553LL;

    t159 = (x653^((x654<=x655)%x656));

    if (t159 != 58LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x657 = 26367U;
	int16_t x658 = INT16_MAX;
	int8_t x659 = INT8_MIN;
	static int64_t x660 = 1347927807905894143LL;

    t160 = (x657^((x658<=x659)%x660));

    if (t160 != 26367LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x661 = -4;
	uint64_t x663 = 41487455LLU;
	volatile int32_t t161 = -261206;

    t161 = (x661^((x662<=x663)%x664));

    if (t161 != -3) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x665 = -5;
	int16_t x667 = -19;
	int64_t x668 = INT64_MIN;
	int64_t t162 = -137284525545348973LL;

    t162 = (x665^((x666<=x667)%x668));

    if (t162 != -5LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x669 = INT8_MAX;
	static int32_t x670 = INT32_MIN;
	int16_t x672 = INT16_MIN;
	int32_t t163 = 6301462;

    t163 = (x669^((x670<=x671)%x672));

    if (t163 != 127) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x673 = 8LL;
	uint8_t x674 = 55U;
	int32_t x675 = -30978497;
	int64_t t164 = -188402LL;

    t164 = (x673^((x674<=x675)%x676));

    if (t164 != 8LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x678 = -545;
	static uint64_t x679 = 214535789668065LLU;
	static int8_t x680 = -1;

    t165 = (x677^((x678<=x679)%x680));

    if (t165 != 54) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x681 = INT64_MIN;
	volatile uint64_t x682 = 4628263000348568LLU;
	static int16_t x683 = -4;
	volatile int64_t x684 = INT64_MIN;
	int64_t t166 = -14301LL;

    t166 = (x681^((x682<=x683)%x684));

    if (t166 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x685 = 196U;
	int64_t x686 = INT64_MIN;
	uint8_t x687 = 21U;
	static int32_t x688 = INT32_MIN;
	uint32_t t167 = 8195095U;

    t167 = (x685^((x686<=x687)%x688));

    if (t167 != 197U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x690 = 119U;
	int8_t x691 = INT8_MAX;
	int64_t x692 = INT64_MIN;
	static int64_t t168 = -1046385774876815LL;

    t168 = (x689^((x690<=x691)%x692));

    if (t168 != -550LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x693 = INT32_MIN;
	int64_t x694 = INT64_MIN;
	static volatile int64_t x696 = INT64_MAX;
	volatile int64_t t169 = 61338LL;

    t169 = (x693^((x694<=x695)%x696));

    if (t169 != -2147483647LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint64_t x697 = 184712979556LLU;
	static int8_t x698 = -3;
	int8_t x699 = INT8_MAX;
	volatile int8_t x700 = INT8_MAX;
	volatile uint64_t t170 = 415536051291046LLU;

    t170 = (x697^((x698<=x699)%x700));

    if (t170 != 184712979557LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x701 = INT64_MIN;
	int32_t x702 = INT32_MIN;
	static int16_t x704 = -1;
	volatile int64_t t171 = INT64_MIN;

    t171 = (x701^((x702<=x703)%x704));

    if (t171 != INT64_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x705 = UINT16_MAX;
	int32_t x706 = INT32_MIN;
	uint32_t x707 = 29U;
	int8_t x708 = INT8_MIN;

    t172 = (x705^((x706<=x707)%x708));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x709 = -1LL;
	static int16_t x711 = INT16_MAX;
	int32_t x712 = 17;
	int64_t t173 = -6617015539675790LL;

    t173 = (x709^((x710<=x711)%x712));

    if (t173 != -2LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x713 = INT16_MAX;
	uint32_t x714 = 1740513U;
	int16_t x715 = INT16_MAX;
	int8_t x716 = -50;
	volatile int32_t t174 = -391;

    t174 = (x713^((x714<=x715)%x716));

    if (t174 != 32767) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x717 = -1;
	uint16_t x718 = UINT16_MAX;
	volatile int16_t x719 = 56;
	uint8_t x720 = UINT8_MAX;
	volatile int32_t t175 = 416593;

    t175 = (x717^((x718<=x719)%x720));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x721 = INT8_MAX;
	uint16_t x722 = 6832U;
	uint16_t x723 = 15086U;
	int16_t x724 = INT16_MIN;
	int32_t t176 = 1;

    t176 = (x721^((x722<=x723)%x724));

    if (t176 != 126) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x725 = 183LLU;
	int8_t x726 = -8;
	volatile int16_t x727 = INT16_MIN;
	static uint32_t x728 = 3U;
	static volatile uint64_t t177 = 25295317660LLU;

    t177 = (x725^((x726<=x727)%x728));

    if (t177 != 183LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x729 = 19;
	int8_t x730 = 1;
	int16_t x731 = INT16_MIN;
	volatile int32_t x732 = INT32_MIN;
	int32_t t178 = 48538;

    t178 = (x729^((x730<=x731)%x732));

    if (t178 != 19) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x733 = INT32_MIN;
	int16_t x734 = INT16_MIN;
	volatile int32_t x735 = 11254376;
	int8_t x736 = INT8_MAX;
	static int32_t t179 = 1017;

    t179 = (x733^((x734<=x735)%x736));

    if (t179 != -2147483647) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint8_t x737 = 88U;
	static uint8_t x738 = UINT8_MAX;
	uint16_t x739 = 189U;
	volatile uint32_t x740 = UINT32_MAX;

    t180 = (x737^((x738<=x739)%x740));

    if (t180 != 88U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x742 = 2;
	int16_t x744 = -47;
	volatile int32_t t181 = 678857647;

    t181 = (x741^((x742<=x743)%x744));

    if (t181 != 52) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x745 = -1LL;
	uint32_t x746 = UINT32_MAX;
	int16_t x747 = INT16_MIN;
	volatile int64_t t182 = 142288309551LL;

    t182 = (x745^((x746<=x747)%x748));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x749 = -1LL;
	volatile int64_t t183 = 37648693802LL;

    t183 = (x749^((x750<=x751)%x752));

    if (t183 != -2LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x753 = INT64_MIN;
	int8_t x754 = INT8_MIN;
	static uint32_t x755 = 74517797U;
	int64_t x756 = 60505LL;
	volatile int64_t t184 = INT64_MIN;

    t184 = (x753^((x754<=x755)%x756));

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x757 = -19;
	static volatile int8_t x758 = 3;
	int64_t x759 = -1LL;
	static uint8_t x760 = UINT8_MAX;

    t185 = (x757^((x758<=x759)%x760));

    if (t185 != -19) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x761 = UINT32_MAX;
	volatile int64_t x762 = INT64_MIN;
	volatile uint32_t x763 = 42946U;
	uint32_t x764 = 14401653U;
	static volatile uint32_t t186 = 2483002U;

    t186 = (x761^((x762<=x763)%x764));

    if (t186 != 4294967294U) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x765 = -4;
	int32_t x767 = INT32_MAX;
	volatile int8_t x768 = INT8_MIN;

    t187 = (x765^((x766<=x767)%x768));

    if (t187 != -3) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x769 = -33634252;
	int16_t x770 = -60;
	static volatile int8_t x771 = INT8_MAX;
	int16_t x772 = INT16_MAX;
	static volatile int32_t t188 = -1;

    t188 = (x769^((x770<=x771)%x772));

    if (t188 != -33634251) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x773 = -1;
	volatile int32_t x774 = INT32_MIN;
	static int64_t x775 = INT64_MIN;
	volatile uint64_t x776 = 138852126LLU;
	uint64_t t189 = UINT64_MAX;

    t189 = (x773^((x774<=x775)%x776));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x777 = -37817817063708LL;
	int32_t x778 = INT32_MAX;
	volatile int64_t x779 = INT64_MAX;
	static int32_t x780 = -18;

    t190 = (x777^((x778<=x779)%x780));

    if (t190 != -37817817063707LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x782 = 0;
	int8_t x783 = 0;
	static volatile int64_t t191 = -128460626542291LL;

    t191 = (x781^((x782<=x783)%x784));

    if (t191 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x785 = 13611;
	int32_t t192 = -3368247;

    t192 = (x785^((x786<=x787)%x788));

    if (t192 != 13610) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x789 = 16065;
	int64_t x790 = INT64_MIN;
	int64_t x791 = -1LL;
	uint8_t x792 = 1U;
	int32_t t193 = -60661768;

    t193 = (x789^((x790<=x791)%x792));

    if (t193 != 16065) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x793 = INT64_MIN;
	static int64_t x794 = 4980756749LL;
	int16_t x795 = INT16_MIN;
	static int8_t x796 = -1;

    t194 = (x793^((x794<=x795)%x796));

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t t195 = INT32_MAX;

    t195 = (x797^((x798<=x799)%x800));

    if (t195 != INT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x801 = INT64_MIN;
	uint16_t x802 = UINT16_MAX;
	int16_t x803 = 5;
	static int16_t x804 = INT16_MAX;
	volatile int64_t t196 = INT64_MIN;

    t196 = (x801^((x802<=x803)%x804));

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x805 = 453907LL;
	static uint16_t x806 = UINT16_MAX;
	int32_t x808 = INT32_MIN;
	static volatile int64_t t197 = 166459907728853755LL;

    t197 = (x805^((x806<=x807)%x808));

    if (t197 != 453907LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x810 = UINT16_MAX;
	uint8_t x811 = UINT8_MAX;
	uint32_t x812 = UINT32_MAX;
	volatile uint32_t t198 = 341U;

    t198 = (x809^((x810<=x811)%x812));

    if (t198 != 4294934528U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x813 = 1970U;
	int8_t x814 = -6;
	int16_t x815 = 3640;
	volatile int32_t t199 = 1054750269;

    t199 = (x813^((x814<=x815)%x816));

    if (t199 != 1971) { NG(); } else { ; }
	
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

