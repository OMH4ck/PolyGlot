
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

uint16_t x1 = 1884U;
int16_t x2 = INT16_MIN;
uint64_t x7 = UINT64_MAX;
volatile int32_t t1 = 0;
int16_t x12 = INT16_MIN;
int16_t x13 = INT16_MIN;
static int64_t x15 = 3988457073345461929LL;
volatile int64_t x17 = INT64_MAX;
int64_t x40 = INT64_MIN;
int8_t x41 = INT8_MIN;
static uint32_t x56 = UINT32_MAX;
uint64_t x63 = 4597312150LLU;
int8_t x68 = INT8_MAX;
volatile uint64_t x69 = 478586778392193LLU;
uint64_t x70 = 2909869393140514885LLU;
volatile int32_t t18 = -1928;
int64_t x93 = -16018431LL;
int64_t x107 = INT64_MIN;
static volatile int32_t t21 = -1;
volatile uint16_t x109 = UINT16_MAX;
static volatile int32_t x110 = INT32_MIN;
int32_t x122 = 7857572;
int8_t x123 = INT8_MAX;
int32_t t25 = -126095;
int64_t x139 = INT64_MAX;
static uint8_t x144 = UINT8_MAX;
int32_t t28 = -89330553;
volatile uint16_t x162 = 421U;
int32_t t33 = 5777;
volatile int64_t x175 = -1699LL;
uint64_t x180 = 1LLU;
volatile int32_t t40 = 116281;
int16_t x212 = INT16_MAX;
int16_t x213 = -1;
uint8_t x215 = UINT8_MAX;
int32_t x216 = INT32_MIN;
uint64_t x219 = 210778954179LLU;
volatile int32_t t46 = -279;
volatile int32_t t47 = 0;
static int16_t x236 = INT16_MIN;
static uint64_t x238 = 32307096708189820LLU;
int32_t x247 = -8169794;
int32_t t51 = 1;
uint8_t x250 = 0U;
uint64_t x252 = UINT64_MAX;
volatile int32_t t52 = -1;
uint64_t x254 = 138196LLU;
uint16_t x263 = UINT16_MAX;
static int16_t x264 = INT16_MIN;
volatile int32_t t56 = 1283188;
int32_t t57 = 50185;
int16_t x275 = INT16_MAX;
int8_t x277 = -1;
volatile int32_t t59 = -133603284;
uint32_t x281 = UINT32_MAX;
int32_t x282 = -1;
int32_t x288 = 1;
static uint32_t x292 = 0U;
uint8_t x302 = 7U;
uint16_t x304 = UINT16_MAX;
volatile int32_t t65 = -39;
uint8_t x308 = UINT8_MAX;
static int32_t t66 = 106071;
uint8_t x311 = 6U;
volatile int32_t x315 = INT32_MAX;
static int32_t t72 = 4475442;
int8_t x343 = 1;
int32_t t76 = -30124380;
uint8_t x364 = UINT8_MAX;
static uint64_t x370 = 104376627614LLU;
volatile int32_t t82 = 256;
int16_t x380 = INT16_MAX;
volatile int8_t x400 = INT8_MIN;
int32_t x402 = INT32_MIN;
volatile uint32_t x404 = 12U;
int64_t x408 = INT64_MAX;
uint64_t x409 = 626297715403339LLU;
static int16_t x412 = -1;
volatile int8_t x416 = INT8_MIN;
int8_t x418 = 26;
uint32_t x421 = 790508203U;
uint32_t x432 = 798611U;
int64_t x433 = INT64_MAX;
int32_t x435 = -1;
uint16_t x436 = 1932U;
static uint16_t x440 = 11136U;
int32_t x447 = INT32_MAX;
int32_t t100 = 1;
int64_t x453 = -1LL;
volatile int16_t x457 = INT16_MAX;
int32_t t102 = -463233275;
int8_t x462 = INT8_MIN;
uint16_t x464 = UINT16_MAX;
volatile int32_t t105 = -62711;
volatile uint32_t x482 = 31U;
int32_t x487 = INT32_MIN;
uint16_t x488 = 11021U;
int64_t x489 = INT64_MAX;
volatile int32_t t110 = 1;
int64_t x499 = 156030LL;
uint16_t x503 = 17429U;
volatile int64_t x512 = -1LL;
volatile int64_t x515 = -1LL;
int32_t x516 = -39;
int32_t t116 = -6186222;
uint8_t x519 = UINT8_MAX;
static int32_t t118 = -12883;
volatile int32_t t120 = 13;
int32_t x540 = INT32_MIN;
int8_t x543 = -29;
int64_t x558 = -25LL;
int32_t t126 = -2713631;
int64_t x565 = INT64_MIN;
volatile int8_t x571 = INT8_MIN;
int32_t x599 = INT32_MIN;
static int8_t x611 = INT8_MIN;
int32_t t139 = 117;
static volatile uint64_t x621 = UINT64_MAX;
static uint32_t x622 = 197102891U;
int8_t x624 = -1;
static int64_t x627 = INT64_MIN;
int16_t x632 = INT16_MIN;
static volatile int32_t t142 = 735738058;
uint16_t x635 = 30533U;
static int8_t x637 = INT8_MIN;
uint32_t x639 = 6611984U;
volatile int64_t x641 = 5111LL;
static int64_t x642 = INT64_MIN;
static volatile uint64_t x652 = UINT64_MAX;
int32_t x655 = -1;
int16_t x662 = -1;
int32_t x681 = INT32_MIN;
uint16_t x682 = 28U;
int64_t x687 = -25596711205191252LL;
static volatile int32_t t157 = 34579;
static int8_t x693 = INT8_MAX;
int16_t x697 = INT16_MAX;
uint16_t x703 = 27571U;
int8_t x706 = INT8_MIN;
uint16_t x710 = UINT16_MAX;
int32_t x711 = -1005;
int32_t x714 = INT32_MIN;
uint16_t x719 = UINT16_MAX;
volatile int32_t t164 = 1540;
uint64_t x724 = 74830486969474554LLU;
uint32_t x728 = 14749U;
int64_t x729 = INT64_MIN;
int16_t x736 = 3856;
int32_t x739 = INT32_MIN;
uint16_t x740 = 0U;
static int64_t x744 = INT64_MIN;
volatile int32_t x746 = -14244;
int16_t x748 = -8;
int32_t x753 = INT32_MAX;
volatile uint8_t x760 = 16U;
int16_t x762 = 1;
int16_t x764 = -12;
static int32_t t175 = 1279;
int64_t x768 = -82959921513881LL;
int64_t x774 = INT64_MIN;
int64_t x778 = -1LL;
int64_t x781 = INT64_MIN;
uint32_t x782 = 616775U;
uint64_t x783 = 326841LLU;
int32_t x787 = 0;
int32_t x789 = INT32_MIN;
volatile int8_t x793 = -5;
int32_t t184 = -21523;
uint64_t x808 = UINT64_MAX;
static int16_t x809 = 6583;
int64_t x810 = INT64_MIN;
int64_t x815 = -1LL;
static int32_t x816 = INT32_MIN;
int64_t x821 = -4857279026245380LL;
uint64_t x823 = UINT64_MAX;
static uint16_t x824 = 52U;
int64_t x826 = INT64_MIN;
volatile int64_t x829 = -1LL;
int32_t t192 = 70169409;
static int8_t x837 = INT8_MAX;
int64_t x841 = 5LL;
volatile uint64_t x842 = UINT64_MAX;
uint32_t x844 = 1043849U;
volatile int32_t t194 = 1;
int32_t x845 = INT32_MIN;
static uint32_t x859 = UINT32_MAX;
uint8_t x860 = 5U;
volatile int32_t t199 = -1132;


