
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

volatile uint8_t x8 = 2U;
static int8_t x14 = -1;
volatile int32_t x30 = INT32_MIN;
static int64_t x31 = 52806306097LL;
static volatile int64_t t7 = -7LL;
int8_t x34 = 6;
uint8_t x35 = UINT8_MAX;
volatile int64_t t8 = 29137401LL;
int64_t x40 = 13526359263711LL;
int32_t x45 = 1038143;
static int16_t x65 = 0;
int64_t x81 = -1LL;
static int64_t x83 = INT64_MIN;
volatile int64_t t17 = 3068051010296027881LL;
static int16_t x96 = -833;
int8_t x99 = 0;
static int16_t x105 = -1;
volatile uint32_t t24 = 2056490893U;
volatile int32_t t25 = 939569662;
uint64_t t27 = 6280804900LLU;
int32_t x135 = INT32_MIN;
int32_t x136 = -1;
volatile int8_t x142 = -12;
int32_t x152 = INT32_MIN;
uint8_t x155 = 10U;
uint8_t x156 = UINT8_MAX;
uint64_t x159 = 189084321450LLU;
int8_t x164 = 10;
volatile int64_t t37 = 1LL;
uint16_t x166 = 4009U;
volatile uint32_t t39 = 1975U;
static volatile int64_t x189 = INT64_MIN;
int8_t x192 = INT8_MIN;
volatile int64_t t45 = 3755LL;
volatile uint64_t t46 = 764236481LLU;
uint64_t x204 = UINT64_MAX;
int16_t x207 = INT16_MIN;
int16_t x214 = INT16_MIN;
uint32_t x217 = UINT32_MAX;
volatile int64_t t51 = -5493444363399139LL;
int8_t x230 = INT8_MIN;
int32_t x232 = 3979482;
int64_t t53 = 83404466636LL;
int32_t x233 = -7;
int16_t x234 = -1;
volatile uint64_t t55 = 1339666LLU;
uint64_t x241 = UINT64_MAX;
volatile uint8_t x242 = UINT8_MAX;
int8_t x251 = -5;
uint8_t x260 = 3U;
int8_t x263 = -1;
uint16_t x268 = UINT16_MAX;
int16_t x269 = INT16_MIN;
static int32_t x271 = 261243945;
int8_t x278 = INT8_MIN;
static int32_t x280 = 128172;
int32_t x281 = INT32_MIN;
static int32_t x284 = INT32_MAX;
uint8_t x292 = 24U;
int64_t x302 = INT64_MIN;
volatile int64_t t68 = 948941785LL;
static int8_t x320 = -1;
static volatile uint32_t t72 = 1U;
uint64_t x325 = 262115505833LLU;
int64_t t74 = 49LL;
int64_t x334 = -1LL;
uint32_t x336 = 485U;
volatile uint64_t t75 = 3013742724185321LLU;
int8_t x340 = -5;
int32_t x344 = INT32_MIN;
uint64_t t77 = 136927864696473LLU;
int64_t t80 = -11347LL;
uint64_t x369 = 3938026305881128881LLU;
int32_t x375 = INT32_MIN;
static volatile int32_t x377 = -26956;
uint16_t x379 = UINT16_MAX;
volatile int8_t x380 = -1;
static volatile uint64_t x383 = UINT64_MAX;
volatile int8_t x390 = 3;
uint64_t x393 = UINT64_MAX;
int16_t x398 = INT16_MIN;
int64_t x415 = 2199709435LL;
int16_t x416 = 741;
uint64_t x426 = UINT64_MAX;
int64_t x430 = -63180LL;
static volatile int64_t t95 = 92398309591500LL;
static uint8_t x437 = UINT8_MAX;
volatile int16_t x438 = -1;
uint32_t x440 = 28580692U;
static int64_t x451 = -1LL;
int32_t x452 = INT32_MAX;
static int32_t x457 = INT32_MAX;
int64_t x463 = INT64_MAX;
static volatile int32_t x464 = -29024;
uint64_t t99 = 32LLU;
uint16_t x471 = 104U;
int32_t x472 = INT32_MIN;
int8_t x475 = INT8_MIN;
uint64_t t101 = 1LLU;
uint64_t x484 = 25060515230LLU;
uint64_t x486 = 810180156LLU;
int8_t x487 = INT8_MIN;
volatile uint64_t t103 = 18266LLU;
static int16_t x494 = INT16_MAX;
static volatile int64_t t105 = 4120722LL;
static uint8_t x505 = UINT8_MAX;
static volatile int64_t x518 = INT64_MAX;
volatile uint64_t x520 = UINT64_MAX;
static uint8_t x527 = 0U;
int16_t x530 = INT16_MAX;
int64_t x538 = 2130815787499472885LL;
int64_t t114 = 114681LL;
static uint32_t x546 = 307U;
int8_t x553 = 36;
uint8_t x561 = UINT8_MAX;
volatile int64_t t119 = 67676865LL;
int64_t x576 = -1LL;
volatile uint64_t t122 = 442212620768LLU;
volatile int64_t t125 = -2078559067LL;
int32_t x589 = INT32_MAX;
int16_t x591 = 138;
uint64_t x595 = UINT64_MAX;
int64_t x610 = -1LL;
int64_t x617 = -1LL;
uint32_t x619 = UINT32_MAX;
uint8_t x623 = 8U;
static volatile int8_t x626 = INT8_MIN;
uint8_t x646 = UINT8_MAX;
uint64_t t137 = 1415449591LLU;
int32_t x649 = -1;
volatile uint64_t t139 = 1066655039791346161LLU;
static int16_t x658 = INT16_MAX;
int8_t x662 = -4;
volatile int32_t x665 = INT32_MAX;
int64_t x670 = INT64_MIN;
int64_t t143 = 67070392636LL;
int64_t x673 = 355765621615039LL;
int64_t x677 = INT64_MAX;
int64_t x686 = -565777963033333081LL;
volatile int16_t x689 = -1;
static int64_t x691 = -1LL;
volatile int64_t x692 = INT64_MAX;
int64_t t148 = 26866420LL;
uint32_t x693 = 2014922U;
static int16_t x697 = -88;
uint16_t x700 = UINT16_MAX;
uint8_t x708 = 26U;
int64_t x727 = INT64_MIN;
uint64_t t155 = 298686776LLU;
uint64_t x731 = 170710591LLU;
uint64_t t156 = 3LLU;
volatile int64_t x734 = -231691470984158LL;
int16_t x741 = INT16_MIN;
static int16_t x744 = -1;
uint16_t x752 = UINT16_MAX;
volatile uint32_t x758 = UINT32_MAX;
int32_t x761 = INT32_MIN;
volatile int16_t x766 = INT16_MIN;
uint32_t t163 = 12105U;
static int8_t x769 = INT8_MIN;
int16_t x771 = INT16_MIN;
uint32_t x775 = UINT32_MAX;
static int32_t x781 = INT32_MIN;
int32_t x804 = INT32_MIN;
int64_t x814 = -16568193985LL;
static int64_t t174 = -2614707039686372LL;
int8_t x819 = INT8_MAX;
static volatile uint16_t x825 = 1U;
int32_t x830 = -1;
uint16_t x835 = UINT16_MAX;
uint32_t x836 = UINT32_MAX;
int16_t x838 = INT16_MIN;
int8_t x841 = INT8_MIN;
int64_t x847 = INT64_MIN;
volatile int64_t t182 = -76492349LL;
int16_t x851 = INT16_MIN;
int64_t x853 = 1LL;
int8_t x856 = -8;
int8_t x861 = -36;
static uint64_t x868 = 42614100868729287LLU;
int16_t x873 = -3855;
static int32_t t189 = 1145;
volatile uint64_t t190 = 140LLU;
static int8_t x882 = 6;
uint8_t x884 = 1U;
static uint8_t x886 = 0U;
volatile uint64_t t192 = 1LLU;
static uint32_t x898 = UINT32_MAX;
uint32_t t195 = 3913U;
int8_t x901 = INT8_MIN;
int64_t x906 = -2840LL;
static volatile uint64_t t198 = 20703LLU;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	uint8_t x2 = 51U;
	int64_t x3 = INT64_MIN;
	int8_t x4 = -1;
	int64_t t0 = 27175596638LL;

    t0 = (x1-((x2|x3)+x4));

    if (t0 != 9223372034707292110LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 8654165518LL;
	uint16_t x6 = UINT16_MAX;
	static int16_t x7 = -1;
	static int64_t t1 = -155958678730163LL;

    t1 = (x5-((x6|x7)+x8));

    if (t1 != 8654165517LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MAX;
	int64_t t2 = 2466970352849LL;

    t2 = (x9-((x10|x11)+x12));

    if (t2 != 128LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 1;
	int64_t x15 = -15745065LL;
	volatile int8_t x16 = -1;
	volatile int64_t t3 = -6511LL;

    t3 = (x13-((x14|x15)+x16));

    if (t3 != 3LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -56;
	static uint16_t x18 = 7U;
	uint32_t x19 = UINT32_MAX;
	int64_t x20 = -1LL;
	volatile int64_t t4 = 14723676380LL;

    t4 = (x17-((x18|x19)+x20));

    if (t4 != -4294967350LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 3U;
	int64_t x22 = INT64_MIN;
	volatile int16_t x23 = 388;
	int16_t x24 = -2;
	static volatile int64_t t5 = 58LL;

    t5 = (x21-((x22|x23)+x24));

    if (t5 != 9223372036854775425LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 719U;
	int8_t x26 = INT8_MIN;
	uint16_t x27 = 6U;
	uint32_t x28 = 44150U;
	volatile uint32_t t6 = 1U;

    t6 = (x25-((x26|x27)+x28));

    if (t6 != 4294923987U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	static uint16_t x32 = 30U;

    t7 = (x29-((x30|x31)+x32));

    if (t7 != 880785072LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = INT16_MAX;
	volatile int64_t x36 = -1883645802291178010LL;

    t8 = (x33-((x34|x35)+x36));

    if (t8 != 1883645802291210522LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x37 = 20581LLU;
	int64_t x38 = 22128962982691LL;
	uint8_t x39 = 44U;
	uint64_t t9 = 22LLU;

    t9 = (x37-((x38|x39)+x40));

    if (t9 != 18446708418387325783LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x41 = -1;
	volatile int64_t x42 = -744488781508277595LL;
	volatile int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MAX;
	volatile int64_t t10 = -5442LL;

    t10 = (x41-((x42|x43)+x44));

    if (t10 != 29915LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MIN;
	static volatile int64_t x48 = 29447863LL;
	int64_t t11 = 43108376963LL;

    t11 = (x45-((x46|x47)+x48));

    if (t11 != 2119073928LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = -17;
	int8_t x54 = -1;
	int32_t x55 = INT32_MIN;
	volatile uint16_t x56 = 0U;
	volatile int32_t t12 = 441;

    t12 = (x53-((x54|x55)+x56));

    if (t12 != -16) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = 2;
	int32_t x58 = INT32_MIN;
	static int8_t x59 = INT8_MAX;
	static int32_t x60 = 73187;
	int32_t t13 = 686398;

    t13 = (x57-((x58|x59)+x60));

    if (t13 != 2147410336) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = -74LL;
	uint8_t x62 = UINT8_MAX;
	volatile int64_t x63 = INT64_MIN;
	volatile int8_t x64 = INT8_MAX;
	int64_t t14 = -967102108355LL;

    t14 = (x61-((x62|x63)+x64));

    if (t14 != 9223372036854775352LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x66 = -1;
	int32_t x67 = -1;
	int32_t x68 = -1;
	volatile int32_t t15 = 1;

    t15 = (x65-((x66|x67)+x68));

    if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x77 = UINT32_MAX;
	uint8_t x78 = UINT8_MAX;
	volatile int8_t x79 = 16;
	volatile int8_t x80 = INT8_MIN;
	static volatile uint32_t t16 = 122532099U;

    t16 = (x77-((x78|x79)+x80));

    if (t16 != 4294967168U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x82 = INT16_MIN;
	int16_t x84 = INT16_MAX;

    t17 = (x81-((x82|x83)+x84));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x85 = -1;
	volatile int16_t x86 = INT16_MIN;
	uint32_t x87 = 1999219438U;
	int32_t x88 = INT32_MIN;
	volatile uint32_t t18 = 10U;

    t18 = (x85-((x86|x87)+x88));

    if (t18 != 2147505425U) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint64_t x89 = 124662957386348LLU;
	int64_t x90 = -25941745622664LL;
	static int64_t x91 = -1LL;
	int32_t x92 = -1;
	uint64_t t19 = 44526274131LLU;

    t19 = (x89-((x90|x91)+x92));

    if (t19 != 124662957386350LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x93 = -65407424LL;
	static volatile int32_t x94 = 26712;
	int32_t x95 = INT32_MIN;
	volatile int64_t t20 = -54330669229964LL;

    t20 = (x93-((x94|x95)+x96));

    if (t20 != 2082050345LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = INT32_MIN;
	int8_t x98 = INT8_MIN;
	static int16_t x100 = 7;
	int32_t t21 = -27571;

    t21 = (x97-((x98|x99)+x100));

    if (t21 != -2147483527) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = INT16_MIN;
	static int32_t x102 = INT32_MIN;
	uint32_t x103 = 319U;
	int8_t x104 = INT8_MIN;
	uint32_t t22 = 291466029U;

    t22 = (x101-((x102|x103)+x104));

    if (t22 != 2147450689U) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x106 = 651U;
	int16_t x107 = -1;
	uint16_t x108 = UINT16_MAX;
	static int32_t t23 = 464176571;

    t23 = (x105-((x106|x107)+x108));

    if (t23 != -65535) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x109 = 18U;
	volatile uint32_t x110 = UINT32_MAX;
	int32_t x111 = -24523;
	int32_t x112 = -30631093;

    t24 = (x109-((x110|x111)+x112));

    if (t24 != 30631112U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x113 = 12U;
	int8_t x114 = 1;
	int16_t x115 = -1;
	int8_t x116 = INT8_MIN;

    t25 = (x113-((x114|x115)+x116));

    if (t25 != 141) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = INT32_MIN;
	volatile int64_t x118 = 1838783593061510LL;
	uint16_t x119 = UINT16_MAX;
	volatile int32_t x120 = INT32_MAX;
	volatile int64_t t26 = -311522LL;

    t26 = (x117-((x118|x119)+x120));

    if (t26 != -1838787888087038LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x121 = INT16_MIN;
	int64_t x122 = -14749774667541865LL;
	static uint64_t x123 = 15115967694545900LLU;
	int8_t x124 = -29;

    t27 = (x121-((x122|x123)+x124));

    if (t27 != 74850592934942LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x125 = UINT64_MAX;
	volatile int8_t x126 = -1;
	volatile int16_t x127 = 252;
	int16_t x128 = -182;
	uint64_t t28 = 9LLU;

    t28 = (x125-((x126|x127)+x128));

    if (t28 != 182LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x129 = 17837616305LL;
	volatile int32_t x130 = INT32_MAX;
	static uint8_t x131 = 52U;
	static int64_t x132 = 94921067494716825LL;
	volatile int64_t t29 = 365085037825322997LL;

    t29 = (x129-((x130|x131)+x132));

    if (t29 != -94921051804584167LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x133 = 826891U;
	int64_t x134 = INT64_MIN;
	static int64_t t30 = -1539226187061395LL;

    t30 = (x133-((x134|x135)+x136));

    if (t30 != 2148310540LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = INT32_MIN;
	static volatile uint32_t x138 = 136650U;
	uint64_t x139 = 23786LLU;
	volatile int8_t x140 = INT8_MAX;
	volatile uint64_t t31 = 2664118579455023144LLU;

    t31 = (x137-((x138|x139)+x140));

    if (t31 != 18446744071561912727LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x141 = UINT32_MAX;
	static int64_t x143 = INT64_MIN;
	uint64_t x144 = 17422879937792596LLU;
	uint64_t t32 = 1647677393206044LLU;

    t32 = (x141-((x142|x143)+x144));

    if (t32 != 18429321198066726327LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x145 = INT32_MAX;
	volatile uint16_t x146 = 6957U;
	uint16_t x147 = 329U;
	int8_t x148 = INT8_MIN;
	int32_t t33 = 245;

    t33 = (x145-((x146|x147)+x148));

    if (t33 != 2147476754) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x149 = INT32_MIN;
	int8_t x150 = -2;
	int64_t x151 = 0LL;
	int64_t t34 = 53121626377362175LL;

    t34 = (x149-((x150|x151)+x152));

    if (t34 != 2LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = 1;
	int32_t x154 = -28;
	volatile int32_t t35 = -218178;

    t35 = (x153-((x154|x155)+x156));

    if (t35 != -236) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x157 = 23;
	static int16_t x158 = 2;
	static int64_t x160 = INT64_MIN;
	static uint64_t t36 = 2370146960452339920LLU;

    t36 = (x157-((x158|x159)+x160));

    if (t36 != 9223371847770454381LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = -222890703643LL;
	int16_t x162 = INT16_MIN;
	int64_t x163 = -1LL;

    t37 = (x161-((x162|x163)+x164));

    if (t37 != -222890703652LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x165 = UINT8_MAX;
	int32_t x167 = INT32_MIN;
	int8_t x168 = INT8_MIN;
	volatile int32_t t38 = 2;

    t38 = (x165-((x166|x167)+x168));

    if (t38 != 2147480022) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x169 = UINT16_MAX;
	int16_t x170 = INT16_MIN;
	int8_t x171 = -1;
	volatile uint32_t x172 = UINT32_MAX;

    t39 = (x169-((x170|x171)+x172));

    if (t39 != 65537U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x173 = INT16_MIN;
	int64_t x174 = -114LL;
	uint64_t x175 = 8331704LLU;
	static int64_t x176 = -67376145942009790LL;
	volatile uint64_t t40 = 433LLU;

    t40 = (x173-((x174|x175)+x176));

    if (t40 != 67376145941977088LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint16_t x177 = 167U;
	int64_t x178 = INT64_MIN;
	int32_t x179 = 1119108;
	static int8_t x180 = INT8_MIN;
	volatile int64_t t41 = -2LL;

    t41 = (x177-((x178|x179)+x180));

    if (t41 != 9223372036853656995LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = INT8_MAX;
	uint8_t x182 = UINT8_MAX;
	uint32_t x183 = 29295U;
	int64_t x184 = INT64_MIN;
	volatile int64_t t42 = -89906481LL;

    t42 = (x181-((x182|x183)+x184));

    if (t42 != 9223372036854746496LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = INT8_MAX;
	static uint32_t x186 = UINT32_MAX;
	int32_t x187 = 677;
	int8_t x188 = INT8_MAX;
	uint32_t t43 = 162558729U;

    t43 = (x185-((x186|x187)+x188));

    if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x190 = -1;
	static int32_t x191 = -39;
	int64_t t44 = -42LL;

    t44 = (x189-((x190|x191)+x192));

    if (t44 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = INT64_MIN;
	int32_t x194 = 622394;
	volatile int32_t x195 = -1;
	int16_t x196 = INT16_MIN;

    t45 = (x193-((x194|x195)+x196));

    if (t45 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x197 = 405LLU;
	uint32_t x198 = UINT32_MAX;
	int64_t x199 = INT64_MAX;
	volatile int8_t x200 = -1;

    t46 = (x197-((x198|x199)+x200));

    if (t46 != 9223372036854776215LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = -1;
	static int16_t x202 = -1;
	static int8_t x203 = -1;
	uint64_t t47 = 403LLU;

    t47 = (x201-((x202|x203)+x204));

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x205 = INT16_MIN;
	int16_t x206 = INT16_MAX;
	volatile int16_t x208 = -2767;
	volatile int32_t t48 = 0;

    t48 = (x205-((x206|x207)+x208));

    if (t48 != -30000) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x213 = -1696;
	int64_t x215 = INT64_MIN;
	int8_t x216 = INT8_MIN;
	static int64_t t49 = 1567631259028629LL;

    t49 = (x213-((x214|x215)+x216));

    if (t49 != 31200LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x218 = INT32_MIN;
	int16_t x219 = 1;
	int8_t x220 = INT8_MAX;
	uint32_t t50 = 3U;

    t50 = (x217-((x218|x219)+x220));

    if (t50 != 2147483519U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x221 = UINT8_MAX;
	int8_t x222 = INT8_MIN;
	int64_t x223 = INT64_MAX;
	int8_t x224 = INT8_MIN;

    t51 = (x221-((x222|x223)+x224));

    if (t51 != 384LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x225 = 97U;
	uint32_t x226 = 56207424U;
	volatile uint8_t x227 = 6U;
	static int16_t x228 = 3;
	uint32_t t52 = 1309U;

    t52 = (x225-((x226|x227)+x228));

    if (t52 != 4238759960U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x229 = 126959LL;
	int64_t x231 = INT64_MAX;

    t53 = (x229-((x230|x231)+x232));

    if (t53 != -3852522LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x235 = INT64_MIN;
	uint64_t x236 = 974988494462LLU;
	static volatile uint64_t t54 = 57LLU;

    t54 = (x233-((x234|x235)+x236));

    if (t54 != 18446743098721057148LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x237 = UINT32_MAX;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = 1822LLU;
	int16_t x240 = 125;

    t55 = (x237-((x238|x239)+x240));

    if (t55 != 6442448996LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x243 = -18513;
	volatile uint16_t x244 = 4077U;
	static volatile uint64_t t56 = 107283854808LLU;

    t56 = (x241-((x242|x243)+x244));

    if (t56 != 14355LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x245 = INT8_MIN;
	int64_t x246 = 1573213779989LL;
	uint64_t x247 = 33091903662445LLU;
	volatile int32_t x248 = 374767;
	uint64_t t57 = 164763146833LLU;

    t57 = (x245-((x246|x247)+x248));

    if (t57 != 18446709444193586708LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x249 = UINT16_MAX;
	int32_t x250 = INT32_MIN;
	int8_t x252 = INT8_MIN;
	int32_t t58 = 2677;

    t58 = (x249-((x250|x251)+x252));

    if (t58 != 65668) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x257 = -61;
	uint32_t x258 = 0U;
	int32_t x259 = 211115;
	volatile uint32_t t59 = 57482123U;

    t59 = (x257-((x258|x259)+x260));

    if (t59 != 4294756117U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x261 = 11697728285LLU;
	volatile int8_t x262 = INT8_MIN;
	int8_t x264 = INT8_MAX;
	volatile uint64_t t60 = 99233296391017LLU;

    t60 = (x261-((x262|x263)+x264));

    if (t60 != 11697728159LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x265 = INT8_MIN;
	volatile int16_t x266 = INT16_MIN;
	uint64_t x267 = 6586358LLU;
	static volatile uint64_t t61 = 63503793694715759LLU;

    t61 = (x265-((x266|x267)+x268));

    if (t61 != 18446744073709485963LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x270 = 164LLU;
	volatile int64_t x272 = INT64_MIN;
	uint64_t t62 = 5906185497605954LLU;

    t62 = (x269-((x270|x271)+x272));

    if (t62 != 9223372036593498963LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x273 = INT32_MIN;
	volatile int64_t x274 = INT64_MAX;
	volatile int8_t x275 = -1;
	int8_t x276 = INT8_MIN;
	int64_t t63 = -3562LL;

    t63 = (x273-((x274|x275)+x276));

    if (t63 != -2147483519LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x277 = UINT8_MAX;
	volatile int64_t x279 = INT64_MIN;
	volatile int64_t t64 = 13392LL;

    t64 = (x277-((x278|x279)+x280));

    if (t64 != -127789LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MIN;
	volatile int64_t t65 = 1LL;

    t65 = (x281-((x282|x283)+x284));

    if (t65 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x289 = 115399LLU;
	uint32_t x290 = 275607U;
	static int64_t x291 = INT64_MIN;
	volatile uint64_t t66 = 0LLU;

    t66 = (x289-((x290|x291)+x292));

    if (t66 != 9223372036854615576LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x297 = UINT8_MAX;
	volatile int64_t x298 = 9106866139774LL;
	int64_t x299 = INT64_MAX;
	int64_t x300 = -171775361870427LL;
	int64_t t67 = 68508042670LL;

    t67 = (x297-((x298|x299)+x300));

    if (t67 != -9223200261492905125LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x301 = 32;
	volatile uint16_t x303 = 286U;
	int64_t x304 = -1LL;

    t68 = (x301-((x302|x303)+x304));

    if (t68 != 9223372036854775555LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x309 = 1U;
	uint16_t x310 = 1U;
	int32_t x311 = -193551011;
	volatile uint32_t x312 = UINT32_MAX;
	static volatile uint32_t t69 = 821U;

    t69 = (x309-((x310|x311)+x312));

    if (t69 != 193551013U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x313 = -1;
	int32_t x314 = 311814;
	volatile uint64_t x315 = 7489LLU;
	int8_t x316 = -1;
	uint64_t t70 = 33LLU;

    t70 = (x313-((x314|x315)+x316));

    if (t70 != 18446744073709232313LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x317 = -1LL;
	uint32_t x318 = UINT32_MAX;
	int64_t x319 = -1LL;
	volatile int64_t t71 = 35634458215LL;

    t71 = (x317-((x318|x319)+x320));

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x321 = -1;
	int8_t x322 = -1;
	int16_t x323 = -1102;
	uint32_t x324 = UINT32_MAX;

    t72 = (x321-((x322|x323)+x324));

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x326 = UINT8_MAX;
	int8_t x327 = INT8_MAX;
	int16_t x328 = INT16_MIN;
	volatile uint64_t t73 = 64274LLU;

    t73 = (x325-((x326|x327)+x328));

    if (t73 != 262115538346LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x329 = 12533530478LL;
	int8_t x330 = INT8_MAX;
	int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MIN;

    t74 = (x329-((x330|x331)+x332));

    if (t74 != 12533530607LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x333 = 4038990LLU;
	volatile int16_t x335 = INT16_MAX;

    t75 = (x333-((x334|x335)+x336));

    if (t75 != 4038506LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x337 = 3;
	volatile int16_t x338 = INT16_MAX;
	static uint8_t x339 = 6U;
	int32_t t76 = 37560;

    t76 = (x337-((x338|x339)+x340));

    if (t76 != -32759) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x341 = 3336482902LLU;
	int8_t x342 = -1;
	int64_t x343 = -26LL;

    t77 = (x341-((x342|x343)+x344));

    if (t77 != 5483966551LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x349 = 1;
	static int16_t x350 = -1;
	int64_t x351 = -207LL;
	int16_t x352 = 5;
	volatile int64_t t78 = 15699603631LL;

    t78 = (x349-((x350|x351)+x352));

    if (t78 != -3LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x357 = INT16_MIN;
	volatile uint32_t x358 = 309267U;
	static int16_t x359 = INT16_MIN;
	volatile uint8_t x360 = 24U;
	uint32_t t79 = 0U;

    t79 = (x357-((x358|x359)+x360));

    if (t79 != 4294952917U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x361 = 7;
	int8_t x362 = INT8_MIN;
	int8_t x363 = 1;
	volatile int64_t x364 = -1LL;

    t80 = (x361-((x362|x363)+x364));

    if (t80 != 135LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x365 = UINT32_MAX;
	uint32_t x366 = 0U;
	int8_t x367 = -1;
	static volatile uint8_t x368 = 58U;
	static uint32_t t81 = 4952U;

    t81 = (x365-((x366|x367)+x368));

    if (t81 != 4294967238U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x370 = 7U;
	int64_t x371 = -1LL;
	static int64_t x372 = INT64_MAX;
	uint64_t t82 = 2562LLU;

    t82 = (x369-((x370|x371)+x372));

    if (t82 != 13161398342735904691LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x373 = 10109631LLU;
	uint64_t x374 = 378150209810LLU;
	int64_t x376 = 13LL;
	static volatile uint64_t t83 = 259384910904LLU;

    t83 = (x373-((x374|x375)+x376));

    if (t83 != 1964505504LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x378 = -1LL;
	volatile int64_t t84 = -982LL;

    t84 = (x377-((x378|x379)+x380));

    if (t84 != -26954LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x381 = 5501267LLU;
	int32_t x382 = INT32_MIN;
	volatile uint8_t x384 = 1U;
	volatile uint64_t t85 = 854339921183650LLU;

    t85 = (x381-((x382|x383)+x384));

    if (t85 != 5501267LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x385 = 250LLU;
	volatile uint64_t x386 = 6513LLU;
	volatile int16_t x387 = INT16_MIN;
	volatile int8_t x388 = INT8_MIN;
	uint64_t t86 = 20LLU;

    t86 = (x385-((x386|x387)+x388));

    if (t86 != 26633LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x389 = INT16_MAX;
	uint64_t x391 = UINT64_MAX;
	static int32_t x392 = INT32_MIN;
	static volatile uint64_t t87 = 2241012661498236668LLU;

    t87 = (x389-((x390|x391)+x392));

    if (t87 != 2147516416LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x394 = 5;
	volatile int16_t x395 = 3;
	int8_t x396 = 0;
	uint64_t t88 = 57588730503018622LLU;

    t88 = (x393-((x394|x395)+x396));

    if (t88 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x397 = -3;
	uint32_t x399 = 55U;
	int16_t x400 = INT16_MAX;
	volatile uint32_t t89 = 96286U;

    t89 = (x397-((x398|x399)+x400));

    if (t89 != 4294967239U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x401 = 28U;
	int64_t x402 = INT64_MIN;
	volatile int16_t x403 = INT16_MAX;
	uint32_t x404 = 263600181U;
	static volatile int64_t t90 = -465877372921738LL;

    t90 = (x401-((x402|x403)+x404));

    if (t90 != 9223372036591142888LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x409 = -1;
	int64_t x410 = -1LL;
	static volatile int32_t x411 = -1;
	volatile int32_t x412 = INT32_MIN;
	volatile int64_t t91 = 26000255LL;

    t91 = (x409-((x410|x411)+x412));

    if (t91 != 2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x413 = 1U;
	uint8_t x414 = 20U;
	int64_t t92 = -846120516379666687LL;

    t92 = (x413-((x414|x415)+x416));

    if (t92 != -2199710179LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x417 = INT8_MIN;
	int16_t x418 = INT16_MAX;
	uint32_t x419 = 374330011U;
	int8_t x420 = 46;
	static volatile uint32_t t93 = 62342U;

    t93 = (x417-((x418|x419)+x420));

    if (t93 != 3920625491U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x425 = UINT64_MAX;
	uint64_t x427 = UINT64_MAX;
	int64_t x428 = INT64_MIN;
	uint64_t t94 = 3202534481053065582LLU;

    t94 = (x425-((x426|x427)+x428));

    if (t94 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x429 = -927941;
	volatile int8_t x431 = -1;
	static volatile int64_t x432 = 17LL;

    t95 = (x429-((x430|x431)+x432));

    if (t95 != -927957LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x439 = 372U;
	uint32_t t96 = 489643U;

    t96 = (x437-((x438|x439)+x440));

    if (t96 != 4266386860U) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint8_t x449 = UINT8_MAX;
	int8_t x450 = INT8_MIN;
	volatile int64_t t97 = 171833LL;

    t97 = (x449-((x450|x451)+x452));

    if (t97 != -2147483391LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x458 = INT16_MAX;
	int64_t x459 = INT64_MAX;
	int8_t x460 = INT8_MIN;
	volatile int64_t t98 = -605LL;

    t98 = (x457-((x458|x459)+x460));

    if (t98 != -9223372034707292032LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x461 = 272791688LLU;
	int32_t x462 = INT32_MAX;

    t99 = (x461-((x462|x463)+x464));

    if (t99 != 9223372037127596521LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x469 = INT64_MAX;
	static uint64_t x470 = UINT64_MAX;
	uint64_t t100 = 4362987417LLU;

    t100 = (x469-((x470|x471)+x472));

    if (t100 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x473 = UINT64_MAX;
	uint8_t x474 = UINT8_MAX;
	int16_t x476 = INT16_MAX;

    t101 = (x473-((x474|x475)+x476));

    if (t101 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x481 = INT8_MIN;
	int64_t x482 = INT64_MAX;
	static int16_t x483 = INT16_MAX;
	volatile uint64_t t102 = 123797180889384LLU;

    t102 = (x481-((x482|x483)+x484));

    if (t102 != 9223372011794260451LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x485 = INT64_MIN;
	int8_t x488 = -1;

    t103 = (x485-((x486|x487)+x488));

    if (t103 != 9223372036854775877LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x493 = INT8_MAX;
	int64_t x495 = INT64_MIN;
	static volatile uint32_t x496 = 1506375U;
	static volatile int64_t t104 = 1178280LL;

    t104 = (x493-((x494|x495)+x496));

    if (t104 != 9223372036853236793LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x501 = -1;
	static int64_t x502 = 126137841LL;
	int32_t x503 = INT32_MIN;
	int32_t x504 = INT32_MIN;

    t105 = (x501-((x502|x503)+x504));

    if (t105 != 4168829454LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x506 = 0U;
	int64_t x507 = 8LL;
	volatile int64_t x508 = -1LL;
	int64_t t106 = 289LL;

    t106 = (x505-((x506|x507)+x508));

    if (t106 != 248LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x509 = INT32_MAX;
	int64_t x510 = INT64_MAX;
	volatile int16_t x511 = INT16_MIN;
	uint64_t x512 = 0LLU;
	uint64_t t107 = 89851798827626181LLU;

    t107 = (x509-((x510|x511)+x512));

    if (t107 != 2147483648LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x513 = 1LL;
	uint64_t x514 = UINT64_MAX;
	static int64_t x515 = INT64_MIN;
	int64_t x516 = -1LL;
	volatile uint64_t t108 = 2LLU;

    t108 = (x513-((x514|x515)+x516));

    if (t108 != 3LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x517 = 1546672220467LLU;
	int8_t x519 = -1;
	volatile uint64_t t109 = 48080LLU;

    t109 = (x517-((x518|x519)+x520));

    if (t109 != 1546672220469LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x521 = -1;
	int8_t x522 = -6;
	static int32_t x523 = INT32_MAX;
	uint64_t x524 = 50862618662545605LLU;
	uint64_t t110 = 66245LLU;

    t110 = (x521-((x522|x523)+x524));

    if (t110 != 18395881455047006011LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x525 = -18;
	int64_t x526 = -1LL;
	static int32_t x528 = INT32_MIN;
	int64_t t111 = -676276226646LL;

    t111 = (x525-((x526|x527)+x528));

    if (t111 != 2147483631LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x529 = 7U;
	static uint32_t x531 = UINT32_MAX;
	int32_t x532 = INT32_MIN;
	uint32_t t112 = 2U;

    t112 = (x529-((x530|x531)+x532));

    if (t112 != 2147483656U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x533 = UINT64_MAX;
	static uint8_t x534 = 39U;
	uint8_t x535 = 1U;
	int32_t x536 = INT32_MIN;
	volatile uint64_t t113 = 1LLU;

    t113 = (x533-((x534|x535)+x536));

    if (t113 != 2147483608LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x537 = INT8_MAX;
	int32_t x539 = INT32_MAX;
	static int8_t x540 = INT8_MIN;

    t114 = (x537-((x538|x539)+x540));

    if (t114 != -2130815788309806848LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x541 = UINT32_MAX;
	static uint8_t x542 = 10U;
	static uint32_t x543 = 2369U;
	uint64_t x544 = 894499LLU;
	uint64_t t115 = 97400075127659275LLU;

    t115 = (x541-((x542|x543)+x544));

    if (t115 != 4294070417LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x545 = 122335126375LLU;
	static int16_t x547 = -1;
	static uint64_t x548 = 3815988555270LLU;
	uint64_t t116 = 36057LLU;

    t116 = (x545-((x546|x547)+x548));

    if (t116 != 18446740375761155426LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int64_t x549 = INT64_MIN;
	int32_t x550 = INT32_MAX;
	int64_t x551 = -144916450680LL;
	volatile int8_t x552 = -45;
	int64_t t117 = 14233LL;

    t117 = (x549-((x550|x551)+x552));

    if (t117 != -9223371892973371346LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x554 = 394U;
	int32_t x555 = INT32_MIN;
	uint32_t x556 = 1U;
	static volatile uint32_t t118 = 383736U;

    t118 = (x553-((x554|x555)+x556));

    if (t118 != 2147483289U) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x562 = -1;
	int64_t x563 = INT64_MAX;
	int16_t x564 = -1;

    t119 = (x561-((x562|x563)+x564));

    if (t119 != 257LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x565 = 1U;
	uint32_t x566 = UINT32_MAX;
	volatile int64_t x567 = -1LL;
	static uint64_t x568 = UINT64_MAX;
	uint64_t t120 = 44488LLU;

    t120 = (x565-((x566|x567)+x568));

    if (t120 != 3LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x569 = 24U;
	int64_t x570 = 12386LL;
	int16_t x571 = INT16_MIN;
	uint64_t x572 = UINT64_MAX;
	volatile uint64_t t121 = 24756868149398LLU;

    t121 = (x569-((x570|x571)+x572));

    if (t121 != 20407LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x573 = 13679LL;
	int16_t x574 = -1;
	volatile uint64_t x575 = 22LLU;

    t122 = (x573-((x574|x575)+x576));

    if (t122 != 13681LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x577 = INT64_MIN;
	uint64_t x578 = 1775796094322LLU;
	uint32_t x579 = 0U;
	static int64_t x580 = -1479258LL;
	uint64_t t123 = 26549637LLU;

    t123 = (x577-((x578|x579)+x580));

    if (t123 != 9223370261060160744LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x581 = INT64_MAX;
	int32_t x582 = INT32_MAX;
	volatile uint16_t x583 = 6516U;
	int16_t x584 = INT16_MIN;
	volatile int64_t t124 = -1LL;

    t124 = (x581-((x582|x583)+x584));

    if (t124 != 9223372034707324928LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x585 = -1LL;
	int64_t x586 = -12LL;
	static volatile int16_t x587 = -1;
	int32_t x588 = INT32_MAX;

    t125 = (x585-((x586|x587)+x588));

    if (t125 != -2147483647LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x590 = 54634U;
	uint32_t x592 = 98131U;
	volatile uint32_t t126 = 263514U;

    t126 = (x589-((x590|x591)+x592));

    if (t126 != 2147330754U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x593 = -1;
	static uint16_t x594 = 1135U;
	static int16_t x596 = INT16_MIN;
	uint64_t t127 = 1099020209LLU;

    t127 = (x593-((x594|x595)+x596));

    if (t127 != 32768LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x597 = INT8_MAX;
	int32_t x598 = -15;
	int32_t x599 = INT32_MAX;
	int16_t x600 = INT16_MIN;
	int32_t t128 = 0;

    t128 = (x597-((x598|x599)+x600));

    if (t128 != 32896) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x601 = 342736300LLU;
	int16_t x602 = INT16_MIN;
	volatile int8_t x603 = INT8_MAX;
	uint8_t x604 = UINT8_MAX;
	uint64_t t129 = 0LLU;

    t129 = (x601-((x602|x603)+x604));

    if (t129 != 342768686LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x609 = -1;
	volatile int32_t x611 = INT32_MAX;
	int32_t x612 = -1800600;
	int64_t t130 = -837849107701442LL;

    t130 = (x609-((x610|x611)+x612));

    if (t130 != 1800600LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x618 = 31088122U;
	uint32_t x620 = UINT32_MAX;
	static volatile int64_t t131 = -349914799769884LL;

    t131 = (x617-((x618|x619)+x620));

    if (t131 != -4294967295LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x621 = 1;
	int8_t x622 = 0;
	static volatile int8_t x624 = INT8_MIN;
	int32_t t132 = 0;

    t132 = (x621-((x622|x623)+x624));

    if (t132 != 121) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x625 = 1488800005U;
	volatile int32_t x627 = INT32_MIN;
	uint16_t x628 = 7U;
	volatile uint32_t t133 = 102420621U;

    t133 = (x625-((x626|x627)+x628));

    if (t133 != 1488800126U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x629 = -1;
	uint8_t x630 = 12U;
	int32_t x631 = 105175261;
	volatile uint16_t x632 = 6419U;
	static int32_t t134 = -4340734;

    t134 = (x629-((x630|x631)+x632));

    if (t134 != -105181681) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x633 = 0U;
	uint32_t x634 = 22558825U;
	int8_t x635 = -1;
	volatile int8_t x636 = INT8_MAX;
	static volatile uint32_t t135 = 15U;

    t135 = (x633-((x634|x635)+x636));

    if (t135 != 4294967170U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x637 = INT64_MAX;
	uint64_t x638 = UINT64_MAX;
	uint8_t x639 = 2U;
	uint64_t x640 = 23LLU;
	uint64_t t136 = 54929122LLU;

    t136 = (x637-((x638|x639)+x640));

    if (t136 != 9223372036854775785LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x645 = UINT8_MAX;
	uint64_t x647 = UINT64_MAX;
	uint8_t x648 = UINT8_MAX;

    t137 = (x645-((x646|x647)+x648));

    if (t137 != 1LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x650 = UINT16_MAX;
	static int64_t x651 = 278LL;
	volatile int8_t x652 = 2;
	volatile int64_t t138 = -4877483190084LL;

    t138 = (x649-((x650|x651)+x652));

    if (t138 != -65538LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x653 = 2068862215977644392LLU;
	int64_t x654 = -1LL;
	uint16_t x655 = 0U;
	int16_t x656 = -11;

    t139 = (x653-((x654|x655)+x656));

    if (t139 != 2068862215977644404LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x657 = INT32_MIN;
	uint8_t x659 = 4U;
	int64_t x660 = -4LL;
	volatile int64_t t140 = -3LL;

    t140 = (x657-((x658|x659)+x660));

    if (t140 != -2147516411LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x661 = -37;
	int64_t x663 = 971LL;
	volatile int64_t x664 = -2LL;
	int64_t t141 = 100581272LL;

    t141 = (x661-((x662|x663)+x664));

    if (t141 != -34LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x666 = INT64_MIN;
	int8_t x667 = INT8_MAX;
	uint32_t x668 = UINT32_MAX;
	volatile int64_t t142 = 1045266997892618LL;

    t142 = (x665-((x666|x667)+x668));

    if (t142 != 9223372034707292033LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x669 = 7U;
	volatile uint32_t x671 = 163214U;
	uint8_t x672 = 43U;

    t143 = (x669-((x670|x671)+x672));

    if (t143 != 9223372036854612558LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x674 = INT64_MIN;
	volatile int32_t x675 = -1;
	volatile int32_t x676 = -6889767;
	int64_t t144 = 1455210LL;

    t144 = (x673-((x674|x675)+x676));

    if (t144 != 355765628504807LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x678 = INT32_MAX;
	volatile int8_t x679 = INT8_MIN;
	uint32_t x680 = 24U;
	static int64_t t145 = 271340400234643LL;

    t145 = (x677-((x678|x679)+x680));

    if (t145 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x681 = -1;
	static int16_t x682 = INT16_MIN;
	int8_t x683 = 0;
	uint16_t x684 = 0U;
	volatile int32_t t146 = -46418;

    t146 = (x681-((x682|x683)+x684));

    if (t146 != 32767) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x685 = -195;
	uint16_t x687 = UINT16_MAX;
	uint8_t x688 = 26U;
	volatile int64_t t147 = 14424008LL;

    t147 = (x685-((x686|x687)+x688));

    if (t147 != 565777963033296676LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x690 = 2262U;

    t148 = (x689-((x690|x691)+x692));

    if (t148 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x694 = UINT8_MAX;
	int8_t x695 = 1;
	uint32_t x696 = 1U;
	uint32_t t149 = 800U;

    t149 = (x693-((x694|x695)+x696));

    if (t149 != 2014666U) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x698 = -1LL;
	int64_t x699 = -1LL;
	volatile int64_t t150 = 1LL;

    t150 = (x697-((x698|x699)+x700));

    if (t150 != -65622LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x705 = -19;
	uint16_t x706 = UINT16_MAX;
	static int16_t x707 = INT16_MIN;
	static volatile int32_t t151 = -1;

    t151 = (x705-((x706|x707)+x708));

    if (t151 != -44) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x709 = INT64_MIN;
	uint64_t x710 = 85LLU;
	static int64_t x711 = 207686777537809087LL;
	static int32_t x712 = INT32_MIN;
	static uint64_t t152 = 58590555880209LLU;

    t152 = (x709-((x710|x711)+x712));

    if (t152 != 9015685261464450305LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x717 = -1;
	uint8_t x718 = 2U;
	int64_t x719 = -1LL;
	int32_t x720 = INT32_MIN;
	static volatile int64_t t153 = 10485785709417100LL;

    t153 = (x717-((x718|x719)+x720));

    if (t153 != 2147483648LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x721 = INT32_MAX;
	static int8_t x722 = INT8_MAX;
	uint32_t x723 = UINT32_MAX;
	uint64_t x724 = 5LLU;
	static uint64_t t154 = 3525245295074LLU;

    t154 = (x721-((x722|x723)+x724));

    if (t154 != 18446744071562067963LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x725 = UINT64_MAX;
	int32_t x726 = -2143;
	int8_t x728 = 4;

    t155 = (x725-((x726|x727)+x728));

    if (t155 != 2138LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x729 = UINT8_MAX;
	int8_t x730 = 21;
	int16_t x732 = INT16_MIN;

    t156 = (x729-((x730|x731)+x732));

    if (t156 != 18446744073538874048LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint64_t x733 = 5298614LLU;
	int64_t x735 = INT64_MAX;
	static volatile int32_t x736 = INT32_MAX;
	volatile uint64_t t157 = 5879273198971680LLU;

    t157 = (x733-((x734|x735)+x736));

    if (t157 != 18446744071567366584LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x742 = -119;
	int8_t x743 = -1;
	int32_t t158 = 1408;

    t158 = (x741-((x742|x743)+x744));

    if (t158 != -32766) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x745 = 1;
	int16_t x746 = -24;
	volatile int16_t x747 = 28;
	int16_t x748 = INT16_MIN;
	volatile int32_t t159 = 2;

    t159 = (x745-((x746|x747)+x748));

    if (t159 != 32773) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x749 = INT16_MIN;
	int64_t x750 = -402LL;
	uint16_t x751 = UINT16_MAX;
	int64_t t160 = 637435LL;

    t160 = (x749-((x750|x751)+x752));

    if (t160 != -98302LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x757 = 200897831417LLU;
	volatile uint32_t x759 = 2524113U;
	int8_t x760 = -23;
	static uint64_t t161 = 1675894440169LLU;

    t161 = (x757-((x758|x759)+x760));

    if (t161 != 196602864145LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x762 = 12450479834LLU;
	int16_t x763 = INT16_MAX;
	static int16_t x764 = 1681;
	uint64_t t162 = 335465379704LLU;

    t162 = (x761-((x762|x763)+x764));

    if (t162 != 18446744059111569776LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x765 = 0U;
	static uint32_t x767 = 795U;
	uint8_t x768 = UINT8_MAX;

    t163 = (x765-((x766|x767)+x768));

    if (t163 != 31718U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x770 = INT8_MIN;
	int8_t x772 = 44;
	static int32_t t164 = -1858915;

    t164 = (x769-((x770|x771)+x772));

    if (t164 != -44) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x773 = INT32_MIN;
	static int64_t x774 = INT64_MIN;
	static uint32_t x776 = UINT32_MAX;
	static volatile int64_t t165 = 1417099497LL;

    t165 = (x773-((x774|x775)+x776));

    if (t165 != 9223372026117357570LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x777 = 1;
	uint8_t x778 = 5U;
	uint16_t x779 = 23U;
	static int8_t x780 = INT8_MIN;
	volatile int32_t t166 = 2103534;

    t166 = (x777-((x778|x779)+x780));

    if (t166 != 106) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x782 = INT64_MIN;
	int8_t x783 = -1;
	static uint64_t x784 = UINT64_MAX;
	uint64_t t167 = 3007998291170944LLU;

    t167 = (x781-((x782|x783)+x784));

    if (t167 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x785 = INT8_MAX;
	int16_t x786 = INT16_MAX;
	uint64_t x787 = 1434412046054842861LLU;
	static int8_t x788 = 51;
	static uint64_t t168 = 1710LLU;

    t168 = (x785-((x786|x787)+x788));

    if (t168 != 17012332027654701133LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x789 = 0U;
	int16_t x790 = -40;
	int16_t x791 = INT16_MAX;
	int32_t x792 = INT32_MAX;
	int32_t t169 = 30517102;

    t169 = (x789-((x790|x791)+x792));

    if (t169 != -2147483646) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x793 = 3U;
	static uint16_t x794 = 1U;
	int16_t x795 = 3;
	int8_t x796 = INT8_MIN;
	int32_t t170 = -524684669;

    t170 = (x793-((x794|x795)+x796));

    if (t170 != 128) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x797 = UINT16_MAX;
	volatile int8_t x798 = -1;
	int16_t x799 = INT16_MAX;
	static int64_t x800 = INT64_MAX;
	volatile int64_t t171 = -3826861434266522385LL;

    t171 = (x797-((x798|x799)+x800));

    if (t171 != -9223372036854710271LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x801 = 200U;
	volatile uint64_t x802 = UINT64_MAX;
	int16_t x803 = -436;
	uint64_t t172 = 2067361407LLU;

    t172 = (x801-((x802|x803)+x804));

    if (t172 != 2147483849LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x805 = -1;
	int16_t x806 = INT16_MIN;
	int64_t x807 = 236LL;
	volatile int64_t x808 = -1LL;
	int64_t t173 = 10086072371838LL;

    t173 = (x805-((x806|x807)+x808));

    if (t173 != 32532LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x813 = -1;
	static int16_t x815 = -36;
	uint16_t x816 = 928U;

    t174 = (x813-((x814|x815)+x816));

    if (t174 != -928LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x817 = 8U;
	static volatile int32_t x818 = INT32_MIN;
	volatile int8_t x820 = -7;
	uint32_t t175 = 2522U;

    t175 = (x817-((x818|x819)+x820));

    if (t175 != 2147483536U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x821 = 31696477LLU;
	int64_t x822 = INT64_MIN;
	int16_t x823 = INT16_MAX;
	uint8_t x824 = 1U;
	volatile uint64_t t176 = 92277218434103866LLU;

    t176 = (x821-((x822|x823)+x824));

    if (t176 != 9223372036886439517LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x826 = -1LL;
	static int32_t x827 = -1;
	uint8_t x828 = 117U;
	static volatile int64_t t177 = -8LL;

    t177 = (x825-((x826|x827)+x828));

    if (t177 != -115LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x829 = 9096007576727548273LLU;
	int32_t x831 = -2174;
	volatile int16_t x832 = 9;
	static volatile uint64_t t178 = 69LLU;

    t178 = (x829-((x830|x831)+x832));

    if (t178 != 9096007576727548265LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x833 = INT16_MIN;
	static int32_t x834 = -507605;
	volatile uint32_t t179 = 9185U;

    t179 = (x833-((x834|x835)+x836));

    if (t179 != 425986U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x837 = 7U;
	static int32_t x839 = INT32_MIN;
	int16_t x840 = INT16_MIN;
	int32_t t180 = 931562;

    t180 = (x837-((x838|x839)+x840));

    if (t180 != 65543) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x842 = INT8_MAX;
	static int64_t x843 = INT64_MIN;
	static int8_t x844 = -10;
	int64_t t181 = 526640745LL;

    t181 = (x841-((x842|x843)+x844));

    if (t181 != 9223372036854775563LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x845 = -1;
	int16_t x846 = -1;
	int64_t x848 = INT64_MAX;

    t182 = (x845-((x846|x847)+x848));

    if (t182 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x849 = 27U;
	int8_t x850 = INT8_MIN;
	int8_t x852 = INT8_MIN;
	volatile int32_t t183 = 218;

    t183 = (x849-((x850|x851)+x852));

    if (t183 != 283) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x854 = -1LL;
	static int8_t x855 = INT8_MIN;
	int64_t t184 = -288930796LL;

    t184 = (x853-((x854|x855)+x856));

    if (t184 != 10LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x857 = INT32_MIN;
	static uint32_t x858 = UINT32_MAX;
	int32_t x859 = -5848;
	int64_t x860 = 896291LL;
	volatile int64_t t185 = 7071639LL;

    t185 = (x857-((x858|x859)+x860));

    if (t185 != -6443347234LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x862 = 10U;
	volatile uint8_t x863 = 17U;
	int8_t x864 = -21;
	volatile uint32_t t186 = 27092U;

    t186 = (x861-((x862|x863)+x864));

    if (t186 != 4294967254U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x865 = INT32_MIN;
	static uint32_t x866 = 45U;
	volatile int16_t x867 = 3;
	uint64_t t187 = 8283001LLU;

    t187 = (x865-((x866|x867)+x868));

    if (t187 != 18404129970693338634LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x869 = UINT8_MAX;
	static int32_t x870 = -1;
	volatile int16_t x871 = INT16_MIN;
	static int32_t x872 = -1;
	int32_t t188 = -30;

    t188 = (x869-((x870|x871)+x872));

    if (t188 != 257) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x874 = -1;
	int8_t x875 = -1;
	static volatile int8_t x876 = INT8_MAX;

    t189 = (x873-((x874|x875)+x876));

    if (t189 != -3981) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x877 = INT16_MIN;
	uint64_t x878 = 363773747923661983LLU;
	volatile uint32_t x879 = UINT32_MAX;
	static int64_t x880 = INT64_MIN;

    t190 = (x877-((x878|x879)+x880));

    if (t190 != 8859598288387538945LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x881 = 1124U;
	static uint64_t x883 = 3075459784937LLU;
	uint64_t t191 = 1423520003544LLU;

    t191 = (x881-((x882|x883)+x884));

    if (t191 != 18446740998249767796LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x885 = UINT32_MAX;
	volatile uint64_t x887 = UINT64_MAX;
	int64_t x888 = -1LL;

    t192 = (x885-((x886|x887)+x888));

    if (t192 != 4294967297LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x889 = INT32_MIN;
	int32_t x890 = INT32_MAX;
	int8_t x891 = INT8_MAX;
	int32_t x892 = INT32_MIN;
	static int32_t t193 = -15;

    t193 = (x889-((x890|x891)+x892));

    if (t193 != -2147483647) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x893 = 4U;
	volatile int16_t x894 = INT16_MIN;
	uint64_t x895 = 19LLU;
	uint16_t x896 = 1U;
	uint64_t t194 = 41296714586012039LLU;

    t194 = (x893-((x894|x895)+x896));

    if (t194 != 32752LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x897 = INT32_MIN;
	int32_t x899 = INT32_MIN;
	volatile uint32_t x900 = 194851024U;

    t195 = (x897-((x898|x899)+x900));

    if (t195 != 1952632625U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x902 = 10085610;
	int32_t x903 = INT32_MIN;
	uint8_t x904 = UINT8_MAX;
	int32_t t196 = -12115;

    t196 = (x901-((x902|x903)+x904));

    if (t196 != 2137397655) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x905 = 17117146U;
	volatile uint32_t x907 = 57497171U;
	int8_t x908 = INT8_MIN;
	int64_t t197 = 595511LL;

    t197 = (x905-((x906|x907)+x908));

    if (t197 != 17119583LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x909 = INT16_MIN;
	int8_t x910 = 47;
	uint64_t x911 = 1168865LLU;
	uint16_t x912 = 16657U;

    t198 = (x909-((x910|x911)+x912));

    if (t198 != 18446744073708333312LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x913 = 17355308159789796LL;
	int64_t x914 = 41895150222292LL;
	static volatile int16_t x915 = 503;
	int32_t x916 = INT32_MAX;
	int64_t t199 = -6262282120LL;

    t199 = (x913-((x914|x915)+x916));

    if (t199 != 17313410862083822LL) { NG(); } else { ; }
	
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

