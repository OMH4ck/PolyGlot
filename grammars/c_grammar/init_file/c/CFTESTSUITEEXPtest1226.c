
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

int64_t x3 = 4300548230LL;
int16_t x6 = 46;
int16_t x9 = -1;
int16_t x10 = INT16_MIN;
int16_t x13 = INT16_MIN;
int64_t x20 = -1LL;
int16_t x34 = 1206;
int64_t x36 = -1LL;
uint32_t x38 = 213U;
uint16_t x41 = UINT16_MAX;
uint16_t x42 = UINT16_MAX;
volatile int16_t x52 = INT16_MAX;
int16_t x55 = INT16_MAX;
volatile int32_t x57 = -1;
uint32_t x60 = 23766U;
static volatile int32_t t14 = -818;
int32_t x69 = -5314445;
uint32_t x70 = 302661488U;
int32_t x71 = INT32_MIN;
volatile int32_t t17 = -44144;
static int32_t t18 = -9707439;
int16_t x85 = INT16_MIN;
uint64_t x88 = 2708012066289026LLU;
volatile uint64_t x92 = 123588LLU;
volatile int64_t x93 = INT64_MIN;
int32_t x98 = INT32_MIN;
int32_t x102 = -1;
int32_t t24 = -34383789;
static int8_t x105 = -28;
uint32_t x107 = 17U;
volatile uint64_t x112 = UINT64_MAX;
int16_t x120 = -13827;
int16_t x122 = INT16_MIN;
volatile int8_t x125 = INT8_MIN;
int16_t x128 = INT16_MAX;
int32_t t30 = -120922004;
static uint16_t x130 = 1U;
int8_t x131 = INT8_MIN;
uint64_t x133 = 1332640342016974LLU;
int16_t x138 = INT16_MIN;
volatile uint16_t x144 = UINT16_MAX;
int64_t x146 = -1LL;
int64_t x148 = INT64_MIN;
int32_t t35 = -291;
static uint64_t x150 = 15913197LLU;
uint8_t x152 = UINT8_MAX;
static int32_t t37 = 3434311;
static int8_t x160 = -1;
static uint16_t x161 = 1642U;
int64_t x163 = INT64_MAX;
uint16_t x167 = 844U;
int32_t t40 = 58634504;
int64_t x171 = -1LL;
volatile int16_t x174 = 6858;
uint32_t x175 = 16166U;
int8_t x181 = -1;
static int32_t x213 = -178;
uint64_t x217 = UINT64_MAX;
int16_t x220 = INT16_MIN;
int32_t t52 = 287;
int32_t t53 = 5060;
int64_t x236 = -13938456232363172LL;
int8_t x238 = INT8_MIN;
int16_t x242 = INT16_MIN;
uint32_t x244 = UINT32_MAX;
int32_t t58 = 1056436378;
volatile int8_t x247 = 0;
static int16_t x248 = -3733;
static uint64_t x252 = UINT64_MAX;
int32_t t60 = 169191776;
volatile int32_t t61 = -19203111;
uint64_t x263 = 1714LLU;
int32_t x267 = -3824;
volatile int32_t t64 = 1115;
int16_t x271 = -75;
int32_t t66 = -15067;
int8_t x277 = -1;
static uint8_t x278 = UINT8_MAX;
static int64_t x280 = -1LL;
int64_t x281 = -1LL;
static int32_t x283 = INT32_MIN;
volatile int32_t x287 = INT32_MIN;
uint16_t x292 = 19U;
uint64_t x293 = 718149764764729809LLU;
volatile int32_t t71 = -17;
int32_t x302 = -21590841;
static uint8_t x303 = 2U;
volatile uint32_t x304 = 158418U;
static int64_t x309 = INT64_MIN;
volatile int16_t x310 = -1;
int32_t x319 = 130928559;
int32_t t77 = 648;
volatile int32_t t79 = -27633;
int32_t x332 = -1;
int32_t t80 = -38;
int32_t x337 = 13486015;
int16_t x342 = INT16_MIN;
uint8_t x345 = 6U;
uint16_t x346 = 140U;
static uint32_t x347 = 3U;
uint64_t x348 = UINT64_MAX;
static uint64_t x349 = 1105LLU;
int32_t x366 = INT32_MIN;
volatile int64_t x370 = INT64_MIN;
volatile int32_t t90 = 251021;
int8_t x380 = -1;
int32_t x385 = -1;
uint16_t x387 = 0U;
static volatile int32_t x388 = -97208;
static uint16_t x390 = 236U;
int16_t x392 = -798;
static int32_t x397 = -1;
uint16_t x399 = 54U;
int32_t x402 = INT32_MIN;
int32_t x403 = INT32_MIN;
uint32_t x407 = 47U;
volatile uint8_t x414 = 0U;
uint64_t x425 = 13301471136153LLU;
int16_t x428 = 180;
volatile int64_t x430 = INT64_MIN;
volatile uint16_t x431 = 11333U;
uint64_t x432 = UINT64_MAX;
int8_t x433 = -1;
static int8_t x435 = INT8_MIN;
int32_t t105 = 743140241;
int16_t x440 = INT16_MIN;
volatile int16_t x443 = INT16_MAX;
volatile int16_t x447 = INT16_MAX;
int32_t x448 = INT32_MIN;
int32_t t109 = 5;
volatile uint64_t x468 = 109568811LLU;
uint64_t x476 = UINT64_MAX;
volatile uint64_t x480 = 198189544417215LLU;
static int8_t x487 = 0;
int64_t x491 = INT64_MIN;
int64_t x493 = INT64_MIN;
static int16_t x498 = INT16_MIN;
int64_t x499 = INT64_MAX;
uint64_t x502 = 45235027061683LLU;
int16_t x507 = -810;
volatile uint32_t x517 = 651890U;
static volatile int8_t x526 = INT8_MAX;
volatile uint64_t x527 = 1831446LLU;
static int32_t t128 = 9;
volatile uint32_t x537 = 3826003U;
volatile int32_t x542 = INT32_MIN;
int8_t x546 = -1;
volatile int32_t t132 = 7;
volatile int32_t t133 = -7;
volatile int16_t x555 = 0;
volatile int64_t x560 = INT64_MAX;
int8_t x567 = INT8_MIN;
int16_t x573 = INT16_MIN;
static volatile int64_t x575 = INT64_MAX;
int8_t x579 = 0;
static volatile int32_t t140 = -177007040;
int32_t t141 = 176567;
int64_t x588 = -1LL;
volatile uint16_t x590 = 19682U;
int32_t t144 = 41;
int16_t x598 = INT16_MIN;
int32_t t145 = 27374381;
int32_t x601 = -62;
static uint8_t x603 = 1U;
volatile int32_t t146 = -1530;
static int8_t x605 = 0;
volatile int16_t x611 = 16;
volatile int64_t x615 = INT64_MIN;
uint16_t x621 = 0U;
int64_t x622 = -609587141571880398LL;
int64_t x623 = INT64_MIN;
volatile uint32_t x624 = 161929052U;
uint8_t x625 = UINT8_MAX;
volatile int32_t t152 = 1372;
int64_t x633 = INT64_MAX;
uint64_t x634 = 32296LLU;
int8_t x639 = INT8_MIN;
volatile int32_t t156 = -89307463;
volatile int32_t t157 = -2;
int64_t x654 = INT64_MAX;
int8_t x663 = INT8_MIN;
int64_t x666 = INT64_MAX;
uint8_t x671 = 1U;
uint64_t x675 = 17337401LLU;
static uint32_t x680 = 101U;
int32_t t165 = -6770;
int8_t x687 = -1;
volatile uint8_t x689 = UINT8_MAX;
int32_t t167 = 1;
int8_t x697 = -1;
int32_t x702 = 1;
uint32_t x703 = UINT32_MAX;
int32_t t172 = -485238129;
volatile int32_t t174 = 13921;
uint16_t x722 = 10650U;
uint8_t x729 = UINT8_MAX;
volatile int32_t t177 = 29315;
static int32_t t178 = -1;
volatile int32_t t180 = -1554558;
volatile int32_t t181 = 0;
static int16_t x749 = -1;
static uint32_t x750 = 922610U;
int32_t x761 = INT32_MAX;
volatile uint8_t x764 = UINT8_MAX;
volatile int32_t t186 = 0;
int32_t t187 = -15;
int32_t x777 = INT32_MIN;
uint8_t x785 = 2U;
volatile int16_t x787 = 4;
volatile uint64_t x789 = 6906059LLU;
volatile uint16_t x795 = 4U;
int8_t x797 = -1;
uint16_t x800 = 3857U;
int8_t x802 = INT8_MIN;
volatile int32_t t194 = 6;
int8_t x805 = INT8_MIN;
int16_t x809 = 14;
int8_t x814 = INT8_MIN;
int8_t x815 = INT8_MIN;
uint8_t x818 = 91U;
int32_t x824 = -237;


