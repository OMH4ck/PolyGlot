
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

int64_t x10 = INT64_MAX;
volatile uint8_t x12 = 7U;
uint32_t x15 = 1U;
int16_t x25 = 46;
int32_t x26 = -1;
int32_t t6 = -187891;
int32_t t8 = 2522511;
static int32_t x39 = -92;
static int16_t x42 = INT16_MIN;
volatile int32_t t10 = -7935572;
static uint64_t x53 = 7954664161501241LLU;
uint64_t x57 = 10003854846LLU;
static int8_t x68 = INT8_MIN;
uint64_t x80 = 225975042854396210LLU;
volatile int32_t t19 = -8230;
uint64_t x82 = 1263145672687LLU;
static int64_t x84 = -1954601163818LL;
int64_t x91 = -192418801010241LL;
volatile uint16_t x92 = 2U;
int64_t x95 = INT64_MAX;
static uint8_t x96 = 38U;
volatile uint8_t x97 = 86U;
uint8_t x99 = 5U;
int8_t x101 = INT8_MIN;
static volatile int16_t x109 = -757;
int32_t x112 = INT32_MAX;
uint32_t x126 = 186125U;
int8_t x130 = INT8_MIN;
uint16_t x156 = 301U;
static volatile int64_t x161 = INT64_MIN;
volatile int16_t x172 = 45;
static volatile int32_t x173 = -1;
static uint64_t x178 = 5879319227343LLU;
int32_t x182 = -1;
int32_t x183 = INT32_MIN;
volatile int32_t t45 = 2;
int32_t x188 = INT32_MIN;
uint8_t x190 = 23U;
static int32_t x192 = INT32_MAX;
volatile int64_t x194 = INT64_MIN;
int64_t x200 = -1709059002644143313LL;
int32_t x205 = INT32_MIN;
int64_t x216 = 12968545073LL;
int32_t t53 = -180822239;
int32_t x219 = 3317;
int32_t x224 = -3;
static uint64_t x232 = UINT64_MAX;
int64_t x238 = -81919262070145LL;
static uint8_t x239 = 1U;
int32_t x241 = INT32_MIN;
volatile int32_t t60 = -7484539;
uint64_t x247 = UINT64_MAX;
int8_t x254 = 1;
static uint32_t x257 = UINT32_MAX;
int64_t x262 = -5688768805950LL;
int16_t x277 = -1;
int32_t t69 = -29677157;
static uint8_t x281 = 45U;
volatile int8_t x282 = INT8_MAX;
uint32_t x285 = 5U;
int32_t x293 = INT32_MIN;
static int64_t x296 = INT64_MIN;
int8_t x300 = -1;
uint16_t x307 = 21149U;
int64_t x318 = -1LL;
volatile uint64_t x321 = 153443189792LLU;
uint16_t x327 = UINT16_MAX;
static int8_t x332 = INT8_MAX;
int32_t t82 = 5;
volatile uint64_t x334 = 781661854309038211LLU;
int32_t x347 = 31909797;
static volatile int32_t t88 = -15913;
volatile int32_t t89 = 0;
static int64_t x361 = INT64_MIN;
uint32_t x362 = 16056U;
volatile int16_t x364 = 127;
static uint32_t x365 = 77U;
int8_t x366 = INT8_MIN;
uint8_t x369 = 7U;
volatile int32_t x374 = INT32_MIN;
int8_t x375 = INT8_MIN;
int64_t x380 = 126681698404673LL;
volatile int32_t t96 = -172;
int32_t t97 = -2553;
static int16_t x399 = INT16_MAX;
int32_t t101 = 376;
uint16_t x411 = 1U;
volatile int32_t t102 = 711;
int8_t x414 = 0;
uint8_t x415 = UINT8_MAX;
int16_t x422 = INT16_MIN;
uint32_t x426 = 1304655U;
int32_t x427 = INT32_MIN;
int32_t t106 = 921662;
int8_t x432 = INT8_MAX;
volatile int32_t t107 = -2;
volatile int16_t x436 = -438;
int64_t x441 = 49605598LL;
static uint64_t x447 = 1323516468LLU;
volatile uint8_t x452 = 9U;
int16_t x453 = INT16_MIN;
static int8_t x457 = INT8_MAX;
int16_t x476 = 1;
int64_t x478 = INT64_MAX;
uint64_t x480 = UINT64_MAX;
static int64_t x493 = -1LL;
uint16_t x496 = 8U;
int16_t x506 = INT16_MIN;
uint16_t x508 = 2U;
volatile int32_t t127 = -674727816;
uint16_t x515 = 5U;
volatile int32_t t128 = -387;
uint64_t x519 = 18639LLU;
uint8_t x520 = 1U;
int16_t x523 = INT16_MAX;
static uint16_t x525 = 73U;
int32_t t132 = -33877;
volatile uint8_t x537 = 49U;
int16_t x539 = -19;
uint32_t x545 = 26700U;
int32_t x547 = INT32_MAX;
int32_t x549 = INT32_MAX;
static int8_t x555 = INT8_MAX;
int64_t x568 = -88190340LL;
int64_t x571 = INT64_MIN;
static uint32_t x578 = 804U;
volatile int8_t x581 = 0;
volatile int32_t t145 = 16581524;
volatile uint64_t x586 = 100590752271LLU;
int16_t x587 = INT16_MAX;
static int64_t x595 = INT64_MAX;
int64_t x596 = INT64_MIN;
int16_t x601 = -27;
volatile int32_t t151 = 113;
int32_t x610 = 376003;
int32_t x613 = INT32_MAX;
int32_t x616 = 72513;
uint32_t x623 = UINT32_MAX;
uint64_t x625 = UINT64_MAX;
static volatile int32_t t156 = -10;
uint64_t x634 = 32388794529076069LLU;
volatile int16_t x635 = INT16_MAX;
int32_t x636 = 1540933;
volatile int16_t x640 = INT16_MIN;
int32_t t159 = 306294330;
int64_t x643 = -29329052086806427LL;
int64_t x647 = 17366462499LL;
uint32_t x650 = 458U;
uint8_t x652 = UINT8_MAX;
static int16_t x659 = INT16_MAX;
static int16_t x663 = INT16_MIN;
uint32_t x667 = 742U;
static volatile int16_t x670 = INT16_MIN;
int64_t x688 = -1LL;
uint32_t x689 = UINT32_MAX;
static volatile int32_t x694 = -1;
uint32_t x695 = UINT32_MAX;
volatile int32_t t173 = 16;
int32_t t174 = -6801625;
uint64_t x705 = UINT64_MAX;
volatile int16_t x706 = -1;
int64_t x708 = INT64_MIN;
volatile int32_t t178 = -189360;
uint32_t x719 = 54968357U;
uint8_t x723 = 93U;
int16_t x731 = 3901;
volatile int8_t x741 = INT8_MIN;
int32_t x744 = -185;
static volatile int32_t t185 = -326620;
int64_t x746 = -68324192933993978LL;
static int8_t x762 = -1;
static volatile int32_t x770 = -133323;
volatile uint16_t x773 = UINT16_MAX;
int16_t x776 = -3;
int64_t x779 = INT64_MAX;
int32_t x780 = INT32_MAX;
uint64_t x785 = 174782LLU;
int32_t x800 = INT32_MIN;


