
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

static uint16_t x3 = 4953U;
int8_t x12 = 1;
uint16_t x22 = 4355U;
uint32_t x26 = 13116922U;
int64_t x30 = 42753622888LL;
volatile int64_t x36 = INT64_MIN;
int16_t x38 = 19;
int8_t x47 = 1;
uint8_t x57 = UINT8_MAX;
int8_t x60 = 0;
static int32_t t16 = 14;
int32_t t17 = 3;
uint64_t x74 = 3356LLU;
static int32_t x86 = INT32_MAX;
int32_t x96 = INT32_MIN;
int64_t x103 = INT64_MIN;
static uint32_t x105 = 1309U;
int64_t x106 = -15LL;
uint64_t t26 = 7851945694745019176LLU;
static int32_t x111 = INT32_MIN;
uint16_t x118 = 20U;
int64_t x121 = INT64_MIN;
volatile int32_t x130 = 594451734;
int16_t x136 = 1;
int64_t x140 = -1LL;
volatile int64_t t34 = -120069LL;
volatile int32_t t35 = -870604;
uint64_t x148 = 54398926131LLU;
int16_t x149 = 44;
volatile int64_t x158 = 1899454580855333625LL;
static int8_t x162 = INT8_MAX;
uint32_t x164 = 8919U;
int64_t t40 = 11321792183033327LL;
static volatile uint8_t x181 = UINT8_MAX;
uint32_t t45 = 727978952U;
int8_t x189 = INT8_MAX;
volatile uint16_t x195 = 3882U;
static volatile int32_t x198 = INT32_MIN;
uint32_t x200 = UINT32_MAX;
int16_t x217 = 11848;
volatile uint32_t t55 = 5699671U;
int8_t x228 = -1;
uint32_t x229 = 3U;
volatile uint16_t x239 = 8U;
volatile int32_t x242 = INT32_MIN;
int32_t x244 = -1;
uint64_t x245 = UINT64_MAX;
int64_t x249 = -1LL;
static int64_t x250 = INT64_MIN;
uint32_t x252 = 3274U;
uint32_t x253 = UINT32_MAX;
int8_t x254 = 21;
volatile uint32_t t63 = UINT32_MAX;
int8_t x258 = -1;
static int64_t x259 = -1LL;
uint8_t x263 = UINT8_MAX;
int16_t x274 = -1;
static volatile int64_t x275 = INT64_MAX;
static volatile int16_t x276 = -1;
uint64_t x280 = UINT64_MAX;
int8_t x281 = -1;
volatile int64_t x283 = -1358225515585842746LL;
volatile int8_t x288 = -1;
static uint64_t x292 = 8039LLU;
volatile int16_t x293 = -517;
volatile int32_t t75 = -12730147;
static int16_t x309 = -1;
static int16_t x315 = INT16_MAX;
uint8_t x319 = 13U;
volatile int32_t x329 = INT32_MAX;
static volatile uint32_t t82 = 9U;
static int64_t x335 = -1LL;
static int8_t x336 = -1;
uint32_t x344 = UINT32_MAX;
int8_t x354 = 2;
static volatile int8_t x355 = INT8_MIN;
volatile int64_t t90 = -82LL;
int16_t x368 = INT16_MIN;
int32_t t94 = 223437;
volatile int32_t x385 = 1;
int16_t x389 = INT16_MIN;
int32_t x391 = 12484756;
volatile uint32_t x395 = 29617U;
volatile uint64_t t98 = 171890764441066138LLU;
int32_t x405 = -64514672;
int64_t x411 = 1840012306062LL;
int16_t x414 = -1;
int64_t x417 = 988497884769276349LL;
static int64_t x422 = -28240LL;
static int32_t x424 = 0;
static int8_t x427 = 34;
int32_t x428 = INT32_MIN;
int64_t x431 = 415110355LL;
volatile uint64_t t107 = 7LLU;
int16_t x436 = INT16_MIN;
uint64_t x437 = 2483063369LLU;
volatile uint64_t t109 = 13890463009LLU;
static volatile int8_t x442 = 0;
int8_t x447 = INT8_MAX;
uint8_t x449 = UINT8_MAX;
uint16_t x458 = 1960U;
uint16_t x461 = UINT16_MAX;
uint64_t t115 = 6700LLU;
static uint8_t x469 = 1U;
volatile int32_t x475 = 0;
int64_t t118 = 109LL;
int64_t x486 = INT64_MIN;
int8_t x491 = INT8_MAX;
static volatile uint32_t t122 = 4U;
static uint32_t x495 = UINT32_MAX;
int64_t t123 = -1404501763019518LL;
int16_t x502 = INT16_MIN;
int16_t x514 = 5;
int32_t t128 = -3;
int16_t x522 = INT16_MIN;
static int32_t x523 = INT32_MAX;
int32_t t130 = -1;
int64_t x536 = 92284441423LL;
static int8_t x537 = -1;
volatile uint64_t x544 = 483987827303839699LLU;
static volatile int32_t t136 = 13293;
int32_t x554 = INT32_MIN;
volatile uint32_t t139 = 103530U;
static uint8_t x566 = UINT8_MAX;
uint64_t x573 = 189123254LLU;
static int8_t x574 = -1;
int32_t x584 = INT32_MIN;
int16_t x589 = INT16_MAX;
static uint8_t x592 = 122U;
static volatile uint32_t x594 = UINT32_MAX;
volatile int32_t t150 = 30952;
int16_t x608 = INT16_MAX;
uint32_t x617 = UINT32_MAX;
uint32_t x630 = UINT32_MAX;
volatile int32_t x639 = -195315911;
volatile int32_t t159 = 2956;
uint8_t x642 = UINT8_MAX;
int64_t x645 = -1LL;
uint64_t x647 = UINT64_MAX;
int32_t x648 = 3438349;
static uint32_t x652 = 13U;
int16_t x654 = INT16_MAX;
int32_t x663 = 1493;
uint64_t x665 = 2715481936748LLU;
uint64_t t166 = 25887736491LLU;
volatile int16_t x680 = INT16_MAX;
int16_t x684 = INT16_MIN;
uint8_t x685 = 26U;
static uint32_t t172 = 55U;
volatile int32_t t173 = -46957304;
uint16_t x698 = 47U;
uint64_t x708 = 1825841LLU;
int64_t x711 = INT64_MIN;
int16_t x713 = -5;
volatile uint64_t t178 = 6LLU;
int16_t x724 = -1;
static int64_t x725 = INT64_MIN;
volatile int64_t t181 = 13872566179LL;
int32_t x730 = INT32_MIN;
int8_t x736 = -1;
uint32_t x738 = 74U;
int8_t x747 = INT8_MIN;
uint8_t x750 = 15U;
static uint64_t x753 = 92209618LLU;
int32_t x757 = INT32_MIN;
static int32_t x761 = -1;
int8_t x765 = -1;
static int32_t x773 = 320;
static int16_t x775 = 473;
static int8_t x777 = INT8_MAX;
static uint64_t x780 = UINT64_MAX;
volatile int32_t t196 = 14;
static volatile int32_t t197 = -177980847;
volatile int64_t x795 = INT64_MIN;


