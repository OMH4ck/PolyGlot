
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

int8_t x1 = 19;
int8_t x2 = 0;
uint8_t x6 = UINT8_MAX;
int64_t x8 = INT64_MAX;
int32_t t1 = -2308;
uint32_t x13 = 221748649U;
static int64_t x14 = INT64_MIN;
static int32_t t3 = 1;
uint16_t x24 = 2731U;
int32_t x25 = INT32_MIN;
int8_t x28 = INT8_MAX;
int64_t x31 = INT64_MIN;
int8_t x39 = -1;
volatile int64_t x41 = -5LL;
static int32_t x45 = INT32_MAX;
volatile int64_t x49 = -2210089739889LL;
uint16_t x52 = UINT16_MAX;
int16_t x55 = INT16_MIN;
static int64_t x59 = -72281868288LL;
volatile int32_t t17 = -88036;
int16_t x78 = -2014;
static int16_t x81 = INT16_MIN;
int8_t x108 = INT8_MIN;
volatile int64_t x111 = 89102685219LL;
int32_t x112 = -1;
int8_t x113 = INT8_MAX;
int32_t t25 = -3;
uint64_t x127 = 432092813503075165LLU;
volatile int32_t t29 = -6293;
int8_t x137 = -52;
int64_t x138 = -1LL;
int32_t t30 = 412;
int64_t x142 = -800308246964671488LL;
static uint16_t x144 = 1U;
static volatile int32_t t33 = 1;
int32_t t34 = -149187217;
volatile int64_t x166 = -1LL;
int32_t x168 = -55299475;
volatile int32_t t35 = 6648;
static volatile int16_t x181 = -1;
volatile int32_t t37 = 868256;
int32_t x187 = 124;
int32_t x195 = INT32_MAX;
uint8_t x198 = 42U;
static uint32_t x199 = UINT32_MAX;
static volatile int8_t x222 = INT8_MIN;
uint16_t x228 = UINT16_MAX;
int16_t x238 = 25;
int32_t t49 = 770524;
volatile int32_t t50 = -1;
static uint8_t x250 = 59U;
volatile int8_t x263 = -1;
int32_t t57 = 0;
static volatile uint8_t x291 = UINT8_MAX;
int8_t x295 = INT8_MIN;
uint16_t x303 = 2590U;
volatile int32_t t63 = -447;
int16_t x312 = INT16_MAX;
volatile int16_t x324 = INT16_MAX;
static int32_t t67 = -264408628;
uint64_t x333 = UINT64_MAX;
volatile int32_t t72 = -10;
static int32_t x360 = -406;
int8_t x364 = -1;
static volatile int8_t x366 = -63;
int32_t t79 = -5;
uint64_t x382 = UINT64_MAX;
int32_t x383 = -1;
uint64_t x392 = UINT64_MAX;
volatile int8_t x398 = INT8_MIN;
volatile int16_t x401 = INT16_MIN;
static uint64_t x402 = 16994577LLU;
static int32_t x405 = 608539;
uint16_t x406 = UINT16_MAX;
volatile int32_t t86 = 26055;
int16_t x416 = -3740;
uint8_t x419 = UINT8_MAX;
int32_t x427 = INT32_MAX;
volatile int32_t t90 = -1661;
int16_t x435 = INT16_MIN;
volatile uint8_t x438 = 0U;
static volatile int16_t x440 = -1895;
volatile int32_t t92 = 225140;
int8_t x442 = -1;
int64_t x443 = -1LL;
volatile int8_t x447 = INT8_MAX;
static int16_t x450 = 1;
uint8_t x452 = 16U;
int32_t x454 = 458817;
int32_t t96 = 3125;
static int8_t x459 = INT8_MIN;
int64_t x464 = -1LL;
int32_t x465 = -1804818;
uint16_t x475 = 23U;
uint8_t x478 = 0U;
static int32_t t102 = 12;
volatile int32_t t103 = -1773447;
int16_t x485 = 492;
uint8_t x487 = UINT8_MAX;
int32_t x488 = -729449540;
uint16_t x493 = 195U;
int8_t x495 = 30;
uint16_t x498 = UINT16_MAX;
static int64_t x509 = 16LL;
uint64_t x510 = UINT64_MAX;
int32_t t109 = -44524;
volatile int32_t t110 = 35501;
int8_t x517 = INT8_MIN;
uint8_t x520 = 37U;
int32_t x529 = INT32_MAX;
int64_t x543 = 811270403057LL;
int32_t x552 = 1698124;
static int64_t x557 = INT64_MIN;
static int8_t x562 = 24;
uint64_t x563 = 10878086727LLU;
int8_t x577 = INT8_MIN;
int8_t x578 = INT8_MIN;
int32_t x580 = INT32_MIN;
int16_t x581 = INT16_MIN;
int32_t t124 = 1;
int32_t x588 = INT32_MIN;
static volatile int32_t x589 = 12508;
int8_t x591 = INT8_MIN;
int32_t t126 = -27433;
static int8_t x601 = INT8_MIN;
uint16_t x603 = 12761U;
int32_t t129 = -1;
uint64_t x617 = UINT64_MAX;
int32_t x620 = INT32_MAX;
int64_t x624 = 1056503893LL;
int16_t x627 = INT16_MIN;
volatile int8_t x640 = 4;
int64_t x646 = -1LL;
int64_t x647 = -329LL;
static int8_t x649 = 7;
static int8_t x652 = INT8_MIN;
uint16_t x656 = 58U;
static uint32_t x661 = 567405U;
uint32_t x665 = 97223U;
int64_t x666 = INT64_MAX;
volatile int32_t t143 = 32323631;
uint64_t x669 = 19042LLU;
static int32_t t144 = -55456068;
int64_t x674 = 17769663185470364LL;
int8_t x685 = 0;
int64_t x687 = INT64_MAX;
volatile uint32_t x688 = 955U;
int8_t x691 = INT8_MIN;
int32_t t151 = -1806124;
uint8_t x716 = 112U;
static int16_t x718 = -1;
int32_t x729 = INT32_MIN;
int8_t x735 = INT8_MIN;
int64_t x736 = INT64_MIN;
int32_t t156 = -1;
uint64_t x741 = 473452830LLU;
uint8_t x743 = 5U;
uint8_t x744 = 97U;
int32_t x750 = INT32_MAX;
int8_t x762 = -21;
int64_t x768 = INT64_MAX;
static volatile int32_t t162 = -247776;
int8_t x779 = INT8_MIN;
static uint8_t x782 = UINT8_MAX;
uint32_t x784 = 32657U;
uint64_t x790 = 251193LLU;
int16_t x791 = -13902;
static int8_t x798 = INT8_MAX;
int32_t t170 = -14314154;
int8_t x817 = 9;
volatile int64_t x818 = 2376937011LL;
volatile int32_t t175 = -3292440;
static volatile uint32_t x821 = 66145573U;
volatile int8_t x827 = -24;
int16_t x832 = -1;
uint16_t x840 = 25U;
int32_t t180 = -1;
uint64_t x846 = UINT64_MAX;
volatile int32_t x848 = INT32_MIN;
int16_t x858 = INT16_MIN;
static int32_t t184 = -1;
int16_t x861 = -1;
static int32_t t186 = -225;
volatile int32_t x869 = INT32_MIN;
int16_t x877 = -501;
int8_t x882 = 0;
uint64_t x895 = 8768010843LLU;
int16_t x899 = -1;
int32_t x903 = -1;
int32_t t195 = -222341562;


