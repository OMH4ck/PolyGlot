
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

static int16_t x10 = -1;
uint32_t x15 = UINT32_MAX;
int32_t x16 = INT32_MAX;
static int16_t x17 = INT16_MIN;
int64_t t3 = 4288LL;
int16_t x22 = INT16_MIN;
uint64_t x24 = 216957LLU;
int32_t x25 = INT32_MIN;
volatile uint8_t x26 = 104U;
int8_t x49 = INT8_MAX;
int64_t x51 = 20833LL;
volatile uint64_t x54 = UINT64_MAX;
int64_t t13 = 1010LL;
static int64_t x63 = INT64_MIN;
volatile int8_t x72 = -5;
static int64_t x81 = INT64_MIN;
int64_t t19 = INT64_MIN;
int32_t t20 = -546602835;
int64_t x92 = -1LL;
uint8_t x98 = 1U;
uint32_t x100 = 13797390U;
int8_t x106 = INT8_MIN;
volatile int32_t t24 = 4;
int8_t x110 = INT8_MIN;
uint32_t x112 = 9833567U;
volatile uint32_t t25 = 581779U;
static int32_t x113 = INT32_MIN;
volatile int64_t x120 = -2LL;
int16_t x126 = -509;
int16_t x132 = -14254;
int64_t x135 = -24557LL;
static int8_t x141 = -1;
volatile int64_t t33 = INT64_MIN;
volatile int16_t x158 = -619;
int32_t x159 = 1873008;
static int64_t t35 = 3064304LL;
int64_t t36 = -241178969845LL;
static uint32_t x166 = 9248U;
volatile int8_t x167 = INT8_MAX;
static int16_t x172 = -310;
volatile int64_t t38 = -78457LL;
int16_t x175 = INT16_MAX;
int32_t x176 = -145;
static uint32_t t41 = 968251752U;
uint32_t x195 = UINT32_MAX;
static volatile uint32_t t44 = 161647261U;
uint32_t x203 = 116U;
static int64_t x213 = INT64_MIN;
int32_t x215 = -455253294;
uint8_t x217 = 1U;
static int64_t t50 = 10LL;
int32_t x221 = INT32_MIN;
volatile int64_t t51 = 2764667145714LL;
volatile uint64_t x225 = UINT64_MAX;
static int16_t x227 = -162;
volatile uint64_t t52 = 257529LLU;
uint64_t x229 = 481LLU;
volatile int8_t x232 = 28;
int8_t x234 = INT8_MAX;
int32_t x236 = INT32_MIN;
int16_t x241 = 1001;
volatile int8_t x242 = INT8_MIN;
static uint16_t x250 = UINT16_MAX;
uint8_t x255 = 0U;
int16_t x266 = INT16_MAX;
int32_t t62 = -6982235;
int32_t x276 = INT32_MIN;
int32_t x278 = INT32_MAX;
int32_t x282 = INT32_MIN;
uint64_t x286 = 11946830404655LLU;
int8_t x288 = INT8_MAX;
int16_t x290 = -94;
uint64_t t67 = 345491952577960LLU;
uint8_t x297 = UINT8_MAX;
int8_t x298 = INT8_MAX;
static volatile int16_t x299 = 28;
int8_t x309 = 0;
uint16_t x310 = 1U;
int32_t x316 = 200;
volatile uint8_t x317 = 2U;
int8_t x318 = INT8_MAX;
int64_t x320 = 371LL;
static int16_t x330 = INT16_MIN;
uint8_t x331 = UINT8_MAX;
int32_t x338 = -1;
uint32_t t76 = 168U;
static uint32_t x342 = 1U;
static int64_t x348 = -103305512977613LL;
uint16_t x349 = 195U;
static int64_t x350 = INT64_MAX;
volatile int64_t t79 = -61199716316LL;
static int64_t x353 = INT64_MIN;
int32_t x354 = INT32_MIN;
int8_t x355 = INT8_MIN;
static uint64_t x360 = 19LLU;
volatile uint64_t t81 = 9067029255906033LLU;
int16_t x370 = -16;
uint64_t t83 = 1825036752LLU;
int64_t x379 = -1LL;
int16_t x381 = INT16_MIN;
uint64_t t85 = 2519384526188073871LLU;
uint8_t x389 = 2U;
volatile uint64_t x392 = 10978LLU;
uint64_t x395 = 6690437253521LLU;
static int8_t x400 = INT8_MIN;
uint32_t x404 = UINT32_MAX;
volatile uint32_t x407 = UINT32_MAX;
int64_t x429 = -247720700561092996LL;
static int16_t x430 = INT16_MIN;
uint32_t x433 = 1101733U;
int16_t x438 = INT16_MIN;
static volatile uint32_t t97 = 1237361604U;
int64_t x442 = INT64_MIN;
volatile int64_t t98 = 3443LL;
int32_t t99 = -1;
volatile int64_t t100 = 50611LL;
int8_t x460 = -62;
volatile uint64_t x465 = 295552LLU;
uint64_t t103 = 537588LLU;
int8_t x472 = INT8_MAX;
int64_t x478 = -7858029433LL;
static int8_t x480 = INT8_MIN;
int16_t x483 = 21;
int16_t x484 = INT16_MIN;
int8_t x495 = INT8_MIN;
int64_t x500 = INT64_MIN;
int64_t x502 = -1LL;
int64_t t112 = 1767387795738LL;
int16_t x513 = -1;
int32_t t116 = INT32_MIN;
int32_t t117 = 6148363;
int32_t x533 = 80198763;
uint16_t x550 = 2192U;
static uint64_t t122 = 5832519389LLU;
uint64_t x560 = 52325722LLU;
uint64_t t123 = 107369193272905586LLU;
volatile int32_t x561 = INT32_MIN;
volatile int32_t t124 = INT32_MIN;
int64_t x582 = 1604180342243644LL;
uint64_t t127 = 161232512794LLU;
static int8_t x599 = INT8_MIN;
volatile int64_t t131 = 48336422465LL;
int64_t x604 = 1266LL;
volatile int64_t t132 = -48331LL;
uint64_t x605 = 3909LLU;
int16_t x611 = 0;
static volatile uint64_t t136 = 150764LLU;
volatile uint64_t t139 = 4574027998546371LLU;
int16_t x637 = INT16_MAX;
int8_t x639 = INT8_MIN;
static int32_t x640 = INT32_MIN;
volatile int32_t t141 = -863805;
uint32_t x641 = 1660863U;
uint32_t x651 = 274842U;
volatile uint64_t t145 = 187478855087856LLU;
int32_t x657 = INT32_MAX;
volatile uint64_t t147 = 12789LLU;
int32_t x665 = -21952;
int32_t x669 = 875540;
volatile int8_t x670 = 1;
static uint32_t x677 = UINT32_MAX;
static uint64_t x679 = 1497781965352172710LLU;
int16_t x682 = -1;
int8_t x686 = -5;
int16_t x706 = INT16_MIN;
int64_t x715 = INT64_MAX;
volatile int64_t t158 = 118801984357LL;
int32_t x718 = INT32_MIN;
static volatile int64_t t160 = 67242419316150538LL;
int32_t x726 = INT32_MIN;
int32_t x732 = INT32_MAX;
volatile uint64_t t162 = 32LLU;
static uint8_t x733 = 6U;
int32_t t163 = 42;
int8_t x757 = 3;
static int8_t x758 = INT8_MIN;
int32_t x761 = INT32_MIN;
int32_t t168 = INT32_MIN;
uint32_t x768 = UINT32_MAX;
static uint64_t x773 = 455015990361103LLU;
int16_t x779 = INT16_MIN;
int16_t x786 = -6;
static uint16_t x790 = UINT16_MAX;
int64_t x794 = 134LL;
volatile int64_t x803 = -1LL;
uint64_t x805 = UINT64_MAX;
int32_t x808 = -1;
int16_t x819 = -1;
uint64_t x823 = 13371506295LLU;
static uint8_t x829 = 7U;
int8_t x832 = -2;
static int16_t x834 = INT16_MAX;
int64_t t184 = 0LL;
int8_t x841 = -1;
volatile int32_t x842 = -7;
int32_t x848 = 2005509;
int32_t x858 = INT32_MAX;
int32_t x862 = -1;
volatile int16_t x866 = -1;
volatile int16_t x868 = -11;
static volatile int16_t x870 = INT16_MIN;
volatile int64_t t191 = -2LL;
int64_t x878 = INT64_MIN;
static volatile int64_t x879 = -694350LL;
uint16_t x880 = 5U;
volatile int64_t t193 = 34747445LL;
int16_t x882 = -1;
volatile int64_t t195 = INT64_MIN;
static volatile uint16_t x899 = UINT16_MAX;
volatile int16_t x902 = INT16_MIN;
uint32_t x903 = 3U;
int8_t x904 = -1;