void f0(void) {
    	int16_t x1 = -1;
	uint64_t x2 = 24LLU;
	volatile int16_t x3 = INT16_MIN;
	uint16_t x4 = 357U;
	volatile int32_t t0 = 0;

    t0 = (x1<=((x2<=x3)*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	static volatile uint8_t x6 = 8U;
	static uint64_t x7 = 491LLU;
	int32_t x8 = 493380;
	volatile int32_t t1 = 117;

    t1 = (x5<=((x6<=x7)*x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 0U;
	int16_t x11 = INT16_MIN;
	static int32_t t2 = -356236946;

    t2 = (x9<=((x10<=x11)*x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MAX;
	uint64_t x14 = 1977LLU;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 0;

    t3 = (x13<=((x14<=x15)*x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 1U;
	uint64_t x18 = 2229886655LLU;
	volatile uint16_t x19 = UINT16_MAX;
	uint64_t x20 = UINT64_MAX;
	int32_t t4 = 266;

    t4 = (x17<=((x18<=x19)*x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 1U;
	static int32_t x22 = INT32_MIN;
	static int16_t x23 = INT16_MIN;
	int64_t x24 = INT64_MIN;
	int32_t t5 = 0;

    t5 = (x21<=((x22<=x23)*x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint32_t x27 = 1023781737U;
	static uint16_t x28 = 5U;

    t6 = (x25<=((x26<=x27)*x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	int32_t x30 = INT32_MAX;
	int64_t x31 = INT64_MAX;
	int8_t x32 = INT8_MIN;
	static int32_t t7 = -2641387;

    t7 = (x29<=((x30<=x31)*x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = INT8_MIN;
	volatile uint8_t x34 = UINT8_MAX;
	volatile int32_t x35 = INT32_MIN;
	uint16_t x36 = 52U;

    t8 = (x33<=((x34<=x35)*x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = INT16_MAX;
	static volatile int8_t x38 = INT8_MAX;
	uint64_t x40 = 3LLU;
	int32_t t9 = -15590;

    t9 = (x37<=((x38<=x39)*x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = INT8_MIN;
	int64_t x43 = -1LL;
	int8_t x44 = INT8_MIN;

    t10 = (x41<=((x42<=x43)*x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MAX;
	uint16_t x47 = UINT16_MAX;
	int8_t x48 = -1;
	volatile int32_t t11 = 2937;

    t11 = (x45<=((x46<=x47)*x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = INT64_MAX;
	volatile int16_t x50 = 1850;
	int8_t x51 = INT8_MIN;
	int16_t x52 = -79;
	volatile int32_t t12 = 179772031;

    t12 = (x49<=((x50<=x51)*x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x54 = UINT64_MAX;
	volatile int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 4;

    t13 = (x53<=((x54<=x55)*x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = INT64_MIN;
	int16_t x59 = -201;
	uint64_t x60 = 215487522LLU;
	int32_t t14 = -175;

    t14 = (x57<=((x58<=x59)*x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = INT16_MIN;
	int32_t x62 = INT32_MIN;
	uint64_t x63 = 1392895LLU;
	int64_t x64 = INT64_MIN;
	volatile int32_t t15 = 12;

    t15 = (x61<=((x62<=x63)*x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint8_t x65 = 40U;
	static int16_t x66 = -19;
	uint64_t x67 = 1548629LLU;
	volatile int32_t t16 = -13;

    t16 = (x65<=((x66<=x67)*x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x69 = 119U;
	int32_t x70 = INT32_MIN;
	int64_t x71 = INT64_MAX;
	int64_t x72 = INT64_MIN;
	volatile int32_t t17 = 453;

    t17 = (x69<=((x70<=x71)*x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	uint64_t x74 = 2528209337015687LLU;
	int16_t x75 = INT16_MIN;
	volatile int8_t x76 = 27;
	int32_t t18 = 13257;

    t18 = (x73<=((x74<=x75)*x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -1;
	volatile int8_t x78 = 40;
	int32_t x79 = 9;

    t19 = (x77<=((x78<=x79)*x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	static int64_t x83 = INT64_MAX;
	int32_t t20 = -1;

    t20 = (x81<=((x82<=x83)*x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 1164953254818933545LLU;
	int64_t x86 = INT64_MIN;
	static uint64_t x87 = UINT64_MAX;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t21 = -930932933;

    t21 = (x85<=((x86<=x87)*x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x89 = 28U;
	uint8_t x90 = 41U;
	volatile int32_t t22 = 3;

    t22 = (x89<=((x90<=x91)*x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	int64_t x94 = -2429369815LL;
	int32_t t23 = 1;

    t23 = (x93<=((x94<=x95)*x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x98 = INT8_MIN;
	int16_t x100 = INT16_MAX;
	volatile int32_t t24 = -25;

    t24 = (x97<=((x98<=x99)*x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x102 = 7970LLU;
	uint8_t x103 = 2U;
	static uint16_t x104 = 94U;
	volatile int32_t t25 = -10043;

    t25 = (x101<=((x102<=x103)*x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MIN;
	static volatile int16_t x107 = 44;
	volatile int16_t x108 = 0;
	int32_t t26 = 7;

    t26 = (x105<=((x106<=x107)*x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x110 = INT16_MAX;
	volatile int8_t x111 = INT8_MAX;
	int32_t t27 = -997593;

    t27 = (x109<=((x110<=x111)*x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint8_t x113 = UINT8_MAX;
	volatile int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MIN;
	volatile int32_t t28 = -11108180;

    t28 = (x113<=((x114<=x115)*x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 419U;
	int64_t x118 = -1LL;
	int64_t x119 = 75562LL;
	int8_t x120 = -2;
	int32_t t29 = 1;

    t29 = (x117<=((x118<=x119)*x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint8_t x121 = 3U;
	uint16_t x122 = 1166U;
	int64_t x123 = -1412858LL;
	int64_t x124 = INT64_MIN;
	int32_t t30 = 401;

    t30 = (x121<=((x122<=x123)*x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 1;
	volatile int64_t x127 = INT64_MIN;
	static volatile uint32_t x128 = 1719U;
	int32_t t31 = 472467513;

    t31 = (x125<=((x126<=x127)*x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x129 = 12463U;
	int8_t x131 = -1;
	int32_t x132 = 25;
	volatile int32_t t32 = 57;

    t32 = (x129<=((x130<=x131)*x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MAX;
	uint32_t x134 = 7U;
	volatile uint32_t x135 = 65266U;
	uint32_t x136 = 16U;
	static int32_t t33 = 51;

    t33 = (x133<=((x134<=x135)*x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = INT8_MAX;
	int16_t x138 = INT16_MAX;
	uint8_t x139 = UINT8_MAX;
	static int64_t x140 = INT64_MIN;
	int32_t t34 = -131283275;

    t34 = (x137<=((x138<=x139)*x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -1;
	static volatile int64_t x142 = 52LL;
	uint16_t x143 = 1547U;
	int16_t x144 = -1;
	volatile int32_t t35 = 120;

    t35 = (x141<=((x142<=x143)*x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x145 = -28261375;
	static int64_t x146 = INT64_MAX;
	volatile uint64_t x147 = 248398784LLU;
	uint32_t x148 = UINT32_MAX;
	static int32_t t36 = -7;

    t36 = (x145<=((x146<=x147)*x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 268682121U;
	static int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MIN;
	static uint32_t x152 = 436U;
	static volatile int32_t t37 = 2;

    t37 = (x149<=((x150<=x151)*x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MAX;
	volatile int32_t x154 = INT32_MAX;
	volatile uint32_t x155 = 10U;
	int32_t t38 = -86232;

    t38 = (x153<=((x154<=x155)*x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	uint16_t x158 = 3U;
	int8_t x159 = -1;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = -55898;

    t39 = (x157<=((x158<=x159)*x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x162 = INT8_MAX;
	int16_t x163 = INT16_MIN;
	static int32_t x164 = -439232422;
	static int32_t t40 = 11008;

    t40 = (x161<=((x162<=x163)*x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -1386375912261741LL;
	uint32_t x166 = UINT32_MAX;
	int64_t x167 = INT64_MIN;
	volatile int16_t x168 = INT16_MAX;
	volatile int32_t t41 = 76749248;

    t41 = (x165<=((x166<=x167)*x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = 4187514628124LL;
	volatile int16_t x170 = 2901;
	int32_t x171 = INT32_MAX;
	volatile int32_t t42 = -28394;

    t42 = (x169<=((x170<=x171)*x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x174 = 529188614134790LLU;
	volatile uint32_t x175 = 24289749U;
	int8_t x176 = INT8_MAX;
	volatile int32_t t43 = -3;

    t43 = (x173<=((x174<=x175)*x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = INT8_MAX;
	int64_t x179 = INT64_MIN;
	uint64_t x180 = 7032214LLU;
	int32_t t44 = -27;

    t44 = (x177<=((x178<=x179)*x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x181 = INT64_MIN;
	volatile int32_t x184 = INT32_MIN;

    t45 = (x181<=((x182<=x183)*x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MIN;
	volatile int64_t x186 = INT64_MIN;
	static volatile int32_t x187 = INT32_MAX;
	volatile int32_t t46 = 34;

    t46 = (x185<=((x186<=x187)*x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 10;
	volatile int8_t x191 = INT8_MIN;
	int32_t t47 = -507726859;

    t47 = (x189<=((x190<=x191)*x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x193 = 1852U;
	int16_t x195 = INT16_MIN;
	int16_t x196 = -6751;
	volatile int32_t t48 = -12123;

    t48 = (x193<=((x194<=x195)*x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MIN;
	int16_t x199 = INT16_MAX;
	volatile int32_t t49 = 411351946;

    t49 = (x197<=((x198<=x199)*x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x201 = -10;
	int8_t x202 = -1;
	int16_t x203 = INT16_MIN;
	uint32_t x204 = 56576U;
	int32_t t50 = 915;

    t50 = (x201<=((x202<=x203)*x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x206 = INT16_MIN;
	uint8_t x207 = UINT8_MAX;
	uint64_t x208 = 588966357LLU;
	volatile int32_t t51 = -482206365;

    t51 = (x205<=((x206<=x207)*x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x209 = INT32_MIN;
	static int32_t x210 = INT32_MAX;
	uint64_t x211 = 9LLU;
	static volatile int8_t x212 = INT8_MIN;
	int32_t t52 = 7093202;

    t52 = (x209<=((x210<=x211)*x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	static int32_t x214 = INT32_MAX;
	uint16_t x215 = 0U;

    t53 = (x213<=((x214<=x215)*x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = 0;
	volatile int8_t x218 = INT8_MIN;
	int32_t x220 = INT32_MIN;
	static volatile int32_t t54 = 15;

    t54 = (x217<=((x218<=x219)*x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 4U;
	uint16_t x222 = 249U;
	uint64_t x223 = UINT64_MAX;
	volatile int32_t t55 = 1034;

    t55 = (x221<=((x222<=x223)*x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;
	int32_t x226 = -1;
	uint32_t x227 = 3030426U;
	int32_t x228 = -3;
	static int32_t t56 = -650864380;

    t56 = (x225<=((x226<=x227)*x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MIN;
	int16_t x230 = INT16_MIN;
	uint8_t x231 = 17U;
	int32_t t57 = -705;

    t57 = (x229<=((x230<=x231)*x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x233 = 1304U;
	static int8_t x234 = INT8_MIN;
	static int32_t x235 = INT32_MIN;
	static uint64_t x236 = 1190269915LLU;
	volatile int32_t t58 = -4670151;

    t58 = (x233<=((x234<=x235)*x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 492U;
	int32_t x240 = 15491;
	volatile int32_t t59 = -75383;

    t59 = (x237<=((x238<=x239)*x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x242 = 2680LLU;
	static int64_t x243 = INT64_MIN;
	uint64_t x244 = UINT64_MAX;

    t60 = (x241<=((x242<=x243)*x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = 456845;
	uint32_t x246 = 24484839U;
	volatile int32_t x248 = INT32_MIN;
	volatile int32_t t61 = 904014;

    t61 = (x245<=((x246<=x247)*x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = 1429994546LLU;
	int8_t x250 = -1;
	int16_t x251 = INT16_MAX;
	int64_t x252 = INT64_MIN;
	static volatile int32_t t62 = 52110;

    t62 = (x249<=((x250<=x251)*x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = INT32_MAX;
	static int32_t x255 = INT32_MAX;
	int16_t x256 = INT16_MIN;
	volatile int32_t t63 = 461852;

    t63 = (x253<=((x254<=x255)*x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x258 = -1;
	int64_t x259 = INT64_MAX;
	int32_t x260 = -1;
	volatile int32_t t64 = 10;

    t64 = (x257<=((x258<=x259)*x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = -1;
	int8_t x263 = INT8_MIN;
	volatile int32_t x264 = -642205557;
	int32_t t65 = -1401;

    t65 = (x261<=((x262<=x263)*x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = INT64_MIN;
	int16_t x266 = -2;
	int8_t x267 = -1;
	static int8_t x268 = -1;
	static int32_t t66 = 556726413;

    t66 = (x265<=((x266<=x267)*x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MAX;
	uint8_t x270 = UINT8_MAX;
	static volatile int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MAX;
	int32_t t67 = -159176;

    t67 = (x269<=((x270<=x271)*x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MAX;
	int16_t x274 = INT16_MAX;
	int64_t x275 = INT64_MAX;
	int8_t x276 = -1;
	volatile int32_t t68 = 26958;

    t68 = (x273<=((x274<=x275)*x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x278 = INT64_MAX;
	uint64_t x279 = UINT64_MAX;
	int32_t x280 = INT32_MIN;

    t69 = (x277<=((x278<=x279)*x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint64_t x283 = 93400350LLU;
	volatile int8_t x284 = INT8_MAX;
	int32_t t70 = 2373400;

    t70 = (x281<=((x282<=x283)*x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x286 = 500814595997LLU;
	volatile uint64_t x287 = 706536174676214LLU;
	int32_t x288 = -102;
	static volatile int32_t t71 = -23449;

    t71 = (x285<=((x286<=x287)*x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 50U;
	int16_t x290 = 67;
	int32_t x291 = INT32_MIN;
	int16_t x292 = INT16_MIN;
	int32_t t72 = 216;

    t72 = (x289<=((x290<=x291)*x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x294 = 35944275552772LL;
	uint32_t x295 = 3U;
	volatile int32_t t73 = 0;

    t73 = (x293<=((x294<=x295)*x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = -1;
	static int64_t x298 = INT64_MIN;
	uint16_t x299 = 1U;
	int32_t t74 = 19841;

    t74 = (x297<=((x298<=x299)*x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = UINT64_MAX;
	uint64_t x302 = 872037429795719795LLU;
	volatile uint8_t x303 = 48U;
	static int8_t x304 = INT8_MAX;
	volatile int32_t t75 = 30;

    t75 = (x301<=((x302<=x303)*x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	volatile int16_t x306 = -40;
	static volatile int32_t x308 = 63086;
	int32_t t76 = -929;

    t76 = (x305<=((x306<=x307)*x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = 7434;
	static int64_t x310 = INT64_MAX;
	uint8_t x311 = 4U;
	volatile uint32_t x312 = 6959408U;
	volatile int32_t t77 = -202492;

    t77 = (x309<=((x310<=x311)*x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -807;
	int64_t x314 = INT64_MAX;
	int64_t x315 = INT64_MIN;
	int8_t x316 = INT8_MIN;
	int32_t t78 = 2006;

    t78 = (x313<=((x314<=x315)*x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = UINT16_MAX;
	static int64_t x319 = INT64_MIN;
	int16_t x320 = 139;
	int32_t t79 = -3;

    t79 = (x317<=((x318<=x319)*x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x322 = 1;
	uint8_t x323 = UINT8_MAX;
	int64_t x324 = -17041LL;
	static int32_t t80 = 237;

    t80 = (x321<=((x322<=x323)*x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -858927LL;
	int32_t x326 = INT32_MAX;
	int64_t x328 = 1393932298399LL;
	static int32_t t81 = 5;

    t81 = (x325<=((x326<=x327)*x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 11045258U;
	int8_t x330 = -2;
	uint64_t x331 = 271031155603LLU;

    t82 = (x329<=((x330<=x331)*x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x333 = INT64_MIN;
	volatile uint32_t x335 = 10229241U;
	static uint32_t x336 = 476U;
	volatile int32_t t83 = 26;

    t83 = (x333<=((x334<=x335)*x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = -42;
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = INT16_MIN;
	int64_t x340 = 717121440435740053LL;
	static volatile int32_t t84 = 313;

    t84 = (x337<=((x338<=x339)*x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = 0;
	int32_t x342 = INT32_MIN;
	int8_t x343 = INT8_MIN;
	int16_t x344 = -1;
	int32_t t85 = 824570110;

    t85 = (x341<=((x342<=x343)*x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = 69LL;
	int64_t x346 = INT64_MIN;
	static uint16_t x348 = 6U;
	static volatile int32_t t86 = -308690452;

    t86 = (x345<=((x346<=x347)*x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x349 = INT32_MIN;
	static int32_t x350 = INT32_MIN;
	uint16_t x351 = 29U;
	uint64_t x352 = 0LLU;
	static volatile int32_t t87 = 102166;

    t87 = (x349<=((x350<=x351)*x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x353 = 10;
	uint64_t x354 = UINT64_MAX;
	int8_t x355 = INT8_MIN;
	volatile int32_t x356 = INT32_MIN;

    t88 = (x353<=((x354<=x355)*x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x357 = UINT32_MAX;
	int8_t x358 = -1;
	int16_t x359 = -167;
	int64_t x360 = INT64_MAX;

    t89 = (x357<=((x358<=x359)*x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x363 = 949366276348524LL;
	volatile int32_t t90 = -3;

    t90 = (x361<=((x362<=x363)*x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x367 = INT16_MIN;
	int16_t x368 = INT16_MIN;
	volatile int32_t t91 = -39513;

    t91 = (x365<=((x366<=x367)*x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x370 = -1LL;
	uint32_t x371 = 1161U;
	int32_t x372 = -111;
	volatile int32_t t92 = -130033264;

    t92 = (x369<=((x370<=x371)*x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MAX;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t93 = 32827701;

    t93 = (x373<=((x374<=x375)*x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = UINT16_MAX;
	uint8_t x378 = 27U;
	uint16_t x379 = 358U;
	volatile int32_t t94 = 3;

    t94 = (x377<=((x378<=x379)*x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x381 = INT64_MIN;
	int8_t x382 = 0;
	volatile int8_t x383 = INT8_MAX;
	int16_t x384 = INT16_MIN;
	int32_t t95 = -1000;

    t95 = (x381<=((x382<=x383)*x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = -66;
	int8_t x386 = INT8_MIN;
	static uint32_t x387 = 486341U;
	volatile int16_t x388 = 518;

    t96 = (x385<=((x386<=x387)*x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x389 = 70;
	static volatile int16_t x390 = INT16_MAX;
	volatile uint8_t x391 = UINT8_MAX;
	static uint16_t x392 = 3027U;

    t97 = (x389<=((x390<=x391)*x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x393 = 95U;
	volatile uint64_t x394 = 16639588028892LLU;
	uint32_t x395 = 80708U;
	uint64_t x396 = UINT64_MAX;
	volatile int32_t t98 = 1;

    t98 = (x393<=((x394<=x395)*x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	volatile int32_t x398 = 132;
	int32_t x400 = 36565635;
	static volatile int32_t t99 = 1841;

    t99 = (x397<=((x398<=x399)*x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x401 = -1;
	int16_t x402 = INT16_MIN;
	int64_t x403 = 30752644990479155LL;
	static int16_t x404 = INT16_MIN;
	int32_t t100 = 1;

    t100 = (x401<=((x402<=x403)*x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x405 = 1U;
	static volatile int8_t x406 = INT8_MAX;
	uint8_t x407 = UINT8_MAX;
	uint64_t x408 = 2021290LLU;

    t101 = (x405<=((x406<=x407)*x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x409 = 3;
	int32_t x410 = INT32_MAX;
	uint16_t x412 = 11U;

    t102 = (x409<=((x410<=x411)*x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MAX;
	volatile uint32_t x416 = UINT32_MAX;
	volatile int32_t t103 = -158827398;

    t103 = (x413<=((x414<=x415)*x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = 1;
	int8_t x418 = INT8_MIN;
	int64_t x419 = INT64_MIN;
	uint8_t x420 = UINT8_MAX;
	int32_t t104 = -300793170;

    t104 = (x417<=((x418<=x419)*x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -1;
	volatile int8_t x423 = 5;
	static uint32_t x424 = UINT32_MAX;
	volatile int32_t t105 = -7;

    t105 = (x421<=((x422<=x423)*x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = UINT32_MAX;
	volatile uint64_t x428 = UINT64_MAX;

    t106 = (x425<=((x426<=x427)*x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MAX;
	volatile int64_t x430 = 20540139241LL;
	uint32_t x431 = 16U;

    t107 = (x429<=((x430<=x431)*x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MIN;
	int16_t x434 = INT16_MIN;
	volatile uint64_t x435 = 1534LLU;
	int32_t t108 = 1279473;

    t108 = (x433<=((x434<=x435)*x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	uint64_t x438 = UINT64_MAX;
	volatile int16_t x439 = 299;
	uint8_t x440 = 1U;
	static volatile int32_t t109 = -58026;

    t109 = (x437<=((x438<=x439)*x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x442 = INT8_MIN;
	int64_t x443 = INT64_MAX;
	uint64_t x444 = 6340LLU;
	static int32_t t110 = 1843232;

    t110 = (x441<=((x442<=x443)*x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int32_t x445 = INT32_MIN;
	int16_t x446 = INT16_MIN;
	int64_t x448 = INT64_MIN;
	static volatile int32_t t111 = 19;

    t111 = (x445<=((x446<=x447)*x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x449 = -1;
	int8_t x450 = INT8_MAX;
	int64_t x451 = INT64_MAX;
	static int32_t t112 = 12;

    t112 = (x449<=((x450<=x451)*x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x454 = INT8_MAX;
	uint16_t x455 = 9U;
	static int32_t x456 = INT32_MIN;
	int32_t t113 = -4;

    t113 = (x453<=((x454<=x455)*x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x458 = 179706161LL;
	volatile int64_t x459 = INT64_MAX;
	static int32_t x460 = 3;
	volatile int32_t t114 = 0;

    t114 = (x457<=((x458<=x459)*x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	int64_t x462 = -1LL;
	static int16_t x463 = -1;
	volatile uint64_t x464 = 14221LLU;
	volatile int32_t t115 = -309605;

    t115 = (x461<=((x462<=x463)*x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x465 = INT32_MAX;
	int32_t x466 = INT32_MIN;
	volatile int32_t x467 = -547769878;
	int32_t x468 = -1;
	volatile int32_t t116 = -254;

    t116 = (x465<=((x466<=x467)*x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int32_t x469 = -34681224;
	uint64_t x470 = 3102636565761082084LLU;
	volatile int8_t x471 = 2;
	int64_t x472 = -1LL;
	int32_t t117 = 22845;

    t117 = (x469<=((x470<=x471)*x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = UINT8_MAX;
	int16_t x474 = 2;
	int16_t x475 = INT16_MIN;
	int32_t t118 = -27878;

    t118 = (x473<=((x474<=x475)*x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = 541352855336596LL;
	int64_t x479 = -7595834905124482LL;
	int32_t t119 = -31634;

    t119 = (x477<=((x478<=x479)*x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = -1;
	uint8_t x482 = 54U;
	volatile uint32_t x483 = 1790U;
	volatile int32_t x484 = INT32_MIN;
	static volatile int32_t t120 = 1;

    t120 = (x481<=((x482<=x483)*x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MIN;
	int64_t x486 = INT64_MIN;
	int16_t x487 = 7109;
	uint64_t x488 = UINT64_MAX;
	volatile int32_t t121 = 814256;

    t121 = (x485<=((x486<=x487)*x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -1;
	volatile int32_t x490 = 69700705;
	uint64_t x491 = 73639340337589328LLU;
	uint64_t x492 = 16040LLU;
	static volatile int32_t t122 = 5264;

    t122 = (x489<=((x490<=x491)*x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x494 = INT8_MIN;
	int32_t x495 = INT32_MAX;
	int32_t t123 = 1305;

    t123 = (x493<=((x494<=x495)*x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = 6999;
	int32_t x498 = INT32_MIN;
	int16_t x499 = -1;
	int64_t x500 = -1LL;
	volatile int32_t t124 = 8024757;

    t124 = (x497<=((x498<=x499)*x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MAX;
	int64_t x502 = 175457538046753994LL;
	volatile uint32_t x503 = 3U;
	static uint32_t x504 = 4U;
	static int32_t t125 = -179;

    t125 = (x501<=((x502<=x503)*x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 195373LLU;
	volatile uint16_t x507 = UINT16_MAX;
	int32_t t126 = -22;

    t126 = (x505<=((x506<=x507)*x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 26386604186931LLU;
	int64_t x510 = 4437669LL;
	static uint8_t x511 = 1U;
	int16_t x512 = 1;

    t127 = (x509<=((x510<=x511)*x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -4870;
	uint32_t x514 = 11U;
	uint64_t x516 = UINT64_MAX;

    t128 = (x513<=((x514<=x515)*x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = UINT8_MAX;
	int8_t x518 = INT8_MIN;
	volatile int32_t t129 = -348547046;

    t129 = (x517<=((x518<=x519)*x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	static uint32_t x522 = 46176673U;
	int32_t x524 = INT32_MIN;
	static volatile int32_t t130 = 1;

    t130 = (x521<=((x522<=x523)*x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x526 = INT16_MAX;
	static int8_t x527 = 0;
	int64_t x528 = INT64_MIN;
	static int32_t t131 = -265206778;

    t131 = (x525<=((x526<=x527)*x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 27828U;
	volatile int32_t x530 = INT32_MIN;
	volatile int64_t x531 = INT64_MIN;
	static uint32_t x532 = UINT32_MAX;

    t132 = (x529<=((x530<=x531)*x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -2787469;
	int8_t x534 = INT8_MIN;
	int32_t x535 = -676465;
	static uint16_t x536 = 9U;
	volatile int32_t t133 = 106;

    t133 = (x533<=((x534<=x535)*x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x538 = -1;
	int64_t x540 = 40402LL;
	static volatile int32_t t134 = 39;

    t134 = (x537<=((x538<=x539)*x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = UINT16_MAX;
	int64_t x542 = INT64_MIN;
	uint64_t x543 = 130811776572LLU;
	int16_t x544 = -1;
	volatile int32_t t135 = 170434460;

    t135 = (x541<=((x542<=x543)*x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x546 = UINT16_MAX;
	uint32_t x548 = 21086563U;
	volatile int32_t t136 = -374824;

    t136 = (x545<=((x546<=x547)*x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x550 = UINT32_MAX;
	volatile int64_t x551 = INT64_MIN;
	int8_t x552 = -1;
	volatile int32_t t137 = -110;

    t137 = (x549<=((x550<=x551)*x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = -1;
	static uint16_t x554 = 10U;
	uint32_t x556 = 8058U;
	volatile int32_t t138 = 5701686;

    t138 = (x553<=((x554<=x555)*x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = INT64_MAX;
	uint16_t x558 = UINT16_MAX;
	static int8_t x559 = INT8_MIN;
	int64_t x560 = -106753932990228953LL;
	volatile int32_t t139 = 39808;

    t139 = (x557<=((x558<=x559)*x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MAX;
	uint16_t x562 = UINT16_MAX;
	int8_t x563 = INT8_MAX;
	static volatile int8_t x564 = INT8_MIN;
	static volatile int32_t t140 = -102;

    t140 = (x561<=((x562<=x563)*x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MIN;
	static int16_t x566 = INT16_MAX;
	int16_t x567 = 2995;
	volatile int32_t t141 = 1013;

    t141 = (x565<=((x566<=x567)*x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -1;
	static uint64_t x570 = UINT64_MAX;
	volatile uint64_t x572 = UINT64_MAX;
	int32_t t142 = 0;

    t142 = (x569<=((x570<=x571)*x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	static int16_t x574 = 9;
	uint32_t x575 = UINT32_MAX;
	int32_t x576 = INT32_MIN;
	static int32_t t143 = 12541086;

    t143 = (x573<=((x574<=x575)*x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -555;
	static int8_t x579 = 58;
	uint32_t x580 = UINT32_MAX;
	volatile int32_t t144 = -32758660;

    t144 = (x577<=((x578<=x579)*x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x582 = INT8_MIN;
	int64_t x583 = -1LL;
	uint32_t x584 = 0U;

    t145 = (x581<=((x582<=x583)*x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = UINT8_MAX;
	int8_t x588 = INT8_MAX;
	volatile int32_t t146 = 475;

    t146 = (x585<=((x586<=x587)*x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = UINT64_MAX;
	int32_t x590 = -1;
	int32_t x591 = 6571;
	int32_t x592 = -26435303;
	static int32_t t147 = 1;

    t147 = (x589<=((x590<=x591)*x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MIN;
	static uint32_t x594 = 77011U;
	static int32_t t148 = -385135;

    t148 = (x593<=((x594<=x595)*x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MAX;
	volatile uint8_t x598 = UINT8_MAX;
	volatile int64_t x599 = 1549033420336LL;
	static uint16_t x600 = 25332U;
	static volatile int32_t t149 = -887240;

    t149 = (x597<=((x598<=x599)*x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x602 = INT64_MIN;
	int16_t x603 = INT16_MIN;
	int32_t x604 = INT32_MAX;
	volatile int32_t t150 = -85;

    t150 = (x601<=((x602<=x603)*x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -1;
	static int8_t x606 = INT8_MAX;
	static volatile int16_t x607 = INT16_MAX;
	int8_t x608 = INT8_MAX;

    t151 = (x605<=((x606<=x607)*x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	uint32_t x611 = 1290065U;
	static int8_t x612 = 1;
	int32_t t152 = 123014439;

    t152 = (x609<=((x610<=x611)*x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x614 = 3U;
	static int8_t x615 = 15;
	static int32_t t153 = -7185;

    t153 = (x613<=((x614<=x615)*x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = 6;
	uint16_t x618 = 13U;
	volatile int8_t x619 = INT8_MIN;
	volatile uint8_t x620 = 1U;
	volatile int32_t t154 = 20039;

    t154 = (x617<=((x618<=x619)*x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x621 = INT8_MAX;
	int16_t x622 = -1;
	int16_t x624 = -1;
	volatile int32_t t155 = 466144691;

    t155 = (x621<=((x622<=x623)*x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x626 = UINT16_MAX;
	int8_t x627 = -21;
	uint64_t x628 = 2LLU;

    t156 = (x625<=((x626<=x627)*x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint16_t x629 = UINT16_MAX;
	int32_t x630 = -212;
	static int32_t x631 = -1;
	int8_t x632 = INT8_MIN;
	int32_t t157 = 3;

    t157 = (x629<=((x630<=x631)*x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = -1;
	int32_t t158 = -2;

    t158 = (x633<=((x634<=x635)*x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = -1;
	uint8_t x638 = 10U;
	static int16_t x639 = -1;

    t159 = (x637<=((x638<=x639)*x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MIN;
	static uint8_t x642 = 2U;
	int64_t x644 = INT64_MAX;
	int32_t t160 = 7097390;

    t160 = (x641<=((x642<=x643)*x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -1;
	int16_t x646 = INT16_MIN;
	volatile int8_t x648 = INT8_MAX;
	volatile int32_t t161 = -764115;

    t161 = (x645<=((x646<=x647)*x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	int64_t x651 = -16682268600462893LL;
	volatile int32_t t162 = -243207;

    t162 = (x649<=((x650<=x651)*x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = UINT8_MAX;
	int64_t x654 = 3661306LL;
	volatile int16_t x655 = -1;
	volatile int16_t x656 = 0;
	volatile int32_t t163 = 3549;

    t163 = (x653<=((x654<=x655)*x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	int32_t x658 = INT32_MAX;
	volatile uint32_t x660 = 31U;
	static int32_t t164 = -1027147;

    t164 = (x657<=((x658<=x659)*x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x661 = UINT32_MAX;
	int64_t x662 = INT64_MAX;
	volatile int64_t x664 = -429031LL;
	int32_t t165 = 129;

    t165 = (x661<=((x662<=x663)*x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x665 = -680;
	int16_t x666 = -1;
	static int32_t x668 = -1;
	static int32_t t166 = 1;

    t166 = (x665<=((x666<=x667)*x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MAX;
	volatile int8_t x671 = -1;
	int16_t x672 = -1;
	static int32_t t167 = -2;

    t167 = (x669<=((x670<=x671)*x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 3U;
	uint64_t x674 = 131426364264LLU;
	static uint16_t x675 = UINT16_MAX;
	uint64_t x676 = UINT64_MAX;
	int32_t t168 = -146395;

    t168 = (x673<=((x674<=x675)*x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = -1;
	int64_t x678 = -1390602540642LL;
	int8_t x679 = 33;
	volatile int64_t x680 = 4102LL;
	volatile int32_t t169 = -1;

    t169 = (x677<=((x678<=x679)*x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = 31;
	volatile int64_t x682 = -1202LL;
	uint64_t x683 = 576LLU;
	static uint64_t x684 = UINT64_MAX;
	static int32_t t170 = 4574;

    t170 = (x681<=((x682<=x683)*x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	uint8_t x686 = UINT8_MAX;
	uint16_t x687 = UINT16_MAX;
	volatile int32_t t171 = 65329;

    t171 = (x685<=((x686<=x687)*x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x690 = INT32_MIN;
	int32_t x691 = -1;
	volatile int64_t x692 = INT64_MIN;
	volatile int32_t t172 = 782;

    t172 = (x689<=((x690<=x691)*x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	volatile int64_t x696 = INT64_MIN;

    t173 = (x693<=((x694<=x695)*x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = 13;
	static int16_t x698 = INT16_MIN;
	int64_t x699 = 88185223LL;
	uint8_t x700 = 14U;

    t174 = (x697<=((x698<=x699)*x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = -84LL;
	uint8_t x702 = 0U;
	int8_t x703 = -1;
	uint64_t x704 = UINT64_MAX;
	volatile int32_t t175 = 121679;

    t175 = (x701<=((x702<=x703)*x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x707 = -5086;
	volatile int32_t t176 = 333397875;

    t176 = (x705<=((x706<=x707)*x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x709 = INT32_MIN;
	int8_t x710 = -1;
	int8_t x711 = INT8_MIN;
	volatile int8_t x712 = -1;
	int32_t t177 = -178160564;

    t177 = (x709<=((x710<=x711)*x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = 26695U;
	uint64_t x714 = UINT64_MAX;
	volatile int32_t x715 = INT32_MAX;
	static int32_t x716 = 9;

    t178 = (x713<=((x714<=x715)*x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x717 = INT64_MIN;
	volatile uint8_t x718 = 22U;
	int16_t x720 = INT16_MIN;
	volatile int32_t t179 = -11;

    t179 = (x717<=((x718<=x719)*x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -1;
	int16_t x722 = 51;
	static volatile uint64_t x724 = 5736LLU;
	int32_t t180 = 7;

    t180 = (x721<=((x722<=x723)*x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x725 = 148956867306LLU;
	int64_t x726 = 884938228LL;
	static int16_t x727 = -2921;
	static uint32_t x728 = 618041U;
	volatile int32_t t181 = 357893451;

    t181 = (x725<=((x726<=x727)*x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	static volatile int32_t x730 = 146793;
	volatile uint32_t x732 = 55U;
	int32_t t182 = 36;

    t182 = (x729<=((x730<=x731)*x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x733 = -6822221;
	static uint16_t x734 = UINT16_MAX;
	static int8_t x735 = INT8_MIN;
	int32_t x736 = INT32_MIN;
	static volatile int32_t t183 = -30797;

    t183 = (x733<=((x734<=x735)*x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MIN;
	static int32_t x738 = -1;
	volatile int64_t x739 = -1LL;
	static int32_t x740 = 22;
	volatile int32_t t184 = 1277611;

    t184 = (x737<=((x738<=x739)*x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x742 = INT64_MIN;
	int8_t x743 = INT8_MIN;

    t185 = (x741<=((x742<=x743)*x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = 8U;
	volatile int64_t x747 = INT64_MIN;
	int16_t x748 = -1;
	int32_t t186 = 0;

    t186 = (x745<=((x746<=x747)*x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = 176319LL;
	int32_t x750 = INT32_MIN;
	int32_t x751 = -1738322;
	int8_t x752 = -7;
	static int32_t t187 = -6;

    t187 = (x749<=((x750<=x751)*x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MAX;
	uint32_t x754 = 141124784U;
	int64_t x755 = INT64_MAX;
	int32_t x756 = INT32_MIN;
	static volatile int32_t t188 = 8;

    t188 = (x753<=((x754<=x755)*x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = 0;
	static int32_t x758 = INT32_MIN;
	int32_t x759 = INT32_MIN;
	int32_t x760 = INT32_MIN;
	volatile int32_t t189 = 1638;

    t189 = (x757<=((x758<=x759)*x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1;
	uint16_t x763 = UINT16_MAX;
	volatile uint8_t x764 = 3U;
	volatile int32_t t190 = 43;

    t190 = (x761<=((x762<=x763)*x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = -1;
	int16_t x766 = INT16_MIN;
	volatile int8_t x767 = 38;
	int64_t x768 = -152392261518423131LL;
	volatile int32_t t191 = -83;

    t191 = (x765<=((x766<=x767)*x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -480695065992131706LL;
	volatile int32_t x771 = -1;
	uint32_t x772 = 7104849U;
	int32_t t192 = -14144;

    t192 = (x769<=((x770<=x771)*x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x774 = -1LL;
	static uint16_t x775 = 18314U;
	static int32_t t193 = 96056;

    t193 = (x773<=((x774<=x775)*x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 1800;
	int32_t x778 = INT32_MIN;
	static int32_t t194 = 53319950;

    t194 = (x777<=((x778<=x779)*x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MAX;
	static int64_t x782 = -1LL;
	volatile int8_t x783 = INT8_MAX;
	int16_t x784 = INT16_MIN;
	static volatile int32_t t195 = 18711716;

    t195 = (x781<=((x782<=x783)*x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x786 = 5531437465LLU;
	int32_t x787 = INT32_MIN;
	static uint16_t x788 = 2U;
	volatile int32_t t196 = 0;

    t196 = (x785<=((x786<=x787)*x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = 1;
	static uint8_t x790 = 14U;
	int8_t x791 = -26;
	uint16_t x792 = 1880U;
	static volatile int32_t t197 = 93513;

    t197 = (x789<=((x790<=x791)*x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -1;
	volatile int8_t x794 = 0;
	static int32_t x795 = INT32_MIN;
	int16_t x796 = INT16_MIN;
	volatile int32_t t198 = -2;

    t198 = (x793<=((x794<=x795)*x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x797 = 10;
	int32_t x798 = INT32_MIN;
	int64_t x799 = INT64_MIN;
	int32_t t199 = -3;

    t199 = (x797<=((x798<=x799)*x800));

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

