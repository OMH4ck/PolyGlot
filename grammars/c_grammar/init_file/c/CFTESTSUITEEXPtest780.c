
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

uint8_t x1 = 64U;
int32_t x2 = INT32_MIN;
volatile int32_t t0 = 75;
int8_t x24 = INT8_MAX;
int16_t x26 = INT16_MIN;
int64_t x27 = -1LL;
int32_t t6 = -62;
volatile int32_t t8 = -19957411;
int8_t x42 = INT8_MAX;
static uint8_t x46 = UINT8_MAX;
static uint32_t x50 = 130894432U;
int32_t x59 = 46;
int32_t x63 = INT32_MIN;
int32_t t14 = -7936;
volatile int8_t x74 = -1;
int8_t x76 = -1;
volatile int32_t x82 = -1;
int32_t t21 = -1;
volatile int32_t t22 = -1;
volatile int32_t t24 = -680;
volatile int8_t x106 = INT8_MIN;
static volatile int8_t x108 = INT8_MIN;
int16_t x111 = INT16_MIN;
static uint8_t x112 = UINT8_MAX;
static volatile int32_t t26 = 137657068;
volatile int64_t x116 = 453998542349LL;
int32_t t29 = -21519;
int32_t x130 = INT32_MIN;
uint16_t x131 = 182U;
static int16_t x133 = 11355;
int32_t t32 = 43330;
int64_t x137 = 0LL;
int64_t x138 = 53245085LL;
int32_t x148 = INT32_MAX;
static uint16_t x150 = 119U;
int8_t x156 = INT8_MIN;
static int8_t x159 = INT8_MIN;
int32_t x161 = INT32_MIN;
int32_t t38 = 801;
volatile int32_t t39 = 200;
static int16_t x173 = INT16_MIN;
uint16_t x176 = 157U;
int32_t x184 = INT32_MAX;
volatile uint8_t x185 = UINT8_MAX;
volatile int8_t x186 = INT8_MAX;
static int8_t x187 = 1;
uint8_t x189 = 9U;
volatile int8_t x190 = INT8_MIN;
uint8_t x194 = UINT8_MAX;
uint64_t x198 = 2586253026755LLU;
int32_t t46 = -1;
int32_t t47 = -106359306;
int32_t x206 = 11422513;
int64_t x208 = -1LL;
int32_t t48 = -4;
static int64_t x221 = -1LL;
volatile uint64_t x222 = 7634529871218907LLU;
uint64_t x233 = 452LLU;
int32_t t54 = -5;
int8_t x243 = 35;
int32_t t58 = 1108;
static volatile uint32_t x255 = 173U;
int16_t x257 = -7;
volatile int32_t t60 = -3696;
static uint64_t x274 = UINT64_MAX;
int64_t x279 = -16LL;
volatile uint8_t x284 = 1U;
int32_t x287 = -7562;
volatile int32_t x291 = -710546008;
int32_t x295 = INT32_MIN;
int32_t t67 = -6315456;
volatile uint64_t x298 = UINT64_MAX;
static int64_t x302 = -1LL;
int8_t x304 = -1;
volatile int32_t t69 = -26665382;
volatile int16_t x309 = INT16_MAX;
uint16_t x315 = 2691U;
static uint8_t x316 = 61U;
static int8_t x318 = 2;
static volatile int64_t x323 = INT64_MIN;
int8_t x325 = 47;
static int16_t x339 = INT16_MIN;
volatile int64_t x340 = -1LL;
uint8_t x344 = 5U;
volatile int16_t x347 = -4;
int32_t x352 = 5946635;
int32_t t82 = 441;
int64_t x359 = -1LL;
int8_t x363 = INT8_MIN;
uint16_t x372 = 14983U;
int64_t x378 = -1LL;
int64_t x381 = INT64_MIN;
int16_t x386 = 3401;
volatile int16_t x393 = 3950;
int32_t t91 = 344089;
static int64_t x402 = INT64_MIN;
int16_t x413 = -419;
int8_t x415 = -2;
int32_t x421 = -1;
static volatile int32_t t102 = -103169;
static int64_t x443 = -68LL;
volatile int32_t t104 = 107344;
int32_t t105 = -12755;
volatile uint8_t x457 = 24U;
volatile int32_t t107 = 694;
static int64_t x467 = INT64_MAX;
int32_t t109 = -2907673;
volatile int64_t x474 = -1LL;
static volatile uint16_t x476 = 31U;
int16_t x479 = -1;
uint16_t x493 = UINT16_MAX;
static int8_t x495 = 3;
uint8_t x496 = UINT8_MAX;
int8_t x501 = INT8_MIN;
int32_t t118 = 1;
uint16_t x508 = 58U;
static volatile int32_t t119 = -1782;
volatile int8_t x525 = INT8_MIN;
int8_t x526 = 1;
int16_t x528 = 832;
volatile int32_t t123 = -231528118;
static uint64_t x535 = UINT64_MAX;
volatile int32_t t125 = 267382;
uint16_t x540 = 5611U;
volatile int32_t t129 = 0;
int8_t x555 = INT8_MIN;
int32_t t130 = -383224693;
int8_t x558 = -34;
int16_t x562 = 3;
volatile int32_t x564 = -2650;
int32_t t133 = 439;
int8_t x573 = INT8_MAX;
static int8_t x577 = -1;
static int16_t x579 = INT16_MAX;
static int32_t t136 = -541328004;
static int64_t x582 = 483LL;
int16_t x583 = 1;
static int32_t x584 = INT32_MIN;
static uint64_t x586 = 204519463875656LLU;
uint16_t x591 = UINT16_MAX;
static volatile int32_t t139 = -339006;
volatile int32_t x597 = -1;
volatile uint16_t x598 = 9908U;
int32_t x599 = -1;
int64_t x604 = -1LL;
int32_t t142 = -13705;
int8_t x606 = -1;
volatile uint8_t x607 = UINT8_MAX;
uint32_t x608 = 31746513U;
static int32_t t143 = -43;
int32_t x623 = -12;
uint16_t x624 = 35U;
int16_t x626 = -1;
int32_t t148 = 1384;
uint32_t x636 = UINT32_MAX;
volatile int32_t t150 = -19;
volatile int32_t t154 = -30352467;
int8_t x654 = 0;
volatile int8_t x658 = 23;
volatile uint64_t x660 = 1347LLU;
static int32_t x664 = INT32_MIN;
int32_t x666 = INT32_MIN;
int16_t x674 = INT16_MIN;
volatile int32_t t159 = 1019;
int64_t x678 = -1LL;
uint8_t x682 = 11U;
int64_t x689 = -1LL;
uint16_t x693 = 2U;
int32_t t164 = -12745;
int16_t x700 = INT16_MIN;
int16_t x704 = INT16_MIN;
volatile int8_t x706 = INT8_MIN;
int32_t t168 = 9189138;
volatile uint16_t x714 = 15482U;
volatile int32_t x724 = INT32_MIN;
static volatile int32_t t171 = 0;
int64_t x725 = INT64_MIN;
int32_t x726 = INT32_MAX;
uint16_t x727 = 1U;
int32_t t172 = -3;
uint8_t x733 = UINT8_MAX;
uint8_t x736 = UINT8_MAX;
uint64_t x742 = 3906695992897LLU;
static uint32_t x745 = 0U;
uint16_t x747 = 56U;
volatile int64_t x754 = 34568065442393059LL;
int16_t x762 = 22;
uint64_t x769 = UINT64_MAX;
int16_t x770 = INT16_MIN;
volatile int32_t t184 = 255292560;
volatile int32_t t185 = 72832513;
static volatile int8_t x792 = INT8_MIN;
int32_t t187 = -69449;
int64_t x797 = INT64_MIN;
int32_t x798 = -1;
uint32_t x800 = 15668206U;
uint64_t x801 = 1229811454669133LLU;
volatile int32_t t190 = -1449934;
int16_t x807 = -3377;
int32_t x815 = INT32_MAX;
volatile int32_t x817 = INT32_MIN;
uint8_t x823 = 110U;
static volatile int32_t t194 = -1256;
volatile int32_t t195 = 11159570;
int64_t x841 = INT64_MIN;