void f0(void) {
    	static uint8_t x1 = UINT8_MAX;
	int8_t x2 = INT8_MIN;
	int64_t x3 = INT64_MIN;
	volatile int32_t x4 = 0;
	volatile int64_t t0 = 2508213898758189812LL;

    t0 = (x1&((x2-x3)|x4));

    if (t0 != 128LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x9 = -1;
	volatile int16_t x11 = INT16_MIN;
	static int8_t x12 = -1;
	int32_t t1 = 54;

    t1 = (x9&((x10-x11)|x12));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x13 = -2347683134721144LL;
	int32_t x14 = 0;
	volatile int64_t t2 = 186LL;

    t2 = (x13&((x14-x15)|x16));

    if (t2 != 1823847304LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint16_t x18 = 13U;
	static int16_t x19 = INT16_MAX;
	int64_t x20 = -1LL;

    t3 = (x17&((x18-x19)|x20));

    if (t3 != -32768LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MIN;
	int64_t x23 = INT64_MIN;
	uint64_t t4 = 6791503298LLU;

    t4 = (x21&((x22-x23)|x24));

    if (t4 != 9223372036854763264LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x27 = 0;
	volatile int8_t x28 = INT8_MIN;
	volatile int32_t t5 = INT32_MIN;

    t5 = (x25&((x26-x27)|x28));

    if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x29 = 222;
	int16_t x30 = INT16_MAX;
	uint16_t x31 = 107U;
	int8_t x32 = INT8_MIN;
	int32_t t6 = 590;

    t6 = (x29&((x30-x31)|x32));

    if (t6 != 148) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = -1929LL;
	uint16_t x34 = UINT16_MAX;
	int8_t x35 = INT8_MIN;
	int32_t x36 = INT32_MAX;
	volatile int64_t t7 = 1021684175743LL;

    t7 = (x33&((x34-x35)|x36));

    if (t7 != 2147481719LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x37 = INT8_MIN;
	volatile uint32_t x38 = UINT32_MAX;
	static uint64_t x39 = 0LLU;
	int32_t x40 = INT32_MIN;
	static uint64_t t8 = 224647LLU;

    t8 = (x37&((x38-x39)|x40));

    if (t8 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint8_t x41 = 68U;
	volatile int8_t x42 = -1;
	uint8_t x43 = UINT8_MAX;
	int32_t x44 = INT32_MAX;
	int32_t t9 = 242;

    t9 = (x41&((x42-x43)|x44));

    if (t9 != 68) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x45 = INT64_MIN;
	uint32_t x46 = 42U;
	volatile uint16_t x47 = 3575U;
	int32_t x48 = -1;
	volatile int64_t t10 = -7424679117LL;

    t10 = (x45&((x46-x47)|x48));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x50 = 407U;
	int64_t x52 = 14LL;
	int64_t t11 = -25658LL;

    t11 = (x49&((x50-x51)|x52));

    if (t11 != 62LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MIN;
	static int8_t x55 = INT8_MIN;
	int16_t x56 = -27;
	uint64_t t12 = 0LLU;

    t12 = (x53&((x54-x55)|x56));

    if (t12 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MAX;
	static int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MAX;
	int64_t x60 = -1LL;

    t13 = (x57&((x58-x59)|x60));

    if (t13 != 2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x61 = -1LL;
	int64_t x62 = -11476LL;
	int64_t x64 = 2765762578060LL;
	volatile int64_t t14 = 2286378866353746066LL;

    t14 = (x61&((x62-x63)|x64));

    if (t14 != 9223372036854765484LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MIN;
	int8_t x66 = 12;
	uint32_t x67 = 25U;
	volatile int64_t x68 = INT64_MIN;
	int64_t t15 = 30122LL;

    t15 = (x65&((x66-x67)|x68));

    if (t15 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = INT8_MIN;
	uint64_t x70 = UINT64_MAX;
	static int32_t x71 = -1;
	volatile uint64_t t16 = 1335LLU;

    t16 = (x69&((x70-x71)|x72));

    if (t16 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = INT64_MIN;
	volatile int32_t x74 = 412770;
	uint32_t x75 = UINT32_MAX;
	int32_t x76 = INT32_MIN;
	int64_t t17 = -202550720LL;

    t17 = (x73&((x74-x75)|x76));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x77 = 5448532551612314265LLU;
	int16_t x78 = 25;
	int8_t x79 = INT8_MIN;
	int32_t x80 = -1;
	uint64_t t18 = 23173212863LLU;

    t18 = (x77&((x78-x79)|x80));

    if (t18 != 5448532551612314265LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x82 = -1;
	int16_t x83 = -12891;
	int32_t x84 = INT32_MIN;

    t19 = (x81&((x82-x83)|x84));

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 103U;
	int16_t x86 = INT16_MIN;
	int8_t x87 = -1;
	int32_t x88 = -1;

    t20 = (x85&((x86-x87)|x88));

    if (t20 != 103) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	static volatile int32_t x90 = INT32_MIN;
	int64_t x91 = -1LL;
	volatile int64_t t21 = -45271283911925LL;

    t21 = (x89&((x90-x91)|x92));

    if (t21 != -128LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = -1;
	int64_t x99 = -1542873004157221LL;
	volatile int64_t t22 = 81276946325852558LL;

    t22 = (x97&((x98-x99)|x100));

    if (t22 != 1542873012676910LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x101 = INT8_MIN;
	int16_t x102 = INT16_MIN;
	uint64_t x103 = 3139495254580338280LLU;
	int64_t x104 = INT64_MIN;
	uint64_t t23 = 59947570293LLU;

    t23 = (x101&((x102-x103)|x104));

    if (t23 != 15307248819129180544LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = INT8_MAX;
	volatile int16_t x107 = -2052;
	int32_t x108 = 12438797;

    t24 = (x105&((x106-x107)|x108));

    if (t24 != 13) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x109 = UINT32_MAX;
	static int32_t x111 = INT32_MIN;

    t25 = (x109&((x110-x111)|x112));

    if (t25 != 2147483615U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x114 = -438307669992LL;
	uint32_t x115 = UINT32_MAX;
	int32_t x116 = -1;
	static volatile int64_t t26 = 999LL;

    t26 = (x113&((x114-x115)|x116));

    if (t26 != -2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x117 = UINT64_MAX;
	int8_t x118 = INT8_MIN;
	int32_t x119 = INT32_MIN;
	static uint64_t t27 = 1288596855740LLU;

    t27 = (x117&((x118-x119)|x120));

    if (t27 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x121 = 56469111LLU;
	int8_t x122 = INT8_MIN;
	int16_t x123 = -252;
	int8_t x124 = INT8_MIN;
	uint64_t t28 = 5256381430605255LLU;

    t28 = (x121&((x122-x123)|x124));

    if (t28 != 56469108LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x125 = 6U;
	int64_t x127 = -1LL;
	int16_t x128 = 10;
	int64_t t29 = 28826LL;

    t29 = (x125&((x126-x127)|x128));

    if (t29 != 6LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x129 = 11U;
	static int32_t x130 = INT32_MAX;
	uint32_t x131 = 125424U;
	uint32_t t30 = 209368U;

    t30 = (x129&((x130-x131)|x132));

    if (t30 != 11U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x133 = -1;
	int64_t x134 = 533107461LL;
	volatile uint32_t x136 = UINT32_MAX;
	volatile int64_t t31 = 1LL;

    t31 = (x133&((x134-x135)|x136));

    if (t31 != 4294967295LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x142 = INT32_MIN;
	volatile int16_t x143 = -1;
	int16_t x144 = INT16_MAX;
	volatile int32_t t32 = 54693566;

    t32 = (x141&((x142-x143)|x144));

    if (t32 != -2147450881) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x145 = INT64_MIN;
	int32_t x146 = INT32_MIN;
	int8_t x147 = INT8_MIN;
	volatile uint8_t x148 = UINT8_MAX;

    t33 = (x145&((x146-x147)|x148));

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x149 = -1;
	uint16_t x150 = 739U;
	static uint64_t x151 = 11166LLU;
	int64_t x152 = INT64_MIN;
	volatile uint64_t t34 = 20154175650LLU;

    t34 = (x149&((x150-x151)|x152));

    if (t34 != 18446744073709541189LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x157 = -1LL;
	static volatile int32_t x160 = 1;

    t35 = (x157&((x158-x159)|x160));

    if (t35 != -1873627LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x161 = INT64_MAX;
	static uint32_t x162 = UINT32_MAX;
	volatile int8_t x163 = -1;
	uint8_t x164 = 88U;

    t36 = (x161&((x162-x163)|x164));

    if (t36 != 88LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x165 = 21U;
	uint8_t x168 = UINT8_MAX;
	volatile uint32_t t37 = 334224U;

    t37 = (x165&((x166-x167)|x168));

    if (t37 != 21U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x169 = 0;
	int64_t x170 = -1930LL;
	int16_t x171 = -1;

    t38 = (x169&((x170-x171)|x172));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x173 = 36U;
	volatile int8_t x174 = -1;
	uint32_t t39 = 782592149U;

    t39 = (x173&((x174-x175)|x176));

    if (t39 != 36U) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x177 = INT32_MAX;
	static int32_t x178 = -997503744;
	uint16_t x179 = 12U;
	int8_t x180 = 2;
	int32_t t40 = 265630;

    t40 = (x177&((x178-x179)|x180));

    if (t40 != 1149979894) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x181 = 111493318;
	int8_t x182 = -1;
	uint32_t x183 = 0U;
	int8_t x184 = INT8_MIN;

    t41 = (x181&((x182-x183)|x184));

    if (t41 != 111493318U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x185 = 2;
	volatile int64_t x186 = -1LL;
	uint16_t x187 = 6044U;
	uint16_t x188 = UINT16_MAX;
	static int64_t t42 = -2733348919645540285LL;

    t42 = (x185&((x186-x187)|x188));

    if (t42 != 2LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x189 = INT16_MIN;
	uint16_t x190 = 12U;
	int32_t x191 = INT32_MAX;
	int16_t x192 = 2;
	int32_t t43 = INT32_MIN;

    t43 = (x189&((x190-x191)|x192));

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x193 = -1;
	uint32_t x194 = 61U;
	int16_t x196 = INT16_MAX;

    t44 = (x193&((x194-x195)|x196));

    if (t44 != 32767U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x197 = 1U;
	int32_t x198 = 13986309;
	int8_t x199 = -1;
	static volatile int16_t x200 = INT16_MIN;
	volatile int32_t t45 = 101060656;

    t45 = (x197&((x198-x199)|x200));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x201 = INT32_MIN;
	uint16_t x202 = UINT16_MAX;
	uint8_t x204 = 11U;
	static volatile uint32_t t46 = 28U;

    t46 = (x201&((x202-x203)|x204));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x205 = UINT8_MAX;
	int32_t x206 = INT32_MIN;
	int8_t x207 = -1;
	int32_t x208 = INT32_MIN;
	volatile int32_t t47 = -16420350;

    t47 = (x205&((x206-x207)|x208));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x209 = INT32_MIN;
	uint8_t x210 = UINT8_MAX;
	static uint16_t x211 = 1895U;
	int32_t x212 = 0;
	int32_t t48 = INT32_MIN;

    t48 = (x209&((x210-x211)|x212));

    if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x214 = 1241;
	uint32_t x216 = 4043346U;
	static volatile int64_t t49 = -795325LL;

    t49 = (x213&((x214-x215)|x216));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x218 = -22LL;
	int16_t x219 = INT16_MIN;
	static uint32_t x220 = 21U;

    t50 = (x217&((x218-x219)|x220));

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x222 = 10LL;
	static int32_t x223 = 429065955;
	volatile int8_t x224 = -1;

    t51 = (x221&((x222-x223)|x224));

    if (t51 != -2147483648LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x226 = 722728096792LLU;
	int64_t x228 = INT64_MIN;

    t52 = (x225&((x226-x227)|x228));

    if (t52 != 9223372759582872762LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x230 = 1U;
	int16_t x231 = -1;
	static uint64_t t53 = 4695042003LLU;

    t53 = (x229&((x230-x231)|x232));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x233 = -1;
	int64_t x235 = -418209518058307664LL;
	int64_t t54 = 9482345499379LL;

    t54 = (x233&((x234-x235)|x236));

    if (t54 != -980582193LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x237 = 3963181LLU;
	int16_t x238 = INT16_MAX;
	int16_t x239 = INT16_MIN;
	volatile uint16_t x240 = 0U;
	uint64_t t55 = 32846LLU;

    t55 = (x237&((x238-x239)|x240));

    if (t55 != 31021LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x243 = INT32_MIN;
	int64_t x244 = INT64_MAX;
	int64_t t56 = 5959823LL;

    t56 = (x241&((x242-x243)|x244));

    if (t56 != 1001LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x245 = INT8_MIN;
	int16_t x246 = -1;
	int8_t x247 = -1;
	int16_t x248 = INT16_MIN;
	int32_t t57 = -46449;

    t57 = (x245&((x246-x247)|x248));

    if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x249 = INT32_MIN;
	int8_t x251 = -1;
	uint8_t x252 = UINT8_MAX;
	int32_t t58 = -13961544;

    t58 = (x249&((x250-x251)|x252));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x253 = -1;
	volatile int8_t x254 = INT8_MIN;
	uint64_t x256 = UINT64_MAX;
	uint64_t t59 = UINT64_MAX;

    t59 = (x253&((x254-x255)|x256));

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x261 = 14957113733LLU;
	int64_t x262 = 115052LL;
	uint64_t x263 = UINT64_MAX;
	static int16_t x264 = INT16_MIN;
	static volatile uint64_t t60 = 4945935300813LLU;

    t60 = (x261&((x262-x263)|x264));

    if (t60 != 14957101317LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x265 = INT16_MAX;
	uint32_t x267 = UINT32_MAX;
	int64_t x268 = INT64_MIN;
	volatile int64_t t61 = -4827975887LL;

    t61 = (x265&((x266-x267)|x268));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x269 = INT16_MIN;
	uint8_t x270 = 8U;
	volatile int16_t x271 = -439;
	static int32_t x272 = 3870812;

    t62 = (x269&((x270-x271)|x272));

    if (t62 != 3866624) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x273 = INT8_MIN;
	int32_t x274 = 673;
	int32_t x275 = -71449478;
	volatile int32_t t63 = -1;

    t63 = (x273&((x274-x275)|x276));

    if (t63 != -2076033536) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x277 = 19U;
	static volatile uint16_t x279 = 4015U;
	int16_t x280 = -6;
	volatile uint32_t t64 = 1U;

    t64 = (x277&((x278-x279)|x280));

    if (t64 != 18U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x281 = UINT32_MAX;
	int32_t x283 = INT32_MIN;
	uint16_t x284 = 12U;
	volatile uint32_t t65 = 80U;

    t65 = (x281&((x282-x283)|x284));

    if (t65 != 12U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x285 = INT64_MAX;
	uint32_t x287 = 3434U;
	static volatile uint64_t t66 = 17LLU;

    t66 = (x285&((x286-x287)|x288));

    if (t66 != 11946830401279LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x289 = INT32_MAX;
	uint64_t x291 = 186162246717LLU;
	int8_t x292 = -1;

    t67 = (x289&((x290-x291)|x292));

    if (t67 != 2147483647LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x293 = INT64_MAX;
	static int16_t x294 = INT16_MIN;
	int16_t x295 = 27;
	int64_t x296 = -82205168380600LL;
	int64_t t68 = -697695887756787LL;

    t68 = (x293&((x294-x295)|x296));

    if (t68 != 9223372036854775789LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x300 = INT64_MIN;
	volatile int64_t t69 = -1516LL;

    t69 = (x297&((x298-x299)|x300));

    if (t69 != 99LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x311 = 7201;
	static int8_t x312 = -17;
	static volatile int32_t t70 = 716;

    t70 = (x309&((x310-x311)|x312));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x313 = -1;
	volatile int32_t x314 = 19;
	volatile int64_t x315 = -1LL;
	static int64_t t71 = -467492086LL;

    t71 = (x313&((x314-x315)|x316));

    if (t71 != 220LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x319 = INT64_MAX;
	int64_t t72 = 3517008607764LL;

    t72 = (x317&((x318-x319)|x320));

    if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x325 = UINT32_MAX;
	volatile int16_t x326 = INT16_MAX;
	volatile int8_t x327 = INT8_MIN;
	int64_t x328 = INT64_MAX;
	int64_t t73 = 105167357LL;

    t73 = (x325&((x326-x327)|x328));

    if (t73 != 4294967295LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x329 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	int32_t t74 = 377250;

    t74 = (x329&((x330-x331)|x332));

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x333 = UINT32_MAX;
	static int8_t x334 = -1;
	volatile int32_t x335 = 380157729;
	static volatile int16_t x336 = INT16_MIN;
	uint32_t t75 = 26034U;

    t75 = (x333&((x334-x335)|x336));

    if (t75 != 4294951134U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x337 = 18273U;
	volatile int8_t x339 = 5;
	int32_t x340 = INT32_MIN;

    t76 = (x337&((x338-x339)|x340));

    if (t76 != 18272U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x341 = -259991;
	uint32_t x343 = 6816U;
	int8_t x344 = -62;
	static uint32_t t77 = 2316191U;

    t77 = (x341&((x342-x343)|x344));

    if (t77 != 4294707297U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x345 = UINT8_MAX;
	int64_t x346 = INT64_MIN;
	uint64_t x347 = 3LLU;
	uint64_t t78 = 6098878LLU;

    t78 = (x345&((x346-x347)|x348));

    if (t78 != 255LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x351 = INT8_MAX;
	int16_t x352 = -161;

    t79 = (x349&((x350-x351)|x352));

    if (t79 != 195LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x356 = 2;
	volatile int64_t t80 = INT64_MIN;

    t80 = (x353&((x354-x355)|x356));

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x357 = 1U;
	volatile uint8_t x358 = 5U;
	int64_t x359 = -1LL;

    t81 = (x357&((x358-x359)|x360));

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x369 = UINT8_MAX;
	static uint64_t x371 = UINT64_MAX;
	static int16_t x372 = -2716;
	volatile uint64_t t82 = 30945514LLU;

    t82 = (x369&((x370-x371)|x372));

    if (t82 != 245LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x373 = 524288870735945467LL;
	uint64_t x374 = 0LLU;
	static int16_t x375 = INT16_MIN;
	volatile int32_t x376 = -1;

    t83 = (x373&((x374-x375)|x376));

    if (t83 != 524288870735945467LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x377 = -1LL;
	int16_t x378 = INT16_MIN;
	uint32_t x380 = 515708994U;
	volatile int64_t t84 = 474469542LL;

    t84 = (x377&((x378-x379)|x380));

    if (t84 != -26557LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MAX;
	int32_t x384 = INT32_MIN;

    t85 = (x381&((x382-x383)|x384));

    if (t85 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x390 = -1;
	static volatile uint8_t x391 = 58U;
	uint64_t t86 = 409567139972719111LLU;

    t86 = (x389&((x390-x391)|x392));

    if (t86 != 2LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x393 = 47;
	int64_t x394 = 16804337LL;
	uint32_t x396 = 614835391U;
	volatile uint64_t t87 = 3339576LLU;

    t87 = (x393&((x394-x395)|x396));

    if (t87 != 47LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x397 = INT32_MAX;
	volatile uint64_t x398 = UINT64_MAX;
	int64_t x399 = INT64_MIN;
	volatile uint64_t t88 = 785670LLU;

    t88 = (x397&((x398-x399)|x400));

    if (t88 != 2147483647LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x401 = 60U;
	int16_t x402 = INT16_MIN;
	static int32_t x403 = -9851;
	static uint32_t t89 = 3545828U;

    t89 = (x401&((x402-x403)|x404));

    if (t89 != 60U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x405 = UINT64_MAX;
	volatile int64_t x406 = INT64_MAX;
	static int16_t x408 = INT16_MIN;
	volatile uint64_t t90 = 32650994LLU;

    t90 = (x405&((x406-x407)|x408));

    if (t90 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x413 = 21LLU;
	uint64_t x414 = 1666LLU;
	static int64_t x415 = INT64_MAX;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t91 = 1300152733650632811LLU;

    t91 = (x413&((x414-x415)|x416));

    if (t91 != 21LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x417 = -1;
	int32_t x418 = INT32_MIN;
	volatile int8_t x419 = INT8_MIN;
	uint8_t x420 = 1U;
	int32_t t92 = -122;

    t92 = (x417&((x418-x419)|x420));

    if (t92 != -2147483519) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x421 = 0;
	int16_t x422 = -35;
	int32_t x423 = INT32_MIN;
	int32_t x424 = INT32_MIN;
	int32_t t93 = -8872;

    t93 = (x421&((x422-x423)|x424));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x425 = INT16_MAX;
	int64_t x426 = 13377002854475204LL;
	int16_t x427 = INT16_MIN;
	volatile uint32_t x428 = UINT32_MAX;
	int64_t t94 = -147623719952095737LL;

    t94 = (x425&((x426-x427)|x428));

    if (t94 != 32767LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x431 = INT8_MAX;
	int32_t x432 = INT32_MIN;
	volatile int64_t t95 = -1LL;

    t95 = (x429&((x430-x431)|x432));

    if (t95 != -247720700561125888LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x434 = 1;
	int16_t x435 = -1;
	int16_t x436 = -1;
	volatile uint32_t t96 = 792U;

    t96 = (x433&((x434-x435)|x436));

    if (t96 != 1101733U) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x437 = UINT32_MAX;
	volatile int32_t x439 = -980;
	volatile uint32_t x440 = 1U;

    t97 = (x437&((x438-x439)|x440));

    if (t97 != 4294935509U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x441 = INT32_MAX;
	int16_t x443 = INT16_MIN;
	int32_t x444 = INT32_MAX;

    t98 = (x441&((x442-x443)|x444));

    if (t98 != 2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x445 = 3153;
	uint8_t x446 = 2U;
	volatile int16_t x447 = INT16_MIN;
	uint8_t x448 = 1U;

    t99 = (x445&((x446-x447)|x448));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x449 = 5406;
	int32_t x450 = -1;
	int64_t x451 = -66453283820568LL;
	int32_t x452 = 1;

    t100 = (x449&((x450-x451)|x452));

    if (t100 != 5142LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x457 = 37823LLU;
	uint16_t x458 = 7788U;
	uint16_t x459 = 1230U;
	uint64_t t101 = 3424448801229LLU;

    t101 = (x457&((x458-x459)|x460));

    if (t101 != 37790LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x461 = -1;
	int16_t x462 = -881;
	volatile uint64_t x463 = UINT64_MAX;
	int32_t x464 = 472595993;
	volatile uint64_t t102 = 3312LLU;

    t102 = (x461&((x462-x463)|x464));

    if (t102 != 18446744073709551257LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x466 = INT8_MIN;
	uint64_t x467 = 2159289539017887LLU;
	int16_t x468 = 6494;

    t103 = (x465&((x466-x467)|x468));

    if (t103 != 262784LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x469 = INT8_MAX;
	static uint16_t x470 = 27U;
	uint64_t x471 = 4239279035263488781LLU;
	static volatile uint64_t t104 = 3984LLU;

    t104 = (x469&((x470-x471)|x472));

    if (t104 != 127LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x477 = INT64_MAX;
	uint32_t x479 = 5441148U;
	static volatile int64_t t105 = -8800257218006LL;

    t105 = (x477&((x478-x479)|x480));

    if (t105 != 9223372036854775691LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x481 = INT32_MAX;
	uint32_t x482 = UINT32_MAX;
	volatile uint32_t t106 = 2573199U;

    t106 = (x481&((x482-x483)|x484));

    if (t106 != 2147483626U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x485 = UINT16_MAX;
	uint64_t x486 = 99247321823LLU;
	int8_t x487 = INT8_MIN;
	static uint16_t x488 = 1014U;
	uint64_t t107 = 252682045LLU;

    t107 = (x485&((x486-x487)|x488));

    if (t107 != 62463LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x489 = UINT16_MAX;
	static volatile uint16_t x490 = 0U;
	int32_t x491 = INT32_MAX;
	int32_t x492 = INT32_MIN;
	int32_t t108 = 83;

    t108 = (x489&((x490-x491)|x492));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x493 = 18395U;
	int8_t x494 = INT8_MIN;
	int16_t x496 = -1;
	int32_t t109 = 2825;

    t109 = (x493&((x494-x495)|x496));

    if (t109 != 18395) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x497 = 4194156U;
	static int8_t x498 = -1;
	uint64_t x499 = 6661009273789650812LLU;
	volatile uint64_t t110 = 5332435LLU;

    t110 = (x497&((x498-x499)|x500));

    if (t110 != 3106816LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x501 = UINT64_MAX;
	int8_t x503 = 1;
	int32_t x504 = INT32_MAX;
	uint64_t t111 = UINT64_MAX;

    t111 = (x501&((x502-x503)|x504));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x505 = INT8_MIN;
	volatile uint32_t x506 = 929063251U;
	static int64_t x507 = 710727LL;
	volatile int64_t x508 = INT64_MIN;

    t112 = (x505&((x506-x507)|x508));

    if (t112 != -9223372035926423296LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x509 = INT32_MIN;
	static uint16_t x510 = 22U;
	volatile uint8_t x511 = 7U;
	volatile int64_t x512 = INT64_MAX;
	int64_t t113 = 109192033805LL;

    t113 = (x509&((x510-x511)|x512));

    if (t113 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x514 = -30;
	static uint16_t x515 = UINT16_MAX;
	static int16_t x516 = -98;
	volatile int32_t t114 = 9391;

    t114 = (x513&((x514-x515)|x516));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x517 = 3058;
	static int16_t x518 = INT16_MIN;
	volatile uint16_t x519 = UINT16_MAX;
	static int32_t x520 = INT32_MAX;
	int32_t t115 = 3714192;

    t115 = (x517&((x518-x519)|x520));

    if (t115 != 3058) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x521 = INT8_MIN;
	int32_t x522 = INT32_MIN;
	static int32_t x523 = -1;
	int8_t x524 = INT8_MAX;

    t116 = (x521&((x522-x523)|x524));

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x525 = INT8_MAX;
	int16_t x526 = INT16_MAX;
	int32_t x527 = -2231;
	int8_t x528 = 0;

    t117 = (x525&((x526-x527)|x528));

    if (t117 != 54) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x534 = 8000407761310751874LLU;
	volatile uint32_t x535 = 11U;
	int32_t x536 = INT32_MIN;
	static uint64_t t118 = 92295373142910279LLU;

    t118 = (x533&((x534-x535)|x536));

    if (t118 != 67411043LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x537 = UINT64_MAX;
	uint64_t x538 = UINT64_MAX;
	volatile int8_t x539 = INT8_MAX;
	uint8_t x540 = 66U;
	volatile uint64_t t119 = 729602415656LLU;

    t119 = (x537&((x538-x539)|x540));

    if (t119 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x545 = 10;
	uint64_t x546 = 1882LLU;
	int64_t x547 = INT64_MIN;
	int8_t x548 = -1;
	volatile uint64_t t120 = 54LLU;

    t120 = (x545&((x546-x547)|x548));

    if (t120 != 10LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x549 = INT16_MAX;
	static int16_t x551 = INT16_MIN;
	int64_t x552 = 1128769894603009167LL;
	int64_t t121 = 122130LL;

    t121 = (x549&((x550-x551)|x552));

    if (t121 != 11423LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x553 = 68LLU;
	int8_t x554 = -29;
	uint16_t x555 = UINT16_MAX;
	int8_t x556 = -5;

    t122 = (x553&((x554-x555)|x556));

    if (t122 != 68LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x557 = 55831633180190728LLU;
	volatile int8_t x558 = 1;
	volatile int8_t x559 = -1;

    t123 = (x557&((x558-x559)|x560));

    if (t123 != 34498568LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x562 = INT8_MIN;
	int8_t x563 = -1;
	volatile int32_t x564 = -1;

    t124 = (x561&((x562-x563)|x564));

    if (t124 != INT32_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x565 = INT8_MIN;
	uint16_t x566 = UINT16_MAX;
	int32_t x567 = -4708981;
	int32_t x568 = -4585559;
	static int32_t t125 = -49202;

    t125 = (x565&((x566-x567)|x568));

    if (t125 != -336000) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x573 = 20U;
	int8_t x574 = -8;
	uint32_t x575 = 2U;
	static uint32_t x576 = 4759U;
	volatile uint32_t t126 = 7331740U;

    t126 = (x573&((x574-x575)|x576));

    if (t126 != 20U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x581 = 542599634LLU;
	uint8_t x583 = 38U;
	int16_t x584 = 5609;

    t127 = (x581&((x582-x583)|x584));

    if (t127 != 5505490LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x585 = -22;
	int32_t x586 = 28702;
	static volatile uint64_t x587 = UINT64_MAX;
	uint32_t x588 = 67U;
	uint64_t t128 = 4271LLU;

    t128 = (x585&((x586-x587)|x588));

    if (t128 != 28746LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x589 = 143821691U;
	uint64_t x590 = 48654374096953LLU;
	int16_t x591 = -1;
	uint32_t x592 = UINT32_MAX;
	volatile uint64_t t129 = 18505268LLU;

    t129 = (x589&((x590-x591)|x592));

    if (t129 != 143821691LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x593 = -1;
	int8_t x594 = INT8_MIN;
	static int16_t x595 = INT16_MIN;
	int16_t x596 = -1;
	volatile int32_t t130 = 634593696;

    t130 = (x593&((x594-x595)|x596));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x597 = 30321639LL;
	int8_t x598 = INT8_MIN;
	int16_t x600 = 7886;

    t131 = (x597&((x598-x599)|x600));

    if (t131 != 2758LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x601 = INT16_MIN;
	int8_t x602 = INT8_MIN;
	int16_t x603 = 14;

    t132 = (x601&((x602-x603)|x604));

    if (t132 != -32768LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x606 = UINT8_MAX;
	uint64_t x607 = 57619540729LLU;
	static int16_t x608 = INT16_MIN;
	uint64_t t133 = 46190560518682683LLU;

    t133 = (x605&((x606-x607)|x608));

    if (t133 != 1540LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x609 = -1;
	uint32_t x610 = UINT32_MAX;
	int32_t x612 = INT32_MIN;
	static volatile uint32_t t134 = UINT32_MAX;

    t134 = (x609&((x610-x611)|x612));

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x613 = INT64_MAX;
	int16_t x614 = 38;
	static uint32_t x615 = 0U;
	int64_t x616 = INT64_MIN;
	int64_t t135 = -510LL;

    t135 = (x613&((x614-x615)|x616));

    if (t135 != 38LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x617 = 964432LLU;
	int16_t x618 = -1;
	volatile uint16_t x619 = UINT16_MAX;
	static uint16_t x620 = 122U;

    t136 = (x617&((x618-x619)|x620));

    if (t136 != 917584LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x621 = INT32_MIN;
	uint8_t x622 = UINT8_MAX;
	uint8_t x623 = 3U;
	uint64_t x624 = 37285LLU;
	volatile uint64_t t137 = 2708724723273758075LLU;

    t137 = (x621&((x622-x623)|x624));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x625 = -355395050;
	static int16_t x626 = 0;
	int8_t x627 = -1;
	static volatile int32_t x628 = 120083061;
	int32_t t138 = 807040;

    t138 = (x625&((x626-x627)|x628));

    if (t138 != 33559060) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x629 = 32;
	uint8_t x630 = UINT8_MAX;
	uint64_t x631 = UINT64_MAX;
	int8_t x632 = INT8_MIN;

    t139 = (x629&((x630-x631)|x632));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x633 = 119LLU;
	int64_t x634 = -1LL;
	static int32_t x635 = INT32_MIN;
	uint16_t x636 = UINT16_MAX;
	uint64_t t140 = 59280220888LLU;

    t140 = (x633&((x634-x635)|x636));

    if (t140 != 119LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x638 = 0;

    t141 = (x637&((x638-x639)|x640));

    if (t141 != 128) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x642 = -1;
	static volatile int16_t x643 = INT16_MIN;
	uint16_t x644 = 7381U;
	static volatile uint32_t t142 = 163202U;

    t142 = (x641&((x642-x643)|x644));

    if (t142 != 22463U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x645 = INT8_MIN;
	volatile int16_t x646 = INT16_MIN;
	uint32_t x647 = 2048U;
	int16_t x648 = -911;
	static uint32_t t143 = 296515U;

    t143 = (x645&((x646-x647)|x648));

    if (t143 != 4294966272U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x649 = UINT8_MAX;
	int16_t x650 = INT16_MIN;
	static uint8_t x652 = UINT8_MAX;
	static uint32_t t144 = 6522562U;

    t144 = (x649&((x650-x651)|x652));

    if (t144 != 255U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x653 = 3139117LLU;
	int64_t x654 = -2340895750625800LL;
	int8_t x655 = INT8_MAX;
	int32_t x656 = 119;

    t145 = (x653&((x654-x655)|x656));

    if (t145 != 255021LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x658 = -1;
	uint64_t x659 = UINT64_MAX;
	int16_t x660 = -1;
	uint64_t t146 = 249708556404LLU;

    t146 = (x657&((x658-x659)|x660));

    if (t146 != 2147483647LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x661 = UINT64_MAX;
	volatile int8_t x662 = -1;
	volatile uint8_t x663 = 19U;
	static int16_t x664 = INT16_MIN;

    t147 = (x661&((x662-x663)|x664));

    if (t147 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x666 = UINT16_MAX;
	volatile int64_t x667 = INT64_MAX;
	int32_t x668 = -1;
	static int64_t t148 = -219LL;

    t148 = (x665&((x666-x667)|x668));

    if (t148 != -21952LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x671 = 13482U;
	static volatile uint16_t x672 = 484U;
	uint32_t t149 = 93795890U;

    t149 = (x669&((x670-x671)|x672));

    if (t149 != 870420U) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x673 = 1;
	static uint64_t x674 = UINT64_MAX;
	int8_t x675 = -2;
	uint16_t x676 = UINT16_MAX;
	uint64_t t150 = 4171068737938LLU;

    t150 = (x673&((x674-x675)|x676));

    if (t150 != 1LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x678 = 28U;
	volatile int64_t x680 = INT64_MIN;
	volatile uint64_t t151 = 133983176LLU;

    t151 = (x677&((x678-x679)|x680));

    if (t151 != 4096951158LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x681 = INT64_MIN;
	int64_t x683 = 3691967955LL;
	static volatile uint64_t x684 = 1LLU;
	volatile uint64_t t152 = 2459359LLU;

    t152 = (x681&((x682-x683)|x684));

    if (t152 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x685 = -1;
	static uint16_t x687 = UINT16_MAX;
	int32_t x688 = INT32_MIN;
	int32_t t153 = -232752;

    t153 = (x685&((x686-x687)|x688));

    if (t153 != -65540) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x693 = 31U;
	volatile int32_t x694 = -1;
	uint64_t x695 = UINT64_MAX;
	int64_t x696 = 227230005LL;
	static volatile uint64_t t154 = 1845990851677710458LLU;

    t154 = (x693&((x694-x695)|x696));

    if (t154 != 21LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x701 = INT32_MIN;
	int8_t x702 = -3;
	static volatile int16_t x703 = 2648;
	uint8_t x704 = 0U;
	volatile int32_t t155 = INT32_MIN;

    t155 = (x701&((x702-x703)|x704));

    if (t155 != INT32_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x705 = INT32_MIN;
	int8_t x707 = INT8_MIN;
	int32_t x708 = INT32_MIN;
	volatile int32_t t156 = INT32_MIN;

    t156 = (x705&((x706-x707)|x708));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x709 = INT32_MIN;
	static volatile int32_t x710 = -111381;
	int64_t x711 = 0LL;
	int64_t x712 = 119211840892LL;
	volatile int64_t t157 = 4012346794719806LL;

    t157 = (x709&((x710-x711)|x712));

    if (t157 != -2147483648LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint8_t x713 = 15U;
	uint16_t x714 = 2U;
	static int64_t x716 = -1LL;

    t158 = (x713&((x714-x715)|x716));

    if (t158 != 15LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x717 = INT8_MIN;
	int64_t x719 = INT64_MIN;
	static int8_t x720 = -1;
	int64_t t159 = -183310779081LL;

    t159 = (x717&((x718-x719)|x720));

    if (t159 != -128LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x721 = INT16_MAX;
	int16_t x722 = INT16_MAX;
	uint16_t x723 = UINT16_MAX;
	int64_t x724 = -43016295309LL;

    t160 = (x721&((x722-x723)|x724));

    if (t160 != 27763LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x725 = INT8_MIN;
	uint64_t x727 = 108198LLU;
	int32_t x728 = INT32_MIN;
	volatile uint64_t t161 = 9444007218LLU;

    t161 = (x725&((x726-x727)|x728));

    if (t161 != 18446744073709443328LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x729 = INT16_MAX;
	uint64_t x730 = UINT64_MAX;
	volatile int16_t x731 = INT16_MIN;

    t162 = (x729&((x730-x731)|x732));

    if (t162 != 32767LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x734 = -1;
	int16_t x735 = INT16_MIN;
	static int8_t x736 = 55;

    t163 = (x733&((x734-x735)|x736));

    if (t163 != 6) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x741 = INT64_MIN;
	volatile int8_t x742 = INT8_MIN;
	int8_t x743 = 26;
	uint64_t x744 = 2646947722LLU;
	static volatile uint64_t t164 = 376303LLU;

    t164 = (x741&((x742-x743)|x744));

    if (t164 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x749 = 3;
	int8_t x750 = INT8_MIN;
	static volatile uint8_t x751 = 7U;
	volatile uint16_t x752 = 11531U;
	volatile int32_t t165 = -4951514;

    t165 = (x749&((x750-x751)|x752));

    if (t165 != 3) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x753 = -1;
	int32_t x754 = INT32_MIN;
	int32_t x755 = INT32_MIN;
	static uint16_t x756 = UINT16_MAX;
	volatile int32_t t166 = -21;

    t166 = (x753&((x754-x755)|x756));

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x759 = INT16_MAX;
	volatile int64_t x760 = INT64_MIN;
	static int64_t t167 = -48444157200130566LL;

    t167 = (x757&((x758-x759)|x760));

    if (t167 != 1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x762 = INT8_MIN;
	uint8_t x763 = 114U;
	int16_t x764 = -178;

    t168 = (x761&((x762-x763)|x764));

    if (t168 != INT32_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x765 = 8711185573284LL;
	int16_t x766 = 1003;
	uint8_t x767 = UINT8_MAX;
	int64_t t169 = 15LL;

    t169 = (x765&((x766-x767)|x768));

    if (t169 != 991896996LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x769 = INT32_MAX;
	uint64_t x770 = 2029583970232LLU;
	volatile int64_t x771 = -267818480160774539LL;
	int32_t x772 = -1;
	volatile uint64_t t170 = 701328456LLU;

    t170 = (x769&((x770-x771)|x772));

    if (t170 != 2147483647LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x774 = UINT64_MAX;
	int64_t x775 = INT64_MAX;
	static int32_t x776 = 2;
	volatile uint64_t t171 = 413777711822LLU;

    t171 = (x773&((x774-x775)|x776));

    if (t171 != 2LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x777 = -1;
	static uint8_t x778 = UINT8_MAX;
	uint64_t x780 = UINT64_MAX;
	static uint64_t t172 = UINT64_MAX;

    t172 = (x777&((x778-x779)|x780));

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x781 = UINT32_MAX;
	volatile uint32_t x782 = 3U;
	int64_t x783 = 17472LL;
	int32_t x784 = 127473462;
	int64_t t173 = 19362351313871571LL;

    t173 = (x781&((x782-x783)|x784));

    if (t173 != 4294950903LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x785 = 1;
	int32_t x787 = 65200867;
	uint64_t x788 = UINT64_MAX;
	volatile uint64_t t174 = 11001LLU;

    t174 = (x785&((x786-x787)|x788));

    if (t174 != 1LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x789 = INT16_MIN;
	uint64_t x791 = 113244160412678LLU;
	int64_t x792 = 245115116573570221LL;
	static uint64_t t175 = 46060LLU;

    t175 = (x789&((x790-x791)|x792));

    if (t175 != 18446704385502117888LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x793 = UINT64_MAX;
	int8_t x795 = INT8_MAX;
	int64_t x796 = INT64_MIN;
	volatile uint64_t t176 = 0LLU;

    t176 = (x793&((x794-x795)|x796));

    if (t176 != 9223372036854775815LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x801 = INT64_MIN;
	volatile uint16_t x802 = 6U;
	int64_t x804 = INT64_MAX;
	volatile int64_t t177 = -11079LL;

    t177 = (x801&((x802-x803)|x804));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x806 = INT32_MIN;
	volatile int8_t x807 = INT8_MIN;
	volatile uint64_t t178 = UINT64_MAX;

    t178 = (x805&((x806-x807)|x808));

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x809 = -1;
	static uint8_t x810 = 0U;
	static uint16_t x811 = UINT16_MAX;
	uint32_t x812 = 4594U;
	volatile uint32_t t179 = 240U;

    t179 = (x809&((x810-x811)|x812));

    if (t179 != 4294906355U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x817 = -51;
	int64_t x818 = -91290423915390765LL;
	volatile uint16_t x820 = UINT16_MAX;
	int64_t t180 = -4587776809892708995LL;

    t180 = (x817&((x818-x819)|x820));

    if (t180 != -91290423915380787LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x821 = INT16_MIN;
	int16_t x822 = 13810;
	int8_t x824 = INT8_MIN;
	static volatile uint64_t t181 = 153245608LLU;

    t181 = (x821&((x822-x823)|x824));

    if (t181 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x825 = UINT64_MAX;
	uint64_t x826 = 22229LLU;
	int16_t x827 = INT16_MIN;
	int8_t x828 = INT8_MIN;
	volatile uint64_t t182 = 8104488LLU;

    t182 = (x825&((x826-x827)|x828));

    if (t182 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x830 = INT64_MIN;
	static int32_t x831 = INT32_MIN;
	int64_t t183 = -1035089350220559822LL;

    t183 = (x829&((x830-x831)|x832));

    if (t183 != 6LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x833 = 2U;
	static int64_t x835 = INT64_MAX;
	static int64_t x836 = 0LL;

    t184 = (x833&((x834-x835)|x836));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x843 = 6;
	int16_t x844 = INT16_MIN;
	volatile int32_t t185 = -3;

    t185 = (x841&((x842-x843)|x844));

    if (t185 != -13) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x845 = INT16_MIN;
	uint16_t x846 = 4U;
	static uint64_t x847 = UINT64_MAX;
	static uint64_t t186 = 713960183840145LLU;

    t186 = (x845&((x846-x847)|x848));

    if (t186 != 1998848LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x849 = INT64_MIN;
	int32_t x850 = -1;
	int16_t x851 = -1;
	int32_t x852 = INT32_MIN;
	static volatile int64_t t187 = INT64_MIN;

    t187 = (x849&((x850-x851)|x852));

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x857 = 20186U;
	uint32_t x859 = 5330079U;
	uint32_t x860 = UINT32_MAX;
	volatile uint32_t t188 = 81636632U;

    t188 = (x857&((x858-x859)|x860));

    if (t188 != 20186U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x861 = INT8_MIN;
	static uint8_t x863 = 6U;
	int16_t x864 = -1;
	volatile int32_t t189 = 9;

    t189 = (x861&((x862-x863)|x864));

    if (t189 != -128) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x865 = UINT16_MAX;
	int8_t x867 = 1;
	volatile int32_t t190 = -413135;

    t190 = (x865&((x866-x867)|x868));

    if (t190 != 65535) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x869 = INT16_MAX;
	int64_t x871 = INT64_MIN;
	int32_t x872 = INT32_MIN;

    t191 = (x869&((x870-x871)|x872));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x873 = INT64_MIN;
	int16_t x874 = -1;
	int32_t x875 = INT32_MIN;
	int64_t x876 = INT64_MIN;
	int64_t t192 = INT64_MIN;

    t192 = (x873&((x874-x875)|x876));

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x877 = 0U;

    t193 = (x877&((x878-x879)|x880));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x881 = -1;
	int8_t x883 = -1;
	static int64_t x884 = INT64_MIN;
	volatile int64_t t194 = INT64_MIN;

    t194 = (x881&((x882-x883)|x884));

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x885 = INT64_MIN;
	int8_t x886 = INT8_MIN;
	int32_t x887 = 1117817;
	int64_t x888 = -68810300027664LL;

    t195 = (x885&((x886-x887)|x888));

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x893 = INT8_MAX;
	int8_t x894 = -1;
	uint64_t x895 = 8522949425682LLU;
	volatile int16_t x896 = -1;
	uint64_t t196 = 3904685558784LLU;

    t196 = (x893&((x894-x895)|x896));

    if (t196 != 127LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x897 = INT16_MIN;
	volatile uint16_t x898 = UINT16_MAX;
	volatile uint64_t x900 = 0LLU;
	uint64_t t197 = 1197750317738829LLU;

    t197 = (x897&((x898-x899)|x900));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x901 = INT32_MIN;
	uint32_t t198 = 6U;

    t198 = (x901&((x902-x903)|x904));

    if (t198 != 2147483648U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x905 = INT64_MIN;
	static int64_t x906 = 2LL;
	volatile uint32_t x907 = UINT32_MAX;
	int16_t x908 = 0;
	int64_t t199 = INT64_MIN;

    t199 = (x905&((x906-x907)|x908));

    if (t199 != INT64_MIN) { NG(); } else { ; }
	
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

