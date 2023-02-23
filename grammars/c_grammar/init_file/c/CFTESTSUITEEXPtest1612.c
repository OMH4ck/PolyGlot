
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

volatile int32_t x4 = -1;
volatile int32_t t0 = 1;
int64_t x10 = 5578916424575LL;
uint32_t t2 = UINT32_MAX;
volatile int8_t x18 = INT8_MAX;
uint32_t x21 = 267611076U;
uint32_t x22 = 41411U;
uint16_t x24 = 54U;
int8_t x26 = 0;
uint8_t x28 = 56U;
static volatile int64_t x29 = INT64_MIN;
int16_t x30 = INT16_MAX;
int64_t t7 = INT64_MIN;
uint64_t x35 = 554348885330089533LLU;
static int64_t t8 = INT64_MIN;
int8_t x40 = INT8_MIN;
int16_t x46 = -1;
volatile int32_t t11 = 121900;
int32_t x58 = -1;
int32_t t14 = -643408506;
int32_t x62 = 11619567;
int32_t t17 = -6;
uint8_t x80 = UINT8_MAX;
volatile int8_t x84 = INT8_MIN;
volatile int64_t t20 = 1LL;
static volatile int32_t t21 = -265;
int32_t x90 = INT32_MIN;
static int64_t x91 = INT64_MIN;
int64_t x94 = INT64_MIN;
int32_t x95 = -1;
volatile int32_t x96 = -23286420;
uint8_t x97 = 0U;
int64_t x115 = INT64_MAX;
int32_t x116 = INT32_MAX;
int32_t x125 = INT32_MIN;
static volatile uint64_t x134 = 296225806LLU;
static int64_t x135 = 9517301572025LL;
volatile int16_t x139 = INT16_MIN;
static volatile int16_t x143 = INT16_MIN;
uint64_t t35 = 386925LLU;
int16_t x149 = INT16_MAX;
static volatile uint32_t x155 = 802871399U;
uint8_t x159 = UINT8_MAX;
static int32_t t40 = 46;
static uint16_t x165 = 1985U;
int64_t x167 = INT64_MIN;
uint64_t x172 = 495294LLU;
int64_t x175 = INT64_MIN;
static int64_t x177 = -1LL;
static volatile int32_t t45 = -504;
int8_t x188 = INT8_MIN;
volatile int32_t t48 = 457;
volatile int64_t x204 = 3LL;
int32_t x209 = INT32_MIN;
int16_t x211 = INT16_MIN;
int32_t t50 = INT32_MIN;
int16_t x215 = 1;
volatile int8_t x219 = -7;
static uint32_t x226 = 7348U;
int32_t x228 = INT32_MAX;
int32_t x231 = INT32_MAX;
uint64_t x238 = UINT64_MAX;
int8_t x240 = INT8_MIN;
static volatile uint64_t x242 = 3798093341LLU;
static volatile int8_t x246 = 0;
int64_t x250 = -630234297549108879LL;
volatile int32_t x258 = 1;
volatile int8_t x261 = -1;
uint32_t x262 = 689594U;
int8_t x263 = 7;
uint8_t x264 = 1U;
static volatile int32_t t63 = 297792272;
int16_t x266 = 28;
uint8_t x268 = UINT8_MAX;
uint64_t t65 = 227009028285295133LLU;
static int16_t x273 = INT16_MIN;
volatile int32_t t66 = -172975032;
int16_t x284 = INT16_MAX;
static volatile uint16_t x285 = UINT16_MAX;
int16_t x295 = INT16_MAX;
volatile int64_t t71 = -164830808868305138LL;
uint8_t x297 = 13U;
int8_t x303 = -19;
volatile uint64_t x304 = UINT64_MAX;
static int16_t x312 = -1;
int64_t x314 = INT64_MIN;
volatile uint16_t x321 = UINT16_MAX;
int32_t t79 = INT32_MIN;
int8_t x334 = INT8_MIN;
volatile int32_t t83 = -1;
int32_t x356 = INT32_MIN;
uint64_t x359 = UINT64_MAX;
int8_t x361 = INT8_MIN;
int8_t x366 = INT8_MIN;
int16_t x368 = INT16_MIN;
int8_t x373 = 20;
int8_t x375 = INT8_MIN;
static int8_t x376 = 8;
uint16_t x380 = UINT16_MAX;
int8_t x389 = INT8_MIN;
uint32_t x392 = UINT32_MAX;
volatile uint32_t t97 = 218783U;
static int8_t x407 = -1;
static uint64_t x419 = 108LLU;
int32_t x426 = INT32_MAX;
volatile int64_t x429 = 10LL;
uint64_t x433 = UINT64_MAX;
uint64_t x439 = 4984906LLU;
static int64_t t107 = -10844123975925983LL;
uint8_t x447 = 43U;
int64_t x448 = 1963LL;
static int32_t x453 = -1;
uint32_t x456 = UINT32_MAX;
int32_t x465 = -1;
uint32_t x468 = UINT32_MAX;
static volatile uint32_t x478 = UINT32_MAX;
int16_t x479 = -1;
int32_t t117 = 31476230;
volatile int16_t x496 = -2;
int32_t x501 = 298;
volatile int32_t t122 = 4271;
static int16_t x505 = INT16_MAX;
static uint8_t x512 = 21U;
int8_t x516 = INT8_MIN;
uint32_t t125 = UINT32_MAX;
int8_t x520 = -32;
volatile int32_t t126 = -230;
volatile uint64_t t128 = UINT64_MAX;
int32_t x532 = 67076407;
int64_t t129 = INT64_MIN;
static volatile uint64_t x536 = 4086838818LLU;
int16_t x537 = -1;
int8_t x541 = -12;
int8_t x547 = -1;
volatile int16_t x552 = 38;
volatile int32_t t134 = 148508153;
uint32_t x554 = UINT32_MAX;
volatile uint64_t x570 = 23496664010870677LLU;
uint16_t x573 = UINT16_MAX;
int16_t x576 = -1;
volatile uint8_t x579 = 3U;
int64_t x583 = -1LL;
int16_t x584 = INT16_MIN;
static int32_t x585 = -1;
int32_t t146 = 3;
int32_t x603 = INT32_MAX;
int64_t x605 = INT64_MAX;
int64_t t148 = INT64_MAX;
int32_t x609 = INT32_MIN;
uint32_t x611 = 344U;
int8_t x613 = INT8_MIN;
uint8_t x618 = 0U;
volatile int8_t x639 = -1;
volatile int32_t x642 = -1;
int32_t x644 = INT32_MIN;
int16_t x650 = 3;
static volatile uint32_t x658 = 2473817U;
static int32_t x659 = -1;
volatile int16_t x664 = INT16_MIN;
static int64_t x665 = INT64_MIN;
volatile int64_t t163 = INT64_MIN;
int64_t x673 = 17094LL;
int64_t x681 = INT64_MAX;
volatile int32_t t168 = 949245;
int32_t x692 = INT32_MAX;
uint16_t x696 = 6287U;
uint16_t x699 = 267U;
int8_t x701 = INT8_MIN;
int32_t t173 = -54;
uint64_t x713 = 2125LLU;
volatile int64_t x717 = INT64_MIN;
volatile int32_t x724 = 54379;
int16_t x735 = -3;
static int32_t t180 = -6;
int32_t x741 = -113;
int16_t x742 = 25;
uint32_t x748 = UINT32_MAX;
int32_t x751 = INT32_MIN;
volatile int16_t x752 = INT16_MAX;
int8_t x760 = -8;
static int32_t t185 = -136;
int16_t x763 = INT16_MIN;
static uint16_t x767 = 29U;
static int32_t x773 = -13140067;
volatile uint32_t x775 = 3U;
static int16_t x776 = 2;
int32_t x779 = INT32_MIN;
int64_t t192 = 122530080820LL;
int8_t x803 = INT8_MIN;
volatile int64_t t197 = 27268701445LL;


