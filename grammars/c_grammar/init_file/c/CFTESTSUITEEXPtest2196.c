
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

volatile uint8_t x9 = 31U;
volatile uint64_t x15 = UINT64_MAX;
int8_t x20 = INT8_MAX;
int16_t x33 = INT16_MIN;
uint64_t x34 = UINT64_MAX;
volatile int8_t x36 = INT8_MAX;
int8_t x42 = -32;
uint64_t t8 = 6687597200LLU;
uint32_t x46 = 208U;
static int16_t x49 = INT16_MIN;
static volatile uint32_t t10 = 3172U;
int64_t t11 = 6373538LL;
static int64_t x57 = INT64_MAX;
int32_t x60 = 126;
uint64_t t14 = 63210423658569457LLU;
int8_t x75 = -1;
int64_t x83 = INT64_MIN;
int64_t t16 = 2773506855968868LL;
static int64_t x87 = -1LL;
static int64_t x94 = -1LL;
int16_t x96 = INT16_MAX;
int16_t x103 = INT16_MIN;
uint16_t x112 = 734U;
static uint16_t x115 = 5U;
int32_t x126 = INT32_MIN;
static int32_t x129 = INT32_MAX;
int64_t x138 = INT64_MIN;
uint16_t x139 = 13156U;
static int8_t x153 = INT8_MAX;
uint64_t x157 = UINT64_MAX;
static uint64_t t30 = 6LLU;
static int32_t x163 = 115;
int64_t x170 = INT64_MIN;
volatile int32_t x184 = -353;
static int16_t x188 = 1;
int16_t x190 = -1;
volatile uint8_t x192 = 0U;
int64_t x195 = INT64_MIN;
static int32_t t39 = -59758;
uint32_t x201 = UINT32_MAX;
uint32_t x203 = 15U;
uint32_t t40 = 238U;
volatile uint64_t t41 = 20351454540734747LLU;
int64_t x230 = INT64_MAX;
uint32_t x231 = 857U;
int32_t x244 = INT32_MIN;
uint8_t x248 = UINT8_MAX;
static volatile int32_t t48 = 0;
int16_t x256 = -1;
volatile int16_t x257 = INT16_MIN;
uint64_t t51 = 4336124548LLU;
uint64_t x265 = 3045232257LLU;
int64_t x270 = INT64_MAX;
uint8_t x271 = UINT8_MAX;
int32_t x272 = INT32_MAX;
int64_t t53 = -55181575268472LL;
uint64_t x279 = UINT64_MAX;
volatile uint64_t x282 = UINT64_MAX;
int64_t x284 = 688265152LL;
int32_t x285 = INT32_MIN;
uint64_t x287 = UINT64_MAX;
int8_t x293 = INT8_MAX;
static int16_t x294 = 813;
int64_t x299 = -303325564821556943LL;
static int16_t x301 = INT16_MAX;
static volatile int64_t x305 = -19LL;
int16_t x308 = INT16_MIN;
static int32_t x313 = 17503003;
int32_t x315 = INT32_MAX;
volatile int64_t t64 = 20246545235LL;
uint16_t x324 = 1712U;
static int8_t x330 = -1;
volatile int8_t x339 = 3;
static int16_t x343 = INT16_MIN;
int8_t x346 = -14;
volatile int64_t x350 = -6350326955276642LL;
volatile uint64_t t71 = 16832406789552092LLU;
uint64_t x364 = 13704LLU;
volatile uint32_t x366 = UINT32_MAX;
uint64_t x375 = UINT64_MAX;
volatile uint64_t t75 = 1346124LLU;
static uint64_t x379 = 110903760LLU;
int8_t x384 = -1;
static volatile uint16_t x392 = 60U;
int16_t x395 = 910;
int16_t x398 = -1;
volatile int32_t x406 = INT32_MAX;
uint32_t x408 = 57U;
int16_t x411 = -1;
volatile uint32_t x431 = 16117245U;
volatile uint64_t t87 = 2492260LLU;
static int32_t x448 = INT32_MIN;
uint16_t x452 = 1553U;
int64_t x465 = INT64_MAX;
static volatile int64_t x475 = 56511LL;
int32_t x476 = INT32_MIN;
uint32_t x480 = 3U;
static volatile uint32_t t96 = 1125U;
int32_t x484 = INT32_MIN;
int64_t x487 = 16977739117993542LL;
static int8_t x493 = INT8_MIN;
volatile uint64_t x502 = 3LLU;
int16_t x507 = INT16_MIN;
int32_t x510 = INT32_MIN;
int8_t x514 = 28;
static uint32_t x515 = 171380U;
uint64_t x521 = 1LLU;
uint64_t x530 = 0LLU;
uint64_t x532 = UINT64_MAX;
int16_t x534 = INT16_MIN;
int8_t x535 = -1;
static uint64_t t109 = 39LLU;
int8_t x537 = -13;
volatile int16_t x540 = -9979;
static uint16_t x551 = UINT16_MAX;
int8_t x558 = INT8_MIN;
static volatile uint64_t x559 = 2137098398102408612LLU;
static int16_t x562 = INT16_MIN;
volatile int64_t t114 = 3951271701739870LL;
int16_t x565 = INT16_MAX;
int8_t x582 = -1;
int16_t x617 = INT16_MAX;
volatile int16_t x633 = -1;
int8_t x642 = 1;
int8_t x648 = -1;
static int8_t x656 = -1;
uint64_t x659 = 0LLU;
int64_t x661 = -1LL;
int32_t x663 = -1067;
volatile int16_t x665 = INT16_MIN;
static uint64_t x694 = 240456315LLU;
uint64_t t137 = 730171LLU;
uint64_t x697 = 332500009815269LLU;
volatile uint64_t t138 = 2344133971402454380LLU;
int64_t x706 = -1LL;
int8_t x711 = -1;
static volatile int8_t x721 = INT8_MIN;
volatile int64_t x726 = 15LL;
int64_t t145 = -111LL;
int16_t x729 = 0;
volatile int8_t x730 = -5;
int16_t x732 = INT16_MAX;
static int16_t x745 = INT16_MIN;
static volatile uint8_t x746 = 106U;
static int32_t t149 = -76108829;
volatile uint32_t t151 = 126U;
static volatile uint32_t x764 = UINT32_MAX;
volatile uint64_t x770 = UINT64_MAX;
int64_t x774 = INT64_MIN;
static uint8_t x775 = UINT8_MAX;
uint64_t t155 = 4146989311LLU;
uint64_t x780 = 408941LLU;
uint64_t x785 = 99840LLU;
volatile int16_t x786 = -1;
uint16_t x793 = 221U;
volatile uint8_t x796 = UINT8_MAX;
volatile int32_t x800 = INT32_MIN;
static uint32_t t162 = 30U;
static uint64_t x822 = 386678916LLU;
int8_t x825 = INT8_MAX;
static uint8_t x830 = UINT8_MAX;
static uint16_t x833 = 9U;
uint16_t x834 = UINT16_MAX;
static uint8_t x839 = UINT8_MAX;
static uint16_t x840 = UINT16_MAX;
int8_t x847 = INT8_MAX;
int64_t x850 = INT64_MAX;
static int64_t t174 = -663509LL;
volatile int32_t x878 = -1;
int8_t x879 = -7;
volatile int64_t t175 = -6849418970877539LL;
static volatile int8_t x890 = INT8_MIN;
volatile int8_t x895 = 29;
uint64_t x899 = UINT64_MAX;
uint32_t x900 = 60611U;
uint64_t t180 = 60997591LLU;
volatile int16_t x909 = -6938;
static int16_t x913 = INT16_MIN;
int16_t x916 = -1;
static uint64_t t182 = 69653956247LLU;
static uint64_t x919 = 1338764422354109992LLU;
volatile uint64_t t183 = 3669599649152LLU;
volatile int64_t t184 = -101578LL;
uint16_t x929 = UINT16_MAX;
uint64_t x932 = 1023140LLU;
uint64_t t186 = 580040LLU;
int16_t x933 = INT16_MIN;
volatile uint16_t x936 = 28389U;
static uint8_t x939 = 1U;
static volatile int16_t x940 = -15528;
int64_t x948 = -231LL;
volatile int16_t x951 = INT16_MAX;
volatile uint64_t x959 = 7493905572LLU;
int32_t x960 = INT32_MIN;
uint64_t t193 = 64431492118LLU;
volatile uint64_t x963 = UINT64_MAX;
uint64_t t194 = 18102244627LLU;
volatile int64_t x971 = 2520941597825907LL;
int64_t t197 = -70656959LL;
static int16_t x978 = -67;
static int16_t x979 = -1;
int64_t x982 = -1LL;


