
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

int8_t x4 = INT8_MAX;
static int64_t x11 = -423LL;
volatile int32_t x12 = 1;
volatile int8_t x15 = 1;
uint8_t x17 = UINT8_MAX;
int8_t x19 = INT8_MAX;
uint8_t x21 = 5U;
uint32_t x22 = 30230U;
static int64_t x34 = -500223533LL;
int8_t x35 = -2;
uint32_t x37 = 654654010U;
volatile int8_t x38 = INT8_MAX;
volatile int32_t t9 = -439;
int16_t x50 = 0;
uint32_t x51 = 648117052U;
volatile int32_t t11 = -17124;
uint8_t x53 = 2U;
int32_t t13 = -15940;
uint16_t x67 = UINT16_MAX;
int32_t x70 = -1;
uint64_t x71 = 2131328506997LLU;
uint16_t x82 = 0U;
uint8_t x84 = 22U;
int8_t x89 = -1;
int8_t x93 = INT8_MIN;
uint32_t x94 = 4163U;
int32_t t21 = -162;
static int16_t x99 = -1915;
int8_t x102 = INT8_MIN;
volatile uint16_t x104 = 16586U;
int64_t x110 = INT64_MIN;
uint16_t x112 = 44U;
uint32_t x113 = 821682513U;
static int64_t x114 = 29553663135432581LL;
volatile int8_t x115 = -1;
int16_t x120 = -89;
static int64_t x127 = -216392714894506LL;
volatile int32_t t29 = 14;
int8_t x134 = INT8_MIN;
int16_t x135 = INT16_MIN;
volatile int32_t x138 = -448;
int64_t x140 = INT64_MIN;
int8_t x148 = INT8_MIN;
int64_t x150 = INT64_MIN;
int64_t x152 = INT64_MIN;
uint32_t x158 = 177332U;
volatile int32_t t39 = -4787273;
uint32_t x171 = UINT32_MAX;
int32_t x179 = INT32_MAX;
volatile int32_t t44 = 101014687;
volatile int16_t x189 = INT16_MAX;
int32_t x199 = 1870;
volatile uint64_t x200 = UINT64_MAX;
int32_t x201 = -5;
int32_t t48 = 0;
int32_t x205 = -277594902;
int16_t x210 = INT16_MIN;
int32_t x214 = -760403599;
int32_t t51 = -119302637;
int32_t t52 = -1155;
int8_t x229 = INT8_MAX;
int8_t x231 = 6;
int64_t x233 = INT64_MIN;
int64_t x234 = INT64_MAX;
volatile int8_t x235 = INT8_MIN;
volatile int32_t x239 = INT32_MAX;
static int32_t t57 = 720758513;
int8_t x244 = INT8_MIN;
volatile int8_t x247 = INT8_MIN;
volatile int32_t t59 = -65531;
volatile int64_t x249 = -3570846LL;
uint16_t x257 = 32U;
int16_t x258 = 7029;
int8_t x260 = -9;
int64_t x268 = INT64_MIN;
static volatile int64_t x271 = INT64_MAX;
volatile int8_t x278 = INT8_MIN;
static uint16_t x280 = 1095U;
static int8_t x283 = INT8_MIN;
int32_t x302 = -1;
static int64_t x304 = -258072009818927LL;
volatile int32_t t74 = 4007;
uint32_t x310 = 903653U;
static int64_t x311 = -1LL;
static int32_t t75 = -1;
uint8_t x315 = 121U;
volatile int32_t t78 = 5872;
int32_t x326 = 238;
int32_t t79 = 19;
int16_t x331 = INT16_MIN;
uint8_t x334 = 69U;
int8_t x340 = -17;
uint16_t x344 = UINT16_MAX;
int32_t t84 = 1578228;
uint64_t x355 = 30117409738408LLU;
int16_t x359 = -4;
int32_t t86 = 82460;
int32_t x361 = 0;
int32_t t88 = 48513;
static int32_t x371 = -1;
static int32_t x372 = -1;
int8_t x374 = INT8_MIN;
static volatile int32_t t91 = 487;
uint64_t x386 = 1718577LLU;
static int64_t x391 = -12LL;
static volatile int32_t t94 = -29;
uint32_t x393 = UINT32_MAX;
int32_t t95 = 0;
volatile uint64_t x399 = 880759714752673LLU;
int32_t x409 = 472;
int64_t x410 = INT64_MAX;
int32_t x411 = -6532126;
volatile int32_t t99 = 5498;
static uint16_t x423 = 19U;
static volatile uint64_t x427 = 16809569053LLU;
volatile uint32_t x429 = 2868U;
int32_t x431 = -1;
int16_t x434 = 7;
static int8_t x437 = -1;
int64_t x438 = -8493871261477LL;
uint8_t x439 = 117U;
uint8_t x440 = 3U;
int16_t x445 = INT16_MIN;
int32_t x446 = INT32_MIN;
volatile int32_t x447 = INT32_MIN;
uint8_t x448 = 2U;
int32_t x452 = INT32_MIN;
volatile int32_t t108 = 30402709;
uint16_t x453 = 85U;
int16_t x455 = 100;
uint32_t x459 = 16U;
static uint64_t x460 = UINT64_MAX;
volatile int32_t t111 = -8156319;
uint64_t x469 = 13632702214LLU;
int8_t x473 = INT8_MAX;
volatile int32_t x475 = -1;
int32_t x478 = INT32_MIN;
int16_t x482 = INT16_MAX;
int32_t t120 = -366367385;
int64_t x501 = INT64_MAX;
static int32_t x503 = -1;
uint8_t x508 = UINT8_MAX;
uint64_t x509 = UINT64_MAX;
uint16_t x514 = 2U;
uint64_t x515 = 99134014120009LLU;
int8_t x516 = INT8_MAX;
static int16_t x520 = -1;
int16_t x531 = INT16_MIN;
uint64_t x533 = UINT64_MAX;
volatile uint16_t x535 = 7911U;
static int32_t x539 = -1;
static int32_t x548 = INT32_MIN;
static uint8_t x549 = 3U;
volatile int32_t x555 = INT32_MAX;
volatile int16_t x558 = INT16_MIN;
int32_t x562 = 55737517;
static uint16_t x563 = 4U;
volatile int8_t x567 = -20;
uint16_t x571 = 5659U;
int32_t t139 = 28;
int64_t x577 = -810264660318LL;
int16_t x578 = INT16_MIN;
int16_t x584 = -1;
int8_t x587 = 18;
uint32_t x588 = 1827U;
static int32_t t142 = 26558;
int32_t x595 = INT32_MIN;
volatile int32_t x596 = INT32_MAX;
volatile int64_t x602 = INT64_MIN;
int16_t x604 = INT16_MIN;
static int32_t x616 = 1;
volatile int64_t x619 = INT64_MIN;
volatile int16_t x620 = INT16_MIN;
volatile int16_t x622 = -1;
static int16_t x625 = 195;
int16_t x645 = INT16_MAX;
uint64_t x646 = 63772086436710254LLU;
int32_t x647 = 17544;
uint16_t x659 = 255U;
static volatile uint64_t x664 = UINT64_MAX;
volatile int16_t x667 = 11942;
volatile int16_t x670 = -1;
int16_t x672 = INT16_MIN;
int32_t t163 = 0;
uint32_t x674 = 3330U;
uint16_t x675 = 58U;
volatile int32_t t164 = -1;
int64_t x678 = INT64_MIN;
int32_t t166 = 0;
volatile uint8_t x687 = 15U;
int32_t x694 = -65;
int32_t t169 = 109504305;
int8_t x703 = -1;
static int64_t x707 = -32552462579LL;
static int16_t x712 = 7993;
int32_t t173 = 11;
int32_t t174 = -2;
int64_t x720 = -872617297688798749LL;
uint16_t x722 = 2U;
int32_t t177 = -2496;
static int16_t x731 = INT16_MAX;
static int8_t x733 = INT8_MIN;
volatile int8_t x735 = INT8_MAX;
static int16_t x736 = INT16_MAX;
uint8_t x749 = 1U;
int32_t x753 = INT32_MIN;
static int32_t x757 = INT32_MIN;
int32_t t186 = -145911300;
static uint8_t x767 = 19U;
static volatile int32_t t188 = 584171;
static uint64_t x775 = 893760489779LLU;
int64_t x785 = INT64_MIN;
uint64_t x790 = 79472LLU;
int32_t t193 = 301971;
int8_t x795 = 63;
static volatile int16_t x798 = 39;
int32_t x800 = INT32_MIN;
static volatile int32_t x801 = 7270002;
uint64_t x802 = UINT64_MAX;
int8_t x804 = INT8_MAX;
uint64_t x806 = 111862530691LLU;
static int32_t t197 = -857630457;
volatile int32_t x812 = -609553;
int32_t x813 = -21;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	int32_t x2 = 39475147;
	volatile int8_t x3 = INT8_MIN;
	volatile int32_t t0 = -4484;

    t0 = (x1!=((x2==x3)/x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 9411912794LL;
	volatile int64_t x6 = INT64_MIN;
	uint64_t x7 = 1375869054893LLU;
	uint32_t x8 = 30983U;
	static int32_t t1 = -144873811;

    t1 = (x5!=((x6==x7)/x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	int16_t x10 = INT16_MIN;
	volatile int32_t t2 = 0;

    t2 = (x9!=((x10==x11)/x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x13 = 133021847231568629LLU;
	static volatile int32_t x14 = INT32_MAX;
	uint16_t x16 = 161U;
	int32_t t3 = -2517297;

    t3 = (x13!=((x14==x15)/x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = 273LL;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -191;

    t4 = (x17!=((x18==x19)/x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x23 = -3;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 3513;

    t5 = (x21!=((x22==x23)/x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MIN;
	static int16_t x26 = INT16_MIN;
	uint16_t x27 = 685U;
	int8_t x28 = -1;
	int32_t t6 = 19;

    t6 = (x25!=((x26==x27)/x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = INT8_MIN;
	int64_t x30 = INT64_MIN;
	volatile int16_t x31 = -1;
	uint64_t x32 = 2881LLU;
	volatile int32_t t7 = 11976;

    t7 = (x29!=((x30==x31)/x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = 18;
	static uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 106;

    t8 = (x33!=((x34==x35)/x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x39 = 6298576U;
	static uint8_t x40 = 3U;

    t9 = (x37!=((x38==x39)/x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MAX;
	int16_t x42 = 21;
	int32_t x43 = INT32_MIN;
	uint64_t x44 = 13160443288910049LLU;
	static int32_t t10 = 792660;

    t10 = (x41!=((x42==x43)/x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = UINT16_MAX;
	uint16_t x52 = UINT16_MAX;

    t11 = (x49!=((x50==x51)/x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x54 = -1;
	int8_t x55 = INT8_MIN;
	int64_t x56 = INT64_MAX;
	volatile int32_t t12 = -485;

    t12 = (x53!=((x54==x55)/x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MAX;
	int8_t x58 = INT8_MIN;
	int16_t x59 = -1095;
	volatile int32_t x60 = -1;

    t13 = (x57!=((x58==x59)/x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = INT32_MAX;
	volatile int32_t x62 = INT32_MAX;
	int32_t x63 = -1;
	uint8_t x64 = 127U;
	int32_t t14 = 0;

    t14 = (x61!=((x62==x63)/x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = -15462;
	volatile uint16_t x66 = 19631U;
	uint8_t x68 = UINT8_MAX;
	int32_t t15 = -278081932;

    t15 = (x65!=((x66==x67)/x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MIN;
	volatile int32_t x72 = INT32_MAX;
	int32_t t16 = -609547976;

    t16 = (x69!=((x70==x71)/x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x73 = INT32_MIN;
	uint32_t x74 = 51980U;
	static int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MIN;
	int32_t t17 = 106;

    t17 = (x73!=((x74==x75)/x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MAX;
	static volatile int8_t x78 = INT8_MIN;
	int16_t x79 = -13233;
	int16_t x80 = INT16_MAX;
	volatile int32_t t18 = -150191745;

    t18 = (x77!=((x78==x79)/x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = -574203666;
	int8_t x83 = INT8_MAX;
	volatile int32_t t19 = 6;

    t19 = (x81!=((x82==x83)/x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x90 = 127U;
	static uint16_t x91 = 65U;
	int8_t x92 = INT8_MIN;
	volatile int32_t t20 = -73404448;

    t20 = (x89!=((x90==x91)/x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x95 = INT64_MIN;
	uint16_t x96 = 1U;

    t21 = (x93!=((x94==x95)/x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x97 = -1;
	int64_t x98 = -1LL;
	uint32_t x100 = UINT32_MAX;
	int32_t t22 = 992;

    t22 = (x97!=((x98==x99)/x100));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x101 = UINT32_MAX;
	int8_t x103 = 4;
	volatile int32_t t23 = 6149253;

    t23 = (x101!=((x102==x103)/x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x105 = 548U;
	volatile int8_t x106 = -1;
	uint64_t x107 = UINT64_MAX;
	int64_t x108 = -1LL;
	volatile int32_t t24 = 10509;

    t24 = (x105!=((x106==x107)/x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x109 = UINT32_MAX;
	int16_t x111 = -1;
	int32_t t25 = 355;

    t25 = (x109!=((x110==x111)/x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x116 = UINT32_MAX;
	static volatile int32_t t26 = 1;

    t26 = (x113!=((x114==x115)/x116));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x117 = INT16_MAX;
	int32_t x118 = 854596491;
	uint64_t x119 = 1887263154655406LLU;
	volatile int32_t t27 = 5343;

    t27 = (x117!=((x118==x119)/x120));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x121 = UINT32_MAX;
	uint16_t x122 = UINT16_MAX;
	volatile uint16_t x123 = 150U;
	volatile int32_t x124 = -1;
	int32_t t28 = -75683259;

    t28 = (x121!=((x122==x123)/x124));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x125 = 1U;
	volatile uint8_t x126 = 15U;
	static int16_t x128 = INT16_MAX;

    t29 = (x125!=((x126==x127)/x128));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x129 = -3341384;
	static uint64_t x130 = UINT64_MAX;
	int32_t x131 = -3351926;
	uint32_t x132 = 2146U;
	volatile int32_t t30 = 258354;

    t30 = (x129!=((x130==x131)/x132));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x133 = INT16_MIN;
	static volatile int16_t x136 = INT16_MIN;
	volatile int32_t t31 = -456010;

    t31 = (x133!=((x134==x135)/x136));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x137 = -1LL;
	uint64_t x139 = 18252898LLU;
	int32_t t32 = -16;

    t32 = (x137!=((x138==x139)/x140));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = -29291142;
	int32_t x142 = -60091628;
	static int16_t x143 = INT16_MAX;
	uint16_t x144 = 103U;
	static volatile int32_t t33 = 78551;

    t33 = (x141!=((x142==x143)/x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x145 = INT16_MAX;
	volatile int32_t x146 = -1;
	uint64_t x147 = 92702485588LLU;
	int32_t t34 = -152557789;

    t34 = (x145!=((x146==x147)/x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x149 = 94271661240LLU;
	static int8_t x151 = -1;
	volatile int32_t t35 = -30892;

    t35 = (x149!=((x150==x151)/x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = INT64_MIN;
	uint8_t x154 = 0U;
	static volatile int64_t x155 = 24LL;
	int8_t x156 = INT8_MIN;
	volatile int32_t t36 = -2094141;

    t36 = (x153!=((x154==x155)/x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = INT64_MIN;
	volatile int16_t x159 = 1;
	int16_t x160 = -98;
	volatile int32_t t37 = 5413;

    t37 = (x157!=((x158==x159)/x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x161 = INT16_MIN;
	int8_t x162 = INT8_MIN;
	uint16_t x163 = 3U;
	static volatile int16_t x164 = INT16_MIN;
	volatile int32_t t38 = -261447520;

    t38 = (x161!=((x162==x163)/x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x165 = -1;
	volatile int64_t x166 = -1LL;
	int8_t x167 = INT8_MIN;
	static int16_t x168 = -1;

    t39 = (x165!=((x166==x167)/x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = 0;
	int64_t x170 = INT64_MIN;
	volatile int16_t x172 = INT16_MAX;
	volatile int32_t t40 = 11664091;

    t40 = (x169!=((x170==x171)/x172));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x173 = 0LLU;
	static uint16_t x174 = 167U;
	int8_t x175 = INT8_MAX;
	int64_t x176 = INT64_MIN;
	int32_t t41 = 2482490;

    t41 = (x173!=((x174==x175)/x176));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x177 = UINT8_MAX;
	int8_t x178 = INT8_MIN;
	uint16_t x180 = 6U;
	volatile int32_t t42 = 4370;

    t42 = (x177!=((x178==x179)/x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x181 = 2U;
	volatile uint64_t x182 = 38056673230101542LLU;
	int64_t x183 = INT64_MIN;
	static int16_t x184 = 88;
	static volatile int32_t t43 = 11;

    t43 = (x181!=((x182==x183)/x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x185 = 2746U;
	uint16_t x186 = 0U;
	int32_t x187 = -103050951;
	int64_t x188 = 6LL;

    t44 = (x185!=((x186==x187)/x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x190 = UINT8_MAX;
	volatile int64_t x191 = -1LL;
	int64_t x192 = INT64_MIN;
	int32_t t45 = -84655115;

    t45 = (x189!=((x190==x191)/x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x193 = 0;
	volatile int64_t x194 = 968173637LL;
	int16_t x195 = INT16_MIN;
	volatile int64_t x196 = 31531450LL;
	int32_t t46 = 19084;

    t46 = (x193!=((x194==x195)/x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x197 = INT32_MIN;
	volatile uint16_t x198 = 788U;
	int32_t t47 = 435325622;

    t47 = (x197!=((x198==x199)/x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x202 = INT64_MAX;
	volatile int16_t x203 = INT16_MIN;
	static int32_t x204 = INT32_MIN;

    t48 = (x201!=((x202==x203)/x204));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x206 = 0;
	uint8_t x207 = 0U;
	static volatile int16_t x208 = -1;
	volatile int32_t t49 = 35492;

    t49 = (x205!=((x206==x207)/x208));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x209 = 11;
	int16_t x211 = 0;
	static int64_t x212 = INT64_MAX;
	volatile int32_t t50 = 1036;

    t50 = (x209!=((x210==x211)/x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x213 = INT32_MIN;
	int64_t x215 = INT64_MAX;
	static volatile int16_t x216 = INT16_MIN;

    t51 = (x213!=((x214==x215)/x216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = 1;
	static int16_t x218 = -1;
	uint8_t x219 = 36U;
	int64_t x220 = INT64_MAX;

    t52 = (x217!=((x218==x219)/x220));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x221 = INT8_MIN;
	int32_t x222 = INT32_MIN;
	int64_t x223 = INT64_MIN;
	volatile int32_t x224 = -3676;
	int32_t t53 = 3;

    t53 = (x221!=((x222==x223)/x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x225 = 6;
	volatile int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MIN;
	static int64_t x228 = 1994555147263448740LL;
	int32_t t54 = -733;

    t54 = (x225!=((x226==x227)/x228));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x230 = INT16_MIN;
	uint64_t x232 = 12379917LLU;
	static int32_t t55 = -1376912;

    t55 = (x229!=((x230==x231)/x232));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x236 = INT16_MIN;
	static volatile int32_t t56 = -2289514;

    t56 = (x233!=((x234==x235)/x236));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x237 = 22U;
	int8_t x238 = -40;
	static int64_t x240 = -23850LL;

    t57 = (x237!=((x238==x239)/x240));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint64_t x241 = UINT64_MAX;
	volatile int8_t x242 = -3;
	int64_t x243 = INT64_MIN;
	volatile int32_t t58 = -2;

    t58 = (x241!=((x242==x243)/x244));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x245 = 2509775LLU;
	uint8_t x246 = UINT8_MAX;
	static int16_t x248 = -1;

    t59 = (x245!=((x246==x247)/x248));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x250 = 30331U;
	static int32_t x251 = INT32_MIN;
	int8_t x252 = 42;
	int32_t t60 = 0;

    t60 = (x249!=((x250==x251)/x252));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x253 = INT8_MIN;
	int64_t x254 = -1LL;
	int8_t x255 = -5;
	int32_t x256 = INT32_MIN;
	int32_t t61 = -2414352;

    t61 = (x253!=((x254==x255)/x256));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x259 = 42U;
	int32_t t62 = 15;

    t62 = (x257!=((x258==x259)/x260));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x261 = 15U;
	static uint64_t x262 = 6705LLU;
	int8_t x263 = INT8_MAX;
	int16_t x264 = 190;
	volatile int32_t t63 = -1339067;

    t63 = (x261!=((x262==x263)/x264));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x265 = UINT8_MAX;
	uint16_t x266 = UINT16_MAX;
	int32_t x267 = INT32_MIN;
	int32_t t64 = -813599;

    t64 = (x265!=((x266==x267)/x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x269 = UINT16_MAX;
	int16_t x270 = -1;
	volatile int64_t x272 = 14099251LL;
	static int32_t t65 = -27542812;

    t65 = (x269!=((x270==x271)/x272));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MIN;
	int16_t x275 = INT16_MIN;
	int32_t x276 = -93046;
	int32_t t66 = -194;

    t66 = (x273!=((x274==x275)/x276));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = INT16_MIN;
	volatile int16_t x279 = INT16_MIN;
	int32_t t67 = -1;

    t67 = (x277!=((x278==x279)/x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x281 = -1LL;
	volatile int16_t x282 = INT16_MIN;
	int32_t x284 = -1;
	volatile int32_t t68 = -44;

    t68 = (x281!=((x282==x283)/x284));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x285 = -1;
	volatile int32_t x286 = -207959025;
	int32_t x287 = -1;
	static int8_t x288 = INT8_MIN;
	int32_t t69 = 1;

    t69 = (x285!=((x286==x287)/x288));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x289 = INT32_MIN;
	uint64_t x290 = 44LLU;
	uint64_t x291 = UINT64_MAX;
	int64_t x292 = -1034476201LL;
	volatile int32_t t70 = -23697274;

    t70 = (x289!=((x290==x291)/x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = INT32_MIN;
	int32_t x294 = INT32_MIN;
	uint16_t x295 = 13890U;
	int32_t x296 = -3215;
	volatile int32_t t71 = 33;

    t71 = (x293!=((x294==x295)/x296));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint8_t x297 = 1U;
	static volatile uint8_t x298 = UINT8_MAX;
	uint8_t x299 = UINT8_MAX;
	int8_t x300 = INT8_MIN;
	int32_t t72 = -2390;

    t72 = (x297!=((x298==x299)/x300));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x301 = INT8_MIN;
	int8_t x303 = -1;
	volatile int32_t t73 = 57;

    t73 = (x301!=((x302==x303)/x304));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x305 = 7670U;
	int32_t x306 = 3463171;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MIN;

    t74 = (x305!=((x306==x307)/x308));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = INT64_MAX;
	uint8_t x312 = 34U;

    t75 = (x309!=((x310==x311)/x312));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x313 = INT16_MAX;
	int16_t x314 = INT16_MIN;
	static uint16_t x316 = UINT16_MAX;
	int32_t t76 = 4543114;

    t76 = (x313!=((x314==x315)/x316));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x317 = INT64_MIN;
	static int64_t x318 = INT64_MIN;
	volatile uint16_t x319 = 121U;
	static uint32_t x320 = 1556U;
	static int32_t t77 = 287;

    t77 = (x317!=((x318==x319)/x320));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x321 = -32;
	static uint32_t x322 = 93988491U;
	static uint16_t x323 = 13833U;
	int16_t x324 = -1;

    t78 = (x321!=((x322==x323)/x324));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x325 = INT64_MIN;
	int64_t x327 = 32823087987602LL;
	int16_t x328 = INT16_MAX;

    t79 = (x325!=((x326==x327)/x328));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x329 = INT16_MIN;
	uint64_t x330 = 4060674163140157LLU;
	uint8_t x332 = 4U;
	int32_t t80 = 4681;

    t80 = (x329!=((x330==x331)/x332));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x333 = -25;
	uint64_t x335 = 8195964575782721LLU;
	static uint64_t x336 = 69961086749294551LLU;
	int32_t t81 = 1232474;

    t81 = (x333!=((x334==x335)/x336));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x337 = INT8_MIN;
	static int32_t x338 = 5301042;
	volatile int8_t x339 = INT8_MAX;
	static volatile int32_t t82 = -117253;

    t82 = (x337!=((x338==x339)/x340));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x341 = UINT64_MAX;
	volatile int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	int32_t t83 = 0;

    t83 = (x341!=((x342==x343)/x344));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MIN;
	static volatile uint32_t x351 = UINT32_MAX;
	uint64_t x352 = 244104050623036LLU;

    t84 = (x349!=((x350==x351)/x352));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MAX;
	int32_t x356 = INT32_MAX;
	static volatile int32_t t85 = 1215255;

    t85 = (x353!=((x354==x355)/x356));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x357 = INT64_MAX;
	volatile uint32_t x358 = 164U;
	int32_t x360 = INT32_MIN;

    t86 = (x357!=((x358==x359)/x360));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x362 = INT16_MIN;
	int64_t x363 = 1047379862723340LL;
	static int64_t x364 = INT64_MIN;
	static int32_t t87 = 179806701;

    t87 = (x361!=((x362==x363)/x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = INT16_MAX;
	static volatile uint8_t x366 = 2U;
	volatile uint8_t x367 = 9U;
	int8_t x368 = INT8_MAX;

    t88 = (x365!=((x366==x367)/x368));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x369 = INT8_MAX;
	static int32_t x370 = INT32_MIN;
	int32_t t89 = 2;

    t89 = (x369!=((x370==x371)/x372));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint8_t x373 = 58U;
	int8_t x375 = INT8_MIN;
	uint16_t x376 = 10677U;
	int32_t t90 = -438;

    t90 = (x373!=((x374==x375)/x376));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x377 = 14U;
	static uint32_t x378 = 23308689U;
	static uint32_t x379 = 142U;
	static int32_t x380 = 508044008;

    t91 = (x377!=((x378==x379)/x380));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x381 = 13631U;
	volatile int16_t x382 = INT16_MIN;
	int16_t x383 = -1;
	volatile uint64_t x384 = UINT64_MAX;
	static int32_t t92 = -769473;

    t92 = (x381!=((x382==x383)/x384));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x385 = 43;
	int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MAX;
	static int32_t t93 = -2;

    t93 = (x385!=((x386==x387)/x388));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MIN;
	volatile uint16_t x392 = 93U;

    t94 = (x389!=((x390==x391)/x392));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x394 = 7798;
	int16_t x395 = 6842;
	int8_t x396 = -1;

    t95 = (x393!=((x394==x395)/x396));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x397 = UINT64_MAX;
	int64_t x398 = INT64_MAX;
	static uint64_t x400 = 542282LLU;
	int32_t t96 = -13719166;

    t96 = (x397!=((x398==x399)/x400));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x401 = INT32_MIN;
	static int32_t x402 = -1;
	uint64_t x403 = 218LLU;
	volatile uint16_t x404 = 134U;
	volatile int32_t t97 = -282985564;

    t97 = (x401!=((x402==x403)/x404));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x405 = -1;
	int16_t x406 = INT16_MIN;
	int16_t x407 = -1;
	static int32_t x408 = 45;
	int32_t t98 = 8507;

    t98 = (x405!=((x406==x407)/x408));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x412 = INT64_MIN;

    t99 = (x409!=((x410==x411)/x412));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x417 = 0U;
	static uint8_t x418 = UINT8_MAX;
	static uint32_t x419 = UINT32_MAX;
	uint8_t x420 = 1U;
	int32_t t100 = 35121620;

    t100 = (x417!=((x418==x419)/x420));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int32_t x421 = INT32_MIN;
	int8_t x422 = INT8_MIN;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t101 = 87739;

    t101 = (x421!=((x422==x423)/x424));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x425 = -25705;
	uint32_t x426 = 6938734U;
	int16_t x428 = -1;
	int32_t t102 = 85268208;

    t102 = (x425!=((x426==x427)/x428));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x430 = -1LL;
	int32_t x432 = 60;
	int32_t t103 = -1;

    t103 = (x429!=((x430==x431)/x432));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x433 = INT8_MIN;
	static int16_t x435 = -4295;
	int64_t x436 = INT64_MIN;
	int32_t t104 = 21;

    t104 = (x433!=((x434==x435)/x436));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t t105 = 2567102;

    t105 = (x437!=((x438==x439)/x440));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x441 = INT16_MIN;
	int64_t x442 = -1LL;
	int16_t x443 = -1;
	static int64_t x444 = -190LL;
	static int32_t t106 = 213;

    t106 = (x441!=((x442==x443)/x444));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t t107 = 93898225;

    t107 = (x445!=((x446==x447)/x448));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x449 = 16757U;
	int8_t x450 = 1;
	int32_t x451 = INT32_MAX;

    t108 = (x449!=((x450==x451)/x452));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x454 = 355199U;
	uint64_t x456 = 57659629646LLU;
	volatile int32_t t109 = -99629;

    t109 = (x453!=((x454==x455)/x456));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x457 = INT8_MIN;
	uint8_t x458 = 12U;
	int32_t t110 = -55515696;

    t110 = (x457!=((x458==x459)/x460));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x461 = INT32_MAX;
	int64_t x462 = INT64_MIN;
	static int8_t x463 = INT8_MIN;
	static volatile int16_t x464 = -1;

    t111 = (x461!=((x462==x463)/x464));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x465 = INT64_MIN;
	volatile uint8_t x466 = 6U;
	uint32_t x467 = UINT32_MAX;
	int8_t x468 = INT8_MIN;
	int32_t t112 = 6;

    t112 = (x465!=((x466==x467)/x468));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x470 = 4;
	volatile uint32_t x471 = 44067U;
	int16_t x472 = INT16_MAX;
	int32_t t113 = 173;

    t113 = (x469!=((x470==x471)/x472));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x474 = INT64_MAX;
	int64_t x476 = INT64_MIN;
	static volatile int32_t t114 = 11271164;

    t114 = (x473!=((x474==x475)/x476));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x477 = INT16_MAX;
	volatile int64_t x479 = -1LL;
	int32_t x480 = -2246;
	int32_t t115 = -2;

    t115 = (x477!=((x478==x479)/x480));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x481 = 50;
	static uint64_t x483 = UINT64_MAX;
	int64_t x484 = INT64_MAX;
	static int32_t t116 = 1;

    t116 = (x481!=((x482==x483)/x484));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x485 = -1LL;
	uint8_t x486 = UINT8_MAX;
	int16_t x487 = INT16_MIN;
	uint8_t x488 = 2U;
	volatile int32_t t117 = 242521;

    t117 = (x485!=((x486==x487)/x488));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x489 = 4U;
	volatile int32_t x490 = INT32_MIN;
	static volatile int32_t x491 = -20;
	static int16_t x492 = 994;
	static volatile int32_t t118 = -29738771;

    t118 = (x489!=((x490==x491)/x492));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x493 = 115363464LL;
	int64_t x494 = -1LL;
	uint64_t x495 = 8846505752804011LLU;
	uint32_t x496 = 589U;
	int32_t t119 = 6371;

    t119 = (x493!=((x494==x495)/x496));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x497 = INT16_MIN;
	int64_t x498 = INT64_MAX;
	volatile int16_t x499 = INT16_MIN;
	int16_t x500 = INT16_MIN;

    t120 = (x497!=((x498==x499)/x500));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x502 = 12159LLU;
	uint32_t x504 = 1593262110U;
	volatile int32_t t121 = 6;

    t121 = (x501!=((x502==x503)/x504));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x505 = 11370696315622990LLU;
	int64_t x506 = INT64_MIN;
	uint8_t x507 = UINT8_MAX;
	volatile int32_t t122 = -819;

    t122 = (x505!=((x506==x507)/x508));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x510 = 62U;
	volatile uint64_t x511 = 54007741594497519LLU;
	static volatile uint64_t x512 = 41464687500LLU;
	volatile int32_t t123 = -207;

    t123 = (x509!=((x510==x511)/x512));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x513 = 117U;
	static volatile int32_t t124 = 403184;

    t124 = (x513!=((x514==x515)/x516));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint32_t x517 = UINT32_MAX;
	static int8_t x518 = 32;
	static int8_t x519 = INT8_MIN;
	volatile int32_t t125 = 384;

    t125 = (x517!=((x518==x519)/x520));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x521 = 31U;
	int32_t x522 = -1;
	uint8_t x523 = 98U;
	int8_t x524 = INT8_MIN;
	volatile int32_t t126 = 0;

    t126 = (x521!=((x522==x523)/x524));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x525 = 1737U;
	int16_t x526 = -1;
	uint8_t x527 = UINT8_MAX;
	int32_t x528 = INT32_MIN;
	volatile int32_t t127 = -116;

    t127 = (x525!=((x526==x527)/x528));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x529 = -1;
	int16_t x530 = -16380;
	volatile int32_t x532 = -28006;
	int32_t t128 = 40499472;

    t128 = (x529!=((x530==x531)/x532));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x534 = INT32_MAX;
	static int64_t x536 = INT64_MIN;
	volatile int32_t t129 = 1504462;

    t129 = (x533!=((x534==x535)/x536));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x537 = 183U;
	int64_t x538 = -1LL;
	volatile uint64_t x540 = UINT64_MAX;
	static volatile int32_t t130 = -208;

    t130 = (x537!=((x538==x539)/x540));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint64_t x541 = UINT64_MAX;
	int8_t x542 = INT8_MIN;
	int64_t x543 = -134824653698777LL;
	volatile int8_t x544 = -1;
	int32_t t131 = -4886;

    t131 = (x541!=((x542==x543)/x544));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x545 = UINT8_MAX;
	volatile int8_t x546 = -1;
	volatile int8_t x547 = INT8_MAX;
	volatile int32_t t132 = -268764;

    t132 = (x545!=((x546==x547)/x548));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x550 = 29;
	int8_t x551 = INT8_MIN;
	int64_t x552 = -1LL;
	int32_t t133 = -1;

    t133 = (x549!=((x550==x551)/x552));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x553 = -1;
	uint16_t x554 = 693U;
	volatile int32_t x556 = INT32_MAX;
	int32_t t134 = 1;

    t134 = (x553!=((x554==x555)/x556));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x557 = -48842;
	int8_t x559 = INT8_MIN;
	int16_t x560 = INT16_MIN;
	volatile int32_t t135 = 4;

    t135 = (x557!=((x558==x559)/x560));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x561 = 141U;
	int8_t x564 = INT8_MAX;
	volatile int32_t t136 = -5;

    t136 = (x561!=((x562==x563)/x564));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x565 = 7U;
	int32_t x566 = 20434044;
	volatile int64_t x568 = -1LL;
	volatile int32_t t137 = 32568311;

    t137 = (x565!=((x566==x567)/x568));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint8_t x569 = UINT8_MAX;
	int32_t x570 = -5307222;
	int8_t x572 = -1;
	int32_t t138 = 8815;

    t138 = (x569!=((x570==x571)/x572));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x573 = 13;
	static int8_t x574 = 1;
	int16_t x575 = INT16_MIN;
	int8_t x576 = INT8_MAX;

    t139 = (x573!=((x574==x575)/x576));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x579 = UINT64_MAX;
	uint32_t x580 = 721U;
	int32_t t140 = 88;

    t140 = (x577!=((x578==x579)/x580));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x581 = -963040LL;
	volatile uint64_t x582 = 3067444753631021LLU;
	uint64_t x583 = 975696134LLU;
	static int32_t t141 = 1;

    t141 = (x581!=((x582==x583)/x584));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x585 = 5U;
	volatile uint64_t x586 = 507LLU;

    t142 = (x585!=((x586==x587)/x588));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x589 = -1;
	static uint8_t x590 = 6U;
	static uint16_t x591 = 120U;
	int8_t x592 = -14;
	volatile int32_t t143 = 42246;

    t143 = (x589!=((x590==x591)/x592));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x593 = INT8_MIN;
	uint32_t x594 = 860U;
	int32_t t144 = -491;

    t144 = (x593!=((x594==x595)/x596));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x597 = INT64_MAX;
	uint32_t x598 = 19U;
	int64_t x599 = INT64_MIN;
	static int64_t x600 = INT64_MIN;
	volatile int32_t t145 = 11155599;

    t145 = (x597!=((x598==x599)/x600));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x601 = INT16_MAX;
	int32_t x603 = 739727019;
	volatile int32_t t146 = 0;

    t146 = (x601!=((x602==x603)/x604));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x605 = -17;
	int32_t x606 = INT32_MAX;
	int8_t x607 = INT8_MAX;
	int16_t x608 = -1;
	int32_t t147 = -984;

    t147 = (x605!=((x606==x607)/x608));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x609 = INT32_MIN;
	int16_t x610 = INT16_MAX;
	uint64_t x611 = 16031282421703429LLU;
	int16_t x612 = 56;
	int32_t t148 = -862060766;

    t148 = (x609!=((x610==x611)/x612));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x613 = INT64_MIN;
	uint8_t x614 = UINT8_MAX;
	int64_t x615 = INT64_MIN;
	int32_t t149 = 6239;

    t149 = (x613!=((x614==x615)/x616));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x617 = 125U;
	int32_t x618 = -1;
	int32_t t150 = -33057231;

    t150 = (x617!=((x618==x619)/x620));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x621 = -1;
	static int8_t x623 = 61;
	uint64_t x624 = UINT64_MAX;
	int32_t t151 = -51;

    t151 = (x621!=((x622==x623)/x624));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x626 = -2601;
	int64_t x627 = INT64_MAX;
	static uint16_t x628 = 1444U;
	static int32_t t152 = 13;

    t152 = (x625!=((x626==x627)/x628));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x629 = 1;
	volatile uint32_t x630 = 36013803U;
	static uint64_t x631 = 603211881153638LLU;
	static int16_t x632 = 94;
	volatile int32_t t153 = 13035;

    t153 = (x629!=((x630==x631)/x632));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x633 = 6080356784423087799LLU;
	uint64_t x634 = UINT64_MAX;
	int16_t x635 = INT16_MIN;
	int8_t x636 = INT8_MAX;
	static int32_t t154 = 173360171;

    t154 = (x633!=((x634==x635)/x636));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x637 = UINT32_MAX;
	volatile int8_t x638 = INT8_MIN;
	volatile uint32_t x639 = 690U;
	int32_t x640 = INT32_MIN;
	int32_t t155 = 520036;

    t155 = (x637!=((x638==x639)/x640));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x641 = 17;
	int32_t x642 = INT32_MIN;
	uint64_t x643 = 20550157LLU;
	static uint64_t x644 = 425751809194522407LLU;
	int32_t t156 = 90185;

    t156 = (x641!=((x642==x643)/x644));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x648 = INT64_MIN;
	volatile int32_t t157 = 16;

    t157 = (x645!=((x646==x647)/x648));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x649 = 4U;
	int64_t x650 = -1LL;
	volatile int16_t x651 = INT16_MIN;
	static int64_t x652 = INT64_MAX;
	volatile int32_t t158 = -686088028;

    t158 = (x649!=((x650==x651)/x652));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x653 = 224000670;
	int64_t x654 = INT64_MAX;
	uint16_t x655 = 5525U;
	volatile int8_t x656 = INT8_MIN;
	volatile int32_t t159 = 265366386;

    t159 = (x653!=((x654==x655)/x656));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x657 = 16083366U;
	uint8_t x658 = 46U;
	volatile uint8_t x660 = 2U;
	volatile int32_t t160 = 194833;

    t160 = (x657!=((x658==x659)/x660));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x661 = -1;
	static uint8_t x662 = 1U;
	uint16_t x663 = 819U;
	int32_t t161 = 1;

    t161 = (x661!=((x662==x663)/x664));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x665 = 858937LL;
	int8_t x666 = 2;
	int32_t x668 = -1427419;
	volatile int32_t t162 = 609646;

    t162 = (x665!=((x666==x667)/x668));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x669 = 182;
	int16_t x671 = -1;

    t163 = (x669!=((x670==x671)/x672));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x673 = UINT8_MAX;
	static int16_t x676 = INT16_MIN;

    t164 = (x673!=((x674==x675)/x676));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x677 = 3U;
	static int8_t x679 = INT8_MAX;
	int64_t x680 = -1LL;
	static volatile int32_t t165 = 216268;

    t165 = (x677!=((x678==x679)/x680));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x681 = 6605;
	int32_t x682 = INT32_MIN;
	uint32_t x683 = 3514U;
	uint32_t x684 = UINT32_MAX;

    t166 = (x681!=((x682==x683)/x684));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x685 = 1U;
	static int8_t x686 = INT8_MIN;
	static int8_t x688 = INT8_MIN;
	volatile int32_t t167 = 25442;

    t167 = (x685!=((x686==x687)/x688));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x689 = UINT16_MAX;
	static volatile int8_t x690 = INT8_MIN;
	int64_t x691 = INT64_MIN;
	volatile uint64_t x692 = 296529LLU;
	static int32_t t168 = 3147154;

    t168 = (x689!=((x690==x691)/x692));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x693 = INT16_MIN;
	int16_t x695 = 14533;
	static volatile uint32_t x696 = 3319U;

    t169 = (x693!=((x694==x695)/x696));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x697 = 839771427304631972LL;
	uint64_t x698 = 201636690044357068LLU;
	int64_t x699 = -1LL;
	int64_t x700 = INT64_MIN;
	static int32_t t170 = 107;

    t170 = (x697!=((x698==x699)/x700));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x701 = INT8_MIN;
	static int32_t x702 = -1;
	uint32_t x704 = 45076436U;
	int32_t t171 = -116527;

    t171 = (x701!=((x702==x703)/x704));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x705 = 58U;
	int32_t x706 = -1;
	int64_t x708 = -1LL;
	volatile int32_t t172 = -183727664;

    t172 = (x705!=((x706==x707)/x708));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x709 = INT8_MIN;
	static volatile uint16_t x710 = 13U;
	static int32_t x711 = -1;

    t173 = (x709!=((x710==x711)/x712));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x713 = INT64_MIN;
	int8_t x714 = INT8_MAX;
	int16_t x715 = INT16_MIN;
	volatile int32_t x716 = INT32_MAX;

    t174 = (x713!=((x714==x715)/x716));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x717 = INT64_MAX;
	int32_t x718 = INT32_MIN;
	uint8_t x719 = UINT8_MAX;
	int32_t t175 = 3592070;

    t175 = (x717!=((x718==x719)/x720));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x721 = 48403LL;
	volatile uint64_t x723 = 237284027014LLU;
	uint32_t x724 = 459U;
	static volatile int32_t t176 = -517127;

    t176 = (x721!=((x722==x723)/x724));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x725 = 2U;
	uint8_t x726 = 16U;
	int8_t x727 = INT8_MAX;
	static int64_t x728 = -1LL;

    t177 = (x725!=((x726==x727)/x728));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x729 = 2901113U;
	int16_t x730 = INT16_MAX;
	uint8_t x732 = 6U;
	static volatile int32_t t178 = 1;

    t178 = (x729!=((x730==x731)/x732));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x734 = UINT32_MAX;
	static volatile int32_t t179 = -2249;

    t179 = (x733!=((x734==x735)/x736));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x737 = 265488921747LL;
	static uint8_t x738 = UINT8_MAX;
	int32_t x739 = -1;
	int16_t x740 = INT16_MIN;
	volatile int32_t t180 = -97756724;

    t180 = (x737!=((x738==x739)/x740));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x741 = INT8_MAX;
	uint8_t x742 = 28U;
	uint16_t x743 = UINT16_MAX;
	int64_t x744 = INT64_MIN;
	int32_t t181 = 188;

    t181 = (x741!=((x742==x743)/x744));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x745 = -1;
	volatile int16_t x746 = INT16_MIN;
	int64_t x747 = INT64_MIN;
	int8_t x748 = INT8_MIN;
	int32_t t182 = 1191303;

    t182 = (x745!=((x746==x747)/x748));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x750 = UINT16_MAX;
	volatile int64_t x751 = -1LL;
	int32_t x752 = 12;
	int32_t t183 = -374987017;

    t183 = (x749!=((x750==x751)/x752));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x754 = -115910LL;
	int32_t x755 = -1;
	int32_t x756 = INT32_MIN;
	int32_t t184 = -13296;

    t184 = (x753!=((x754==x755)/x756));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x758 = -1979913LL;
	int8_t x759 = -1;
	uint8_t x760 = UINT8_MAX;
	volatile int32_t t185 = 0;

    t185 = (x757!=((x758==x759)/x760));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x761 = 0LLU;
	int64_t x762 = INT64_MAX;
	volatile uint16_t x763 = 2U;
	int16_t x764 = INT16_MIN;

    t186 = (x761!=((x762==x763)/x764));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x765 = 0U;
	static volatile int16_t x766 = -335;
	static int64_t x768 = -1LL;
	volatile int32_t t187 = 2503;

    t187 = (x765!=((x766==x767)/x768));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x769 = -1;
	volatile int32_t x770 = 0;
	uint16_t x771 = 732U;
	int8_t x772 = INT8_MIN;

    t188 = (x769!=((x770==x771)/x772));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x773 = 516LLU;
	int8_t x774 = INT8_MAX;
	uint16_t x776 = 4U;
	volatile int32_t t189 = 1;

    t189 = (x773!=((x774==x775)/x776));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint8_t x777 = 3U;
	uint16_t x778 = UINT16_MAX;
	int8_t x779 = -41;
	static uint8_t x780 = 11U;
	volatile int32_t t190 = 282505;

    t190 = (x777!=((x778==x779)/x780));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x781 = INT32_MAX;
	static int32_t x782 = -217;
	int16_t x783 = -283;
	volatile uint64_t x784 = UINT64_MAX;
	static volatile int32_t t191 = 205;

    t191 = (x781!=((x782==x783)/x784));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x786 = INT32_MAX;
	int64_t x787 = -1LL;
	int32_t x788 = 460749;
	volatile int32_t t192 = 49;

    t192 = (x785!=((x786==x787)/x788));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x789 = 47597467784LLU;
	int8_t x791 = INT8_MAX;
	int32_t x792 = -1;

    t193 = (x789!=((x790==x791)/x792));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x793 = INT32_MIN;
	static uint64_t x794 = 5272168248058955LLU;
	volatile uint32_t x796 = UINT32_MAX;
	int32_t t194 = 22524851;

    t194 = (x793!=((x794==x795)/x796));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x797 = -4419854LL;
	static int32_t x799 = INT32_MAX;
	static int32_t t195 = -349363850;

    t195 = (x797!=((x798==x799)/x800));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x803 = 15363U;
	int32_t t196 = -2450177;

    t196 = (x801!=((x802==x803)/x804));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x805 = 76U;
	uint16_t x807 = UINT16_MAX;
	volatile int64_t x808 = INT64_MIN;

    t197 = (x805!=((x806==x807)/x808));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x809 = INT8_MIN;
	int8_t x810 = INT8_MAX;
	int16_t x811 = -8747;
	int32_t t198 = 8994464;

    t198 = (x809!=((x810==x811)/x812));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x814 = INT32_MIN;
	uint16_t x815 = 415U;
	int32_t x816 = INT32_MIN;
	int32_t t199 = 1338784;

    t199 = (x813!=((x814==x815)/x816));

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

