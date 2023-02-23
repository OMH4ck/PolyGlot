
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

int32_t x1 = INT32_MAX;
int8_t x2 = 12;
int64_t x7 = -1LL;
uint32_t x12 = UINT32_MAX;
uint32_t t2 = 1047494U;
int8_t x15 = -1;
static int16_t x16 = INT16_MIN;
int32_t x17 = -1;
uint8_t x18 = UINT8_MAX;
int8_t x21 = -7;
int16_t x25 = INT16_MIN;
int16_t x26 = 53;
int16_t x31 = 1878;
static int8_t x36 = INT8_MIN;
int16_t x38 = INT16_MIN;
uint8_t x42 = UINT8_MAX;
static int32_t x45 = -2499;
volatile uint64_t x47 = 113739965401206789LLU;
uint32_t x48 = 0U;
uint32_t t11 = 14247U;
int32_t t12 = -4564;
int16_t x58 = -7;
int8_t x70 = INT8_MIN;
int8_t x82 = -23;
static uint16_t x93 = 12U;
int32_t x103 = -25701;
static int8_t x104 = -1;
volatile uint32_t t23 = 0U;
int16_t x112 = INT16_MIN;
int8_t x113 = 20;
int8_t x120 = INT8_MIN;
volatile uint32_t x123 = 1482567647U;
static int8_t x140 = INT8_MAX;
int64_t x141 = INT64_MIN;
volatile int32_t x142 = INT32_MIN;
static uint16_t x149 = 8059U;
uint64_t x151 = 1835970LLU;
static int64_t x152 = -1LL;
volatile int64_t t34 = 2LL;
static int16_t x154 = -1;
volatile int64_t x165 = -1LL;
uint16_t x168 = 14U;
uint8_t x176 = 6U;
uint8_t x177 = UINT8_MAX;
uint8_t x181 = UINT8_MAX;
int64_t x182 = INT64_MAX;
uint8_t x183 = UINT8_MAX;
uint8_t x186 = UINT8_MAX;
volatile int64_t t44 = 36086323935062955LL;
volatile uint64_t x206 = UINT64_MAX;
int8_t x208 = INT8_MAX;
static int16_t x218 = INT16_MAX;
int64_t t50 = -213333357337634751LL;
int16_t x226 = INT16_MIN;
volatile int64_t x230 = INT64_MAX;
int32_t t56 = 111347984;
int8_t x261 = INT8_MIN;
uint64_t x264 = UINT64_MAX;
volatile int32_t x267 = -13416;
volatile int64_t t60 = -1LL;
volatile int16_t x274 = INT16_MIN;
volatile int64_t t62 = INT64_MIN;
int8_t x277 = -1;
int8_t x280 = -13;
int32_t t63 = -2;
static int8_t x282 = INT8_MIN;
static volatile int64_t x283 = 204939986885LL;
int64_t t64 = 15826479LL;
volatile int64_t t66 = 490121LL;
int32_t x301 = -161056203;
int64_t x310 = INT64_MIN;
int32_t x315 = INT32_MIN;
uint32_t x316 = 66283533U;
uint8_t x317 = 86U;
int16_t x323 = INT16_MAX;
uint8_t x339 = 1U;
volatile int32_t t79 = 7;
uint8_t x361 = 88U;
int8_t x362 = -1;
int32_t x368 = -1;
static int64_t x377 = 8459930958LL;
int32_t x379 = -1;
volatile int8_t x386 = -1;
uint8_t x390 = 116U;
int64_t x392 = -1LL;
uint8_t x399 = 0U;
uint32_t x402 = UINT32_MAX;
int64_t x411 = -346263502LL;
static volatile int64_t x417 = -1655009440004LL;
uint8_t x420 = 0U;
static volatile int8_t x421 = -26;
uint8_t x424 = 1U;
static uint64_t x430 = UINT64_MAX;
int32_t x434 = -1;
static int16_t x436 = INT16_MIN;
int8_t x441 = INT8_MAX;
volatile int32_t x442 = INT32_MAX;
volatile uint32_t x445 = UINT32_MAX;
int32_t x446 = -28;
int16_t x450 = INT16_MAX;
int32_t t100 = -1;
uint8_t x462 = 11U;
int64_t x463 = -78327134274LL;
int32_t t103 = -23;
int32_t x475 = -1;
uint32_t t106 = 3561U;
static uint64_t x485 = 1021LLU;
static uint16_t x489 = 16030U;
static int16_t x493 = 0;
int8_t x501 = INT8_MAX;
int64_t t110 = 952394800243617LL;
volatile int32_t t111 = -104411;
int8_t x517 = 17;
int32_t x518 = INT32_MIN;
int32_t t112 = 1250645;
uint32_t x522 = UINT32_MAX;
int32_t t114 = -16;
uint16_t x529 = 69U;
uint8_t x539 = UINT8_MAX;
uint32_t x541 = 8375U;
int8_t x542 = INT8_MIN;
uint64_t t119 = 969LLU;
static uint16_t x549 = 10900U;
int16_t x551 = INT16_MIN;
static uint32_t x552 = 0U;
int16_t x554 = -1;
int32_t x557 = INT32_MIN;
volatile int8_t x573 = INT8_MIN;
int64_t x574 = INT64_MIN;
int32_t t125 = -17;
int8_t x578 = INT8_MIN;
uint16_t x581 = UINT16_MAX;
uint16_t x590 = 27U;
uint16_t x592 = UINT16_MAX;
static int8_t x597 = INT8_MIN;
uint64_t x600 = 33528757382LLU;
static uint64_t x605 = UINT64_MAX;
int8_t x607 = INT8_MIN;
volatile int32_t x614 = INT32_MAX;
uint32_t x617 = 913U;
int64_t x627 = 84668510725382LL;
volatile int32_t x630 = INT32_MAX;
uint8_t x633 = 7U;
uint16_t x648 = 48U;
uint8_t x651 = 52U;
uint8_t x652 = 1U;
int16_t x657 = INT16_MIN;
volatile int32_t t141 = -1;
static int32_t x668 = INT32_MAX;
volatile int8_t x671 = INT8_MIN;
static volatile uint64_t x674 = 1239375761LLU;
uint64_t x677 = 1LLU;
uint16_t x679 = 7U;
volatile int16_t x682 = INT16_MIN;
volatile int64_t x701 = INT64_MAX;
static int64_t x703 = INT64_MIN;
int64_t x706 = INT64_MIN;
int8_t x715 = -15;
int32_t x726 = INT32_MIN;
int16_t x742 = INT16_MIN;
uint16_t x748 = UINT16_MAX;
int64_t x755 = 262326184408037LL;
int64_t x756 = INT64_MIN;
uint32_t t164 = 268061U;
uint16_t x770 = 2U;
static int8_t x772 = INT8_MIN;
static int8_t x779 = 5;
uint8_t x783 = 3U;
volatile uint16_t x784 = 15136U;
uint8_t x786 = 1U;
uint32_t x798 = UINT32_MAX;
uint64_t x808 = 2046323649846982LLU;
volatile int8_t x813 = -1;
static volatile uint32_t x830 = 26U;
static uint64_t x834 = 948629LLU;
uint32_t x839 = UINT32_MAX;
static int16_t x840 = INT16_MIN;
static uint32_t x843 = UINT32_MAX;
static int64_t t182 = -13696LL;
int32_t t184 = 0;
int32_t x861 = 137747145;
int64_t x864 = 8304LL;
volatile int64_t t186 = -58851954086LL;
uint32_t t188 = 0U;
static uint8_t x883 = UINT8_MAX;
static volatile uint8_t x884 = 2U;
int64_t x892 = -403794384521877559LL;
int32_t x893 = INT32_MAX;
int32_t x895 = INT32_MIN;
uint64_t x898 = UINT64_MAX;
int8_t x903 = 14;
uint16_t x917 = 1U;


