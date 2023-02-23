
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

volatile int32_t x5 = INT32_MIN;
static volatile int32_t t1 = -7;
int32_t x15 = -81;
static uint64_t t3 = 2411LLU;
uint8_t x17 = UINT8_MAX;
uint32_t t4 = 116U;
int32_t x24 = INT32_MAX;
volatile int32_t t5 = 4152334;
int16_t x25 = INT16_MIN;
int64_t x28 = INT64_MIN;
static uint64_t x34 = 57263LLU;
int64_t x41 = INT64_MIN;
volatile uint8_t x48 = 25U;
volatile uint64_t t11 = 481172497826247LLU;
int64_t x50 = 119822140365LL;
volatile int64_t x52 = INT64_MIN;
int16_t x55 = 1138;
static uint32_t x59 = UINT32_MAX;
volatile uint8_t x62 = 29U;
int32_t x67 = INT32_MIN;
int8_t x71 = -1;
volatile int64_t x72 = 7LL;
uint8_t x79 = UINT8_MAX;
int64_t t20 = 4537409342343703478LL;
volatile int16_t x88 = -1;
static int8_t x93 = INT8_MAX;
int32_t x95 = -1550;
int32_t x97 = -8556;
int8_t x99 = -1;
int32_t x100 = INT32_MIN;
volatile uint64_t t25 = 378375LLU;
uint32_t x111 = 78130U;
volatile uint32_t t27 = 131U;
volatile int8_t x118 = 31;
volatile int16_t x123 = INT16_MIN;
int8_t x126 = -1;
static int16_t x128 = 28;
volatile int16_t x131 = INT16_MIN;
volatile uint64_t t33 = 1090726820399761343LLU;
int16_t x146 = -1;
int64_t x155 = -1LL;
uint32_t x156 = 1134663182U;
int8_t x157 = INT8_MIN;
uint8_t x161 = UINT8_MAX;
int8_t x163 = INT8_MAX;
volatile int8_t x167 = 1;
volatile int16_t x168 = INT16_MAX;
int64_t x169 = INT64_MIN;
static int32_t x175 = -47;
volatile int32_t t41 = 1;
static int32_t x182 = INT32_MIN;
int16_t x184 = 3;
static uint64_t x187 = 738747255144173625LLU;
int64_t x190 = -1072077862418LL;
static volatile int8_t x195 = INT8_MIN;
int64_t x197 = INT64_MIN;
static volatile uint32_t x198 = UINT32_MAX;
int64_t t47 = INT64_MIN;
int8_t x204 = INT8_MIN;
int32_t x210 = INT32_MIN;
int32_t x212 = INT32_MIN;
int32_t t50 = 1;
static volatile uint64_t x224 = UINT64_MAX;
static int16_t x226 = INT16_MIN;
uint64_t x227 = 61164061LLU;
uint64_t t54 = 242919041734172LLU;
int16_t x242 = INT16_MIN;
uint8_t x247 = 4U;
volatile int64_t t60 = -214752480046LL;
uint32_t x256 = UINT32_MAX;
static volatile int8_t x263 = INT8_MIN;
uint32_t x267 = UINT32_MAX;
static int64_t t65 = 6821255317LL;
volatile int16_t x273 = INT16_MIN;
int16_t x283 = -1;
uint16_t x293 = UINT16_MAX;
int8_t x300 = -47;
static int64_t x301 = INT64_MIN;
static int64_t x307 = INT64_MIN;
volatile uint16_t x310 = UINT16_MAX;
uint8_t x312 = 3U;
int64_t t75 = -19741LL;
int16_t x315 = INT16_MIN;
uint32_t x324 = 3058111U;
static int64_t t80 = -18511262870LL;
static uint8_t x334 = 28U;
volatile int16_t x336 = INT16_MAX;
int64_t x337 = -1LL;
static volatile uint64_t t84 = 470718280LLU;
static volatile uint64_t x359 = 880LLU;
int8_t x361 = INT8_MAX;
volatile int32_t t88 = 13;
int8_t x371 = INT8_MAX;
static int16_t x372 = INT16_MIN;
int32_t x392 = INT32_MIN;
static volatile int64_t x399 = INT64_MAX;
int8_t x406 = -24;
volatile uint32_t t97 = 209822400U;
static int32_t x414 = -1;
volatile int32_t x421 = INT32_MIN;
uint32_t x422 = 415538U;
int64_t x426 = -5099146507LL;
int32_t x428 = INT32_MIN;
volatile int64_t t102 = -1323164LL;
int8_t x436 = -1;
volatile int64_t t104 = -58LL;
uint32_t x437 = 238472U;
volatile uint8_t x440 = UINT8_MAX;
uint32_t t105 = 963U;
volatile int32_t x444 = 0;
volatile int64_t t106 = 23456889LL;
int8_t x455 = -1;
uint32_t x456 = UINT32_MAX;
uint32_t t109 = 60U;
static int8_t x457 = 1;
uint32_t x458 = 46U;
static int64_t x461 = INT64_MIN;
int8_t x467 = -5;
static volatile int8_t x480 = -6;
int64_t x485 = -1LL;
int32_t x487 = INT32_MIN;
volatile uint8_t x491 = 4U;
static volatile uint32_t x492 = 0U;
int8_t x493 = INT8_MAX;
static volatile uint64_t x495 = 54130LLU;
static uint64_t x497 = 2000214835602LLU;
static int32_t x500 = INT32_MAX;
volatile uint64_t t120 = 256125854572477113LLU;
volatile int16_t x508 = 11;
int64_t x523 = INT64_MIN;
uint64_t x525 = UINT64_MAX;
int32_t x528 = -4283;
uint64_t t125 = 1505279095230084LLU;
uint32_t x530 = UINT32_MAX;
int32_t x531 = 20;
static int8_t x541 = INT8_MAX;
int64_t x543 = INT64_MAX;
volatile uint8_t x545 = UINT8_MAX;
int64_t x549 = INT64_MAX;
static uint64_t t131 = 7326205LLU;
int32_t x566 = INT32_MIN;
static uint16_t x570 = 5U;
volatile int64_t x574 = -1LL;
static uint32_t x576 = 10113U;
static volatile int16_t x579 = -5651;
uint64_t t138 = 52035LLU;
uint8_t x587 = 13U;
static uint64_t x588 = 17280080LLU;
int64_t x596 = -4186LL;
int32_t x600 = 4375;
volatile int32_t t143 = 58348;
uint64_t x619 = 513231983540LLU;
int16_t x620 = INT16_MIN;
int8_t x623 = INT8_MIN;
volatile uint8_t x625 = UINT8_MAX;
uint64_t t152 = 4022528LLU;
static uint16_t x645 = 0U;
volatile uint64_t x646 = 38LLU;
int64_t x666 = -1LL;
uint64_t x667 = 9122872LLU;
volatile int16_t x668 = INT16_MAX;
int16_t x669 = INT16_MAX;
static uint64_t x682 = UINT64_MAX;
static uint64_t x684 = 7LLU;
uint64_t t163 = 88676581121895499LLU;
uint32_t x688 = 5029U;
uint32_t t164 = 979235973U;
int32_t x689 = INT32_MIN;
static int16_t x692 = -1;
static uint64_t t166 = 30LLU;
static uint16_t x698 = UINT16_MAX;
volatile int32_t x703 = -857199;
uint32_t t169 = 1815049620U;
static int32_t x720 = -694101;
int32_t t171 = 361;
int64_t x721 = 122127LL;
int64_t x723 = INT64_MAX;
int8_t x730 = -1;
int64_t x732 = INT64_MIN;
volatile uint64_t x742 = 82410656LLU;
volatile uint64_t t175 = 1845LLU;
int16_t x746 = INT16_MAX;
uint32_t x747 = UINT32_MAX;
volatile uint64_t x754 = 1195684162455606LLU;
uint32_t x759 = UINT32_MAX;
uint16_t x771 = 1344U;
int8_t x776 = INT8_MIN;
int32_t x780 = -29406782;
volatile int64_t t184 = -921496505818800LL;
int32_t x783 = -1;
int8_t x789 = 31;
uint64_t x794 = 121166508LLU;
int16_t x796 = -3173;
int64_t x803 = INT64_MAX;
int32_t x808 = INT32_MAX;
volatile int64_t t189 = 4204211855813372853LL;
int32_t x813 = INT32_MIN;
uint16_t x816 = 0U;
static volatile int16_t x818 = -440;
int16_t x821 = -1;
static int64_t t195 = -15331018504LL;
uint32_t x846 = 1736U;
volatile uint16_t x847 = 16555U;


