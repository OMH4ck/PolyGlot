
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

volatile int16_t x1 = -3;
int8_t x4 = INT8_MIN;
int16_t x5 = 7764;
uint8_t x12 = UINT8_MAX;
static volatile int32_t t2 = 0;
volatile uint16_t x23 = 6U;
volatile uint16_t x24 = 586U;
int16_t x27 = -1;
int32_t x33 = INT32_MIN;
volatile int32_t x43 = INT32_MAX;
static uint32_t x46 = UINT32_MAX;
volatile int32_t t13 = 0;
uint8_t x66 = 5U;
int32_t x67 = -1;
volatile uint64_t x69 = 2331675407715LLU;
int32_t x70 = -1745413;
volatile int32_t t16 = -943183162;
uint64_t x77 = 2983362LLU;
uint64_t x80 = 341LLU;
volatile uint32_t x81 = UINT32_MAX;
uint16_t x107 = 23U;
volatile int32_t x118 = -1;
int64_t x120 = -1LL;
int32_t t27 = -11;
uint16_t x122 = UINT16_MAX;
volatile int16_t x127 = INT16_MIN;
int32_t x130 = 1;
uint64_t x132 = 1705074LLU;
int32_t t30 = -7138;
int16_t x138 = 7;
uint8_t x143 = UINT8_MAX;
static int8_t x144 = INT8_MIN;
uint16_t x147 = UINT16_MAX;
int32_t t34 = -184786998;
static volatile int32_t t36 = 28239076;
int32_t t38 = -120618918;
int16_t x165 = -66;
static int32_t t40 = -1;
int64_t x174 = INT64_MAX;
int32_t t43 = 171457237;
int64_t x192 = INT64_MAX;
static uint16_t x199 = 175U;
static volatile int32_t t47 = -1106;
int64_t x204 = INT64_MIN;
int8_t x215 = -1;
uint32_t x216 = UINT32_MAX;
int8_t x221 = INT8_MAX;
uint8_t x223 = UINT8_MAX;
int16_t x227 = -1;
volatile int32_t t56 = -796297;
volatile uint64_t x237 = 219936689387LLU;
static int16_t x249 = -1;
static int16_t x252 = -24;
int8_t x260 = 0;
static int16_t x262 = INT16_MIN;
static uint16_t x263 = 2U;
int8_t x277 = 31;
uint64_t x278 = UINT64_MAX;
int16_t x284 = -1017;
static int32_t t68 = -3662903;
static int8_t x291 = -31;
int32_t x292 = INT32_MIN;
static volatile int8_t x298 = INT8_MAX;
static int16_t x302 = 1493;
volatile int32_t x306 = INT32_MIN;
int32_t t73 = -202813950;
uint64_t x313 = UINT64_MAX;
static int32_t t75 = -6661;
volatile int64_t x321 = 135666789851LL;
static int32_t t76 = -449057;
int16_t x326 = -3;
uint32_t x331 = 1363U;
int64_t x337 = INT64_MAX;
int32_t t82 = 26995;
int64_t x360 = INT64_MAX;
static int32_t x361 = INT32_MAX;
static int32_t x370 = -1;
int16_t x376 = INT16_MAX;
static int64_t x377 = INT64_MAX;
volatile int8_t x378 = INT8_MIN;
static int32_t t90 = 17454820;
volatile int16_t x391 = 1;
int16_t x397 = -1;
int64_t x398 = INT64_MIN;
int32_t x404 = INT32_MAX;
int32_t t96 = 435100976;
static volatile int32_t t98 = -190838491;
static int8_t x429 = INT8_MAX;
int8_t x432 = INT8_MIN;
int16_t x437 = INT16_MIN;
int8_t x440 = 47;
int32_t x457 = INT32_MAX;
uint16_t x458 = UINT16_MAX;
int16_t x464 = INT16_MAX;
volatile int32_t t110 = 109;
int64_t x467 = -6640833780898111LL;
int32_t t111 = 452262;
static uint64_t x472 = UINT64_MAX;
int8_t x475 = -1;
int8_t x476 = 1;
volatile int32_t t113 = 136158;
uint16_t x479 = 3U;
int16_t x483 = INT16_MIN;
volatile int32_t t115 = 48573091;
int32_t t116 = 362299;
uint64_t x490 = 256122261800076LLU;
int32_t t117 = 33482726;
uint32_t x503 = 906U;
static volatile uint16_t x506 = 27U;
int32_t t121 = -195;
int32_t x509 = INT32_MIN;
int64_t x511 = INT64_MAX;
volatile int32_t t122 = -1288147;
volatile int16_t x514 = -1;
int64_t x515 = 3313931360644LL;
static int64_t x516 = -28924852LL;
volatile int32_t t124 = 2238;
uint16_t x525 = 6106U;
static int16_t x530 = INT16_MIN;
int32_t x531 = INT32_MIN;
volatile int32_t t127 = 198;
volatile int64_t x534 = 155928667353302LL;
int32_t x536 = 1799;
static uint32_t x538 = 304800U;
int32_t t129 = 2543;
uint8_t x546 = 12U;
uint8_t x551 = 1U;
int32_t x564 = INT32_MAX;
int16_t x565 = -3567;
int32_t t136 = -287720;
int16_t x575 = -1;
volatile int32_t t137 = -3;
int64_t x577 = INT64_MIN;
static uint16_t x578 = 1371U;
volatile uint16_t x591 = UINT16_MAX;
int64_t x594 = -128778904468LL;
int32_t t142 = 1930;
static int16_t x597 = 5;
int8_t x599 = INT8_MAX;
static volatile int32_t t143 = 41;
uint32_t x608 = 6117U;
int8_t x609 = -1;
int64_t x611 = 30007973538LL;
uint64_t x616 = 1091417367328342558LLU;
volatile int32_t t146 = -50808;
int8_t x621 = -3;
uint16_t x630 = 2U;
uint16_t x636 = 189U;
volatile int32_t t151 = -17;
uint64_t x639 = UINT64_MAX;
int8_t x641 = -2;
int64_t x642 = -22135314200176619LL;
static int32_t t154 = -1;
static volatile int64_t x659 = INT64_MAX;
uint64_t x660 = UINT64_MAX;
int8_t x664 = INT8_MAX;
int8_t x666 = -1;
int16_t x667 = -253;
static int32_t t160 = -4530;
uint64_t x678 = UINT64_MAX;
static uint32_t x687 = UINT32_MAX;
volatile uint8_t x688 = 31U;
volatile int32_t t164 = 6219;
volatile int32_t t165 = -53417521;
uint8_t x699 = UINT8_MAX;
uint8_t x700 = UINT8_MAX;
int32_t t167 = -14015;
uint64_t x701 = 12486LLU;
volatile int32_t t170 = 196628;
uint64_t x715 = 485264999189LLU;
volatile int64_t x716 = -1LL;
int32_t x724 = -1;
volatile int8_t x728 = INT8_MAX;
int32_t t173 = -127992;
uint64_t x739 = 2489010403473033LLU;
int32_t t176 = -57;
int16_t x741 = 15859;
volatile int32_t x745 = 1;
uint8_t x750 = 12U;
static int64_t x773 = INT64_MIN;
static uint32_t x778 = 28903U;
int32_t x779 = INT32_MAX;
volatile int32_t t186 = -458;
int32_t x781 = -4;
static uint16_t x784 = UINT16_MAX;
int8_t x785 = INT8_MIN;
int32_t x788 = -245010;
int32_t t189 = 255893193;
static int64_t x793 = INT64_MIN;
uint8_t x796 = UINT8_MAX;
int8_t x798 = INT8_MIN;
int8_t x802 = -1;
uint8_t x807 = 3U;
int32_t x808 = INT32_MIN;
int32_t t193 = -184309712;
volatile int64_t x811 = 2902400973466252LL;
int16_t x816 = INT16_MIN;
int32_t t195 = 4981;
static int32_t x817 = -238;
static volatile int8_t x822 = 5;
volatile int32_t x825 = INT32_MIN;
int32_t t198 = 42729;
int64_t x831 = INT64_MIN;


