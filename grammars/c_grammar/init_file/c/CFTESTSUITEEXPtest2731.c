
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

volatile int8_t x10 = 0;
volatile int32_t x13 = INT32_MAX;
uint8_t x16 = 0U;
uint32_t x17 = 497U;
int64_t x27 = 126415486LL;
int64_t x29 = INT64_MAX;
int32_t x31 = -1;
int64_t t6 = 16LL;
static volatile int16_t x46 = -2;
static uint32_t x51 = UINT32_MAX;
int64_t t10 = 6170347715313950LL;
int64_t x54 = 2LL;
uint64_t t13 = 10063337354029LLU;
volatile uint32_t x65 = 725U;
int8_t x66 = INT8_MIN;
int16_t x67 = -1;
volatile int8_t x68 = -2;
int8_t x72 = INT8_MIN;
volatile uint32_t t15 = 14510U;
static volatile int64_t t16 = -5574231924405892LL;
int64_t x79 = -1LL;
int64_t x83 = INT64_MIN;
int8_t x96 = INT8_MAX;
uint64_t t21 = 103LLU;
volatile uint8_t x99 = 1U;
int32_t x101 = INT32_MAX;
int16_t x104 = INT16_MIN;
int64_t x126 = INT64_MIN;
int32_t x142 = INT32_MIN;
uint16_t x143 = 2U;
int16_t x144 = INT16_MIN;
volatile int32_t t33 = 44029852;
volatile int32_t t34 = -4743;
static uint64_t x165 = 1624276398LLU;
static uint64_t t38 = 14123132666529936LLU;
uint64_t t39 = 14LLU;
int64_t t40 = 368LL;
uint64_t t41 = 442536495940LLU;
volatile int64_t t42 = 288199545528287771LL;
int8_t x191 = 1;
int64_t x192 = -214838504659LL;
uint16_t x194 = UINT16_MAX;
static volatile uint64_t x199 = UINT64_MAX;
int64_t x200 = INT64_MIN;
static int64_t t47 = -834874080516319LL;
static uint64_t x209 = 2615976435761879670LLU;
volatile uint64_t x215 = UINT64_MAX;
int16_t x216 = INT16_MAX;
uint32_t x228 = UINT32_MAX;
volatile int32_t x233 = -1;
static int64_t x234 = INT64_MIN;
uint64_t t54 = 86727LLU;
static int32_t x253 = 4066667;
static volatile uint8_t x255 = 3U;
volatile int64_t t58 = 108918430849LL;
static volatile int64_t x257 = INT64_MIN;
int64_t t59 = 422637422LL;
volatile int16_t x267 = INT16_MIN;
volatile uint32_t t60 = 209U;
int64_t x269 = -583667777LL;
uint64_t x272 = 113324LLU;
int16_t x278 = INT16_MIN;
uint16_t x293 = 0U;
volatile int16_t x296 = -1;
static int64_t t67 = 1LL;
int64_t x311 = INT64_MIN;
int32_t x313 = 403;
volatile int64_t x326 = -2804732824740168599LL;
static int32_t x327 = -536710;
int16_t x333 = INT16_MIN;
static int8_t x337 = INT8_MIN;
static int32_t x340 = -1;
uint64_t t75 = 24037329863LLU;
static volatile uint16_t x346 = 1124U;
int16_t x352 = INT16_MAX;
uint64_t t79 = 7346LLU;
int64_t x358 = 24964267538LL;
int8_t x363 = -11;
int64_t x364 = INT64_MIN;
int32_t x367 = INT32_MIN;
int16_t x368 = 32;
uint64_t x376 = UINT64_MAX;
int16_t x379 = INT16_MIN;
volatile int32_t t87 = 244242;
int64_t x389 = INT64_MIN;
volatile int64_t t88 = -126LL;
uint64_t x401 = UINT64_MAX;
int8_t x412 = INT8_MIN;
static int32_t x414 = -165313524;
int64_t x415 = 0LL;
uint64_t x416 = 33444398919229LLU;
int64_t t95 = -88040582753951LL;
uint16_t x433 = 2U;
int8_t x436 = INT8_MIN;
uint16_t x443 = 1U;
int32_t x446 = INT32_MAX;
uint16_t x448 = UINT16_MAX;
static volatile int32_t x457 = INT32_MIN;
volatile uint32_t x459 = 445015180U;
volatile int64_t t102 = -245974463559130633LL;
int32_t x461 = INT32_MAX;
int8_t x466 = INT8_MAX;
int8_t x467 = 7;
volatile int64_t x470 = INT64_MIN;
static uint8_t x472 = 1U;
int64_t t105 = 5448LL;
uint64_t x478 = UINT64_MAX;
int64_t x491 = 146819193716LL;
uint8_t x495 = 10U;
int8_t x498 = INT8_MIN;
static int32_t x500 = INT32_MIN;
int64_t x501 = -596821976LL;
uint8_t x502 = UINT8_MAX;
uint32_t x503 = 1488567148U;
int64_t t113 = -71108811LL;
uint8_t x513 = 0U;
volatile int16_t x515 = -2;
volatile uint32_t x520 = 1U;
int32_t x525 = -10;
int64_t t119 = 20LL;
int64_t x535 = -1LL;
int16_t x539 = -1;
volatile int8_t x547 = -1;
volatile int32_t t123 = 1;
int32_t x550 = -7;
volatile int64_t x552 = INT64_MAX;
uint8_t x556 = 2U;
volatile int64_t t125 = -769978439769LL;
static uint64_t t126 = 709822972LLU;
volatile uint32_t x562 = 1835952U;
static int16_t x564 = -1;
int64_t t127 = -177753322LL;
int8_t x565 = INT8_MAX;
static int8_t x567 = -1;
static volatile int32_t t129 = -41513016;
static int8_t x577 = -1;
static uint64_t x578 = 10LLU;
int64_t t132 = 7235169381196LL;
static volatile int16_t x589 = -6827;
volatile int32_t x593 = -2600047;
static int32_t t134 = -820120;
uint16_t x601 = UINT16_MAX;
static volatile int32_t x603 = -1;
int32_t x606 = -349;
volatile int16_t x609 = INT16_MAX;
int16_t x613 = -1;
int16_t x614 = 29;
int8_t x615 = -1;
int16_t x620 = INT16_MIN;
static int64_t x621 = -1LL;
static uint8_t x631 = UINT8_MAX;
volatile int64_t x639 = -1LL;
int32_t x646 = 567;
uint32_t x650 = UINT32_MAX;
static uint16_t x653 = 7971U;
static int32_t x655 = -1;
int8_t x660 = INT8_MAX;
volatile int64_t x665 = -1LL;
uint64_t x668 = 6627943LLU;
static volatile int64_t t153 = -1127886021345112464LL;
int8_t x674 = INT8_MIN;
int64_t x676 = INT64_MIN;
static volatile uint8_t x688 = 0U;
uint64_t x690 = UINT64_MAX;
uint64_t x697 = 1414859087079832LLU;
volatile int64_t x700 = 4503146027LL;
int8_t x701 = INT8_MIN;
volatile int64_t x703 = -1LL;
int32_t x705 = INT32_MAX;
int32_t x707 = 3425;
volatile uint64_t t162 = 490190344LLU;
int8_t x711 = INT8_MAX;
static int8_t x712 = INT8_MIN;
int64_t t168 = -553326774LL;
static int16_t x742 = INT16_MAX;
volatile uint32_t x743 = 52U;
int64_t x751 = 836647LL;
static volatile int64_t x752 = INT64_MIN;
volatile uint64_t x758 = 235526292421733LLU;
int16_t x766 = INT16_MAX;
int16_t x767 = INT16_MAX;
int32_t t175 = -3;
uint8_t x774 = UINT8_MAX;
uint16_t x779 = 1630U;
int8_t x792 = -1;
static int16_t x796 = INT16_MAX;
static int32_t x801 = INT32_MIN;
uint16_t x805 = 747U;
int16_t x806 = 11;
uint64_t x807 = UINT64_MAX;
uint8_t x810 = UINT8_MAX;
int16_t x811 = 6687;
int8_t x819 = -1;
uint16_t x820 = 0U;
static volatile int32_t x823 = INT32_MAX;
int32_t x841 = INT32_MIN;
static int8_t x848 = -1;
static uint64_t x850 = UINT64_MAX;
volatile uint64_t t193 = 466259LLU;
int32_t x853 = -34048;
volatile uint64_t t195 = UINT64_MAX;
int32_t x865 = 917;
static uint64_t x867 = UINT64_MAX;
volatile int64_t x878 = 246685860LL;
int64_t x879 = INT64_MAX;


