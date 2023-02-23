
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

static volatile int32_t x2 = INT32_MIN;
int8_t x10 = INT8_MIN;
uint64_t x17 = 7657151919826061594LLU;
int64_t x20 = INT64_MAX;
int8_t x22 = -1;
int32_t x27 = INT32_MAX;
int32_t t7 = -167553029;
volatile int32_t t8 = -15;
int8_t x40 = -1;
int32_t x43 = -1;
uint64_t x44 = UINT64_MAX;
int8_t x49 = -1;
int32_t t13 = -6426;
volatile uint32_t x67 = 20878606U;
int8_t x68 = INT8_MAX;
static int8_t x73 = INT8_MIN;
int64_t x76 = -1LL;
int16_t x84 = -1;
uint64_t t19 = 4943529LLU;
volatile int32_t t20 = 29441932;
volatile int64_t x89 = -6526392442394LL;
int32_t t22 = 2984714;
int64_t x97 = INT64_MIN;
uint64_t x99 = UINT64_MAX;
int16_t x105 = 13480;
static int16_t x111 = INT16_MIN;
volatile int32_t t26 = 906357978;
int8_t x127 = INT8_MAX;
static volatile int32_t t30 = -353442;
static int32_t x139 = INT32_MAX;
uint16_t x147 = UINT16_MAX;
volatile int32_t t37 = 1;
int8_t x159 = -5;
volatile uint16_t x160 = 1U;
int32_t x163 = -48;
uint8_t x164 = 23U;
int32_t x166 = -1;
int8_t x168 = INT8_MIN;
uint64_t x183 = 3808045079LLU;
static int8_t x184 = INT8_MAX;
volatile int64_t x186 = -1LL;
static int8_t x190 = -17;
uint16_t x191 = 6660U;
volatile int32_t t48 = 1;
int64_t x203 = -1LL;
int32_t t50 = 9224;
int16_t x210 = INT16_MAX;
uint8_t x216 = UINT8_MAX;
volatile int32_t t53 = 0;
volatile uint16_t x221 = 6572U;
static int32_t x222 = INT32_MIN;
int32_t x223 = -1;
static int32_t t56 = 19077;
volatile int32_t x242 = INT32_MIN;
volatile int8_t x244 = -19;
uint8_t x247 = 10U;
int64_t x249 = INT64_MAX;
volatile uint16_t x250 = 107U;
volatile int32_t t62 = 28027;
int32_t t64 = -185116577;
int16_t x268 = 124;
volatile uint64_t t65 = 4493042622565271LLU;
uint32_t x269 = 2U;
uint8_t x273 = 34U;
static volatile uint32_t x274 = 1701U;
uint64_t x287 = 4829549LLU;
int32_t t69 = -42201400;
volatile uint32_t x289 = 14143175U;
int16_t x292 = -10;
int8_t x294 = -1;
volatile int64_t t71 = -2LL;
volatile uint32_t x303 = 3802U;
int64_t x307 = INT64_MIN;
volatile int32_t x310 = INT32_MIN;
static uint64_t x311 = 792791997822340LLU;
int64_t t74 = 1727340837208512LL;
int64_t x314 = -256656598617308LL;
int8_t x321 = -1;
int32_t t77 = 651;
int64_t x328 = INT64_MAX;
uint64_t t78 = 2LLU;
static int16_t x329 = -12;
int32_t x343 = -1;
int8_t x345 = INT8_MIN;
volatile uint8_t x346 = 2U;
uint8_t x351 = 9U;
volatile int32_t x363 = INT32_MAX;
uint16_t x364 = UINT16_MAX;
static volatile uint64_t t87 = 517LLU;
volatile int16_t x365 = -3618;
volatile int8_t x375 = -1;
int32_t x377 = -442101;
int64_t x379 = -1LL;
volatile uint16_t x380 = 641U;
uint32_t x384 = 685568U;
static int8_t x389 = INT8_MIN;
static int32_t x393 = -1;
int32_t x409 = INT32_MIN;
uint64_t x411 = UINT64_MAX;
static int64_t x413 = -9409735174LL;
static volatile int64_t t100 = -2118497680406095LL;
int32_t x418 = 7063;
volatile int32_t t102 = -1;
uint8_t x425 = 2U;
static int64_t x426 = INT64_MAX;
uint8_t x427 = 7U;
int16_t x431 = -1067;
static volatile int32_t x437 = INT32_MIN;
int64_t x442 = INT64_MIN;
int8_t x445 = -1;
int16_t x447 = INT16_MIN;
int16_t x449 = INT16_MIN;
uint64_t x457 = UINT64_MAX;
volatile uint64_t t111 = 762149888480263LLU;
int64_t x469 = INT64_MIN;
int64_t t114 = INT64_MIN;
uint16_t x479 = 26149U;
int32_t t116 = -3085;
int8_t x486 = INT8_MIN;
uint32_t x495 = 857U;
int8_t x496 = 15;
uint16_t x500 = 0U;
volatile int32_t t120 = -15718;
static int8_t x502 = 1;
static uint32_t t122 = 528U;
uint32_t x510 = 27695U;
uint8_t x512 = 18U;
uint8_t x513 = UINT8_MAX;
uint8_t x519 = 0U;
static uint32_t x523 = 64209U;
uint32_t t126 = 1773U;
static int16_t x525 = -1;
volatile int32_t t128 = -447746;
int64_t x538 = INT64_MIN;
uint64_t x544 = 8978608342764673LLU;
int64_t x552 = INT64_MIN;
static int32_t x564 = INT32_MIN;
volatile int32_t t135 = INT32_MIN;
static uint32_t x593 = UINT32_MAX;
int32_t x597 = -1;
int8_t x602 = INT8_MIN;
uint16_t x604 = UINT16_MAX;
uint32_t x607 = 158511U;
volatile int32_t x610 = INT32_MAX;
int32_t t146 = -473381124;
int8_t x615 = -1;
uint32_t x616 = 9699173U;
uint64_t t147 = 13012LLU;
uint8_t x623 = 96U;
volatile int32_t x626 = -1;
static volatile uint16_t x636 = 0U;
uint64_t x637 = 8570084515280780939LLU;
int16_t x643 = INT16_MIN;
uint64_t x651 = UINT64_MAX;
volatile uint8_t x653 = UINT8_MAX;
static int16_t x656 = 304;
static int32_t t157 = 83608;
volatile int8_t x658 = INT8_MIN;
uint64_t x662 = UINT64_MAX;
static int64_t x664 = INT64_MIN;
int32_t t159 = 23833682;
int64_t x666 = -1LL;
volatile uint16_t x676 = 37U;
int32_t x682 = -1;
volatile int8_t x686 = -1;
int32_t x690 = INT32_MAX;
static int32_t x693 = -1;
int64_t x702 = INT64_MIN;
int64_t x706 = 10309661357489LL;
int32_t x714 = INT32_MIN;
uint32_t x720 = 956808U;
int32_t t174 = 5860236;
int16_t x725 = INT16_MIN;
volatile int8_t x727 = INT8_MIN;
static int8_t x731 = -1;
int64_t x733 = -1LL;
int32_t x734 = -6;
uint32_t x735 = 1039366U;
static uint64_t t178 = 584384LLU;
int64_t x750 = INT64_MIN;
volatile uint16_t x753 = 3U;
uint64_t x759 = 404904283356LLU;
uint16_t x773 = UINT16_MAX;
uint16_t x775 = 58U;
int8_t x776 = -1;
int32_t t188 = 466;
static uint8_t x783 = 3U;
volatile int64_t x785 = 19387838851015LL;
int16_t x796 = 0;
int8_t x798 = INT8_MIN;
int8_t x807 = -22;
int16_t x809 = -1;
int32_t x810 = 421248;
int16_t x812 = INT16_MIN;
int32_t t196 = 2;
int32_t x818 = INT32_MIN;
uint16_t x819 = 155U;
volatile int8_t x824 = INT8_MIN;
static volatile int32_t t199 = -1438149;