void f0(void) {
    	static int64_t x2 = -33930653266LL;
	static int32_t x3 = INT32_MAX;
	int32_t t0 = -27;

    t0 = (x1!=((x2%x3)&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x6 = 5;
	int16_t x7 = INT16_MAX;
	static int16_t x8 = -1;
	volatile int32_t t1 = 13354;

    t1 = (x5!=((x6%x7)&x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = -24017307982959648LL;
	int8_t x10 = -1;
	int32_t x11 = INT32_MAX;

    t2 = (x9!=((x10%x11)&x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = 2U;
	int8_t x18 = INT8_MIN;
	static uint16_t x19 = 3509U;
	uint8_t x20 = 1U;
	volatile int32_t t3 = -2;

    t3 = (x17!=((x18%x19)&x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MIN;
	int32_t x22 = 97;
	static volatile int32_t t4 = 3212;

    t4 = (x21!=((x22%x23)&x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = -1;
	int8_t x26 = INT8_MIN;
	uint16_t x28 = 2U;
	int32_t t5 = -58418;

    t5 = (x25!=((x26%x27)&x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = UINT16_MAX;
	int64_t x30 = INT64_MIN;
	int8_t x31 = -1;
	int32_t x32 = INT32_MIN;
	int32_t t6 = 0;

    t6 = (x29!=((x30%x31)&x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x34 = 0;
	int8_t x35 = INT8_MAX;
	int8_t x36 = INT8_MAX;
	volatile int32_t t7 = 6237;

    t7 = (x33!=((x34%x35)&x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x37 = 13U;
	uint8_t x38 = UINT8_MAX;
	volatile int64_t x39 = INT64_MIN;
	static int64_t x40 = INT64_MIN;
	volatile int32_t t8 = -17957;

    t8 = (x37!=((x38%x39)&x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x41 = 14LLU;
	static int8_t x42 = INT8_MAX;
	static uint8_t x44 = UINT8_MAX;
	volatile int32_t t9 = -3953;

    t9 = (x41!=((x42%x43)&x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = 7448U;
	int32_t x47 = INT32_MIN;
	uint8_t x48 = UINT8_MAX;
	static volatile int32_t t10 = 120;

    t10 = (x45!=((x46%x47)&x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = 294474;
	int8_t x50 = -1;
	int8_t x51 = INT8_MIN;
	int8_t x52 = 0;
	int32_t t11 = 16525398;

    t11 = (x49!=((x50%x51)&x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x53 = -1;
	int32_t x54 = INT32_MIN;
	static int8_t x55 = 6;
	int16_t x56 = INT16_MAX;
	volatile int32_t t12 = 866524548;

    t12 = (x53!=((x54%x55)&x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = -1;
	volatile uint8_t x58 = 0U;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = 7U;

    t13 = (x57!=((x58%x59)&x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x61 = 2343089121871394LL;
	uint8_t x62 = 93U;
	int32_t x63 = 1;
	volatile int8_t x64 = 1;
	int32_t t14 = 3;

    t14 = (x61!=((x62%x63)&x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = 8611U;
	volatile uint16_t x68 = 964U;
	volatile int32_t t15 = -22790714;

    t15 = (x65!=((x66%x67)&x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x71 = INT32_MIN;
	volatile int32_t x72 = 12619291;

    t16 = (x69!=((x70%x71)&x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x78 = 112U;
	uint32_t x79 = 198448U;
	volatile int32_t t17 = 837;

    t17 = (x77!=((x78%x79)&x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x82 = INT16_MIN;
	volatile uint32_t x83 = 7U;
	volatile int32_t x84 = INT32_MIN;
	volatile int32_t t18 = 20;

    t18 = (x81!=((x82%x83)&x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x85 = 12U;
	uint64_t x86 = 3333261LLU;
	int64_t x87 = -1LL;
	volatile int32_t x88 = INT32_MIN;
	static volatile int32_t t19 = -1543;

    t19 = (x85!=((x86%x87)&x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x89 = 1023989917521876016LLU;
	static int32_t x90 = -1;
	int16_t x91 = INT16_MIN;
	static int16_t x92 = INT16_MAX;
	volatile int32_t t20 = 12882;

    t20 = (x89!=((x90%x91)&x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x93 = INT32_MIN;
	int64_t x94 = 7043LL;
	int64_t x95 = INT64_MIN;
	volatile int32_t x96 = INT32_MIN;
	int32_t t21 = 60346390;

    t21 = (x93!=((x94%x95)&x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = -1;
	volatile int8_t x98 = -46;
	int64_t x99 = INT64_MIN;
	static int32_t x100 = INT32_MIN;
	volatile int32_t t22 = 13854962;

    t22 = (x97!=((x98%x99)&x100));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = INT16_MIN;
	uint64_t x102 = UINT64_MAX;
	uint16_t x103 = 1253U;
	uint64_t x104 = 12859631LLU;
	int32_t t23 = 6677;

    t23 = (x101!=((x102%x103)&x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x105 = 1;
	static int16_t x106 = -1;
	volatile uint32_t x108 = 3196288U;
	int32_t t24 = 69595631;

    t24 = (x105!=((x106%x107)&x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x109 = -1LL;
	uint8_t x110 = 7U;
	int16_t x111 = -1;
	static uint16_t x112 = UINT16_MAX;
	int32_t t25 = 4275;

    t25 = (x109!=((x110%x111)&x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = INT32_MIN;
	int8_t x114 = 0;
	uint8_t x115 = UINT8_MAX;
	int64_t x116 = -1LL;
	static int32_t t26 = -90;

    t26 = (x113!=((x114%x115)&x116));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x117 = -11;
	int16_t x119 = -1748;

    t27 = (x117!=((x118%x119)&x120));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x121 = UINT32_MAX;
	uint8_t x123 = UINT8_MAX;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t28 = -589691;

    t28 = (x121!=((x122%x123)&x124));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x125 = 788U;
	uint32_t x126 = 207U;
	static int64_t x128 = INT64_MIN;
	int32_t t29 = -3977;

    t29 = (x125!=((x126%x127)&x128));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x129 = INT64_MAX;
	volatile int32_t x131 = 5027;

    t30 = (x129!=((x130%x131)&x132));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x133 = INT32_MIN;
	volatile int16_t x134 = INT16_MAX;
	uint16_t x135 = UINT16_MAX;
	static volatile uint32_t x136 = UINT32_MAX;
	volatile int32_t t31 = 51382311;

    t31 = (x133!=((x134%x135)&x136));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x137 = UINT64_MAX;
	int32_t x139 = -1;
	static uint64_t x140 = 12LLU;
	volatile int32_t t32 = -10;

    t32 = (x137!=((x138%x139)&x140));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x141 = UINT32_MAX;
	uint16_t x142 = 4U;
	volatile int32_t t33 = 9629;

    t33 = (x141!=((x142%x143)&x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x145 = 18U;
	int32_t x146 = INT32_MAX;
	volatile int32_t x148 = -4323;

    t34 = (x145!=((x146%x147)&x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = -2424;
	int16_t x150 = INT16_MAX;
	int8_t x151 = INT8_MIN;
	static int8_t x152 = -1;
	volatile int32_t t35 = -2638;

    t35 = (x149!=((x150%x151)&x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = INT64_MAX;
	int64_t x154 = -2376918LL;
	int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MIN;

    t36 = (x153!=((x154%x155)&x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x157 = INT8_MIN;
	uint64_t x158 = 24390495258LLU;
	int32_t x159 = -1;
	uint64_t x160 = 1324735763756911LLU;
	static volatile int32_t t37 = 0;

    t37 = (x157!=((x158%x159)&x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = INT32_MIN;
	int16_t x162 = -1;
	int8_t x163 = 29;
	static int64_t x164 = INT64_MAX;

    t38 = (x161!=((x162%x163)&x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x166 = INT8_MIN;
	int32_t x167 = INT32_MAX;
	static int8_t x168 = INT8_MIN;
	volatile int32_t t39 = 26174273;

    t39 = (x165!=((x166%x167)&x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x169 = UINT32_MAX;
	static uint16_t x170 = 4U;
	static int16_t x171 = -1;
	static uint64_t x172 = 18818LLU;

    t40 = (x169!=((x170%x171)&x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = INT8_MAX;
	static uint64_t x175 = 3943367LLU;
	int32_t x176 = 694869514;
	volatile int32_t t41 = 12051005;

    t41 = (x173!=((x174%x175)&x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = INT64_MIN;
	int16_t x178 = INT16_MIN;
	int32_t x179 = INT32_MIN;
	int16_t x180 = 4;
	int32_t t42 = 3;

    t42 = (x177!=((x178%x179)&x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x181 = 5651;
	static int64_t x182 = -1432314440956LL;
	int16_t x183 = INT16_MIN;
	static volatile uint64_t x184 = UINT64_MAX;

    t43 = (x181!=((x182%x183)&x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = 0;
	volatile int64_t x186 = -5623230950304LL;
	volatile int32_t x187 = INT32_MAX;
	static int64_t x188 = INT64_MAX;
	volatile int32_t t44 = 13263;

    t44 = (x185!=((x186%x187)&x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x189 = 2U;
	int32_t x190 = -1;
	uint32_t x191 = 428255219U;
	int32_t t45 = 0;

    t45 = (x189!=((x190%x191)&x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x193 = 13U;
	volatile int64_t x194 = 4793101109LL;
	int8_t x195 = -1;
	int16_t x196 = INT16_MIN;
	int32_t t46 = -71593;

    t46 = (x193!=((x194%x195)&x196));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x197 = INT32_MIN;
	int32_t x198 = -1;
	static volatile uint64_t x200 = UINT64_MAX;

    t47 = (x197!=((x198%x199)&x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x201 = 0;
	volatile int8_t x202 = INT8_MAX;
	int64_t x203 = INT64_MAX;
	volatile int32_t t48 = -7;

    t48 = (x201!=((x202%x203)&x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = 17;
	static int64_t x206 = -23336252931650374LL;
	uint16_t x207 = 3U;
	uint16_t x208 = 13U;
	int32_t t49 = 0;

    t49 = (x205!=((x206%x207)&x208));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x209 = -4063;
	uint64_t x210 = UINT64_MAX;
	uint16_t x211 = 34U;
	int16_t x212 = INT16_MAX;
	int32_t t50 = -64;

    t50 = (x209!=((x210%x211)&x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x213 = INT16_MIN;
	int8_t x214 = INT8_MIN;
	volatile int32_t t51 = -62391;

    t51 = (x213!=((x214%x215)&x216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x217 = UINT32_MAX;
	int64_t x218 = INT64_MIN;
	static volatile uint64_t x219 = UINT64_MAX;
	uint8_t x220 = 3U;
	volatile int32_t t52 = -16843;

    t52 = (x217!=((x218%x219)&x220));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x222 = 3U;
	int8_t x224 = INT8_MIN;
	volatile int32_t t53 = 3;

    t53 = (x221!=((x222%x223)&x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x225 = INT16_MIN;
	int64_t x226 = INT64_MIN;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t54 = -1110;

    t54 = (x225!=((x226%x227)&x228));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x229 = INT32_MIN;
	int64_t x230 = INT64_MIN;
	uint32_t x231 = 497384243U;
	static int32_t x232 = 1251916;
	static int32_t t55 = -207;

    t55 = (x229!=((x230%x231)&x232));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = INT8_MIN;
	uint16_t x234 = UINT16_MAX;
	uint64_t x235 = UINT64_MAX;
	uint8_t x236 = 7U;

    t56 = (x233!=((x234%x235)&x236));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x238 = UINT32_MAX;
	int8_t x239 = INT8_MAX;
	volatile int64_t x240 = -463LL;
	volatile int32_t t57 = 21523981;

    t57 = (x237!=((x238%x239)&x240));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x241 = INT8_MIN;
	static uint64_t x242 = 1005359239857LLU;
	static volatile uint64_t x243 = 108LLU;
	uint16_t x244 = 6U;
	int32_t t58 = 591161;

    t58 = (x241!=((x242%x243)&x244));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x245 = INT16_MIN;
	static uint8_t x246 = UINT8_MAX;
	int64_t x247 = INT64_MAX;
	volatile int32_t x248 = 2;
	int32_t t59 = 1341857;

    t59 = (x245!=((x246%x247)&x248));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x250 = INT16_MIN;
	int8_t x251 = -1;
	volatile int32_t t60 = 43779890;

    t60 = (x249!=((x250%x251)&x252));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x253 = 1241464LLU;
	uint64_t x254 = 4LLU;
	uint8_t x255 = 4U;
	int64_t x256 = INT64_MAX;
	int32_t t61 = -35;

    t61 = (x253!=((x254%x255)&x256));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x257 = INT16_MIN;
	int16_t x258 = -1;
	static volatile int32_t x259 = -1;
	int32_t t62 = 3;

    t62 = (x257!=((x258%x259)&x260));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x261 = 4706U;
	int32_t x264 = -1;
	int32_t t63 = -27135504;

    t63 = (x261!=((x262%x263)&x264));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x265 = INT8_MAX;
	static int16_t x266 = -1;
	int32_t x267 = INT32_MAX;
	uint32_t x268 = 3U;
	volatile int32_t t64 = 76465;

    t64 = (x265!=((x266%x267)&x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = INT32_MAX;
	volatile int64_t x270 = -1315LL;
	int8_t x271 = INT8_MAX;
	uint64_t x272 = 216671172811475083LLU;
	static int32_t t65 = -318;

    t65 = (x269!=((x270%x271)&x272));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x279 = -1LL;
	static int32_t x280 = -3;
	volatile int32_t t66 = 26801364;

    t66 = (x277!=((x278%x279)&x280));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = -1LL;
	volatile int8_t x282 = -1;
	int16_t x283 = 221;
	int32_t t67 = -13044;

    t67 = (x281!=((x282%x283)&x284));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x285 = -1;
	static int64_t x286 = -29977152LL;
	uint8_t x287 = 1U;
	int8_t x288 = INT8_MIN;

    t68 = (x285!=((x286%x287)&x288));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x289 = UINT64_MAX;
	int16_t x290 = INT16_MIN;
	static volatile int32_t t69 = -1;

    t69 = (x289!=((x290%x291)&x292));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x293 = -1;
	volatile int64_t x294 = -3393284958982389226LL;
	volatile int64_t x295 = -54741675LL;
	int32_t x296 = INT32_MIN;
	volatile int32_t t70 = 1984;

    t70 = (x293!=((x294%x295)&x296));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x297 = INT8_MIN;
	volatile uint64_t x299 = 569LLU;
	uint64_t x300 = 25011756LLU;
	int32_t t71 = -11507315;

    t71 = (x297!=((x298%x299)&x300));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x301 = -1LL;
	static uint32_t x303 = UINT32_MAX;
	static int16_t x304 = INT16_MAX;
	static volatile int32_t t72 = 14995808;

    t72 = (x301!=((x302%x303)&x304));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x305 = 7U;
	int8_t x307 = -1;
	static uint16_t x308 = UINT16_MAX;

    t73 = (x305!=((x306%x307)&x308));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x314 = -1LL;
	static int8_t x315 = INT8_MAX;
	static int16_t x316 = INT16_MIN;
	static int32_t t74 = -371;

    t74 = (x313!=((x314%x315)&x316));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x317 = INT8_MIN;
	volatile uint8_t x318 = 12U;
	int8_t x319 = INT8_MAX;
	int8_t x320 = 44;

    t75 = (x317!=((x318%x319)&x320));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x322 = UINT16_MAX;
	int16_t x323 = INT16_MIN;
	int32_t x324 = -1983358;

    t76 = (x321!=((x322%x323)&x324));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x325 = INT16_MAX;
	static uint8_t x327 = 1U;
	int8_t x328 = 0;
	int32_t t77 = 332385721;

    t77 = (x325!=((x326%x327)&x328));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x329 = INT16_MAX;
	int16_t x330 = 150;
	int32_t x332 = INT32_MAX;
	int32_t t78 = -426;

    t78 = (x329!=((x330%x331)&x332));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x333 = -380249LL;
	volatile int8_t x334 = INT8_MAX;
	int64_t x335 = -1LL;
	int64_t x336 = 4543LL;
	int32_t t79 = 289;

    t79 = (x333!=((x334%x335)&x336));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x338 = 49U;
	int8_t x339 = -7;
	int8_t x340 = -1;
	volatile int32_t t80 = -223;

    t80 = (x337!=((x338%x339)&x340));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x341 = INT64_MIN;
	static int64_t x342 = 5013201968553LL;
	uint8_t x343 = 1U;
	volatile uint16_t x344 = 48U;
	static volatile int32_t t81 = 14253107;

    t81 = (x341!=((x342%x343)&x344));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x345 = 24U;
	volatile int32_t x346 = -7;
	static uint8_t x347 = 1U;
	int8_t x348 = 7;

    t82 = (x345!=((x346%x347)&x348));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x349 = INT64_MAX;
	uint32_t x350 = UINT32_MAX;
	volatile uint32_t x351 = UINT32_MAX;
	int64_t x352 = -6878096761932342LL;
	volatile int32_t t83 = -46379;

    t83 = (x349!=((x350%x351)&x352));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x357 = INT32_MAX;
	volatile int16_t x358 = -14281;
	uint16_t x359 = 1U;
	static int32_t t84 = 657;

    t84 = (x357!=((x358%x359)&x360));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x362 = INT8_MIN;
	int32_t x363 = -1;
	int64_t x364 = -1737917090LL;
	volatile int32_t t85 = 88;

    t85 = (x361!=((x362%x363)&x364));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x365 = INT64_MIN;
	volatile uint16_t x366 = 1461U;
	volatile int16_t x367 = INT16_MAX;
	volatile int64_t x368 = INT64_MIN;
	static int32_t t86 = 0;

    t86 = (x365!=((x366%x367)&x368));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x369 = -3382;
	int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MIN;
	static volatile int32_t t87 = 355;

    t87 = (x369!=((x370%x371)&x372));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x373 = 6981LLU;
	volatile int8_t x374 = 0;
	uint16_t x375 = 11036U;
	int32_t t88 = -2;

    t88 = (x373!=((x374%x375)&x376));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x379 = INT16_MAX;
	uint16_t x380 = 2386U;
	static int32_t t89 = 7;

    t89 = (x377!=((x378%x379)&x380));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x381 = 13U;
	int16_t x382 = -4;
	int16_t x383 = -1;
	static volatile int32_t x384 = INT32_MIN;

    t90 = (x381!=((x382%x383)&x384));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x385 = -486LL;
	static uint64_t x386 = UINT64_MAX;
	int64_t x387 = -67241100945479071LL;
	static uint8_t x388 = UINT8_MAX;
	volatile int32_t t91 = 7;

    t91 = (x385!=((x386%x387)&x388));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x389 = INT16_MAX;
	int64_t x390 = INT64_MIN;
	int64_t x392 = INT64_MAX;
	volatile int32_t t92 = -7;

    t92 = (x389!=((x390%x391)&x392));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x393 = INT8_MIN;
	uint16_t x394 = 12U;
	int16_t x395 = -1927;
	uint8_t x396 = 40U;
	volatile int32_t t93 = -101739;

    t93 = (x393!=((x394%x395)&x396));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int16_t x399 = INT16_MIN;
	static int64_t x400 = INT64_MIN;
	volatile int32_t t94 = 1;

    t94 = (x397!=((x398%x399)&x400));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x401 = UINT64_MAX;
	int64_t x402 = INT64_MIN;
	volatile int16_t x403 = INT16_MAX;
	int32_t t95 = -240705;

    t95 = (x401!=((x402%x403)&x404));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x405 = 489U;
	static volatile uint32_t x406 = 0U;
	uint8_t x407 = UINT8_MAX;
	int16_t x408 = 24;

    t96 = (x405!=((x406%x407)&x408));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x409 = 15U;
	uint64_t x410 = 399116806556572210LLU;
	volatile int32_t x411 = 14;
	volatile int32_t x412 = 2171;
	volatile int32_t t97 = 58209;

    t97 = (x409!=((x410%x411)&x412));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x413 = UINT32_MAX;
	int16_t x414 = INT16_MAX;
	uint32_t x415 = 5380U;
	int8_t x416 = -1;

    t98 = (x413!=((x414%x415)&x416));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x417 = -60LL;
	volatile int64_t x418 = 872280LL;
	int32_t x419 = 21162;
	int8_t x420 = -1;
	volatile int32_t t99 = 7868;

    t99 = (x417!=((x418%x419)&x420));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x421 = INT64_MAX;
	uint16_t x422 = UINT16_MAX;
	static uint32_t x423 = UINT32_MAX;
	int16_t x424 = INT16_MIN;
	volatile int32_t t100 = 453450811;

    t100 = (x421!=((x422%x423)&x424));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x425 = -1;
	int16_t x426 = INT16_MIN;
	int32_t x427 = INT32_MIN;
	uint64_t x428 = UINT64_MAX;
	static volatile int32_t t101 = 38;

    t101 = (x425!=((x426%x427)&x428));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x430 = UINT32_MAX;
	static int8_t x431 = INT8_MAX;
	int32_t t102 = 35515;

    t102 = (x429!=((x430%x431)&x432));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x433 = 10293U;
	static volatile int32_t x434 = INT32_MIN;
	volatile uint8_t x435 = 69U;
	int16_t x436 = INT16_MAX;
	int32_t t103 = 70;

    t103 = (x433!=((x434%x435)&x436));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x438 = -1;
	static volatile int64_t x439 = INT64_MAX;
	int32_t t104 = 13;

    t104 = (x437!=((x438%x439)&x440));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x441 = UINT8_MAX;
	int32_t x442 = INT32_MIN;
	int8_t x443 = 1;
	int64_t x444 = INT64_MIN;
	int32_t t105 = 420143426;

    t105 = (x441!=((x442%x443)&x444));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x445 = -1;
	static int64_t x446 = -20697841600942774LL;
	int8_t x447 = INT8_MIN;
	int8_t x448 = 5;
	int32_t t106 = 79535;

    t106 = (x445!=((x446%x447)&x448));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x449 = -2944756856861075LL;
	static int32_t x450 = INT32_MAX;
	int32_t x451 = 62444;
	uint16_t x452 = 1U;
	volatile int32_t t107 = 51949;

    t107 = (x449!=((x450%x451)&x452));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x453 = INT64_MIN;
	uint32_t x454 = 254U;
	static int64_t x455 = -1LL;
	uint8_t x456 = UINT8_MAX;
	int32_t t108 = 163662074;

    t108 = (x453!=((x454%x455)&x456));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x459 = INT64_MIN;
	int64_t x460 = INT64_MAX;
	int32_t t109 = 7607769;

    t109 = (x457!=((x458%x459)&x460));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x461 = INT8_MAX;
	int16_t x462 = -8012;
	int8_t x463 = INT8_MAX;

    t110 = (x461!=((x462%x463)&x464));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x465 = INT16_MIN;
	uint8_t x466 = UINT8_MAX;
	volatile int16_t x468 = -159;

    t111 = (x465!=((x466%x467)&x468));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x469 = INT16_MAX;
	static uint8_t x470 = 6U;
	static int64_t x471 = INT64_MIN;
	int32_t t112 = 83;

    t112 = (x469!=((x470%x471)&x472));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x473 = INT16_MAX;
	volatile int16_t x474 = INT16_MAX;

    t113 = (x473!=((x474%x475)&x476));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x477 = -1;
	static int64_t x478 = 2310413600267322591LL;
	int8_t x480 = INT8_MIN;
	volatile int32_t t114 = 24942745;

    t114 = (x477!=((x478%x479)&x480));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x481 = INT8_MIN;
	int16_t x482 = INT16_MIN;
	int32_t x484 = INT32_MAX;

    t115 = (x481!=((x482%x483)&x484));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x485 = -1;
	uint16_t x486 = UINT16_MAX;
	volatile int16_t x487 = INT16_MAX;
	volatile uint32_t x488 = 1607729005U;

    t116 = (x485!=((x486%x487)&x488));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x489 = 3587236U;
	int16_t x491 = 2449;
	uint32_t x492 = UINT32_MAX;

    t117 = (x489!=((x490%x491)&x492));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint32_t x493 = UINT32_MAX;
	volatile int16_t x494 = INT16_MIN;
	int64_t x495 = -1LL;
	int32_t x496 = 410012;
	volatile int32_t t118 = 11242;

    t118 = (x493!=((x494%x495)&x496));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int8_t x497 = INT8_MAX;
	uint8_t x498 = 16U;
	static int8_t x499 = INT8_MIN;
	int64_t x500 = -1LL;
	int32_t t119 = 25331232;

    t119 = (x497!=((x498%x499)&x500));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x501 = INT64_MIN;
	volatile int8_t x502 = INT8_MIN;
	static int16_t x504 = INT16_MIN;
	volatile int32_t t120 = -606472249;

    t120 = (x501!=((x502%x503)&x504));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x505 = 64U;
	int64_t x507 = -1LL;
	uint16_t x508 = 0U;

    t121 = (x505!=((x506%x507)&x508));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x510 = 0;
	volatile uint64_t x512 = 87606266LLU;

    t122 = (x509!=((x510%x511)&x512));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x513 = 27341780619LLU;
	static int32_t t123 = 1;

    t123 = (x513!=((x514%x515)&x516));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x517 = INT16_MIN;
	static uint16_t x518 = 102U;
	int8_t x519 = INT8_MIN;
	volatile int32_t x520 = 72520;

    t124 = (x517!=((x518%x519)&x520));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x521 = 151;
	int16_t x522 = INT16_MIN;
	uint32_t x523 = 1497U;
	uint8_t x524 = 87U;
	volatile int32_t t125 = 334874;

    t125 = (x521!=((x522%x523)&x524));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x526 = INT16_MIN;
	static int16_t x527 = INT16_MIN;
	static uint8_t x528 = UINT8_MAX;
	volatile int32_t t126 = 54891;

    t126 = (x525!=((x526%x527)&x528));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x529 = INT16_MIN;
	static int32_t x532 = INT32_MIN;

    t127 = (x529!=((x530%x531)&x532));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x533 = -1;
	int16_t x535 = 37;
	volatile int32_t t128 = -435141;

    t128 = (x533!=((x534%x535)&x536));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x537 = INT8_MAX;
	int8_t x539 = 1;
	int8_t x540 = -1;

    t129 = (x537!=((x538%x539)&x540));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x541 = UINT64_MAX;
	uint64_t x542 = 345667194516253LLU;
	uint8_t x543 = UINT8_MAX;
	static int8_t x544 = INT8_MIN;
	int32_t t130 = 924;

    t130 = (x541!=((x542%x543)&x544));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x545 = UINT16_MAX;
	volatile uint8_t x547 = 120U;
	uint16_t x548 = 695U;
	volatile int32_t t131 = 85900716;

    t131 = (x545!=((x546%x547)&x548));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x549 = 0;
	int16_t x550 = 2726;
	static int32_t x552 = INT32_MIN;
	volatile int32_t t132 = 2461444;

    t132 = (x549!=((x550%x551)&x552));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x557 = INT32_MAX;
	int8_t x558 = INT8_MAX;
	volatile int8_t x559 = 5;
	int16_t x560 = INT16_MAX;
	volatile int32_t t133 = -5;

    t133 = (x557!=((x558%x559)&x560));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x561 = INT8_MIN;
	uint32_t x562 = 13U;
	uint8_t x563 = UINT8_MAX;
	volatile int32_t t134 = -527;

    t134 = (x561!=((x562%x563)&x564));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x566 = INT8_MAX;
	volatile int8_t x567 = INT8_MIN;
	static int16_t x568 = INT16_MIN;
	static int32_t t135 = -573;

    t135 = (x565!=((x566%x567)&x568));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint8_t x569 = 0U;
	static int32_t x570 = INT32_MAX;
	static int32_t x571 = 187485720;
	static volatile int16_t x572 = INT16_MIN;

    t136 = (x569!=((x570%x571)&x572));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x573 = 35U;
	int16_t x574 = 0;
	uint8_t x576 = UINT8_MAX;

    t137 = (x573!=((x574%x575)&x576));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x579 = 23498U;
	int16_t x580 = 5522;
	static int32_t t138 = 100868600;

    t138 = (x577!=((x578%x579)&x580));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x581 = 402773587U;
	int32_t x582 = 628;
	volatile uint32_t x583 = 207757574U;
	int64_t x584 = -1LL;
	int32_t t139 = 12205;

    t139 = (x581!=((x582%x583)&x584));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x585 = 1U;
	int8_t x586 = INT8_MAX;
	volatile int8_t x587 = -1;
	int16_t x588 = INT16_MAX;
	static volatile int32_t t140 = -1461;

    t140 = (x585!=((x586%x587)&x588));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x589 = INT8_MAX;
	uint16_t x590 = 10U;
	int8_t x592 = INT8_MAX;
	static int32_t t141 = 1633590;

    t141 = (x589!=((x590%x591)&x592));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x593 = UINT16_MAX;
	uint32_t x595 = 234U;
	volatile int16_t x596 = INT16_MIN;

    t142 = (x593!=((x594%x595)&x596));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x598 = 10496239977349658LL;
	int16_t x600 = 5;

    t143 = (x597!=((x598%x599)&x600));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x605 = 49201674292857LL;
	uint32_t x606 = UINT32_MAX;
	static uint16_t x607 = 11088U;
	volatile int32_t t144 = -3105711;

    t144 = (x605!=((x606%x607)&x608));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x610 = 0;
	uint32_t x612 = 335823930U;
	static volatile int32_t t145 = 24;

    t145 = (x609!=((x610%x611)&x612));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x613 = 87U;
	int32_t x614 = 222556;
	static int32_t x615 = INT32_MAX;

    t146 = (x613!=((x614%x615)&x616));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x617 = INT8_MAX;
	static uint64_t x618 = 335915008777971LLU;
	volatile uint32_t x619 = 14U;
	int32_t x620 = -1;
	volatile int32_t t147 = -532486;

    t147 = (x617!=((x618%x619)&x620));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x622 = INT16_MIN;
	int64_t x623 = INT64_MAX;
	int8_t x624 = INT8_MIN;
	int32_t t148 = 7;

    t148 = (x621!=((x622%x623)&x624));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x625 = INT16_MAX;
	int64_t x626 = 5LL;
	int32_t x627 = INT32_MAX;
	int8_t x628 = 3;
	static volatile int32_t t149 = 0;

    t149 = (x625!=((x626%x627)&x628));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x629 = 10440019U;
	int64_t x631 = -1LL;
	int16_t x632 = -1;
	volatile int32_t t150 = -7225;

    t150 = (x629!=((x630%x631)&x632));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x633 = INT32_MAX;
	uint32_t x634 = 18525U;
	uint64_t x635 = 1606097421740402LLU;

    t151 = (x633!=((x634%x635)&x636));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x637 = UINT32_MAX;
	int8_t x638 = 0;
	int16_t x640 = 3;
	static volatile int32_t t152 = -115623367;

    t152 = (x637!=((x638%x639)&x640));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x643 = INT16_MIN;
	static int32_t x644 = INT32_MIN;
	volatile int32_t t153 = 11927;

    t153 = (x641!=((x642%x643)&x644));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x645 = 1290499U;
	uint16_t x646 = 29555U;
	static int8_t x647 = INT8_MIN;
	volatile uint8_t x648 = 3U;

    t154 = (x645!=((x646%x647)&x648));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x649 = UINT32_MAX;
	volatile uint64_t x650 = UINT64_MAX;
	static int8_t x651 = INT8_MIN;
	int8_t x652 = 2;
	volatile int32_t t155 = 1;

    t155 = (x649!=((x650%x651)&x652));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x653 = 2;
	int8_t x654 = INT8_MIN;
	uint64_t x655 = UINT64_MAX;
	int64_t x656 = -1277509837082080398LL;
	volatile int32_t t156 = 76460541;

    t156 = (x653!=((x654%x655)&x656));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int64_t x657 = INT64_MAX;
	int32_t x658 = -1;
	volatile int32_t t157 = 8905;

    t157 = (x657!=((x658%x659)&x660));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x661 = INT64_MIN;
	volatile int16_t x662 = INT16_MIN;
	uint32_t x663 = 160772045U;
	int32_t t158 = 1730305;

    t158 = (x661!=((x662%x663)&x664));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x665 = INT8_MIN;
	int32_t x668 = 0;
	int32_t t159 = 0;

    t159 = (x665!=((x666%x667)&x668));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x669 = 254511U;
	static int8_t x670 = -1;
	static int32_t x671 = -1;
	uint64_t x672 = 8291555658003LLU;

    t160 = (x669!=((x670%x671)&x672));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x673 = INT64_MIN;
	int8_t x674 = 1;
	static int32_t x675 = INT32_MIN;
	uint8_t x676 = UINT8_MAX;
	int32_t t161 = 566494;

    t161 = (x673!=((x674%x675)&x676));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x677 = -1;
	volatile uint8_t x679 = 5U;
	int32_t x680 = INT32_MIN;
	int32_t t162 = -2018;

    t162 = (x677!=((x678%x679)&x680));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x681 = INT8_MAX;
	volatile int64_t x682 = -834342616863042LL;
	uint16_t x683 = 16036U;
	uint16_t x684 = UINT16_MAX;
	int32_t t163 = -635499;

    t163 = (x681!=((x682%x683)&x684));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x685 = 1;
	static int8_t x686 = 56;

    t164 = (x685!=((x686%x687)&x688));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x689 = -1;
	int64_t x690 = 14199341150465983LL;
	uint16_t x691 = 500U;
	int32_t x692 = 317442688;

    t165 = (x689!=((x690%x691)&x692));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x693 = -7;
	int8_t x694 = -1;
	int64_t x695 = 400631804685LL;
	int8_t x696 = 2;
	volatile int32_t t166 = -379;

    t166 = (x693!=((x694%x695)&x696));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x697 = 23682U;
	static volatile int8_t x698 = INT8_MIN;

    t167 = (x697!=((x698%x699)&x700));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x702 = 1;
	static uint32_t x703 = 14936U;
	int16_t x704 = -11242;
	static volatile int32_t t168 = -98313;

    t168 = (x701!=((x702%x703)&x704));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x705 = INT64_MIN;
	uint16_t x706 = 17U;
	int8_t x707 = 2;
	int8_t x708 = INT8_MAX;
	int32_t t169 = -41380;

    t169 = (x705!=((x706%x707)&x708));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint8_t x709 = 1U;
	static uint32_t x710 = UINT32_MAX;
	uint16_t x711 = 465U;
	static uint8_t x712 = 24U;

    t170 = (x709!=((x710%x711)&x712));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x713 = INT16_MIN;
	volatile int8_t x714 = INT8_MIN;
	volatile int32_t t171 = -31370151;

    t171 = (x713!=((x714%x715)&x716));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x721 = 1;
	int64_t x722 = INT64_MIN;
	volatile int64_t x723 = INT64_MAX;
	int32_t t172 = 94;

    t172 = (x721!=((x722%x723)&x724));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x725 = -1;
	int8_t x726 = 1;
	volatile int8_t x727 = -14;

    t173 = (x725!=((x726%x727)&x728));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x729 = INT64_MIN;
	volatile uint32_t x730 = UINT32_MAX;
	uint16_t x731 = UINT16_MAX;
	static int8_t x732 = INT8_MAX;
	static volatile int32_t t174 = 0;

    t174 = (x729!=((x730%x731)&x732));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x733 = 787003215LLU;
	int8_t x734 = 1;
	static volatile uint64_t x735 = 84LLU;
	int16_t x736 = 1405;
	volatile int32_t t175 = -13944978;

    t175 = (x733!=((x734%x735)&x736));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x737 = INT16_MAX;
	static volatile int8_t x738 = 8;
	int32_t x740 = -1;

    t176 = (x737!=((x738%x739)&x740));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x742 = 797519116U;
	int8_t x743 = -1;
	volatile int32_t x744 = INT32_MIN;
	volatile int32_t t177 = 0;

    t177 = (x741!=((x742%x743)&x744));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x746 = INT64_MIN;
	int64_t x747 = -1LL;
	int16_t x748 = INT16_MIN;
	static int32_t t178 = 5;

    t178 = (x745!=((x746%x747)&x748));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x749 = 7310;
	int32_t x751 = INT32_MIN;
	int64_t x752 = -6034399705223603LL;
	volatile int32_t t179 = -9;

    t179 = (x749!=((x750%x751)&x752));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x753 = INT8_MIN;
	uint8_t x754 = 2U;
	int16_t x755 = INT16_MIN;
	static int64_t x756 = INT64_MAX;
	volatile int32_t t180 = 914767007;

    t180 = (x753!=((x754%x755)&x756));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x757 = INT32_MIN;
	int32_t x758 = INT32_MIN;
	static volatile int8_t x759 = INT8_MAX;
	int8_t x760 = INT8_MIN;
	int32_t t181 = -205885326;

    t181 = (x757!=((x758%x759)&x760));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x761 = UINT64_MAX;
	uint32_t x762 = 1633U;
	static uint8_t x763 = 54U;
	int8_t x764 = -9;
	int32_t t182 = -1;

    t182 = (x761!=((x762%x763)&x764));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x765 = -747167799114080252LL;
	static uint8_t x766 = 0U;
	int64_t x767 = -1442043302280144LL;
	volatile int64_t x768 = -1439842LL;
	volatile int32_t t183 = 16655368;

    t183 = (x765!=((x766%x767)&x768));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x769 = INT32_MIN;
	uint8_t x770 = UINT8_MAX;
	static int32_t x771 = -1;
	uint32_t x772 = 943205U;
	int32_t t184 = -2102;

    t184 = (x769!=((x770%x771)&x772));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x774 = -1;
	int32_t x775 = INT32_MIN;
	volatile uint64_t x776 = 23728591729903LLU;
	volatile int32_t t185 = -1;

    t185 = (x773!=((x774%x775)&x776));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x777 = 52896653332773LL;
	int64_t x780 = -72803836322LL;

    t186 = (x777!=((x778%x779)&x780));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x782 = INT8_MIN;
	int64_t x783 = -1903108925634988502LL;
	static volatile int32_t t187 = -1560365;

    t187 = (x781!=((x782%x783)&x784));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x786 = INT64_MIN;
	static int8_t x787 = -1;
	volatile int32_t t188 = 193;

    t188 = (x785!=((x786%x787)&x788));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x789 = 7U;
	volatile int16_t x790 = -1;
	int16_t x791 = INT16_MIN;
	int8_t x792 = INT8_MIN;

    t189 = (x789!=((x790%x791)&x792));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x794 = UINT16_MAX;
	uint32_t x795 = 7659029U;
	volatile int32_t t190 = -7342;

    t190 = (x793!=((x794%x795)&x796));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x797 = 47U;
	int32_t x799 = INT32_MIN;
	int8_t x800 = INT8_MIN;
	volatile int32_t t191 = -9;

    t191 = (x797!=((x798%x799)&x800));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x801 = 16527103LLU;
	int32_t x803 = 3685067;
	static int8_t x804 = -1;
	int32_t t192 = -25;

    t192 = (x801!=((x802%x803)&x804));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x805 = -1;
	uint8_t x806 = 3U;

    t193 = (x805!=((x806%x807)&x808));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x809 = 88LLU;
	volatile uint32_t x810 = UINT32_MAX;
	static uint64_t x812 = 872807206161763LLU;
	static volatile int32_t t194 = -348779072;

    t194 = (x809!=((x810%x811)&x812));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x813 = 11;
	uint64_t x814 = 89584346089225LLU;
	int32_t x815 = INT32_MAX;

    t195 = (x813!=((x814%x815)&x816));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x818 = INT16_MIN;
	uint64_t x819 = 459122008188LLU;
	int8_t x820 = INT8_MAX;
	int32_t t196 = 14959;

    t196 = (x817!=((x818%x819)&x820));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x821 = INT64_MIN;
	int8_t x823 = 45;
	uint16_t x824 = 0U;
	static volatile int32_t t197 = -30;

    t197 = (x821!=((x822%x823)&x824));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x826 = -8;
	static int8_t x827 = -1;
	uint32_t x828 = 426436U;

    t198 = (x825!=((x826%x827)&x828));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x829 = 48U;
	uint32_t x830 = 36U;
	uint16_t x832 = 7674U;
	int32_t t199 = -140785;

    t199 = (x829!=((x830%x831)&x832));

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