void f0(void) {
    	int8_t x3 = INT8_MAX;
	int32_t x4 = -2758;
	static volatile int32_t t0 = -945227;

    t0 = (x1==((x2!=x3)+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	int64_t x6 = INT64_MIN;
	int64_t x8 = -1LL;

    t1 = (x5==((x6!=x7)+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int64_t x10 = INT64_MIN;
	volatile int16_t x11 = INT16_MIN;
	static volatile int32_t t2 = -3;

    t2 = (x9==((x10!=x11)+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x14 = INT16_MIN;
	static int16_t x16 = 602;
	volatile int32_t t3 = 6349;

    t3 = (x13==((x14!=x15)+x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MAX;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = 19U;
	volatile int32_t t4 = -27864669;

    t4 = (x17==((x18!=x19)+x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = 28192LL;
	static uint32_t x26 = 54271774U;
	uint8_t x27 = 0U;
	uint8_t x28 = 0U;
	volatile int32_t t5 = 46;

    t5 = (x25==((x26!=x27)+x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MIN;
	static uint8_t x30 = 6U;
	int32_t x31 = INT32_MIN;
	int64_t x32 = INT64_MIN;
	int32_t t6 = 1091;

    t6 = (x29==((x30!=x31)+x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MAX;
	int16_t x34 = INT16_MIN;
	static int64_t x35 = INT64_MIN;
	volatile uint32_t x36 = 2571U;
	int32_t t7 = 441978004;

    t7 = (x33==((x34!=x35)+x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x37 = INT64_MAX;
	volatile int16_t x38 = -356;
	int64_t x39 = -1LL;
	volatile int32_t t8 = -1200302;

    t8 = (x37==((x38!=x39)+x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x42 = -1;
	int8_t x43 = INT8_MIN;
	uint8_t x44 = 15U;
	volatile int32_t t9 = 251;

    t9 = (x41==((x42!=x43)+x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = 3U;
	int64_t x46 = INT64_MIN;
	static int16_t x47 = INT16_MAX;
	uint8_t x48 = 0U;
	int32_t t10 = 8299693;

    t10 = (x45==((x46!=x47)+x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x49 = INT32_MAX;
	int16_t x50 = 12881;
	int16_t x51 = INT16_MIN;
	int64_t x52 = 0LL;
	int32_t t11 = -57;

    t11 = (x49==((x50!=x51)+x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = UINT16_MAX;
	uint16_t x54 = 15U;
	int32_t x55 = INT32_MAX;
	int32_t t12 = 62;

    t12 = (x53==((x54!=x55)+x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x57 = INT64_MIN;
	static int16_t x58 = INT16_MIN;
	int32_t x59 = 5656399;
	volatile int64_t x60 = INT64_MIN;
	volatile int32_t t13 = -8091809;

    t13 = (x57==((x58!=x59)+x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = 472909931;
	volatile int64_t x62 = -34365664835952871LL;
	uint16_t x64 = 19U;
	static volatile int32_t t14 = -125474990;

    t14 = (x61==((x62!=x63)+x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = 4U;
	int16_t x66 = -1;
	int32_t x67 = INT32_MAX;
	volatile int32_t t15 = 130;

    t15 = (x65==((x66!=x67)+x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x71 = 69U;
	uint64_t x72 = 77LLU;
	volatile int32_t t16 = 2188067;

    t16 = (x69==((x70!=x71)+x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x81 = -3;
	int32_t x82 = -29;
	uint16_t x83 = 1U;
	int8_t x84 = INT8_MAX;
	int32_t t17 = -295241722;

    t17 = (x81==((x82!=x83)+x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x89 = -1;
	int64_t x90 = 78115914356193LL;
	int32_t x91 = 86702;
	int16_t x92 = INT16_MAX;

    t18 = (x89==((x90!=x91)+x92));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x94 = -8;
	int8_t x95 = 0;
	uint8_t x96 = UINT8_MAX;
	static int32_t t19 = 13;

    t19 = (x93==((x94!=x95)+x96));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x101 = 2U;
	volatile int64_t x102 = 663176546798096907LL;
	int16_t x103 = INT16_MAX;
	uint16_t x104 = 15954U;
	volatile int32_t t20 = -120389737;

    t20 = (x101==((x102!=x103)+x104));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x105 = 41U;
	int8_t x106 = INT8_MAX;
	int16_t x108 = INT16_MIN;

    t21 = (x105==((x106!=x107)+x108));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x111 = INT32_MIN;
	volatile int64_t x112 = 357025LL;
	int32_t t22 = 314484;

    t22 = (x109==((x110!=x111)+x112));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x113 = INT16_MIN;
	uint8_t x114 = 30U;
	volatile int8_t x115 = INT8_MIN;
	int32_t x116 = INT32_MIN;
	static int32_t t23 = 560282;

    t23 = (x113==((x114!=x115)+x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x121 = UINT8_MAX;
	volatile int64_t x124 = INT64_MIN;
	static volatile int32_t t24 = 4107621;

    t24 = (x121==((x122!=x123)+x124));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x125 = -1;
	int64_t x126 = INT64_MAX;
	int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MIN;

    t25 = (x125==((x126!=x127)+x128));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x137 = UINT32_MAX;
	int32_t x138 = 1005294603;
	static int16_t x140 = 6;
	volatile int32_t t26 = 46468955;

    t26 = (x137==((x138!=x139)+x140));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x141 = INT16_MIN;
	static int8_t x142 = INT8_MIN;
	volatile uint16_t x143 = UINT16_MAX;
	volatile int32_t t27 = 35474467;

    t27 = (x141==((x142!=x143)+x144));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x145 = INT32_MIN;
	static uint64_t x146 = UINT64_MAX;
	volatile int32_t x147 = -80525;
	int64_t x148 = 148469LL;

    t28 = (x145==((x146!=x147)+x148));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x153 = -5049;
	int8_t x154 = -1;
	int8_t x155 = 1;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t29 = -1;

    t29 = (x153==((x154!=x155)+x156));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x157 = UINT8_MAX;
	int16_t x158 = INT16_MIN;
	uint8_t x159 = 1U;
	int64_t x160 = 632430563LL;
	int32_t t30 = -10151;

    t30 = (x157==((x158!=x159)+x160));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x161 = 1U;
	int8_t x163 = -1;
	uint64_t x164 = 4951454236LLU;
	static volatile int32_t t31 = -1526085;

    t31 = (x161==((x162!=x163)+x164));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x165 = 25;
	static int16_t x166 = INT16_MAX;
	uint64_t x167 = 1807264LLU;
	volatile uint32_t x168 = 6528480U;
	int32_t t32 = 3311;

    t32 = (x165==((x166!=x167)+x168));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x169 = INT8_MIN;
	uint32_t x170 = 314702U;
	uint64_t x171 = UINT64_MAX;
	uint32_t x172 = 31535U;

    t33 = (x169==((x170!=x171)+x172));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x173 = 640U;
	uint8_t x174 = 4U;
	uint16_t x176 = 6U;
	volatile int32_t t34 = 144;

    t34 = (x173==((x174!=x175)+x176));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x177 = UINT32_MAX;
	uint8_t x178 = 61U;
	int16_t x179 = -1;
	static int32_t t35 = -115847899;

    t35 = (x177==((x178!=x179)+x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x181 = INT64_MIN;
	uint32_t x182 = UINT32_MAX;
	static int64_t x183 = -22908064043988996LL;
	int16_t x184 = -1;
	int32_t t36 = 12687;

    t36 = (x181==((x182!=x183)+x184));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x185 = -1;
	volatile int32_t x186 = 1;
	int64_t x187 = 15LL;
	int64_t x188 = INT64_MIN;
	volatile int32_t t37 = 218947386;

    t37 = (x185==((x186!=x187)+x188));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x193 = INT8_MAX;
	static int16_t x194 = INT16_MAX;
	int16_t x195 = INT16_MIN;
	uint8_t x196 = 120U;
	int32_t t38 = 94602884;

    t38 = (x193==((x194!=x195)+x196));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x197 = 429U;
	int32_t x198 = 173528;
	int32_t x199 = -1;
	static int64_t x200 = INT64_MIN;
	int32_t t39 = -78033893;

    t39 = (x197==((x198!=x199)+x200));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x201 = 0U;
	uint64_t x202 = 830969LLU;
	volatile uint8_t x203 = UINT8_MAX;
	volatile uint16_t x204 = 10U;

    t40 = (x201==((x202!=x203)+x204));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x205 = 584160LL;
	uint8_t x206 = 0U;
	int16_t x207 = INT16_MIN;
	volatile int16_t x208 = -1;
	int32_t t41 = 35;

    t41 = (x205==((x206!=x207)+x208));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x209 = 479;
	static int8_t x210 = 29;
	static volatile int8_t x211 = -1;
	int32_t t42 = 51369;

    t42 = (x209==((x210!=x211)+x212));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x214 = -1LL;
	volatile int32_t t43 = 159235;

    t43 = (x213==((x214!=x215)+x216));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint32_t x217 = UINT32_MAX;
	static volatile int64_t x218 = INT64_MIN;
	uint16_t x220 = 61U;
	volatile int32_t t44 = 0;

    t44 = (x217==((x218!=x219)+x220));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x221 = UINT8_MAX;
	volatile int16_t x222 = -1;
	int32_t x223 = -13;
	int32_t x224 = INT32_MIN;
	int32_t t45 = 0;

    t45 = (x221==((x222!=x223)+x224));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x225 = 10839U;
	volatile uint32_t x226 = 593U;
	volatile int8_t x227 = -1;
	uint64_t x228 = 349531755866LLU;

    t46 = (x225==((x226!=x227)+x228));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x229 = 55U;
	static uint64_t x230 = 3498749846405LLU;
	uint32_t x231 = 2786810U;
	volatile int64_t x232 = INT64_MIN;

    t47 = (x229==((x230!=x231)+x232));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x233 = 574200U;
	static int64_t x234 = INT64_MAX;
	int8_t x235 = INT8_MIN;
	static int32_t t48 = 861607520;

    t48 = (x233==((x234!=x235)+x236));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x237 = -6;
	int64_t x239 = INT64_MAX;
	int32_t x240 = -895459462;
	volatile int32_t t49 = -10;

    t49 = (x237==((x238!=x239)+x240));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x241 = 107U;
	static int16_t x242 = -344;
	volatile int8_t x243 = 2;
	int8_t x244 = INT8_MAX;
	volatile int32_t t50 = 118888;

    t50 = (x241==((x242!=x243)+x244));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x245 = 0U;
	int16_t x246 = -1;
	uint32_t x248 = 2025U;

    t51 = (x245==((x246!=x247)+x248));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x249 = UINT16_MAX;
	uint32_t x251 = 1U;

    t52 = (x249==((x250!=x251)+x252));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x253 = INT64_MIN;
	static volatile int64_t x255 = -1LL;
	static int32_t x256 = -340606877;
	volatile int32_t t53 = 210;

    t53 = (x253==((x254!=x255)+x256));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x257 = INT64_MIN;
	static int8_t x258 = -1;
	int16_t x259 = -1;
	uint64_t x260 = 7LLU;
	volatile int32_t t54 = 125941;

    t54 = (x257==((x258!=x259)+x260));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x261 = INT8_MIN;
	static volatile int16_t x262 = INT16_MIN;
	int32_t t55 = -485610;

    t55 = (x261==((x262!=x263)+x264));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x265 = UINT8_MAX;
	int64_t x266 = INT64_MIN;
	volatile int8_t x267 = INT8_MAX;
	static int64_t x268 = -1LL;

    t56 = (x265==((x266!=x267)+x268));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x269 = 276930LLU;
	int16_t x270 = INT16_MIN;
	int16_t x271 = INT16_MAX;
	int64_t x272 = -1114851170262LL;

    t57 = (x269==((x270!=x271)+x272));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x273 = 83LLU;
	volatile int64_t x274 = INT64_MIN;
	volatile int32_t x276 = 0;
	volatile int32_t t58 = 594;

    t58 = (x273==((x274!=x275)+x276));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x278 = -1;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = 18969836870LLU;

    t59 = (x277==((x278!=x279)+x280));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x283 = INT8_MAX;
	volatile uint64_t x284 = 47081193LLU;
	volatile int32_t t60 = 577427;

    t60 = (x281==((x282!=x283)+x284));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	volatile int16_t x287 = INT16_MIN;
	int32_t t61 = 1486;

    t61 = (x285==((x286!=x287)+x288));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x289 = UINT32_MAX;
	volatile uint64_t x290 = UINT64_MAX;
	static uint8_t x291 = 52U;
	int32_t t62 = -1194612;

    t62 = (x289==((x290!=x291)+x292));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x293 = UINT64_MAX;
	int16_t x294 = -1;
	int8_t x295 = -1;
	static int16_t x296 = INT16_MIN;
	int32_t t63 = 247196579;

    t63 = (x293==((x294!=x295)+x296));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x297 = 3489;
	uint64_t x298 = 5LLU;
	int64_t x299 = -19607315LL;
	int64_t x300 = -14640305888LL;
	int32_t t64 = 58409132;

    t64 = (x297==((x298!=x299)+x300));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x301 = INT8_MAX;
	uint64_t x303 = 32287304140LLU;

    t65 = (x301==((x302!=x303)+x304));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x305 = 1U;
	uint32_t x306 = 3U;
	static int8_t x307 = -1;

    t66 = (x305==((x306!=x307)+x308));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x309 = 25421268070151705LLU;
	static int16_t x310 = INT16_MAX;
	int8_t x312 = -1;
	volatile int32_t t67 = 42237000;

    t67 = (x309==((x310!=x311)+x312));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x313 = 0;
	uint64_t x314 = 530578LLU;
	volatile uint32_t x316 = UINT32_MAX;
	static volatile int32_t t68 = 6640647;

    t68 = (x313==((x314!=x315)+x316));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x317 = -1LL;
	uint32_t x318 = 48U;
	volatile int64_t x319 = INT64_MAX;
	static volatile int8_t x320 = INT8_MAX;
	volatile int32_t t69 = 421;

    t69 = (x317==((x318!=x319)+x320));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x321 = UINT16_MAX;
	uint8_t x322 = 0U;
	uint8_t x323 = UINT8_MAX;
	static int32_t x324 = -1;
	volatile int32_t t70 = -14;

    t70 = (x321==((x322!=x323)+x324));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x325 = 70U;
	int64_t x326 = -6444183390800430LL;
	static volatile int8_t x327 = -1;
	int64_t x328 = INT64_MIN;
	static volatile int32_t t71 = 7878;

    t71 = (x325==((x326!=x327)+x328));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x329 = INT8_MIN;
	static uint16_t x330 = 204U;
	int32_t x331 = INT32_MIN;
	volatile uint64_t x332 = 23098680852LLU;

    t72 = (x329==((x330!=x331)+x332));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x333 = -1;
	uint32_t x334 = 22858610U;
	int16_t x335 = INT16_MIN;
	static volatile uint32_t x336 = UINT32_MAX;
	volatile int32_t t73 = -540;

    t73 = (x333==((x334!=x335)+x336));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x337 = 2412;
	uint64_t x338 = 1LLU;
	int8_t x339 = -1;
	int32_t x340 = -1;
	volatile int32_t t74 = 15270;

    t74 = (x337==((x338!=x339)+x340));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x341 = -179006649;
	uint64_t x342 = UINT64_MAX;
	volatile uint16_t x344 = UINT16_MAX;
	int32_t t75 = 12;

    t75 = (x341==((x342!=x343)+x344));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x349 = INT8_MAX;
	uint8_t x350 = 4U;
	int16_t x351 = 1590;
	volatile uint64_t x352 = 30955618139414LLU;

    t76 = (x349==((x350!=x351)+x352));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x353 = -1LL;
	int8_t x354 = -6;
	int16_t x355 = -1;
	static int64_t x356 = INT64_MIN;
	volatile int32_t t77 = 832;

    t77 = (x353==((x354!=x355)+x356));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x357 = 4827969838LL;
	int8_t x358 = 0;
	int32_t x359 = 24223165;
	int64_t x360 = -1LL;
	int32_t t78 = -12981;

    t78 = (x357==((x358!=x359)+x360));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x361 = INT32_MAX;
	int32_t x362 = INT32_MIN;
	int64_t x363 = INT64_MAX;
	static int32_t t79 = -3;

    t79 = (x361==((x362!=x363)+x364));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x365 = INT8_MIN;
	int8_t x366 = INT8_MIN;
	uint16_t x367 = 0U;
	int64_t x368 = 396551753108209LL;
	volatile int32_t t80 = 5235603;

    t80 = (x365==((x366!=x367)+x368));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x369 = INT64_MAX;
	volatile int32_t x371 = INT32_MIN;
	static volatile int64_t x372 = 30713LL;
	static volatile int32_t t81 = 2;

    t81 = (x369==((x370!=x371)+x372));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x373 = INT16_MIN;
	static uint16_t x374 = UINT16_MAX;
	int64_t x375 = -2927375539156775581LL;
	volatile int8_t x376 = 13;

    t82 = (x373==((x374!=x375)+x376));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x377 = -1470;
	static volatile int32_t x378 = INT32_MAX;
	int32_t x379 = 0;
	int32_t t83 = 36009004;

    t83 = (x377==((x378!=x379)+x380));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x381 = INT8_MIN;
	int8_t x382 = INT8_MIN;
	int64_t x383 = INT64_MAX;
	static int64_t x384 = INT64_MIN;
	volatile int32_t t84 = 44542;

    t84 = (x381==((x382!=x383)+x384));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x385 = 30414;
	int32_t x386 = INT32_MIN;
	volatile int8_t x387 = -9;
	uint64_t x388 = 14LLU;
	int32_t t85 = 0;

    t85 = (x385==((x386!=x387)+x388));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x389 = 1;
	int8_t x390 = -1;
	static int32_t x391 = -1;
	int32_t x392 = 43518358;
	int32_t t86 = 8;

    t86 = (x389==((x390!=x391)+x392));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x393 = 7U;
	uint8_t x394 = UINT8_MAX;
	volatile uint8_t x395 = 15U;
	static volatile uint16_t x396 = UINT16_MAX;
	volatile int32_t t87 = 311122605;

    t87 = (x393==((x394!=x395)+x396));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x397 = 10439725980416717LLU;
	int16_t x398 = INT16_MIN;
	int64_t x399 = -2LL;
	volatile int32_t t88 = 177935;

    t88 = (x397==((x398!=x399)+x400));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x401 = -433;
	int32_t x403 = -1;
	int32_t t89 = -4;

    t89 = (x401==((x402!=x403)+x404));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x405 = 1U;
	static int8_t x406 = -1;
	int32_t x407 = -1;
	volatile int32_t t90 = 19;

    t90 = (x405==((x406!=x407)+x408));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x410 = INT16_MAX;
	int32_t x411 = INT32_MIN;
	volatile int32_t t91 = -778670702;

    t91 = (x409==((x410!=x411)+x412));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x413 = 4305738657877736LLU;
	int16_t x414 = 2066;
	int8_t x415 = -15;
	volatile int32_t t92 = -8;

    t92 = (x413==((x414!=x415)+x416));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x417 = INT32_MIN;
	int16_t x419 = INT16_MIN;
	int8_t x420 = -25;
	volatile int32_t t93 = -194;

    t93 = (x417==((x418!=x419)+x420));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x422 = -2;
	int32_t x423 = INT32_MAX;
	volatile uint64_t x424 = UINT64_MAX;
	int32_t t94 = 13276830;

    t94 = (x421==((x422!=x423)+x424));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x425 = INT8_MIN;
	uint8_t x426 = 110U;
	volatile uint32_t x427 = 136254U;
	volatile int8_t x428 = INT8_MIN;
	volatile int32_t t95 = -772366645;

    t95 = (x425==((x426!=x427)+x428));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x429 = INT64_MIN;
	uint16_t x430 = 37U;
	volatile int64_t x431 = INT64_MIN;
	volatile int32_t t96 = 18640;

    t96 = (x429==((x430!=x431)+x432));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x434 = 57391591LL;
	volatile int32_t t97 = -4611;

    t97 = (x433==((x434!=x435)+x436));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x437 = INT8_MIN;
	static int32_t x438 = -1;
	static int64_t x439 = -1LL;
	volatile int32_t t98 = -57;

    t98 = (x437==((x438!=x439)+x440));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x441 = -495128974751173078LL;
	int32_t x442 = INT32_MIN;
	int8_t x443 = 9;
	int64_t x444 = INT64_MIN;
	volatile int32_t t99 = 1978;

    t99 = (x441==((x442!=x443)+x444));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x445 = -11;
	static int8_t x446 = INT8_MAX;
	uint8_t x448 = 75U;

    t100 = (x445==((x446!=x447)+x448));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x454 = INT16_MIN;
	uint8_t x455 = 3U;
	int16_t x456 = -1;
	int32_t t101 = 1733;

    t101 = (x453==((x454!=x455)+x456));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x458 = INT32_MIN;
	static int64_t x459 = INT64_MIN;
	int64_t x460 = INT64_MIN;

    t102 = (x457==((x458!=x459)+x460));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x461 = UINT8_MAX;
	uint64_t x463 = 2512436309LLU;
	volatile int32_t t103 = 67;

    t103 = (x461==((x462!=x463)+x464));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x465 = INT32_MIN;
	int8_t x466 = INT8_MIN;
	uint8_t x467 = 28U;
	uint16_t x468 = UINT16_MAX;
	int32_t t104 = 3;

    t104 = (x465==((x466!=x467)+x468));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x469 = 84;
	static int16_t x470 = 1100;
	uint32_t x471 = 110064U;
	int32_t x472 = -929852;

    t105 = (x469==((x470!=x471)+x472));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x473 = UINT16_MAX;
	int16_t x474 = INT16_MAX;
	int8_t x475 = -54;
	volatile int16_t x476 = -5023;
	volatile int32_t t106 = -11620212;

    t106 = (x473==((x474!=x475)+x476));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x477 = 9;
	uint64_t x478 = UINT64_MAX;
	int16_t x479 = INT16_MIN;
	int32_t x480 = 867;
	int32_t t107 = -59;

    t107 = (x477==((x478!=x479)+x480));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x481 = INT16_MAX;
	static int32_t x483 = 1;
	uint8_t x484 = UINT8_MAX;
	int32_t t108 = 290815759;

    t108 = (x481==((x482!=x483)+x484));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x485 = INT8_MIN;
	uint32_t x486 = 243U;
	static volatile int32_t t109 = 44968;

    t109 = (x485==((x486!=x487)+x488));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x490 = INT64_MAX;
	static int8_t x491 = INT8_MAX;
	uint64_t x492 = 124796241331LLU;

    t110 = (x489==((x490!=x491)+x492));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x493 = INT8_MIN;
	int8_t x494 = INT8_MIN;
	uint8_t x495 = 0U;
	volatile int8_t x496 = -1;
	volatile int32_t t111 = -1;

    t111 = (x493==((x494!=x495)+x496));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x497 = -94;
	int32_t x498 = -1;
	uint64_t x500 = UINT64_MAX;
	int32_t t112 = -115282;

    t112 = (x497==((x498!=x499)+x500));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x501 = INT16_MAX;
	uint16_t x502 = 73U;
	volatile int64_t x504 = -1105329812501310LL;
	int32_t t113 = -252291;

    t113 = (x501==((x502!=x503)+x504));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x505 = -15;
	volatile int32_t x506 = -368907;
	static int32_t x507 = INT32_MAX;
	int16_t x508 = INT16_MAX;
	volatile int32_t t114 = -55938653;

    t114 = (x505==((x506!=x507)+x508));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x509 = 70U;
	int16_t x510 = INT16_MIN;
	volatile int64_t x511 = -48785LL;
	int32_t t115 = -130606;

    t115 = (x509==((x510!=x511)+x512));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x513 = UINT8_MAX;
	uint32_t x514 = 3U;

    t116 = (x513==((x514!=x515)+x516));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x517 = UINT64_MAX;
	uint16_t x518 = 12U;
	volatile int16_t x520 = -1;
	volatile int32_t t117 = 24517;

    t117 = (x517==((x518!=x519)+x520));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x525 = -1;
	static int8_t x526 = INT8_MAX;
	volatile int32_t x527 = INT32_MIN;
	int16_t x528 = 0;

    t118 = (x525==((x526!=x527)+x528));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x529 = -1;
	int64_t x530 = INT64_MIN;
	int8_t x531 = INT8_MAX;
	static volatile int32_t x532 = INT32_MIN;
	volatile int32_t t119 = -22137394;

    t119 = (x529==((x530!=x531)+x532));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x533 = -1;
	uint32_t x534 = UINT32_MAX;
	uint8_t x535 = 56U;
	volatile int64_t x536 = -1LL;

    t120 = (x533==((x534!=x535)+x536));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x537 = INT8_MIN;
	static uint16_t x538 = 0U;
	int64_t x539 = INT64_MAX;
	volatile int32_t t121 = -221907;

    t121 = (x537==((x538!=x539)+x540));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x541 = -1;
	int16_t x542 = -1;
	volatile int16_t x544 = INT16_MIN;
	int32_t t122 = -2047;

    t122 = (x541==((x542!=x543)+x544));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x545 = 18171U;
	int32_t x546 = INT32_MAX;
	int16_t x547 = -1;
	static int32_t x548 = 7115155;
	volatile int32_t t123 = 232221131;

    t123 = (x545==((x546!=x547)+x548));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x553 = INT8_MIN;
	static int32_t x554 = -35166;
	int32_t x555 = INT32_MIN;
	int32_t x556 = -1;
	volatile int32_t t124 = 415;

    t124 = (x553==((x554!=x555)+x556));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x557 = 4U;
	uint32_t x559 = UINT32_MAX;
	uint16_t x560 = 1U;
	volatile int32_t t125 = -8;

    t125 = (x557==((x558!=x559)+x560));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x561 = INT8_MIN;
	uint32_t x562 = UINT32_MAX;
	uint16_t x563 = UINT16_MAX;
	int64_t x564 = -439862079225030LL;

    t126 = (x561==((x562!=x563)+x564));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x566 = INT64_MIN;
	int16_t x567 = INT16_MAX;
	uint8_t x568 = 29U;
	int32_t t127 = 2;

    t127 = (x565==((x566!=x567)+x568));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x569 = 33849U;
	uint32_t x570 = UINT32_MAX;
	int64_t x572 = 9577176LL;
	volatile int32_t t128 = -1;

    t128 = (x569==((x570!=x571)+x572));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x573 = 45;
	uint8_t x574 = UINT8_MAX;
	uint32_t x575 = UINT32_MAX;
	int8_t x576 = INT8_MIN;
	int32_t t129 = 4834667;

    t129 = (x573==((x574!=x575)+x576));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x577 = INT16_MAX;
	static volatile uint8_t x578 = 0U;
	int32_t x579 = -4635;
	volatile int8_t x580 = -1;
	int32_t t130 = 1;

    t130 = (x577==((x578!=x579)+x580));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x581 = INT16_MIN;
	volatile int16_t x582 = INT16_MIN;
	static int32_t x583 = INT32_MIN;
	int8_t x584 = 4;
	int32_t t131 = 415376;

    t131 = (x581==((x582!=x583)+x584));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x585 = INT32_MAX;
	int8_t x586 = INT8_MIN;
	int8_t x587 = INT8_MIN;
	int8_t x588 = INT8_MIN;
	volatile int32_t t132 = 98057;

    t132 = (x585==((x586!=x587)+x588));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x589 = -556;
	int8_t x590 = 59;
	static uint64_t x591 = UINT64_MAX;
	int8_t x592 = 25;
	int32_t t133 = -25066;

    t133 = (x589==((x590!=x591)+x592));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x593 = UINT8_MAX;
	uint16_t x594 = 56U;
	int32_t x595 = -1;
	int8_t x596 = INT8_MIN;
	volatile int32_t t134 = -6861;

    t134 = (x593==((x594!=x595)+x596));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x597 = 4749575152855500LLU;
	int16_t x598 = INT16_MIN;
	uint16_t x600 = 61U;
	static int32_t t135 = 1397221;

    t135 = (x597==((x598!=x599)+x600));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x601 = -1;
	static int32_t x602 = 223028;
	volatile uint8_t x603 = 5U;
	static int16_t x604 = INT16_MIN;
	int32_t t136 = -300;

    t136 = (x601==((x602!=x603)+x604));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x605 = INT64_MIN;
	uint16_t x606 = 1294U;
	uint16_t x607 = UINT16_MAX;
	static volatile int16_t x608 = INT16_MAX;
	volatile int32_t t137 = -3294242;

    t137 = (x605==((x606!=x607)+x608));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x609 = 11317;
	int64_t x610 = INT64_MAX;
	static int32_t x612 = INT32_MIN;
	int32_t t138 = -152297;

    t138 = (x609==((x610!=x611)+x612));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x617 = 76;
	uint8_t x618 = 63U;
	static uint32_t x619 = 118U;
	int64_t x620 = INT64_MIN;

    t139 = (x617==((x618!=x619)+x620));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x623 = 29U;
	volatile int32_t t140 = 75230;

    t140 = (x621==((x622!=x623)+x624));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x625 = -1;
	volatile uint16_t x626 = 206U;
	uint16_t x628 = UINT16_MAX;
	static int32_t t141 = 3472188;

    t141 = (x625==((x626!=x627)+x628));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x629 = INT32_MIN;
	volatile uint32_t x630 = 995U;
	uint64_t x631 = UINT64_MAX;

    t142 = (x629==((x630!=x631)+x632));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int16_t x633 = INT16_MIN;
	static volatile int16_t x634 = INT16_MIN;
	int32_t x636 = INT32_MIN;
	int32_t t143 = -173687656;

    t143 = (x633==((x634!=x635)+x636));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x638 = 305905385U;
	static volatile int32_t x640 = INT32_MIN;
	int32_t t144 = 110911720;

    t144 = (x637==((x638!=x639)+x640));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x643 = INT16_MAX;
	static volatile int8_t x644 = 0;
	int32_t t145 = -690772186;

    t145 = (x641==((x642!=x643)+x644));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint32_t x645 = 13669802U;
	int8_t x646 = INT8_MAX;
	uint64_t x647 = UINT64_MAX;
	int16_t x648 = -1;
	int32_t t146 = 39027652;

    t146 = (x645==((x646!=x647)+x648));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x649 = 395U;
	int64_t x650 = 14638018319170LL;
	int8_t x651 = -1;
	volatile int32_t t147 = -70248;

    t147 = (x649==((x650!=x651)+x652));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x653 = 154U;
	int16_t x654 = INT16_MIN;
	int32_t x656 = -1;
	volatile int32_t t148 = -23;

    t148 = (x653==((x654!=x655)+x656));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint64_t x657 = 7573304LLU;
	uint32_t x658 = 13U;
	int8_t x659 = -3;
	uint32_t x660 = 30U;
	int32_t t149 = 5280995;

    t149 = (x657==((x658!=x659)+x660));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x661 = INT8_MIN;
	uint8_t x663 = UINT8_MAX;
	static int32_t x664 = INT32_MIN;
	static volatile int32_t t150 = -31141630;

    t150 = (x661==((x662!=x663)+x664));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x665 = 2385U;
	uint64_t x666 = UINT64_MAX;
	static int32_t x667 = INT32_MAX;
	volatile uint16_t x668 = UINT16_MAX;
	int32_t t151 = -25;

    t151 = (x665==((x666!=x667)+x668));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x669 = INT16_MIN;
	int64_t x670 = -1LL;
	int64_t x671 = -221814LL;
	int8_t x672 = INT8_MIN;
	volatile int32_t t152 = 2057201;

    t152 = (x669==((x670!=x671)+x672));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x673 = UINT8_MAX;
	int16_t x674 = INT16_MIN;
	int64_t x675 = INT64_MIN;
	uint8_t x676 = 28U;
	volatile int32_t t153 = 81;

    t153 = (x673==((x674!=x675)+x676));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x677 = -1;
	uint8_t x678 = 9U;
	uint64_t x679 = 124083883LLU;
	int8_t x680 = -31;
	volatile int32_t t154 = -111759592;

    t154 = (x677==((x678!=x679)+x680));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x683 = -522359LL;
	uint8_t x684 = UINT8_MAX;
	int32_t t155 = 700;

    t155 = (x681==((x682!=x683)+x684));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x685 = 0;
	int64_t x686 = -1LL;
	uint8_t x688 = UINT8_MAX;
	volatile int32_t t156 = 236;

    t156 = (x685==((x686!=x687)+x688));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x689 = INT64_MAX;
	uint32_t x690 = UINT32_MAX;
	static int8_t x691 = INT8_MIN;
	volatile uint32_t x692 = 27433793U;

    t157 = (x689==((x690!=x691)+x692));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x694 = INT32_MIN;
	volatile int8_t x695 = INT8_MIN;
	int8_t x696 = -43;
	int32_t t158 = 1;

    t158 = (x693==((x694!=x695)+x696));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x698 = 3667744;
	volatile uint16_t x699 = UINT16_MAX;
	volatile int64_t x700 = -2265780351607LL;
	static int32_t t159 = -95035;

    t159 = (x697==((x698!=x699)+x700));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x701 = 3838LL;
	static int8_t x702 = -1;
	int8_t x704 = INT8_MIN;
	volatile int32_t t160 = 1454616;

    t160 = (x701==((x702!=x703)+x704));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x705 = -1LL;
	int16_t x707 = -1;
	int64_t x708 = -31847853793690LL;
	volatile int32_t t161 = -4057;

    t161 = (x705==((x706!=x707)+x708));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x709 = INT8_MIN;
	static volatile uint64_t x712 = UINT64_MAX;
	static volatile int32_t t162 = 3687390;

    t162 = (x709==((x710!=x711)+x712));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x713 = INT64_MAX;
	volatile uint32_t x715 = 364785U;
	uint32_t x716 = 672081U;
	volatile int32_t t163 = 27222169;

    t163 = (x713==((x714!=x715)+x716));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x717 = INT8_MIN;
	uint32_t x718 = 3U;
	uint16_t x720 = 1938U;

    t164 = (x717==((x718!=x719)+x720));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x721 = INT64_MIN;
	static uint32_t x722 = 9U;
	static uint8_t x723 = 24U;
	volatile int32_t t165 = -617;

    t165 = (x721==((x722!=x723)+x724));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x725 = 166;
	uint64_t x726 = UINT64_MAX;
	int8_t x727 = INT8_MAX;
	int32_t t166 = 27;

    t166 = (x725==((x726!=x727)+x728));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x730 = INT16_MIN;
	volatile int32_t x731 = -1;
	uint32_t x732 = 1011U;
	volatile int32_t t167 = -1;

    t167 = (x729==((x730!=x731)+x732));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x733 = INT32_MIN;
	uint32_t x734 = UINT32_MAX;
	int8_t x735 = -1;
	volatile int32_t t168 = -407635;

    t168 = (x733==((x734!=x735)+x736));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x737 = UINT16_MAX;
	static volatile int16_t x738 = INT16_MIN;
	int32_t t169 = 4884;

    t169 = (x737==((x738!=x739)+x740));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x741 = INT8_MIN;
	volatile int16_t x742 = -1;
	volatile int16_t x743 = 1;
	volatile int32_t t170 = 3060;

    t170 = (x741==((x742!=x743)+x744));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x745 = 2U;
	int64_t x747 = -66953683727887LL;
	int32_t t171 = -22803;

    t171 = (x745==((x746!=x747)+x748));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x749 = INT32_MIN;
	static int16_t x750 = -467;
	volatile uint64_t x751 = UINT64_MAX;
	int32_t x752 = -37;
	volatile int32_t t172 = -390693;

    t172 = (x749==((x750!=x751)+x752));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x754 = INT32_MIN;
	int8_t x755 = INT8_MAX;
	int16_t x756 = INT16_MIN;
	volatile int32_t t173 = -86;

    t173 = (x753==((x754!=x755)+x756));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x757 = -61;
	int16_t x758 = 239;
	volatile int64_t x759 = -1LL;
	int32_t t174 = 90064;

    t174 = (x757==((x758!=x759)+x760));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x761 = UINT32_MAX;
	volatile uint64_t x763 = 19633220129151529LLU;

    t175 = (x761==((x762!=x763)+x764));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x765 = UINT32_MAX;
	int8_t x766 = -1;
	static uint64_t x767 = 11724292853860590LLU;
	static volatile int32_t t176 = -2023115;

    t176 = (x765==((x766!=x767)+x768));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x773 = 796;
	uint32_t x775 = UINT32_MAX;
	static volatile int16_t x776 = INT16_MAX;
	volatile int32_t t177 = 1;

    t177 = (x773==((x774!=x775)+x776));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x777 = 198581332;
	static int32_t x779 = 5622;
	int8_t x780 = -1;
	int32_t t178 = 64228639;

    t178 = (x777==((x778!=x779)+x780));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x784 = -1;
	int32_t t179 = 218;

    t179 = (x781==((x782!=x783)+x784));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x785 = -1LL;
	static uint64_t x786 = 2259LLU;
	int64_t x788 = -1LL;
	int32_t t180 = -19;

    t180 = (x785==((x786!=x787)+x788));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x790 = INT32_MAX;
	int32_t x791 = INT32_MIN;
	static int8_t x792 = -10;
	int32_t t181 = 616029482;

    t181 = (x789==((x790!=x791)+x792));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x794 = INT16_MIN;
	uint32_t x795 = 6U;
	int16_t x796 = INT16_MIN;
	int32_t t182 = 0;

    t182 = (x793==((x794!=x795)+x796));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x797 = 0U;
	uint32_t x798 = UINT32_MAX;
	static uint8_t x799 = 1U;
	int8_t x800 = INT8_MIN;
	volatile int32_t t183 = -1;

    t183 = (x797==((x798!=x799)+x800));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x801 = -1LL;
	int8_t x802 = INT8_MIN;
	int16_t x803 = 7;
	int16_t x804 = INT16_MIN;

    t184 = (x801==((x802!=x803)+x804));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x805 = INT8_MIN;
	static volatile int8_t x806 = INT8_MAX;
	uint32_t x807 = 143770032U;
	int32_t t185 = -3214479;

    t185 = (x805==((x806!=x807)+x808));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x811 = INT16_MAX;
	volatile uint8_t x812 = 1U;
	volatile int32_t t186 = 6874;

    t186 = (x809==((x810!=x811)+x812));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x813 = 485860U;
	int8_t x814 = INT8_MAX;
	int32_t t187 = -328;

    t187 = (x813==((x814!=x815)+x816));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x817 = -1492214571834334LL;
	int16_t x818 = -1;
	static int16_t x819 = INT16_MIN;
	int32_t x820 = -170846;
	volatile int32_t t188 = -6956;

    t188 = (x817==((x818!=x819)+x820));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x822 = 69U;
	volatile int32_t t189 = -160777;

    t189 = (x821==((x822!=x823)+x824));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x825 = 9;
	int8_t x827 = -1;
	volatile int16_t x828 = -1;
	int32_t t190 = -923;

    t190 = (x825==((x826!=x827)+x828));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x830 = INT32_MAX;
	uint16_t x831 = 48U;
	volatile uint64_t x832 = 49496624LLU;
	int32_t t191 = -1;

    t191 = (x829==((x830!=x831)+x832));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x833 = -1;
	uint32_t x834 = 3802U;
	uint8_t x835 = UINT8_MAX;
	static int8_t x836 = -1;

    t192 = (x833==((x834!=x835)+x836));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x838 = 45;
	int16_t x839 = INT16_MIN;
	int16_t x840 = INT16_MAX;
	volatile int32_t t193 = -10;

    t193 = (x837==((x838!=x839)+x840));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x843 = INT64_MIN;

    t194 = (x841==((x842!=x843)+x844));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x846 = INT16_MAX;
	static int64_t x847 = -3247LL;
	volatile int32_t x848 = -1;
	volatile int32_t t195 = -128831;

    t195 = (x845==((x846!=x847)+x848));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x849 = -1LL;
	int8_t x850 = 0;
	static uint32_t x851 = 317294U;
	volatile int8_t x852 = 9;
	int32_t t196 = 136253525;

    t196 = (x849==((x850!=x851)+x852));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x853 = INT8_MIN;
	uint8_t x854 = UINT8_MAX;
	int64_t x855 = INT64_MIN;
	uint16_t x856 = 9U;
	int32_t t197 = 8448378;

    t197 = (x853==((x854!=x855)+x856));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x857 = -50;
	uint8_t x858 = 3U;
	static volatile int32_t t198 = -97275;

    t198 = (x857==((x858!=x859)+x860));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x861 = INT16_MAX;
	uint64_t x862 = 963197518LLU;
	int32_t x863 = -1;
	int16_t x864 = -1;

    t199 = (x861==((x862!=x863)+x864));

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