void f0(void) {
    	int32_t x3 = INT32_MIN;
	volatile int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 0;

    t0 = (x1+((x2<=x3)+x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = 41259636326801LLU;
	static volatile int16_t x6 = 7;
	int16_t x8 = INT16_MAX;
	volatile uint64_t t1 = 4823LLU;

    t1 = (x5+((x6<=x7)+x8));

    if (t1 != 41259636359568LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	uint32_t x10 = 498088864U;
	uint32_t x11 = 6U;

    t2 = (x9+((x10<=x11)+x12));

    if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 23U;
	uint8_t x14 = 1U;
	static volatile int32_t t3 = -4;

    t3 = (x13+((x14<=x15)+x16));

    if (t3 != -32745) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x19 = 9U;
	static uint32_t x20 = 466498U;
	volatile uint32_t t4 = 17030U;

    t4 = (x17+((x18<=x19)+x20));

    if (t4 != 466497U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x22 = 62296;
	uint8_t x23 = 51U;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t5 = 224U;

    t5 = (x21+((x22<=x23)+x24));

    if (t5 != 4294967288U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x27 = INT8_MAX;
	int8_t x28 = INT8_MIN;
	int32_t t6 = -29960525;

    t6 = (x25+((x26<=x27)+x28));

    if (t6 != -32895) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x29 = 1LLU;
	static int8_t x30 = INT8_MAX;
	volatile int64_t x32 = INT64_MIN;
	static uint64_t t7 = 83219LLU;

    t7 = (x29+((x30<=x31)+x32));

    if (t7 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = -19;
	volatile int32_t x34 = 20;
	volatile int16_t x35 = INT16_MAX;
	static volatile int32_t t8 = 298770;

    t8 = (x33+((x34<=x35)+x36));

    if (t8 != -146) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 7U;
	static uint64_t x39 = 6713798006330954139LLU;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 1021539;

    t9 = (x37+((x38<=x39)+x40));

    if (t9 != -121) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	int64_t x43 = -1LL;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t10 = -130605096;

    t10 = (x41+((x42<=x43)+x44));

    if (t10 != -129) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = -1;

    t11 = (x45+((x46<=x47)+x48));

    if (t11 != 4294964797U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = -37;
	uint16_t x54 = 140U;
	static int8_t x55 = 2;
	int16_t x56 = INT16_MIN;

    t12 = (x53+((x54<=x55)+x56));

    if (t12 != -32805) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int32_t x57 = INT32_MAX;
	int16_t x59 = INT16_MIN;
	static int16_t x60 = INT16_MIN;
	int32_t t13 = -53;

    t13 = (x57+((x58<=x59)+x60));

    if (t13 != 2147450879) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x61 = 23U;
	int8_t x62 = 0;
	int64_t x63 = INT64_MAX;
	uint32_t x64 = UINT32_MAX;
	volatile uint32_t t14 = 23032153U;

    t14 = (x61+((x62<=x63)+x64));

    if (t14 != 23U) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x65 = 250;
	uint64_t x66 = UINT64_MAX;
	int16_t x67 = INT16_MIN;
	uint64_t x68 = 7687770896303155LLU;
	static uint64_t t15 = 28625833LLU;

    t15 = (x65+((x66<=x67)+x68));

    if (t15 != 7687770896303405LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x69 = 2LLU;
	volatile int8_t x71 = INT8_MIN;
	static int8_t x72 = INT8_MAX;
	uint64_t t16 = 264259997438370400LLU;

    t16 = (x69+((x70<=x71)+x72));

    if (t16 != 130LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x73 = INT32_MAX;
	int16_t x74 = INT16_MIN;
	volatile int32_t x75 = -3180366;
	int16_t x76 = -1;
	volatile int32_t t17 = -29909;

    t17 = (x73+((x74<=x75)+x76));

    if (t17 != 2147483646) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x81 = INT32_MIN;
	static volatile int32_t x83 = INT32_MAX;
	static int32_t x84 = 30428;
	static volatile int32_t t18 = 38;

    t18 = (x81+((x82<=x83)+x84));

    if (t18 != -2147453219) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x85 = 4407880LLU;
	uint8_t x86 = 1U;
	int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MIN;
	uint64_t t19 = 355421533921685LLU;

    t19 = (x85+((x86<=x87)+x88));

    if (t19 != 9223372036859183688LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = -91073567137625LL;
	volatile int8_t x90 = INT8_MAX;
	int8_t x91 = -1;
	static int8_t x92 = INT8_MIN;
	volatile int64_t t20 = -8314851972LL;

    t20 = (x89+((x90<=x91)+x92));

    if (t20 != -91073567137753LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x94 = 7U;
	static uint8_t x95 = UINT8_MAX;
	static int8_t x96 = -2;
	volatile int32_t t21 = -1342;

    t21 = (x93+((x94<=x95)+x96));

    if (t21 != 11) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = -1;
	int32_t x98 = INT32_MIN;
	int64_t x99 = 31134821073LL;
	int8_t x100 = -1;
	int32_t t22 = 0;

    t22 = (x97+((x98<=x99)+x100));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x101 = 6660477U;
	volatile int64_t x102 = -1LL;

    t23 = (x101+((x102<=x103)+x104));

    if (t23 != 6660476U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x105 = INT32_MIN;
	static int32_t x106 = 20752;
	int32_t x107 = -69195235;
	int64_t x108 = INT64_MAX;
	int64_t t24 = -879LL;

    t24 = (x105+((x106<=x107)+x108));

    if (t24 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = INT8_MIN;
	int64_t x110 = INT64_MIN;
	uint8_t x111 = UINT8_MAX;
	int32_t t25 = 1;

    t25 = (x109+((x110<=x111)+x112));

    if (t25 != -32895) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x114 = 6U;
	volatile uint32_t x115 = 5349496U;
	static uint16_t x116 = 1U;
	volatile int32_t t26 = 2607;

    t26 = (x113+((x114<=x115)+x116));

    if (t26 != 22) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x117 = UINT16_MAX;
	static uint16_t x118 = UINT16_MAX;
	uint8_t x119 = UINT8_MAX;
	static int32_t t27 = 1375218;

    t27 = (x117+((x118<=x119)+x120));

    if (t27 != 65407) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x121 = UINT64_MAX;
	static int64_t x122 = INT64_MIN;
	volatile int16_t x124 = INT16_MAX;
	static volatile uint64_t t28 = 374163361061486863LLU;

    t28 = (x121+((x122<=x123)+x124));

    if (t28 != 32767LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x125 = -1;
	int8_t x126 = INT8_MIN;
	static uint16_t x127 = 1U;
	static volatile int64_t x128 = -182890933114LL;
	volatile int64_t t29 = 5495937LL;

    t29 = (x125+((x126<=x127)+x128));

    if (t29 != -182890933114LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = INT16_MAX;
	int32_t x130 = 4631848;
	int16_t x131 = -1;
	static int8_t x132 = INT8_MIN;
	int32_t t30 = -53325318;

    t30 = (x129+((x130<=x131)+x132));

    if (t30 != 32639) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x137 = 0U;
	uint32_t x138 = 4433U;
	int32_t x139 = 80516;
	static volatile int32_t t31 = -122;

    t31 = (x137+((x138<=x139)+x140));

    if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x143 = INT32_MIN;
	static int8_t x144 = -1;
	volatile int64_t t32 = INT64_MIN;

    t32 = (x141+((x142<=x143)+x144));

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x145 = UINT32_MAX;
	uint8_t x146 = 92U;
	uint32_t x147 = 1450U;
	uint16_t x148 = 147U;
	volatile uint32_t t33 = 46295159U;

    t33 = (x145+((x146<=x147)+x148));

    if (t33 != 147U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x150 = -13934985;

    t34 = (x149+((x150<=x151)+x152));

    if (t34 != 8058LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x153 = 239308LL;
	int8_t x155 = 0;
	volatile int64_t x156 = 14859804726LL;
	int64_t t35 = 148LL;

    t35 = (x153+((x154<=x155)+x156));

    if (t35 != 14860044035LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x157 = -1;
	uint32_t x158 = UINT32_MAX;
	uint16_t x159 = 1U;
	int8_t x160 = INT8_MIN;
	int32_t t36 = -8537614;

    t36 = (x157+((x158<=x159)+x160));

    if (t36 != -129) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x161 = -1;
	static volatile uint16_t x162 = 13U;
	int16_t x163 = 3060;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t37 = INT32_MIN;

    t37 = (x161+((x162<=x163)+x164));

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x166 = 130U;
	uint32_t x167 = 7398177U;
	static volatile int64_t t38 = -337904061LL;

    t38 = (x165+((x166<=x167)+x168));

    if (t38 != 14LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint8_t x173 = 2U;
	static uint16_t x174 = UINT16_MAX;
	volatile uint64_t x175 = 56233505396LLU;
	static volatile int32_t t39 = 118951;

    t39 = (x173+((x174<=x175)+x176));

    if (t39 != 9) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x178 = INT16_MIN;
	int8_t x179 = 30;
	volatile int16_t x180 = -1;
	int32_t t40 = 56;

    t40 = (x177+((x178<=x179)+x180));

    if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x184 = -1;
	volatile int32_t t41 = -244241164;

    t41 = (x181+((x182<=x183)+x184));

    if (t41 != 254) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x185 = INT16_MIN;
	static int32_t x187 = -481;
	uint64_t x188 = 213320014LLU;
	uint64_t t42 = 61LLU;

    t42 = (x185+((x186<=x187)+x188));

    if (t42 != 213287246LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x189 = -63;
	int32_t x190 = -4037;
	int32_t x191 = -7540;
	volatile uint64_t x192 = 823012525353963LLU;
	static volatile uint64_t t43 = 264LLU;

    t43 = (x189+((x190<=x191)+x192));

    if (t43 != 823012525353900LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x193 = -1LL;
	int64_t x194 = -53824600382009LL;
	volatile uint64_t x195 = 143LLU;
	static int16_t x196 = INT16_MIN;

    t44 = (x193+((x194<=x195)+x196));

    if (t44 != -32769LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x197 = 9U;
	uint16_t x198 = 12U;
	volatile int32_t x199 = INT32_MAX;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t45 = -27759463;

    t45 = (x197+((x198<=x199)+x200));

    if (t45 != 65545) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x201 = INT8_MAX;
	volatile uint8_t x202 = 1U;
	int32_t x203 = INT32_MAX;
	int32_t x204 = 824;
	volatile int32_t t46 = 41;

    t46 = (x201+((x202<=x203)+x204));

    if (t46 != 952) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x205 = -1;
	int16_t x207 = INT16_MIN;
	int32_t t47 = 12;

    t47 = (x205+((x206<=x207)+x208));

    if (t47 != 126) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = INT16_MAX;
	uint8_t x214 = 3U;
	int16_t x215 = -1;
	static int16_t x216 = -1;
	volatile int32_t t48 = -10;

    t48 = (x213+((x214<=x215)+x216));

    if (t48 != 32766) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x217 = -1;
	int8_t x219 = INT8_MIN;
	static int8_t x220 = INT8_MAX;
	int32_t t49 = -127;

    t49 = (x217+((x218<=x219)+x220));

    if (t49 != 126) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x221 = 6U;
	int32_t x222 = INT32_MIN;
	int32_t x223 = -6986428;
	int64_t x224 = -2200838301LL;

    t50 = (x221+((x222<=x223)+x224));

    if (t50 != -2200838294LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x225 = 28U;
	int64_t x227 = 111856179644880LL;
	static int8_t x228 = INT8_MAX;
	int32_t t51 = -46;

    t51 = (x225+((x226<=x227)+x228));

    if (t51 != 156) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x229 = 100720LLU;
	int32_t x231 = -1;
	volatile uint32_t x232 = 65236U;
	uint64_t t52 = 6534LLU;

    t52 = (x229+((x230<=x231)+x232));

    if (t52 != 165956LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x237 = INT8_MAX;
	volatile int8_t x238 = -1;
	uint64_t x239 = UINT64_MAX;
	uint32_t x240 = UINT32_MAX;
	uint32_t t53 = 3575627U;

    t53 = (x237+((x238<=x239)+x240));

    if (t53 != 127U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x241 = INT16_MAX;
	int8_t x242 = -1;
	int32_t x243 = INT32_MAX;
	uint16_t x244 = 4893U;
	volatile int32_t t54 = 119270431;

    t54 = (x241+((x242<=x243)+x244));

    if (t54 != 37661) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x245 = -1;
	static uint8_t x246 = 10U;
	volatile uint64_t x247 = UINT64_MAX;
	uint64_t x248 = 46120LLU;
	uint64_t t55 = 3640013305564657307LLU;

    t55 = (x245+((x246<=x247)+x248));

    if (t55 != 46120LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x249 = INT8_MAX;
	int8_t x250 = 28;
	int64_t x251 = -1LL;
	volatile int32_t x252 = 677587;

    t56 = (x249+((x250<=x251)+x252));

    if (t56 != 677714) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x253 = INT16_MIN;
	volatile int8_t x254 = 62;
	int32_t x255 = INT32_MIN;
	int64_t x256 = -8269LL;
	volatile int64_t t57 = 217300904825LL;

    t57 = (x253+((x254<=x255)+x256));

    if (t57 != -41037LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x257 = -5;
	int8_t x258 = -1;
	int64_t x259 = INT64_MIN;
	uint32_t x260 = 2041458U;
	volatile uint32_t t58 = 18U;

    t58 = (x257+((x258<=x259)+x260));

    if (t58 != 2041453U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x262 = -373672608626089510LL;
	int8_t x263 = -31;
	uint64_t t59 = 7520218463LLU;

    t59 = (x261+((x262<=x263)+x264));

    if (t59 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x265 = 103249243655358025LL;
	uint64_t x266 = 1865629LLU;
	static int64_t x268 = 165826618283LL;

    t60 = (x265+((x266<=x267)+x268));

    if (t60 != 103249409481976309LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x269 = 46;
	static int16_t x270 = INT16_MIN;
	volatile int16_t x271 = 2797;
	int64_t x272 = -1LL;
	volatile int64_t t61 = 652388411087LL;

    t61 = (x269+((x270<=x271)+x272));

    if (t61 != 46LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x273 = -1;
	uint16_t x275 = UINT16_MAX;
	volatile int64_t x276 = INT64_MIN;

    t62 = (x273+((x274<=x275)+x276));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x278 = 22403U;
	volatile uint16_t x279 = 169U;

    t63 = (x277+((x278<=x279)+x280));

    if (t63 != -14) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint8_t x281 = 1U;
	int64_t x284 = INT64_MIN;

    t64 = (x281+((x282<=x283)+x284));

    if (t64 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x289 = -1;
	int64_t x290 = -1LL;
	int8_t x291 = -1;
	static volatile uint32_t x292 = 357659586U;
	volatile uint32_t t65 = 268995724U;

    t65 = (x289+((x290<=x291)+x292));

    if (t65 != 357659586U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x293 = -1LL;
	uint8_t x294 = 1U;
	uint8_t x295 = 11U;
	static int8_t x296 = -1;

    t66 = (x293+((x294<=x295)+x296));

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x297 = 72U;
	int16_t x298 = 131;
	int64_t x299 = -1LL;
	uint64_t x300 = 31883603024170006LLU;
	uint64_t t67 = 55883462738LLU;

    t67 = (x297+((x298<=x299)+x300));

    if (t67 != 31883603024170078LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x302 = INT32_MAX;
	int32_t x303 = INT32_MAX;
	uint16_t x304 = 18U;
	static volatile int32_t t68 = -5;

    t68 = (x301+((x302<=x303)+x304));

    if (t68 != -161056184) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x305 = -1;
	int64_t x306 = INT64_MAX;
	int32_t x307 = INT32_MAX;
	uint16_t x308 = UINT16_MAX;
	int32_t t69 = 1044553;

    t69 = (x305+((x306<=x307)+x308));

    if (t69 != 65534) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x309 = UINT64_MAX;
	int16_t x311 = INT16_MIN;
	volatile int16_t x312 = INT16_MIN;
	volatile uint64_t t70 = 88LLU;

    t70 = (x309+((x310<=x311)+x312));

    if (t70 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x313 = -1;
	uint16_t x314 = UINT16_MAX;
	uint32_t t71 = 33U;

    t71 = (x313+((x314<=x315)+x316));

    if (t71 != 66283532U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x318 = INT32_MIN;
	static uint64_t x319 = 116LLU;
	uint16_t x320 = 298U;
	volatile int32_t t72 = 2;

    t72 = (x317+((x318<=x319)+x320));

    if (t72 != 384) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x321 = 2915647LLU;
	int64_t x322 = 638475LL;
	volatile int64_t x324 = INT64_MIN;
	static uint64_t t73 = 5LLU;

    t73 = (x321+((x322<=x323)+x324));

    if (t73 != 9223372036857691455LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x329 = INT8_MIN;
	volatile int32_t x330 = 12;
	int8_t x331 = INT8_MIN;
	uint8_t x332 = UINT8_MAX;
	int32_t t74 = -567161;

    t74 = (x329+((x330<=x331)+x332));

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x337 = 0;
	volatile int8_t x338 = -1;
	uint8_t x340 = UINT8_MAX;
	int32_t t75 = -445537748;

    t75 = (x337+((x338<=x339)+x340));

    if (t75 != 256) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x341 = 5;
	uint64_t x342 = 6178LLU;
	static volatile int8_t x343 = INT8_MAX;
	int16_t x344 = INT16_MAX;
	volatile int32_t t76 = -4232619;

    t76 = (x341+((x342<=x343)+x344));

    if (t76 != 32772) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x345 = 0;
	volatile int32_t x346 = INT32_MAX;
	int16_t x347 = INT16_MAX;
	volatile int32_t x348 = INT32_MAX;
	static int32_t t77 = INT32_MAX;

    t77 = (x345+((x346<=x347)+x348));

    if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x349 = 9U;
	uint16_t x350 = UINT16_MAX;
	int64_t x351 = 991LL;
	uint16_t x352 = 3U;
	volatile int32_t t78 = -4;

    t78 = (x349+((x350<=x351)+x352));

    if (t78 != 12) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x353 = -993723;
	int32_t x354 = INT32_MIN;
	static int32_t x355 = INT32_MAX;
	static int32_t x356 = -1;

    t79 = (x353+((x354<=x355)+x356));

    if (t79 != -993723) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x357 = 31;
	int32_t x358 = -1;
	static int64_t x359 = -133250LL;
	int16_t x360 = -1;
	volatile int32_t t80 = 42339334;

    t80 = (x357+((x358<=x359)+x360));

    if (t80 != 30) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x363 = 13;
	volatile int8_t x364 = INT8_MAX;
	volatile int32_t t81 = -39417;

    t81 = (x361+((x362<=x363)+x364));

    if (t81 != 216) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x365 = 459945012LLU;
	int32_t x366 = INT32_MIN;
	uint8_t x367 = 91U;
	volatile uint64_t t82 = 264325650003309LLU;

    t82 = (x365+((x366<=x367)+x368));

    if (t82 != 459945012LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x369 = 0U;
	int8_t x370 = -34;
	int64_t x371 = INT64_MIN;
	volatile int16_t x372 = INT16_MAX;
	volatile int32_t t83 = -1;

    t83 = (x369+((x370<=x371)+x372));

    if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x378 = 3797;
	static int64_t x380 = INT64_MIN;
	volatile int64_t t84 = 298890824946818LL;

    t84 = (x377+((x378<=x379)+x380));

    if (t84 != -9223372028394844850LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x385 = INT64_MIN;
	static int8_t x387 = INT8_MIN;
	static int64_t x388 = 51620983LL;
	volatile int64_t t85 = 647LL;

    t85 = (x385+((x386<=x387)+x388));

    if (t85 != -9223372036803154825LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x389 = 3934U;
	int8_t x391 = -46;
	int64_t t86 = 23661502074115LL;

    t86 = (x389+((x390<=x391)+x392));

    if (t86 != 3933LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x397 = INT32_MIN;
	int32_t x398 = -1;
	uint64_t x400 = 9444470581017LLU;
	static volatile uint64_t t87 = 1843231156281645560LLU;

    t87 = (x397+((x398<=x399)+x400));

    if (t87 != 9442323097370LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x401 = -134495797753931796LL;
	uint16_t x403 = 22167U;
	int32_t x404 = -1;
	int64_t t88 = -10LL;

    t88 = (x401+((x402<=x403)+x404));

    if (t88 != -134495797753931797LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x405 = 3520U;
	int16_t x406 = INT16_MIN;
	volatile int16_t x407 = INT16_MIN;
	int64_t x408 = -1LL;
	int64_t t89 = 54323798585LL;

    t89 = (x405+((x406<=x407)+x408));

    if (t89 != 3520LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x409 = 25693;
	int16_t x410 = -6147;
	uint32_t x412 = 1386839U;
	static volatile uint32_t t90 = 149386U;

    t90 = (x409+((x410<=x411)+x412));

    if (t90 != 1412532U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x413 = -1;
	int16_t x414 = INT16_MAX;
	uint16_t x415 = 1734U;
	uint16_t x416 = 1U;
	int32_t t91 = -26968;

    t91 = (x413+((x414<=x415)+x416));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x418 = 17U;
	static int8_t x419 = -1;
	volatile int64_t t92 = 165971LL;

    t92 = (x417+((x418<=x419)+x420));

    if (t92 != -1655009440004LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x422 = -1;
	volatile int16_t x423 = -233;
	int32_t t93 = 74120879;

    t93 = (x421+((x422<=x423)+x424));

    if (t93 != -25) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x425 = -12661;
	volatile int32_t x426 = INT32_MIN;
	int16_t x427 = INT16_MIN;
	uint8_t x428 = 7U;
	volatile int32_t t94 = -194961899;

    t94 = (x425+((x426<=x427)+x428));

    if (t94 != -12653) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x429 = 7112LL;
	uint16_t x431 = 957U;
	static int8_t x432 = INT8_MIN;
	volatile int64_t t95 = -1712550LL;

    t95 = (x429+((x430<=x431)+x432));

    if (t95 != 6984LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x433 = -20188714;
	int64_t x435 = -1LL;
	volatile int32_t t96 = 7851;

    t96 = (x433+((x434<=x435)+x436));

    if (t96 != -20221481) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x437 = 6U;
	volatile int32_t x438 = -65504;
	int64_t x439 = INT64_MIN;
	int16_t x440 = -1;
	static int32_t t97 = 2068889;

    t97 = (x437+((x438<=x439)+x440));

    if (t97 != 5) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x443 = INT64_MIN;
	static int8_t x444 = -1;
	int32_t t98 = -5299058;

    t98 = (x441+((x442<=x443)+x444));

    if (t98 != 126) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x447 = UINT32_MAX;
	int64_t x448 = 2243632784694724LL;
	int64_t t99 = -1LL;

    t99 = (x445+((x446<=x447)+x448));

    if (t99 != 2243637079662020LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x449 = UINT16_MAX;
	uint32_t x451 = 130748798U;
	uint16_t x452 = UINT16_MAX;

    t100 = (x449+((x450<=x451)+x452));

    if (t100 != 131071) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x457 = 34U;
	int64_t x458 = INT64_MIN;
	int64_t x459 = 4216LL;
	static uint8_t x460 = 4U;
	static int32_t t101 = 139370;

    t101 = (x457+((x458<=x459)+x460));

    if (t101 != 39) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x461 = 1116937U;
	volatile int8_t x464 = INT8_MIN;
	volatile uint32_t t102 = 201146U;

    t102 = (x461+((x462<=x463)+x464));

    if (t102 != 1116809U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x465 = -1;
	static int64_t x466 = INT64_MIN;
	volatile uint64_t x467 = 2LLU;
	int32_t x468 = 14155144;

    t103 = (x465+((x466<=x467)+x468));

    if (t103 != 14155143) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x469 = 5;
	static uint32_t x470 = 260203977U;
	int16_t x471 = INT16_MIN;
	int16_t x472 = INT16_MIN;
	static volatile int32_t t104 = -523344;

    t104 = (x469+((x470<=x471)+x472));

    if (t104 != -32762) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x473 = INT16_MIN;
	int8_t x474 = 4;
	uint8_t x476 = 81U;
	static volatile int32_t t105 = 0;

    t105 = (x473+((x474<=x475)+x476));

    if (t105 != -32687) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x477 = 3311U;
	int32_t x478 = -2113328;
	int64_t x479 = 1332107LL;
	volatile uint8_t x480 = 1U;

    t106 = (x477+((x478<=x479)+x480));

    if (t106 != 3313U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x486 = INT8_MIN;
	static volatile int64_t x487 = INT64_MIN;
	volatile int8_t x488 = INT8_MIN;
	uint64_t t107 = 551538144492LLU;

    t107 = (x485+((x486<=x487)+x488));

    if (t107 != 893LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x490 = -1;
	int64_t x491 = INT64_MAX;
	uint16_t x492 = 1312U;
	static int32_t t108 = -1;

    t108 = (x489+((x490<=x491)+x492));

    if (t108 != 17343) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x494 = -1772;
	int16_t x495 = -16267;
	int32_t x496 = 776008624;
	volatile int32_t t109 = 30;

    t109 = (x493+((x494<=x495)+x496));

    if (t109 != 776008624) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x502 = UINT32_MAX;
	static volatile uint32_t x503 = 2U;
	int64_t x504 = -1LL;

    t110 = (x501+((x502<=x503)+x504));

    if (t110 != 126LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x505 = INT8_MAX;
	int64_t x506 = -1LL;
	int32_t x507 = INT32_MAX;
	int32_t x508 = 56;

    t111 = (x505+((x506<=x507)+x508));

    if (t111 != 184) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x519 = 7701766974LLU;
	uint8_t x520 = 27U;

    t112 = (x517+((x518<=x519)+x520));

    if (t112 != 44) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint32_t x521 = UINT32_MAX;
	uint32_t x523 = UINT32_MAX;
	int8_t x524 = 1;
	uint32_t t113 = 335877U;

    t113 = (x521+((x522<=x523)+x524));

    if (t113 != 1U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x525 = INT8_MAX;
	static int16_t x526 = INT16_MIN;
	uint8_t x527 = 5U;
	int8_t x528 = -1;

    t114 = (x525+((x526<=x527)+x528));

    if (t114 != 127) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x530 = 201U;
	volatile int64_t x531 = 0LL;
	int16_t x532 = INT16_MIN;
	int32_t t115 = 27134;

    t115 = (x529+((x530<=x531)+x532));

    if (t115 != -32699) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x533 = UINT8_MAX;
	int64_t x534 = -27407031LL;
	int32_t x535 = INT32_MAX;
	int64_t x536 = -5430859825468509LL;
	volatile int64_t t116 = 33LL;

    t116 = (x533+((x534<=x535)+x536));

    if (t116 != -5430859825468253LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x537 = INT16_MIN;
	volatile int32_t x538 = INT32_MIN;
	static uint16_t x540 = 9U;
	int32_t t117 = -389124084;

    t117 = (x537+((x538<=x539)+x540));

    if (t117 != -32758) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x543 = 63U;
	int64_t x544 = INT64_MIN;
	volatile int64_t t118 = -1LL;

    t118 = (x541+((x542<=x543)+x544));

    if (t118 != -9223372036854767432LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x545 = UINT8_MAX;
	volatile int64_t x546 = INT64_MAX;
	int8_t x547 = INT8_MIN;
	uint64_t x548 = 12954LLU;

    t119 = (x545+((x546<=x547)+x548));

    if (t119 != 13209LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x550 = -1;
	volatile uint32_t t120 = 4920U;

    t120 = (x549+((x550<=x551)+x552));

    if (t120 != 10900U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x553 = INT32_MIN;
	int64_t x555 = INT64_MIN;
	uint16_t x556 = 1887U;
	int32_t t121 = 9476;

    t121 = (x553+((x554<=x555)+x556));

    if (t121 != -2147481761) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x558 = UINT64_MAX;
	static volatile int8_t x559 = -1;
	static int32_t x560 = -1;
	volatile int32_t t122 = INT32_MIN;

    t122 = (x557+((x558<=x559)+x560));

    if (t122 != INT32_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x561 = 11;
	int32_t x562 = INT32_MAX;
	int64_t x563 = INT64_MAX;
	static int8_t x564 = INT8_MAX;
	int32_t t123 = 3606;

    t123 = (x561+((x562<=x563)+x564));

    if (t123 != 139) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x565 = UINT8_MAX;
	uint32_t x566 = 648466645U;
	static int16_t x567 = INT16_MIN;
	uint64_t x568 = UINT64_MAX;
	uint64_t t124 = 4349568257024258052LLU;

    t124 = (x565+((x566<=x567)+x568));

    if (t124 != 255LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x575 = 27278U;
	uint16_t x576 = 2U;

    t125 = (x573+((x574<=x575)+x576));

    if (t125 != -125) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x577 = INT64_MAX;
	uint8_t x579 = 59U;
	int8_t x580 = -1;
	volatile int64_t t126 = INT64_MAX;

    t126 = (x577+((x578<=x579)+x580));

    if (t126 != INT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x582 = UINT8_MAX;
	static int32_t x583 = -369514;
	static int8_t x584 = 16;
	int32_t t127 = 56003605;

    t127 = (x581+((x582<=x583)+x584));

    if (t127 != 65551) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x589 = -1;
	static int16_t x591 = -3079;
	int32_t t128 = 36;

    t128 = (x589+((x590<=x591)+x592));

    if (t128 != 65534) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x598 = 181U;
	volatile int16_t x599 = -1;
	volatile uint64_t t129 = 2157886564418955739LLU;

    t129 = (x597+((x598<=x599)+x600));

    if (t129 != 33528757254LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x606 = UINT64_MAX;
	uint8_t x608 = 2U;
	static uint64_t t130 = 15088181LLU;

    t130 = (x605+((x606<=x607)+x608));

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	volatile uint8_t x615 = 17U;
	static uint16_t x616 = 7U;
	int32_t t131 = -692807406;

    t131 = (x613+((x614<=x615)+x616));

    if (t131 != 262) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x618 = 16045U;
	static uint32_t x619 = 2U;
	int64_t x620 = 40LL;
	int64_t t132 = -71139161LL;

    t132 = (x617+((x618<=x619)+x620));

    if (t132 != 953LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x621 = INT64_MAX;
	int16_t x622 = -20;
	static int8_t x623 = 12;
	int8_t x624 = -1;
	static int64_t t133 = INT64_MAX;

    t133 = (x621+((x622<=x623)+x624));

    if (t133 != INT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x625 = INT8_MAX;
	static int8_t x626 = INT8_MAX;
	static volatile int32_t x628 = 1;
	volatile int32_t t134 = 35423;

    t134 = (x625+((x626<=x627)+x628));

    if (t134 != 129) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x629 = 6;
	uint64_t x631 = 1836266415110365131LLU;
	int64_t x632 = INT64_MIN;
	volatile int64_t t135 = -4680133124102LL;

    t135 = (x629+((x630<=x631)+x632));

    if (t135 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x634 = 6297U;
	static uint64_t x635 = UINT64_MAX;
	volatile int32_t x636 = -25259019;
	int32_t t136 = 5595;

    t136 = (x633+((x634<=x635)+x636));

    if (t136 != -25259011) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x641 = INT32_MAX;
	static int8_t x642 = INT8_MAX;
	volatile int64_t x643 = 275134885558203LL;
	static int64_t x644 = -1LL;
	volatile int64_t t137 = 214LL;

    t137 = (x641+((x642<=x643)+x644));

    if (t137 != 2147483647LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x645 = 0U;
	int16_t x646 = 174;
	int64_t x647 = 2903276453721LL;
	volatile int32_t t138 = -78;

    t138 = (x645+((x646<=x647)+x648));

    if (t138 != 49) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x649 = 3U;
	uint32_t x650 = UINT32_MAX;
	int32_t t139 = -7;

    t139 = (x649+((x650<=x651)+x652));

    if (t139 != 4) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x653 = 1319128123732451LLU;
	int8_t x654 = INT8_MIN;
	uint16_t x655 = 1U;
	int8_t x656 = -1;
	volatile uint64_t t140 = 87127LLU;

    t140 = (x653+((x654<=x655)+x656));

    if (t140 != 1319128123732451LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x658 = -11;
	int64_t x659 = -1LL;
	static volatile int8_t x660 = 1;

    t141 = (x657+((x658<=x659)+x660));

    if (t141 != -32766) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x661 = -1LL;
	static volatile int32_t x662 = INT32_MAX;
	static int64_t x663 = -253LL;
	int16_t x664 = INT16_MIN;
	volatile int64_t t142 = 664987482125LL;

    t142 = (x661+((x662<=x663)+x664));

    if (t142 != -32769LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x665 = 7526657589938LLU;
	int16_t x666 = -11;
	static int64_t x667 = INT64_MIN;
	static volatile uint64_t t143 = 95LLU;

    t143 = (x665+((x666<=x667)+x668));

    if (t143 != 7528805073585LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x669 = INT64_MIN;
	int32_t x670 = INT32_MIN;
	volatile uint64_t x672 = UINT64_MAX;
	volatile uint64_t t144 = 98493834041032463LLU;

    t144 = (x669+((x670<=x671)+x672));

    if (t144 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x673 = INT32_MIN;
	volatile int32_t x675 = -83332331;
	uint64_t x676 = UINT64_MAX;
	volatile uint64_t t145 = 0LLU;

    t145 = (x673+((x674<=x675)+x676));

    if (t145 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x678 = INT16_MAX;
	int32_t x680 = -12847;
	volatile uint64_t t146 = 31625272905358LLU;

    t146 = (x677+((x678<=x679)+x680));

    if (t146 != 18446744073709538770LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x681 = -1;
	int8_t x683 = -1;
	uint32_t x684 = 19U;
	static volatile uint32_t t147 = 129454730U;

    t147 = (x681+((x682<=x683)+x684));

    if (t147 != 19U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x689 = INT8_MAX;
	int8_t x690 = 12;
	volatile int64_t x691 = -1LL;
	volatile uint64_t x692 = 131503869949983LLU;
	uint64_t t148 = 2011869372LLU;

    t148 = (x689+((x690<=x691)+x692));

    if (t148 != 131503869950110LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x697 = INT16_MAX;
	uint8_t x698 = UINT8_MAX;
	uint8_t x699 = 11U;
	int64_t x700 = -10467342LL;
	int64_t t149 = -1628187740778105064LL;

    t149 = (x697+((x698<=x699)+x700));

    if (t149 != -10434575LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x702 = 11U;
	int32_t x704 = INT32_MIN;
	volatile int64_t t150 = -2LL;

    t150 = (x701+((x702<=x703)+x704));

    if (t150 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x705 = -1LL;
	int32_t x707 = INT32_MIN;
	int64_t x708 = -1LL;
	int64_t t151 = 117845294858773899LL;

    t151 = (x705+((x706<=x707)+x708));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x709 = INT64_MIN;
	int32_t x710 = -1;
	static int16_t x711 = -1;
	uint32_t x712 = 11U;
	volatile int64_t t152 = -713824885758555135LL;

    t152 = (x709+((x710<=x711)+x712));

    if (t152 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x713 = -1LL;
	static int8_t x714 = INT8_MAX;
	static int16_t x716 = -12;
	int64_t t153 = -1427773LL;

    t153 = (x713+((x714<=x715)+x716));

    if (t153 != -13LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x721 = 119218296U;
	int64_t x722 = -3319LL;
	static volatile int16_t x723 = INT16_MIN;
	static int8_t x724 = 0;
	volatile uint32_t t154 = 78774U;

    t154 = (x721+((x722<=x723)+x724));

    if (t154 != 119218296U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x725 = -2;
	int32_t x727 = -1;
	int8_t x728 = INT8_MIN;
	volatile int32_t t155 = -7235185;

    t155 = (x725+((x726<=x727)+x728));

    if (t155 != -129) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x729 = INT8_MAX;
	int16_t x730 = INT16_MAX;
	int32_t x731 = INT32_MAX;
	uint64_t x732 = UINT64_MAX;
	uint64_t t156 = 575516305459280941LLU;

    t156 = (x729+((x730<=x731)+x732));

    if (t156 != 127LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x733 = 26725299LLU;
	int8_t x734 = INT8_MIN;
	uint64_t x735 = 21LLU;
	int16_t x736 = 4945;
	uint64_t t157 = 91261782202846LLU;

    t157 = (x733+((x734<=x735)+x736));

    if (t157 != 26730244LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x737 = -26LL;
	uint16_t x738 = 317U;
	uint32_t x739 = 1U;
	volatile int16_t x740 = -1;
	volatile int64_t t158 = -92695LL;

    t158 = (x737+((x738<=x739)+x740));

    if (t158 != -27LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x741 = 369U;
	static int16_t x743 = 0;
	uint16_t x744 = UINT16_MAX;
	uint32_t t159 = 425739787U;

    t159 = (x741+((x742<=x743)+x744));

    if (t159 != 65905U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x745 = 1;
	uint32_t x746 = UINT32_MAX;
	uint8_t x747 = 27U;
	volatile int32_t t160 = -305541718;

    t160 = (x745+((x746<=x747)+x748));

    if (t160 != 65536) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x749 = 121U;
	uint8_t x750 = 19U;
	volatile uint64_t x751 = 3520464982565615557LLU;
	static int8_t x752 = INT8_MIN;
	int32_t t161 = -2325418;

    t161 = (x749+((x750<=x751)+x752));

    if (t161 != -6) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x753 = 14125318U;
	int64_t x754 = INT64_MAX;
	static volatile int64_t t162 = 157133119811LL;

    t162 = (x753+((x754<=x755)+x756));

    if (t162 != -9223372036840650490LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x757 = 12440U;
	int64_t x758 = INT64_MAX;
	volatile uint32_t x759 = 454U;
	int16_t x760 = INT16_MAX;
	static int32_t t163 = -1;

    t163 = (x757+((x758<=x759)+x760));

    if (t163 != 45207) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x761 = 345069614U;
	int16_t x762 = 2200;
	int8_t x763 = 0;
	int8_t x764 = INT8_MIN;

    t164 = (x761+((x762<=x763)+x764));

    if (t164 != 345069486U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x769 = INT8_MIN;
	uint32_t x771 = 858503U;
	int32_t t165 = -1;

    t165 = (x769+((x770<=x771)+x772));

    if (t165 != -255) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x777 = INT64_MIN;
	volatile int64_t x778 = INT64_MAX;
	int16_t x780 = 614;
	volatile int64_t t166 = -3LL;

    t166 = (x777+((x778<=x779)+x780));

    if (t166 != -9223372036854775194LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x781 = INT16_MAX;
	uint32_t x782 = UINT32_MAX;
	static volatile int32_t t167 = 251815;

    t167 = (x781+((x782<=x783)+x784));

    if (t167 != 47903) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x785 = 57;
	static volatile int32_t x787 = INT32_MIN;
	uint32_t x788 = 356U;
	volatile uint32_t t168 = 165718U;

    t168 = (x785+((x786<=x787)+x788));

    if (t168 != 413U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x793 = 114U;
	volatile int16_t x794 = -1;
	int64_t x795 = INT64_MIN;
	volatile int32_t x796 = -1;
	uint32_t t169 = 10U;

    t169 = (x793+((x794<=x795)+x796));

    if (t169 != 113U) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint8_t x797 = 4U;
	uint8_t x799 = 5U;
	static uint16_t x800 = UINT16_MAX;
	volatile int32_t t170 = 3;

    t170 = (x797+((x798<=x799)+x800));

    if (t170 != 65539) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x801 = 7395U;
	int32_t x802 = -53;
	int8_t x803 = -1;
	volatile int16_t x804 = INT16_MIN;
	volatile int32_t t171 = 407;

    t171 = (x801+((x802<=x803)+x804));

    if (t171 != -25372) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x805 = 423U;
	volatile int32_t x806 = INT32_MAX;
	int16_t x807 = 1804;
	volatile uint64_t t172 = 485721694LLU;

    t172 = (x805+((x806<=x807)+x808));

    if (t172 != 2046323649847405LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x809 = INT32_MIN;
	int8_t x810 = -8;
	uint16_t x811 = UINT16_MAX;
	static int16_t x812 = INT16_MAX;
	int32_t t173 = -1870;

    t173 = (x809+((x810<=x811)+x812));

    if (t173 != -2147450880) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x814 = UINT16_MAX;
	int8_t x815 = INT8_MIN;
	int32_t x816 = 301623;
	volatile int32_t t174 = -62;

    t174 = (x813+((x814<=x815)+x816));

    if (t174 != 301622) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x817 = INT32_MIN;
	uint8_t x818 = 0U;
	uint16_t x819 = UINT16_MAX;
	int8_t x820 = INT8_MAX;
	int32_t t175 = -147;

    t175 = (x817+((x818<=x819)+x820));

    if (t175 != -2147483520) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x821 = INT16_MAX;
	int8_t x822 = -1;
	volatile int16_t x823 = INT16_MAX;
	int64_t x824 = 85545LL;
	int64_t t176 = -64652687585130LL;

    t176 = (x821+((x822<=x823)+x824));

    if (t176 != 118313LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x825 = INT8_MIN;
	uint16_t x826 = 7U;
	volatile uint64_t x827 = UINT64_MAX;
	static volatile int16_t x828 = INT16_MAX;
	volatile int32_t t177 = -839821818;

    t177 = (x825+((x826<=x827)+x828));

    if (t177 != 32640) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x829 = 9739U;
	int32_t x831 = INT32_MIN;
	uint16_t x832 = 45U;
	static int32_t t178 = 2730;

    t178 = (x829+((x830<=x831)+x832));

    if (t178 != 9785) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x833 = INT8_MIN;
	int64_t x835 = 72879075LL;
	int8_t x836 = 0;
	int32_t t179 = 872844545;

    t179 = (x833+((x834<=x835)+x836));

    if (t179 != -127) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x837 = INT8_MIN;
	volatile uint64_t x838 = 1157LLU;
	volatile int32_t t180 = -10207;

    t180 = (x837+((x838<=x839)+x840));

    if (t180 != -32895) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x841 = INT64_MIN;
	static volatile int16_t x842 = INT16_MIN;
	int16_t x844 = INT16_MAX;
	int64_t t181 = 652433274LL;

    t181 = (x841+((x842<=x843)+x844));

    if (t181 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x845 = INT64_MIN;
	static uint16_t x846 = UINT16_MAX;
	uint64_t x847 = 0LLU;
	uint8_t x848 = 2U;

    t182 = (x845+((x846<=x847)+x848));

    if (t182 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x849 = 98U;
	volatile uint32_t x850 = 113860U;
	volatile int32_t x851 = INT32_MIN;
	int8_t x852 = -1;
	int32_t t183 = -614330;

    t183 = (x849+((x850<=x851)+x852));

    if (t183 != 98) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x853 = -123;
	int16_t x854 = -1;
	int64_t x855 = -273LL;
	int8_t x856 = 44;

    t184 = (x853+((x854<=x855)+x856));

    if (t184 != -79) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x857 = 11195575753LL;
	static uint16_t x858 = 1U;
	uint64_t x859 = 3LLU;
	volatile uint16_t x860 = 49U;
	int64_t t185 = -40LL;

    t185 = (x857+((x858<=x859)+x860));

    if (t185 != 11195575803LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x862 = 0;
	static uint8_t x863 = 3U;

    t186 = (x861+((x862<=x863)+x864));

    if (t186 != 137755450LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x865 = UINT64_MAX;
	volatile uint8_t x866 = UINT8_MAX;
	int8_t x867 = -1;
	int64_t x868 = -1LL;
	uint64_t t187 = 5710553606LLU;

    t187 = (x865+((x866<=x867)+x868));

    if (t187 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x873 = 1U;
	int8_t x874 = INT8_MAX;
	int16_t x875 = 985;
	uint32_t x876 = UINT32_MAX;

    t188 = (x873+((x874<=x875)+x876));

    if (t188 != 1U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x877 = UINT32_MAX;
	int8_t x878 = 0;
	uint32_t x879 = UINT32_MAX;
	int8_t x880 = 8;
	static uint32_t t189 = 748965U;

    t189 = (x877+((x878<=x879)+x880));

    if (t189 != 8U) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x881 = 1667U;
	uint64_t x882 = 164420189982046LLU;
	int32_t t190 = 1546128;

    t190 = (x881+((x882<=x883)+x884));

    if (t190 != 1669) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x885 = INT32_MIN;
	int16_t x886 = INT16_MIN;
	static volatile uint32_t x887 = UINT32_MAX;
	uint16_t x888 = UINT16_MAX;
	int32_t t191 = -21862891;

    t191 = (x885+((x886<=x887)+x888));

    if (t191 != -2147418112) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x889 = INT8_MIN;
	int8_t x890 = INT8_MIN;
	int8_t x891 = INT8_MIN;
	int64_t t192 = 2339387755705628151LL;

    t192 = (x889+((x890<=x891)+x892));

    if (t192 != -403794384521877686LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x894 = -14643;
	int16_t x896 = INT16_MIN;
	volatile int32_t t193 = -206725;

    t193 = (x893+((x894<=x895)+x896));

    if (t193 != 2147450879) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x897 = INT32_MIN;
	int32_t x899 = INT32_MIN;
	static uint8_t x900 = UINT8_MAX;
	int32_t t194 = 37;

    t194 = (x897+((x898<=x899)+x900));

    if (t194 != -2147483393) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x901 = INT8_MAX;
	static volatile int32_t x902 = 1304662;
	volatile uint16_t x904 = 3661U;
	int32_t t195 = -61410;

    t195 = (x901+((x902<=x903)+x904));

    if (t195 != 3788) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x905 = 33;
	uint8_t x906 = 12U;
	uint8_t x907 = 114U;
	static int16_t x908 = INT16_MAX;
	int32_t t196 = -147583;

    t196 = (x905+((x906<=x907)+x908));

    if (t196 != 32801) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x909 = INT16_MIN;
	static int64_t x910 = -1LL;
	int32_t x911 = INT32_MIN;
	static uint8_t x912 = 57U;
	volatile int32_t t197 = -49;

    t197 = (x909+((x910<=x911)+x912));

    if (t197 != -32711) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x913 = INT8_MIN;
	volatile int32_t x914 = INT32_MIN;
	static int8_t x915 = -1;
	int8_t x916 = 1;
	static volatile int32_t t198 = -670956;

    t198 = (x913+((x914<=x915)+x916));

    if (t198 != -126) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x918 = INT16_MAX;
	uint16_t x919 = UINT16_MAX;
	uint32_t x920 = 37871U;
	volatile uint32_t t199 = 44933U;

    t199 = (x917+((x918<=x919)+x920));

    if (t199 != 37873U) { NG(); } else { ; }
	
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