void f0(void) {
    	volatile int32_t x3 = -1;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 99388;

    t0 = (x1!=((x2+x3)%x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 50188U;
	int64_t x7 = -1LL;

    t1 = (x5!=((x6+x7)%x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x15 = 3U;
	volatile int8_t x16 = INT8_MIN;
	int32_t t2 = -512214;

    t2 = (x13!=((x14+x15)%x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 620LLU;
	volatile uint32_t x18 = UINT32_MAX;
	uint8_t x19 = 77U;
	int16_t x20 = -680;

    t3 = (x17!=((x18+x19)%x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint32_t x21 = 117012U;
	int8_t x22 = -5;
	int16_t x23 = -16;
	volatile int32_t t4 = 199137058;

    t4 = (x21!=((x22+x23)%x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x26 = INT32_MIN;
	static int8_t x27 = 1;
	volatile int32_t t5 = 1489082;

    t5 = (x25!=((x26+x27)%x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = -1;
	volatile uint64_t x30 = UINT64_MAX;
	uint8_t x32 = 37U;
	volatile int32_t t6 = 0;

    t6 = (x29!=((x30+x31)%x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int32_t x33 = -12110;
	volatile int16_t x34 = -2314;
	uint16_t x35 = UINT16_MAX;
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t7 = 127097;

    t7 = (x33!=((x34+x35)%x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = INT8_MIN;
	uint16_t x38 = UINT16_MAX;
	int16_t x40 = INT16_MIN;
	int32_t t8 = 43375874;

    t8 = (x37!=((x38+x39)%x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x42 = 37517U;
	int64_t x43 = INT64_MIN;
	int64_t x44 = -95644LL;
	volatile int32_t t9 = 85;

    t9 = (x41!=((x42+x43)%x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x46 = 496270345767LLU;
	uint8_t x47 = 16U;
	uint64_t x48 = 1736192LLU;
	volatile int32_t t10 = 614735011;

    t10 = (x45!=((x46+x47)%x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x50 = UINT8_MAX;
	int8_t x51 = 0;
	volatile int32_t t11 = -659386;

    t11 = (x49!=((x50+x51)%x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 140554203U;
	uint16_t x54 = UINT16_MAX;
	int64_t x56 = INT64_MIN;
	static volatile int32_t t12 = -181934517;

    t12 = (x53!=((x54+x55)%x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x57 = -1LL;
	static uint32_t x58 = UINT32_MAX;
	int32_t x60 = 116;
	volatile int32_t t13 = 6780;

    t13 = (x57!=((x58+x59)%x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x61 = 71643954315LLU;
	int8_t x62 = -3;
	volatile uint8_t x63 = UINT8_MAX;
	static int8_t x64 = INT8_MIN;
	int32_t t14 = -8542;

    t14 = (x61!=((x62+x63)%x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x65 = 0U;
	uint8_t x66 = UINT8_MAX;
	int16_t x67 = 9;
	int64_t x68 = INT64_MAX;
	volatile int32_t t15 = -1041879086;

    t15 = (x65!=((x66+x67)%x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x69 = -53;
	int64_t x70 = INT64_MIN;
	uint8_t x71 = UINT8_MAX;
	volatile int64_t x72 = 5066691LL;
	int32_t t16 = -8495737;

    t16 = (x69!=((x70+x71)%x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint16_t x73 = 2007U;
	volatile uint16_t x74 = UINT16_MAX;
	static int32_t x75 = 462131;
	int8_t x76 = INT8_MIN;

    t17 = (x73!=((x74+x75)%x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = INT64_MIN;
	volatile int8_t x79 = -28;
	int8_t x80 = INT8_MIN;
	int32_t t18 = 9906417;

    t18 = (x77!=((x78+x79)%x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x82 = 27U;
	int64_t x83 = -256050118820651792LL;
	volatile int64_t x84 = INT64_MAX;
	volatile int32_t t19 = -65262;

    t19 = (x81!=((x82+x83)%x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = 3407;
	static int64_t x90 = INT64_MIN;
	int16_t x91 = 665;
	uint8_t x92 = 18U;
	static volatile int32_t t20 = 861;

    t20 = (x89!=((x90+x91)%x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x97 = UINT16_MAX;
	int8_t x98 = INT8_MAX;
	int64_t x99 = -1LL;
	uint16_t x100 = 208U;
	volatile int32_t t21 = 97;

    t21 = (x97!=((x98+x99)%x100));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x105 = INT16_MIN;
	int16_t x106 = 3;
	static int16_t x107 = INT16_MAX;
	int32_t t22 = 1;

    t22 = (x105!=((x106+x107)%x108));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x109 = -228806LL;
	static int8_t x110 = INT8_MIN;
	volatile int32_t t23 = -2767;

    t23 = (x109!=((x110+x111)%x112));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x114 = 54098476U;
	int8_t x115 = INT8_MIN;
	volatile int8_t x116 = 3;
	int32_t t24 = -6270057;

    t24 = (x113!=((x114+x115)%x116));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x117 = INT64_MIN;
	int16_t x118 = INT16_MIN;
	volatile uint64_t x119 = UINT64_MAX;
	static int32_t x120 = INT32_MIN;

    t25 = (x117!=((x118+x119)%x120));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x121 = INT16_MAX;
	volatile int32_t x122 = INT32_MIN;
	int16_t x123 = 7;
	static int32_t x124 = -50;
	int32_t t26 = -6219086;

    t26 = (x121!=((x122+x123)%x124));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x125 = INT16_MIN;
	static int64_t x126 = -1LL;
	static int32_t x128 = INT32_MAX;
	volatile int32_t t27 = 6826;

    t27 = (x125!=((x126+x127)%x128));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x129 = UINT16_MAX;
	static int16_t x130 = INT16_MAX;
	uint8_t x131 = 0U;
	int16_t x132 = 129;
	int32_t t28 = 6206627;

    t28 = (x129!=((x130+x131)%x132));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x133 = -42;
	uint64_t x134 = 3239080770050LLU;
	int16_t x135 = INT16_MIN;
	uint64_t x136 = UINT64_MAX;

    t29 = (x133!=((x134+x135)%x136));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x139 = 82718710949LL;
	volatile int64_t x140 = -1LL;

    t30 = (x137!=((x138+x139)%x140));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x141 = INT8_MIN;
	volatile uint64_t x143 = 66LLU;
	static int32_t t31 = 131;

    t31 = (x141!=((x142+x143)%x144));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x145 = -17;
	int32_t x146 = INT32_MAX;
	static int64_t x147 = 93187294069934LL;
	static uint16_t x148 = 40U;
	int32_t t32 = -2929;

    t32 = (x145!=((x146+x147)%x148));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x149 = UINT16_MAX;
	int16_t x150 = 1;
	int16_t x151 = INT16_MIN;
	static volatile uint32_t x152 = UINT32_MAX;

    t33 = (x149!=((x150+x151)%x152));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x157 = -1;
	static uint64_t x158 = 680034282LLU;
	uint8_t x159 = 1U;
	static int32_t x160 = INT32_MIN;

    t34 = (x157!=((x158+x159)%x160));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x165 = -1LL;
	int8_t x167 = 9;

    t35 = (x165!=((x166+x167)%x168));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x177 = INT64_MIN;
	int8_t x178 = INT8_MAX;
	uint8_t x179 = 1U;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t36 = -3535051;

    t36 = (x177!=((x178+x179)%x180));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x182 = 3654887922653LLU;
	int16_t x183 = INT16_MAX;
	int32_t x184 = INT32_MIN;

    t37 = (x181!=((x182+x183)%x184));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MIN;
	static int32_t x188 = -1;
	volatile int32_t t38 = 647;

    t38 = (x185!=((x186+x187)%x188));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x189 = -6;
	uint64_t x190 = UINT64_MAX;
	static int32_t x191 = -1;
	volatile uint32_t x192 = 859U;
	volatile int32_t t39 = -141;

    t39 = (x189!=((x190+x191)%x192));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x193 = 6368;
	int64_t x194 = -1LL;
	uint64_t x196 = 3615028633277LLU;
	int32_t t40 = -81077300;

    t40 = (x193!=((x194+x195)%x196));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x197 = -1;
	uint64_t x200 = 104336LLU;
	static int32_t t41 = 44;

    t41 = (x197!=((x198+x199)%x200));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x201 = INT16_MIN;
	uint16_t x202 = UINT16_MAX;
	int64_t x203 = 229331942968931610LL;
	static int16_t x204 = INT16_MIN;
	static int32_t t42 = 5595151;

    t42 = (x201!=((x202+x203)%x204));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MAX;
	int64_t x207 = -1LL;
	volatile uint32_t x208 = 925102115U;
	int32_t t43 = 874;

    t43 = (x205!=((x206+x207)%x208));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x213 = UINT32_MAX;
	int8_t x214 = 11;
	static volatile uint64_t x215 = 566239924459230225LLU;
	int16_t x216 = -1;
	volatile int32_t t44 = -22962800;

    t44 = (x213!=((x214+x215)%x216));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x221 = 2667284LL;
	static int32_t x223 = INT32_MAX;
	int16_t x224 = 1;
	int32_t t45 = -22;

    t45 = (x221!=((x222+x223)%x224));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x225 = 92524069LLU;
	uint16_t x226 = UINT16_MAX;
	int32_t x227 = 187314008;
	static volatile int32_t t46 = 1;

    t46 = (x225!=((x226+x227)%x228));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x229 = INT32_MIN;
	static uint64_t x230 = 849317647985340102LLU;
	int16_t x231 = INT16_MAX;
	int16_t x232 = INT16_MAX;
	int32_t t47 = 28826012;

    t47 = (x229!=((x230+x231)%x232));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x233 = -1;
	volatile int32_t x234 = 37067681;
	volatile int16_t x235 = INT16_MAX;
	int8_t x236 = 1;
	volatile int32_t t48 = -356181;

    t48 = (x233!=((x234+x235)%x236));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x237 = -1075368595414LL;
	static int16_t x239 = 46;
	int64_t x240 = INT64_MIN;

    t49 = (x237!=((x238+x239)%x240));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x245 = INT64_MIN;
	volatile uint64_t x246 = UINT64_MAX;
	int32_t x247 = -47;
	static volatile int32_t x248 = -941676858;

    t50 = (x245!=((x246+x247)%x248));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x249 = UINT64_MAX;
	int32_t x251 = -9;
	int64_t x252 = -1LL;
	static volatile int32_t t51 = -15204758;

    t51 = (x249!=((x250+x251)%x252));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x253 = 12;
	int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MIN;
	uint64_t x256 = 4197371516LLU;
	static volatile int32_t t52 = -89417;

    t52 = (x253!=((x254+x255)%x256));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MIN;
	static uint32_t x259 = 2807867U;
	static uint8_t x260 = UINT8_MAX;
	int32_t t53 = 0;

    t53 = (x257!=((x258+x259)%x260));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x261 = INT8_MIN;
	int8_t x262 = -1;
	volatile uint64_t x264 = 870073328237759LLU;
	int32_t t54 = -1833911;

    t54 = (x261!=((x262+x263)%x264));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x269 = UINT64_MAX;
	static int8_t x270 = INT8_MIN;
	int32_t x271 = 194;
	uint8_t x272 = 7U;
	volatile int32_t t55 = 779942257;

    t55 = (x269!=((x270+x271)%x272));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x273 = 31045553U;
	int32_t x274 = INT32_MIN;
	int32_t x275 = 4;
	uint32_t x276 = UINT32_MAX;
	int32_t t56 = 15607;

    t56 = (x273!=((x274+x275)%x276));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x281 = -1;
	static int32_t x282 = INT32_MAX;
	volatile int64_t x283 = -1LL;
	static int64_t x284 = INT64_MAX;

    t57 = (x281!=((x282+x283)%x284));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x285 = 65690492221855LLU;
	int64_t x286 = INT64_MIN;
	static uint16_t x287 = 31U;
	volatile uint32_t x288 = 280848356U;
	int32_t t58 = 739181;

    t58 = (x285!=((x286+x287)%x288));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x289 = 17090U;
	uint64_t x290 = 576534LLU;
	int16_t x292 = -23;
	volatile int32_t t59 = -7;

    t59 = (x289!=((x290+x291)%x292));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x293 = 2U;
	int8_t x294 = INT8_MAX;
	volatile int32_t x296 = INT32_MAX;
	int32_t t60 = -24;

    t60 = (x293!=((x294+x295)%x296));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x297 = INT16_MIN;
	int8_t x298 = -1;
	static volatile int64_t x299 = INT64_MAX;
	volatile int32_t x300 = INT32_MIN;
	int32_t t61 = -21470;

    t61 = (x297!=((x298+x299)%x300));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x301 = -1LL;
	int16_t x302 = INT16_MAX;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t62 = 6329776;

    t62 = (x301!=((x302+x303)%x304));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x305 = -13390LL;
	uint16_t x306 = UINT16_MAX;
	uint8_t x307 = UINT8_MAX;
	volatile int8_t x308 = -1;

    t63 = (x305!=((x306+x307)%x308));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x309 = INT64_MIN;
	int8_t x310 = -7;
	int16_t x311 = -1;
	volatile int32_t t64 = 217;

    t64 = (x309!=((x310+x311)%x312));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x313 = -1;
	static uint32_t x314 = 384254U;
	int16_t x315 = -1;
	int64_t x316 = 25888624LL;
	int32_t t65 = 547975032;

    t65 = (x313!=((x314+x315)%x316));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x317 = UINT64_MAX;
	int64_t x318 = -1LL;
	volatile int8_t x319 = INT8_MIN;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t66 = 469413;

    t66 = (x317!=((x318+x319)%x320));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x321 = 16567316206LL;
	uint16_t x322 = 6312U;
	int64_t x323 = -1LL;

    t67 = (x321!=((x322+x323)%x324));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x325 = -1LL;
	uint16_t x326 = UINT16_MAX;
	int8_t x327 = INT8_MIN;
	volatile uint8_t x328 = 33U;
	volatile int32_t t68 = -24750964;

    t68 = (x325!=((x326+x327)%x328));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x329 = -118068824;
	int64_t x330 = -2356302594LL;
	uint16_t x331 = 7447U;
	uint32_t x332 = 60U;
	int32_t t69 = 2;

    t69 = (x329!=((x330+x331)%x332));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x334 = 11691745034LLU;
	int32_t x335 = INT32_MIN;
	uint32_t x336 = 115303U;
	static int32_t t70 = 66824858;

    t70 = (x333!=((x334+x335)%x336));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x337 = -1;
	int16_t x338 = -1;
	volatile int16_t x339 = INT16_MIN;
	uint16_t x340 = UINT16_MAX;
	static int32_t t71 = 63935;

    t71 = (x337!=((x338+x339)%x340));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x341 = INT8_MIN;
	int64_t x342 = -30061LL;
	static int16_t x343 = INT16_MIN;
	uint64_t x344 = 6385814628LLU;

    t72 = (x341!=((x342+x343)%x344));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x345 = INT8_MIN;
	int16_t x346 = 0;
	static int32_t x347 = 24480;
	int8_t x348 = INT8_MIN;
	int32_t t73 = -44412396;

    t73 = (x345!=((x346+x347)%x348));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x349 = UINT32_MAX;
	volatile int64_t x350 = INT64_MAX;
	volatile int8_t x351 = -14;
	uint32_t x352 = 21790661U;
	volatile int32_t t74 = 1;

    t74 = (x349!=((x350+x351)%x352));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x353 = -2;
	int64_t x354 = INT64_MIN;
	uint16_t x355 = 7500U;
	static int8_t x356 = -1;
	int32_t t75 = 1612735;

    t75 = (x353!=((x354+x355)%x356));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x357 = INT16_MIN;
	uint16_t x358 = UINT16_MAX;
	uint32_t x359 = UINT32_MAX;
	static int32_t t76 = 121381874;

    t76 = (x357!=((x358+x359)%x360));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x361 = -1LL;
	int64_t x362 = 6664598LL;
	uint16_t x363 = 3746U;
	volatile int32_t t77 = 3813056;

    t77 = (x361!=((x362+x363)%x364));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x365 = INT8_MIN;
	uint32_t x367 = 352571U;
	volatile uint8_t x368 = 1U;
	volatile int32_t t78 = -226700205;

    t78 = (x365!=((x366+x367)%x368));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x373 = 1725U;
	int32_t x374 = -1;
	static uint16_t x375 = UINT16_MAX;
	uint8_t x376 = UINT8_MAX;

    t79 = (x373!=((x374+x375)%x376));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x377 = 286U;
	int32_t x378 = -473338262;
	static int16_t x379 = -6;
	int8_t x380 = INT8_MAX;
	static int32_t t80 = -322;

    t80 = (x377!=((x378+x379)%x380));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x381 = 1200159U;
	volatile int64_t x384 = INT64_MAX;
	volatile int32_t t81 = 258895862;

    t81 = (x381!=((x382+x383)%x384));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x385 = -370;
	int16_t x386 = INT16_MIN;
	volatile int8_t x387 = -11;
	int16_t x388 = -7943;
	static int32_t t82 = 17;

    t82 = (x385!=((x386+x387)%x388));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x389 = INT8_MIN;
	uint32_t x390 = UINT32_MAX;
	uint64_t x391 = 2LLU;
	volatile int32_t t83 = 137;

    t83 = (x389!=((x390+x391)%x392));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x397 = INT32_MIN;
	volatile int32_t x399 = 8358988;
	static volatile int16_t x400 = INT16_MIN;
	volatile int32_t t84 = 459609331;

    t84 = (x397!=((x398+x399)%x400));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x403 = 235200U;
	int64_t x404 = -1LL;
	int32_t t85 = 45613;

    t85 = (x401!=((x402+x403)%x404));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x407 = INT16_MIN;
	int32_t x408 = -13953;

    t86 = (x405!=((x406+x407)%x408));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x409 = INT8_MIN;
	uint64_t x410 = UINT64_MAX;
	static int32_t x411 = -59;
	int8_t x412 = -52;
	volatile int32_t t87 = -29515891;

    t87 = (x409!=((x410+x411)%x412));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x413 = 12098U;
	uint32_t x414 = 118U;
	int16_t x415 = INT16_MIN;
	int32_t t88 = 108553;

    t88 = (x413!=((x414+x415)%x416));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x417 = 345822U;
	volatile uint64_t x418 = UINT64_MAX;
	static uint16_t x420 = 824U;
	int32_t t89 = 16349;

    t89 = (x417!=((x418+x419)%x420));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x425 = INT8_MIN;
	uint32_t x426 = 43055281U;
	int16_t x428 = 11658;

    t90 = (x425!=((x426+x427)%x428));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x433 = INT8_MIN;
	int64_t x434 = 32447556468337410LL;
	volatile int32_t x436 = -260932382;
	int32_t t91 = 761109318;

    t91 = (x433!=((x434+x435)%x436));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x437 = 41U;
	int16_t x439 = INT16_MAX;

    t92 = (x437!=((x438+x439)%x440));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x441 = 10684659;
	int64_t x444 = INT64_MIN;
	int32_t t93 = -236;

    t93 = (x441!=((x442+x443)%x444));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x445 = UINT64_MAX;
	volatile uint16_t x446 = 259U;
	uint64_t x448 = 1025548506159LLU;
	int32_t t94 = -19338569;

    t94 = (x445!=((x446+x447)%x448));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x449 = INT32_MIN;
	int64_t x451 = -1LL;
	int32_t t95 = 1;

    t95 = (x449!=((x450+x451)%x452));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x453 = 14;
	volatile uint8_t x455 = 0U;
	uint8_t x456 = 72U;

    t96 = (x453!=((x454+x455)%x456));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x457 = 2039354LLU;
	volatile uint64_t x458 = 238639856093457LLU;
	uint16_t x460 = UINT16_MAX;
	volatile int32_t t97 = -28349526;

    t97 = (x457!=((x458+x459)%x460));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x461 = INT32_MIN;
	static uint16_t x462 = 1178U;
	int64_t x463 = -1LL;
	volatile int32_t t98 = 10;

    t98 = (x461!=((x462+x463)%x464));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x466 = UINT32_MAX;
	uint16_t x467 = 3U;
	uint8_t x468 = UINT8_MAX;
	volatile int32_t t99 = 6;

    t99 = (x465!=((x466+x467)%x468));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x469 = INT8_MAX;
	int16_t x470 = INT16_MIN;
	int64_t x471 = 1478LL;
	volatile int32_t x472 = 9775933;
	int32_t t100 = 25;

    t100 = (x469!=((x470+x471)%x472));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x473 = -1;
	int32_t x474 = INT32_MIN;
	int16_t x476 = INT16_MIN;
	volatile int32_t t101 = 5;

    t101 = (x473!=((x474+x475)%x476));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x477 = INT32_MIN;
	uint32_t x479 = 14175U;
	int32_t x480 = -1;

    t102 = (x477!=((x478+x479)%x480));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x481 = INT64_MIN;
	int8_t x482 = INT8_MAX;
	int32_t x483 = INT32_MIN;
	int64_t x484 = -1LL;

    t103 = (x481!=((x482+x483)%x484));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x486 = INT8_MIN;
	volatile int32_t t104 = -40019;

    t104 = (x485!=((x486+x487)%x488));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x489 = INT32_MAX;
	int8_t x490 = INT8_MIN;
	volatile int64_t x491 = -920615808229156054LL;
	volatile uint64_t x492 = 5831784690709600LLU;
	int32_t t105 = 6;

    t105 = (x489!=((x490+x491)%x492));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x494 = 495U;
	int64_t x496 = -268219950091503LL;
	static volatile int32_t t106 = 458935014;

    t106 = (x493!=((x494+x495)%x496));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x497 = 1439;
	uint16_t x499 = 0U;
	static int16_t x500 = INT16_MIN;
	volatile int32_t t107 = 4073;

    t107 = (x497!=((x498+x499)%x500));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x501 = 1120;
	uint32_t x502 = UINT32_MAX;
	static volatile int8_t x503 = 0;
	uint16_t x504 = 3U;
	int32_t t108 = -9;

    t108 = (x501!=((x502+x503)%x504));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x511 = UINT32_MAX;
	uint8_t x512 = 26U;

    t109 = (x509!=((x510+x511)%x512));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x513 = 3;
	int16_t x514 = -1;
	volatile int64_t x515 = 3LL;
	uint8_t x516 = UINT8_MAX;

    t110 = (x513!=((x514+x515)%x516));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x518 = -21;
	static volatile int32_t x519 = -1;
	int32_t t111 = 671447697;

    t111 = (x517!=((x518+x519)%x520));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x521 = 1;
	int8_t x522 = -1;
	uint64_t x523 = 158LLU;
	uint8_t x524 = 1U;
	int32_t t112 = -819867454;

    t112 = (x521!=((x522+x523)%x524));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x525 = -1LL;
	static int16_t x526 = INT16_MIN;
	static int32_t x527 = -1;
	int32_t x528 = -3979278;
	volatile int32_t t113 = 1;

    t113 = (x525!=((x526+x527)%x528));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x530 = -11LL;
	uint8_t x531 = UINT8_MAX;
	uint8_t x532 = 6U;
	static volatile int32_t t114 = 9663562;

    t114 = (x529!=((x530+x531)%x532));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x533 = INT32_MAX;
	int32_t x534 = 1;
	int32_t x535 = INT32_MIN;
	int32_t x536 = -1;
	volatile int32_t t115 = -609;

    t115 = (x533!=((x534+x535)%x536));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x541 = INT16_MIN;
	volatile uint16_t x542 = 3579U;
	int32_t x544 = 14900913;
	volatile int32_t t116 = 2692;

    t116 = (x541!=((x542+x543)%x544));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x549 = 11U;
	int32_t x550 = INT32_MAX;
	static volatile int64_t x551 = INT64_MIN;
	int32_t t117 = -1;

    t117 = (x549!=((x550+x551)%x552));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x553 = UINT8_MAX;
	uint32_t x554 = 2U;
	volatile int64_t x555 = INT64_MIN;
	static int64_t x556 = INT64_MIN;
	volatile int32_t t118 = 3;

    t118 = (x553!=((x554+x555)%x556));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x558 = UINT8_MAX;
	int8_t x559 = INT8_MAX;
	uint16_t x560 = UINT16_MAX;
	static volatile int32_t t119 = 2;

    t119 = (x557!=((x558+x559)%x560));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x561 = -1LL;
	static int16_t x564 = -1;
	int32_t t120 = -12470725;

    t120 = (x561!=((x562+x563)%x564));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x565 = 316911526U;
	uint8_t x566 = UINT8_MAX;
	int64_t x567 = 71679379481798LL;
	volatile int8_t x568 = -2;
	int32_t t121 = -1337231;

    t121 = (x565!=((x566+x567)%x568));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x569 = -1077811323428LL;
	int8_t x570 = INT8_MIN;
	static int8_t x571 = 1;
	volatile uint16_t x572 = 25U;
	volatile int32_t t122 = -10366;

    t122 = (x569!=((x570+x571)%x572));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x579 = 151514U;
	int32_t t123 = 10267450;

    t123 = (x577!=((x578+x579)%x580));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x582 = 2U;
	static uint64_t x583 = 2519135LLU;
	volatile uint32_t x584 = UINT32_MAX;

    t124 = (x581!=((x582+x583)%x584));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x585 = INT64_MIN;
	int16_t x586 = 5;
	static uint32_t x587 = 1U;
	int32_t t125 = -1;

    t125 = (x585!=((x586+x587)%x588));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x590 = -1;
	int32_t x592 = 15;

    t126 = (x589!=((x590+x591)%x592));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x593 = -1;
	static volatile int64_t x594 = 355342271955507839LL;
	volatile int8_t x595 = 49;
	uint8_t x596 = 55U;
	int32_t t127 = -8129;

    t127 = (x593!=((x594+x595)%x596));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x597 = 51U;
	volatile int32_t x598 = INT32_MIN;
	volatile uint16_t x599 = 5U;
	volatile uint32_t x600 = 2216876U;
	static int32_t t128 = 0;

    t128 = (x597!=((x598+x599)%x600));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x602 = 436319774966988277LLU;
	uint16_t x604 = UINT16_MAX;

    t129 = (x601!=((x602+x603)%x604));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x609 = -21725LL;
	int64_t x610 = INT64_MIN;
	uint16_t x611 = 0U;
	uint32_t x612 = 1322691162U;
	volatile int32_t t130 = -12570890;

    t130 = (x609!=((x610+x611)%x612));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x613 = INT64_MAX;
	int32_t x614 = INT32_MAX;
	int8_t x615 = INT8_MIN;
	int16_t x616 = 1;
	int32_t t131 = 503742;

    t131 = (x613!=((x614+x615)%x616));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x618 = 6U;
	uint32_t x619 = UINT32_MAX;
	static int32_t t132 = -47933423;

    t132 = (x617!=((x618+x619)%x620));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x621 = 24U;
	int16_t x622 = INT16_MIN;
	uint32_t x623 = UINT32_MAX;
	static volatile int32_t t133 = -2;

    t133 = (x621!=((x622+x623)%x624));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x625 = -839762121;
	uint32_t x626 = 34044U;
	uint16_t x628 = 26U;
	volatile int32_t t134 = -61765;

    t134 = (x625!=((x626+x627)%x628));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x629 = 26U;
	static uint32_t x630 = 4044U;
	uint32_t x631 = 46110U;
	int16_t x632 = 3778;
	int32_t t135 = -247;

    t135 = (x629!=((x630+x631)%x632));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x637 = INT64_MIN;
	volatile int16_t x638 = 0;
	int64_t x639 = INT64_MIN;
	volatile int32_t t136 = 1;

    t136 = (x637!=((x638+x639)%x640));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x641 = INT64_MAX;
	static int32_t x642 = 7;
	int64_t x643 = INT64_MIN;
	uint64_t x644 = UINT64_MAX;
	int32_t t137 = 91043;

    t137 = (x641!=((x642+x643)%x644));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x645 = 126615LL;
	int64_t x648 = -12966130848881395LL;
	volatile int32_t t138 = -2462213;

    t138 = (x645!=((x646+x647)%x648));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x650 = 913U;
	volatile uint32_t x651 = 12U;
	volatile int32_t t139 = 9632;

    t139 = (x649!=((x650+x651)%x652));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x653 = -1;
	volatile int8_t x654 = INT8_MIN;
	static int16_t x655 = INT16_MIN;
	volatile int32_t t140 = 3;

    t140 = (x653!=((x654+x655)%x656));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x657 = INT16_MIN;
	static uint8_t x658 = 46U;
	volatile int16_t x659 = -1853;
	static int16_t x660 = 1437;
	volatile int32_t t141 = 667;

    t141 = (x657!=((x658+x659)%x660));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x662 = -1LL;
	int16_t x663 = INT16_MIN;
	uint64_t x664 = 186570LLU;
	int32_t t142 = 1829219;

    t142 = (x661!=((x662+x663)%x664));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x667 = INT8_MIN;
	int64_t x668 = INT64_MAX;

    t143 = (x665!=((x666+x667)%x668));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x670 = -1;
	volatile int16_t x671 = 0;
	int8_t x672 = INT8_MAX;

    t144 = (x669!=((x670+x671)%x672));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x673 = 26606U;
	uint32_t x675 = UINT32_MAX;
	int16_t x676 = INT16_MIN;
	static int32_t t145 = -23538852;

    t145 = (x673!=((x674+x675)%x676));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x677 = 19;
	int8_t x678 = INT8_MIN;
	int64_t x679 = INT64_MAX;
	int32_t x680 = -1;
	static int32_t t146 = 1;

    t146 = (x677!=((x678+x679)%x680));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x686 = INT8_MIN;
	volatile int32_t t147 = -5100480;

    t147 = (x685!=((x686+x687)%x688));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x689 = UINT32_MAX;
	int8_t x690 = -1;
	static int8_t x692 = -1;
	volatile int32_t t148 = 16;

    t148 = (x689!=((x690+x691)%x692));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x693 = 115;
	uint16_t x694 = 14U;
	uint64_t x695 = UINT64_MAX;
	int8_t x696 = INT8_MIN;
	int32_t t149 = 125;

    t149 = (x693!=((x694+x695)%x696));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x701 = UINT64_MAX;
	static uint32_t x702 = UINT32_MAX;
	int8_t x703 = INT8_MAX;
	uint8_t x704 = 3U;
	int32_t t150 = -1810;

    t150 = (x701!=((x702+x703)%x704));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x709 = -1;
	int64_t x710 = 3LL;
	int16_t x711 = INT16_MIN;
	int32_t x712 = INT32_MIN;

    t151 = (x709!=((x710+x711)%x712));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x713 = 873996913829LLU;
	uint16_t x714 = 1U;
	volatile int16_t x715 = INT16_MIN;
	volatile int32_t t152 = 1;

    t152 = (x713!=((x714+x715)%x716));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x717 = INT32_MIN;
	int8_t x719 = INT8_MAX;
	static uint8_t x720 = UINT8_MAX;
	volatile int32_t t153 = 234704946;

    t153 = (x717!=((x718+x719)%x720));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x725 = UINT8_MAX;
	int64_t x726 = INT64_MAX;
	int8_t x727 = -1;
	int16_t x728 = -1;
	volatile int32_t t154 = -13;

    t154 = (x725!=((x726+x727)%x728));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x730 = 12393993;
	static volatile int64_t x731 = INT64_MIN;
	int16_t x732 = INT16_MIN;
	int32_t t155 = -23172;

    t155 = (x729!=((x730+x731)%x732));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x733 = INT32_MAX;
	static volatile int16_t x734 = 963;

    t156 = (x733!=((x734+x735)%x736));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x742 = UINT16_MAX;
	volatile int32_t t157 = 0;

    t157 = (x741!=((x742+x743)%x744));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x749 = INT8_MIN;
	int64_t x751 = -118445782LL;
	static volatile int8_t x752 = INT8_MAX;
	volatile int32_t t158 = 10839;

    t158 = (x749!=((x750+x751)%x752));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x753 = 40U;
	uint64_t x754 = UINT64_MAX;
	volatile uint16_t x755 = 1U;
	int16_t x756 = 9435;
	volatile int32_t t159 = 9298;

    t159 = (x753!=((x754+x755)%x756));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x757 = INT8_MAX;
	int64_t x758 = 145818418LL;
	static uint16_t x759 = 24221U;
	int32_t x760 = INT32_MIN;
	volatile int32_t t160 = 93103955;

    t160 = (x757!=((x758+x759)%x760));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x761 = -33LL;
	int16_t x763 = -1;
	int16_t x764 = INT16_MIN;
	volatile int32_t t161 = -1492;

    t161 = (x761!=((x762+x763)%x764));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x765 = 419U;
	int16_t x766 = INT16_MAX;
	int64_t x767 = -1LL;

    t162 = (x765!=((x766+x767)%x768));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x769 = -1;
	int16_t x770 = INT16_MIN;
	volatile int16_t x771 = -1;
	uint32_t x772 = UINT32_MAX;
	static volatile int32_t t163 = 21711731;

    t163 = (x769!=((x770+x771)%x772));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x773 = INT8_MIN;
	uint16_t x774 = 2U;
	uint8_t x775 = 122U;
	volatile int16_t x776 = INT16_MIN;
	volatile int32_t t164 = -19;

    t164 = (x773!=((x774+x775)%x776));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x777 = 25320U;
	volatile int8_t x778 = INT8_MAX;
	int32_t x780 = -1;
	int32_t t165 = 74;

    t165 = (x777!=((x778+x779)%x780));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x781 = 20523LLU;
	int8_t x783 = -1;
	volatile int32_t t166 = -17782452;

    t166 = (x781!=((x782+x783)%x784));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x785 = INT16_MIN;
	static int64_t x786 = -1LL;
	uint32_t x787 = 30U;
	int32_t x788 = -51;
	static int32_t t167 = -129306;

    t167 = (x785!=((x786+x787)%x788));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x789 = INT16_MAX;
	static int64_t x792 = -2926904088LL;
	volatile int32_t t168 = 0;

    t168 = (x789!=((x790+x791)%x792));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x793 = INT16_MIN;
	int32_t x794 = -1;
	int64_t x795 = 445462LL;
	uint16_t x796 = 748U;
	static int32_t t169 = 0;

    t169 = (x793!=((x794+x795)%x796));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x797 = UINT64_MAX;
	uint64_t x799 = 2475560LLU;
	int32_t x800 = 219;

    t170 = (x797!=((x798+x799)%x800));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x801 = INT16_MIN;
	uint64_t x802 = 409033194LLU;
	uint16_t x803 = 3294U;
	int64_t x804 = -291LL;
	volatile int32_t t171 = 6;

    t171 = (x801!=((x802+x803)%x804));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x805 = -444;
	int32_t x806 = -3165021;
	volatile int16_t x807 = INT16_MIN;
	int16_t x808 = INT16_MAX;
	volatile int32_t t172 = 786844053;

    t172 = (x805!=((x806+x807)%x808));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x809 = 193U;
	static volatile int16_t x810 = 29;
	int16_t x811 = 1;
	uint64_t x812 = 257043965382241551LLU;
	static int32_t t173 = 298293;

    t173 = (x809!=((x810+x811)%x812));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x813 = INT16_MAX;
	int16_t x814 = INT16_MIN;
	int32_t x815 = 236436;
	int64_t x816 = INT64_MIN;
	volatile int32_t t174 = -27;

    t174 = (x813!=((x814+x815)%x816));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x819 = 45267757337721LLU;
	int16_t x820 = -12121;

    t175 = (x817!=((x818+x819)%x820));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x822 = -2;
	volatile uint8_t x823 = 6U;
	int16_t x824 = INT16_MIN;
	volatile int32_t t176 = 636;

    t176 = (x821!=((x822+x823)%x824));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x825 = 11499326523058LLU;
	int16_t x826 = 7754;
	uint16_t x828 = 6U;
	volatile int32_t t177 = 10;

    t177 = (x825!=((x826+x827)%x828));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x829 = 111090;
	int8_t x830 = 11;
	volatile int64_t x831 = -33LL;
	volatile int32_t t178 = -28;

    t178 = (x829!=((x830+x831)%x832));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x833 = 5889937901706LLU;
	static int16_t x834 = INT16_MIN;
	uint16_t x835 = UINT16_MAX;
	int8_t x836 = 26;
	int32_t t179 = -110780253;

    t179 = (x833!=((x834+x835)%x836));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x837 = INT32_MAX;
	static int32_t x838 = -2;
	uint64_t x839 = 4076451LLU;

    t180 = (x837!=((x838+x839)%x840));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x841 = UINT32_MAX;
	volatile int16_t x842 = -22;
	int64_t x843 = INT64_MAX;
	volatile uint8_t x844 = 1U;
	volatile int32_t t181 = -3211;

    t181 = (x841!=((x842+x843)%x844));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x845 = 205297430413LLU;
	static int32_t x847 = -1;
	int32_t t182 = 30694;

    t182 = (x845!=((x846+x847)%x848));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x849 = 0;
	int16_t x850 = 1666;
	uint64_t x851 = 86209758361769LLU;
	static int16_t x852 = INT16_MIN;
	volatile int32_t t183 = 4019654;

    t183 = (x849!=((x850+x851)%x852));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x857 = -1;
	int8_t x859 = 5;
	int8_t x860 = INT8_MIN;

    t184 = (x857!=((x858+x859)%x860));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x862 = 57U;
	volatile int16_t x863 = 1788;
	volatile int8_t x864 = INT8_MIN;
	int32_t t185 = -57969061;

    t185 = (x861!=((x862+x863)%x864));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x865 = INT16_MIN;
	static int32_t x866 = -19056470;
	int64_t x867 = INT64_MAX;
	uint32_t x868 = 75033U;

    t186 = (x865!=((x866+x867)%x868));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x870 = -6109LL;
	uint16_t x871 = UINT16_MAX;
	static volatile uint32_t x872 = 328U;
	volatile int32_t t187 = -977792005;

    t187 = (x869!=((x870+x871)%x872));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x873 = 23U;
	static uint32_t x874 = UINT32_MAX;
	volatile int8_t x875 = -1;
	int8_t x876 = -1;
	volatile int32_t t188 = 682742;

    t188 = (x873!=((x874+x875)%x876));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x878 = INT16_MIN;
	uint32_t x879 = UINT32_MAX;
	uint64_t x880 = 1132814700229432209LLU;
	int32_t t189 = 4913;

    t189 = (x877!=((x878+x879)%x880));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x881 = 108466U;
	static volatile int8_t x883 = INT8_MIN;
	int8_t x884 = INT8_MIN;
	volatile int32_t t190 = 64940715;

    t190 = (x881!=((x882+x883)%x884));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x885 = INT8_MIN;
	static uint32_t x886 = 584941U;
	int8_t x887 = -1;
	int8_t x888 = -1;
	static int32_t t191 = 972058;

    t191 = (x885!=((x886+x887)%x888));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x889 = 6768U;
	int64_t x890 = INT64_MAX;
	volatile int64_t x891 = INT64_MIN;
	volatile int8_t x892 = INT8_MIN;
	volatile int32_t t192 = -32442869;

    t192 = (x889!=((x890+x891)%x892));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x893 = UINT64_MAX;
	volatile int64_t x894 = INT64_MIN;
	uint16_t x896 = UINT16_MAX;
	volatile int32_t t193 = -9251616;

    t193 = (x893!=((x894+x895)%x896));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x897 = INT64_MIN;
	uint16_t x898 = 2U;
	int8_t x900 = INT8_MAX;
	int32_t t194 = 399390056;

    t194 = (x897!=((x898+x899)%x900));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x901 = INT16_MIN;
	static uint32_t x902 = 4U;
	int32_t x904 = INT32_MAX;

    t195 = (x901!=((x902+x903)%x904));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x905 = INT64_MIN;
	int32_t x906 = -23993;
	uint16_t x907 = UINT16_MAX;
	uint64_t x908 = UINT64_MAX;
	int32_t t196 = -817;

    t196 = (x905!=((x906+x907)%x908));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x909 = -1;
	uint8_t x910 = 0U;
	uint64_t x911 = 175405752859144164LLU;
	volatile uint8_t x912 = 32U;
	int32_t t197 = 5;

    t197 = (x909!=((x910+x911)%x912));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x913 = INT64_MIN;
	int32_t x914 = INT32_MAX;
	int64_t x915 = -5627050537068643LL;
	volatile int32_t x916 = -1;
	static int32_t t198 = 1997;

    t198 = (x913!=((x914+x915)%x916));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x917 = INT32_MIN;
	volatile int8_t x918 = INT8_MAX;
	int32_t x919 = INT32_MIN;
	volatile int16_t x920 = INT16_MIN;
	volatile int32_t t199 = -1;

    t199 = (x917!=((x918+x919)%x920));

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