void f0(void) {
    	static uint32_t x5 = UINT32_MAX;
	static uint16_t x6 = 0U;
	volatile int8_t x7 = 5;
	static uint16_t x8 = 5U;
	uint32_t t0 = 13534014U;

    t0 = (x5&((x6&x7)*x8));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x10 = -1LL;
	volatile int32_t x11 = 6022263;
	int32_t x12 = 738;
	volatile int64_t t1 = 22028641359860LL;

    t1 = (x9&((x10&x11)*x12));

    if (t1 != 14LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MIN;
	static int16_t x14 = INT16_MIN;
	static uint64_t x16 = UINT64_MAX;
	uint64_t t2 = 35049LLU;

    t2 = (x13&((x14&x15)*x16));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int8_t x17 = 0;
	int64_t x18 = INT64_MIN;
	int32_t x19 = INT32_MAX;
	volatile int64_t t3 = 573000897235273615LL;

    t3 = (x17&((x18&x19)*x20));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x21 = UINT8_MAX;
	uint64_t x22 = 53LLU;
	int16_t x23 = -1;
	int64_t x24 = INT64_MIN;
	uint64_t t4 = 6938998939418039761LLU;

    t4 = (x21&((x22&x23)*x24));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = -1;
	int32_t x26 = 69874;
	int64_t x27 = -45356LL;
	uint64_t x28 = 7LLU;
	uint64_t t5 = 7668185920LLU;

    t5 = (x25&((x26&x27)*x28));

    if (t5 != 460208LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x35 = INT8_MAX;
	uint64_t t6 = 195405751452761713LLU;

    t6 = (x33&((x34&x35)*x36));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x37 = -1;
	uint16_t x38 = UINT16_MAX;
	int16_t x39 = -1;
	static int8_t x40 = -1;
	volatile int32_t t7 = 3881;

    t7 = (x37&((x38&x39)*x40));

    if (t7 != -65535) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x41 = 218264401294LLU;
	int8_t x43 = INT8_MAX;
	uint64_t x44 = 358661180663LLU;

    t8 = (x41&((x42&x43)*x44));

    if (t8 != 71161631872LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x45 = INT16_MIN;
	uint64_t x47 = 2260663LLU;
	static volatile uint64_t x48 = UINT64_MAX;
	volatile uint64_t t9 = 27029LLU;

    t9 = (x45&((x46&x47)*x48));

    if (t9 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x50 = 370067217U;
	uint8_t x51 = 1U;
	int16_t x52 = INT16_MAX;

    t10 = (x49&((x50&x51)*x52));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x53 = INT64_MIN;
	uint32_t x54 = 33U;
	uint8_t x55 = UINT8_MAX;
	int16_t x56 = 0;

    t11 = (x53&((x54&x55)*x56));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x58 = -1;
	volatile int32_t x59 = -1;
	volatile int64_t t12 = -7945435LL;

    t12 = (x57&((x58&x59)*x60));

    if (t12 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x61 = UINT16_MAX;
	uint32_t x62 = 8U;
	volatile int32_t x63 = -258966364;
	static int8_t x64 = -1;
	volatile uint32_t t13 = 63026540U;

    t13 = (x61&((x62&x63)*x64));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x65 = UINT32_MAX;
	int64_t x66 = INT64_MIN;
	uint64_t x67 = UINT64_MAX;
	int32_t x68 = INT32_MIN;

    t14 = (x65&((x66&x67)*x68));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x73 = INT32_MIN;
	int64_t x74 = -1LL;
	volatile uint8_t x76 = 1U;
	int64_t t15 = 868219278LL;

    t15 = (x73&((x74&x75)*x76));

    if (t15 != -2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x81 = 37U;
	volatile int8_t x82 = INT8_MAX;
	int16_t x84 = -1;

    t16 = (x81&((x82&x83)*x84));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x85 = INT16_MAX;
	static int16_t x86 = 10;
	int16_t x88 = INT16_MIN;
	int64_t t17 = 943911099818LL;

    t17 = (x85&((x86&x87)*x88));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x93 = 19976LLU;
	int64_t x95 = 970965126780LL;
	volatile uint64_t t18 = 812852738323083328LLU;

    t18 = (x93&((x94&x95)*x96));

    if (t18 != 16384LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x97 = -6983;
	volatile uint8_t x98 = UINT8_MAX;
	static int32_t x99 = -16;
	uint32_t x100 = 1890U;
	volatile uint32_t t19 = 2802U;

    t19 = (x97&((x98&x99)*x100));

    if (t19 != 450720U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x101 = INT64_MIN;
	static int32_t x102 = -2;
	static int32_t x104 = -1;
	volatile int64_t t20 = -11626LL;

    t20 = (x101&((x102&x103)*x104));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x105 = -1LL;
	static int16_t x106 = 65;
	volatile int16_t x107 = -5;
	static volatile int64_t x108 = 5988949816709LL;
	int64_t t21 = -116735696LL;

    t21 = (x105&((x106&x107)*x108));

    if (t21 != 389281738086085LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x109 = UINT32_MAX;
	int32_t x110 = INT32_MIN;
	volatile int8_t x111 = 3;
	uint32_t t22 = 463203766U;

    t22 = (x109&((x110&x111)*x112));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x113 = UINT16_MAX;
	volatile uint16_t x114 = 5754U;
	volatile int64_t x116 = INT64_MAX;
	int64_t t23 = -2985884532LL;

    t23 = (x113&((x114&x115)*x116));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x117 = UINT8_MAX;
	static int16_t x118 = INT16_MIN;
	uint8_t x119 = 53U;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t24 = 351269951U;

    t24 = (x117&((x118&x119)*x120));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x125 = 14U;
	uint32_t x127 = 2876647U;
	uint8_t x128 = 2U;
	uint32_t t25 = 3U;

    t25 = (x125&((x126&x127)*x128));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x130 = 0;
	uint16_t x131 = 49U;
	int16_t x132 = INT16_MIN;
	int32_t t26 = -1;

    t26 = (x129&((x130&x131)*x132));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x137 = 441LLU;
	int16_t x140 = 93;
	volatile uint64_t t27 = 21967301561582LLU;

    t27 = (x137&((x138&x139)*x140));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x141 = -1;
	int32_t x142 = INT32_MIN;
	volatile uint16_t x143 = UINT16_MAX;
	int64_t x144 = INT64_MAX;
	volatile int64_t t28 = 9608586LL;

    t28 = (x141&((x142&x143)*x144));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x154 = 1;
	int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MIN;
	static volatile int32_t t29 = 236;

    t29 = (x153&((x154&x155)*x156));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x158 = 5U;
	int16_t x159 = -3;
	int8_t x160 = -1;

    t30 = (x157&((x158&x159)*x160));

    if (t30 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x161 = 358178;
	volatile uint32_t x162 = 355406U;
	int8_t x164 = -1;
	volatile uint32_t t31 = 176U;

    t31 = (x161&((x162&x163)*x164));

    if (t31 != 358178U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x169 = INT32_MAX;
	int64_t x171 = 463831761086091LL;
	int8_t x172 = INT8_MIN;
	volatile int64_t t32 = 141474891536556841LL;

    t32 = (x169&((x170&x171)*x172));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x173 = 0;
	uint64_t x174 = 16813531426704LLU;
	volatile int16_t x175 = -57;
	int8_t x176 = INT8_MAX;
	static uint64_t t33 = 481250421838LLU;

    t33 = (x173&((x174&x175)*x176));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x177 = INT16_MIN;
	static int16_t x178 = 16191;
	static int16_t x179 = INT16_MIN;
	volatile int16_t x180 = -1;
	volatile int32_t t34 = -1;

    t34 = (x177&((x178&x179)*x180));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x181 = 248413789U;
	int8_t x182 = -7;
	int8_t x183 = INT8_MIN;
	static volatile uint32_t t35 = 750U;

    t35 = (x181&((x182&x183)*x184));

    if (t35 != 12288U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x185 = INT8_MIN;
	uint8_t x186 = UINT8_MAX;
	uint32_t x187 = 477261U;
	uint32_t t36 = 519623U;

    t36 = (x185&((x186&x187)*x188));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x189 = -11978;
	int8_t x191 = -57;
	int32_t t37 = 760;

    t37 = (x189&((x190&x191)*x192));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x193 = -1;
	int16_t x194 = INT16_MAX;
	volatile int16_t x196 = INT16_MAX;
	static volatile int64_t t38 = 155843997494996LL;

    t38 = (x193&((x194&x195)*x196));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x197 = INT32_MAX;
	volatile int32_t x198 = -1;
	uint16_t x199 = 0U;
	int32_t x200 = -1;

    t39 = (x197&((x198&x199)*x200));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint8_t x202 = UINT8_MAX;
	int8_t x204 = INT8_MIN;

    t40 = (x201&((x202&x203)*x204));

    if (t40 != 4294965376U) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	int8_t x215 = INT8_MIN;
	uint64_t x216 = 11566LLU;

    t41 = (x213&((x214&x215)*x216));

    if (t41 != 1480448LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x217 = INT64_MAX;
	uint16_t x218 = 3017U;
	volatile uint32_t x219 = 43U;
	int32_t x220 = -44702061;
	volatile int64_t t42 = -1LL;

    t42 = (x217&((x218&x219)*x220));

    if (t42 != 3892648747LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x221 = -15;
	static int8_t x222 = 1;
	int8_t x223 = -1;
	int32_t x224 = -475155;
	static int32_t t43 = -1;

    t43 = (x221&((x222&x223)*x224));

    if (t43 != -475167) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x225 = 21202U;
	int16_t x226 = INT16_MIN;
	int8_t x227 = -1;
	int8_t x228 = INT8_MIN;
	static int32_t t44 = -273475;

    t44 = (x225&((x226&x227)*x228));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x229 = 48U;
	int16_t x232 = INT16_MIN;
	int64_t t45 = 0LL;

    t45 = (x229&((x230&x231)*x232));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x237 = 15592U;
	static volatile int16_t x238 = INT16_MAX;
	int16_t x239 = -1;
	static int16_t x240 = INT16_MAX;
	volatile int32_t t46 = -1;

    t46 = (x237&((x238&x239)*x240));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x241 = -3;
	uint32_t x242 = 46236U;
	volatile int8_t x243 = INT8_MIN;
	volatile uint32_t t47 = 518846682U;

    t47 = (x241&((x242&x243)*x244));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x245 = INT8_MIN;
	volatile uint8_t x246 = 2U;
	static int8_t x247 = -3;

    t48 = (x245&((x246&x247)*x248));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x253 = INT16_MIN;
	int16_t x254 = INT16_MIN;
	int8_t x255 = INT8_MIN;
	volatile int32_t t49 = -6168;

    t49 = (x253&((x254&x255)*x256));

    if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x258 = UINT16_MAX;
	volatile int64_t x259 = 5447LL;
	int64_t x260 = -2030288737LL;
	volatile int64_t t50 = -69494100495723LL;

    t50 = (x257&((x258&x259)*x260));

    if (t50 != -11058982780928LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x261 = 10435917913LLU;
	volatile int16_t x262 = -42;
	int16_t x263 = INT16_MIN;
	static int16_t x264 = -2416;

    t51 = (x261&((x262&x263)*x264));

    if (t51 != 67108864LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x266 = 12324U;
	static uint64_t x267 = 4503775149784768297LLU;
	volatile int16_t x268 = INT16_MAX;
	uint64_t t52 = 54255313LLU;

    t52 = (x265&((x266&x267)*x268));

    if (t52 != 167552LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x269 = UINT32_MAX;

    t53 = (x269&((x270&x271)*x272));

    if (t53 != 2147483393LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x273 = UINT32_MAX;
	static volatile uint32_t x274 = 456698U;
	volatile uint32_t x275 = 186162492U;
	int16_t x276 = 7516;
	volatile uint32_t t54 = 38075991U;

    t54 = (x273&((x274&x275)*x276));

    if (t54 != 287111200U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x277 = INT8_MAX;
	uint8_t x278 = 10U;
	int16_t x280 = INT16_MIN;
	volatile uint64_t t55 = 15056838978237LLU;

    t55 = (x277&((x278&x279)*x280));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x281 = UINT8_MAX;
	static uint8_t x283 = 22U;
	volatile uint64_t t56 = 41847016521645194LLU;

    t56 = (x281&((x282&x283)*x284));

    if (t56 != 128LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x286 = -1;
	int8_t x288 = 0;
	volatile uint64_t t57 = 362290417LLU;

    t57 = (x285&((x286&x287)*x288));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x289 = INT64_MAX;
	volatile int8_t x290 = INT8_MAX;
	int32_t x291 = 3263;
	volatile uint64_t x292 = 7454LLU;
	volatile uint64_t t58 = 0LLU;

    t58 = (x289&((x290&x291)*x292));

    if (t58 != 469602LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x295 = INT32_MAX;
	int64_t x296 = 5501792LL;
	volatile int64_t t59 = 6885472432LL;

    t59 = (x293&((x294&x295)*x296));

    if (t59 != 96LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x297 = -1;
	static int64_t x298 = -1LL;
	uint8_t x300 = 23U;
	static int64_t t60 = 60LL;

    t60 = (x297&((x298&x299)*x300));

    if (t60 != -6976487990895809689LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x302 = INT16_MIN;
	volatile uint32_t x303 = UINT32_MAX;
	int8_t x304 = INT8_MIN;
	volatile uint32_t t61 = 26091U;

    t61 = (x301&((x302&x303)*x304));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x306 = 60685781435391LLU;
	int32_t x307 = -363;
	volatile uint64_t t62 = 3978856LLU;

    t62 = (x305&((x306&x307)*x308));

    if (t62 != 16458192387646521344LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x314 = INT8_MIN;
	int8_t x316 = -1;
	int32_t t63 = 32368974;

    t63 = (x313&((x314&x315)*x316));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x317 = INT8_MAX;
	int64_t x318 = INT64_MIN;
	int64_t x319 = INT64_MAX;
	volatile int32_t x320 = -1;

    t64 = (x317&((x318&x319)*x320));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x321 = INT16_MAX;
	volatile uint32_t x322 = 92U;
	uint32_t x323 = UINT32_MAX;
	volatile uint32_t t65 = 363427U;

    t65 = (x321&((x322&x323)*x324));

    if (t65 != 26432U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x325 = 413LLU;
	int8_t x326 = 0;
	static int16_t x327 = INT16_MIN;
	int16_t x328 = -1;
	volatile uint64_t t66 = 709622908947448979LLU;

    t66 = (x325&((x326&x327)*x328));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x329 = 3201;
	int64_t x331 = -15056882560455LL;
	static int8_t x332 = INT8_MIN;
	int64_t t67 = 1LL;

    t67 = (x329&((x330&x331)*x332));

    if (t67 != 128LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x337 = -1LL;
	volatile int64_t x338 = -11233380498LL;
	uint16_t x340 = UINT16_MAX;
	int64_t t68 = -396LL;

    t68 = (x337&((x338&x339)*x340));

    if (t68 != 131070LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x341 = INT8_MIN;
	static uint8_t x342 = 52U;
	volatile int64_t x344 = INT64_MIN;
	int64_t t69 = -2930507204938364LL;

    t69 = (x341&((x342&x343)*x344));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x345 = 19;
	int8_t x347 = -7;
	uint8_t x348 = UINT8_MAX;
	int32_t t70 = -31;

    t70 = (x345&((x346&x347)*x348));

    if (t70 != 16) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x349 = UINT64_MAX;
	volatile uint8_t x351 = UINT8_MAX;
	volatile int32_t x352 = INT32_MAX;

    t71 = (x349&((x350&x351)*x352));

    if (t71 != 339302416226LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x357 = 3669U;
	uint32_t x358 = UINT32_MAX;
	uint8_t x359 = 80U;
	static int32_t x360 = 1;
	volatile uint32_t t72 = 166U;

    t72 = (x357&((x358&x359)*x360));

    if (t72 != 80U) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x361 = -1;
	static int32_t x362 = -1;
	int32_t x363 = INT32_MAX;
	volatile uint64_t t73 = 574823906139173861LLU;

    t73 = (x361&((x362&x363)*x364));

    if (t73 != 29429115898488LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x365 = 1057;
	volatile int32_t x367 = INT32_MIN;
	int16_t x368 = INT16_MIN;
	volatile uint32_t t74 = 5908U;

    t74 = (x365&((x366&x367)*x368));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x373 = INT32_MIN;
	volatile uint16_t x374 = 58U;
	uint64_t x376 = UINT64_MAX;

    t75 = (x373&((x374&x375)*x376));

    if (t75 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x377 = -577;
	int32_t x378 = 20;
	int16_t x380 = INT16_MIN;
	static uint64_t t76 = 2282911LLU;

    t76 = (x377&((x378&x379)*x380));

    if (t76 != 18446744073709027328LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x381 = 114;
	static int8_t x382 = INT8_MAX;
	uint32_t x383 = 57310276U;
	volatile uint32_t t77 = 373U;

    t77 = (x381&((x382&x383)*x384));

    if (t77 != 48U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x385 = INT32_MIN;
	int32_t x386 = INT32_MIN;
	uint32_t x387 = UINT32_MAX;
	volatile int32_t x388 = -1;
	static uint32_t t78 = 3825779U;

    t78 = (x385&((x386&x387)*x388));

    if (t78 != 2147483648U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x389 = -341529;
	uint16_t x390 = UINT16_MAX;
	int32_t x391 = INT32_MIN;
	volatile int32_t t79 = -1;

    t79 = (x389&((x390&x391)*x392));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x393 = 15;
	int32_t x394 = INT32_MAX;
	static volatile int16_t x396 = INT16_MAX;
	volatile int32_t t80 = 3;

    t80 = (x393&((x394&x395)*x396));

    if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x397 = 0;
	int32_t x399 = -64597;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t81 = 731;

    t81 = (x397&((x398&x399)*x400));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x405 = -434862688121116LL;
	static int32_t x407 = INT32_MIN;
	int64_t t82 = 16539348108LL;

    t82 = (x405&((x406&x407)*x408));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x409 = 114545U;
	int16_t x410 = -1;
	static volatile int16_t x412 = INT16_MIN;
	uint32_t t83 = 9U;

    t83 = (x409&((x410&x411)*x412));

    if (t83 != 32768U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x413 = UINT8_MAX;
	int32_t x414 = -1;
	uint64_t x415 = 784248898448600LLU;
	int8_t x416 = 11;
	volatile uint64_t t84 = 1201564LLU;

    t84 = (x413&((x414&x415)*x416));

    if (t84 != 72LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x417 = INT64_MIN;
	volatile int8_t x418 = INT8_MIN;
	volatile int16_t x419 = -896;
	uint8_t x420 = UINT8_MAX;
	int64_t t85 = INT64_MIN;

    t85 = (x417&((x418&x419)*x420));

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x429 = INT32_MAX;
	volatile int16_t x430 = 457;
	uint64_t x432 = 77458418798853LLU;
	uint64_t t86 = 216249336428LLU;

    t86 = (x429&((x430&x431)*x432));

    if (t86 != 1855185389LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x433 = 145U;
	volatile uint64_t x434 = 269931449113LLU;
	uint16_t x435 = 2U;
	int16_t x436 = -149;

    t87 = (x433&((x434&x435)*x436));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x437 = INT32_MAX;
	static int8_t x438 = INT8_MIN;
	uint32_t x439 = UINT32_MAX;
	volatile int32_t x440 = INT32_MAX;
	volatile uint32_t t88 = 5U;

    t88 = (x437&((x438&x439)*x440));

    if (t88 != 128U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x441 = INT32_MIN;
	int32_t x442 = INT32_MIN;
	int64_t x443 = 2455773836025LL;
	uint8_t x444 = 27U;
	volatile int64_t t89 = 74257808LL;

    t89 = (x441&((x442&x443)*x444));

    if (t89 != 66273492860928LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x445 = -28364339;
	int32_t x446 = 22977809;
	static volatile uint32_t x447 = UINT32_MAX;
	volatile uint32_t t90 = 27154194U;

    t90 = (x445&((x446&x447)*x448));

    if (t90 != 2147483648U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x449 = 6LL;
	uint32_t x450 = 1872430193U;
	uint16_t x451 = 1U;
	static volatile int64_t t91 = 54466174846344977LL;

    t91 = (x449&((x450&x451)*x452));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x453 = -1;
	int64_t x454 = 3LL;
	uint8_t x455 = 0U;
	int8_t x456 = -12;
	volatile int64_t t92 = 2209LL;

    t92 = (x453&((x454&x455)*x456));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x466 = 16U;
	static int64_t x467 = INT64_MIN;
	int16_t x468 = 0;
	static int64_t t93 = 1216753963LL;

    t93 = (x465&((x466&x467)*x468));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x469 = INT8_MIN;
	uint32_t x470 = 44U;
	static uint8_t x471 = 5U;
	static int16_t x472 = -10;
	uint32_t t94 = 1U;

    t94 = (x469&((x470&x471)*x472));

    if (t94 != 4294967168U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x473 = UINT8_MAX;
	int8_t x474 = INT8_MIN;
	static volatile int64_t t95 = 836681401647282453LL;

    t95 = (x473&((x474&x475)*x476));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x477 = 766922482U;
	int8_t x478 = -1;
	int16_t x479 = INT16_MIN;

    t96 = (x477&((x478&x479)*x480));

    if (t96 != 766902272U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x481 = INT64_MAX;
	uint32_t x482 = UINT32_MAX;
	int32_t x483 = -2795;
	int64_t t97 = -5001806551388680LL;

    t97 = (x481&((x482&x483)*x484));

    if (t97 != 2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x485 = -1;
	uint32_t x486 = 7889U;
	uint32_t x488 = UINT32_MAX;
	volatile int64_t t98 = 2LL;

    t98 = (x485&((x486&x487)*x488));

    if (t98 != 33260226732480LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x489 = 536612U;
	int16_t x490 = 286;
	uint32_t x491 = 295285U;
	int16_t x492 = -1;
	volatile uint32_t t99 = 34504U;

    t99 = (x489&((x490&x491)*x492));

    if (t99 != 536612U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x494 = 274417684720991LL;
	uint64_t x495 = 3895399228425778LLU;
	static int8_t x496 = 0;
	static uint64_t t100 = 254709299LLU;

    t100 = (x493&((x494&x495)*x496));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x497 = INT8_MIN;
	uint32_t x498 = 927901U;
	int16_t x499 = INT16_MIN;
	volatile uint8_t x500 = 3U;
	static volatile uint32_t t101 = 1U;

    t101 = (x497&((x498&x499)*x500));

    if (t101 != 2752512U) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x501 = 1;
	uint8_t x503 = UINT8_MAX;
	int16_t x504 = INT16_MIN;
	uint64_t t102 = 124327771375587261LLU;

    t102 = (x501&((x502&x503)*x504));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x505 = INT8_MIN;
	static int32_t x506 = -1;
	static volatile int32_t x508 = 1509;
	volatile int32_t t103 = 1;

    t103 = (x505&((x506&x507)*x508));

    if (t103 != -49446912) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x509 = INT32_MAX;
	uint16_t x511 = 7U;
	static volatile uint64_t x512 = 13639125LLU;
	static volatile uint64_t t104 = 2LLU;

    t104 = (x509&((x510&x511)*x512));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x513 = INT8_MAX;
	int64_t x516 = -916583649LL;
	int64_t t105 = 1LL;

    t105 = (x513&((x514&x515)*x516));

    if (t105 != 108LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x517 = UINT64_MAX;
	int8_t x518 = INT8_MAX;
	uint64_t x519 = UINT64_MAX;
	uint8_t x520 = UINT8_MAX;
	static volatile uint64_t t106 = 305318986078627LLU;

    t106 = (x517&((x518&x519)*x520));

    if (t106 != 32385LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint64_t x522 = 4752669307424409LLU;
	uint64_t x523 = 35465478625455186LLU;
	int16_t x524 = INT16_MIN;
	uint64_t t107 = 0LLU;

    t107 = (x521&((x522&x523)*x524));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x529 = 2967LL;
	uint16_t x531 = UINT16_MAX;
	uint64_t t108 = 787303LLU;

    t108 = (x529&((x530&x531)*x532));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x533 = 15266490LLU;
	volatile int16_t x536 = INT16_MAX;

    t109 = (x533&((x534&x535)*x536));

    if (t109 != 32768LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x538 = 110;
	int64_t x539 = INT64_MIN;
	int64_t t110 = 4111368693037LL;

    t110 = (x537&((x538&x539)*x540));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x545 = 51676741393LL;
	int64_t x546 = -1LL;
	int64_t x547 = INT64_MIN;
	static uint64_t x548 = 109LLU;
	uint64_t t111 = 1LLU;

    t111 = (x545&((x546&x547)*x548));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x549 = INT16_MIN;
	static int8_t x550 = INT8_MAX;
	int16_t x552 = INT16_MIN;
	int32_t t112 = -16690242;

    t112 = (x549&((x550&x551)*x552));

    if (t112 != -4161536) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x557 = INT16_MIN;
	int8_t x560 = -1;
	volatile uint64_t t113 = 721117749823LLU;

    t113 = (x557&((x558&x559)*x560));

    if (t113 != 16309645675607130112LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x561 = -31LL;
	uint8_t x563 = UINT8_MAX;
	int16_t x564 = -1;

    t114 = (x561&((x562&x563)*x564));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x566 = 0U;
	int16_t x567 = -1;
	uint8_t x568 = UINT8_MAX;
	int32_t t115 = -12;

    t115 = (x565&((x566&x567)*x568));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x573 = INT64_MIN;
	int16_t x574 = INT16_MIN;
	static uint64_t x575 = UINT64_MAX;
	int32_t x576 = INT32_MIN;
	uint64_t t116 = 646150967910417948LLU;

    t116 = (x573&((x574&x575)*x576));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x577 = -1;
	int32_t x578 = -1;
	static uint16_t x579 = 52U;
	static volatile int8_t x580 = 12;
	volatile int32_t t117 = 6;

    t117 = (x577&((x578&x579)*x580));

    if (t117 != 624) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x581 = INT64_MIN;
	int8_t x583 = INT8_MIN;
	volatile uint64_t x584 = 0LLU;
	volatile uint64_t t118 = 57424767375648LLU;

    t118 = (x581&((x582&x583)*x584));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x585 = INT64_MAX;
	uint16_t x586 = 575U;
	int64_t x587 = -1LL;
	uint8_t x588 = 5U;
	int64_t t119 = 216478855LL;

    t119 = (x585&((x586&x587)*x588));

    if (t119 != 2875LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x589 = INT8_MIN;
	uint8_t x590 = UINT8_MAX;
	static volatile int64_t x591 = INT64_MIN;
	int8_t x592 = INT8_MIN;
	volatile int64_t t120 = 511464164975LL;

    t120 = (x589&((x590&x591)*x592));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x618 = INT64_MIN;
	uint64_t x619 = 31517365LLU;
	static uint64_t x620 = UINT64_MAX;
	static volatile uint64_t t121 = 731042336LLU;

    t121 = (x617&((x618&x619)*x620));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x621 = 68U;
	int16_t x622 = -1;
	static uint8_t x623 = UINT8_MAX;
	static int16_t x624 = -403;
	static volatile int32_t t122 = -55984;

    t122 = (x621&((x622&x623)*x624));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x625 = INT16_MIN;
	int8_t x626 = INT8_MIN;
	uint64_t x627 = 1714453382744728LLU;
	int32_t x628 = INT32_MIN;
	volatile uint64_t t123 = 3445204849909356LLU;

    t123 = (x625&((x626&x627)*x628));

    if (t123 != 6598225078498885632LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x629 = -1LL;
	volatile int16_t x630 = INT16_MAX;
	int64_t x631 = INT64_MIN;
	static int32_t x632 = 8174;
	volatile int64_t t124 = -13753880599LL;

    t124 = (x629&((x630&x631)*x632));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x634 = 1;
	static int64_t x635 = INT64_MIN;
	static uint8_t x636 = 2U;
	int64_t t125 = 11LL;

    t125 = (x633&((x634&x635)*x636));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x637 = 31U;
	int8_t x638 = INT8_MAX;
	static int64_t x639 = INT64_MAX;
	int8_t x640 = INT8_MAX;
	int64_t t126 = -58969533LL;

    t126 = (x637&((x638&x639)*x640));

    if (t126 != 1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x641 = INT16_MIN;
	static int32_t x643 = -571048;
	static uint64_t x644 = UINT64_MAX;
	uint64_t t127 = 1301266LLU;

    t127 = (x641&((x642&x643)*x644));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x645 = INT8_MAX;
	uint32_t x646 = 131115U;
	int16_t x647 = -39;
	uint32_t t128 = 85595U;

    t128 = (x645&((x646&x647)*x648));

    if (t128 != 119U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x649 = INT32_MAX;
	int64_t x650 = -1LL;
	uint16_t x651 = 7295U;
	int8_t x652 = INT8_MAX;
	static volatile int64_t t129 = 4480332133500494950LL;

    t129 = (x649&((x650&x651)*x652));

    if (t129 != 926465LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x653 = -208;
	static volatile int64_t x654 = INT64_MAX;
	uint16_t x655 = UINT16_MAX;
	volatile int64_t t130 = -372176546LL;

    t130 = (x653&((x654&x655)*x656));

    if (t130 != -65536LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x657 = INT64_MAX;
	static int16_t x658 = -1;
	static uint16_t x660 = 567U;
	uint64_t t131 = 1765102051LLU;

    t131 = (x657&((x658&x659)*x660));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x662 = -1;
	volatile uint64_t x664 = UINT64_MAX;
	static uint64_t t132 = 20460029327LLU;

    t132 = (x661&((x662&x663)*x664));

    if (t132 != 1067LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x666 = INT64_MIN;
	volatile int32_t x667 = 4035064;
	int32_t x668 = -1;
	int64_t t133 = -830815779474LL;

    t133 = (x665&((x666&x667)*x668));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x673 = 506263;
	int64_t x674 = INT64_MIN;
	static int16_t x675 = INT16_MAX;
	volatile int32_t x676 = INT32_MAX;
	int64_t t134 = -3546037LL;

    t134 = (x673&((x674&x675)*x676));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x677 = INT32_MIN;
	static uint32_t x678 = UINT32_MAX;
	uint32_t x679 = 22541196U;
	volatile int32_t x680 = INT32_MAX;
	volatile uint32_t t135 = 175U;

    t135 = (x677&((x678&x679)*x680));

    if (t135 != 2147483648U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x685 = 6505713LL;
	volatile int64_t x686 = -1LL;
	volatile int32_t x687 = -1;
	int32_t x688 = -1;
	int64_t t136 = -242213828071LL;

    t136 = (x685&((x686&x687)*x688));

    if (t136 != 1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x693 = 24254U;
	static int16_t x695 = -326;
	uint32_t x696 = 105593U;

    t137 = (x693&((x694&x695)*x696));

    if (t137 != 21546LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x698 = INT8_MIN;
	static uint32_t x699 = UINT32_MAX;
	volatile int64_t x700 = -15243LL;

    t138 = (x697&((x698&x699)*x700));

    if (t138 != 286285341721728LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int32_t x701 = INT32_MIN;
	uint64_t x702 = UINT64_MAX;
	int32_t x703 = -1;
	uint64_t x704 = UINT64_MAX;
	volatile uint64_t t139 = 0LLU;

    t139 = (x701&((x702&x703)*x704));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x705 = 855369867596LL;
	static int16_t x707 = 150;
	volatile uint32_t x708 = 1554U;
	static int64_t t140 = -2340206LL;

    t140 = (x705&((x706&x707)*x708));

    if (t140 != 12LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x709 = -32;
	uint16_t x710 = 2898U;
	int16_t x712 = 26;
	static volatile int32_t t141 = -827;

    t141 = (x709&((x710&x711)*x712));

    if (t141 != 75328) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x713 = INT8_MIN;
	volatile uint16_t x714 = 226U;
	uint32_t x715 = 76U;
	volatile int32_t x716 = INT32_MIN;
	volatile uint32_t t142 = 4604710U;

    t142 = (x713&((x714&x715)*x716));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x717 = -1LL;
	int16_t x718 = 26;
	int32_t x719 = INT32_MIN;
	int8_t x720 = INT8_MIN;
	static int64_t t143 = -8134254090LL;

    t143 = (x717&((x718&x719)*x720));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x722 = INT16_MIN;
	uint8_t x723 = 54U;
	int64_t x724 = 69719423657885LL;
	volatile int64_t t144 = -240258479998771LL;

    t144 = (x721&((x722&x723)*x724));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x725 = INT64_MIN;
	int32_t x727 = -1;
	int8_t x728 = 12;

    t145 = (x725&((x726&x727)*x728));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x731 = 23376U;
	volatile int32_t t146 = -6680;

    t146 = (x729&((x730&x731)*x732));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x737 = INT16_MAX;
	int32_t x738 = INT32_MIN;
	uint8_t x739 = 6U;
	int64_t x740 = INT64_MIN;
	static volatile int64_t t147 = -4559051606168LL;

    t147 = (x737&((x738&x739)*x740));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x741 = INT32_MIN;
	int8_t x742 = INT8_MIN;
	static int16_t x743 = INT16_MAX;
	volatile int16_t x744 = INT16_MIN;
	volatile int32_t t148 = INT32_MIN;

    t148 = (x741&((x742&x743)*x744));

    if (t148 != INT32_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x747 = 3;
	static volatile int8_t x748 = INT8_MAX;

    t149 = (x745&((x746&x747)*x748));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x749 = -16;
	int32_t x750 = INT32_MIN;
	static volatile int8_t x751 = 1;
	volatile uint64_t x752 = UINT64_MAX;
	volatile uint64_t t150 = 7066798759LLU;

    t150 = (x749&((x750&x751)*x752));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x753 = 5335U;
	uint32_t x754 = 1113549107U;
	int8_t x755 = 34;
	static int8_t x756 = INT8_MIN;

    t151 = (x753&((x754&x755)*x756));

    if (t151 != 1024U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x757 = -1;
	int32_t x758 = -1;
	int16_t x759 = 7825;
	int16_t x760 = INT16_MIN;
	int32_t t152 = 7207;

    t152 = (x757&((x758&x759)*x760));

    if (t152 != -256409600) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x761 = INT16_MIN;
	static int16_t x762 = -261;
	int8_t x763 = INT8_MAX;
	volatile uint32_t t153 = 9U;

    t153 = (x761&((x762&x763)*x764));

    if (t153 != 4294934528U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x769 = INT16_MAX;
	static int64_t x771 = INT64_MIN;
	int64_t x772 = INT64_MAX;
	uint64_t t154 = 1954323366540147942LLU;

    t154 = (x769&((x770&x771)*x772));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x773 = 33421861189LLU;
	int32_t x776 = -325308966;

    t155 = (x773&((x774&x775)*x776));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x777 = 565933885U;
	volatile uint8_t x778 = UINT8_MAX;
	int16_t x779 = INT16_MIN;
	volatile uint64_t t156 = 1463053LLU;

    t156 = (x777&((x778&x779)*x780));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x781 = INT32_MAX;
	uint16_t x782 = 5736U;
	volatile uint32_t x783 = 130847907U;
	static int16_t x784 = 0;
	volatile uint32_t t157 = 23350576U;

    t157 = (x781&((x782&x783)*x784));

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x787 = INT16_MAX;
	static volatile int32_t x788 = -524;
	uint64_t t158 = 135304533319732292LLU;

    t158 = (x785&((x786&x787)*x788));

    if (t158 != 512LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x789 = INT32_MAX;
	int16_t x790 = -1;
	static volatile int32_t x791 = -1;
	static uint32_t x792 = 60U;
	volatile uint32_t t159 = 32513U;

    t159 = (x789&((x790&x791)*x792));

    if (t159 != 2147483588U) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x794 = -496;
	int8_t x795 = 29;
	volatile int32_t t160 = -74;

    t160 = (x793&((x794&x795)*x796));

    if (t160 != 208) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x797 = UINT64_MAX;
	volatile int16_t x798 = 1;
	volatile int16_t x799 = -14857;
	uint64_t t161 = 325264LLU;

    t161 = (x797&((x798&x799)*x800));

    if (t161 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x801 = 10579368U;
	static uint32_t x802 = 29U;
	uint8_t x803 = 27U;
	int32_t x804 = INT32_MAX;

    t162 = (x801&((x802&x803)*x804));

    if (t162 != 10579360U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x809 = INT8_MAX;
	uint16_t x810 = 1U;
	int8_t x811 = INT8_MIN;
	uint32_t x812 = 16588342U;
	volatile uint32_t t163 = 4022879U;

    t163 = (x809&((x810&x811)*x812));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x821 = INT64_MIN;
	int8_t x823 = -1;
	volatile int8_t x824 = 0;
	volatile uint64_t t164 = 5225019639247LLU;

    t164 = (x821&((x822&x823)*x824));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x826 = INT32_MIN;
	uint8_t x827 = UINT8_MAX;
	static uint16_t x828 = UINT16_MAX;
	int32_t t165 = 0;

    t165 = (x825&((x826&x827)*x828));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x829 = -8222630303486628LL;
	int64_t x831 = -1LL;
	volatile uint32_t x832 = 0U;
	int64_t t166 = -142400785LL;

    t166 = (x829&((x830&x831)*x832));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x835 = INT8_MIN;
	static uint32_t x836 = 26284032U;
	volatile uint32_t t167 = 3760U;

    t167 = (x833&((x834&x835)*x836));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x837 = -1;
	int32_t x838 = -930740;
	int32_t t168 = -1;

    t168 = (x837&((x838&x839)*x840));

    if (t168 != 4980660) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x845 = 42;
	int64_t x846 = 90628167418199432LL;
	int32_t x848 = INT32_MAX;
	int64_t t169 = 697654LL;

    t169 = (x845&((x846&x847)*x848));

    if (t169 != 40LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x849 = 1U;
	volatile uint32_t x851 = 3U;
	volatile uint32_t x852 = 204915U;
	int64_t t170 = 82362LL;

    t170 = (x849&((x850&x851)*x852));

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x853 = UINT32_MAX;
	int8_t x854 = -1;
	int64_t x855 = -936511818233LL;
	int16_t x856 = -42;
	int64_t t171 = -6653446935587LL;

    t171 = (x853&((x854&x855)*x856));

    if (t171 != 185869018LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x861 = 814U;
	int8_t x862 = -1;
	static int64_t x863 = -1LL;
	static int16_t x864 = -5330;
	int64_t t172 = -14091312094292LL;

    t172 = (x861&((x862&x863)*x864));

    if (t172 != 2LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x869 = INT64_MAX;
	static int32_t x870 = -7;
	static volatile int32_t x871 = INT32_MAX;
	int64_t x872 = 50420805LL;
	volatile int64_t t173 = -463LL;

    t173 = (x869&((x870&x871)*x872));

    if (t173 != 108277853903551005LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x873 = -60875LL;
	uint32_t x874 = UINT32_MAX;
	int16_t x875 = INT16_MAX;
	uint8_t x876 = UINT8_MAX;

    t174 = (x873&((x874&x875)*x876));

    if (t174 != 8327681LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x877 = -1LL;
	int8_t x880 = -1;

    t175 = (x877&((x878&x879)*x880));

    if (t175 != 7LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x889 = UINT32_MAX;
	static volatile int8_t x891 = 0;
	int8_t x892 = 0;
	volatile uint32_t t176 = 5126U;

    t176 = (x889&((x890&x891)*x892));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x893 = -1LL;
	static volatile int16_t x894 = -1;
	uint16_t x896 = 207U;
	static int64_t t177 = -263852651LL;

    t177 = (x893&((x894&x895)*x896));

    if (t177 != 6003LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x897 = UINT8_MAX;
	static int32_t x898 = INT32_MIN;
	static volatile uint64_t t178 = 8859442690456080646LLU;

    t178 = (x897&((x898&x899)*x900));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x901 = -1;
	int64_t x902 = INT64_MIN;
	uint32_t x903 = 666315484U;
	static int32_t x904 = -9;
	int64_t t179 = -238790LL;

    t179 = (x901&((x902&x903)*x904));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x905 = -1;
	volatile int64_t x906 = -1LL;
	volatile uint64_t x907 = UINT64_MAX;
	uint64_t x908 = 27844278LLU;

    t180 = (x905&((x906&x907)*x908));

    if (t180 != 18446744073681707338LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x910 = UINT8_MAX;
	int16_t x911 = INT16_MAX;
	uint32_t x912 = 2822810U;
	uint32_t t181 = 1676805U;

    t181 = (x909&((x910&x911)*x912));

    if (t181 != 719815782U) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x914 = 40LL;
	volatile uint64_t x915 = UINT64_MAX;

    t182 = (x913&((x914&x915)*x916));

    if (t182 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x917 = UINT8_MAX;
	volatile int64_t x918 = -1LL;
	int64_t x920 = INT64_MIN;

    t183 = (x917&((x918&x919)*x920));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x921 = INT64_MAX;
	int16_t x922 = 9276;
	int8_t x923 = INT8_MIN;
	uint8_t x924 = 0U;

    t184 = (x921&((x922&x923)*x924));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x925 = UINT32_MAX;
	uint16_t x926 = 38U;
	static int16_t x927 = INT16_MAX;
	int16_t x928 = INT16_MIN;
	volatile uint32_t t185 = 311239U;

    t185 = (x925&((x926&x927)*x928));

    if (t185 != 4293722112U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x930 = INT32_MAX;
	uint8_t x931 = 15U;

    t186 = (x929&((x930&x931)*x932));

    if (t186 != 11676LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x934 = 4U;
	volatile uint16_t x935 = 0U;
	int32_t t187 = -8619;

    t187 = (x933&((x934&x935)*x936));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x937 = 31445843311743954LLU;
	uint32_t x938 = 44373609U;
	volatile uint64_t t188 = 0LLU;

    t188 = (x937&((x938&x939)*x940));

    if (t188 != 4030874448LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int64_t x941 = INT64_MIN;
	uint64_t x942 = 138564208207LLU;
	int8_t x943 = INT8_MAX;
	static int8_t x944 = INT8_MIN;
	uint64_t t189 = 118LLU;

    t189 = (x941&((x942&x943)*x944));

    if (t189 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x945 = -1;
	static volatile int32_t x946 = INT32_MAX;
	static volatile int8_t x947 = INT8_MIN;
	volatile int64_t t190 = -632LL;

    t190 = (x945&((x946&x947)*x948));

    if (t190 != -496068693120LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x949 = INT16_MAX;
	static int32_t x950 = INT32_MIN;
	int8_t x952 = -5;
	int32_t t191 = -505022026;

    t191 = (x949&((x950&x951)*x952));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x953 = 11354207582654LL;
	int8_t x954 = INT8_MAX;
	static uint32_t x955 = 2U;
	int32_t x956 = -1;
	static volatile int64_t t192 = 12374056250565LL;

    t192 = (x953&((x954&x955)*x956));

    if (t192 != 2609019326LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x957 = 45;
	volatile int16_t x958 = -1477;

    t193 = (x957&((x958&x959)*x960));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x961 = 8468258055826265LL;
	int32_t x962 = 85511;
	int16_t x964 = -1;

    t194 = (x961&((x962&x963)*x964));

    if (t194 != 8468258055823705LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x965 = INT32_MIN;
	int32_t x966 = INT32_MAX;
	uint8_t x967 = UINT8_MAX;
	uint8_t x968 = 23U;
	static volatile int32_t t195 = 0;

    t195 = (x965&((x966&x967)*x968));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x969 = 12682052LL;
	int64_t x970 = INT64_MAX;
	uint8_t x972 = 4U;
	static int64_t t196 = 412513915349LL;

    t196 = (x969&((x970&x971)*x972));

    if (t196 != 12583236LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x973 = INT64_MIN;
	static uint8_t x974 = UINT8_MAX;
	int16_t x975 = INT16_MIN;
	uint8_t x976 = 38U;

    t197 = (x973&((x974&x975)*x976));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x977 = 15501U;
	uint16_t x980 = 1052U;
	volatile uint32_t t198 = 58U;

    t198 = (x977&((x978&x979)*x980));

    if (t198 != 11404U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x981 = INT64_MIN;
	int8_t x983 = INT8_MAX;
	int16_t x984 = INT16_MAX;
	static volatile int64_t t199 = -13747952783132928LL;

    t199 = (x981&((x982&x983)*x984));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