void f0(void) {
    	int16_t x5 = -44;
	uint64_t x6 = 202117263LLU;
	int16_t x7 = INT16_MIN;
	volatile int64_t x8 = INT64_MIN;
	uint64_t t0 = 6383928343659LLU;

    t0 = (x5+((x6^x7)^x8));

    if (t0 != 9223372036652634211LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = 189229LL;
	uint64_t x11 = UINT64_MAX;
	int64_t x12 = -1LL;
	uint64_t t1 = 1LLU;

    t1 = (x9+((x10^x11)^x12));

    if (t1 != 189229LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x14 = UINT32_MAX;
	int8_t x15 = INT8_MIN;
	uint32_t t2 = 1674702405U;

    t2 = (x13+((x14^x15)^x16));

    if (t2 != 2147483774U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x18 = 1313871906627LL;
	int64_t x19 = -1LL;
	uint64_t x20 = 1793577254114LLU;
	volatile uint64_t t3 = 240918351557009382LLU;

    t3 = (x17+((x18^x19)^x20));

    if (t3 != 18446743453332751951LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x21 = INT8_MIN;
	int8_t x22 = 14;
	volatile int32_t x23 = -1;
	uint16_t x24 = UINT16_MAX;
	int32_t t4 = 39516;

    t4 = (x21+((x22^x23)^x24));

    if (t4 != -65650) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x25 = 10U;
	int16_t x26 = 2;
	static int64_t x28 = -1LL;
	volatile int64_t t5 = -96010084593832880LL;

    t5 = (x25+((x26^x27)^x28));

    if (t5 != -126415475LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x30 = -29232682;
	volatile int8_t x32 = INT8_MIN;

    t6 = (x29+((x30^x31)^x32));

    if (t6 != 9223372036825543080LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = 314755482U;
	static uint16_t x34 = 5U;
	volatile int64_t x35 = -1LL;
	int8_t x36 = INT8_MAX;
	int64_t t7 = 3283845159050LL;

    t7 = (x33+((x34^x35)^x36));

    if (t7 != 314755359LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x41 = -1LL;
	volatile int32_t x42 = -1;
	volatile int64_t x43 = -1LL;
	int64_t x44 = -265314446LL;
	volatile int64_t t8 = 0LL;

    t8 = (x41+((x42^x43)^x44));

    if (t8 != -265314447LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = -1LL;
	static int8_t x47 = 12;
	uint32_t x48 = 94669815U;
	static int64_t t9 = 45957607662010LL;

    t9 = (x45+((x46^x47)^x48));

    if (t9 != 4200297476LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x49 = INT64_MIN;
	int8_t x50 = -9;
	int16_t x52 = -1969;

    t10 = (x49+((x50^x51)^x52));

    if (t10 != -9223372032559810489LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x53 = 15LLU;
	int8_t x55 = INT8_MIN;
	uint64_t x56 = 41967424290260LLU;
	volatile uint64_t t11 = 157871539LLU;

    t11 = (x53+((x54^x55)^x56));

    if (t11 != 18446702106285261413LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = -1LL;
	static int32_t x58 = INT32_MAX;
	uint64_t x59 = 7354840LLU;
	uint8_t x60 = 15U;
	volatile uint64_t t12 = 3793704395287LLU;

    t12 = (x57+((x58^x59)^x60));

    if (t12 != 2140128807LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x61 = 860LLU;
	static uint64_t x62 = 2089LLU;
	uint64_t x63 = UINT64_MAX;
	volatile int16_t x64 = -1;

    t13 = (x61+((x62^x63)^x64));

    if (t13 != 2949LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t t14 = 959950U;

    t14 = (x65+((x66^x67)^x68));

    if (t14 != 598U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x69 = -167047;
	int8_t x70 = INT8_MIN;
	static uint32_t x71 = 106441222U;

    t15 = (x69+((x70^x71)^x72));

    if (t15 != 106274175U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = 107374009LL;
	static volatile int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MIN;
	int32_t x76 = INT32_MIN;

    t16 = (x73+((x74^x75)^x76));

    if (t16 != -9223372036747401799LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = 0;
	uint64_t x78 = 380071102077LLU;
	static int32_t x80 = -1;
	volatile uint64_t t17 = 7295291203784LLU;

    t17 = (x77+((x78^x79)^x80));

    if (t17 != 380071102077LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x81 = 1187085U;
	static int64_t x82 = -1LL;
	int8_t x84 = -4;
	volatile int64_t t18 = 28LL;

    t18 = (x81+((x82^x83)^x84));

    if (t18 != -9223372036853588720LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x85 = 48818889LLU;
	volatile int8_t x86 = INT8_MIN;
	int32_t x87 = -1;
	volatile int32_t x88 = INT32_MIN;
	uint64_t t19 = 4348801334168554441LLU;

    t19 = (x85+((x86^x87)^x88));

    if (t19 != 18446744071610886984LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x89 = UINT16_MAX;
	uint32_t x90 = 414U;
	static int32_t x91 = INT32_MAX;
	static int32_t x92 = -505074392;
	volatile uint32_t t20 = 169564U;

    t20 = (x89+((x90^x91)^x92));

    if (t20 != 2652623688U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x93 = 14410;
	volatile uint64_t x94 = UINT64_MAX;
	volatile uint64_t x95 = 4080909LLU;

    t21 = (x93+((x94^x95)^x96));

    if (t21 != 18446744073705485015LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = INT64_MIN;
	volatile int64_t x98 = -1LL;
	int64_t x100 = -1LL;
	volatile int64_t t22 = 7958LL;

    t22 = (x97+((x98^x99)^x100));

    if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x102 = INT8_MIN;
	int8_t x103 = -1;
	int32_t t23 = -75364898;

    t23 = (x101+((x102^x103)^x104));

    if (t23 != 2147451006) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x105 = -1LL;
	int64_t x106 = -69968LL;
	static volatile int64_t x107 = INT64_MIN;
	int64_t x108 = -1LL;
	int64_t t24 = 156308419372LL;

    t24 = (x105+((x106^x107)^x108));

    if (t24 != -9223372036854705842LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x109 = INT32_MAX;
	static uint16_t x110 = UINT16_MAX;
	static int64_t x111 = INT64_MIN;
	int32_t x112 = INT32_MAX;
	volatile int64_t t25 = 2696416293582889386LL;

    t25 = (x109+((x110^x111)^x112));

    if (t25 != -9223372032559874049LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = 3;
	int64_t x114 = INT64_MIN;
	int8_t x115 = INT8_MAX;
	volatile int16_t x116 = -11;
	volatile int64_t t26 = -1070298LL;

    t26 = (x113+((x114^x115)^x116));

    if (t26 != 9223372036854775693LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x117 = -486;
	uint32_t x118 = 4052U;
	volatile int32_t x119 = INT32_MIN;
	static uint8_t x120 = 43U;
	uint32_t t27 = 199799593U;

    t27 = (x117+((x118^x119)^x120));

    if (t27 != 2147487257U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = 3;
	int16_t x122 = -4;
	uint8_t x123 = 31U;
	uint64_t x124 = 15958782925673657LLU;
	uint64_t t28 = 14820830787LLU;

    t28 = (x121+((x122^x123)^x124));

    if (t28 != 18430785290783877981LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x125 = INT16_MIN;
	uint64_t x127 = 134148755LLU;
	uint32_t x128 = 2755U;
	uint64_t t29 = 873LLU;

    t29 = (x125+((x126^x127)^x128));

    if (t29 != 9223372036988893264LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x129 = UINT32_MAX;
	volatile int8_t x130 = INT8_MAX;
	static int8_t x131 = INT8_MIN;
	uint32_t x132 = 3848U;
	static volatile uint32_t t30 = 43141155U;

    t30 = (x129+((x130^x131)^x132));

    if (t30 != 4294963446U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = INT8_MIN;
	static volatile int64_t x134 = INT64_MIN;
	int64_t x135 = 57LL;
	static uint8_t x136 = UINT8_MAX;
	volatile int64_t t31 = -541352393128464646LL;

    t31 = (x133+((x134^x135)^x136));

    if (t31 != -9223372036854775738LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	uint64_t x139 = UINT64_MAX;
	int64_t x140 = INT64_MAX;
	uint64_t t32 = 95178928LLU;

    t32 = (x137+((x138^x139)^x140));

    if (t32 != 9223372036854742912LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = INT32_MIN;

    t33 = (x141+((x142^x143)^x144));

    if (t33 != -32766) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = -5;
	int16_t x146 = INT16_MIN;
	volatile int32_t x147 = 18727;
	volatile int32_t x148 = INT32_MIN;

    t34 = (x145+((x146^x147)^x148));

    if (t34 != 2147469602) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x153 = 1;
	static int16_t x154 = -1149;
	static int32_t x155 = INT32_MIN;
	volatile int64_t x156 = INT64_MIN;
	int64_t t35 = -2LL;

    t35 = (x153+((x154^x155)^x156));

    if (t35 != -9223372034707293308LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x157 = 14U;
	static uint32_t x158 = UINT32_MAX;
	int16_t x159 = -57;
	uint16_t x160 = UINT16_MAX;
	uint32_t t36 = 15113U;

    t36 = (x157+((x158^x159)^x160));

    if (t36 != 65493U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x161 = INT64_MAX;
	static uint16_t x162 = 15U;
	static volatile uint8_t x163 = 100U;
	int32_t x164 = INT32_MIN;
	volatile int64_t t37 = -2492LL;

    t37 = (x161+((x162^x163)^x164));

    if (t37 != 9223372034707292266LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x166 = 453751408648859623LL;
	static int64_t x167 = INT64_MAX;
	int16_t x168 = INT16_MIN;

    t38 = (x165+((x166^x167)^x168));

    if (t38 != 9677123447127920070LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x169 = INT64_MIN;
	int16_t x170 = INT16_MAX;
	uint64_t x171 = 360202985891LLU;
	static int16_t x172 = INT16_MAX;

    t39 = (x169+((x170^x171)^x172));

    if (t39 != 9223372397057761699LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x173 = 1;
	static int16_t x174 = -1;
	volatile int64_t x175 = -1LL;
	static volatile int16_t x176 = -1;

    t40 = (x173+((x174^x175)^x176));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x177 = 243084935305144LL;
	uint8_t x178 = 16U;
	int64_t x179 = INT64_MIN;
	uint64_t x180 = 6604795547594310LLU;

    t41 = (x177+((x178^x179)^x180));

    if (t41 != 9230219917337675278LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x185 = INT16_MIN;
	int8_t x186 = INT8_MAX;
	int64_t x187 = 6871423475009LL;
	int64_t x188 = 765722LL;

    t42 = (x185+((x186^x187)^x188));

    if (t42 != 6871424070180LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x189 = UINT8_MAX;
	int16_t x190 = INT16_MIN;
	volatile int64_t t43 = 1491244784531447945LL;

    t43 = (x189+((x190^x191)^x192));

    if (t43 != 214838481963LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x193 = INT32_MIN;
	volatile int64_t x195 = INT64_MAX;
	uint8_t x196 = 3U;
	volatile int64_t t44 = -884276LL;

    t44 = (x193+((x194^x195)^x196));

    if (t44 != 9223372034707226627LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x197 = -1LL;
	uint8_t x198 = 5U;
	volatile uint64_t t45 = 0LLU;

    t45 = (x197+((x198^x199)^x200));

    if (t45 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x201 = 22590917404044752LLU;
	int8_t x202 = INT8_MIN;
	static int16_t x203 = -2490;
	static uint16_t x204 = 16181U;
	static volatile uint64_t t46 = 6080491638255318917LLU;

    t46 = (x201+((x202^x203)^x204));

    if (t46 != 22590917404058819LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x205 = -10;
	int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MIN;
	int64_t x208 = -1LL;

    t47 = (x205+((x206^x207)^x208));

    if (t47 != -11LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint8_t x210 = 0U;
	static uint16_t x211 = UINT16_MAX;
	int8_t x212 = 26;
	uint64_t t48 = 85819920297532LLU;

    t48 = (x209+((x210^x211)^x212));

    if (t48 != 2615976435761945179LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x213 = -1;
	volatile int64_t x214 = INT64_MAX;
	volatile uint64_t t49 = 27LLU;

    t49 = (x213+((x214^x215)^x216));

    if (t49 != 9223372036854808574LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x217 = 4U;
	volatile int16_t x218 = INT16_MIN;
	int64_t x219 = -1LL;
	int8_t x220 = 4;
	int64_t t50 = -18063LL;

    t50 = (x217+((x218^x219)^x220));

    if (t50 != 32767LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x221 = INT32_MIN;
	uint32_t x222 = 384U;
	static int8_t x223 = INT8_MIN;
	int64_t x224 = INT64_MIN;
	int64_t t51 = -21344LL;

    t51 = (x221+((x222^x223)^x224));

    if (t51 != -9223372034707292672LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x225 = INT32_MAX;
	int32_t x226 = 194966;
	uint32_t x227 = 2015086U;
	volatile uint32_t t52 = 88U;

    t52 = (x225+((x226^x227)^x228));

    if (t52 != 2145630470U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x229 = -1;
	static volatile uint32_t x230 = UINT32_MAX;
	int8_t x231 = 1;
	int32_t x232 = -1;
	volatile uint32_t t53 = 598U;

    t53 = (x229+((x230^x231)^x232));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x235 = -1LL;
	uint64_t x236 = 231915988227LLU;

    t54 = (x233+((x234^x235)^x236));

    if (t54 != 9223371804938787579LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x237 = -3174;
	int32_t x238 = INT32_MIN;
	static int16_t x239 = 224;
	static int8_t x240 = INT8_MIN;
	volatile int32_t t55 = -130;

    t55 = (x237+((x238^x239)^x240));

    if (t55 != 2147480314) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x245 = -1;
	int16_t x246 = INT16_MIN;
	int32_t x247 = INT32_MIN;
	int8_t x248 = INT8_MAX;
	int32_t t56 = -342007821;

    t56 = (x245+((x246^x247)^x248));

    if (t56 != 2147451006) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x249 = 2;
	int8_t x250 = -1;
	static int16_t x251 = INT16_MAX;
	volatile int32_t x252 = INT32_MIN;
	int32_t t57 = 221;

    t57 = (x249+((x250^x251)^x252));

    if (t57 != 2147450882) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x254 = INT64_MIN;
	static int64_t x256 = 2168299092912LL;

    t58 = (x253+((x254^x255)^x256));

    if (t58 != -9223369868551616226LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x258 = 2U;
	uint16_t x259 = 9597U;
	volatile int64_t x260 = 28930855861514994LL;

    t59 = (x257+((x258^x259)^x260));

    if (t59 != -9194441180993267827LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x265 = INT16_MAX;
	static int32_t x266 = INT32_MIN;
	uint32_t x268 = 117U;

    t60 = (x265+((x266^x267)^x268));

    if (t60 != 2147483764U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x270 = -1LL;
	int16_t x271 = INT16_MAX;
	uint64_t t61 = 75LLU;

    t61 = (x269+((x270^x271)^x272));

    if (t61 != 18446744073125767787LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x273 = 12U;
	static int32_t x274 = INT32_MIN;
	int8_t x275 = -1;
	static volatile int8_t x276 = -1;
	volatile int32_t t62 = 133056350;

    t62 = (x273+((x274^x275)^x276));

    if (t62 != -2147483636) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x277 = INT16_MIN;
	uint8_t x279 = UINT8_MAX;
	static int64_t x280 = 547624973271527324LL;
	int64_t t63 = -12964431897LL;

    t63 = (x277+((x278^x279)^x280));

    if (t63 != -547624973271535773LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x285 = INT8_MIN;
	int32_t x286 = -822;
	int8_t x287 = INT8_MIN;
	volatile int64_t x288 = INT64_MIN;
	int64_t t64 = 5779378LL;

    t64 = (x285+((x286^x287)^x288));

    if (t64 != -9223372036854775094LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x289 = 753738;
	static uint8_t x290 = 69U;
	int32_t x291 = INT32_MIN;
	uint64_t x292 = UINT64_MAX;
	static volatile uint64_t t65 = 28944927028LLU;

    t65 = (x289+((x290^x291)^x292));

    if (t65 != 2148237316LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x294 = -1;
	static int32_t x295 = INT32_MIN;
	int32_t t66 = INT32_MIN;

    t66 = (x293+((x294^x295)^x296));

    if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x301 = INT32_MAX;
	int8_t x302 = 2;
	uint32_t x303 = UINT32_MAX;
	int64_t x304 = INT64_MIN;

    t67 = (x301+((x302^x303)^x304));

    if (t67 != -9223372030412324868LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x305 = INT16_MIN;
	static uint8_t x306 = 1U;
	uint16_t x307 = UINT16_MAX;
	uint32_t x308 = 182851199U;
	static uint32_t t68 = 1U;

    t68 = (x305+((x306^x307)^x308));

    if (t68 != 182872449U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x309 = INT32_MIN;
	int8_t x310 = INT8_MAX;
	uint64_t x312 = 9408158940209270LLU;
	static volatile uint64_t t69 = 8646348971691LLU;

    t69 = (x309+((x310^x311)^x312));

    if (t69 != 9232780193647501321LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x314 = INT8_MAX;
	volatile int32_t x315 = INT32_MAX;
	volatile uint16_t x316 = 401U;
	volatile int32_t t70 = 81489545;

    t70 = (x313+((x314^x315)^x316));

    if (t70 != 2147483556) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x317 = INT16_MIN;
	uint32_t x318 = UINT32_MAX;
	uint64_t x319 = 106004LLU;
	static uint16_t x320 = UINT16_MAX;
	static volatile uint64_t t71 = 445919577633254LLU;

    t71 = (x317+((x318^x319)^x320));

    if (t71 != 4294843924LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x325 = UINT64_MAX;
	uint32_t x328 = UINT32_MAX;
	uint64_t t72 = 3969578LLU;

    t72 = (x325+((x326^x327)^x328));

    if (t72 != 2804732821635321067LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x329 = 15707383329LLU;
	volatile int8_t x330 = INT8_MIN;
	volatile int8_t x331 = 1;
	int16_t x332 = -871;
	volatile uint64_t t73 = 193684817614132LLU;

    t73 = (x329+((x330^x331)^x332));

    if (t73 != 15707384121LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x334 = -1LL;
	volatile uint64_t x335 = 614781LLU;
	static int64_t x336 = -1610458698179241LL;
	volatile uint64_t t74 = 23LLU;

    t74 = (x333+((x334^x335)^x336));

    if (t74 != 1610458698580949LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x338 = UINT64_MAX;
	volatile int16_t x339 = -1;

    t75 = (x337+((x338^x339)^x340));

    if (t75 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x341 = UINT64_MAX;
	static int32_t x342 = INT32_MIN;
	int16_t x343 = 29;
	int64_t x344 = 380LL;
	static volatile uint64_t t76 = 598968533563LLU;

    t76 = (x341+((x342^x343)^x344));

    if (t76 != 18446744071562068320LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x345 = 1297U;
	uint64_t x347 = UINT64_MAX;
	int32_t x348 = INT32_MAX;
	uint64_t t77 = 69142669251LLU;

    t77 = (x345+((x346^x347)^x348));

    if (t77 != 18446744071562070389LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x349 = -1;
	volatile uint32_t x350 = UINT32_MAX;
	volatile uint64_t x351 = 30963068315234759LLU;
	uint64_t t78 = 3801031LLU;

    t78 = (x349+((x350^x351)^x352));

    if (t78 != 30963071533609414LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x353 = INT64_MAX;
	uint32_t x354 = 76428278U;
	uint64_t x355 = UINT64_MAX;
	volatile int16_t x356 = -24;

    t79 = (x353+((x354^x355)^x356));

    if (t79 != 9223372036931204064LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x357 = INT32_MAX;
	int16_t x359 = -1;
	static volatile uint16_t x360 = 307U;
	int64_t t80 = -561190LL;

    t80 = (x357+((x358^x359)^x360));

    if (t80 != -22816784163LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x361 = -2;
	static int32_t x362 = -1;
	int64_t t81 = -2508LL;

    t81 = (x361+((x362^x363)^x364));

    if (t81 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x365 = 6420784246LL;
	int64_t x366 = -2250LL;
	int64_t t82 = 160665757357119445LL;

    t82 = (x365+((x366^x367)^x368));

    if (t82 != 8568265612LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x369 = -1LL;
	int32_t x370 = INT32_MIN;
	int16_t x371 = INT16_MAX;
	int8_t x372 = -1;
	volatile int64_t t83 = -350691LL;

    t83 = (x369+((x370^x371)^x372));

    if (t83 != 2147450879LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x373 = INT8_MIN;
	int16_t x374 = -1;
	int8_t x375 = INT8_MAX;
	uint64_t t84 = UINT64_MAX;

    t84 = (x373+((x374^x375)^x376));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x377 = INT16_MAX;
	int64_t x378 = 501038736033867LL;
	uint16_t x380 = 269U;
	static int64_t t85 = 320056387986LL;

    t85 = (x377+((x378^x379)^x380));

    if (t85 != -501038735996603LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x381 = INT32_MIN;
	uint16_t x382 = 3192U;
	uint16_t x383 = 24U;
	volatile uint8_t x384 = 24U;
	int32_t t86 = 6;

    t86 = (x381+((x382^x383)^x384));

    if (t86 != -2147480456) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x385 = INT32_MIN;
	static int32_t x386 = INT32_MAX;
	uint16_t x387 = UINT16_MAX;
	volatile uint8_t x388 = 119U;

    t87 = (x385+((x386^x387)^x388));

    if (t87 != -65417) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x390 = -1;
	int16_t x391 = INT16_MAX;
	int8_t x392 = INT8_MIN;

    t88 = (x389+((x390^x391)^x392));

    if (t88 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x393 = -11595;
	int16_t x394 = -1;
	int64_t x395 = -1LL;
	int64_t x396 = INT64_MAX;
	volatile int64_t t89 = 0LL;

    t89 = (x393+((x394^x395)^x396));

    if (t89 != 9223372036854764212LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x402 = INT64_MAX;
	uint16_t x403 = 6U;
	volatile uint16_t x404 = UINT16_MAX;
	volatile uint64_t t90 = 4480LLU;

    t90 = (x401+((x402^x403)^x404));

    if (t90 != 9223372036854710277LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x405 = UINT8_MAX;
	int16_t x406 = INT16_MIN;
	uint32_t x407 = 462U;
	int16_t x408 = -1;
	uint32_t t91 = 6250506U;

    t91 = (x405+((x406^x407)^x408));

    if (t91 != 32560U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x409 = INT8_MIN;
	static int8_t x410 = INT8_MIN;
	uint64_t x411 = 21176513281665LLU;
	uint64_t t92 = 4082LLU;

    t92 = (x409+((x410^x411)^x412));

    if (t92 != 21176513281537LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x413 = 1130U;
	volatile uint64_t t93 = 503459394458497LLU;

    t93 = (x413+((x414^x415)^x416));

    if (t93 != 18446710629195706011LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x417 = 2U;
	uint32_t x418 = UINT32_MAX;
	int64_t x419 = INT64_MAX;
	int8_t x420 = INT8_MIN;
	int64_t t94 = -2854023120678LL;

    t94 = (x417+((x418^x419)^x420));

    if (t94 != -9223372032559808638LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x429 = INT8_MAX;
	int16_t x430 = INT16_MIN;
	int64_t x431 = 41565961242LL;
	uint8_t x432 = 1U;

    t95 = (x429+((x430^x431)^x432));

    if (t95 != -41565963110LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x434 = INT16_MAX;
	int64_t x435 = INT64_MAX;
	int64_t t96 = 2139109140LL;

    t96 = (x433+((x434^x435)^x436));

    if (t96 != -9223372036854743166LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x437 = -791678623LL;
	volatile int64_t x438 = INT64_MAX;
	volatile uint64_t x439 = UINT64_MAX;
	static volatile int32_t x440 = -1;
	volatile uint64_t t97 = 68896759901130LLU;

    t97 = (x437+((x438^x439)^x440));

    if (t97 != 9223372036063097184LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x441 = INT8_MIN;
	int16_t x442 = -254;
	int32_t x444 = INT32_MAX;
	int32_t t98 = 2398;

    t98 = (x441+((x442^x443)^x444));

    if (t98 != -2147483524) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x445 = 1663U;
	int64_t x447 = 10275LL;
	volatile int64_t t99 = -63271583LL;

    t99 = (x445+((x446^x447)^x448));

    if (t99 != 2147430050LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x449 = -1;
	volatile uint8_t x450 = 91U;
	static int8_t x451 = INT8_MAX;
	int64_t x452 = 44061720521709LL;
	int64_t t100 = -956LL;

    t100 = (x449+((x450^x451)^x452));

    if (t100 != 44061720521672LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x453 = 1;
	volatile int64_t x454 = -915031LL;
	uint8_t x455 = 0U;
	static volatile int16_t x456 = INT16_MAX;
	int64_t t101 = -1079LL;

    t101 = (x453+((x454^x455)^x456));

    if (t101 != -887209LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x458 = -1LL;
	int8_t x460 = -3;

    t102 = (x457+((x458^x459)^x460));

    if (t102 != -1702468466LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x462 = INT32_MIN;
	int64_t x463 = -1LL;
	int64_t x464 = INT64_MIN;
	volatile int64_t t103 = 26054214LL;

    t103 = (x461+((x462^x463)^x464));

    if (t103 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x465 = UINT64_MAX;
	static volatile uint64_t x468 = 3256461LLU;
	volatile uint64_t t104 = 7584255463733930LLU;

    t104 = (x465+((x466^x467)^x468));

    if (t104 != 3256564LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x469 = 11U;
	static volatile uint16_t x471 = UINT16_MAX;

    t105 = (x469+((x470^x471)^x472));

    if (t105 != -9223372036854710263LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x473 = 8592U;
	int8_t x474 = -40;
	int64_t x475 = -346183067752LL;
	static volatile int64_t x476 = INT64_MIN;
	static int64_t t106 = 12055268LL;

    t106 = (x473+((x474^x475)^x476));

    if (t106 != -9223371690671699504LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x477 = 1;
	int16_t x479 = -3;
	static int32_t x480 = INT32_MIN;
	uint64_t t107 = 7054912LLU;

    t107 = (x477+((x478^x479)^x480));

    if (t107 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x481 = 10U;
	volatile int64_t x482 = -36697703392476983LL;
	uint16_t x483 = UINT16_MAX;
	int8_t x484 = -10;
	int64_t t108 = -1531726840LL;

    t108 = (x481+((x482^x483)^x484));

    if (t108 != 36697703392411850LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x485 = INT16_MIN;
	uint32_t x486 = UINT32_MAX;
	volatile int32_t x487 = INT32_MIN;
	static volatile int32_t x488 = 9;
	uint32_t t109 = 158808U;

    t109 = (x485+((x486^x487)^x488));

    if (t109 != 2147450870U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x489 = 0;
	int8_t x490 = INT8_MIN;
	uint32_t x492 = UINT32_MAX;
	static int64_t t110 = -61306145LL;

    t110 = (x489+((x490^x491)^x492));

    if (t110 != -149533549813LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x493 = INT32_MIN;
	static int32_t x494 = INT32_MIN;
	int32_t x496 = -1;
	volatile int32_t t111 = 17;

    t111 = (x493+((x494^x495)^x496));

    if (t111 != -11) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x497 = -1;
	uint64_t x499 = UINT64_MAX;
	uint64_t t112 = 265085817349699025LLU;

    t112 = (x497+((x498^x499)^x500));

    if (t112 != 18446744071562068094LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x504 = INT32_MIN;

    t113 = (x501+((x502^x503)^x504));

    if (t113 != 3039228859LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x509 = UINT32_MAX;
	static uint16_t x510 = 24284U;
	uint8_t x511 = UINT8_MAX;
	int64_t x512 = -1LL;
	int64_t t114 = -1LL;

    t114 = (x509+((x510^x511)^x512));

    if (t114 != 4294943195LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x514 = INT16_MIN;
	int16_t x516 = INT16_MAX;
	volatile int32_t t115 = 59;

    t115 = (x513+((x514^x515)^x516));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x517 = INT32_MIN;
	int16_t x518 = -1;
	volatile int32_t x519 = -1;
	volatile uint32_t t116 = 452649U;

    t116 = (x517+((x518^x519)^x520));

    if (t116 != 2147483649U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x521 = -1;
	int64_t x522 = 34408082762810LL;
	static uint32_t x523 = UINT32_MAX;
	int32_t x524 = 2089751;
	static volatile int64_t t117 = 4434761197637151933LL;

    t117 = (x521+((x522^x523)^x524));

    if (t117 != 34410177818833LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x526 = 1U;
	int8_t x527 = INT8_MIN;
	int32_t x528 = 1487;
	volatile int32_t t118 = -10915;

    t118 = (x525+((x526^x527)^x528));

    if (t118 != -1468) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x529 = 32017075;
	static uint32_t x530 = 65863U;
	int64_t x531 = INT64_MIN;
	int8_t x532 = 1;

    t119 = (x529+((x530^x531)^x532));

    if (t119 != -9223372036822692871LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x533 = 1;
	int8_t x534 = -1;
	volatile int64_t x536 = INT64_MIN;
	int64_t t120 = -5339746LL;

    t120 = (x533+((x534^x535)^x536));

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x537 = UINT32_MAX;
	int8_t x538 = 1;
	int64_t x540 = 224LL;
	int64_t t121 = -211666632539LL;

    t121 = (x537+((x538^x539)^x540));

    if (t121 != 4294967069LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x541 = INT16_MIN;
	uint64_t x542 = 257755LLU;
	static int32_t x543 = INT32_MIN;
	volatile int8_t x544 = -1;
	volatile uint64_t t122 = 3904517872515LLU;

    t122 = (x541+((x542^x543)^x544));

    if (t122 != 2147193124LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x545 = -1;
	int32_t x546 = INT32_MIN;
	int8_t x548 = INT8_MIN;

    t123 = (x545+((x546^x547)^x548));

    if (t123 != -2147483522) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x549 = 66314287618450671LLU;
	volatile uint16_t x551 = 124U;
	static volatile uint64_t t124 = 9471562994816LLU;

    t124 = (x549+((x550^x551)^x552));

    if (t124 != 9289686324473226601LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x553 = 1U;
	int16_t x554 = INT16_MAX;
	volatile int64_t x555 = INT64_MIN;

    t125 = (x553+((x554^x555)^x556));

    if (t125 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x557 = 44U;
	uint8_t x558 = 3U;
	static int32_t x559 = INT32_MIN;
	uint64_t x560 = UINT64_MAX;

    t126 = (x557+((x558^x559)^x560));

    if (t126 != 2147483688LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x561 = INT64_MIN;
	static int32_t x563 = -1;

    t127 = (x561+((x562^x563)^x564));

    if (t127 != -9223372036852939856LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x566 = INT16_MIN;
	static int32_t x568 = 235;
	static volatile int32_t t128 = 12869;

    t128 = (x565+((x566^x567)^x568));

    if (t128 != 32659) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x569 = 2;
	int16_t x570 = -1;
	static int32_t x571 = INT32_MIN;
	uint8_t x572 = 72U;

    t129 = (x569+((x570^x571)^x572));

    if (t129 != 2147483577) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x573 = INT64_MIN;
	static volatile int16_t x574 = INT16_MIN;
	int16_t x575 = INT16_MAX;
	int64_t x576 = -20699495998LL;
	static int64_t t130 = -206161826LL;

    t130 = (x573+((x574^x575)^x576));

    if (t130 != -9223372016155279811LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x579 = UINT32_MAX;
	int32_t x580 = -1;
	uint64_t t131 = 1LLU;

    t131 = (x577+((x578^x579)^x580));

    if (t131 != 18446744069414584329LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x585 = 28U;
	int64_t x586 = -1LL;
	uint8_t x587 = UINT8_MAX;
	volatile int8_t x588 = 6;

    t132 = (x585+((x586^x587)^x588));

    if (t132 != -222LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x590 = INT32_MIN;
	static int8_t x591 = INT8_MIN;
	int32_t x592 = INT32_MAX;
	volatile int32_t t133 = 0;

    t133 = (x589+((x590^x591)^x592));

    if (t133 != -6700) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x594 = INT16_MIN;
	uint16_t x595 = 68U;
	int8_t x596 = INT8_MIN;

    t134 = (x593+((x594^x595)^x596));

    if (t134 != -2567339) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x597 = -4LL;
	uint16_t x598 = 34U;
	static int64_t x599 = INT64_MIN;
	static int64_t x600 = INT64_MAX;
	volatile int64_t t135 = 2273014963561587LL;

    t135 = (x597+((x598^x599)^x600));

    if (t135 != -39LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x602 = 55204601U;
	static volatile int32_t x604 = INT32_MIN;
	volatile uint32_t t136 = 487414536U;

    t136 = (x601+((x602^x603)^x604));

    if (t136 != 2092344581U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x605 = -2;
	static volatile int16_t x607 = INT16_MAX;
	int16_t x608 = -1;
	volatile int32_t t137 = 7353;

    t137 = (x605+((x606^x607)^x608));

    if (t137 != 32417) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x610 = 126U;
	volatile int64_t x611 = 11351LL;
	static int16_t x612 = INT16_MAX;
	static volatile int64_t t138 = 66623046408LL;

    t138 = (x609+((x610^x611)^x612));

    if (t138 != 54229LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x616 = 61207;
	int32_t t139 = 243;

    t139 = (x613+((x614^x615)^x616));

    if (t139 != -61196) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x617 = 2515573808LLU;
	int16_t x618 = INT16_MAX;
	static uint8_t x619 = UINT8_MAX;
	static uint64_t t140 = 2082248370272LLU;

    t140 = (x617+((x618^x619)^x620));

    if (t140 != 2515573552LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x622 = UINT32_MAX;
	static uint16_t x623 = 1909U;
	int16_t x624 = INT16_MIN;
	static int64_t t141 = -1LL;

    t141 = (x621+((x622^x623)^x624));

    if (t141 != 30857LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x625 = 1240037485070LLU;
	int64_t x626 = -1LL;
	static int32_t x627 = -1;
	int8_t x628 = 6;
	uint64_t t142 = 9LLU;

    t142 = (x625+((x626^x627)^x628));

    if (t142 != 1240037485076LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x629 = INT8_MAX;
	int64_t x630 = -1LL;
	static uint32_t x632 = 3844993U;
	int64_t t143 = -754735173804LL;

    t143 = (x629+((x630^x631)^x632));

    if (t143 != -3844864LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x633 = -3984;
	int32_t x634 = INT32_MIN;
	int32_t x635 = INT32_MAX;
	int64_t x636 = INT64_MIN;
	volatile int64_t t144 = 327730832309503LL;

    t144 = (x633+((x634^x635)^x636));

    if (t144 != 9223372036854771823LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x637 = 349LL;
	volatile uint8_t x638 = UINT8_MAX;
	int64_t x640 = -744357057LL;
	int64_t t145 = 0LL;

    t145 = (x637+((x638^x639)^x640));

    if (t145 != 744357276LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x641 = INT32_MAX;
	int64_t x642 = -80623LL;
	volatile int8_t x643 = INT8_MAX;
	int8_t x644 = -1;
	int64_t t146 = -74007308103550LL;

    t146 = (x641+((x642^x643)^x644));

    if (t146 != 2147564176LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x645 = INT64_MIN;
	volatile int64_t x647 = INT64_MAX;
	int32_t x648 = INT32_MAX;
	volatile int64_t t147 = 105966040905LL;

    t147 = (x645+((x646^x647)^x648));

    if (t147 != -2147483081LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x649 = 13360;
	int8_t x651 = INT8_MIN;
	int8_t x652 = -8;
	volatile uint32_t t148 = 3682715U;

    t148 = (x649+((x650^x651)^x652));

    if (t148 != 13239U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x654 = UINT64_MAX;
	static uint32_t x656 = 1155U;
	uint64_t t149 = 761893927520435818LLU;

    t149 = (x653+((x654^x655)^x656));

    if (t149 != 9126LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x657 = 367201641094324198LLU;
	volatile uint8_t x658 = 101U;
	static uint16_t x659 = 3U;
	uint64_t t150 = 886LLU;

    t150 = (x657+((x658^x659)^x660));

    if (t150 != 367201641094324223LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x661 = 8LLU;
	int16_t x662 = INT16_MAX;
	volatile int16_t x663 = INT16_MIN;
	uint8_t x664 = 26U;
	volatile uint64_t t151 = 12665668926LLU;

    t151 = (x661+((x662^x663)^x664));

    if (t151 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x666 = 50U;
	volatile uint64_t x667 = 377450829148391030LLU;
	volatile uint64_t t152 = 1711112756741351LLU;

    t152 = (x665+((x666^x667)^x668));

    if (t152 != 377450829154886690LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x669 = -1;
	static int8_t x670 = INT8_MIN;
	int8_t x671 = 1;
	int64_t x672 = INT64_MIN;

    t153 = (x669+((x670^x671)^x672));

    if (t153 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x673 = INT64_MAX;
	int16_t x675 = -1;
	volatile int64_t t154 = 72384554953LL;

    t154 = (x673+((x674^x675)^x676));

    if (t154 != 126LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x677 = INT8_MIN;
	int8_t x678 = INT8_MIN;
	int32_t x679 = -5827;
	static uint32_t x680 = UINT32_MAX;
	volatile uint32_t t155 = 21192827U;

    t155 = (x677+((x678^x679)^x680));

    if (t155 != 4294961346U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x681 = 0;
	static int32_t x682 = -1;
	int64_t x683 = INT64_MIN;
	static uint8_t x684 = 1U;
	int64_t t156 = -28113081899874403LL;

    t156 = (x681+((x682^x683)^x684));

    if (t156 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x685 = 1U;
	int32_t x686 = INT32_MAX;
	static volatile int64_t x687 = -52LL;
	int64_t t157 = -2LL;

    t157 = (x685+((x686^x687)^x688));

    if (t157 != -2147483596LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x689 = -1;
	volatile int16_t x691 = 11;
	int64_t x692 = INT64_MIN;
	uint64_t t158 = 14LLU;

    t158 = (x689+((x690^x691)^x692));

    if (t158 != 9223372036854775795LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x693 = INT32_MAX;
	int64_t x694 = -1LL;
	static int32_t x695 = INT32_MIN;
	int64_t x696 = INT64_MAX;
	int64_t t159 = INT64_MAX;

    t159 = (x693+((x694^x695)^x696));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x698 = UINT32_MAX;
	int8_t x699 = INT8_MAX;
	volatile uint64_t t160 = 288938527463064LLU;

    t160 = (x697+((x698^x699)^x700));

    if (t160 != 1414867468835651LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x702 = -2954;
	volatile uint32_t x704 = 2U;
	int64_t t161 = -7648827797953LL;

    t161 = (x701+((x702^x703)^x704));

    if (t161 != 2827LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x706 = 164775LLU;
	uint32_t x708 = 20U;

    t162 = (x705+((x706^x707)^x708));

    if (t162 != 2147651281LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x709 = 74662877737590LLU;
	volatile int16_t x710 = -8;
	volatile uint64_t t163 = 133107423LLU;

    t163 = (x709+((x710^x711)^x712));

    if (t163 != 74662877737597LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x717 = INT16_MIN;
	int64_t x718 = INT64_MIN;
	uint16_t x719 = 438U;
	static int64_t x720 = 49062241867185LL;
	static int64_t t164 = 3681309745958638LL;

    t164 = (x717+((x718^x719)^x720));

    if (t164 != -9223322974612941817LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x725 = 350538U;
	static int8_t x726 = INT8_MIN;
	int64_t x727 = -1520491LL;
	int64_t x728 = INT64_MIN;
	static volatile int64_t t165 = 96975LL;

    t165 = (x725+((x726^x727)^x728));

    if (t165 != -9223372036852904865LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x729 = 0U;
	volatile int16_t x730 = -1;
	static uint8_t x731 = UINT8_MAX;
	uint16_t x732 = UINT16_MAX;
	int32_t t166 = -7758475;

    t166 = (x729+((x730^x731)^x732));

    if (t166 != -65281) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x733 = 90;
	int32_t x734 = INT32_MAX;
	int8_t x735 = 0;
	uint16_t x736 = 8060U;
	volatile int32_t t167 = 0;

    t167 = (x733+((x734^x735)^x736));

    if (t167 != 2147475677) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x737 = 6880114LL;
	int64_t x738 = -1LL;
	int16_t x739 = -1924;
	volatile int8_t x740 = -32;

    t168 = (x737+((x738^x739)^x740));

    if (t168 != 6878165LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x741 = INT32_MAX;
	static uint16_t x744 = 53U;
	volatile uint32_t t169 = 2U;

    t169 = (x741+((x742^x743)^x744));

    if (t169 != 2147516413U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x745 = UINT16_MAX;
	int64_t x746 = INT64_MIN;
	uint64_t x747 = UINT64_MAX;
	uint16_t x748 = UINT16_MAX;
	volatile uint64_t t170 = 2019176515172LLU;

    t170 = (x745+((x746^x747)^x748));

    if (t170 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x749 = 2;
	uint32_t x750 = 4U;
	int64_t t171 = -269842641578LL;

    t171 = (x749+((x750^x751)^x752));

    if (t171 != -9223372036853939163LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x753 = INT32_MIN;
	volatile int16_t x754 = 35;
	uint16_t x755 = 0U;
	static uint64_t x756 = 121803231451LLU;
	volatile uint64_t t172 = 8195862965LLU;

    t172 = (x753+((x754^x755)^x756));

    if (t172 != 119655747832LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x757 = 1072;
	volatile int64_t x759 = -1LL;
	volatile int8_t x760 = INT8_MIN;
	static volatile uint64_t t173 = 127282LLU;

    t173 = (x757+((x758^x759)^x760));

    if (t173 != 235526292422730LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x761 = -1LL;
	volatile uint32_t x762 = UINT32_MAX;
	uint32_t x763 = 191U;
	static int16_t x764 = INT16_MIN;
	volatile int64_t t174 = 7763294187915206LL;

    t174 = (x761+((x762^x763)^x764));

    if (t174 != 32575LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x765 = INT16_MAX;
	uint8_t x768 = 34U;

    t175 = (x765+((x766^x767)^x768));

    if (t175 != 32801) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x773 = -7;
	volatile int64_t x775 = INT64_MAX;
	int8_t x776 = -1;
	int64_t t176 = 3LL;

    t176 = (x773+((x774^x775)^x776));

    if (t176 != -9223372036854775560LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x777 = 105713104;
	int32_t x778 = 13;
	int8_t x780 = INT8_MIN;
	int32_t t177 = -708;

    t177 = (x777+((x778^x779)^x780));

    if (t177 != 105711523) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x781 = -1;
	int16_t x782 = INT16_MIN;
	static volatile uint8_t x783 = 96U;
	uint8_t x784 = UINT8_MAX;
	volatile int32_t t178 = -3;

    t178 = (x781+((x782^x783)^x784));

    if (t178 != -32610) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x785 = INT8_MAX;
	uint8_t x786 = 1U;
	int32_t x787 = INT32_MIN;
	int64_t x788 = INT64_MIN;
	int64_t t179 = -2LL;

    t179 = (x785+((x786^x787)^x788));

    if (t179 != 9223372034707292288LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x789 = 0U;
	uint64_t x790 = 14829913092LLU;
	volatile int16_t x791 = INT16_MIN;
	uint64_t t180 = 60646175065141LLU;

    t180 = (x789+((x790^x791)^x792));

    if (t180 != 14829943803LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x793 = INT8_MIN;
	volatile uint64_t x794 = 71534472466LLU;
	static volatile int16_t x795 = INT16_MIN;
	uint64_t t181 = 446614973244265811LLU;

    t181 = (x793+((x794^x795)^x796));

    if (t181 != 18446744002175079021LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x797 = INT32_MIN;
	uint64_t x798 = 53545LLU;
	static int64_t x799 = INT64_MAX;
	static volatile int64_t x800 = -11140352LL;
	volatile uint64_t t182 = 3332LLU;

    t182 = (x797+((x798^x799)^x800));

    if (t182 != 9223372034718379478LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x802 = INT8_MAX;
	int32_t x803 = INT32_MIN;
	int32_t x804 = -1;
	volatile int32_t t183 = -3716;

    t183 = (x801+((x802^x803)^x804));

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x808 = -1;
	volatile uint64_t t184 = 6597704723336841LLU;

    t184 = (x805+((x806^x807)^x808));

    if (t184 != 758LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x809 = INT16_MAX;
	int8_t x812 = -1;
	int32_t t185 = 20841603;

    t185 = (x809+((x810^x811)^x812));

    if (t185 != 25886) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x813 = INT32_MIN;
	volatile int8_t x814 = -1;
	int64_t x815 = -1LL;
	uint16_t x816 = 940U;
	int64_t t186 = 1140072300LL;

    t186 = (x813+((x814^x815)^x816));

    if (t186 != -2147482708LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x817 = -206;
	int64_t x818 = INT64_MIN;
	volatile int64_t t187 = 1028LL;

    t187 = (x817+((x818^x819)^x820));

    if (t187 != 9223372036854775601LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x821 = 5U;
	static int32_t x822 = -34771252;
	int8_t x824 = -15;
	volatile uint32_t t188 = 342990U;

    t188 = (x821+((x822^x823)^x824));

    if (t188 != 2112712391U) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x825 = 12;
	volatile int16_t x826 = INT16_MIN;
	volatile int8_t x827 = -1;
	int32_t x828 = 333841;
	static volatile int32_t t189 = -250644;

    t189 = (x825+((x826^x827)^x828));

    if (t189 != 354298) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x837 = INT16_MIN;
	int8_t x838 = 5;
	int16_t x839 = INT16_MIN;
	static int64_t x840 = INT64_MIN;
	int64_t t190 = 14LL;

    t190 = (x837+((x838^x839)^x840));

    if (t190 != 9223372036854710277LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x842 = 462U;
	volatile int16_t x843 = 99;
	static uint16_t x844 = UINT16_MAX;
	static volatile uint32_t t191 = 581865U;

    t191 = (x841+((x842^x843)^x844));

    if (t191 != 2147548754U) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x845 = UINT8_MAX;
	volatile int16_t x846 = -1;
	static int64_t x847 = INT64_MIN;
	volatile int64_t t192 = 12187257LL;

    t192 = (x845+((x846^x847)^x848));

    if (t192 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x849 = INT32_MIN;
	volatile int8_t x851 = -1;
	uint16_t x852 = UINT16_MAX;

    t193 = (x849+((x850^x851)^x852));

    if (t193 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x854 = -1;
	uint16_t x855 = UINT16_MAX;
	uint8_t x856 = 27U;
	volatile int32_t t194 = 437527950;

    t194 = (x853+((x854^x855)^x856));

    if (t194 != -99557) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x857 = -1;
	static int64_t x858 = -1LL;
	uint64_t x859 = UINT64_MAX;
	int8_t x860 = 0;

    t195 = (x857+((x858^x859)^x860));

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x861 = INT16_MAX;
	int32_t x862 = -12478478;
	int8_t x863 = INT8_MAX;
	static volatile int16_t x864 = INT16_MAX;
	volatile int32_t t196 = -11;

    t196 = (x861+((x862^x863)^x864));

    if (t196 != -12425103) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x866 = -1LL;
	uint16_t x868 = 1318U;
	uint64_t t197 = 16LLU;

    t197 = (x865+((x866^x867)^x868));

    if (t197 != 2235LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x869 = -1;
	uint32_t x870 = 651694U;
	static int32_t x871 = INT32_MAX;
	volatile int8_t x872 = -5;
	volatile uint32_t t198 = 207240U;

    t198 = (x869+((x870^x871)^x872));

    if (t198 != 2148135337U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x877 = -3;
	uint16_t x880 = 6U;
	volatile int64_t t199 = 0LL;

    t199 = (x877+((x878^x879)^x880));

    if (t199 != 9223372036608089946LL) { NG(); } else { ; }
	
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