void f0(void) {
    	int16_t x3 = INT16_MIN;
	int32_t x4 = -1069164116;

    t0 = (x1<=((x2/x3)^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	static int32_t x6 = -2777;
	static volatile int16_t x7 = INT16_MAX;
	volatile int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 93833;

    t1 = (x5<=((x6/x7)^x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = 28;
	uint16_t x10 = 30U;
	int16_t x11 = INT16_MIN;
	int8_t x12 = -1;
	int32_t t2 = 33336238;

    t2 = (x9<=((x10/x11)^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1617;
	uint16_t x14 = 7U;
	int64_t x15 = INT64_MIN;
	uint16_t x16 = 4U;
	int32_t t3 = -1;

    t3 = (x13<=((x14/x15)^x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	int64_t x18 = -26349280734855LL;
	int16_t x19 = -1;
	uint32_t x20 = 2U;
	int32_t t4 = -13;

    t4 = (x17<=((x18/x19)^x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 0U;
	static uint8_t x22 = 33U;
	volatile int32_t x23 = -199060;
	int32_t t5 = 124250;

    t5 = (x21<=((x22/x23)^x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	int8_t x28 = -14;

    t6 = (x25<=((x26/x27)^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 3U;
	uint16_t x30 = 12067U;
	volatile int64_t x31 = -6665610525305LL;
	int64_t x32 = INT64_MIN;
	int32_t t7 = 5;

    t7 = (x29<=((x30/x31)^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x37 = 3U;
	int8_t x38 = INT8_MAX;
	int64_t x39 = INT64_MAX;
	static int64_t x40 = INT64_MIN;

    t8 = (x37<=((x38/x39)^x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x41 = 113953462864834444LLU;
	volatile uint32_t x43 = 123U;
	int16_t x44 = -15;
	int32_t t9 = -1990370;

    t9 = (x41<=((x42/x43)^x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x45 = UINT64_MAX;
	int64_t x47 = -2909806643368541LL;
	static volatile int64_t x48 = -1LL;
	int32_t t10 = 516232963;

    t10 = (x45<=((x46/x47)^x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = 2766U;
	uint64_t x51 = 52064249LLU;
	uint8_t x52 = UINT8_MAX;
	int32_t t11 = -20624;

    t11 = (x49<=((x50/x51)^x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 605U;
	static int16_t x54 = -3157;
	int16_t x55 = -13;
	static int16_t x56 = INT16_MAX;
	volatile int32_t t12 = -427;

    t12 = (x53<=((x54/x55)^x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x57 = INT64_MIN;
	static uint16_t x58 = 425U;
	int64_t x60 = INT64_MIN;
	static volatile int32_t t13 = 5702;

    t13 = (x57<=((x58/x59)^x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint16_t x61 = 202U;
	uint64_t x62 = 2603820744167532LLU;
	int16_t x64 = INT16_MIN;

    t14 = (x61<=((x62/x63)^x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x65 = INT8_MAX;
	uint8_t x66 = 4U;
	volatile uint8_t x67 = 2U;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t15 = -1;

    t15 = (x65<=((x66/x67)^x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x69 = -1LL;
	int32_t x70 = 2151;
	uint64_t x71 = UINT64_MAX;
	int32_t x72 = -29;
	static int32_t t16 = 1;

    t16 = (x69<=((x70/x71)^x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int32_t x73 = -1;
	uint64_t x75 = UINT64_MAX;
	int32_t t17 = 12;

    t17 = (x73<=((x74/x75)^x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x77 = UINT8_MAX;
	int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t18 = -1102;

    t18 = (x77<=((x78/x79)^x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MAX;
	volatile int64_t x83 = -1LL;
	static uint64_t x84 = 871LLU;
	volatile int32_t t19 = 235940356;

    t19 = (x81<=((x82/x83)^x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = -1;
	int16_t x86 = INT16_MIN;
	int8_t x87 = 9;
	uint32_t x88 = 1493160691U;
	int32_t t20 = 978026;

    t20 = (x85<=((x86/x87)^x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x89 = -14;
	int8_t x90 = INT8_MAX;
	int16_t x91 = -1;
	volatile int64_t x92 = -1LL;

    t21 = (x89<=((x90/x91)^x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = INT32_MIN;
	volatile int32_t x94 = 1;
	int8_t x95 = INT8_MIN;
	int32_t x96 = INT32_MAX;

    t22 = (x93<=((x94/x95)^x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x97 = -1;
	uint16_t x98 = 250U;
	int16_t x99 = INT16_MAX;
	int32_t x100 = INT32_MIN;
	static int32_t t23 = -10;

    t23 = (x97<=((x98/x99)^x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x101 = INT16_MIN;
	int64_t x102 = INT64_MIN;
	int16_t x103 = 492;
	static uint8_t x104 = UINT8_MAX;

    t24 = (x101<=((x102/x103)^x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x105 = INT32_MIN;
	int8_t x107 = 13;
	int32_t t25 = 4;

    t25 = (x105<=((x106/x107)^x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x109 = 116U;
	volatile int64_t x110 = 7453449378487LL;

    t26 = (x109<=((x110/x111)^x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = -3;
	int64_t x114 = -1LL;
	static int64_t x115 = -89006539966002LL;
	volatile int32_t t27 = 21;

    t27 = (x113<=((x114/x115)^x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x117 = 3;
	static volatile int16_t x118 = INT16_MIN;
	volatile int16_t x119 = INT16_MAX;
	uint8_t x120 = 1U;
	volatile int32_t t28 = -9507;

    t28 = (x117<=((x118/x119)^x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x121 = 42982U;
	int64_t x122 = INT64_MIN;
	int32_t x123 = INT32_MIN;
	int64_t x124 = -10LL;

    t29 = (x121<=((x122/x123)^x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = -1011414055048254LL;
	int8_t x126 = -1;
	int64_t x127 = INT64_MIN;
	int16_t x128 = INT16_MAX;
	static int32_t t30 = -77;

    t30 = (x125<=((x126/x127)^x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x129 = 0U;
	uint8_t x132 = 0U;
	int32_t t31 = 157129;

    t31 = (x129<=((x130/x131)^x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x134 = 1U;
	uint32_t x135 = 1808U;
	uint64_t x136 = UINT64_MAX;

    t32 = (x133<=((x134/x135)^x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x139 = 9;
	static int32_t x140 = INT32_MAX;
	int32_t t33 = -122985229;

    t33 = (x137<=((x138/x139)^x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = INT8_MIN;
	uint64_t x146 = 3017682686200151290LLU;
	uint64_t x147 = 2087482925147803605LLU;
	int32_t t34 = -27064;

    t34 = (x145<=((x146/x147)^x148));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int16_t x149 = INT16_MIN;
	volatile int32_t x151 = -12607;
	static int64_t x152 = 579960481169015441LL;
	volatile int32_t t35 = -547785;

    t35 = (x149<=((x150/x151)^x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = INT16_MIN;
	int16_t x154 = INT16_MIN;
	volatile int16_t x155 = -172;
	int32_t t36 = -458121788;

    t36 = (x153<=((x154/x155)^x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x157 = INT8_MIN;
	int8_t x158 = INT8_MIN;
	uint8_t x160 = 29U;
	static volatile int32_t t37 = 236;

    t37 = (x157<=((x158/x159)^x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x162 = INT32_MIN;
	static int8_t x163 = INT8_MIN;
	uint32_t x164 = UINT32_MAX;

    t38 = (x161<=((x162/x163)^x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x165 = 47760843U;
	int16_t x166 = INT16_MAX;
	int16_t x167 = 310;
	volatile int32_t x168 = INT32_MAX;

    t39 = (x165<=((x166/x167)^x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = 92;
	volatile uint32_t x170 = UINT32_MAX;
	uint8_t x171 = 1U;
	uint8_t x172 = 2U;
	volatile int32_t t40 = -62018;

    t40 = (x169<=((x170/x171)^x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x174 = -1LL;
	int8_t x175 = INT8_MAX;
	volatile int32_t t41 = 1;

    t41 = (x173<=((x174/x175)^x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x181 = 0U;
	static uint16_t x182 = 7281U;
	volatile int8_t x183 = -1;
	int32_t t42 = -3;

    t42 = (x181<=((x182/x183)^x184));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x188 = 5688879LLU;
	volatile int32_t t43 = 5;

    t43 = (x185<=((x186/x187)^x188));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x191 = INT64_MIN;
	static volatile int16_t x192 = -1;
	volatile int32_t t44 = 5188890;

    t44 = (x189<=((x190/x191)^x192));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x193 = 1U;
	static uint32_t x195 = UINT32_MAX;
	uint16_t x196 = 328U;
	volatile int32_t t45 = -498;

    t45 = (x193<=((x194/x195)^x196));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x197 = -1;
	int16_t x199 = INT16_MAX;
	int8_t x200 = INT8_MAX;

    t46 = (x197<=((x198/x199)^x200));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x201 = -240;
	volatile int32_t x202 = INT32_MIN;
	int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;

    t47 = (x201<=((x202/x203)^x204));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x205 = 0U;
	uint32_t x207 = 28U;

    t48 = (x205<=((x206/x207)^x208));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x209 = INT64_MIN;
	static int64_t x210 = 28LL;
	static uint32_t x211 = 11925U;
	volatile uint64_t x212 = 31616LLU;
	int32_t t49 = 34783;

    t49 = (x209<=((x210/x211)^x212));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x213 = 1;
	int32_t x214 = INT32_MIN;
	uint32_t x215 = UINT32_MAX;
	static uint8_t x216 = 15U;
	static volatile int32_t t50 = 14;

    t50 = (x213<=((x214/x215)^x216));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x217 = -1LL;
	volatile int16_t x218 = -3612;
	int64_t x219 = INT64_MIN;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t51 = -591741;

    t51 = (x217<=((x218/x219)^x220));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x223 = INT64_MAX;
	int64_t x224 = INT64_MIN;
	int32_t t52 = -5;

    t52 = (x221<=((x222/x223)^x224));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x225 = 10332U;
	uint8_t x226 = UINT8_MAX;
	int16_t x227 = 3;
	uint16_t x228 = UINT16_MAX;
	static int32_t t53 = 56993495;

    t53 = (x225<=((x226/x227)^x228));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint32_t x234 = 180923U;
	static uint16_t x235 = 11148U;
	int8_t x236 = 0;

    t54 = (x233<=((x234/x235)^x236));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x237 = 49U;
	int16_t x238 = INT16_MAX;
	int32_t x239 = 34359;
	uint32_t x240 = 13654U;
	static volatile int32_t t55 = 512;

    t55 = (x237<=((x238/x239)^x240));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x241 = -1LL;
	uint64_t x242 = UINT64_MAX;
	int8_t x244 = INT8_MIN;
	static volatile int32_t t56 = -6307;

    t56 = (x241<=((x242/x243)^x244));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x245 = 265U;
	static uint64_t x246 = 224049921537872855LLU;
	volatile int16_t x247 = INT16_MAX;
	volatile uint64_t x248 = 2282070257565280798LLU;
	volatile int32_t t57 = -151;

    t57 = (x245<=((x246/x247)^x248));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x249 = INT64_MIN;
	uint8_t x250 = UINT8_MAX;
	int16_t x251 = 1676;
	uint64_t x252 = 14091LLU;

    t58 = (x249<=((x250/x251)^x252));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint64_t x253 = UINT64_MAX;
	int16_t x254 = 3;
	int32_t x256 = -27;
	int32_t t59 = -203;

    t59 = (x253<=((x254/x255)^x256));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x258 = 22431807;
	int64_t x259 = INT64_MAX;
	int64_t x260 = -1524181LL;

    t60 = (x257<=((x258/x259)^x260));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x269 = INT64_MIN;
	int8_t x270 = -1;
	volatile int32_t x271 = -7;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t61 = 257;

    t61 = (x269<=((x270/x271)^x272));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x273 = 0;
	int64_t x275 = INT64_MIN;
	int8_t x276 = INT8_MIN;
	int32_t t62 = 485415610;

    t62 = (x273<=((x274/x275)^x276));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x277 = -422653;
	uint64_t x278 = UINT64_MAX;
	volatile int16_t x280 = INT16_MAX;
	volatile int32_t t63 = 170809;

    t63 = (x277<=((x278/x279)^x280));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x281 = INT8_MIN;
	volatile int16_t x282 = INT16_MIN;
	int16_t x283 = INT16_MAX;
	static int32_t t64 = -563975;

    t64 = (x281<=((x282/x283)^x284));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x285 = INT64_MIN;
	uint8_t x286 = 2U;
	uint8_t x288 = 0U;
	int32_t t65 = -11;

    t65 = (x285<=((x286/x287)^x288));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x289 = 3274426074LL;
	static int64_t x290 = INT64_MIN;
	int8_t x292 = -1;
	static volatile int32_t t66 = 32;

    t66 = (x289<=((x290/x291)^x292));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x293 = INT32_MIN;
	int16_t x294 = -1;
	static volatile uint32_t x296 = UINT32_MAX;

    t67 = (x293<=((x294/x295)^x296));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x297 = INT64_MIN;
	int8_t x299 = 14;
	int32_t x300 = 94040110;
	volatile int32_t t68 = 393181;

    t68 = (x297<=((x298/x299)^x300));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x301 = 1U;
	int8_t x303 = 3;

    t69 = (x301<=((x302/x303)^x304));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x305 = INT64_MIN;
	uint64_t x306 = 20935LLU;
	static volatile int8_t x307 = INT8_MIN;
	int64_t x308 = -3678573730347227034LL;
	static int32_t t70 = -8;

    t70 = (x305<=((x306/x307)^x308));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x310 = -1;
	int32_t x311 = INT32_MIN;
	static volatile uint32_t x312 = 2933U;
	static int32_t t71 = 531607062;

    t71 = (x309<=((x310/x311)^x312));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x313 = INT16_MIN;
	uint64_t x314 = 145889LLU;
	volatile int32_t t72 = -1249;

    t72 = (x313<=((x314/x315)^x316));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x317 = INT64_MIN;
	uint32_t x319 = 74042795U;
	int8_t x320 = INT8_MIN;
	int32_t t73 = 110769987;

    t73 = (x317<=((x318/x319)^x320));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x321 = INT16_MIN;
	int32_t x322 = -6951;
	int32_t x324 = -1;
	volatile int32_t t74 = 1647954;

    t74 = (x321<=((x322/x323)^x324));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x326 = 1;
	int16_t x327 = INT16_MIN;
	uint16_t x328 = 101U;
	int32_t t75 = -2883;

    t75 = (x325<=((x326/x327)^x328));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x329 = -4891;
	static uint32_t x330 = UINT32_MAX;
	uint8_t x331 = UINT8_MAX;
	int16_t x332 = -1;
	int32_t t76 = 120643;

    t76 = (x329<=((x330/x331)^x332));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x333 = 28358LL;
	volatile int64_t x334 = -13343584613LL;
	static uint8_t x335 = UINT8_MAX;
	uint8_t x336 = 65U;
	static volatile int32_t t77 = 16336;

    t77 = (x333<=((x334/x335)^x336));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x337 = -1;
	volatile int32_t x338 = -26183700;
	volatile int32_t t78 = -16;

    t78 = (x337<=((x338/x339)^x340));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int8_t x341 = 0;
	int16_t x342 = INT16_MAX;
	int16_t x343 = -1;
	int32_t t79 = 0;

    t79 = (x341<=((x342/x343)^x344));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x345 = 17121582156LLU;
	int32_t x346 = -1617;
	uint8_t x348 = 0U;
	int32_t t80 = 91033710;

    t80 = (x345<=((x346/x347)^x348));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x349 = INT64_MIN;
	uint8_t x350 = 3U;
	static volatile uint16_t x351 = 7U;
	volatile int32_t t81 = -9;

    t81 = (x349<=((x350/x351)^x352));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x353 = 100131091;
	int16_t x354 = INT16_MAX;
	uint16_t x355 = 3U;
	uint32_t x356 = UINT32_MAX;

    t82 = (x353<=((x354/x355)^x356));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x357 = 3;
	uint32_t x358 = UINT32_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t83 = 517790;

    t83 = (x357<=((x358/x359)^x360));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x361 = -198515LL;
	int16_t x362 = INT16_MAX;
	int16_t x364 = -4665;
	volatile int32_t t84 = -941594751;

    t84 = (x361<=((x362/x363)^x364));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x365 = UINT64_MAX;
	int64_t x366 = -2305447LL;
	int64_t x367 = 54090240755LL;
	int16_t x368 = 11;
	volatile int32_t t85 = -1636606;

    t85 = (x365<=((x366/x367)^x368));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x369 = -1;
	static uint64_t x370 = 5353706LLU;
	static int32_t x371 = INT32_MAX;
	int32_t t86 = 462128;

    t86 = (x369<=((x370/x371)^x372));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x377 = UINT32_MAX;
	volatile int64_t x379 = -1LL;
	volatile int32_t x380 = INT32_MIN;
	int32_t t87 = -555;

    t87 = (x377<=((x378/x379)^x380));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x382 = INT8_MAX;
	int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MIN;
	static int32_t t88 = 463079;

    t88 = (x381<=((x382/x383)^x384));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x385 = 7U;
	volatile int64_t x387 = -1LL;
	int8_t x388 = 3;
	static int32_t t89 = 2435;

    t89 = (x385<=((x386/x387)^x388));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x389 = 2930678186612LLU;
	uint8_t x390 = 13U;
	static volatile int32_t x391 = 78342;
	uint64_t x392 = 8191643671LLU;
	int32_t t90 = 9;

    t90 = (x389<=((x390/x391)^x392));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MIN;
	static int32_t x396 = INT32_MIN;

    t91 = (x393<=((x394/x395)^x396));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x397 = 16;
	int64_t x398 = INT64_MIN;
	volatile uint64_t x399 = 19530409LLU;
	uint16_t x400 = 8194U;
	int32_t t92 = -250;

    t92 = (x397<=((x398/x399)^x400));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int16_t x401 = INT16_MAX;
	uint16_t x403 = 29U;
	int8_t x404 = INT8_MIN;
	volatile int32_t t93 = -7357591;

    t93 = (x401<=((x402/x403)^x404));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x405 = -1;
	volatile int32_t x406 = INT32_MAX;
	static int16_t x407 = -1;
	uint16_t x408 = UINT16_MAX;
	static int32_t t94 = -52438020;

    t94 = (x405<=((x406/x407)^x408));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x409 = UINT64_MAX;
	int64_t x410 = INT64_MIN;
	int32_t x411 = -666045156;
	uint64_t x412 = 1169451LLU;
	int32_t t95 = -1;

    t95 = (x409<=((x410/x411)^x412));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x414 = INT64_MIN;
	volatile uint16_t x416 = 15969U;
	volatile int32_t t96 = -71614;

    t96 = (x413<=((x414/x415)^x416));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x417 = 8130U;
	static uint64_t x418 = 95145448666LLU;
	static int32_t x419 = INT32_MAX;
	int64_t x420 = -1LL;
	static int32_t t97 = 14046538;

    t97 = (x417<=((x418/x419)^x420));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x422 = INT8_MIN;
	uint16_t x423 = UINT16_MAX;
	int16_t x424 = INT16_MIN;
	static int32_t t98 = 229782;

    t98 = (x421<=((x422/x423)^x424));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x425 = 3U;
	int16_t x426 = INT16_MIN;
	static int8_t x427 = -1;
	uint32_t x428 = 897U;
	int32_t t99 = -231;

    t99 = (x425<=((x426/x427)^x428));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x429 = INT16_MIN;
	volatile int32_t x430 = 960;
	uint64_t x431 = 2173398LLU;
	uint8_t x432 = UINT8_MAX;
	static volatile int32_t t100 = -1;

    t100 = (x429<=((x430/x431)^x432));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x433 = INT32_MIN;
	volatile int8_t x434 = -14;
	int32_t x435 = -1;
	static int16_t x436 = 6001;
	int32_t t101 = -146261;

    t101 = (x433<=((x434/x435)^x436));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x437 = 5460U;
	int64_t x438 = -1LL;
	int8_t x439 = -1;
	uint32_t x440 = 6U;

    t102 = (x437<=((x438/x439)^x440));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x441 = 87U;
	static uint32_t x442 = UINT32_MAX;
	int64_t x444 = INT64_MIN;
	static volatile int32_t t103 = 46;

    t103 = (x441<=((x442/x443)^x444));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x445 = INT32_MAX;
	int32_t x446 = 103507980;
	volatile int64_t x447 = 14035151947LL;
	int64_t x448 = INT64_MAX;

    t104 = (x445<=((x446/x447)^x448));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x449 = -1;
	uint32_t x450 = UINT32_MAX;
	volatile int32_t x451 = -120078;
	uint8_t x452 = 2U;

    t105 = (x449<=((x450/x451)^x452));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x453 = UINT8_MAX;
	int16_t x454 = -1;
	int16_t x455 = INT16_MIN;
	volatile int16_t x456 = INT16_MIN;
	volatile int32_t t106 = -165;

    t106 = (x453<=((x454/x455)^x456));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x458 = 12U;
	volatile int8_t x459 = -14;
	volatile uint8_t x460 = UINT8_MAX;

    t107 = (x457<=((x458/x459)^x460));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x461 = INT16_MIN;
	int32_t x462 = INT32_MIN;
	int16_t x463 = 433;
	uint16_t x464 = 8U;
	int32_t t108 = 186627136;

    t108 = (x461<=((x462/x463)^x464));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x465 = -1;
	int64_t x466 = INT64_MAX;
	int8_t x468 = -1;

    t109 = (x465<=((x466/x467)^x468));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x469 = 230LLU;
	static int64_t x470 = -64894398LL;
	int64_t x471 = -151642844634625LL;
	int16_t x472 = -653;
	volatile int32_t t110 = 0;

    t110 = (x469<=((x470/x471)^x472));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x473 = UINT32_MAX;
	int64_t x475 = -1LL;
	volatile int32_t t111 = 11;

    t111 = (x473<=((x474/x475)^x476));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x477 = 0;
	uint16_t x478 = 27027U;
	static int64_t x480 = INT64_MIN;
	static int32_t t112 = 1;

    t112 = (x477<=((x478/x479)^x480));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x481 = 4786;
	int32_t x482 = INT32_MIN;
	static uint16_t x483 = 14338U;
	uint8_t x484 = 25U;
	int32_t t113 = 0;

    t113 = (x481<=((x482/x483)^x484));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x485 = UINT64_MAX;
	int16_t x486 = INT16_MIN;
	uint16_t x487 = 89U;
	int64_t x488 = INT64_MIN;
	int32_t t114 = -61003099;

    t114 = (x485<=((x486/x487)^x488));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x489 = 4U;
	volatile uint64_t x490 = UINT64_MAX;
	volatile int64_t x491 = INT64_MIN;
	volatile int8_t x492 = 8;
	volatile int32_t t115 = 104239;

    t115 = (x489<=((x490/x491)^x492));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x494 = INT64_MIN;
	int32_t t116 = 7;

    t116 = (x493<=((x494/x495)^x496));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x497 = INT8_MIN;
	volatile int8_t x498 = -1;
	uint8_t x499 = UINT8_MAX;
	int8_t x500 = INT8_MIN;
	volatile int32_t t117 = -457844;

    t117 = (x497<=((x498/x499)^x500));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x502 = INT8_MIN;
	static int64_t x503 = 620637191667806360LL;
	int32_t x504 = INT32_MIN;

    t118 = (x501<=((x502/x503)^x504));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x505 = INT32_MIN;
	static int16_t x506 = -1;
	int8_t x507 = 3;

    t119 = (x505<=((x506/x507)^x508));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x509 = -3265447858948LL;
	int8_t x510 = INT8_MAX;
	volatile int32_t x511 = INT32_MAX;
	int32_t x512 = INT32_MAX;
	volatile int32_t t120 = -853062;

    t120 = (x509<=((x510/x511)^x512));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x513 = -1;
	int32_t x514 = INT32_MAX;
	int32_t x515 = INT32_MIN;
	static int16_t x516 = 3;
	int32_t t121 = 2527;

    t121 = (x513<=((x514/x515)^x516));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x521 = 49070374;
	int16_t x522 = -1;
	int64_t x523 = INT64_MAX;
	static uint16_t x524 = 13660U;
	int32_t t122 = -2547671;

    t122 = (x521<=((x522/x523)^x524));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x527 = 121393693U;

    t123 = (x525<=((x526/x527)^x528));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x529 = -29;
	int16_t x530 = INT16_MAX;
	int16_t x531 = 1;
	uint64_t x532 = UINT64_MAX;
	volatile int32_t t124 = 34;

    t124 = (x529<=((x530/x531)^x532));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x533 = 1;
	static int16_t x534 = INT16_MAX;
	uint64_t x536 = UINT64_MAX;

    t125 = (x533<=((x534/x535)^x536));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x537 = INT8_MAX;
	int32_t x538 = -1;
	volatile uint8_t x539 = UINT8_MAX;
	volatile int32_t t126 = -515;

    t126 = (x537<=((x538/x539)^x540));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x541 = -1;
	uint64_t x542 = 140205299643LLU;
	int32_t x543 = INT32_MIN;
	volatile uint64_t x544 = 948112LLU;
	volatile int32_t t127 = -60028227;

    t127 = (x541<=((x542/x543)^x544));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x545 = INT64_MAX;
	static uint32_t x546 = UINT32_MAX;
	static int64_t x547 = -791585015895775381LL;
	int32_t x548 = INT32_MIN;
	int32_t t128 = -27510;

    t128 = (x545<=((x546/x547)^x548));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x549 = 86360733LLU;
	volatile uint16_t x550 = 26743U;
	volatile uint64_t x551 = 1738962389426091LLU;
	int8_t x552 = 2;

    t129 = (x549<=((x550/x551)^x552));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x553 = INT16_MAX;
	uint16_t x554 = 29238U;
	int64_t x556 = INT64_MIN;

    t130 = (x553<=((x554/x555)^x556));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x557 = -1;
	volatile int32_t x559 = INT32_MIN;
	int16_t x560 = INT16_MIN;
	int32_t t131 = 89761;

    t131 = (x557<=((x558/x559)^x560));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x561 = 2;
	volatile uint8_t x563 = 28U;
	volatile int32_t t132 = 445;

    t132 = (x561<=((x562/x563)^x564));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x565 = INT64_MIN;
	int16_t x566 = INT16_MIN;
	uint32_t x567 = 984U;
	volatile int64_t x568 = INT64_MAX;

    t133 = (x565<=((x566/x567)^x568));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x569 = INT8_MIN;
	int8_t x570 = 25;
	uint32_t x571 = 638512981U;
	static int64_t x572 = INT64_MIN;
	int32_t t134 = -1303;

    t134 = (x569<=((x570/x571)^x572));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x574 = INT32_MIN;
	int8_t x575 = -5;
	int64_t x576 = 8781LL;
	int32_t t135 = -3312783;

    t135 = (x573<=((x574/x575)^x576));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x578 = 31;
	uint16_t x580 = UINT16_MAX;

    t136 = (x577<=((x578/x579)^x580));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x581 = INT64_MAX;
	int32_t t137 = 3;

    t137 = (x581<=((x582/x583)^x584));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x585 = 378973LLU;
	static volatile int8_t x587 = INT8_MIN;
	int32_t x588 = INT32_MAX;
	volatile int32_t t138 = -107315173;

    t138 = (x585<=((x586/x587)^x588));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x589 = 1;
	int32_t x590 = 5609;
	int16_t x592 = INT16_MAX;

    t139 = (x589<=((x590/x591)^x592));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x593 = 3551U;
	uint64_t x594 = 55149351LLU;
	int8_t x595 = INT8_MIN;
	int8_t x596 = -60;
	int32_t t140 = -4147253;

    t140 = (x593<=((x594/x595)^x596));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x600 = 1048;
	static int32_t t141 = 1;

    t141 = (x597<=((x598/x599)^x600));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x601 = 7296762333787LL;
	int64_t x602 = 297794LL;
	uint8_t x603 = UINT8_MAX;

    t142 = (x601<=((x602/x603)^x604));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x605 = INT16_MAX;

    t143 = (x605<=((x606/x607)^x608));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x609 = 6424379041875455379LLU;
	int16_t x610 = INT16_MIN;
	static int64_t x611 = INT64_MAX;
	uint16_t x612 = 1912U;
	int32_t t144 = 2001592;

    t144 = (x609<=((x610/x611)^x612));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x613 = 2U;
	static int16_t x614 = 0;
	static uint64_t x615 = 210762413189LLU;
	int64_t x616 = INT64_MAX;
	static volatile int32_t t145 = 467217;

    t145 = (x613<=((x614/x615)^x616));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x617 = INT32_MIN;
	int64_t x618 = INT64_MIN;
	static volatile uint32_t x619 = UINT32_MAX;
	int8_t x620 = INT8_MAX;
	volatile int32_t t146 = -1;

    t146 = (x617<=((x618/x619)^x620));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x621 = INT16_MIN;
	volatile uint16_t x622 = UINT16_MAX;
	volatile int32_t t147 = -34;

    t147 = (x621<=((x622/x623)^x624));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x625 = -1;
	int64_t x627 = -1LL;
	volatile uint16_t x628 = UINT16_MAX;

    t148 = (x625<=((x626/x627)^x628));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x629 = 3LLU;
	static volatile uint64_t x630 = UINT64_MAX;
	int64_t x631 = INT64_MIN;
	static int16_t x632 = -1417;
	volatile int32_t t149 = 0;

    t149 = (x629<=((x630/x631)^x632));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x633 = 6021U;
	int8_t x634 = INT8_MIN;
	int8_t x635 = -1;

    t150 = (x633<=((x634/x635)^x636));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x637 = 2068818U;
	volatile int8_t x638 = INT8_MIN;
	int8_t x639 = -28;
	int8_t x640 = 4;
	int32_t t151 = 28807792;

    t151 = (x637<=((x638/x639)^x640));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x641 = -515LL;
	int8_t x642 = -1;
	volatile int8_t x643 = INT8_MAX;
	int32_t x644 = INT32_MIN;
	int32_t t152 = -54481;

    t152 = (x641<=((x642/x643)^x644));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint32_t x645 = 53912U;
	static int8_t x646 = 37;
	volatile uint8_t x647 = 3U;
	volatile int16_t x648 = -1;
	int32_t t153 = -172434;

    t153 = (x645<=((x646/x647)^x648));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x649 = UINT8_MAX;
	static uint64_t x650 = UINT64_MAX;
	int8_t x651 = INT8_MAX;
	uint16_t x652 = UINT16_MAX;

    t154 = (x649<=((x650/x651)^x652));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x653 = -10;
	static volatile int32_t x655 = -1;
	static uint8_t x656 = 21U;
	static volatile int32_t t155 = -291750796;

    t155 = (x653<=((x654/x655)^x656));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x657 = -1;
	static volatile int8_t x659 = INT8_MIN;
	static volatile int32_t t156 = -5661;

    t156 = (x657<=((x658/x659)^x660));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x661 = -220;
	int64_t x662 = INT64_MAX;
	volatile int8_t x663 = 1;
	int32_t t157 = -747188;

    t157 = (x661<=((x662/x663)^x664));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x665 = -1;
	int32_t x667 = 592288;
	uint8_t x668 = UINT8_MAX;
	volatile int32_t t158 = -18212599;

    t158 = (x665<=((x666/x667)^x668));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x673 = -22359LL;
	int64_t x675 = INT64_MIN;
	int16_t x676 = INT16_MIN;

    t159 = (x673<=((x674/x675)^x676));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x677 = INT16_MAX;
	int32_t x679 = -1;
	uint8_t x680 = 29U;
	static volatile int32_t t160 = 4034;

    t160 = (x677<=((x678/x679)^x680));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x681 = 2;
	int32_t x683 = 53796922;
	int64_t x684 = -372277308LL;
	int32_t t161 = 101686;

    t161 = (x681<=((x682/x683)^x684));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x685 = INT64_MIN;
	uint32_t x686 = 69455122U;
	int16_t x687 = INT16_MIN;
	int32_t x688 = 916276913;
	volatile int32_t t162 = -67516179;

    t162 = (x685<=((x686/x687)^x688));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x690 = INT8_MIN;
	int16_t x691 = INT16_MAX;
	uint32_t x692 = 4U;
	static volatile int32_t t163 = -314;

    t163 = (x689<=((x690/x691)^x692));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x694 = INT8_MAX;
	volatile uint8_t x695 = 44U;
	int64_t x696 = -1LL;

    t164 = (x693<=((x694/x695)^x696));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x697 = UINT8_MAX;
	int64_t x698 = INT64_MAX;
	static int64_t x699 = INT64_MAX;
	static int32_t t165 = 9;

    t165 = (x697<=((x698/x699)^x700));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x701 = 24;
	int16_t x702 = 205;
	uint8_t x703 = 7U;
	static volatile int32_t t166 = -270168704;

    t166 = (x701<=((x702/x703)^x704));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x705 = 1;
	uint64_t x707 = 340050600841LLU;
	uint64_t x708 = 14967186499787LLU;
	static int32_t t167 = 236;

    t167 = (x705<=((x706/x707)^x708));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x709 = -39;
	int8_t x710 = 5;
	volatile int32_t x711 = INT32_MIN;
	uint32_t x712 = 22748913U;

    t168 = (x709<=((x710/x711)^x712));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x713 = INT8_MIN;
	int8_t x715 = 1;
	int64_t x716 = -2178712960048222769LL;
	int32_t t169 = -240742;

    t169 = (x713<=((x714/x715)^x716));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x717 = UINT64_MAX;
	volatile int8_t x718 = 3;
	static int32_t x719 = 27;
	uint32_t x720 = 442U;
	int32_t t170 = -1372;

    t170 = (x717<=((x718/x719)^x720));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x721 = -1;
	static int16_t x722 = INT16_MAX;
	uint8_t x723 = 4U;

    t171 = (x721<=((x722/x723)^x724));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x728 = 2667LL;

    t172 = (x725<=((x726/x727)^x728));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x729 = 764U;
	uint64_t x730 = 25991632518515LLU;
	int32_t x731 = 1374330;
	int64_t x732 = INT64_MIN;
	int32_t t173 = -3013811;

    t173 = (x729<=((x730/x731)^x732));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x734 = INT16_MIN;
	int16_t x735 = 1;
	static volatile int32_t t174 = 627;

    t174 = (x733<=((x734/x735)^x736));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x737 = INT32_MAX;
	int8_t x738 = INT8_MIN;
	int16_t x739 = 67;
	static int16_t x740 = INT16_MAX;
	int32_t t175 = 555;

    t175 = (x737<=((x738/x739)^x740));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x741 = INT8_MAX;
	uint32_t x743 = 1916U;
	int64_t x744 = -1LL;
	volatile int32_t t176 = -1772;

    t176 = (x741<=((x742/x743)^x744));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x746 = INT16_MAX;
	int8_t x748 = -56;
	int32_t t177 = -798;

    t177 = (x745<=((x746/x747)^x748));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x749 = 1U;
	int8_t x750 = INT8_MAX;
	int64_t x751 = INT64_MAX;
	int32_t x752 = INT32_MIN;
	int32_t t178 = 1035005628;

    t178 = (x749<=((x750/x751)^x752));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x753 = UINT8_MAX;
	int64_t x755 = -5238900616LL;
	int32_t x756 = INT32_MIN;
	int32_t t179 = -2;

    t179 = (x753<=((x754/x755)^x756));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x757 = INT64_MIN;
	int16_t x758 = INT16_MIN;
	volatile int8_t x759 = 30;
	volatile uint32_t x760 = 0U;
	volatile int32_t t180 = 62553;

    t180 = (x757<=((x758/x759)^x760));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x761 = INT32_MIN;
	static int32_t x763 = INT32_MIN;
	int32_t x764 = INT32_MIN;
	volatile int32_t t181 = -31715;

    t181 = (x761<=((x762/x763)^x764));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x771 = INT8_MAX;
	volatile int8_t x772 = -1;
	static volatile int32_t t182 = -23772137;

    t182 = (x769<=((x770/x771)^x772));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x773 = -2;
	int8_t x774 = 53;
	volatile int64_t x775 = INT64_MIN;
	int16_t x776 = INT16_MIN;
	int32_t t183 = -5698;

    t183 = (x773<=((x774/x775)^x776));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x777 = INT64_MAX;
	uint32_t x778 = 74921U;
	static int8_t x779 = -1;
	uint8_t x780 = 6U;

    t184 = (x777<=((x778/x779)^x780));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x781 = UINT64_MAX;
	volatile uint64_t x782 = UINT64_MAX;
	int64_t x783 = 3467009683971251LL;
	int32_t x784 = INT32_MAX;

    t185 = (x781<=((x782/x783)^x784));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x785 = 58;
	static int32_t x786 = INT32_MIN;
	volatile int64_t x787 = -1LL;
	static int16_t x788 = INT16_MIN;
	volatile int32_t t186 = -511;

    t186 = (x785<=((x786/x787)^x788));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x789 = INT16_MIN;
	uint64_t x790 = 1LLU;
	int16_t x791 = INT16_MIN;

    t187 = (x789<=((x790/x791)^x792));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x793 = INT32_MIN;
	uint32_t x794 = 137U;
	volatile int16_t x795 = INT16_MAX;
	uint64_t x796 = UINT64_MAX;
	int32_t t188 = -375;

    t188 = (x793<=((x794/x795)^x796));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x799 = INT8_MIN;
	int32_t t189 = 11;

    t189 = (x797<=((x798/x799)^x800));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x802 = 108U;
	static int32_t x803 = INT32_MIN;
	int64_t x804 = 23463401533093030LL;

    t190 = (x801<=((x802/x803)^x804));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x805 = INT64_MIN;
	int32_t x806 = -56252;
	int8_t x808 = INT8_MAX;
	int32_t t191 = 149747598;

    t191 = (x805<=((x806/x807)^x808));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x813 = -1;
	static int64_t x814 = INT64_MIN;
	volatile int16_t x816 = INT16_MAX;
	int32_t t192 = 1698;

    t192 = (x813<=((x814/x815)^x816));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x818 = INT16_MAX;
	int32_t x819 = INT32_MIN;
	uint32_t x820 = UINT32_MAX;
	volatile int32_t t193 = 9;

    t193 = (x817<=((x818/x819)^x820));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x821 = INT16_MIN;
	uint32_t x822 = 1787141U;
	int64_t x824 = 925978619888933LL;

    t194 = (x821<=((x822/x823)^x824));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x825 = UINT32_MAX;
	uint64_t x826 = 140455706870586711LLU;
	uint8_t x827 = 7U;
	int64_t x828 = INT64_MAX;

    t195 = (x825<=((x826/x827)^x828));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x829 = INT64_MAX;
	static uint32_t x830 = UINT32_MAX;
	static uint32_t x831 = UINT32_MAX;
	int16_t x832 = INT16_MIN;
	static int32_t t196 = 433282;

    t196 = (x829<=((x830/x831)^x832));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x833 = 1557671321975458LL;
	volatile uint16_t x834 = 1292U;
	static int32_t x835 = 59014;
	static int8_t x836 = INT8_MAX;
	volatile int32_t t197 = -153;

    t197 = (x833<=((x834/x835)^x836));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x837 = INT8_MIN;
	int32_t x838 = 380;
	volatile uint16_t x839 = 1U;
	int8_t x840 = -53;
	int32_t t198 = -1496440;

    t198 = (x837<=((x838/x839)^x840));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x842 = 12;
	uint8_t x843 = 114U;
	static volatile uint32_t x844 = 26301322U;
	volatile int32_t t199 = 304527;

    t199 = (x841<=((x842/x843)^x844));

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