void f0(void) {
    	uint32_t x1 = 8U;
	volatile int8_t x2 = -1;
	volatile int16_t x4 = -3;
	uint32_t t0 = 380239U;

    t0 = (x1&((x2>x3)|x4));

    if (t0 != 8U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	int32_t x6 = -1;
	static uint32_t x7 = 35953U;
	int32_t x8 = 4101;
	volatile int32_t t1 = -14775;

    t1 = (x5&((x6>x7)|x8));

    if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MAX;
	volatile int16_t x11 = INT16_MIN;
	int32_t t2 = -78021158;

    t2 = (x9&((x10>x11)|x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	int16_t x14 = -1015;
	uint32_t x15 = 4U;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 336395819;

    t3 = (x13&((x14>x15)|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = -1600LL;
	int32_t x18 = -1;
	uint8_t x19 = UINT8_MAX;
	int32_t x20 = INT32_MIN;
	int64_t t4 = 61LL;

    t4 = (x17&((x18>x19)|x20));

    if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 3U;
	int64_t x23 = -284923446827588460LL;
	int64_t x24 = 37312335539868LL;
	int64_t t5 = -5408566145191973LL;

    t5 = (x21&((x22>x23)|x24));

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	static volatile uint32_t x27 = 436427U;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = UINT64_MAX;

    t6 = (x25&((x26>x27)|x28));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	volatile int32_t x31 = -1;
	static int8_t x32 = -1;
	int32_t t7 = -1699;

    t7 = (x29&((x30>x31)|x32));

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	int32_t x34 = -1;
	uint16_t x35 = 7469U;
	volatile int64_t t8 = 2320160064732095LL;

    t8 = (x33&((x34>x35)|x36));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	int16_t x39 = INT16_MIN;
	static int32_t x40 = -1;
	int32_t t9 = 4718;

    t9 = (x37&((x38>x39)|x40));

    if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int8_t x42 = -2;
	int32_t x43 = INT32_MIN;
	static volatile int32_t x44 = -1;
	volatile int32_t t10 = INT32_MIN;

    t10 = (x41&((x42>x43)|x44));

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 57U;
	static volatile int32_t x46 = -248;
	volatile uint64_t x48 = UINT64_MAX;
	volatile uint64_t t11 = 988779834985LLU;

    t11 = (x45&((x46>x47)|x48));

    if (t11 != 57LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	int32_t x50 = 6;
	static volatile int8_t x51 = -2;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = -763192849;

    t12 = (x49&((x50>x51)|x52));

    if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 392LLU;
	static int8_t x54 = INT8_MIN;
	int64_t x55 = 617856LL;
	static int16_t x56 = INT16_MAX;
	volatile uint64_t t13 = 25056639LLU;

    t13 = (x53&((x54>x55)|x56));

    if (t13 != 392LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x58 = 6797498865938600854LLU;
	uint64_t x59 = UINT64_MAX;
	static int32_t t14 = 1;

    t14 = (x57&((x58>x59)|x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	int8_t x62 = -1;
	int32_t x63 = INT32_MIN;
	uint16_t x64 = 27746U;
	volatile int32_t t15 = -20462;

    t15 = (x61&((x62>x63)|x64));

    if (t15 != 27747) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = -4024;
	uint64_t x66 = UINT64_MAX;
	int16_t x67 = 3228;
	uint16_t x68 = UINT16_MAX;

    t16 = (x65&((x66>x67)|x68));

    if (t16 != 61512) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = 3;
	static int8_t x70 = INT8_MIN;
	int16_t x71 = -19;
	volatile uint16_t x72 = 1U;

    t17 = (x69&((x70>x71)|x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = 9301;
	uint8_t x75 = UINT8_MAX;
	int32_t x76 = 44;
	int32_t t18 = 61466866;

    t18 = (x73&((x74>x75)|x76));

    if (t18 != 5) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -8;
	int16_t x78 = INT16_MAX;
	int64_t x79 = -3LL;
	uint64_t x80 = UINT64_MAX;
	static volatile uint64_t t19 = 494106447537LLU;

    t19 = (x77&((x78>x79)|x80));

    if (t19 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint16_t x81 = UINT16_MAX;
	static uint64_t x82 = UINT64_MAX;
	int32_t x83 = -228170570;
	static volatile int64_t x84 = -1LL;
	int64_t t20 = 562350332439129LL;

    t20 = (x81&((x82>x83)|x84));

    if (t20 != 65535LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	int8_t x87 = -1;
	int32_t x88 = -1;
	static int64_t t21 = INT64_MIN;

    t21 = (x85&((x86>x87)|x88));

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 0U;
	uint8_t x90 = 55U;
	uint64_t x91 = UINT64_MAX;
	volatile int64_t x92 = 1LL;
	int64_t t22 = 16981063991931LL;

    t22 = (x89&((x90>x91)|x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 3U;
	int32_t x94 = -751;
	static uint16_t x95 = 263U;
	volatile int32_t t23 = -444;

    t23 = (x93&((x94>x95)|x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = 9359670950584LL;
	static int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	uint64_t x100 = UINT64_MAX;
	volatile uint64_t t24 = 85242276850926498LLU;

    t24 = (x97&((x98>x99)|x100));

    if (t24 != 9359670950584LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = INT32_MIN;
	static uint16_t x102 = 1U;
	int32_t x104 = INT32_MIN;
	volatile int32_t t25 = INT32_MIN;

    t25 = (x101&((x102>x103)|x104));

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x107 = 0;
	static uint64_t x108 = 117LLU;

    t26 = (x105&((x106>x107)|x108));

    if (t26 != 21LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x109 = UINT8_MAX;
	int8_t x110 = 16;
	int64_t x112 = INT64_MAX;
	volatile int64_t t27 = 222930177883683835LL;

    t27 = (x109&((x110>x111)|x112));

    if (t27 != 255LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	volatile int64_t x114 = INT64_MIN;
	int32_t x115 = INT32_MAX;
	static int64_t x116 = -1LL;
	volatile int64_t t28 = 659LL;

    t28 = (x113&((x114>x115)|x116));

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 97U;
	int64_t x119 = INT64_MIN;
	int64_t x120 = -367964980987362LL;
	static int64_t t29 = -740121420LL;

    t29 = (x117&((x118>x119)|x120));

    if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x122 = INT8_MAX;
	uint64_t x123 = 309188998626127LLU;
	volatile int32_t x124 = 57433;
	static volatile int64_t t30 = -2299141951735854010LL;

    t30 = (x121&((x122>x123)|x124));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x125 = 4U;
	int8_t x126 = INT8_MAX;
	int16_t x127 = INT16_MAX;
	int64_t x128 = INT64_MIN;
	volatile int64_t t31 = -5LL;

    t31 = (x125&((x126>x127)|x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint64_t x129 = 1073063429639238LLU;
	int32_t x131 = INT32_MAX;
	static volatile int32_t x132 = INT32_MAX;
	uint64_t t32 = 16166LLU;

    t32 = (x129&((x130>x131)|x132));

    if (t32 != 210472006LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = 2;
	static int64_t x134 = INT64_MAX;
	int32_t x135 = INT32_MIN;
	static int32_t t33 = 6;

    t33 = (x133&((x134>x135)|x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 4423U;
	uint64_t x138 = 22170LLU;
	uint32_t x139 = 153U;

    t34 = (x137&((x138>x139)|x140));

    if (t34 != 4423LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -29;
	static int32_t x142 = -1;
	int64_t x143 = INT64_MIN;
	int16_t x144 = -1;

    t35 = (x141&((x142>x143)|x144));

    if (t35 != -29) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = -1;
	uint16_t x146 = UINT16_MAX;
	volatile int64_t x147 = 192239269851LL;
	uint64_t t36 = 2LLU;

    t36 = (x145&((x146>x147)|x148));

    if (t36 != 54398926131LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x150 = INT16_MAX;
	int32_t x151 = INT32_MIN;
	uint64_t x152 = UINT64_MAX;
	volatile uint64_t t37 = 5658165131380433608LLU;

    t37 = (x149&((x150>x151)|x152));

    if (t37 != 44LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x153 = UINT32_MAX;
	int32_t x154 = INT32_MIN;
	uint16_t x155 = 1U;
	volatile uint64_t x156 = 77891714522LLU;
	uint64_t t38 = 80832LLU;

    t38 = (x153&((x154>x155)|x156));

    if (t38 != 582303194LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = -46;
	volatile int64_t x159 = 85011943LL;
	uint8_t x160 = 102U;
	volatile int32_t t39 = 114;

    t39 = (x157&((x158>x159)|x160));

    if (t39 != 66) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = INT64_MIN;
	static uint8_t x163 = 11U;

    t40 = (x161&((x162>x163)|x164));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	static int8_t x166 = -23;
	static int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MIN;
	int32_t t41 = -1054683859;

    t41 = (x165&((x166>x167)|x168));

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x169 = INT16_MIN;
	static int16_t x170 = INT16_MIN;
	int8_t x171 = -7;
	int16_t x172 = -1;
	volatile int32_t t42 = -3327293;

    t42 = (x169&((x170>x171)|x172));

    if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x173 = -2LL;
	static int64_t x174 = -1LL;
	uint16_t x175 = UINT16_MAX;
	static int8_t x176 = 6;
	int64_t t43 = -84LL;

    t43 = (x173&((x174>x175)|x176));

    if (t43 != 6LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x177 = 184LLU;
	int64_t x178 = INT64_MIN;
	static int32_t x179 = -1783240;
	uint8_t x180 = 12U;
	static volatile uint64_t t44 = 1581852721LLU;

    t44 = (x177&((x178>x179)|x180));

    if (t44 != 8LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x182 = INT16_MAX;
	static volatile int32_t x183 = -16823;
	uint32_t x184 = 38728U;

    t45 = (x181&((x182>x183)|x184));

    if (t45 != 73U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x185 = 0U;
	uint32_t x186 = 942U;
	uint64_t x187 = 16288932624671197LLU;
	int32_t x188 = INT32_MIN;
	volatile int32_t t46 = 3;

    t46 = (x185&((x186>x187)|x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = -1;
	uint64_t x191 = UINT64_MAX;
	static int64_t x192 = INT64_MIN;
	volatile int64_t t47 = 98684LL;

    t47 = (x189&((x190>x191)|x192));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MAX;
	static volatile int32_t x194 = INT32_MIN;
	int16_t x196 = 69;
	int32_t t48 = -324;

    t48 = (x193&((x194>x195)|x196));

    if (t48 != 69) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -1;
	uint8_t x199 = 6U;
	static volatile uint32_t t49 = UINT32_MAX;

    t49 = (x197&((x198>x199)|x200));

    if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = UINT64_MAX;
	int32_t x202 = INT32_MIN;
	static int32_t x203 = 10102923;
	volatile int64_t x204 = 43LL;
	uint64_t t50 = 3068446072351LLU;

    t50 = (x201&((x202>x203)|x204));

    if (t50 != 43LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 35823LLU;
	volatile uint64_t x206 = 7LLU;
	int16_t x207 = 12197;
	int32_t x208 = 7952604;
	uint64_t t51 = 2669888242959562LLU;

    t51 = (x205&((x206>x207)|x208));

    if (t51 != 2252LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -1;
	uint8_t x210 = 3U;
	int64_t x211 = INT64_MIN;
	static int16_t x212 = -1;
	volatile int32_t t52 = -109;

    t52 = (x209&((x210>x211)|x212));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 15U;
	int32_t x214 = -3362;
	int64_t x215 = -1LL;
	int32_t x216 = -1;
	volatile uint32_t t53 = 94537318U;

    t53 = (x213&((x214>x215)|x216));

    if (t53 != 15U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x218 = -56LL;
	static int8_t x219 = -1;
	int8_t x220 = 1;
	volatile int32_t t54 = -211666;

    t54 = (x217&((x218>x219)|x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 996U;
	int16_t x222 = INT16_MAX;
	static uint8_t x223 = 41U;
	uint8_t x224 = 3U;

    t55 = (x221&((x222>x223)|x224));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = 4;
	static int32_t x226 = 58586130;
	int64_t x227 = -3917LL;
	int32_t t56 = 1;

    t56 = (x225&((x226>x227)|x228));

    if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x230 = INT16_MIN;
	static volatile uint8_t x231 = UINT8_MAX;
	static int32_t x232 = INT32_MAX;
	uint32_t t57 = 1442053U;

    t57 = (x229&((x230>x231)|x232));

    if (t57 != 3U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 15440LLU;
	uint64_t x234 = 6LLU;
	static uint8_t x235 = 4U;
	int32_t x236 = -1;
	uint64_t t58 = 392LLU;

    t58 = (x233&((x234>x235)|x236));

    if (t58 != 15440LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 9U;
	int8_t x238 = INT8_MAX;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t59 = 694785333954LLU;

    t59 = (x237&((x238>x239)|x240));

    if (t59 != 9LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = -1;
	static volatile int8_t x243 = INT8_MIN;
	int32_t t60 = -83284;

    t60 = (x241&((x242>x243)|x244));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x246 = UINT32_MAX;
	volatile int64_t x247 = -1LL;
	volatile int8_t x248 = INT8_MIN;
	uint64_t t61 = 62900067038330LLU;

    t61 = (x245&((x246>x247)|x248));

    if (t61 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x251 = -8446757814LL;
	static int64_t t62 = 725900930499804168LL;

    t62 = (x249&((x250>x251)|x252));

    if (t62 != 3274LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x255 = INT32_MIN;
	int8_t x256 = -1;

    t63 = (x253&((x254>x255)|x256));

    if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x257 = -980255734358495LL;
	int16_t x260 = INT16_MIN;
	int64_t t64 = 12502859LL;

    t64 = (x257&((x258>x259)|x260));

    if (t64 != -980255734366208LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	static int64_t x262 = -1LL;
	int64_t x264 = -361256044371624575LL;
	int64_t t65 = 1926937051LL;

    t65 = (x261&((x262>x263)|x264));

    if (t65 != -361256044371624575LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = INT64_MIN;
	volatile uint64_t x266 = 113LLU;
	int8_t x267 = 0;
	static uint64_t x268 = 112722301LLU;
	volatile uint64_t t66 = 1020LLU;

    t66 = (x265&((x266>x267)|x268));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x269 = INT32_MIN;
	volatile int16_t x270 = INT16_MAX;
	int64_t x271 = INT64_MIN;
	static int8_t x272 = 0;
	volatile int32_t t67 = -114605260;

    t67 = (x269&((x270>x271)|x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	int32_t t68 = 15161;

    t68 = (x273&((x274>x275)|x276));

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = -1;
	volatile int32_t x278 = -64;
	int64_t x279 = INT64_MAX;
	volatile uint64_t t69 = UINT64_MAX;

    t69 = (x277&((x278>x279)|x280));

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x282 = INT32_MIN;
	volatile int8_t x284 = -1;
	volatile int32_t t70 = -113453476;

    t70 = (x281&((x282>x283)|x284));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MIN;
	volatile uint16_t x287 = 2U;
	int32_t t71 = -27500;

    t71 = (x285&((x286>x287)|x288));

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x289 = UINT16_MAX;
	int8_t x290 = -47;
	int16_t x291 = INT16_MIN;
	volatile uint64_t t72 = 2286553LLU;

    t72 = (x289&((x290>x291)|x292));

    if (t72 != 8039LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x294 = INT64_MIN;
	volatile uint16_t x295 = 10777U;
	uint64_t x296 = 115089LLU;
	volatile uint64_t t73 = 16294LLU;

    t73 = (x293&((x294>x295)|x296));

    if (t73 != 115089LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x297 = 1904;
	static volatile int32_t x298 = -3;
	int64_t x299 = INT64_MIN;
	static int8_t x300 = INT8_MIN;
	int32_t t74 = 5;

    t74 = (x297&((x298>x299)|x300));

    if (t74 != 1792) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 1U;
	uint8_t x302 = 5U;
	int32_t x303 = -1548054;
	int8_t x304 = 3;

    t75 = (x301&((x302>x303)|x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = -1LL;
	uint16_t x306 = 423U;
	static int16_t x307 = INT16_MIN;
	uint64_t x308 = 7822488443138421LLU;
	uint64_t t76 = 83670918479LLU;

    t76 = (x305&((x306>x307)|x308));

    if (t76 != 7822488443138421LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x310 = 13162409LLU;
	static volatile int64_t x311 = INT64_MIN;
	int32_t x312 = INT32_MIN;
	int32_t t77 = INT32_MIN;

    t77 = (x309&((x310>x311)|x312));

    if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MAX;
	uint8_t x314 = 7U;
	int64_t x316 = INT64_MAX;
	int64_t t78 = 21936385679444613LL;

    t78 = (x313&((x314>x315)|x316));

    if (t78 != 2147483647LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int8_t x317 = -1;
	volatile int32_t x318 = INT32_MIN;
	int32_t x320 = INT32_MIN;
	volatile int32_t t79 = INT32_MIN;

    t79 = (x317&((x318>x319)|x320));

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 10172791994129LLU;
	static int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MIN;
	uint8_t x324 = 98U;
	volatile uint64_t t80 = 1684061248899LLU;

    t80 = (x321&((x322>x323)|x324));

    if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x325 = INT32_MAX;
	int8_t x326 = INT8_MIN;
	int64_t x327 = INT64_MIN;
	int64_t x328 = INT64_MIN;
	int64_t t81 = -10585046996LL;

    t81 = (x325&((x326>x327)|x328));

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = INT64_MAX;
	volatile uint8_t x331 = UINT8_MAX;
	volatile uint32_t x332 = UINT32_MAX;

    t82 = (x329&((x330>x331)|x332));

    if (t82 != 2147483647U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x333 = 166;
	int64_t x334 = INT64_MIN;
	volatile int32_t t83 = 707109;

    t83 = (x333&((x334>x335)|x336));

    if (t83 != 166) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -53950;
	int32_t x338 = 3868038;
	volatile uint64_t x339 = 23303973LLU;
	static uint64_t x340 = 28LLU;
	uint64_t t84 = 35487754103829034LLU;

    t84 = (x337&((x338>x339)|x340));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	volatile uint32_t x342 = 1825469177U;
	int64_t x343 = -1LL;
	uint32_t t85 = 7547851U;

    t85 = (x341&((x342>x343)|x344));

    if (t85 != 2147483648U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x345 = INT16_MIN;
	static int8_t x346 = -1;
	int16_t x347 = -1;
	static int32_t x348 = -118413032;
	static int32_t t86 = -979;

    t86 = (x345&((x346>x347)|x348));

    if (t86 != -118423552) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1;
	int64_t x350 = -1LL;
	static int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MIN;
	int32_t t87 = 1784429;

    t87 = (x349&((x350>x351)|x352));

    if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	volatile uint8_t x356 = UINT8_MAX;
	volatile int32_t t88 = -19135169;

    t88 = (x353&((x354>x355)|x356));

    if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = 1554;
	volatile uint16_t x358 = 11U;
	static int64_t x359 = INT64_MIN;
	int16_t x360 = -116;
	int32_t t89 = 5;

    t89 = (x357&((x358>x359)|x360));

    if (t89 != 1536) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x361 = 1U;
	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MIN;
	int64_t x364 = INT64_MAX;

    t90 = (x361&((x362>x363)|x364));

    if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = INT64_MAX;
	int64_t x366 = INT64_MAX;
	int32_t x367 = 32585;
	int64_t t91 = 2LL;

    t91 = (x365&((x366>x367)|x368));

    if (t91 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = -1977743;
	uint32_t x370 = UINT32_MAX;
	static int16_t x371 = -424;
	uint32_t x372 = 6U;
	uint32_t t92 = 2747449U;

    t92 = (x369&((x370>x371)|x372));

    if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = 2;
	uint16_t x374 = 12650U;
	static int8_t x375 = -8;
	uint8_t x376 = 93U;
	volatile int32_t t93 = -2698;

    t93 = (x373&((x374>x375)|x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	static uint8_t x378 = 101U;
	static volatile int32_t x379 = 68422922;
	static uint8_t x380 = 1U;

    t94 = (x377&((x378>x379)|x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = -63778255036LL;
	int32_t x382 = -1;
	int8_t x383 = -1;
	int16_t x384 = INT16_MIN;
	int64_t t95 = -4758LL;

    t95 = (x381&((x382>x383)|x384));

    if (t95 != -63778258944LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x386 = UINT8_MAX;
	int8_t x387 = 25;
	volatile int64_t x388 = INT64_MIN;
	volatile int64_t t96 = -1LL;

    t96 = (x385&((x386>x387)|x388));

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x390 = 280504757111730LLU;
	int32_t x392 = INT32_MIN;
	volatile int32_t t97 = INT32_MIN;

    t97 = (x389&((x390>x391)|x392));

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x393 = UINT64_MAX;
	int8_t x394 = 0;
	int16_t x396 = INT16_MIN;

    t98 = (x393&((x394>x395)|x396));

    if (t98 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 65U;
	static int32_t x398 = -1;
	uint16_t x399 = 277U;
	int32_t x400 = INT32_MAX;
	int32_t t99 = 1;

    t99 = (x397&((x398>x399)|x400));

    if (t99 != 65) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x401 = 3U;
	int16_t x402 = 474;
	volatile uint32_t x403 = UINT32_MAX;
	int64_t x404 = -1LL;
	static int64_t t100 = 25510966013074284LL;

    t100 = (x401&((x402>x403)|x404));

    if (t100 != 3LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x406 = UINT64_MAX;
	volatile int16_t x407 = INT16_MIN;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t101 = 30;

    t101 = (x405&((x406>x407)|x408));

    if (t101 != 38288) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x409 = INT32_MAX;
	int32_t x410 = 10;
	int32_t x412 = -1;
	volatile int32_t t102 = INT32_MAX;

    t102 = (x409&((x410>x411)|x412));

    if (t102 != INT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MAX;
	static volatile uint16_t x415 = 104U;
	int64_t x416 = INT64_MAX;
	int64_t t103 = -196696LL;

    t103 = (x413&((x414>x415)|x416));

    if (t103 != 127LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x418 = UINT32_MAX;
	uint32_t x419 = UINT32_MAX;
	uint8_t x420 = 45U;
	volatile int64_t t104 = -1455807748LL;

    t104 = (x417&((x418>x419)|x420));

    if (t104 != 45LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 50830020U;
	int8_t x423 = -1;
	volatile uint32_t t105 = 6U;

    t105 = (x421&((x422>x423)|x424));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MAX;
	static int64_t x426 = 138LL;
	volatile int64_t t106 = 106706205403170LL;

    t106 = (x425&((x426>x427)|x428));

    if (t106 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = UINT64_MAX;
	static int32_t x430 = INT32_MIN;
	uint8_t x432 = UINT8_MAX;

    t107 = (x429&((x430>x431)|x432));

    if (t107 != 255LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x433 = 3;
	volatile int64_t x434 = 531890759596529324LL;
	static volatile int64_t x435 = INT64_MAX;
	int32_t t108 = 12553;

    t108 = (x433&((x434>x435)|x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x438 = 0;
	uint16_t x439 = 0U;
	uint8_t x440 = 35U;

    t109 = (x437&((x438>x439)|x440));

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = 2052693;
	int32_t x443 = INT32_MAX;
	static uint64_t x444 = 12769554LLU;
	static uint64_t t110 = 1320821LLU;

    t110 = (x441&((x442>x443)|x444));

    if (t110 != 151568LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = -1;
	int16_t x446 = INT16_MIN;
	uint64_t x448 = 16326750934334LLU;
	volatile uint64_t t111 = 13862165LLU;

    t111 = (x445&((x446>x447)|x448));

    if (t111 != 16326750934334LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x450 = 34U;
	uint8_t x451 = 25U;
	static uint16_t x452 = 31U;
	static int32_t t112 = 179480;

    t112 = (x449&((x450>x451)|x452));

    if (t112 != 31) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 55U;
	volatile int16_t x454 = 22;
	static uint16_t x455 = 1U;
	static uint8_t x456 = UINT8_MAX;
	static int32_t t113 = -482249;

    t113 = (x453&((x454>x455)|x456));

    if (t113 != 55) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MAX;
	uint8_t x459 = 41U;
	uint16_t x460 = UINT16_MAX;
	int32_t t114 = -3092;

    t114 = (x457&((x458>x459)|x460));

    if (t114 != 65535) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x462 = INT16_MIN;
	uint64_t x463 = 190511083711002915LLU;
	uint64_t x464 = UINT64_MAX;

    t115 = (x461&((x462>x463)|x464));

    if (t115 != 65535LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	int32_t x466 = -3;
	static int16_t x467 = INT16_MIN;
	static int16_t x468 = -1;
	volatile int32_t t116 = 108294779;

    t116 = (x465&((x466>x467)|x468));

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x470 = -1;
	int16_t x471 = -1;
	int8_t x472 = INT8_MAX;
	static volatile int32_t t117 = 18070;

    t117 = (x469&((x470>x471)|x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x473 = -64237811014451LL;
	int64_t x474 = INT64_MAX;
	static volatile int32_t x476 = 1555;

    t118 = (x473&((x474>x475)|x476));

    if (t118 != 1025LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 23U;
	uint8_t x478 = UINT8_MAX;
	uint32_t x479 = 6U;
	int64_t x480 = 228852LL;
	volatile int64_t t119 = -25895528LL;

    t119 = (x477&((x478>x479)|x480));

    if (t119 != 21LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = -7;
	int16_t x482 = -15;
	volatile int16_t x483 = INT16_MIN;
	volatile int16_t x484 = INT16_MIN;
	static int32_t t120 = -314;

    t120 = (x481&((x482>x483)|x484));

    if (t120 != -32767) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x485 = 144045;
	volatile uint8_t x487 = 7U;
	uint32_t x488 = 440523U;
	volatile uint32_t t121 = 51541776U;

    t121 = (x485&((x486>x487)|x488));

    if (t121 != 143497U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x489 = UINT32_MAX;
	static int32_t x490 = INT32_MIN;
	int16_t x492 = -60;

    t122 = (x489&((x490>x491)|x492));

    if (t122 != 4294967236U) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x493 = -25980665272LL;
	static int32_t x494 = -1;
	int8_t x496 = -1;

    t123 = (x493&((x494>x495)|x496));

    if (t123 != -25980665272LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = 534;
	int16_t x498 = INT16_MIN;
	static int16_t x499 = INT16_MAX;
	int64_t x500 = INT64_MIN;
	int64_t t124 = -1961117LL;

    t124 = (x497&((x498>x499)|x500));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 627U;
	static int64_t x503 = 676393507LL;
	int32_t x504 = INT32_MIN;
	volatile int32_t t125 = 0;

    t125 = (x501&((x502>x503)|x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint8_t x505 = 56U;
	volatile int8_t x506 = -1;
	static uint8_t x507 = 88U;
	int32_t x508 = -99;
	volatile int32_t t126 = 3547;

    t126 = (x505&((x506>x507)|x508));

    if (t126 != 24) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x509 = 7085877249LL;
	static int32_t x510 = INT32_MIN;
	uint16_t x511 = UINT16_MAX;
	volatile int16_t x512 = -1;
	volatile int64_t t127 = 171763517341327LL;

    t127 = (x509&((x510>x511)|x512));

    if (t127 != 7085877249LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 35U;
	int16_t x515 = INT16_MIN;
	int8_t x516 = -7;

    t128 = (x513&((x514>x515)|x516));

    if (t128 != 33) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 780988666092LLU;
	uint64_t x518 = UINT64_MAX;
	static int16_t x519 = -1;
	static int16_t x520 = INT16_MIN;
	uint64_t t129 = 3536LLU;

    t129 = (x517&((x518>x519)|x520));

    if (t129 != 780988645376LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = -51529834;
	int8_t x524 = -30;

    t130 = (x521&((x522>x523)|x524));

    if (t130 != -51529854) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = -1;
	uint32_t x526 = UINT32_MAX;
	uint8_t x527 = 61U;
	static uint64_t x528 = 1400339335168LLU;
	uint64_t t131 = 98348LLU;

    t131 = (x525&((x526>x527)|x528));

    if (t131 != 1400339335169LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = 4;
	volatile uint16_t x530 = 1U;
	static uint16_t x531 = UINT16_MAX;
	int32_t x532 = 6;
	volatile int32_t t132 = 474548829;

    t132 = (x529&((x530>x531)|x532));

    if (t132 != 4) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = 0;
	static uint32_t x534 = 13442379U;
	int8_t x535 = INT8_MIN;
	volatile int64_t t133 = 12535LL;

    t133 = (x533&((x534>x535)|x536));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x538 = 412148397180648LLU;
	static int8_t x539 = INT8_MAX;
	volatile int32_t x540 = 117;
	volatile int32_t t134 = -1539010;

    t134 = (x537&((x538>x539)|x540));

    if (t134 != 117) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x541 = INT32_MAX;
	uint64_t x542 = 5415203LLU;
	int64_t x543 = INT64_MAX;
	static volatile uint64_t t135 = 536417LLU;

    t135 = (x541&((x542>x543)|x544));

    if (t135 != 1510930387LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = 19;
	uint16_t x546 = UINT16_MAX;
	static int32_t x547 = INT32_MIN;
	int16_t x548 = INT16_MIN;

    t136 = (x545&((x546>x547)|x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x549 = -10;
	int32_t x550 = INT32_MIN;
	int64_t x551 = INT64_MIN;
	uint64_t x552 = 1123095442878LLU;
	static volatile uint64_t t137 = 337494838976170657LLU;

    t137 = (x549&((x550>x551)|x552));

    if (t137 != 1123095442870LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = 1U;
	static uint8_t x555 = 58U;
	int32_t x556 = -1;
	volatile int32_t t138 = 49;

    t138 = (x553&((x554>x555)|x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 413837U;
	int16_t x558 = INT16_MIN;
	uint32_t x559 = 3144445U;
	int8_t x560 = INT8_MIN;

    t139 = (x557&((x558>x559)|x560));

    if (t139 != 413825U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 443359668102516LLU;
	int32_t x562 = INT32_MAX;
	int8_t x563 = INT8_MIN;
	uint32_t x564 = UINT32_MAX;
	static volatile uint64_t t140 = 98LLU;

    t140 = (x561&((x562>x563)|x564));

    if (t140 != 3079038324LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = -2;
	uint64_t x567 = 0LLU;
	uint64_t x568 = UINT64_MAX;
	uint64_t t141 = 3722104580314LLU;

    t141 = (x565&((x566>x567)|x568));

    if (t141 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = 11;
	volatile int16_t x570 = INT16_MIN;
	static int64_t x571 = INT64_MIN;
	int16_t x572 = INT16_MIN;
	int32_t t142 = -5355;

    t142 = (x569&((x570>x571)|x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x575 = -87033;
	volatile uint16_t x576 = UINT16_MAX;
	volatile uint64_t t143 = 8795613548910LLU;

    t143 = (x573&((x574>x575)|x576));

    if (t143 != 51894LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 1140U;
	int32_t x578 = INT32_MAX;
	volatile int32_t x579 = -1;
	volatile uint8_t x580 = 4U;
	volatile uint32_t t144 = 131004496U;

    t144 = (x577&((x578>x579)|x580));

    if (t144 != 4U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = UINT8_MAX;
	int8_t x582 = -1;
	int8_t x583 = -1;
	volatile int32_t t145 = -11801047;

    t145 = (x581&((x582>x583)|x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -1;
	int16_t x586 = INT16_MIN;
	static volatile uint64_t x587 = UINT64_MAX;
	int32_t x588 = INT32_MIN;
	volatile int32_t t146 = INT32_MIN;

    t146 = (x585&((x586>x587)|x588));

    if (t146 != INT32_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x590 = 98U;
	int32_t x591 = INT32_MIN;
	int32_t t147 = 1584;

    t147 = (x589&((x590>x591)|x592));

    if (t147 != 123) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x593 = 0U;
	int64_t x595 = INT64_MAX;
	int32_t x596 = INT32_MAX;
	volatile int32_t t148 = 0;

    t148 = (x593&((x594>x595)|x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x597 = 66109U;
	int8_t x598 = INT8_MIN;
	volatile int64_t x599 = INT64_MIN;
	uint16_t x600 = 6U;
	static volatile uint32_t t149 = 24284U;

    t149 = (x597&((x598>x599)|x600));

    if (t149 != 5U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -1;
	static uint64_t x602 = UINT64_MAX;
	static volatile uint16_t x603 = UINT16_MAX;
	volatile int16_t x604 = -1;

    t150 = (x601&((x602>x603)|x604));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	static volatile int64_t x606 = -1LL;
	volatile uint32_t x607 = UINT32_MAX;
	static int32_t t151 = 23266359;

    t151 = (x605&((x606>x607)|x608));

    if (t151 != 32640) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MAX;
	int8_t x610 = 0;
	volatile int16_t x611 = INT16_MIN;
	static int8_t x612 = -1;
	int32_t t152 = -123033759;

    t152 = (x609&((x610>x611)|x612));

    if (t152 != 127) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -1LL;
	static uint32_t x614 = UINT32_MAX;
	volatile int8_t x615 = -19;
	int16_t x616 = INT16_MAX;
	volatile int64_t t153 = 191372728262089LL;

    t153 = (x613&((x614>x615)|x616));

    if (t153 != 32767LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x618 = INT16_MAX;
	uint8_t x619 = UINT8_MAX;
	uint8_t x620 = 0U;
	uint32_t t154 = 118U;

    t154 = (x617&((x618>x619)|x620));

    if (t154 != 1U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = UINT16_MAX;
	int64_t x622 = INT64_MAX;
	volatile int8_t x623 = -1;
	uint64_t x624 = UINT64_MAX;
	static uint64_t t155 = 2061851086545305LLU;

    t155 = (x621&((x622>x623)|x624));

    if (t155 != 65535LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -1;
	int64_t x626 = INT64_MIN;
	volatile int16_t x627 = 0;
	int8_t x628 = INT8_MIN;
	volatile int32_t t156 = 169;

    t156 = (x625&((x626>x627)|x628));

    if (t156 != -128) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 1045688256999989LLU;
	static int32_t x631 = INT32_MAX;
	int64_t x632 = INT64_MIN;
	volatile uint64_t t157 = 27987632355LLU;

    t157 = (x629&((x630>x631)|x632));

    if (t157 != 1LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = UINT64_MAX;
	static int16_t x634 = -1576;
	volatile int32_t x635 = -108274;
	int16_t x636 = INT16_MIN;
	uint64_t t158 = 22709LLU;

    t158 = (x633&((x634>x635)|x636));

    if (t158 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -18;
	static int32_t x638 = -13025549;
	volatile int8_t x640 = INT8_MIN;

    t159 = (x637&((x638>x639)|x640));

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -212554LL;
	uint8_t x643 = UINT8_MAX;
	int16_t x644 = 10;
	static volatile int64_t t160 = 102LL;

    t160 = (x641&((x642>x643)|x644));

    if (t160 != 2LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x646 = UINT32_MAX;
	volatile int64_t t161 = 817268847650202170LL;

    t161 = (x645&((x646>x647)|x648));

    if (t161 != 3438349LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MAX;
	static int32_t x650 = INT32_MIN;
	int8_t x651 = INT8_MAX;
	uint32_t t162 = 2U;

    t162 = (x649&((x650>x651)|x652));

    if (t162 != 13U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	uint16_t x655 = 1382U;
	int32_t x656 = -1;
	volatile int32_t t163 = 154077967;

    t163 = (x653&((x654>x655)|x656));

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = 2779463816LL;
	int64_t x658 = INT64_MIN;
	static int16_t x659 = INT16_MAX;
	int32_t x660 = INT32_MIN;
	int64_t t164 = -186146082LL;

    t164 = (x657&((x658>x659)|x660));

    if (t164 != 2147483648LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = 1505790178LLU;
	static uint8_t x662 = UINT8_MAX;
	int32_t x664 = 1;
	static volatile uint64_t t165 = 116238037562355LLU;

    t165 = (x661&((x662>x663)|x664));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x666 = 2878893LL;
	uint8_t x667 = 1U;
	volatile int64_t x668 = -1LL;

    t166 = (x665&((x666>x667)|x668));

    if (t166 != 2715481936748LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x669 = -1;
	static int16_t x670 = INT16_MIN;
	uint32_t x671 = 410U;
	uint8_t x672 = UINT8_MAX;
	int32_t t167 = 1158296;

    t167 = (x669&((x670>x671)|x672));

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x673 = INT16_MAX;
	uint16_t x674 = 0U;
	volatile int64_t x675 = INT64_MIN;
	static uint8_t x676 = 4U;
	volatile int32_t t168 = 0;

    t168 = (x673&((x674>x675)|x676));

    if (t168 != 5) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = UINT16_MAX;
	static volatile uint8_t x678 = 0U;
	uint64_t x679 = UINT64_MAX;
	static volatile int32_t t169 = -62;

    t169 = (x677&((x678>x679)|x680));

    if (t169 != 32767) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	static volatile int32_t x682 = INT32_MIN;
	int8_t x683 = INT8_MIN;
	static int64_t t170 = 11231459512LL;

    t170 = (x681&((x682>x683)|x684));

    if (t170 != -32768LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x686 = 5;
	int16_t x687 = INT16_MIN;
	int16_t x688 = -1;
	volatile int32_t t171 = 31057065;

    t171 = (x685&((x686>x687)|x688));

    if (t171 != 26) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x689 = 0U;
	uint64_t x690 = 110088279902058LLU;
	volatile int8_t x691 = INT8_MIN;
	static uint8_t x692 = UINT8_MAX;

    t172 = (x689&((x690>x691)|x692));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MAX;
	uint32_t x694 = UINT32_MAX;
	int64_t x695 = INT64_MIN;
	int8_t x696 = -21;

    t173 = (x693&((x694>x695)|x696));

    if (t173 != 32747) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x697 = UINT16_MAX;
	uint8_t x699 = UINT8_MAX;
	int8_t x700 = INT8_MIN;
	volatile int32_t t174 = 3;

    t174 = (x697&((x698>x699)|x700));

    if (t174 != 65408) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = 19591729;
	int64_t x702 = -1LL;
	int16_t x703 = INT16_MIN;
	volatile int8_t x704 = INT8_MAX;
	int32_t t175 = -893202506;

    t175 = (x701&((x702>x703)|x704));

    if (t175 != 49) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MAX;
	int16_t x706 = INT16_MIN;
	uint64_t x707 = 8972460128LLU;
	volatile uint64_t t176 = 269271LLU;

    t176 = (x705&((x706>x707)|x708));

    if (t176 != 1825841LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x709 = 5U;
	static int32_t x710 = INT32_MAX;
	uint32_t x712 = 27253U;
	volatile uint32_t t177 = 21U;

    t177 = (x709&((x710>x711)|x712));

    if (t177 != 5U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x714 = 66017385131151LLU;
	static int16_t x715 = -1;
	uint64_t x716 = 120895825779256LLU;

    t178 = (x713&((x714>x715)|x716));

    if (t178 != 120895825779256LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x717 = UINT16_MAX;
	int8_t x718 = -8;
	int64_t x719 = -1LL;
	static uint32_t x720 = 52636260U;
	volatile uint32_t t179 = 2U;

    t179 = (x717&((x718>x719)|x720));

    if (t179 != 10852U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 37U;
	static int64_t x722 = 265580228LL;
	uint32_t x723 = 6034U;
	int32_t t180 = 13278482;

    t180 = (x721&((x722>x723)|x724));

    if (t180 != 37) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = INT64_MAX;
	static uint32_t x727 = 290474U;
	static volatile int64_t x728 = 26346369489LL;

    t181 = (x725&((x726>x727)|x728));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = UINT32_MAX;
	static uint8_t x731 = UINT8_MAX;
	int16_t x732 = INT16_MAX;
	uint32_t t182 = 381360U;

    t182 = (x729&((x730>x731)|x732));

    if (t182 != 32767U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MAX;
	uint16_t x734 = 29272U;
	volatile uint8_t x735 = 78U;
	int32_t t183 = -167616;

    t183 = (x733&((x734>x735)|x736));

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = UINT16_MAX;
	volatile int8_t x739 = -1;
	uint32_t x740 = UINT32_MAX;
	volatile uint32_t t184 = 9U;

    t184 = (x737&((x738>x739)|x740));

    if (t184 != 65535U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = -1;
	int32_t x742 = -42253865;
	int16_t x743 = INT16_MAX;
	static int64_t x744 = INT64_MAX;
	static volatile int64_t t185 = INT64_MAX;

    t185 = (x741&((x742>x743)|x744));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	uint16_t x746 = 2231U;
	int32_t x748 = -1;
	int32_t t186 = INT32_MIN;

    t186 = (x745&((x746>x747)|x748));

    if (t186 != INT32_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x749 = INT16_MIN;
	int16_t x751 = -3;
	volatile uint8_t x752 = 2U;
	volatile int32_t t187 = 0;

    t187 = (x749&((x750>x751)|x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x754 = 9353767373946LLU;
	int16_t x755 = -162;
	int32_t x756 = INT32_MIN;
	uint64_t t188 = 14993767917731LLU;

    t188 = (x753&((x754>x755)|x756));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = INT32_MIN;
	volatile uint64_t x759 = UINT64_MAX;
	volatile uint32_t x760 = 8147U;
	volatile uint32_t t189 = 488U;

    t189 = (x757&((x758>x759)|x760));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = INT16_MIN;
	static uint32_t x763 = 0U;
	static volatile int64_t x764 = 3712557809170421LL;
	volatile int64_t t190 = -6081516300LL;

    t190 = (x761&((x762>x763)|x764));

    if (t190 != 3712557809170421LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x766 = -1;
	static uint64_t x767 = 2451949170LLU;
	static volatile int8_t x768 = 15;
	static volatile int32_t t191 = -3652411;

    t191 = (x765&((x766>x767)|x768));

    if (t191 != 15) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = 1;
	static int64_t x770 = -1LL;
	static uint16_t x771 = UINT16_MAX;
	int16_t x772 = INT16_MIN;
	int32_t t192 = -34426098;

    t192 = (x769&((x770>x771)|x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x774 = INT8_MIN;
	int8_t x776 = INT8_MIN;
	volatile int32_t t193 = 1;

    t193 = (x773&((x774>x775)|x776));

    if (t193 != 256) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x778 = 935U;
	static int8_t x779 = INT8_MAX;
	volatile uint64_t t194 = 49204160487994LLU;

    t194 = (x777&((x778>x779)|x780));

    if (t194 != 127LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MAX;
	volatile uint8_t x782 = 4U;
	volatile int64_t x783 = INT64_MIN;
	volatile int16_t x784 = 20;
	int64_t t195 = -2541746013192822161LL;

    t195 = (x781&((x782>x783)|x784));

    if (t195 != 21LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 9U;
	uint32_t x786 = 679U;
	uint32_t x787 = UINT32_MAX;
	static int32_t x788 = INT32_MAX;

    t196 = (x785&((x786>x787)|x788));

    if (t196 != 9) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MIN;
	int16_t x790 = INT16_MIN;
	uint16_t x791 = 1262U;
	int32_t x792 = 1948;

    t197 = (x789&((x790>x791)|x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x793 = INT8_MIN;
	int16_t x794 = INT16_MIN;
	volatile int64_t x796 = -10428035410LL;
	volatile int64_t t198 = -1543033717191LL;

    t198 = (x793&((x794>x795)|x796));

    if (t198 != -10428035456LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = -1;
	uint8_t x798 = UINT8_MAX;
	volatile int64_t x799 = INT64_MIN;
	uint64_t x800 = 165LLU;
	static uint64_t t199 = 6871766LLU;

    t199 = (x797&((x798>x799)|x800));

    if (t199 != 165LLU) { NG(); } else { ; }
	
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