void f0(void) {
    	volatile uint8_t x1 = UINT8_MAX;
	uint64_t x2 = 1570LLU;
	volatile uint64_t x3 = UINT64_MAX;

    t0 = (x1-((x2>x3)/x4));

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 13509U;
	int32_t x6 = -1;
	volatile uint64_t x7 = 56LLU;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 7015966185520LL;

    t1 = (x5-((x6>x7)/x8));

    if (t1 != 13509LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = UINT32_MAX;
	int8_t x11 = 11;
	static int8_t x12 = INT8_MAX;

    t2 = (x9-((x10>x11)/x12));

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 2820LL;
	int16_t x14 = INT16_MIN;
	volatile uint16_t x15 = UINT16_MAX;
	int8_t x16 = -3;
	volatile int64_t t3 = -407218603075019LL;

    t3 = (x13-((x14>x15)/x16));

    if (t3 != 2820LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 527158;
	static uint32_t x19 = UINT32_MAX;
	uint32_t x20 = UINT32_MAX;
	uint32_t t4 = 8362466U;

    t4 = (x17-((x18>x19)/x20));

    if (t4 != 527158U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x23 = 1685687224709LLU;
	volatile uint32_t t5 = 7U;

    t5 = (x21-((x22>x23)/x24));

    if (t5 != 267611076U) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x25 = INT32_MAX;
	int16_t x27 = INT16_MAX;
	static volatile int32_t t6 = INT32_MAX;

    t6 = (x25-((x26>x27)/x28));

    if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x31 = UINT16_MAX;
	uint16_t x32 = 8161U;

    t7 = (x29-((x30>x31)/x32));

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	int16_t x34 = -1744;
	static int32_t x36 = 115160;

    t8 = (x33-((x34>x35)/x36));

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x37 = 41U;
	int32_t x38 = INT32_MAX;
	static uint8_t x39 = UINT8_MAX;
	int32_t t9 = 15521;

    t9 = (x37-((x38>x39)/x40));

    if (t9 != 41) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = -1;
	volatile int16_t x42 = INT16_MIN;
	uint8_t x43 = 3U;
	int8_t x44 = -53;
	static int32_t t10 = -56443;

    t10 = (x41-((x42>x43)/x44));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	uint32_t x47 = 57U;
	static uint16_t x48 = 568U;

    t11 = (x45-((x46>x47)/x48));

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	volatile int16_t x50 = 1;
	int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 573800468;

    t12 = (x49-((x50>x51)/x52));

    if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = 332293463960357LL;
	static uint64_t x54 = 6660591498LLU;
	int32_t x55 = INT32_MAX;
	static uint16_t x56 = UINT16_MAX;
	volatile int64_t t13 = 3003433870819769LL;

    t13 = (x53-((x54>x55)/x56));

    if (t13 != 332293463960357LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MAX;
	int8_t x59 = INT8_MIN;
	static volatile uint8_t x60 = 61U;

    t14 = (x57-((x58>x59)/x60));

    if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = -601;
	uint32_t x63 = 15U;
	volatile uint32_t x64 = UINT32_MAX;
	uint32_t t15 = 1025U;

    t15 = (x61-((x62>x63)/x64));

    if (t15 != 4294966695U) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -27;
	int64_t x66 = INT64_MAX;
	static volatile int16_t x67 = INT16_MIN;
	uint64_t x68 = 13597667LLU;
	volatile uint64_t t16 = 104LLU;

    t16 = (x65-((x66>x67)/x68));

    if (t16 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = -1;
	volatile int32_t x70 = -1;
	uint16_t x71 = 5923U;
	int32_t x72 = INT32_MIN;

    t17 = (x69-((x70>x71)/x72));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x73 = UINT64_MAX;
	int32_t x74 = 1;
	uint8_t x75 = 90U;
	int32_t x76 = INT32_MAX;
	static uint64_t t18 = UINT64_MAX;

    t18 = (x73-((x74>x75)/x76));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	int16_t x78 = -1;
	int16_t x79 = INT16_MIN;
	int64_t t19 = 508275279431LL;

    t19 = (x77-((x78>x79)/x80));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = 150499923112834LL;
	volatile uint64_t x82 = UINT64_MAX;
	uint64_t x83 = UINT64_MAX;

    t20 = (x81-((x82>x83)/x84));

    if (t20 != 150499923112834LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = -1;
	uint8_t x86 = UINT8_MAX;
	uint8_t x87 = UINT8_MAX;
	volatile uint8_t x88 = UINT8_MAX;

    t21 = (x85-((x86>x87)/x88));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -7;
	int8_t x92 = -1;
	volatile int32_t t22 = -404136533;

    t22 = (x89-((x90>x91)/x92));

    if (t22 != -6) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = INT32_MIN;
	static int32_t t23 = INT32_MIN;

    t23 = (x93-((x94>x95)/x96));

    if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = -643;
	uint32_t x99 = 2285000U;
	static int32_t x100 = -1;
	static int32_t t24 = -31;

    t24 = (x97-((x98>x99)/x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 0U;
	int8_t x102 = INT8_MAX;
	static volatile int8_t x103 = INT8_MIN;
	static int32_t x104 = INT32_MIN;
	volatile int32_t t25 = -448845;

    t25 = (x101-((x102>x103)/x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = INT8_MAX;
	volatile uint32_t x106 = 12835539U;
	static int64_t x107 = INT64_MIN;
	int8_t x108 = INT8_MIN;
	int32_t t26 = 106605126;

    t26 = (x105-((x106>x107)/x108));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x109 = UINT8_MAX;
	volatile uint16_t x110 = UINT16_MAX;
	int32_t x111 = -214;
	uint64_t x112 = 51915683525LLU;
	static uint64_t t27 = 792LLU;

    t27 = (x109-((x110>x111)/x112));

    if (t27 != 255LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	uint16_t x114 = 2U;
	static int64_t t28 = INT64_MIN;

    t28 = (x113-((x114>x115)/x116));

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = 0;
	static int8_t x118 = INT8_MIN;
	uint16_t x119 = UINT16_MAX;
	uint8_t x120 = 44U;
	volatile int32_t t29 = 29878617;

    t29 = (x117-((x118>x119)/x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = 31LL;
	volatile uint64_t x122 = UINT64_MAX;
	int8_t x123 = INT8_MIN;
	int64_t x124 = INT64_MIN;
	int64_t t30 = -199936802901931LL;

    t30 = (x121-((x122>x123)/x124));

    if (t30 != 31LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = INT16_MIN;
	uint32_t x127 = UINT32_MAX;
	int64_t x128 = INT64_MAX;
	static int64_t t31 = 258767138LL;

    t31 = (x125-((x126>x127)/x128));

    if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = INT8_MIN;
	uint16_t x130 = 9U;
	int32_t x131 = INT32_MIN;
	static uint8_t x132 = 5U;
	volatile int32_t t32 = 1064;

    t32 = (x129-((x130>x131)/x132));

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 2491U;
	int32_t x136 = INT32_MAX;
	volatile uint32_t t33 = 500017787U;

    t33 = (x133-((x134>x135)/x136));

    if (t33 != 2491U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = -3;
	int64_t x138 = -58293LL;
	static int16_t x140 = -1;
	static volatile int32_t t34 = 811;

    t34 = (x137-((x138>x139)/x140));

    if (t34 != -3) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 19808474126LLU;
	int64_t x142 = INT64_MIN;
	static uint16_t x144 = 2383U;

    t35 = (x141-((x142>x143)/x144));

    if (t35 != 19808474126LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = INT16_MIN;
	int32_t x146 = INT32_MIN;
	volatile int16_t x147 = INT16_MIN;
	static int16_t x148 = 3;
	int32_t t36 = 1546366;

    t36 = (x145-((x146>x147)/x148));

    if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x150 = 1441983047U;
	volatile uint32_t x151 = 3U;
	volatile int8_t x152 = 1;
	volatile int32_t t37 = -6021;

    t37 = (x149-((x150>x151)/x152));

    if (t37 != 32766) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = INT64_MIN;
	int32_t x154 = -1;
	int32_t x156 = -1;
	static int64_t t38 = 1741304550826LL;

    t38 = (x153-((x154>x155)/x156));

    if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int64_t x157 = INT64_MAX;
	uint16_t x158 = 28U;
	static int64_t x160 = -1LL;
	int64_t t39 = INT64_MAX;

    t39 = (x157-((x158>x159)/x160));

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 0U;
	int64_t x162 = -1LL;
	int8_t x163 = INT8_MIN;
	volatile int8_t x164 = -49;

    t40 = (x161-((x162>x163)/x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x166 = -1;
	int8_t x168 = -1;
	int32_t t41 = 82523;

    t41 = (x165-((x166>x167)/x168));

    if (t41 != 1986) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x169 = INT8_MIN;
	static volatile int32_t x170 = -798597;
	int16_t x171 = -1;
	uint64_t t42 = 1LLU;

    t42 = (x169-((x170>x171)/x172));

    if (t42 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 1039559229U;
	uint32_t x174 = 881U;
	int8_t x176 = INT8_MIN;
	uint32_t t43 = 359U;

    t43 = (x173-((x174>x175)/x176));

    if (t43 != 1039559229U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x178 = INT8_MIN;
	uint16_t x179 = 4744U;
	static volatile int32_t x180 = INT32_MAX;
	volatile int64_t t44 = -4532857833619LL;

    t44 = (x177-((x178>x179)/x180));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	volatile int64_t x182 = 234683220064820840LL;
	int32_t x183 = -1;
	int16_t x184 = INT16_MIN;

    t45 = (x181-((x182>x183)/x184));

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x185 = 65U;
	static int16_t x186 = INT16_MAX;
	int16_t x187 = INT16_MIN;
	int32_t t46 = -964;

    t46 = (x185-((x186>x187)/x188));

    if (t46 != 65) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x193 = 8LLU;
	volatile uint16_t x194 = 1U;
	static int64_t x195 = -1152853567627890415LL;
	int16_t x196 = INT16_MIN;
	static volatile uint64_t t47 = 161076328317LLU;

    t47 = (x193-((x194>x195)/x196));

    if (t47 != 8LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x197 = 6U;
	static volatile int8_t x198 = INT8_MAX;
	static int32_t x199 = -1;
	uint16_t x200 = UINT16_MAX;

    t48 = (x197-((x198>x199)/x200));

    if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x201 = INT8_MIN;
	static int32_t x202 = 0;
	int8_t x203 = INT8_MIN;
	int64_t t49 = 3LL;

    t49 = (x201-((x202>x203)/x204));

    if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x210 = UINT64_MAX;
	int16_t x212 = INT16_MAX;

    t50 = (x209-((x210>x211)/x212));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x213 = UINT64_MAX;
	volatile int64_t x214 = INT64_MIN;
	int8_t x216 = INT8_MIN;
	static volatile uint64_t t51 = UINT64_MAX;

    t51 = (x213-((x214>x215)/x216));

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x217 = 6U;
	int8_t x218 = 1;
	int64_t x220 = INT64_MAX;
	int64_t t52 = -819LL;

    t52 = (x217-((x218>x219)/x220));

    if (t52 != 6LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = INT16_MIN;
	volatile int64_t x222 = 57226LL;
	volatile int64_t x223 = 11133916222784LL;
	static int32_t x224 = -1;
	int32_t t53 = 1;

    t53 = (x221-((x222>x223)/x224));

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x225 = INT64_MAX;
	volatile int16_t x227 = -1;
	static int64_t t54 = INT64_MAX;

    t54 = (x225-((x226>x227)/x228));

    if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x229 = INT16_MIN;
	uint8_t x230 = 1U;
	int16_t x232 = 4927;
	volatile int32_t t55 = -229276501;

    t55 = (x229-((x230>x231)/x232));

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x233 = 15750LLU;
	int16_t x234 = -3;
	uint32_t x235 = 49870781U;
	static uint32_t x236 = UINT32_MAX;
	static uint64_t t56 = 82305715563LLU;

    t56 = (x233-((x234>x235)/x236));

    if (t56 != 15750LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x237 = 118939482592389LLU;
	uint32_t x239 = UINT32_MAX;
	uint64_t t57 = 25498084814LLU;

    t57 = (x237-((x238>x239)/x240));

    if (t57 != 118939482592389LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x241 = -1;
	volatile int8_t x243 = INT8_MAX;
	volatile int8_t x244 = INT8_MIN;
	int32_t t58 = 850;

    t58 = (x241-((x242>x243)/x244));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x245 = -1;
	int64_t x247 = INT64_MAX;
	uint16_t x248 = 4U;
	int32_t t59 = -1;

    t59 = (x245-((x246>x247)/x248));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x249 = 46U;
	int8_t x251 = INT8_MIN;
	uint16_t x252 = 12U;
	static volatile int32_t t60 = -48355;

    t60 = (x249-((x250>x251)/x252));

    if (t60 != 46) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = -7983;
	static int32_t x254 = INT32_MIN;
	static int64_t x255 = -1LL;
	volatile uint8_t x256 = 18U;
	volatile int32_t t61 = 227205856;

    t61 = (x253-((x254>x255)/x256));

    if (t61 != -7983) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x257 = UINT64_MAX;
	int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MIN;
	static uint64_t t62 = UINT64_MAX;

    t62 = (x257-((x258>x259)/x260));

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    

    t63 = (x261-((x262>x263)/x264));

    if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x265 = -1;
	volatile uint64_t x267 = 3LLU;
	volatile int32_t t64 = -22700179;

    t64 = (x265-((x266>x267)/x268));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x269 = 64U;
	int16_t x270 = INT16_MAX;
	uint8_t x271 = 2U;
	uint64_t x272 = 166963LLU;

    t65 = (x269-((x270>x271)/x272));

    if (t65 != 64LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x274 = -1;
	static uint32_t x275 = UINT32_MAX;
	int8_t x276 = INT8_MIN;

    t66 = (x273-((x274>x275)/x276));

    if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x277 = INT64_MIN;
	int8_t x278 = 1;
	static int64_t x279 = -1276098175064681LL;
	int32_t x280 = 9;
	static int64_t t67 = INT64_MIN;

    t67 = (x277-((x278>x279)/x280));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x281 = -1;
	static uint32_t x282 = UINT32_MAX;
	int8_t x283 = -1;
	int32_t t68 = -44;

    t68 = (x281-((x282>x283)/x284));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x286 = UINT16_MAX;
	int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MIN;
	volatile int64_t t69 = 3LL;

    t69 = (x285-((x286>x287)/x288));

    if (t69 != 65535LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x289 = 3U;
	uint16_t x290 = 2600U;
	volatile int16_t x291 = INT16_MAX;
	uint16_t x292 = 960U;
	int32_t t70 = -84834;

    t70 = (x289-((x290>x291)/x292));

    if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x293 = 1745185998LL;
	int16_t x294 = INT16_MIN;
	int8_t x296 = INT8_MIN;

    t71 = (x293-((x294>x295)/x296));

    if (t71 != 1745185998LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x298 = UINT64_MAX;
	int32_t x299 = 793089;
	int64_t x300 = INT64_MIN;
	volatile int64_t t72 = 19624444451609603LL;

    t72 = (x297-((x298>x299)/x300));

    if (t72 != 13LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x301 = INT64_MIN;
	int16_t x302 = -1;
	volatile uint64_t t73 = 12628330025LLU;

    t73 = (x301-((x302>x303)/x304));

    if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x305 = UINT16_MAX;
	static int16_t x306 = -1;
	int8_t x307 = INT8_MIN;
	int64_t x308 = -1485565196514LL;
	volatile int64_t t74 = 19LL;

    t74 = (x305-((x306>x307)/x308));

    if (t74 != 65535LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x309 = UINT16_MAX;
	int8_t x310 = INT8_MAX;
	int32_t x311 = -1;
	volatile int32_t t75 = -835954;

    t75 = (x309-((x310>x311)/x312));

    if (t75 != 65536) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x313 = INT32_MIN;
	uint32_t x315 = 4790581U;
	int64_t x316 = INT64_MIN;
	static int64_t t76 = 23LL;

    t76 = (x313-((x314>x315)/x316));

    if (t76 != -2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x317 = 0;
	int32_t x318 = INT32_MAX;
	volatile uint64_t x319 = 62044LLU;
	static int32_t x320 = INT32_MIN;
	volatile int32_t t77 = 11;

    t77 = (x317-((x318>x319)/x320));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x322 = -1;
	int64_t x323 = -8107676702699LL;
	static int8_t x324 = INT8_MIN;
	volatile int32_t t78 = 172467047;

    t78 = (x321-((x322>x323)/x324));

    if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MAX;
	int16_t x328 = -1;

    t79 = (x325-((x326>x327)/x328));

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MIN;
	volatile int64_t x331 = -1LL;
	volatile int8_t x332 = 3;
	volatile int32_t t80 = 78381938;

    t80 = (x329-((x330>x331)/x332));

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x333 = 76U;
	int32_t x335 = 285;
	uint32_t x336 = 11U;
	volatile uint32_t t81 = 13373076U;

    t81 = (x333-((x334>x335)/x336));

    if (t81 != 76U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x337 = 0;
	volatile uint8_t x338 = 1U;
	uint32_t x339 = 6370482U;
	int32_t x340 = -10784083;
	volatile int32_t t82 = -1653242;

    t82 = (x337-((x338>x339)/x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x341 = -1;
	int64_t x342 = INT64_MAX;
	volatile int32_t x343 = INT32_MAX;
	int8_t x344 = -38;

    t83 = (x341-((x342>x343)/x344));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x345 = -1843;
	volatile int32_t x346 = INT32_MAX;
	static uint8_t x347 = 13U;
	static int64_t x348 = INT64_MIN;
	int64_t t84 = -38914633040817LL;

    t84 = (x345-((x346>x347)/x348));

    if (t84 != -1843LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x349 = 3;
	uint32_t x350 = 253U;
	volatile int16_t x351 = INT16_MIN;
	int32_t x352 = INT32_MIN;
	static int32_t t85 = 12019088;

    t85 = (x349-((x350>x351)/x352));

    if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x353 = 0;
	int32_t x354 = INT32_MIN;
	int8_t x355 = 20;
	volatile int32_t t86 = -9313652;

    t86 = (x353-((x354>x355)/x356));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x357 = 167120U;
	uint32_t x358 = UINT32_MAX;
	static int64_t x360 = -1LL;
	volatile int64_t t87 = -1375445438556976529LL;

    t87 = (x357-((x358>x359)/x360));

    if (t87 != 167120LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x362 = 744943932;
	volatile int8_t x363 = INT8_MIN;
	static uint16_t x364 = 1635U;
	int32_t t88 = 0;

    t88 = (x361-((x362>x363)/x364));

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x365 = INT8_MIN;
	int8_t x367 = -1;
	int32_t t89 = -48943979;

    t89 = (x365-((x366>x367)/x368));

    if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x369 = INT32_MIN;
	static uint64_t x370 = UINT64_MAX;
	int64_t x371 = INT64_MIN;
	uint32_t x372 = 8862U;
	uint32_t t90 = 6U;

    t90 = (x369-((x370>x371)/x372));

    if (t90 != 2147483648U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x374 = 1978787218909977LL;
	static int32_t t91 = -532958;

    t91 = (x373-((x374>x375)/x376));

    if (t91 != 20) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x377 = INT64_MIN;
	int32_t x378 = 422152651;
	int64_t x379 = -161LL;
	volatile int64_t t92 = INT64_MIN;

    t92 = (x377-((x378>x379)/x380));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x381 = -1LL;
	int16_t x382 = -5605;
	static int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MAX;
	volatile int64_t t93 = 287029474689395839LL;

    t93 = (x381-((x382>x383)/x384));

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x385 = 89U;
	uint8_t x386 = 27U;
	static int16_t x387 = INT16_MIN;
	int16_t x388 = -7639;
	int32_t t94 = 1;

    t94 = (x385-((x386>x387)/x388));

    if (t94 != 89) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x390 = UINT32_MAX;
	int32_t x391 = 0;
	volatile uint32_t t95 = 1679U;

    t95 = (x389-((x390>x391)/x392));

    if (t95 != 4294967168U) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = INT8_MIN;
	static volatile int32_t x394 = -1;
	volatile int8_t x395 = INT8_MAX;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t96 = 675875;

    t96 = (x393-((x394>x395)/x396));

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x397 = 61491195U;
	volatile int64_t x398 = INT64_MIN;
	int16_t x399 = 0;
	int32_t x400 = 148014;

    t97 = (x397-((x398>x399)/x400));

    if (t97 != 61491195U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x401 = 434943U;
	int32_t x402 = INT32_MIN;
	int64_t x403 = 90368924868874LL;
	uint16_t x404 = 568U;
	static uint32_t t98 = 25833U;

    t98 = (x401-((x402>x403)/x404));

    if (t98 != 434943U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x405 = 9U;
	int64_t x406 = INT64_MIN;
	int64_t x408 = INT64_MIN;
	volatile int64_t t99 = -91715613LL;

    t99 = (x405-((x406>x407)/x408));

    if (t99 != 9LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x409 = UINT16_MAX;
	volatile uint64_t x410 = 1368152129565826255LLU;
	int8_t x411 = 20;
	int8_t x412 = INT8_MAX;
	static volatile int32_t t100 = -610232;

    t100 = (x409-((x410>x411)/x412));

    if (t100 != 65535) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x413 = -31;
	uint64_t x414 = 16LLU;
	int8_t x415 = 14;
	uint32_t x416 = UINT32_MAX;
	static volatile uint32_t t101 = 1U;

    t101 = (x413-((x414>x415)/x416));

    if (t101 != 4294967265U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x417 = 6U;
	int8_t x418 = INT8_MIN;
	static volatile int16_t x420 = INT16_MAX;
	volatile int32_t t102 = -2;

    t102 = (x417-((x418>x419)/x420));

    if (t102 != 6) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x421 = INT16_MAX;
	int32_t x422 = INT32_MAX;
	int32_t x423 = -19;
	int16_t x424 = INT16_MIN;
	static volatile int32_t t103 = -2;

    t103 = (x421-((x422>x423)/x424));

    if (t103 != 32767) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x425 = 3U;
	volatile int8_t x427 = 0;
	int8_t x428 = INT8_MAX;
	static int32_t t104 = 4689;

    t104 = (x425-((x426>x427)/x428));

    if (t104 != 3) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x430 = 4200056796056LL;
	volatile int8_t x431 = INT8_MIN;
	int32_t x432 = 435256;
	int64_t t105 = -3059277LL;

    t105 = (x429-((x430>x431)/x432));

    if (t105 != 10LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x434 = INT64_MIN;
	int64_t x435 = 3150763138554116487LL;
	static uint8_t x436 = 1U;
	volatile uint64_t t106 = UINT64_MAX;

    t106 = (x433-((x434>x435)/x436));

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x437 = -41;
	int16_t x438 = INT16_MIN;
	static int64_t x440 = -120563725LL;

    t107 = (x437-((x438>x439)/x440));

    if (t107 != -41LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x441 = INT16_MAX;
	static uint64_t x442 = UINT64_MAX;
	uint32_t x443 = UINT32_MAX;
	int8_t x444 = -1;
	int32_t t108 = 587564325;

    t108 = (x441-((x442>x443)/x444));

    if (t108 != 32768) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x445 = INT32_MAX;
	static volatile uint16_t x446 = 289U;
	volatile int64_t t109 = 67692LL;

    t109 = (x445-((x446>x447)/x448));

    if (t109 != 2147483647LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x449 = 0U;
	static int8_t x450 = INT8_MIN;
	int8_t x451 = INT8_MIN;
	volatile int8_t x452 = INT8_MAX;
	volatile int32_t t110 = -1134750;

    t110 = (x449-((x450>x451)/x452));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x454 = INT32_MIN;
	volatile int8_t x455 = -1;
	uint32_t t111 = UINT32_MAX;

    t111 = (x453-((x454>x455)/x456));

    if (t111 != UINT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x457 = 512184515894LLU;
	int8_t x458 = INT8_MIN;
	volatile int8_t x459 = INT8_MIN;
	static uint8_t x460 = 1U;
	uint64_t t112 = 24164127367021331LLU;

    t112 = (x457-((x458>x459)/x460));

    if (t112 != 512184515894LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x461 = 78;
	uint16_t x462 = 1U;
	uint16_t x463 = UINT16_MAX;
	int16_t x464 = INT16_MIN;
	int32_t t113 = -21;

    t113 = (x461-((x462>x463)/x464));

    if (t113 != 78) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x466 = 2547U;
	int8_t x467 = -1;
	uint32_t t114 = UINT32_MAX;

    t114 = (x465-((x466>x467)/x468));

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x469 = 1297315569159LLU;
	uint64_t x470 = 5722LLU;
	static volatile int16_t x471 = -5753;
	int64_t x472 = INT64_MIN;
	static volatile uint64_t t115 = 9343LLU;

    t115 = (x469-((x470>x471)/x472));

    if (t115 != 1297315569159LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x477 = -47474LL;
	int16_t x480 = INT16_MIN;
	static int64_t t116 = -7404530955365LL;

    t116 = (x477-((x478>x479)/x480));

    if (t116 != -47474LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x481 = 4050;
	static int64_t x482 = INT64_MAX;
	int64_t x483 = -1LL;
	uint8_t x484 = 1U;

    t117 = (x481-((x482>x483)/x484));

    if (t117 != 4049) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x485 = UINT64_MAX;
	uint32_t x486 = 332540U;
	uint8_t x487 = 2U;
	volatile int16_t x488 = 39;
	static volatile uint64_t t118 = UINT64_MAX;

    t118 = (x485-((x486>x487)/x488));

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x489 = 3855U;
	int64_t x490 = -940LL;
	volatile int32_t x491 = INT32_MAX;
	int16_t x492 = INT16_MAX;
	uint32_t t119 = 620444U;

    t119 = (x489-((x490>x491)/x492));

    if (t119 != 3855U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x493 = INT32_MIN;
	uint8_t x494 = 46U;
	static int8_t x495 = -12;
	volatile int32_t t120 = INT32_MIN;

    t120 = (x493-((x494>x495)/x496));

    if (t120 != INT32_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x497 = 147967LLU;
	int64_t x498 = -1LL;
	volatile int64_t x499 = -1LL;
	int64_t x500 = 367204009722LL;
	volatile uint64_t t121 = 522888875042581644LLU;

    t121 = (x497-((x498>x499)/x500));

    if (t121 != 147967LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x502 = 26U;
	int16_t x503 = INT16_MAX;
	int8_t x504 = 1;

    t122 = (x501-((x502>x503)/x504));

    if (t122 != 298) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x506 = 11LLU;
	int64_t x507 = INT64_MIN;
	static int64_t x508 = -1189222555904918229LL;
	int64_t t123 = 1409432LL;

    t123 = (x505-((x506>x507)/x508));

    if (t123 != 32767LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x509 = 3608;
	int16_t x510 = -1;
	int32_t x511 = -1;
	int32_t t124 = -225666070;

    t124 = (x509-((x510>x511)/x512));

    if (t124 != 3608) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x513 = UINT32_MAX;
	int8_t x514 = -49;
	int64_t x515 = -107787033237913LL;

    t125 = (x513-((x514>x515)/x516));

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x517 = 64U;
	int8_t x518 = -63;
	int16_t x519 = INT16_MIN;

    t126 = (x517-((x518>x519)/x520));

    if (t126 != 64) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x521 = INT16_MIN;
	static int64_t x522 = INT64_MAX;
	volatile uint8_t x523 = UINT8_MAX;
	int16_t x524 = INT16_MIN;
	volatile int32_t t127 = 1619541;

    t127 = (x521-((x522>x523)/x524));

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x525 = -1LL;
	uint8_t x526 = 3U;
	uint16_t x527 = 14U;
	volatile uint64_t x528 = 2092569194487514LLU;

    t128 = (x525-((x526>x527)/x528));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x529 = INT64_MIN;
	int8_t x530 = 0;
	uint64_t x531 = 93546323676993733LLU;

    t129 = (x529-((x530>x531)/x532));

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x533 = INT8_MAX;
	static volatile int32_t x534 = INT32_MAX;
	int32_t x535 = INT32_MAX;
	uint64_t t130 = 6136224LLU;

    t130 = (x533-((x534>x535)/x536));

    if (t130 != 127LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x538 = 10408022365141955LLU;
	uint64_t x539 = UINT64_MAX;
	int32_t x540 = INT32_MIN;
	int32_t t131 = 1;

    t131 = (x537-((x538>x539)/x540));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x542 = -1461220683275489LL;
	uint8_t x543 = UINT8_MAX;
	int32_t x544 = INT32_MIN;
	volatile int32_t t132 = 8;

    t132 = (x541-((x542>x543)/x544));

    if (t132 != -12) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x545 = UINT64_MAX;
	uint64_t x546 = 1095138575350582LLU;
	volatile int8_t x548 = -1;
	uint64_t t133 = UINT64_MAX;

    t133 = (x545-((x546>x547)/x548));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x549 = INT8_MAX;
	volatile uint8_t x550 = UINT8_MAX;
	uint16_t x551 = UINT16_MAX;

    t134 = (x549-((x550>x551)/x552));

    if (t134 != 127) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x553 = 0;
	int8_t x555 = INT8_MIN;
	int8_t x556 = -1;
	volatile int32_t t135 = -318;

    t135 = (x553-((x554>x555)/x556));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x557 = 2U;
	int16_t x558 = -1;
	static int8_t x559 = INT8_MIN;
	volatile int32_t x560 = -1;
	static volatile int32_t t136 = -83;

    t136 = (x557-((x558>x559)/x560));

    if (t136 != 3) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x561 = INT8_MIN;
	volatile int16_t x562 = INT16_MIN;
	volatile uint16_t x563 = 574U;
	int8_t x564 = -1;
	static int32_t t137 = 23280;

    t137 = (x561-((x562>x563)/x564));

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x565 = -1;
	volatile int32_t x566 = INT32_MAX;
	volatile int64_t x567 = INT64_MIN;
	volatile int32_t x568 = 427345;
	int32_t t138 = -432724655;

    t138 = (x565-((x566>x567)/x568));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x569 = -13;
	volatile int64_t x571 = INT64_MIN;
	static volatile uint32_t x572 = 5826635U;
	volatile uint32_t t139 = 13U;

    t139 = (x569-((x570>x571)/x572));

    if (t139 != 4294967283U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x574 = INT8_MAX;
	int32_t x575 = 1;
	volatile int32_t t140 = -66917937;

    t140 = (x573-((x574>x575)/x576));

    if (t140 != 65536) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x577 = 39470578U;
	int64_t x578 = INT64_MIN;
	uint64_t x580 = 831030155LLU;
	uint64_t t141 = 350840519814599LLU;

    t141 = (x577-((x578>x579)/x580));

    if (t141 != 39470578LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x581 = INT64_MAX;
	int64_t x582 = INT64_MIN;
	volatile int64_t t142 = INT64_MAX;

    t142 = (x581-((x582>x583)/x584));

    if (t142 != INT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x586 = INT8_MIN;
	uint8_t x587 = UINT8_MAX;
	static uint64_t x588 = UINT64_MAX;
	volatile uint64_t t143 = UINT64_MAX;

    t143 = (x585-((x586>x587)/x588));

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x589 = UINT32_MAX;
	static int32_t x590 = INT32_MIN;
	int64_t x591 = 1687809480LL;
	static uint64_t x592 = 1241013364053795132LLU;
	uint64_t t144 = 314325445403LLU;

    t144 = (x589-((x590>x591)/x592));

    if (t144 != 4294967295LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x593 = INT32_MIN;
	int8_t x594 = INT8_MAX;
	uint32_t x595 = UINT32_MAX;
	int8_t x596 = INT8_MIN;
	int32_t t145 = INT32_MIN;

    t145 = (x593-((x594>x595)/x596));

    if (t145 != INT32_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x597 = 2;
	int32_t x598 = INT32_MIN;
	int16_t x599 = INT16_MAX;
	int8_t x600 = -35;

    t146 = (x597-((x598>x599)/x600));

    if (t146 != 2) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x601 = UINT8_MAX;
	int16_t x602 = INT16_MIN;
	volatile uint16_t x604 = 515U;
	volatile int32_t t147 = 744380953;

    t147 = (x601-((x602>x603)/x604));

    if (t147 != 255) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x606 = -1;
	uint16_t x607 = UINT16_MAX;
	uint32_t x608 = UINT32_MAX;

    t148 = (x605-((x606>x607)/x608));

    if (t148 != INT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x610 = UINT16_MAX;
	int32_t x612 = INT32_MIN;
	int32_t t149 = INT32_MIN;

    t149 = (x609-((x610>x611)/x612));

    if (t149 != INT32_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x614 = 405LLU;
	int64_t x615 = 10078761LL;
	int16_t x616 = 42;
	int32_t t150 = -1414;

    t150 = (x613-((x614>x615)/x616));

    if (t150 != -128) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x617 = -1LL;
	int64_t x619 = INT64_MIN;
	static uint64_t x620 = 5205058169414LLU;
	volatile uint64_t t151 = UINT64_MAX;

    t151 = (x617-((x618>x619)/x620));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x621 = 1U;
	volatile int64_t x622 = -1LL;
	uint8_t x623 = UINT8_MAX;
	static volatile int32_t x624 = INT32_MIN;
	static uint32_t t152 = 245526822U;

    t152 = (x621-((x622>x623)/x624));

    if (t152 != 1U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x625 = INT8_MIN;
	uint8_t x626 = 107U;
	volatile int32_t x627 = INT32_MAX;
	int16_t x628 = -5570;
	static int32_t t153 = -124269;

    t153 = (x625-((x626>x627)/x628));

    if (t153 != -128) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x629 = 30U;
	int8_t x630 = INT8_MAX;
	int64_t x631 = INT64_MIN;
	static volatile int16_t x632 = INT16_MIN;
	int32_t t154 = 445435621;

    t154 = (x629-((x630>x631)/x632));

    if (t154 != 30) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x633 = INT64_MAX;
	static int32_t x634 = INT32_MAX;
	static int64_t x635 = 8493852281700589LL;
	uint16_t x636 = UINT16_MAX;
	volatile int64_t t155 = INT64_MAX;

    t155 = (x633-((x634>x635)/x636));

    if (t155 != INT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x637 = INT32_MAX;
	int16_t x638 = INT16_MIN;
	int16_t x640 = 10967;
	int32_t t156 = INT32_MAX;

    t156 = (x637-((x638>x639)/x640));

    if (t156 != INT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x641 = 2U;
	static int8_t x643 = -1;
	static int32_t t157 = -830845689;

    t157 = (x641-((x642>x643)/x644));

    if (t157 != 2) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x645 = INT16_MIN;
	int16_t x646 = -1;
	static volatile int64_t x647 = 2707648LL;
	int16_t x648 = -1;
	static int32_t t158 = 6;

    t158 = (x645-((x646>x647)/x648));

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x649 = 6U;
	static int64_t x651 = -1LL;
	int16_t x652 = INT16_MIN;
	int32_t t159 = -249074150;

    t159 = (x649-((x650>x651)/x652));

    if (t159 != 6) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x653 = 2829150183190222LL;
	int8_t x654 = -1;
	int32_t x655 = 1379296;
	static int64_t x656 = INT64_MIN;
	int64_t t160 = -36LL;

    t160 = (x653-((x654>x655)/x656));

    if (t160 != 2829150183190222LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x657 = -1479;
	uint16_t x660 = 18U;
	int32_t t161 = 0;

    t161 = (x657-((x658>x659)/x660));

    if (t161 != -1479) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x661 = INT32_MAX;
	int32_t x662 = INT32_MIN;
	volatile int64_t x663 = INT64_MIN;
	volatile int32_t t162 = INT32_MAX;

    t162 = (x661-((x662>x663)/x664));

    if (t162 != INT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x666 = 0;
	volatile int16_t x667 = INT16_MAX;
	uint16_t x668 = UINT16_MAX;

    t163 = (x665-((x666>x667)/x668));

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x669 = 36LLU;
	static int32_t x670 = -1;
	int32_t x671 = 212;
	int32_t x672 = -1;
	static volatile uint64_t t164 = 3LLU;

    t164 = (x669-((x670>x671)/x672));

    if (t164 != 36LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x674 = UINT8_MAX;
	static uint64_t x675 = 2801507627968951987LLU;
	static int64_t x676 = INT64_MIN;
	volatile int64_t t165 = 13128LL;

    t165 = (x673-((x674>x675)/x676));

    if (t165 != 17094LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x677 = INT64_MIN;
	static uint64_t x678 = 1673561LLU;
	int8_t x679 = -1;
	uint8_t x680 = UINT8_MAX;
	volatile int64_t t166 = INT64_MIN;

    t166 = (x677-((x678>x679)/x680));

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x682 = -1LL;
	int32_t x683 = -24;
	volatile uint64_t x684 = UINT64_MAX;
	static uint64_t t167 = 4091381283LLU;

    t167 = (x681-((x682>x683)/x684));

    if (t167 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x685 = -1;
	int16_t x686 = INT16_MIN;
	static volatile uint32_t x687 = 62U;
	uint16_t x688 = UINT16_MAX;

    t168 = (x685-((x686>x687)/x688));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x689 = UINT64_MAX;
	uint64_t x690 = 98LLU;
	int32_t x691 = -1;
	static uint64_t t169 = UINT64_MAX;

    t169 = (x689-((x690>x691)/x692));

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x693 = INT32_MAX;
	int16_t x694 = -1;
	static int16_t x695 = 9;
	int32_t t170 = INT32_MAX;

    t170 = (x693-((x694>x695)/x696));

    if (t170 != INT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x697 = UINT64_MAX;
	static uint64_t x698 = 754724LLU;
	int16_t x700 = -1;
	volatile uint64_t t171 = 3825625488495098090LLU;

    t171 = (x697-((x698>x699)/x700));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x702 = INT16_MIN;
	int16_t x703 = -1;
	static volatile uint16_t x704 = UINT16_MAX;
	int32_t t172 = -345;

    t172 = (x701-((x702>x703)/x704));

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x705 = INT16_MIN;
	int64_t x706 = 15369327450534LL;
	volatile uint64_t x707 = 52310LLU;
	int8_t x708 = 4;

    t173 = (x705-((x706>x707)/x708));

    if (t173 != -32768) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x709 = -750842LL;
	uint16_t x710 = 12U;
	int32_t x711 = -1;
	uint16_t x712 = 11U;
	static int64_t t174 = -584886177024580918LL;

    t174 = (x709-((x710>x711)/x712));

    if (t174 != -750842LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x714 = INT32_MAX;
	int16_t x715 = INT16_MIN;
	int32_t x716 = -1;
	volatile uint64_t t175 = 394594LLU;

    t175 = (x713-((x714>x715)/x716));

    if (t175 != 2126LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x718 = INT16_MAX;
	static int32_t x719 = INT32_MIN;
	int8_t x720 = -54;
	int64_t t176 = INT64_MIN;

    t176 = (x717-((x718>x719)/x720));

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x721 = -1;
	int64_t x722 = -215156219985181695LL;
	volatile int16_t x723 = -21;
	volatile int32_t t177 = -44;

    t177 = (x721-((x722>x723)/x724));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x725 = INT16_MIN;
	int16_t x726 = INT16_MAX;
	int32_t x727 = -1;
	int64_t x728 = 54664239LL;
	int64_t t178 = -4LL;

    t178 = (x725-((x726>x727)/x728));

    if (t178 != -32768LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x729 = 1;
	volatile int32_t x730 = INT32_MIN;
	volatile uint64_t x731 = UINT64_MAX;
	static uint16_t x732 = 1738U;
	volatile int32_t t179 = 0;

    t179 = (x729-((x730>x731)/x732));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x733 = INT16_MIN;
	static uint16_t x734 = UINT16_MAX;
	static int8_t x736 = INT8_MIN;

    t180 = (x733-((x734>x735)/x736));

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x737 = INT32_MIN;
	static int64_t x738 = INT64_MAX;
	uint32_t x739 = UINT32_MAX;
	int64_t x740 = 214795401LL;
	volatile int64_t t181 = 36132069994LL;

    t181 = (x737-((x738>x739)/x740));

    if (t181 != -2147483648LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x743 = 7;
	int8_t x744 = -1;
	static volatile int32_t t182 = -2157;

    t182 = (x741-((x742>x743)/x744));

    if (t182 != -112) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x745 = 13460U;
	volatile int64_t x746 = INT64_MIN;
	volatile int16_t x747 = -303;
	uint32_t t183 = 281U;

    t183 = (x745-((x746>x747)/x748));

    if (t183 != 13460U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x749 = UINT64_MAX;
	uint8_t x750 = 53U;
	volatile uint64_t t184 = UINT64_MAX;

    t184 = (x749-((x750>x751)/x752));

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x757 = 2;
	uint32_t x758 = 3U;
	int64_t x759 = INT64_MAX;

    t185 = (x757-((x758>x759)/x760));

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x761 = 1U;
	static int16_t x762 = INT16_MIN;
	uint8_t x764 = 1U;
	int32_t t186 = 20;

    t186 = (x761-((x762>x763)/x764));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x765 = 4;
	int64_t x766 = INT64_MIN;
	static volatile int32_t x768 = 21;
	int32_t t187 = -27632;

    t187 = (x765-((x766>x767)/x768));

    if (t187 != 4) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x769 = 111359U;
	int16_t x770 = -1;
	int32_t x771 = INT32_MIN;
	uint64_t x772 = 30LLU;
	uint64_t t188 = 92355728189793LLU;

    t188 = (x769-((x770>x771)/x772));

    if (t188 != 111359LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x774 = INT64_MAX;
	int32_t t189 = -147538;

    t189 = (x773-((x774>x775)/x776));

    if (t189 != -13140067) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x777 = 6U;
	int16_t x778 = INT16_MIN;
	int64_t x780 = INT64_MAX;
	volatile int64_t t190 = -26619717809786LL;

    t190 = (x777-((x778>x779)/x780));

    if (t190 != 6LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x781 = -1;
	uint64_t x782 = UINT64_MAX;
	volatile uint16_t x783 = 1U;
	int8_t x784 = 2;
	volatile int32_t t191 = 3047;

    t191 = (x781-((x782>x783)/x784));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x785 = INT16_MAX;
	uint16_t x786 = 29290U;
	static int32_t x787 = -1;
	int64_t x788 = INT64_MIN;

    t192 = (x785-((x786>x787)/x788));

    if (t192 != 32767LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x793 = INT16_MIN;
	uint32_t x794 = 26860012U;
	uint64_t x795 = UINT64_MAX;
	uint32_t x796 = 9U;
	static uint32_t t193 = 124U;

    t193 = (x793-((x794>x795)/x796));

    if (t193 != 4294934528U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x797 = INT16_MIN;
	static int32_t x798 = -1;
	volatile uint64_t x799 = UINT64_MAX;
	int8_t x800 = INT8_MIN;
	volatile int32_t t194 = 1;

    t194 = (x797-((x798>x799)/x800));

    if (t194 != -32768) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x801 = 22U;
	uint32_t x802 = 3451672U;
	uint32_t x804 = 209029U;
	uint32_t t195 = 2607763U;

    t195 = (x801-((x802>x803)/x804));

    if (t195 != 22U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x805 = INT16_MAX;
	volatile int32_t x806 = INT32_MAX;
	uint16_t x807 = UINT16_MAX;
	int8_t x808 = INT8_MIN;
	volatile int32_t t196 = -506938;

    t196 = (x805-((x806>x807)/x808));

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x809 = INT32_MIN;
	uint8_t x810 = 11U;
	volatile int32_t x811 = 0;
	int64_t x812 = -1LL;

    t197 = (x809-((x810>x811)/x812));

    if (t197 != -2147483647LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x813 = INT8_MIN;
	int64_t x814 = INT64_MAX;
	static int32_t x815 = INT32_MAX;
	int32_t x816 = INT32_MIN;
	volatile int32_t t198 = -1;

    t198 = (x813-((x814>x815)/x816));

    if (t198 != -128) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x817 = INT64_MAX;
	static int32_t x818 = -88;
	int64_t x819 = INT64_MIN;
	int32_t x820 = INT32_MIN;
	int64_t t199 = INT64_MAX;

    t199 = (x817-((x818>x819)/x820));

    if (t199 != INT64_MAX) { NG(); } else { ; }
	
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

