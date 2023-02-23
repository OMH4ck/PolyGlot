
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

int8_t x5 = INT8_MIN;
int8_t x8 = INT8_MIN;
int64_t x15 = -1LL;
uint64_t x16 = 3145204302LLU;
static int64_t x17 = INT64_MAX;
int32_t x25 = INT32_MAX;
uint32_t x30 = 570467610U;
static volatile int32_t t7 = -9;
uint32_t x35 = 64964839U;
int8_t x38 = INT8_MAX;
int64_t x39 = 2376011364LL;
int8_t x42 = INT8_MIN;
int16_t x50 = INT16_MAX;
static volatile int64_t t12 = 16687844LL;
int64_t x58 = INT64_MIN;
int8_t x59 = INT8_MAX;
static int64_t x62 = 24562270LL;
int8_t x63 = INT8_MAX;
uint64_t x65 = UINT64_MAX;
int16_t x67 = -1;
volatile int8_t x75 = -1;
int16_t x83 = INT16_MIN;
uint32_t x89 = UINT32_MAX;
volatile uint32_t t22 = UINT32_MAX;
int32_t x100 = INT32_MAX;
int16_t x101 = -38;
static int16_t x103 = INT16_MAX;
int32_t x104 = INT32_MAX;
volatile int32_t t25 = -2;
static int16_t x107 = 333;
int8_t x109 = INT8_MIN;
static volatile uint8_t x112 = 86U;
int64_t x115 = 408LL;
int32_t t28 = -1686;
int8_t x117 = -46;
int8_t x118 = 0;
int16_t x121 = 208;
static uint8_t x123 = UINT8_MAX;
int16_t x128 = -1;
volatile uint32_t t31 = UINT32_MAX;
uint64_t x135 = 277528897036896696LLU;
int16_t x138 = -1;
volatile int16_t x142 = -1;
int64_t x144 = 21622LL;
int32_t t35 = -17;
volatile int32_t t36 = 3513775;
static volatile uint32_t x149 = 499U;
int32_t x158 = INT32_MIN;
int32_t x159 = INT32_MAX;
uint8_t x160 = UINT8_MAX;
int16_t x163 = -2949;
uint64_t x172 = 31565338419259665LLU;
int8_t x174 = -1;
static int32_t t43 = 3411723;
volatile int32_t x177 = INT32_MAX;
uint16_t x182 = 5U;
int32_t x186 = -1;
int8_t x191 = -1;
int16_t x192 = -1;
static int32_t t48 = 1;
volatile int32_t x209 = -5726;
int64_t x213 = INT64_MAX;
int16_t x233 = INT16_MIN;
int32_t x235 = -1;
uint16_t x236 = 14U;
int16_t x237 = 4106;
int32_t x239 = -317;
int32_t x241 = -1;
volatile uint64_t x244 = 1LLU;
volatile uint64_t x246 = 4972496LLU;
static volatile int32_t t61 = 119596;
uint8_t x253 = UINT8_MAX;
uint8_t x257 = 1U;
int8_t x260 = -12;
static volatile uint64_t x266 = 40LLU;
int8_t x268 = -1;
int32_t t66 = -495;
int32_t t67 = 182;
int64_t x282 = -1LL;
volatile int32_t x283 = INT32_MIN;
int8_t x285 = INT8_MIN;
static volatile int64_t x288 = INT64_MIN;
int64_t x289 = INT64_MIN;
int64_t x291 = -3773518504064052798LL;
volatile int8_t x292 = -1;
int32_t x293 = INT32_MIN;
volatile int64_t x298 = INT64_MIN;
volatile uint8_t x306 = 28U;
int32_t x308 = 7341;
int32_t t75 = -40604489;
static int8_t x309 = INT8_MIN;
volatile uint16_t x311 = UINT16_MAX;
volatile int32_t t77 = 113998607;
static int32_t x317 = 13;
int16_t x326 = -1;
int32_t x328 = -1528;
int64_t t80 = 1558907864333260239LL;
volatile int16_t x332 = INT16_MIN;
int64_t x335 = INT64_MIN;
int32_t x340 = INT32_MIN;
uint64_t x342 = 38682LLU;
static int32_t x346 = -1;
static uint64_t x351 = UINT64_MAX;
int32_t x354 = -1;
int64_t x360 = -1LL;
uint32_t x363 = 3793U;
volatile uint8_t x366 = 31U;
int32_t x369 = -1;
int16_t x376 = INT16_MAX;
int32_t t93 = 139;
int8_t x382 = -1;
static int16_t x387 = -3656;
volatile int8_t x391 = INT8_MIN;
static int16_t x393 = INT16_MAX;
int16_t x395 = INT16_MIN;
volatile uint64_t x396 = 0LLU;
static int32_t t97 = 111706189;
int8_t x404 = -1;
int32_t x417 = INT32_MIN;
volatile uint8_t x421 = 4U;
uint8_t x422 = 0U;
uint32_t x423 = 3U;
static int32_t x424 = INT32_MIN;
volatile int32_t t104 = 37718;
uint16_t x426 = 2744U;
volatile uint8_t x428 = 85U;
int16_t x443 = INT16_MIN;
int32_t t108 = -40433245;
int8_t x452 = 0;
int64_t x455 = INT64_MAX;
volatile int32_t t111 = 275260131;
int8_t x468 = 10;
int32_t x469 = -1592491;
volatile uint64_t x472 = 1871106LLU;
volatile int64_t x474 = INT64_MIN;
int32_t x481 = INT32_MIN;
int32_t x484 = INT32_MAX;
int32_t t118 = -38698560;
uint8_t x488 = 96U;
volatile uint64_t x489 = 52300626006110LLU;
int16_t x500 = -1;
uint32_t x501 = 2573948U;
volatile int8_t x506 = -1;
volatile int32_t x508 = -1;
volatile int32_t t126 = -11598;
uint32_t x522 = 15996U;
static int32_t x525 = INT32_MAX;
int32_t x528 = INT32_MIN;
static uint16_t x530 = UINT16_MAX;
static int32_t t130 = -2082370;
int16_t x539 = INT16_MIN;
volatile int32_t t133 = 52982331;
uint8_t x545 = 0U;
uint64_t x558 = UINT64_MAX;
int32_t x559 = INT32_MIN;
uint64_t x560 = UINT64_MAX;
int64_t x568 = -1LL;
int32_t x569 = INT32_MIN;
int8_t x574 = INT8_MIN;
uint32_t x585 = 29U;
int32_t x588 = -329841874;
static volatile int32_t x596 = -156328508;
volatile uint64_t x599 = 21263592LLU;
int32_t t148 = -22;
uint16_t x608 = UINT16_MAX;
int32_t t150 = -119;
static int8_t x613 = -1;
volatile int8_t x616 = INT8_MIN;
static uint32_t x620 = 325049U;
int8_t x622 = INT8_MIN;
int16_t x631 = INT16_MIN;
volatile int64_t x632 = -31512445629964LL;
uint8_t x633 = UINT8_MAX;
volatile uint16_t x638 = UINT16_MAX;
static int64_t x643 = INT64_MIN;
static volatile int8_t x646 = -1;
volatile int64_t x654 = -1LL;
uint8_t x656 = UINT8_MAX;
static volatile int16_t x658 = 13268;
uint8_t x668 = 24U;
static volatile int32_t t165 = 931;
volatile int32_t t166 = -279;
static int64_t x678 = INT64_MAX;
int8_t x684 = -8;
volatile uint8_t x686 = 59U;
int32_t x689 = INT32_MAX;
int8_t x691 = INT8_MAX;
volatile int32_t t170 = INT32_MAX;
int8_t x694 = INT8_MIN;
uint16_t x696 = UINT16_MAX;
uint32_t x699 = 52115405U;
volatile int32_t t172 = 2277581;
static int16_t x702 = -2471;
volatile int64_t x703 = 7LL;
volatile int32_t t173 = -1;
uint8_t x706 = 6U;
int8_t x716 = INT8_MAX;
volatile int8_t x718 = INT8_MIN;
static volatile int32_t x720 = INT32_MIN;
volatile uint64_t t177 = 15LLU;
volatile uint8_t x723 = UINT8_MAX;
int64_t x730 = -1LL;
int16_t x732 = INT16_MAX;
volatile int32_t t180 = 133432223;
static uint8_t x738 = 52U;
int8_t x744 = INT8_MIN;
static int16_t x753 = INT16_MIN;
uint8_t x756 = 60U;
int32_t x759 = INT32_MAX;
volatile int16_t x760 = INT16_MIN;
int16_t x764 = -454;
int64_t x767 = -3491767762324944063LL;
static uint8_t x771 = 2U;
static int32_t x772 = INT32_MIN;
volatile int32_t t190 = -522811;
int32_t x778 = INT32_MAX;
volatile int32_t t193 = 118723666;
int8_t x785 = INT8_MAX;
uint64_t x786 = 929771020LLU;
int64_t x787 = INT64_MAX;
static int32_t t194 = -13944992;
uint16_t x789 = 48U;
uint64_t t196 = 16550646786679LLU;
volatile int32_t t199 = -84053;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int8_t x2 = -13;
	static volatile int32_t x3 = -1;
	int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = -2;

    t0 = (x1^((x2%x3)<=x4));

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = 7345;
	int64_t x7 = -50272693645602531LL;
	volatile int32_t t1 = 992;

    t1 = (x5^((x6%x7)<=x8));

    if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 1;
	uint8_t x10 = UINT8_MAX;
	uint64_t x11 = 1922193269LLU;
	int8_t x12 = 1;
	int32_t t2 = 28283253;

    t2 = (x9^((x10%x11)<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 175U;
	static volatile int32_t x14 = INT32_MIN;
	volatile int32_t t3 = 345;

    t3 = (x13^((x14%x15)<=x16));

    if (t3 != 174) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = 1702U;
	int16_t x19 = INT16_MIN;
	int8_t x20 = INT8_MIN;
	int64_t t4 = 21487LL;

    t4 = (x17^((x18%x19)<=x20));

    if (t4 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = INT64_MIN;
	int64_t x22 = INT64_MIN;
	int16_t x23 = INT16_MIN;
	uint16_t x24 = 3413U;
	int64_t t5 = -1LL;

    t5 = (x21^((x22%x23)<=x24));

    if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x26 = INT64_MAX;
	uint32_t x27 = 39297U;
	int32_t x28 = 12327305;
	volatile int32_t t6 = -3;

    t6 = (x25^((x26%x27)<=x28));

    if (t6 != 2147483646) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	uint8_t x31 = UINT8_MAX;
	int8_t x32 = INT8_MAX;

    t7 = (x29^((x30%x31)<=x32));

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -7;
	static int32_t x34 = INT32_MIN;
	int32_t x36 = INT32_MIN;
	int32_t t8 = -3652529;

    t8 = (x33^((x34%x35)<=x36));

    if (t8 != -8) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 4716LLU;
	int16_t x40 = -1;
	volatile uint64_t t9 = 9177LLU;

    t9 = (x37^((x38%x39)<=x40));

    if (t9 != 4716LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 429;
	int8_t x43 = -1;
	volatile int16_t x44 = INT16_MIN;
	int32_t t10 = 1191127;

    t10 = (x41^((x42%x43)<=x44));

    if (t10 != 429) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	uint16_t x46 = UINT16_MAX;
	int8_t x47 = 3;
	int64_t x48 = INT64_MIN;
	volatile int64_t t11 = INT64_MIN;

    t11 = (x45^((x46%x47)<=x48));

    if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	static uint32_t x51 = UINT32_MAX;
	int32_t x52 = -1;

    t12 = (x49^((x50%x51)<=x52));

    if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	uint16_t x54 = 123U;
	uint32_t x55 = 21U;
	int16_t x56 = INT16_MAX;
	volatile int32_t t13 = 9;

    t13 = (x53^((x54%x55)<=x56));

    if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 2827U;
	uint8_t x60 = 0U;
	int32_t t14 = -1019782405;

    t14 = (x57^((x58%x59)<=x60));

    if (t14 != 2826) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 450827650U;
	int32_t x64 = INT32_MAX;
	uint32_t t15 = 270U;

    t15 = (x61^((x62%x63)<=x64));

    if (t15 != 450827651U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x66 = 16U;
	static int8_t x68 = -3;
	uint64_t t16 = UINT64_MAX;

    t16 = (x65^((x66%x67)<=x68));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = UINT64_MAX;
	int16_t x70 = 8052;
	uint32_t x71 = 6695U;
	int64_t x72 = INT64_MIN;
	volatile uint64_t t17 = UINT64_MAX;

    t17 = (x69^((x70%x71)<=x72));

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MAX;
	int32_t x74 = INT32_MAX;
	uint16_t x76 = UINT16_MAX;
	int32_t t18 = -27825690;

    t18 = (x73^((x74%x75)<=x76));

    if (t18 != 32766) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = 1;
	int32_t x78 = INT32_MIN;
	int64_t x79 = -56LL;
	volatile uint16_t x80 = 14U;
	volatile int32_t t19 = 257171;

    t19 = (x77^((x78%x79)<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 94U;
	static int32_t x82 = 8;
	static int32_t x84 = -200;
	static volatile uint32_t t20 = 953169853U;

    t20 = (x81^((x82%x83)<=x84));

    if (t20 != 94U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	static int16_t x86 = INT16_MIN;
	int16_t x87 = -1;
	int16_t x88 = INT16_MAX;
	int32_t t21 = 3480;

    t21 = (x85^((x86%x87)<=x88));

    if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x90 = 18U;
	volatile int64_t x91 = INT64_MAX;
	int16_t x92 = 3;

    t22 = (x89^((x90%x91)<=x92));

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 265U;
	volatile int64_t x94 = -428LL;
	volatile int16_t x95 = -1;
	int16_t x96 = -3;
	int32_t t23 = -1;

    t23 = (x93^((x94%x95)<=x96));

    if (t23 != 265) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 0;
	int8_t x98 = INT8_MIN;
	static uint64_t x99 = 34397365059037306LLU;
	int32_t t24 = 93941;

    t24 = (x97^((x98%x99)<=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x102 = UINT16_MAX;

    t25 = (x101^((x102%x103)<=x104));

    if (t25 != -37) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 188U;
	int32_t x106 = INT32_MIN;
	volatile int32_t x108 = INT32_MIN;
	int32_t t26 = -431995251;

    t26 = (x105^((x106%x107)<=x108));

    if (t26 != 188) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x110 = 58423959137013931LLU;
	static uint64_t x111 = 15953LLU;
	volatile int32_t t27 = 12054;

    t27 = (x109^((x110%x111)<=x112));

    if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	uint8_t x114 = UINT8_MAX;
	int16_t x116 = INT16_MIN;

    t28 = (x113^((x114%x115)<=x116));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x119 = UINT32_MAX;
	int64_t x120 = INT64_MAX;
	static int32_t t29 = 0;

    t29 = (x117^((x118%x119)<=x120));

    if (t29 != -45) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = INT8_MIN;
	int64_t x124 = -61599767013332365LL;
	static int32_t t30 = -883136;

    t30 = (x121^((x122%x123)<=x124));

    if (t30 != 208) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = UINT32_MAX;
	int64_t x126 = 154722039229249609LL;
	int32_t x127 = INT32_MIN;

    t31 = (x125^((x126%x127)<=x128));

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MIN;
	int16_t x131 = INT16_MIN;
	uint16_t x132 = 5192U;
	int32_t t32 = -1908396;

    t32 = (x129^((x130%x131)<=x132));

    if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x133 = 1U;
	volatile int32_t x134 = -1;
	volatile int8_t x136 = -3;
	int32_t t33 = -1849828;

    t33 = (x133^((x134%x135)<=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x137 = 24744LLU;
	uint16_t x139 = 97U;
	static uint16_t x140 = 1045U;
	static volatile uint64_t t34 = 156LLU;

    t34 = (x137^((x138%x139)<=x140));

    if (t34 != 24745LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x141 = -186775744;
	int8_t x143 = INT8_MAX;

    t35 = (x141^((x142%x143)<=x144));

    if (t35 != -186775743) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 1;
	int64_t x146 = 17LL;
	static int8_t x147 = -1;
	static int64_t x148 = INT64_MIN;

    t36 = (x145^((x146%x147)<=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = INT64_MAX;
	int16_t x151 = INT16_MIN;
	int32_t x152 = INT32_MAX;
	volatile uint32_t t37 = 0U;

    t37 = (x149^((x150%x151)<=x152));

    if (t37 != 498U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = INT64_MIN;
	volatile uint16_t x154 = 93U;
	int32_t x155 = INT32_MAX;
	uint32_t x156 = 87680797U;
	static volatile int64_t t38 = -131LL;

    t38 = (x153^((x154%x155)<=x156));

    if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = 1;
	int32_t t39 = 0;

    t39 = (x157^((x158%x159)<=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x161 = INT8_MIN;
	static int32_t x162 = INT32_MAX;
	int64_t x164 = -940778371455LL;
	int32_t t40 = -18895;

    t40 = (x161^((x162%x163)<=x164));

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = UINT8_MAX;
	uint16_t x166 = 0U;
	static int16_t x167 = INT16_MAX;
	static volatile int32_t x168 = INT32_MAX;
	int32_t t41 = -16159;

    t41 = (x165^((x166%x167)<=x168));

    if (t41 != 254) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	uint16_t x170 = 29784U;
	static volatile int32_t x171 = 1;
	volatile int32_t t42 = -1179471;

    t42 = (x169^((x170%x171)<=x172));

    if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 0U;
	int64_t x175 = INT64_MIN;
	uint8_t x176 = 1U;

    t43 = (x173^((x174%x175)<=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x178 = 446060891LLU;
	int64_t x179 = -1LL;
	uint64_t x180 = 2LLU;
	int32_t t44 = INT32_MAX;

    t44 = (x177^((x178%x179)<=x180));

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 1;
	uint32_t x183 = UINT32_MAX;
	int16_t x184 = -1;
	volatile int32_t t45 = 132455;

    t45 = (x181^((x182%x183)<=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 1;
	uint64_t x187 = 495945219342368345LLU;
	int32_t x188 = INT32_MIN;
	int32_t t46 = 237851;

    t46 = (x185^((x186%x187)<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = INT8_MAX;
	static volatile uint8_t x190 = 19U;
	int32_t t47 = 7928;

    t47 = (x189^((x190%x191)<=x192));

    if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 5U;
	volatile uint64_t x194 = 1291031281551LLU;
	static int8_t x195 = -1;
	int16_t x196 = INT16_MIN;

    t48 = (x193^((x194%x195)<=x196));

    if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x197 = UINT64_MAX;
	static uint64_t x198 = 2497270675704030379LLU;
	int8_t x199 = -41;
	uint32_t x200 = UINT32_MAX;
	uint64_t t49 = UINT64_MAX;

    t49 = (x197^((x198%x199)<=x200));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x201 = 116U;
	static int64_t x202 = -3867448405373LL;
	volatile int16_t x203 = -3974;
	int8_t x204 = INT8_MIN;
	volatile int32_t t50 = -56;

    t50 = (x201^((x202%x203)<=x204));

    if (t50 != 117) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x205 = -34LL;
	volatile uint16_t x206 = UINT16_MAX;
	int64_t x207 = INT64_MAX;
	volatile int16_t x208 = 22;
	volatile int64_t t51 = -8066537LL;

    t51 = (x205^((x206%x207)<=x208));

    if (t51 != -34LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x210 = 5974224;
	int64_t x211 = INT64_MAX;
	volatile int8_t x212 = -13;
	static int32_t t52 = 1;

    t52 = (x209^((x210%x211)<=x212));

    if (t52 != -5726) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x214 = -1;
	int64_t x215 = -160868808LL;
	int64_t x216 = INT64_MIN;
	volatile int64_t t53 = INT64_MAX;

    t53 = (x213^((x214%x215)<=x216));

    if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x221 = 1U;
	int16_t x222 = INT16_MAX;
	int64_t x223 = -1LL;
	static volatile uint32_t x224 = UINT32_MAX;
	int32_t t54 = -14;

    t54 = (x221^((x222%x223)<=x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x225 = INT32_MAX;
	uint16_t x226 = 1U;
	int64_t x227 = INT64_MIN;
	uint8_t x228 = 30U;
	static int32_t t55 = -874;

    t55 = (x225^((x226%x227)<=x228));

    if (t55 != 2147483646) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x229 = 96U;
	static uint16_t x230 = 167U;
	volatile uint32_t x231 = 277909U;
	uint16_t x232 = 0U;
	int32_t t56 = 1020667;

    t56 = (x229^((x230%x231)<=x232));

    if (t56 != 96) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x234 = 118932062178LLU;
	static int32_t t57 = 575;

    t57 = (x233^((x234%x235)<=x236));

    if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x238 = 8U;
	volatile int32_t x240 = INT32_MAX;
	volatile int32_t t58 = -1054745607;

    t58 = (x237^((x238%x239)<=x240));

    if (t58 != 4107) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint8_t x242 = 1U;
	int32_t x243 = INT32_MIN;
	volatile int32_t t59 = 5550566;

    t59 = (x241^((x242%x243)<=x244));

    if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x245 = INT8_MIN;
	int32_t x247 = INT32_MIN;
	int8_t x248 = INT8_MIN;
	volatile int32_t t60 = 9489040;

    t60 = (x245^((x246%x247)<=x248));

    if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x249 = INT32_MIN;
	int64_t x250 = -483209728885LL;
	static int64_t x251 = INT64_MAX;
	volatile uint32_t x252 = 23U;

    t61 = (x249^((x250%x251)<=x252));

    if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x254 = -1LL;
	uint8_t x255 = 104U;
	int32_t x256 = INT32_MIN;
	int32_t t62 = 3521;

    t62 = (x253^((x254%x255)<=x256));

    if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x258 = INT64_MIN;
	uint16_t x259 = UINT16_MAX;
	volatile int32_t t63 = -23;

    t63 = (x257^((x258%x259)<=x260));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x261 = 451U;
	uint16_t x262 = 14783U;
	int16_t x263 = -1;
	volatile int32_t x264 = -1071971547;
	int32_t t64 = -3961935;

    t64 = (x261^((x262%x263)<=x264));

    if (t64 != 451) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x265 = -79202808;
	int64_t x267 = INT64_MAX;
	int32_t t65 = -13;

    t65 = (x265^((x266%x267)<=x268));

    if (t65 != -79202807) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x269 = INT32_MAX;
	volatile int64_t x270 = INT64_MAX;
	static int64_t x271 = -1LL;
	uint64_t x272 = 9929503LLU;

    t66 = (x269^((x270%x271)<=x272));

    if (t66 != 2147483646) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x273 = 7U;
	int16_t x274 = INT16_MIN;
	volatile uint32_t x275 = 1287658142U;
	int64_t x276 = INT64_MIN;

    t67 = (x273^((x274%x275)<=x276));

    if (t67 != 7) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x277 = UINT32_MAX;
	int16_t x278 = INT16_MIN;
	static int32_t x279 = INT32_MIN;
	int64_t x280 = INT64_MIN;
	static volatile uint32_t t68 = UINT32_MAX;

    t68 = (x277^((x278%x279)<=x280));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x281 = 299;
	int32_t x284 = 148555;
	volatile int32_t t69 = 981;

    t69 = (x281^((x282%x283)<=x284));

    if (t69 != 298) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x286 = 50U;
	int16_t x287 = -1;
	volatile int32_t t70 = -53;

    t70 = (x285^((x286%x287)<=x288));

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x290 = -1;
	static int64_t t71 = -92563392LL;

    t71 = (x289^((x290%x291)<=x292));

    if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x294 = -28604582;
	int32_t x295 = INT32_MAX;
	volatile int32_t x296 = 9552;
	volatile int32_t t72 = 125;

    t72 = (x293^((x294%x295)<=x296));

    if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x297 = -1;
	volatile int8_t x299 = -1;
	static volatile int8_t x300 = INT8_MIN;
	static volatile int32_t t73 = -1;

    t73 = (x297^((x298%x299)<=x300));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x301 = INT32_MAX;
	uint16_t x302 = UINT16_MAX;
	uint32_t x303 = UINT32_MAX;
	int32_t x304 = INT32_MAX;
	volatile int32_t t74 = 1622;

    t74 = (x301^((x302%x303)<=x304));

    if (t74 != 2147483646) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = INT32_MIN;
	uint16_t x307 = UINT16_MAX;

    t75 = (x305^((x306%x307)<=x308));

    if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x310 = INT16_MAX;
	uint32_t x312 = 232909U;
	volatile int32_t t76 = -4742;

    t76 = (x309^((x310%x311)<=x312));

    if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x313 = UINT16_MAX;
	uint32_t x314 = UINT32_MAX;
	volatile int64_t x315 = 382975805968LL;
	int64_t x316 = -1LL;

    t77 = (x313^((x314%x315)<=x316));

    if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x318 = -23956;
	int32_t x319 = -5052;
	volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t78 = -1265;

    t78 = (x317^((x318%x319)<=x320));

    if (t78 != 12) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x321 = -1;
	static uint16_t x322 = 6U;
	int32_t x323 = 73061828;
	uint8_t x324 = 0U;
	volatile int32_t t79 = -717907;

    t79 = (x321^((x322%x323)<=x324));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x325 = 376307933550731LL;
	volatile int8_t x327 = INT8_MIN;

    t80 = (x325^((x326%x327)<=x328));

    if (t80 != 376307933550731LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int8_t x329 = -1;
	int16_t x330 = 0;
	uint32_t x331 = 44U;
	int32_t t81 = 11359;

    t81 = (x329^((x330%x331)<=x332));

    if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x333 = 5114227327LLU;
	int64_t x334 = INT64_MAX;
	volatile uint8_t x336 = UINT8_MAX;
	volatile uint64_t t82 = 325254362092LLU;

    t82 = (x333^((x334%x335)<=x336));

    if (t82 != 5114227327LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x337 = 0;
	static int32_t x338 = -1369231;
	int16_t x339 = 61;
	static volatile int32_t t83 = -7361;

    t83 = (x337^((x338%x339)<=x340));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x341 = 484U;
	int32_t x343 = -8502;
	int8_t x344 = -1;
	volatile int32_t t84 = 861;

    t84 = (x341^((x342%x343)<=x344));

    if (t84 != 485) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x345 = 131LLU;
	volatile int16_t x347 = INT16_MIN;
	uint64_t x348 = UINT64_MAX;
	uint64_t t85 = 175627950244172362LLU;

    t85 = (x345^((x346%x347)<=x348));

    if (t85 != 130LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x349 = 45;
	static int8_t x350 = INT8_MAX;
	uint64_t x352 = 49058LLU;
	volatile int32_t t86 = 1794;

    t86 = (x349^((x350%x351)<=x352));

    if (t86 != 44) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x353 = INT8_MIN;
	static int64_t x355 = INT64_MIN;
	int32_t x356 = INT32_MAX;
	volatile int32_t t87 = -78609;

    t87 = (x353^((x354%x355)<=x356));

    if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = -515;
	static int64_t x358 = -114410480393LL;
	int16_t x359 = INT16_MIN;
	static volatile int32_t t88 = -35;

    t88 = (x357^((x358%x359)<=x360));

    if (t88 != -516) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x361 = -1;
	static volatile uint32_t x362 = 158607U;
	int64_t x364 = INT64_MIN;
	static volatile int32_t t89 = 479;

    t89 = (x361^((x362%x363)<=x364));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x365 = -1;
	uint8_t x367 = 1U;
	volatile int8_t x368 = -56;
	static int32_t t90 = -211016;

    t90 = (x365^((x366%x367)<=x368));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x370 = 10U;
	int64_t x371 = 123344385989LL;
	static int64_t x372 = INT64_MIN;
	volatile int32_t t91 = 519832;

    t91 = (x369^((x370%x371)<=x372));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x373 = UINT16_MAX;
	volatile int64_t x374 = INT64_MIN;
	volatile int8_t x375 = INT8_MIN;
	int32_t t92 = 0;

    t92 = (x373^((x374%x375)<=x376));

    if (t92 != 65534) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x377 = INT32_MAX;
	int32_t x378 = 71727454;
	static volatile uint8_t x379 = 6U;
	uint32_t x380 = 62715092U;

    t93 = (x377^((x378%x379)<=x380));

    if (t93 != 2147483646) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x381 = -4;
	volatile int32_t x383 = INT32_MAX;
	volatile int16_t x384 = INT16_MAX;
	int32_t t94 = 979548;

    t94 = (x381^((x382%x383)<=x384));

    if (t94 != -3) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x385 = 240U;
	int64_t x386 = -19334285363LL;
	int64_t x388 = 2LL;
	static int32_t t95 = -1403233;

    t95 = (x385^((x386%x387)<=x388));

    if (t95 != 241) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x389 = UINT32_MAX;
	int16_t x390 = INT16_MIN;
	volatile int32_t x392 = INT32_MIN;
	uint32_t t96 = UINT32_MAX;

    t96 = (x389^((x390%x391)<=x392));

    if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x394 = INT32_MIN;

    t97 = (x393^((x394%x395)<=x396));

    if (t97 != 32766) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x397 = INT32_MIN;
	static int16_t x398 = -92;
	uint8_t x399 = UINT8_MAX;
	uint8_t x400 = 4U;
	int32_t t98 = 870800;

    t98 = (x397^((x398%x399)<=x400));

    if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x401 = 4U;
	static int8_t x402 = 13;
	uint64_t x403 = 7672595050839751013LLU;
	int32_t t99 = -3;

    t99 = (x401^((x402%x403)<=x404));

    if (t99 != 5) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x405 = -1991440214LL;
	static int8_t x406 = INT8_MIN;
	int64_t x407 = INT64_MIN;
	volatile int16_t x408 = 126;
	int64_t t100 = -35517362316472514LL;

    t100 = (x405^((x406%x407)<=x408));

    if (t100 != -1991440213LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x409 = 81765402766758LL;
	int32_t x410 = 1;
	volatile int64_t x411 = INT64_MAX;
	int32_t x412 = INT32_MIN;
	int64_t t101 = -3301LL;

    t101 = (x409^((x410%x411)<=x412));

    if (t101 != 81765402766758LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x413 = 15284LL;
	volatile int16_t x414 = -1;
	volatile int8_t x415 = -1;
	int16_t x416 = INT16_MIN;
	int64_t t102 = -606838469718125LL;

    t102 = (x413^((x414%x415)<=x416));

    if (t102 != 15284LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x418 = INT16_MAX;
	volatile int16_t x419 = INT16_MIN;
	int64_t x420 = 2157737LL;
	volatile int32_t t103 = -794316;

    t103 = (x417^((x418%x419)<=x420));

    if (t103 != -2147483647) { NG(); } else { ; }
	
}

void f104(void) {
    

    t104 = (x421^((x422%x423)<=x424));

    if (t104 != 5) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x425 = 1430727U;
	int32_t x427 = -1;
	volatile uint32_t t105 = 345988U;

    t105 = (x425^((x426%x427)<=x428));

    if (t105 != 1430726U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x429 = 2U;
	int8_t x430 = 3;
	int8_t x431 = INT8_MIN;
	int8_t x432 = -1;
	int32_t t106 = 17;

    t106 = (x429^((x430%x431)<=x432));

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x437 = INT32_MIN;
	int16_t x438 = -1;
	static int64_t x439 = 132283298702LL;
	volatile int64_t x440 = INT64_MIN;
	static int32_t t107 = INT32_MIN;

    t107 = (x437^((x438%x439)<=x440));

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x441 = INT16_MIN;
	int32_t x442 = INT32_MIN;
	volatile uint32_t x444 = UINT32_MAX;

    t108 = (x441^((x442%x443)<=x444));

    if (t108 != -32767) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x445 = 0;
	volatile int16_t x446 = -1;
	uint16_t x447 = 2711U;
	int64_t x448 = -57457422479944381LL;
	static volatile int32_t t109 = -56554;

    t109 = (x445^((x446%x447)<=x448));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x449 = INT64_MIN;
	uint64_t x450 = 55306LLU;
	int16_t x451 = INT16_MIN;
	int64_t t110 = INT64_MIN;

    t110 = (x449^((x450%x451)<=x452));

    if (t110 != INT64_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x453 = INT32_MIN;
	volatile uint8_t x454 = 30U;
	int16_t x456 = INT16_MAX;

    t111 = (x453^((x454%x455)<=x456));

    if (t111 != -2147483647) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x457 = INT8_MIN;
	static int8_t x458 = 1;
	volatile uint8_t x459 = UINT8_MAX;
	static uint64_t x460 = UINT64_MAX;
	volatile int32_t t112 = -1680;

    t112 = (x457^((x458%x459)<=x460));

    if (t112 != -127) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x461 = INT8_MIN;
	uint64_t x462 = 7320460588608730902LLU;
	int64_t x463 = INT64_MIN;
	volatile int32_t x464 = -1;
	static int32_t t113 = 538932;

    t113 = (x461^((x462%x463)<=x464));

    if (t113 != -127) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x465 = 3U;
	uint8_t x466 = 61U;
	int8_t x467 = INT8_MIN;
	int32_t t114 = 117;

    t114 = (x465^((x466%x467)<=x468));

    if (t114 != 3) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x470 = -408;
	int8_t x471 = -1;
	static volatile int32_t t115 = 282444040;

    t115 = (x469^((x470%x471)<=x472));

    if (t115 != -1592492) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x473 = 201;
	int8_t x475 = -22;
	static volatile uint64_t x476 = 280620378711055754LLU;
	volatile int32_t t116 = 65189;

    t116 = (x473^((x474%x475)<=x476));

    if (t116 != 201) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x477 = -1727;
	int16_t x478 = -1;
	volatile int16_t x479 = INT16_MIN;
	volatile int32_t x480 = INT32_MIN;
	static int32_t t117 = 18997610;

    t117 = (x477^((x478%x479)<=x480));

    if (t117 != -1727) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x482 = INT16_MIN;
	volatile int8_t x483 = -1;

    t118 = (x481^((x482%x483)<=x484));

    if (t118 != -2147483647) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x485 = -1465;
	int16_t x486 = INT16_MIN;
	int8_t x487 = -1;
	volatile int32_t t119 = 15497909;

    t119 = (x485^((x486%x487)<=x488));

    if (t119 != -1466) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x490 = 793773LL;
	volatile int64_t x491 = INT64_MIN;
	volatile uint64_t x492 = 2110766580446740LLU;
	volatile uint64_t t120 = 937188430287502LLU;

    t120 = (x489^((x490%x491)<=x492));

    if (t120 != 52300626006111LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x493 = 5072;
	int8_t x494 = -36;
	int64_t x495 = 347123116100LL;
	uint8_t x496 = 37U;
	volatile int32_t t121 = 105831;

    t121 = (x493^((x494%x495)<=x496));

    if (t121 != 5073) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x497 = INT16_MIN;
	static int64_t x498 = INT64_MIN;
	uint32_t x499 = 51066U;
	volatile int32_t t122 = -14687;

    t122 = (x497^((x498%x499)<=x500));

    if (t122 != -32767) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x502 = 607034666271340LLU;
	int32_t x503 = INT32_MIN;
	static uint8_t x504 = 24U;
	volatile uint32_t t123 = 26095U;

    t123 = (x501^((x502%x503)<=x504));

    if (t123 != 2573948U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x505 = -1;
	int64_t x507 = INT64_MAX;
	int32_t t124 = -198402;

    t124 = (x505^((x506%x507)<=x508));

    if (t124 != -2) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x509 = -1;
	int64_t x510 = INT64_MIN;
	int32_t x511 = INT32_MIN;
	static volatile int64_t x512 = 132LL;
	int32_t t125 = -1159343;

    t125 = (x509^((x510%x511)<=x512));

    if (t125 != -2) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x513 = -2003;
	int32_t x514 = -1;
	int16_t x515 = INT16_MAX;
	static int64_t x516 = INT64_MIN;

    t126 = (x513^((x514%x515)<=x516));

    if (t126 != -2003) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x517 = 185436769974462869LL;
	volatile int16_t x518 = INT16_MAX;
	uint8_t x519 = 24U;
	volatile int16_t x520 = 1;
	volatile int64_t t127 = -1LL;

    t127 = (x517^((x518%x519)<=x520));

    if (t127 != 185436769974462869LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x521 = 24U;
	uint16_t x523 = 1U;
	volatile int16_t x524 = -106;
	static int32_t t128 = -69928;

    t128 = (x521^((x522%x523)<=x524));

    if (t128 != 25) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x526 = INT64_MAX;
	volatile int8_t x527 = INT8_MAX;
	static int32_t t129 = INT32_MAX;

    t129 = (x525^((x526%x527)<=x528));

    if (t129 != INT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x529 = 7U;
	int32_t x531 = -1;
	int16_t x532 = INT16_MAX;

    t130 = (x529^((x530%x531)<=x532));

    if (t130 != 6) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x533 = -1LL;
	volatile uint64_t x534 = 33169842LLU;
	uint16_t x535 = 859U;
	uint64_t x536 = 808LLU;
	volatile int64_t t131 = -8276445295637921LL;

    t131 = (x533^((x534%x535)<=x536));

    if (t131 != -2LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x537 = UINT8_MAX;
	uint32_t x538 = 1293909464U;
	int16_t x540 = INT16_MIN;
	volatile int32_t t132 = -8606851;

    t132 = (x537^((x538%x539)<=x540));

    if (t132 != 254) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint16_t x541 = UINT16_MAX;
	int8_t x542 = INT8_MIN;
	uint64_t x543 = 11999LLU;
	static uint16_t x544 = 1278U;

    t133 = (x541^((x542%x543)<=x544));

    if (t133 != 65535) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x546 = UINT8_MAX;
	int8_t x547 = 1;
	int64_t x548 = -1LL;
	int32_t t134 = -87;

    t134 = (x545^((x546%x547)<=x548));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x549 = 8U;
	int8_t x550 = -2;
	volatile int32_t x551 = INT32_MAX;
	uint32_t x552 = UINT32_MAX;
	int32_t t135 = -1;

    t135 = (x549^((x550%x551)<=x552));

    if (t135 != 9) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x553 = INT32_MAX;
	uint64_t x554 = 1949251188268969405LLU;
	uint16_t x555 = 3U;
	static uint8_t x556 = UINT8_MAX;
	volatile int32_t t136 = -50569485;

    t136 = (x553^((x554%x555)<=x556));

    if (t136 != 2147483646) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x557 = UINT32_MAX;
	static uint32_t t137 = 289250131U;

    t137 = (x557^((x558%x559)<=x560));

    if (t137 != 4294967294U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x561 = 1U;
	int8_t x562 = INT8_MIN;
	static volatile int64_t x563 = INT64_MIN;
	volatile uint16_t x564 = 10451U;
	int32_t t138 = 230;

    t138 = (x561^((x562%x563)<=x564));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x565 = -14668;
	uint64_t x566 = 1LLU;
	uint64_t x567 = UINT64_MAX;
	volatile int32_t t139 = -117412639;

    t139 = (x565^((x566%x567)<=x568));

    if (t139 != -14667) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x570 = INT16_MIN;
	uint32_t x571 = 737132394U;
	static volatile int64_t x572 = INT64_MIN;
	int32_t t140 = INT32_MIN;

    t140 = (x569^((x570%x571)<=x572));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x573 = INT16_MIN;
	int64_t x575 = INT64_MIN;
	int16_t x576 = -1;
	volatile int32_t t141 = -14857169;

    t141 = (x573^((x574%x575)<=x576));

    if (t141 != -32767) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x577 = 13;
	volatile uint64_t x578 = UINT64_MAX;
	uint16_t x579 = UINT16_MAX;
	static uint64_t x580 = UINT64_MAX;
	int32_t t142 = -2206165;

    t142 = (x577^((x578%x579)<=x580));

    if (t142 != 12) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x581 = INT16_MIN;
	volatile uint32_t x582 = UINT32_MAX;
	uint64_t x583 = 40795046LLU;
	uint16_t x584 = 19U;
	volatile int32_t t143 = 192965;

    t143 = (x581^((x582%x583)<=x584));

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x586 = 125U;
	uint16_t x587 = 534U;
	static uint32_t t144 = 11U;

    t144 = (x585^((x586%x587)<=x588));

    if (t144 != 29U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x589 = INT8_MIN;
	static int64_t x590 = INT64_MAX;
	volatile uint64_t x591 = 1894338LLU;
	int16_t x592 = -1;
	int32_t t145 = -101835;

    t145 = (x589^((x590%x591)<=x592));

    if (t145 != -127) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x593 = INT16_MIN;
	uint8_t x594 = UINT8_MAX;
	int8_t x595 = -1;
	volatile int32_t t146 = 1283;

    t146 = (x593^((x594%x595)<=x596));

    if (t146 != -32768) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x597 = -12727;
	int16_t x598 = INT16_MIN;
	uint16_t x600 = 9U;
	int32_t t147 = -42;

    t147 = (x597^((x598%x599)<=x600));

    if (t147 != -12727) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x601 = 172U;
	volatile uint32_t x602 = 46U;
	int64_t x603 = INT64_MIN;
	static volatile int8_t x604 = -1;

    t148 = (x601^((x602%x603)<=x604));

    if (t148 != 172) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x605 = -658504;
	volatile int16_t x606 = -1;
	uint32_t x607 = 9982U;
	int32_t t149 = 13708696;

    t149 = (x605^((x606%x607)<=x608));

    if (t149 != -658503) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x609 = 15U;
	volatile int32_t x610 = 706;
	uint64_t x611 = 6041LLU;
	static int32_t x612 = INT32_MAX;

    t150 = (x609^((x610%x611)<=x612));

    if (t150 != 14) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x614 = INT8_MIN;
	int8_t x615 = -1;
	volatile int32_t t151 = 1066193877;

    t151 = (x613^((x614%x615)<=x616));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x617 = INT16_MAX;
	int8_t x618 = INT8_MAX;
	static uint64_t x619 = 15173540LLU;
	volatile int32_t t152 = 3;

    t152 = (x617^((x618%x619)<=x620));

    if (t152 != 32766) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x621 = 135296848993LLU;
	int64_t x623 = INT64_MIN;
	volatile int8_t x624 = -6;
	uint64_t t153 = 1107699LLU;

    t153 = (x621^((x622%x623)<=x624));

    if (t153 != 135296848992LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x625 = -1LL;
	volatile int8_t x626 = INT8_MIN;
	int16_t x627 = 45;
	static uint16_t x628 = UINT16_MAX;
	volatile int64_t t154 = 10321944LL;

    t154 = (x625^((x626%x627)<=x628));

    if (t154 != -2LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x629 = 229225891145511399LL;
	static int16_t x630 = INT16_MIN;
	volatile int64_t t155 = -145964146036929756LL;

    t155 = (x629^((x630%x631)<=x632));

    if (t155 != 229225891145511399LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x634 = UINT16_MAX;
	int16_t x635 = -15571;
	int32_t x636 = -948;
	static int32_t t156 = -2;

    t156 = (x633^((x634%x635)<=x636));

    if (t156 != 255) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x637 = INT8_MIN;
	static int8_t x639 = -1;
	int32_t x640 = INT32_MAX;
	static volatile int32_t t157 = -292;

    t157 = (x637^((x638%x639)<=x640));

    if (t157 != -127) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x641 = 14;
	static uint16_t x642 = 4U;
	int64_t x644 = 48167485885555422LL;
	volatile int32_t t158 = -7242837;

    t158 = (x641^((x642%x643)<=x644));

    if (t158 != 15) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x645 = INT8_MIN;
	volatile int8_t x647 = -1;
	int8_t x648 = -31;
	volatile int32_t t159 = -17248;

    t159 = (x645^((x646%x647)<=x648));

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint8_t x649 = 25U;
	int32_t x650 = -10;
	static volatile int8_t x651 = -7;
	uint8_t x652 = 13U;
	int32_t t160 = -16114;

    t160 = (x649^((x650%x651)<=x652));

    if (t160 != 24) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x653 = INT16_MAX;
	int64_t x655 = -1LL;
	int32_t t161 = 370241;

    t161 = (x653^((x654%x655)<=x656));

    if (t161 != 32766) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x657 = -1;
	uint64_t x659 = 1908054LLU;
	int32_t x660 = 231711;
	volatile int32_t t162 = 3130;

    t162 = (x657^((x658%x659)<=x660));

    if (t162 != -2) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x661 = INT32_MIN;
	int32_t x662 = INT32_MIN;
	uint8_t x663 = 4U;
	volatile int8_t x664 = INT8_MIN;
	int32_t t163 = INT32_MIN;

    t163 = (x661^((x662%x663)<=x664));

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x665 = UINT32_MAX;
	int16_t x666 = -1;
	int8_t x667 = 6;
	uint32_t t164 = 1198U;

    t164 = (x665^((x666%x667)<=x668));

    if (t164 != 4294967294U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x669 = -1;
	int16_t x670 = INT16_MIN;
	uint32_t x671 = 285104700U;
	uint32_t x672 = 297U;

    t165 = (x669^((x670%x671)<=x672));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x673 = -885;
	int16_t x674 = -1;
	int64_t x675 = -26259512780500413LL;
	int64_t x676 = -1LL;

    t166 = (x673^((x674%x675)<=x676));

    if (t166 != -886) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x677 = 3;
	static volatile int8_t x679 = INT8_MAX;
	int8_t x680 = -1;
	volatile int32_t t167 = 8088;

    t167 = (x677^((x678%x679)<=x680));

    if (t167 != 3) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x681 = -1;
	int64_t x682 = 186765LL;
	static int16_t x683 = -46;
	volatile int32_t t168 = -708;

    t168 = (x681^((x682%x683)<=x684));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x685 = 9;
	int8_t x687 = INT8_MIN;
	static uint8_t x688 = 113U;
	int32_t t169 = 203;

    t169 = (x685^((x686%x687)<=x688));

    if (t169 != 8) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x690 = UINT8_MAX;
	int16_t x692 = -13472;

    t170 = (x689^((x690%x691)<=x692));

    if (t170 != INT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x693 = 7797U;
	static volatile uint64_t x695 = UINT64_MAX;
	volatile int32_t t171 = -5;

    t171 = (x693^((x694%x695)<=x696));

    if (t171 != 7797) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x697 = 3;
	volatile uint8_t x698 = UINT8_MAX;
	static int16_t x700 = 24;

    t172 = (x697^((x698%x699)<=x700));

    if (t172 != 3) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x701 = 0;
	int8_t x704 = 14;

    t173 = (x701^((x702%x703)<=x704));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x705 = -1;
	volatile int32_t x707 = INT32_MIN;
	int64_t x708 = -31098466315LL;
	int32_t t174 = 8357839;

    t174 = (x705^((x706%x707)<=x708));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x709 = -1LL;
	int64_t x710 = INT64_MIN;
	volatile int16_t x711 = INT16_MIN;
	int64_t x712 = INT64_MAX;
	int64_t t175 = -1LL;

    t175 = (x709^((x710%x711)<=x712));

    if (t175 != -2LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x713 = INT8_MIN;
	int16_t x714 = INT16_MIN;
	int64_t x715 = 94308728901193LL;
	int32_t t176 = 406005;

    t176 = (x713^((x714%x715)<=x716));

    if (t176 != -127) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x717 = 60320LLU;
	int8_t x719 = INT8_MIN;

    t177 = (x717^((x718%x719)<=x720));

    if (t177 != 60320LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x721 = -19;
	uint32_t x722 = UINT32_MAX;
	uint32_t x724 = UINT32_MAX;
	volatile int32_t t178 = 8381;

    t178 = (x721^((x722%x723)<=x724));

    if (t178 != -20) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x725 = -1;
	uint64_t x726 = 12613509893LLU;
	volatile int64_t x727 = -1863820174471002LL;
	int16_t x728 = 4;
	int32_t t179 = -1;

    t179 = (x725^((x726%x727)<=x728));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x729 = -7;
	static int16_t x731 = INT16_MAX;

    t180 = (x729^((x730%x731)<=x732));

    if (t180 != -8) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x733 = UINT8_MAX;
	static volatile uint32_t x734 = UINT32_MAX;
	static int32_t x735 = INT32_MIN;
	uint16_t x736 = 16114U;
	volatile int32_t t181 = 13914;

    t181 = (x733^((x734%x735)<=x736));

    if (t181 != 255) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x737 = 52232U;
	static int32_t x739 = -1;
	volatile int32_t x740 = INT32_MIN;
	volatile uint32_t t182 = 735U;

    t182 = (x737^((x738%x739)<=x740));

    if (t182 != 52232U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x741 = -1150652191383624343LL;
	static int32_t x742 = INT32_MAX;
	static int8_t x743 = INT8_MAX;
	static volatile int64_t t183 = 25674937878418053LL;

    t183 = (x741^((x742%x743)<=x744));

    if (t183 != -1150652191383624343LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x745 = 131U;
	int8_t x746 = INT8_MIN;
	int32_t x747 = INT32_MIN;
	volatile int16_t x748 = -185;
	static volatile int32_t t184 = 1;

    t184 = (x745^((x746%x747)<=x748));

    if (t184 != 131) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x749 = 11360U;
	int16_t x750 = INT16_MIN;
	static int64_t x751 = -1LL;
	int32_t x752 = INT32_MIN;
	static volatile uint32_t t185 = 671119U;

    t185 = (x749^((x750%x751)<=x752));

    if (t185 != 11360U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x754 = UINT32_MAX;
	volatile int32_t x755 = 10142;
	int32_t t186 = -83697768;

    t186 = (x753^((x754%x755)<=x756));

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x757 = INT16_MIN;
	static int16_t x758 = -5;
	static int32_t t187 = 275188588;

    t187 = (x757^((x758%x759)<=x760));

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x761 = 59911697LLU;
	static int8_t x762 = INT8_MIN;
	static uint64_t x763 = 60712528648LLU;
	volatile uint64_t t188 = 8452293136705LLU;

    t188 = (x761^((x762%x763)<=x764));

    if (t188 != 59911696LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x765 = 74U;
	volatile int8_t x766 = INT8_MAX;
	int8_t x768 = INT8_MAX;
	static volatile int32_t t189 = 36484;

    t189 = (x765^((x766%x767)<=x768));

    if (t189 != 75) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x769 = -1;
	uint64_t x770 = 29LLU;

    t190 = (x769^((x770%x771)<=x772));

    if (t190 != -2) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x773 = INT64_MAX;
	static volatile uint64_t x774 = 31314086517LLU;
	volatile int8_t x775 = -14;
	static int8_t x776 = 3;
	int64_t t191 = INT64_MAX;

    t191 = (x773^((x774%x775)<=x776));

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x777 = 0;
	int32_t x779 = INT32_MIN;
	volatile uint8_t x780 = 97U;
	int32_t t192 = 64801418;

    t192 = (x777^((x778%x779)<=x780));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x781 = INT32_MIN;
	static uint16_t x782 = UINT16_MAX;
	uint32_t x783 = 7038422U;
	int8_t x784 = -1;

    t193 = (x781^((x782%x783)<=x784));

    if (t193 != -2147483647) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x788 = 258545358254LL;

    t194 = (x785^((x786%x787)<=x788));

    if (t194 != 126) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x790 = INT64_MIN;
	uint8_t x791 = 1U;
	uint8_t x792 = 9U;
	int32_t t195 = -335;

    t195 = (x789^((x790%x791)<=x792));

    if (t195 != 49) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x793 = 73298956265933724LLU;
	int64_t x794 = INT64_MIN;
	int64_t x795 = -1LL;
	volatile uint64_t x796 = 3LLU;

    t196 = (x793^((x794%x795)<=x796));

    if (t196 != 73298956265933725LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x797 = UINT32_MAX;
	volatile int64_t x798 = 5071561237052740LL;
	int8_t x799 = INT8_MIN;
	int16_t x800 = INT16_MIN;
	volatile uint32_t t197 = UINT32_MAX;

    t197 = (x797^((x798%x799)<=x800));

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x801 = INT8_MAX;
	int16_t x802 = 76;
	static int16_t x803 = INT16_MIN;
	static int32_t x804 = INT32_MAX;
	volatile int32_t t198 = -123936230;

    t198 = (x801^((x802%x803)<=x804));

    if (t198 != 126) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x805 = UINT16_MAX;
	uint32_t x806 = UINT32_MAX;
	int32_t x807 = 1612428;
	int16_t x808 = 2479;

    t199 = (x805^((x806%x807)<=x808));

    if (t199 != 65535) { NG(); } else { ; }
	
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