void f0(void) {
    	static volatile int32_t x1 = INT32_MAX;
	uint16_t x3 = UINT16_MAX;
	int32_t x4 = -163696;
	int32_t t0 = INT32_MAX;

    t0 = (x1+((x2>x3)<=x4));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -1;
	int8_t x6 = INT8_MIN;
	int32_t x7 = -35279;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -31849;

    t1 = (x5+((x6>x7)<=x8));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = -1;
	uint16_t x11 = UINT16_MAX;
	int8_t x12 = -1;
	volatile int32_t t2 = 27;

    t2 = (x9+((x10>x11)<=x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -20;
	int16_t x14 = -1;
	static int64_t x15 = INT64_MIN;
	static int16_t x16 = INT16_MIN;
	int32_t t3 = -454483639;

    t3 = (x13+((x14>x15)<=x16));

    if (t3 != -20) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = INT64_MIN;
	int16_t x19 = -1;
	uint64_t t4 = 2670685LLU;

    t4 = (x17+((x18>x19)<=x20));

    if (t4 != 7657151919826061595LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = 2U;
	int16_t x23 = -1581;
	int64_t x24 = -1LL;
	int32_t t5 = 53;

    t5 = (x21+((x22>x23)<=x24));

    if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 1710159U;
	int64_t x26 = INT64_MIN;
	int8_t x28 = INT8_MIN;
	volatile uint32_t t6 = 62414U;

    t6 = (x25+((x26>x27)<=x28));

    if (t6 != 1710159U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 28047;
	uint16_t x30 = UINT16_MAX;
	int8_t x31 = INT8_MAX;
	int16_t x32 = INT16_MIN;

    t7 = (x29+((x30>x31)<=x32));

    if (t7 != 28047) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -5;
	volatile int32_t x34 = INT32_MAX;
	uint64_t x35 = 11048806446849130LLU;
	int16_t x36 = INT16_MIN;

    t8 = (x33+((x34>x35)<=x36));

    if (t8 != -5) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 353U;
	int8_t x38 = INT8_MAX;
	int16_t x39 = INT16_MIN;
	volatile int32_t t9 = 13351;

    t9 = (x37+((x38>x39)<=x40));

    if (t9 != 353) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int32_t x42 = INT32_MIN;
	int32_t t10 = -288;

    t10 = (x41+((x42>x43)<=x44));

    if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 24967036LLU;
	int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MIN;
	uint8_t x48 = UINT8_MAX;
	uint64_t t11 = 0LLU;

    t11 = (x45+((x46>x47)<=x48));

    if (t11 != 24967037LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint32_t x50 = UINT32_MAX;
	static int64_t x51 = -62330799766571LL;
	static volatile int16_t x52 = INT16_MAX;
	int32_t t12 = 3;

    t12 = (x49+((x50>x51)<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	int64_t x54 = -1LL;
	uint8_t x55 = 2U;
	int16_t x56 = INT16_MAX;

    t13 = (x53+((x54>x55)<=x56));

    if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = UINT64_MAX;
	int16_t x58 = 8252;
	int8_t x59 = INT8_MIN;
	int8_t x60 = -2;
	uint64_t t14 = UINT64_MAX;

    t14 = (x57+((x58>x59)<=x60));

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x65 = INT64_MIN;
	static int16_t x66 = 336;
	static volatile int64_t t15 = -561436064661385773LL;

    t15 = (x65+((x66>x67)<=x68));

    if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x69 = UINT32_MAX;
	uint64_t x70 = UINT64_MAX;
	static int8_t x71 = -53;
	int64_t x72 = INT64_MIN;
	uint32_t t16 = UINT32_MAX;

    t16 = (x69+((x70>x71)<=x72));

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x74 = 10861953;
	int8_t x75 = -1;
	volatile int32_t t17 = -1011233;

    t17 = (x73+((x74>x75)<=x76));

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint8_t x77 = 61U;
	int64_t x78 = INT64_MIN;
	volatile uint8_t x79 = UINT8_MAX;
	uint8_t x80 = 1U;
	volatile int32_t t18 = -7737552;

    t18 = (x77+((x78>x79)<=x80));

    if (t18 != 62) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = 15596092425077LLU;
	uint64_t x82 = 2666028369207592007LLU;
	uint64_t x83 = UINT64_MAX;

    t19 = (x81+((x82>x83)<=x84));

    if (t19 != 15596092425077LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x85 = 126U;
	uint16_t x86 = 2927U;
	int64_t x87 = INT64_MAX;
	static int64_t x88 = -27428LL;

    t20 = (x85+((x86>x87)<=x88));

    if (t20 != 126) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x90 = INT16_MIN;
	volatile uint8_t x91 = UINT8_MAX;
	volatile uint8_t x92 = UINT8_MAX;
	static int64_t t21 = -28LL;

    t21 = (x89+((x90>x91)<=x92));

    if (t21 != -6526392442393LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x93 = 11;
	uint16_t x94 = UINT16_MAX;
	int8_t x95 = 3;
	static int64_t x96 = INT64_MAX;

    t22 = (x93+((x94>x95)<=x96));

    if (t22 != 12) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x98 = 1052361138;
	static volatile int32_t x100 = INT32_MIN;
	volatile int64_t t23 = INT64_MIN;

    t23 = (x97+((x98>x99)<=x100));

    if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x101 = 690U;
	volatile int32_t x102 = INT32_MAX;
	int16_t x103 = INT16_MIN;
	int64_t x104 = INT64_MIN;
	volatile int32_t t24 = 10012075;

    t24 = (x101+((x102>x103)<=x104));

    if (t24 != 690) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x106 = INT64_MAX;
	int8_t x107 = 34;
	static volatile int16_t x108 = INT16_MIN;
	volatile int32_t t25 = 13033;

    t25 = (x105+((x106>x107)<=x108));

    if (t25 != 13480) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MIN;
	int16_t x110 = 7707;
	int32_t x112 = 4;

    t26 = (x109+((x110>x111)<=x112));

    if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MAX;
	volatile uint32_t x114 = 24872079U;
	volatile uint64_t x115 = UINT64_MAX;
	volatile uint32_t x116 = UINT32_MAX;
	volatile int32_t t27 = -471;

    t27 = (x113+((x114>x115)<=x116));

    if (t27 != 32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = -67147933LL;
	static uint16_t x118 = 31U;
	uint16_t x119 = UINT16_MAX;
	int64_t x120 = -1027254777017374LL;
	volatile int64_t t28 = -6862LL;

    t28 = (x117+((x118>x119)<=x120));

    if (t28 != -67147933LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x121 = UINT8_MAX;
	uint32_t x122 = 2U;
	int8_t x123 = INT8_MIN;
	static uint8_t x124 = 5U;
	int32_t t29 = 222587;

    t29 = (x121+((x122>x123)<=x124));

    if (t29 != 256) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x125 = INT16_MAX;
	static int16_t x126 = -1;
	uint16_t x128 = 1847U;

    t30 = (x125+((x126>x127)<=x128));

    if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x129 = UINT64_MAX;
	int64_t x130 = -21LL;
	int32_t x131 = INT32_MIN;
	int32_t x132 = 15;
	static volatile uint64_t t31 = 5001641LLU;

    t31 = (x129+((x130>x131)<=x132));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x133 = 1889591LLU;
	volatile int16_t x134 = 7767;
	uint16_t x135 = UINT16_MAX;
	volatile int32_t x136 = 21;
	uint64_t t32 = 175796750LLU;

    t32 = (x133+((x134>x135)<=x136));

    if (t32 != 1889592LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x137 = 3938884235913160LL;
	static int8_t x138 = -52;
	int32_t x140 = INT32_MIN;
	volatile int64_t t33 = 30198LL;

    t33 = (x137+((x138>x139)<=x140));

    if (t33 != 3938884235913160LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x141 = UINT16_MAX;
	int8_t x142 = INT8_MIN;
	volatile uint64_t x143 = UINT64_MAX;
	static uint32_t x144 = 675831U;
	static int32_t t34 = 6366039;

    t34 = (x141+((x142>x143)<=x144));

    if (t34 != 65536) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = -1;
	uint8_t x146 = UINT8_MAX;
	volatile uint64_t x148 = UINT64_MAX;
	int32_t t35 = -35176;

    t35 = (x145+((x146>x147)<=x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x149 = INT32_MAX;
	int64_t x150 = INT64_MIN;
	static uint32_t x151 = UINT32_MAX;
	int8_t x152 = -27;
	int32_t t36 = INT32_MAX;

    t36 = (x149+((x150>x151)<=x152));

    if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x153 = -405;
	int8_t x154 = -5;
	static int8_t x155 = -13;
	volatile int16_t x156 = -1;

    t37 = (x153+((x154>x155)<=x156));

    if (t37 != -405) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x157 = 52;
	volatile int8_t x158 = -1;
	volatile int32_t t38 = -90244715;

    t38 = (x157+((x158>x159)<=x160));

    if (t38 != 53) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = -1;
	static uint16_t x162 = 8442U;
	int32_t t39 = -21;

    t39 = (x161+((x162>x163)<=x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x165 = 124U;
	int16_t x167 = 0;
	volatile int32_t t40 = -501498;

    t40 = (x165+((x166>x167)<=x168));

    if (t40 != 124) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x169 = 1714U;
	uint64_t x170 = UINT64_MAX;
	int64_t x171 = -1281435LL;
	int64_t x172 = -1LL;
	static volatile uint32_t t41 = 257783469U;

    t41 = (x169+((x170>x171)<=x172));

    if (t41 != 1714U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x173 = UINT32_MAX;
	volatile uint64_t x174 = 30145LLU;
	uint64_t x175 = UINT64_MAX;
	int16_t x176 = INT16_MIN;
	volatile uint32_t t42 = UINT32_MAX;

    t42 = (x173+((x174>x175)<=x176));

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x177 = UINT16_MAX;
	volatile int32_t x178 = -536079591;
	uint8_t x179 = UINT8_MAX;
	static uint32_t x180 = UINT32_MAX;
	int32_t t43 = -1;

    t43 = (x177+((x178>x179)<=x180));

    if (t43 != 65536) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x181 = 6610204;
	uint16_t x182 = 336U;
	int32_t t44 = 193974;

    t44 = (x181+((x182>x183)<=x184));

    if (t44 != 6610205) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x185 = INT64_MIN;
	volatile int16_t x187 = -1;
	int32_t x188 = 44;
	static int64_t t45 = 1660260365479LL;

    t45 = (x185+((x186>x187)<=x188));

    if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = 6;
	static uint16_t x192 = 2U;
	int32_t t46 = -282900269;

    t46 = (x189+((x190>x191)<=x192));

    if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x193 = INT64_MIN;
	int64_t x194 = -59944331LL;
	int64_t x195 = INT64_MIN;
	static int8_t x196 = INT8_MIN;
	volatile int64_t t47 = INT64_MIN;

    t47 = (x193+((x194>x195)<=x196));

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x197 = INT8_MIN;
	uint8_t x198 = 14U;
	static volatile uint16_t x199 = UINT16_MAX;
	int32_t x200 = -509207;

    t48 = (x197+((x198>x199)<=x200));

    if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x201 = -148;
	volatile int8_t x202 = INT8_MIN;
	uint64_t x204 = 461069499LLU;
	int32_t t49 = -244114;

    t49 = (x201+((x202>x203)<=x204));

    if (t49 != -147) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x205 = 0;
	uint32_t x206 = 438769U;
	int8_t x207 = -5;
	volatile int16_t x208 = INT16_MIN;

    t50 = (x205+((x206>x207)<=x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x209 = 111829U;
	static int32_t x211 = INT32_MAX;
	int32_t x212 = INT32_MAX;
	static volatile uint32_t t51 = 0U;

    t51 = (x209+((x210>x211)<=x212));

    if (t51 != 111830U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x213 = -1LL;
	int16_t x214 = -2542;
	int32_t x215 = -385399231;
	volatile int64_t t52 = -1403820833714200584LL;

    t52 = (x213+((x214>x215)<=x216));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x217 = INT16_MIN;
	volatile int64_t x218 = 0LL;
	volatile uint64_t x219 = 66298804977374182LLU;
	int8_t x220 = -3;

    t53 = (x217+((x218>x219)<=x220));

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x224 = -1;
	int32_t t54 = -1844;

    t54 = (x221+((x222>x223)<=x224));

    if (t54 != 6572) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x225 = UINT64_MAX;
	int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MIN;
	uint16_t x228 = 4U;
	uint64_t t55 = 0LLU;

    t55 = (x225+((x226>x227)<=x228));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x229 = 0U;
	volatile int8_t x230 = -3;
	int32_t x231 = INT32_MAX;
	uint64_t x232 = 11109LLU;

    t56 = (x229+((x230>x231)<=x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x233 = INT16_MIN;
	int32_t x234 = -1;
	volatile uint8_t x235 = 35U;
	uint8_t x236 = 62U;
	static int32_t t57 = 7047;

    t57 = (x233+((x234>x235)<=x236));

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x237 = -105106304;
	uint32_t x238 = 1167673U;
	static int16_t x239 = -1000;
	uint16_t x240 = 11594U;
	static int32_t t58 = 199873;

    t58 = (x237+((x238>x239)<=x240));

    if (t58 != -105106303) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x241 = INT16_MAX;
	int8_t x243 = INT8_MAX;
	volatile int32_t t59 = -19;

    t59 = (x241+((x242>x243)<=x244));

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x245 = 11LLU;
	int32_t x246 = 69;
	volatile int32_t x248 = INT32_MIN;
	volatile uint64_t t60 = 89LLU;

    t60 = (x245+((x246>x247)<=x248));

    if (t60 != 11LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x251 = INT16_MAX;
	int16_t x252 = -58;
	int64_t t61 = INT64_MAX;

    t61 = (x249+((x250>x251)<=x252));

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x253 = 38U;
	uint32_t x254 = 10976451U;
	static int64_t x255 = INT64_MAX;
	uint8_t x256 = 1U;

    t62 = (x253+((x254>x255)<=x256));

    if (t62 != 39) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x257 = 139U;
	static volatile int16_t x258 = INT16_MIN;
	static int32_t x259 = INT32_MIN;
	int32_t x260 = INT32_MIN;
	volatile int32_t t63 = -13698;

    t63 = (x257+((x258>x259)<=x260));

    if (t63 != 139) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x261 = -28823;
	uint64_t x262 = UINT64_MAX;
	int64_t x263 = INT64_MIN;
	static int64_t x264 = INT64_MIN;

    t64 = (x261+((x262>x263)<=x264));

    if (t64 != -28823) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x265 = 4644101113LLU;
	int32_t x266 = INT32_MAX;
	int32_t x267 = -1;

    t65 = (x265+((x266>x267)<=x268));

    if (t65 != 4644101114LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x270 = -2829045477LL;
	static int8_t x271 = 0;
	int16_t x272 = INT16_MIN;
	uint32_t t66 = 160U;

    t66 = (x269+((x270>x271)<=x272));

    if (t66 != 2U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x275 = 0U;
	static int64_t x276 = -1LL;
	static int32_t t67 = 117;

    t67 = (x273+((x274>x275)<=x276));

    if (t67 != 34) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x277 = UINT64_MAX;
	volatile uint32_t x278 = 6U;
	int32_t x279 = 1971;
	uint8_t x280 = UINT8_MAX;
	uint64_t t68 = 6481588LLU;

    t68 = (x277+((x278>x279)<=x280));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x285 = 0U;
	volatile int32_t x286 = INT32_MAX;
	volatile int32_t x288 = 9777;

    t69 = (x285+((x286>x287)<=x288));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x290 = 1U;
	volatile uint16_t x291 = 125U;
	uint32_t t70 = 25U;

    t70 = (x289+((x290>x291)<=x292));

    if (t70 != 14143175U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x293 = 15LL;
	int8_t x295 = 1;
	int32_t x296 = INT32_MIN;

    t71 = (x293+((x294>x295)<=x296));

    if (t71 != 15LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x301 = 1;
	static volatile int16_t x302 = INT16_MIN;
	static int16_t x304 = -1;
	int32_t t72 = -2485016;

    t72 = (x301+((x302>x303)<=x304));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x305 = -1;
	static int16_t x306 = INT16_MIN;
	static uint64_t x308 = 457767592LLU;
	static volatile int32_t t73 = 51;

    t73 = (x305+((x306>x307)<=x308));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x309 = INT64_MIN;
	uint16_t x312 = 94U;

    t74 = (x309+((x310>x311)<=x312));

    if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x313 = INT8_MAX;
	static volatile uint16_t x315 = 4395U;
	uint8_t x316 = 7U;
	int32_t t75 = -1;

    t75 = (x313+((x314>x315)<=x316));

    if (t75 != 128) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = -1;
	int64_t x318 = 30081LL;
	int64_t x319 = INT64_MIN;
	static int16_t x320 = INT16_MIN;
	int32_t t76 = 22;

    t76 = (x317+((x318>x319)<=x320));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x322 = -227648LL;
	volatile int16_t x323 = -3721;
	volatile int8_t x324 = INT8_MIN;

    t77 = (x321+((x322>x323)<=x324));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x325 = 61471741415824976LLU;
	int16_t x326 = INT16_MAX;
	int64_t x327 = INT64_MAX;

    t78 = (x325+((x326>x327)<=x328));

    if (t78 != 61471741415824977LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x330 = -1;
	static int16_t x331 = 2809;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t79 = -97652798;

    t79 = (x329+((x330>x331)<=x332));

    if (t79 != -11) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x333 = INT16_MIN;
	volatile uint64_t x334 = UINT64_MAX;
	uint32_t x335 = 6083U;
	uint16_t x336 = 64U;
	volatile int32_t t80 = 1572008;

    t80 = (x333+((x334>x335)<=x336));

    if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = 919;
	int8_t x338 = -1;
	volatile int8_t x339 = -1;
	int16_t x340 = INT16_MIN;
	int32_t t81 = -114575961;

    t81 = (x337+((x338>x339)<=x340));

    if (t81 != 919) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x341 = INT8_MIN;
	volatile int8_t x342 = INT8_MAX;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t82 = 145;

    t82 = (x341+((x342>x343)<=x344));

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x347 = UINT16_MAX;
	int16_t x348 = INT16_MAX;
	static int32_t t83 = -6929663;

    t83 = (x345+((x346>x347)<=x348));

    if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x349 = INT8_MAX;
	uint8_t x350 = UINT8_MAX;
	static volatile uint64_t x352 = UINT64_MAX;
	int32_t t84 = 0;

    t84 = (x349+((x350>x351)<=x352));

    if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x353 = -1;
	int8_t x354 = INT8_MAX;
	int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t85 = -1868883;

    t85 = (x353+((x354>x355)<=x356));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x357 = INT16_MIN;
	uint16_t x358 = 53U;
	int64_t x359 = INT64_MIN;
	int16_t x360 = -8683;
	volatile int32_t t86 = -659492592;

    t86 = (x357+((x358>x359)<=x360));

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x361 = 920691299LLU;
	int8_t x362 = INT8_MAX;

    t87 = (x361+((x362>x363)<=x364));

    if (t87 != 920691300LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x366 = INT64_MIN;
	volatile uint64_t x367 = 109225548356834631LLU;
	volatile uint32_t x368 = 11U;
	volatile int32_t t88 = -24;

    t88 = (x365+((x366>x367)<=x368));

    if (t88 != -3617) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint32_t x369 = 356U;
	static int16_t x370 = 1;
	static volatile uint8_t x371 = UINT8_MAX;
	static int32_t x372 = -1;
	volatile uint32_t t89 = 631419U;

    t89 = (x369+((x370>x371)<=x372));

    if (t89 != 356U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x373 = UINT16_MAX;
	static int64_t x374 = INT64_MAX;
	static int8_t x376 = INT8_MAX;
	static volatile int32_t t90 = 1980986;

    t90 = (x373+((x374>x375)<=x376));

    if (t90 != 65536) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x378 = INT8_MIN;
	volatile int32_t t91 = 60591098;

    t91 = (x377+((x378>x379)<=x380));

    if (t91 != -442100) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x381 = -2496846;
	uint8_t x382 = 0U;
	int16_t x383 = 4;
	int32_t t92 = 31;

    t92 = (x381+((x382>x383)<=x384));

    if (t92 != -2496845) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x385 = INT64_MIN;
	uint32_t x386 = 26U;
	int8_t x387 = -1;
	int16_t x388 = INT16_MIN;
	int64_t t93 = INT64_MIN;

    t93 = (x385+((x386>x387)<=x388));

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x390 = INT8_MIN;
	static int32_t x391 = INT32_MAX;
	uint64_t x392 = UINT64_MAX;
	int32_t t94 = 13787;

    t94 = (x389+((x390>x391)<=x392));

    if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x394 = 2898U;
	int8_t x395 = INT8_MIN;
	static int8_t x396 = INT8_MAX;
	int32_t t95 = 9;

    t95 = (x393+((x394>x395)<=x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x397 = UINT64_MAX;
	int64_t x398 = INT64_MIN;
	static int64_t x399 = -1LL;
	volatile int16_t x400 = INT16_MAX;
	volatile uint64_t t96 = 1754465730850631145LLU;

    t96 = (x397+((x398>x399)<=x400));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x401 = -3525704LL;
	volatile int32_t x402 = INT32_MIN;
	static int8_t x403 = 0;
	volatile uint16_t x404 = UINT16_MAX;
	static int64_t t97 = -1828279418346LL;

    t97 = (x401+((x402>x403)<=x404));

    if (t97 != -3525703LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x405 = UINT16_MAX;
	int8_t x406 = INT8_MIN;
	uint8_t x407 = 0U;
	int16_t x408 = 239;
	volatile int32_t t98 = 179;

    t98 = (x405+((x406>x407)<=x408));

    if (t98 != 65536) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x410 = -1;
	int32_t x412 = -1;
	volatile int32_t t99 = INT32_MIN;

    t99 = (x409+((x410>x411)<=x412));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x414 = INT16_MAX;
	int32_t x415 = INT32_MAX;
	int16_t x416 = -15412;

    t100 = (x413+((x414>x415)<=x416));

    if (t100 != -9409735174LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x417 = -1;
	static int64_t x419 = -1LL;
	int32_t x420 = INT32_MIN;
	int32_t t101 = 50275964;

    t101 = (x417+((x418>x419)<=x420));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x421 = UINT16_MAX;
	int16_t x422 = INT16_MIN;
	static uint16_t x423 = UINT16_MAX;
	volatile int64_t x424 = INT64_MAX;

    t102 = (x421+((x422>x423)<=x424));

    if (t102 != 65536) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x428 = 21675LL;
	volatile int32_t t103 = -2512;

    t103 = (x425+((x426>x427)<=x428));

    if (t103 != 3) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x429 = 103792011LLU;
	int16_t x430 = -1;
	int16_t x432 = 0;
	volatile uint64_t t104 = 68300749619LLU;

    t104 = (x429+((x430>x431)<=x432));

    if (t104 != 103792011LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x433 = 177U;
	int64_t x434 = INT64_MIN;
	volatile int16_t x435 = INT16_MIN;
	static volatile int8_t x436 = 1;
	volatile int32_t t105 = 125386;

    t105 = (x433+((x434>x435)<=x436));

    if (t105 != 178) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x438 = 27;
	uint64_t x439 = 486LLU;
	int64_t x440 = -17045986810851LL;
	volatile int32_t t106 = INT32_MIN;

    t106 = (x437+((x438>x439)<=x440));

    if (t106 != INT32_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x441 = 20U;
	static uint32_t x443 = 79U;
	uint32_t x444 = 1453600926U;
	int32_t t107 = 4228236;

    t107 = (x441+((x442>x443)<=x444));

    if (t107 != 21) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x446 = 16U;
	uint16_t x448 = 753U;
	static volatile int32_t t108 = 40580498;

    t108 = (x445+((x446>x447)<=x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x450 = 14288;
	int64_t x451 = INT64_MIN;
	volatile uint32_t x452 = UINT32_MAX;
	int32_t t109 = 410;

    t109 = (x449+((x450>x451)<=x452));

    if (t109 != -32767) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x453 = INT16_MAX;
	int16_t x454 = 9256;
	int8_t x455 = 7;
	int32_t x456 = INT32_MAX;
	int32_t t110 = 16029346;

    t110 = (x453+((x454>x455)<=x456));

    if (t110 != 32768) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x458 = 0;
	uint64_t x459 = 48LLU;
	int8_t x460 = 1;

    t111 = (x457+((x458>x459)<=x460));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x461 = INT8_MAX;
	uint8_t x462 = 12U;
	static volatile int8_t x463 = INT8_MIN;
	int16_t x464 = INT16_MIN;
	int32_t t112 = 8;

    t112 = (x461+((x462>x463)<=x464));

    if (t112 != 127) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x465 = 114801678U;
	uint8_t x466 = 8U;
	int8_t x467 = INT8_MIN;
	int64_t x468 = INT64_MIN;
	uint32_t t113 = 322403U;

    t113 = (x465+((x466>x467)<=x468));

    if (t113 != 114801678U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x470 = INT16_MIN;
	volatile int32_t x471 = -1;
	int8_t x472 = -10;

    t114 = (x469+((x470>x471)<=x472));

    if (t114 != INT64_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x473 = INT32_MAX;
	uint32_t x474 = UINT32_MAX;
	uint64_t x475 = 3480LLU;
	int64_t x476 = -1LL;
	volatile int32_t t115 = INT32_MAX;

    t115 = (x473+((x474>x475)<=x476));

    if (t115 != INT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x477 = INT16_MIN;
	static int32_t x478 = -1;
	volatile int8_t x480 = INT8_MAX;

    t116 = (x477+((x478>x479)<=x480));

    if (t116 != -32767) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint64_t x481 = UINT64_MAX;
	uint64_t x482 = 925970557344627529LLU;
	int64_t x483 = -218207772687LL;
	volatile uint16_t x484 = 6760U;
	static uint64_t t117 = 21026103LLU;

    t117 = (x481+((x482>x483)<=x484));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x485 = 51;
	static uint32_t x487 = 5827504U;
	volatile int8_t x488 = INT8_MAX;
	int32_t t118 = 485792807;

    t118 = (x485+((x486>x487)<=x488));

    if (t118 != 52) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x493 = INT32_MIN;
	static int16_t x494 = INT16_MAX;
	static volatile int32_t t119 = -208916;

    t119 = (x493+((x494>x495)<=x496));

    if (t119 != -2147483647) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x497 = INT8_MIN;
	int64_t x498 = INT64_MIN;
	int16_t x499 = INT16_MIN;

    t120 = (x497+((x498>x499)<=x500));

    if (t120 != -127) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x501 = -1;
	uint8_t x503 = UINT8_MAX;
	volatile int16_t x504 = INT16_MIN;
	int32_t t121 = -5;

    t121 = (x501+((x502>x503)<=x504));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x505 = 10327094U;
	int8_t x506 = -1;
	static int64_t x507 = INT64_MAX;
	volatile int8_t x508 = -8;

    t122 = (x505+((x506>x507)<=x508));

    if (t122 != 10327094U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = INT32_MIN;
	int32_t x511 = -1;
	volatile int32_t t123 = -3;

    t123 = (x509+((x510>x511)<=x512));

    if (t123 != -2147483647) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x514 = INT32_MIN;
	volatile int16_t x515 = -97;
	int16_t x516 = INT16_MIN;
	int32_t t124 = -131664951;

    t124 = (x513+((x514>x515)<=x516));

    if (t124 != 255) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x517 = 12U;
	int32_t x518 = INT32_MAX;
	uint32_t x520 = UINT32_MAX;
	int32_t t125 = 145494;

    t125 = (x517+((x518>x519)<=x520));

    if (t125 != 13) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x521 = 913884U;
	int8_t x522 = -15;
	volatile int64_t x524 = INT64_MIN;

    t126 = (x521+((x522>x523)<=x524));

    if (t126 != 913884U) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x526 = INT64_MIN;
	int16_t x527 = INT16_MIN;
	static int8_t x528 = INT8_MAX;
	int32_t t127 = 0;

    t127 = (x525+((x526>x527)<=x528));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t x529 = -309828257;
	uint64_t x530 = 132649565639504LLU;
	volatile int32_t x531 = -1;
	uint64_t x532 = 47661LLU;

    t128 = (x529+((x530>x531)<=x532));

    if (t128 != -309828256) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x533 = -1;
	int64_t x534 = 2016923080339057LL;
	uint16_t x535 = 85U;
	int8_t x536 = 1;
	int32_t t129 = 55;

    t129 = (x533+((x534>x535)<=x536));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x537 = -15;
	volatile int64_t x539 = INT64_MIN;
	int16_t x540 = 0;
	static volatile int32_t t130 = -15;

    t130 = (x537+((x538>x539)<=x540));

    if (t130 != -14) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x541 = 1LL;
	int8_t x542 = -1;
	int64_t x543 = -7LL;
	volatile int64_t t131 = 67605LL;

    t131 = (x541+((x542>x543)<=x544));

    if (t131 != 2LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x549 = -530;
	int8_t x550 = -1;
	volatile int32_t x551 = INT32_MAX;
	static volatile int32_t t132 = 19615;

    t132 = (x549+((x550>x551)<=x552));

    if (t132 != -530) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x553 = INT8_MIN;
	uint32_t x554 = UINT32_MAX;
	int16_t x555 = INT16_MIN;
	int16_t x556 = 3;
	volatile int32_t t133 = 45;

    t133 = (x553+((x554>x555)<=x556));

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x557 = 1;
	int32_t x558 = INT32_MIN;
	static int8_t x559 = INT8_MIN;
	int16_t x560 = 1;
	static int32_t t134 = 6069012;

    t134 = (x557+((x558>x559)<=x560));

    if (t134 != 2) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x561 = INT32_MIN;
	int8_t x562 = INT8_MIN;
	volatile int8_t x563 = -7;

    t135 = (x561+((x562>x563)<=x564));

    if (t135 != INT32_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x565 = INT8_MIN;
	static volatile int8_t x566 = INT8_MAX;
	int8_t x567 = -35;
	int16_t x568 = 5;
	int32_t t136 = -24585;

    t136 = (x565+((x566>x567)<=x568));

    if (t136 != -127) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int8_t x569 = INT8_MIN;
	static volatile int32_t x570 = INT32_MIN;
	static int8_t x571 = INT8_MIN;
	int32_t x572 = INT32_MAX;
	volatile int32_t t137 = -213;

    t137 = (x569+((x570>x571)<=x572));

    if (t137 != -127) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x577 = -1;
	int8_t x578 = -1;
	volatile uint64_t x579 = UINT64_MAX;
	int32_t x580 = INT32_MIN;
	volatile int32_t t138 = -2073;

    t138 = (x577+((x578>x579)<=x580));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x581 = -13;
	static uint64_t x582 = 444555074623LLU;
	static int64_t x583 = -15508515702097891LL;
	int8_t x584 = 3;
	int32_t t139 = 31;

    t139 = (x581+((x582>x583)<=x584));

    if (t139 != -12) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x585 = 2U;
	int32_t x586 = INT32_MAX;
	int64_t x587 = INT64_MIN;
	volatile int32_t x588 = -1;
	volatile int32_t t140 = 20805;

    t140 = (x585+((x586>x587)<=x588));

    if (t140 != 2) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x589 = 1;
	int16_t x590 = -6166;
	static int64_t x591 = INT64_MIN;
	int32_t x592 = 31744104;
	volatile int32_t t141 = 1659;

    t141 = (x589+((x590>x591)<=x592));

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x594 = UINT32_MAX;
	int16_t x595 = 0;
	int32_t x596 = -1;
	volatile uint32_t t142 = UINT32_MAX;

    t142 = (x593+((x594>x595)<=x596));

    if (t142 != UINT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x598 = 44295477U;
	volatile int16_t x599 = INT16_MIN;
	uint8_t x600 = 6U;
	static int32_t t143 = 232;

    t143 = (x597+((x598>x599)<=x600));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x601 = 0;
	int64_t x603 = INT64_MIN;
	volatile int32_t t144 = -441;

    t144 = (x601+((x602>x603)<=x604));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint32_t x605 = UINT32_MAX;
	int8_t x606 = 1;
	volatile int8_t x608 = INT8_MIN;
	volatile uint32_t t145 = UINT32_MAX;

    t145 = (x605+((x606>x607)<=x608));

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x609 = -1;
	uint32_t x611 = 25641U;
	volatile uint64_t x612 = UINT64_MAX;

    t146 = (x609+((x610>x611)<=x612));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x613 = UINT64_MAX;
	volatile uint64_t x614 = 4176794368LLU;

    t147 = (x613+((x614>x615)<=x616));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x617 = -1;
	volatile int64_t x618 = -29451754156LL;
	uint8_t x619 = 81U;
	int64_t x620 = 58991250029LL;
	int32_t t148 = 1379;

    t148 = (x617+((x618>x619)<=x620));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x621 = -1LL;
	static uint8_t x622 = 1U;
	uint16_t x624 = 87U;
	volatile int64_t t149 = -727002LL;

    t149 = (x621+((x622>x623)<=x624));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x625 = UINT16_MAX;
	static volatile int16_t x627 = INT16_MIN;
	int16_t x628 = INT16_MIN;
	volatile int32_t t150 = -3579599;

    t150 = (x625+((x626>x627)<=x628));

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x629 = 2U;
	int8_t x630 = -1;
	static int64_t x631 = INT64_MAX;
	static uint32_t x632 = 134361700U;
	int32_t t151 = 31576743;

    t151 = (x629+((x630>x631)<=x632));

    if (t151 != 3) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x633 = INT64_MIN;
	static int64_t x634 = -29789LL;
	uint64_t x635 = 0LLU;
	volatile int64_t t152 = INT64_MIN;

    t152 = (x633+((x634>x635)<=x636));

    if (t152 != INT64_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x638 = -4;
	volatile int32_t x639 = 58407680;
	uint8_t x640 = UINT8_MAX;
	uint64_t t153 = 27324119LLU;

    t153 = (x637+((x638>x639)<=x640));

    if (t153 != 8570084515280780940LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x641 = INT64_MIN;
	volatile int64_t x642 = INT64_MIN;
	int16_t x644 = -1;
	static volatile int64_t t154 = INT64_MIN;

    t154 = (x641+((x642>x643)<=x644));

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x645 = INT32_MIN;
	int64_t x646 = -36718290003549971LL;
	int16_t x647 = -1;
	static volatile uint64_t x648 = 196LLU;
	volatile int32_t t155 = 1;

    t155 = (x645+((x646>x647)<=x648));

    if (t155 != -2147483647) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x649 = INT32_MIN;
	int8_t x650 = INT8_MAX;
	int8_t x652 = 8;
	volatile int32_t t156 = 27180;

    t156 = (x649+((x650>x651)<=x652));

    if (t156 != -2147483647) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x654 = INT8_MIN;
	static int16_t x655 = INT16_MIN;

    t157 = (x653+((x654>x655)<=x656));

    if (t157 != 256) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint16_t x657 = 3439U;
	static volatile uint8_t x659 = 3U;
	uint16_t x660 = 11U;
	volatile int32_t t158 = 160514;

    t158 = (x657+((x658>x659)<=x660));

    if (t158 != 3440) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x661 = -12;
	uint64_t x663 = 8479467889LLU;

    t159 = (x661+((x662>x663)<=x664));

    if (t159 != -12) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x665 = INT16_MIN;
	static volatile int64_t x667 = INT64_MAX;
	static uint64_t x668 = 724LLU;
	volatile int32_t t160 = -1590;

    t160 = (x665+((x666>x667)<=x668));

    if (t160 != -32767) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x669 = UINT64_MAX;
	uint16_t x670 = 3U;
	int8_t x671 = -20;
	int32_t x672 = 1081;
	volatile uint64_t t161 = 13443958791LLU;

    t161 = (x669+((x670>x671)<=x672));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x673 = 3U;
	int32_t x674 = -120;
	int16_t x675 = INT16_MIN;
	int32_t t162 = -279738;

    t162 = (x673+((x674>x675)<=x676));

    if (t162 != 4) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x677 = UINT16_MAX;
	uint8_t x678 = 18U;
	static volatile int64_t x679 = -167LL;
	int16_t x680 = 0;
	int32_t t163 = 1;

    t163 = (x677+((x678>x679)<=x680));

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x681 = 769U;
	static int16_t x683 = -5711;
	volatile int8_t x684 = INT8_MIN;
	uint32_t t164 = 44U;

    t164 = (x681+((x682>x683)<=x684));

    if (t164 != 769U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x685 = INT8_MIN;
	volatile int8_t x687 = 0;
	int64_t x688 = INT64_MIN;
	volatile int32_t t165 = -93613;

    t165 = (x685+((x686>x687)<=x688));

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x689 = INT32_MIN;
	int64_t x691 = INT64_MAX;
	int64_t x692 = 11229768401455849LL;
	int32_t t166 = 6526;

    t166 = (x689+((x690>x691)<=x692));

    if (t166 != -2147483647) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x694 = 0;
	volatile int32_t x695 = INT32_MIN;
	static uint8_t x696 = UINT8_MAX;
	static volatile int32_t t167 = 38513613;

    t167 = (x693+((x694>x695)<=x696));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x697 = UINT64_MAX;
	uint8_t x698 = 8U;
	volatile int64_t x699 = -1LL;
	volatile int64_t x700 = INT64_MIN;
	uint64_t t168 = UINT64_MAX;

    t168 = (x697+((x698>x699)<=x700));

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x701 = 3U;
	int32_t x703 = 405869561;
	volatile int8_t x704 = -1;
	int32_t t169 = -8;

    t169 = (x701+((x702>x703)<=x704));

    if (t169 != 3) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x705 = INT16_MIN;
	volatile int64_t x707 = -150591969061277LL;
	uint8_t x708 = 0U;
	int32_t t170 = -365451;

    t170 = (x705+((x706>x707)<=x708));

    if (t170 != -32768) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x709 = INT16_MIN;
	uint8_t x710 = 5U;
	static int32_t x711 = -1;
	int32_t x712 = -202987;
	volatile int32_t t171 = -8802101;

    t171 = (x709+((x710>x711)<=x712));

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x713 = 3057U;
	int8_t x715 = 0;
	int64_t x716 = 1LL;
	int32_t t172 = 121004058;

    t172 = (x713+((x714>x715)<=x716));

    if (t172 != 3058) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x717 = -1;
	uint16_t x718 = 1U;
	int16_t x719 = INT16_MIN;
	int32_t t173 = -4914599;

    t173 = (x717+((x718>x719)<=x720));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x721 = 139U;
	volatile int8_t x722 = -3;
	int8_t x723 = -5;
	int16_t x724 = -12171;

    t174 = (x721+((x722>x723)<=x724));

    if (t174 != 139) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x726 = -16208402160463LL;
	volatile uint32_t x728 = 1054002253U;
	volatile int32_t t175 = -11354281;

    t175 = (x725+((x726>x727)<=x728));

    if (t175 != -32767) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x729 = INT8_MAX;
	static volatile int64_t x730 = -1LL;
	int32_t x732 = 1;
	int32_t t176 = 61059;

    t176 = (x729+((x730>x731)<=x732));

    if (t176 != 128) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x736 = 46U;
	volatile int64_t t177 = -29LL;

    t177 = (x733+((x734>x735)<=x736));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x737 = 371LLU;
	int16_t x738 = 554;
	volatile int64_t x739 = INT64_MIN;
	int8_t x740 = INT8_MAX;

    t178 = (x737+((x738>x739)<=x740));

    if (t178 != 372LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x741 = 0U;
	static int64_t x742 = INT64_MIN;
	int16_t x743 = INT16_MIN;
	int64_t x744 = -4LL;
	int32_t t179 = 3343;

    t179 = (x741+((x742>x743)<=x744));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x745 = 45;
	volatile uint32_t x746 = 423505072U;
	volatile int8_t x747 = -1;
	int16_t x748 = -1;
	volatile int32_t t180 = 160;

    t180 = (x745+((x746>x747)<=x748));

    if (t180 != 45) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x749 = -60919661;
	int8_t x751 = 0;
	volatile uint64_t x752 = 73LLU;
	volatile int32_t t181 = -1236;

    t181 = (x749+((x750>x751)<=x752));

    if (t181 != -60919660) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x754 = UINT16_MAX;
	static int32_t x755 = INT32_MIN;
	volatile uint32_t x756 = 1977U;
	volatile int32_t t182 = 6;

    t182 = (x753+((x754>x755)<=x756));

    if (t182 != 4) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x757 = -1;
	int16_t x758 = INT16_MIN;
	int16_t x760 = 0;
	volatile int32_t t183 = -834682720;

    t183 = (x757+((x758>x759)<=x760));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x761 = -5;
	int32_t x762 = INT32_MAX;
	int32_t x763 = 877530;
	uint16_t x764 = 144U;
	volatile int32_t t184 = -248056281;

    t184 = (x761+((x762>x763)<=x764));

    if (t184 != -4) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x765 = INT16_MAX;
	static uint64_t x766 = 32025483683LLU;
	int8_t x767 = INT8_MIN;
	int32_t x768 = INT32_MIN;
	int32_t t185 = 58;

    t185 = (x765+((x766>x767)<=x768));

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x769 = -1;
	int16_t x770 = -1;
	volatile int32_t x771 = INT32_MIN;
	volatile int8_t x772 = INT8_MAX;
	int32_t t186 = -1077;

    t186 = (x769+((x770>x771)<=x772));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x774 = INT64_MIN;
	volatile int32_t t187 = 176883;

    t187 = (x773+((x774>x775)<=x776));

    if (t187 != 65535) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x777 = -4;
	volatile uint64_t x778 = UINT64_MAX;
	static int8_t x779 = -1;
	int16_t x780 = -1;

    t188 = (x777+((x778>x779)<=x780));

    if (t188 != -4) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x781 = -1;
	int32_t x782 = INT32_MIN;
	int8_t x784 = INT8_MAX;
	int32_t t189 = -1;

    t189 = (x781+((x782>x783)<=x784));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x786 = -1LL;
	int64_t x787 = -81861280287LL;
	int8_t x788 = -1;
	int64_t t190 = -44LL;

    t190 = (x785+((x786>x787)<=x788));

    if (t190 != 19387838851015LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x789 = 115954816LL;
	volatile int32_t x790 = -125924;
	int8_t x791 = INT8_MIN;
	int32_t x792 = INT32_MIN;
	int64_t t191 = 263LL;

    t191 = (x789+((x790>x791)<=x792));

    if (t191 != 115954816LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x793 = -1LL;
	static int16_t x794 = -1;
	int16_t x795 = -21;
	volatile int64_t t192 = -3327129915100214LL;

    t192 = (x793+((x794>x795)<=x796));

    if (t192 != -1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x797 = 14;
	uint64_t x799 = UINT64_MAX;
	uint64_t x800 = UINT64_MAX;
	int32_t t193 = -55;

    t193 = (x797+((x798>x799)<=x800));

    if (t193 != 15) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x801 = INT16_MIN;
	uint64_t x802 = 51274492030420357LLU;
	volatile uint16_t x803 = 2U;
	static uint32_t x804 = UINT32_MAX;
	static volatile int32_t t194 = -29616989;

    t194 = (x801+((x802>x803)<=x804));

    if (t194 != -32767) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x805 = 5U;
	int8_t x806 = -1;
	int32_t x808 = 818626;
	volatile int32_t t195 = 3407018;

    t195 = (x805+((x806>x807)<=x808));

    if (t195 != 6) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x811 = INT32_MAX;

    t196 = (x809+((x810>x811)<=x812));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x813 = INT8_MAX;
	uint16_t x814 = 168U;
	int64_t x815 = INT64_MIN;
	int8_t x816 = -1;
	static int32_t t197 = -36;

    t197 = (x813+((x814>x815)<=x816));

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x817 = INT32_MIN;
	static volatile int16_t x820 = INT16_MIN;
	int32_t t198 = INT32_MIN;

    t198 = (x817+((x818>x819)<=x820));

    if (t198 != INT32_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x821 = UINT16_MAX;
	int16_t x822 = INT16_MIN;
	static int8_t x823 = INT8_MAX;

    t199 = (x821+((x822>x823)<=x824));

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