void f0(void) {
    	static int32_t x1 = INT32_MIN;
	int8_t x2 = -1;
	static uint32_t x4 = 277901U;
	int32_t t0 = 9;

    t0 = (x1==((x2!=x3)/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -250;
	uint32_t x7 = 3110U;
	uint64_t x8 = 23468857474695LLU;
	static int32_t t1 = -250161;

    t1 = (x5==((x6!=x7)/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x11 = 1;
	uint8_t x12 = 1U;
	static int32_t t2 = -15;

    t2 = (x9==((x10!=x11)/x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = 311337580662012247LL;
	static int64_t x15 = 13LL;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -95085741;

    t3 = (x13==((x14!=x15)/x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 145562321U;
	volatile uint64_t x18 = 425833514106755498LLU;
	int64_t x19 = -113104LL;
	static volatile int32_t t4 = 26968;

    t4 = (x17==((x18!=x19)/x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = 5467U;
	int64_t x22 = -1LL;
	uint64_t x23 = 277204745510699959LLU;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 1828510;

    t5 = (x21==((x22!=x23)/x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = -1;
	volatile uint8_t x26 = UINT8_MAX;
	static uint16_t x27 = 3209U;
	uint32_t x28 = 30204U;
	int32_t t6 = 1;

    t6 = (x25==((x26!=x27)/x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MAX;
	static volatile int64_t x30 = INT64_MAX;
	volatile int64_t x31 = -19114LL;
	volatile int32_t x32 = 3319;
	volatile int32_t t7 = 2;

    t7 = (x29==((x30!=x31)/x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MIN;
	uint32_t x35 = UINT32_MAX;
	int32_t t8 = -12929827;

    t8 = (x33==((x34!=x35)/x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x37 = 22U;
	volatile int32_t x39 = 6265;
	uint32_t x40 = UINT32_MAX;
	int32_t t9 = 2223;

    t9 = (x37==((x38!=x39)/x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x43 = INT16_MAX;
	static uint16_t x44 = 54U;
	static int32_t t10 = 44;

    t10 = (x41==((x42!=x43)/x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 47604147740387166LLU;
	uint32_t x46 = 482U;
	static uint64_t x47 = UINT64_MAX;
	uint64_t x48 = UINT64_MAX;
	static volatile int32_t t11 = 287;

    t11 = (x45==((x46!=x47)/x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -507;
	int8_t x50 = INT8_MAX;
	static int16_t x51 = -65;
	volatile int32_t t12 = -168493;

    t12 = (x49==((x50!=x51)/x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 117U;
	int32_t x54 = 0;
	int64_t x56 = -1LL;
	int32_t t13 = 176664;

    t13 = (x53==((x54!=x55)/x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x58 = 66U;
	static uint16_t x59 = 7987U;

    t14 = (x57==((x58!=x59)/x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	int32_t x62 = INT32_MAX;
	int8_t x63 = INT8_MAX;
	volatile int16_t x64 = -752;
	static int32_t t15 = 963535;

    t15 = (x61==((x62!=x63)/x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 34U;
	static uint8_t x66 = 1U;
	static volatile int8_t x67 = -1;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 915;

    t16 = (x65==((x66!=x67)/x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x72 = 482U;

    t17 = (x69==((x70!=x71)/x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x73 = -1;
	int64_t x74 = -354366LL;
	static uint64_t x75 = 21957482097588044LLU;
	int32_t x76 = INT32_MIN;

    t18 = (x73==((x74!=x75)/x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = UINT16_MAX;
	int64_t x78 = -1LL;
	volatile int16_t x79 = INT16_MAX;
	volatile uint8_t x80 = UINT8_MAX;
	int32_t t19 = -10478018;

    t19 = (x77==((x78!=x79)/x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x86 = 746914887865719LLU;
	static int8_t x87 = INT8_MIN;
	int32_t t20 = 11899401;

    t20 = (x85==((x86!=x87)/x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = -1;
	int64_t x90 = INT64_MIN;
	volatile int32_t x91 = INT32_MAX;
	volatile int32_t t21 = -85006;

    t21 = (x89==((x90!=x91)/x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x94 = INT16_MAX;
	int32_t x95 = 470668406;
	volatile int8_t x96 = INT8_MIN;
	static int32_t t22 = 1;

    t22 = (x93==((x94!=x95)/x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x97 = INT64_MIN;
	int16_t x99 = -1;
	int16_t x100 = INT16_MIN;
	int32_t t23 = -1001722;

    t23 = (x97==((x98!=x99)/x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x101 = UINT32_MAX;
	int8_t x103 = INT8_MIN;
	int16_t x104 = INT16_MIN;

    t24 = (x101==((x102!=x103)/x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x106 = INT64_MIN;
	int16_t x108 = 3;
	volatile int32_t t25 = -712021543;

    t25 = (x105==((x106!=x107)/x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = -1LL;
	static int64_t x110 = -1LL;
	int16_t x111 = INT16_MIN;
	static int32_t t26 = 898;

    t26 = (x109==((x110!=x111)/x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = INT32_MAX;
	static int64_t x114 = -8768334LL;
	int8_t x115 = 17;
	int8_t x116 = INT8_MAX;
	volatile int32_t t27 = -3367296;

    t27 = (x113==((x114!=x115)/x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = INT64_MIN;
	volatile uint8_t x118 = 8U;
	volatile uint8_t x119 = UINT8_MAX;
	volatile int32_t t28 = -12145;

    t28 = (x117==((x118!=x119)/x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x121 = INT16_MAX;
	int16_t x123 = INT16_MIN;
	static volatile int8_t x124 = INT8_MIN;
	static volatile int32_t t29 = 262006637;

    t29 = (x121==((x122!=x123)/x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x126 = UINT16_MAX;
	uint8_t x127 = UINT8_MAX;

    t30 = (x125==((x126!=x127)/x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = INT32_MIN;
	static volatile int32_t x132 = -13682578;
	volatile int32_t t31 = 3712;

    t31 = (x129==((x130!=x131)/x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x134 = INT8_MAX;
	int32_t x135 = -12;
	int64_t x136 = INT64_MAX;
	volatile int32_t t32 = 113763729;

    t32 = (x133==((x134!=x135)/x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x137 = 14U;
	int64_t x139 = -1LL;
	volatile int8_t x140 = INT8_MIN;
	volatile int32_t t33 = 136;

    t33 = (x137==((x138!=x139)/x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x141 = -1;
	int64_t x142 = -1LL;
	volatile int8_t x143 = 1;
	volatile int32_t t34 = 1;

    t34 = (x141==((x142!=x143)/x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x145 = 214206U;
	volatile uint64_t x147 = 20139730LLU;

    t35 = (x145==((x146!=x147)/x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x149 = 1;
	static volatile int8_t x151 = INT8_MIN;
	int32_t t36 = 118345;

    t36 = (x149==((x150!=x151)/x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = INT8_MIN;
	volatile int32_t x154 = -29181593;
	static int16_t x155 = INT16_MAX;
	static int16_t x156 = INT16_MIN;

    t37 = (x153==((x154!=x155)/x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x157 = UINT64_MAX;
	volatile int32_t x158 = 1026556;
	volatile int32_t x159 = INT32_MIN;
	static volatile int32_t t38 = 254954;

    t38 = (x157==((x158!=x159)/x160));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x162 = 1370;
	static int32_t x164 = -1;
	int32_t t39 = -385;

    t39 = (x161==((x162!=x163)/x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x165 = -1;
	int32_t x166 = INT32_MAX;
	static volatile int16_t x168 = INT16_MAX;

    t40 = (x165==((x166!=x167)/x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = INT16_MIN;
	volatile int8_t x170 = INT8_MAX;
	uint16_t x172 = 61U;
	int32_t t41 = -7192;

    t41 = (x169==((x170!=x171)/x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x173 = -1;
	uint8_t x176 = UINT8_MAX;
	int32_t t42 = -739996;

    t42 = (x173==((x174!=x175)/x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x177 = UINT8_MAX;
	int8_t x178 = INT8_MIN;
	int16_t x179 = -1;
	int16_t x180 = INT16_MIN;
	int32_t t43 = -91;

    t43 = (x177==((x178!=x179)/x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x182 = 224047U;
	uint32_t x183 = 14U;
	int8_t x184 = 1;
	static volatile int32_t t44 = -81932;

    t44 = (x181==((x182!=x183)/x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x185 = UINT64_MAX;
	uint8_t x186 = UINT8_MAX;
	int64_t x187 = 128388472311456LL;
	int64_t x188 = INT64_MIN;
	static volatile int32_t t45 = 569590;

    t45 = (x185==((x186!=x187)/x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = -1;
	int64_t x190 = INT64_MIN;
	uint64_t x191 = UINT64_MAX;
	uint8_t x192 = UINT8_MAX;
	static volatile int32_t t46 = 2;

    t46 = (x189==((x190!=x191)/x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x193 = 1164364LLU;
	static int64_t x194 = INT64_MIN;
	int16_t x195 = -1;
	static int8_t x196 = INT8_MIN;
	static int32_t t47 = 60448;

    t47 = (x193==((x194!=x195)/x196));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x197 = INT16_MIN;
	uint64_t x198 = 637LLU;
	volatile uint64_t x199 = 272662239604LLU;
	int32_t x200 = INT32_MIN;
	static int32_t t48 = 18;

    t48 = (x197==((x198!=x199)/x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x201 = -6;
	int64_t x202 = -1LL;
	uint8_t x203 = 65U;
	static int32_t x204 = -853145;
	volatile int32_t t49 = 43;

    t49 = (x201==((x202!=x203)/x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x205 = 49;
	volatile uint32_t x206 = 2200314U;
	int64_t x207 = -1LL;
	int64_t x208 = -340LL;
	volatile int32_t t50 = 4;

    t50 = (x205==((x206!=x207)/x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x214 = -1;
	uint16_t x215 = UINT16_MAX;
	int32_t x216 = 3113232;
	static int32_t t51 = 92452;

    t51 = (x213==((x214!=x215)/x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x218 = INT16_MIN;
	uint64_t x219 = UINT64_MAX;

    t52 = (x217==((x218!=x219)/x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x221 = 2U;
	volatile int64_t x222 = -1LL;
	int8_t x223 = -1;
	int64_t x224 = INT64_MIN;

    t53 = (x221==((x222!=x223)/x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = 55961LL;
	int8_t x226 = INT8_MAX;
	int64_t x227 = -3392193LL;
	int16_t x228 = INT16_MIN;
	static int32_t t54 = 62161854;

    t54 = (x225==((x226!=x227)/x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x229 = -196;
	int64_t x230 = INT64_MAX;
	static int32_t x231 = 2261;
	int8_t x232 = INT8_MIN;
	volatile int32_t t55 = 2626129;

    t55 = (x229==((x230!=x231)/x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = 1;
	int16_t x234 = INT16_MIN;
	int8_t x235 = -2;
	volatile int32_t t56 = -24827;

    t56 = (x233==((x234!=x235)/x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x237 = UINT8_MAX;
	volatile int32_t x239 = INT32_MAX;
	int16_t x240 = -2299;
	volatile int32_t t57 = -492;

    t57 = (x237==((x238!=x239)/x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = INT64_MIN;
	static int64_t x243 = -246030893202LL;

    t58 = (x241==((x242!=x243)/x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x245 = INT16_MIN;
	uint16_t x246 = 247U;
	volatile int32_t t59 = 255204;

    t59 = (x245==((x246!=x247)/x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x249 = 47U;
	volatile int32_t x250 = INT32_MIN;
	int64_t x251 = -711LL;

    t60 = (x249==((x250!=x251)/x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x253 = 0;
	int16_t x254 = -62;
	static uint8_t x255 = 43U;
	int8_t x256 = INT8_MIN;

    t61 = (x253==((x254!=x255)/x256));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x257 = 404U;
	int8_t x258 = INT8_MIN;
	static int64_t x259 = INT64_MIN;
	int64_t x260 = INT64_MAX;
	static volatile int32_t t62 = 1;

    t62 = (x257==((x258!=x259)/x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x261 = 1649403303U;
	static int16_t x262 = 1;
	int8_t x264 = 3;
	volatile int32_t t63 = 0;

    t63 = (x261==((x262!=x263)/x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = -1;
	static uint8_t x266 = 1U;
	uint8_t x268 = 39U;

    t64 = (x265==((x266!=x267)/x268));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x269 = INT8_MIN;
	int16_t x270 = -1;
	volatile int32_t x272 = INT32_MAX;
	int32_t t65 = 407;

    t65 = (x269==((x270!=x271)/x272));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x273 = 31U;
	int8_t x274 = INT8_MIN;
	uint64_t x275 = 0LLU;
	int32_t x276 = -54235;

    t66 = (x273==((x274!=x275)/x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x279 = UINT32_MAX;
	int32_t t67 = 784297;

    t67 = (x277==((x278!=x279)/x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x282 = UINT8_MAX;
	int16_t x284 = 1;
	volatile int32_t t68 = -109;

    t68 = (x281==((x282!=x283)/x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x285 = 10357;
	uint64_t x286 = 1690LLU;
	volatile int16_t x288 = 2;
	static int32_t t69 = -54007036;

    t69 = (x285==((x286!=x287)/x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x289 = 548;
	volatile uint64_t x290 = UINT64_MAX;
	int32_t x291 = -95042152;
	int32_t t70 = -1;

    t70 = (x289==((x290!=x291)/x292));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x294 = 1090;
	volatile uint64_t x295 = 143657488LLU;
	int64_t x296 = 18034494227550LL;

    t71 = (x293==((x294!=x295)/x296));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = -1;
	uint8_t x298 = 123U;
	int8_t x299 = INT8_MAX;
	static int16_t x300 = INT16_MAX;
	int32_t t72 = 195;

    t72 = (x297==((x298!=x299)/x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x301 = UINT32_MAX;
	static int32_t t73 = -43130993;

    t73 = (x301==((x302!=x303)/x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = 23434;
	int16_t x306 = -1;
	volatile int16_t x307 = 0;
	int64_t x308 = INT64_MAX;
	volatile int32_t t74 = -777;

    t74 = (x305==((x306!=x307)/x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint8_t x311 = 2U;
	uint8_t x312 = 20U;
	volatile int32_t t75 = -3;

    t75 = (x309==((x310!=x311)/x312));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x313 = INT16_MIN;
	int64_t x314 = INT64_MAX;
	int64_t x315 = -1LL;
	int64_t x316 = INT64_MIN;
	static volatile int32_t t76 = 1628;

    t76 = (x313==((x314!=x315)/x316));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x317 = -14596050064LL;
	int16_t x318 = INT16_MAX;
	uint64_t x320 = 399117550LLU;

    t77 = (x317==((x318!=x319)/x320));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x321 = INT16_MIN;
	static uint64_t x322 = UINT64_MAX;
	int64_t x323 = INT64_MIN;
	int64_t x324 = INT64_MAX;
	volatile int32_t t78 = -95;

    t78 = (x321==((x322!=x323)/x324));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x325 = 6LLU;
	int64_t x326 = INT64_MAX;
	uint32_t x327 = 6557U;
	static int64_t x328 = -1LL;

    t79 = (x325==((x326!=x327)/x328));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x329 = INT16_MIN;
	uint32_t x330 = UINT32_MAX;
	static int16_t x331 = INT16_MIN;

    t80 = (x329==((x330!=x331)/x332));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x333 = 0LL;
	int8_t x334 = -1;
	int64_t x335 = 15554584401LL;
	int64_t x336 = -2440146822LL;
	static int32_t t81 = -4274073;

    t81 = (x333==((x334!=x335)/x336));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x338 = -3;
	uint8_t x339 = UINT8_MAX;
	uint32_t x340 = 1669U;
	volatile int32_t t82 = 1550449;

    t82 = (x337==((x338!=x339)/x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x341 = -1;
	int16_t x343 = INT16_MAX;
	volatile int8_t x344 = -5;
	volatile int32_t t83 = 26;

    t83 = (x341==((x342!=x343)/x344));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t t84 = 685;

    t84 = (x345==((x346!=x347)/x348));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x350 = 8820976450288934LLU;
	uint64_t x351 = 19974079285LLU;
	int8_t x352 = INT8_MIN;
	volatile int32_t t85 = -168325198;

    t85 = (x349==((x350!=x351)/x352));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x357 = 0U;
	int32_t x358 = INT32_MAX;
	int8_t x359 = -1;
	volatile int32_t x360 = -10;
	volatile int32_t t86 = 191518650;

    t86 = (x357==((x358!=x359)/x360));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x361 = -1;
	int16_t x362 = -3297;
	int64_t x363 = INT64_MIN;
	static int16_t x364 = -1;
	int32_t t87 = -207074;

    t87 = (x361==((x362!=x363)/x364));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = 208;
	uint16_t x367 = UINT16_MAX;
	static int32_t x368 = INT32_MAX;
	int32_t t88 = 107133;

    t88 = (x365==((x366!=x367)/x368));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x369 = INT16_MIN;
	static int8_t x371 = INT8_MIN;
	static volatile int32_t x372 = INT32_MIN;
	static volatile int32_t t89 = -1343;

    t89 = (x369==((x370!=x371)/x372));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x373 = INT8_MIN;
	int8_t x374 = -15;
	volatile uint32_t x375 = 117393082U;
	static int64_t x376 = 544880431LL;

    t90 = (x373==((x374!=x375)/x376));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x377 = 81U;
	int8_t x378 = -1;
	static int16_t x379 = INT16_MAX;
	int32_t t91 = 238;

    t91 = (x377==((x378!=x379)/x380));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x381 = -1;
	static volatile int64_t x382 = INT64_MAX;
	static int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MIN;
	volatile int32_t t92 = 3;

    t92 = (x381==((x382!=x383)/x384));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x386 = -40;
	int32_t t93 = -14;

    t93 = (x385==((x386!=x387)/x388));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x389 = 62522LLU;
	volatile int64_t x391 = -1111LL;
	static int32_t t94 = -242;

    t94 = (x389==((x390!=x391)/x392));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x393 = 12631634U;
	int64_t x394 = -1LL;
	static int16_t x395 = INT16_MAX;
	int16_t x396 = 6;
	static int32_t t95 = -2927619;

    t95 = (x393==((x394!=x395)/x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x398 = -1;
	uint16_t x400 = 230U;
	int32_t t96 = 41677664;

    t96 = (x397==((x398!=x399)/x400));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x401 = 54449825280LLU;
	static int64_t x404 = -487463LL;
	volatile int32_t t97 = 14015667;

    t97 = (x401==((x402!=x403)/x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x405 = 23U;
	uint16_t x406 = 3294U;
	int16_t x408 = INT16_MIN;
	static int32_t t98 = -449536;

    t98 = (x405==((x406!=x407)/x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x409 = INT64_MIN;
	uint32_t x410 = 208432U;
	int64_t x411 = INT64_MAX;
	uint16_t x412 = UINT16_MAX;
	int32_t t99 = 407258627;

    t99 = (x409==((x410!=x411)/x412));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int64_t x413 = -70722225729LL;
	volatile uint8_t x415 = 0U;
	int64_t x416 = INT64_MAX;
	volatile int32_t t100 = -3953;

    t100 = (x413==((x414!=x415)/x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x417 = INT64_MAX;
	int32_t x418 = INT32_MIN;
	volatile int32_t x419 = INT32_MIN;
	int16_t x420 = 1;
	int32_t t101 = -2;

    t101 = (x417==((x418!=x419)/x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x421 = INT8_MIN;
	int16_t x422 = INT16_MIN;
	uint16_t x423 = 2536U;
	int16_t x424 = INT16_MIN;
	int32_t t102 = 1;

    t102 = (x421==((x422!=x423)/x424));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x426 = 6U;
	volatile int64_t x427 = -1LL;
	static int32_t t103 = -80620661;

    t103 = (x425==((x426!=x427)/x428));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x429 = UINT64_MAX;
	static int32_t t104 = 2;

    t104 = (x429==((x430!=x431)/x432));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x434 = INT16_MIN;
	int64_t x436 = INT64_MAX;

    t105 = (x433==((x434!=x435)/x436));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x437 = INT8_MIN;
	int8_t x438 = 1;
	uint16_t x439 = 160U;
	static int32_t t106 = -250;

    t106 = (x437==((x438!=x439)/x440));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x441 = INT16_MIN;
	static int8_t x442 = INT8_MIN;
	static int8_t x444 = -1;
	int32_t t107 = -29697732;

    t107 = (x441==((x442!=x443)/x444));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x445 = UINT32_MAX;
	volatile uint32_t x446 = UINT32_MAX;
	int32_t t108 = 713323835;

    t108 = (x445==((x446!=x447)/x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x449 = 40LLU;
	volatile int8_t x450 = INT8_MIN;
	volatile int16_t x451 = INT16_MAX;
	uint16_t x452 = 11U;

    t109 = (x449==((x450!=x451)/x452));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x453 = UINT32_MAX;
	int8_t x454 = -1;
	int16_t x455 = 1307;
	volatile int16_t x456 = -11913;
	int32_t t110 = 17;

    t110 = (x453==((x454!=x455)/x456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x457 = INT16_MIN;
	int32_t x458 = INT32_MIN;
	static int8_t x459 = INT8_MIN;
	uint16_t x460 = 69U;
	volatile int32_t t111 = -6489993;

    t111 = (x457==((x458!=x459)/x460));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x461 = UINT64_MAX;
	volatile uint64_t x462 = 146616LLU;
	uint64_t x463 = 57979320LLU;
	int16_t x464 = -1;
	volatile int32_t t112 = 8;

    t112 = (x461==((x462!=x463)/x464));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x465 = 1622U;
	int32_t x466 = -1;
	int16_t x467 = INT16_MIN;
	volatile int32_t t113 = 6526;

    t113 = (x465==((x466!=x467)/x468));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x469 = -1;
	volatile uint8_t x470 = UINT8_MAX;
	volatile uint64_t x471 = 284LLU;
	static uint32_t x472 = UINT32_MAX;
	int32_t t114 = 44522748;

    t114 = (x469==((x470!=x471)/x472));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x473 = 523140325U;
	int64_t x474 = -41473LL;
	uint64_t x475 = 17022748087LLU;
	static int32_t t115 = -446;

    t115 = (x473==((x474!=x475)/x476));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x477 = -138643712389915LL;
	int8_t x478 = -1;
	int64_t x479 = 2476292129990790933LL;
	volatile int32_t t116 = 2124;

    t116 = (x477==((x478!=x479)/x480));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x481 = -1;
	volatile int32_t x482 = -1084509;
	int64_t x483 = INT64_MIN;
	int16_t x484 = -1;
	int32_t t117 = -21987;

    t117 = (x481==((x482!=x483)/x484));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x485 = INT16_MAX;
	static int64_t x486 = 89573LL;
	int32_t x488 = INT32_MIN;
	volatile int32_t t118 = -3;

    t118 = (x485==((x486!=x487)/x488));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x489 = 5;
	int64_t x490 = INT64_MIN;
	int64_t x492 = INT64_MIN;
	int32_t t119 = 1529478;

    t119 = (x489==((x490!=x491)/x492));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x494 = -24173381LL;
	uint32_t x495 = 995U;
	int16_t x496 = -331;
	int32_t t120 = 13320;

    t120 = (x493==((x494!=x495)/x496));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x497 = INT32_MIN;
	int16_t x500 = -462;
	int32_t t121 = -84862;

    t121 = (x497==((x498!=x499)/x500));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x501 = INT16_MIN;
	int64_t x503 = INT64_MIN;
	int64_t x504 = INT64_MAX;
	volatile int32_t t122 = 636953440;

    t122 = (x501==((x502!=x503)/x504));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x505 = INT8_MIN;
	int64_t x506 = INT64_MAX;
	uint16_t x508 = UINT16_MAX;
	static int32_t t123 = -305;

    t123 = (x505==((x506!=x507)/x508));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x513 = INT8_MAX;
	volatile uint8_t x514 = 13U;
	int8_t x515 = INT8_MAX;
	static uint8_t x516 = UINT8_MAX;
	volatile int32_t t124 = -23;

    t124 = (x513==((x514!=x515)/x516));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x518 = INT32_MIN;
	static volatile uint64_t x519 = 723834352495563LLU;
	int32_t x520 = -24453228;
	volatile int32_t t125 = 55501348;

    t125 = (x517==((x518!=x519)/x520));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x521 = 4186046409415LLU;
	int16_t x522 = -1;
	uint64_t x523 = 25321LLU;
	int8_t x524 = INT8_MIN;
	int32_t t126 = 4356958;

    t126 = (x521==((x522!=x523)/x524));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x525 = 931505511U;
	int32_t x528 = INT32_MIN;
	volatile int32_t t127 = 53955266;

    t127 = (x525==((x526!=x527)/x528));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x529 = -8;
	int64_t x530 = 12414112483975705LL;
	int16_t x531 = -1;
	static volatile int16_t x532 = INT16_MAX;

    t128 = (x529==((x530!=x531)/x532));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x533 = INT8_MAX;
	static uint16_t x534 = 284U;
	int64_t x535 = -314465569085289LL;
	volatile int8_t x536 = 1;
	int32_t t129 = 5010558;

    t129 = (x533==((x534!=x535)/x536));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x538 = 20U;
	int32_t x539 = 31245288;
	uint64_t x540 = 39088LLU;
	volatile int32_t t130 = 25866;

    t130 = (x537==((x538!=x539)/x540));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x541 = 44;
	static uint16_t x543 = UINT16_MAX;
	int16_t x544 = INT16_MIN;
	volatile int32_t t131 = -477;

    t131 = (x541==((x542!=x543)/x544));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x545 = INT16_MIN;
	uint64_t x547 = UINT64_MAX;
	int8_t x548 = 1;

    t132 = (x545==((x546!=x547)/x548));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x549 = INT8_MAX;
	int8_t x550 = INT8_MAX;
	static volatile uint64_t x551 = 337437LLU;
	int32_t x552 = INT32_MIN;

    t133 = (x549==((x550!=x551)/x552));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x553 = 54509069LLU;
	uint32_t x554 = 13570U;
	volatile int64_t x556 = INT64_MIN;
	volatile int32_t t134 = 26792;

    t134 = (x553==((x554!=x555)/x556));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x557 = 7360085433737186LLU;
	volatile int32_t x558 = -27;
	static uint64_t x559 = 13LLU;
	volatile int32_t t135 = 1247;

    t135 = (x557==((x558!=x559)/x560));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x561 = -3;
	int32_t x562 = 19;
	int64_t x563 = INT64_MIN;
	volatile uint64_t x564 = 22800848LLU;
	static int32_t t136 = 4698049;

    t136 = (x561==((x562!=x563)/x564));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x565 = 88U;
	int8_t x566 = -1;
	uint64_t x568 = 81684437862915LLU;
	int32_t t137 = 561584;

    t137 = (x565==((x566!=x567)/x568));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x569 = 232144220;
	int16_t x570 = INT16_MIN;
	static int32_t x571 = INT32_MIN;
	int8_t x572 = 1;
	int32_t t138 = 0;

    t138 = (x569==((x570!=x571)/x572));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x574 = UINT64_MAX;
	int8_t x576 = INT8_MIN;
	volatile int32_t t139 = 453886937;

    t139 = (x573==((x574!=x575)/x576));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x577 = -1294086LL;
	uint8_t x578 = 61U;
	volatile int64_t x580 = INT64_MIN;

    t140 = (x577==((x578!=x579)/x580));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x581 = -14;
	static uint32_t x582 = 496737590U;
	volatile uint64_t x583 = 47758690576LLU;
	static int64_t x584 = -1LL;

    t141 = (x581==((x582!=x583)/x584));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x585 = 975494797574987606LLU;
	int8_t x586 = -1;
	static volatile int64_t x587 = -27245774540LL;
	int32_t t142 = -5632;

    t142 = (x585==((x586!=x587)/x588));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x589 = 138416787LLU;
	int16_t x591 = INT16_MIN;
	uint64_t x592 = 22791533LLU;
	volatile int32_t t143 = 7738209;

    t143 = (x589==((x590!=x591)/x592));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x593 = 31U;
	int8_t x594 = INT8_MIN;
	int8_t x595 = 1;
	int8_t x596 = 15;

    t144 = (x593==((x594!=x595)/x596));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x597 = 7U;
	int16_t x599 = INT16_MIN;
	uint64_t x600 = 1416126255951453LLU;

    t145 = (x597==((x598!=x599)/x600));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x602 = 6U;
	int64_t x604 = -320LL;

    t146 = (x601==((x602!=x603)/x604));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x606 = 2U;
	int32_t x607 = -6;
	int64_t x608 = -1LL;
	int32_t t147 = -836212530;

    t147 = (x605==((x606!=x607)/x608));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x609 = INT32_MAX;
	static int32_t x610 = -1;
	int16_t x612 = 1305;
	int32_t t148 = 1434641;

    t148 = (x609==((x610!=x611)/x612));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x613 = -347848379;
	int32_t x614 = -48007688;
	uint16_t x616 = UINT16_MAX;
	volatile int32_t t149 = 2;

    t149 = (x613==((x614!=x615)/x616));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x617 = INT16_MIN;
	int16_t x618 = INT16_MAX;
	uint8_t x619 = UINT8_MAX;
	volatile uint32_t x620 = UINT32_MAX;
	int32_t t150 = 41;

    t150 = (x617==((x618!=x619)/x620));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t t151 = -103983315;

    t151 = (x621==((x622!=x623)/x624));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x626 = INT64_MIN;
	volatile int32_t x627 = 220522076;
	int64_t x628 = INT64_MIN;

    t152 = (x625==((x626!=x627)/x628));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x635 = INT32_MIN;
	uint8_t x636 = 3U;
	volatile int32_t t153 = -6111807;

    t153 = (x633==((x634!=x635)/x636));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x637 = INT32_MIN;
	int16_t x638 = INT16_MAX;
	uint16_t x640 = UINT16_MAX;
	volatile int32_t t154 = -1062285;

    t154 = (x637==((x638!=x639)/x640));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x641 = -18LL;
	uint64_t x642 = UINT64_MAX;
	volatile int32_t x643 = 5591676;
	int16_t x644 = -1;
	volatile int32_t t155 = -804391648;

    t155 = (x641==((x642!=x643)/x644));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x645 = 34;
	static volatile int64_t x646 = INT64_MIN;
	int64_t x647 = INT64_MAX;
	uint8_t x648 = 27U;

    t156 = (x645==((x646!=x647)/x648));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x649 = 5041U;
	uint8_t x650 = 0U;
	static int32_t x651 = INT32_MIN;
	int16_t x652 = -1;

    t157 = (x649==((x650!=x651)/x652));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x653 = INT64_MAX;
	int64_t x655 = 20997164712239LL;
	uint32_t x656 = 1388893182U;
	volatile int32_t t158 = -468144361;

    t158 = (x653==((x654!=x655)/x656));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x657 = INT8_MIN;
	int64_t x658 = 718727LL;
	volatile uint16_t x659 = UINT16_MAX;
	static int64_t x660 = 33681LL;
	int32_t t159 = -19830738;

    t159 = (x657==((x658!=x659)/x660));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x661 = INT32_MIN;
	static int16_t x662 = -24;
	int8_t x664 = INT8_MIN;
	static int32_t t160 = 1;

    t160 = (x661==((x662!=x663)/x664));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x665 = INT64_MIN;
	int16_t x667 = INT16_MIN;
	int16_t x668 = INT16_MIN;
	int32_t t161 = 104118;

    t161 = (x665==((x666!=x667)/x668));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x669 = 218503U;
	int32_t x670 = -1135793;
	volatile int16_t x672 = INT16_MIN;
	static int32_t t162 = -726598;

    t162 = (x669==((x670!=x671)/x672));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x673 = UINT16_MAX;
	int8_t x674 = 14;
	static int64_t x676 = INT64_MIN;
	int32_t t163 = 1;

    t163 = (x673==((x674!=x675)/x676));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x677 = INT8_MIN;
	uint16_t x678 = 11U;
	uint8_t x679 = 0U;
	int32_t t164 = -1;

    t164 = (x677==((x678!=x679)/x680));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x681 = INT8_MAX;
	volatile int16_t x682 = INT16_MAX;
	int64_t x683 = 115LL;
	int32_t x684 = INT32_MIN;

    t165 = (x681==((x682!=x683)/x684));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x685 = 42U;
	static int8_t x686 = -1;
	static int16_t x688 = INT16_MAX;
	int32_t t166 = -126524918;

    t166 = (x685==((x686!=x687)/x688));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x690 = INT16_MIN;
	static int16_t x691 = -1;
	volatile uint64_t x692 = UINT64_MAX;

    t167 = (x689==((x690!=x691)/x692));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x693 = -1;
	volatile int16_t x694 = INT16_MIN;
	int64_t x695 = INT64_MAX;
	static int64_t x696 = INT64_MIN;
	static volatile int32_t t168 = -120;

    t168 = (x693==((x694!=x695)/x696));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x698 = 7U;
	int8_t x699 = -1;
	int8_t x700 = -1;
	int32_t t169 = 39;

    t169 = (x697==((x698!=x699)/x700));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x701 = 3U;
	uint32_t x704 = 9358067U;
	static int32_t t170 = -13;

    t170 = (x701==((x702!=x703)/x704));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x705 = 22U;
	uint64_t x706 = 1756459495357887002LLU;
	int8_t x707 = 4;
	static uint8_t x708 = 3U;
	static volatile int32_t t171 = 29;

    t171 = (x705==((x706!=x707)/x708));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x709 = UINT32_MAX;
	static uint32_t x710 = 234U;
	volatile int64_t x711 = INT64_MIN;
	static uint8_t x712 = UINT8_MAX;

    t172 = (x709==((x710!=x711)/x712));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x713 = -1;
	int32_t x714 = INT32_MIN;
	static volatile int64_t x715 = -1LL;
	volatile int32_t x716 = INT32_MAX;
	int32_t t173 = -1;

    t173 = (x713==((x714!=x715)/x716));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x717 = -5105;
	static volatile uint32_t x718 = 20027641U;
	int32_t x719 = INT32_MAX;
	uint8_t x720 = UINT8_MAX;

    t174 = (x717==((x718!=x719)/x720));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x721 = INT16_MIN;
	static uint8_t x723 = UINT8_MAX;
	int8_t x724 = INT8_MIN;
	int32_t t175 = -391052647;

    t175 = (x721==((x722!=x723)/x724));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x725 = -1;
	int8_t x726 = 1;
	uint8_t x727 = 1U;
	int16_t x728 = -1;
	static volatile int32_t t176 = 79;

    t176 = (x725==((x726!=x727)/x728));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x730 = INT8_MAX;
	static int32_t x731 = -44713980;
	static int16_t x732 = -20;

    t177 = (x729==((x730!=x731)/x732));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x733 = 1311;
	volatile int16_t x734 = -12071;
	int16_t x735 = -1;
	int16_t x736 = INT16_MIN;

    t178 = (x733==((x734!=x735)/x736));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x737 = -1;
	static int8_t x738 = INT8_MIN;
	int64_t x739 = INT64_MIN;
	uint8_t x740 = UINT8_MAX;
	volatile int32_t t179 = 5602;

    t179 = (x737==((x738!=x739)/x740));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x741 = -1LL;
	static int8_t x742 = INT8_MIN;
	static uint32_t x743 = UINT32_MAX;
	uint32_t x744 = 666U;

    t180 = (x741==((x742!=x743)/x744));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x745 = INT64_MIN;
	uint16_t x746 = 876U;
	volatile int64_t x747 = INT64_MIN;
	static int64_t x748 = INT64_MIN;

    t181 = (x745==((x746!=x747)/x748));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x751 = UINT8_MAX;
	static volatile int64_t x752 = 94LL;
	volatile int32_t t182 = -75;

    t182 = (x749==((x750!=x751)/x752));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x757 = INT16_MIN;
	uint16_t x758 = 61U;
	static uint64_t x759 = UINT64_MAX;
	static int64_t x760 = INT64_MIN;
	static volatile int32_t t183 = -8832;

    t183 = (x757==((x758!=x759)/x760));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x762 = -1;
	static int32_t x763 = -453;
	static volatile int32_t t184 = 182701;

    t184 = (x761==((x762!=x763)/x764));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x765 = 2986764LL;
	volatile uint16_t x766 = UINT16_MAX;
	static int32_t x767 = INT32_MIN;
	uint32_t x768 = 86U;
	int32_t t185 = -7044380;

    t185 = (x765==((x766!=x767)/x768));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x769 = 29605441631773320LL;
	int64_t x770 = 0LL;
	int16_t x771 = -1;
	volatile uint16_t x772 = 232U;

    t186 = (x769==((x770!=x771)/x772));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x773 = -5;
	int16_t x774 = INT16_MIN;
	static volatile int32_t x775 = INT32_MIN;
	uint16_t x776 = UINT16_MAX;

    t187 = (x773==((x774!=x775)/x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x778 = 838454790527LL;
	int16_t x779 = 0;
	int8_t x780 = INT8_MIN;
	int32_t t188 = -1;

    t188 = (x777==((x778!=x779)/x780));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x781 = 0;
	uint32_t x782 = 3579U;
	int64_t x783 = -65447LL;
	int8_t x784 = -1;
	int32_t t189 = -103;

    t189 = (x781==((x782!=x783)/x784));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x786 = INT64_MIN;
	static int32_t x788 = -1;
	volatile int32_t t190 = -114909437;

    t190 = (x785==((x786!=x787)/x788));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x790 = -337696;
	volatile uint16_t x791 = 6842U;
	static volatile int64_t x792 = -3LL;
	int32_t t191 = 7992074;

    t191 = (x789==((x790!=x791)/x792));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x793 = INT32_MAX;
	uint64_t x794 = UINT64_MAX;
	volatile int8_t x796 = -11;
	static int32_t t192 = -1;

    t192 = (x793==((x794!=x795)/x796));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x798 = INT64_MIN;
	uint32_t x799 = UINT32_MAX;
	static volatile int32_t t193 = -404150;

    t193 = (x797==((x798!=x799)/x800));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x801 = -1;
	uint8_t x803 = 2U;
	int8_t x804 = 1;

    t194 = (x801==((x802!=x803)/x804));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x806 = 1U;
	int16_t x807 = -1;
	uint32_t x808 = 745U;
	static int32_t t195 = -3;

    t195 = (x805==((x806!=x807)/x808));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x810 = -1;
	int16_t x811 = 0;
	int16_t x812 = INT16_MIN;
	volatile int32_t t196 = -44;

    t196 = (x809==((x810!=x811)/x812));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x813 = 8U;
	uint16_t x816 = 63U;
	volatile int32_t t197 = -5;

    t197 = (x813==((x814!=x815)/x816));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x817 = 7111061595706LLU;
	int64_t x819 = -1738LL;
	int8_t x820 = 53;
	volatile int32_t t198 = -9404181;

    t198 = (x817==((x818!=x819)/x820));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x821 = 12U;
	int16_t x822 = -1;
	int16_t x823 = INT16_MAX;
	static volatile int32_t t199 = 839;

    t199 = (x821==((x822!=x823)/x824));

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

