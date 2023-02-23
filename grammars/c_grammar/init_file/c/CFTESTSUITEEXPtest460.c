
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

static int8_t x4 = INT8_MIN;
static uint16_t x7 = 6U;
int16_t x14 = -123;
uint16_t x16 = UINT16_MAX;
int8_t x17 = -1;
uint8_t x20 = 125U;
static volatile int32_t t3 = -20780;
static volatile int32_t x24 = -1573538;
int16_t x25 = INT16_MIN;
int8_t x33 = 14;
volatile int32_t x34 = -55;
int32_t x37 = -2944856;
uint64_t x48 = UINT64_MAX;
static volatile uint32_t x51 = 713544U;
int8_t x69 = -21;
volatile uint32_t t15 = 56195U;
int8_t x111 = 1;
uint16_t x122 = 2U;
volatile uint64_t x125 = UINT64_MAX;
uint64_t t23 = 10417LLU;
volatile int16_t x129 = INT16_MAX;
uint32_t x143 = 933851338U;
uint16_t x145 = 1U;
int16_t x146 = INT16_MIN;
volatile int32_t t28 = -285774591;
int16_t x173 = INT16_MIN;
int32_t x176 = -1;
int32_t t31 = 157;
volatile int8_t x188 = 12;
volatile uint64_t t32 = 1936731LLU;
uint64_t x191 = UINT64_MAX;
volatile uint8_t x193 = UINT8_MAX;
int64_t x194 = -7421LL;
uint32_t x198 = 4821049U;
volatile uint32_t x209 = 2526U;
volatile uint32_t t37 = 61U;
static int16_t x219 = INT16_MIN;
uint64_t x220 = 167723LLU;
static int8_t x222 = 25;
volatile int64_t t39 = 978816422037439709LL;
int16_t x230 = -6353;
int32_t x231 = -73129;
int32_t t41 = -53;
static int32_t t43 = -1466;
static uint8_t x253 = 17U;
int64_t x255 = 69917280LL;
int8_t x259 = -28;
volatile int16_t x260 = -1;
uint64_t x266 = 181LLU;
volatile uint64_t x268 = 639LLU;
volatile uint64_t t48 = 123863693619LLU;
static int16_t x272 = -115;
volatile uint32_t x277 = 972U;
static int32_t x278 = 63;
uint32_t x286 = 7U;
uint16_t x304 = UINT16_MAX;
uint32_t t54 = 126773U;
int8_t x315 = -1;
int32_t x316 = INT32_MAX;
volatile int32_t t55 = -1;
volatile int32_t t56 = -28;
uint64_t x326 = UINT64_MAX;
static int32_t x327 = -1;
uint64_t x330 = 188225622482684LLU;
int64_t x342 = -11124LL;
int64_t x350 = INT64_MAX;
int8_t x367 = INT8_MAX;
int64_t x369 = INT64_MIN;
static volatile uint8_t x388 = UINT8_MAX;
uint16_t x389 = 11993U;
int32_t x394 = -15;
int64_t x397 = 817446LL;
int32_t x399 = 4598204;
volatile int64_t t69 = 1627561196848LL;
volatile int32_t x406 = -1;
volatile int8_t x411 = INT8_MIN;
static int16_t x413 = INT16_MAX;
uint32_t x414 = 74U;
static volatile int8_t x420 = -1;
int32_t x421 = INT32_MIN;
volatile int8_t x424 = INT8_MIN;
static int32_t t75 = -1121796;
uint8_t x427 = 12U;
int16_t x432 = INT16_MIN;
int32_t x433 = -3832;
int16_t x436 = INT16_MAX;
static int64_t x457 = 100281923889342LL;
uint64_t x460 = 12LLU;
uint64_t t80 = 66788970035655556LLU;
uint64_t x462 = UINT64_MAX;
int32_t x464 = -1;
int16_t x466 = INT16_MAX;
int32_t x469 = INT32_MIN;
uint64_t t84 = 0LLU;
uint64_t x489 = 14571262127LLU;
uint32_t x498 = UINT32_MAX;
uint64_t x501 = UINT64_MAX;
uint64_t t90 = 9042672306906824238LLU;
static volatile uint8_t x515 = 120U;
uint8_t x521 = 1U;
int64_t x534 = -1LL;
static int32_t x540 = -940894351;
int8_t x541 = INT8_MIN;
uint32_t x554 = UINT32_MAX;
int16_t x558 = -1;
static int32_t x565 = 1;
static uint64_t x569 = UINT64_MAX;
uint64_t x572 = 416LLU;
uint32_t x586 = 418560U;
int16_t x587 = INT16_MIN;
int8_t x609 = -1;
volatile int64_t t108 = -5296250340908810LL;
volatile int64_t x628 = -5677226LL;
volatile int16_t x637 = 0;
uint32_t x641 = 3U;
uint32_t x643 = 5744U;
static volatile uint8_t x649 = UINT8_MAX;
int8_t x650 = INT8_MIN;
int64_t x656 = -1LL;
volatile uint8_t x658 = 0U;
static uint32_t x659 = 8U;
uint32_t t116 = 101620709U;
static int64_t x664 = INT64_MIN;
volatile int32_t x668 = INT32_MIN;
static uint8_t x671 = 8U;
int16_t x674 = INT16_MIN;
int8_t x683 = -1;
int32_t t121 = 14972;
uint8_t x685 = 0U;
int16_t x686 = INT16_MAX;
int8_t x693 = INT8_MAX;
static uint32_t x694 = 49977U;
int64_t t123 = -1176237868370094LL;
volatile int32_t t124 = -782985626;
static uint32_t x705 = UINT32_MAX;
int32_t x708 = -24436;
volatile int32_t x709 = INT32_MAX;
static int64_t x713 = -1LL;
volatile int64_t t128 = -3013LL;
static volatile int16_t x717 = INT16_MIN;
int16_t x718 = INT16_MIN;
int64_t x720 = INT64_MIN;
uint32_t x728 = 3075U;
volatile int32_t x729 = INT32_MIN;
int32_t x730 = INT32_MAX;
uint8_t x732 = UINT8_MAX;
static uint16_t x733 = 1060U;
static uint32_t t133 = 1020350401U;
int64_t x737 = INT64_MAX;
static int32_t x741 = INT32_MIN;
int8_t x746 = INT8_MIN;
uint64_t t136 = 46643LLU;
int8_t x750 = -14;
uint16_t x758 = 1U;
uint64_t t139 = 4285079410623096563LLU;
uint64_t x763 = UINT64_MAX;
uint8_t x767 = UINT8_MAX;
uint64_t t142 = 197913823145014LLU;
int32_t x773 = INT32_MAX;
volatile uint64_t x779 = UINT64_MAX;
int64_t x783 = -1LL;
int8_t x790 = -1;
int16_t x791 = INT16_MIN;
volatile int64_t x792 = -38LL;
volatile int8_t x815 = INT8_MAX;
static volatile int32_t x820 = -172;
int32_t x828 = 118;
volatile int64_t t151 = -257094LL;
int64_t t152 = -2109621555LL;
static uint8_t x851 = 125U;
uint32_t x855 = 623U;
int16_t x856 = -1;
int16_t x857 = INT16_MIN;
volatile uint32_t x862 = 24389217U;
uint64_t t157 = 2711422LLU;
volatile uint64_t t159 = 1708510893362100LLU;
uint64_t x886 = 209437414887695LLU;
volatile uint64_t x893 = UINT64_MAX;
uint32_t x904 = 19398U;
volatile uint32_t t166 = 397776U;
volatile uint16_t x921 = 3U;
int8_t x925 = -1;
uint64_t x927 = UINT64_MAX;
static int64_t t170 = 111608754307381LL;
int32_t x941 = INT32_MAX;
int64_t x945 = INT64_MAX;
int64_t t172 = 24042645LL;
int64_t t173 = -141024288381391292LL;
int64_t x959 = -1LL;
volatile uint16_t x975 = UINT16_MAX;
volatile int32_t t177 = 113540205;
int64_t x977 = -1LL;
volatile int64_t t178 = 13927578848984LL;
uint64_t t179 = 4928258023479084LLU;
uint32_t t180 = 1569518427U;
int32_t x993 = 985743159;
int32_t x1005 = INT32_MIN;
volatile int16_t x1008 = INT16_MAX;
int16_t x1010 = INT16_MIN;
static uint32_t x1011 = 25153391U;
static uint64_t t184 = 3891548603LLU;
volatile int32_t t185 = -978;
static uint16_t x1023 = 137U;
int32_t t186 = 986109;
volatile int32_t t188 = -147;
volatile uint16_t x1054 = 275U;
uint64_t x1057 = 1272976LLU;
static int64_t x1059 = 15654LL;
volatile uint64_t t191 = 3284LLU;
int64_t x1068 = -196791924508579810LL;
uint64_t x1079 = 32335185016721LLU;
int16_t x1085 = -1;
int8_t x1089 = -1;
static int64_t x1099 = -1LL;