void f0(void) {
    	int16_t x1 = -1;
	volatile int16_t x2 = INT16_MIN;
	volatile int8_t x3 = INT8_MAX;
	static uint32_t x4 = 164497U;
	volatile uint32_t t0 = 376U;

    t0 = (x1+((x2%x3)&x4));

    if (t0 != 164495U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x6 = INT16_MIN;
	uint16_t x7 = 4356U;
	uint8_t x8 = 31U;

    t1 = (x5+((x6%x7)&x8));

    if (t1 != -2147483620) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	volatile int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MIN;
	int32_t x12 = -99887201;
	volatile int64_t t2 = -1763078898420LL;

    t2 = (x9+((x10%x11)&x12));

    if (t2 != 22430LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MIN;
	int64_t x14 = INT64_MAX;
	uint64_t x16 = 7428455479330570LLU;

    t3 = (x13+((x14%x15)&x16));

    if (t3 != 18446744071562067976LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint32_t x18 = 60486539U;
	volatile int16_t x19 = 627;
	volatile int8_t x20 = INT8_MIN;

    t4 = (x17+((x18%x19)&x20));

    if (t4 != 639U) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 59134;
	volatile int32_t x22 = INT32_MIN;
	int8_t x23 = -1;

    t5 = (x21+((x22%x23)&x24));

    if (t5 != 59134) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MAX;
	static volatile int8_t x27 = -1;
	static int64_t t6 = -1614LL;

    t6 = (x25+((x26%x27)&x28));

    if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 4026LLU;
	int16_t x30 = 2183;
	int64_t x31 = INT64_MIN;
	int8_t x32 = -55;
	volatile uint64_t t7 = 861000105466LLU;

    t7 = (x29+((x30%x31)&x32));

    if (t7 != 6203LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -20;
	volatile int8_t x35 = -51;
	volatile uint8_t x36 = UINT8_MAX;
	static volatile uint64_t t8 = 400390141935LLU;

    t8 = (x33+((x34%x35)&x36));

    if (t8 != 155LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MAX;
	static uint8_t x38 = 3U;
	static int8_t x39 = INT8_MIN;
	uint16_t x40 = 3U;
	int32_t t9 = 233354131;

    t9 = (x37+((x38%x39)&x40));

    if (t9 != 32770) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = 12;
	int64_t x43 = -1LL;
	static int8_t x44 = -1;
	int64_t t10 = INT64_MIN;

    t10 = (x41+((x42%x43)&x44));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	uint32_t x46 = 45U;
	int16_t x47 = INT16_MIN;

    t11 = (x45+((x46%x47)&x48));

    if (t11 != 8LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 3U;
	int64_t x51 = 4475629050206LL;
	int64_t t12 = 34441488482619LL;

    t12 = (x49+((x50%x51)&x52));

    if (t12 != 3LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x53 = 14018503917433647LLU;
	static int64_t x54 = 1563LL;
	volatile uint16_t x56 = 14U;
	static volatile uint64_t t13 = 65714306LLU;

    t13 = (x53+((x54%x55)&x56));

    if (t13 != 14018503917433655LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 0;
	static int16_t x58 = INT16_MIN;
	int8_t x60 = 2;
	volatile uint32_t t14 = 751U;

    t14 = (x57+((x58%x59)&x60));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	static int16_t x63 = -1;
	static int8_t x64 = 4;
	volatile int32_t t15 = 99265788;

    t15 = (x61+((x62%x63)&x64));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = 6;
	int32_t x66 = INT32_MAX;
	static uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = 5090;

    t16 = (x65+((x66%x67)&x68));

    if (t16 != 65541) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	int64_t x70 = INT64_MIN;
	static int64_t t17 = 48LL;

    t17 = (x69+((x70%x71)&x72));

    if (t17 != 255LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -3;
	uint8_t x74 = UINT8_MAX;
	static uint64_t x75 = UINT64_MAX;
	static int32_t x76 = -1;
	uint64_t t18 = 3839023530515727011LLU;

    t18 = (x73+((x74%x75)&x76));

    if (t18 != 252LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = -49444836;
	int16_t x78 = INT16_MIN;
	volatile uint32_t x80 = UINT32_MAX;
	volatile uint32_t t19 = 15495180U;

    t19 = (x77+((x78%x79)&x80));

    if (t19 != 4245522332U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	volatile uint16_t x82 = 38U;
	int32_t x83 = 11;
	int64_t x84 = 4LL;

    t20 = (x81+((x82%x83)&x84));

    if (t20 != -2147483644LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -2;
	uint8_t x86 = UINT8_MAX;
	static int8_t x87 = -9;
	static int32_t t21 = 57353746;

    t21 = (x85+((x86%x87)&x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x94 = INT32_MAX;
	int32_t x96 = 1435421;
	volatile int32_t t22 = 184807251;

    t22 = (x93+((x94%x95)&x96));

    if (t22 != 400) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x98 = 4703666530206543LL;
	int64_t t23 = 58631555766LL;

    t23 = (x97+((x98%x99)&x100));

    if (t23 != -8556LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x101 = INT8_MIN;
	volatile int64_t x102 = INT64_MAX;
	int64_t x103 = INT64_MAX;
	int64_t x104 = 60491805LL;
	int64_t t24 = 65LL;

    t24 = (x101+((x102%x103)&x104));

    if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x105 = 13423LLU;
	int8_t x106 = INT8_MIN;
	static uint32_t x107 = 1372262U;
	int64_t x108 = INT64_MIN;

    t25 = (x105+((x106%x107)&x108));

    if (t25 != 13423LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x109 = INT16_MIN;
	uint8_t x110 = UINT8_MAX;
	int8_t x112 = INT8_MIN;
	uint32_t t26 = 77732058U;

    t26 = (x109+((x110%x111)&x112));

    if (t26 != 4294934656U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x113 = -1;
	uint16_t x114 = 8026U;
	uint32_t x115 = 6796U;
	int32_t x116 = -1;

    t27 = (x113+((x114%x115)&x116));

    if (t27 != 1229U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = -1;
	static int64_t x119 = INT64_MIN;
	static uint64_t x120 = 3763673988LLU;
	volatile uint64_t t28 = 834949197993LLU;

    t28 = (x117+((x118%x119)&x120));

    if (t28 != 3LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = INT16_MIN;
	int32_t x122 = INT32_MIN;
	int64_t x124 = -1850053LL;
	volatile int64_t t29 = 10012539879132LL;

    t29 = (x121+((x122%x123)&x124));

    if (t29 != -32768LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = INT16_MIN;
	uint16_t x127 = UINT16_MAX;
	volatile int32_t t30 = -1522;

    t30 = (x125+((x126%x127)&x128));

    if (t30 != -32740) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = -1LL;
	volatile uint16_t x130 = UINT16_MAX;
	int32_t x132 = -50366657;
	volatile int64_t t31 = -2692693670424LL;

    t31 = (x129+((x130%x131)&x132));

    if (t31 != 30526LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = INT32_MAX;
	uint32_t x138 = 33231873U;
	int32_t x139 = INT32_MIN;
	static uint64_t x140 = UINT64_MAX;
	volatile uint64_t t32 = 745LLU;

    t32 = (x137+((x138%x139)&x140));

    if (t32 != 2180715520LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x141 = 25U;
	uint16_t x142 = UINT16_MAX;
	uint8_t x143 = 84U;
	uint64_t x144 = 154257595686LLU;

    t33 = (x141+((x142%x143)&x144));

    if (t33 != 31LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x145 = -1;
	int64_t x147 = INT64_MIN;
	int8_t x148 = INT8_MIN;
	volatile int64_t t34 = -2064304833318373LL;

    t34 = (x145+((x146%x147)&x148));

    if (t34 != -129LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x149 = UINT32_MAX;
	volatile int8_t x150 = INT8_MAX;
	volatile uint64_t x151 = UINT64_MAX;
	int64_t x152 = -4040623623577829178LL;
	uint64_t t35 = 38LLU;

    t35 = (x149+((x150%x151)&x152));

    if (t35 != 4294967365LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x153 = 26;
	static int32_t x154 = -3416158;
	volatile int64_t t36 = 0LL;

    t36 = (x153+((x154%x155)&x156));

    if (t36 != 26LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x158 = -1LL;
	uint64_t x159 = UINT64_MAX;
	int16_t x160 = INT16_MIN;
	volatile uint64_t t37 = 176417514162857LLU;

    t37 = (x157+((x158%x159)&x160));

    if (t37 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x162 = INT16_MIN;
	uint16_t x164 = 1380U;
	volatile int32_t t38 = 82;

    t38 = (x161+((x162%x163)&x164));

    if (t38 != 1635) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = INT16_MIN;
	static int64_t x166 = -62LL;
	int64_t t39 = -2LL;

    t39 = (x165+((x166%x167)&x168));

    if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x170 = -1LL;
	static int8_t x171 = 3;
	int32_t x172 = INT32_MAX;
	static int64_t t40 = -3210391LL;

    t40 = (x169+((x170%x171)&x172));

    if (t40 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = -1;
	static int16_t x174 = -11;
	volatile int8_t x176 = INT8_MIN;

    t41 = (x173+((x174%x175)&x176));

    if (t41 != -129) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x177 = UINT32_MAX;
	static int16_t x178 = 107;
	int64_t x179 = INT64_MAX;
	static volatile int64_t x180 = INT64_MIN;
	int64_t t42 = -769579009635LL;

    t42 = (x177+((x178%x179)&x180));

    if (t42 != 4294967295LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x181 = INT32_MIN;
	static uint8_t x183 = UINT8_MAX;
	static volatile int32_t t43 = INT32_MIN;

    t43 = (x181+((x182%x183)&x184));

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x185 = INT32_MIN;
	int16_t x186 = 8131;
	int16_t x188 = INT16_MIN;
	uint64_t t44 = 14784862194875LLU;

    t44 = (x185+((x186%x187)&x188));

    if (t44 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x189 = 7U;
	uint16_t x191 = 1415U;
	volatile uint32_t x192 = 1273619U;
	volatile int64_t t45 = 96716832253LL;

    t45 = (x189+((x190%x191)&x192));

    if (t45 != 1272858LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x193 = 15;
	int16_t x194 = INT16_MAX;
	int32_t x196 = -309;
	volatile int32_t t46 = 0;

    t46 = (x193+((x194%x195)&x196));

    if (t46 != 90) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x199 = -1;
	int64_t x200 = INT64_MIN;

    t47 = (x197+((x198%x199)&x200));

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x201 = INT8_MIN;
	int16_t x202 = INT16_MIN;
	int64_t x203 = -1LL;
	volatile int64_t t48 = -313065895LL;

    t48 = (x201+((x202%x203)&x204));

    if (t48 != -128LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x205 = 21U;
	static uint8_t x206 = UINT8_MAX;
	int8_t x207 = 1;
	int64_t x208 = -1094579956764LL;
	volatile int64_t t49 = 1132445265025449670LL;

    t49 = (x205+((x206%x207)&x208));

    if (t49 != 21LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x209 = INT8_MIN;
	static int8_t x211 = -1;

    t50 = (x209+((x210%x211)&x212));

    if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x213 = INT64_MIN;
	static int32_t x214 = INT32_MIN;
	int64_t x215 = INT64_MIN;
	static int16_t x216 = 6085;
	static int64_t t51 = INT64_MIN;

    t51 = (x213+((x214%x215)&x216));

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x217 = UINT32_MAX;
	int64_t x218 = INT64_MIN;
	uint16_t x219 = 9936U;
	uint32_t x220 = UINT32_MAX;
	volatile int64_t t52 = -125849213LL;

    t52 = (x217+((x218%x219)&x220));

    if (t52 != 8589925871LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x221 = -1;
	int8_t x222 = INT8_MAX;
	int32_t x223 = INT32_MAX;
	volatile uint64_t t53 = 201177069156340LLU;

    t53 = (x221+((x222%x223)&x224));

    if (t53 != 126LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x225 = 8U;
	uint8_t x228 = 6U;

    t54 = (x225+((x226%x227)&x228));

    if (t54 != 10LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = 51035809LL;
	volatile uint64_t x230 = 221321686404653446LLU;
	int16_t x231 = INT16_MAX;
	int16_t x232 = INT16_MIN;
	static uint64_t t55 = 6542LLU;

    t55 = (x229+((x230%x231)&x232));

    if (t55 != 51035809LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x233 = -1;
	int16_t x234 = INT16_MIN;
	int32_t x235 = -271;
	uint8_t x236 = 0U;
	volatile int32_t t56 = 460578994;

    t56 = (x233+((x234%x235)&x236));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x237 = 3U;
	static uint16_t x238 = 932U;
	int8_t x239 = INT8_MIN;
	int32_t x240 = -232718;
	int32_t t57 = 71007;

    t57 = (x237+((x238%x239)&x240));

    if (t57 != 35) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x241 = 224U;
	int32_t x243 = -101;
	static int16_t x244 = INT16_MAX;
	volatile uint32_t t58 = 55531082U;

    t58 = (x241+((x242%x243)&x244));

    if (t58 != 32948U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x245 = 158LLU;
	volatile int8_t x246 = INT8_MIN;
	int16_t x248 = INT16_MIN;
	uint64_t t59 = 19LLU;

    t59 = (x245+((x246%x247)&x248));

    if (t59 != 158LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x249 = 28;
	int8_t x250 = INT8_MIN;
	volatile int64_t x251 = -1LL;
	int8_t x252 = INT8_MIN;

    t60 = (x249+((x250%x251)&x252));

    if (t60 != 28LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x253 = 354854151;
	int16_t x254 = INT16_MIN;
	int8_t x255 = 1;
	volatile uint32_t t61 = 0U;

    t61 = (x253+((x254%x255)&x256));

    if (t61 != 354854151U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x257 = 928U;
	int64_t x258 = INT64_MIN;
	int64_t x259 = 8629375672LL;
	int16_t x260 = 59;
	volatile int64_t t62 = -4595696403293217631LL;

    t62 = (x257+((x258%x259)&x260));

    if (t62 != 944LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = 119;
	uint16_t x262 = UINT16_MAX;
	static volatile uint8_t x264 = UINT8_MAX;
	volatile int32_t t63 = 5657;

    t63 = (x261+((x262%x263)&x264));

    if (t63 != 246) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x265 = INT32_MAX;
	uint16_t x266 = 0U;
	static int8_t x268 = INT8_MIN;
	volatile uint32_t t64 = 734U;

    t64 = (x265+((x266%x267)&x268));

    if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint32_t x269 = 443U;
	int32_t x270 = INT32_MIN;
	volatile uint8_t x271 = 68U;
	int64_t x272 = -412647655LL;

    t65 = (x269+((x270%x271)&x272));

    if (t65 != -412647237LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x274 = 143851U;
	int8_t x275 = INT8_MIN;
	int32_t x276 = INT32_MAX;
	uint32_t t66 = 2493U;

    t66 = (x273+((x274%x275)&x276));

    if (t66 != 111083U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = 7;
	volatile uint32_t x278 = 98U;
	int32_t x279 = -282632;
	uint32_t x280 = 25419U;
	volatile uint32_t t67 = 17U;

    t67 = (x277+((x278%x279)&x280));

    if (t67 != 73U) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x281 = 0;
	volatile int32_t x282 = INT32_MAX;
	int32_t x284 = -1;
	volatile int32_t t68 = 2233308;

    t68 = (x281+((x282%x283)&x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x285 = 7811;
	uint64_t x286 = 15516112LLU;
	int32_t x287 = -1;
	volatile uint64_t x288 = 1189526016LLU;
	static volatile uint64_t t69 = 76LLU;

    t69 = (x285+((x286%x287)&x288));

    if (t69 != 14982787LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x289 = 1451006U;
	int8_t x290 = -1;
	int16_t x291 = INT16_MAX;
	int32_t x292 = -784647343;
	uint32_t t70 = 39347056U;

    t70 = (x289+((x290%x291)&x292));

    if (t70 != 3511770959U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x294 = INT8_MIN;
	static volatile int32_t x295 = INT32_MIN;
	uint64_t x296 = 6797LLU;
	static volatile uint64_t t71 = 9091913101201071594LLU;

    t71 = (x293+((x294%x295)&x296));

    if (t71 != 72319LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x297 = INT16_MAX;
	volatile int32_t x298 = INT32_MAX;
	int8_t x299 = -1;
	static volatile int32_t t72 = 129386;

    t72 = (x297+((x298%x299)&x300));

    if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x302 = -1LL;
	static uint8_t x303 = 11U;
	int8_t x304 = INT8_MAX;
	int64_t t73 = 90433139964161LL;

    t73 = (x301+((x302%x303)&x304));

    if (t73 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x305 = UINT16_MAX;
	volatile uint64_t x306 = UINT64_MAX;
	static int16_t x308 = INT16_MAX;
	static volatile uint64_t t74 = 6941780124463924923LLU;

    t74 = (x305+((x306%x307)&x308));

    if (t74 != 98302LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = -1LL;
	int8_t x311 = -5;

    t75 = (x309+((x310%x311)&x312));

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x313 = -1LL;
	volatile uint8_t x314 = UINT8_MAX;
	static int64_t x316 = INT64_MIN;
	int64_t t76 = 1927510420LL;

    t76 = (x313+((x314%x315)&x316));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x317 = 133U;
	int8_t x318 = INT8_MIN;
	static int64_t x319 = -1LL;
	static volatile int16_t x320 = INT16_MAX;
	volatile int64_t t77 = -166654487LL;

    t77 = (x317+((x318%x319)&x320));

    if (t77 != 133LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x321 = 451U;
	int8_t x322 = 1;
	uint32_t x323 = UINT32_MAX;
	uint32_t t78 = 242114150U;

    t78 = (x321+((x322%x323)&x324));

    if (t78 != 452U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x325 = UINT64_MAX;
	int32_t x326 = -1;
	uint32_t x327 = 41U;
	int32_t x328 = -1;
	uint64_t t79 = 690745634LLU;

    t79 = (x325+((x326%x327)&x328));

    if (t79 != 35LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x329 = -365482LL;
	int16_t x330 = INT16_MAX;
	uint8_t x331 = UINT8_MAX;
	volatile int64_t x332 = INT64_MIN;

    t80 = (x329+((x330%x331)&x332));

    if (t80 != -365482LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x333 = -1LL;
	uint64_t x335 = 45385012523LLU;
	volatile uint64_t t81 = 7564520LLU;

    t81 = (x333+((x334%x335)&x336));

    if (t81 != 27LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x338 = -1;
	int32_t x339 = 81130;
	int8_t x340 = INT8_MIN;
	int64_t t82 = -6759475078124LL;

    t82 = (x337+((x338%x339)&x340));

    if (t82 != -129LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x341 = INT32_MAX;
	int64_t x342 = 109LL;
	static int16_t x343 = INT16_MIN;
	uint8_t x344 = 0U;
	volatile int64_t t83 = 48120144LL;

    t83 = (x341+((x342%x343)&x344));

    if (t83 != 2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x345 = 146204155610196439LLU;
	volatile int32_t x346 = 120054;
	int16_t x347 = -1;
	volatile int64_t x348 = INT64_MIN;

    t84 = (x345+((x346%x347)&x348));

    if (t84 != 146204155610196439LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x349 = UINT64_MAX;
	int64_t x350 = INT64_MIN;
	int64_t x351 = INT64_MAX;
	int8_t x352 = INT8_MAX;
	uint64_t t85 = 10397790453208LLU;

    t85 = (x349+((x350%x351)&x352));

    if (t85 != 126LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x357 = UINT16_MAX;
	int64_t x358 = -1338LL;
	int64_t x360 = INT64_MIN;
	volatile uint64_t t86 = 2014735155LLU;

    t86 = (x357+((x358%x359)&x360));

    if (t86 != 65535LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x362 = INT16_MIN;
	int32_t x363 = 24815;
	volatile uint16_t x364 = UINT16_MAX;
	int32_t t87 = 252234203;

    t87 = (x361+((x362%x363)&x364));

    if (t87 != 57710) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x365 = 379036062;
	int16_t x366 = 567;
	uint16_t x367 = UINT16_MAX;
	uint16_t x368 = UINT16_MAX;

    t88 = (x365+((x366%x367)&x368));

    if (t88 != 379036629) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x369 = 0LL;
	volatile uint16_t x370 = UINT16_MAX;
	static volatile int64_t t89 = 1779045LL;

    t89 = (x369+((x370%x371)&x372));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x377 = INT8_MIN;
	int32_t x378 = INT32_MIN;
	volatile int16_t x379 = -1;
	volatile uint16_t x380 = 431U;
	volatile int32_t t90 = 3780779;

    t90 = (x377+((x378%x379)&x380));

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x381 = 13U;
	uint32_t x382 = 14426U;
	static int64_t x383 = INT64_MAX;
	static volatile uint16_t x384 = 20U;
	int64_t t91 = 134483746298LL;

    t91 = (x381+((x382%x383)&x384));

    if (t91 != 29LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x385 = INT32_MAX;
	uint8_t x386 = UINT8_MAX;
	uint32_t x387 = UINT32_MAX;
	int32_t x388 = INT32_MIN;
	volatile uint32_t t92 = 663791813U;

    t92 = (x385+((x386%x387)&x388));

    if (t92 != 2147483647U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x389 = 22U;
	static volatile int16_t x390 = -1;
	int8_t x391 = -1;
	volatile int32_t t93 = 8024;

    t93 = (x389+((x390%x391)&x392));

    if (t93 != 22) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x393 = 100U;
	volatile int16_t x394 = INT16_MIN;
	int16_t x395 = INT16_MAX;
	uint64_t x396 = 2LLU;
	volatile uint64_t t94 = 80177674894688818LLU;

    t94 = (x393+((x394%x395)&x396));

    if (t94 != 102LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x397 = 15;
	volatile uint8_t x398 = UINT8_MAX;
	static int16_t x400 = INT16_MIN;
	static volatile int64_t t95 = 10LL;

    t95 = (x397+((x398%x399)&x400));

    if (t95 != 15LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x401 = INT8_MAX;
	int32_t x402 = -205;
	uint16_t x403 = 68U;
	int16_t x404 = -32;
	volatile int32_t t96 = -501319;

    t96 = (x401+((x402%x403)&x404));

    if (t96 != 95) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x405 = INT32_MIN;
	volatile uint32_t x407 = UINT32_MAX;
	uint32_t x408 = 4495119U;

    t97 = (x405+((x406%x407)&x408));

    if (t97 != 2151978760U) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x409 = INT8_MIN;
	uint8_t x410 = 103U;
	int64_t x411 = -22420602917LL;
	uint64_t x412 = 5202550248651992LLU;
	uint64_t t98 = 4263085992591783398LLU;

    t98 = (x409+((x410%x411)&x412));

    if (t98 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x413 = 4285309514015LL;
	int16_t x415 = 2540;
	volatile uint16_t x416 = UINT16_MAX;
	volatile int64_t t99 = -20332115964908LL;

    t99 = (x413+((x414%x415)&x416));

    if (t99 != 4285309579550LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x417 = -4490365LL;
	int8_t x418 = -34;
	int16_t x419 = -1;
	uint64_t x420 = UINT64_MAX;
	volatile uint64_t t100 = 1472LLU;

    t100 = (x417+((x418%x419)&x420));

    if (t100 != 18446744073705061251LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x423 = 46U;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t101 = 5704113381060LLU;

    t101 = (x421+((x422%x423)&x424));

    if (t101 != 18446744071562067988LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x425 = INT8_MAX;
	volatile int8_t x427 = -18;

    t102 = (x425+((x426%x427)&x428));

    if (t102 != -2147483521LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x429 = -1;
	int32_t x430 = INT32_MIN;
	int32_t x431 = INT32_MAX;
	uint8_t x432 = 41U;
	int32_t t103 = -380989634;

    t103 = (x429+((x430%x431)&x432));

    if (t103 != 40) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint16_t x433 = 6943U;
	static int32_t x434 = INT32_MIN;
	static int64_t x435 = -1LL;

    t104 = (x433+((x434%x435)&x436));

    if (t104 != 6943LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x438 = INT8_MIN;
	int32_t x439 = -12;

    t105 = (x437+((x438%x439)&x440));

    if (t105 != 238720U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x441 = -19854652;
	volatile int64_t x442 = -1LL;
	static uint32_t x443 = 13100U;

    t106 = (x441+((x442%x443)&x444));

    if (t106 != -19854652LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x445 = UINT64_MAX;
	int8_t x446 = 3;
	int16_t x447 = INT16_MIN;
	int32_t x448 = -900;
	volatile uint64_t t107 = UINT64_MAX;

    t107 = (x445+((x446%x447)&x448));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x449 = -41;
	uint16_t x450 = UINT16_MAX;
	static uint8_t x451 = 67U;
	int64_t x452 = -1LL;
	int64_t t108 = -52039692419LL;

    t108 = (x449+((x450%x451)&x452));

    if (t108 != -32LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x453 = -2;
	static volatile int16_t x454 = INT16_MAX;

    t109 = (x453+((x454%x455)&x456));

    if (t109 != 4294967294U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x459 = 44699676285LLU;
	static volatile int32_t x460 = INT32_MIN;
	volatile uint64_t t110 = 11592LLU;

    t110 = (x457+((x458%x459)&x460));

    if (t110 != 1LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x462 = INT8_MAX;
	static uint16_t x463 = 965U;
	uint32_t x464 = UINT32_MAX;
	int64_t t111 = -775539310575LL;

    t111 = (x461+((x462%x463)&x464));

    if (t111 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x465 = 118U;
	volatile int16_t x466 = 2525;
	int16_t x468 = INT16_MIN;
	volatile int32_t t112 = -75;

    t112 = (x465+((x466%x467)&x468));

    if (t112 != 118) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x469 = -1LL;
	int8_t x470 = -7;
	int32_t x471 = INT32_MIN;
	volatile int64_t x472 = 214429511182292567LL;
	int64_t t113 = 565922283739376307LL;

    t113 = (x469+((x470%x471)&x472));

    if (t113 != 214429511182292560LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x473 = INT32_MIN;
	static int16_t x474 = 689;
	int32_t x475 = INT32_MIN;
	int32_t x476 = INT32_MIN;
	volatile int32_t t114 = INT32_MIN;

    t114 = (x473+((x474%x475)&x476));

    if (t114 != INT32_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x477 = 1U;
	uint64_t x478 = UINT64_MAX;
	uint16_t x479 = 1U;
	volatile uint64_t t115 = 139838825608349LLU;

    t115 = (x477+((x478%x479)&x480));

    if (t115 != 1LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x481 = 364946;
	int8_t x482 = INT8_MAX;
	int8_t x483 = INT8_MAX;
	int8_t x484 = INT8_MAX;
	int32_t t116 = -511222;

    t116 = (x481+((x482%x483)&x484));

    if (t116 != 364946) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x486 = 3U;
	int16_t x488 = -1;
	static volatile int64_t t117 = -348653103978LL;

    t117 = (x485+((x486%x487)&x488));

    if (t117 != 2LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x489 = UINT16_MAX;
	static volatile int8_t x490 = -1;
	uint32_t t118 = 7U;

    t118 = (x489+((x490%x491)&x492));

    if (t118 != 65535U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x494 = UINT32_MAX;
	int16_t x496 = INT16_MIN;
	volatile uint64_t t119 = 259LLU;

    t119 = (x493+((x494%x495)&x496));

    if (t119 != 127LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x498 = 448198U;
	volatile int64_t x499 = INT64_MIN;

    t120 = (x497+((x498%x499)&x500));

    if (t120 != 2000215283800LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x505 = INT8_MAX;
	static int16_t x506 = INT16_MIN;
	uint32_t x507 = 2453720U;
	static volatile uint32_t t121 = 64314881U;

    t121 = (x505+((x506%x507)&x508));

    if (t121 != 127U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x509 = 14;
	int8_t x510 = -1;
	static uint8_t x511 = 24U;
	uint32_t x512 = 39123604U;
	volatile uint32_t t122 = 0U;

    t122 = (x509+((x510%x511)&x512));

    if (t122 != 39123618U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x513 = UINT8_MAX;
	static uint32_t x514 = UINT32_MAX;
	static int8_t x515 = INT8_MIN;
	static int8_t x516 = INT8_MAX;
	volatile uint32_t t123 = 193016U;

    t123 = (x513+((x514%x515)&x516));

    if (t123 != 382U) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x521 = INT8_MIN;
	uint16_t x522 = 8192U;
	int16_t x524 = 52;
	static int64_t t124 = 1942486LL;

    t124 = (x521+((x522%x523)&x524));

    if (t124 != -128LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x526 = UINT8_MAX;
	static int8_t x527 = 46;

    t125 = (x525+((x526%x527)&x528));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x529 = INT8_MIN;
	static uint64_t x532 = 321038093LLU;
	volatile uint64_t t126 = 7045144504LLU;

    t126 = (x529+((x530%x531)&x532));

    if (t126 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint32_t x533 = 5817181U;
	int64_t x534 = -53890738675223LL;
	int32_t x535 = -1;
	uint8_t x536 = UINT8_MAX;
	int64_t t127 = 26459947284480381LL;

    t127 = (x533+((x534%x535)&x536));

    if (t127 != 5817181LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x537 = 5U;
	static int16_t x538 = INT16_MAX;
	int16_t x539 = INT16_MIN;
	uint64_t x540 = 1LLU;
	uint64_t t128 = 1559LLU;

    t128 = (x537+((x538%x539)&x540));

    if (t128 != 6LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x542 = 4U;
	static volatile int16_t x544 = INT16_MAX;
	volatile int64_t t129 = 4647270LL;

    t129 = (x541+((x542%x543)&x544));

    if (t129 != 131LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x546 = 799587925U;
	uint16_t x547 = 2U;
	static uint16_t x548 = UINT16_MAX;
	volatile uint32_t t130 = 42U;

    t130 = (x545+((x546%x547)&x548));

    if (t130 != 256U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x550 = 2LLU;
	int64_t x551 = INT64_MIN;
	static volatile uint8_t x552 = 27U;

    t131 = (x549+((x550%x551)&x552));

    if (t131 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x553 = -1;
	uint32_t x554 = UINT32_MAX;
	static uint64_t x555 = 1249468898492416629LLU;
	volatile int64_t x556 = -30361541737LL;
	volatile uint64_t t132 = 5803726033LLU;

    t132 = (x553+((x554%x555)&x556));

    if (t132 != 3998196630LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x557 = -12;
	static volatile int8_t x558 = INT8_MIN;
	volatile int8_t x559 = -2;
	static uint32_t x560 = UINT32_MAX;
	volatile uint32_t t133 = 426U;

    t133 = (x557+((x558%x559)&x560));

    if (t133 != 4294967284U) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x561 = -1;
	static uint8_t x562 = 63U;
	int64_t x563 = 45571103LL;
	int64_t x564 = -1LL;
	volatile int64_t t134 = -101586LL;

    t134 = (x561+((x562%x563)&x564));

    if (t134 != 62LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x565 = INT32_MIN;
	static uint8_t x567 = 11U;
	int64_t x568 = -1LL;
	static volatile int64_t t135 = 40374486307398110LL;

    t135 = (x565+((x566%x567)&x568));

    if (t135 != -2147483650LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x569 = 1U;
	static volatile uint16_t x571 = 836U;
	static int32_t x572 = INT32_MIN;
	int32_t t136 = -1295;

    t136 = (x569+((x570%x571)&x572));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x573 = 2918753U;
	static volatile int64_t x575 = INT64_MAX;
	int64_t t137 = 319LL;

    t137 = (x573+((x574%x575)&x576));

    if (t137 != 2928866LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x577 = -207312899767LL;
	uint64_t x578 = UINT64_MAX;
	uint16_t x580 = UINT16_MAX;

    t138 = (x577+((x578%x579)&x580));

    if (t138 != 18446743866396657499LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x581 = 1;
	int32_t x582 = -9995888;
	static uint64_t x583 = 130955LLU;
	int16_t x584 = 1;
	uint64_t t139 = 637LLU;

    t139 = (x581+((x582%x583)&x584));

    if (t139 != 2LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x585 = -1;
	uint16_t x586 = 11805U;
	uint64_t t140 = UINT64_MAX;

    t140 = (x585+((x586%x587)&x588));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x589 = 0U;
	int32_t x590 = -312537;
	uint16_t x591 = UINT16_MAX;
	int16_t x592 = 11858;
	volatile int32_t t141 = 336284317;

    t141 = (x589+((x590%x591)&x592));

    if (t141 != 10754) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x593 = 26U;
	uint32_t x594 = 0U;
	int64_t x595 = -160734689LL;
	static int64_t t142 = -1892605145059250LL;

    t142 = (x593+((x594%x595)&x596));

    if (t142 != 26LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x597 = 62;
	int16_t x598 = INT16_MAX;
	uint16_t x599 = 16811U;

    t143 = (x597+((x598%x599)&x600));

    if (t143 != 4178) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x601 = -31;
	int8_t x602 = INT8_MAX;
	int8_t x603 = 2;
	volatile uint32_t x604 = 88274U;
	uint32_t t144 = 230U;

    t144 = (x601+((x602%x603)&x604));

    if (t144 != 4294967265U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x605 = 68U;
	int32_t x606 = -1;
	int64_t x607 = -1LL;
	uint8_t x608 = 1U;
	int64_t t145 = 12047981033290204LL;

    t145 = (x605+((x606%x607)&x608));

    if (t145 != 68LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x609 = INT64_MAX;
	uint64_t x610 = 7054371LLU;
	volatile int8_t x611 = 9;
	int64_t x612 = 1603LL;
	uint64_t t146 = 178202LLU;

    t146 = (x609+((x610%x611)&x612));

    if (t146 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x613 = 7U;
	int32_t x614 = INT32_MAX;
	int64_t x615 = -206LL;
	int16_t x616 = 828;
	volatile int64_t t147 = 423724341698874763LL;

    t147 = (x613+((x614%x615)&x616));

    if (t147 != 63LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x617 = -1;
	int8_t x618 = -3;
	volatile uint64_t t148 = 138292363231993LLU;

    t148 = (x617+((x618%x619)&x620));

    if (t148 != 506167984127LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x621 = -2;
	int16_t x622 = -1;
	volatile uint16_t x624 = 194U;
	int32_t t149 = -61611;

    t149 = (x621+((x622%x623)&x624));

    if (t149 != 192) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x626 = INT32_MIN;
	static int64_t x627 = -1LL;
	int16_t x628 = INT16_MIN;
	static int64_t t150 = -1286132245276115254LL;

    t150 = (x625+((x626%x627)&x628));

    if (t150 != 255LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x629 = 6;
	volatile uint16_t x630 = 616U;
	uint8_t x631 = 28U;
	int8_t x632 = INT8_MIN;
	volatile int32_t t151 = -148471575;

    t151 = (x629+((x630%x631)&x632));

    if (t151 != 6) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x633 = 40;
	uint32_t x634 = 409223U;
	volatile uint64_t x635 = 925LLU;
	volatile int16_t x636 = INT16_MIN;

    t152 = (x633+((x634%x635)&x636));

    if (t152 != 40LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x641 = 15647857399166597LLU;
	int32_t x642 = -1;
	static uint16_t x643 = UINT16_MAX;
	int32_t x644 = INT32_MIN;
	uint64_t t153 = 197104LLU;

    t153 = (x641+((x642%x643)&x644));

    if (t153 != 15647855251682949LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x647 = 100;
	volatile uint8_t x648 = 28U;
	uint64_t t154 = 82221895728174LLU;

    t154 = (x645+((x646%x647)&x648));

    if (t154 != 4LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x649 = 0U;
	static int16_t x650 = INT16_MIN;
	static uint32_t x651 = 25732U;
	volatile int64_t x652 = 18030265748489LL;
	volatile int64_t t155 = 5985029263LL;

    t155 = (x649+((x650%x651)&x652));

    if (t155 != 2056LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x653 = 30973183LLU;
	int64_t x654 = 862323822944021129LL;
	int8_t x655 = INT8_MAX;
	volatile int8_t x656 = -1;
	volatile uint64_t t156 = 66468016210561165LLU;

    t156 = (x653+((x654%x655)&x656));

    if (t156 != 30973297LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x657 = -11;
	uint8_t x658 = 2U;
	uint32_t x659 = UINT32_MAX;
	static volatile int16_t x660 = -403;
	volatile uint32_t t157 = 56U;

    t157 = (x657+((x658%x659)&x660));

    if (t157 != 4294967285U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x661 = INT16_MIN;
	int64_t x662 = -1LL;
	int8_t x663 = INT8_MIN;
	uint16_t x664 = 35U;
	int64_t t158 = 12689815699692426LL;

    t158 = (x661+((x662%x663)&x664));

    if (t158 != -32733LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x665 = INT8_MIN;
	uint64_t t159 = 26128596LLU;

    t159 = (x665+((x666%x667)&x668));

    if (t159 != 5239LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x670 = UINT32_MAX;
	uint32_t x671 = UINT32_MAX;
	int8_t x672 = -1;
	uint32_t t160 = 1919138038U;

    t160 = (x669+((x670%x671)&x672));

    if (t160 != 32767U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x673 = 6591066451LLU;
	static volatile uint64_t x674 = 1845224LLU;
	uint8_t x675 = 5U;
	int64_t x676 = -3153400490553815915LL;
	volatile uint64_t t161 = 6846LLU;

    t161 = (x673+((x674%x675)&x676));

    if (t161 != 6591066455LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x677 = -7;
	static int8_t x678 = INT8_MIN;
	int32_t x679 = INT32_MIN;
	uint8_t x680 = 14U;
	static volatile int32_t t162 = -1;

    t162 = (x677+((x678%x679)&x680));

    if (t162 != -7) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x681 = 2U;
	volatile int32_t x683 = INT32_MAX;

    t163 = (x681+((x682%x683)&x684));

    if (t163 != 5LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x685 = 0U;
	volatile int32_t x686 = INT32_MIN;
	int16_t x687 = -3555;

    t164 = (x685+((x686%x687)&x688));

    if (t164 != 4516U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x690 = INT8_MAX;
	uint64_t x691 = 22220601261LLU;
	static uint64_t t165 = 3001842830LLU;

    t165 = (x689+((x690%x691)&x692));

    if (t165 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x693 = 1123496947837095LLU;
	int32_t x694 = -438884017;
	static int32_t x695 = INT32_MIN;
	int32_t x696 = -1;

    t166 = (x693+((x694%x695)&x696));

    if (t166 != 1123496508953078LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x697 = INT64_MIN;
	static int64_t x699 = 126LL;
	uint64_t x700 = UINT64_MAX;
	volatile uint64_t t167 = 11828577372905606LLU;

    t167 = (x697+((x698%x699)&x700));

    if (t167 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x701 = INT32_MIN;
	int64_t x702 = 111470150839836LL;
	uint8_t x704 = 79U;
	volatile int64_t t168 = -323LL;

    t168 = (x701+((x702%x703)&x704));

    if (t168 != -2147483581LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x709 = INT32_MIN;
	uint16_t x710 = 6U;
	uint8_t x711 = 2U;
	static uint32_t x712 = 3155U;

    t169 = (x709+((x710%x711)&x712));

    if (t169 != 2147483648U) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x713 = -1;
	uint64_t x714 = 965LLU;
	volatile uint8_t x715 = 10U;
	volatile int32_t x716 = 66204;
	uint64_t t170 = 29704019LLU;

    t170 = (x713+((x714%x715)&x716));

    if (t170 != 3LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x717 = 0;
	volatile int32_t x718 = INT32_MIN;
	int32_t x719 = INT32_MAX;

    t171 = (x717+((x718%x719)&x720));

    if (t171 != -694101) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x722 = INT8_MIN;
	int32_t x724 = INT32_MAX;
	volatile int64_t t172 = -179585806566169168LL;

    t172 = (x721+((x722%x723)&x724));

    if (t172 != 2147605647LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x729 = -31613409120254LL;
	int32_t x731 = -1;
	int64_t t173 = -851LL;

    t173 = (x729+((x730%x731)&x732));

    if (t173 != -31613409120254LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x737 = 1702369346169285692LLU;
	int64_t x738 = INT64_MIN;
	int32_t x739 = INT32_MIN;
	static int64_t x740 = INT64_MIN;
	volatile uint64_t t174 = 314LLU;

    t174 = (x737+((x738%x739)&x740));

    if (t174 != 1702369346169285692LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x741 = INT8_MAX;
	volatile int64_t x743 = INT64_MAX;
	static int64_t x744 = INT64_MAX;

    t175 = (x741+((x742%x743)&x744));

    if (t175 != 82410783LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint8_t x745 = UINT8_MAX;
	uint8_t x748 = UINT8_MAX;
	volatile uint32_t t176 = 0U;

    t176 = (x745+((x746%x747)&x748));

    if (t176 != 510U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x749 = 1;
	uint16_t x750 = UINT16_MAX;
	uint64_t x751 = UINT64_MAX;
	uint32_t x752 = 3U;
	uint64_t t177 = 42446975LLU;

    t177 = (x749+((x750%x751)&x752));

    if (t177 != 4LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x753 = 3U;
	static int8_t x755 = 1;
	uint32_t x756 = UINT32_MAX;
	volatile uint64_t t178 = 11LLU;

    t178 = (x753+((x754%x755)&x756));

    if (t178 != 3LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x757 = -262039539;
	int16_t x758 = INT16_MAX;
	volatile int16_t x760 = INT16_MIN;
	uint32_t t179 = 365100U;

    t179 = (x757+((x758%x759)&x760));

    if (t179 != 4032927757U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x761 = INT8_MIN;
	int32_t x762 = INT32_MAX;
	uint32_t x763 = 13U;
	int32_t x764 = INT32_MAX;
	uint32_t t180 = 29U;

    t180 = (x761+((x762%x763)&x764));

    if (t180 != 4294967178U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x765 = INT8_MIN;
	uint16_t x766 = 3U;
	volatile uint8_t x767 = 1U;
	static uint32_t x768 = UINT32_MAX;
	volatile uint32_t t181 = 9990574U;

    t181 = (x765+((x766%x767)&x768));

    if (t181 != 4294967168U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x769 = 774U;
	uint64_t x770 = UINT64_MAX;
	int8_t x772 = 11;
	static volatile uint64_t t182 = 1154196176LLU;

    t182 = (x769+((x770%x771)&x772));

    if (t182 != 785LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x773 = -1;
	int64_t x774 = INT64_MIN;
	uint64_t x775 = UINT64_MAX;
	uint64_t t183 = 1459929778711566LLU;

    t183 = (x773+((x774%x775)&x776));

    if (t183 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x777 = INT16_MAX;
	int64_t x778 = INT64_MIN;
	uint8_t x779 = 31U;

    t184 = (x777+((x778%x779)&x780));

    if (t184 != -29374017LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x781 = 14;
	int32_t x782 = INT32_MAX;
	int16_t x784 = -1;
	int32_t t185 = -31384132;

    t185 = (x781+((x782%x783)&x784));

    if (t185 != 14) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x790 = UINT8_MAX;
	static int32_t x791 = INT32_MIN;
	volatile int8_t x792 = 53;
	volatile int32_t t186 = -14;

    t186 = (x789+((x790%x791)&x792));

    if (t186 != 84) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x793 = UINT32_MAX;
	static int32_t x795 = INT32_MIN;
	static uint64_t t187 = 2683LLU;

    t187 = (x793+((x794%x795)&x796));

    if (t187 != 4416131719LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x801 = 3U;
	int64_t x802 = INT64_MIN;
	uint32_t x804 = UINT32_MAX;
	volatile int64_t t188 = 44010251118508LL;

    t188 = (x801+((x802%x803)&x804));

    if (t188 != 4294967298LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x805 = -3438849526LL;
	int32_t x806 = 42;
	uint8_t x807 = 121U;

    t189 = (x805+((x806%x807)&x808));

    if (t189 != -3438849484LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x809 = -1;
	int64_t x810 = INT64_MIN;
	uint64_t x811 = 62LLU;
	uint16_t x812 = 21U;
	uint64_t t190 = UINT64_MAX;

    t190 = (x809+((x810%x811)&x812));

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x814 = 5547923119963751LLU;
	int32_t x815 = -919;
	uint64_t t191 = 1360031786082990LLU;

    t191 = (x813+((x814%x815)&x816));

    if (t191 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x817 = -1LL;
	volatile int16_t x819 = -15602;
	static volatile uint16_t x820 = UINT16_MAX;
	volatile int64_t t192 = -193671LL;

    t192 = (x817+((x818%x819)&x820));

    if (t192 != 65095LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x822 = -17142746316275LL;
	volatile uint32_t x823 = 4361U;
	int32_t x824 = -9137;
	volatile int64_t t193 = 24399LL;

    t193 = (x821+((x822%x823)&x824));

    if (t193 != -9202LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x825 = UINT32_MAX;
	int8_t x826 = INT8_MIN;
	int16_t x827 = -2037;
	static int8_t x828 = INT8_MAX;
	static uint32_t t194 = UINT32_MAX;

    t194 = (x825+((x826%x827)&x828));

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x829 = INT32_MIN;
	static int8_t x830 = INT8_MAX;
	int16_t x831 = -1;
	volatile int64_t x832 = -1LL;

    t195 = (x829+((x830%x831)&x832));

    if (t195 != -2147483648LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x833 = UINT8_MAX;
	static int8_t x834 = INT8_MIN;
	int16_t x835 = -1;
	int64_t x836 = INT64_MIN;
	static int64_t t196 = 5390529239647LL;

    t196 = (x833+((x834%x835)&x836));

    if (t196 != 255LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x841 = 1466U;
	uint16_t x842 = 4U;
	volatile int8_t x843 = INT8_MAX;
	int32_t x844 = INT32_MAX;
	static volatile uint32_t t197 = 25594U;

    t197 = (x841+((x842%x843)&x844));

    if (t197 != 1470U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x845 = 1U;
	uint8_t x848 = 64U;
	static volatile uint32_t t198 = 3U;

    t198 = (x845+((x846%x847)&x848));

    if (t198 != 65U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x849 = INT32_MAX;
	volatile uint8_t x850 = UINT8_MAX;
	static volatile int8_t x851 = INT8_MAX;
	static int64_t x852 = 2607931LL;
	static volatile int64_t t199 = 15597275482916925LL;

    t199 = (x849+((x850%x851)&x852));

    if (t199 != 2147483648LL) { NG(); } else { ; }
	
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