void f0(void) {
    	static int64_t x1 = -1LL;
	int8_t x2 = INT8_MIN;
	int64_t x3 = 8749796271594LL;
	volatile int64_t t0 = -1944095196274974LL;

    t0 = (x1&((x2*x3)%x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MIN;
	uint64_t x6 = 42044005LLU;
	int16_t x8 = INT16_MIN;
	uint64_t t1 = 5047531217121421LLU;

    t1 = (x5&((x6*x7)%x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x13 = -1LL;
	static int32_t x15 = -1;
	int64_t t2 = -33074133914065LL;

    t2 = (x13&((x14*x15)%x16));

    if (t2 != 123LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int8_t x18 = -1;
	volatile int32_t x19 = INT32_MAX;

    t3 = (x17&((x18*x19)%x20));

    if (t3 != -22) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = -502717053;
	int16_t x22 = -1;
	int64_t x23 = 456478690265807LL;
	int64_t t4 = 98023241155237410LL;

    t4 = (x21&((x22*x23)%x24));

    if (t4 != -503307901LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x26 = -1;
	int16_t x27 = INT16_MIN;
	int8_t x28 = -1;
	int32_t t5 = 8978;

    t5 = (x25&((x26*x27)%x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x29 = INT64_MAX;
	uint32_t x30 = UINT32_MAX;
	uint64_t x31 = UINT64_MAX;
	int8_t x32 = INT8_MAX;
	uint64_t t6 = 21332268640815LLU;

    t6 = (x29&((x30*x31)%x32));

    if (t6 != 114LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x35 = -1;
	int64_t x36 = -1LL;
	static int64_t t7 = 257922785107470741LL;

    t7 = (x33&((x34*x35)%x36));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x38 = INT32_MIN;
	uint8_t x39 = 0U;
	int64_t x40 = INT64_MIN;
	int64_t t8 = -928093966436125LL;

    t8 = (x37&((x38*x39)%x40));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x45 = INT64_MIN;
	volatile int16_t x46 = 269;
	int8_t x47 = -46;
	volatile uint64_t t9 = 14951804LLU;

    t9 = (x45&((x46*x47)%x48));

    if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MAX;
	uint32_t x50 = 965333328U;
	uint64_t x52 = 1725LLU;
	volatile uint64_t t10 = 0LLU;

    t10 = (x49&((x50*x51)%x52));

    if (t10 != 782LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x57 = 2737969LLU;
	uint16_t x58 = UINT16_MAX;
	uint8_t x59 = UINT8_MAX;
	int64_t x60 = -29695427063763773LL;
	uint64_t t11 = 203LLU;

    t11 = (x57&((x58*x59)%x60));

    if (t11 != 2672385LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x61 = -1;
	int32_t x62 = -1;
	uint16_t x63 = 27892U;
	volatile int8_t x64 = -1;
	int32_t t12 = -12;

    t12 = (x61&((x62*x63)%x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x65 = 0;
	static uint8_t x66 = UINT8_MAX;
	int8_t x67 = 0;
	static int64_t x68 = -1LL;
	volatile int64_t t13 = -68281384688LL;

    t13 = (x65&((x66*x67)%x68));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x70 = 3LLU;
	uint64_t x71 = 184817749378198899LLU;
	volatile uint32_t x72 = UINT32_MAX;
	uint64_t t14 = 10889LLU;

    t14 = (x69&((x70*x71)%x72));

    if (t14 != 2874251427LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x77 = UINT16_MAX;
	volatile uint32_t x78 = 3545603U;
	int8_t x79 = INT8_MIN;
	volatile uint16_t x80 = 17439U;

    t15 = (x77&((x78*x79)%x80));

    if (t15 != 15972U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x81 = -1;
	int32_t x82 = 0;
	int32_t x83 = -1;
	int8_t x84 = INT8_MAX;
	volatile int32_t t16 = -1261774;

    t16 = (x81&((x82*x83)%x84));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x89 = INT64_MAX;
	static int8_t x90 = INT8_MIN;
	static volatile int16_t x91 = 3435;
	int16_t x92 = 24;
	static int64_t t17 = -431597885222836LL;

    t17 = (x89&((x90*x91)%x92));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x101 = 5976132986LLU;
	int8_t x102 = -1;
	int8_t x103 = INT8_MIN;
	uint8_t x104 = 20U;
	uint64_t t18 = 1028239076856755LLU;

    t18 = (x101&((x102*x103)%x104));

    if (t18 != 8LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x105 = 127159LLU;
	uint32_t x106 = UINT32_MAX;
	int16_t x107 = -1;
	int64_t x108 = INT64_MIN;
	uint64_t t19 = 507856920940846604LLU;

    t19 = (x105&((x106*x107)%x108));

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x109 = -1;
	static int64_t x110 = INT64_MIN;
	int32_t x112 = -3;
	int64_t t20 = 32336591071186866LL;

    t20 = (x109&((x110*x111)%x112));

    if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x117 = UINT16_MAX;
	uint64_t x118 = 788LLU;
	uint8_t x119 = UINT8_MAX;
	int32_t x120 = INT32_MIN;
	static volatile uint64_t t21 = 184LLU;

    t21 = (x117&((x118*x119)%x120));

    if (t21 != 4332LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x121 = -1;
	int64_t x123 = 26146668392LL;
	int32_t x124 = -4319;
	int64_t t22 = 12LL;

    t22 = (x121&((x122*x123)%x124));

    if (t22 != 3405LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x126 = 18U;
	int16_t x127 = INT16_MIN;
	volatile int64_t x128 = INT64_MAX;

    t23 = (x125&((x126*x127)%x128));

    if (t23 != 18446744073708961792LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x130 = 1U;
	static volatile int64_t x131 = -3364LL;
	uint8_t x132 = 99U;
	int64_t t24 = -439158524903695846LL;

    t24 = (x129&((x130*x131)%x132));

    if (t24 != 32671LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x133 = -1;
	volatile int32_t x134 = -1;
	uint8_t x135 = 1U;
	uint8_t x136 = 20U;
	volatile int32_t t25 = -1;

    t25 = (x133&((x134*x135)%x136));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x137 = INT8_MAX;
	int64_t x138 = -1LL;
	int16_t x139 = INT16_MIN;
	volatile uint32_t x140 = 30708590U;
	int64_t t26 = 108767003242326252LL;

    t26 = (x137&((x138*x139)%x140));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x141 = INT8_MIN;
	static int8_t x142 = INT8_MAX;
	int64_t x144 = 181382198LL;
	int64_t t27 = -82506743434LL;

    t27 = (x141&((x142*x143)%x144));

    if (t27 != 95652096LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x147 = 23;
	static int8_t x148 = INT8_MIN;

    t28 = (x145&((x146*x147)%x148));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x161 = 30;
	static int8_t x162 = -1;
	static int16_t x163 = -1;
	volatile int16_t x164 = -1;
	int32_t t29 = 49667;

    t29 = (x161&((x162*x163)%x164));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x169 = 3974586259722229270LLU;
	int64_t x170 = 184LL;
	int16_t x171 = -120;
	volatile uint16_t x172 = 5488U;
	volatile uint64_t t30 = 3LLU;

    t30 = (x169&((x170*x171)%x172));

    if (t30 != 3974586259722229248LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x174 = -1;
	volatile int8_t x175 = -1;

    t31 = (x173&((x174*x175)%x176));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x185 = 0U;
	uint64_t x186 = 721963LLU;
	static volatile int8_t x187 = -14;

    t32 = (x185&((x186*x187)%x188));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x189 = 0;
	int8_t x190 = INT8_MAX;
	uint8_t x192 = UINT8_MAX;
	uint64_t t33 = 297798969074LLU;

    t33 = (x189&((x190*x191)%x192));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x195 = 2560LLU;
	static volatile int64_t x196 = -1LL;
	volatile uint64_t t34 = 13514341974746272LLU;

    t34 = (x193&((x194*x195)%x196));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x197 = 89U;
	uint64_t x199 = UINT64_MAX;
	int16_t x200 = 1;
	static volatile uint64_t t35 = 139506448533752LLU;

    t35 = (x197&((x198*x199)%x200));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x205 = 88U;
	int16_t x206 = 588;
	static uint8_t x207 = 12U;
	static uint64_t x208 = 9259108471LLU;
	uint64_t t36 = 7324530262LLU;

    t36 = (x205&((x206*x207)%x208));

    if (t36 != 16LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x210 = -1;
	int16_t x211 = -1;
	int16_t x212 = INT16_MIN;

    t37 = (x209&((x210*x211)%x212));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x217 = 0U;
	volatile int32_t x218 = 2898;
	volatile uint64_t t38 = 1345531197LLU;

    t38 = (x217&((x218*x219)%x220));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x221 = INT64_MIN;
	static uint32_t x223 = 501178896U;
	static int32_t x224 = INT32_MAX;

    t39 = (x221&((x222*x223)%x224));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x225 = UINT16_MAX;
	static volatile int8_t x226 = INT8_MIN;
	static int16_t x227 = -55;
	volatile uint16_t x228 = UINT16_MAX;
	static volatile int32_t t40 = -324829;

    t40 = (x225&((x226*x227)%x228));

    if (t40 != 7040) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x229 = INT32_MIN;
	int8_t x232 = INT8_MIN;

    t41 = (x229&((x230*x231)%x232));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x233 = INT32_MIN;
	volatile int32_t x234 = 2;
	static int32_t x235 = -6831202;
	static volatile int32_t x236 = INT32_MIN;
	static volatile int32_t t42 = INT32_MIN;

    t42 = (x233&((x234*x235)%x236));

    if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x241 = 51891599;
	int8_t x242 = INT8_MIN;
	static uint8_t x243 = 0U;
	volatile int8_t x244 = -1;

    t43 = (x241&((x242*x243)%x244));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x245 = INT64_MIN;
	int8_t x246 = 21;
	volatile int16_t x247 = INT16_MIN;
	uint8_t x248 = 1U;
	volatile int64_t t44 = -24824302475LL;

    t44 = (x245&((x246*x247)%x248));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x254 = 0;
	int16_t x256 = INT16_MIN;
	volatile int64_t t45 = 62LL;

    t45 = (x253&((x254*x255)%x256));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x257 = -1;
	volatile int8_t x258 = INT8_MAX;
	volatile int32_t t46 = 214661;

    t46 = (x257&((x258*x259)%x260));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x261 = 4;
	static int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MIN;
	volatile int32_t t47 = -439614;

    t47 = (x261&((x262*x263)%x264));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x265 = INT64_MAX;
	int64_t x267 = -572463147646313923LL;

    t48 = (x265&((x266*x267)%x268));

    if (t48 != 389LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x269 = INT64_MAX;
	int64_t x270 = -503893370504LL;
	int16_t x271 = INT16_MIN;
	static volatile int64_t t49 = 471466561690904LL;

    t49 = (x269&((x270*x271)%x272));

    if (t49 != 57LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x273 = INT64_MIN;
	volatile uint64_t x274 = 1071LLU;
	static uint8_t x275 = 1U;
	int64_t x276 = INT64_MIN;
	static volatile uint64_t t50 = 1LLU;

    t50 = (x273&((x274*x275)%x276));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x279 = 3428291U;
	static uint8_t x280 = 1U;
	static volatile uint32_t t51 = 10U;

    t51 = (x277&((x278*x279)%x280));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x285 = -109047441;
	volatile int64_t x287 = 1137034453843501LL;
	uint8_t x288 = 11U;
	volatile int64_t t52 = 1968719589260544LL;

    t52 = (x285&((x286*x287)%x288));

    if (t52 != 6LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x297 = -1;
	int16_t x298 = INT16_MIN;
	int32_t x299 = 125;
	static int64_t x300 = 25140318LL;
	int64_t t53 = 6729LL;

    t53 = (x297&((x298*x299)%x300));

    if (t53 != -4096000LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x301 = -617;
	volatile uint32_t x302 = UINT32_MAX;
	uint16_t x303 = UINT16_MAX;

    t54 = (x301&((x302*x303)%x304));

    if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x313 = 1036979059;
	int8_t x314 = -1;

    t55 = (x313&((x314*x315)%x316));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x317 = UINT8_MAX;
	static int16_t x318 = 7;
	int8_t x319 = INT8_MIN;
	int16_t x320 = -59;

    t56 = (x317&((x318*x319)%x320));

    if (t56 != 245) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x321 = -1;
	static int64_t x322 = INT64_MAX;
	volatile uint64_t x323 = 15576790916829LLU;
	volatile uint32_t x324 = 6108U;
	volatile uint64_t t57 = 28738292LLU;

    t57 = (x321&((x322*x323)%x324));

    if (t57 != 5735LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x325 = 511923U;
	volatile uint8_t x328 = UINT8_MAX;
	volatile uint64_t t58 = 65462089681097994LLU;

    t58 = (x325&((x326*x327)%x328));

    if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x329 = UINT16_MAX;
	uint16_t x331 = 230U;
	volatile int32_t x332 = INT32_MAX;
	static uint64_t t59 = 36515935765LLU;

    t59 = (x329&((x330*x331)%x332));

    if (t59 != 29158LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x341 = 907096051LL;
	uint32_t x343 = 25U;
	uint16_t x344 = UINT16_MAX;
	static int64_t t60 = -15572785247782LL;

    t60 = (x341&((x342*x343)%x344));

    if (t60 != 907084192LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x349 = 30949U;
	int8_t x351 = 1;
	static volatile uint32_t x352 = 12866U;
	int64_t t61 = 33LL;

    t61 = (x349&((x350*x351)%x352));

    if (t61 != 12385LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x353 = INT16_MAX;
	int32_t x354 = -1;
	uint32_t x355 = 87924U;
	uint32_t x356 = UINT32_MAX;
	volatile uint32_t t62 = 17588U;

    t62 = (x353&((x354*x355)%x356));

    if (t62 != 10380U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x365 = INT16_MIN;
	int64_t x366 = -1LL;
	uint8_t x368 = UINT8_MAX;
	volatile int64_t t63 = 6580118687240LL;

    t63 = (x365&((x366*x367)%x368));

    if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x370 = INT8_MIN;
	volatile uint16_t x371 = 0U;
	static volatile int32_t x372 = INT32_MIN;
	volatile int64_t t64 = 2080677LL;

    t64 = (x369&((x370*x371)%x372));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x373 = INT8_MAX;
	int32_t x374 = INT32_MIN;
	static uint32_t x375 = UINT32_MAX;
	static int32_t x376 = -1;
	uint32_t t65 = 4789178U;

    t65 = (x373&((x374*x375)%x376));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x385 = -1LL;
	static volatile uint16_t x386 = 9300U;
	uint32_t x387 = 316653U;
	int64_t t66 = 393917128LL;

    t66 = (x385&((x386*x387)%x388));

    if (t66 != 45LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x390 = 4889360042158780493LLU;
	uint16_t x391 = UINT16_MAX;
	static volatile int16_t x392 = INT16_MAX;
	uint64_t t67 = 60LLU;

    t67 = (x389&((x390*x391)%x392));

    if (t67 != 9289LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x393 = -1;
	int8_t x395 = -1;
	static int32_t x396 = INT32_MIN;
	int32_t t68 = 1121693;

    t68 = (x393&((x394*x395)%x396));

    if (t68 != 15) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x398 = 2;
	int32_t x400 = INT32_MIN;

    t69 = (x397&((x398*x399)%x400));

    if (t69 != 807200LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x401 = -82625;
	int32_t x402 = -1;
	uint8_t x403 = 82U;
	int16_t x404 = INT16_MIN;
	static int32_t t70 = 3763;

    t70 = (x401&((x402*x403)%x404));

    if (t70 != -82642) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x405 = 2U;
	uint16_t x407 = UINT16_MAX;
	int16_t x408 = INT16_MIN;
	volatile int32_t t71 = 5268013;

    t71 = (x405&((x406*x407)%x408));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x409 = UINT64_MAX;
	int8_t x410 = -11;
	int64_t x412 = INT64_MAX;
	static volatile uint64_t t72 = 1572746334459630448LLU;

    t72 = (x409&((x410*x411)%x412));

    if (t72 != 1408LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x415 = 1841172917347LLU;
	static uint8_t x416 = UINT8_MAX;
	volatile uint64_t t73 = 1541576338LLU;

    t73 = (x413&((x414*x415)%x416));

    if (t73 != 38LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x417 = -1;
	int8_t x418 = INT8_MIN;
	int8_t x419 = -1;
	int32_t t74 = -70916052;

    t74 = (x417&((x418*x419)%x420));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x422 = INT8_MIN;
	int32_t x423 = 43392;

    t75 = (x421&((x422*x423)%x424));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x425 = 1U;
	uint32_t x426 = 4355343U;
	uint32_t x428 = 5881527U;
	volatile uint32_t t76 = 77033737U;

    t76 = (x425&((x426*x427)%x428));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x429 = -1;
	uint16_t x430 = UINT16_MAX;
	uint8_t x431 = 1U;
	volatile int32_t t77 = 246310;

    t77 = (x429&((x430*x431)%x432));

    if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x434 = INT8_MIN;
	int16_t x435 = -5;
	int32_t t78 = -275031835;

    t78 = (x433&((x434*x435)%x436));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x449 = 105998LL;
	int8_t x450 = -1;
	int8_t x451 = -26;
	uint16_t x452 = 4U;
	static volatile int64_t t79 = 4LL;

    t79 = (x449&((x450*x451)%x452));

    if (t79 != 2LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x458 = 831663937462493076LLU;
	static int8_t x459 = INT8_MAX;

    t80 = (x457&((x458*x459)%x460));

    if (t80 != 4LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x461 = 27401611U;
	static volatile uint8_t x463 = UINT8_MAX;
	uint64_t t81 = 3666878LLU;

    t81 = (x461&((x462*x463)%x464));

    if (t81 != 27401473LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x465 = INT8_MAX;
	uint16_t x467 = UINT16_MAX;
	int32_t x468 = INT32_MAX;
	int32_t t82 = 2;

    t82 = (x465&((x466*x467)%x468));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x470 = UINT16_MAX;
	int16_t x471 = INT16_MIN;
	volatile int64_t x472 = INT64_MAX;
	int64_t t83 = -1601077889878410160LL;

    t83 = (x469&((x470*x471)%x472));

    if (t83 != -2147483648LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x473 = UINT64_MAX;
	static int16_t x474 = INT16_MIN;
	int16_t x475 = INT16_MIN;
	uint64_t x476 = 256322008998LLU;

    t84 = (x473&((x474*x475)%x476));

    if (t84 != 1073741824LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x477 = INT32_MIN;
	int16_t x478 = INT16_MAX;
	int16_t x479 = 40;
	int8_t x480 = -27;
	int32_t t85 = 16891273;

    t85 = (x477&((x478*x479)%x480));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x485 = INT16_MIN;
	int16_t x486 = INT16_MIN;
	volatile int16_t x487 = INT16_MAX;
	static uint16_t x488 = 42U;
	volatile int32_t t86 = -3469;

    t86 = (x485&((x486*x487)%x488));

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x490 = INT16_MAX;
	int32_t x491 = -1;
	volatile uint16_t x492 = 12U;
	uint64_t t87 = 87244628783LLU;

    t87 = (x489&((x490*x491)%x492));

    if (t87 != 14571262121LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x497 = -1;
	int32_t x499 = INT32_MIN;
	volatile int64_t x500 = INT64_MIN;
	static volatile int64_t t88 = 24202LL;

    t88 = (x497&((x498*x499)%x500));

    if (t88 != 2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x502 = 5315U;
	int8_t x503 = INT8_MIN;
	uint64_t x504 = UINT64_MAX;
	uint64_t t89 = 603100178147175171LLU;

    t89 = (x501&((x502*x503)%x504));

    if (t89 != 18446744073708871296LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x505 = INT16_MIN;
	uint64_t x506 = 524580214323LLU;
	uint8_t x507 = 29U;
	static int64_t x508 = INT64_MIN;

    t90 = (x505&((x506*x507)%x508));

    if (t90 != 15212826198016LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x513 = INT64_MIN;
	static volatile uint8_t x514 = 59U;
	volatile uint64_t x516 = 13001LLU;
	volatile uint64_t t91 = 8121739955199LLU;

    t91 = (x513&((x514*x515)%x516));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x522 = INT16_MIN;
	int64_t x523 = -231LL;
	uint8_t x524 = UINT8_MAX;
	int64_t t92 = 14LL;

    t92 = (x521&((x522*x523)%x524));

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x529 = 870U;
	static int64_t x530 = 6135543396LL;
	uint16_t x531 = UINT16_MAX;
	int64_t x532 = -1LL;
	int64_t t93 = 31822719219049834LL;

    t93 = (x529&((x530*x531)%x532));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x533 = UINT64_MAX;
	int16_t x535 = -1;
	int8_t x536 = INT8_MIN;
	static uint64_t t94 = 1254416028852303LLU;

    t94 = (x533&((x534*x535)%x536));

    if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x537 = 6U;
	static int32_t x538 = -1;
	static volatile uint64_t x539 = 115LLU;
	uint64_t t95 = 55946957LLU;

    t95 = (x537&((x538*x539)%x540));

    if (t95 != 4LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x542 = -1LL;
	int16_t x543 = 7495;
	static int64_t x544 = 219246LL;
	volatile int64_t t96 = -331473653543095LL;

    t96 = (x541&((x542*x543)%x544));

    if (t96 != -7552LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x553 = 0;
	uint32_t x555 = UINT32_MAX;
	volatile int16_t x556 = 1977;
	uint32_t t97 = 5464041U;

    t97 = (x553&((x554*x555)%x556));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x557 = INT64_MIN;
	volatile int8_t x559 = 3;
	int8_t x560 = INT8_MIN;
	static volatile int64_t t98 = INT64_MIN;

    t98 = (x557&((x558*x559)%x560));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x561 = -3493935126566429310LL;
	int16_t x562 = 507;
	int16_t x563 = INT16_MIN;
	int16_t x564 = -1;
	volatile int64_t t99 = -28363741243LL;

    t99 = (x561&((x562*x563)%x564));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x566 = 2763879;
	int32_t x567 = -1;
	volatile uint16_t x568 = UINT16_MAX;
	int32_t t100 = 12766336;

    t100 = (x565&((x566*x567)%x568));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x570 = INT16_MIN;
	uint8_t x571 = 1U;
	static volatile uint64_t t101 = 99991255LLU;

    t101 = (x569&((x570*x571)%x572));

    if (t101 != 320LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x585 = -1;
	int8_t x588 = 3;
	uint32_t t102 = 5U;

    t102 = (x585&((x586*x587)%x588));

    if (t102 != 1U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x593 = -1;
	int16_t x594 = INT16_MIN;
	static volatile uint32_t x595 = 78119206U;
	uint16_t x596 = 177U;
	uint32_t t103 = 84987U;

    t103 = (x593&((x594*x595)%x596));

    if (t103 != 133U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x601 = -17178850940296566LL;
	static uint64_t x602 = 5572704223259LLU;
	static int8_t x603 = INT8_MIN;
	uint32_t x604 = UINT32_MAX;
	static volatile uint64_t t104 = 735377311584LLU;

    t104 = (x601&((x602*x603)%x604));

    if (t104 != 269312128LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x610 = 1U;
	uint8_t x611 = 3U;
	int16_t x612 = 20;
	volatile int32_t t105 = 125;

    t105 = (x609&((x610*x611)%x612));

    if (t105 != 3) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint32_t x613 = 5U;
	static int32_t x614 = 4951726;
	int64_t x615 = -1LL;
	volatile int16_t x616 = -16241;
	int64_t t106 = 124239099101964LL;

    t106 = (x613&((x614*x615)%x616));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x617 = INT64_MIN;
	int8_t x618 = INT8_MIN;
	int16_t x619 = INT16_MAX;
	int8_t x620 = -1;
	int64_t t107 = 0LL;

    t107 = (x617&((x618*x619)%x620));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x621 = INT16_MIN;
	uint16_t x622 = 2U;
	int16_t x623 = INT16_MAX;
	static int64_t x624 = INT64_MAX;

    t108 = (x621&((x622*x623)%x624));

    if (t108 != 32768LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x625 = -70940LL;
	static int16_t x626 = 81;
	int8_t x627 = INT8_MIN;
	int64_t t109 = 114410987995LL;

    t109 = (x625&((x626*x627)%x628));

    if (t109 != -81280LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x629 = -804LL;
	volatile int64_t x630 = 156360LL;
	int32_t x631 = 0;
	int8_t x632 = INT8_MAX;
	volatile int64_t t110 = -3622062799960439LL;

    t110 = (x629&((x630*x631)%x632));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x633 = 234105351131430LL;
	int8_t x634 = -1;
	static int32_t x635 = -2087112;
	int32_t x636 = -3722;
	static int64_t t111 = 1LL;

    t111 = (x633&((x634*x635)%x636));

    if (t111 != 32LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x638 = -1LL;
	static int8_t x639 = -1;
	uint16_t x640 = 1U;
	volatile int64_t t112 = 1LL;

    t112 = (x637&((x638*x639)%x640));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x642 = INT8_MIN;
	int8_t x644 = INT8_MIN;
	static uint32_t t113 = 7U;

    t113 = (x641&((x642*x643)%x644));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x651 = -1LL;
	int16_t x652 = 56;
	static int64_t t114 = -24105518548399321LL;

    t114 = (x649&((x650*x651)%x652));

    if (t114 != 16LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x653 = INT8_MAX;
	uint64_t x654 = 6314320LLU;
	int8_t x655 = -1;
	volatile uint64_t t115 = 210729973952951119LLU;

    t115 = (x653&((x654*x655)%x656));

    if (t115 != 48LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x657 = INT16_MIN;
	volatile int8_t x660 = 1;

    t116 = (x657&((x658*x659)%x660));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x661 = -2;
	volatile uint16_t x662 = 501U;
	static volatile int64_t x663 = -3563264214747LL;
	int64_t t117 = -22747LL;

    t117 = (x661&((x662*x663)%x664));

    if (t117 != -1785195371588248LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x665 = INT8_MIN;
	int8_t x666 = INT8_MIN;
	uint32_t x667 = 846811U;
	uint32_t t118 = 720446127U;

    t118 = (x665&((x666*x667)%x668));

    if (t118 != 2039091840U) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x669 = 19507422114307LL;
	volatile int32_t x670 = -1;
	int16_t x672 = -1679;
	int64_t t119 = 921LL;

    t119 = (x669&((x670*x671)%x672));

    if (t119 != 19507422114304LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x673 = 0U;
	int8_t x675 = -1;
	uint64_t x676 = 1902090LLU;
	volatile uint64_t t120 = 19583LLU;

    t120 = (x673&((x674*x675)%x676));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x681 = 16440U;
	volatile int32_t x682 = INT32_MAX;
	uint8_t x684 = 3U;

    t121 = (x681&((x682*x683)%x684));

    if (t121 != 16440) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x687 = UINT16_MAX;
	static uint8_t x688 = 1U;
	volatile int32_t t122 = 93752;

    t122 = (x685&((x686*x687)%x688));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x695 = INT16_MAX;
	static int64_t x696 = 13795LL;

    t123 = (x693&((x694*x695)%x696));

    if (t123 != 72LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x697 = -1;
	uint16_t x698 = UINT16_MAX;
	int8_t x699 = INT8_MIN;
	static int16_t x700 = INT16_MAX;

    t124 = (x697&((x698*x699)%x700));

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x701 = INT16_MAX;
	int8_t x702 = INT8_MIN;
	uint64_t x703 = 4282555573601332LLU;
	int32_t x704 = INT32_MIN;
	static uint64_t t125 = 647529185746LLU;

    t125 = (x701&((x702*x703)%x704));

    if (t125 != 26112LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x706 = 1612;
	int16_t x707 = INT16_MIN;
	uint32_t t126 = 3377U;

    t126 = (x705&((x706*x707)%x708));

    if (t126 != 4294951476U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x710 = INT8_MIN;
	uint8_t x711 = UINT8_MAX;
	int16_t x712 = 1473;
	int32_t t127 = -526766;

    t127 = (x709&((x710*x711)%x712));

    if (t127 != 2147483414) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x714 = 12936U;
	static int8_t x715 = INT8_MAX;
	static int8_t x716 = -1;

    t128 = (x713&((x714*x715)%x716));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x719 = UINT32_MAX;
	volatile int64_t t129 = -44165LL;

    t129 = (x717&((x718*x719)%x720));

    if (t129 != 32768LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x721 = -3719569228LL;
	uint16_t x722 = 245U;
	int64_t x723 = -4162593057181LL;
	uint32_t x724 = 5U;
	volatile int64_t t130 = 19363437574686553LL;

    t130 = (x721&((x722*x723)%x724));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x725 = -12622;
	int16_t x726 = -1;
	static uint64_t x727 = 1LLU;
	uint64_t t131 = 4495LLU;

    t131 = (x725&((x726*x727)%x728));

    if (t131 != 2LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x731 = 8878025040309339LLU;
	volatile uint64_t t132 = 6944442390079920LLU;

    t132 = (x729&((x730*x731)%x732));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x734 = INT32_MAX;
	volatile uint32_t x735 = 1264U;
	int8_t x736 = -1;

    t133 = (x733&((x734*x735)%x736));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x738 = 3489391066LLU;
	uint16_t x739 = UINT16_MAX;
	int16_t x740 = 55;
	static volatile uint64_t t134 = 27LLU;

    t134 = (x737&((x738*x739)%x740));

    if (t134 != 45LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x742 = -1;
	int32_t x743 = -537936429;
	int64_t x744 = -28965290869LL;
	int64_t t135 = 54072915485LL;

    t135 = (x741&((x742*x743)%x744));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x745 = -14;
	uint64_t x747 = 4049097051LLU;
	volatile uint32_t x748 = 1489998U;

    t136 = (x745&((x746*x747)%x748));

    if (t136 != 569600LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x749 = 536488752U;
	int8_t x751 = INT8_MIN;
	static uint8_t x752 = 4U;
	volatile uint32_t t137 = 3502232U;

    t137 = (x749&((x750*x751)%x752));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x753 = 9;
	static uint64_t x754 = 398633475043LLU;
	static uint16_t x755 = UINT16_MAX;
	volatile int32_t x756 = 1;
	uint64_t t138 = 3LLU;

    t138 = (x753&((x754*x755)%x756));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x757 = 392U;
	static int16_t x759 = INT16_MIN;
	static uint64_t x760 = 167533163980LLU;

    t139 = (x757&((x758*x759)%x760));

    if (t139 != 8LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x761 = INT16_MAX;
	int16_t x762 = 73;
	uint8_t x764 = 12U;
	volatile uint64_t t140 = 82673447LLU;

    t140 = (x761&((x762*x763)%x764));

    if (t140 != 3LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x765 = 4;
	static int16_t x766 = INT16_MIN;
	volatile uint32_t x768 = UINT32_MAX;
	uint32_t t141 = 26U;

    t141 = (x765&((x766*x767)%x768));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x769 = 2;
	static uint8_t x770 = 14U;
	uint64_t x771 = 107673776452LLU;
	int16_t x772 = INT16_MAX;

    t142 = (x769&((x770*x771)%x772));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x774 = 44;
	uint64_t x775 = 198247LLU;
	uint8_t x776 = UINT8_MAX;
	volatile uint64_t t143 = 894603981535LLU;

    t143 = (x773&((x774*x775)%x776));

    if (t143 != 83LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x777 = UINT16_MAX;
	int64_t x778 = 28883268256LL;
	uint64_t x780 = 15042894LLU;
	volatile uint64_t t144 = 603566LLU;

    t144 = (x777&((x778*x779)%x780));

    if (t144 != 19056LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x781 = INT8_MAX;
	static int8_t x782 = 12;
	uint64_t x784 = 583817739270439062LLU;
	static volatile uint64_t t145 = 188218954LLU;

    t145 = (x781&((x782*x783)%x784));

    if (t145 != 74LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x789 = 12;
	int64_t t146 = 20819383LL;

    t146 = (x789&((x790*x791)%x792));

    if (t146 != 12LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x801 = INT16_MIN;
	int64_t x802 = 13759LL;
	uint64_t x803 = 49659318701896326LLU;
	int16_t x804 = INT16_MIN;
	uint64_t t147 = 271LLU;

    t147 = (x801&((x802*x803)%x804));

    if (t147 != 733035292138110976LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x805 = INT8_MIN;
	int64_t x806 = 100711088LL;
	uint32_t x807 = 202U;
	int32_t x808 = -2475063;
	int64_t t148 = -855705LL;

    t148 = (x805&((x806*x807)%x808));

    if (t148 != 1096960LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x813 = INT16_MAX;
	int8_t x814 = 2;
	int8_t x816 = -1;
	int32_t t149 = 1;

    t149 = (x813&((x814*x815)%x816));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x817 = UINT32_MAX;
	uint16_t x818 = 310U;
	int8_t x819 = 0;
	uint32_t t150 = 39U;

    t150 = (x817&((x818*x819)%x820));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x825 = UINT8_MAX;
	int64_t x826 = 3LL;
	uint16_t x827 = 7975U;

    t151 = (x825&((x826*x827)%x828));

    if (t151 != 89LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x829 = 10U;
	uint16_t x830 = 30U;
	int64_t x831 = -1LL;
	int64_t x832 = -52013023601010LL;

    t152 = (x829&((x830*x831)%x832));

    if (t152 != 2LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x837 = UINT8_MAX;
	static uint8_t x838 = UINT8_MAX;
	uint8_t x839 = 0U;
	int32_t x840 = 16234;
	volatile int32_t t153 = 0;

    t153 = (x837&((x838*x839)%x840));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x849 = INT64_MIN;
	static int16_t x850 = -4;
	int32_t x852 = INT32_MIN;
	volatile int64_t t154 = INT64_MIN;

    t154 = (x849&((x850*x851)%x852));

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x853 = INT8_MAX;
	static volatile uint8_t x854 = 8U;
	volatile uint32_t t155 = 355680414U;

    t155 = (x853&((x854*x855)%x856));

    if (t155 != 120U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x858 = INT32_MIN;
	uint64_t x859 = 199144298324334LLU;
	int64_t x860 = -111535083068LL;
	uint64_t t156 = 2782LLU;

    t156 = (x857&((x858*x859)%x860));

    if (t156 != 10190360941179174912LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x861 = 17;
	volatile uint64_t x863 = UINT64_MAX;
	int32_t x864 = 860881731;

    t157 = (x861&((x862*x863)%x864));

    if (t157 != 16LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x865 = UINT16_MAX;
	uint8_t x866 = 119U;
	int8_t x867 = INT8_MIN;
	int8_t x868 = INT8_MIN;
	volatile int32_t t158 = 978840;

    t158 = (x865&((x866*x867)%x868));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x869 = INT64_MIN;
	uint64_t x870 = UINT64_MAX;
	int16_t x871 = INT16_MIN;
	int16_t x872 = 2;

    t159 = (x869&((x870*x871)%x872));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x873 = -1LL;
	volatile uint64_t x874 = UINT64_MAX;
	int32_t x875 = -1;
	volatile uint64_t x876 = UINT64_MAX;
	uint64_t t160 = 33938183748LLU;

    t160 = (x873&((x874*x875)%x876));

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x877 = INT64_MIN;
	volatile uint8_t x878 = 11U;
	uint16_t x879 = UINT16_MAX;
	volatile uint16_t x880 = 17U;
	volatile int64_t t161 = 32185444187LL;

    t161 = (x877&((x878*x879)%x880));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x885 = INT32_MIN;
	static volatile int32_t x887 = -266630281;
	int64_t x888 = 636107022611LL;
	static volatile uint64_t t162 = 3107758509LLU;

    t162 = (x885&((x886*x887)%x888));

    if (t162 != 208305913856LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x894 = 3U;
	volatile int64_t x895 = -1LL;
	volatile int8_t x896 = -1;
	uint64_t t163 = 157LLU;

    t163 = (x893&((x894*x895)%x896));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x897 = 0;
	int32_t x898 = 50129;
	static int64_t x899 = 258643LL;
	uint64_t x900 = 180702548172274LLU;
	static uint64_t t164 = 21794315312LLU;

    t164 = (x897&((x898*x899)%x900));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x901 = 77U;
	static int8_t x902 = INT8_MIN;
	volatile int64_t x903 = 24LL;
	static int64_t t165 = -677LL;

    t165 = (x901&((x902*x903)%x904));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x905 = 6U;
	uint32_t x906 = 1484U;
	uint16_t x907 = 0U;
	uint8_t x908 = 4U;

    t166 = (x905&((x906*x907)%x908));

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x913 = UINT64_MAX;
	volatile uint8_t x914 = 3U;
	volatile int64_t x915 = -153LL;
	uint64_t x916 = UINT64_MAX;
	volatile uint64_t t167 = 804528202933846701LLU;

    t167 = (x913&((x914*x915)%x916));

    if (t167 != 18446744073709551157LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x922 = 42429359LL;
	uint32_t x923 = UINT32_MAX;
	int64_t x924 = 8442872123044909LL;
	static volatile int64_t t168 = -1407206LL;

    t168 = (x921&((x922*x923)%x924));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x926 = INT64_MAX;
	int32_t x928 = INT32_MIN;
	uint64_t t169 = 13126639237012555LLU;

    t169 = (x925&((x926*x927)%x928));

    if (t169 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x929 = -16923430665472430LL;
	int8_t x930 = -1;
	volatile uint32_t x931 = UINT32_MAX;
	static volatile uint8_t x932 = 4U;

    t170 = (x929&((x930*x931)%x932));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint32_t x942 = 2074852U;
	static uint32_t x943 = 1U;
	uint16_t x944 = UINT16_MAX;
	uint32_t t171 = 1U;

    t171 = (x941&((x942*x943)%x944));

    if (t171 != 43267U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x946 = -25;
	volatile int16_t x947 = INT16_MIN;
	int32_t x948 = INT32_MIN;

    t172 = (x945&((x946*x947)%x948));

    if (t172 != 819200LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x949 = INT64_MIN;
	static volatile int8_t x950 = -1;
	static int8_t x951 = INT8_MIN;
	volatile int32_t x952 = INT32_MIN;

    t173 = (x949&((x950*x951)%x952));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x953 = 2U;
	int16_t x954 = 78;
	int16_t x955 = 35;
	int64_t x956 = -1LL;
	int64_t t174 = 45088776352LL;

    t174 = (x953&((x954*x955)%x956));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x957 = INT64_MAX;
	uint8_t x958 = 12U;
	int16_t x960 = INT16_MIN;
	int64_t t175 = 28440902LL;

    t175 = (x957&((x958*x959)%x960));

    if (t175 != 9223372036854775796LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x961 = 360194;
	int8_t x962 = INT8_MIN;
	uint16_t x963 = 2U;
	uint16_t x964 = 2U;
	volatile int32_t t176 = 212;

    t176 = (x961&((x962*x963)%x964));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x973 = INT16_MIN;
	int8_t x974 = 0;
	int8_t x976 = INT8_MIN;

    t177 = (x973&((x974*x975)%x976));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x978 = -1LL;
	int8_t x979 = -1;
	volatile int8_t x980 = INT8_MAX;

    t178 = (x977&((x978*x979)%x980));

    if (t178 != 1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x981 = 1085604209670678LLU;
	int16_t x982 = -3;
	uint16_t x983 = 36U;
	volatile int32_t x984 = INT32_MAX;

    t179 = (x981&((x982*x983)%x984));

    if (t179 != 1085604209670676LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x985 = 272791U;
	uint32_t x986 = 645810U;
	int8_t x987 = INT8_MIN;
	static int8_t x988 = -1;

    t180 = (x985&((x986*x987)%x988));

    if (t180 != 8448U) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x994 = INT32_MAX;
	uint64_t x995 = UINT64_MAX;
	int16_t x996 = INT16_MIN;
	static uint64_t t181 = 136662346397LLU;

    t181 = (x993&((x994*x995)%x996));

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x997 = -1;
	static uint64_t x998 = 29008286423LLU;
	volatile uint16_t x999 = 352U;
	static int16_t x1000 = INT16_MIN;
	volatile uint64_t t182 = 509LLU;

    t182 = (x997&((x998*x999)%x1000));

    if (t182 != 10210916820896LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1006 = 309829337579508228LLU;
	uint32_t x1007 = 11110830U;
	uint64_t t183 = 2149983361784765495LLU;

    t183 = (x1005&((x1006*x1007)%x1008));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1009 = 32LLU;
	uint16_t x1012 = 352U;

    t184 = (x1009&((x1010*x1011)%x1012));

    if (t184 != 32LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1017 = 540U;
	volatile int32_t x1018 = -1;
	static int8_t x1019 = INT8_MIN;
	int8_t x1020 = INT8_MIN;

    t185 = (x1017&((x1018*x1019)%x1020));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1021 = 151U;
	static volatile uint8_t x1022 = 6U;
	int32_t x1024 = -2103801;

    t186 = (x1021&((x1022*x1023)%x1024));

    if (t186 != 22) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x1029 = UINT8_MAX;
	int64_t x1030 = -1LL;
	int16_t x1031 = -1389;
	uint64_t x1032 = 5801791060186LLU;
	volatile uint64_t t187 = 290047120658LLU;

    t187 = (x1029&((x1030*x1031)%x1032));

    if (t187 != 109LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x1037 = INT16_MAX;
	int8_t x1038 = -1;
	volatile int16_t x1039 = INT16_MIN;
	int16_t x1040 = INT16_MAX;

    t188 = (x1037&((x1038*x1039)%x1040));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x1045 = 9953026690697425LLU;
	int32_t x1046 = 15;
	int8_t x1047 = -1;
	uint32_t x1048 = UINT32_MAX;
	static uint64_t t189 = 2114714224917118LLU;

    t189 = (x1045&((x1046*x1047)%x1048));

    if (t189 != 2622933201LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1053 = 0;
	static uint8_t x1055 = 23U;
	volatile int64_t x1056 = 1507909351LL;
	static int64_t t190 = -9847597LL;

    t190 = (x1053&((x1054*x1055)%x1056));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x1058 = -1;
	int32_t x1060 = INT32_MIN;

    t191 = (x1057&((x1058*x1059)%x1060));

    if (t191 != 1261712LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x1061 = 23181U;
	uint8_t x1062 = UINT8_MAX;
	static int16_t x1063 = -3881;
	static int64_t x1064 = -249LL;
	volatile int64_t t192 = -48557483953LL;

    t192 = (x1061&((x1062*x1063)%x1064));

    if (t192 != 23053LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1065 = UINT16_MAX;
	int8_t x1066 = INT8_MAX;
	static uint8_t x1067 = UINT8_MAX;
	static volatile int64_t t193 = -46LL;

    t193 = (x1065&((x1066*x1067)%x1068));

    if (t193 != 32385LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1069 = 924U;
	volatile int32_t x1070 = 1217;
	int8_t x1071 = INT8_MIN;
	int32_t x1072 = INT32_MIN;
	volatile uint32_t t194 = 115812U;

    t194 = (x1069&((x1070*x1071)%x1072));

    if (t194 != 896U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1077 = INT32_MIN;
	volatile int8_t x1078 = -1;
	volatile uint32_t x1080 = 435657U;
	volatile uint64_t t195 = 24301503LLU;

    t195 = (x1077&((x1078*x1079)%x1080));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x1086 = INT8_MAX;
	volatile uint16_t x1087 = 345U;
	int32_t x1088 = INT32_MIN;
	static int32_t t196 = 195866;

    t196 = (x1085&((x1086*x1087)%x1088));

    if (t196 != 43815) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1090 = UINT8_MAX;
	static uint8_t x1091 = 91U;
	int64_t x1092 = -1LL;
	static volatile int64_t t197 = 147LL;

    t197 = (x1089&((x1090*x1091)%x1092));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x1093 = -1LL;
	int32_t x1094 = 29;
	uint8_t x1095 = UINT8_MAX;
	volatile int8_t x1096 = INT8_MIN;
	volatile int64_t t198 = 40404996680841018LL;

    t198 = (x1093&((x1094*x1095)%x1096));

    if (t198 != 99LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1097 = INT8_MIN;
	volatile uint32_t x1098 = 7401U;
	int64_t x1100 = INT64_MIN;
	int64_t t199 = -116LL;

    t199 = (x1097&((x1098*x1099)%x1100));

    if (t199 != -7424LL) { NG(); } else { ; }
	
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

